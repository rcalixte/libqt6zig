#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTEDITFINDBAR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTEDITFINDBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextEditFindBar so that we can call protected methods
class VirtualTextCustomEditorRichTextEditFindBar final : public TextCustomEditor::RichTextEditFindBar {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorRichTextEditFindBar = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__RichTextEditFindBar_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__RichTextEditFindBar_Metacast_Callback = void* (*)(TextCustomEditor__RichTextEditFindBar*, const char*);
    using TextCustomEditor__RichTextEditFindBar_Metacall_Callback = int (*)(TextCustomEditor__RichTextEditFindBar*, int, int, void**);
    using TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback = bool (*)();
    using TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback = bool (*)();
    using TextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, const char*, int);
    using TextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, QRegularExpression*, int);
    using TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback = void (*)();
    using TextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, bool, bool);
    using TextCustomEditor__RichTextEditFindBar_Event_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_DevType_Callback = int (*)();
    using TextCustomEditor__RichTextEditFindBar_SetVisible_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, bool);
    using TextCustomEditor__RichTextEditFindBar_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextEditFindBar*, int);
    using TextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__RichTextEditFindBar_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextEditFindBar_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QWheelEvent*);
    using TextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextEditFindBar_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEnterEvent*);
    using TextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QPaintEvent*);
    using TextCustomEditor__RichTextEditFindBar_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMoveEvent*);
    using TextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QResizeEvent*);
    using TextCustomEditor__RichTextEditFindBar_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QCloseEvent*);
    using TextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QContextMenuEvent*);
    using TextCustomEditor__RichTextEditFindBar_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QTabletEvent*);
    using TextCustomEditor__RichTextEditFindBar_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QActionEvent*);
    using TextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDragEnterEvent*);
    using TextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDragMoveEvent*);
    using TextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextEditFindBar_DropEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QDropEvent*);
    using TextCustomEditor__RichTextEditFindBar_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QShowEvent*);
    using TextCustomEditor__RichTextEditFindBar_HideEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QHideEvent*);
    using TextCustomEditor__RichTextEditFindBar_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_Metric_Callback = int (*)(const TextCustomEditor__RichTextEditFindBar*, int);
    using TextCustomEditor__RichTextEditFindBar_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextEditFindBar*, QPainter*);
    using TextCustomEditor__RichTextEditFindBar_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextEditFindBar*, QPoint*);
    using TextCustomEditor__RichTextEditFindBar_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QInputMethodEvent*);
    using TextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextEditFindBar*, int);
    using TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, bool);
    using TextCustomEditor__RichTextEditFindBar_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, QObject*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QTimerEvent*);
    using TextCustomEditor__RichTextEditFindBar_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QChildEvent*);
    using TextCustomEditor__RichTextEditFindBar_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QEvent*);
    using TextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextEditFindBar_ClearSelections_Callback = void (*)();
    using TextCustomEditor__RichTextEditFindBar_SearchText_Callback = bool (*)(TextCustomEditor__RichTextEditFindBar*, bool, bool);
    using TextCustomEditor__RichTextEditFindBar_SetFoundMatch_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, bool);
    using TextCustomEditor__RichTextEditFindBar_MessageInfo_Callback = void (*)(TextCustomEditor__RichTextEditFindBar*, bool, bool, bool);
    using TextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__RichTextEditFindBar_Create_Callback = void (*)();
    using TextCustomEditor__RichTextEditFindBar_Destroy_Callback = void (*)();
    using TextCustomEditor__RichTextEditFindBar_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__RichTextEditFindBar_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__RichTextEditFindBar_Sender_Callback = QObject* (*)();
    using TextCustomEditor__RichTextEditFindBar_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__RichTextEditFindBar_Receivers_Callback = int (*)(const TextCustomEditor__RichTextEditFindBar*, const char*);
    using TextCustomEditor__RichTextEditFindBar_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__RichTextEditFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__RichTextEditFindBar*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__RichTextEditFindBar_MetaObject_Callback textcustomeditor__richtexteditfindbar_metaobject_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Metacast_Callback textcustomeditor__richtexteditfindbar_metacast_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Metacall_Callback textcustomeditor__richtexteditfindbar_metacall_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback textcustomeditor__richtexteditfindbar_viewisreadonly_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback textcustomeditor__richtexteditfindbar_documentisempty_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback textcustomeditor__richtexteditfindbar_searchindocument_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback textcustomeditor__richtexteditfindbar_searchindocument2_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback textcustomeditor__richtexteditfindbar_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback textcustomeditor__richtexteditfindbar_slotsearchtext_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Event_Callback textcustomeditor__richtexteditfindbar_event_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DevType_Callback textcustomeditor__richtexteditfindbar_devtype_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SetVisible_Callback textcustomeditor__richtexteditfindbar_setvisible_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SizeHint_Callback textcustomeditor__richtexteditfindbar_sizehint_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback textcustomeditor__richtexteditfindbar_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback textcustomeditor__richtexteditfindbar_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback textcustomeditor__richtexteditfindbar_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_PaintEngine_Callback textcustomeditor__richtexteditfindbar_paintengine_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback textcustomeditor__richtexteditfindbar_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback textcustomeditor__richtexteditfindbar_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback textcustomeditor__richtexteditfindbar_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback textcustomeditor__richtexteditfindbar_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_WheelEvent_Callback textcustomeditor__richtexteditfindbar_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback textcustomeditor__richtexteditfindbar_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback textcustomeditor__richtexteditfindbar_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback textcustomeditor__richtexteditfindbar_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback textcustomeditor__richtexteditfindbar_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_EnterEvent_Callback textcustomeditor__richtexteditfindbar_enterevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback textcustomeditor__richtexteditfindbar_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_PaintEvent_Callback textcustomeditor__richtexteditfindbar_paintevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MoveEvent_Callback textcustomeditor__richtexteditfindbar_moveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback textcustomeditor__richtexteditfindbar_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_CloseEvent_Callback textcustomeditor__richtexteditfindbar_closeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback textcustomeditor__richtexteditfindbar_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_TabletEvent_Callback textcustomeditor__richtexteditfindbar_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ActionEvent_Callback textcustomeditor__richtexteditfindbar_actionevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback textcustomeditor__richtexteditfindbar_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback textcustomeditor__richtexteditfindbar_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback textcustomeditor__richtexteditfindbar_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DropEvent_Callback textcustomeditor__richtexteditfindbar_dropevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ShowEvent_Callback textcustomeditor__richtexteditfindbar_showevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_HideEvent_Callback textcustomeditor__richtexteditfindbar_hideevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_NativeEvent_Callback textcustomeditor__richtexteditfindbar_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback textcustomeditor__richtexteditfindbar_changeevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Metric_Callback textcustomeditor__richtexteditfindbar_metric_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_InitPainter_Callback textcustomeditor__richtexteditfindbar_initpainter_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Redirected_Callback textcustomeditor__richtexteditfindbar_redirected_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SharedPainter_Callback textcustomeditor__richtexteditfindbar_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback textcustomeditor__richtexteditfindbar_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback textcustomeditor__richtexteditfindbar_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback textcustomeditor__richtexteditfindbar_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_EventFilter_Callback textcustomeditor__richtexteditfindbar_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_TimerEvent_Callback textcustomeditor__richtexteditfindbar_timerevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ChildEvent_Callback textcustomeditor__richtexteditfindbar_childevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_CustomEvent_Callback textcustomeditor__richtexteditfindbar_customevent_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback textcustomeditor__richtexteditfindbar_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback textcustomeditor__richtexteditfindbar_disconnectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_ClearSelections_Callback textcustomeditor__richtexteditfindbar_clearselections_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SearchText_Callback textcustomeditor__richtexteditfindbar_searchtext_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SetFoundMatch_Callback textcustomeditor__richtexteditfindbar_setfoundmatch_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_MessageInfo_Callback textcustomeditor__richtexteditfindbar_messageinfo_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_Callback textcustomeditor__richtexteditfindbar_updatemicrofocus_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Create_Callback textcustomeditor__richtexteditfindbar_create_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Destroy_Callback textcustomeditor__richtexteditfindbar_destroy_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusNextChild_Callback textcustomeditor__richtexteditfindbar_focusnextchild_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_FocusPreviousChild_Callback textcustomeditor__richtexteditfindbar_focuspreviouschild_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Sender_Callback textcustomeditor__richtexteditfindbar_sender_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_SenderSignalIndex_Callback textcustomeditor__richtexteditfindbar_sendersignalindex_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_Receivers_Callback textcustomeditor__richtexteditfindbar_receivers_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_IsSignalConnected_Callback textcustomeditor__richtexteditfindbar_issignalconnected_callback = nullptr;
    TextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_Callback textcustomeditor__richtexteditfindbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__richtexteditfindbar_metaobject_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_metacast_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_metacall_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_viewisreadonly_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_documentisempty_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_searchindocument_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_searchindocument2_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_autosearchmovecursor_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_slotsearchtext_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_event_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_devtype_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_setvisible_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_sizehint_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_heightforwidth_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_paintengine_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_mousepressevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_wheelevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_keypressevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_focusinevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_focusoutevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_enterevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_leaveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_paintevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_moveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_resizeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_closeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_tabletevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_actionevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_dragenterevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_dropevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_showevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_hideevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_nativeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_changeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_metric_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_initpainter_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_redirected_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_sharedpainter_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_eventfilter_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_timerevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_childevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_customevent_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_connectnotify_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_clearselections_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_searchtext_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_setfoundmatch_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_messageinfo_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_create_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_destroy_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_focusnextchild_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_sender_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_receivers_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_issignalconnected_isbase = false;
    mutable bool textcustomeditor__richtexteditfindbar_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorRichTextEditFindBar(QTextEdit* view) : TextCustomEditor::RichTextEditFindBar(view) {};
    VirtualTextCustomEditorRichTextEditFindBar(QTextEdit* view, QWidget* parent) : TextCustomEditor::RichTextEditFindBar(view, parent) {};

    // Callback setters
    inline void setTextCustomEditor__RichTextEditFindBar_MetaObject_Callback(TextCustomEditor__RichTextEditFindBar_MetaObject_Callback cb) { textcustomeditor__richtexteditfindbar_metaobject_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Metacast_Callback(TextCustomEditor__RichTextEditFindBar_Metacast_Callback cb) { textcustomeditor__richtexteditfindbar_metacast_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Metacall_Callback(TextCustomEditor__RichTextEditFindBar_Metacall_Callback cb) { textcustomeditor__richtexteditfindbar_metacall_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback(TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_Callback cb) { textcustomeditor__richtexteditfindbar_viewisreadonly_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback(TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_Callback cb) { textcustomeditor__richtexteditfindbar_documentisempty_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback(TextCustomEditor__RichTextEditFindBar_SearchInDocument_Callback cb) { textcustomeditor__richtexteditfindbar_searchindocument_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback(TextCustomEditor__RichTextEditFindBar_SearchInDocument2_Callback cb) { textcustomeditor__richtexteditfindbar_searchindocument2_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback(TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_Callback cb) { textcustomeditor__richtexteditfindbar_autosearchmovecursor_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback(TextCustomEditor__RichTextEditFindBar_SlotSearchText_Callback cb) { textcustomeditor__richtexteditfindbar_slotsearchtext_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Event_Callback(TextCustomEditor__RichTextEditFindBar_Event_Callback cb) { textcustomeditor__richtexteditfindbar_event_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_DevType_Callback(TextCustomEditor__RichTextEditFindBar_DevType_Callback cb) { textcustomeditor__richtexteditfindbar_devtype_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SetVisible_Callback(TextCustomEditor__RichTextEditFindBar_SetVisible_Callback cb) { textcustomeditor__richtexteditfindbar_setvisible_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SizeHint_Callback(TextCustomEditor__RichTextEditFindBar_SizeHint_Callback cb) { textcustomeditor__richtexteditfindbar_sizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback(TextCustomEditor__RichTextEditFindBar_MinimumSizeHint_Callback cb) { textcustomeditor__richtexteditfindbar_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback(TextCustomEditor__RichTextEditFindBar_HeightForWidth_Callback cb) { textcustomeditor__richtexteditfindbar_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback(TextCustomEditor__RichTextEditFindBar_HasHeightForWidth_Callback cb) { textcustomeditor__richtexteditfindbar_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_PaintEngine_Callback(TextCustomEditor__RichTextEditFindBar_PaintEngine_Callback cb) { textcustomeditor__richtexteditfindbar_paintengine_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback(TextCustomEditor__RichTextEditFindBar_MousePressEvent_Callback cb) { textcustomeditor__richtexteditfindbar_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback(TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_Callback cb) { textcustomeditor__richtexteditfindbar_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback(TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_Callback cb) { textcustomeditor__richtexteditfindbar_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback(TextCustomEditor__RichTextEditFindBar_MouseMoveEvent_Callback cb) { textcustomeditor__richtexteditfindbar_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_WheelEvent_Callback(TextCustomEditor__RichTextEditFindBar_WheelEvent_Callback cb) { textcustomeditor__richtexteditfindbar_wheelevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback(TextCustomEditor__RichTextEditFindBar_KeyPressEvent_Callback cb) { textcustomeditor__richtexteditfindbar_keypressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback(TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_Callback cb) { textcustomeditor__richtexteditfindbar_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback(TextCustomEditor__RichTextEditFindBar_FocusInEvent_Callback cb) { textcustomeditor__richtexteditfindbar_focusinevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback(TextCustomEditor__RichTextEditFindBar_FocusOutEvent_Callback cb) { textcustomeditor__richtexteditfindbar_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_EnterEvent_Callback(TextCustomEditor__RichTextEditFindBar_EnterEvent_Callback cb) { textcustomeditor__richtexteditfindbar_enterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback(TextCustomEditor__RichTextEditFindBar_LeaveEvent_Callback cb) { textcustomeditor__richtexteditfindbar_leaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_PaintEvent_Callback(TextCustomEditor__RichTextEditFindBar_PaintEvent_Callback cb) { textcustomeditor__richtexteditfindbar_paintevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_MoveEvent_Callback(TextCustomEditor__RichTextEditFindBar_MoveEvent_Callback cb) { textcustomeditor__richtexteditfindbar_moveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback(TextCustomEditor__RichTextEditFindBar_ResizeEvent_Callback cb) { textcustomeditor__richtexteditfindbar_resizeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_CloseEvent_Callback(TextCustomEditor__RichTextEditFindBar_CloseEvent_Callback cb) { textcustomeditor__richtexteditfindbar_closeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback(TextCustomEditor__RichTextEditFindBar_ContextMenuEvent_Callback cb) { textcustomeditor__richtexteditfindbar_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_TabletEvent_Callback(TextCustomEditor__RichTextEditFindBar_TabletEvent_Callback cb) { textcustomeditor__richtexteditfindbar_tabletevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ActionEvent_Callback(TextCustomEditor__RichTextEditFindBar_ActionEvent_Callback cb) { textcustomeditor__richtexteditfindbar_actionevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback(TextCustomEditor__RichTextEditFindBar_DragEnterEvent_Callback cb) { textcustomeditor__richtexteditfindbar_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback(TextCustomEditor__RichTextEditFindBar_DragMoveEvent_Callback cb) { textcustomeditor__richtexteditfindbar_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback(TextCustomEditor__RichTextEditFindBar_DragLeaveEvent_Callback cb) { textcustomeditor__richtexteditfindbar_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_DropEvent_Callback(TextCustomEditor__RichTextEditFindBar_DropEvent_Callback cb) { textcustomeditor__richtexteditfindbar_dropevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ShowEvent_Callback(TextCustomEditor__RichTextEditFindBar_ShowEvent_Callback cb) { textcustomeditor__richtexteditfindbar_showevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_HideEvent_Callback(TextCustomEditor__RichTextEditFindBar_HideEvent_Callback cb) { textcustomeditor__richtexteditfindbar_hideevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_NativeEvent_Callback(TextCustomEditor__RichTextEditFindBar_NativeEvent_Callback cb) { textcustomeditor__richtexteditfindbar_nativeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback(TextCustomEditor__RichTextEditFindBar_ChangeEvent_Callback cb) { textcustomeditor__richtexteditfindbar_changeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Metric_Callback(TextCustomEditor__RichTextEditFindBar_Metric_Callback cb) { textcustomeditor__richtexteditfindbar_metric_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_InitPainter_Callback(TextCustomEditor__RichTextEditFindBar_InitPainter_Callback cb) { textcustomeditor__richtexteditfindbar_initpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Redirected_Callback(TextCustomEditor__RichTextEditFindBar_Redirected_Callback cb) { textcustomeditor__richtexteditfindbar_redirected_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SharedPainter_Callback(TextCustomEditor__RichTextEditFindBar_SharedPainter_Callback cb) { textcustomeditor__richtexteditfindbar_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback(TextCustomEditor__RichTextEditFindBar_InputMethodEvent_Callback cb) { textcustomeditor__richtexteditfindbar_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback(TextCustomEditor__RichTextEditFindBar_InputMethodQuery_Callback cb) { textcustomeditor__richtexteditfindbar_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback(TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_Callback cb) { textcustomeditor__richtexteditfindbar_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_EventFilter_Callback(TextCustomEditor__RichTextEditFindBar_EventFilter_Callback cb) { textcustomeditor__richtexteditfindbar_eventfilter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_TimerEvent_Callback(TextCustomEditor__RichTextEditFindBar_TimerEvent_Callback cb) { textcustomeditor__richtexteditfindbar_timerevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ChildEvent_Callback(TextCustomEditor__RichTextEditFindBar_ChildEvent_Callback cb) { textcustomeditor__richtexteditfindbar_childevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_CustomEvent_Callback(TextCustomEditor__RichTextEditFindBar_CustomEvent_Callback cb) { textcustomeditor__richtexteditfindbar_customevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback(TextCustomEditor__RichTextEditFindBar_ConnectNotify_Callback cb) { textcustomeditor__richtexteditfindbar_connectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback(TextCustomEditor__RichTextEditFindBar_DisconnectNotify_Callback cb) { textcustomeditor__richtexteditfindbar_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_ClearSelections_Callback(TextCustomEditor__RichTextEditFindBar_ClearSelections_Callback cb) { textcustomeditor__richtexteditfindbar_clearselections_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SearchText_Callback(TextCustomEditor__RichTextEditFindBar_SearchText_Callback cb) { textcustomeditor__richtexteditfindbar_searchtext_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SetFoundMatch_Callback(TextCustomEditor__RichTextEditFindBar_SetFoundMatch_Callback cb) { textcustomeditor__richtexteditfindbar_setfoundmatch_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_MessageInfo_Callback(TextCustomEditor__RichTextEditFindBar_MessageInfo_Callback cb) { textcustomeditor__richtexteditfindbar_messageinfo_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_Callback(TextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_Callback cb) { textcustomeditor__richtexteditfindbar_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Create_Callback(TextCustomEditor__RichTextEditFindBar_Create_Callback cb) { textcustomeditor__richtexteditfindbar_create_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Destroy_Callback(TextCustomEditor__RichTextEditFindBar_Destroy_Callback cb) { textcustomeditor__richtexteditfindbar_destroy_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusNextChild_Callback(TextCustomEditor__RichTextEditFindBar_FocusNextChild_Callback cb) { textcustomeditor__richtexteditfindbar_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusPreviousChild_Callback(TextCustomEditor__RichTextEditFindBar_FocusPreviousChild_Callback cb) { textcustomeditor__richtexteditfindbar_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Sender_Callback(TextCustomEditor__RichTextEditFindBar_Sender_Callback cb) { textcustomeditor__richtexteditfindbar_sender_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_SenderSignalIndex_Callback(TextCustomEditor__RichTextEditFindBar_SenderSignalIndex_Callback cb) { textcustomeditor__richtexteditfindbar_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_Receivers_Callback(TextCustomEditor__RichTextEditFindBar_Receivers_Callback cb) { textcustomeditor__richtexteditfindbar_receivers_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_IsSignalConnected_Callback(TextCustomEditor__RichTextEditFindBar_IsSignalConnected_Callback cb) { textcustomeditor__richtexteditfindbar_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_Callback(TextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_Callback cb) { textcustomeditor__richtexteditfindbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__RichTextEditFindBar_MetaObject_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_metaobject_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Metacast_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_metacast_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Metacall_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_metacall_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ViewIsReadOnly_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_viewisreadonly_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_DocumentIsEmpty_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_documentisempty_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SearchInDocument_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_searchindocument_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SearchInDocument2_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_searchindocument2_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_autosearchmovecursor_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SlotSearchText_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_slotsearchtext_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Event_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_event_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_DevType_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_devtype_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SetVisible_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_setvisible_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SizeHint_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_sizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_HeightForWidth_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_PaintEngine_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_paintengine_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_MousePressEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_WheelEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_wheelevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_KeyPressEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_keypressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusInEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_focusinevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusOutEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_EnterEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_enterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_LeaveEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_leaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_PaintEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_paintevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_MoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_moveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ResizeEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_resizeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_CloseEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_closeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_TabletEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_tabletevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ActionEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_actionevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_DragEnterEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_DragMoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_DropEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_dropevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ShowEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_showevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_HideEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_hideevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_NativeEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_nativeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ChangeEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_changeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Metric_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_metric_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_InitPainter_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_initpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Redirected_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_redirected_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SharedPainter_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_InputMethodEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_InputMethodQuery_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_EventFilter_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_eventfilter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_TimerEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_timerevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ChildEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_childevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_CustomEvent_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_customevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ConnectNotify_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_connectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_DisconnectNotify_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_ClearSelections_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_clearselections_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SearchText_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_searchtext_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SetFoundMatch_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_setfoundmatch_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_MessageInfo_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_messageinfo_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Create_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_create_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Destroy_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_destroy_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusNextChild_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Sender_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_sender_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_Receivers_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_receivers_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_IsSignalConnected_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__RichTextEditFindBar_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__richtexteditfindbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtexteditfindbar_metaobject_isbase) {
            textcustomeditor__richtexteditfindbar_metaobject_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::metaObject();
        }
        auto metaobject_cb = textcustomeditor__richtexteditfindbar_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtexteditfindbar_metacast_isbase) {
            textcustomeditor__richtexteditfindbar_metacast_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__richtexteditfindbar_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtexteditfindbar_metacall_isbase) {
            textcustomeditor__richtexteditfindbar_metacall_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__richtexteditfindbar_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        if (textcustomeditor__richtexteditfindbar_viewisreadonly_isbase) {
            textcustomeditor__richtexteditfindbar_viewisreadonly_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::viewIsReadOnly();
        }
        auto viewisreadonly_cb = textcustomeditor__richtexteditfindbar_viewisreadonly_callback;
        if (viewisreadonly_cb) {
            bool callback_ret = viewisreadonly_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::viewIsReadOnly();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        if (textcustomeditor__richtexteditfindbar_documentisempty_isbase) {
            textcustomeditor__richtexteditfindbar_documentisempty_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::documentIsEmpty();
        }
        auto documentisempty_cb = textcustomeditor__richtexteditfindbar_documentisempty_callback;
        if (documentisempty_cb) {
            bool callback_ret = documentisempty_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::documentIsEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtexteditfindbar_searchindocument_isbase) {
            textcustomeditor__richtexteditfindbar_searchindocument_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::searchInDocument(text, searchOptions);
        }
        auto searchindocument_cb = textcustomeditor__richtexteditfindbar_searchindocument_callback;
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
        return TextCustomEditor__RichTextEditFindBar::searchInDocument(text, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtexteditfindbar_searchindocument2_isbase) {
            textcustomeditor__richtexteditfindbar_searchindocument2_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::searchInDocument(regExp, searchOptions);
        }
        auto searchindocument2_cb = textcustomeditor__richtexteditfindbar_searchindocument2_callback;
        if (searchindocument2_cb) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = searchindocument2_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::searchInDocument(regExp, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        if (textcustomeditor__richtexteditfindbar_autosearchmovecursor_isbase) {
            textcustomeditor__richtexteditfindbar_autosearchmovecursor_isbase = false;
            TextCustomEditor__RichTextEditFindBar::autoSearchMoveCursor();
            return;
        }
        auto autosearchmovecursor_cb = textcustomeditor__richtexteditfindbar_autosearchmovecursor_callback;
        if (autosearchmovecursor_cb) {
            autosearchmovecursor_cb();
            return;
        }
        TextCustomEditor__RichTextEditFindBar::autoSearchMoveCursor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        if (textcustomeditor__richtexteditfindbar_slotsearchtext_isbase) {
            textcustomeditor__richtexteditfindbar_slotsearchtext_isbase = false;
            TextCustomEditor__RichTextEditFindBar::slotSearchText(backward, isAutoSearch);
            return;
        }
        auto slotsearchtext_cb = textcustomeditor__richtexteditfindbar_slotsearchtext_callback;
        if (slotsearchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            slotsearchtext_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::slotSearchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__richtexteditfindbar_event_isbase) {
            textcustomeditor__richtexteditfindbar_event_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::event(e);
        }
        auto event_cb = textcustomeditor__richtexteditfindbar_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtexteditfindbar_devtype_isbase) {
            textcustomeditor__richtexteditfindbar_devtype_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::devType();
        }
        auto devtype_cb = textcustomeditor__richtexteditfindbar_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtexteditfindbar_setvisible_isbase) {
            textcustomeditor__richtexteditfindbar_setvisible_isbase = false;
            TextCustomEditor__RichTextEditFindBar::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__richtexteditfindbar_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtexteditfindbar_sizehint_isbase) {
            textcustomeditor__richtexteditfindbar_sizehint_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__richtexteditfindbar_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditFindBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtexteditfindbar_minimumsizehint_isbase) {
            textcustomeditor__richtexteditfindbar_minimumsizehint_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__richtexteditfindbar_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditFindBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtexteditfindbar_heightforwidth_isbase) {
            textcustomeditor__richtexteditfindbar_heightforwidth_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__richtexteditfindbar_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtexteditfindbar_hasheightforwidth_isbase) {
            textcustomeditor__richtexteditfindbar_hasheightforwidth_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__richtexteditfindbar_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtexteditfindbar_paintengine_isbase) {
            textcustomeditor__richtexteditfindbar_paintengine_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__richtexteditfindbar_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousepressevent_isbase) {
            textcustomeditor__richtexteditfindbar_mousepressevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__richtexteditfindbar_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousereleaseevent_isbase) {
            textcustomeditor__richtexteditfindbar_mousereleaseevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__richtexteditfindbar_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousedoubleclickevent_isbase) {
            textcustomeditor__richtexteditfindbar_mousedoubleclickevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__richtexteditfindbar_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_mousemoveevent_isbase) {
            textcustomeditor__richtexteditfindbar_mousemoveevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__richtexteditfindbar_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_wheelevent_isbase) {
            textcustomeditor__richtexteditfindbar_wheelevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__richtexteditfindbar_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_keypressevent_isbase) {
            textcustomeditor__richtexteditfindbar_keypressevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__richtexteditfindbar_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_keyreleaseevent_isbase) {
            textcustomeditor__richtexteditfindbar_keyreleaseevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__richtexteditfindbar_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_focusinevent_isbase) {
            textcustomeditor__richtexteditfindbar_focusinevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__richtexteditfindbar_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;
            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_focusoutevent_isbase) {
            textcustomeditor__richtexteditfindbar_focusoutevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__richtexteditfindbar_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;
            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_enterevent_isbase) {
            textcustomeditor__richtexteditfindbar_enterevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__richtexteditfindbar_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_leaveevent_isbase) {
            textcustomeditor__richtexteditfindbar_leaveevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__richtexteditfindbar_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_paintevent_isbase) {
            textcustomeditor__richtexteditfindbar_paintevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__richtexteditfindbar_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;
            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_moveevent_isbase) {
            textcustomeditor__richtexteditfindbar_moveevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__richtexteditfindbar_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_resizeevent_isbase) {
            textcustomeditor__richtexteditfindbar_resizeevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__richtexteditfindbar_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;
            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_closeevent_isbase) {
            textcustomeditor__richtexteditfindbar_closeevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__richtexteditfindbar_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_contextmenuevent_isbase) {
            textcustomeditor__richtexteditfindbar_contextmenuevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__richtexteditfindbar_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_tabletevent_isbase) {
            textcustomeditor__richtexteditfindbar_tabletevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__richtexteditfindbar_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_actionevent_isbase) {
            textcustomeditor__richtexteditfindbar_actionevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__richtexteditfindbar_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dragenterevent_isbase) {
            textcustomeditor__richtexteditfindbar_dragenterevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__richtexteditfindbar_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;
            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dragmoveevent_isbase) {
            textcustomeditor__richtexteditfindbar_dragmoveevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__richtexteditfindbar_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dragleaveevent_isbase) {
            textcustomeditor__richtexteditfindbar_dragleaveevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__richtexteditfindbar_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_dropevent_isbase) {
            textcustomeditor__richtexteditfindbar_dropevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__richtexteditfindbar_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;
            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_showevent_isbase) {
            textcustomeditor__richtexteditfindbar_showevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::showEvent(event);
            return;
        }
        auto showevent_cb = textcustomeditor__richtexteditfindbar_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;
            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_hideevent_isbase) {
            textcustomeditor__richtexteditfindbar_hideevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__richtexteditfindbar_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;
            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtexteditfindbar_nativeevent_isbase) {
            textcustomeditor__richtexteditfindbar_nativeevent_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__richtexteditfindbar_nativeevent_callback;
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
        return TextCustomEditor__RichTextEditFindBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtexteditfindbar_changeevent_isbase) {
            textcustomeditor__richtexteditfindbar_changeevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__richtexteditfindbar_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;
            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtexteditfindbar_metric_isbase) {
            textcustomeditor__richtexteditfindbar_metric_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::metric(param1);
        }
        auto metric_cb = textcustomeditor__richtexteditfindbar_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtexteditfindbar_initpainter_isbase) {
            textcustomeditor__richtexteditfindbar_initpainter_isbase = false;
            TextCustomEditor__RichTextEditFindBar::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__richtexteditfindbar_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtexteditfindbar_redirected_isbase) {
            textcustomeditor__richtexteditfindbar_redirected_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__richtexteditfindbar_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtexteditfindbar_sharedpainter_isbase) {
            textcustomeditor__richtexteditfindbar_sharedpainter_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__richtexteditfindbar_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtexteditfindbar_inputmethodevent_isbase) {
            textcustomeditor__richtexteditfindbar_inputmethodevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__richtexteditfindbar_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtexteditfindbar_inputmethodquery_isbase) {
            textcustomeditor__richtexteditfindbar_inputmethodquery_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__richtexteditfindbar_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditFindBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtexteditfindbar_focusnextprevchild_isbase) {
            textcustomeditor__richtexteditfindbar_focusnextprevchild_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__richtexteditfindbar_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_eventfilter_isbase) {
            textcustomeditor__richtexteditfindbar_eventfilter_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__richtexteditfindbar_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_timerevent_isbase) {
            textcustomeditor__richtexteditfindbar_timerevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__richtexteditfindbar_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_childevent_isbase) {
            textcustomeditor__richtexteditfindbar_childevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__richtexteditfindbar_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditfindbar_customevent_isbase) {
            textcustomeditor__richtexteditfindbar_customevent_isbase = false;
            TextCustomEditor__RichTextEditFindBar::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__richtexteditfindbar_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditfindbar_connectnotify_isbase) {
            textcustomeditor__richtexteditfindbar_connectnotify_isbase = false;
            TextCustomEditor__RichTextEditFindBar::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__richtexteditfindbar_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditfindbar_disconnectnotify_isbase) {
            textcustomeditor__richtexteditfindbar_disconnectnotify_isbase = false;
            TextCustomEditor__RichTextEditFindBar::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__richtexteditfindbar_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void clearSelections() {
        if (textcustomeditor__richtexteditfindbar_clearselections_isbase) {
            textcustomeditor__richtexteditfindbar_clearselections_isbase = false;
            TextCustomEditor__RichTextEditFindBar::clearSelections();
            return;
        }
        auto clearselections_cb = textcustomeditor__richtexteditfindbar_clearselections_callback;
        if (clearselections_cb) {
            clearselections_cb();
            return;
        }
        TextCustomEditor__RichTextEditFindBar::clearSelections();
    }

    // Virtual method for C ABI access and custom callback
    bool searchText(bool backward, bool isAutoSearch) {
        if (textcustomeditor__richtexteditfindbar_searchtext_isbase) {
            textcustomeditor__richtexteditfindbar_searchtext_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::searchText(backward, isAutoSearch);
        }
        auto searchtext_cb = textcustomeditor__richtexteditfindbar_searchtext_callback;
        if (searchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            bool callback_ret = searchtext_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::searchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    void setFoundMatch(bool match) {
        if (textcustomeditor__richtexteditfindbar_setfoundmatch_isbase) {
            textcustomeditor__richtexteditfindbar_setfoundmatch_isbase = false;
            TextCustomEditor__RichTextEditFindBar::setFoundMatch(match);
            return;
        }
        auto setfoundmatch_cb = textcustomeditor__richtexteditfindbar_setfoundmatch_callback;
        if (setfoundmatch_cb) {
            bool cbval1 = match;
            setfoundmatch_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::setFoundMatch(match);
    }

    // Virtual method for C ABI access and custom callback
    void messageInfo(bool backward, bool isAutoSearch, bool found) {
        if (textcustomeditor__richtexteditfindbar_messageinfo_isbase) {
            textcustomeditor__richtexteditfindbar_messageinfo_isbase = false;
            TextCustomEditor__RichTextEditFindBar::messageInfo(backward, isAutoSearch, found);
            return;
        }
        auto messageinfo_cb = textcustomeditor__richtexteditfindbar_messageinfo_callback;
        if (messageinfo_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            bool cbval3 = found;
            messageinfo_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__RichTextEditFindBar::messageInfo(backward, isAutoSearch, found);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__richtexteditfindbar_updatemicrofocus_isbase) {
            textcustomeditor__richtexteditfindbar_updatemicrofocus_isbase = false;
            TextCustomEditor__RichTextEditFindBar::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__richtexteditfindbar_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__RichTextEditFindBar::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__richtexteditfindbar_create_isbase) {
            textcustomeditor__richtexteditfindbar_create_isbase = false;
            TextCustomEditor__RichTextEditFindBar::create();
            return;
        }
        auto create_cb = textcustomeditor__richtexteditfindbar_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__RichTextEditFindBar::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__richtexteditfindbar_destroy_isbase) {
            textcustomeditor__richtexteditfindbar_destroy_isbase = false;
            TextCustomEditor__RichTextEditFindBar::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__richtexteditfindbar_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__RichTextEditFindBar::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__richtexteditfindbar_focusnextchild_isbase) {
            textcustomeditor__richtexteditfindbar_focusnextchild_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__richtexteditfindbar_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__richtexteditfindbar_focuspreviouschild_isbase) {
            textcustomeditor__richtexteditfindbar_focuspreviouschild_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__richtexteditfindbar_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__richtexteditfindbar_sender_isbase) {
            textcustomeditor__richtexteditfindbar_sender_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::sender();
        }
        auto sender_cb = textcustomeditor__richtexteditfindbar_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__richtexteditfindbar_sendersignalindex_isbase) {
            textcustomeditor__richtexteditfindbar_sendersignalindex_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__richtexteditfindbar_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__richtexteditfindbar_receivers_isbase) {
            textcustomeditor__richtexteditfindbar_receivers_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__richtexteditfindbar_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__richtexteditfindbar_issignalconnected_isbase) {
            textcustomeditor__richtexteditfindbar_issignalconnected_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__richtexteditfindbar_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditFindBar::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__richtexteditfindbar_getdecodedmetricf_isbase) {
            textcustomeditor__richtexteditfindbar_getdecodedmetricf_isbase = false;
            return TextCustomEditor__RichTextEditFindBar::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__richtexteditfindbar_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__RichTextEditFindBar::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextEditFindBar_ViewIsReadOnly(const TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperViewIsReadOnly(const TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_DocumentIsEmpty(const TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperDocumentIsEmpty(const TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SearchInDocument(TextCustomEditor::RichTextEditFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument(TextCustomEditor::RichTextEditFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__RichTextEditFindBar_SearchInDocument2(TextCustomEditor::RichTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperSearchInDocument2(TextCustomEditor::RichTextEditFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend void TextCustomEditor__RichTextEditFindBar_AutoSearchMoveCursor(TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_SuperAutoSearchMoveCursor(TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_Event(TextCustomEditor::RichTextEditFindBar* self, QEvent* e);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* e);
    friend void TextCustomEditor__RichTextEditFindBar_MousePressEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMousePressEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_MouseReleaseEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMouseReleaseEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_MouseDoubleClickEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_MouseMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMouseMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_WheelEvent(TextCustomEditor::RichTextEditFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperWheelEvent(TextCustomEditor::RichTextEditFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_KeyPressEvent(TextCustomEditor::RichTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperKeyPressEvent(TextCustomEditor::RichTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_KeyReleaseEvent(TextCustomEditor::RichTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperKeyReleaseEvent(TextCustomEditor::RichTextEditFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_FocusInEvent(TextCustomEditor::RichTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperFocusInEvent(TextCustomEditor::RichTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_FocusOutEvent(TextCustomEditor::RichTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperFocusOutEvent(TextCustomEditor::RichTextEditFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_EnterEvent(TextCustomEditor::RichTextEditFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperEnterEvent(TextCustomEditor::RichTextEditFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_LeaveEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperLeaveEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_PaintEvent(TextCustomEditor::RichTextEditFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperPaintEvent(TextCustomEditor::RichTextEditFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_MoveEvent(TextCustomEditor::RichTextEditFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_ResizeEvent(TextCustomEditor::RichTextEditFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperResizeEvent(TextCustomEditor::RichTextEditFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_CloseEvent(TextCustomEditor::RichTextEditFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperCloseEvent(TextCustomEditor::RichTextEditFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_ContextMenuEvent(TextCustomEditor::RichTextEditFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperContextMenuEvent(TextCustomEditor::RichTextEditFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_TabletEvent(TextCustomEditor::RichTextEditFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperTabletEvent(TextCustomEditor::RichTextEditFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_ActionEvent(TextCustomEditor::RichTextEditFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperActionEvent(TextCustomEditor::RichTextEditFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_DragEnterEvent(TextCustomEditor::RichTextEditFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDragEnterEvent(TextCustomEditor::RichTextEditFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_DragMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDragMoveEvent(TextCustomEditor::RichTextEditFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_DragLeaveEvent(TextCustomEditor::RichTextEditFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDragLeaveEvent(TextCustomEditor::RichTextEditFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_DropEvent(TextCustomEditor::RichTextEditFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDropEvent(TextCustomEditor::RichTextEditFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_ShowEvent(TextCustomEditor::RichTextEditFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperShowEvent(TextCustomEditor::RichTextEditFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_HideEvent(TextCustomEditor::RichTextEditFindBar* self, QHideEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperHideEvent(TextCustomEditor::RichTextEditFindBar* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextEditFindBar_NativeEvent(TextCustomEditor::RichTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperNativeEvent(TextCustomEditor::RichTextEditFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextEditFindBar_ChangeEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* param1);
    friend void TextCustomEditor__RichTextEditFindBar_SuperChangeEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* param1);
    friend int TextCustomEditor__RichTextEditFindBar_Metric(const TextCustomEditor::RichTextEditFindBar* self, int param1);
    friend int TextCustomEditor__RichTextEditFindBar_SuperMetric(const TextCustomEditor::RichTextEditFindBar* self, int param1);
    friend void TextCustomEditor__RichTextEditFindBar_InitPainter(const TextCustomEditor::RichTextEditFindBar* self, QPainter* painter);
    friend void TextCustomEditor__RichTextEditFindBar_SuperInitPainter(const TextCustomEditor::RichTextEditFindBar* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextEditFindBar_Redirected(const TextCustomEditor::RichTextEditFindBar* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__RichTextEditFindBar_SuperRedirected(const TextCustomEditor::RichTextEditFindBar* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextEditFindBar_SharedPainter(const TextCustomEditor::RichTextEditFindBar* self);
    friend QPainter* TextCustomEditor__RichTextEditFindBar_SuperSharedPainter(const TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_InputMethodEvent(TextCustomEditor::RichTextEditFindBar* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextEditFindBar_SuperInputMethodEvent(TextCustomEditor::RichTextEditFindBar* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextEditFindBar_FocusNextPrevChild(TextCustomEditor::RichTextEditFindBar* self, bool next);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperFocusNextPrevChild(TextCustomEditor::RichTextEditFindBar* self, bool next);
    friend void TextCustomEditor__RichTextEditFindBar_TimerEvent(TextCustomEditor::RichTextEditFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperTimerEvent(TextCustomEditor::RichTextEditFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_ChildEvent(TextCustomEditor::RichTextEditFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperChildEvent(TextCustomEditor::RichTextEditFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_CustomEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_SuperCustomEvent(TextCustomEditor::RichTextEditFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditFindBar_ConnectNotify(TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditFindBar_SuperConnectNotify(TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditFindBar_DisconnectNotify(TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDisconnectNotify(TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditFindBar_ClearSelections(TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_SuperClearSelections(TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SearchText(TextCustomEditor::RichTextEditFindBar* self, bool backward, bool isAutoSearch);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperSearchText(TextCustomEditor::RichTextEditFindBar* self, bool backward, bool isAutoSearch);
    friend void TextCustomEditor__RichTextEditFindBar_SetFoundMatch(TextCustomEditor::RichTextEditFindBar* self, bool match);
    friend void TextCustomEditor__RichTextEditFindBar_SuperSetFoundMatch(TextCustomEditor::RichTextEditFindBar* self, bool match);
    friend void TextCustomEditor__RichTextEditFindBar_MessageInfo(TextCustomEditor::RichTextEditFindBar* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__RichTextEditFindBar_SuperMessageInfo(TextCustomEditor::RichTextEditFindBar* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__RichTextEditFindBar_UpdateMicroFocus(TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_SuperUpdateMicroFocus(TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_Create(TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_SuperCreate(TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_Destroy(TextCustomEditor::RichTextEditFindBar* self);
    friend void TextCustomEditor__RichTextEditFindBar_SuperDestroy(TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_FocusNextChild(TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperFocusNextChild(TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_FocusPreviousChild(TextCustomEditor::RichTextEditFindBar* self);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperFocusPreviousChild(TextCustomEditor::RichTextEditFindBar* self);
    friend QObject* TextCustomEditor__RichTextEditFindBar_Sender(const TextCustomEditor::RichTextEditFindBar* self);
    friend QObject* TextCustomEditor__RichTextEditFindBar_SuperSender(const TextCustomEditor::RichTextEditFindBar* self);
    friend int TextCustomEditor__RichTextEditFindBar_SenderSignalIndex(const TextCustomEditor::RichTextEditFindBar* self);
    friend int TextCustomEditor__RichTextEditFindBar_SuperSenderSignalIndex(const TextCustomEditor::RichTextEditFindBar* self);
    friend int TextCustomEditor__RichTextEditFindBar_Receivers(const TextCustomEditor::RichTextEditFindBar* self, const char* signal);
    friend int TextCustomEditor__RichTextEditFindBar_SuperReceivers(const TextCustomEditor::RichTextEditFindBar* self, const char* signal);
    friend bool TextCustomEditor__RichTextEditFindBar_IsSignalConnected(const TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__RichTextEditFindBar_SuperIsSignalConnected(const TextCustomEditor::RichTextEditFindBar* self, const QMetaMethod* signal);
    friend double TextCustomEditor__RichTextEditFindBar_GetDecodedMetricF(const TextCustomEditor::RichTextEditFindBar* self, int metricA, int metricB);
    friend double TextCustomEditor__RichTextEditFindBar_SuperGetDecodedMetricF(const TextCustomEditor::RichTextEditFindBar* self, int metricA, int metricB);
};

#endif
