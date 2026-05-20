#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTEDITOR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextEditor so that we can call protected methods
class VirtualTextCustomEditorRichTextEditor final : public TextCustomEditor::RichTextEditor {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorRichTextEditor = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__RichTextEditor_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__RichTextEditor_Metacast_Callback = void* (*)(TextCustomEditor__RichTextEditor*, const char*);
    using TextCustomEditor__RichTextEditor_Metacall_Callback = int (*)(TextCustomEditor__RichTextEditor*, int, int, void**);
    using TextCustomEditor__RichTextEditor_SetReadOnly_Callback = void (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_CreateHighlighter_Callback = void (*)();
    using TextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback = void (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMenu*, QPoint*);
    using TextCustomEditor__RichTextEditor_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QContextMenuEvent*);
    using TextCustomEditor__RichTextEditor_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QFocusEvent*);
    using TextCustomEditor__RichTextEditor_Event_Callback = bool (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QKeyEvent*);
    using TextCustomEditor__RichTextEditor_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QWheelEvent*);
    using TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback = Sonnet__SpellCheckDecorator* (*)();
    using TextCustomEditor__RichTextEditor_UpdateHighLighter_Callback = void (*)();
    using TextCustomEditor__RichTextEditor_ClearDecorator_Callback = void (*)();
    using TextCustomEditor__RichTextEditor_LoadResource_Callback = QVariant* (*)(TextCustomEditor__RichTextEditor*, int, QUrl*);
    using TextCustomEditor__RichTextEditor_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextEditor*, int);
    using TextCustomEditor__RichTextEditor_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QTimerEvent*);
    using TextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QKeyEvent*);
    using TextCustomEditor__RichTextEditor_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QResizeEvent*);
    using TextCustomEditor__RichTextEditor_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QPaintEvent*);
    using TextCustomEditor__RichTextEditor_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMouseEvent*);
    using TextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDragEnterEvent*);
    using TextCustomEditor__RichTextEditor_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextEditor_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDragMoveEvent*);
    using TextCustomEditor__RichTextEditor_DropEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QDropEvent*);
    using TextCustomEditor__RichTextEditor_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QFocusEvent*);
    using TextCustomEditor__RichTextEditor_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QShowEvent*);
    using TextCustomEditor__RichTextEditor_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using TextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback = bool (*)(const TextCustomEditor__RichTextEditor*, QMimeData*);
    using TextCustomEditor__RichTextEditor_InsertFromMimeData_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMimeData*);
    using TextCustomEditor__RichTextEditor_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QInputMethodEvent*);
    using TextCustomEditor__RichTextEditor_ScrollContentsBy_Callback = void (*)(TextCustomEditor__RichTextEditor*, int, int);
    using TextCustomEditor__RichTextEditor_DoSetTextCursor_Callback = void (*)(TextCustomEditor__RichTextEditor*, QTextCursor*);
    using TextCustomEditor__RichTextEditor_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextEditor_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextEditor_SetupViewport_Callback = void (*)(TextCustomEditor__RichTextEditor*, QWidget*);
    using TextCustomEditor__RichTextEditor_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextEditor*, QObject*, QEvent*);
    using TextCustomEditor__RichTextEditor_ViewportEvent_Callback = bool (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_ViewportSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextEditor_InitStyleOption_Callback = void (*)(const TextCustomEditor__RichTextEditor*, QStyleOptionFrame*);
    using TextCustomEditor__RichTextEditor_DevType_Callback = int (*)();
    using TextCustomEditor__RichTextEditor_SetVisible_Callback = void (*)(TextCustomEditor__RichTextEditor*, bool);
    using TextCustomEditor__RichTextEditor_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextEditor*, int);
    using TextCustomEditor__RichTextEditor_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__RichTextEditor_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__RichTextEditor_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEnterEvent*);
    using TextCustomEditor__RichTextEditor_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMoveEvent*);
    using TextCustomEditor__RichTextEditor_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QCloseEvent*);
    using TextCustomEditor__RichTextEditor_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QTabletEvent*);
    using TextCustomEditor__RichTextEditor_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QActionEvent*);
    using TextCustomEditor__RichTextEditor_HideEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QHideEvent*);
    using TextCustomEditor__RichTextEditor_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextEditor*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextEditor_Metric_Callback = int (*)(const TextCustomEditor__RichTextEditor*, int);
    using TextCustomEditor__RichTextEditor_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextEditor*, QPainter*);
    using TextCustomEditor__RichTextEditor_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextEditor*, QPoint*);
    using TextCustomEditor__RichTextEditor_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__RichTextEditor_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QChildEvent*);
    using TextCustomEditor__RichTextEditor_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextEditor*, QEvent*);
    using TextCustomEditor__RichTextEditor_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMetaMethod*);
    using TextCustomEditor__RichTextEditor_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditor*, QMetaMethod*);
    using TextCustomEditor__RichTextEditor_MousePopupMenu_Callback = QMenu* (*)(TextCustomEditor__RichTextEditor*, QPoint*);
    using TextCustomEditor__RichTextEditor_SetHighlighter_Callback = void (*)(TextCustomEditor__RichTextEditor*, Sonnet__Highlighter*);
    using TextCustomEditor__RichTextEditor_ZoomInF_Callback = void (*)(TextCustomEditor__RichTextEditor*, float);
    using TextCustomEditor__RichTextEditor_SetViewportMargins_Callback = void (*)(TextCustomEditor__RichTextEditor*, int, int, int, int);
    using TextCustomEditor__RichTextEditor_ViewportMargins_Callback = QMargins* (*)();
    using TextCustomEditor__RichTextEditor_DrawFrame_Callback = void (*)(TextCustomEditor__RichTextEditor*, QPainter*);
    using TextCustomEditor__RichTextEditor_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__RichTextEditor_Create_Callback = void (*)();
    using TextCustomEditor__RichTextEditor_Destroy_Callback = void (*)();
    using TextCustomEditor__RichTextEditor_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__RichTextEditor_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__RichTextEditor_Sender_Callback = QObject* (*)();
    using TextCustomEditor__RichTextEditor_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__RichTextEditor_Receivers_Callback = int (*)(const TextCustomEditor__RichTextEditor*, const char*);
    using TextCustomEditor__RichTextEditor_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__RichTextEditor*, QMetaMethod*);
    using TextCustomEditor__RichTextEditor_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__RichTextEditor*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__RichTextEditor_MetaObject_Callback textcustomeditor__richtexteditor_metaobject_callback = nullptr;
    TextCustomEditor__RichTextEditor_Metacast_Callback textcustomeditor__richtexteditor_metacast_callback = nullptr;
    TextCustomEditor__RichTextEditor_Metacall_Callback textcustomeditor__richtexteditor_metacall_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetReadOnly_Callback textcustomeditor__richtexteditor_setreadonly_callback = nullptr;
    TextCustomEditor__RichTextEditor_CreateHighlighter_Callback textcustomeditor__richtexteditor_createhighlighter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback textcustomeditor__richtexteditor_forceautocorrection_callback = nullptr;
    TextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback textcustomeditor__richtexteditor_addextramenuentry_callback = nullptr;
    TextCustomEditor__RichTextEditor_ContextMenuEvent_Callback textcustomeditor__richtexteditor_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusInEvent_Callback textcustomeditor__richtexteditor_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_Event_Callback textcustomeditor__richtexteditor_event_callback = nullptr;
    TextCustomEditor__RichTextEditor_KeyPressEvent_Callback textcustomeditor__richtexteditor_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_WheelEvent_Callback textcustomeditor__richtexteditor_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback textcustomeditor__richtexteditor_createspellcheckdecorator_callback = nullptr;
    TextCustomEditor__RichTextEditor_UpdateHighLighter_Callback textcustomeditor__richtexteditor_updatehighlighter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ClearDecorator_Callback textcustomeditor__richtexteditor_cleardecorator_callback = nullptr;
    TextCustomEditor__RichTextEditor_LoadResource_Callback textcustomeditor__richtexteditor_loadresource_callback = nullptr;
    TextCustomEditor__RichTextEditor_InputMethodQuery_Callback textcustomeditor__richtexteditor_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextEditor_TimerEvent_Callback textcustomeditor__richtexteditor_timerevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback textcustomeditor__richtexteditor_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ResizeEvent_Callback textcustomeditor__richtexteditor_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_PaintEvent_Callback textcustomeditor__richtexteditor_paintevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MousePressEvent_Callback textcustomeditor__richtexteditor_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MouseMoveEvent_Callback textcustomeditor__richtexteditor_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback textcustomeditor__richtexteditor_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback textcustomeditor__richtexteditor_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback textcustomeditor__richtexteditor_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextEditor_DragEnterEvent_Callback textcustomeditor__richtexteditor_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_DragLeaveEvent_Callback textcustomeditor__richtexteditor_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_DragMoveEvent_Callback textcustomeditor__richtexteditor_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_DropEvent_Callback textcustomeditor__richtexteditor_dropevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusOutEvent_Callback textcustomeditor__richtexteditor_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ShowEvent_Callback textcustomeditor__richtexteditor_showevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ChangeEvent_Callback textcustomeditor__richtexteditor_changeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback textcustomeditor__richtexteditor_createmimedatafromselection_callback = nullptr;
    TextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback textcustomeditor__richtexteditor_caninsertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextEditor_InsertFromMimeData_Callback textcustomeditor__richtexteditor_insertfrommimedata_callback = nullptr;
    TextCustomEditor__RichTextEditor_InputMethodEvent_Callback textcustomeditor__richtexteditor_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ScrollContentsBy_Callback textcustomeditor__richtexteditor_scrollcontentsby_callback = nullptr;
    TextCustomEditor__RichTextEditor_DoSetTextCursor_Callback textcustomeditor__richtexteditor_dosettextcursor_callback = nullptr;
    TextCustomEditor__RichTextEditor_MinimumSizeHint_Callback textcustomeditor__richtexteditor_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditor_SizeHint_Callback textcustomeditor__richtexteditor_sizehint_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetupViewport_Callback textcustomeditor__richtexteditor_setupviewport_callback = nullptr;
    TextCustomEditor__RichTextEditor_EventFilter_Callback textcustomeditor__richtexteditor_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ViewportEvent_Callback textcustomeditor__richtexteditor_viewportevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ViewportSizeHint_Callback textcustomeditor__richtexteditor_viewportsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditor_InitStyleOption_Callback textcustomeditor__richtexteditor_initstyleoption_callback = nullptr;
    TextCustomEditor__RichTextEditor_DevType_Callback textcustomeditor__richtexteditor_devtype_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetVisible_Callback textcustomeditor__richtexteditor_setvisible_callback = nullptr;
    TextCustomEditor__RichTextEditor_HeightForWidth_Callback textcustomeditor__richtexteditor_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditor_HasHeightForWidth_Callback textcustomeditor__richtexteditor_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditor_PaintEngine_Callback textcustomeditor__richtexteditor_paintengine_callback = nullptr;
    TextCustomEditor__RichTextEditor_EnterEvent_Callback textcustomeditor__richtexteditor_enterevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_LeaveEvent_Callback textcustomeditor__richtexteditor_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_MoveEvent_Callback textcustomeditor__richtexteditor_moveevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CloseEvent_Callback textcustomeditor__richtexteditor_closeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_TabletEvent_Callback textcustomeditor__richtexteditor_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ActionEvent_Callback textcustomeditor__richtexteditor_actionevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_HideEvent_Callback textcustomeditor__richtexteditor_hideevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_NativeEvent_Callback textcustomeditor__richtexteditor_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_Metric_Callback textcustomeditor__richtexteditor_metric_callback = nullptr;
    TextCustomEditor__RichTextEditor_InitPainter_Callback textcustomeditor__richtexteditor_initpainter_callback = nullptr;
    TextCustomEditor__RichTextEditor_Redirected_Callback textcustomeditor__richtexteditor_redirected_callback = nullptr;
    TextCustomEditor__RichTextEditor_SharedPainter_Callback textcustomeditor__richtexteditor_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ChildEvent_Callback textcustomeditor__richtexteditor_childevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_CustomEvent_Callback textcustomeditor__richtexteditor_customevent_callback = nullptr;
    TextCustomEditor__RichTextEditor_ConnectNotify_Callback textcustomeditor__richtexteditor_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditor_DisconnectNotify_Callback textcustomeditor__richtexteditor_disconnectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditor_MousePopupMenu_Callback textcustomeditor__richtexteditor_mousepopupmenu_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetHighlighter_Callback textcustomeditor__richtexteditor_sethighlighter_callback = nullptr;
    TextCustomEditor__RichTextEditor_ZoomInF_Callback textcustomeditor__richtexteditor_zoominf_callback = nullptr;
    TextCustomEditor__RichTextEditor_SetViewportMargins_Callback textcustomeditor__richtexteditor_setviewportmargins_callback = nullptr;
    TextCustomEditor__RichTextEditor_ViewportMargins_Callback textcustomeditor__richtexteditor_viewportmargins_callback = nullptr;
    TextCustomEditor__RichTextEditor_DrawFrame_Callback textcustomeditor__richtexteditor_drawframe_callback = nullptr;
    TextCustomEditor__RichTextEditor_UpdateMicroFocus_Callback textcustomeditor__richtexteditor_updatemicrofocus_callback = nullptr;
    TextCustomEditor__RichTextEditor_Create_Callback textcustomeditor__richtexteditor_create_callback = nullptr;
    TextCustomEditor__RichTextEditor_Destroy_Callback textcustomeditor__richtexteditor_destroy_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusNextChild_Callback textcustomeditor__richtexteditor_focusnextchild_callback = nullptr;
    TextCustomEditor__RichTextEditor_FocusPreviousChild_Callback textcustomeditor__richtexteditor_focuspreviouschild_callback = nullptr;
    TextCustomEditor__RichTextEditor_Sender_Callback textcustomeditor__richtexteditor_sender_callback = nullptr;
    TextCustomEditor__RichTextEditor_SenderSignalIndex_Callback textcustomeditor__richtexteditor_sendersignalindex_callback = nullptr;
    TextCustomEditor__RichTextEditor_Receivers_Callback textcustomeditor__richtexteditor_receivers_callback = nullptr;
    TextCustomEditor__RichTextEditor_IsSignalConnected_Callback textcustomeditor__richtexteditor_issignalconnected_callback = nullptr;
    TextCustomEditor__RichTextEditor_GetDecodedMetricF_Callback textcustomeditor__richtexteditor_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__richtexteditor_metaobject_isbase = false;
    mutable bool textcustomeditor__richtexteditor_metacast_isbase = false;
    mutable bool textcustomeditor__richtexteditor_metacall_isbase = false;
    mutable bool textcustomeditor__richtexteditor_setreadonly_isbase = false;
    mutable bool textcustomeditor__richtexteditor_createhighlighter_isbase = false;
    mutable bool textcustomeditor__richtexteditor_forceautocorrection_isbase = false;
    mutable bool textcustomeditor__richtexteditor_addextramenuentry_isbase = false;
    mutable bool textcustomeditor__richtexteditor_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_focusinevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_event_isbase = false;
    mutable bool textcustomeditor__richtexteditor_keypressevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_wheelevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_createspellcheckdecorator_isbase = false;
    mutable bool textcustomeditor__richtexteditor_updatehighlighter_isbase = false;
    mutable bool textcustomeditor__richtexteditor_cleardecorator_isbase = false;
    mutable bool textcustomeditor__richtexteditor_loadresource_isbase = false;
    mutable bool textcustomeditor__richtexteditor_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__richtexteditor_timerevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_resizeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_paintevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_mousepressevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__richtexteditor_dragenterevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_dropevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_focusoutevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_showevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_changeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_createmimedatafromselection_isbase = false;
    mutable bool textcustomeditor__richtexteditor_caninsertfrommimedata_isbase = false;
    mutable bool textcustomeditor__richtexteditor_insertfrommimedata_isbase = false;
    mutable bool textcustomeditor__richtexteditor_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_scrollcontentsby_isbase = false;
    mutable bool textcustomeditor__richtexteditor_dosettextcursor_isbase = false;
    mutable bool textcustomeditor__richtexteditor_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__richtexteditor_sizehint_isbase = false;
    mutable bool textcustomeditor__richtexteditor_setupviewport_isbase = false;
    mutable bool textcustomeditor__richtexteditor_eventfilter_isbase = false;
    mutable bool textcustomeditor__richtexteditor_viewportevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_viewportsizehint_isbase = false;
    mutable bool textcustomeditor__richtexteditor_initstyleoption_isbase = false;
    mutable bool textcustomeditor__richtexteditor_devtype_isbase = false;
    mutable bool textcustomeditor__richtexteditor_setvisible_isbase = false;
    mutable bool textcustomeditor__richtexteditor_heightforwidth_isbase = false;
    mutable bool textcustomeditor__richtexteditor_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__richtexteditor_paintengine_isbase = false;
    mutable bool textcustomeditor__richtexteditor_enterevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_leaveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_moveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_closeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_tabletevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_actionevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_hideevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_nativeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_metric_isbase = false;
    mutable bool textcustomeditor__richtexteditor_initpainter_isbase = false;
    mutable bool textcustomeditor__richtexteditor_redirected_isbase = false;
    mutable bool textcustomeditor__richtexteditor_sharedpainter_isbase = false;
    mutable bool textcustomeditor__richtexteditor_childevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_customevent_isbase = false;
    mutable bool textcustomeditor__richtexteditor_connectnotify_isbase = false;
    mutable bool textcustomeditor__richtexteditor_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__richtexteditor_mousepopupmenu_isbase = false;
    mutable bool textcustomeditor__richtexteditor_sethighlighter_isbase = false;
    mutable bool textcustomeditor__richtexteditor_zoominf_isbase = false;
    mutable bool textcustomeditor__richtexteditor_setviewportmargins_isbase = false;
    mutable bool textcustomeditor__richtexteditor_viewportmargins_isbase = false;
    mutable bool textcustomeditor__richtexteditor_drawframe_isbase = false;
    mutable bool textcustomeditor__richtexteditor_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__richtexteditor_create_isbase = false;
    mutable bool textcustomeditor__richtexteditor_destroy_isbase = false;
    mutable bool textcustomeditor__richtexteditor_focusnextchild_isbase = false;
    mutable bool textcustomeditor__richtexteditor_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__richtexteditor_sender_isbase = false;
    mutable bool textcustomeditor__richtexteditor_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__richtexteditor_receivers_isbase = false;
    mutable bool textcustomeditor__richtexteditor_issignalconnected_isbase = false;
    mutable bool textcustomeditor__richtexteditor_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorRichTextEditor(QWidget* parent) : TextCustomEditor::RichTextEditor(parent) {};
    VirtualTextCustomEditorRichTextEditor() : TextCustomEditor::RichTextEditor() {};

    // Callback setters
    inline void setTextCustomEditor__RichTextEditor_MetaObject_Callback(TextCustomEditor__RichTextEditor_MetaObject_Callback cb) { textcustomeditor__richtexteditor_metaobject_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Metacast_Callback(TextCustomEditor__RichTextEditor_Metacast_Callback cb) { textcustomeditor__richtexteditor_metacast_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Metacall_Callback(TextCustomEditor__RichTextEditor_Metacall_Callback cb) { textcustomeditor__richtexteditor_metacall_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SetReadOnly_Callback(TextCustomEditor__RichTextEditor_SetReadOnly_Callback cb) { textcustomeditor__richtexteditor_setreadonly_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_CreateHighlighter_Callback(TextCustomEditor__RichTextEditor_CreateHighlighter_Callback cb) { textcustomeditor__richtexteditor_createhighlighter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback(TextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback cb) { textcustomeditor__richtexteditor_forceautocorrection_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback(TextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback cb) { textcustomeditor__richtexteditor_addextramenuentry_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ContextMenuEvent_Callback(TextCustomEditor__RichTextEditor_ContextMenuEvent_Callback cb) { textcustomeditor__richtexteditor_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_FocusInEvent_Callback(TextCustomEditor__RichTextEditor_FocusInEvent_Callback cb) { textcustomeditor__richtexteditor_focusinevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Event_Callback(TextCustomEditor__RichTextEditor_Event_Callback cb) { textcustomeditor__richtexteditor_event_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_KeyPressEvent_Callback(TextCustomEditor__RichTextEditor_KeyPressEvent_Callback cb) { textcustomeditor__richtexteditor_keypressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_WheelEvent_Callback(TextCustomEditor__RichTextEditor_WheelEvent_Callback cb) { textcustomeditor__richtexteditor_wheelevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback(TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback cb) { textcustomeditor__richtexteditor_createspellcheckdecorator_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_UpdateHighLighter_Callback(TextCustomEditor__RichTextEditor_UpdateHighLighter_Callback cb) { textcustomeditor__richtexteditor_updatehighlighter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ClearDecorator_Callback(TextCustomEditor__RichTextEditor_ClearDecorator_Callback cb) { textcustomeditor__richtexteditor_cleardecorator_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_LoadResource_Callback(TextCustomEditor__RichTextEditor_LoadResource_Callback cb) { textcustomeditor__richtexteditor_loadresource_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_InputMethodQuery_Callback(TextCustomEditor__RichTextEditor_InputMethodQuery_Callback cb) { textcustomeditor__richtexteditor_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_TimerEvent_Callback(TextCustomEditor__RichTextEditor_TimerEvent_Callback cb) { textcustomeditor__richtexteditor_timerevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback(TextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback cb) { textcustomeditor__richtexteditor_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ResizeEvent_Callback(TextCustomEditor__RichTextEditor_ResizeEvent_Callback cb) { textcustomeditor__richtexteditor_resizeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_PaintEvent_Callback(TextCustomEditor__RichTextEditor_PaintEvent_Callback cb) { textcustomeditor__richtexteditor_paintevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_MousePressEvent_Callback(TextCustomEditor__RichTextEditor_MousePressEvent_Callback cb) { textcustomeditor__richtexteditor_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_MouseMoveEvent_Callback(TextCustomEditor__RichTextEditor_MouseMoveEvent_Callback cb) { textcustomeditor__richtexteditor_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback(TextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback cb) { textcustomeditor__richtexteditor_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback(TextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback cb) { textcustomeditor__richtexteditor_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback(TextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback cb) { textcustomeditor__richtexteditor_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DragEnterEvent_Callback(TextCustomEditor__RichTextEditor_DragEnterEvent_Callback cb) { textcustomeditor__richtexteditor_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DragLeaveEvent_Callback(TextCustomEditor__RichTextEditor_DragLeaveEvent_Callback cb) { textcustomeditor__richtexteditor_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DragMoveEvent_Callback(TextCustomEditor__RichTextEditor_DragMoveEvent_Callback cb) { textcustomeditor__richtexteditor_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DropEvent_Callback(TextCustomEditor__RichTextEditor_DropEvent_Callback cb) { textcustomeditor__richtexteditor_dropevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_FocusOutEvent_Callback(TextCustomEditor__RichTextEditor_FocusOutEvent_Callback cb) { textcustomeditor__richtexteditor_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ShowEvent_Callback(TextCustomEditor__RichTextEditor_ShowEvent_Callback cb) { textcustomeditor__richtexteditor_showevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ChangeEvent_Callback(TextCustomEditor__RichTextEditor_ChangeEvent_Callback cb) { textcustomeditor__richtexteditor_changeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback(TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback cb) { textcustomeditor__richtexteditor_createmimedatafromselection_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback(TextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback cb) { textcustomeditor__richtexteditor_caninsertfrommimedata_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_InsertFromMimeData_Callback(TextCustomEditor__RichTextEditor_InsertFromMimeData_Callback cb) { textcustomeditor__richtexteditor_insertfrommimedata_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_InputMethodEvent_Callback(TextCustomEditor__RichTextEditor_InputMethodEvent_Callback cb) { textcustomeditor__richtexteditor_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ScrollContentsBy_Callback(TextCustomEditor__RichTextEditor_ScrollContentsBy_Callback cb) { textcustomeditor__richtexteditor_scrollcontentsby_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DoSetTextCursor_Callback(TextCustomEditor__RichTextEditor_DoSetTextCursor_Callback cb) { textcustomeditor__richtexteditor_dosettextcursor_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_MinimumSizeHint_Callback(TextCustomEditor__RichTextEditor_MinimumSizeHint_Callback cb) { textcustomeditor__richtexteditor_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SizeHint_Callback(TextCustomEditor__RichTextEditor_SizeHint_Callback cb) { textcustomeditor__richtexteditor_sizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SetupViewport_Callback(TextCustomEditor__RichTextEditor_SetupViewport_Callback cb) { textcustomeditor__richtexteditor_setupviewport_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_EventFilter_Callback(TextCustomEditor__RichTextEditor_EventFilter_Callback cb) { textcustomeditor__richtexteditor_eventfilter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ViewportEvent_Callback(TextCustomEditor__RichTextEditor_ViewportEvent_Callback cb) { textcustomeditor__richtexteditor_viewportevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ViewportSizeHint_Callback(TextCustomEditor__RichTextEditor_ViewportSizeHint_Callback cb) { textcustomeditor__richtexteditor_viewportsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_InitStyleOption_Callback(TextCustomEditor__RichTextEditor_InitStyleOption_Callback cb) { textcustomeditor__richtexteditor_initstyleoption_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DevType_Callback(TextCustomEditor__RichTextEditor_DevType_Callback cb) { textcustomeditor__richtexteditor_devtype_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SetVisible_Callback(TextCustomEditor__RichTextEditor_SetVisible_Callback cb) { textcustomeditor__richtexteditor_setvisible_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_HeightForWidth_Callback(TextCustomEditor__RichTextEditor_HeightForWidth_Callback cb) { textcustomeditor__richtexteditor_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_HasHeightForWidth_Callback(TextCustomEditor__RichTextEditor_HasHeightForWidth_Callback cb) { textcustomeditor__richtexteditor_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_PaintEngine_Callback(TextCustomEditor__RichTextEditor_PaintEngine_Callback cb) { textcustomeditor__richtexteditor_paintengine_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_EnterEvent_Callback(TextCustomEditor__RichTextEditor_EnterEvent_Callback cb) { textcustomeditor__richtexteditor_enterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_LeaveEvent_Callback(TextCustomEditor__RichTextEditor_LeaveEvent_Callback cb) { textcustomeditor__richtexteditor_leaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_MoveEvent_Callback(TextCustomEditor__RichTextEditor_MoveEvent_Callback cb) { textcustomeditor__richtexteditor_moveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_CloseEvent_Callback(TextCustomEditor__RichTextEditor_CloseEvent_Callback cb) { textcustomeditor__richtexteditor_closeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_TabletEvent_Callback(TextCustomEditor__RichTextEditor_TabletEvent_Callback cb) { textcustomeditor__richtexteditor_tabletevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ActionEvent_Callback(TextCustomEditor__RichTextEditor_ActionEvent_Callback cb) { textcustomeditor__richtexteditor_actionevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_HideEvent_Callback(TextCustomEditor__RichTextEditor_HideEvent_Callback cb) { textcustomeditor__richtexteditor_hideevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_NativeEvent_Callback(TextCustomEditor__RichTextEditor_NativeEvent_Callback cb) { textcustomeditor__richtexteditor_nativeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Metric_Callback(TextCustomEditor__RichTextEditor_Metric_Callback cb) { textcustomeditor__richtexteditor_metric_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_InitPainter_Callback(TextCustomEditor__RichTextEditor_InitPainter_Callback cb) { textcustomeditor__richtexteditor_initpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Redirected_Callback(TextCustomEditor__RichTextEditor_Redirected_Callback cb) { textcustomeditor__richtexteditor_redirected_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SharedPainter_Callback(TextCustomEditor__RichTextEditor_SharedPainter_Callback cb) { textcustomeditor__richtexteditor_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ChildEvent_Callback(TextCustomEditor__RichTextEditor_ChildEvent_Callback cb) { textcustomeditor__richtexteditor_childevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_CustomEvent_Callback(TextCustomEditor__RichTextEditor_CustomEvent_Callback cb) { textcustomeditor__richtexteditor_customevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ConnectNotify_Callback(TextCustomEditor__RichTextEditor_ConnectNotify_Callback cb) { textcustomeditor__richtexteditor_connectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DisconnectNotify_Callback(TextCustomEditor__RichTextEditor_DisconnectNotify_Callback cb) { textcustomeditor__richtexteditor_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_MousePopupMenu_Callback(TextCustomEditor__RichTextEditor_MousePopupMenu_Callback cb) { textcustomeditor__richtexteditor_mousepopupmenu_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SetHighlighter_Callback(TextCustomEditor__RichTextEditor_SetHighlighter_Callback cb) { textcustomeditor__richtexteditor_sethighlighter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ZoomInF_Callback(TextCustomEditor__RichTextEditor_ZoomInF_Callback cb) { textcustomeditor__richtexteditor_zoominf_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SetViewportMargins_Callback(TextCustomEditor__RichTextEditor_SetViewportMargins_Callback cb) { textcustomeditor__richtexteditor_setviewportmargins_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_ViewportMargins_Callback(TextCustomEditor__RichTextEditor_ViewportMargins_Callback cb) { textcustomeditor__richtexteditor_viewportmargins_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_DrawFrame_Callback(TextCustomEditor__RichTextEditor_DrawFrame_Callback cb) { textcustomeditor__richtexteditor_drawframe_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_UpdateMicroFocus_Callback(TextCustomEditor__RichTextEditor_UpdateMicroFocus_Callback cb) { textcustomeditor__richtexteditor_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Create_Callback(TextCustomEditor__RichTextEditor_Create_Callback cb) { textcustomeditor__richtexteditor_create_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Destroy_Callback(TextCustomEditor__RichTextEditor_Destroy_Callback cb) { textcustomeditor__richtexteditor_destroy_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_FocusNextChild_Callback(TextCustomEditor__RichTextEditor_FocusNextChild_Callback cb) { textcustomeditor__richtexteditor_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_FocusPreviousChild_Callback(TextCustomEditor__RichTextEditor_FocusPreviousChild_Callback cb) { textcustomeditor__richtexteditor_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Sender_Callback(TextCustomEditor__RichTextEditor_Sender_Callback cb) { textcustomeditor__richtexteditor_sender_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_SenderSignalIndex_Callback(TextCustomEditor__RichTextEditor_SenderSignalIndex_Callback cb) { textcustomeditor__richtexteditor_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_Receivers_Callback(TextCustomEditor__RichTextEditor_Receivers_Callback cb) { textcustomeditor__richtexteditor_receivers_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_IsSignalConnected_Callback(TextCustomEditor__RichTextEditor_IsSignalConnected_Callback cb) { textcustomeditor__richtexteditor_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__RichTextEditor_GetDecodedMetricF_Callback(TextCustomEditor__RichTextEditor_GetDecodedMetricF_Callback cb) { textcustomeditor__richtexteditor_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__RichTextEditor_MetaObject_IsBase(bool value) const { textcustomeditor__richtexteditor_metaobject_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Metacast_IsBase(bool value) const { textcustomeditor__richtexteditor_metacast_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Metacall_IsBase(bool value) const { textcustomeditor__richtexteditor_metacall_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SetReadOnly_IsBase(bool value) const { textcustomeditor__richtexteditor_setreadonly_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_CreateHighlighter_IsBase(bool value) const { textcustomeditor__richtexteditor_createhighlighter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ForceAutoCorrection_IsBase(bool value) const { textcustomeditor__richtexteditor_forceautocorrection_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_AddExtraMenuEntry_IsBase(bool value) const { textcustomeditor__richtexteditor_addextramenuentry_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_FocusInEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_focusinevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Event_IsBase(bool value) const { textcustomeditor__richtexteditor_event_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_KeyPressEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_keypressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_WheelEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_wheelevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_IsBase(bool value) const { textcustomeditor__richtexteditor_createspellcheckdecorator_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_UpdateHighLighter_IsBase(bool value) const { textcustomeditor__richtexteditor_updatehighlighter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ClearDecorator_IsBase(bool value) const { textcustomeditor__richtexteditor_cleardecorator_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_LoadResource_IsBase(bool value) const { textcustomeditor__richtexteditor_loadresource_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_InputMethodQuery_IsBase(bool value) const { textcustomeditor__richtexteditor_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_TimerEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_timerevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ResizeEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_resizeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_PaintEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_paintevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_MousePressEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__richtexteditor_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DragEnterEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DragMoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DropEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_dropevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_FocusOutEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ShowEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_showevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ChangeEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_changeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_IsBase(bool value) const { textcustomeditor__richtexteditor_createmimedatafromselection_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_CanInsertFromMimeData_IsBase(bool value) const { textcustomeditor__richtexteditor_caninsertfrommimedata_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_InsertFromMimeData_IsBase(bool value) const { textcustomeditor__richtexteditor_insertfrommimedata_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_InputMethodEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ScrollContentsBy_IsBase(bool value) const { textcustomeditor__richtexteditor_scrollcontentsby_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DoSetTextCursor_IsBase(bool value) const { textcustomeditor__richtexteditor_dosettextcursor_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__richtexteditor_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SizeHint_IsBase(bool value) const { textcustomeditor__richtexteditor_sizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SetupViewport_IsBase(bool value) const { textcustomeditor__richtexteditor_setupviewport_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_EventFilter_IsBase(bool value) const { textcustomeditor__richtexteditor_eventfilter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ViewportEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_viewportevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ViewportSizeHint_IsBase(bool value) const { textcustomeditor__richtexteditor_viewportsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_InitStyleOption_IsBase(bool value) const { textcustomeditor__richtexteditor_initstyleoption_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DevType_IsBase(bool value) const { textcustomeditor__richtexteditor_devtype_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SetVisible_IsBase(bool value) const { textcustomeditor__richtexteditor_setvisible_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_HeightForWidth_IsBase(bool value) const { textcustomeditor__richtexteditor_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__richtexteditor_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_PaintEngine_IsBase(bool value) const { textcustomeditor__richtexteditor_paintengine_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_EnterEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_enterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_LeaveEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_leaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_MoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_moveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_CloseEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_closeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_TabletEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_tabletevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ActionEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_actionevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_HideEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_hideevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_NativeEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_nativeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Metric_IsBase(bool value) const { textcustomeditor__richtexteditor_metric_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_InitPainter_IsBase(bool value) const { textcustomeditor__richtexteditor_initpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Redirected_IsBase(bool value) const { textcustomeditor__richtexteditor_redirected_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SharedPainter_IsBase(bool value) const { textcustomeditor__richtexteditor_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ChildEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_childevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_CustomEvent_IsBase(bool value) const { textcustomeditor__richtexteditor_customevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ConnectNotify_IsBase(bool value) const { textcustomeditor__richtexteditor_connectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DisconnectNotify_IsBase(bool value) const { textcustomeditor__richtexteditor_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_MousePopupMenu_IsBase(bool value) const { textcustomeditor__richtexteditor_mousepopupmenu_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SetHighlighter_IsBase(bool value) const { textcustomeditor__richtexteditor_sethighlighter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ZoomInF_IsBase(bool value) const { textcustomeditor__richtexteditor_zoominf_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SetViewportMargins_IsBase(bool value) const { textcustomeditor__richtexteditor_setviewportmargins_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_ViewportMargins_IsBase(bool value) const { textcustomeditor__richtexteditor_viewportmargins_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_DrawFrame_IsBase(bool value) const { textcustomeditor__richtexteditor_drawframe_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__richtexteditor_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Create_IsBase(bool value) const { textcustomeditor__richtexteditor_create_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Destroy_IsBase(bool value) const { textcustomeditor__richtexteditor_destroy_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_FocusNextChild_IsBase(bool value) const { textcustomeditor__richtexteditor_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__richtexteditor_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Sender_IsBase(bool value) const { textcustomeditor__richtexteditor_sender_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__richtexteditor_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_Receivers_IsBase(bool value) const { textcustomeditor__richtexteditor_receivers_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_IsSignalConnected_IsBase(bool value) const { textcustomeditor__richtexteditor_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__RichTextEditor_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__richtexteditor_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtexteditor_metaobject_isbase) {
            textcustomeditor__richtexteditor_metaobject_isbase = false;
            return TextCustomEditor__RichTextEditor::metaObject();
        }
        auto metaobject_cb = textcustomeditor__richtexteditor_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtexteditor_metacast_isbase) {
            textcustomeditor__richtexteditor_metacast_isbase = false;
            return TextCustomEditor__RichTextEditor::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__richtexteditor_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtexteditor_metacall_isbase) {
            textcustomeditor__richtexteditor_metacall_isbase = false;
            return TextCustomEditor__RichTextEditor::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__richtexteditor_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (textcustomeditor__richtexteditor_setreadonly_isbase) {
            textcustomeditor__richtexteditor_setreadonly_isbase = false;
            TextCustomEditor__RichTextEditor::setReadOnly(readOnly);
            return;
        }
        auto setreadonly_cb = textcustomeditor__richtexteditor_setreadonly_callback;
        if (setreadonly_cb) {
            bool cbval1 = readOnly;
            setreadonly_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::setReadOnly(readOnly);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (textcustomeditor__richtexteditor_createhighlighter_isbase) {
            textcustomeditor__richtexteditor_createhighlighter_isbase = false;
            TextCustomEditor__RichTextEditor::createHighlighter();
            return;
        }
        auto createhighlighter_cb = textcustomeditor__richtexteditor_createhighlighter_callback;
        if (createhighlighter_cb) {
            createhighlighter_cb();
            return;
        }
        TextCustomEditor__RichTextEditor::createHighlighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forceAutoCorrection(bool selectedText) override {
        if (textcustomeditor__richtexteditor_forceautocorrection_isbase) {
            textcustomeditor__richtexteditor_forceautocorrection_isbase = false;
            TextCustomEditor__RichTextEditor::forceAutoCorrection(selectedText);
            return;
        }
        auto forceautocorrection_cb = textcustomeditor__richtexteditor_forceautocorrection_callback;
        if (forceautocorrection_cb) {
            bool cbval1 = selectedText;
            forceautocorrection_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::forceAutoCorrection(selectedText);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraMenuEntry(QMenu* menu, QPoint pos) override {
        if (textcustomeditor__richtexteditor_addextramenuentry_isbase) {
            textcustomeditor__richtexteditor_addextramenuentry_isbase = false;
            TextCustomEditor__RichTextEditor::addExtraMenuEntry(menu, pos);
            return;
        }
        auto addextramenuentry_cb = textcustomeditor__richtexteditor_addextramenuentry_callback;
        if (addextramenuentry_cb) {
            QMenu* cbval1 = menu;
            QPoint* cbval2 = new QPoint(pos);
            addextramenuentry_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextEditor::addExtraMenuEntry(menu, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtexteditor_contextmenuevent_isbase) {
            textcustomeditor__richtexteditor_contextmenuevent_isbase = false;
            TextCustomEditor__RichTextEditor::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__richtexteditor_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;
            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditor_focusinevent_isbase) {
            textcustomeditor__richtexteditor_focusinevent_isbase = false;
            TextCustomEditor__RichTextEditor::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__richtexteditor_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;
            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (textcustomeditor__richtexteditor_event_isbase) {
            textcustomeditor__richtexteditor_event_isbase = false;
            return TextCustomEditor__RichTextEditor::event(ev);
        }
        auto event_cb = textcustomeditor__richtexteditor_event_callback;
        if (event_cb) {
            QEvent* cbval1 = ev;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::event(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditor_keypressevent_isbase) {
            textcustomeditor__richtexteditor_keypressevent_isbase = false;
            TextCustomEditor__RichTextEditor::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__richtexteditor_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textcustomeditor__richtexteditor_wheelevent_isbase) {
            textcustomeditor__richtexteditor_wheelevent_isbase = false;
            TextCustomEditor__RichTextEditor::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = textcustomeditor__richtexteditor_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;
            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Sonnet::SpellCheckDecorator* createSpellCheckDecorator() override {
        if (textcustomeditor__richtexteditor_createspellcheckdecorator_isbase) {
            textcustomeditor__richtexteditor_createspellcheckdecorator_isbase = false;
            return TextCustomEditor__RichTextEditor::createSpellCheckDecorator();
        }
        auto createspellcheckdecorator_cb = textcustomeditor__richtexteditor_createspellcheckdecorator_callback;
        if (createspellcheckdecorator_cb) {
            Sonnet__SpellCheckDecorator* callback_ret = createspellcheckdecorator_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::createSpellCheckDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateHighLighter() override {
        if (textcustomeditor__richtexteditor_updatehighlighter_isbase) {
            textcustomeditor__richtexteditor_updatehighlighter_isbase = false;
            TextCustomEditor__RichTextEditor::updateHighLighter();
            return;
        }
        auto updatehighlighter_cb = textcustomeditor__richtexteditor_updatehighlighter_callback;
        if (updatehighlighter_cb) {
            updatehighlighter_cb();
            return;
        }
        TextCustomEditor__RichTextEditor::updateHighLighter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearDecorator() override {
        if (textcustomeditor__richtexteditor_cleardecorator_isbase) {
            textcustomeditor__richtexteditor_cleardecorator_isbase = false;
            TextCustomEditor__RichTextEditor::clearDecorator();
            return;
        }
        auto cleardecorator_cb = textcustomeditor__richtexteditor_cleardecorator_callback;
        if (cleardecorator_cb) {
            cleardecorator_cb();
            return;
        }
        TextCustomEditor__RichTextEditor::clearDecorator();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (textcustomeditor__richtexteditor_loadresource_isbase) {
            textcustomeditor__richtexteditor_loadresource_isbase = false;
            return TextCustomEditor__RichTextEditor::loadResource(typeVal, name);
        }
        auto loadresource_cb = textcustomeditor__richtexteditor_loadresource_callback;
        if (loadresource_cb) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = loadresource_cb(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (textcustomeditor__richtexteditor_inputmethodquery_isbase) {
            textcustomeditor__richtexteditor_inputmethodquery_isbase = false;
            return TextCustomEditor__RichTextEditor::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = textcustomeditor__richtexteditor_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (textcustomeditor__richtexteditor_timerevent_isbase) {
            textcustomeditor__richtexteditor_timerevent_isbase = false;
            TextCustomEditor__RichTextEditor::timerEvent(e);
            return;
        }
        auto timerevent_cb = textcustomeditor__richtexteditor_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;
            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textcustomeditor__richtexteditor_keyreleaseevent_isbase) {
            textcustomeditor__richtexteditor_keyreleaseevent_isbase = false;
            TextCustomEditor__RichTextEditor::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__richtexteditor_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textcustomeditor__richtexteditor_resizeevent_isbase) {
            textcustomeditor__richtexteditor_resizeevent_isbase = false;
            TextCustomEditor__RichTextEditor::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = textcustomeditor__richtexteditor_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;
            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textcustomeditor__richtexteditor_paintevent_isbase) {
            textcustomeditor__richtexteditor_paintevent_isbase = false;
            TextCustomEditor__RichTextEditor::paintEvent(e);
            return;
        }
        auto paintevent_cb = textcustomeditor__richtexteditor_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;
            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousepressevent_isbase) {
            textcustomeditor__richtexteditor_mousepressevent_isbase = false;
            TextCustomEditor__RichTextEditor::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__richtexteditor_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;
            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousemoveevent_isbase) {
            textcustomeditor__richtexteditor_mousemoveevent_isbase = false;
            TextCustomEditor__RichTextEditor::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__richtexteditor_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousereleaseevent_isbase) {
            textcustomeditor__richtexteditor_mousereleaseevent_isbase = false;
            TextCustomEditor__RichTextEditor::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__richtexteditor_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (textcustomeditor__richtexteditor_mousedoubleclickevent_isbase) {
            textcustomeditor__richtexteditor_mousedoubleclickevent_isbase = false;
            TextCustomEditor__RichTextEditor::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__richtexteditor_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtexteditor_focusnextprevchild_isbase) {
            textcustomeditor__richtexteditor_focusnextprevchild_isbase = false;
            return TextCustomEditor__RichTextEditor::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__richtexteditor_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;
            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (textcustomeditor__richtexteditor_dragenterevent_isbase) {
            textcustomeditor__richtexteditor_dragenterevent_isbase = false;
            TextCustomEditor__RichTextEditor::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__richtexteditor_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;
            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (textcustomeditor__richtexteditor_dragleaveevent_isbase) {
            textcustomeditor__richtexteditor_dragleaveevent_isbase = false;
            TextCustomEditor__RichTextEditor::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__richtexteditor_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (textcustomeditor__richtexteditor_dragmoveevent_isbase) {
            textcustomeditor__richtexteditor_dragmoveevent_isbase = false;
            TextCustomEditor__RichTextEditor::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__richtexteditor_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (textcustomeditor__richtexteditor_dropevent_isbase) {
            textcustomeditor__richtexteditor_dropevent_isbase = false;
            TextCustomEditor__RichTextEditor::dropEvent(e);
            return;
        }
        auto dropevent_cb = textcustomeditor__richtexteditor_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;
            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textcustomeditor__richtexteditor_focusoutevent_isbase) {
            textcustomeditor__richtexteditor_focusoutevent_isbase = false;
            TextCustomEditor__RichTextEditor::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__richtexteditor_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;
            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textcustomeditor__richtexteditor_showevent_isbase) {
            textcustomeditor__richtexteditor_showevent_isbase = false;
            TextCustomEditor__RichTextEditor::showEvent(param1);
            return;
        }
        auto showevent_cb = textcustomeditor__richtexteditor_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;
            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textcustomeditor__richtexteditor_changeevent_isbase) {
            textcustomeditor__richtexteditor_changeevent_isbase = false;
            TextCustomEditor__RichTextEditor::changeEvent(e);
            return;
        }
        auto changeevent_cb = textcustomeditor__richtexteditor_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;
            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (textcustomeditor__richtexteditor_createmimedatafromselection_isbase) {
            textcustomeditor__richtexteditor_createmimedatafromselection_isbase = false;
            return TextCustomEditor__RichTextEditor::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = textcustomeditor__richtexteditor_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (textcustomeditor__richtexteditor_caninsertfrommimedata_isbase) {
            textcustomeditor__richtexteditor_caninsertfrommimedata_isbase = false;
            return TextCustomEditor__RichTextEditor::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = textcustomeditor__richtexteditor_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (textcustomeditor__richtexteditor_insertfrommimedata_isbase) {
            textcustomeditor__richtexteditor_insertfrommimedata_isbase = false;
            TextCustomEditor__RichTextEditor::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = textcustomeditor__richtexteditor_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;
            insertfrommimedata_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtexteditor_inputmethodevent_isbase) {
            textcustomeditor__richtexteditor_inputmethodevent_isbase = false;
            TextCustomEditor__RichTextEditor::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__richtexteditor_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (textcustomeditor__richtexteditor_scrollcontentsby_isbase) {
            textcustomeditor__richtexteditor_scrollcontentsby_isbase = false;
            TextCustomEditor__RichTextEditor::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = textcustomeditor__richtexteditor_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;
            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__RichTextEditor::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (textcustomeditor__richtexteditor_dosettextcursor_isbase) {
            textcustomeditor__richtexteditor_dosettextcursor_isbase = false;
            TextCustomEditor__RichTextEditor::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = textcustomeditor__richtexteditor_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);
            dosettextcursor_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtexteditor_minimumsizehint_isbase) {
            textcustomeditor__richtexteditor_minimumsizehint_isbase = false;
            return TextCustomEditor__RichTextEditor::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__richtexteditor_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtexteditor_sizehint_isbase) {
            textcustomeditor__richtexteditor_sizehint_isbase = false;
            return TextCustomEditor__RichTextEditor::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__richtexteditor_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (textcustomeditor__richtexteditor_setupviewport_isbase) {
            textcustomeditor__richtexteditor_setupviewport_isbase = false;
            TextCustomEditor__RichTextEditor::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = textcustomeditor__richtexteditor_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;
            setupviewport_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textcustomeditor__richtexteditor_eventfilter_isbase) {
            textcustomeditor__richtexteditor_eventfilter_isbase = false;
            return TextCustomEditor__RichTextEditor::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textcustomeditor__richtexteditor_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (textcustomeditor__richtexteditor_viewportevent_isbase) {
            textcustomeditor__richtexteditor_viewportevent_isbase = false;
            return TextCustomEditor__RichTextEditor::viewportEvent(param1);
        }
        auto viewportevent_cb = textcustomeditor__richtexteditor_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (textcustomeditor__richtexteditor_viewportsizehint_isbase) {
            textcustomeditor__richtexteditor_viewportsizehint_isbase = false;
            return TextCustomEditor__RichTextEditor::viewportSizeHint();
        }
        auto viewportsizehint_cb = textcustomeditor__richtexteditor_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (textcustomeditor__richtexteditor_initstyleoption_isbase) {
            textcustomeditor__richtexteditor_initstyleoption_isbase = false;
            TextCustomEditor__RichTextEditor::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = textcustomeditor__richtexteditor_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;
            initstyleoption_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtexteditor_devtype_isbase) {
            textcustomeditor__richtexteditor_devtype_isbase = false;
            return TextCustomEditor__RichTextEditor::devType();
        }
        auto devtype_cb = textcustomeditor__richtexteditor_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtexteditor_setvisible_isbase) {
            textcustomeditor__richtexteditor_setvisible_isbase = false;
            TextCustomEditor__RichTextEditor::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__richtexteditor_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;
            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtexteditor_heightforwidth_isbase) {
            textcustomeditor__richtexteditor_heightforwidth_isbase = false;
            return TextCustomEditor__RichTextEditor::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__richtexteditor_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;
            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtexteditor_hasheightforwidth_isbase) {
            textcustomeditor__richtexteditor_hasheightforwidth_isbase = false;
            return TextCustomEditor__RichTextEditor::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__richtexteditor_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtexteditor_paintengine_isbase) {
            textcustomeditor__richtexteditor_paintengine_isbase = false;
            return TextCustomEditor__RichTextEditor::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__richtexteditor_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtexteditor_enterevent_isbase) {
            textcustomeditor__richtexteditor_enterevent_isbase = false;
            TextCustomEditor__RichTextEditor::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__richtexteditor_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;
            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditor_leaveevent_isbase) {
            textcustomeditor__richtexteditor_leaveevent_isbase = false;
            TextCustomEditor__RichTextEditor::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__richtexteditor_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;
            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtexteditor_moveevent_isbase) {
            textcustomeditor__richtexteditor_moveevent_isbase = false;
            TextCustomEditor__RichTextEditor::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__richtexteditor_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;
            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtexteditor_closeevent_isbase) {
            textcustomeditor__richtexteditor_closeevent_isbase = false;
            TextCustomEditor__RichTextEditor::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__richtexteditor_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;
            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtexteditor_tabletevent_isbase) {
            textcustomeditor__richtexteditor_tabletevent_isbase = false;
            TextCustomEditor__RichTextEditor::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__richtexteditor_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;
            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtexteditor_actionevent_isbase) {
            textcustomeditor__richtexteditor_actionevent_isbase = false;
            TextCustomEditor__RichTextEditor::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__richtexteditor_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;
            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtexteditor_hideevent_isbase) {
            textcustomeditor__richtexteditor_hideevent_isbase = false;
            TextCustomEditor__RichTextEditor::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__richtexteditor_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;
            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtexteditor_nativeevent_isbase) {
            textcustomeditor__richtexteditor_nativeevent_isbase = false;
            return TextCustomEditor__RichTextEditor::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__richtexteditor_nativeevent_callback;
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
        return TextCustomEditor__RichTextEditor::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtexteditor_metric_isbase) {
            textcustomeditor__richtexteditor_metric_isbase = false;
            return TextCustomEditor__RichTextEditor::metric(param1);
        }
        auto metric_cb = textcustomeditor__richtexteditor_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtexteditor_initpainter_isbase) {
            textcustomeditor__richtexteditor_initpainter_isbase = false;
            TextCustomEditor__RichTextEditor::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__richtexteditor_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;
            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtexteditor_redirected_isbase) {
            textcustomeditor__richtexteditor_redirected_isbase = false;
            return TextCustomEditor__RichTextEditor::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__richtexteditor_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtexteditor_sharedpainter_isbase) {
            textcustomeditor__richtexteditor_sharedpainter_isbase = false;
            return TextCustomEditor__RichTextEditor::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__richtexteditor_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtexteditor_childevent_isbase) {
            textcustomeditor__richtexteditor_childevent_isbase = false;
            TextCustomEditor__RichTextEditor::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__richtexteditor_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditor_customevent_isbase) {
            textcustomeditor__richtexteditor_customevent_isbase = false;
            TextCustomEditor__RichTextEditor::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__richtexteditor_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditor_connectnotify_isbase) {
            textcustomeditor__richtexteditor_connectnotify_isbase = false;
            TextCustomEditor__RichTextEditor::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__richtexteditor_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditor_disconnectnotify_isbase) {
            textcustomeditor__richtexteditor_disconnectnotify_isbase = false;
            TextCustomEditor__RichTextEditor::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__richtexteditor_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QMenu* mousePopupMenu(QPoint pos) {
        if (textcustomeditor__richtexteditor_mousepopupmenu_isbase) {
            textcustomeditor__richtexteditor_mousepopupmenu_isbase = false;
            return TextCustomEditor__RichTextEditor::mousePopupMenu(pos);
        }
        auto mousepopupmenu_cb = textcustomeditor__richtexteditor_mousepopupmenu_callback;
        if (mousepopupmenu_cb) {
            QPoint* cbval1 = new QPoint(pos);
            QMenu* callback_ret = mousepopupmenu_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::mousePopupMenu(pos);
    }

    // Virtual method for C ABI access and custom callback
    void setHighlighter(Sonnet::Highlighter* _highLighter) {
        if (textcustomeditor__richtexteditor_sethighlighter_isbase) {
            textcustomeditor__richtexteditor_sethighlighter_isbase = false;
            TextCustomEditor__RichTextEditor::setHighlighter(_highLighter);
            return;
        }
        auto sethighlighter_cb = textcustomeditor__richtexteditor_sethighlighter_callback;
        if (sethighlighter_cb) {
            Sonnet__Highlighter* cbval1 = _highLighter;
            sethighlighter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::setHighlighter(_highLighter);
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (textcustomeditor__richtexteditor_zoominf_isbase) {
            textcustomeditor__richtexteditor_zoominf_isbase = false;
            TextCustomEditor__RichTextEditor::zoomInF(range);
            return;
        }
        auto zoominf_cb = textcustomeditor__richtexteditor_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;
            zoominf_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (textcustomeditor__richtexteditor_setviewportmargins_isbase) {
            textcustomeditor__richtexteditor_setviewportmargins_isbase = false;
            TextCustomEditor__RichTextEditor::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = textcustomeditor__richtexteditor_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;
            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        TextCustomEditor__RichTextEditor::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (textcustomeditor__richtexteditor_viewportmargins_isbase) {
            textcustomeditor__richtexteditor_viewportmargins_isbase = false;
            return TextCustomEditor__RichTextEditor::viewportMargins();
        }
        auto viewportmargins_cb = textcustomeditor__richtexteditor_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditor::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (textcustomeditor__richtexteditor_drawframe_isbase) {
            textcustomeditor__richtexteditor_drawframe_isbase = false;
            TextCustomEditor__RichTextEditor::drawFrame(param1);
            return;
        }
        auto drawframe_cb = textcustomeditor__richtexteditor_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;
            drawframe_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditor::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__richtexteditor_updatemicrofocus_isbase) {
            textcustomeditor__richtexteditor_updatemicrofocus_isbase = false;
            TextCustomEditor__RichTextEditor::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__richtexteditor_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__RichTextEditor::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__richtexteditor_create_isbase) {
            textcustomeditor__richtexteditor_create_isbase = false;
            TextCustomEditor__RichTextEditor::create();
            return;
        }
        auto create_cb = textcustomeditor__richtexteditor_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__RichTextEditor::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__richtexteditor_destroy_isbase) {
            textcustomeditor__richtexteditor_destroy_isbase = false;
            TextCustomEditor__RichTextEditor::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__richtexteditor_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__RichTextEditor::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__richtexteditor_focusnextchild_isbase) {
            textcustomeditor__richtexteditor_focusnextchild_isbase = false;
            return TextCustomEditor__RichTextEditor::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__richtexteditor_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__richtexteditor_focuspreviouschild_isbase) {
            textcustomeditor__richtexteditor_focuspreviouschild_isbase = false;
            return TextCustomEditor__RichTextEditor::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__richtexteditor_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__richtexteditor_sender_isbase) {
            textcustomeditor__richtexteditor_sender_isbase = false;
            return TextCustomEditor__RichTextEditor::sender();
        }
        auto sender_cb = textcustomeditor__richtexteditor_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__richtexteditor_sendersignalindex_isbase) {
            textcustomeditor__richtexteditor_sendersignalindex_isbase = false;
            return TextCustomEditor__RichTextEditor::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__richtexteditor_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__richtexteditor_receivers_isbase) {
            textcustomeditor__richtexteditor_receivers_isbase = false;
            return TextCustomEditor__RichTextEditor::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__richtexteditor_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__richtexteditor_issignalconnected_isbase) {
            textcustomeditor__richtexteditor_issignalconnected_isbase = false;
            return TextCustomEditor__RichTextEditor::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__richtexteditor_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditor::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__richtexteditor_getdecodedmetricf_isbase) {
            textcustomeditor__richtexteditor_getdecodedmetricf_isbase = false;
            return TextCustomEditor__RichTextEditor::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__richtexteditor_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);
            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__RichTextEditor::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextCustomEditor__RichTextEditor_AddExtraMenuEntry(TextCustomEditor::RichTextEditor* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__RichTextEditor_SuperAddExtraMenuEntry(TextCustomEditor::RichTextEditor* self, QMenu* menu, QPoint* pos);
    friend void TextCustomEditor__RichTextEditor_ContextMenuEvent(TextCustomEditor::RichTextEditor* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperContextMenuEvent(TextCustomEditor::RichTextEditor* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditor_FocusInEvent(TextCustomEditor::RichTextEditor* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperFocusInEvent(TextCustomEditor::RichTextEditor* self, QFocusEvent* event);
    friend bool TextCustomEditor__RichTextEditor_Event(TextCustomEditor::RichTextEditor* self, QEvent* ev);
    friend bool TextCustomEditor__RichTextEditor_SuperEvent(TextCustomEditor::RichTextEditor* self, QEvent* ev);
    friend void TextCustomEditor__RichTextEditor_KeyPressEvent(TextCustomEditor::RichTextEditor* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperKeyPressEvent(TextCustomEditor::RichTextEditor* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditor_WheelEvent(TextCustomEditor::RichTextEditor* self, QWheelEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperWheelEvent(TextCustomEditor::RichTextEditor* self, QWheelEvent* e);
    friend Sonnet__SpellCheckDecorator* TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator(TextCustomEditor::RichTextEditor* self);
    friend Sonnet__SpellCheckDecorator* TextCustomEditor__RichTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_UpdateHighLighter(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperUpdateHighLighter(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_ClearDecorator(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperClearDecorator(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_TimerEvent(TextCustomEditor::RichTextEditor* self, QTimerEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperTimerEvent(TextCustomEditor::RichTextEditor* self, QTimerEvent* e);
    friend void TextCustomEditor__RichTextEditor_KeyReleaseEvent(TextCustomEditor::RichTextEditor* self, QKeyEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperKeyReleaseEvent(TextCustomEditor::RichTextEditor* self, QKeyEvent* e);
    friend void TextCustomEditor__RichTextEditor_ResizeEvent(TextCustomEditor::RichTextEditor* self, QResizeEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperResizeEvent(TextCustomEditor::RichTextEditor* self, QResizeEvent* e);
    friend void TextCustomEditor__RichTextEditor_PaintEvent(TextCustomEditor::RichTextEditor* self, QPaintEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperPaintEvent(TextCustomEditor::RichTextEditor* self, QPaintEvent* e);
    friend void TextCustomEditor__RichTextEditor_MousePressEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMousePressEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_MouseMoveEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMouseMoveEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_MouseReleaseEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMouseReleaseEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_MouseDoubleClickEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextEditor* self, QMouseEvent* e);
    friend bool TextCustomEditor__RichTextEditor_FocusNextPrevChild(TextCustomEditor::RichTextEditor* self, bool next);
    friend bool TextCustomEditor__RichTextEditor_SuperFocusNextPrevChild(TextCustomEditor::RichTextEditor* self, bool next);
    friend void TextCustomEditor__RichTextEditor_DragEnterEvent(TextCustomEditor::RichTextEditor* self, QDragEnterEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperDragEnterEvent(TextCustomEditor::RichTextEditor* self, QDragEnterEvent* e);
    friend void TextCustomEditor__RichTextEditor_DragLeaveEvent(TextCustomEditor::RichTextEditor* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperDragLeaveEvent(TextCustomEditor::RichTextEditor* self, QDragLeaveEvent* e);
    friend void TextCustomEditor__RichTextEditor_DragMoveEvent(TextCustomEditor::RichTextEditor* self, QDragMoveEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperDragMoveEvent(TextCustomEditor::RichTextEditor* self, QDragMoveEvent* e);
    friend void TextCustomEditor__RichTextEditor_DropEvent(TextCustomEditor::RichTextEditor* self, QDropEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperDropEvent(TextCustomEditor::RichTextEditor* self, QDropEvent* e);
    friend void TextCustomEditor__RichTextEditor_FocusOutEvent(TextCustomEditor::RichTextEditor* self, QFocusEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperFocusOutEvent(TextCustomEditor::RichTextEditor* self, QFocusEvent* e);
    friend void TextCustomEditor__RichTextEditor_ShowEvent(TextCustomEditor::RichTextEditor* self, QShowEvent* param1);
    friend void TextCustomEditor__RichTextEditor_SuperShowEvent(TextCustomEditor::RichTextEditor* self, QShowEvent* param1);
    friend void TextCustomEditor__RichTextEditor_ChangeEvent(TextCustomEditor::RichTextEditor* self, QEvent* e);
    friend void TextCustomEditor__RichTextEditor_SuperChangeEvent(TextCustomEditor::RichTextEditor* self, QEvent* e);
    friend QMimeData* TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection(const TextCustomEditor::RichTextEditor* self);
    friend QMimeData* TextCustomEditor__RichTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor::RichTextEditor* self);
    friend bool TextCustomEditor__RichTextEditor_CanInsertFromMimeData(const TextCustomEditor::RichTextEditor* self, const QMimeData* source);
    friend bool TextCustomEditor__RichTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor::RichTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextEditor_InsertFromMimeData(TextCustomEditor::RichTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextEditor_SuperInsertFromMimeData(TextCustomEditor::RichTextEditor* self, const QMimeData* source);
    friend void TextCustomEditor__RichTextEditor_InputMethodEvent(TextCustomEditor::RichTextEditor* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextEditor_SuperInputMethodEvent(TextCustomEditor::RichTextEditor* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextEditor_ScrollContentsBy(TextCustomEditor::RichTextEditor* self, int dx, int dy);
    friend void TextCustomEditor__RichTextEditor_SuperScrollContentsBy(TextCustomEditor::RichTextEditor* self, int dx, int dy);
    friend void TextCustomEditor__RichTextEditor_DoSetTextCursor(TextCustomEditor::RichTextEditor* self, const QTextCursor* cursor);
    friend void TextCustomEditor__RichTextEditor_SuperDoSetTextCursor(TextCustomEditor::RichTextEditor* self, const QTextCursor* cursor);
    friend bool TextCustomEditor__RichTextEditor_EventFilter(TextCustomEditor::RichTextEditor* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__RichTextEditor_SuperEventFilter(TextCustomEditor::RichTextEditor* self, QObject* param1, QEvent* param2);
    friend bool TextCustomEditor__RichTextEditor_ViewportEvent(TextCustomEditor::RichTextEditor* self, QEvent* param1);
    friend bool TextCustomEditor__RichTextEditor_SuperViewportEvent(TextCustomEditor::RichTextEditor* self, QEvent* param1);
    friend QSize* TextCustomEditor__RichTextEditor_ViewportSizeHint(const TextCustomEditor::RichTextEditor* self);
    friend QSize* TextCustomEditor__RichTextEditor_SuperViewportSizeHint(const TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_InitStyleOption(const TextCustomEditor::RichTextEditor* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__RichTextEditor_SuperInitStyleOption(const TextCustomEditor::RichTextEditor* self, QStyleOptionFrame* option);
    friend void TextCustomEditor__RichTextEditor_EnterEvent(TextCustomEditor::RichTextEditor* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperEnterEvent(TextCustomEditor::RichTextEditor* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditor_LeaveEvent(TextCustomEditor::RichTextEditor* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperLeaveEvent(TextCustomEditor::RichTextEditor* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditor_MoveEvent(TextCustomEditor::RichTextEditor* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperMoveEvent(TextCustomEditor::RichTextEditor* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditor_CloseEvent(TextCustomEditor::RichTextEditor* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperCloseEvent(TextCustomEditor::RichTextEditor* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditor_TabletEvent(TextCustomEditor::RichTextEditor* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperTabletEvent(TextCustomEditor::RichTextEditor* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditor_ActionEvent(TextCustomEditor::RichTextEditor* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperActionEvent(TextCustomEditor::RichTextEditor* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditor_HideEvent(TextCustomEditor::RichTextEditor* self, QHideEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperHideEvent(TextCustomEditor::RichTextEditor* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextEditor_NativeEvent(TextCustomEditor::RichTextEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__RichTextEditor_SuperNativeEvent(TextCustomEditor::RichTextEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextCustomEditor__RichTextEditor_Metric(const TextCustomEditor::RichTextEditor* self, int param1);
    friend int TextCustomEditor__RichTextEditor_SuperMetric(const TextCustomEditor::RichTextEditor* self, int param1);
    friend void TextCustomEditor__RichTextEditor_InitPainter(const TextCustomEditor::RichTextEditor* self, QPainter* painter);
    friend void TextCustomEditor__RichTextEditor_SuperInitPainter(const TextCustomEditor::RichTextEditor* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextEditor_Redirected(const TextCustomEditor::RichTextEditor* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__RichTextEditor_SuperRedirected(const TextCustomEditor::RichTextEditor* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextEditor_SharedPainter(const TextCustomEditor::RichTextEditor* self);
    friend QPainter* TextCustomEditor__RichTextEditor_SuperSharedPainter(const TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_ChildEvent(TextCustomEditor::RichTextEditor* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperChildEvent(TextCustomEditor::RichTextEditor* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditor_CustomEvent(TextCustomEditor::RichTextEditor* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditor_SuperCustomEvent(TextCustomEditor::RichTextEditor* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditor_ConnectNotify(TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditor_SuperConnectNotify(TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditor_DisconnectNotify(TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditor_SuperDisconnectNotify(TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
    friend QMenu* TextCustomEditor__RichTextEditor_MousePopupMenu(TextCustomEditor::RichTextEditor* self, QPoint* pos);
    friend QMenu* TextCustomEditor__RichTextEditor_SuperMousePopupMenu(TextCustomEditor::RichTextEditor* self, QPoint* pos);
    friend void TextCustomEditor__RichTextEditor_SetHighlighter(TextCustomEditor::RichTextEditor* self, Sonnet__Highlighter* _highLighter);
    friend void TextCustomEditor__RichTextEditor_SuperSetHighlighter(TextCustomEditor::RichTextEditor* self, Sonnet__Highlighter* _highLighter);
    friend void TextCustomEditor__RichTextEditor_ZoomInF(TextCustomEditor::RichTextEditor* self, float range);
    friend void TextCustomEditor__RichTextEditor_SuperZoomInF(TextCustomEditor::RichTextEditor* self, float range);
    friend void TextCustomEditor__RichTextEditor_SetViewportMargins(TextCustomEditor::RichTextEditor* self, int left, int top, int right, int bottom);
    friend void TextCustomEditor__RichTextEditor_SuperSetViewportMargins(TextCustomEditor::RichTextEditor* self, int left, int top, int right, int bottom);
    friend QMargins* TextCustomEditor__RichTextEditor_ViewportMargins(const TextCustomEditor::RichTextEditor* self);
    friend QMargins* TextCustomEditor__RichTextEditor_SuperViewportMargins(const TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_DrawFrame(TextCustomEditor::RichTextEditor* self, QPainter* param1);
    friend void TextCustomEditor__RichTextEditor_SuperDrawFrame(TextCustomEditor::RichTextEditor* self, QPainter* param1);
    friend void TextCustomEditor__RichTextEditor_UpdateMicroFocus(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperUpdateMicroFocus(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_Create(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperCreate(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_Destroy(TextCustomEditor::RichTextEditor* self);
    friend void TextCustomEditor__RichTextEditor_SuperDestroy(TextCustomEditor::RichTextEditor* self);
    friend bool TextCustomEditor__RichTextEditor_FocusNextChild(TextCustomEditor::RichTextEditor* self);
    friend bool TextCustomEditor__RichTextEditor_SuperFocusNextChild(TextCustomEditor::RichTextEditor* self);
    friend bool TextCustomEditor__RichTextEditor_FocusPreviousChild(TextCustomEditor::RichTextEditor* self);
    friend bool TextCustomEditor__RichTextEditor_SuperFocusPreviousChild(TextCustomEditor::RichTextEditor* self);
    friend QObject* TextCustomEditor__RichTextEditor_Sender(const TextCustomEditor::RichTextEditor* self);
    friend QObject* TextCustomEditor__RichTextEditor_SuperSender(const TextCustomEditor::RichTextEditor* self);
    friend int TextCustomEditor__RichTextEditor_SenderSignalIndex(const TextCustomEditor::RichTextEditor* self);
    friend int TextCustomEditor__RichTextEditor_SuperSenderSignalIndex(const TextCustomEditor::RichTextEditor* self);
    friend int TextCustomEditor__RichTextEditor_Receivers(const TextCustomEditor::RichTextEditor* self, const char* signal);
    friend int TextCustomEditor__RichTextEditor_SuperReceivers(const TextCustomEditor::RichTextEditor* self, const char* signal);
    friend bool TextCustomEditor__RichTextEditor_IsSignalConnected(const TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__RichTextEditor_SuperIsSignalConnected(const TextCustomEditor::RichTextEditor* self, const QMetaMethod* signal);
    friend double TextCustomEditor__RichTextEditor_GetDecodedMetricF(const TextCustomEditor::RichTextEditor* self, int metricA, int metricB);
    friend double TextCustomEditor__RichTextEditor_SuperGetDecodedMetricF(const TextCustomEditor::RichTextEditor* self, int metricA, int metricB);
};

#endif
