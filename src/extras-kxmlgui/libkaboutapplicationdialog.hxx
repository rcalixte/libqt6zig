#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKABOUTAPPLICATIONDIALOG_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKABOUTAPPLICATIONDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAboutApplicationDialog so that we can call protected methods
class VirtualKAboutApplicationDialog final : public KAboutApplicationDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKAboutApplicationDialog = true;

    // Virtual class public types (including callbacks)
    using KAboutApplicationDialog_MetaObject_Callback = QMetaObject* (*)();
    using KAboutApplicationDialog_Metacast_Callback = void* (*)(KAboutApplicationDialog*, const char*);
    using KAboutApplicationDialog_Metacall_Callback = int (*)(KAboutApplicationDialog*, int, int, void**);
    using KAboutApplicationDialog_SetVisible_Callback = void (*)(KAboutApplicationDialog*, bool);
    using KAboutApplicationDialog_SizeHint_Callback = QSize* (*)();
    using KAboutApplicationDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KAboutApplicationDialog_Open_Callback = void (*)();
    using KAboutApplicationDialog_Exec_Callback = int (*)();
    using KAboutApplicationDialog_Done_Callback = void (*)(KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_Accept_Callback = void (*)();
    using KAboutApplicationDialog_Reject_Callback = void (*)();
    using KAboutApplicationDialog_KeyPressEvent_Callback = void (*)(KAboutApplicationDialog*, QKeyEvent*);
    using KAboutApplicationDialog_CloseEvent_Callback = void (*)(KAboutApplicationDialog*, QCloseEvent*);
    using KAboutApplicationDialog_ShowEvent_Callback = void (*)(KAboutApplicationDialog*, QShowEvent*);
    using KAboutApplicationDialog_ResizeEvent_Callback = void (*)(KAboutApplicationDialog*, QResizeEvent*);
    using KAboutApplicationDialog_ContextMenuEvent_Callback = void (*)(KAboutApplicationDialog*, QContextMenuEvent*);
    using KAboutApplicationDialog_EventFilter_Callback = bool (*)(KAboutApplicationDialog*, QObject*, QEvent*);
    using KAboutApplicationDialog_DevType_Callback = int (*)();
    using KAboutApplicationDialog_HeightForWidth_Callback = int (*)(const KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_HasHeightForWidth_Callback = bool (*)();
    using KAboutApplicationDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KAboutApplicationDialog_Event_Callback = bool (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_MousePressEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_MouseReleaseEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_MouseDoubleClickEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_MouseMoveEvent_Callback = void (*)(KAboutApplicationDialog*, QMouseEvent*);
    using KAboutApplicationDialog_WheelEvent_Callback = void (*)(KAboutApplicationDialog*, QWheelEvent*);
    using KAboutApplicationDialog_KeyReleaseEvent_Callback = void (*)(KAboutApplicationDialog*, QKeyEvent*);
    using KAboutApplicationDialog_FocusInEvent_Callback = void (*)(KAboutApplicationDialog*, QFocusEvent*);
    using KAboutApplicationDialog_FocusOutEvent_Callback = void (*)(KAboutApplicationDialog*, QFocusEvent*);
    using KAboutApplicationDialog_EnterEvent_Callback = void (*)(KAboutApplicationDialog*, QEnterEvent*);
    using KAboutApplicationDialog_LeaveEvent_Callback = void (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_PaintEvent_Callback = void (*)(KAboutApplicationDialog*, QPaintEvent*);
    using KAboutApplicationDialog_MoveEvent_Callback = void (*)(KAboutApplicationDialog*, QMoveEvent*);
    using KAboutApplicationDialog_TabletEvent_Callback = void (*)(KAboutApplicationDialog*, QTabletEvent*);
    using KAboutApplicationDialog_ActionEvent_Callback = void (*)(KAboutApplicationDialog*, QActionEvent*);
    using KAboutApplicationDialog_DragEnterEvent_Callback = void (*)(KAboutApplicationDialog*, QDragEnterEvent*);
    using KAboutApplicationDialog_DragMoveEvent_Callback = void (*)(KAboutApplicationDialog*, QDragMoveEvent*);
    using KAboutApplicationDialog_DragLeaveEvent_Callback = void (*)(KAboutApplicationDialog*, QDragLeaveEvent*);
    using KAboutApplicationDialog_DropEvent_Callback = void (*)(KAboutApplicationDialog*, QDropEvent*);
    using KAboutApplicationDialog_HideEvent_Callback = void (*)(KAboutApplicationDialog*, QHideEvent*);
    using KAboutApplicationDialog_NativeEvent_Callback = bool (*)(KAboutApplicationDialog*, libqt_string, void*, intptr_t*);
    using KAboutApplicationDialog_ChangeEvent_Callback = void (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_Metric_Callback = int (*)(const KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_InitPainter_Callback = void (*)(const KAboutApplicationDialog*, QPainter*);
    using KAboutApplicationDialog_Redirected_Callback = QPaintDevice* (*)(const KAboutApplicationDialog*, QPoint*);
    using KAboutApplicationDialog_SharedPainter_Callback = QPainter* (*)();
    using KAboutApplicationDialog_InputMethodEvent_Callback = void (*)(KAboutApplicationDialog*, QInputMethodEvent*);
    using KAboutApplicationDialog_InputMethodQuery_Callback = QVariant* (*)(const KAboutApplicationDialog*, int);
    using KAboutApplicationDialog_FocusNextPrevChild_Callback = bool (*)(KAboutApplicationDialog*, bool);
    using KAboutApplicationDialog_TimerEvent_Callback = void (*)(KAboutApplicationDialog*, QTimerEvent*);
    using KAboutApplicationDialog_ChildEvent_Callback = void (*)(KAboutApplicationDialog*, QChildEvent*);
    using KAboutApplicationDialog_CustomEvent_Callback = void (*)(KAboutApplicationDialog*, QEvent*);
    using KAboutApplicationDialog_ConnectNotify_Callback = void (*)(KAboutApplicationDialog*, QMetaMethod*);
    using KAboutApplicationDialog_DisconnectNotify_Callback = void (*)(KAboutApplicationDialog*, QMetaMethod*);
    using KAboutApplicationDialog_AdjustPosition_Callback = void (*)(KAboutApplicationDialog*, QWidget*);
    using KAboutApplicationDialog_UpdateMicroFocus_Callback = void (*)();
    using KAboutApplicationDialog_Create_Callback = void (*)();
    using KAboutApplicationDialog_Destroy_Callback = void (*)();
    using KAboutApplicationDialog_FocusNextChild_Callback = bool (*)();
    using KAboutApplicationDialog_FocusPreviousChild_Callback = bool (*)();
    using KAboutApplicationDialog_Sender_Callback = QObject* (*)();
    using KAboutApplicationDialog_SenderSignalIndex_Callback = int (*)();
    using KAboutApplicationDialog_Receivers_Callback = int (*)(const KAboutApplicationDialog*, const char*);
    using KAboutApplicationDialog_IsSignalConnected_Callback = bool (*)(const KAboutApplicationDialog*, QMetaMethod*);
    using KAboutApplicationDialog_GetDecodedMetricF_Callback = double (*)(const KAboutApplicationDialog*, int, int);

  protected:
    // Instance callback storage
    KAboutApplicationDialog_MetaObject_Callback kaboutapplicationdialog_metaobject_callback = nullptr;
    KAboutApplicationDialog_Metacast_Callback kaboutapplicationdialog_metacast_callback = nullptr;
    KAboutApplicationDialog_Metacall_Callback kaboutapplicationdialog_metacall_callback = nullptr;
    KAboutApplicationDialog_SetVisible_Callback kaboutapplicationdialog_setvisible_callback = nullptr;
    KAboutApplicationDialog_SizeHint_Callback kaboutapplicationdialog_sizehint_callback = nullptr;
    KAboutApplicationDialog_MinimumSizeHint_Callback kaboutapplicationdialog_minimumsizehint_callback = nullptr;
    KAboutApplicationDialog_Open_Callback kaboutapplicationdialog_open_callback = nullptr;
    KAboutApplicationDialog_Exec_Callback kaboutapplicationdialog_exec_callback = nullptr;
    KAboutApplicationDialog_Done_Callback kaboutapplicationdialog_done_callback = nullptr;
    KAboutApplicationDialog_Accept_Callback kaboutapplicationdialog_accept_callback = nullptr;
    KAboutApplicationDialog_Reject_Callback kaboutapplicationdialog_reject_callback = nullptr;
    KAboutApplicationDialog_KeyPressEvent_Callback kaboutapplicationdialog_keypressevent_callback = nullptr;
    KAboutApplicationDialog_CloseEvent_Callback kaboutapplicationdialog_closeevent_callback = nullptr;
    KAboutApplicationDialog_ShowEvent_Callback kaboutapplicationdialog_showevent_callback = nullptr;
    KAboutApplicationDialog_ResizeEvent_Callback kaboutapplicationdialog_resizeevent_callback = nullptr;
    KAboutApplicationDialog_ContextMenuEvent_Callback kaboutapplicationdialog_contextmenuevent_callback = nullptr;
    KAboutApplicationDialog_EventFilter_Callback kaboutapplicationdialog_eventfilter_callback = nullptr;
    KAboutApplicationDialog_DevType_Callback kaboutapplicationdialog_devtype_callback = nullptr;
    KAboutApplicationDialog_HeightForWidth_Callback kaboutapplicationdialog_heightforwidth_callback = nullptr;
    KAboutApplicationDialog_HasHeightForWidth_Callback kaboutapplicationdialog_hasheightforwidth_callback = nullptr;
    KAboutApplicationDialog_PaintEngine_Callback kaboutapplicationdialog_paintengine_callback = nullptr;
    KAboutApplicationDialog_Event_Callback kaboutapplicationdialog_event_callback = nullptr;
    KAboutApplicationDialog_MousePressEvent_Callback kaboutapplicationdialog_mousepressevent_callback = nullptr;
    KAboutApplicationDialog_MouseReleaseEvent_Callback kaboutapplicationdialog_mousereleaseevent_callback = nullptr;
    KAboutApplicationDialog_MouseDoubleClickEvent_Callback kaboutapplicationdialog_mousedoubleclickevent_callback = nullptr;
    KAboutApplicationDialog_MouseMoveEvent_Callback kaboutapplicationdialog_mousemoveevent_callback = nullptr;
    KAboutApplicationDialog_WheelEvent_Callback kaboutapplicationdialog_wheelevent_callback = nullptr;
    KAboutApplicationDialog_KeyReleaseEvent_Callback kaboutapplicationdialog_keyreleaseevent_callback = nullptr;
    KAboutApplicationDialog_FocusInEvent_Callback kaboutapplicationdialog_focusinevent_callback = nullptr;
    KAboutApplicationDialog_FocusOutEvent_Callback kaboutapplicationdialog_focusoutevent_callback = nullptr;
    KAboutApplicationDialog_EnterEvent_Callback kaboutapplicationdialog_enterevent_callback = nullptr;
    KAboutApplicationDialog_LeaveEvent_Callback kaboutapplicationdialog_leaveevent_callback = nullptr;
    KAboutApplicationDialog_PaintEvent_Callback kaboutapplicationdialog_paintevent_callback = nullptr;
    KAboutApplicationDialog_MoveEvent_Callback kaboutapplicationdialog_moveevent_callback = nullptr;
    KAboutApplicationDialog_TabletEvent_Callback kaboutapplicationdialog_tabletevent_callback = nullptr;
    KAboutApplicationDialog_ActionEvent_Callback kaboutapplicationdialog_actionevent_callback = nullptr;
    KAboutApplicationDialog_DragEnterEvent_Callback kaboutapplicationdialog_dragenterevent_callback = nullptr;
    KAboutApplicationDialog_DragMoveEvent_Callback kaboutapplicationdialog_dragmoveevent_callback = nullptr;
    KAboutApplicationDialog_DragLeaveEvent_Callback kaboutapplicationdialog_dragleaveevent_callback = nullptr;
    KAboutApplicationDialog_DropEvent_Callback kaboutapplicationdialog_dropevent_callback = nullptr;
    KAboutApplicationDialog_HideEvent_Callback kaboutapplicationdialog_hideevent_callback = nullptr;
    KAboutApplicationDialog_NativeEvent_Callback kaboutapplicationdialog_nativeevent_callback = nullptr;
    KAboutApplicationDialog_ChangeEvent_Callback kaboutapplicationdialog_changeevent_callback = nullptr;
    KAboutApplicationDialog_Metric_Callback kaboutapplicationdialog_metric_callback = nullptr;
    KAboutApplicationDialog_InitPainter_Callback kaboutapplicationdialog_initpainter_callback = nullptr;
    KAboutApplicationDialog_Redirected_Callback kaboutapplicationdialog_redirected_callback = nullptr;
    KAboutApplicationDialog_SharedPainter_Callback kaboutapplicationdialog_sharedpainter_callback = nullptr;
    KAboutApplicationDialog_InputMethodEvent_Callback kaboutapplicationdialog_inputmethodevent_callback = nullptr;
    KAboutApplicationDialog_InputMethodQuery_Callback kaboutapplicationdialog_inputmethodquery_callback = nullptr;
    KAboutApplicationDialog_FocusNextPrevChild_Callback kaboutapplicationdialog_focusnextprevchild_callback = nullptr;
    KAboutApplicationDialog_TimerEvent_Callback kaboutapplicationdialog_timerevent_callback = nullptr;
    KAboutApplicationDialog_ChildEvent_Callback kaboutapplicationdialog_childevent_callback = nullptr;
    KAboutApplicationDialog_CustomEvent_Callback kaboutapplicationdialog_customevent_callback = nullptr;
    KAboutApplicationDialog_ConnectNotify_Callback kaboutapplicationdialog_connectnotify_callback = nullptr;
    KAboutApplicationDialog_DisconnectNotify_Callback kaboutapplicationdialog_disconnectnotify_callback = nullptr;
    KAboutApplicationDialog_AdjustPosition_Callback kaboutapplicationdialog_adjustposition_callback = nullptr;
    KAboutApplicationDialog_UpdateMicroFocus_Callback kaboutapplicationdialog_updatemicrofocus_callback = nullptr;
    KAboutApplicationDialog_Create_Callback kaboutapplicationdialog_create_callback = nullptr;
    KAboutApplicationDialog_Destroy_Callback kaboutapplicationdialog_destroy_callback = nullptr;
    KAboutApplicationDialog_FocusNextChild_Callback kaboutapplicationdialog_focusnextchild_callback = nullptr;
    KAboutApplicationDialog_FocusPreviousChild_Callback kaboutapplicationdialog_focuspreviouschild_callback = nullptr;
    KAboutApplicationDialog_Sender_Callback kaboutapplicationdialog_sender_callback = nullptr;
    KAboutApplicationDialog_SenderSignalIndex_Callback kaboutapplicationdialog_sendersignalindex_callback = nullptr;
    KAboutApplicationDialog_Receivers_Callback kaboutapplicationdialog_receivers_callback = nullptr;
    KAboutApplicationDialog_IsSignalConnected_Callback kaboutapplicationdialog_issignalconnected_callback = nullptr;
    KAboutApplicationDialog_GetDecodedMetricF_Callback kaboutapplicationdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kaboutapplicationdialog_metaobject_isbase = false;
    mutable bool kaboutapplicationdialog_metacast_isbase = false;
    mutable bool kaboutapplicationdialog_metacall_isbase = false;
    mutable bool kaboutapplicationdialog_setvisible_isbase = false;
    mutable bool kaboutapplicationdialog_sizehint_isbase = false;
    mutable bool kaboutapplicationdialog_minimumsizehint_isbase = false;
    mutable bool kaboutapplicationdialog_open_isbase = false;
    mutable bool kaboutapplicationdialog_exec_isbase = false;
    mutable bool kaboutapplicationdialog_done_isbase = false;
    mutable bool kaboutapplicationdialog_accept_isbase = false;
    mutable bool kaboutapplicationdialog_reject_isbase = false;
    mutable bool kaboutapplicationdialog_keypressevent_isbase = false;
    mutable bool kaboutapplicationdialog_closeevent_isbase = false;
    mutable bool kaboutapplicationdialog_showevent_isbase = false;
    mutable bool kaboutapplicationdialog_resizeevent_isbase = false;
    mutable bool kaboutapplicationdialog_contextmenuevent_isbase = false;
    mutable bool kaboutapplicationdialog_eventfilter_isbase = false;
    mutable bool kaboutapplicationdialog_devtype_isbase = false;
    mutable bool kaboutapplicationdialog_heightforwidth_isbase = false;
    mutable bool kaboutapplicationdialog_hasheightforwidth_isbase = false;
    mutable bool kaboutapplicationdialog_paintengine_isbase = false;
    mutable bool kaboutapplicationdialog_event_isbase = false;
    mutable bool kaboutapplicationdialog_mousepressevent_isbase = false;
    mutable bool kaboutapplicationdialog_mousereleaseevent_isbase = false;
    mutable bool kaboutapplicationdialog_mousedoubleclickevent_isbase = false;
    mutable bool kaboutapplicationdialog_mousemoveevent_isbase = false;
    mutable bool kaboutapplicationdialog_wheelevent_isbase = false;
    mutable bool kaboutapplicationdialog_keyreleaseevent_isbase = false;
    mutable bool kaboutapplicationdialog_focusinevent_isbase = false;
    mutable bool kaboutapplicationdialog_focusoutevent_isbase = false;
    mutable bool kaboutapplicationdialog_enterevent_isbase = false;
    mutable bool kaboutapplicationdialog_leaveevent_isbase = false;
    mutable bool kaboutapplicationdialog_paintevent_isbase = false;
    mutable bool kaboutapplicationdialog_moveevent_isbase = false;
    mutable bool kaboutapplicationdialog_tabletevent_isbase = false;
    mutable bool kaboutapplicationdialog_actionevent_isbase = false;
    mutable bool kaboutapplicationdialog_dragenterevent_isbase = false;
    mutable bool kaboutapplicationdialog_dragmoveevent_isbase = false;
    mutable bool kaboutapplicationdialog_dragleaveevent_isbase = false;
    mutable bool kaboutapplicationdialog_dropevent_isbase = false;
    mutable bool kaboutapplicationdialog_hideevent_isbase = false;
    mutable bool kaboutapplicationdialog_nativeevent_isbase = false;
    mutable bool kaboutapplicationdialog_changeevent_isbase = false;
    mutable bool kaboutapplicationdialog_metric_isbase = false;
    mutable bool kaboutapplicationdialog_initpainter_isbase = false;
    mutable bool kaboutapplicationdialog_redirected_isbase = false;
    mutable bool kaboutapplicationdialog_sharedpainter_isbase = false;
    mutable bool kaboutapplicationdialog_inputmethodevent_isbase = false;
    mutable bool kaboutapplicationdialog_inputmethodquery_isbase = false;
    mutable bool kaboutapplicationdialog_focusnextprevchild_isbase = false;
    mutable bool kaboutapplicationdialog_timerevent_isbase = false;
    mutable bool kaboutapplicationdialog_childevent_isbase = false;
    mutable bool kaboutapplicationdialog_customevent_isbase = false;
    mutable bool kaboutapplicationdialog_connectnotify_isbase = false;
    mutable bool kaboutapplicationdialog_disconnectnotify_isbase = false;
    mutable bool kaboutapplicationdialog_adjustposition_isbase = false;
    mutable bool kaboutapplicationdialog_updatemicrofocus_isbase = false;
    mutable bool kaboutapplicationdialog_create_isbase = false;
    mutable bool kaboutapplicationdialog_destroy_isbase = false;
    mutable bool kaboutapplicationdialog_focusnextchild_isbase = false;
    mutable bool kaboutapplicationdialog_focuspreviouschild_isbase = false;
    mutable bool kaboutapplicationdialog_sender_isbase = false;
    mutable bool kaboutapplicationdialog_sendersignalindex_isbase = false;
    mutable bool kaboutapplicationdialog_receivers_isbase = false;
    mutable bool kaboutapplicationdialog_issignalconnected_isbase = false;
    mutable bool kaboutapplicationdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKAboutApplicationDialog(const KAboutData& aboutData, KAboutApplicationDialog::Options opts) : KAboutApplicationDialog(aboutData, opts) {};
    VirtualKAboutApplicationDialog(const KAboutData& aboutData) : KAboutApplicationDialog(aboutData) {};
    VirtualKAboutApplicationDialog(const KAboutData& aboutData, KAboutApplicationDialog::Options opts, QWidget* parent) : KAboutApplicationDialog(aboutData, opts, parent) {};
    VirtualKAboutApplicationDialog(const KAboutData& aboutData, QWidget* parent) : KAboutApplicationDialog(aboutData, parent) {};

    // Callback setters
    inline void setKAboutApplicationDialog_MetaObject_Callback(KAboutApplicationDialog_MetaObject_Callback cb) { kaboutapplicationdialog_metaobject_callback = cb; }
    inline void setKAboutApplicationDialog_Metacast_Callback(KAboutApplicationDialog_Metacast_Callback cb) { kaboutapplicationdialog_metacast_callback = cb; }
    inline void setKAboutApplicationDialog_Metacall_Callback(KAboutApplicationDialog_Metacall_Callback cb) { kaboutapplicationdialog_metacall_callback = cb; }
    inline void setKAboutApplicationDialog_SetVisible_Callback(KAboutApplicationDialog_SetVisible_Callback cb) { kaboutapplicationdialog_setvisible_callback = cb; }
    inline void setKAboutApplicationDialog_SizeHint_Callback(KAboutApplicationDialog_SizeHint_Callback cb) { kaboutapplicationdialog_sizehint_callback = cb; }
    inline void setKAboutApplicationDialog_MinimumSizeHint_Callback(KAboutApplicationDialog_MinimumSizeHint_Callback cb) { kaboutapplicationdialog_minimumsizehint_callback = cb; }
    inline void setKAboutApplicationDialog_Open_Callback(KAboutApplicationDialog_Open_Callback cb) { kaboutapplicationdialog_open_callback = cb; }
    inline void setKAboutApplicationDialog_Exec_Callback(KAboutApplicationDialog_Exec_Callback cb) { kaboutapplicationdialog_exec_callback = cb; }
    inline void setKAboutApplicationDialog_Done_Callback(KAboutApplicationDialog_Done_Callback cb) { kaboutapplicationdialog_done_callback = cb; }
    inline void setKAboutApplicationDialog_Accept_Callback(KAboutApplicationDialog_Accept_Callback cb) { kaboutapplicationdialog_accept_callback = cb; }
    inline void setKAboutApplicationDialog_Reject_Callback(KAboutApplicationDialog_Reject_Callback cb) { kaboutapplicationdialog_reject_callback = cb; }
    inline void setKAboutApplicationDialog_KeyPressEvent_Callback(KAboutApplicationDialog_KeyPressEvent_Callback cb) { kaboutapplicationdialog_keypressevent_callback = cb; }
    inline void setKAboutApplicationDialog_CloseEvent_Callback(KAboutApplicationDialog_CloseEvent_Callback cb) { kaboutapplicationdialog_closeevent_callback = cb; }
    inline void setKAboutApplicationDialog_ShowEvent_Callback(KAboutApplicationDialog_ShowEvent_Callback cb) { kaboutapplicationdialog_showevent_callback = cb; }
    inline void setKAboutApplicationDialog_ResizeEvent_Callback(KAboutApplicationDialog_ResizeEvent_Callback cb) { kaboutapplicationdialog_resizeevent_callback = cb; }
    inline void setKAboutApplicationDialog_ContextMenuEvent_Callback(KAboutApplicationDialog_ContextMenuEvent_Callback cb) { kaboutapplicationdialog_contextmenuevent_callback = cb; }
    inline void setKAboutApplicationDialog_EventFilter_Callback(KAboutApplicationDialog_EventFilter_Callback cb) { kaboutapplicationdialog_eventfilter_callback = cb; }
    inline void setKAboutApplicationDialog_DevType_Callback(KAboutApplicationDialog_DevType_Callback cb) { kaboutapplicationdialog_devtype_callback = cb; }
    inline void setKAboutApplicationDialog_HeightForWidth_Callback(KAboutApplicationDialog_HeightForWidth_Callback cb) { kaboutapplicationdialog_heightforwidth_callback = cb; }
    inline void setKAboutApplicationDialog_HasHeightForWidth_Callback(KAboutApplicationDialog_HasHeightForWidth_Callback cb) { kaboutapplicationdialog_hasheightforwidth_callback = cb; }
    inline void setKAboutApplicationDialog_PaintEngine_Callback(KAboutApplicationDialog_PaintEngine_Callback cb) { kaboutapplicationdialog_paintengine_callback = cb; }
    inline void setKAboutApplicationDialog_Event_Callback(KAboutApplicationDialog_Event_Callback cb) { kaboutapplicationdialog_event_callback = cb; }
    inline void setKAboutApplicationDialog_MousePressEvent_Callback(KAboutApplicationDialog_MousePressEvent_Callback cb) { kaboutapplicationdialog_mousepressevent_callback = cb; }
    inline void setKAboutApplicationDialog_MouseReleaseEvent_Callback(KAboutApplicationDialog_MouseReleaseEvent_Callback cb) { kaboutapplicationdialog_mousereleaseevent_callback = cb; }
    inline void setKAboutApplicationDialog_MouseDoubleClickEvent_Callback(KAboutApplicationDialog_MouseDoubleClickEvent_Callback cb) { kaboutapplicationdialog_mousedoubleclickevent_callback = cb; }
    inline void setKAboutApplicationDialog_MouseMoveEvent_Callback(KAboutApplicationDialog_MouseMoveEvent_Callback cb) { kaboutapplicationdialog_mousemoveevent_callback = cb; }
    inline void setKAboutApplicationDialog_WheelEvent_Callback(KAboutApplicationDialog_WheelEvent_Callback cb) { kaboutapplicationdialog_wheelevent_callback = cb; }
    inline void setKAboutApplicationDialog_KeyReleaseEvent_Callback(KAboutApplicationDialog_KeyReleaseEvent_Callback cb) { kaboutapplicationdialog_keyreleaseevent_callback = cb; }
    inline void setKAboutApplicationDialog_FocusInEvent_Callback(KAboutApplicationDialog_FocusInEvent_Callback cb) { kaboutapplicationdialog_focusinevent_callback = cb; }
    inline void setKAboutApplicationDialog_FocusOutEvent_Callback(KAboutApplicationDialog_FocusOutEvent_Callback cb) { kaboutapplicationdialog_focusoutevent_callback = cb; }
    inline void setKAboutApplicationDialog_EnterEvent_Callback(KAboutApplicationDialog_EnterEvent_Callback cb) { kaboutapplicationdialog_enterevent_callback = cb; }
    inline void setKAboutApplicationDialog_LeaveEvent_Callback(KAboutApplicationDialog_LeaveEvent_Callback cb) { kaboutapplicationdialog_leaveevent_callback = cb; }
    inline void setKAboutApplicationDialog_PaintEvent_Callback(KAboutApplicationDialog_PaintEvent_Callback cb) { kaboutapplicationdialog_paintevent_callback = cb; }
    inline void setKAboutApplicationDialog_MoveEvent_Callback(KAboutApplicationDialog_MoveEvent_Callback cb) { kaboutapplicationdialog_moveevent_callback = cb; }
    inline void setKAboutApplicationDialog_TabletEvent_Callback(KAboutApplicationDialog_TabletEvent_Callback cb) { kaboutapplicationdialog_tabletevent_callback = cb; }
    inline void setKAboutApplicationDialog_ActionEvent_Callback(KAboutApplicationDialog_ActionEvent_Callback cb) { kaboutapplicationdialog_actionevent_callback = cb; }
    inline void setKAboutApplicationDialog_DragEnterEvent_Callback(KAboutApplicationDialog_DragEnterEvent_Callback cb) { kaboutapplicationdialog_dragenterevent_callback = cb; }
    inline void setKAboutApplicationDialog_DragMoveEvent_Callback(KAboutApplicationDialog_DragMoveEvent_Callback cb) { kaboutapplicationdialog_dragmoveevent_callback = cb; }
    inline void setKAboutApplicationDialog_DragLeaveEvent_Callback(KAboutApplicationDialog_DragLeaveEvent_Callback cb) { kaboutapplicationdialog_dragleaveevent_callback = cb; }
    inline void setKAboutApplicationDialog_DropEvent_Callback(KAboutApplicationDialog_DropEvent_Callback cb) { kaboutapplicationdialog_dropevent_callback = cb; }
    inline void setKAboutApplicationDialog_HideEvent_Callback(KAboutApplicationDialog_HideEvent_Callback cb) { kaboutapplicationdialog_hideevent_callback = cb; }
    inline void setKAboutApplicationDialog_NativeEvent_Callback(KAboutApplicationDialog_NativeEvent_Callback cb) { kaboutapplicationdialog_nativeevent_callback = cb; }
    inline void setKAboutApplicationDialog_ChangeEvent_Callback(KAboutApplicationDialog_ChangeEvent_Callback cb) { kaboutapplicationdialog_changeevent_callback = cb; }
    inline void setKAboutApplicationDialog_Metric_Callback(KAboutApplicationDialog_Metric_Callback cb) { kaboutapplicationdialog_metric_callback = cb; }
    inline void setKAboutApplicationDialog_InitPainter_Callback(KAboutApplicationDialog_InitPainter_Callback cb) { kaboutapplicationdialog_initpainter_callback = cb; }
    inline void setKAboutApplicationDialog_Redirected_Callback(KAboutApplicationDialog_Redirected_Callback cb) { kaboutapplicationdialog_redirected_callback = cb; }
    inline void setKAboutApplicationDialog_SharedPainter_Callback(KAboutApplicationDialog_SharedPainter_Callback cb) { kaboutapplicationdialog_sharedpainter_callback = cb; }
    inline void setKAboutApplicationDialog_InputMethodEvent_Callback(KAboutApplicationDialog_InputMethodEvent_Callback cb) { kaboutapplicationdialog_inputmethodevent_callback = cb; }
    inline void setKAboutApplicationDialog_InputMethodQuery_Callback(KAboutApplicationDialog_InputMethodQuery_Callback cb) { kaboutapplicationdialog_inputmethodquery_callback = cb; }
    inline void setKAboutApplicationDialog_FocusNextPrevChild_Callback(KAboutApplicationDialog_FocusNextPrevChild_Callback cb) { kaboutapplicationdialog_focusnextprevchild_callback = cb; }
    inline void setKAboutApplicationDialog_TimerEvent_Callback(KAboutApplicationDialog_TimerEvent_Callback cb) { kaboutapplicationdialog_timerevent_callback = cb; }
    inline void setKAboutApplicationDialog_ChildEvent_Callback(KAboutApplicationDialog_ChildEvent_Callback cb) { kaboutapplicationdialog_childevent_callback = cb; }
    inline void setKAboutApplicationDialog_CustomEvent_Callback(KAboutApplicationDialog_CustomEvent_Callback cb) { kaboutapplicationdialog_customevent_callback = cb; }
    inline void setKAboutApplicationDialog_ConnectNotify_Callback(KAboutApplicationDialog_ConnectNotify_Callback cb) { kaboutapplicationdialog_connectnotify_callback = cb; }
    inline void setKAboutApplicationDialog_DisconnectNotify_Callback(KAboutApplicationDialog_DisconnectNotify_Callback cb) { kaboutapplicationdialog_disconnectnotify_callback = cb; }
    inline void setKAboutApplicationDialog_AdjustPosition_Callback(KAboutApplicationDialog_AdjustPosition_Callback cb) { kaboutapplicationdialog_adjustposition_callback = cb; }
    inline void setKAboutApplicationDialog_UpdateMicroFocus_Callback(KAboutApplicationDialog_UpdateMicroFocus_Callback cb) { kaboutapplicationdialog_updatemicrofocus_callback = cb; }
    inline void setKAboutApplicationDialog_Create_Callback(KAboutApplicationDialog_Create_Callback cb) { kaboutapplicationdialog_create_callback = cb; }
    inline void setKAboutApplicationDialog_Destroy_Callback(KAboutApplicationDialog_Destroy_Callback cb) { kaboutapplicationdialog_destroy_callback = cb; }
    inline void setKAboutApplicationDialog_FocusNextChild_Callback(KAboutApplicationDialog_FocusNextChild_Callback cb) { kaboutapplicationdialog_focusnextchild_callback = cb; }
    inline void setKAboutApplicationDialog_FocusPreviousChild_Callback(KAboutApplicationDialog_FocusPreviousChild_Callback cb) { kaboutapplicationdialog_focuspreviouschild_callback = cb; }
    inline void setKAboutApplicationDialog_Sender_Callback(KAboutApplicationDialog_Sender_Callback cb) { kaboutapplicationdialog_sender_callback = cb; }
    inline void setKAboutApplicationDialog_SenderSignalIndex_Callback(KAboutApplicationDialog_SenderSignalIndex_Callback cb) { kaboutapplicationdialog_sendersignalindex_callback = cb; }
    inline void setKAboutApplicationDialog_Receivers_Callback(KAboutApplicationDialog_Receivers_Callback cb) { kaboutapplicationdialog_receivers_callback = cb; }
    inline void setKAboutApplicationDialog_IsSignalConnected_Callback(KAboutApplicationDialog_IsSignalConnected_Callback cb) { kaboutapplicationdialog_issignalconnected_callback = cb; }
    inline void setKAboutApplicationDialog_GetDecodedMetricF_Callback(KAboutApplicationDialog_GetDecodedMetricF_Callback cb) { kaboutapplicationdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKAboutApplicationDialog_MetaObject_IsBase(bool value) const { kaboutapplicationdialog_metaobject_isbase = value; }
    inline void setKAboutApplicationDialog_Metacast_IsBase(bool value) const { kaboutapplicationdialog_metacast_isbase = value; }
    inline void setKAboutApplicationDialog_Metacall_IsBase(bool value) const { kaboutapplicationdialog_metacall_isbase = value; }
    inline void setKAboutApplicationDialog_SetVisible_IsBase(bool value) const { kaboutapplicationdialog_setvisible_isbase = value; }
    inline void setKAboutApplicationDialog_SizeHint_IsBase(bool value) const { kaboutapplicationdialog_sizehint_isbase = value; }
    inline void setKAboutApplicationDialog_MinimumSizeHint_IsBase(bool value) const { kaboutapplicationdialog_minimumsizehint_isbase = value; }
    inline void setKAboutApplicationDialog_Open_IsBase(bool value) const { kaboutapplicationdialog_open_isbase = value; }
    inline void setKAboutApplicationDialog_Exec_IsBase(bool value) const { kaboutapplicationdialog_exec_isbase = value; }
    inline void setKAboutApplicationDialog_Done_IsBase(bool value) const { kaboutapplicationdialog_done_isbase = value; }
    inline void setKAboutApplicationDialog_Accept_IsBase(bool value) const { kaboutapplicationdialog_accept_isbase = value; }
    inline void setKAboutApplicationDialog_Reject_IsBase(bool value) const { kaboutapplicationdialog_reject_isbase = value; }
    inline void setKAboutApplicationDialog_KeyPressEvent_IsBase(bool value) const { kaboutapplicationdialog_keypressevent_isbase = value; }
    inline void setKAboutApplicationDialog_CloseEvent_IsBase(bool value) const { kaboutapplicationdialog_closeevent_isbase = value; }
    inline void setKAboutApplicationDialog_ShowEvent_IsBase(bool value) const { kaboutapplicationdialog_showevent_isbase = value; }
    inline void setKAboutApplicationDialog_ResizeEvent_IsBase(bool value) const { kaboutapplicationdialog_resizeevent_isbase = value; }
    inline void setKAboutApplicationDialog_ContextMenuEvent_IsBase(bool value) const { kaboutapplicationdialog_contextmenuevent_isbase = value; }
    inline void setKAboutApplicationDialog_EventFilter_IsBase(bool value) const { kaboutapplicationdialog_eventfilter_isbase = value; }
    inline void setKAboutApplicationDialog_DevType_IsBase(bool value) const { kaboutapplicationdialog_devtype_isbase = value; }
    inline void setKAboutApplicationDialog_HeightForWidth_IsBase(bool value) const { kaboutapplicationdialog_heightforwidth_isbase = value; }
    inline void setKAboutApplicationDialog_HasHeightForWidth_IsBase(bool value) const { kaboutapplicationdialog_hasheightforwidth_isbase = value; }
    inline void setKAboutApplicationDialog_PaintEngine_IsBase(bool value) const { kaboutapplicationdialog_paintengine_isbase = value; }
    inline void setKAboutApplicationDialog_Event_IsBase(bool value) const { kaboutapplicationdialog_event_isbase = value; }
    inline void setKAboutApplicationDialog_MousePressEvent_IsBase(bool value) const { kaboutapplicationdialog_mousepressevent_isbase = value; }
    inline void setKAboutApplicationDialog_MouseReleaseEvent_IsBase(bool value) const { kaboutapplicationdialog_mousereleaseevent_isbase = value; }
    inline void setKAboutApplicationDialog_MouseDoubleClickEvent_IsBase(bool value) const { kaboutapplicationdialog_mousedoubleclickevent_isbase = value; }
    inline void setKAboutApplicationDialog_MouseMoveEvent_IsBase(bool value) const { kaboutapplicationdialog_mousemoveevent_isbase = value; }
    inline void setKAboutApplicationDialog_WheelEvent_IsBase(bool value) const { kaboutapplicationdialog_wheelevent_isbase = value; }
    inline void setKAboutApplicationDialog_KeyReleaseEvent_IsBase(bool value) const { kaboutapplicationdialog_keyreleaseevent_isbase = value; }
    inline void setKAboutApplicationDialog_FocusInEvent_IsBase(bool value) const { kaboutapplicationdialog_focusinevent_isbase = value; }
    inline void setKAboutApplicationDialog_FocusOutEvent_IsBase(bool value) const { kaboutapplicationdialog_focusoutevent_isbase = value; }
    inline void setKAboutApplicationDialog_EnterEvent_IsBase(bool value) const { kaboutapplicationdialog_enterevent_isbase = value; }
    inline void setKAboutApplicationDialog_LeaveEvent_IsBase(bool value) const { kaboutapplicationdialog_leaveevent_isbase = value; }
    inline void setKAboutApplicationDialog_PaintEvent_IsBase(bool value) const { kaboutapplicationdialog_paintevent_isbase = value; }
    inline void setKAboutApplicationDialog_MoveEvent_IsBase(bool value) const { kaboutapplicationdialog_moveevent_isbase = value; }
    inline void setKAboutApplicationDialog_TabletEvent_IsBase(bool value) const { kaboutapplicationdialog_tabletevent_isbase = value; }
    inline void setKAboutApplicationDialog_ActionEvent_IsBase(bool value) const { kaboutapplicationdialog_actionevent_isbase = value; }
    inline void setKAboutApplicationDialog_DragEnterEvent_IsBase(bool value) const { kaboutapplicationdialog_dragenterevent_isbase = value; }
    inline void setKAboutApplicationDialog_DragMoveEvent_IsBase(bool value) const { kaboutapplicationdialog_dragmoveevent_isbase = value; }
    inline void setKAboutApplicationDialog_DragLeaveEvent_IsBase(bool value) const { kaboutapplicationdialog_dragleaveevent_isbase = value; }
    inline void setKAboutApplicationDialog_DropEvent_IsBase(bool value) const { kaboutapplicationdialog_dropevent_isbase = value; }
    inline void setKAboutApplicationDialog_HideEvent_IsBase(bool value) const { kaboutapplicationdialog_hideevent_isbase = value; }
    inline void setKAboutApplicationDialog_NativeEvent_IsBase(bool value) const { kaboutapplicationdialog_nativeevent_isbase = value; }
    inline void setKAboutApplicationDialog_ChangeEvent_IsBase(bool value) const { kaboutapplicationdialog_changeevent_isbase = value; }
    inline void setKAboutApplicationDialog_Metric_IsBase(bool value) const { kaboutapplicationdialog_metric_isbase = value; }
    inline void setKAboutApplicationDialog_InitPainter_IsBase(bool value) const { kaboutapplicationdialog_initpainter_isbase = value; }
    inline void setKAboutApplicationDialog_Redirected_IsBase(bool value) const { kaboutapplicationdialog_redirected_isbase = value; }
    inline void setKAboutApplicationDialog_SharedPainter_IsBase(bool value) const { kaboutapplicationdialog_sharedpainter_isbase = value; }
    inline void setKAboutApplicationDialog_InputMethodEvent_IsBase(bool value) const { kaboutapplicationdialog_inputmethodevent_isbase = value; }
    inline void setKAboutApplicationDialog_InputMethodQuery_IsBase(bool value) const { kaboutapplicationdialog_inputmethodquery_isbase = value; }
    inline void setKAboutApplicationDialog_FocusNextPrevChild_IsBase(bool value) const { kaboutapplicationdialog_focusnextprevchild_isbase = value; }
    inline void setKAboutApplicationDialog_TimerEvent_IsBase(bool value) const { kaboutapplicationdialog_timerevent_isbase = value; }
    inline void setKAboutApplicationDialog_ChildEvent_IsBase(bool value) const { kaboutapplicationdialog_childevent_isbase = value; }
    inline void setKAboutApplicationDialog_CustomEvent_IsBase(bool value) const { kaboutapplicationdialog_customevent_isbase = value; }
    inline void setKAboutApplicationDialog_ConnectNotify_IsBase(bool value) const { kaboutapplicationdialog_connectnotify_isbase = value; }
    inline void setKAboutApplicationDialog_DisconnectNotify_IsBase(bool value) const { kaboutapplicationdialog_disconnectnotify_isbase = value; }
    inline void setKAboutApplicationDialog_AdjustPosition_IsBase(bool value) const { kaboutapplicationdialog_adjustposition_isbase = value; }
    inline void setKAboutApplicationDialog_UpdateMicroFocus_IsBase(bool value) const { kaboutapplicationdialog_updatemicrofocus_isbase = value; }
    inline void setKAboutApplicationDialog_Create_IsBase(bool value) const { kaboutapplicationdialog_create_isbase = value; }
    inline void setKAboutApplicationDialog_Destroy_IsBase(bool value) const { kaboutapplicationdialog_destroy_isbase = value; }
    inline void setKAboutApplicationDialog_FocusNextChild_IsBase(bool value) const { kaboutapplicationdialog_focusnextchild_isbase = value; }
    inline void setKAboutApplicationDialog_FocusPreviousChild_IsBase(bool value) const { kaboutapplicationdialog_focuspreviouschild_isbase = value; }
    inline void setKAboutApplicationDialog_Sender_IsBase(bool value) const { kaboutapplicationdialog_sender_isbase = value; }
    inline void setKAboutApplicationDialog_SenderSignalIndex_IsBase(bool value) const { kaboutapplicationdialog_sendersignalindex_isbase = value; }
    inline void setKAboutApplicationDialog_Receivers_IsBase(bool value) const { kaboutapplicationdialog_receivers_isbase = value; }
    inline void setKAboutApplicationDialog_IsSignalConnected_IsBase(bool value) const { kaboutapplicationdialog_issignalconnected_isbase = value; }
    inline void setKAboutApplicationDialog_GetDecodedMetricF_IsBase(bool value) const { kaboutapplicationdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kaboutapplicationdialog_metaobject_isbase) {
            kaboutapplicationdialog_metaobject_isbase = false;
            return KAboutApplicationDialog::metaObject();
        }
        auto metaobject_cb = kaboutapplicationdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KAboutApplicationDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kaboutapplicationdialog_metacast_isbase) {
            kaboutapplicationdialog_metacast_isbase = false;
            return KAboutApplicationDialog::qt_metacast(param1);
        }
        auto metacast_cb = kaboutapplicationdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kaboutapplicationdialog_metacall_isbase) {
            kaboutapplicationdialog_metacall_isbase = false;
            return KAboutApplicationDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kaboutapplicationdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kaboutapplicationdialog_setvisible_isbase) {
            kaboutapplicationdialog_setvisible_isbase = false;
            KAboutApplicationDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kaboutapplicationdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kaboutapplicationdialog_sizehint_isbase) {
            kaboutapplicationdialog_sizehint_isbase = false;
            return KAboutApplicationDialog::sizeHint();
        }
        auto sizehint_cb = kaboutapplicationdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KAboutApplicationDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kaboutapplicationdialog_minimumsizehint_isbase) {
            kaboutapplicationdialog_minimumsizehint_isbase = false;
            return KAboutApplicationDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kaboutapplicationdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KAboutApplicationDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kaboutapplicationdialog_open_isbase) {
            kaboutapplicationdialog_open_isbase = false;
            KAboutApplicationDialog::open();
            return;
        }
        auto open_cb = kaboutapplicationdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KAboutApplicationDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kaboutapplicationdialog_exec_isbase) {
            kaboutapplicationdialog_exec_isbase = false;
            return KAboutApplicationDialog::exec();
        }
        auto exec_cb = kaboutapplicationdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kaboutapplicationdialog_done_isbase) {
            kaboutapplicationdialog_done_isbase = false;
            KAboutApplicationDialog::done(param1);
            return;
        }
        auto done_cb = kaboutapplicationdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kaboutapplicationdialog_accept_isbase) {
            kaboutapplicationdialog_accept_isbase = false;
            KAboutApplicationDialog::accept();
            return;
        }
        auto accept_cb = kaboutapplicationdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KAboutApplicationDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kaboutapplicationdialog_reject_isbase) {
            kaboutapplicationdialog_reject_isbase = false;
            KAboutApplicationDialog::reject();
            return;
        }
        auto reject_cb = kaboutapplicationdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KAboutApplicationDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kaboutapplicationdialog_keypressevent_isbase) {
            kaboutapplicationdialog_keypressevent_isbase = false;
            KAboutApplicationDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kaboutapplicationdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kaboutapplicationdialog_closeevent_isbase) {
            kaboutapplicationdialog_closeevent_isbase = false;
            KAboutApplicationDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kaboutapplicationdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kaboutapplicationdialog_showevent_isbase) {
            kaboutapplicationdialog_showevent_isbase = false;
            KAboutApplicationDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kaboutapplicationdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kaboutapplicationdialog_resizeevent_isbase) {
            kaboutapplicationdialog_resizeevent_isbase = false;
            KAboutApplicationDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kaboutapplicationdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kaboutapplicationdialog_contextmenuevent_isbase) {
            kaboutapplicationdialog_contextmenuevent_isbase = false;
            KAboutApplicationDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kaboutapplicationdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kaboutapplicationdialog_eventfilter_isbase) {
            kaboutapplicationdialog_eventfilter_isbase = false;
            return KAboutApplicationDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kaboutapplicationdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAboutApplicationDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kaboutapplicationdialog_devtype_isbase) {
            kaboutapplicationdialog_devtype_isbase = false;
            return KAboutApplicationDialog::devType();
        }
        auto devtype_cb = kaboutapplicationdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kaboutapplicationdialog_heightforwidth_isbase) {
            kaboutapplicationdialog_heightforwidth_isbase = false;
            return KAboutApplicationDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kaboutapplicationdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kaboutapplicationdialog_hasheightforwidth_isbase) {
            kaboutapplicationdialog_hasheightforwidth_isbase = false;
            return KAboutApplicationDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kaboutapplicationdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KAboutApplicationDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kaboutapplicationdialog_paintengine_isbase) {
            kaboutapplicationdialog_paintengine_isbase = false;
            return KAboutApplicationDialog::paintEngine();
        }
        auto paintengine_cb = kaboutapplicationdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KAboutApplicationDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kaboutapplicationdialog_event_isbase) {
            kaboutapplicationdialog_event_isbase = false;
            return KAboutApplicationDialog::event(event);
        }
        auto event_cb = kaboutapplicationdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousepressevent_isbase) {
            kaboutapplicationdialog_mousepressevent_isbase = false;
            KAboutApplicationDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kaboutapplicationdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousereleaseevent_isbase) {
            kaboutapplicationdialog_mousereleaseevent_isbase = false;
            KAboutApplicationDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kaboutapplicationdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousedoubleclickevent_isbase) {
            kaboutapplicationdialog_mousedoubleclickevent_isbase = false;
            KAboutApplicationDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kaboutapplicationdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kaboutapplicationdialog_mousemoveevent_isbase) {
            kaboutapplicationdialog_mousemoveevent_isbase = false;
            KAboutApplicationDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kaboutapplicationdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kaboutapplicationdialog_wheelevent_isbase) {
            kaboutapplicationdialog_wheelevent_isbase = false;
            KAboutApplicationDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kaboutapplicationdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kaboutapplicationdialog_keyreleaseevent_isbase) {
            kaboutapplicationdialog_keyreleaseevent_isbase = false;
            KAboutApplicationDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kaboutapplicationdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kaboutapplicationdialog_focusinevent_isbase) {
            kaboutapplicationdialog_focusinevent_isbase = false;
            KAboutApplicationDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kaboutapplicationdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kaboutapplicationdialog_focusoutevent_isbase) {
            kaboutapplicationdialog_focusoutevent_isbase = false;
            KAboutApplicationDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kaboutapplicationdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kaboutapplicationdialog_enterevent_isbase) {
            kaboutapplicationdialog_enterevent_isbase = false;
            KAboutApplicationDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kaboutapplicationdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kaboutapplicationdialog_leaveevent_isbase) {
            kaboutapplicationdialog_leaveevent_isbase = false;
            KAboutApplicationDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kaboutapplicationdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kaboutapplicationdialog_paintevent_isbase) {
            kaboutapplicationdialog_paintevent_isbase = false;
            KAboutApplicationDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kaboutapplicationdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kaboutapplicationdialog_moveevent_isbase) {
            kaboutapplicationdialog_moveevent_isbase = false;
            KAboutApplicationDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kaboutapplicationdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kaboutapplicationdialog_tabletevent_isbase) {
            kaboutapplicationdialog_tabletevent_isbase = false;
            KAboutApplicationDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kaboutapplicationdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kaboutapplicationdialog_actionevent_isbase) {
            kaboutapplicationdialog_actionevent_isbase = false;
            KAboutApplicationDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kaboutapplicationdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kaboutapplicationdialog_dragenterevent_isbase) {
            kaboutapplicationdialog_dragenterevent_isbase = false;
            KAboutApplicationDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kaboutapplicationdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kaboutapplicationdialog_dragmoveevent_isbase) {
            kaboutapplicationdialog_dragmoveevent_isbase = false;
            KAboutApplicationDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kaboutapplicationdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kaboutapplicationdialog_dragleaveevent_isbase) {
            kaboutapplicationdialog_dragleaveevent_isbase = false;
            KAboutApplicationDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kaboutapplicationdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kaboutapplicationdialog_dropevent_isbase) {
            kaboutapplicationdialog_dropevent_isbase = false;
            KAboutApplicationDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kaboutapplicationdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kaboutapplicationdialog_hideevent_isbase) {
            kaboutapplicationdialog_hideevent_isbase = false;
            KAboutApplicationDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kaboutapplicationdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kaboutapplicationdialog_nativeevent_isbase) {
            kaboutapplicationdialog_nativeevent_isbase = false;
            return KAboutApplicationDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kaboutapplicationdialog_nativeevent_callback;
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
        return KAboutApplicationDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kaboutapplicationdialog_changeevent_isbase) {
            kaboutapplicationdialog_changeevent_isbase = false;
            KAboutApplicationDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kaboutapplicationdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kaboutapplicationdialog_metric_isbase) {
            kaboutapplicationdialog_metric_isbase = false;
            return KAboutApplicationDialog::metric(param1);
        }
        auto metric_cb = kaboutapplicationdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kaboutapplicationdialog_initpainter_isbase) {
            kaboutapplicationdialog_initpainter_isbase = false;
            KAboutApplicationDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kaboutapplicationdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kaboutapplicationdialog_redirected_isbase) {
            kaboutapplicationdialog_redirected_isbase = false;
            return KAboutApplicationDialog::redirected(offset);
        }
        auto redirected_cb = kaboutapplicationdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kaboutapplicationdialog_sharedpainter_isbase) {
            kaboutapplicationdialog_sharedpainter_isbase = false;
            return KAboutApplicationDialog::sharedPainter();
        }
        auto sharedpainter_cb = kaboutapplicationdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KAboutApplicationDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kaboutapplicationdialog_inputmethodevent_isbase) {
            kaboutapplicationdialog_inputmethodevent_isbase = false;
            KAboutApplicationDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kaboutapplicationdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kaboutapplicationdialog_inputmethodquery_isbase) {
            kaboutapplicationdialog_inputmethodquery_isbase = false;
            return KAboutApplicationDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kaboutapplicationdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KAboutApplicationDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kaboutapplicationdialog_focusnextprevchild_isbase) {
            kaboutapplicationdialog_focusnextprevchild_isbase = false;
            return KAboutApplicationDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kaboutapplicationdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kaboutapplicationdialog_timerevent_isbase) {
            kaboutapplicationdialog_timerevent_isbase = false;
            KAboutApplicationDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kaboutapplicationdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kaboutapplicationdialog_childevent_isbase) {
            kaboutapplicationdialog_childevent_isbase = false;
            KAboutApplicationDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kaboutapplicationdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kaboutapplicationdialog_customevent_isbase) {
            kaboutapplicationdialog_customevent_isbase = false;
            KAboutApplicationDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kaboutapplicationdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kaboutapplicationdialog_connectnotify_isbase) {
            kaboutapplicationdialog_connectnotify_isbase = false;
            KAboutApplicationDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kaboutapplicationdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kaboutapplicationdialog_disconnectnotify_isbase) {
            kaboutapplicationdialog_disconnectnotify_isbase = false;
            KAboutApplicationDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kaboutapplicationdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kaboutapplicationdialog_adjustposition_isbase) {
            kaboutapplicationdialog_adjustposition_isbase = false;
            KAboutApplicationDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kaboutapplicationdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KAboutApplicationDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kaboutapplicationdialog_updatemicrofocus_isbase) {
            kaboutapplicationdialog_updatemicrofocus_isbase = false;
            KAboutApplicationDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kaboutapplicationdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KAboutApplicationDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kaboutapplicationdialog_create_isbase) {
            kaboutapplicationdialog_create_isbase = false;
            KAboutApplicationDialog::create();
            return;
        }
        auto create_cb = kaboutapplicationdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KAboutApplicationDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kaboutapplicationdialog_destroy_isbase) {
            kaboutapplicationdialog_destroy_isbase = false;
            KAboutApplicationDialog::destroy();
            return;
        }
        auto destroy_cb = kaboutapplicationdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KAboutApplicationDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kaboutapplicationdialog_focusnextchild_isbase) {
            kaboutapplicationdialog_focusnextchild_isbase = false;
            return KAboutApplicationDialog::focusNextChild();
        }
        auto focusnextchild_cb = kaboutapplicationdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KAboutApplicationDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kaboutapplicationdialog_focuspreviouschild_isbase) {
            kaboutapplicationdialog_focuspreviouschild_isbase = false;
            return KAboutApplicationDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kaboutapplicationdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KAboutApplicationDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kaboutapplicationdialog_sender_isbase) {
            kaboutapplicationdialog_sender_isbase = false;
            return KAboutApplicationDialog::sender();
        }
        auto sender_cb = kaboutapplicationdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KAboutApplicationDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kaboutapplicationdialog_sendersignalindex_isbase) {
            kaboutapplicationdialog_sendersignalindex_isbase = false;
            return KAboutApplicationDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kaboutapplicationdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kaboutapplicationdialog_receivers_isbase) {
            kaboutapplicationdialog_receivers_isbase = false;
            return KAboutApplicationDialog::receivers(signal);
        }
        auto receivers_cb = kaboutapplicationdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAboutApplicationDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kaboutapplicationdialog_issignalconnected_isbase) {
            kaboutapplicationdialog_issignalconnected_isbase = false;
            return KAboutApplicationDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kaboutapplicationdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KAboutApplicationDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kaboutapplicationdialog_getdecodedmetricf_isbase) {
            kaboutapplicationdialog_getdecodedmetricf_isbase = false;
            return KAboutApplicationDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kaboutapplicationdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KAboutApplicationDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KAboutApplicationDialog_KeyPressEvent(KAboutApplicationDialog* self, QKeyEvent* param1);
    friend void KAboutApplicationDialog_SuperKeyPressEvent(KAboutApplicationDialog* self, QKeyEvent* param1);
    friend void KAboutApplicationDialog_CloseEvent(KAboutApplicationDialog* self, QCloseEvent* param1);
    friend void KAboutApplicationDialog_SuperCloseEvent(KAboutApplicationDialog* self, QCloseEvent* param1);
    friend void KAboutApplicationDialog_ShowEvent(KAboutApplicationDialog* self, QShowEvent* param1);
    friend void KAboutApplicationDialog_SuperShowEvent(KAboutApplicationDialog* self, QShowEvent* param1);
    friend void KAboutApplicationDialog_ResizeEvent(KAboutApplicationDialog* self, QResizeEvent* param1);
    friend void KAboutApplicationDialog_SuperResizeEvent(KAboutApplicationDialog* self, QResizeEvent* param1);
    friend void KAboutApplicationDialog_ContextMenuEvent(KAboutApplicationDialog* self, QContextMenuEvent* param1);
    friend void KAboutApplicationDialog_SuperContextMenuEvent(KAboutApplicationDialog* self, QContextMenuEvent* param1);
    friend bool KAboutApplicationDialog_EventFilter(KAboutApplicationDialog* self, QObject* param1, QEvent* param2);
    friend bool KAboutApplicationDialog_SuperEventFilter(KAboutApplicationDialog* self, QObject* param1, QEvent* param2);
    friend bool KAboutApplicationDialog_Event(KAboutApplicationDialog* self, QEvent* event);
    friend bool KAboutApplicationDialog_SuperEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_MousePressEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperMousePressEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_MouseReleaseEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperMouseReleaseEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_MouseDoubleClickEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperMouseDoubleClickEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_MouseMoveEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_SuperMouseMoveEvent(KAboutApplicationDialog* self, QMouseEvent* event);
    friend void KAboutApplicationDialog_WheelEvent(KAboutApplicationDialog* self, QWheelEvent* event);
    friend void KAboutApplicationDialog_SuperWheelEvent(KAboutApplicationDialog* self, QWheelEvent* event);
    friend void KAboutApplicationDialog_KeyReleaseEvent(KAboutApplicationDialog* self, QKeyEvent* event);
    friend void KAboutApplicationDialog_SuperKeyReleaseEvent(KAboutApplicationDialog* self, QKeyEvent* event);
    friend void KAboutApplicationDialog_FocusInEvent(KAboutApplicationDialog* self, QFocusEvent* event);
    friend void KAboutApplicationDialog_SuperFocusInEvent(KAboutApplicationDialog* self, QFocusEvent* event);
    friend void KAboutApplicationDialog_FocusOutEvent(KAboutApplicationDialog* self, QFocusEvent* event);
    friend void KAboutApplicationDialog_SuperFocusOutEvent(KAboutApplicationDialog* self, QFocusEvent* event);
    friend void KAboutApplicationDialog_EnterEvent(KAboutApplicationDialog* self, QEnterEvent* event);
    friend void KAboutApplicationDialog_SuperEnterEvent(KAboutApplicationDialog* self, QEnterEvent* event);
    friend void KAboutApplicationDialog_LeaveEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_SuperLeaveEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_PaintEvent(KAboutApplicationDialog* self, QPaintEvent* event);
    friend void KAboutApplicationDialog_SuperPaintEvent(KAboutApplicationDialog* self, QPaintEvent* event);
    friend void KAboutApplicationDialog_MoveEvent(KAboutApplicationDialog* self, QMoveEvent* event);
    friend void KAboutApplicationDialog_SuperMoveEvent(KAboutApplicationDialog* self, QMoveEvent* event);
    friend void KAboutApplicationDialog_TabletEvent(KAboutApplicationDialog* self, QTabletEvent* event);
    friend void KAboutApplicationDialog_SuperTabletEvent(KAboutApplicationDialog* self, QTabletEvent* event);
    friend void KAboutApplicationDialog_ActionEvent(KAboutApplicationDialog* self, QActionEvent* event);
    friend void KAboutApplicationDialog_SuperActionEvent(KAboutApplicationDialog* self, QActionEvent* event);
    friend void KAboutApplicationDialog_DragEnterEvent(KAboutApplicationDialog* self, QDragEnterEvent* event);
    friend void KAboutApplicationDialog_SuperDragEnterEvent(KAboutApplicationDialog* self, QDragEnterEvent* event);
    friend void KAboutApplicationDialog_DragMoveEvent(KAboutApplicationDialog* self, QDragMoveEvent* event);
    friend void KAboutApplicationDialog_SuperDragMoveEvent(KAboutApplicationDialog* self, QDragMoveEvent* event);
    friend void KAboutApplicationDialog_DragLeaveEvent(KAboutApplicationDialog* self, QDragLeaveEvent* event);
    friend void KAboutApplicationDialog_SuperDragLeaveEvent(KAboutApplicationDialog* self, QDragLeaveEvent* event);
    friend void KAboutApplicationDialog_DropEvent(KAboutApplicationDialog* self, QDropEvent* event);
    friend void KAboutApplicationDialog_SuperDropEvent(KAboutApplicationDialog* self, QDropEvent* event);
    friend void KAboutApplicationDialog_HideEvent(KAboutApplicationDialog* self, QHideEvent* event);
    friend void KAboutApplicationDialog_SuperHideEvent(KAboutApplicationDialog* self, QHideEvent* event);
    friend bool KAboutApplicationDialog_NativeEvent(KAboutApplicationDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KAboutApplicationDialog_SuperNativeEvent(KAboutApplicationDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KAboutApplicationDialog_ChangeEvent(KAboutApplicationDialog* self, QEvent* param1);
    friend void KAboutApplicationDialog_SuperChangeEvent(KAboutApplicationDialog* self, QEvent* param1);
    friend int KAboutApplicationDialog_Metric(const KAboutApplicationDialog* self, int param1);
    friend int KAboutApplicationDialog_SuperMetric(const KAboutApplicationDialog* self, int param1);
    friend void KAboutApplicationDialog_InitPainter(const KAboutApplicationDialog* self, QPainter* painter);
    friend void KAboutApplicationDialog_SuperInitPainter(const KAboutApplicationDialog* self, QPainter* painter);
    friend QPaintDevice* KAboutApplicationDialog_Redirected(const KAboutApplicationDialog* self, QPoint* offset);
    friend QPaintDevice* KAboutApplicationDialog_SuperRedirected(const KAboutApplicationDialog* self, QPoint* offset);
    friend QPainter* KAboutApplicationDialog_SharedPainter(const KAboutApplicationDialog* self);
    friend QPainter* KAboutApplicationDialog_SuperSharedPainter(const KAboutApplicationDialog* self);
    friend void KAboutApplicationDialog_InputMethodEvent(KAboutApplicationDialog* self, QInputMethodEvent* param1);
    friend void KAboutApplicationDialog_SuperInputMethodEvent(KAboutApplicationDialog* self, QInputMethodEvent* param1);
    friend bool KAboutApplicationDialog_FocusNextPrevChild(KAboutApplicationDialog* self, bool next);
    friend bool KAboutApplicationDialog_SuperFocusNextPrevChild(KAboutApplicationDialog* self, bool next);
    friend void KAboutApplicationDialog_TimerEvent(KAboutApplicationDialog* self, QTimerEvent* event);
    friend void KAboutApplicationDialog_SuperTimerEvent(KAboutApplicationDialog* self, QTimerEvent* event);
    friend void KAboutApplicationDialog_ChildEvent(KAboutApplicationDialog* self, QChildEvent* event);
    friend void KAboutApplicationDialog_SuperChildEvent(KAboutApplicationDialog* self, QChildEvent* event);
    friend void KAboutApplicationDialog_CustomEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_SuperCustomEvent(KAboutApplicationDialog* self, QEvent* event);
    friend void KAboutApplicationDialog_ConnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal);
    friend void KAboutApplicationDialog_SuperConnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal);
    friend void KAboutApplicationDialog_DisconnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal);
    friend void KAboutApplicationDialog_SuperDisconnectNotify(KAboutApplicationDialog* self, const QMetaMethod* signal);
    friend void KAboutApplicationDialog_AdjustPosition(KAboutApplicationDialog* self, QWidget* param1);
    friend void KAboutApplicationDialog_SuperAdjustPosition(KAboutApplicationDialog* self, QWidget* param1);
    friend void KAboutApplicationDialog_UpdateMicroFocus(KAboutApplicationDialog* self);
    friend void KAboutApplicationDialog_SuperUpdateMicroFocus(KAboutApplicationDialog* self);
    friend void KAboutApplicationDialog_Create(KAboutApplicationDialog* self);
    friend void KAboutApplicationDialog_SuperCreate(KAboutApplicationDialog* self);
    friend void KAboutApplicationDialog_Destroy(KAboutApplicationDialog* self);
    friend void KAboutApplicationDialog_SuperDestroy(KAboutApplicationDialog* self);
    friend bool KAboutApplicationDialog_FocusNextChild(KAboutApplicationDialog* self);
    friend bool KAboutApplicationDialog_SuperFocusNextChild(KAboutApplicationDialog* self);
    friend bool KAboutApplicationDialog_FocusPreviousChild(KAboutApplicationDialog* self);
    friend bool KAboutApplicationDialog_SuperFocusPreviousChild(KAboutApplicationDialog* self);
    friend QObject* KAboutApplicationDialog_Sender(const KAboutApplicationDialog* self);
    friend QObject* KAboutApplicationDialog_SuperSender(const KAboutApplicationDialog* self);
    friend int KAboutApplicationDialog_SenderSignalIndex(const KAboutApplicationDialog* self);
    friend int KAboutApplicationDialog_SuperSenderSignalIndex(const KAboutApplicationDialog* self);
    friend int KAboutApplicationDialog_Receivers(const KAboutApplicationDialog* self, const char* signal);
    friend int KAboutApplicationDialog_SuperReceivers(const KAboutApplicationDialog* self, const char* signal);
    friend bool KAboutApplicationDialog_IsSignalConnected(const KAboutApplicationDialog* self, const QMetaMethod* signal);
    friend bool KAboutApplicationDialog_SuperIsSignalConnected(const KAboutApplicationDialog* self, const QMetaMethod* signal);
    friend double KAboutApplicationDialog_GetDecodedMetricF(const KAboutApplicationDialog* self, int metricA, int metricB);
    friend double KAboutApplicationDialog_SuperGetDecodedMetricF(const KAboutApplicationDialog* self, int metricA, int metricB);
};

#endif
