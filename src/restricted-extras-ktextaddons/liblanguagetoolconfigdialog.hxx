#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLCONFIGDIALOG_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLCONFIGDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolConfigDialog so that we can call protected methods
class VirtualTextGrammarCheckLanguageToolConfigDialog final : public TextGrammarCheck::LanguageToolConfigDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckLanguageToolConfigDialog = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolConfigDialog*, const char*);
    using TextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolConfigDialog*, int, int, void**);
    using TextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, bool);
    using TextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Open_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Exec_Callback = int (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Done_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_Accept_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Reject_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QShowEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DevType_Callback = int (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QActionEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDropEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QHideEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolConfigDialog*, QPainter*);
    using TextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolConfigDialog*, QPoint*);
    using TextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, bool);
    using TextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QChildEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QWidget*);
    using TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Create_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Destroy_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__LanguageToolConfigDialog_Receivers_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigDialog*, const char*);
    using TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__LanguageToolConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__LanguageToolConfigDialog*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback textgrammarcheck__languagetoolconfigdialog_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback textgrammarcheck__languagetoolconfigdialog_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback textgrammarcheck__languagetoolconfigdialog_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback textgrammarcheck__languagetoolconfigdialog_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback textgrammarcheck__languagetoolconfigdialog_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback textgrammarcheck__languagetoolconfigdialog_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Open_Callback textgrammarcheck__languagetoolconfigdialog_open_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Exec_Callback textgrammarcheck__languagetoolconfigdialog_exec_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Done_Callback textgrammarcheck__languagetoolconfigdialog_done_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Accept_Callback textgrammarcheck__languagetoolconfigdialog_accept_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Reject_Callback textgrammarcheck__languagetoolconfigdialog_reject_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback textgrammarcheck__languagetoolconfigdialog_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback textgrammarcheck__languagetoolconfigdialog_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback textgrammarcheck__languagetoolconfigdialog_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback textgrammarcheck__languagetoolconfigdialog_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback textgrammarcheck__languagetoolconfigdialog_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback textgrammarcheck__languagetoolconfigdialog_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DevType_Callback textgrammarcheck__languagetoolconfigdialog_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback textgrammarcheck__languagetoolconfigdialog_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback textgrammarcheck__languagetoolconfigdialog_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Event_Callback textgrammarcheck__languagetoolconfigdialog_event_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback textgrammarcheck__languagetoolconfigdialog_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback textgrammarcheck__languagetoolconfigdialog_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback textgrammarcheck__languagetoolconfigdialog_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback textgrammarcheck__languagetoolconfigdialog_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback textgrammarcheck__languagetoolconfigdialog_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback textgrammarcheck__languagetoolconfigdialog_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback textgrammarcheck__languagetoolconfigdialog_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback textgrammarcheck__languagetoolconfigdialog_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback textgrammarcheck__languagetoolconfigdialog_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback textgrammarcheck__languagetoolconfigdialog_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback textgrammarcheck__languagetoolconfigdialog_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback textgrammarcheck__languagetoolconfigdialog_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback textgrammarcheck__languagetoolconfigdialog_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback textgrammarcheck__languagetoolconfigdialog_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback textgrammarcheck__languagetoolconfigdialog_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback textgrammarcheck__languagetoolconfigdialog_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Metric_Callback textgrammarcheck__languagetoolconfigdialog_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback textgrammarcheck__languagetoolconfigdialog_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback textgrammarcheck__languagetoolconfigdialog_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback textgrammarcheck__languagetoolconfigdialog_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback textgrammarcheck__languagetoolconfigdialog_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback textgrammarcheck__languagetoolconfigdialog_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback textgrammarcheck__languagetoolconfigdialog_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback textgrammarcheck__languagetoolconfigdialog_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback textgrammarcheck__languagetoolconfigdialog_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback textgrammarcheck__languagetoolconfigdialog_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback textgrammarcheck__languagetoolconfigdialog_disconnectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_Callback textgrammarcheck__languagetoolconfigdialog_adjustposition_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_Callback textgrammarcheck__languagetoolconfigdialog_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Create_Callback textgrammarcheck__languagetoolconfigdialog_create_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Destroy_Callback textgrammarcheck__languagetoolconfigdialog_destroy_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_Callback textgrammarcheck__languagetoolconfigdialog_focusnextchild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_Callback textgrammarcheck__languagetoolconfigdialog_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Sender_Callback textgrammarcheck__languagetoolconfigdialog_sender_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_Callback textgrammarcheck__languagetoolconfigdialog_sendersignalindex_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Receivers_Callback textgrammarcheck__languagetoolconfigdialog_receivers_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_Callback textgrammarcheck__languagetoolconfigdialog_issignalconnected_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_Callback textgrammarcheck__languagetoolconfigdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__languagetoolconfigdialog_metaobject_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_metacast_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_metacall_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_setvisible_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_sizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_open_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_exec_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_done_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_accept_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_reject_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_keypressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_closeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_showevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_resizeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_eventfilter_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_devtype_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_paintengine_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_event_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_wheelevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_focusinevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_enterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_leaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_paintevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_moveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_tabletevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_actionevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_dropevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_hideevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_nativeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_changeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_metric_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_initpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_redirected_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_timerevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_childevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_customevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_connectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_adjustposition_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_create_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_destroy_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_sender_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_receivers_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckLanguageToolConfigDialog(QWidget* parent) : TextGrammarCheck::LanguageToolConfigDialog(parent) {};
    VirtualTextGrammarCheckLanguageToolConfigDialog() : TextGrammarCheck::LanguageToolConfigDialog() {};

    // Callback setters
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback(TextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback cb) { textgrammarcheck__languagetoolconfigdialog_metaobject_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback(TextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback cb) { textgrammarcheck__languagetoolconfigdialog_metacast_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback(TextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback cb) { textgrammarcheck__languagetoolconfigdialog_metacall_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback(TextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback cb) { textgrammarcheck__languagetoolconfigdialog_setvisible_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback(TextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback cb) { textgrammarcheck__languagetoolconfigdialog_sizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback(TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback cb) { textgrammarcheck__languagetoolconfigdialog_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Open_Callback(TextGrammarCheck__LanguageToolConfigDialog_Open_Callback cb) { textgrammarcheck__languagetoolconfigdialog_open_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Exec_Callback(TextGrammarCheck__LanguageToolConfigDialog_Exec_Callback cb) { textgrammarcheck__languagetoolconfigdialog_exec_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Done_Callback(TextGrammarCheck__LanguageToolConfigDialog_Done_Callback cb) { textgrammarcheck__languagetoolconfigdialog_done_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Accept_Callback(TextGrammarCheck__LanguageToolConfigDialog_Accept_Callback cb) { textgrammarcheck__languagetoolconfigdialog_accept_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Reject_Callback(TextGrammarCheck__LanguageToolConfigDialog_Reject_Callback cb) { textgrammarcheck__languagetoolconfigdialog_reject_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_closeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_showevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback(TextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback cb) { textgrammarcheck__languagetoolconfigdialog_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DevType_Callback(TextGrammarCheck__LanguageToolConfigDialog_DevType_Callback cb) { textgrammarcheck__languagetoolconfigdialog_devtype_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback(TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback cb) { textgrammarcheck__languagetoolconfigdialog_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback(TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback cb) { textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback(TextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback cb) { textgrammarcheck__languagetoolconfigdialog_paintengine_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Event_Callback(TextGrammarCheck__LanguageToolConfigDialog_Event_Callback cb) { textgrammarcheck__languagetoolconfigdialog_event_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_enterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_paintevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_moveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_actionevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_dropevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_hideevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_changeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Metric_Callback(TextGrammarCheck__LanguageToolConfigDialog_Metric_Callback cb) { textgrammarcheck__languagetoolconfigdialog_metric_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback(TextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback cb) { textgrammarcheck__languagetoolconfigdialog_initpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback(TextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback cb) { textgrammarcheck__languagetoolconfigdialog_redirected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback(TextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback cb) { textgrammarcheck__languagetoolconfigdialog_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback(TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback cb) { textgrammarcheck__languagetoolconfigdialog_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback(TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback cb) { textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_timerevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_childevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback(TextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback cb) { textgrammarcheck__languagetoolconfigdialog_customevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback(TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback cb) { textgrammarcheck__languagetoolconfigdialog_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback(TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback cb) { textgrammarcheck__languagetoolconfigdialog_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_Callback(TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_Callback cb) { textgrammarcheck__languagetoolconfigdialog_adjustposition_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_Callback(TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_Callback cb) { textgrammarcheck__languagetoolconfigdialog_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Create_Callback(TextGrammarCheck__LanguageToolConfigDialog_Create_Callback cb) { textgrammarcheck__languagetoolconfigdialog_create_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Destroy_Callback(TextGrammarCheck__LanguageToolConfigDialog_Destroy_Callback cb) { textgrammarcheck__languagetoolconfigdialog_destroy_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_Callback(TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_Callback cb) { textgrammarcheck__languagetoolconfigdialog_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_Callback(TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_Callback cb) { textgrammarcheck__languagetoolconfigdialog_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Sender_Callback(TextGrammarCheck__LanguageToolConfigDialog_Sender_Callback cb) { textgrammarcheck__languagetoolconfigdialog_sender_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_Callback(TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_Callback cb) { textgrammarcheck__languagetoolconfigdialog_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Receivers_Callback(TextGrammarCheck__LanguageToolConfigDialog_Receivers_Callback cb) { textgrammarcheck__languagetoolconfigdialog_receivers_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_Callback(TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_Callback cb) { textgrammarcheck__languagetoolconfigdialog_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_Callback(TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_Callback cb) { textgrammarcheck__languagetoolconfigdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MetaObject_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_metaobject_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Metacast_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_metacast_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Metacall_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_metacall_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SetVisible_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_setvisible_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_sizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Open_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_open_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Exec_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_exec_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Done_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_done_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Accept_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_accept_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Reject_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_reject_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_CloseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_closeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ShowEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_showevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_EventFilter_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DevType_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_devtype_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_PaintEngine_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_paintengine_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Event_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_event_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_WheelEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_EnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_enterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_PaintEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_paintevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_MoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_moveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_TabletEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ActionEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_actionevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DropEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_dropevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_HideEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_hideevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_NativeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_changeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Metric_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_metric_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_InitPainter_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_initpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Redirected_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_redirected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SharedPainter_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_TimerEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_timerevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ChildEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_childevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_CustomEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_customevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_adjustposition_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Create_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_create_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Destroy_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_destroy_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Sender_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_sender_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_Receivers_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_receivers_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__languagetoolconfigdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolconfigdialog_metaobject_isbase) {
            textgrammarcheck__languagetoolconfigdialog_metaobject_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__languagetoolconfigdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_metacast_isbase) {
            textgrammarcheck__languagetoolconfigdialog_metacast_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__languagetoolconfigdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolconfigdialog_metacall_isbase) {
            textgrammarcheck__languagetoolconfigdialog_metacall_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__languagetoolconfigdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolconfigdialog_setvisible_isbase) {
            textgrammarcheck__languagetoolconfigdialog_setvisible_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__languagetoolconfigdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolconfigdialog_sizehint_isbase) {
            textgrammarcheck__languagetoolconfigdialog_sizehint_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__languagetoolconfigdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolconfigdialog_minimumsizehint_isbase) {
            textgrammarcheck__languagetoolconfigdialog_minimumsizehint_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__languagetoolconfigdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (textgrammarcheck__languagetoolconfigdialog_open_isbase) {
            textgrammarcheck__languagetoolconfigdialog_open_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::open();
            return;
        }
        auto open_cb = textgrammarcheck__languagetoolconfigdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (textgrammarcheck__languagetoolconfigdialog_exec_isbase) {
            textgrammarcheck__languagetoolconfigdialog_exec_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::exec();
        }
        auto exec_cb = textgrammarcheck__languagetoolconfigdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_done_isbase) {
            textgrammarcheck__languagetoolconfigdialog_done_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::done(param1);
            return;
        }
        auto done_cb = textgrammarcheck__languagetoolconfigdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (textgrammarcheck__languagetoolconfigdialog_accept_isbase) {
            textgrammarcheck__languagetoolconfigdialog_accept_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::accept();
            return;
        }
        auto accept_cb = textgrammarcheck__languagetoolconfigdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (textgrammarcheck__languagetoolconfigdialog_reject_isbase) {
            textgrammarcheck__languagetoolconfigdialog_reject_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::reject();
            return;
        }
        auto reject_cb = textgrammarcheck__languagetoolconfigdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_keypressevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_keypressevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__languagetoolconfigdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_closeevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_closeevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = textgrammarcheck__languagetoolconfigdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_showevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_showevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = textgrammarcheck__languagetoolconfigdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_resizeevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_resizeevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__languagetoolconfigdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_contextmenuevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_contextmenuevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__languagetoolconfigdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textgrammarcheck__languagetoolconfigdialog_eventfilter_isbase) {
            textgrammarcheck__languagetoolconfigdialog_eventfilter_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textgrammarcheck__languagetoolconfigdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolconfigdialog_devtype_isbase) {
            textgrammarcheck__languagetoolconfigdialog_devtype_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::devType();
        }
        auto devtype_cb = textgrammarcheck__languagetoolconfigdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolconfigdialog_heightforwidth_isbase) {
            textgrammarcheck__languagetoolconfigdialog_heightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__languagetoolconfigdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_isbase) {
            textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolconfigdialog_paintengine_isbase) {
            textgrammarcheck__languagetoolconfigdialog_paintengine_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__languagetoolconfigdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_event_isbase) {
            textgrammarcheck__languagetoolconfigdialog_event_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::event(event);
        }
        auto event_cb = textgrammarcheck__languagetoolconfigdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousepressevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_mousepressevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__languagetoolconfigdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousemoveevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_mousemoveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__languagetoolconfigdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_wheelevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_wheelevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__languagetoolconfigdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_focusinevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_focusinevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__languagetoolconfigdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_focusoutevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_focusoutevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__languagetoolconfigdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_enterevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_enterevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__languagetoolconfigdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_leaveevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_leaveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__languagetoolconfigdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_paintevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_paintevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__languagetoolconfigdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_moveevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_moveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__languagetoolconfigdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_tabletevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_tabletevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__languagetoolconfigdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_actionevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_actionevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__languagetoolconfigdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dragenterevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_dragenterevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__languagetoolconfigdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dragmoveevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_dragmoveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__languagetoolconfigdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dragleaveevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_dragleaveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__languagetoolconfigdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dropevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_dropevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__languagetoolconfigdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_hideevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_hideevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__languagetoolconfigdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolconfigdialog_nativeevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_nativeevent_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__languagetoolconfigdialog_nativeevent_callback;
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
        return TextGrammarCheck__LanguageToolConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_changeevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_changeevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textgrammarcheck__languagetoolconfigdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolconfigdialog_metric_isbase) {
            textgrammarcheck__languagetoolconfigdialog_metric_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::metric(param1);
        }
        auto metric_cb = textgrammarcheck__languagetoolconfigdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolconfigdialog_initpainter_isbase) {
            textgrammarcheck__languagetoolconfigdialog_initpainter_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__languagetoolconfigdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolconfigdialog_redirected_isbase) {
            textgrammarcheck__languagetoolconfigdialog_redirected_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__languagetoolconfigdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolconfigdialog_sharedpainter_isbase) {
            textgrammarcheck__languagetoolconfigdialog_sharedpainter_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__languagetoolconfigdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_inputmethodevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_inputmethodevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__languagetoolconfigdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolconfigdialog_inputmethodquery_isbase) {
            textgrammarcheck__languagetoolconfigdialog_inputmethodquery_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__languagetoolconfigdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_isbase) {
            textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_timerevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_timerevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__languagetoolconfigdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_childevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_childevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__languagetoolconfigdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_customevent_isbase) {
            textgrammarcheck__languagetoolconfigdialog_customevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__languagetoolconfigdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigdialog_connectnotify_isbase) {
            textgrammarcheck__languagetoolconfigdialog_connectnotify_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__languagetoolconfigdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigdialog_disconnectnotify_isbase) {
            textgrammarcheck__languagetoolconfigdialog_disconnectnotify_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__languagetoolconfigdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (textgrammarcheck__languagetoolconfigdialog_adjustposition_isbase) {
            textgrammarcheck__languagetoolconfigdialog_adjustposition_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = textgrammarcheck__languagetoolconfigdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__languagetoolconfigdialog_updatemicrofocus_isbase) {
            textgrammarcheck__languagetoolconfigdialog_updatemicrofocus_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__languagetoolconfigdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__languagetoolconfigdialog_create_isbase) {
            textgrammarcheck__languagetoolconfigdialog_create_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::create();
            return;
        }
        auto create_cb = textgrammarcheck__languagetoolconfigdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__languagetoolconfigdialog_destroy_isbase) {
            textgrammarcheck__languagetoolconfigdialog_destroy_isbase = false;
            TextGrammarCheck__LanguageToolConfigDialog::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__languagetoolconfigdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__languagetoolconfigdialog_focusnextchild_isbase) {
            textgrammarcheck__languagetoolconfigdialog_focusnextchild_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__languagetoolconfigdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__languagetoolconfigdialog_focuspreviouschild_isbase) {
            textgrammarcheck__languagetoolconfigdialog_focuspreviouschild_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__languagetoolconfigdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__languagetoolconfigdialog_sender_isbase) {
            textgrammarcheck__languagetoolconfigdialog_sender_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::sender();
        }
        auto sender_cb = textgrammarcheck__languagetoolconfigdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__languagetoolconfigdialog_sendersignalindex_isbase) {
            textgrammarcheck__languagetoolconfigdialog_sendersignalindex_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__languagetoolconfigdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__languagetoolconfigdialog_receivers_isbase) {
            textgrammarcheck__languagetoolconfigdialog_receivers_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__languagetoolconfigdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__languagetoolconfigdialog_issignalconnected_isbase) {
            textgrammarcheck__languagetoolconfigdialog_issignalconnected_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__languagetoolconfigdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__languagetoolconfigdialog_getdecodedmetricf_isbase) {
            textgrammarcheck__languagetoolconfigdialog_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__LanguageToolConfigDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__languagetoolconfigdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QKeyEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyPressEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QKeyEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_CloseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QCloseEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperCloseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QCloseEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_ShowEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QShowEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperShowEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QShowEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QResizeEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperResizeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QResizeEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QContextMenuEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperContextMenuEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QContextMenuEvent* param1);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_EventFilter(TextGrammarCheck::LanguageToolConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperEventFilter(TextGrammarCheck::LanguageToolConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_Event(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMousePressEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_WheelEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperWheelEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusInEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusOutEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_EnterEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperEnterEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperLeaveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_PaintEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_MoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_TabletEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperTabletEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_ActionEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperActionEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDragEnterEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDragMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_DropEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDropEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_HideEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QHideEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperHideEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QHideEvent* event);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_NativeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperNativeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperChangeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* param1);
    friend int TextGrammarCheck__LanguageToolConfigDialog_Metric(const TextGrammarCheck::LanguageToolConfigDialog* self, int param1);
    friend int TextGrammarCheck__LanguageToolConfigDialog_SuperMetric(const TextGrammarCheck::LanguageToolConfigDialog* self, int param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_InitPainter(const TextGrammarCheck::LanguageToolConfigDialog* self, QPainter* painter);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperInitPainter(const TextGrammarCheck::LanguageToolConfigDialog* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolConfigDialog_Redirected(const TextGrammarCheck::LanguageToolConfigDialog* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__LanguageToolConfigDialog_SuperRedirected(const TextGrammarCheck::LanguageToolConfigDialog* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolConfigDialog_SharedPainter(const TextGrammarCheck::LanguageToolConfigDialog* self);
    friend QPainter* TextGrammarCheck__LanguageToolConfigDialog_SuperSharedPainter(const TextGrammarCheck::LanguageToolConfigDialog* self);
    friend void TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild(TextGrammarCheck::LanguageToolConfigDialog* self, bool next);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolConfigDialog* self, bool next);
    friend void TextGrammarCheck__LanguageToolConfigDialog_TimerEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperTimerEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_ChildEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperChildEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_CustomEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperCustomEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify(TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperConnectNotify(TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify(TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDisconnectNotify(TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition(TextGrammarCheck::LanguageToolConfigDialog* self, QWidget* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperAdjustPosition(TextGrammarCheck::LanguageToolConfigDialog* self, QWidget* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperUpdateMicroFocus(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend void TextGrammarCheck__LanguageToolConfigDialog_Create(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperCreate(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend void TextGrammarCheck__LanguageToolConfigDialog_Destroy(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDestroy(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextChild(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusPreviousChild(TextGrammarCheck::LanguageToolConfigDialog* self);
    friend QObject* TextGrammarCheck__LanguageToolConfigDialog_Sender(const TextGrammarCheck::LanguageToolConfigDialog* self);
    friend QObject* TextGrammarCheck__LanguageToolConfigDialog_SuperSender(const TextGrammarCheck::LanguageToolConfigDialog* self);
    friend int TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex(const TextGrammarCheck::LanguageToolConfigDialog* self);
    friend int TextGrammarCheck__LanguageToolConfigDialog_SuperSenderSignalIndex(const TextGrammarCheck::LanguageToolConfigDialog* self);
    friend int TextGrammarCheck__LanguageToolConfigDialog_Receivers(const TextGrammarCheck::LanguageToolConfigDialog* self, const char* signal);
    friend int TextGrammarCheck__LanguageToolConfigDialog_SuperReceivers(const TextGrammarCheck::LanguageToolConfigDialog* self, const char* signal);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected(const TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperIsSignalConnected(const TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF(const TextGrammarCheck::LanguageToolConfigDialog* self, int metricA, int metricB);
    friend double TextGrammarCheck__LanguageToolConfigDialog_SuperGetDecodedMetricF(const TextGrammarCheck::LanguageToolConfigDialog* self, int metricA, int metricB);
};

#endif
