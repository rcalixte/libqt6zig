#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALSELECTSPECIALCHARDIALOG_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALSELECTSPECIALCHARDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAddonsWidgets::SelectSpecialCharDialog so that we can call protected methods
class VirtualTextAddonsWidgetsSelectSpecialCharDialog final : public TextAddonsWidgets::SelectSpecialCharDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualTextAddonsWidgetsSelectSpecialCharDialog = true;

    // Virtual class public types (including callbacks)
    using TextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback = QMetaObject* (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback = void* (*)(TextAddonsWidgets__SelectSpecialCharDialog*, const char*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback = int (*)(TextAddonsWidgets__SelectSpecialCharDialog*, int, int, void**);
    using TextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, bool);
    using TextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback = QSize* (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback = QSize* (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Open_Callback = void (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback = int (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Done_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback = void (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback = void (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QKeyEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QCloseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QShowEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QResizeEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QContextMenuEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QObject*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback = int (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback = int (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback = bool (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Event_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QWheelEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QKeyEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QFocusEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QFocusEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEnterEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QPaintEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMoveEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QTabletEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QActionEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDragEnterEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDragMoveEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDragLeaveEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDropEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QHideEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, libqt_string, void*, intptr_t*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback = int (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback = void (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, QPainter*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback = QPaintDevice* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, QPoint*);
    using TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback = QPainter* (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QInputMethodEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback = QVariant* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, bool);
    using TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QTimerEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QChildEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMetaMethod*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMetaMethod*);
    using TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QWidget*);
    using TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_Callback = void (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Create_Callback = void (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Destroy_Callback = void (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_Callback = bool (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_Callback = bool (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Sender_Callback = QObject* (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_Callback = int (*)();
    using TextAddonsWidgets__SelectSpecialCharDialog_Receivers_Callback = int (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, const char*);
    using TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_Callback = bool (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, QMetaMethod*);
    using TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_Callback = double (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, int, int);

  protected:
    // Instance callback storage
    TextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback textaddonswidgets__selectspecialchardialog_metaobject_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback textaddonswidgets__selectspecialchardialog_metacast_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback textaddonswidgets__selectspecialchardialog_metacall_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback textaddonswidgets__selectspecialchardialog_setvisible_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback textaddonswidgets__selectspecialchardialog_sizehint_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback textaddonswidgets__selectspecialchardialog_minimumsizehint_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Open_Callback textaddonswidgets__selectspecialchardialog_open_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback textaddonswidgets__selectspecialchardialog_exec_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Done_Callback textaddonswidgets__selectspecialchardialog_done_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback textaddonswidgets__selectspecialchardialog_accept_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback textaddonswidgets__selectspecialchardialog_reject_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback textaddonswidgets__selectspecialchardialog_keypressevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback textaddonswidgets__selectspecialchardialog_closeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback textaddonswidgets__selectspecialchardialog_showevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback textaddonswidgets__selectspecialchardialog_resizeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback textaddonswidgets__selectspecialchardialog_contextmenuevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback textaddonswidgets__selectspecialchardialog_eventfilter_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback textaddonswidgets__selectspecialchardialog_devtype_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback textaddonswidgets__selectspecialchardialog_heightforwidth_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback textaddonswidgets__selectspecialchardialog_hasheightforwidth_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback textaddonswidgets__selectspecialchardialog_paintengine_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Event_Callback textaddonswidgets__selectspecialchardialog_event_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback textaddonswidgets__selectspecialchardialog_mousepressevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback textaddonswidgets__selectspecialchardialog_mousereleaseevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback textaddonswidgets__selectspecialchardialog_mousemoveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback textaddonswidgets__selectspecialchardialog_wheelevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback textaddonswidgets__selectspecialchardialog_keyreleaseevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback textaddonswidgets__selectspecialchardialog_focusinevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback textaddonswidgets__selectspecialchardialog_focusoutevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback textaddonswidgets__selectspecialchardialog_enterevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback textaddonswidgets__selectspecialchardialog_leaveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback textaddonswidgets__selectspecialchardialog_paintevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback textaddonswidgets__selectspecialchardialog_moveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback textaddonswidgets__selectspecialchardialog_tabletevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback textaddonswidgets__selectspecialchardialog_actionevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback textaddonswidgets__selectspecialchardialog_dragenterevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback textaddonswidgets__selectspecialchardialog_dragmoveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback textaddonswidgets__selectspecialchardialog_dragleaveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback textaddonswidgets__selectspecialchardialog_dropevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback textaddonswidgets__selectspecialchardialog_hideevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback textaddonswidgets__selectspecialchardialog_nativeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback textaddonswidgets__selectspecialchardialog_changeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback textaddonswidgets__selectspecialchardialog_metric_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback textaddonswidgets__selectspecialchardialog_initpainter_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback textaddonswidgets__selectspecialchardialog_redirected_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback textaddonswidgets__selectspecialchardialog_sharedpainter_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback textaddonswidgets__selectspecialchardialog_inputmethodevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback textaddonswidgets__selectspecialchardialog_inputmethodquery_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback textaddonswidgets__selectspecialchardialog_focusnextprevchild_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback textaddonswidgets__selectspecialchardialog_timerevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback textaddonswidgets__selectspecialchardialog_childevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback textaddonswidgets__selectspecialchardialog_customevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback textaddonswidgets__selectspecialchardialog_connectnotify_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback textaddonswidgets__selectspecialchardialog_disconnectnotify_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_Callback textaddonswidgets__selectspecialchardialog_adjustposition_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_Callback textaddonswidgets__selectspecialchardialog_updatemicrofocus_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Create_Callback textaddonswidgets__selectspecialchardialog_create_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Destroy_Callback textaddonswidgets__selectspecialchardialog_destroy_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_Callback textaddonswidgets__selectspecialchardialog_focusnextchild_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_Callback textaddonswidgets__selectspecialchardialog_focuspreviouschild_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Sender_Callback textaddonswidgets__selectspecialchardialog_sender_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_Callback textaddonswidgets__selectspecialchardialog_sendersignalindex_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Receivers_Callback textaddonswidgets__selectspecialchardialog_receivers_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_Callback textaddonswidgets__selectspecialchardialog_issignalconnected_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_Callback textaddonswidgets__selectspecialchardialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textaddonswidgets__selectspecialchardialog_metaobject_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_metacast_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_metacall_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_setvisible_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_sizehint_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_minimumsizehint_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_open_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_exec_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_done_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_accept_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_reject_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_keypressevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_closeevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_showevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_resizeevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_contextmenuevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_eventfilter_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_devtype_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_heightforwidth_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_hasheightforwidth_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_paintengine_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_event_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_mousepressevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_mousereleaseevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_mousemoveevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_wheelevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_keyreleaseevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_focusinevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_focusoutevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_enterevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_leaveevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_paintevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_moveevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_tabletevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_actionevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_dragenterevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_dragmoveevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_dragleaveevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_dropevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_hideevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_nativeevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_changeevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_metric_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_initpainter_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_redirected_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_sharedpainter_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_inputmethodevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_inputmethodquery_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_focusnextprevchild_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_timerevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_childevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_customevent_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_connectnotify_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_disconnectnotify_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_adjustposition_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_updatemicrofocus_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_create_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_destroy_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_focusnextchild_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_focuspreviouschild_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_sender_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_sendersignalindex_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_receivers_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_issignalconnected_isbase = false;
    mutable bool textaddonswidgets__selectspecialchardialog_getdecodedmetricf_isbase = false;

  public:
    VirtualTextAddonsWidgetsSelectSpecialCharDialog(QWidget* parent) : TextAddonsWidgets::SelectSpecialCharDialog(parent) {};

    // Callback setters
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback(TextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback cb) { textaddonswidgets__selectspecialchardialog_metaobject_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback cb) { textaddonswidgets__selectspecialchardialog_metacast_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback cb) { textaddonswidgets__selectspecialchardialog_metacall_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback(TextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback cb) { textaddonswidgets__selectspecialchardialog_setvisible_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback(TextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback cb) { textaddonswidgets__selectspecialchardialog_sizehint_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback(TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback cb) { textaddonswidgets__selectspecialchardialog_minimumsizehint_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Open_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Open_Callback cb) { textaddonswidgets__selectspecialchardialog_open_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback cb) { textaddonswidgets__selectspecialchardialog_exec_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Done_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Done_Callback cb) { textaddonswidgets__selectspecialchardialog_done_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback cb) { textaddonswidgets__selectspecialchardialog_accept_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback cb) { textaddonswidgets__selectspecialchardialog_reject_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_keypressevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_closeevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_showevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_resizeevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_contextmenuevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback(TextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback cb) { textaddonswidgets__selectspecialchardialog_eventfilter_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback(TextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback cb) { textaddonswidgets__selectspecialchardialog_devtype_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback(TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback cb) { textaddonswidgets__selectspecialchardialog_heightforwidth_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback(TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback cb) { textaddonswidgets__selectspecialchardialog_hasheightforwidth_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback(TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback cb) { textaddonswidgets__selectspecialchardialog_paintengine_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Event_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Event_Callback cb) { textaddonswidgets__selectspecialchardialog_event_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_mousepressevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_mousereleaseevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_mousemoveevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_wheelevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_keyreleaseevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_focusinevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_focusoutevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_enterevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_leaveevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_paintevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_moveevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_tabletevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_actionevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_dragenterevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_dragmoveevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_dragleaveevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_dropevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_hideevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_nativeevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_changeevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback cb) { textaddonswidgets__selectspecialchardialog_metric_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback(TextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback cb) { textaddonswidgets__selectspecialchardialog_initpainter_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback cb) { textaddonswidgets__selectspecialchardialog_redirected_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback(TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback cb) { textaddonswidgets__selectspecialchardialog_sharedpainter_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_inputmethodevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback(TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback cb) { textaddonswidgets__selectspecialchardialog_inputmethodquery_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback(TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback cb) { textaddonswidgets__selectspecialchardialog_focusnextprevchild_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_timerevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_childevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback(TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback cb) { textaddonswidgets__selectspecialchardialog_customevent_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback(TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback cb) { textaddonswidgets__selectspecialchardialog_connectnotify_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback(TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback cb) { textaddonswidgets__selectspecialchardialog_disconnectnotify_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_Callback(TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_Callback cb) { textaddonswidgets__selectspecialchardialog_adjustposition_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_Callback(TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_Callback cb) { textaddonswidgets__selectspecialchardialog_updatemicrofocus_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Create_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Create_Callback cb) { textaddonswidgets__selectspecialchardialog_create_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Destroy_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Destroy_Callback cb) { textaddonswidgets__selectspecialchardialog_destroy_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_Callback(TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_Callback cb) { textaddonswidgets__selectspecialchardialog_focusnextchild_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_Callback(TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_Callback cb) { textaddonswidgets__selectspecialchardialog_focuspreviouschild_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Sender_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Sender_Callback cb) { textaddonswidgets__selectspecialchardialog_sender_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_Callback(TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_Callback cb) { textaddonswidgets__selectspecialchardialog_sendersignalindex_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Receivers_Callback(TextAddonsWidgets__SelectSpecialCharDialog_Receivers_Callback cb) { textaddonswidgets__selectspecialchardialog_receivers_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_Callback(TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_Callback cb) { textaddonswidgets__selectspecialchardialog_issignalconnected_callback = cb; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_Callback(TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_Callback cb) { textaddonswidgets__selectspecialchardialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MetaObject_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_metaobject_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Metacast_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_metacast_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Metacall_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_metacall_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SetVisible_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_setvisible_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SizeHint_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_sizehint_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_minimumsizehint_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Open_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_open_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Exec_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_exec_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Done_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_done_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Accept_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_accept_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Reject_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_reject_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_keypressevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_closeevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_showevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_resizeevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_contextmenuevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_EventFilter_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_eventfilter_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DevType_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_devtype_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_heightforwidth_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_hasheightforwidth_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_paintengine_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Event_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_event_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_mousepressevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_mousereleaseevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_mousemoveevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_wheelevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_keyreleaseevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_focusinevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_focusoutevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_enterevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_leaveevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_paintevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_moveevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_tabletevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_actionevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_dragenterevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_dragmoveevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_dragleaveevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DropEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_dropevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_HideEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_hideevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_nativeevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_changeevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Metric_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_metric_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_InitPainter_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_initpainter_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Redirected_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_redirected_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_sharedpainter_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_inputmethodevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_inputmethodquery_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_focusnextprevchild_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_timerevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_childevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_customevent_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_connectnotify_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_disconnectnotify_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_adjustposition_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_updatemicrofocus_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Create_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_create_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Destroy_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_destroy_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_focusnextchild_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_focuspreviouschild_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Sender_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_sender_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_sendersignalindex_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_Receivers_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_receivers_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_issignalconnected_isbase = value; }
    inline void setTextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_IsBase(bool value) const { textaddonswidgets__selectspecialchardialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textaddonswidgets__selectspecialchardialog_metaobject_isbase) {
            textaddonswidgets__selectspecialchardialog_metaobject_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::metaObject();
        }
        auto metaobject_cb = textaddonswidgets__selectspecialchardialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textaddonswidgets__selectspecialchardialog_metacast_isbase) {
            textaddonswidgets__selectspecialchardialog_metacast_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::qt_metacast(param1);
        }
        auto metacast_cb = textaddonswidgets__selectspecialchardialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textaddonswidgets__selectspecialchardialog_metacall_isbase) {
            textaddonswidgets__selectspecialchardialog_metacall_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textaddonswidgets__selectspecialchardialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textaddonswidgets__selectspecialchardialog_setvisible_isbase) {
            textaddonswidgets__selectspecialchardialog_setvisible_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = textaddonswidgets__selectspecialchardialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textaddonswidgets__selectspecialchardialog_sizehint_isbase) {
            textaddonswidgets__selectspecialchardialog_sizehint_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::sizeHint();
        }
        auto sizehint_cb = textaddonswidgets__selectspecialchardialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textaddonswidgets__selectspecialchardialog_minimumsizehint_isbase) {
            textaddonswidgets__selectspecialchardialog_minimumsizehint_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = textaddonswidgets__selectspecialchardialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (textaddonswidgets__selectspecialchardialog_open_isbase) {
            textaddonswidgets__selectspecialchardialog_open_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::open();
            return;
        }
        auto open_cb = textaddonswidgets__selectspecialchardialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (textaddonswidgets__selectspecialchardialog_exec_isbase) {
            textaddonswidgets__selectspecialchardialog_exec_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::exec();
        }
        auto exec_cb = textaddonswidgets__selectspecialchardialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (textaddonswidgets__selectspecialchardialog_done_isbase) {
            textaddonswidgets__selectspecialchardialog_done_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::done(param1);
            return;
        }
        auto done_cb = textaddonswidgets__selectspecialchardialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (textaddonswidgets__selectspecialchardialog_accept_isbase) {
            textaddonswidgets__selectspecialchardialog_accept_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::accept();
            return;
        }
        auto accept_cb = textaddonswidgets__selectspecialchardialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (textaddonswidgets__selectspecialchardialog_reject_isbase) {
            textaddonswidgets__selectspecialchardialog_reject_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::reject();
            return;
        }
        auto reject_cb = textaddonswidgets__selectspecialchardialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_keypressevent_isbase) {
            textaddonswidgets__selectspecialchardialog_keypressevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = textaddonswidgets__selectspecialchardialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_closeevent_isbase) {
            textaddonswidgets__selectspecialchardialog_closeevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = textaddonswidgets__selectspecialchardialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_showevent_isbase) {
            textaddonswidgets__selectspecialchardialog_showevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = textaddonswidgets__selectspecialchardialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_resizeevent_isbase) {
            textaddonswidgets__selectspecialchardialog_resizeevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = textaddonswidgets__selectspecialchardialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_contextmenuevent_isbase) {
            textaddonswidgets__selectspecialchardialog_contextmenuevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = textaddonswidgets__selectspecialchardialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textaddonswidgets__selectspecialchardialog_eventfilter_isbase) {
            textaddonswidgets__selectspecialchardialog_eventfilter_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textaddonswidgets__selectspecialchardialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textaddonswidgets__selectspecialchardialog_devtype_isbase) {
            textaddonswidgets__selectspecialchardialog_devtype_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::devType();
        }
        auto devtype_cb = textaddonswidgets__selectspecialchardialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textaddonswidgets__selectspecialchardialog_heightforwidth_isbase) {
            textaddonswidgets__selectspecialchardialog_heightforwidth_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = textaddonswidgets__selectspecialchardialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textaddonswidgets__selectspecialchardialog_hasheightforwidth_isbase) {
            textaddonswidgets__selectspecialchardialog_hasheightforwidth_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textaddonswidgets__selectspecialchardialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textaddonswidgets__selectspecialchardialog_paintengine_isbase) {
            textaddonswidgets__selectspecialchardialog_paintengine_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::paintEngine();
        }
        auto paintengine_cb = textaddonswidgets__selectspecialchardialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_event_isbase) {
            textaddonswidgets__selectspecialchardialog_event_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::event(event);
        }
        auto event_cb = textaddonswidgets__selectspecialchardialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousepressevent_isbase) {
            textaddonswidgets__selectspecialchardialog_mousepressevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textaddonswidgets__selectspecialchardialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousereleaseevent_isbase) {
            textaddonswidgets__selectspecialchardialog_mousereleaseevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textaddonswidgets__selectspecialchardialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_isbase) {
            textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousemoveevent_isbase) {
            textaddonswidgets__selectspecialchardialog_mousemoveevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textaddonswidgets__selectspecialchardialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_wheelevent_isbase) {
            textaddonswidgets__selectspecialchardialog_wheelevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textaddonswidgets__selectspecialchardialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_keyreleaseevent_isbase) {
            textaddonswidgets__selectspecialchardialog_keyreleaseevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textaddonswidgets__selectspecialchardialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_focusinevent_isbase) {
            textaddonswidgets__selectspecialchardialog_focusinevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textaddonswidgets__selectspecialchardialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_focusoutevent_isbase) {
            textaddonswidgets__selectspecialchardialog_focusoutevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textaddonswidgets__selectspecialchardialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_enterevent_isbase) {
            textaddonswidgets__selectspecialchardialog_enterevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = textaddonswidgets__selectspecialchardialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_leaveevent_isbase) {
            textaddonswidgets__selectspecialchardialog_leaveevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textaddonswidgets__selectspecialchardialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_paintevent_isbase) {
            textaddonswidgets__selectspecialchardialog_paintevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = textaddonswidgets__selectspecialchardialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_moveevent_isbase) {
            textaddonswidgets__selectspecialchardialog_moveevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = textaddonswidgets__selectspecialchardialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_tabletevent_isbase) {
            textaddonswidgets__selectspecialchardialog_tabletevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textaddonswidgets__selectspecialchardialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_actionevent_isbase) {
            textaddonswidgets__selectspecialchardialog_actionevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = textaddonswidgets__selectspecialchardialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dragenterevent_isbase) {
            textaddonswidgets__selectspecialchardialog_dragenterevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textaddonswidgets__selectspecialchardialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dragmoveevent_isbase) {
            textaddonswidgets__selectspecialchardialog_dragmoveevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textaddonswidgets__selectspecialchardialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dragleaveevent_isbase) {
            textaddonswidgets__selectspecialchardialog_dragleaveevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textaddonswidgets__selectspecialchardialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dropevent_isbase) {
            textaddonswidgets__selectspecialchardialog_dropevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = textaddonswidgets__selectspecialchardialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_hideevent_isbase) {
            textaddonswidgets__selectspecialchardialog_hideevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = textaddonswidgets__selectspecialchardialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textaddonswidgets__selectspecialchardialog_nativeevent_isbase) {
            textaddonswidgets__selectspecialchardialog_nativeevent_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textaddonswidgets__selectspecialchardialog_nativeevent_callback;
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
        return TextAddonsWidgets__SelectSpecialCharDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_changeevent_isbase) {
            textaddonswidgets__selectspecialchardialog_changeevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textaddonswidgets__selectspecialchardialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textaddonswidgets__selectspecialchardialog_metric_isbase) {
            textaddonswidgets__selectspecialchardialog_metric_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::metric(param1);
        }
        auto metric_cb = textaddonswidgets__selectspecialchardialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textaddonswidgets__selectspecialchardialog_initpainter_isbase) {
            textaddonswidgets__selectspecialchardialog_initpainter_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = textaddonswidgets__selectspecialchardialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textaddonswidgets__selectspecialchardialog_redirected_isbase) {
            textaddonswidgets__selectspecialchardialog_redirected_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::redirected(offset);
        }
        auto redirected_cb = textaddonswidgets__selectspecialchardialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textaddonswidgets__selectspecialchardialog_sharedpainter_isbase) {
            textaddonswidgets__selectspecialchardialog_sharedpainter_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::sharedPainter();
        }
        auto sharedpainter_cb = textaddonswidgets__selectspecialchardialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_inputmethodevent_isbase) {
            textaddonswidgets__selectspecialchardialog_inputmethodevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textaddonswidgets__selectspecialchardialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textaddonswidgets__selectspecialchardialog_inputmethodquery_isbase) {
            textaddonswidgets__selectspecialchardialog_inputmethodquery_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textaddonswidgets__selectspecialchardialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textaddonswidgets__selectspecialchardialog_focusnextprevchild_isbase) {
            textaddonswidgets__selectspecialchardialog_focusnextprevchild_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textaddonswidgets__selectspecialchardialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_timerevent_isbase) {
            textaddonswidgets__selectspecialchardialog_timerevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = textaddonswidgets__selectspecialchardialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_childevent_isbase) {
            textaddonswidgets__selectspecialchardialog_childevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::childEvent(event);
            return;
        }
        auto childevent_cb = textaddonswidgets__selectspecialchardialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_customevent_isbase) {
            textaddonswidgets__selectspecialchardialog_customevent_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::customEvent(event);
            return;
        }
        auto customevent_cb = textaddonswidgets__selectspecialchardialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__selectspecialchardialog_connectnotify_isbase) {
            textaddonswidgets__selectspecialchardialog_connectnotify_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textaddonswidgets__selectspecialchardialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__selectspecialchardialog_disconnectnotify_isbase) {
            textaddonswidgets__selectspecialchardialog_disconnectnotify_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textaddonswidgets__selectspecialchardialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (textaddonswidgets__selectspecialchardialog_adjustposition_isbase) {
            textaddonswidgets__selectspecialchardialog_adjustposition_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = textaddonswidgets__selectspecialchardialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textaddonswidgets__selectspecialchardialog_updatemicrofocus_isbase) {
            textaddonswidgets__selectspecialchardialog_updatemicrofocus_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textaddonswidgets__selectspecialchardialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textaddonswidgets__selectspecialchardialog_create_isbase) {
            textaddonswidgets__selectspecialchardialog_create_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::create();
            return;
        }
        auto create_cb = textaddonswidgets__selectspecialchardialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textaddonswidgets__selectspecialchardialog_destroy_isbase) {
            textaddonswidgets__selectspecialchardialog_destroy_isbase = false;
            TextAddonsWidgets__SelectSpecialCharDialog::destroy();
            return;
        }
        auto destroy_cb = textaddonswidgets__selectspecialchardialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textaddonswidgets__selectspecialchardialog_focusnextchild_isbase) {
            textaddonswidgets__selectspecialchardialog_focusnextchild_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::focusNextChild();
        }
        auto focusnextchild_cb = textaddonswidgets__selectspecialchardialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textaddonswidgets__selectspecialchardialog_focuspreviouschild_isbase) {
            textaddonswidgets__selectspecialchardialog_focuspreviouschild_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textaddonswidgets__selectspecialchardialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textaddonswidgets__selectspecialchardialog_sender_isbase) {
            textaddonswidgets__selectspecialchardialog_sender_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::sender();
        }
        auto sender_cb = textaddonswidgets__selectspecialchardialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textaddonswidgets__selectspecialchardialog_sendersignalindex_isbase) {
            textaddonswidgets__selectspecialchardialog_sendersignalindex_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = textaddonswidgets__selectspecialchardialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textaddonswidgets__selectspecialchardialog_receivers_isbase) {
            textaddonswidgets__selectspecialchardialog_receivers_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::receivers(signal);
        }
        auto receivers_cb = textaddonswidgets__selectspecialchardialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textaddonswidgets__selectspecialchardialog_issignalconnected_isbase) {
            textaddonswidgets__selectspecialchardialog_issignalconnected_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textaddonswidgets__selectspecialchardialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textaddonswidgets__selectspecialchardialog_getdecodedmetricf_isbase) {
            textaddonswidgets__selectspecialchardialog_getdecodedmetricf_isbase = false;
            return TextAddonsWidgets__SelectSpecialCharDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textaddonswidgets__selectspecialchardialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QKeyEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyPressEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QKeyEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QCloseEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperCloseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QCloseEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QShowEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperShowEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QShowEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QResizeEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperResizeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QResizeEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QContextMenuEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperContextMenuEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QContextMenuEvent* param1);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_EventFilter(TextAddonsWidgets::SelectSpecialCharDialog* self, QObject* param1, QEvent* param2);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEventFilter(TextAddonsWidgets::SelectSpecialCharDialog* self, QObject* param1, QEvent* param2);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_Event(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMousePressEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseReleaseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseDoubleClickEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QWheelEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperWheelEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QWheelEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyReleaseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusInEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusOutEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEnterEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperEnterEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEnterEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperLeaveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QPaintEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QPaintEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMoveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMoveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QTabletEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperTabletEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QTabletEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QActionEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperActionEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QActionEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragEnterEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragEnterEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragEnterEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragMoveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragMoveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragLeaveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragLeaveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragLeaveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_DropEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDropEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDropEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDropEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_HideEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QHideEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperHideEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QHideEvent* event);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperNativeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperChangeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* param1);
    friend int TextAddonsWidgets__SelectSpecialCharDialog_Metric(const TextAddonsWidgets::SelectSpecialCharDialog* self, int param1);
    friend int TextAddonsWidgets__SelectSpecialCharDialog_SuperMetric(const TextAddonsWidgets::SelectSpecialCharDialog* self, int param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_InitPainter(const TextAddonsWidgets::SelectSpecialCharDialog* self, QPainter* painter);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperInitPainter(const TextAddonsWidgets::SelectSpecialCharDialog* self, QPainter* painter);
    friend QPaintDevice* TextAddonsWidgets__SelectSpecialCharDialog_Redirected(const TextAddonsWidgets::SelectSpecialCharDialog* self, QPoint* offset);
    friend QPaintDevice* TextAddonsWidgets__SelectSpecialCharDialog_SuperRedirected(const TextAddonsWidgets::SelectSpecialCharDialog* self, QPoint* offset);
    friend QPainter* TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter(const TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend QPainter* TextAddonsWidgets__SelectSpecialCharDialog_SuperSharedPainter(const TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QInputMethodEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QInputMethodEvent* param1);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild(TextAddonsWidgets::SelectSpecialCharDialog* self, bool next);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextPrevChild(TextAddonsWidgets::SelectSpecialCharDialog* self, bool next);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QTimerEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperTimerEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QTimerEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QChildEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperChildEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QChildEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperCustomEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify(TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperConnectNotify(TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify(TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDisconnectNotify(TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition(TextAddonsWidgets::SelectSpecialCharDialog* self, QWidget* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperAdjustPosition(TextAddonsWidgets::SelectSpecialCharDialog* self, QWidget* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperUpdateMicroFocus(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_Create(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperCreate(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_Destroy(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDestroy(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextChild(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusPreviousChild(TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend QObject* TextAddonsWidgets__SelectSpecialCharDialog_Sender(const TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend QObject* TextAddonsWidgets__SelectSpecialCharDialog_SuperSender(const TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend int TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex(const TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend int TextAddonsWidgets__SelectSpecialCharDialog_SuperSenderSignalIndex(const TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend int TextAddonsWidgets__SelectSpecialCharDialog_Receivers(const TextAddonsWidgets::SelectSpecialCharDialog* self, const char* signal);
    friend int TextAddonsWidgets__SelectSpecialCharDialog_SuperReceivers(const TextAddonsWidgets::SelectSpecialCharDialog* self, const char* signal);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected(const TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperIsSignalConnected(const TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
    friend double TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF(const TextAddonsWidgets::SelectSpecialCharDialog* self, int metricA, int metricB);
    friend double TextAddonsWidgets__SelectSpecialCharDialog_SuperGetDecodedMetricF(const TextAddonsWidgets::SelectSpecialCharDialog* self, int metricA, int metricB);
};

#endif
