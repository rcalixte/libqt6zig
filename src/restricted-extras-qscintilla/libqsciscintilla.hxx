#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISCINTILLA_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISCINTILLA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciScintilla
class VirtualQsciScintilla final : public QsciScintilla {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciScintilla_MetaObject_Callback = QMetaObject* (*)(const QsciScintilla*);
    using QsciScintilla_Metacast_Callback = void* (*)(QsciScintilla*, const char*);
    using QsciScintilla_Metacall_Callback = int (*)(QsciScintilla*, int, int, void**);
    using QsciScintilla_ApiContext_Callback = const char** (*)(QsciScintilla*, int, int*, int*);
    using QsciScintilla_FindFirst_Callback = bool (*)(QsciScintilla*, const char*, bool, bool, bool, bool, bool, int, int, bool, bool, bool);
    using QsciScintilla_FindFirstInSelection_Callback = bool (*)(QsciScintilla*, const char*, bool, bool, bool, bool, bool, bool, bool);
    using QsciScintilla_FindNext_Callback = bool (*)(QsciScintilla*);
    using QsciScintilla_Recolor_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_Replace_Callback = void (*)(QsciScintilla*, const char*);
    using QsciScintilla_Append_Callback = void (*)(QsciScintilla*, const char*);
    using QsciScintilla_AutoCompleteFromAll_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_AutoCompleteFromAPIs_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_AutoCompleteFromDocument_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_CallTip_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_Clear_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_Copy_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_Cut_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_EnsureCursorVisible_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_EnsureLineVisible_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_FoldAll_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_FoldLine_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_Indent_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_Insert_Callback = void (*)(QsciScintilla*, const char*);
    using QsciScintilla_InsertAt_Callback = void (*)(QsciScintilla*, const char*, int, int);
    using QsciScintilla_MoveToMatchingBrace_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_Paste_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_Redo_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_RemoveSelectedText_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_ReplaceSelectedText_Callback = void (*)(QsciScintilla*, const char*);
    using QsciScintilla_ResetSelectionBackgroundColor_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_ResetSelectionForegroundColor_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_SelectAll_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SelectToMatchingBrace_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_SetAutoCompletionCaseSensitivity_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetAutoCompletionReplaceWord_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetAutoCompletionShowSingle_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetAutoCompletionSource_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetAutoCompletionThreshold_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetAutoCompletionUseSingle_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetAutoIndent_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetBraceMatching_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetBackspaceUnindents_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetCaretForegroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetCaretLineBackgroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetCaretLineFrameWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetCaretLineVisible_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetCaretWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetCursorPosition_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetEolMode_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetEolVisibility_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetFolding_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetIndentation_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetIndentationGuides_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetIndentationGuidesBackgroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetIndentationGuidesForegroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetIndentationsUseTabs_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetIndentationWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetLexer_Callback = void (*)(QsciScintilla*, QsciLexer*);
    using QsciScintilla_SetMarginsBackgroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetMarginsFont_Callback = void (*)(QsciScintilla*, QFont*);
    using QsciScintilla_SetMarginsForegroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetMarginLineNumbers_Callback = void (*)(QsciScintilla*, int, bool);
    using QsciScintilla_SetMarginMarkerMask_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetMarginSensitivity_Callback = void (*)(QsciScintilla*, int, bool);
    using QsciScintilla_SetMarginWidth_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_SetMarginWidth2_Callback = void (*)(QsciScintilla*, int, const char*);
    using QsciScintilla_SetModified_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetPaper_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetReadOnly_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetSelection_Callback = void (*)(QsciScintilla*, int, int, int, int);
    using QsciScintilla_SetSelectionBackgroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetSelectionForegroundColor_Callback = void (*)(QsciScintilla*, QColor*);
    using QsciScintilla_SetTabIndents_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetTabWidth_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetText_Callback = void (*)(QsciScintilla*, const char*);
    using QsciScintilla_SetUtf8_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_SetWhitespaceVisibility_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_SetWrapMode_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_Undo_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_Unindent_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_ZoomIn_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_ZoomIn2_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_ZoomOut_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_ZoomOut2_Callback = void (*)(QsciScintilla*);
    using QsciScintilla_ZoomTo_Callback = void (*)(QsciScintilla*, int);
    using QsciScintilla_Event_Callback = bool (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ChangeEvent_Callback = void (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ContextMenuEvent_Callback = void (*)(QsciScintilla*, QContextMenuEvent*);
    using QsciScintilla_WheelEvent_Callback = void (*)(QsciScintilla*, QWheelEvent*);
    using QsciScintilla_CanInsertFromMimeData_Callback = bool (*)(const QsciScintilla*, QMimeData*);
    using QsciScintilla_FromMimeData_Callback = libqt_string (*)(const QsciScintilla*, QMimeData*, bool*);
    using QsciScintilla_ToMimeData_Callback = QMimeData* (*)(const QsciScintilla*, libqt_string, bool);
    using QsciScintilla_DragEnterEvent_Callback = void (*)(QsciScintilla*, QDragEnterEvent*);
    using QsciScintilla_DragLeaveEvent_Callback = void (*)(QsciScintilla*, QDragLeaveEvent*);
    using QsciScintilla_DragMoveEvent_Callback = void (*)(QsciScintilla*, QDragMoveEvent*);
    using QsciScintilla_DropEvent_Callback = void (*)(QsciScintilla*, QDropEvent*);
    using QsciScintilla_FocusInEvent_Callback = void (*)(QsciScintilla*, QFocusEvent*);
    using QsciScintilla_FocusOutEvent_Callback = void (*)(QsciScintilla*, QFocusEvent*);
    using QsciScintilla_FocusNextPrevChild_Callback = bool (*)(QsciScintilla*, bool);
    using QsciScintilla_KeyPressEvent_Callback = void (*)(QsciScintilla*, QKeyEvent*);
    using QsciScintilla_InputMethodEvent_Callback = void (*)(QsciScintilla*, QInputMethodEvent*);
    using QsciScintilla_InputMethodQuery_Callback = QVariant* (*)(const QsciScintilla*, int);
    using QsciScintilla_MouseDoubleClickEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_MouseMoveEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_MousePressEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_MouseReleaseEvent_Callback = void (*)(QsciScintilla*, QMouseEvent*);
    using QsciScintilla_PaintEvent_Callback = void (*)(QsciScintilla*, QPaintEvent*);
    using QsciScintilla_ResizeEvent_Callback = void (*)(QsciScintilla*, QResizeEvent*);
    using QsciScintilla_ScrollContentsBy_Callback = void (*)(QsciScintilla*, int, int);
    using QsciScintilla_MinimumSizeHint_Callback = QSize* (*)(const QsciScintilla*);
    using QsciScintilla_SizeHint_Callback = QSize* (*)(const QsciScintilla*);
    using QsciScintilla_SetupViewport_Callback = void (*)(QsciScintilla*, QWidget*);
    using QsciScintilla_EventFilter_Callback = bool (*)(QsciScintilla*, QObject*, QEvent*);
    using QsciScintilla_ViewportEvent_Callback = bool (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ViewportSizeHint_Callback = QSize* (*)(const QsciScintilla*);
    using QsciScintilla_InitStyleOption_Callback = void (*)(const QsciScintilla*, QStyleOptionFrame*);
    using QsciScintilla_DevType_Callback = int (*)(const QsciScintilla*);
    using QsciScintilla_SetVisible_Callback = void (*)(QsciScintilla*, bool);
    using QsciScintilla_HeightForWidth_Callback = int (*)(const QsciScintilla*, int);
    using QsciScintilla_HasHeightForWidth_Callback = bool (*)(const QsciScintilla*);
    using QsciScintilla_PaintEngine_Callback = QPaintEngine* (*)(const QsciScintilla*);
    using QsciScintilla_KeyReleaseEvent_Callback = void (*)(QsciScintilla*, QKeyEvent*);
    using QsciScintilla_EnterEvent_Callback = void (*)(QsciScintilla*, QEnterEvent*);
    using QsciScintilla_LeaveEvent_Callback = void (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_MoveEvent_Callback = void (*)(QsciScintilla*, QMoveEvent*);
    using QsciScintilla_CloseEvent_Callback = void (*)(QsciScintilla*, QCloseEvent*);
    using QsciScintilla_TabletEvent_Callback = void (*)(QsciScintilla*, QTabletEvent*);
    using QsciScintilla_ActionEvent_Callback = void (*)(QsciScintilla*, QActionEvent*);
    using QsciScintilla_ShowEvent_Callback = void (*)(QsciScintilla*, QShowEvent*);
    using QsciScintilla_HideEvent_Callback = void (*)(QsciScintilla*, QHideEvent*);
    using QsciScintilla_NativeEvent_Callback = bool (*)(QsciScintilla*, libqt_string, void*, intptr_t*);
    using QsciScintilla_Metric_Callback = int (*)(const QsciScintilla*, int);
    using QsciScintilla_InitPainter_Callback = void (*)(const QsciScintilla*, QPainter*);
    using QsciScintilla_Redirected_Callback = QPaintDevice* (*)(const QsciScintilla*, QPoint*);
    using QsciScintilla_SharedPainter_Callback = QPainter* (*)(const QsciScintilla*);
    using QsciScintilla_TimerEvent_Callback = void (*)(QsciScintilla*, QTimerEvent*);
    using QsciScintilla_ChildEvent_Callback = void (*)(QsciScintilla*, QChildEvent*);
    using QsciScintilla_CustomEvent_Callback = void (*)(QsciScintilla*, QEvent*);
    using QsciScintilla_ConnectNotify_Callback = void (*)(QsciScintilla*, QMetaMethod*);
    using QsciScintilla_DisconnectNotify_Callback = void (*)(QsciScintilla*, QMetaMethod*);
    using QsciScintilla::bytesAsText;
    using QsciScintilla::contextMenuNeeded;
    using QsciScintilla::create;
    using QsciScintilla::destroy;
    using QsciScintilla::drawFrame;
    using QsciScintilla::focusNextChild;
    using QsciScintilla::focusPreviousChild;
    using QsciScintilla::getDecodedMetricF;
    using QsciScintilla::isSignalConnected;
    using QsciScintilla::receivers;
    using QsciScintilla::sender;
    using QsciScintilla::senderSignalIndex;
    using QsciScintilla::setScrollBars;
    using QsciScintilla::setViewportMargins;
    using QsciScintilla::textAsBytes;
    using QsciScintilla::updateMicroFocus;
    using QsciScintilla::viewportMargins;

    // Instance callback storage
    QsciScintilla_MetaObject_Callback qsciscintilla_metaobject_callback = nullptr;
    QsciScintilla_Metacast_Callback qsciscintilla_metacast_callback = nullptr;
    QsciScintilla_Metacall_Callback qsciscintilla_metacall_callback = nullptr;
    QsciScintilla_ApiContext_Callback qsciscintilla_apicontext_callback = nullptr;
    QsciScintilla_FindFirst_Callback qsciscintilla_findfirst_callback = nullptr;
    QsciScintilla_FindFirstInSelection_Callback qsciscintilla_findfirstinselection_callback = nullptr;
    QsciScintilla_FindNext_Callback qsciscintilla_findnext_callback = nullptr;
    QsciScintilla_Recolor_Callback qsciscintilla_recolor_callback = nullptr;
    QsciScintilla_Replace_Callback qsciscintilla_replace_callback = nullptr;
    QsciScintilla_Append_Callback qsciscintilla_append_callback = nullptr;
    QsciScintilla_AutoCompleteFromAll_Callback qsciscintilla_autocompletefromall_callback = nullptr;
    QsciScintilla_AutoCompleteFromAPIs_Callback qsciscintilla_autocompletefromapis_callback = nullptr;
    QsciScintilla_AutoCompleteFromDocument_Callback qsciscintilla_autocompletefromdocument_callback = nullptr;
    QsciScintilla_CallTip_Callback qsciscintilla_calltip_callback = nullptr;
    QsciScintilla_Clear_Callback qsciscintilla_clear_callback = nullptr;
    QsciScintilla_Copy_Callback qsciscintilla_copy_callback = nullptr;
    QsciScintilla_Cut_Callback qsciscintilla_cut_callback = nullptr;
    QsciScintilla_EnsureCursorVisible_Callback qsciscintilla_ensurecursorvisible_callback = nullptr;
    QsciScintilla_EnsureLineVisible_Callback qsciscintilla_ensurelinevisible_callback = nullptr;
    QsciScintilla_FoldAll_Callback qsciscintilla_foldall_callback = nullptr;
    QsciScintilla_FoldLine_Callback qsciscintilla_foldline_callback = nullptr;
    QsciScintilla_Indent_Callback qsciscintilla_indent_callback = nullptr;
    QsciScintilla_Insert_Callback qsciscintilla_insert_callback = nullptr;
    QsciScintilla_InsertAt_Callback qsciscintilla_insertat_callback = nullptr;
    QsciScintilla_MoveToMatchingBrace_Callback qsciscintilla_movetomatchingbrace_callback = nullptr;
    QsciScintilla_Paste_Callback qsciscintilla_paste_callback = nullptr;
    QsciScintilla_Redo_Callback qsciscintilla_redo_callback = nullptr;
    QsciScintilla_RemoveSelectedText_Callback qsciscintilla_removeselectedtext_callback = nullptr;
    QsciScintilla_ReplaceSelectedText_Callback qsciscintilla_replaceselectedtext_callback = nullptr;
    QsciScintilla_ResetSelectionBackgroundColor_Callback qsciscintilla_resetselectionbackgroundcolor_callback = nullptr;
    QsciScintilla_ResetSelectionForegroundColor_Callback qsciscintilla_resetselectionforegroundcolor_callback = nullptr;
    QsciScintilla_SelectAll_Callback qsciscintilla_selectall_callback = nullptr;
    QsciScintilla_SelectToMatchingBrace_Callback qsciscintilla_selecttomatchingbrace_callback = nullptr;
    QsciScintilla_SetAutoCompletionCaseSensitivity_Callback qsciscintilla_setautocompletioncasesensitivity_callback = nullptr;
    QsciScintilla_SetAutoCompletionReplaceWord_Callback qsciscintilla_setautocompletionreplaceword_callback = nullptr;
    QsciScintilla_SetAutoCompletionShowSingle_Callback qsciscintilla_setautocompletionshowsingle_callback = nullptr;
    QsciScintilla_SetAutoCompletionSource_Callback qsciscintilla_setautocompletionsource_callback = nullptr;
    QsciScintilla_SetAutoCompletionThreshold_Callback qsciscintilla_setautocompletionthreshold_callback = nullptr;
    QsciScintilla_SetAutoCompletionUseSingle_Callback qsciscintilla_setautocompletionusesingle_callback = nullptr;
    QsciScintilla_SetAutoIndent_Callback qsciscintilla_setautoindent_callback = nullptr;
    QsciScintilla_SetBraceMatching_Callback qsciscintilla_setbracematching_callback = nullptr;
    QsciScintilla_SetBackspaceUnindents_Callback qsciscintilla_setbackspaceunindents_callback = nullptr;
    QsciScintilla_SetCaretForegroundColor_Callback qsciscintilla_setcaretforegroundcolor_callback = nullptr;
    QsciScintilla_SetCaretLineBackgroundColor_Callback qsciscintilla_setcaretlinebackgroundcolor_callback = nullptr;
    QsciScintilla_SetCaretLineFrameWidth_Callback qsciscintilla_setcaretlineframewidth_callback = nullptr;
    QsciScintilla_SetCaretLineVisible_Callback qsciscintilla_setcaretlinevisible_callback = nullptr;
    QsciScintilla_SetCaretWidth_Callback qsciscintilla_setcaretwidth_callback = nullptr;
    QsciScintilla_SetColor_Callback qsciscintilla_setcolor_callback = nullptr;
    QsciScintilla_SetCursorPosition_Callback qsciscintilla_setcursorposition_callback = nullptr;
    QsciScintilla_SetEolMode_Callback qsciscintilla_seteolmode_callback = nullptr;
    QsciScintilla_SetEolVisibility_Callback qsciscintilla_seteolvisibility_callback = nullptr;
    QsciScintilla_SetFolding_Callback qsciscintilla_setfolding_callback = nullptr;
    QsciScintilla_SetIndentation_Callback qsciscintilla_setindentation_callback = nullptr;
    QsciScintilla_SetIndentationGuides_Callback qsciscintilla_setindentationguides_callback = nullptr;
    QsciScintilla_SetIndentationGuidesBackgroundColor_Callback qsciscintilla_setindentationguidesbackgroundcolor_callback = nullptr;
    QsciScintilla_SetIndentationGuidesForegroundColor_Callback qsciscintilla_setindentationguidesforegroundcolor_callback = nullptr;
    QsciScintilla_SetIndentationsUseTabs_Callback qsciscintilla_setindentationsusetabs_callback = nullptr;
    QsciScintilla_SetIndentationWidth_Callback qsciscintilla_setindentationwidth_callback = nullptr;
    QsciScintilla_SetLexer_Callback qsciscintilla_setlexer_callback = nullptr;
    QsciScintilla_SetMarginsBackgroundColor_Callback qsciscintilla_setmarginsbackgroundcolor_callback = nullptr;
    QsciScintilla_SetMarginsFont_Callback qsciscintilla_setmarginsfont_callback = nullptr;
    QsciScintilla_SetMarginsForegroundColor_Callback qsciscintilla_setmarginsforegroundcolor_callback = nullptr;
    QsciScintilla_SetMarginLineNumbers_Callback qsciscintilla_setmarginlinenumbers_callback = nullptr;
    QsciScintilla_SetMarginMarkerMask_Callback qsciscintilla_setmarginmarkermask_callback = nullptr;
    QsciScintilla_SetMarginSensitivity_Callback qsciscintilla_setmarginsensitivity_callback = nullptr;
    QsciScintilla_SetMarginWidth_Callback qsciscintilla_setmarginwidth_callback = nullptr;
    QsciScintilla_SetMarginWidth2_Callback qsciscintilla_setmarginwidth2_callback = nullptr;
    QsciScintilla_SetModified_Callback qsciscintilla_setmodified_callback = nullptr;
    QsciScintilla_SetPaper_Callback qsciscintilla_setpaper_callback = nullptr;
    QsciScintilla_SetReadOnly_Callback qsciscintilla_setreadonly_callback = nullptr;
    QsciScintilla_SetSelection_Callback qsciscintilla_setselection_callback = nullptr;
    QsciScintilla_SetSelectionBackgroundColor_Callback qsciscintilla_setselectionbackgroundcolor_callback = nullptr;
    QsciScintilla_SetSelectionForegroundColor_Callback qsciscintilla_setselectionforegroundcolor_callback = nullptr;
    QsciScintilla_SetTabIndents_Callback qsciscintilla_settabindents_callback = nullptr;
    QsciScintilla_SetTabWidth_Callback qsciscintilla_settabwidth_callback = nullptr;
    QsciScintilla_SetText_Callback qsciscintilla_settext_callback = nullptr;
    QsciScintilla_SetUtf8_Callback qsciscintilla_setutf8_callback = nullptr;
    QsciScintilla_SetWhitespaceVisibility_Callback qsciscintilla_setwhitespacevisibility_callback = nullptr;
    QsciScintilla_SetWrapMode_Callback qsciscintilla_setwrapmode_callback = nullptr;
    QsciScintilla_Undo_Callback qsciscintilla_undo_callback = nullptr;
    QsciScintilla_Unindent_Callback qsciscintilla_unindent_callback = nullptr;
    QsciScintilla_ZoomIn_Callback qsciscintilla_zoomin_callback = nullptr;
    QsciScintilla_ZoomIn2_Callback qsciscintilla_zoomin2_callback = nullptr;
    QsciScintilla_ZoomOut_Callback qsciscintilla_zoomout_callback = nullptr;
    QsciScintilla_ZoomOut2_Callback qsciscintilla_zoomout2_callback = nullptr;
    QsciScintilla_ZoomTo_Callback qsciscintilla_zoomto_callback = nullptr;
    QsciScintilla_Event_Callback qsciscintilla_event_callback = nullptr;
    QsciScintilla_ChangeEvent_Callback qsciscintilla_changeevent_callback = nullptr;
    QsciScintilla_ContextMenuEvent_Callback qsciscintilla_contextmenuevent_callback = nullptr;
    QsciScintilla_WheelEvent_Callback qsciscintilla_wheelevent_callback = nullptr;
    QsciScintilla_CanInsertFromMimeData_Callback qsciscintilla_caninsertfrommimedata_callback = nullptr;
    QsciScintilla_FromMimeData_Callback qsciscintilla_frommimedata_callback = nullptr;
    QsciScintilla_ToMimeData_Callback qsciscintilla_tomimedata_callback = nullptr;
    QsciScintilla_DragEnterEvent_Callback qsciscintilla_dragenterevent_callback = nullptr;
    QsciScintilla_DragLeaveEvent_Callback qsciscintilla_dragleaveevent_callback = nullptr;
    QsciScintilla_DragMoveEvent_Callback qsciscintilla_dragmoveevent_callback = nullptr;
    QsciScintilla_DropEvent_Callback qsciscintilla_dropevent_callback = nullptr;
    QsciScintilla_FocusInEvent_Callback qsciscintilla_focusinevent_callback = nullptr;
    QsciScintilla_FocusOutEvent_Callback qsciscintilla_focusoutevent_callback = nullptr;
    QsciScintilla_FocusNextPrevChild_Callback qsciscintilla_focusnextprevchild_callback = nullptr;
    QsciScintilla_KeyPressEvent_Callback qsciscintilla_keypressevent_callback = nullptr;
    QsciScintilla_InputMethodEvent_Callback qsciscintilla_inputmethodevent_callback = nullptr;
    QsciScintilla_InputMethodQuery_Callback qsciscintilla_inputmethodquery_callback = nullptr;
    QsciScintilla_MouseDoubleClickEvent_Callback qsciscintilla_mousedoubleclickevent_callback = nullptr;
    QsciScintilla_MouseMoveEvent_Callback qsciscintilla_mousemoveevent_callback = nullptr;
    QsciScintilla_MousePressEvent_Callback qsciscintilla_mousepressevent_callback = nullptr;
    QsciScintilla_MouseReleaseEvent_Callback qsciscintilla_mousereleaseevent_callback = nullptr;
    QsciScintilla_PaintEvent_Callback qsciscintilla_paintevent_callback = nullptr;
    QsciScintilla_ResizeEvent_Callback qsciscintilla_resizeevent_callback = nullptr;
    QsciScintilla_ScrollContentsBy_Callback qsciscintilla_scrollcontentsby_callback = nullptr;
    QsciScintilla_MinimumSizeHint_Callback qsciscintilla_minimumsizehint_callback = nullptr;
    QsciScintilla_SizeHint_Callback qsciscintilla_sizehint_callback = nullptr;
    QsciScintilla_SetupViewport_Callback qsciscintilla_setupviewport_callback = nullptr;
    QsciScintilla_EventFilter_Callback qsciscintilla_eventfilter_callback = nullptr;
    QsciScintilla_ViewportEvent_Callback qsciscintilla_viewportevent_callback = nullptr;
    QsciScintilla_ViewportSizeHint_Callback qsciscintilla_viewportsizehint_callback = nullptr;
    QsciScintilla_InitStyleOption_Callback qsciscintilla_initstyleoption_callback = nullptr;
    QsciScintilla_DevType_Callback qsciscintilla_devtype_callback = nullptr;
    QsciScintilla_SetVisible_Callback qsciscintilla_setvisible_callback = nullptr;
    QsciScintilla_HeightForWidth_Callback qsciscintilla_heightforwidth_callback = nullptr;
    QsciScintilla_HasHeightForWidth_Callback qsciscintilla_hasheightforwidth_callback = nullptr;
    QsciScintilla_PaintEngine_Callback qsciscintilla_paintengine_callback = nullptr;
    QsciScintilla_KeyReleaseEvent_Callback qsciscintilla_keyreleaseevent_callback = nullptr;
    QsciScintilla_EnterEvent_Callback qsciscintilla_enterevent_callback = nullptr;
    QsciScintilla_LeaveEvent_Callback qsciscintilla_leaveevent_callback = nullptr;
    QsciScintilla_MoveEvent_Callback qsciscintilla_moveevent_callback = nullptr;
    QsciScintilla_CloseEvent_Callback qsciscintilla_closeevent_callback = nullptr;
    QsciScintilla_TabletEvent_Callback qsciscintilla_tabletevent_callback = nullptr;
    QsciScintilla_ActionEvent_Callback qsciscintilla_actionevent_callback = nullptr;
    QsciScintilla_ShowEvent_Callback qsciscintilla_showevent_callback = nullptr;
    QsciScintilla_HideEvent_Callback qsciscintilla_hideevent_callback = nullptr;
    QsciScintilla_NativeEvent_Callback qsciscintilla_nativeevent_callback = nullptr;
    QsciScintilla_Metric_Callback qsciscintilla_metric_callback = nullptr;
    QsciScintilla_InitPainter_Callback qsciscintilla_initpainter_callback = nullptr;
    QsciScintilla_Redirected_Callback qsciscintilla_redirected_callback = nullptr;
    QsciScintilla_SharedPainter_Callback qsciscintilla_sharedpainter_callback = nullptr;
    QsciScintilla_TimerEvent_Callback qsciscintilla_timerevent_callback = nullptr;
    QsciScintilla_ChildEvent_Callback qsciscintilla_childevent_callback = nullptr;
    QsciScintilla_CustomEvent_Callback qsciscintilla_customevent_callback = nullptr;
    QsciScintilla_ConnectNotify_Callback qsciscintilla_connectnotify_callback = nullptr;
    QsciScintilla_DisconnectNotify_Callback qsciscintilla_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciScintilla {
        using QsciScintilla::actionEvent;
        using QsciScintilla::canInsertFromMimeData;
        using QsciScintilla::changeEvent;
        using QsciScintilla::childEvent;
        using QsciScintilla::closeEvent;
        using QsciScintilla::connectNotify;
        using QsciScintilla::contextMenuEvent;
        using QsciScintilla::customEvent;
        using QsciScintilla::disconnectNotify;
        using QsciScintilla::dragEnterEvent;
        using QsciScintilla::dragLeaveEvent;
        using QsciScintilla::dragMoveEvent;
        using QsciScintilla::dropEvent;
        using QsciScintilla::enterEvent;
        using QsciScintilla::event;
        using QsciScintilla::eventFilter;
        using QsciScintilla::focusInEvent;
        using QsciScintilla::focusNextPrevChild;
        using QsciScintilla::focusOutEvent;
        using QsciScintilla::fromMimeData;
        using QsciScintilla::hideEvent;
        using QsciScintilla::initPainter;
        using QsciScintilla::initStyleOption;
        using QsciScintilla::inputMethodEvent;
        using QsciScintilla::inputMethodQuery;
        using QsciScintilla::keyPressEvent;
        using QsciScintilla::keyReleaseEvent;
        using QsciScintilla::leaveEvent;
        using QsciScintilla::metric;
        using QsciScintilla::mouseDoubleClickEvent;
        using QsciScintilla::mouseMoveEvent;
        using QsciScintilla::mousePressEvent;
        using QsciScintilla::mouseReleaseEvent;
        using QsciScintilla::moveEvent;
        using QsciScintilla::nativeEvent;
        using QsciScintilla::paintEvent;
        using QsciScintilla::redirected;
        using QsciScintilla::resizeEvent;
        using QsciScintilla::scrollContentsBy;
        using QsciScintilla::sharedPainter;
        using QsciScintilla::showEvent;
        using QsciScintilla::tabletEvent;
        using QsciScintilla::timerEvent;
        using QsciScintilla::toMimeData;
        using QsciScintilla::viewportEvent;
        using QsciScintilla::viewportSizeHint;
        using QsciScintilla::wheelEvent;
    };

    VirtualQsciScintilla(QWidget* parent) : QsciScintilla(parent) {};
    VirtualQsciScintilla() : QsciScintilla() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsciscintilla_metaobject_callback) {
            QMetaObject* callback_ret = qsciscintilla_metaobject_callback(this);
            return callback_ret;
        }
        return QsciScintilla::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsciscintilla_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsciscintilla_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintilla::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciscintilla_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsciscintilla_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciScintilla::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> apiContext(int pos, int& context_start, int& last_word_start) override {
        if (qsciscintilla_apicontext_callback) {
            int cbval1 = pos;
            int* cbval2 = &context_start;
            int* cbval3 = &last_word_start;
            const char** callback_ret = qsciscintilla_apicontext_callback(this, cbval1, cbval2, cbval3);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return QsciScintilla::apiContext(pos, context_start, last_word_start);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool findFirst(const QString& expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) override {
        if (qsciscintilla_findfirst_callback) {
            const auto expr_ret = expr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray expr_b = expr_ret.toUtf8();
            auto expr_str_len = expr_b.length();
            const char* expr_str = static_cast<const char*>(malloc(expr_str_len + 1));
            memcpy((void*)expr_str, expr_b.data(), expr_str_len);
            ((char*)expr_str)[expr_str_len] = '\0';
            const char* cbval1 = expr_str;
            bool cbval2 = re;
            bool cbval3 = cs;
            bool cbval4 = wo;
            bool cbval5 = wrap;
            bool cbval6 = forward;
            int cbval7 = line;
            int cbval8 = index;
            bool cbval9 = show;
            bool cbval10 = posix;
            bool cbval11 = cxx11;
            bool callback_ret = qsciscintilla_findfirst_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8, cbval9, cbval10, cbval11);
            libqt_free(expr_str);
            return callback_ret;
        }
        return QsciScintilla::findFirst(expr, re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool findFirstInSelection(const QString& expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) override {
        if (qsciscintilla_findfirstinselection_callback) {
            const auto expr_ret = expr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray expr_b = expr_ret.toUtf8();
            auto expr_str_len = expr_b.length();
            const char* expr_str = static_cast<const char*>(malloc(expr_str_len + 1));
            memcpy((void*)expr_str, expr_b.data(), expr_str_len);
            ((char*)expr_str)[expr_str_len] = '\0';
            const char* cbval1 = expr_str;
            bool cbval2 = re;
            bool cbval3 = cs;
            bool cbval4 = wo;
            bool cbval5 = forward;
            bool cbval6 = show;
            bool cbval7 = posix;
            bool cbval8 = cxx11;
            bool callback_ret = qsciscintilla_findfirstinselection_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8);
            libqt_free(expr_str);
            return callback_ret;
        }
        return QsciScintilla::findFirstInSelection(expr, re, cs, wo, forward, show, posix, cxx11);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool findNext() override {
        if (qsciscintilla_findnext_callback) {
            bool callback_ret = qsciscintilla_findnext_callback(this);
            return callback_ret;
        }
        return QsciScintilla::findNext();
    }

    // Virtual method for C ABI access and custom callback
    virtual void recolor(int start, int end) override {
        if (qsciscintilla_recolor_callback) {
            int cbval1 = start;
            int cbval2 = end;
            qsciscintilla_recolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::recolor(start, end);
    }

    // Virtual method for C ABI access and custom callback
    virtual void replace(const QString& replaceStr) override {
        if (qsciscintilla_replace_callback) {
            const auto replaceStr_ret = replaceStr;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray replaceStr_b = replaceStr_ret.toUtf8();
            auto replaceStr_str_len = replaceStr_b.length();
            const char* replaceStr_str = static_cast<const char*>(malloc(replaceStr_str_len + 1));
            memcpy((void*)replaceStr_str, replaceStr_b.data(), replaceStr_str_len);
            ((char*)replaceStr_str)[replaceStr_str_len] = '\0';
            const char* cbval1 = replaceStr_str;
            qsciscintilla_replace_callback(this, cbval1);
            libqt_free(replaceStr_str);
            return;
        }
        QsciScintilla::replace(replaceStr);
    }

    // Virtual method for C ABI access and custom callback
    virtual void append(const QString& text) override {
        if (qsciscintilla_append_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qsciscintilla_append_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QsciScintilla::append(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompleteFromAll() override {
        if (qsciscintilla_autocompletefromall_callback) {
            qsciscintilla_autocompletefromall_callback(this);
            return;
        }
        QsciScintilla::autoCompleteFromAll();
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompleteFromAPIs() override {
        if (qsciscintilla_autocompletefromapis_callback) {
            qsciscintilla_autocompletefromapis_callback(this);
            return;
        }
        QsciScintilla::autoCompleteFromAPIs();
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompleteFromDocument() override {
        if (qsciscintilla_autocompletefromdocument_callback) {
            qsciscintilla_autocompletefromdocument_callback(this);
            return;
        }
        QsciScintilla::autoCompleteFromDocument();
    }

    // Virtual method for C ABI access and custom callback
    virtual void callTip() override {
        if (qsciscintilla_calltip_callback) {
            qsciscintilla_calltip_callback(this);
            return;
        }
        QsciScintilla::callTip();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qsciscintilla_clear_callback) {
            qsciscintilla_clear_callback(this);
            return;
        }
        QsciScintilla::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void copy() override {
        if (qsciscintilla_copy_callback) {
            qsciscintilla_copy_callback(this);
            return;
        }
        QsciScintilla::copy();
    }

    // Virtual method for C ABI access and custom callback
    virtual void cut() override {
        if (qsciscintilla_cut_callback) {
            qsciscintilla_cut_callback(this);
            return;
        }
        QsciScintilla::cut();
    }

    // Virtual method for C ABI access and custom callback
    virtual void ensureCursorVisible() override {
        if (qsciscintilla_ensurecursorvisible_callback) {
            qsciscintilla_ensurecursorvisible_callback(this);
            return;
        }
        QsciScintilla::ensureCursorVisible();
    }

    // Virtual method for C ABI access and custom callback
    virtual void ensureLineVisible(int line) override {
        if (qsciscintilla_ensurelinevisible_callback) {
            int cbval1 = line;
            qsciscintilla_ensurelinevisible_callback(this, cbval1);
            return;
        }
        QsciScintilla::ensureLineVisible(line);
    }

    // Virtual method for C ABI access and custom callback
    virtual void foldAll(bool children) override {
        if (qsciscintilla_foldall_callback) {
            bool cbval1 = children;
            qsciscintilla_foldall_callback(this, cbval1);
            return;
        }
        QsciScintilla::foldAll(children);
    }

    // Virtual method for C ABI access and custom callback
    virtual void foldLine(int line) override {
        if (qsciscintilla_foldline_callback) {
            int cbval1 = line;
            qsciscintilla_foldline_callback(this, cbval1);
            return;
        }
        QsciScintilla::foldLine(line);
    }

    // Virtual method for C ABI access and custom callback
    virtual void indent(int line) override {
        if (qsciscintilla_indent_callback) {
            int cbval1 = line;
            qsciscintilla_indent_callback(this, cbval1);
            return;
        }
        QsciScintilla::indent(line);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insert(const QString& text) override {
        if (qsciscintilla_insert_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qsciscintilla_insert_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QsciScintilla::insert(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAt(const QString& text, int line, int index) override {
        if (qsciscintilla_insertat_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            int cbval2 = line;
            int cbval3 = index;
            qsciscintilla_insertat_callback(this, cbval1, cbval2, cbval3);
            libqt_free(text_str);
            return;
        }
        QsciScintilla::insertAt(text, line, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveToMatchingBrace() override {
        if (qsciscintilla_movetomatchingbrace_callback) {
            qsciscintilla_movetomatchingbrace_callback(this);
            return;
        }
        QsciScintilla::moveToMatchingBrace();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paste() override {
        if (qsciscintilla_paste_callback) {
            qsciscintilla_paste_callback(this);
            return;
        }
        QsciScintilla::paste();
    }

    // Virtual method for C ABI access and custom callback
    virtual void redo() override {
        if (qsciscintilla_redo_callback) {
            qsciscintilla_redo_callback(this);
            return;
        }
        QsciScintilla::redo();
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeSelectedText() override {
        if (qsciscintilla_removeselectedtext_callback) {
            qsciscintilla_removeselectedtext_callback(this);
            return;
        }
        QsciScintilla::removeSelectedText();
    }

    // Virtual method for C ABI access and custom callback
    virtual void replaceSelectedText(const QString& text) override {
        if (qsciscintilla_replaceselectedtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qsciscintilla_replaceselectedtext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QsciScintilla::replaceSelectedText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetSelectionBackgroundColor() override {
        if (qsciscintilla_resetselectionbackgroundcolor_callback) {
            qsciscintilla_resetselectionbackgroundcolor_callback(this);
            return;
        }
        QsciScintilla::resetSelectionBackgroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetSelectionForegroundColor() override {
        if (qsciscintilla_resetselectionforegroundcolor_callback) {
            qsciscintilla_resetselectionforegroundcolor_callback(this);
            return;
        }
        QsciScintilla::resetSelectionForegroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll(bool select) override {
        if (qsciscintilla_selectall_callback) {
            bool cbval1 = select;
            qsciscintilla_selectall_callback(this, cbval1);
            return;
        }
        QsciScintilla::selectAll(select);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectToMatchingBrace() override {
        if (qsciscintilla_selecttomatchingbrace_callback) {
            qsciscintilla_selecttomatchingbrace_callback(this);
            return;
        }
        QsciScintilla::selectToMatchingBrace();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionCaseSensitivity(bool cs) override {
        if (qsciscintilla_setautocompletioncasesensitivity_callback) {
            bool cbval1 = cs;
            qsciscintilla_setautocompletioncasesensitivity_callback(this, cbval1);
            return;
        }
        QsciScintilla::setAutoCompletionCaseSensitivity(cs);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionReplaceWord(bool replace) override {
        if (qsciscintilla_setautocompletionreplaceword_callback) {
            bool cbval1 = replace;
            qsciscintilla_setautocompletionreplaceword_callback(this, cbval1);
            return;
        }
        QsciScintilla::setAutoCompletionReplaceWord(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionShowSingle(bool single) override {
        if (qsciscintilla_setautocompletionshowsingle_callback) {
            bool cbval1 = single;
            qsciscintilla_setautocompletionshowsingle_callback(this, cbval1);
            return;
        }
        QsciScintilla::setAutoCompletionShowSingle(single);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionSource(QsciScintilla::AutoCompletionSource source) override {
        if (qsciscintilla_setautocompletionsource_callback) {
            int cbval1 = static_cast<int>(source);
            qsciscintilla_setautocompletionsource_callback(this, cbval1);
            return;
        }
        QsciScintilla::setAutoCompletionSource(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionThreshold(int thresh) override {
        if (qsciscintilla_setautocompletionthreshold_callback) {
            int cbval1 = thresh;
            qsciscintilla_setautocompletionthreshold_callback(this, cbval1);
            return;
        }
        QsciScintilla::setAutoCompletionThreshold(thresh);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletionUseSingle(QsciScintilla::AutoCompletionUseSingle single) override {
        if (qsciscintilla_setautocompletionusesingle_callback) {
            int cbval1 = static_cast<int>(single);
            qsciscintilla_setautocompletionusesingle_callback(this, cbval1);
            return;
        }
        QsciScintilla::setAutoCompletionUseSingle(single);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndent(bool autoindent) override {
        if (qsciscintilla_setautoindent_callback) {
            bool cbval1 = autoindent;
            qsciscintilla_setautoindent_callback(this, cbval1);
            return;
        }
        QsciScintilla::setAutoIndent(autoindent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBraceMatching(QsciScintilla::BraceMatch bm) override {
        if (qsciscintilla_setbracematching_callback) {
            int cbval1 = static_cast<int>(bm);
            qsciscintilla_setbracematching_callback(this, cbval1);
            return;
        }
        QsciScintilla::setBraceMatching(bm);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBackspaceUnindents(bool unindent) override {
        if (qsciscintilla_setbackspaceunindents_callback) {
            bool cbval1 = unindent;
            qsciscintilla_setbackspaceunindents_callback(this, cbval1);
            return;
        }
        QsciScintilla::setBackspaceUnindents(unindent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretForegroundColor(const QColor& col) override {
        if (qsciscintilla_setcaretforegroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setcaretforegroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setCaretForegroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretLineBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setcaretlinebackgroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setcaretlinebackgroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setCaretLineBackgroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretLineFrameWidth(int width) override {
        if (qsciscintilla_setcaretlineframewidth_callback) {
            int cbval1 = width;
            qsciscintilla_setcaretlineframewidth_callback(this, cbval1);
            return;
        }
        QsciScintilla::setCaretLineFrameWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretLineVisible(bool enable) override {
        if (qsciscintilla_setcaretlinevisible_callback) {
            bool cbval1 = enable;
            qsciscintilla_setcaretlinevisible_callback(this, cbval1);
            return;
        }
        QsciScintilla::setCaretLineVisible(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaretWidth(int width) override {
        if (qsciscintilla_setcaretwidth_callback) {
            int cbval1 = width;
            qsciscintilla_setcaretwidth_callback(this, cbval1);
            return;
        }
        QsciScintilla::setCaretWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c) override {
        if (qsciscintilla_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            qsciscintilla_setcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setColor(c);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCursorPosition(int line, int index) override {
        if (qsciscintilla_setcursorposition_callback) {
            int cbval1 = line;
            int cbval2 = index;
            qsciscintilla_setcursorposition_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::setCursorPosition(line, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolMode(QsciScintilla::EolMode mode) override {
        if (qsciscintilla_seteolmode_callback) {
            int cbval1 = static_cast<int>(mode);
            qsciscintilla_seteolmode_callback(this, cbval1);
            return;
        }
        QsciScintilla::setEolMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolVisibility(bool visible) override {
        if (qsciscintilla_seteolvisibility_callback) {
            bool cbval1 = visible;
            qsciscintilla_seteolvisibility_callback(this, cbval1);
            return;
        }
        QsciScintilla::setEolVisibility(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFolding(QsciScintilla::FoldStyle fold, int margin) override {
        if (qsciscintilla_setfolding_callback) {
            int cbval1 = static_cast<int>(fold);
            int cbval2 = margin;
            qsciscintilla_setfolding_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::setFolding(fold, margin);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentation(int line, int indentation) override {
        if (qsciscintilla_setindentation_callback) {
            int cbval1 = line;
            int cbval2 = indentation;
            qsciscintilla_setindentation_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::setIndentation(line, indentation);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationGuides(bool enable) override {
        if (qsciscintilla_setindentationguides_callback) {
            bool cbval1 = enable;
            qsciscintilla_setindentationguides_callback(this, cbval1);
            return;
        }
        QsciScintilla::setIndentationGuides(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationGuidesBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setindentationguidesbackgroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setindentationguidesbackgroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setIndentationGuidesBackgroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationGuidesForegroundColor(const QColor& col) override {
        if (qsciscintilla_setindentationguidesforegroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setindentationguidesforegroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setIndentationGuidesForegroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationsUseTabs(bool tabs) override {
        if (qsciscintilla_setindentationsusetabs_callback) {
            bool cbval1 = tabs;
            qsciscintilla_setindentationsusetabs_callback(this, cbval1);
            return;
        }
        QsciScintilla::setIndentationsUseTabs(tabs);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationWidth(int width) override {
        if (qsciscintilla_setindentationwidth_callback) {
            int cbval1 = width;
            qsciscintilla_setindentationwidth_callback(this, cbval1);
            return;
        }
        QsciScintilla::setIndentationWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLexer(QsciLexer* lexer) override {
        if (qsciscintilla_setlexer_callback) {
            QsciLexer* cbval1 = lexer;
            qsciscintilla_setlexer_callback(this, cbval1);
            return;
        }
        QsciScintilla::setLexer(lexer);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginsBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setmarginsbackgroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setmarginsbackgroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setMarginsBackgroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginsFont(const QFont& f) override {
        if (qsciscintilla_setmarginsfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            qsciscintilla_setmarginsfont_callback(this, cbval1);
            return;
        }
        QsciScintilla::setMarginsFont(f);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginsForegroundColor(const QColor& col) override {
        if (qsciscintilla_setmarginsforegroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setmarginsforegroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setMarginsForegroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginLineNumbers(int margin, bool lnrs) override {
        if (qsciscintilla_setmarginlinenumbers_callback) {
            int cbval1 = margin;
            bool cbval2 = lnrs;
            qsciscintilla_setmarginlinenumbers_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::setMarginLineNumbers(margin, lnrs);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginMarkerMask(int margin, int mask) override {
        if (qsciscintilla_setmarginmarkermask_callback) {
            int cbval1 = margin;
            int cbval2 = mask;
            qsciscintilla_setmarginmarkermask_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::setMarginMarkerMask(margin, mask);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginSensitivity(int margin, bool sens) override {
        if (qsciscintilla_setmarginsensitivity_callback) {
            int cbval1 = margin;
            bool cbval2 = sens;
            qsciscintilla_setmarginsensitivity_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::setMarginSensitivity(margin, sens);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginWidth(int margin, int width) override {
        if (qsciscintilla_setmarginwidth_callback) {
            int cbval1 = margin;
            int cbval2 = width;
            qsciscintilla_setmarginwidth_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::setMarginWidth(margin, width);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMarginWidth(int margin, const QString& s) override {
        if (qsciscintilla_setmarginwidth2_callback) {
            int cbval1 = margin;
            const auto s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            auto s_str_len = s_b.length();
            const char* s_str = static_cast<const char*>(malloc(s_str_len + 1));
            memcpy((void*)s_str, s_b.data(), s_str_len);
            ((char*)s_str)[s_str_len] = '\0';
            const char* cbval2 = s_str;
            qsciscintilla_setmarginwidth2_callback(this, cbval1, cbval2);
            libqt_free(s_str);
            return;
        }
        QsciScintilla::setMarginWidth(margin, s);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModified(bool m) override {
        if (qsciscintilla_setmodified_callback) {
            bool cbval1 = m;
            qsciscintilla_setmodified_callback(this, cbval1);
            return;
        }
        QsciScintilla::setModified(m);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c) override {
        if (qsciscintilla_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            qsciscintilla_setpaper_callback(this, cbval1);
            return;
        }
        QsciScintilla::setPaper(c);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool ro) override {
        if (qsciscintilla_setreadonly_callback) {
            bool cbval1 = ro;
            qsciscintilla_setreadonly_callback(this, cbval1);
            return;
        }
        QsciScintilla::setReadOnly(ro);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(int lineFrom, int indexFrom, int lineTo, int indexTo) override {
        if (qsciscintilla_setselection_callback) {
            int cbval1 = lineFrom;
            int cbval2 = indexFrom;
            int cbval3 = lineTo;
            int cbval4 = indexTo;
            qsciscintilla_setselection_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QsciScintilla::setSelection(lineFrom, indexFrom, lineTo, indexTo);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionBackgroundColor(const QColor& col) override {
        if (qsciscintilla_setselectionbackgroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setselectionbackgroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setSelectionBackgroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionForegroundColor(const QColor& col) override {
        if (qsciscintilla_setselectionforegroundcolor_callback) {
            const QColor& col_ret = col;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&col_ret);
            qsciscintilla_setselectionforegroundcolor_callback(this, cbval1);
            return;
        }
        QsciScintilla::setSelectionForegroundColor(col);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTabIndents(bool indent) override {
        if (qsciscintilla_settabindents_callback) {
            bool cbval1 = indent;
            qsciscintilla_settabindents_callback(this, cbval1);
            return;
        }
        QsciScintilla::setTabIndents(indent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTabWidth(int width) override {
        if (qsciscintilla_settabwidth_callback) {
            int cbval1 = width;
            qsciscintilla_settabwidth_callback(this, cbval1);
            return;
        }
        QsciScintilla::setTabWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(const QString& text) override {
        if (qsciscintilla_settext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qsciscintilla_settext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QsciScintilla::setText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUtf8(bool cp) override {
        if (qsciscintilla_setutf8_callback) {
            bool cbval1 = cp;
            qsciscintilla_setutf8_callback(this, cbval1);
            return;
        }
        QsciScintilla::setUtf8(cp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWhitespaceVisibility(QsciScintilla::WhitespaceVisibility mode) override {
        if (qsciscintilla_setwhitespacevisibility_callback) {
            int cbval1 = static_cast<int>(mode);
            qsciscintilla_setwhitespacevisibility_callback(this, cbval1);
            return;
        }
        QsciScintilla::setWhitespaceVisibility(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWrapMode(QsciScintilla::WrapMode mode) override {
        if (qsciscintilla_setwrapmode_callback) {
            int cbval1 = static_cast<int>(mode);
            qsciscintilla_setwrapmode_callback(this, cbval1);
            return;
        }
        QsciScintilla::setWrapMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void undo() override {
        if (qsciscintilla_undo_callback) {
            qsciscintilla_undo_callback(this);
            return;
        }
        QsciScintilla::undo();
    }

    // Virtual method for C ABI access and custom callback
    virtual void unindent(int line) override {
        if (qsciscintilla_unindent_callback) {
            int cbval1 = line;
            qsciscintilla_unindent_callback(this, cbval1);
            return;
        }
        QsciScintilla::unindent(line);
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomIn(int range) override {
        if (qsciscintilla_zoomin_callback) {
            int cbval1 = range;
            qsciscintilla_zoomin_callback(this, cbval1);
            return;
        }
        QsciScintilla::zoomIn(range);
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomIn() override {
        if (qsciscintilla_zoomin2_callback) {
            qsciscintilla_zoomin2_callback(this);
            return;
        }
        QsciScintilla::zoomIn();
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomOut(int range) override {
        if (qsciscintilla_zoomout_callback) {
            int cbval1 = range;
            qsciscintilla_zoomout_callback(this, cbval1);
            return;
        }
        QsciScintilla::zoomOut(range);
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomOut() override {
        if (qsciscintilla_zoomout2_callback) {
            qsciscintilla_zoomout2_callback(this);
            return;
        }
        QsciScintilla::zoomOut();
    }

    // Virtual method for C ABI access and custom callback
    virtual void zoomTo(int size) override {
        if (qsciscintilla_zoomto_callback) {
            int cbval1 = size;
            qsciscintilla_zoomto_callback(this, cbval1);
            return;
        }
        QsciScintilla::zoomTo(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsciscintilla_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qsciscintilla_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintilla::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qsciscintilla_changeevent_callback) {
            QEvent* cbval1 = e;
            qsciscintilla_changeevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qsciscintilla_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = e;
            qsciscintilla_contextmenuevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qsciscintilla_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qsciscintilla_wheelevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qsciscintilla_caninsertfrommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool callback_ret = qsciscintilla_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintilla::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
        if (qsciscintilla_frommimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)source;
            bool* cbval2 = &rectangular;
            libqt_string callback_ret = qsciscintilla_frommimedata_callback(this, cbval1, cbval2);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return QsciScintilla::fromMimeData(source, rectangular);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
        if (qsciscintilla_tomimedata_callback) {
            const QByteArray text_qb = text;
            libqt_string text_str;
            text_str.len = text_qb.length();
            text_str.data = static_cast<char*>(malloc(text_str.len));
            memcpy((void*)text_str.data, text_qb.data(), text_str.len);
            libqt_string cbval1 = text_str;
            bool cbval2 = rectangular;
            QMimeData* callback_ret = qsciscintilla_tomimedata_callback(this, cbval1, cbval2);
            libqt_free(text_str.data);
            return callback_ret;
        }
        return QsciScintilla::toMimeData(text, rectangular);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qsciscintilla_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = e;
            qsciscintilla_dragenterevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qsciscintilla_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = e;
            qsciscintilla_dragleaveevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qsciscintilla_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = e;
            qsciscintilla_dragmoveevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qsciscintilla_dropevent_callback) {
            QDropEvent* cbval1 = e;
            qsciscintilla_dropevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qsciscintilla_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qsciscintilla_focusinevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qsciscintilla_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qsciscintilla_focusoutevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsciscintilla_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qsciscintilla_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintilla::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qsciscintilla_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qsciscintilla_keypressevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qsciscintilla_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qsciscintilla_inputmethodevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qsciscintilla_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qsciscintilla_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintilla::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintilla_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintilla_mousemoveevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintilla_mousepressevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qsciscintilla_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qsciscintilla_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qsciscintilla_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qsciscintilla_paintevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qsciscintilla_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qsciscintilla_resizeevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qsciscintilla_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qsciscintilla_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QsciScintilla::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsciscintilla_minimumsizehint_callback) {
            QSize* callback_ret = qsciscintilla_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintilla::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsciscintilla_sizehint_callback) {
            QSize* callback_ret = qsciscintilla_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintilla::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qsciscintilla_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qsciscintilla_setupviewport_callback(this, cbval1);
            return;
        }
        QsciScintilla::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qsciscintilla_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qsciscintilla_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciScintilla::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qsciscintilla_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qsciscintilla_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintilla::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qsciscintilla_viewportsizehint_callback) {
            QSize* callback_ret = qsciscintilla_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciScintilla::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qsciscintilla_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qsciscintilla_initstyleoption_callback(this, cbval1);
            return;
        }
        QsciScintilla::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsciscintilla_devtype_callback) {
            int callback_ret = qsciscintilla_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciScintilla::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsciscintilla_setvisible_callback) {
            bool cbval1 = visible;
            qsciscintilla_setvisible_callback(this, cbval1);
            return;
        }
        QsciScintilla::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsciscintilla_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qsciscintilla_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciScintilla::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsciscintilla_hasheightforwidth_callback) {
            bool callback_ret = qsciscintilla_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QsciScintilla::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsciscintilla_paintengine_callback) {
            QPaintEngine* callback_ret = qsciscintilla_paintengine_callback(this);
            return callback_ret;
        }
        return QsciScintilla::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsciscintilla_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qsciscintilla_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsciscintilla_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qsciscintilla_enterevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsciscintilla_leaveevent_callback) {
            QEvent* cbval1 = event;
            qsciscintilla_leaveevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsciscintilla_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qsciscintilla_moveevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsciscintilla_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qsciscintilla_closeevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsciscintilla_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qsciscintilla_tabletevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsciscintilla_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qsciscintilla_actionevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsciscintilla_showevent_callback) {
            QShowEvent* cbval1 = event;
            qsciscintilla_showevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsciscintilla_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qsciscintilla_hideevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsciscintilla_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qsciscintilla_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QsciScintilla::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsciscintilla_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsciscintilla_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciScintilla::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsciscintilla_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsciscintilla_initpainter_callback(this, cbval1);
            return;
        }
        QsciScintilla::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsciscintilla_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsciscintilla_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QsciScintilla::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsciscintilla_sharedpainter_callback) {
            QPainter* callback_ret = qsciscintilla_sharedpainter_callback(this);
            return callback_ret;
        }
        return QsciScintilla::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciscintilla_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsciscintilla_timerevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciscintilla_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsciscintilla_childevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciscintilla_customevent_callback) {
            QEvent* cbval1 = event;
            qsciscintilla_customevent_callback(this, cbval1);
            return;
        }
        QsciScintilla::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciscintilla_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciscintilla_connectnotify_callback(this, cbval1);
            return;
        }
        QsciScintilla::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciscintilla_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciscintilla_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciScintilla::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciScintilla_SuperEvent(QsciScintilla* self, QEvent* e);
    friend void QsciScintilla_SuperChangeEvent(QsciScintilla* self, QEvent* e);
    friend void QsciScintilla_SuperContextMenuEvent(QsciScintilla* self, QContextMenuEvent* e);
    friend void QsciScintilla_SuperWheelEvent(QsciScintilla* self, QWheelEvent* e);
    friend bool QsciScintilla_SuperCanInsertFromMimeData(const QsciScintilla* self, const QMimeData* source);
    friend libqt_string QsciScintilla_SuperFromMimeData(const QsciScintilla* self, const QMimeData* source, bool* rectangular);
    friend QMimeData* QsciScintilla_SuperToMimeData(const QsciScintilla* self, const libqt_string text, bool rectangular);
    friend void QsciScintilla_SuperDragEnterEvent(QsciScintilla* self, QDragEnterEvent* e);
    friend void QsciScintilla_SuperDragLeaveEvent(QsciScintilla* self, QDragLeaveEvent* e);
    friend void QsciScintilla_SuperDragMoveEvent(QsciScintilla* self, QDragMoveEvent* e);
    friend void QsciScintilla_SuperDropEvent(QsciScintilla* self, QDropEvent* e);
    friend void QsciScintilla_SuperFocusInEvent(QsciScintilla* self, QFocusEvent* e);
    friend void QsciScintilla_SuperFocusOutEvent(QsciScintilla* self, QFocusEvent* e);
    friend bool QsciScintilla_SuperFocusNextPrevChild(QsciScintilla* self, bool next);
    friend void QsciScintilla_SuperKeyPressEvent(QsciScintilla* self, QKeyEvent* e);
    friend void QsciScintilla_SuperInputMethodEvent(QsciScintilla* self, QInputMethodEvent* event);
    friend QVariant* QsciScintilla_SuperInputMethodQuery(const QsciScintilla* self, int query);
    friend void QsciScintilla_SuperMouseDoubleClickEvent(QsciScintilla* self, QMouseEvent* e);
    friend void QsciScintilla_SuperMouseMoveEvent(QsciScintilla* self, QMouseEvent* e);
    friend void QsciScintilla_SuperMousePressEvent(QsciScintilla* self, QMouseEvent* e);
    friend void QsciScintilla_SuperMouseReleaseEvent(QsciScintilla* self, QMouseEvent* e);
    friend void QsciScintilla_SuperPaintEvent(QsciScintilla* self, QPaintEvent* e);
    friend void QsciScintilla_SuperResizeEvent(QsciScintilla* self, QResizeEvent* e);
    friend void QsciScintilla_SuperScrollContentsBy(QsciScintilla* self, int dx, int dy);
    friend bool QsciScintilla_SuperEventFilter(QsciScintilla* self, QObject* param1, QEvent* param2);
    friend bool QsciScintilla_SuperViewportEvent(QsciScintilla* self, QEvent* param1);
    friend QSize* QsciScintilla_SuperViewportSizeHint(const QsciScintilla* self);
    friend void QsciScintilla_SuperInitStyleOption(const QsciScintilla* self, QStyleOptionFrame* option);
    friend void QsciScintilla_SuperKeyReleaseEvent(QsciScintilla* self, QKeyEvent* event);
    friend void QsciScintilla_SuperEnterEvent(QsciScintilla* self, QEnterEvent* event);
    friend void QsciScintilla_SuperLeaveEvent(QsciScintilla* self, QEvent* event);
    friend void QsciScintilla_SuperMoveEvent(QsciScintilla* self, QMoveEvent* event);
    friend void QsciScintilla_SuperCloseEvent(QsciScintilla* self, QCloseEvent* event);
    friend void QsciScintilla_SuperTabletEvent(QsciScintilla* self, QTabletEvent* event);
    friend void QsciScintilla_SuperActionEvent(QsciScintilla* self, QActionEvent* event);
    friend void QsciScintilla_SuperShowEvent(QsciScintilla* self, QShowEvent* event);
    friend void QsciScintilla_SuperHideEvent(QsciScintilla* self, QHideEvent* event);
    friend bool QsciScintilla_SuperNativeEvent(QsciScintilla* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QsciScintilla_SuperMetric(const QsciScintilla* self, int param1);
    friend void QsciScintilla_SuperInitPainter(const QsciScintilla* self, QPainter* painter);
    friend QPaintDevice* QsciScintilla_SuperRedirected(const QsciScintilla* self, QPoint* offset);
    friend QPainter* QsciScintilla_SuperSharedPainter(const QsciScintilla* self);
    friend void QsciScintilla_SuperTimerEvent(QsciScintilla* self, QTimerEvent* event);
    friend void QsciScintilla_SuperChildEvent(QsciScintilla* self, QChildEvent* event);
    friend void QsciScintilla_SuperCustomEvent(QsciScintilla* self, QEvent* event);
    friend void QsciScintilla_SuperConnectNotify(QsciScintilla* self, const QMetaMethod* signal);
    friend void QsciScintilla_SuperDisconnectNotify(QsciScintilla* self, const QMetaMethod* signal);
};

#endif
