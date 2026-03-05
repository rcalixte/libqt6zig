#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTCHOOSERDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTCHOOSERDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontChooserDialog so that we can call protected methods
class VirtualKFontChooserDialog final : public KFontChooserDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKFontChooserDialog = true;

    // Virtual class public types (including callbacks)
    using KFontChooserDialog_MetaObject_Callback = QMetaObject* (*)();
    using KFontChooserDialog_Metacast_Callback = void* (*)(KFontChooserDialog*, const char*);
    using KFontChooserDialog_Metacall_Callback = int (*)(KFontChooserDialog*, int, int, void**);
    using KFontChooserDialog_SetVisible_Callback = void (*)(KFontChooserDialog*, bool);
    using KFontChooserDialog_SizeHint_Callback = QSize* (*)();
    using KFontChooserDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KFontChooserDialog_Open_Callback = void (*)();
    using KFontChooserDialog_Exec_Callback = int (*)();
    using KFontChooserDialog_Done_Callback = void (*)(KFontChooserDialog*, int);
    using KFontChooserDialog_Accept_Callback = void (*)();
    using KFontChooserDialog_Reject_Callback = void (*)();
    using KFontChooserDialog_KeyPressEvent_Callback = void (*)(KFontChooserDialog*, QKeyEvent*);
    using KFontChooserDialog_CloseEvent_Callback = void (*)(KFontChooserDialog*, QCloseEvent*);
    using KFontChooserDialog_ShowEvent_Callback = void (*)(KFontChooserDialog*, QShowEvent*);
    using KFontChooserDialog_ResizeEvent_Callback = void (*)(KFontChooserDialog*, QResizeEvent*);
    using KFontChooserDialog_ContextMenuEvent_Callback = void (*)(KFontChooserDialog*, QContextMenuEvent*);
    using KFontChooserDialog_EventFilter_Callback = bool (*)(KFontChooserDialog*, QObject*, QEvent*);
    using KFontChooserDialog_DevType_Callback = int (*)();
    using KFontChooserDialog_HeightForWidth_Callback = int (*)(const KFontChooserDialog*, int);
    using KFontChooserDialog_HasHeightForWidth_Callback = bool (*)();
    using KFontChooserDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KFontChooserDialog_Event_Callback = bool (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_MousePressEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_MouseReleaseEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_MouseDoubleClickEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_MouseMoveEvent_Callback = void (*)(KFontChooserDialog*, QMouseEvent*);
    using KFontChooserDialog_WheelEvent_Callback = void (*)(KFontChooserDialog*, QWheelEvent*);
    using KFontChooserDialog_KeyReleaseEvent_Callback = void (*)(KFontChooserDialog*, QKeyEvent*);
    using KFontChooserDialog_FocusInEvent_Callback = void (*)(KFontChooserDialog*, QFocusEvent*);
    using KFontChooserDialog_FocusOutEvent_Callback = void (*)(KFontChooserDialog*, QFocusEvent*);
    using KFontChooserDialog_EnterEvent_Callback = void (*)(KFontChooserDialog*, QEnterEvent*);
    using KFontChooserDialog_LeaveEvent_Callback = void (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_PaintEvent_Callback = void (*)(KFontChooserDialog*, QPaintEvent*);
    using KFontChooserDialog_MoveEvent_Callback = void (*)(KFontChooserDialog*, QMoveEvent*);
    using KFontChooserDialog_TabletEvent_Callback = void (*)(KFontChooserDialog*, QTabletEvent*);
    using KFontChooserDialog_ActionEvent_Callback = void (*)(KFontChooserDialog*, QActionEvent*);
    using KFontChooserDialog_DragEnterEvent_Callback = void (*)(KFontChooserDialog*, QDragEnterEvent*);
    using KFontChooserDialog_DragMoveEvent_Callback = void (*)(KFontChooserDialog*, QDragMoveEvent*);
    using KFontChooserDialog_DragLeaveEvent_Callback = void (*)(KFontChooserDialog*, QDragLeaveEvent*);
    using KFontChooserDialog_DropEvent_Callback = void (*)(KFontChooserDialog*, QDropEvent*);
    using KFontChooserDialog_HideEvent_Callback = void (*)(KFontChooserDialog*, QHideEvent*);
    using KFontChooserDialog_NativeEvent_Callback = bool (*)(KFontChooserDialog*, libqt_string, void*, intptr_t*);
    using KFontChooserDialog_ChangeEvent_Callback = void (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_Metric_Callback = int (*)(const KFontChooserDialog*, int);
    using KFontChooserDialog_InitPainter_Callback = void (*)(const KFontChooserDialog*, QPainter*);
    using KFontChooserDialog_Redirected_Callback = QPaintDevice* (*)(const KFontChooserDialog*, QPoint*);
    using KFontChooserDialog_SharedPainter_Callback = QPainter* (*)();
    using KFontChooserDialog_InputMethodEvent_Callback = void (*)(KFontChooserDialog*, QInputMethodEvent*);
    using KFontChooserDialog_InputMethodQuery_Callback = QVariant* (*)(const KFontChooserDialog*, int);
    using KFontChooserDialog_FocusNextPrevChild_Callback = bool (*)(KFontChooserDialog*, bool);
    using KFontChooserDialog_TimerEvent_Callback = void (*)(KFontChooserDialog*, QTimerEvent*);
    using KFontChooserDialog_ChildEvent_Callback = void (*)(KFontChooserDialog*, QChildEvent*);
    using KFontChooserDialog_CustomEvent_Callback = void (*)(KFontChooserDialog*, QEvent*);
    using KFontChooserDialog_ConnectNotify_Callback = void (*)(KFontChooserDialog*, QMetaMethod*);
    using KFontChooserDialog_DisconnectNotify_Callback = void (*)(KFontChooserDialog*, QMetaMethod*);
    using KFontChooserDialog_AdjustPosition_Callback = void (*)(KFontChooserDialog*, QWidget*);
    using KFontChooserDialog_UpdateMicroFocus_Callback = void (*)();
    using KFontChooserDialog_Create_Callback = void (*)();
    using KFontChooserDialog_Destroy_Callback = void (*)();
    using KFontChooserDialog_FocusNextChild_Callback = bool (*)();
    using KFontChooserDialog_FocusPreviousChild_Callback = bool (*)();
    using KFontChooserDialog_Sender_Callback = QObject* (*)();
    using KFontChooserDialog_SenderSignalIndex_Callback = int (*)();
    using KFontChooserDialog_Receivers_Callback = int (*)(const KFontChooserDialog*, const char*);
    using KFontChooserDialog_IsSignalConnected_Callback = bool (*)(const KFontChooserDialog*, QMetaMethod*);
    using KFontChooserDialog_GetDecodedMetricF_Callback = double (*)(const KFontChooserDialog*, int, int);

  protected:
    // Instance callback storage
    KFontChooserDialog_MetaObject_Callback kfontchooserdialog_metaobject_callback = nullptr;
    KFontChooserDialog_Metacast_Callback kfontchooserdialog_metacast_callback = nullptr;
    KFontChooserDialog_Metacall_Callback kfontchooserdialog_metacall_callback = nullptr;
    KFontChooserDialog_SetVisible_Callback kfontchooserdialog_setvisible_callback = nullptr;
    KFontChooserDialog_SizeHint_Callback kfontchooserdialog_sizehint_callback = nullptr;
    KFontChooserDialog_MinimumSizeHint_Callback kfontchooserdialog_minimumsizehint_callback = nullptr;
    KFontChooserDialog_Open_Callback kfontchooserdialog_open_callback = nullptr;
    KFontChooserDialog_Exec_Callback kfontchooserdialog_exec_callback = nullptr;
    KFontChooserDialog_Done_Callback kfontchooserdialog_done_callback = nullptr;
    KFontChooserDialog_Accept_Callback kfontchooserdialog_accept_callback = nullptr;
    KFontChooserDialog_Reject_Callback kfontchooserdialog_reject_callback = nullptr;
    KFontChooserDialog_KeyPressEvent_Callback kfontchooserdialog_keypressevent_callback = nullptr;
    KFontChooserDialog_CloseEvent_Callback kfontchooserdialog_closeevent_callback = nullptr;
    KFontChooserDialog_ShowEvent_Callback kfontchooserdialog_showevent_callback = nullptr;
    KFontChooserDialog_ResizeEvent_Callback kfontchooserdialog_resizeevent_callback = nullptr;
    KFontChooserDialog_ContextMenuEvent_Callback kfontchooserdialog_contextmenuevent_callback = nullptr;
    KFontChooserDialog_EventFilter_Callback kfontchooserdialog_eventfilter_callback = nullptr;
    KFontChooserDialog_DevType_Callback kfontchooserdialog_devtype_callback = nullptr;
    KFontChooserDialog_HeightForWidth_Callback kfontchooserdialog_heightforwidth_callback = nullptr;
    KFontChooserDialog_HasHeightForWidth_Callback kfontchooserdialog_hasheightforwidth_callback = nullptr;
    KFontChooserDialog_PaintEngine_Callback kfontchooserdialog_paintengine_callback = nullptr;
    KFontChooserDialog_Event_Callback kfontchooserdialog_event_callback = nullptr;
    KFontChooserDialog_MousePressEvent_Callback kfontchooserdialog_mousepressevent_callback = nullptr;
    KFontChooserDialog_MouseReleaseEvent_Callback kfontchooserdialog_mousereleaseevent_callback = nullptr;
    KFontChooserDialog_MouseDoubleClickEvent_Callback kfontchooserdialog_mousedoubleclickevent_callback = nullptr;
    KFontChooserDialog_MouseMoveEvent_Callback kfontchooserdialog_mousemoveevent_callback = nullptr;
    KFontChooserDialog_WheelEvent_Callback kfontchooserdialog_wheelevent_callback = nullptr;
    KFontChooserDialog_KeyReleaseEvent_Callback kfontchooserdialog_keyreleaseevent_callback = nullptr;
    KFontChooserDialog_FocusInEvent_Callback kfontchooserdialog_focusinevent_callback = nullptr;
    KFontChooserDialog_FocusOutEvent_Callback kfontchooserdialog_focusoutevent_callback = nullptr;
    KFontChooserDialog_EnterEvent_Callback kfontchooserdialog_enterevent_callback = nullptr;
    KFontChooserDialog_LeaveEvent_Callback kfontchooserdialog_leaveevent_callback = nullptr;
    KFontChooserDialog_PaintEvent_Callback kfontchooserdialog_paintevent_callback = nullptr;
    KFontChooserDialog_MoveEvent_Callback kfontchooserdialog_moveevent_callback = nullptr;
    KFontChooserDialog_TabletEvent_Callback kfontchooserdialog_tabletevent_callback = nullptr;
    KFontChooserDialog_ActionEvent_Callback kfontchooserdialog_actionevent_callback = nullptr;
    KFontChooserDialog_DragEnterEvent_Callback kfontchooserdialog_dragenterevent_callback = nullptr;
    KFontChooserDialog_DragMoveEvent_Callback kfontchooserdialog_dragmoveevent_callback = nullptr;
    KFontChooserDialog_DragLeaveEvent_Callback kfontchooserdialog_dragleaveevent_callback = nullptr;
    KFontChooserDialog_DropEvent_Callback kfontchooserdialog_dropevent_callback = nullptr;
    KFontChooserDialog_HideEvent_Callback kfontchooserdialog_hideevent_callback = nullptr;
    KFontChooserDialog_NativeEvent_Callback kfontchooserdialog_nativeevent_callback = nullptr;
    KFontChooserDialog_ChangeEvent_Callback kfontchooserdialog_changeevent_callback = nullptr;
    KFontChooserDialog_Metric_Callback kfontchooserdialog_metric_callback = nullptr;
    KFontChooserDialog_InitPainter_Callback kfontchooserdialog_initpainter_callback = nullptr;
    KFontChooserDialog_Redirected_Callback kfontchooserdialog_redirected_callback = nullptr;
    KFontChooserDialog_SharedPainter_Callback kfontchooserdialog_sharedpainter_callback = nullptr;
    KFontChooserDialog_InputMethodEvent_Callback kfontchooserdialog_inputmethodevent_callback = nullptr;
    KFontChooserDialog_InputMethodQuery_Callback kfontchooserdialog_inputmethodquery_callback = nullptr;
    KFontChooserDialog_FocusNextPrevChild_Callback kfontchooserdialog_focusnextprevchild_callback = nullptr;
    KFontChooserDialog_TimerEvent_Callback kfontchooserdialog_timerevent_callback = nullptr;
    KFontChooserDialog_ChildEvent_Callback kfontchooserdialog_childevent_callback = nullptr;
    KFontChooserDialog_CustomEvent_Callback kfontchooserdialog_customevent_callback = nullptr;
    KFontChooserDialog_ConnectNotify_Callback kfontchooserdialog_connectnotify_callback = nullptr;
    KFontChooserDialog_DisconnectNotify_Callback kfontchooserdialog_disconnectnotify_callback = nullptr;
    KFontChooserDialog_AdjustPosition_Callback kfontchooserdialog_adjustposition_callback = nullptr;
    KFontChooserDialog_UpdateMicroFocus_Callback kfontchooserdialog_updatemicrofocus_callback = nullptr;
    KFontChooserDialog_Create_Callback kfontchooserdialog_create_callback = nullptr;
    KFontChooserDialog_Destroy_Callback kfontchooserdialog_destroy_callback = nullptr;
    KFontChooserDialog_FocusNextChild_Callback kfontchooserdialog_focusnextchild_callback = nullptr;
    KFontChooserDialog_FocusPreviousChild_Callback kfontchooserdialog_focuspreviouschild_callback = nullptr;
    KFontChooserDialog_Sender_Callback kfontchooserdialog_sender_callback = nullptr;
    KFontChooserDialog_SenderSignalIndex_Callback kfontchooserdialog_sendersignalindex_callback = nullptr;
    KFontChooserDialog_Receivers_Callback kfontchooserdialog_receivers_callback = nullptr;
    KFontChooserDialog_IsSignalConnected_Callback kfontchooserdialog_issignalconnected_callback = nullptr;
    KFontChooserDialog_GetDecodedMetricF_Callback kfontchooserdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfontchooserdialog_metaobject_isbase = false;
    mutable bool kfontchooserdialog_metacast_isbase = false;
    mutable bool kfontchooserdialog_metacall_isbase = false;
    mutable bool kfontchooserdialog_setvisible_isbase = false;
    mutable bool kfontchooserdialog_sizehint_isbase = false;
    mutable bool kfontchooserdialog_minimumsizehint_isbase = false;
    mutable bool kfontchooserdialog_open_isbase = false;
    mutable bool kfontchooserdialog_exec_isbase = false;
    mutable bool kfontchooserdialog_done_isbase = false;
    mutable bool kfontchooserdialog_accept_isbase = false;
    mutable bool kfontchooserdialog_reject_isbase = false;
    mutable bool kfontchooserdialog_keypressevent_isbase = false;
    mutable bool kfontchooserdialog_closeevent_isbase = false;
    mutable bool kfontchooserdialog_showevent_isbase = false;
    mutable bool kfontchooserdialog_resizeevent_isbase = false;
    mutable bool kfontchooserdialog_contextmenuevent_isbase = false;
    mutable bool kfontchooserdialog_eventfilter_isbase = false;
    mutable bool kfontchooserdialog_devtype_isbase = false;
    mutable bool kfontchooserdialog_heightforwidth_isbase = false;
    mutable bool kfontchooserdialog_hasheightforwidth_isbase = false;
    mutable bool kfontchooserdialog_paintengine_isbase = false;
    mutable bool kfontchooserdialog_event_isbase = false;
    mutable bool kfontchooserdialog_mousepressevent_isbase = false;
    mutable bool kfontchooserdialog_mousereleaseevent_isbase = false;
    mutable bool kfontchooserdialog_mousedoubleclickevent_isbase = false;
    mutable bool kfontchooserdialog_mousemoveevent_isbase = false;
    mutable bool kfontchooserdialog_wheelevent_isbase = false;
    mutable bool kfontchooserdialog_keyreleaseevent_isbase = false;
    mutable bool kfontchooserdialog_focusinevent_isbase = false;
    mutable bool kfontchooserdialog_focusoutevent_isbase = false;
    mutable bool kfontchooserdialog_enterevent_isbase = false;
    mutable bool kfontchooserdialog_leaveevent_isbase = false;
    mutable bool kfontchooserdialog_paintevent_isbase = false;
    mutable bool kfontchooserdialog_moveevent_isbase = false;
    mutable bool kfontchooserdialog_tabletevent_isbase = false;
    mutable bool kfontchooserdialog_actionevent_isbase = false;
    mutable bool kfontchooserdialog_dragenterevent_isbase = false;
    mutable bool kfontchooserdialog_dragmoveevent_isbase = false;
    mutable bool kfontchooserdialog_dragleaveevent_isbase = false;
    mutable bool kfontchooserdialog_dropevent_isbase = false;
    mutable bool kfontchooserdialog_hideevent_isbase = false;
    mutable bool kfontchooserdialog_nativeevent_isbase = false;
    mutable bool kfontchooserdialog_changeevent_isbase = false;
    mutable bool kfontchooserdialog_metric_isbase = false;
    mutable bool kfontchooserdialog_initpainter_isbase = false;
    mutable bool kfontchooserdialog_redirected_isbase = false;
    mutable bool kfontchooserdialog_sharedpainter_isbase = false;
    mutable bool kfontchooserdialog_inputmethodevent_isbase = false;
    mutable bool kfontchooserdialog_inputmethodquery_isbase = false;
    mutable bool kfontchooserdialog_focusnextprevchild_isbase = false;
    mutable bool kfontchooserdialog_timerevent_isbase = false;
    mutable bool kfontchooserdialog_childevent_isbase = false;
    mutable bool kfontchooserdialog_customevent_isbase = false;
    mutable bool kfontchooserdialog_connectnotify_isbase = false;
    mutable bool kfontchooserdialog_disconnectnotify_isbase = false;
    mutable bool kfontchooserdialog_adjustposition_isbase = false;
    mutable bool kfontchooserdialog_updatemicrofocus_isbase = false;
    mutable bool kfontchooserdialog_create_isbase = false;
    mutable bool kfontchooserdialog_destroy_isbase = false;
    mutable bool kfontchooserdialog_focusnextchild_isbase = false;
    mutable bool kfontchooserdialog_focuspreviouschild_isbase = false;
    mutable bool kfontchooserdialog_sender_isbase = false;
    mutable bool kfontchooserdialog_sendersignalindex_isbase = false;
    mutable bool kfontchooserdialog_receivers_isbase = false;
    mutable bool kfontchooserdialog_issignalconnected_isbase = false;
    mutable bool kfontchooserdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKFontChooserDialog() : KFontChooserDialog() {};
    VirtualKFontChooserDialog(const KFontChooser::DisplayFlags& flags) : KFontChooserDialog(flags) {};
    VirtualKFontChooserDialog(const KFontChooser::DisplayFlags& flags, QWidget* parent) : KFontChooserDialog(flags, parent) {};

    // Callback setters
    inline void setKFontChooserDialog_MetaObject_Callback(KFontChooserDialog_MetaObject_Callback cb) { kfontchooserdialog_metaobject_callback = cb; }
    inline void setKFontChooserDialog_Metacast_Callback(KFontChooserDialog_Metacast_Callback cb) { kfontchooserdialog_metacast_callback = cb; }
    inline void setKFontChooserDialog_Metacall_Callback(KFontChooserDialog_Metacall_Callback cb) { kfontchooserdialog_metacall_callback = cb; }
    inline void setKFontChooserDialog_SetVisible_Callback(KFontChooserDialog_SetVisible_Callback cb) { kfontchooserdialog_setvisible_callback = cb; }
    inline void setKFontChooserDialog_SizeHint_Callback(KFontChooserDialog_SizeHint_Callback cb) { kfontchooserdialog_sizehint_callback = cb; }
    inline void setKFontChooserDialog_MinimumSizeHint_Callback(KFontChooserDialog_MinimumSizeHint_Callback cb) { kfontchooserdialog_minimumsizehint_callback = cb; }
    inline void setKFontChooserDialog_Open_Callback(KFontChooserDialog_Open_Callback cb) { kfontchooserdialog_open_callback = cb; }
    inline void setKFontChooserDialog_Exec_Callback(KFontChooserDialog_Exec_Callback cb) { kfontchooserdialog_exec_callback = cb; }
    inline void setKFontChooserDialog_Done_Callback(KFontChooserDialog_Done_Callback cb) { kfontchooserdialog_done_callback = cb; }
    inline void setKFontChooserDialog_Accept_Callback(KFontChooserDialog_Accept_Callback cb) { kfontchooserdialog_accept_callback = cb; }
    inline void setKFontChooserDialog_Reject_Callback(KFontChooserDialog_Reject_Callback cb) { kfontchooserdialog_reject_callback = cb; }
    inline void setKFontChooserDialog_KeyPressEvent_Callback(KFontChooserDialog_KeyPressEvent_Callback cb) { kfontchooserdialog_keypressevent_callback = cb; }
    inline void setKFontChooserDialog_CloseEvent_Callback(KFontChooserDialog_CloseEvent_Callback cb) { kfontchooserdialog_closeevent_callback = cb; }
    inline void setKFontChooserDialog_ShowEvent_Callback(KFontChooserDialog_ShowEvent_Callback cb) { kfontchooserdialog_showevent_callback = cb; }
    inline void setKFontChooserDialog_ResizeEvent_Callback(KFontChooserDialog_ResizeEvent_Callback cb) { kfontchooserdialog_resizeevent_callback = cb; }
    inline void setKFontChooserDialog_ContextMenuEvent_Callback(KFontChooserDialog_ContextMenuEvent_Callback cb) { kfontchooserdialog_contextmenuevent_callback = cb; }
    inline void setKFontChooserDialog_EventFilter_Callback(KFontChooserDialog_EventFilter_Callback cb) { kfontchooserdialog_eventfilter_callback = cb; }
    inline void setKFontChooserDialog_DevType_Callback(KFontChooserDialog_DevType_Callback cb) { kfontchooserdialog_devtype_callback = cb; }
    inline void setKFontChooserDialog_HeightForWidth_Callback(KFontChooserDialog_HeightForWidth_Callback cb) { kfontchooserdialog_heightforwidth_callback = cb; }
    inline void setKFontChooserDialog_HasHeightForWidth_Callback(KFontChooserDialog_HasHeightForWidth_Callback cb) { kfontchooserdialog_hasheightforwidth_callback = cb; }
    inline void setKFontChooserDialog_PaintEngine_Callback(KFontChooserDialog_PaintEngine_Callback cb) { kfontchooserdialog_paintengine_callback = cb; }
    inline void setKFontChooserDialog_Event_Callback(KFontChooserDialog_Event_Callback cb) { kfontchooserdialog_event_callback = cb; }
    inline void setKFontChooserDialog_MousePressEvent_Callback(KFontChooserDialog_MousePressEvent_Callback cb) { kfontchooserdialog_mousepressevent_callback = cb; }
    inline void setKFontChooserDialog_MouseReleaseEvent_Callback(KFontChooserDialog_MouseReleaseEvent_Callback cb) { kfontchooserdialog_mousereleaseevent_callback = cb; }
    inline void setKFontChooserDialog_MouseDoubleClickEvent_Callback(KFontChooserDialog_MouseDoubleClickEvent_Callback cb) { kfontchooserdialog_mousedoubleclickevent_callback = cb; }
    inline void setKFontChooserDialog_MouseMoveEvent_Callback(KFontChooserDialog_MouseMoveEvent_Callback cb) { kfontchooserdialog_mousemoveevent_callback = cb; }
    inline void setKFontChooserDialog_WheelEvent_Callback(KFontChooserDialog_WheelEvent_Callback cb) { kfontchooserdialog_wheelevent_callback = cb; }
    inline void setKFontChooserDialog_KeyReleaseEvent_Callback(KFontChooserDialog_KeyReleaseEvent_Callback cb) { kfontchooserdialog_keyreleaseevent_callback = cb; }
    inline void setKFontChooserDialog_FocusInEvent_Callback(KFontChooserDialog_FocusInEvent_Callback cb) { kfontchooserdialog_focusinevent_callback = cb; }
    inline void setKFontChooserDialog_FocusOutEvent_Callback(KFontChooserDialog_FocusOutEvent_Callback cb) { kfontchooserdialog_focusoutevent_callback = cb; }
    inline void setKFontChooserDialog_EnterEvent_Callback(KFontChooserDialog_EnterEvent_Callback cb) { kfontchooserdialog_enterevent_callback = cb; }
    inline void setKFontChooserDialog_LeaveEvent_Callback(KFontChooserDialog_LeaveEvent_Callback cb) { kfontchooserdialog_leaveevent_callback = cb; }
    inline void setKFontChooserDialog_PaintEvent_Callback(KFontChooserDialog_PaintEvent_Callback cb) { kfontchooserdialog_paintevent_callback = cb; }
    inline void setKFontChooserDialog_MoveEvent_Callback(KFontChooserDialog_MoveEvent_Callback cb) { kfontchooserdialog_moveevent_callback = cb; }
    inline void setKFontChooserDialog_TabletEvent_Callback(KFontChooserDialog_TabletEvent_Callback cb) { kfontchooserdialog_tabletevent_callback = cb; }
    inline void setKFontChooserDialog_ActionEvent_Callback(KFontChooserDialog_ActionEvent_Callback cb) { kfontchooserdialog_actionevent_callback = cb; }
    inline void setKFontChooserDialog_DragEnterEvent_Callback(KFontChooserDialog_DragEnterEvent_Callback cb) { kfontchooserdialog_dragenterevent_callback = cb; }
    inline void setKFontChooserDialog_DragMoveEvent_Callback(KFontChooserDialog_DragMoveEvent_Callback cb) { kfontchooserdialog_dragmoveevent_callback = cb; }
    inline void setKFontChooserDialog_DragLeaveEvent_Callback(KFontChooserDialog_DragLeaveEvent_Callback cb) { kfontchooserdialog_dragleaveevent_callback = cb; }
    inline void setKFontChooserDialog_DropEvent_Callback(KFontChooserDialog_DropEvent_Callback cb) { kfontchooserdialog_dropevent_callback = cb; }
    inline void setKFontChooserDialog_HideEvent_Callback(KFontChooserDialog_HideEvent_Callback cb) { kfontchooserdialog_hideevent_callback = cb; }
    inline void setKFontChooserDialog_NativeEvent_Callback(KFontChooserDialog_NativeEvent_Callback cb) { kfontchooserdialog_nativeevent_callback = cb; }
    inline void setKFontChooserDialog_ChangeEvent_Callback(KFontChooserDialog_ChangeEvent_Callback cb) { kfontchooserdialog_changeevent_callback = cb; }
    inline void setKFontChooserDialog_Metric_Callback(KFontChooserDialog_Metric_Callback cb) { kfontchooserdialog_metric_callback = cb; }
    inline void setKFontChooserDialog_InitPainter_Callback(KFontChooserDialog_InitPainter_Callback cb) { kfontchooserdialog_initpainter_callback = cb; }
    inline void setKFontChooserDialog_Redirected_Callback(KFontChooserDialog_Redirected_Callback cb) { kfontchooserdialog_redirected_callback = cb; }
    inline void setKFontChooserDialog_SharedPainter_Callback(KFontChooserDialog_SharedPainter_Callback cb) { kfontchooserdialog_sharedpainter_callback = cb; }
    inline void setKFontChooserDialog_InputMethodEvent_Callback(KFontChooserDialog_InputMethodEvent_Callback cb) { kfontchooserdialog_inputmethodevent_callback = cb; }
    inline void setKFontChooserDialog_InputMethodQuery_Callback(KFontChooserDialog_InputMethodQuery_Callback cb) { kfontchooserdialog_inputmethodquery_callback = cb; }
    inline void setKFontChooserDialog_FocusNextPrevChild_Callback(KFontChooserDialog_FocusNextPrevChild_Callback cb) { kfontchooserdialog_focusnextprevchild_callback = cb; }
    inline void setKFontChooserDialog_TimerEvent_Callback(KFontChooserDialog_TimerEvent_Callback cb) { kfontchooserdialog_timerevent_callback = cb; }
    inline void setKFontChooserDialog_ChildEvent_Callback(KFontChooserDialog_ChildEvent_Callback cb) { kfontchooserdialog_childevent_callback = cb; }
    inline void setKFontChooserDialog_CustomEvent_Callback(KFontChooserDialog_CustomEvent_Callback cb) { kfontchooserdialog_customevent_callback = cb; }
    inline void setKFontChooserDialog_ConnectNotify_Callback(KFontChooserDialog_ConnectNotify_Callback cb) { kfontchooserdialog_connectnotify_callback = cb; }
    inline void setKFontChooserDialog_DisconnectNotify_Callback(KFontChooserDialog_DisconnectNotify_Callback cb) { kfontchooserdialog_disconnectnotify_callback = cb; }
    inline void setKFontChooserDialog_AdjustPosition_Callback(KFontChooserDialog_AdjustPosition_Callback cb) { kfontchooserdialog_adjustposition_callback = cb; }
    inline void setKFontChooserDialog_UpdateMicroFocus_Callback(KFontChooserDialog_UpdateMicroFocus_Callback cb) { kfontchooserdialog_updatemicrofocus_callback = cb; }
    inline void setKFontChooserDialog_Create_Callback(KFontChooserDialog_Create_Callback cb) { kfontchooserdialog_create_callback = cb; }
    inline void setKFontChooserDialog_Destroy_Callback(KFontChooserDialog_Destroy_Callback cb) { kfontchooserdialog_destroy_callback = cb; }
    inline void setKFontChooserDialog_FocusNextChild_Callback(KFontChooserDialog_FocusNextChild_Callback cb) { kfontchooserdialog_focusnextchild_callback = cb; }
    inline void setKFontChooserDialog_FocusPreviousChild_Callback(KFontChooserDialog_FocusPreviousChild_Callback cb) { kfontchooserdialog_focuspreviouschild_callback = cb; }
    inline void setKFontChooserDialog_Sender_Callback(KFontChooserDialog_Sender_Callback cb) { kfontchooserdialog_sender_callback = cb; }
    inline void setKFontChooserDialog_SenderSignalIndex_Callback(KFontChooserDialog_SenderSignalIndex_Callback cb) { kfontchooserdialog_sendersignalindex_callback = cb; }
    inline void setKFontChooserDialog_Receivers_Callback(KFontChooserDialog_Receivers_Callback cb) { kfontchooserdialog_receivers_callback = cb; }
    inline void setKFontChooserDialog_IsSignalConnected_Callback(KFontChooserDialog_IsSignalConnected_Callback cb) { kfontchooserdialog_issignalconnected_callback = cb; }
    inline void setKFontChooserDialog_GetDecodedMetricF_Callback(KFontChooserDialog_GetDecodedMetricF_Callback cb) { kfontchooserdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFontChooserDialog_MetaObject_IsBase(bool value) const { kfontchooserdialog_metaobject_isbase = value; }
    inline void setKFontChooserDialog_Metacast_IsBase(bool value) const { kfontchooserdialog_metacast_isbase = value; }
    inline void setKFontChooserDialog_Metacall_IsBase(bool value) const { kfontchooserdialog_metacall_isbase = value; }
    inline void setKFontChooserDialog_SetVisible_IsBase(bool value) const { kfontchooserdialog_setvisible_isbase = value; }
    inline void setKFontChooserDialog_SizeHint_IsBase(bool value) const { kfontchooserdialog_sizehint_isbase = value; }
    inline void setKFontChooserDialog_MinimumSizeHint_IsBase(bool value) const { kfontchooserdialog_minimumsizehint_isbase = value; }
    inline void setKFontChooserDialog_Open_IsBase(bool value) const { kfontchooserdialog_open_isbase = value; }
    inline void setKFontChooserDialog_Exec_IsBase(bool value) const { kfontchooserdialog_exec_isbase = value; }
    inline void setKFontChooserDialog_Done_IsBase(bool value) const { kfontchooserdialog_done_isbase = value; }
    inline void setKFontChooserDialog_Accept_IsBase(bool value) const { kfontchooserdialog_accept_isbase = value; }
    inline void setKFontChooserDialog_Reject_IsBase(bool value) const { kfontchooserdialog_reject_isbase = value; }
    inline void setKFontChooserDialog_KeyPressEvent_IsBase(bool value) const { kfontchooserdialog_keypressevent_isbase = value; }
    inline void setKFontChooserDialog_CloseEvent_IsBase(bool value) const { kfontchooserdialog_closeevent_isbase = value; }
    inline void setKFontChooserDialog_ShowEvent_IsBase(bool value) const { kfontchooserdialog_showevent_isbase = value; }
    inline void setKFontChooserDialog_ResizeEvent_IsBase(bool value) const { kfontchooserdialog_resizeevent_isbase = value; }
    inline void setKFontChooserDialog_ContextMenuEvent_IsBase(bool value) const { kfontchooserdialog_contextmenuevent_isbase = value; }
    inline void setKFontChooserDialog_EventFilter_IsBase(bool value) const { kfontchooserdialog_eventfilter_isbase = value; }
    inline void setKFontChooserDialog_DevType_IsBase(bool value) const { kfontchooserdialog_devtype_isbase = value; }
    inline void setKFontChooserDialog_HeightForWidth_IsBase(bool value) const { kfontchooserdialog_heightforwidth_isbase = value; }
    inline void setKFontChooserDialog_HasHeightForWidth_IsBase(bool value) const { kfontchooserdialog_hasheightforwidth_isbase = value; }
    inline void setKFontChooserDialog_PaintEngine_IsBase(bool value) const { kfontchooserdialog_paintengine_isbase = value; }
    inline void setKFontChooserDialog_Event_IsBase(bool value) const { kfontchooserdialog_event_isbase = value; }
    inline void setKFontChooserDialog_MousePressEvent_IsBase(bool value) const { kfontchooserdialog_mousepressevent_isbase = value; }
    inline void setKFontChooserDialog_MouseReleaseEvent_IsBase(bool value) const { kfontchooserdialog_mousereleaseevent_isbase = value; }
    inline void setKFontChooserDialog_MouseDoubleClickEvent_IsBase(bool value) const { kfontchooserdialog_mousedoubleclickevent_isbase = value; }
    inline void setKFontChooserDialog_MouseMoveEvent_IsBase(bool value) const { kfontchooserdialog_mousemoveevent_isbase = value; }
    inline void setKFontChooserDialog_WheelEvent_IsBase(bool value) const { kfontchooserdialog_wheelevent_isbase = value; }
    inline void setKFontChooserDialog_KeyReleaseEvent_IsBase(bool value) const { kfontchooserdialog_keyreleaseevent_isbase = value; }
    inline void setKFontChooserDialog_FocusInEvent_IsBase(bool value) const { kfontchooserdialog_focusinevent_isbase = value; }
    inline void setKFontChooserDialog_FocusOutEvent_IsBase(bool value) const { kfontchooserdialog_focusoutevent_isbase = value; }
    inline void setKFontChooserDialog_EnterEvent_IsBase(bool value) const { kfontchooserdialog_enterevent_isbase = value; }
    inline void setKFontChooserDialog_LeaveEvent_IsBase(bool value) const { kfontchooserdialog_leaveevent_isbase = value; }
    inline void setKFontChooserDialog_PaintEvent_IsBase(bool value) const { kfontchooserdialog_paintevent_isbase = value; }
    inline void setKFontChooserDialog_MoveEvent_IsBase(bool value) const { kfontchooserdialog_moveevent_isbase = value; }
    inline void setKFontChooserDialog_TabletEvent_IsBase(bool value) const { kfontchooserdialog_tabletevent_isbase = value; }
    inline void setKFontChooserDialog_ActionEvent_IsBase(bool value) const { kfontchooserdialog_actionevent_isbase = value; }
    inline void setKFontChooserDialog_DragEnterEvent_IsBase(bool value) const { kfontchooserdialog_dragenterevent_isbase = value; }
    inline void setKFontChooserDialog_DragMoveEvent_IsBase(bool value) const { kfontchooserdialog_dragmoveevent_isbase = value; }
    inline void setKFontChooserDialog_DragLeaveEvent_IsBase(bool value) const { kfontchooserdialog_dragleaveevent_isbase = value; }
    inline void setKFontChooserDialog_DropEvent_IsBase(bool value) const { kfontchooserdialog_dropevent_isbase = value; }
    inline void setKFontChooserDialog_HideEvent_IsBase(bool value) const { kfontchooserdialog_hideevent_isbase = value; }
    inline void setKFontChooserDialog_NativeEvent_IsBase(bool value) const { kfontchooserdialog_nativeevent_isbase = value; }
    inline void setKFontChooserDialog_ChangeEvent_IsBase(bool value) const { kfontchooserdialog_changeevent_isbase = value; }
    inline void setKFontChooserDialog_Metric_IsBase(bool value) const { kfontchooserdialog_metric_isbase = value; }
    inline void setKFontChooserDialog_InitPainter_IsBase(bool value) const { kfontchooserdialog_initpainter_isbase = value; }
    inline void setKFontChooserDialog_Redirected_IsBase(bool value) const { kfontchooserdialog_redirected_isbase = value; }
    inline void setKFontChooserDialog_SharedPainter_IsBase(bool value) const { kfontchooserdialog_sharedpainter_isbase = value; }
    inline void setKFontChooserDialog_InputMethodEvent_IsBase(bool value) const { kfontchooserdialog_inputmethodevent_isbase = value; }
    inline void setKFontChooserDialog_InputMethodQuery_IsBase(bool value) const { kfontchooserdialog_inputmethodquery_isbase = value; }
    inline void setKFontChooserDialog_FocusNextPrevChild_IsBase(bool value) const { kfontchooserdialog_focusnextprevchild_isbase = value; }
    inline void setKFontChooserDialog_TimerEvent_IsBase(bool value) const { kfontchooserdialog_timerevent_isbase = value; }
    inline void setKFontChooserDialog_ChildEvent_IsBase(bool value) const { kfontchooserdialog_childevent_isbase = value; }
    inline void setKFontChooserDialog_CustomEvent_IsBase(bool value) const { kfontchooserdialog_customevent_isbase = value; }
    inline void setKFontChooserDialog_ConnectNotify_IsBase(bool value) const { kfontchooserdialog_connectnotify_isbase = value; }
    inline void setKFontChooserDialog_DisconnectNotify_IsBase(bool value) const { kfontchooserdialog_disconnectnotify_isbase = value; }
    inline void setKFontChooserDialog_AdjustPosition_IsBase(bool value) const { kfontchooserdialog_adjustposition_isbase = value; }
    inline void setKFontChooserDialog_UpdateMicroFocus_IsBase(bool value) const { kfontchooserdialog_updatemicrofocus_isbase = value; }
    inline void setKFontChooserDialog_Create_IsBase(bool value) const { kfontchooserdialog_create_isbase = value; }
    inline void setKFontChooserDialog_Destroy_IsBase(bool value) const { kfontchooserdialog_destroy_isbase = value; }
    inline void setKFontChooserDialog_FocusNextChild_IsBase(bool value) const { kfontchooserdialog_focusnextchild_isbase = value; }
    inline void setKFontChooserDialog_FocusPreviousChild_IsBase(bool value) const { kfontchooserdialog_focuspreviouschild_isbase = value; }
    inline void setKFontChooserDialog_Sender_IsBase(bool value) const { kfontchooserdialog_sender_isbase = value; }
    inline void setKFontChooserDialog_SenderSignalIndex_IsBase(bool value) const { kfontchooserdialog_sendersignalindex_isbase = value; }
    inline void setKFontChooserDialog_Receivers_IsBase(bool value) const { kfontchooserdialog_receivers_isbase = value; }
    inline void setKFontChooserDialog_IsSignalConnected_IsBase(bool value) const { kfontchooserdialog_issignalconnected_isbase = value; }
    inline void setKFontChooserDialog_GetDecodedMetricF_IsBase(bool value) const { kfontchooserdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontchooserdialog_metaobject_isbase) {
            kfontchooserdialog_metaobject_isbase = false;
            return KFontChooserDialog::metaObject();
        }
        auto metaobject_cb = kfontchooserdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFontChooserDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontchooserdialog_metacast_isbase) {
            kfontchooserdialog_metacast_isbase = false;
            return KFontChooserDialog::qt_metacast(param1);
        }
        auto metacast_cb = kfontchooserdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontchooserdialog_metacall_isbase) {
            kfontchooserdialog_metacall_isbase = false;
            return KFontChooserDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfontchooserdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfontchooserdialog_setvisible_isbase) {
            kfontchooserdialog_setvisible_isbase = false;
            KFontChooserDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kfontchooserdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfontchooserdialog_sizehint_isbase) {
            kfontchooserdialog_sizehint_isbase = false;
            return KFontChooserDialog::sizeHint();
        }
        auto sizehint_cb = kfontchooserdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KFontChooserDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfontchooserdialog_minimumsizehint_isbase) {
            kfontchooserdialog_minimumsizehint_isbase = false;
            return KFontChooserDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kfontchooserdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KFontChooserDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfontchooserdialog_open_isbase) {
            kfontchooserdialog_open_isbase = false;
            KFontChooserDialog::open();
            return;
        }
        auto open_cb = kfontchooserdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KFontChooserDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfontchooserdialog_exec_isbase) {
            kfontchooserdialog_exec_isbase = false;
            return KFontChooserDialog::exec();
        }
        auto exec_cb = kfontchooserdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfontchooserdialog_done_isbase) {
            kfontchooserdialog_done_isbase = false;
            KFontChooserDialog::done(param1);
            return;
        }
        auto done_cb = kfontchooserdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfontchooserdialog_accept_isbase) {
            kfontchooserdialog_accept_isbase = false;
            KFontChooserDialog::accept();
            return;
        }
        auto accept_cb = kfontchooserdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KFontChooserDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfontchooserdialog_reject_isbase) {
            kfontchooserdialog_reject_isbase = false;
            KFontChooserDialog::reject();
            return;
        }
        auto reject_cb = kfontchooserdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KFontChooserDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfontchooserdialog_keypressevent_isbase) {
            kfontchooserdialog_keypressevent_isbase = false;
            KFontChooserDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kfontchooserdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfontchooserdialog_closeevent_isbase) {
            kfontchooserdialog_closeevent_isbase = false;
            KFontChooserDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kfontchooserdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfontchooserdialog_showevent_isbase) {
            kfontchooserdialog_showevent_isbase = false;
            KFontChooserDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kfontchooserdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfontchooserdialog_resizeevent_isbase) {
            kfontchooserdialog_resizeevent_isbase = false;
            KFontChooserDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kfontchooserdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfontchooserdialog_contextmenuevent_isbase) {
            kfontchooserdialog_contextmenuevent_isbase = false;
            KFontChooserDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kfontchooserdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfontchooserdialog_eventfilter_isbase) {
            kfontchooserdialog_eventfilter_isbase = false;
            return KFontChooserDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kfontchooserdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontChooserDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfontchooserdialog_devtype_isbase) {
            kfontchooserdialog_devtype_isbase = false;
            return KFontChooserDialog::devType();
        }
        auto devtype_cb = kfontchooserdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfontchooserdialog_heightforwidth_isbase) {
            kfontchooserdialog_heightforwidth_isbase = false;
            return KFontChooserDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kfontchooserdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfontchooserdialog_hasheightforwidth_isbase) {
            kfontchooserdialog_hasheightforwidth_isbase = false;
            return KFontChooserDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kfontchooserdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KFontChooserDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfontchooserdialog_paintengine_isbase) {
            kfontchooserdialog_paintengine_isbase = false;
            return KFontChooserDialog::paintEngine();
        }
        auto paintengine_cb = kfontchooserdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KFontChooserDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontchooserdialog_event_isbase) {
            kfontchooserdialog_event_isbase = false;
            return KFontChooserDialog::event(event);
        }
        auto event_cb = kfontchooserdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousepressevent_isbase) {
            kfontchooserdialog_mousepressevent_isbase = false;
            KFontChooserDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kfontchooserdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousereleaseevent_isbase) {
            kfontchooserdialog_mousereleaseevent_isbase = false;
            KFontChooserDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kfontchooserdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousedoubleclickevent_isbase) {
            kfontchooserdialog_mousedoubleclickevent_isbase = false;
            KFontChooserDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kfontchooserdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfontchooserdialog_mousemoveevent_isbase) {
            kfontchooserdialog_mousemoveevent_isbase = false;
            KFontChooserDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kfontchooserdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfontchooserdialog_wheelevent_isbase) {
            kfontchooserdialog_wheelevent_isbase = false;
            KFontChooserDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kfontchooserdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfontchooserdialog_keyreleaseevent_isbase) {
            kfontchooserdialog_keyreleaseevent_isbase = false;
            KFontChooserDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kfontchooserdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfontchooserdialog_focusinevent_isbase) {
            kfontchooserdialog_focusinevent_isbase = false;
            KFontChooserDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kfontchooserdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfontchooserdialog_focusoutevent_isbase) {
            kfontchooserdialog_focusoutevent_isbase = false;
            KFontChooserDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kfontchooserdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfontchooserdialog_enterevent_isbase) {
            kfontchooserdialog_enterevent_isbase = false;
            KFontChooserDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kfontchooserdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfontchooserdialog_leaveevent_isbase) {
            kfontchooserdialog_leaveevent_isbase = false;
            KFontChooserDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kfontchooserdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfontchooserdialog_paintevent_isbase) {
            kfontchooserdialog_paintevent_isbase = false;
            KFontChooserDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kfontchooserdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfontchooserdialog_moveevent_isbase) {
            kfontchooserdialog_moveevent_isbase = false;
            KFontChooserDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kfontchooserdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfontchooserdialog_tabletevent_isbase) {
            kfontchooserdialog_tabletevent_isbase = false;
            KFontChooserDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kfontchooserdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfontchooserdialog_actionevent_isbase) {
            kfontchooserdialog_actionevent_isbase = false;
            KFontChooserDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kfontchooserdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfontchooserdialog_dragenterevent_isbase) {
            kfontchooserdialog_dragenterevent_isbase = false;
            KFontChooserDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kfontchooserdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfontchooserdialog_dragmoveevent_isbase) {
            kfontchooserdialog_dragmoveevent_isbase = false;
            KFontChooserDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kfontchooserdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfontchooserdialog_dragleaveevent_isbase) {
            kfontchooserdialog_dragleaveevent_isbase = false;
            KFontChooserDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kfontchooserdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfontchooserdialog_dropevent_isbase) {
            kfontchooserdialog_dropevent_isbase = false;
            KFontChooserDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kfontchooserdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfontchooserdialog_hideevent_isbase) {
            kfontchooserdialog_hideevent_isbase = false;
            KFontChooserDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kfontchooserdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfontchooserdialog_nativeevent_isbase) {
            kfontchooserdialog_nativeevent_isbase = false;
            return KFontChooserDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kfontchooserdialog_nativeevent_callback;
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
        return KFontChooserDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfontchooserdialog_changeevent_isbase) {
            kfontchooserdialog_changeevent_isbase = false;
            KFontChooserDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kfontchooserdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfontchooserdialog_metric_isbase) {
            kfontchooserdialog_metric_isbase = false;
            return KFontChooserDialog::metric(param1);
        }
        auto metric_cb = kfontchooserdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfontchooserdialog_initpainter_isbase) {
            kfontchooserdialog_initpainter_isbase = false;
            KFontChooserDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kfontchooserdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfontchooserdialog_redirected_isbase) {
            kfontchooserdialog_redirected_isbase = false;
            return KFontChooserDialog::redirected(offset);
        }
        auto redirected_cb = kfontchooserdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfontchooserdialog_sharedpainter_isbase) {
            kfontchooserdialog_sharedpainter_isbase = false;
            return KFontChooserDialog::sharedPainter();
        }
        auto sharedpainter_cb = kfontchooserdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KFontChooserDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfontchooserdialog_inputmethodevent_isbase) {
            kfontchooserdialog_inputmethodevent_isbase = false;
            KFontChooserDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kfontchooserdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfontchooserdialog_inputmethodquery_isbase) {
            kfontchooserdialog_inputmethodquery_isbase = false;
            return KFontChooserDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kfontchooserdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KFontChooserDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfontchooserdialog_focusnextprevchild_isbase) {
            kfontchooserdialog_focusnextprevchild_isbase = false;
            return KFontChooserDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kfontchooserdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontchooserdialog_timerevent_isbase) {
            kfontchooserdialog_timerevent_isbase = false;
            KFontChooserDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfontchooserdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontchooserdialog_childevent_isbase) {
            kfontchooserdialog_childevent_isbase = false;
            KFontChooserDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kfontchooserdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontchooserdialog_customevent_isbase) {
            kfontchooserdialog_customevent_isbase = false;
            KFontChooserDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kfontchooserdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontchooserdialog_connectnotify_isbase) {
            kfontchooserdialog_connectnotify_isbase = false;
            KFontChooserDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfontchooserdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontchooserdialog_disconnectnotify_isbase) {
            kfontchooserdialog_disconnectnotify_isbase = false;
            KFontChooserDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfontchooserdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kfontchooserdialog_adjustposition_isbase) {
            kfontchooserdialog_adjustposition_isbase = false;
            KFontChooserDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kfontchooserdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KFontChooserDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfontchooserdialog_updatemicrofocus_isbase) {
            kfontchooserdialog_updatemicrofocus_isbase = false;
            KFontChooserDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kfontchooserdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KFontChooserDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfontchooserdialog_create_isbase) {
            kfontchooserdialog_create_isbase = false;
            KFontChooserDialog::create();
            return;
        }
        auto create_cb = kfontchooserdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KFontChooserDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfontchooserdialog_destroy_isbase) {
            kfontchooserdialog_destroy_isbase = false;
            KFontChooserDialog::destroy();
            return;
        }
        auto destroy_cb = kfontchooserdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KFontChooserDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfontchooserdialog_focusnextchild_isbase) {
            kfontchooserdialog_focusnextchild_isbase = false;
            return KFontChooserDialog::focusNextChild();
        }
        auto focusnextchild_cb = kfontchooserdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KFontChooserDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfontchooserdialog_focuspreviouschild_isbase) {
            kfontchooserdialog_focuspreviouschild_isbase = false;
            return KFontChooserDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kfontchooserdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KFontChooserDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfontchooserdialog_sender_isbase) {
            kfontchooserdialog_sender_isbase = false;
            return KFontChooserDialog::sender();
        }
        auto sender_cb = kfontchooserdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFontChooserDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfontchooserdialog_sendersignalindex_isbase) {
            kfontchooserdialog_sendersignalindex_isbase = false;
            return KFontChooserDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfontchooserdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfontchooserdialog_receivers_isbase) {
            kfontchooserdialog_receivers_isbase = false;
            return KFontChooserDialog::receivers(signal);
        }
        auto receivers_cb = kfontchooserdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontChooserDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfontchooserdialog_issignalconnected_isbase) {
            kfontchooserdialog_issignalconnected_isbase = false;
            return KFontChooserDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfontchooserdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFontChooserDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfontchooserdialog_getdecodedmetricf_isbase) {
            kfontchooserdialog_getdecodedmetricf_isbase = false;
            return KFontChooserDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kfontchooserdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KFontChooserDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KFontChooserDialog_KeyPressEvent(KFontChooserDialog* self, QKeyEvent* param1);
    friend void KFontChooserDialog_SuperKeyPressEvent(KFontChooserDialog* self, QKeyEvent* param1);
    friend void KFontChooserDialog_CloseEvent(KFontChooserDialog* self, QCloseEvent* param1);
    friend void KFontChooserDialog_SuperCloseEvent(KFontChooserDialog* self, QCloseEvent* param1);
    friend void KFontChooserDialog_ShowEvent(KFontChooserDialog* self, QShowEvent* param1);
    friend void KFontChooserDialog_SuperShowEvent(KFontChooserDialog* self, QShowEvent* param1);
    friend void KFontChooserDialog_ResizeEvent(KFontChooserDialog* self, QResizeEvent* param1);
    friend void KFontChooserDialog_SuperResizeEvent(KFontChooserDialog* self, QResizeEvent* param1);
    friend void KFontChooserDialog_ContextMenuEvent(KFontChooserDialog* self, QContextMenuEvent* param1);
    friend void KFontChooserDialog_SuperContextMenuEvent(KFontChooserDialog* self, QContextMenuEvent* param1);
    friend bool KFontChooserDialog_EventFilter(KFontChooserDialog* self, QObject* param1, QEvent* param2);
    friend bool KFontChooserDialog_SuperEventFilter(KFontChooserDialog* self, QObject* param1, QEvent* param2);
    friend bool KFontChooserDialog_Event(KFontChooserDialog* self, QEvent* event);
    friend bool KFontChooserDialog_SuperEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_MousePressEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperMousePressEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_MouseReleaseEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperMouseReleaseEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_MouseDoubleClickEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperMouseDoubleClickEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_MouseMoveEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_SuperMouseMoveEvent(KFontChooserDialog* self, QMouseEvent* event);
    friend void KFontChooserDialog_WheelEvent(KFontChooserDialog* self, QWheelEvent* event);
    friend void KFontChooserDialog_SuperWheelEvent(KFontChooserDialog* self, QWheelEvent* event);
    friend void KFontChooserDialog_KeyReleaseEvent(KFontChooserDialog* self, QKeyEvent* event);
    friend void KFontChooserDialog_SuperKeyReleaseEvent(KFontChooserDialog* self, QKeyEvent* event);
    friend void KFontChooserDialog_FocusInEvent(KFontChooserDialog* self, QFocusEvent* event);
    friend void KFontChooserDialog_SuperFocusInEvent(KFontChooserDialog* self, QFocusEvent* event);
    friend void KFontChooserDialog_FocusOutEvent(KFontChooserDialog* self, QFocusEvent* event);
    friend void KFontChooserDialog_SuperFocusOutEvent(KFontChooserDialog* self, QFocusEvent* event);
    friend void KFontChooserDialog_EnterEvent(KFontChooserDialog* self, QEnterEvent* event);
    friend void KFontChooserDialog_SuperEnterEvent(KFontChooserDialog* self, QEnterEvent* event);
    friend void KFontChooserDialog_LeaveEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_SuperLeaveEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_PaintEvent(KFontChooserDialog* self, QPaintEvent* event);
    friend void KFontChooserDialog_SuperPaintEvent(KFontChooserDialog* self, QPaintEvent* event);
    friend void KFontChooserDialog_MoveEvent(KFontChooserDialog* self, QMoveEvent* event);
    friend void KFontChooserDialog_SuperMoveEvent(KFontChooserDialog* self, QMoveEvent* event);
    friend void KFontChooserDialog_TabletEvent(KFontChooserDialog* self, QTabletEvent* event);
    friend void KFontChooserDialog_SuperTabletEvent(KFontChooserDialog* self, QTabletEvent* event);
    friend void KFontChooserDialog_ActionEvent(KFontChooserDialog* self, QActionEvent* event);
    friend void KFontChooserDialog_SuperActionEvent(KFontChooserDialog* self, QActionEvent* event);
    friend void KFontChooserDialog_DragEnterEvent(KFontChooserDialog* self, QDragEnterEvent* event);
    friend void KFontChooserDialog_SuperDragEnterEvent(KFontChooserDialog* self, QDragEnterEvent* event);
    friend void KFontChooserDialog_DragMoveEvent(KFontChooserDialog* self, QDragMoveEvent* event);
    friend void KFontChooserDialog_SuperDragMoveEvent(KFontChooserDialog* self, QDragMoveEvent* event);
    friend void KFontChooserDialog_DragLeaveEvent(KFontChooserDialog* self, QDragLeaveEvent* event);
    friend void KFontChooserDialog_SuperDragLeaveEvent(KFontChooserDialog* self, QDragLeaveEvent* event);
    friend void KFontChooserDialog_DropEvent(KFontChooserDialog* self, QDropEvent* event);
    friend void KFontChooserDialog_SuperDropEvent(KFontChooserDialog* self, QDropEvent* event);
    friend void KFontChooserDialog_HideEvent(KFontChooserDialog* self, QHideEvent* event);
    friend void KFontChooserDialog_SuperHideEvent(KFontChooserDialog* self, QHideEvent* event);
    friend bool KFontChooserDialog_NativeEvent(KFontChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFontChooserDialog_SuperNativeEvent(KFontChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFontChooserDialog_ChangeEvent(KFontChooserDialog* self, QEvent* param1);
    friend void KFontChooserDialog_SuperChangeEvent(KFontChooserDialog* self, QEvent* param1);
    friend int KFontChooserDialog_Metric(const KFontChooserDialog* self, int param1);
    friend int KFontChooserDialog_SuperMetric(const KFontChooserDialog* self, int param1);
    friend void KFontChooserDialog_InitPainter(const KFontChooserDialog* self, QPainter* painter);
    friend void KFontChooserDialog_SuperInitPainter(const KFontChooserDialog* self, QPainter* painter);
    friend QPaintDevice* KFontChooserDialog_Redirected(const KFontChooserDialog* self, QPoint* offset);
    friend QPaintDevice* KFontChooserDialog_SuperRedirected(const KFontChooserDialog* self, QPoint* offset);
    friend QPainter* KFontChooserDialog_SharedPainter(const KFontChooserDialog* self);
    friend QPainter* KFontChooserDialog_SuperSharedPainter(const KFontChooserDialog* self);
    friend void KFontChooserDialog_InputMethodEvent(KFontChooserDialog* self, QInputMethodEvent* param1);
    friend void KFontChooserDialog_SuperInputMethodEvent(KFontChooserDialog* self, QInputMethodEvent* param1);
    friend bool KFontChooserDialog_FocusNextPrevChild(KFontChooserDialog* self, bool next);
    friend bool KFontChooserDialog_SuperFocusNextPrevChild(KFontChooserDialog* self, bool next);
    friend void KFontChooserDialog_TimerEvent(KFontChooserDialog* self, QTimerEvent* event);
    friend void KFontChooserDialog_SuperTimerEvent(KFontChooserDialog* self, QTimerEvent* event);
    friend void KFontChooserDialog_ChildEvent(KFontChooserDialog* self, QChildEvent* event);
    friend void KFontChooserDialog_SuperChildEvent(KFontChooserDialog* self, QChildEvent* event);
    friend void KFontChooserDialog_CustomEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_SuperCustomEvent(KFontChooserDialog* self, QEvent* event);
    friend void KFontChooserDialog_ConnectNotify(KFontChooserDialog* self, const QMetaMethod* signal);
    friend void KFontChooserDialog_SuperConnectNotify(KFontChooserDialog* self, const QMetaMethod* signal);
    friend void KFontChooserDialog_DisconnectNotify(KFontChooserDialog* self, const QMetaMethod* signal);
    friend void KFontChooserDialog_SuperDisconnectNotify(KFontChooserDialog* self, const QMetaMethod* signal);
    friend void KFontChooserDialog_AdjustPosition(KFontChooserDialog* self, QWidget* param1);
    friend void KFontChooserDialog_SuperAdjustPosition(KFontChooserDialog* self, QWidget* param1);
    friend void KFontChooserDialog_UpdateMicroFocus(KFontChooserDialog* self);
    friend void KFontChooserDialog_SuperUpdateMicroFocus(KFontChooserDialog* self);
    friend void KFontChooserDialog_Create(KFontChooserDialog* self);
    friend void KFontChooserDialog_SuperCreate(KFontChooserDialog* self);
    friend void KFontChooserDialog_Destroy(KFontChooserDialog* self);
    friend void KFontChooserDialog_SuperDestroy(KFontChooserDialog* self);
    friend bool KFontChooserDialog_FocusNextChild(KFontChooserDialog* self);
    friend bool KFontChooserDialog_SuperFocusNextChild(KFontChooserDialog* self);
    friend bool KFontChooserDialog_FocusPreviousChild(KFontChooserDialog* self);
    friend bool KFontChooserDialog_SuperFocusPreviousChild(KFontChooserDialog* self);
    friend QObject* KFontChooserDialog_Sender(const KFontChooserDialog* self);
    friend QObject* KFontChooserDialog_SuperSender(const KFontChooserDialog* self);
    friend int KFontChooserDialog_SenderSignalIndex(const KFontChooserDialog* self);
    friend int KFontChooserDialog_SuperSenderSignalIndex(const KFontChooserDialog* self);
    friend int KFontChooserDialog_Receivers(const KFontChooserDialog* self, const char* signal);
    friend int KFontChooserDialog_SuperReceivers(const KFontChooserDialog* self, const char* signal);
    friend bool KFontChooserDialog_IsSignalConnected(const KFontChooserDialog* self, const QMetaMethod* signal);
    friend bool KFontChooserDialog_SuperIsSignalConnected(const KFontChooserDialog* self, const QMetaMethod* signal);
    friend double KFontChooserDialog_GetDecodedMetricF(const KFontChooserDialog* self, int metricA, int metricB);
    friend double KFontChooserDialog_SuperGetDecodedMetricF(const KFontChooserDialog* self, int metricA, int metricB);
};

#endif
