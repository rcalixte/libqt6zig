#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTBROWSERFINDBAR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTBROWSERFINDBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextBrowserFindBar so that we can call protected methods
class VirtualTextCustomEditorRichTextBrowserFindBar final : public TextCustomEditor::RichTextBrowserFindBar {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorRichTextBrowserFindBar = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__RichTextBrowserFindBar_Metacast_Callback = void* (*)(TextCustomEditor__RichTextBrowserFindBar*, const char*);
    using TextCustomEditor__RichTextBrowserFindBar_Metacall_Callback = int (*)(TextCustomEditor__RichTextBrowserFindBar*, int, int, void**);
    using TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, const char*, int);
    using TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, QRegularExpression*, int);
    using TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, bool, bool);
    using TextCustomEditor__RichTextBrowserFindBar_Event_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DevType_Callback = int (*)();
    using TextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, bool);
    using TextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextBrowserFindBar*, int);
    using TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QWheelEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEnterEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QPaintEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMoveEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QResizeEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QCloseEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QContextMenuEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QTabletEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QActionEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDragEnterEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDragMoveEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QDropEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QShowEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QHideEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_Metric_Callback = int (*)(const TextCustomEditor__RichTextBrowserFindBar*, int);
    using TextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextBrowserFindBar*, QPainter*);
    using TextCustomEditor__RichTextBrowserFindBar_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextBrowserFindBar*, QPoint*);
    using TextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QInputMethodEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextBrowserFindBar*, int);
    using TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, bool);
    using TextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, QObject*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QTimerEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QChildEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QEvent*);
    using TextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserFindBar_ClearSelections_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserFindBar_SearchText_Callback = bool (*)(TextCustomEditor__RichTextBrowserFindBar*, bool, bool);
    using TextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, bool);
    using TextCustomEditor__RichTextBrowserFindBar_MessageInfo_Callback = void (*)(TextCustomEditor__RichTextBrowserFindBar*, bool, bool, bool);
    using TextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserFindBar_Create_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserFindBar_Destroy_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserFindBar_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserFindBar_Sender_Callback = QObject* (*)();
    using TextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__RichTextBrowserFindBar_Receivers_Callback = int (*)(const TextCustomEditor__RichTextBrowserFindBar*, const char*);
    using TextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__RichTextBrowserFindBar*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__RichTextBrowserFindBar*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback textcustomeditor__richtextbrowserfindbar_metaobject_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Metacast_Callback textcustomeditor__richtextbrowserfindbar_metacast_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Metacall_Callback textcustomeditor__richtextbrowserfindbar_metacall_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback textcustomeditor__richtextbrowserfindbar_viewisreadonly_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback textcustomeditor__richtextbrowserfindbar_documentisempty_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback textcustomeditor__richtextbrowserfindbar_searchindocument_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback textcustomeditor__richtextbrowserfindbar_searchindocument2_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback textcustomeditor__richtextbrowserfindbar_slotsearchtext_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Event_Callback textcustomeditor__richtextbrowserfindbar_event_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DevType_Callback textcustomeditor__richtextbrowserfindbar_devtype_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback textcustomeditor__richtextbrowserfindbar_setvisible_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback textcustomeditor__richtextbrowserfindbar_sizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback textcustomeditor__richtextbrowserfindbar_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback textcustomeditor__richtextbrowserfindbar_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback textcustomeditor__richtextbrowserfindbar_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback textcustomeditor__richtextbrowserfindbar_paintengine_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback textcustomeditor__richtextbrowserfindbar_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback textcustomeditor__richtextbrowserfindbar_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback textcustomeditor__richtextbrowserfindbar_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback textcustomeditor__richtextbrowserfindbar_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback textcustomeditor__richtextbrowserfindbar_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback textcustomeditor__richtextbrowserfindbar_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback textcustomeditor__richtextbrowserfindbar_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback textcustomeditor__richtextbrowserfindbar_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback textcustomeditor__richtextbrowserfindbar_enterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback textcustomeditor__richtextbrowserfindbar_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback textcustomeditor__richtextbrowserfindbar_paintevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback textcustomeditor__richtextbrowserfindbar_moveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback textcustomeditor__richtextbrowserfindbar_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback textcustomeditor__richtextbrowserfindbar_closeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback textcustomeditor__richtextbrowserfindbar_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback textcustomeditor__richtextbrowserfindbar_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback textcustomeditor__richtextbrowserfindbar_actionevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback textcustomeditor__richtextbrowserfindbar_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback textcustomeditor__richtextbrowserfindbar_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback textcustomeditor__richtextbrowserfindbar_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback textcustomeditor__richtextbrowserfindbar_dropevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback textcustomeditor__richtextbrowserfindbar_showevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback textcustomeditor__richtextbrowserfindbar_hideevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback textcustomeditor__richtextbrowserfindbar_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback textcustomeditor__richtextbrowserfindbar_changeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Metric_Callback textcustomeditor__richtextbrowserfindbar_metric_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback textcustomeditor__richtextbrowserfindbar_initpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Redirected_Callback textcustomeditor__richtextbrowserfindbar_redirected_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback textcustomeditor__richtextbrowserfindbar_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback textcustomeditor__richtextbrowserfindbar_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback textcustomeditor__richtextbrowserfindbar_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback textcustomeditor__richtextbrowserfindbar_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback textcustomeditor__richtextbrowserfindbar_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback textcustomeditor__richtextbrowserfindbar_timerevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback textcustomeditor__richtextbrowserfindbar_childevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback textcustomeditor__richtextbrowserfindbar_customevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback textcustomeditor__richtextbrowserfindbar_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback textcustomeditor__richtextbrowserfindbar_disconnectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_ClearSelections_Callback textcustomeditor__richtextbrowserfindbar_clearselections_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SearchText_Callback textcustomeditor__richtextbrowserfindbar_searchtext_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_Callback textcustomeditor__richtextbrowserfindbar_setfoundmatch_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_MessageInfo_Callback textcustomeditor__richtextbrowserfindbar_messageinfo_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_Callback textcustomeditor__richtextbrowserfindbar_updatemicrofocus_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Create_Callback textcustomeditor__richtextbrowserfindbar_create_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Destroy_Callback textcustomeditor__richtextbrowserfindbar_destroy_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusNextChild_Callback textcustomeditor__richtextbrowserfindbar_focusnextchild_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_Callback textcustomeditor__richtextbrowserfindbar_focuspreviouschild_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Sender_Callback textcustomeditor__richtextbrowserfindbar_sender_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_Callback textcustomeditor__richtextbrowserfindbar_sendersignalindex_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_Receivers_Callback textcustomeditor__richtextbrowserfindbar_receivers_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_Callback textcustomeditor__richtextbrowserfindbar_issignalconnected_callback = nullptr;
    TextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_Callback textcustomeditor__richtextbrowserfindbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__richtextbrowserfindbar_metaobject_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_metacast_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_metacall_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_viewisreadonly_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_documentisempty_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_searchindocument_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_searchindocument2_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_slotsearchtext_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_event_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_devtype_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_setvisible_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_sizehint_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_heightforwidth_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_paintengine_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_mousepressevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_wheelevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_keypressevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_focusinevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_focusoutevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_enterevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_leaveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_paintevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_moveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_resizeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_closeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_tabletevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_actionevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_dragenterevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_dropevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_showevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_hideevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_nativeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_changeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_metric_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_initpainter_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_redirected_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_sharedpainter_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_eventfilter_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_timerevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_childevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_customevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_connectnotify_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_clearselections_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_searchtext_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_setfoundmatch_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_messageinfo_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_create_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_destroy_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_focusnextchild_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_sender_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_receivers_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_issignalconnected_isbase = false;
    mutable bool textcustomeditor__richtextbrowserfindbar_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorRichTextBrowserFindBar(QTextBrowser* view) : TextCustomEditor::RichTextBrowserFindBar(view) {};
    VirtualTextCustomEditorRichTextBrowserFindBar(QTextBrowser* view, QWidget* parent) : TextCustomEditor::RichTextBrowserFindBar(view, parent) {};

    // Callback setters
    inline void setTextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback(TextCustomEditor__RichTextBrowserFindBar_MetaObject_Callback cb) { textcustomeditor__richtextbrowserfindbar_metaobject_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Metacast_Callback(TextCustomEditor__RichTextBrowserFindBar_Metacast_Callback cb) { textcustomeditor__richtextbrowserfindbar_metacast_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Metacall_Callback(TextCustomEditor__RichTextBrowserFindBar_Metacall_Callback cb) { textcustomeditor__richtextbrowserfindbar_metacall_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback(TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_Callback cb) { textcustomeditor__richtextbrowserfindbar_viewisreadonly_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback(TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_Callback cb) { textcustomeditor__richtextbrowserfindbar_documentisempty_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback(TextCustomEditor__RichTextBrowserFindBar_SearchInDocument_Callback cb) { textcustomeditor__richtextbrowserfindbar_searchindocument_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback(TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_Callback cb) { textcustomeditor__richtextbrowserfindbar_searchindocument2_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback(TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_Callback cb) { textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback(TextCustomEditor__RichTextBrowserFindBar_SlotSearchText_Callback cb) { textcustomeditor__richtextbrowserfindbar_slotsearchtext_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Event_Callback(TextCustomEditor__RichTextBrowserFindBar_Event_Callback cb) { textcustomeditor__richtextbrowserfindbar_event_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DevType_Callback(TextCustomEditor__RichTextBrowserFindBar_DevType_Callback cb) { textcustomeditor__richtextbrowserfindbar_devtype_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback(TextCustomEditor__RichTextBrowserFindBar_SetVisible_Callback cb) { textcustomeditor__richtextbrowserfindbar_setvisible_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback(TextCustomEditor__RichTextBrowserFindBar_SizeHint_Callback cb) { textcustomeditor__richtextbrowserfindbar_sizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback(TextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_Callback cb) { textcustomeditor__richtextbrowserfindbar_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback(TextCustomEditor__RichTextBrowserFindBar_HeightForWidth_Callback cb) { textcustomeditor__richtextbrowserfindbar_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback(TextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_Callback cb) { textcustomeditor__richtextbrowserfindbar_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback(TextCustomEditor__RichTextBrowserFindBar_PaintEngine_Callback cb) { textcustomeditor__richtextbrowserfindbar_paintengine_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_MousePressEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_WheelEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_wheelevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_keypressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_FocusInEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_focusinevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_EnterEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_enterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_LeaveEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_leaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_PaintEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_paintevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_MoveEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_moveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_ResizeEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_resizeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_CloseEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_closeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_TabletEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_tabletevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_ActionEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_actionevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_DropEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_dropevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_ShowEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_showevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_HideEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_hideevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_NativeEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_nativeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_ChangeEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_changeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Metric_Callback(TextCustomEditor__RichTextBrowserFindBar_Metric_Callback cb) { textcustomeditor__richtextbrowserfindbar_metric_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback(TextCustomEditor__RichTextBrowserFindBar_InitPainter_Callback cb) { textcustomeditor__richtextbrowserfindbar_initpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Redirected_Callback(TextCustomEditor__RichTextBrowserFindBar_Redirected_Callback cb) { textcustomeditor__richtextbrowserfindbar_redirected_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback(TextCustomEditor__RichTextBrowserFindBar_SharedPainter_Callback cb) { textcustomeditor__richtextbrowserfindbar_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback(TextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_Callback cb) { textcustomeditor__richtextbrowserfindbar_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback(TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_Callback cb) { textcustomeditor__richtextbrowserfindbar_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback(TextCustomEditor__RichTextBrowserFindBar_EventFilter_Callback cb) { textcustomeditor__richtextbrowserfindbar_eventfilter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_TimerEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_timerevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_ChildEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_childevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback(TextCustomEditor__RichTextBrowserFindBar_CustomEvent_Callback cb) { textcustomeditor__richtextbrowserfindbar_customevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback(TextCustomEditor__RichTextBrowserFindBar_ConnectNotify_Callback cb) { textcustomeditor__richtextbrowserfindbar_connectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback(TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_Callback cb) { textcustomeditor__richtextbrowserfindbar_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ClearSelections_Callback(TextCustomEditor__RichTextBrowserFindBar_ClearSelections_Callback cb) { textcustomeditor__richtextbrowserfindbar_clearselections_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SearchText_Callback(TextCustomEditor__RichTextBrowserFindBar_SearchText_Callback cb) { textcustomeditor__richtextbrowserfindbar_searchtext_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_Callback(TextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_Callback cb) { textcustomeditor__richtextbrowserfindbar_setfoundmatch_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MessageInfo_Callback(TextCustomEditor__RichTextBrowserFindBar_MessageInfo_Callback cb) { textcustomeditor__richtextbrowserfindbar_messageinfo_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_Callback(TextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_Callback cb) { textcustomeditor__richtextbrowserfindbar_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Create_Callback(TextCustomEditor__RichTextBrowserFindBar_Create_Callback cb) { textcustomeditor__richtextbrowserfindbar_create_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Destroy_Callback(TextCustomEditor__RichTextBrowserFindBar_Destroy_Callback cb) { textcustomeditor__richtextbrowserfindbar_destroy_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusNextChild_Callback(TextCustomEditor__RichTextBrowserFindBar_FocusNextChild_Callback cb) { textcustomeditor__richtextbrowserfindbar_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_Callback(TextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_Callback cb) { textcustomeditor__richtextbrowserfindbar_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Sender_Callback(TextCustomEditor__RichTextBrowserFindBar_Sender_Callback cb) { textcustomeditor__richtextbrowserfindbar_sender_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_Callback(TextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_Callback cb) { textcustomeditor__richtextbrowserfindbar_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Receivers_Callback(TextCustomEditor__RichTextBrowserFindBar_Receivers_Callback cb) { textcustomeditor__richtextbrowserfindbar_receivers_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_Callback(TextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_Callback cb) { textcustomeditor__richtextbrowserfindbar_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_Callback(TextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_Callback cb) { textcustomeditor__richtextbrowserfindbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__RichTextBrowserFindBar_MetaObject_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_metaobject_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Metacast_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_metacast_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Metacall_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_metacall_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_viewisreadonly_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_documentisempty_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_searchindocument_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SearchInDocument2_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_searchindocument2_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SlotSearchText_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_slotsearchtext_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Event_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_event_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DevType_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_devtype_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SetVisible_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_setvisible_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SizeHint_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_sizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_HeightForWidth_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_PaintEngine_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_paintengine_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MousePressEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_WheelEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_wheelevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_KeyPressEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_keypressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusInEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_focusinevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusOutEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_EnterEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_enterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_LeaveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_leaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_PaintEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_paintevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_moveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ResizeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_resizeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_CloseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_closeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_TabletEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_tabletevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ActionEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_actionevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DragEnterEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DragMoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DropEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_dropevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ShowEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_showevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_HideEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_hideevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_NativeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_nativeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ChangeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_changeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Metric_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_metric_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_InitPainter_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_initpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Redirected_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_redirected_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SharedPainter_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_InputMethodEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_InputMethodQuery_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_EventFilter_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_eventfilter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_TimerEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_timerevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ChildEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_childevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_CustomEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_customevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ConnectNotify_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_connectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_DisconnectNotify_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_ClearSelections_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_clearselections_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SearchText_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_searchtext_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SetFoundMatch_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_setfoundmatch_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_MessageInfo_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_messageinfo_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Create_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_create_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Destroy_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_destroy_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusNextChild_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Sender_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_sender_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_Receivers_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_receivers_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_IsSignalConnected_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__richtextbrowserfindbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtextbrowserfindbar_metaobject_isbase) {
            textcustomeditor__richtextbrowserfindbar_metaobject_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::metaObject();
        }
        auto metaobject_cb = textcustomeditor__richtextbrowserfindbar_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtextbrowserfindbar_metacast_isbase) {
            textcustomeditor__richtextbrowserfindbar_metacast_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__richtextbrowserfindbar_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtextbrowserfindbar_metacall_isbase) {
            textcustomeditor__richtextbrowserfindbar_metacall_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__richtextbrowserfindbar_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        if (textcustomeditor__richtextbrowserfindbar_viewisreadonly_isbase) {
            textcustomeditor__richtextbrowserfindbar_viewisreadonly_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::viewIsReadOnly();
        }
        auto viewisreadonly_cb = textcustomeditor__richtextbrowserfindbar_viewisreadonly_callback;
        if (viewisreadonly_cb) {
            bool callback_ret = viewisreadonly_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::viewIsReadOnly();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        if (textcustomeditor__richtextbrowserfindbar_documentisempty_isbase) {
            textcustomeditor__richtextbrowserfindbar_documentisempty_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::documentIsEmpty();
        }
        auto documentisempty_cb = textcustomeditor__richtextbrowserfindbar_documentisempty_callback;
        if (documentisempty_cb) {
            bool callback_ret = documentisempty_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::documentIsEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtextbrowserfindbar_searchindocument_isbase) {
            textcustomeditor__richtextbrowserfindbar_searchindocument_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::searchInDocument(text, searchOptions);
        }
        auto searchindocument_cb = textcustomeditor__richtextbrowserfindbar_searchindocument_callback;
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
        return TextCustomEditor__RichTextBrowserFindBar::searchInDocument(text, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        if (textcustomeditor__richtextbrowserfindbar_searchindocument2_isbase) {
            textcustomeditor__richtextbrowserfindbar_searchindocument2_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::searchInDocument(regExp, searchOptions);
        }
        auto searchindocument2_cb = textcustomeditor__richtextbrowserfindbar_searchindocument2_callback;
        if (searchindocument2_cb) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);
            bool callback_ret = searchindocument2_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::searchInDocument(regExp, searchOptions);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        if (textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_isbase) {
            textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::autoSearchMoveCursor();
            return;
        }
        auto autosearchmovecursor_cb = textcustomeditor__richtextbrowserfindbar_autosearchmovecursor_callback;
        if (autosearchmovecursor_cb) {
            autosearchmovecursor_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::autoSearchMoveCursor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        if (textcustomeditor__richtextbrowserfindbar_slotsearchtext_isbase) {
            textcustomeditor__richtextbrowserfindbar_slotsearchtext_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::slotSearchText(backward, isAutoSearch);
            return;
        }
        auto slotsearchtext_cb = textcustomeditor__richtextbrowserfindbar_slotsearchtext_callback;
        if (slotsearchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            slotsearchtext_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::slotSearchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__richtextbrowserfindbar_event_isbase) {
            textcustomeditor__richtextbrowserfindbar_event_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::event(e);
        }
        auto event_cb = textcustomeditor__richtextbrowserfindbar_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtextbrowserfindbar_devtype_isbase) {
            textcustomeditor__richtextbrowserfindbar_devtype_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::devType();
        }
        auto devtype_cb = textcustomeditor__richtextbrowserfindbar_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtextbrowserfindbar_setvisible_isbase) {
            textcustomeditor__richtextbrowserfindbar_setvisible_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__richtextbrowserfindbar_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtextbrowserfindbar_sizehint_isbase) {
            textcustomeditor__richtextbrowserfindbar_sizehint_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__richtextbrowserfindbar_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserFindBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtextbrowserfindbar_minimumsizehint_isbase) {
            textcustomeditor__richtextbrowserfindbar_minimumsizehint_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__richtextbrowserfindbar_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserFindBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtextbrowserfindbar_heightforwidth_isbase) {
            textcustomeditor__richtextbrowserfindbar_heightforwidth_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__richtextbrowserfindbar_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtextbrowserfindbar_hasheightforwidth_isbase) {
            textcustomeditor__richtextbrowserfindbar_hasheightforwidth_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__richtextbrowserfindbar_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtextbrowserfindbar_paintengine_isbase) {
            textcustomeditor__richtextbrowserfindbar_paintengine_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__richtextbrowserfindbar_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousepressevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_mousepressevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__richtextbrowserfindbar_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousereleaseevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_mousereleaseevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__richtextbrowserfindbar_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__richtextbrowserfindbar_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_mousemoveevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_mousemoveevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__richtextbrowserfindbar_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_wheelevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_wheelevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__richtextbrowserfindbar_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_keypressevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_keypressevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__richtextbrowserfindbar_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_keyreleaseevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_keyreleaseevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__richtextbrowserfindbar_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_focusinevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_focusinevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__richtextbrowserfindbar_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;
            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_focusoutevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_focusoutevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__richtextbrowserfindbar_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;
            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_enterevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_enterevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__richtextbrowserfindbar_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_leaveevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_leaveevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__richtextbrowserfindbar_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_paintevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_paintevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__richtextbrowserfindbar_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;
            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_moveevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_moveevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__richtextbrowserfindbar_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_resizeevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_resizeevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__richtextbrowserfindbar_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;
            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_closeevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_closeevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__richtextbrowserfindbar_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_contextmenuevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_contextmenuevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__richtextbrowserfindbar_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_tabletevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_tabletevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__richtextbrowserfindbar_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_actionevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_actionevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__richtextbrowserfindbar_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dragenterevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_dragenterevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__richtextbrowserfindbar_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;
            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dragmoveevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_dragmoveevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__richtextbrowserfindbar_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dragleaveevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_dragleaveevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__richtextbrowserfindbar_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_dropevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_dropevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__richtextbrowserfindbar_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;
            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_showevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_showevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::showEvent(event);
            return;
        }
        auto showevent_cb = textcustomeditor__richtextbrowserfindbar_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;
            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_hideevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_hideevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__richtextbrowserfindbar_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;
            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtextbrowserfindbar_nativeevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_nativeevent_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__richtextbrowserfindbar_nativeevent_callback;
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
        return TextCustomEditor__RichTextBrowserFindBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtextbrowserfindbar_changeevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_changeevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__richtextbrowserfindbar_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;
            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtextbrowserfindbar_metric_isbase) {
            textcustomeditor__richtextbrowserfindbar_metric_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::metric(param1);
        }
        auto metric_cb = textcustomeditor__richtextbrowserfindbar_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtextbrowserfindbar_initpainter_isbase) {
            textcustomeditor__richtextbrowserfindbar_initpainter_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__richtextbrowserfindbar_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtextbrowserfindbar_redirected_isbase) {
            textcustomeditor__richtextbrowserfindbar_redirected_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__richtextbrowserfindbar_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtextbrowserfindbar_sharedpainter_isbase) {
            textcustomeditor__richtextbrowserfindbar_sharedpainter_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__richtextbrowserfindbar_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtextbrowserfindbar_inputmethodevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_inputmethodevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__richtextbrowserfindbar_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtextbrowserfindbar_inputmethodquery_isbase) {
            textcustomeditor__richtextbrowserfindbar_inputmethodquery_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__richtextbrowserfindbar_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserFindBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtextbrowserfindbar_focusnextprevchild_isbase) {
            textcustomeditor__richtextbrowserfindbar_focusnextprevchild_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__richtextbrowserfindbar_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_eventfilter_isbase) {
            textcustomeditor__richtextbrowserfindbar_eventfilter_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__richtextbrowserfindbar_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_timerevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_timerevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__richtextbrowserfindbar_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_childevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_childevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__richtextbrowserfindbar_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserfindbar_customevent_isbase) {
            textcustomeditor__richtextbrowserfindbar_customevent_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__richtextbrowserfindbar_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserfindbar_connectnotify_isbase) {
            textcustomeditor__richtextbrowserfindbar_connectnotify_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__richtextbrowserfindbar_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserfindbar_disconnectnotify_isbase) {
            textcustomeditor__richtextbrowserfindbar_disconnectnotify_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__richtextbrowserfindbar_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void clearSelections() {
        if (textcustomeditor__richtextbrowserfindbar_clearselections_isbase) {
            textcustomeditor__richtextbrowserfindbar_clearselections_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::clearSelections();
            return;
        }
        auto clearselections_cb = textcustomeditor__richtextbrowserfindbar_clearselections_callback;
        if (clearselections_cb) {
            clearselections_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::clearSelections();
    }

    // Virtual method for C ABI access and custom callback
    bool searchText(bool backward, bool isAutoSearch) {
        if (textcustomeditor__richtextbrowserfindbar_searchtext_isbase) {
            textcustomeditor__richtextbrowserfindbar_searchtext_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::searchText(backward, isAutoSearch);
        }
        auto searchtext_cb = textcustomeditor__richtextbrowserfindbar_searchtext_callback;
        if (searchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            bool callback_ret = searchtext_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::searchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    void setFoundMatch(bool match) {
        if (textcustomeditor__richtextbrowserfindbar_setfoundmatch_isbase) {
            textcustomeditor__richtextbrowserfindbar_setfoundmatch_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::setFoundMatch(match);
            return;
        }
        auto setfoundmatch_cb = textcustomeditor__richtextbrowserfindbar_setfoundmatch_callback;
        if (setfoundmatch_cb) {
            bool cbval1 = match;
            setfoundmatch_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::setFoundMatch(match);
    }

    // Virtual method for C ABI access and custom callback
    void messageInfo(bool backward, bool isAutoSearch, bool found) {
        if (textcustomeditor__richtextbrowserfindbar_messageinfo_isbase) {
            textcustomeditor__richtextbrowserfindbar_messageinfo_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::messageInfo(backward, isAutoSearch, found);
            return;
        }
        auto messageinfo_cb = textcustomeditor__richtextbrowserfindbar_messageinfo_callback;
        if (messageinfo_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            bool cbval3 = found;
            messageinfo_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::messageInfo(backward, isAutoSearch, found);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__richtextbrowserfindbar_updatemicrofocus_isbase) {
            textcustomeditor__richtextbrowserfindbar_updatemicrofocus_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__richtextbrowserfindbar_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__richtextbrowserfindbar_create_isbase) {
            textcustomeditor__richtextbrowserfindbar_create_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::create();
            return;
        }
        auto create_cb = textcustomeditor__richtextbrowserfindbar_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__richtextbrowserfindbar_destroy_isbase) {
            textcustomeditor__richtextbrowserfindbar_destroy_isbase = false;
            TextCustomEditor__RichTextBrowserFindBar::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__richtextbrowserfindbar_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserFindBar::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__richtextbrowserfindbar_focusnextchild_isbase) {
            textcustomeditor__richtextbrowserfindbar_focusnextchild_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__richtextbrowserfindbar_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__richtextbrowserfindbar_focuspreviouschild_isbase) {
            textcustomeditor__richtextbrowserfindbar_focuspreviouschild_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__richtextbrowserfindbar_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__richtextbrowserfindbar_sender_isbase) {
            textcustomeditor__richtextbrowserfindbar_sender_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::sender();
        }
        auto sender_cb = textcustomeditor__richtextbrowserfindbar_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__richtextbrowserfindbar_sendersignalindex_isbase) {
            textcustomeditor__richtextbrowserfindbar_sendersignalindex_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__richtextbrowserfindbar_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__richtextbrowserfindbar_receivers_isbase) {
            textcustomeditor__richtextbrowserfindbar_receivers_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__richtextbrowserfindbar_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__richtextbrowserfindbar_issignalconnected_isbase) {
            textcustomeditor__richtextbrowserfindbar_issignalconnected_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__richtextbrowserfindbar_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserFindBar::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__richtextbrowserfindbar_getdecodedmetricf_isbase) {
            textcustomeditor__richtextbrowserfindbar_getdecodedmetricf_isbase = false;
            return TextCustomEditor__RichTextBrowserFindBar::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__richtextbrowserfindbar_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserFindBar::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextBrowserFindBar_ViewIsReadOnly(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperViewIsReadOnly(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_DocumentIsEmpty(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperDocumentIsEmpty(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SearchInDocument(TextCustomEditor::RichTextBrowserFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument(TextCustomEditor::RichTextBrowserFindBar* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SearchInDocument2(TextCustomEditor::RichTextBrowserFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchInDocument2(TextCustomEditor::RichTextBrowserFindBar* self, const QRegularExpression* regExp, int searchOptions);
    friend void TextCustomEditor__RichTextBrowserFindBar_AutoSearchMoveCursor(TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperAutoSearchMoveCursor(TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_Event(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* e);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* e);
    friend void TextCustomEditor__RichTextBrowserFindBar_MousePressEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMousePressEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_MouseReleaseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMouseReleaseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_MouseDoubleClickEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_MouseMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMouseMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_WheelEvent(TextCustomEditor::RichTextBrowserFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperWheelEvent(TextCustomEditor::RichTextBrowserFindBar* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_KeyPressEvent(TextCustomEditor::RichTextBrowserFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperKeyPressEvent(TextCustomEditor::RichTextBrowserFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_KeyReleaseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperKeyReleaseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_FocusInEvent(TextCustomEditor::RichTextBrowserFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperFocusInEvent(TextCustomEditor::RichTextBrowserFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_FocusOutEvent(TextCustomEditor::RichTextBrowserFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperFocusOutEvent(TextCustomEditor::RichTextBrowserFindBar* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_EnterEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperEnterEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_LeaveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperLeaveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_PaintEvent(TextCustomEditor::RichTextBrowserFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperPaintEvent(TextCustomEditor::RichTextBrowserFindBar* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_MoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_ResizeEvent(TextCustomEditor::RichTextBrowserFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperResizeEvent(TextCustomEditor::RichTextBrowserFindBar* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_CloseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperCloseEvent(TextCustomEditor::RichTextBrowserFindBar* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_ContextMenuEvent(TextCustomEditor::RichTextBrowserFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperContextMenuEvent(TextCustomEditor::RichTextBrowserFindBar* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_TabletEvent(TextCustomEditor::RichTextBrowserFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperTabletEvent(TextCustomEditor::RichTextBrowserFindBar* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_ActionEvent(TextCustomEditor::RichTextBrowserFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperActionEvent(TextCustomEditor::RichTextBrowserFindBar* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_DragEnterEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDragEnterEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_DragMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDragMoveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_DragLeaveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDragLeaveEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_DropEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDropEvent(TextCustomEditor::RichTextBrowserFindBar* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_ShowEvent(TextCustomEditor::RichTextBrowserFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperShowEvent(TextCustomEditor::RichTextBrowserFindBar* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_HideEvent(TextCustomEditor::RichTextBrowserFindBar* self, QHideEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperHideEvent(TextCustomEditor::RichTextBrowserFindBar* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextBrowserFindBar_NativeEvent(TextCustomEditor::RichTextBrowserFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperNativeEvent(TextCustomEditor::RichTextBrowserFindBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextBrowserFindBar_ChangeEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* param1);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperChangeEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* param1);
    friend int TextCustomEditor__RichTextBrowserFindBar_Metric(const TextCustomEditor::RichTextBrowserFindBar* self, int param1);
    friend int TextCustomEditor__RichTextBrowserFindBar_SuperMetric(const TextCustomEditor::RichTextBrowserFindBar* self, int param1);
    friend void TextCustomEditor__RichTextBrowserFindBar_InitPainter(const TextCustomEditor::RichTextBrowserFindBar* self, QPainter* painter);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperInitPainter(const TextCustomEditor::RichTextBrowserFindBar* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextBrowserFindBar_Redirected(const TextCustomEditor::RichTextBrowserFindBar* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__RichTextBrowserFindBar_SuperRedirected(const TextCustomEditor::RichTextBrowserFindBar* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextBrowserFindBar_SharedPainter(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend QPainter* TextCustomEditor__RichTextBrowserFindBar_SuperSharedPainter(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_InputMethodEvent(TextCustomEditor::RichTextBrowserFindBar* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperInputMethodEvent(TextCustomEditor::RichTextBrowserFindBar* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextBrowserFindBar_FocusNextPrevChild(TextCustomEditor::RichTextBrowserFindBar* self, bool next);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusNextPrevChild(TextCustomEditor::RichTextBrowserFindBar* self, bool next);
    friend void TextCustomEditor__RichTextBrowserFindBar_TimerEvent(TextCustomEditor::RichTextBrowserFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperTimerEvent(TextCustomEditor::RichTextBrowserFindBar* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_ChildEvent(TextCustomEditor::RichTextBrowserFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperChildEvent(TextCustomEditor::RichTextBrowserFindBar* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_CustomEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperCustomEvent(TextCustomEditor::RichTextBrowserFindBar* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserFindBar_ConnectNotify(TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperConnectNotify(TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserFindBar_DisconnectNotify(TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDisconnectNotify(TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserFindBar_ClearSelections(TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperClearSelections(TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SearchText(TextCustomEditor::RichTextBrowserFindBar* self, bool backward, bool isAutoSearch);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperSearchText(TextCustomEditor::RichTextBrowserFindBar* self, bool backward, bool isAutoSearch);
    friend void TextCustomEditor__RichTextBrowserFindBar_SetFoundMatch(TextCustomEditor::RichTextBrowserFindBar* self, bool match);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperSetFoundMatch(TextCustomEditor::RichTextBrowserFindBar* self, bool match);
    friend void TextCustomEditor__RichTextBrowserFindBar_MessageInfo(TextCustomEditor::RichTextBrowserFindBar* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperMessageInfo(TextCustomEditor::RichTextBrowserFindBar* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__RichTextBrowserFindBar_UpdateMicroFocus(TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperUpdateMicroFocus(TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_Create(TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperCreate(TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_Destroy(TextCustomEditor::RichTextBrowserFindBar* self);
    friend void TextCustomEditor__RichTextBrowserFindBar_SuperDestroy(TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_FocusNextChild(TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusNextChild(TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_FocusPreviousChild(TextCustomEditor::RichTextBrowserFindBar* self);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperFocusPreviousChild(TextCustomEditor::RichTextBrowserFindBar* self);
    friend QObject* TextCustomEditor__RichTextBrowserFindBar_Sender(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend QObject* TextCustomEditor__RichTextBrowserFindBar_SuperSender(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend int TextCustomEditor__RichTextBrowserFindBar_SenderSignalIndex(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend int TextCustomEditor__RichTextBrowserFindBar_SuperSenderSignalIndex(const TextCustomEditor::RichTextBrowserFindBar* self);
    friend int TextCustomEditor__RichTextBrowserFindBar_Receivers(const TextCustomEditor::RichTextBrowserFindBar* self, const char* signal);
    friend int TextCustomEditor__RichTextBrowserFindBar_SuperReceivers(const TextCustomEditor::RichTextBrowserFindBar* self, const char* signal);
    friend bool TextCustomEditor__RichTextBrowserFindBar_IsSignalConnected(const TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__RichTextBrowserFindBar_SuperIsSignalConnected(const TextCustomEditor::RichTextBrowserFindBar* self, const QMetaMethod* signal);
    friend double TextCustomEditor__RichTextBrowserFindBar_GetDecodedMetricF(const TextCustomEditor::RichTextBrowserFindBar* self, int metricA, int metricB);
    friend double TextCustomEditor__RichTextBrowserFindBar_SuperGetDecodedMetricF(const TextCustomEditor::RichTextBrowserFindBar* self, int metricA, int metricB);
};

#endif
