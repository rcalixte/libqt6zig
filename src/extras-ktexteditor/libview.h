#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIEW_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KSyntaxHighlighting::Theme KSyntaxHighlighting__Theme;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AbstractAnnotationItemDelegate)
typedef KTextEditor::AbstractAnnotationItemDelegate KTextEditor__AbstractAnnotationItemDelegate;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AnnotationModel)
typedef KTextEditor::AnnotationModel KTextEditor__AnnotationModel;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AttributeBlock)
typedef KTextEditor::AttributeBlock KTextEditor__AttributeBlock;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__CodeCompletionModel)
typedef KTextEditor::CodeCompletionModel KTextEditor__CodeCompletionModel;
#endif
typedef KTextEditor::Cursor KTextEditor__Cursor;
typedef KTextEditor::Document KTextEditor__Document;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNoteProvider)
typedef KTextEditor::InlineNoteProvider KTextEditor__InlineNoteProvider;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MainWindow)
typedef KTextEditor::MainWindow KTextEditor__MainWindow;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range)
typedef KTextEditor::Range KTextEditor__Range;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__TextHintProvider)
typedef KTextEditor::TextHintProvider KTextEditor__TextHintProvider;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KSyntaxHighlighting__Theme KSyntaxHighlighting__Theme;
typedef struct KTextEditor__AbstractAnnotationItemDelegate KTextEditor__AbstractAnnotationItemDelegate;
typedef struct KTextEditor__AnnotationModel KTextEditor__AnnotationModel;
typedef struct KTextEditor__AttributeBlock KTextEditor__AttributeBlock;
typedef struct KTextEditor__CodeCompletionModel KTextEditor__CodeCompletionModel;
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__InlineNoteProvider KTextEditor__InlineNoteProvider;
typedef struct KTextEditor__MainWindow KTextEditor__MainWindow;
typedef struct KTextEditor__Range KTextEditor__Range;
typedef struct KTextEditor__TextHintProvider KTextEditor__TextHintProvider;
typedef struct KTextEditor__View KTextEditor__View;
typedef struct KXMLGUIClient KXMLGUIClient;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QScrollBar QScrollBar;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QMetaObject* KTextEditor__View_MetaObject(const KTextEditor__View* self);
void* KTextEditor__View_Metacast(KTextEditor__View* self, const char* param1);
int KTextEditor__View_Metacall(KTextEditor__View* self, int param1, int param2, void** param3);
libqt_string KTextEditor__View_Tr(const char* s);
KTextEditor__Document* KTextEditor__View_Document(const KTextEditor__View* self);
int KTextEditor__View_ViewMode(const KTextEditor__View* self);
libqt_string KTextEditor__View_ViewModeHuman(const KTextEditor__View* self);
void KTextEditor__View_SetViewInputMode(KTextEditor__View* self, int inputMode);
int KTextEditor__View_ViewInputMode(const KTextEditor__View* self);
libqt_string KTextEditor__View_ViewInputModeHuman(const KTextEditor__View* self);
KTextEditor__MainWindow* KTextEditor__View_MainWindow(const KTextEditor__View* self);
void KTextEditor__View_FocusIn(KTextEditor__View* self, KTextEditor__View* view);
void KTextEditor__View_Connect_FocusIn(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_FocusOut(KTextEditor__View* self, KTextEditor__View* view);
void KTextEditor__View_Connect_FocusOut(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_ViewModeChanged(KTextEditor__View* self, KTextEditor__View* view, int mode);
void KTextEditor__View_Connect_ViewModeChanged(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_ViewInputModeChanged(KTextEditor__View* self, KTextEditor__View* view, int mode);
void KTextEditor__View_Connect_ViewInputModeChanged(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_TextInserted(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* position, const libqt_string text);
void KTextEditor__View_Connect_TextInserted(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_SetContextMenu(KTextEditor__View* self, QMenu* menu);
QMenu* KTextEditor__View_ContextMenu(const KTextEditor__View* self);
QMenu* KTextEditor__View_DefaultContextMenu(const KTextEditor__View* self, QMenu* menu);
void KTextEditor__View_ContextMenuAboutToShow(KTextEditor__View* self, KTextEditor__View* view, QMenu* menu);
void KTextEditor__View_Connect_ContextMenuAboutToShow(KTextEditor__View* self, intptr_t slot);
bool KTextEditor__View_SetCursorPosition(KTextEditor__View* self, KTextEditor__Cursor* position);
void KTextEditor__View_SetCursorPositions(KTextEditor__View* self, const libqt_list /* of KTextEditor__Cursor* */ positions);
KTextEditor__Cursor* KTextEditor__View_CursorPosition(const KTextEditor__View* self);
libqt_list /* of KTextEditor__Cursor* */ KTextEditor__View_CursorPositions(const KTextEditor__View* self);
KTextEditor__Cursor* KTextEditor__View_CursorPositionVirtual(const KTextEditor__View* self);
QPoint* KTextEditor__View_CursorToCoordinate(const KTextEditor__View* self, KTextEditor__Cursor* cursor);
QPoint* KTextEditor__View_CursorPositionCoordinates(const KTextEditor__View* self);
KTextEditor__Cursor* KTextEditor__View_CoordinatesToCursor(const KTextEditor__View* self, const QPoint* coord);
void KTextEditor__View_CursorPositionChanged(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPosition);
void KTextEditor__View_Connect_CursorPositionChanged(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_VerticalScrollPositionChanged(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPos);
void KTextEditor__View_Connect_VerticalScrollPositionChanged(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_HorizontalScrollPositionChanged(KTextEditor__View* self, KTextEditor__View* view);
void KTextEditor__View_Connect_HorizontalScrollPositionChanged(KTextEditor__View* self, intptr_t slot);
bool KTextEditor__View_MouseTrackingEnabled(const KTextEditor__View* self);
bool KTextEditor__View_SetMouseTrackingEnabled(KTextEditor__View* self, bool enable);
void KTextEditor__View_MousePositionChanged(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPosition);
void KTextEditor__View_Connect_MousePositionChanged(KTextEditor__View* self, intptr_t slot);
bool KTextEditor__View_SetSelection(KTextEditor__View* self, KTextEditor__Range* range);
void KTextEditor__View_SetSelections(KTextEditor__View* self, const libqt_list /* of KTextEditor__Range* */ ranges);
bool KTextEditor__View_Selection(const KTextEditor__View* self);
KTextEditor__Range* KTextEditor__View_SelectionRange(const KTextEditor__View* self);
libqt_list /* of KTextEditor__Range* */ KTextEditor__View_SelectionRanges(const KTextEditor__View* self);
libqt_string KTextEditor__View_SelectionText(const KTextEditor__View* self);
bool KTextEditor__View_RemoveSelection(KTextEditor__View* self);
bool KTextEditor__View_RemoveSelectionText(KTextEditor__View* self);
bool KTextEditor__View_SetBlockSelection(KTextEditor__View* self, bool on);
bool KTextEditor__View_BlockSelection(const KTextEditor__View* self);
void KTextEditor__View_SelectionChanged(KTextEditor__View* self, KTextEditor__View* view);
void KTextEditor__View_Connect_SelectionChanged(KTextEditor__View* self, intptr_t slot);
bool KTextEditor__View_InsertText(KTextEditor__View* self, const libqt_string text);
bool KTextEditor__View_InsertTemplate(KTextEditor__View* self, KTextEditor__Cursor* insertPosition, const libqt_string templateString);
void KTextEditor__View_SetScrollPosition(KTextEditor__View* self, KTextEditor__Cursor* cursor);
void KTextEditor__View_SetHorizontalScrollPosition(KTextEditor__View* self, int x);
KTextEditor__Cursor* KTextEditor__View_MaxScrollPosition(const KTextEditor__View* self);
int KTextEditor__View_FirstDisplayedLine(const KTextEditor__View* self);
int KTextEditor__View_LastDisplayedLine(const KTextEditor__View* self);
QRect* KTextEditor__View_TextAreaRect(const KTextEditor__View* self);
QScrollBar* KTextEditor__View_VerticalScrollBar(const KTextEditor__View* self);
QScrollBar* KTextEditor__View_HorizontalScrollBar(const KTextEditor__View* self);
void KTextEditor__View_DisplayRangeChanged(KTextEditor__View* self, KTextEditor__View* view);
void KTextEditor__View_Connect_DisplayRangeChanged(KTextEditor__View* self, intptr_t slot);
bool KTextEditor__View_Print(KTextEditor__View* self);
void KTextEditor__View_PrintPreview(KTextEditor__View* self);
bool KTextEditor__View_IsStatusBarEnabled(const KTextEditor__View* self);
void KTextEditor__View_SetStatusBarEnabled(KTextEditor__View* self, bool enable);
void KTextEditor__View_StatusBarEnabledChanged(KTextEditor__View* self, KTextEditor__View* view, bool enabled);
void KTextEditor__View_Connect_StatusBarEnabledChanged(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_ReadSessionConfig(KTextEditor__View* self, const KConfigGroup* config, const libqt_list /* set of libqt_string */ flags);
void KTextEditor__View_WriteSessionConfig(KTextEditor__View* self, KConfigGroup* config, const libqt_list /* set of libqt_string */ flags);
libqt_list /* of KTextEditor__AttributeBlock* */ KTextEditor__View_LineAttributes(KTextEditor__View* self, int line);
void KTextEditor__View_ConfigChanged(KTextEditor__View* self, KTextEditor__View* view);
void KTextEditor__View_Connect_ConfigChanged(KTextEditor__View* self, intptr_t slot);
libqt_list /* of libqt_string */ KTextEditor__View_ConfigKeys(const KTextEditor__View* self);
QVariant* KTextEditor__View_ConfigValue(KTextEditor__View* self, const libqt_string key);
void KTextEditor__View_SetConfigValue(KTextEditor__View* self, const libqt_string key, const QVariant* value);
void KTextEditor__View_SetAnnotationModel(KTextEditor__View* self, KTextEditor__AnnotationModel* model);
KTextEditor__AnnotationModel* KTextEditor__View_AnnotationModel(const KTextEditor__View* self);
void KTextEditor__View_SetAnnotationBorderVisible(KTextEditor__View* self, bool visible);
bool KTextEditor__View_IsAnnotationBorderVisible(const KTextEditor__View* self);
void KTextEditor__View_SetAnnotationItemDelegate(KTextEditor__View* self, KTextEditor__AbstractAnnotationItemDelegate* delegate);
KTextEditor__AbstractAnnotationItemDelegate* KTextEditor__View_AnnotationItemDelegate(const KTextEditor__View* self);
void KTextEditor__View_SetAnnotationUniformItemSizes(KTextEditor__View* self, bool uniformItemSizes);
bool KTextEditor__View_UniformAnnotationItemSizes(const KTextEditor__View* self);
void KTextEditor__View_AnnotationContextMenuAboutToShow(KTextEditor__View* self, KTextEditor__View* view, QMenu* menu, int line);
void KTextEditor__View_Connect_AnnotationContextMenuAboutToShow(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_AnnotationActivated(KTextEditor__View* self, KTextEditor__View* view, int line);
void KTextEditor__View_Connect_AnnotationActivated(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_AnnotationBorderVisibilityChanged(KTextEditor__View* self, KTextEditor__View* view, bool visible);
void KTextEditor__View_Connect_AnnotationBorderVisibilityChanged(KTextEditor__View* self, intptr_t slot);
void KTextEditor__View_RegisterInlineNoteProvider(KTextEditor__View* self, KTextEditor__InlineNoteProvider* provider);
void KTextEditor__View_UnregisterInlineNoteProvider(KTextEditor__View* self, KTextEditor__InlineNoteProvider* provider);
void KTextEditor__View_RegisterTextHintProvider(KTextEditor__View* self, KTextEditor__TextHintProvider* provider);
void KTextEditor__View_UnregisterTextHintProvider(KTextEditor__View* self, KTextEditor__TextHintProvider* provider);
void KTextEditor__View_SetTextHintDelay(KTextEditor__View* self, int delay);
int KTextEditor__View_TextHintDelay(const KTextEditor__View* self);
bool KTextEditor__View_IsCompletionActive(const KTextEditor__View* self);
void KTextEditor__View_StartCompletion(KTextEditor__View* self, KTextEditor__Range* word, KTextEditor__CodeCompletionModel* model);
void KTextEditor__View_AbortCompletion(KTextEditor__View* self);
void KTextEditor__View_ForceCompletion(KTextEditor__View* self);
void KTextEditor__View_RegisterCompletionModel(KTextEditor__View* self, KTextEditor__CodeCompletionModel* model);
void KTextEditor__View_UnregisterCompletionModel(KTextEditor__View* self, KTextEditor__CodeCompletionModel* model);
bool KTextEditor__View_IsAutomaticInvocationEnabled(const KTextEditor__View* self);
void KTextEditor__View_SetAutomaticInvocationEnabled(KTextEditor__View* self, bool enabled);
void KTextEditor__View_StartCompletion2(KTextEditor__View* self, const KTextEditor__Range* word, const libqt_list /* of KTextEditor__CodeCompletionModel* */ models, int invocationType);
libqt_list /* of KTextEditor__CodeCompletionModel* */ KTextEditor__View_CodeCompletionModels(const KTextEditor__View* self);
KSyntaxHighlighting__Theme* KTextEditor__View_Theme(const KTextEditor__View* self);
libqt_string KTextEditor__View_Tr2(const char* s, const char* c);
libqt_string KTextEditor__View_Tr3(const char* s, const char* c, int n);
bool KTextEditor__View_InsertTemplate3(KTextEditor__View* self, KTextEditor__Cursor* insertPosition, const libqt_string templateString, const libqt_string script);
int KTextEditor__View_FirstDisplayedLine1(const KTextEditor__View* self, int lineType);
int KTextEditor__View_LastDisplayedLine1(const KTextEditor__View* self, int lineType);
void KTextEditor__View_Delete(KTextEditor__View* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
