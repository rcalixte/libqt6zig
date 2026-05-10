#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTECONFIGDIALOG_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTECONFIGDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteConfigDialog so that we can call protected methods
class VirtualTextGrammarCheckGrammalecteConfigDialog final : public TextGrammarCheck::GrammalecteConfigDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammalecteConfigDialog = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteConfigDialog*, const char*);
    using TextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteConfigDialog*, int, int, void**);
    using TextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, bool);
    using TextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Open_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Exec_Callback = int (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Done_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_Accept_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Reject_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QCloseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QShowEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QResizeEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QContextMenuEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DevType_Callback = int (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QWheelEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QPaintEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QTabletEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QActionEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDragEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDragMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDropEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QHideEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_Metric_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammalecteConfigDialog*, QPainter*);
    using TextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammalecteConfigDialog*, QPoint*);
    using TextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QInputMethodEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, bool);
    using TextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QChildEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QWidget*);
    using TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Create_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Destroy_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__GrammalecteConfigDialog_Receivers_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigDialog*, const char*);
    using TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__GrammalecteConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__GrammalecteConfigDialog*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback textgrammarcheck__grammalecteconfigdialog_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback textgrammarcheck__grammalecteconfigdialog_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback textgrammarcheck__grammalecteconfigdialog_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback textgrammarcheck__grammalecteconfigdialog_setvisible_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback textgrammarcheck__grammalecteconfigdialog_sizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback textgrammarcheck__grammalecteconfigdialog_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Open_Callback textgrammarcheck__grammalecteconfigdialog_open_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Exec_Callback textgrammarcheck__grammalecteconfigdialog_exec_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Done_Callback textgrammarcheck__grammalecteconfigdialog_done_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Accept_Callback textgrammarcheck__grammalecteconfigdialog_accept_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Reject_Callback textgrammarcheck__grammalecteconfigdialog_reject_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback textgrammarcheck__grammalecteconfigdialog_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback textgrammarcheck__grammalecteconfigdialog_closeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback textgrammarcheck__grammalecteconfigdialog_showevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback textgrammarcheck__grammalecteconfigdialog_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback textgrammarcheck__grammalecteconfigdialog_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback textgrammarcheck__grammalecteconfigdialog_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DevType_Callback textgrammarcheck__grammalecteconfigdialog_devtype_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback textgrammarcheck__grammalecteconfigdialog_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback textgrammarcheck__grammalecteconfigdialog_paintengine_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Event_Callback textgrammarcheck__grammalecteconfigdialog_event_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback textgrammarcheck__grammalecteconfigdialog_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback textgrammarcheck__grammalecteconfigdialog_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback textgrammarcheck__grammalecteconfigdialog_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback textgrammarcheck__grammalecteconfigdialog_enterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback textgrammarcheck__grammalecteconfigdialog_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback textgrammarcheck__grammalecteconfigdialog_paintevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback textgrammarcheck__grammalecteconfigdialog_moveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback textgrammarcheck__grammalecteconfigdialog_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback textgrammarcheck__grammalecteconfigdialog_actionevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback textgrammarcheck__grammalecteconfigdialog_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback textgrammarcheck__grammalecteconfigdialog_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback textgrammarcheck__grammalecteconfigdialog_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback textgrammarcheck__grammalecteconfigdialog_dropevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback textgrammarcheck__grammalecteconfigdialog_hideevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback textgrammarcheck__grammalecteconfigdialog_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback textgrammarcheck__grammalecteconfigdialog_changeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Metric_Callback textgrammarcheck__grammalecteconfigdialog_metric_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback textgrammarcheck__grammalecteconfigdialog_initpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback textgrammarcheck__grammalecteconfigdialog_redirected_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback textgrammarcheck__grammalecteconfigdialog_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback textgrammarcheck__grammalecteconfigdialog_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback textgrammarcheck__grammalecteconfigdialog_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback textgrammarcheck__grammalecteconfigdialog_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback textgrammarcheck__grammalecteconfigdialog_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback textgrammarcheck__grammalecteconfigdialog_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback textgrammarcheck__grammalecteconfigdialog_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback textgrammarcheck__grammalecteconfigdialog_disconnectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_Callback textgrammarcheck__grammalecteconfigdialog_adjustposition_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_Callback textgrammarcheck__grammalecteconfigdialog_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Create_Callback textgrammarcheck__grammalecteconfigdialog_create_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Destroy_Callback textgrammarcheck__grammalecteconfigdialog_destroy_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_Callback textgrammarcheck__grammalecteconfigdialog_focusnextchild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_Callback textgrammarcheck__grammalecteconfigdialog_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Sender_Callback textgrammarcheck__grammalecteconfigdialog_sender_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_Callback textgrammarcheck__grammalecteconfigdialog_sendersignalindex_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Receivers_Callback textgrammarcheck__grammalecteconfigdialog_receivers_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_Callback textgrammarcheck__grammalecteconfigdialog_issignalconnected_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_Callback textgrammarcheck__grammalecteconfigdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammalecteconfigdialog_metaobject_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_metacast_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_metacall_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_setvisible_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_sizehint_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_open_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_exec_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_done_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_accept_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_reject_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_keypressevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_closeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_showevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_resizeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_eventfilter_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_devtype_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_paintengine_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_event_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_wheelevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_focusinevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_enterevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_leaveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_paintevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_moveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_tabletevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_actionevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_dropevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_hideevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_nativeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_changeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_metric_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_initpainter_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_redirected_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_timerevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_childevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_customevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_connectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_adjustposition_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_create_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_destroy_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_sender_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_receivers_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckGrammalecteConfigDialog(QWidget* parent) : TextGrammarCheck::GrammalecteConfigDialog(parent) {};
    VirtualTextGrammarCheckGrammalecteConfigDialog() : TextGrammarCheck::GrammalecteConfigDialog() {};
    VirtualTextGrammarCheckGrammalecteConfigDialog(QWidget* parent, bool disableMessageBox) : TextGrammarCheck::GrammalecteConfigDialog(parent, disableMessageBox) {};

    // Callback setters
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback(TextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback cb) { textgrammarcheck__grammalecteconfigdialog_metaobject_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback(TextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback cb) { textgrammarcheck__grammalecteconfigdialog_metacast_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback(TextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback cb) { textgrammarcheck__grammalecteconfigdialog_metacall_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback(TextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback cb) { textgrammarcheck__grammalecteconfigdialog_setvisible_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback(TextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback cb) { textgrammarcheck__grammalecteconfigdialog_sizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback(TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback cb) { textgrammarcheck__grammalecteconfigdialog_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Open_Callback(TextGrammarCheck__GrammalecteConfigDialog_Open_Callback cb) { textgrammarcheck__grammalecteconfigdialog_open_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Exec_Callback(TextGrammarCheck__GrammalecteConfigDialog_Exec_Callback cb) { textgrammarcheck__grammalecteconfigdialog_exec_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Done_Callback(TextGrammarCheck__GrammalecteConfigDialog_Done_Callback cb) { textgrammarcheck__grammalecteconfigdialog_done_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Accept_Callback(TextGrammarCheck__GrammalecteConfigDialog_Accept_Callback cb) { textgrammarcheck__grammalecteconfigdialog_accept_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Reject_Callback(TextGrammarCheck__GrammalecteConfigDialog_Reject_Callback cb) { textgrammarcheck__grammalecteconfigdialog_reject_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_closeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_showevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback(TextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback cb) { textgrammarcheck__grammalecteconfigdialog_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DevType_Callback(TextGrammarCheck__GrammalecteConfigDialog_DevType_Callback cb) { textgrammarcheck__grammalecteconfigdialog_devtype_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback(TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback cb) { textgrammarcheck__grammalecteconfigdialog_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback(TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback cb) { textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback(TextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback cb) { textgrammarcheck__grammalecteconfigdialog_paintengine_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Event_Callback(TextGrammarCheck__GrammalecteConfigDialog_Event_Callback cb) { textgrammarcheck__grammalecteconfigdialog_event_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_enterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_paintevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_moveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_actionevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_dropevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_hideevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_changeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Metric_Callback(TextGrammarCheck__GrammalecteConfigDialog_Metric_Callback cb) { textgrammarcheck__grammalecteconfigdialog_metric_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback(TextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback cb) { textgrammarcheck__grammalecteconfigdialog_initpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback(TextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback cb) { textgrammarcheck__grammalecteconfigdialog_redirected_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback(TextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback cb) { textgrammarcheck__grammalecteconfigdialog_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback(TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback cb) { textgrammarcheck__grammalecteconfigdialog_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback(TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback cb) { textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_timerevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_childevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback(TextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback cb) { textgrammarcheck__grammalecteconfigdialog_customevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback(TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback cb) { textgrammarcheck__grammalecteconfigdialog_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback(TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback cb) { textgrammarcheck__grammalecteconfigdialog_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_Callback(TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_Callback cb) { textgrammarcheck__grammalecteconfigdialog_adjustposition_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_Callback(TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_Callback cb) { textgrammarcheck__grammalecteconfigdialog_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Create_Callback(TextGrammarCheck__GrammalecteConfigDialog_Create_Callback cb) { textgrammarcheck__grammalecteconfigdialog_create_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Destroy_Callback(TextGrammarCheck__GrammalecteConfigDialog_Destroy_Callback cb) { textgrammarcheck__grammalecteconfigdialog_destroy_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_Callback(TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_Callback cb) { textgrammarcheck__grammalecteconfigdialog_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_Callback(TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_Callback cb) { textgrammarcheck__grammalecteconfigdialog_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Sender_Callback(TextGrammarCheck__GrammalecteConfigDialog_Sender_Callback cb) { textgrammarcheck__grammalecteconfigdialog_sender_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_Callback(TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_Callback cb) { textgrammarcheck__grammalecteconfigdialog_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Receivers_Callback(TextGrammarCheck__GrammalecteConfigDialog_Receivers_Callback cb) { textgrammarcheck__grammalecteconfigdialog_receivers_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_Callback(TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_Callback cb) { textgrammarcheck__grammalecteconfigdialog_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_Callback(TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_Callback cb) { textgrammarcheck__grammalecteconfigdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MetaObject_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_metaobject_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Metacast_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_metacast_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Metacall_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_metacall_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SetVisible_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_setvisible_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SizeHint_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_sizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Open_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_open_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Exec_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_exec_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Done_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_done_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Accept_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_accept_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Reject_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_reject_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_CloseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_closeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ShowEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_showevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_EventFilter_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DevType_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_devtype_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_PaintEngine_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_paintengine_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Event_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_event_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_WheelEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_EnterEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_enterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_PaintEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_paintevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_MoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_moveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_TabletEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ActionEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_actionevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DropEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_dropevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_HideEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_hideevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_NativeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_changeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Metric_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_metric_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_InitPainter_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_initpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Redirected_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_redirected_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SharedPainter_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_TimerEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_timerevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ChildEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_childevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_CustomEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_customevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_adjustposition_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Create_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_create_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Destroy_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_destroy_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Sender_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_sender_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_Receivers_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_receivers_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__grammalecteconfigdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteconfigdialog_metaobject_isbase) {
            textgrammarcheck__grammalecteconfigdialog_metaobject_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__grammalecteconfigdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_metacast_isbase) {
            textgrammarcheck__grammalecteconfigdialog_metacast_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__grammalecteconfigdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteconfigdialog_metacall_isbase) {
            textgrammarcheck__grammalecteconfigdialog_metacall_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__grammalecteconfigdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammalecteconfigdialog_setvisible_isbase) {
            textgrammarcheck__grammalecteconfigdialog_setvisible_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__grammalecteconfigdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammalecteconfigdialog_sizehint_isbase) {
            textgrammarcheck__grammalecteconfigdialog_sizehint_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__grammalecteconfigdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammalecteconfigdialog_minimumsizehint_isbase) {
            textgrammarcheck__grammalecteconfigdialog_minimumsizehint_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__grammalecteconfigdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (textgrammarcheck__grammalecteconfigdialog_open_isbase) {
            textgrammarcheck__grammalecteconfigdialog_open_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::open();
            return;
        }
        auto open_cb = textgrammarcheck__grammalecteconfigdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (textgrammarcheck__grammalecteconfigdialog_exec_isbase) {
            textgrammarcheck__grammalecteconfigdialog_exec_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::exec();
        }
        auto exec_cb = textgrammarcheck__grammalecteconfigdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_done_isbase) {
            textgrammarcheck__grammalecteconfigdialog_done_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::done(param1);
            return;
        }
        auto done_cb = textgrammarcheck__grammalecteconfigdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (textgrammarcheck__grammalecteconfigdialog_accept_isbase) {
            textgrammarcheck__grammalecteconfigdialog_accept_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::accept();
            return;
        }
        auto accept_cb = textgrammarcheck__grammalecteconfigdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (textgrammarcheck__grammalecteconfigdialog_reject_isbase) {
            textgrammarcheck__grammalecteconfigdialog_reject_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::reject();
            return;
        }
        auto reject_cb = textgrammarcheck__grammalecteconfigdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_keypressevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_keypressevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__grammalecteconfigdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_closeevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_closeevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = textgrammarcheck__grammalecteconfigdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_showevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_showevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = textgrammarcheck__grammalecteconfigdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_resizeevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_resizeevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__grammalecteconfigdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_contextmenuevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_contextmenuevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__grammalecteconfigdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textgrammarcheck__grammalecteconfigdialog_eventfilter_isbase) {
            textgrammarcheck__grammalecteconfigdialog_eventfilter_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textgrammarcheck__grammalecteconfigdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammalecteconfigdialog_devtype_isbase) {
            textgrammarcheck__grammalecteconfigdialog_devtype_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::devType();
        }
        auto devtype_cb = textgrammarcheck__grammalecteconfigdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammalecteconfigdialog_heightforwidth_isbase) {
            textgrammarcheck__grammalecteconfigdialog_heightforwidth_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__grammalecteconfigdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_isbase) {
            textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammalecteconfigdialog_paintengine_isbase) {
            textgrammarcheck__grammalecteconfigdialog_paintengine_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__grammalecteconfigdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_event_isbase) {
            textgrammarcheck__grammalecteconfigdialog_event_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::event(event);
        }
        auto event_cb = textgrammarcheck__grammalecteconfigdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousepressevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_mousepressevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__grammalecteconfigdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousemoveevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_mousemoveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__grammalecteconfigdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_wheelevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_wheelevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__grammalecteconfigdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_focusinevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_focusinevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__grammalecteconfigdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_focusoutevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_focusoutevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__grammalecteconfigdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_enterevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_enterevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__grammalecteconfigdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_leaveevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_leaveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__grammalecteconfigdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_paintevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_paintevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__grammalecteconfigdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_moveevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_moveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__grammalecteconfigdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_tabletevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_tabletevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__grammalecteconfigdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_actionevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_actionevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__grammalecteconfigdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dragenterevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_dragenterevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__grammalecteconfigdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dragmoveevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_dragmoveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__grammalecteconfigdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dragleaveevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_dragleaveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__grammalecteconfigdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dropevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_dropevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__grammalecteconfigdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_hideevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_hideevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__grammalecteconfigdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammalecteconfigdialog_nativeevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_nativeevent_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__grammalecteconfigdialog_nativeevent_callback;
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
        return TextGrammarCheck__GrammalecteConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_changeevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_changeevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textgrammarcheck__grammalecteconfigdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammalecteconfigdialog_metric_isbase) {
            textgrammarcheck__grammalecteconfigdialog_metric_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::metric(param1);
        }
        auto metric_cb = textgrammarcheck__grammalecteconfigdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammalecteconfigdialog_initpainter_isbase) {
            textgrammarcheck__grammalecteconfigdialog_initpainter_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__grammalecteconfigdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammalecteconfigdialog_redirected_isbase) {
            textgrammarcheck__grammalecteconfigdialog_redirected_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__grammalecteconfigdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammalecteconfigdialog_sharedpainter_isbase) {
            textgrammarcheck__grammalecteconfigdialog_sharedpainter_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__grammalecteconfigdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_inputmethodevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_inputmethodevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__grammalecteconfigdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammalecteconfigdialog_inputmethodquery_isbase) {
            textgrammarcheck__grammalecteconfigdialog_inputmethodquery_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__grammalecteconfigdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_isbase) {
            textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_timerevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_timerevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__grammalecteconfigdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_childevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_childevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__grammalecteconfigdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_customevent_isbase) {
            textgrammarcheck__grammalecteconfigdialog_customevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__grammalecteconfigdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigdialog_connectnotify_isbase) {
            textgrammarcheck__grammalecteconfigdialog_connectnotify_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__grammalecteconfigdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigdialog_disconnectnotify_isbase) {
            textgrammarcheck__grammalecteconfigdialog_disconnectnotify_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__grammalecteconfigdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (textgrammarcheck__grammalecteconfigdialog_adjustposition_isbase) {
            textgrammarcheck__grammalecteconfigdialog_adjustposition_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = textgrammarcheck__grammalecteconfigdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__grammalecteconfigdialog_updatemicrofocus_isbase) {
            textgrammarcheck__grammalecteconfigdialog_updatemicrofocus_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__grammalecteconfigdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__grammalecteconfigdialog_create_isbase) {
            textgrammarcheck__grammalecteconfigdialog_create_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::create();
            return;
        }
        auto create_cb = textgrammarcheck__grammalecteconfigdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__grammalecteconfigdialog_destroy_isbase) {
            textgrammarcheck__grammalecteconfigdialog_destroy_isbase = false;
            TextGrammarCheck__GrammalecteConfigDialog::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__grammalecteconfigdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__grammalecteconfigdialog_focusnextchild_isbase) {
            textgrammarcheck__grammalecteconfigdialog_focusnextchild_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__grammalecteconfigdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__grammalecteconfigdialog_focuspreviouschild_isbase) {
            textgrammarcheck__grammalecteconfigdialog_focuspreviouschild_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__grammalecteconfigdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__grammalecteconfigdialog_sender_isbase) {
            textgrammarcheck__grammalecteconfigdialog_sender_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::sender();
        }
        auto sender_cb = textgrammarcheck__grammalecteconfigdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__grammalecteconfigdialog_sendersignalindex_isbase) {
            textgrammarcheck__grammalecteconfigdialog_sendersignalindex_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__grammalecteconfigdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__grammalecteconfigdialog_receivers_isbase) {
            textgrammarcheck__grammalecteconfigdialog_receivers_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__grammalecteconfigdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__grammalecteconfigdialog_issignalconnected_isbase) {
            textgrammarcheck__grammalecteconfigdialog_issignalconnected_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__grammalecteconfigdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__grammalecteconfigdialog_getdecodedmetricf_isbase) {
            textgrammarcheck__grammalecteconfigdialog_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__GrammalecteConfigDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__grammalecteconfigdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QKeyEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyPressEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QKeyEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_CloseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QCloseEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperCloseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QCloseEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_ShowEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QShowEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperShowEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QShowEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QResizeEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperResizeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QResizeEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QContextMenuEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperContextMenuEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QContextMenuEvent* param1);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_EventFilter(TextGrammarCheck::GrammalecteConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperEventFilter(TextGrammarCheck::GrammalecteConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_Event(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMousePressEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_WheelEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperWheelEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusInEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusOutEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_EnterEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperEnterEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperLeaveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_PaintEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_MoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_TabletEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperTabletEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_ActionEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperActionEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDragEnterEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDragMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDragLeaveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_DropEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDropEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_HideEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QHideEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperHideEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_NativeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperNativeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperChangeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* param1);
    friend int TextGrammarCheck__GrammalecteConfigDialog_Metric(const TextGrammarCheck::GrammalecteConfigDialog* self, int param1);
    friend int TextGrammarCheck__GrammalecteConfigDialog_SuperMetric(const TextGrammarCheck::GrammalecteConfigDialog* self, int param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_InitPainter(const TextGrammarCheck::GrammalecteConfigDialog* self, QPainter* painter);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperInitPainter(const TextGrammarCheck::GrammalecteConfigDialog* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammalecteConfigDialog_Redirected(const TextGrammarCheck::GrammalecteConfigDialog* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__GrammalecteConfigDialog_SuperRedirected(const TextGrammarCheck::GrammalecteConfigDialog* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammalecteConfigDialog_SharedPainter(const TextGrammarCheck::GrammalecteConfigDialog* self);
    friend QPainter* TextGrammarCheck__GrammalecteConfigDialog_SuperSharedPainter(const TextGrammarCheck::GrammalecteConfigDialog* self);
    friend void TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild(TextGrammarCheck::GrammalecteConfigDialog* self, bool next);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck::GrammalecteConfigDialog* self, bool next);
    friend void TextGrammarCheck__GrammalecteConfigDialog_TimerEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperTimerEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_ChildEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperChildEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_CustomEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperCustomEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify(TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperConnectNotify(TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify(TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDisconnectNotify(TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition(TextGrammarCheck::GrammalecteConfigDialog* self, QWidget* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperAdjustPosition(TextGrammarCheck::GrammalecteConfigDialog* self, QWidget* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperUpdateMicroFocus(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend void TextGrammarCheck__GrammalecteConfigDialog_Create(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperCreate(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend void TextGrammarCheck__GrammalecteConfigDialog_Destroy(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDestroy(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextChild(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusPreviousChild(TextGrammarCheck::GrammalecteConfigDialog* self);
    friend QObject* TextGrammarCheck__GrammalecteConfigDialog_Sender(const TextGrammarCheck::GrammalecteConfigDialog* self);
    friend QObject* TextGrammarCheck__GrammalecteConfigDialog_SuperSender(const TextGrammarCheck::GrammalecteConfigDialog* self);
    friend int TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex(const TextGrammarCheck::GrammalecteConfigDialog* self);
    friend int TextGrammarCheck__GrammalecteConfigDialog_SuperSenderSignalIndex(const TextGrammarCheck::GrammalecteConfigDialog* self);
    friend int TextGrammarCheck__GrammalecteConfigDialog_Receivers(const TextGrammarCheck::GrammalecteConfigDialog* self, const char* signal);
    friend int TextGrammarCheck__GrammalecteConfigDialog_SuperReceivers(const TextGrammarCheck::GrammalecteConfigDialog* self, const char* signal);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected(const TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperIsSignalConnected(const TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF(const TextGrammarCheck::GrammalecteConfigDialog* self, int metricA, int metricB);
    friend double TextGrammarCheck__GrammalecteConfigDialog_SuperGetDecodedMetricF(const TextGrammarCheck::GrammalecteConfigDialog* self, int metricA, int metricB);
};

#endif
