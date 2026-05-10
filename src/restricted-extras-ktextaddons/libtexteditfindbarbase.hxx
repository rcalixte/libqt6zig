#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTEDITFINDBARBASE_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTEDITFINDBARBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::TextEditFindBarBase so that we can call protected methods
class VirtualTextCustomEditorTextEditFindBarBase : public TextCustomEditor::TextEditFindBarBase {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorTextEditFindBarBase = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__TextEditFindBarBase_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__TextEditFindBarBase_Metacast_Callback = void* (*)(TextCustomEditor__TextEditFindBarBase*, const char*);
    using TextCustomEditor__TextEditFindBarBase_Metacall_Callback = int (*)(TextCustomEditor__TextEditFindBarBase*, int, int, void**);
    using TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback = bool (*)();
    using TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback = bool (*)();
    using TextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, const char*, int);
    using TextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, QRegularExpression*, int);
    using TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback = void (*)();
    using TextCustomEditor__TextEditFindBarBase_Event_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, bool, bool);
    using TextCustomEditor__TextEditFindBarBase_DevType_Callback = int (*)();
    using TextCustomEditor__TextEditFindBarBase_SetVisible_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, bool);
    using TextCustomEditor__TextEditFindBarBase_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback = int (*)(const TextCustomEditor__TextEditFindBarBase*, int);
    using TextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__TextEditFindBarBase_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMouseEvent*);
    using TextCustomEditor__TextEditFindBarBase_WheelEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QWheelEvent*);
    using TextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QKeyEvent*);
    using TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QKeyEvent*);
    using TextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QFocusEvent*);
    using TextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QFocusEvent*);
    using TextCustomEditor__TextEditFindBarBase_EnterEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEnterEvent*);
    using TextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_PaintEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QPaintEvent*);
    using TextCustomEditor__TextEditFindBarBase_MoveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMoveEvent*);
    using TextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QResizeEvent*);
    using TextCustomEditor__TextEditFindBarBase_CloseEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QCloseEvent*);
    using TextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QContextMenuEvent*);
    using TextCustomEditor__TextEditFindBarBase_TabletEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QTabletEvent*);
    using TextCustomEditor__TextEditFindBarBase_ActionEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QActionEvent*);
    using TextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDragEnterEvent*);
    using TextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDragMoveEvent*);
    using TextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDragLeaveEvent*);
    using TextCustomEditor__TextEditFindBarBase_DropEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QDropEvent*);
    using TextCustomEditor__TextEditFindBarBase_ShowEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QShowEvent*);
    using TextCustomEditor__TextEditFindBarBase_HideEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QHideEvent*);
    using TextCustomEditor__TextEditFindBarBase_NativeEvent_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_Metric_Callback = int (*)(const TextCustomEditor__TextEditFindBarBase*, int);
    using TextCustomEditor__TextEditFindBarBase_InitPainter_Callback = void (*)(const TextCustomEditor__TextEditFindBarBase*, QPainter*);
    using TextCustomEditor__TextEditFindBarBase_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__TextEditFindBarBase*, QPoint*);
    using TextCustomEditor__TextEditFindBarBase_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QInputMethodEvent*);
    using TextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__TextEditFindBarBase*, int);
    using TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, bool);
    using TextCustomEditor__TextEditFindBarBase_EventFilter_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, QObject*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_TimerEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QTimerEvent*);
    using TextCustomEditor__TextEditFindBarBase_ChildEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QChildEvent*);
    using TextCustomEditor__TextEditFindBarBase_CustomEvent_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QEvent*);
    using TextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMetaMethod*);
    using TextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, QMetaMethod*);
    using TextCustomEditor__TextEditFindBarBase_ClearSelections_Callback = void (*)();
    using TextCustomEditor__TextEditFindBarBase_SearchText_Callback = bool (*)(TextCustomEditor__TextEditFindBarBase*, bool, bool);
    using TextCustomEditor__TextEditFindBarBase_SetFoundMatch_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, bool);
    using TextCustomEditor__TextEditFindBarBase_MessageInfo_Callback = void (*)(TextCustomEditor__TextEditFindBarBase*, bool, bool, bool);
    using TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__TextEditFindBarBase_Create_Callback = void (*)();
    using TextCustomEditor__TextEditFindBarBase_Destroy_Callback = void (*)();
    using TextCustomEditor__TextEditFindBarBase_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__TextEditFindBarBase_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__TextEditFindBarBase_Sender_Callback = QObject* (*)();
    using TextCustomEditor__TextEditFindBarBase_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__TextEditFindBarBase_Receivers_Callback = int (*)(const TextCustomEditor__TextEditFindBarBase*, const char*);
    using TextCustomEditor__TextEditFindBarBase_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__TextEditFindBarBase*, QMetaMethod*);
    using TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__TextEditFindBarBase*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__TextEditFindBarBase_MetaObject_Callback textcustomeditor__texteditfindbarbase_metaobject_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Metacast_Callback textcustomeditor__texteditfindbarbase_metacast_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Metacall_Callback textcustomeditor__texteditfindbarbase_metacall_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback textcustomeditor__texteditfindbarbase_viewisreadonly_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback textcustomeditor__texteditfindbarbase_documentisempty_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback textcustomeditor__texteditfindbarbase_searchindocument_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback textcustomeditor__texteditfindbarbase_searchindocument2_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback textcustomeditor__texteditfindbarbase_autosearchmovecursor_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Event_Callback textcustomeditor__texteditfindbarbase_event_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback textcustomeditor__texteditfindbarbase_slotsearchtext_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DevType_Callback textcustomeditor__texteditfindbarbase_devtype_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SetVisible_Callback textcustomeditor__texteditfindbarbase_setvisible_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SizeHint_Callback textcustomeditor__texteditfindbarbase_sizehint_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback textcustomeditor__texteditfindbarbase_minimumsizehint_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback textcustomeditor__texteditfindbarbase_heightforwidth_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback textcustomeditor__texteditfindbarbase_hasheightforwidth_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_PaintEngine_Callback textcustomeditor__texteditfindbarbase_paintengine_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback textcustomeditor__texteditfindbarbase_mousepressevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback textcustomeditor__texteditfindbarbase_mousereleaseevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback textcustomeditor__texteditfindbarbase_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback textcustomeditor__texteditfindbarbase_mousemoveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_WheelEvent_Callback textcustomeditor__texteditfindbarbase_wheelevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback textcustomeditor__texteditfindbarbase_keypressevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback textcustomeditor__texteditfindbarbase_keyreleaseevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback textcustomeditor__texteditfindbarbase_focusinevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback textcustomeditor__texteditfindbarbase_focusoutevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_EnterEvent_Callback textcustomeditor__texteditfindbarbase_enterevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback textcustomeditor__texteditfindbarbase_leaveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_PaintEvent_Callback textcustomeditor__texteditfindbarbase_paintevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MoveEvent_Callback textcustomeditor__texteditfindbarbase_moveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback textcustomeditor__texteditfindbarbase_resizeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_CloseEvent_Callback textcustomeditor__texteditfindbarbase_closeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback textcustomeditor__texteditfindbarbase_contextmenuevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_TabletEvent_Callback textcustomeditor__texteditfindbarbase_tabletevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ActionEvent_Callback textcustomeditor__texteditfindbarbase_actionevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback textcustomeditor__texteditfindbarbase_dragenterevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback textcustomeditor__texteditfindbarbase_dragmoveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback textcustomeditor__texteditfindbarbase_dragleaveevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DropEvent_Callback textcustomeditor__texteditfindbarbase_dropevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ShowEvent_Callback textcustomeditor__texteditfindbarbase_showevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_HideEvent_Callback textcustomeditor__texteditfindbarbase_hideevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_NativeEvent_Callback textcustomeditor__texteditfindbarbase_nativeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback textcustomeditor__texteditfindbarbase_changeevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Metric_Callback textcustomeditor__texteditfindbarbase_metric_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_InitPainter_Callback textcustomeditor__texteditfindbarbase_initpainter_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Redirected_Callback textcustomeditor__texteditfindbarbase_redirected_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SharedPainter_Callback textcustomeditor__texteditfindbarbase_sharedpainter_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback textcustomeditor__texteditfindbarbase_inputmethodevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback textcustomeditor__texteditfindbarbase_inputmethodquery_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback textcustomeditor__texteditfindbarbase_focusnextprevchild_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_EventFilter_Callback textcustomeditor__texteditfindbarbase_eventfilter_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_TimerEvent_Callback textcustomeditor__texteditfindbarbase_timerevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ChildEvent_Callback textcustomeditor__texteditfindbarbase_childevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_CustomEvent_Callback textcustomeditor__texteditfindbarbase_customevent_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback textcustomeditor__texteditfindbarbase_connectnotify_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback textcustomeditor__texteditfindbarbase_disconnectnotify_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_ClearSelections_Callback textcustomeditor__texteditfindbarbase_clearselections_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SearchText_Callback textcustomeditor__texteditfindbarbase_searchtext_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SetFoundMatch_Callback textcustomeditor__texteditfindbarbase_setfoundmatch_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_MessageInfo_Callback textcustomeditor__texteditfindbarbase_messageinfo_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_Callback textcustomeditor__texteditfindbarbase_updatemicrofocus_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Create_Callback textcustomeditor__texteditfindbarbase_create_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Destroy_Callback textcustomeditor__texteditfindbarbase_destroy_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusNextChild_Callback textcustomeditor__texteditfindbarbase_focusnextchild_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_FocusPreviousChild_Callback textcustomeditor__texteditfindbarbase_focuspreviouschild_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Sender_Callback textcustomeditor__texteditfindbarbase_sender_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_SenderSignalIndex_Callback textcustomeditor__texteditfindbarbase_sendersignalindex_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_Receivers_Callback textcustomeditor__texteditfindbarbase_receivers_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_IsSignalConnected_Callback textcustomeditor__texteditfindbarbase_issignalconnected_callback = nullptr;
    TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_Callback textcustomeditor__texteditfindbarbase_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__texteditfindbarbase_metaobject_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_metacast_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_metacall_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_viewisreadonly_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_documentisempty_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_searchindocument_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_searchindocument2_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_autosearchmovecursor_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_event_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_slotsearchtext_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_devtype_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_setvisible_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_sizehint_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_heightforwidth_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_paintengine_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_mousepressevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_wheelevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_keypressevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_focusinevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_focusoutevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_enterevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_leaveevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_paintevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_moveevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_resizeevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_closeevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_tabletevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_actionevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_dragenterevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_dropevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_showevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_hideevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_nativeevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_changeevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_metric_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_initpainter_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_redirected_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_sharedpainter_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_eventfilter_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_timerevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_childevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_customevent_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_connectnotify_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_clearselections_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_searchtext_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_setfoundmatch_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_messageinfo_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_create_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_destroy_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_focusnextchild_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_sender_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_receivers_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_issignalconnected_isbase = false;
    mutable bool textcustomeditor__texteditfindbarbase_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorTextEditFindBarBase(QWidget* parent) : TextCustomEditor::TextEditFindBarBase(parent) {};
    VirtualTextCustomEditorTextEditFindBarBase() : TextCustomEditor::TextEditFindBarBase() {};

    // Callback setters
    inline void setTextCustomEditor__TextEditFindBarBase_MetaObject_Callback(TextCustomEditor__TextEditFindBarBase_MetaObject_Callback cb) { textcustomeditor__texteditfindbarbase_metaobject_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Metacast_Callback(TextCustomEditor__TextEditFindBarBase_Metacast_Callback cb) { textcustomeditor__texteditfindbarbase_metacast_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Metacall_Callback(TextCustomEditor__TextEditFindBarBase_Metacall_Callback cb) { textcustomeditor__texteditfindbarbase_metacall_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback(TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_Callback cb) { textcustomeditor__texteditfindbarbase_viewisreadonly_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback(TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_Callback cb) { textcustomeditor__texteditfindbarbase_documentisempty_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback(TextCustomEditor__TextEditFindBarBase_SearchInDocument_Callback cb) { textcustomeditor__texteditfindbarbase_searchindocument_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback(TextCustomEditor__TextEditFindBarBase_SearchInDocument2_Callback cb) { textcustomeditor__texteditfindbarbase_searchindocument2_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback(TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_Callback cb) { textcustomeditor__texteditfindbarbase_autosearchmovecursor_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Event_Callback(TextCustomEditor__TextEditFindBarBase_Event_Callback cb) { textcustomeditor__texteditfindbarbase_event_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback(TextCustomEditor__TextEditFindBarBase_SlotSearchText_Callback cb) { textcustomeditor__texteditfindbarbase_slotsearchtext_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_DevType_Callback(TextCustomEditor__TextEditFindBarBase_DevType_Callback cb) { textcustomeditor__texteditfindbarbase_devtype_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SetVisible_Callback(TextCustomEditor__TextEditFindBarBase_SetVisible_Callback cb) { textcustomeditor__texteditfindbarbase_setvisible_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SizeHint_Callback(TextCustomEditor__TextEditFindBarBase_SizeHint_Callback cb) { textcustomeditor__texteditfindbarbase_sizehint_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback(TextCustomEditor__TextEditFindBarBase_MinimumSizeHint_Callback cb) { textcustomeditor__texteditfindbarbase_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback(TextCustomEditor__TextEditFindBarBase_HeightForWidth_Callback cb) { textcustomeditor__texteditfindbarbase_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback(TextCustomEditor__TextEditFindBarBase_HasHeightForWidth_Callback cb) { textcustomeditor__texteditfindbarbase_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_PaintEngine_Callback(TextCustomEditor__TextEditFindBarBase_PaintEngine_Callback cb) { textcustomeditor__texteditfindbarbase_paintengine_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback(TextCustomEditor__TextEditFindBarBase_MousePressEvent_Callback cb) { textcustomeditor__texteditfindbarbase_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback(TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_Callback cb) { textcustomeditor__texteditfindbarbase_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback(TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_Callback cb) { textcustomeditor__texteditfindbarbase_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback(TextCustomEditor__TextEditFindBarBase_MouseMoveEvent_Callback cb) { textcustomeditor__texteditfindbarbase_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_WheelEvent_Callback(TextCustomEditor__TextEditFindBarBase_WheelEvent_Callback cb) { textcustomeditor__texteditfindbarbase_wheelevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback(TextCustomEditor__TextEditFindBarBase_KeyPressEvent_Callback cb) { textcustomeditor__texteditfindbarbase_keypressevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback(TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_Callback cb) { textcustomeditor__texteditfindbarbase_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback(TextCustomEditor__TextEditFindBarBase_FocusInEvent_Callback cb) { textcustomeditor__texteditfindbarbase_focusinevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback(TextCustomEditor__TextEditFindBarBase_FocusOutEvent_Callback cb) { textcustomeditor__texteditfindbarbase_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_EnterEvent_Callback(TextCustomEditor__TextEditFindBarBase_EnterEvent_Callback cb) { textcustomeditor__texteditfindbarbase_enterevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback(TextCustomEditor__TextEditFindBarBase_LeaveEvent_Callback cb) { textcustomeditor__texteditfindbarbase_leaveevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_PaintEvent_Callback(TextCustomEditor__TextEditFindBarBase_PaintEvent_Callback cb) { textcustomeditor__texteditfindbarbase_paintevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_MoveEvent_Callback(TextCustomEditor__TextEditFindBarBase_MoveEvent_Callback cb) { textcustomeditor__texteditfindbarbase_moveevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback(TextCustomEditor__TextEditFindBarBase_ResizeEvent_Callback cb) { textcustomeditor__texteditfindbarbase_resizeevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_CloseEvent_Callback(TextCustomEditor__TextEditFindBarBase_CloseEvent_Callback cb) { textcustomeditor__texteditfindbarbase_closeevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback(TextCustomEditor__TextEditFindBarBase_ContextMenuEvent_Callback cb) { textcustomeditor__texteditfindbarbase_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_TabletEvent_Callback(TextCustomEditor__TextEditFindBarBase_TabletEvent_Callback cb) { textcustomeditor__texteditfindbarbase_tabletevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ActionEvent_Callback(TextCustomEditor__TextEditFindBarBase_ActionEvent_Callback cb) { textcustomeditor__texteditfindbarbase_actionevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback(TextCustomEditor__TextEditFindBarBase_DragEnterEvent_Callback cb) { textcustomeditor__texteditfindbarbase_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback(TextCustomEditor__TextEditFindBarBase_DragMoveEvent_Callback cb) { textcustomeditor__texteditfindbarbase_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback(TextCustomEditor__TextEditFindBarBase_DragLeaveEvent_Callback cb) { textcustomeditor__texteditfindbarbase_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_DropEvent_Callback(TextCustomEditor__TextEditFindBarBase_DropEvent_Callback cb) { textcustomeditor__texteditfindbarbase_dropevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ShowEvent_Callback(TextCustomEditor__TextEditFindBarBase_ShowEvent_Callback cb) { textcustomeditor__texteditfindbarbase_showevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_HideEvent_Callback(TextCustomEditor__TextEditFindBarBase_HideEvent_Callback cb) { textcustomeditor__texteditfindbarbase_hideevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_NativeEvent_Callback(TextCustomEditor__TextEditFindBarBase_NativeEvent_Callback cb) { textcustomeditor__texteditfindbarbase_nativeevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback(TextCustomEditor__TextEditFindBarBase_ChangeEvent_Callback cb) { textcustomeditor__texteditfindbarbase_changeevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Metric_Callback(TextCustomEditor__TextEditFindBarBase_Metric_Callback cb) { textcustomeditor__texteditfindbarbase_metric_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_InitPainter_Callback(TextCustomEditor__TextEditFindBarBase_InitPainter_Callback cb) { textcustomeditor__texteditfindbarbase_initpainter_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Redirected_Callback(TextCustomEditor__TextEditFindBarBase_Redirected_Callback cb) { textcustomeditor__texteditfindbarbase_redirected_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SharedPainter_Callback(TextCustomEditor__TextEditFindBarBase_SharedPainter_Callback cb) { textcustomeditor__texteditfindbarbase_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback(TextCustomEditor__TextEditFindBarBase_InputMethodEvent_Callback cb) { textcustomeditor__texteditfindbarbase_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback(TextCustomEditor__TextEditFindBarBase_InputMethodQuery_Callback cb) { textcustomeditor__texteditfindbarbase_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback(TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_Callback cb) { textcustomeditor__texteditfindbarbase_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_EventFilter_Callback(TextCustomEditor__TextEditFindBarBase_EventFilter_Callback cb) { textcustomeditor__texteditfindbarbase_eventfilter_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_TimerEvent_Callback(TextCustomEditor__TextEditFindBarBase_TimerEvent_Callback cb) { textcustomeditor__texteditfindbarbase_timerevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ChildEvent_Callback(TextCustomEditor__TextEditFindBarBase_ChildEvent_Callback cb) { textcustomeditor__texteditfindbarbase_childevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_CustomEvent_Callback(TextCustomEditor__TextEditFindBarBase_CustomEvent_Callback cb) { textcustomeditor__texteditfindbarbase_customevent_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback(TextCustomEditor__TextEditFindBarBase_ConnectNotify_Callback cb) { textcustomeditor__texteditfindbarbase_connectnotify_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback(TextCustomEditor__TextEditFindBarBase_DisconnectNotify_Callback cb) { textcustomeditor__texteditfindbarbase_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_ClearSelections_Callback(TextCustomEditor__TextEditFindBarBase_ClearSelections_Callback cb) { textcustomeditor__texteditfindbarbase_clearselections_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SearchText_Callback(TextCustomEditor__TextEditFindBarBase_SearchText_Callback cb) { textcustomeditor__texteditfindbarbase_searchtext_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SetFoundMatch_Callback(TextCustomEditor__TextEditFindBarBase_SetFoundMatch_Callback cb) { textcustomeditor__texteditfindbarbase_setfoundmatch_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_MessageInfo_Callback(TextCustomEditor__TextEditFindBarBase_MessageInfo_Callback cb) { textcustomeditor__texteditfindbarbase_messageinfo_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_Callback(TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_Callback cb) { textcustomeditor__texteditfindbarbase_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Create_Callback(TextCustomEditor__TextEditFindBarBase_Create_Callback cb) { textcustomeditor__texteditfindbarbase_create_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Destroy_Callback(TextCustomEditor__TextEditFindBarBase_Destroy_Callback cb) { textcustomeditor__texteditfindbarbase_destroy_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusNextChild_Callback(TextCustomEditor__TextEditFindBarBase_FocusNextChild_Callback cb) { textcustomeditor__texteditfindbarbase_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusPreviousChild_Callback(TextCustomEditor__TextEditFindBarBase_FocusPreviousChild_Callback cb) { textcustomeditor__texteditfindbarbase_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Sender_Callback(TextCustomEditor__TextEditFindBarBase_Sender_Callback cb) { textcustomeditor__texteditfindbarbase_sender_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_SenderSignalIndex_Callback(TextCustomEditor__TextEditFindBarBase_SenderSignalIndex_Callback cb) { textcustomeditor__texteditfindbarbase_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_Receivers_Callback(TextCustomEditor__TextEditFindBarBase_Receivers_Callback cb) { textcustomeditor__texteditfindbarbase_receivers_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_IsSignalConnected_Callback(TextCustomEditor__TextEditFindBarBase_IsSignalConnected_Callback cb) { textcustomeditor__texteditfindbarbase_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_Callback(TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_Callback cb) { textcustomeditor__texteditfindbarbase_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__TextEditFindBarBase_MetaObject_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_metaobject_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Metacast_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_metacast_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Metacall_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_metacall_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ViewIsReadOnly_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_viewisreadonly_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_DocumentIsEmpty_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_documentisempty_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SearchInDocument_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_searchindocument_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SearchInDocument2_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_searchindocument2_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_autosearchmovecursor_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Event_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_event_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SlotSearchText_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_slotsearchtext_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_DevType_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_devtype_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SetVisible_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_setvisible_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SizeHint_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_sizehint_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_HeightForWidth_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_PaintEngine_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_paintengine_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_MousePressEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_WheelEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_wheelevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_KeyPressEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_keypressevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusInEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_focusinevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusOutEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_EnterEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_enterevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_LeaveEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_leaveevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_PaintEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_paintevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_MoveEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_moveevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ResizeEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_resizeevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_CloseEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_closeevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_TabletEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_tabletevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ActionEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_actionevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_DragEnterEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_DragMoveEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_DropEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_dropevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ShowEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_showevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_HideEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_hideevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_NativeEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_nativeevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ChangeEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_changeevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Metric_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_metric_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_InitPainter_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_initpainter_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Redirected_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_redirected_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SharedPainter_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_InputMethodEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_InputMethodQuery_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_EventFilter_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_eventfilter_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_TimerEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_timerevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ChildEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_childevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_CustomEvent_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_customevent_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ConnectNotify_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_connectnotify_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_DisconnectNotify_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_ClearSelections_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_clearselections_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SearchText_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_searchtext_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SetFoundMatch_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_setfoundmatch_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_MessageInfo_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_messageinfo_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Create_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_create_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Destroy_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_destroy_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusNextChild_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Sender_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_sender_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_Receivers_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_receivers_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_IsSignalConnected_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__TextEditFindBarBase_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__texteditfindbarbase_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__texteditfindbarbase_metaobject_isbase) {
            textcustomeditor__texteditfindbarbase_metaobject_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::metaObject();
        }
        auto metaobject_cb = textcustomeditor__texteditfindbarbase_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__texteditfindbarbase_metacast_isbase) {
            textcustomeditor__texteditfindbarbase_metacast_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__texteditfindbarbase_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__texteditfindbarbase_metacall_isbase) {
            textcustomeditor__texteditfindbarbase_metacall_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__texteditfindbarbase_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewIsReadOnly() const override {
        auto viewisreadonly_cb = textcustomeditor__texteditfindbarbase_viewisreadonly_callback;
        if (viewisreadonly_cb) {
            bool callback_ret = viewisreadonly_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool documentIsEmpty() const override {
        auto documentisempty_cb = textcustomeditor__texteditfindbarbase_documentisempty_callback;
        if (documentisempty_cb) {
            bool callback_ret = documentisempty_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QString& text, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        auto searchindocument_cb = textcustomeditor__texteditfindbarbase_searchindocument_callback;
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
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool searchInDocument(const QRegularExpression& regExp, TextCustomEditor::TextEditFindBarBase::FindFlags searchOptions) override {
        auto searchindocument2_cb = textcustomeditor__texteditfindbarbase_searchindocument2_callback;
        if (searchindocument2_cb) {
            const QRegularExpression& regExp_ret = regExp;
            // Cast returned reference into pointer
            QRegularExpression* cbval1 = const_cast<QRegularExpression*>(&regExp_ret);
            int cbval2 = static_cast<int>(searchOptions);

            bool callback_ret = searchindocument2_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoSearchMoveCursor() override {
        auto autosearchmovecursor_cb = textcustomeditor__texteditfindbarbase_autosearchmovecursor_callback;
        if (autosearchmovecursor_cb) {
            autosearchmovecursor_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__texteditfindbarbase_event_isbase) {
            textcustomeditor__texteditfindbarbase_event_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::event(e);
        }
        auto event_cb = textcustomeditor__texteditfindbarbase_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSearchText(bool backward, bool isAutoSearch) override {
        auto slotsearchtext_cb = textcustomeditor__texteditfindbarbase_slotsearchtext_callback;
        if (slotsearchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;

            slotsearchtext_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__texteditfindbarbase_devtype_isbase) {
            textcustomeditor__texteditfindbarbase_devtype_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::devType();
        }
        auto devtype_cb = textcustomeditor__texteditfindbarbase_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__texteditfindbarbase_setvisible_isbase) {
            textcustomeditor__texteditfindbarbase_setvisible_isbase = false;
            TextCustomEditor__TextEditFindBarBase::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__texteditfindbarbase_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__texteditfindbarbase_sizehint_isbase) {
            textcustomeditor__texteditfindbarbase_sizehint_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__texteditfindbarbase_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__texteditfindbarbase_minimumsizehint_isbase) {
            textcustomeditor__texteditfindbarbase_minimumsizehint_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__texteditfindbarbase_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__texteditfindbarbase_heightforwidth_isbase) {
            textcustomeditor__texteditfindbarbase_heightforwidth_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__texteditfindbarbase_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__texteditfindbarbase_hasheightforwidth_isbase) {
            textcustomeditor__texteditfindbarbase_hasheightforwidth_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__texteditfindbarbase_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__texteditfindbarbase_paintengine_isbase) {
            textcustomeditor__texteditfindbarbase_paintengine_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__texteditfindbarbase_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousepressevent_isbase) {
            textcustomeditor__texteditfindbarbase_mousepressevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__texteditfindbarbase_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousereleaseevent_isbase) {
            textcustomeditor__texteditfindbarbase_mousereleaseevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__texteditfindbarbase_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousedoubleclickevent_isbase) {
            textcustomeditor__texteditfindbarbase_mousedoubleclickevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__texteditfindbarbase_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_mousemoveevent_isbase) {
            textcustomeditor__texteditfindbarbase_mousemoveevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__texteditfindbarbase_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_wheelevent_isbase) {
            textcustomeditor__texteditfindbarbase_wheelevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__texteditfindbarbase_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_keypressevent_isbase) {
            textcustomeditor__texteditfindbarbase_keypressevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__texteditfindbarbase_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_keyreleaseevent_isbase) {
            textcustomeditor__texteditfindbarbase_keyreleaseevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__texteditfindbarbase_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_focusinevent_isbase) {
            textcustomeditor__texteditfindbarbase_focusinevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__texteditfindbarbase_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_focusoutevent_isbase) {
            textcustomeditor__texteditfindbarbase_focusoutevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__texteditfindbarbase_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_enterevent_isbase) {
            textcustomeditor__texteditfindbarbase_enterevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__texteditfindbarbase_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_leaveevent_isbase) {
            textcustomeditor__texteditfindbarbase_leaveevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__texteditfindbarbase_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_paintevent_isbase) {
            textcustomeditor__texteditfindbarbase_paintevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__texteditfindbarbase_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_moveevent_isbase) {
            textcustomeditor__texteditfindbarbase_moveevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__texteditfindbarbase_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_resizeevent_isbase) {
            textcustomeditor__texteditfindbarbase_resizeevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__texteditfindbarbase_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_closeevent_isbase) {
            textcustomeditor__texteditfindbarbase_closeevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__texteditfindbarbase_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_contextmenuevent_isbase) {
            textcustomeditor__texteditfindbarbase_contextmenuevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__texteditfindbarbase_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_tabletevent_isbase) {
            textcustomeditor__texteditfindbarbase_tabletevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__texteditfindbarbase_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_actionevent_isbase) {
            textcustomeditor__texteditfindbarbase_actionevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__texteditfindbarbase_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dragenterevent_isbase) {
            textcustomeditor__texteditfindbarbase_dragenterevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__texteditfindbarbase_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dragmoveevent_isbase) {
            textcustomeditor__texteditfindbarbase_dragmoveevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__texteditfindbarbase_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dragleaveevent_isbase) {
            textcustomeditor__texteditfindbarbase_dragleaveevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__texteditfindbarbase_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_dropevent_isbase) {
            textcustomeditor__texteditfindbarbase_dropevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__texteditfindbarbase_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_showevent_isbase) {
            textcustomeditor__texteditfindbarbase_showevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::showEvent(event);
            return;
        }
        auto showevent_cb = textcustomeditor__texteditfindbarbase_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_hideevent_isbase) {
            textcustomeditor__texteditfindbarbase_hideevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__texteditfindbarbase_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__texteditfindbarbase_nativeevent_isbase) {
            textcustomeditor__texteditfindbarbase_nativeevent_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__texteditfindbarbase_nativeevent_callback;
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
        return TextCustomEditor__TextEditFindBarBase::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__texteditfindbarbase_changeevent_isbase) {
            textcustomeditor__texteditfindbarbase_changeevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__texteditfindbarbase_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__texteditfindbarbase_metric_isbase) {
            textcustomeditor__texteditfindbarbase_metric_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::metric(param1);
        }
        auto metric_cb = textcustomeditor__texteditfindbarbase_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__texteditfindbarbase_initpainter_isbase) {
            textcustomeditor__texteditfindbarbase_initpainter_isbase = false;
            TextCustomEditor__TextEditFindBarBase::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__texteditfindbarbase_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__texteditfindbarbase_redirected_isbase) {
            textcustomeditor__texteditfindbarbase_redirected_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__texteditfindbarbase_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__texteditfindbarbase_sharedpainter_isbase) {
            textcustomeditor__texteditfindbarbase_sharedpainter_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__texteditfindbarbase_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__texteditfindbarbase_inputmethodevent_isbase) {
            textcustomeditor__texteditfindbarbase_inputmethodevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__texteditfindbarbase_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__texteditfindbarbase_inputmethodquery_isbase) {
            textcustomeditor__texteditfindbarbase_inputmethodquery_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__texteditfindbarbase_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__texteditfindbarbase_focusnextprevchild_isbase) {
            textcustomeditor__texteditfindbarbase_focusnextprevchild_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__texteditfindbarbase_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_eventfilter_isbase) {
            textcustomeditor__texteditfindbarbase_eventfilter_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__texteditfindbarbase_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_timerevent_isbase) {
            textcustomeditor__texteditfindbarbase_timerevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__texteditfindbarbase_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_childevent_isbase) {
            textcustomeditor__texteditfindbarbase_childevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__texteditfindbarbase_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__texteditfindbarbase_customevent_isbase) {
            textcustomeditor__texteditfindbarbase_customevent_isbase = false;
            TextCustomEditor__TextEditFindBarBase::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__texteditfindbarbase_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditfindbarbase_connectnotify_isbase) {
            textcustomeditor__texteditfindbarbase_connectnotify_isbase = false;
            TextCustomEditor__TextEditFindBarBase::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__texteditfindbarbase_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__texteditfindbarbase_disconnectnotify_isbase) {
            textcustomeditor__texteditfindbarbase_disconnectnotify_isbase = false;
            TextCustomEditor__TextEditFindBarBase::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__texteditfindbarbase_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void clearSelections() {
        if (textcustomeditor__texteditfindbarbase_clearselections_isbase) {
            textcustomeditor__texteditfindbarbase_clearselections_isbase = false;
            TextCustomEditor__TextEditFindBarBase::clearSelections();
            return;
        }
        auto clearselections_cb = textcustomeditor__texteditfindbarbase_clearselections_callback;
        if (clearselections_cb) {
            clearselections_cb();
            return;
        }
        TextCustomEditor__TextEditFindBarBase::clearSelections();
    }

    // Virtual method for C ABI access and custom callback
    bool searchText(bool backward, bool isAutoSearch) {
        if (textcustomeditor__texteditfindbarbase_searchtext_isbase) {
            textcustomeditor__texteditfindbarbase_searchtext_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::searchText(backward, isAutoSearch);
        }
        auto searchtext_cb = textcustomeditor__texteditfindbarbase_searchtext_callback;
        if (searchtext_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;

            bool callback_ret = searchtext_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::searchText(backward, isAutoSearch);
    }

    // Virtual method for C ABI access and custom callback
    void setFoundMatch(bool match) {
        if (textcustomeditor__texteditfindbarbase_setfoundmatch_isbase) {
            textcustomeditor__texteditfindbarbase_setfoundmatch_isbase = false;
            TextCustomEditor__TextEditFindBarBase::setFoundMatch(match);
            return;
        }
        auto setfoundmatch_cb = textcustomeditor__texteditfindbarbase_setfoundmatch_callback;
        if (setfoundmatch_cb) {
            bool cbval1 = match;

            setfoundmatch_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::setFoundMatch(match);
    }

    // Virtual method for C ABI access and custom callback
    void messageInfo(bool backward, bool isAutoSearch, bool found) {
        if (textcustomeditor__texteditfindbarbase_messageinfo_isbase) {
            textcustomeditor__texteditfindbarbase_messageinfo_isbase = false;
            TextCustomEditor__TextEditFindBarBase::messageInfo(backward, isAutoSearch, found);
            return;
        }
        auto messageinfo_cb = textcustomeditor__texteditfindbarbase_messageinfo_callback;
        if (messageinfo_cb) {
            bool cbval1 = backward;
            bool cbval2 = isAutoSearch;
            bool cbval3 = found;

            messageinfo_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__TextEditFindBarBase::messageInfo(backward, isAutoSearch, found);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__texteditfindbarbase_updatemicrofocus_isbase) {
            textcustomeditor__texteditfindbarbase_updatemicrofocus_isbase = false;
            TextCustomEditor__TextEditFindBarBase::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__texteditfindbarbase_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__TextEditFindBarBase::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__texteditfindbarbase_create_isbase) {
            textcustomeditor__texteditfindbarbase_create_isbase = false;
            TextCustomEditor__TextEditFindBarBase::create();
            return;
        }
        auto create_cb = textcustomeditor__texteditfindbarbase_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__TextEditFindBarBase::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__texteditfindbarbase_destroy_isbase) {
            textcustomeditor__texteditfindbarbase_destroy_isbase = false;
            TextCustomEditor__TextEditFindBarBase::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__texteditfindbarbase_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__TextEditFindBarBase::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__texteditfindbarbase_focusnextchild_isbase) {
            textcustomeditor__texteditfindbarbase_focusnextchild_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__texteditfindbarbase_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__texteditfindbarbase_focuspreviouschild_isbase) {
            textcustomeditor__texteditfindbarbase_focuspreviouschild_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__texteditfindbarbase_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__texteditfindbarbase_sender_isbase) {
            textcustomeditor__texteditfindbarbase_sender_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::sender();
        }
        auto sender_cb = textcustomeditor__texteditfindbarbase_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__texteditfindbarbase_sendersignalindex_isbase) {
            textcustomeditor__texteditfindbarbase_sendersignalindex_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__texteditfindbarbase_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__texteditfindbarbase_receivers_isbase) {
            textcustomeditor__texteditfindbarbase_receivers_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__texteditfindbarbase_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__texteditfindbarbase_issignalconnected_isbase) {
            textcustomeditor__texteditfindbarbase_issignalconnected_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__texteditfindbarbase_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextEditFindBarBase::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__texteditfindbarbase_getdecodedmetricf_isbase) {
            textcustomeditor__texteditfindbarbase_getdecodedmetricf_isbase = false;
            return TextCustomEditor__TextEditFindBarBase::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__texteditfindbarbase_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__TextEditFindBarBase::getDecodedMetricF(metricA, metricB);
    }

    void slotReplaceText() override {}
    void slotReplaceAllText() override {}

    // Friend functions
    friend bool TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly(const TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperViewIsReadOnly(const TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty(const TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperDocumentIsEmpty(const TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_SearchInDocument(TextCustomEditor::TextEditFindBarBase* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperSearchInDocument(TextCustomEditor::TextEditFindBarBase* self, const libqt_string text, int searchOptions);
    friend bool TextCustomEditor__TextEditFindBarBase_SearchInDocument2(TextCustomEditor::TextEditFindBarBase* self, const QRegularExpression* regExp, int searchOptions);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperSearchInDocument2(TextCustomEditor::TextEditFindBarBase* self, const QRegularExpression* regExp, int searchOptions);
    friend void TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor(TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_SuperAutoSearchMoveCursor(TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_Event(TextCustomEditor::TextEditFindBarBase* self, QEvent* e);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* e);
    friend void TextCustomEditor__TextEditFindBarBase_MousePressEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMousePressEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMouseReleaseEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMouseDoubleClickEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_MouseMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMouseMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QMouseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_WheelEvent(TextCustomEditor::TextEditFindBarBase* self, QWheelEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperWheelEvent(TextCustomEditor::TextEditFindBarBase* self, QWheelEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_KeyPressEvent(TextCustomEditor::TextEditFindBarBase* self, QKeyEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperKeyPressEvent(TextCustomEditor::TextEditFindBarBase* self, QKeyEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent(TextCustomEditor::TextEditFindBarBase* self, QKeyEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperKeyReleaseEvent(TextCustomEditor::TextEditFindBarBase* self, QKeyEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_FocusInEvent(TextCustomEditor::TextEditFindBarBase* self, QFocusEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperFocusInEvent(TextCustomEditor::TextEditFindBarBase* self, QFocusEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_FocusOutEvent(TextCustomEditor::TextEditFindBarBase* self, QFocusEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperFocusOutEvent(TextCustomEditor::TextEditFindBarBase* self, QFocusEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_EnterEvent(TextCustomEditor::TextEditFindBarBase* self, QEnterEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperEnterEvent(TextCustomEditor::TextEditFindBarBase* self, QEnterEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_LeaveEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperLeaveEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_PaintEvent(TextCustomEditor::TextEditFindBarBase* self, QPaintEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperPaintEvent(TextCustomEditor::TextEditFindBarBase* self, QPaintEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_MoveEvent(TextCustomEditor::TextEditFindBarBase* self, QMoveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QMoveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_ResizeEvent(TextCustomEditor::TextEditFindBarBase* self, QResizeEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperResizeEvent(TextCustomEditor::TextEditFindBarBase* self, QResizeEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_CloseEvent(TextCustomEditor::TextEditFindBarBase* self, QCloseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperCloseEvent(TextCustomEditor::TextEditFindBarBase* self, QCloseEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_ContextMenuEvent(TextCustomEditor::TextEditFindBarBase* self, QContextMenuEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperContextMenuEvent(TextCustomEditor::TextEditFindBarBase* self, QContextMenuEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_TabletEvent(TextCustomEditor::TextEditFindBarBase* self, QTabletEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperTabletEvent(TextCustomEditor::TextEditFindBarBase* self, QTabletEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_ActionEvent(TextCustomEditor::TextEditFindBarBase* self, QActionEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperActionEvent(TextCustomEditor::TextEditFindBarBase* self, QActionEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_DragEnterEvent(TextCustomEditor::TextEditFindBarBase* self, QDragEnterEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDragEnterEvent(TextCustomEditor::TextEditFindBarBase* self, QDragEnterEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_DragMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QDragMoveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDragMoveEvent(TextCustomEditor::TextEditFindBarBase* self, QDragMoveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_DragLeaveEvent(TextCustomEditor::TextEditFindBarBase* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDragLeaveEvent(TextCustomEditor::TextEditFindBarBase* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_DropEvent(TextCustomEditor::TextEditFindBarBase* self, QDropEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDropEvent(TextCustomEditor::TextEditFindBarBase* self, QDropEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_ShowEvent(TextCustomEditor::TextEditFindBarBase* self, QShowEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperShowEvent(TextCustomEditor::TextEditFindBarBase* self, QShowEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_HideEvent(TextCustomEditor::TextEditFindBarBase* self, QHideEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperHideEvent(TextCustomEditor::TextEditFindBarBase* self, QHideEvent* event);
    friend bool TextCustomEditor__TextEditFindBarBase_NativeEvent(TextCustomEditor::TextEditFindBarBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperNativeEvent(TextCustomEditor::TextEditFindBarBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__TextEditFindBarBase_ChangeEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* param1);
    friend void TextCustomEditor__TextEditFindBarBase_SuperChangeEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* param1);
    friend int TextCustomEditor__TextEditFindBarBase_Metric(const TextCustomEditor::TextEditFindBarBase* self, int param1);
    friend int TextCustomEditor__TextEditFindBarBase_SuperMetric(const TextCustomEditor::TextEditFindBarBase* self, int param1);
    friend void TextCustomEditor__TextEditFindBarBase_InitPainter(const TextCustomEditor::TextEditFindBarBase* self, QPainter* painter);
    friend void TextCustomEditor__TextEditFindBarBase_SuperInitPainter(const TextCustomEditor::TextEditFindBarBase* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__TextEditFindBarBase_Redirected(const TextCustomEditor::TextEditFindBarBase* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__TextEditFindBarBase_SuperRedirected(const TextCustomEditor::TextEditFindBarBase* self, QPoint* offset);
    friend QPainter* TextCustomEditor__TextEditFindBarBase_SharedPainter(const TextCustomEditor::TextEditFindBarBase* self);
    friend QPainter* TextCustomEditor__TextEditFindBarBase_SuperSharedPainter(const TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_InputMethodEvent(TextCustomEditor::TextEditFindBarBase* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__TextEditFindBarBase_SuperInputMethodEvent(TextCustomEditor::TextEditFindBarBase* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild(TextCustomEditor::TextEditFindBarBase* self, bool next);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperFocusNextPrevChild(TextCustomEditor::TextEditFindBarBase* self, bool next);
    friend void TextCustomEditor__TextEditFindBarBase_TimerEvent(TextCustomEditor::TextEditFindBarBase* self, QTimerEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperTimerEvent(TextCustomEditor::TextEditFindBarBase* self, QTimerEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_ChildEvent(TextCustomEditor::TextEditFindBarBase* self, QChildEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperChildEvent(TextCustomEditor::TextEditFindBarBase* self, QChildEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_CustomEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_SuperCustomEvent(TextCustomEditor::TextEditFindBarBase* self, QEvent* event);
    friend void TextCustomEditor__TextEditFindBarBase_ConnectNotify(TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditFindBarBase_SuperConnectNotify(TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditFindBarBase_DisconnectNotify(TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDisconnectNotify(TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextEditFindBarBase_ClearSelections(TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_SuperClearSelections(TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_SearchText(TextCustomEditor::TextEditFindBarBase* self, bool backward, bool isAutoSearch);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperSearchText(TextCustomEditor::TextEditFindBarBase* self, bool backward, bool isAutoSearch);
    friend void TextCustomEditor__TextEditFindBarBase_SetFoundMatch(TextCustomEditor::TextEditFindBarBase* self, bool match);
    friend void TextCustomEditor__TextEditFindBarBase_SuperSetFoundMatch(TextCustomEditor::TextEditFindBarBase* self, bool match);
    friend void TextCustomEditor__TextEditFindBarBase_MessageInfo(TextCustomEditor::TextEditFindBarBase* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__TextEditFindBarBase_SuperMessageInfo(TextCustomEditor::TextEditFindBarBase* self, bool backward, bool isAutoSearch, bool found);
    friend void TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus(TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_SuperUpdateMicroFocus(TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_Create(TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_SuperCreate(TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_Destroy(TextCustomEditor::TextEditFindBarBase* self);
    friend void TextCustomEditor__TextEditFindBarBase_SuperDestroy(TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_FocusNextChild(TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperFocusNextChild(TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_FocusPreviousChild(TextCustomEditor::TextEditFindBarBase* self);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperFocusPreviousChild(TextCustomEditor::TextEditFindBarBase* self);
    friend QObject* TextCustomEditor__TextEditFindBarBase_Sender(const TextCustomEditor::TextEditFindBarBase* self);
    friend QObject* TextCustomEditor__TextEditFindBarBase_SuperSender(const TextCustomEditor::TextEditFindBarBase* self);
    friend int TextCustomEditor__TextEditFindBarBase_SenderSignalIndex(const TextCustomEditor::TextEditFindBarBase* self);
    friend int TextCustomEditor__TextEditFindBarBase_SuperSenderSignalIndex(const TextCustomEditor::TextEditFindBarBase* self);
    friend int TextCustomEditor__TextEditFindBarBase_Receivers(const TextCustomEditor::TextEditFindBarBase* self, const char* signal);
    friend int TextCustomEditor__TextEditFindBarBase_SuperReceivers(const TextCustomEditor::TextEditFindBarBase* self, const char* signal);
    friend bool TextCustomEditor__TextEditFindBarBase_IsSignalConnected(const TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__TextEditFindBarBase_SuperIsSignalConnected(const TextCustomEditor::TextEditFindBarBase* self, const QMetaMethod* signal);
    friend double TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF(const TextCustomEditor::TextEditFindBarBase* self, int metricA, int metricB);
    friend double TextCustomEditor__TextEditFindBarBase_SuperGetDecodedMetricF(const TextCustomEditor::TextEditFindBarBase* self, int metricA, int metricB);
};

#endif
