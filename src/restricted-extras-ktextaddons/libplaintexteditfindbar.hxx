#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTEDITFINDBAR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTEDITFINDBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextEditFindBar so that we can call protected methods
class VirtualTextCustomEditorPlainTextEditFindBar final : public TextCustomEditor::PlainTextEditFindBar {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorPlainTextEditFindBar = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__PlainTextEditFindBar_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__PlainTextEditFindBar_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextEditFindBar*, const char*);
    using TextCustomEditor__PlainTextEditFindBar_Metacall_Callback = int (*)(TextCustomEditor__PlainTextEditFindBar*, int, int, void**);
    using TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, const char*, int);
    using TextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, QRegularExpression*, int);
    using TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback = void (*)();
    using TextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, bool, bool);
    using TextCustomEditor__PlainTextEditFindBar_Event_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DevType_Callback = int (*)();
    using TextCustomEditor__PlainTextEditFindBar_SetVisible_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, bool);
    using TextCustomEditor__PlainTextEditFindBar_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback = int (*)(const TextCustomEditor__PlainTextEditFindBar*, int);
    using TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QWheelEvent*);
    using TextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEnterEvent*);
    using TextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QPaintEvent*);
    using TextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMoveEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QResizeEvent*);
    using TextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QCloseEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QContextMenuEvent*);
    using TextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QTabletEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QActionEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDragEnterEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDragMoveEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDragLeaveEvent*);
    using TextCustomEditor__PlainTextEditFindBar_DropEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QDropEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QShowEvent*);
    using TextCustomEditor__PlainTextEditFindBar_HideEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QHideEvent*);
    using TextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_Metric_Callback = int (*)(const TextCustomEditor__PlainTextEditFindBar*, int);
    using TextCustomEditor__PlainTextEditFindBar_InitPainter_Callback = void (*)(const TextCustomEditor__PlainTextEditFindBar*, QPainter*);
    using TextCustomEditor__PlainTextEditFindBar_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__PlainTextEditFindBar*, QPoint*);
    using TextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QInputMethodEvent*);
    using TextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__PlainTextEditFindBar*, int);
    using TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, bool);
    using TextCustomEditor__PlainTextEditFindBar_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QTimerEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QChildEvent*);
    using TextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QEvent*);
    using TextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditFindBar_ClearSelections_Callback = void (*)();
    using TextCustomEditor__PlainTextEditFindBar_SearchText_Callback = bool (*)(TextCustomEditor__PlainTextEditFindBar*, bool, bool);
    using TextCustomEditor__PlainTextEditFindBar_SetFoundMatch_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, bool);
    using TextCustomEditor__PlainTextEditFindBar_MessageInfo_Callback = void (*)(TextCustomEditor__PlainTextEditFindBar*, bool, bool, bool);
    using TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__PlainTextEditFindBar_Create_Callback = void (*)();
    using TextCustomEditor__PlainTextEditFindBar_Destroy_Callback = void (*)();
    using TextCustomEditor__PlainTextEditFindBar_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditFindBar_Sender_Callback = QObject* (*)();
    using TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__PlainTextEditFindBar_Receivers_Callback = int (*)(const TextCustomEditor__PlainTextEditFindBar*, const char*);
    using TextCustomEditor__PlainTextEditFindBar_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__PlainTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__PlainTextEditFindBar*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__PlainTextEditFindBar_MetaObject_Callback textcustomeditor__plaintexteditfindbar_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Metacast_Callback textcustomeditor__plaintexteditfindbar_metacast_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Metacall_Callback textcustomeditor__plaintexteditfindbar_metacall_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback textcustomeditor__plaintexteditfindbar_viewisreadonly_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback textcustomeditor__plaintexteditfindbar_documentisempty_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback textcustomeditor__plaintexteditfindbar_searchindocument_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback textcustomeditor__plaintexteditfindbar_searchindocument2_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback textcustomeditor__plaintexteditfindbar_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback textcustomeditor__plaintexteditfindbar_slotsearchtext_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Event_Callback textcustomeditor__plaintexteditfindbar_event_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DevType_Callback textcustomeditor__plaintexteditfindbar_devtype_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SetVisible_Callback textcustomeditor__plaintexteditfindbar_setvisible_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SizeHint_Callback textcustomeditor__plaintexteditfindbar_sizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback textcustomeditor__plaintexteditfindbar_minimumsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback textcustomeditor__plaintexteditfindbar_heightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback textcustomeditor__plaintexteditfindbar_hasheightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback textcustomeditor__plaintexteditfindbar_paintengine_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback textcustomeditor__plaintexteditfindbar_mousepressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback textcustomeditor__plaintexteditfindbar_mousereleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback textcustomeditor__plaintexteditfindbar_mousemoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback textcustomeditor__plaintexteditfindbar_wheelevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback textcustomeditor__plaintexteditfindbar_keypressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback textcustomeditor__plaintexteditfindbar_keyreleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback textcustomeditor__plaintexteditfindbar_focusinevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback textcustomeditor__plaintexteditfindbar_focusoutevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback textcustomeditor__plaintexteditfindbar_enterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback textcustomeditor__plaintexteditfindbar_leaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback textcustomeditor__plaintexteditfindbar_paintevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback textcustomeditor__plaintexteditfindbar_moveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback textcustomeditor__plaintexteditfindbar_resizeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback textcustomeditor__plaintexteditfindbar_closeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback textcustomeditor__plaintexteditfindbar_contextmenuevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback textcustomeditor__plaintexteditfindbar_tabletevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback textcustomeditor__plaintexteditfindbar_actionevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback textcustomeditor__plaintexteditfindbar_dragenterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback textcustomeditor__plaintexteditfindbar_dragmoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback textcustomeditor__plaintexteditfindbar_dragleaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DropEvent_Callback textcustomeditor__plaintexteditfindbar_dropevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback textcustomeditor__plaintexteditfindbar_showevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_HideEvent_Callback textcustomeditor__plaintexteditfindbar_hideevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback textcustomeditor__plaintexteditfindbar_nativeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback textcustomeditor__plaintexteditfindbar_changeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Metric_Callback textcustomeditor__plaintexteditfindbar_metric_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_InitPainter_Callback textcustomeditor__plaintexteditfindbar_initpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Redirected_Callback textcustomeditor__plaintexteditfindbar_redirected_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback textcustomeditor__plaintexteditfindbar_sharedpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback textcustomeditor__plaintexteditfindbar_inputmethodevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback textcustomeditor__plaintexteditfindbar_inputmethodquery_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback textcustomeditor__plaintexteditfindbar_focusnextprevchild_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_EventFilter_Callback textcustomeditor__plaintexteditfindbar_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback textcustomeditor__plaintexteditfindbar_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback textcustomeditor__plaintexteditfindbar_childevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback textcustomeditor__plaintexteditfindbar_customevent_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback textcustomeditor__plaintexteditfindbar_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback textcustomeditor__plaintexteditfindbar_disconnectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_ClearSelections_Callback textcustomeditor__plaintexteditfindbar_clearselections_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SearchText_Callback textcustomeditor__plaintexteditfindbar_searchtext_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SetFoundMatch_Callback textcustomeditor__plaintexteditfindbar_setfoundmatch_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_MessageInfo_Callback textcustomeditor__plaintexteditfindbar_messageinfo_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_Callback textcustomeditor__plaintexteditfindbar_updatemicrofocus_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Create_Callback textcustomeditor__plaintexteditfindbar_create_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Destroy_Callback textcustomeditor__plaintexteditfindbar_destroy_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusNextChild_Callback textcustomeditor__plaintexteditfindbar_focusnextchild_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_Callback textcustomeditor__plaintexteditfindbar_focuspreviouschild_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Sender_Callback textcustomeditor__plaintexteditfindbar_sender_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_Callback textcustomeditor__plaintexteditfindbar_sendersignalindex_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_Receivers_Callback textcustomeditor__plaintexteditfindbar_receivers_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_IsSignalConnected_Callback textcustomeditor__plaintexteditfindbar_issignalconnected_callback = nullptr;
    TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_Callback textcustomeditor__plaintexteditfindbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__plaintexteditfindbar_metaobject_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_metacast_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_metacall_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_viewisreadonly_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_documentisempty_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_searchindocument_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_searchindocument2_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_autosearchmovecursor_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_slotsearchtext_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_event_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_devtype_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_setvisible_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_sizehint_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_heightforwidth_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_paintengine_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_mousepressevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_wheelevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_keypressevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_focusinevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_focusoutevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_enterevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_leaveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_paintevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_moveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_resizeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_closeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_tabletevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_actionevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_dragenterevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_dropevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_showevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_hideevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_nativeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_changeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_metric_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_initpainter_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_redirected_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_sharedpainter_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_eventfilter_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_timerevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_childevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_customevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_connectnotify_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_clearselections_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_searchtext_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_setfoundmatch_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_messageinfo_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_create_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_destroy_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_focusnextchild_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_sender_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_receivers_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_issignalconnected_isbase = false;
    mutable bool textcustomeditor__plaintexteditfindbar_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorPlainTextEditFindBar(QPlainTextEdit* view) : TextCustomEditor::PlainTextEditFindBar(view) {};
    VirtualTextCustomEditorPlainTextEditFindBar(QPlainTextEdit* view, QWidget* parent) : TextCustomEditor::PlainTextEditFindBar(view, parent) {};

    // Callback setters
    inline void setTextCustomEditor__PlainTextEditFindBar_MetaObject_Callback(TextCustomEditor__PlainTextEditFindBar_MetaObject_Callback cb) { textcustomeditor__plaintexteditfindbar_metaobject_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Metacast_Callback(TextCustomEditor__PlainTextEditFindBar_Metacast_Callback cb) { textcustomeditor__plaintexteditfindbar_metacast_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Metacall_Callback(TextCustomEditor__PlainTextEditFindBar_Metacall_Callback cb) { textcustomeditor__plaintexteditfindbar_metacall_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback(TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_Callback cb) { textcustomeditor__plaintexteditfindbar_viewisreadonly_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback(TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_Callback cb) { textcustomeditor__plaintexteditfindbar_documentisempty_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback(TextCustomEditor__PlainTextEditFindBar_SearchInDocument_Callback cb) { textcustomeditor__plaintexteditfindbar_searchindocument_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback(TextCustomEditor__PlainTextEditFindBar_SearchInDocument2_Callback cb) { textcustomeditor__plaintexteditfindbar_searchindocument2_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback(TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_Callback cb) { textcustomeditor__plaintexteditfindbar_autosearchmovecursor_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback(TextCustomEditor__PlainTextEditFindBar_SlotSearchText_Callback cb) { textcustomeditor__plaintexteditfindbar_slotsearchtext_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Event_Callback(TextCustomEditor__PlainTextEditFindBar_Event_Callback cb) { textcustomeditor__plaintexteditfindbar_event_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DevType_Callback(TextCustomEditor__PlainTextEditFindBar_DevType_Callback cb) { textcustomeditor__plaintexteditfindbar_devtype_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SetVisible_Callback(TextCustomEditor__PlainTextEditFindBar_SetVisible_Callback cb) { textcustomeditor__plaintexteditfindbar_setvisible_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SizeHint_Callback(TextCustomEditor__PlainTextEditFindBar_SizeHint_Callback cb) { textcustomeditor__plaintexteditfindbar_sizehint_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback(TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_Callback cb) { textcustomeditor__plaintexteditfindbar_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback(TextCustomEditor__PlainTextEditFindBar_HeightForWidth_Callback cb) { textcustomeditor__plaintexteditfindbar_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback(TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_Callback cb) { textcustomeditor__plaintexteditfindbar_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback(TextCustomEditor__PlainTextEditFindBar_PaintEngine_Callback cb) { textcustomeditor__plaintexteditfindbar_paintengine_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback(TextCustomEditor__PlainTextEditFindBar_MousePressEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback(TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback(TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback(TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback(TextCustomEditor__PlainTextEditFindBar_WheelEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_wheelevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback(TextCustomEditor__PlainTextEditFindBar_KeyPressEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_keypressevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback(TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback(TextCustomEditor__PlainTextEditFindBar_FocusInEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_focusinevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback(TextCustomEditor__PlainTextEditFindBar_FocusOutEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback(TextCustomEditor__PlainTextEditFindBar_EnterEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_enterevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback(TextCustomEditor__PlainTextEditFindBar_LeaveEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_leaveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback(TextCustomEditor__PlainTextEditFindBar_PaintEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_paintevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback(TextCustomEditor__PlainTextEditFindBar_MoveEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_moveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback(TextCustomEditor__PlainTextEditFindBar_ResizeEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_resizeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback(TextCustomEditor__PlainTextEditFindBar_CloseEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_closeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback(TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback(TextCustomEditor__PlainTextEditFindBar_TabletEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_tabletevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback(TextCustomEditor__PlainTextEditFindBar_ActionEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_actionevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback(TextCustomEditor__PlainTextEditFindBar_DragEnterEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback(TextCustomEditor__PlainTextEditFindBar_DragMoveEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback(TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DropEvent_Callback(TextCustomEditor__PlainTextEditFindBar_DropEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_dropevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback(TextCustomEditor__PlainTextEditFindBar_ShowEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_showevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_HideEvent_Callback(TextCustomEditor__PlainTextEditFindBar_HideEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_hideevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback(TextCustomEditor__PlainTextEditFindBar_NativeEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_nativeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback(TextCustomEditor__PlainTextEditFindBar_ChangeEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_changeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Metric_Callback(TextCustomEditor__PlainTextEditFindBar_Metric_Callback cb) { textcustomeditor__plaintexteditfindbar_metric_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_InitPainter_Callback(TextCustomEditor__PlainTextEditFindBar_InitPainter_Callback cb) { textcustomeditor__plaintexteditfindbar_initpainter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Redirected_Callback(TextCustomEditor__PlainTextEditFindBar_Redirected_Callback cb) { textcustomeditor__plaintexteditfindbar_redirected_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback(TextCustomEditor__PlainTextEditFindBar_SharedPainter_Callback cb) { textcustomeditor__plaintexteditfindbar_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback(TextCustomEditor__PlainTextEditFindBar_InputMethodEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback(TextCustomEditor__PlainTextEditFindBar_InputMethodQuery_Callback cb) { textcustomeditor__plaintexteditfindbar_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback(TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_Callback cb) { textcustomeditor__plaintexteditfindbar_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_EventFilter_Callback(TextCustomEditor__PlainTextEditFindBar_EventFilter_Callback cb) { textcustomeditor__plaintexteditfindbar_eventfilter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback(TextCustomEditor__PlainTextEditFindBar_TimerEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_timerevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback(TextCustomEditor__PlainTextEditFindBar_ChildEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_childevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback(TextCustomEditor__PlainTextEditFindBar_CustomEvent_Callback cb) { textcustomeditor__plaintexteditfindbar_customevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback(TextCustomEditor__PlainTextEditFindBar_ConnectNotify_Callback cb) { textcustomeditor__plaintexteditfindbar_connectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback(TextCustomEditor__PlainTextEditFindBar_DisconnectNotify_Callback cb) { textcustomeditor__plaintexteditfindbar_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ClearSelections_Callback(TextCustomEditor__PlainTextEditFindBar_ClearSelections_Callback cb) { textcustomeditor__plaintexteditfindbar_clearselections_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SearchText_Callback(TextCustomEditor__PlainTextEditFindBar_SearchText_Callback cb) { textcustomeditor__plaintexteditfindbar_searchtext_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SetFoundMatch_Callback(TextCustomEditor__PlainTextEditFindBar_SetFoundMatch_Callback cb) { textcustomeditor__plaintexteditfindbar_setfoundmatch_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MessageInfo_Callback(TextCustomEditor__PlainTextEditFindBar_MessageInfo_Callback cb) { textcustomeditor__plaintexteditfindbar_messageinfo_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_Callback(TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_Callback cb) { textcustomeditor__plaintexteditfindbar_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Create_Callback(TextCustomEditor__PlainTextEditFindBar_Create_Callback cb) { textcustomeditor__plaintexteditfindbar_create_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Destroy_Callback(TextCustomEditor__PlainTextEditFindBar_Destroy_Callback cb) { textcustomeditor__plaintexteditfindbar_destroy_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusNextChild_Callback(TextCustomEditor__PlainTextEditFindBar_FocusNextChild_Callback cb) { textcustomeditor__plaintexteditfindbar_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_Callback(TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_Callback cb) { textcustomeditor__plaintexteditfindbar_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Sender_Callback(TextCustomEditor__PlainTextEditFindBar_Sender_Callback cb) { textcustomeditor__plaintexteditfindbar_sender_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_Callback(TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_Callback cb) { textcustomeditor__plaintexteditfindbar_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Receivers_Callback(TextCustomEditor__PlainTextEditFindBar_Receivers_Callback cb) { textcustomeditor__plaintexteditfindbar_receivers_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_IsSignalConnected_Callback(TextCustomEditor__PlainTextEditFindBar_IsSignalConnected_Callback cb) { textcustomeditor__plaintexteditfindbar_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_Callback(TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_Callback cb) { textcustomeditor__plaintexteditfindbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__PlainTextEditFindBar_MetaObject_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_metaobject_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Metacast_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_metacast_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Metacall_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_metacall_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_viewisreadonly_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_documentisempty_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SearchInDocument_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_searchindocument_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SearchInDocument2_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_searchindocument2_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_autosearchmovecursor_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SlotSearchText_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_slotsearchtext_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Event_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_event_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DevType_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_devtype_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SetVisible_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_setvisible_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SizeHint_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_sizehint_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_HeightForWidth_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_PaintEngine_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_paintengine_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MousePressEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_WheelEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_wheelevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_KeyPressEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_keypressevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusInEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_focusinevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusOutEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_EnterEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_enterevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_LeaveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_leaveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_PaintEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_paintevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_moveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ResizeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_resizeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_CloseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_closeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_TabletEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_tabletevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ActionEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_actionevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DragEnterEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DragMoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DropEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_dropevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ShowEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_showevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_HideEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_hideevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_NativeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_nativeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ChangeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_changeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Metric_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_metric_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_InitPainter_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_initpainter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Redirected_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_redirected_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SharedPainter_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_InputMethodEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_InputMethodQuery_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_EventFilter_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_eventfilter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_TimerEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_timerevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ChildEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_childevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_CustomEvent_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_customevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ConnectNotify_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_connectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_DisconnectNotify_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_ClearSelections_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_clearselections_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SearchText_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_searchtext_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SetFoundMatch_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_setfoundmatch_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_MessageInfo_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_messageinfo_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Create_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_create_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Destroy_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_destroy_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusNextChild_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Sender_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_sender_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_Receivers_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_receivers_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_IsSignalConnected_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__plaintexteditfindbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintexteditfindbar_metaobject_isbase) {
            textcustomeditor__plaintexteditfindbar_metaobject_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::metaObject();
        }
        auto metaobject_cb = textcustomeditor__plaintexteditfindbar_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintexteditfindbar_metacast_isbase) {
            textcustomeditor__plaintexteditfindbar_metacast_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__plaintexteditfindbar_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintexteditfindbar_metacall_isbase) {
            textcustomeditor__plaintexteditfindbar_metacall_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__plaintexteditfindbar_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        if (textcustomeditor__plaintexteditfindbar_viewisreadonly_isbase) {
            textcustomeditor__plaintexteditfindbar_viewisreadonly_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::viewIsReadOnly();
        }
        auto viewisreadonly_cb = textcustomeditor__plaintexteditfindbar_viewisreadonly_callback;
        if (viewisreadonly_cb) {
            bool callback_ret = viewisreadonly_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::viewIsReadOnly();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        if (textcustomeditor__plaintexteditfindbar_documentisempty_isbase) {
            textcustomeditor__plaintexteditfindbar_documentisempty_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::documentIsEmpty();
        }
        auto documentisempty_cb = textcustomeditor__plaintexteditfindbar_documentisempty_callback;
        if (documentisempty_cb) {
            bool callback_ret = documentisempty_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::documentIsEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__plaintexteditfindbar_searchindocument_isbase) {
            textcustomeditor__plaintexteditfindbar_searchindocument_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::searchInDocument(text, searchOptions);
        }
        auto searchindocument_cb = textcustomeditor__plaintexteditfindbar_searchindocument_callback;
        if (searchindocument_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = searchindocument_cb(this, cbval1, cbval2);
            libqt_free(text_str);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::searchInDocument(text, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__plaintexteditfindbar_searchindocument2_isbase) {
            textcustomeditor__plaintexteditfindbar_searchindocument2_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::searchInDocument(regExp, searchOptions);
        }
        auto searchindocument2_cb = textcustomeditor__plaintexteditfindbar_searchindocument2_callback;
        if (searchindocument2_cb) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = searchindocument2_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::searchInDocument(regExp, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        if (textcustomeditor__plaintexteditfindbar_autosearchmovecursor_isbase) {
            textcustomeditor__plaintexteditfindbar_autosearchmovecursor_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::autoSearchMoveCursor();
            return;
        }
        auto autosearchmovecursor_cb = textcustomeditor__plaintexteditfindbar_autosearchmovecursor_callback;
        if (autosearchmovecursor_cb) {
            autosearchmovecursor_cb();
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::autoSearchMoveCursor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        if (textcustomeditor__plaintexteditfindbar_slotsearchtext_isbase) {
            textcustomeditor__plaintexteditfindbar_slotsearchtext_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::slotSearchText(backward, isAutoSearch);
            return;
        }
        auto slotsearchtext_cb = textcustomeditor__plaintexteditfindbar_slotsearchtext_callback;
        if (slotsearchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            slotsearchtext_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::slotSearchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__plaintexteditfindbar_event_isbase) {
            textcustomeditor__plaintexteditfindbar_event_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::event(e);
        }
        auto event_cb = textcustomeditor__plaintexteditfindbar_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__plaintexteditfindbar_devtype_isbase) {
            textcustomeditor__plaintexteditfindbar_devtype_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::devType();
        }
        auto devtype_cb = textcustomeditor__plaintexteditfindbar_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__plaintexteditfindbar_setvisible_isbase) {
            textcustomeditor__plaintexteditfindbar_setvisible_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__plaintexteditfindbar_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__plaintexteditfindbar_sizehint_isbase) {
            textcustomeditor__plaintexteditfindbar_sizehint_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__plaintexteditfindbar_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditFindBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__plaintexteditfindbar_minimumsizehint_isbase) {
            textcustomeditor__plaintexteditfindbar_minimumsizehint_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__plaintexteditfindbar_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditFindBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__plaintexteditfindbar_heightforwidth_isbase) {
            textcustomeditor__plaintexteditfindbar_heightforwidth_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__plaintexteditfindbar_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__plaintexteditfindbar_hasheightforwidth_isbase) {
            textcustomeditor__plaintexteditfindbar_hasheightforwidth_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__plaintexteditfindbar_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__plaintexteditfindbar_paintengine_isbase) {
            textcustomeditor__plaintexteditfindbar_paintengine_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__plaintexteditfindbar_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousepressevent_isbase) {
            textcustomeditor__plaintexteditfindbar_mousepressevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__plaintexteditfindbar_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousereleaseevent_isbase) {
            textcustomeditor__plaintexteditfindbar_mousereleaseevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__plaintexteditfindbar_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_isbase) {
            textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__plaintexteditfindbar_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_mousemoveevent_isbase) {
            textcustomeditor__plaintexteditfindbar_mousemoveevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__plaintexteditfindbar_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_wheelevent_isbase) {
            textcustomeditor__plaintexteditfindbar_wheelevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__plaintexteditfindbar_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_keypressevent_isbase) {
            textcustomeditor__plaintexteditfindbar_keypressevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__plaintexteditfindbar_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_keyreleaseevent_isbase) {
            textcustomeditor__plaintexteditfindbar_keyreleaseevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__plaintexteditfindbar_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_focusinevent_isbase) {
            textcustomeditor__plaintexteditfindbar_focusinevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__plaintexteditfindbar_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;
            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_focusoutevent_isbase) {
            textcustomeditor__plaintexteditfindbar_focusoutevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__plaintexteditfindbar_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;
            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_enterevent_isbase) {
            textcustomeditor__plaintexteditfindbar_enterevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__plaintexteditfindbar_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_leaveevent_isbase) {
            textcustomeditor__plaintexteditfindbar_leaveevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__plaintexteditfindbar_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_paintevent_isbase) {
            textcustomeditor__plaintexteditfindbar_paintevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__plaintexteditfindbar_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;
            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_moveevent_isbase) {
            textcustomeditor__plaintexteditfindbar_moveevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__plaintexteditfindbar_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_resizeevent_isbase) {
            textcustomeditor__plaintexteditfindbar_resizeevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__plaintexteditfindbar_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;
            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_closeevent_isbase) {
            textcustomeditor__plaintexteditfindbar_closeevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__plaintexteditfindbar_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_contextmenuevent_isbase) {
            textcustomeditor__plaintexteditfindbar_contextmenuevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__plaintexteditfindbar_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_tabletevent_isbase) {
            textcustomeditor__plaintexteditfindbar_tabletevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__plaintexteditfindbar_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_actionevent_isbase) {
            textcustomeditor__plaintexteditfindbar_actionevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__plaintexteditfindbar_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dragenterevent_isbase) {
            textcustomeditor__plaintexteditfindbar_dragenterevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__plaintexteditfindbar_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;
            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dragmoveevent_isbase) {
            textcustomeditor__plaintexteditfindbar_dragmoveevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__plaintexteditfindbar_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dragleaveevent_isbase) {
            textcustomeditor__plaintexteditfindbar_dragleaveevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__plaintexteditfindbar_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_dropevent_isbase) {
            textcustomeditor__plaintexteditfindbar_dropevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__plaintexteditfindbar_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;
            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_showevent_isbase) {
            textcustomeditor__plaintexteditfindbar_showevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::showEvent(event);
            return;
        }
        auto showevent_cb = textcustomeditor__plaintexteditfindbar_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;
            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_hideevent_isbase) {
            textcustomeditor__plaintexteditfindbar_hideevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__plaintexteditfindbar_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;
            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__plaintexteditfindbar_nativeevent_isbase) {
            textcustomeditor__plaintexteditfindbar_nativeevent_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__plaintexteditfindbar_nativeevent_callback;
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
        return TextCustomEditor__PlainTextEditFindBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__plaintexteditfindbar_changeevent_isbase) {
            textcustomeditor__plaintexteditfindbar_changeevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__plaintexteditfindbar_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;
            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__plaintexteditfindbar_metric_isbase) {
            textcustomeditor__plaintexteditfindbar_metric_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::metric(param1);
        }
        auto metric_cb = textcustomeditor__plaintexteditfindbar_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__plaintexteditfindbar_initpainter_isbase) {
            textcustomeditor__plaintexteditfindbar_initpainter_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__plaintexteditfindbar_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__plaintexteditfindbar_redirected_isbase) {
            textcustomeditor__plaintexteditfindbar_redirected_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__plaintexteditfindbar_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__plaintexteditfindbar_sharedpainter_isbase) {
            textcustomeditor__plaintexteditfindbar_sharedpainter_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__plaintexteditfindbar_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__plaintexteditfindbar_inputmethodevent_isbase) {
            textcustomeditor__plaintexteditfindbar_inputmethodevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__plaintexteditfindbar_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__plaintexteditfindbar_inputmethodquery_isbase) {
            textcustomeditor__plaintexteditfindbar_inputmethodquery_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__plaintexteditfindbar_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditFindBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__plaintexteditfindbar_focusnextprevchild_isbase) {
            textcustomeditor__plaintexteditfindbar_focusnextprevchild_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__plaintexteditfindbar_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_eventfilter_isbase) {
            textcustomeditor__plaintexteditfindbar_eventfilter_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__plaintexteditfindbar_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_timerevent_isbase) {
            textcustomeditor__plaintexteditfindbar_timerevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__plaintexteditfindbar_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_childevent_isbase) {
            textcustomeditor__plaintexteditfindbar_childevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__plaintexteditfindbar_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditfindbar_customevent_isbase) {
            textcustomeditor__plaintexteditfindbar_customevent_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__plaintexteditfindbar_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditfindbar_connectnotify_isbase) {
            textcustomeditor__plaintexteditfindbar_connectnotify_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__plaintexteditfindbar_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditfindbar_disconnectnotify_isbase) {
            textcustomeditor__plaintexteditfindbar_disconnectnotify_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__plaintexteditfindbar_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void clearSelections() {
        if (textcustomeditor__plaintexteditfindbar_clearselections_isbase) {
            textcustomeditor__plaintexteditfindbar_clearselections_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::clearSelections();
            return;
        }
        auto clearselections_cb = textcustomeditor__plaintexteditfindbar_clearselections_callback;
        if (clearselections_cb) {
            clearselections_cb();
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::clearSelections();
    }

    // Virtual method for C ABI access and custom callback
    bool searchText(bool backward, bool isAutoSearch) {
        if (textcustomeditor__plaintexteditfindbar_searchtext_isbase) {
            textcustomeditor__plaintexteditfindbar_searchtext_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::searchText(backward, isAutoSearch);
        }
        auto searchtext_cb = textcustomeditor__plaintexteditfindbar_searchtext_callback;
        if (searchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            bool callback_ret = searchtext_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::searchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    void setFoundMatch(bool match) {
        if (textcustomeditor__plaintexteditfindbar_setfoundmatch_isbase) {
            textcustomeditor__plaintexteditfindbar_setfoundmatch_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::setFoundMatch(match);
            return;
        }
        auto setfoundmatch_cb = textcustomeditor__plaintexteditfindbar_setfoundmatch_callback;
        if (setfoundmatch_cb) {
            bool cbval1 = match;
            setfoundmatch_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::setFoundMatch(match);
    }

    // Virtual method for C ABI access and custom callback
    void messageInfo(bool backward, bool isAutoSearch, bool found) {
        if (textcustomeditor__plaintexteditfindbar_messageinfo_isbase) {
            textcustomeditor__plaintexteditfindbar_messageinfo_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::messageInfo(backward, isAutoSearch, found);
            return;
        }
        auto messageinfo_cb = textcustomeditor__plaintexteditfindbar_messageinfo_callback;
        if (messageinfo_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            bool cbval3 = found;
            messageinfo_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::messageInfo(backward, isAutoSearch, found);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__plaintexteditfindbar_updatemicrofocus_isbase) {
            textcustomeditor__plaintexteditfindbar_updatemicrofocus_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__plaintexteditfindbar_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__plaintexteditfindbar_create_isbase) {
            textcustomeditor__plaintexteditfindbar_create_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::create();
            return;
        }
        auto create_cb = textcustomeditor__plaintexteditfindbar_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__plaintexteditfindbar_destroy_isbase) {
            textcustomeditor__plaintexteditfindbar_destroy_isbase = false;
            TextCustomEditor__PlainTextEditFindBar::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__plaintexteditfindbar_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__PlainTextEditFindBar::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__plaintexteditfindbar_focusnextchild_isbase) {
            textcustomeditor__plaintexteditfindbar_focusnextchild_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__plaintexteditfindbar_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__plaintexteditfindbar_focuspreviouschild_isbase) {
            textcustomeditor__plaintexteditfindbar_focuspreviouschild_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__plaintexteditfindbar_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__plaintexteditfindbar_sender_isbase) {
            textcustomeditor__plaintexteditfindbar_sender_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::sender();
        }
        auto sender_cb = textcustomeditor__plaintexteditfindbar_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__plaintexteditfindbar_sendersignalindex_isbase) {
            textcustomeditor__plaintexteditfindbar_sendersignalindex_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__plaintexteditfindbar_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__plaintexteditfindbar_receivers_isbase) {
            textcustomeditor__plaintexteditfindbar_receivers_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__plaintexteditfindbar_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__plaintexteditfindbar_issignalconnected_isbase) {
            textcustomeditor__plaintexteditfindbar_issignalconnected_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__plaintexteditfindbar_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditFindBar::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__plaintexteditfindbar_getdecodedmetricf_isbase) {
            textcustomeditor__plaintexteditfindbar_getdecodedmetricf_isbase = false;
            return TextCustomEditor__PlainTextEditFindBar::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__plaintexteditfindbar_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditFindBar::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly(const TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty(const TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SearchInDocument(TextCustomEditor::PlainTextEditFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument(TextCustomEditor::PlainTextEditFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__PlainTextEditFindBar_SearchInDocument2(TextCustomEditor::PlainTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument2(TextCustomEditor::PlainTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend void TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor(TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_Event(TextCustomEditor::PlainTextEditFindBar* self, QEvent* e);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* e);
    friend void TextCustomEditor__PlainTextEditFindBar_MousePressEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMousePressEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_WheelEvent(TextCustomEditor::PlainTextEditFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperWheelEvent(TextCustomEditor::PlainTextEditFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_KeyPressEvent(TextCustomEditor::PlainTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperKeyPressEvent(TextCustomEditor::PlainTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent(TextCustomEditor::PlainTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor::PlainTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_FocusInEvent(TextCustomEditor::PlainTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperFocusInEvent(TextCustomEditor::PlainTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_FocusOutEvent(TextCustomEditor::PlainTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperFocusOutEvent(TextCustomEditor::PlainTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_EnterEvent(TextCustomEditor::PlainTextEditFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperEnterEvent(TextCustomEditor::PlainTextEditFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_LeaveEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperLeaveEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_PaintEvent(TextCustomEditor::PlainTextEditFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperPaintEvent(TextCustomEditor::PlainTextEditFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_MoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_ResizeEvent(TextCustomEditor::PlainTextEditFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperResizeEvent(TextCustomEditor::PlainTextEditFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_CloseEvent(TextCustomEditor::PlainTextEditFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperCloseEvent(TextCustomEditor::PlainTextEditFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent(TextCustomEditor::PlainTextEditFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperContextMenuEvent(TextCustomEditor::PlainTextEditFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_TabletEvent(TextCustomEditor::PlainTextEditFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperTabletEvent(TextCustomEditor::PlainTextEditFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_ActionEvent(TextCustomEditor::PlainTextEditFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperActionEvent(TextCustomEditor::PlainTextEditFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_DragEnterEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDragEnterEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_DragMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDragMoveEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor::PlainTextEditFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_DropEvent(TextCustomEditor::PlainTextEditFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDropEvent(TextCustomEditor::PlainTextEditFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_ShowEvent(TextCustomEditor::PlainTextEditFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperShowEvent(TextCustomEditor::PlainTextEditFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_HideEvent(TextCustomEditor::PlainTextEditFindBar* self, QHideEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperHideEvent(TextCustomEditor::PlainTextEditFindBar* self, QHideEvent* event);
    friend bool TextCustomEditor__PlainTextEditFindBar_NativeEvent(TextCustomEditor::PlainTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperNativeEvent(TextCustomEditor::PlainTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__PlainTextEditFindBar_ChangeEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* param1);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperChangeEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* param1);
    friend int TextCustomEditor__PlainTextEditFindBar_Metric(const TextCustomEditor::PlainTextEditFindBar* self, int param1);
    friend int TextCustomEditor__PlainTextEditFindBar_SuperMetric(const TextCustomEditor::PlainTextEditFindBar* self, int param1);
    friend void TextCustomEditor__PlainTextEditFindBar_InitPainter(const TextCustomEditor::PlainTextEditFindBar* self, QPainter* painter);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperInitPainter(const TextCustomEditor::PlainTextEditFindBar* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__PlainTextEditFindBar_Redirected(const TextCustomEditor::PlainTextEditFindBar* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__PlainTextEditFindBar_SuperRedirected(const TextCustomEditor::PlainTextEditFindBar* self, QPoint* offset);
    friend QPainter* TextCustomEditor__PlainTextEditFindBar_SharedPainter(const TextCustomEditor::PlainTextEditFindBar* self);
    friend QPainter* TextCustomEditor__PlainTextEditFindBar_SuperSharedPainter(const TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_InputMethodEvent(TextCustomEditor::PlainTextEditFindBar* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperInputMethodEvent(TextCustomEditor::PlainTextEditFindBar* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild(TextCustomEditor::PlainTextEditFindBar* self, bool next);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor::PlainTextEditFindBar* self, bool next);
    friend void TextCustomEditor__PlainTextEditFindBar_TimerEvent(TextCustomEditor::PlainTextEditFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperTimerEvent(TextCustomEditor::PlainTextEditFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_ChildEvent(TextCustomEditor::PlainTextEditFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperChildEvent(TextCustomEditor::PlainTextEditFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_CustomEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperCustomEvent(TextCustomEditor::PlainTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditFindBar_ConnectNotify(TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperConnectNotify(TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditFindBar_DisconnectNotify(TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDisconnectNotify(TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditFindBar_ClearSelections(TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperClearSelections(TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SearchText(TextCustomEditor::PlainTextEditFindBar* self, bool backward, bool isAutoSearch);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperSearchText(TextCustomEditor::PlainTextEditFindBar* self, bool backward, bool isAutoSearch);
    friend void TextCustomEditor__PlainTextEditFindBar_SetFoundMatch(TextCustomEditor::PlainTextEditFindBar* self, bool match);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperSetFoundMatch(TextCustomEditor::PlainTextEditFindBar* self, bool match);
    friend void TextCustomEditor__PlainTextEditFindBar_MessageInfo(TextCustomEditor::PlainTextEditFindBar* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperMessageInfo(TextCustomEditor::PlainTextEditFindBar* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus(TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperUpdateMicroFocus(TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_Create(TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperCreate(TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_Destroy(TextCustomEditor::PlainTextEditFindBar* self);
    friend void TextCustomEditor__PlainTextEditFindBar_SuperDestroy(TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_FocusNextChild(TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperFocusNextChild(TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild(TextCustomEditor::PlainTextEditFindBar* self);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperFocusPreviousChild(TextCustomEditor::PlainTextEditFindBar* self);
    friend QObject* TextCustomEditor__PlainTextEditFindBar_Sender(const TextCustomEditor::PlainTextEditFindBar* self);
    friend QObject* TextCustomEditor__PlainTextEditFindBar_SuperSender(const TextCustomEditor::PlainTextEditFindBar* self);
    friend int TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex(const TextCustomEditor::PlainTextEditFindBar* self);
    friend int TextCustomEditor__PlainTextEditFindBar_SuperSenderSignalIndex(const TextCustomEditor::PlainTextEditFindBar* self);
    friend int TextCustomEditor__PlainTextEditFindBar_Receivers(const TextCustomEditor::PlainTextEditFindBar* self, const char* signal);
    friend int TextCustomEditor__PlainTextEditFindBar_SuperReceivers(const TextCustomEditor::PlainTextEditFindBar* self, const char* signal);
    friend bool TextCustomEditor__PlainTextEditFindBar_IsSignalConnected(const TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__PlainTextEditFindBar_SuperIsSignalConnected(const TextCustomEditor::PlainTextEditFindBar* self, const QMetaMethod* signal);
    friend double TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF(const TextCustomEditor::PlainTextEditFindBar* self, int metricA, int metricB);
    friend double TextCustomEditor__PlainTextEditFindBar_SuperGetDecodedMetricF(const TextCustomEditor::PlainTextEditFindBar* self, int metricA, int metricB);
};

#endif
