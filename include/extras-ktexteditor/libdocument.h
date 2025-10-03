#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBDOCUMENT_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part)
typedef KParts::Part KParts__Part;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartBase)
typedef KParts::PartBase KParts__PartBase;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadWritePart)
typedef KParts::ReadWritePart KParts__ReadWritePart;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AnnotationModel)
typedef KTextEditor::AnnotationModel KTextEditor__AnnotationModel;
#endif
typedef KTextEditor::Cursor KTextEditor__Cursor;
typedef KTextEditor::Document KTextEditor__Document;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Document__EditingTransaction)
typedef KTextEditor::Document::EditingTransaction KTextEditor__Document__EditingTransaction;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__MainWindow)
typedef KTextEditor::MainWindow KTextEditor__MainWindow;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Mark)
typedef KTextEditor::Mark KTextEditor__Mark;
#endif
typedef KTextEditor::Message KTextEditor__Message;
typedef KTextEditor::MovingCursor KTextEditor__MovingCursor;
typedef KTextEditor::MovingRange KTextEditor__MovingRange;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__Range)
typedef KTextEditor::Range KTextEditor__Range;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KParts__Part KParts__Part;
typedef struct KParts__PartBase KParts__PartBase;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct KParts__ReadWritePart KParts__ReadWritePart;
typedef struct KTextEditor__AnnotationModel KTextEditor__AnnotationModel;
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__Document__EditingTransaction KTextEditor__Document__EditingTransaction;
typedef struct KTextEditor__MainWindow KTextEditor__MainWindow;
typedef struct KTextEditor__Mark KTextEditor__Mark;
typedef struct KTextEditor__Message KTextEditor__Message;
typedef struct KTextEditor__MovingCursor KTextEditor__MovingCursor;
typedef struct KTextEditor__MovingRange KTextEditor__MovingRange;
typedef struct KTextEditor__Range KTextEditor__Range;
typedef struct KTextEditor__View KTextEditor__View;
typedef struct KXMLGUIClient KXMLGUIClient;
typedef struct QChar QChar;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

int KTextEditor__Mark_Line(const KTextEditor__Mark* self);
void KTextEditor__Mark_SetLine(KTextEditor__Mark* self, int line);
unsigned int KTextEditor__Mark_Type(const KTextEditor__Mark* self);
void KTextEditor__Mark_SetType(KTextEditor__Mark* self, unsigned int type);
void KTextEditor__Mark_Delete(KTextEditor__Mark* self);

QMetaObject* KTextEditor__Document_MetaObject(const KTextEditor__Document* self);
void* KTextEditor__Document_Metacast(KTextEditor__Document* self, const char* param1);
int KTextEditor__Document_Metacall(KTextEditor__Document* self, int param1, int param2, void** param3);
libqt_string KTextEditor__Document_Tr(const char* s);
KTextEditor__View* KTextEditor__Document_CreateView(KTextEditor__Document* self, QWidget* parent, KTextEditor__MainWindow* mainWindow);
libqt_list /* of KTextEditor__View* */ KTextEditor__Document_Views(const KTextEditor__Document* self);
void KTextEditor__Document_ViewCreated(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__View* view);
void KTextEditor__Document_Connect_ViewCreated(KTextEditor__Document* self, intptr_t slot);
libqt_string KTextEditor__Document_DocumentName(const KTextEditor__Document* self);
libqt_string KTextEditor__Document_MimeType(KTextEditor__Document* self);
libqt_string KTextEditor__Document_Checksum(const KTextEditor__Document* self);
void KTextEditor__Document_DocumentNameChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_DocumentNameChanged(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_DocumentUrlChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_DocumentUrlChanged(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_ModifiedChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_ModifiedChanged(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_ReadWriteChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_ReadWriteChanged(KTextEditor__Document* self, intptr_t slot);
bool KTextEditor__Document_SetEncoding(KTextEditor__Document* self, const libqt_string encoding);
libqt_string KTextEditor__Document_Encoding(const KTextEditor__Document* self);
bool KTextEditor__Document_DocumentReload(KTextEditor__Document* self);
bool KTextEditor__Document_DocumentSave(KTextEditor__Document* self);
bool KTextEditor__Document_DocumentSaveAs(KTextEditor__Document* self);
bool KTextEditor__Document_OpeningError(const KTextEditor__Document* self);
void KTextEditor__Document_DocumentSavedOrUploaded(KTextEditor__Document* self, KTextEditor__Document* document, bool saveAs);
void KTextEditor__Document_Connect_DocumentSavedOrUploaded(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_AboutToClose(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_AboutToClose(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_AboutToReload(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_AboutToReload(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_Reloaded(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_Reloaded(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_AboutToSave(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_AboutToSave(KTextEditor__Document* self, intptr_t slot);
bool KTextEditor__Document_IsEditingTransactionRunning(const KTextEditor__Document* self);
libqt_string KTextEditor__Document_Text(const KTextEditor__Document* self);
libqt_string KTextEditor__Document_Text2(const KTextEditor__Document* self, KTextEditor__Range* range, bool block);
QChar* KTextEditor__Document_CharacterAt(const KTextEditor__Document* self, KTextEditor__Cursor* position);
libqt_string KTextEditor__Document_WordAt(const KTextEditor__Document* self, KTextEditor__Cursor* cursor);
KTextEditor__Range* KTextEditor__Document_WordRangeAt(const KTextEditor__Document* self, KTextEditor__Cursor* cursor);
bool KTextEditor__Document_IsValidTextPosition(const KTextEditor__Document* self, KTextEditor__Cursor* cursor);
libqt_list /* of libqt_string */ KTextEditor__Document_TextLines(const KTextEditor__Document* self, KTextEditor__Range* range, bool block);
libqt_string KTextEditor__Document_Line(const KTextEditor__Document* self, int line);
int KTextEditor__Document_Lines(const KTextEditor__Document* self);
bool KTextEditor__Document_IsLineModified(const KTextEditor__Document* self, int line);
bool KTextEditor__Document_IsLineSaved(const KTextEditor__Document* self, int line);
bool KTextEditor__Document_IsLineTouched(const KTextEditor__Document* self, int line);
KTextEditor__Cursor* KTextEditor__Document_DocumentEnd(const KTextEditor__Document* self);
KTextEditor__Range* KTextEditor__Document_DocumentRange(const KTextEditor__Document* self);
ptrdiff_t KTextEditor__Document_TotalCharacters(const KTextEditor__Document* self);
bool KTextEditor__Document_IsEmpty(const KTextEditor__Document* self);
int KTextEditor__Document_LineLength(const KTextEditor__Document* self, int line);
KTextEditor__Cursor* KTextEditor__Document_EndOfLine(const KTextEditor__Document* self, int line);
bool KTextEditor__Document_SetText(KTextEditor__Document* self, const libqt_string text);
bool KTextEditor__Document_SetText2(KTextEditor__Document* self, const libqt_list /* of libqt_string */ text);
bool KTextEditor__Document_Clear(KTextEditor__Document* self);
bool KTextEditor__Document_InsertText(KTextEditor__Document* self, KTextEditor__Cursor* position, const libqt_string text, bool block);
bool KTextEditor__Document_InsertText2(KTextEditor__Document* self, KTextEditor__Cursor* position, const libqt_list /* of libqt_string */ text, bool block);
bool KTextEditor__Document_ReplaceText(KTextEditor__Document* self, KTextEditor__Range* range, const libqt_string text, bool block);
bool KTextEditor__Document_ReplaceText2(KTextEditor__Document* self, KTextEditor__Range* range, const libqt_list /* of libqt_string */ text, bool block);
bool KTextEditor__Document_RemoveText(KTextEditor__Document* self, KTextEditor__Range* range, bool block);
bool KTextEditor__Document_InsertLine(KTextEditor__Document* self, int line, const libqt_string text);
bool KTextEditor__Document_InsertLines(KTextEditor__Document* self, int line, const libqt_list /* of libqt_string */ text);
bool KTextEditor__Document_RemoveLine(KTextEditor__Document* self, int line);
libqt_list /* of KTextEditor__Range* */ KTextEditor__Document_SearchText(const KTextEditor__Document* self, KTextEditor__Range* range, const libqt_string pattern);
ptrdiff_t KTextEditor__Document_CursorToOffset(const KTextEditor__Document* self, KTextEditor__Cursor* c);
KTextEditor__Cursor* KTextEditor__Document_OffsetToCursor(const KTextEditor__Document* self, ptrdiff_t offset);
void KTextEditor__Document_EditingStarted(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_EditingStarted(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_EditingFinished(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_EditingFinished(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_LineWrapped(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Cursor* position);
void KTextEditor__Document_Connect_LineWrapped(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_LineUnwrapped(KTextEditor__Document* self, KTextEditor__Document* document, int line);
void KTextEditor__Document_Connect_LineUnwrapped(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_TextInserted(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Cursor* position, const libqt_string text);
void KTextEditor__Document_Connect_TextInserted(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_TextRemoved(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Range* range, const libqt_string text);
void KTextEditor__Document_Connect_TextRemoved(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_TextChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_TextChanged(KTextEditor__Document* self, intptr_t slot);
int KTextEditor__Document_DefaultStyleAt(const KTextEditor__Document* self, KTextEditor__Cursor* position);
libqt_string KTextEditor__Document_Mode(const KTextEditor__Document* self);
libqt_string KTextEditor__Document_HighlightingMode(const KTextEditor__Document* self);
libqt_list /* of libqt_string */ KTextEditor__Document_EmbeddedHighlightingModes(const KTextEditor__Document* self);
libqt_string KTextEditor__Document_HighlightingModeAt(KTextEditor__Document* self, KTextEditor__Cursor* position);
libqt_list /* of libqt_string */ KTextEditor__Document_Modes(const KTextEditor__Document* self);
libqt_list /* of libqt_string */ KTextEditor__Document_HighlightingModes(const KTextEditor__Document* self);
bool KTextEditor__Document_SetMode(KTextEditor__Document* self, const libqt_string name);
bool KTextEditor__Document_SetHighlightingMode(KTextEditor__Document* self, const libqt_string name);
libqt_string KTextEditor__Document_HighlightingModeSection(const KTextEditor__Document* self, int index);
libqt_string KTextEditor__Document_ModeSection(const KTextEditor__Document* self, int index);
void KTextEditor__Document_ModeChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_ModeChanged(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_HighlightingModeChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_HighlightingModeChanged(KTextEditor__Document* self, intptr_t slot);
bool KTextEditor__Document_Print(KTextEditor__Document* self);
void KTextEditor__Document_PrintPreview(KTextEditor__Document* self);
bool KTextEditor__Document_PostMessage(KTextEditor__Document* self, KTextEditor__Message* message);
void KTextEditor__Document_ReadSessionConfig(KTextEditor__Document* self, const KConfigGroup* config, const libqt_list /* set of libqt_string */ flags);
void KTextEditor__Document_WriteSessionConfig(KTextEditor__Document* self, KConfigGroup* config, const libqt_list /* set of libqt_string */ flags);
bool KTextEditor__Document_IsDataRecoveryAvailable(const KTextEditor__Document* self);
void KTextEditor__Document_RecoverData(KTextEditor__Document* self);
void KTextEditor__Document_DiscardDataRecovery(KTextEditor__Document* self);
void KTextEditor__Document_ConfigChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_ConfigChanged(KTextEditor__Document* self, intptr_t slot);
KTextEditor__MovingCursor* KTextEditor__Document_NewMovingCursor(KTextEditor__Document* self, KTextEditor__Cursor* position, int insertBehavior);
KTextEditor__MovingRange* KTextEditor__Document_NewMovingRange(KTextEditor__Document* self, KTextEditor__Range* range, int insertBehaviors, int emptyBehavior);
long long KTextEditor__Document_Revision(const KTextEditor__Document* self);
long long KTextEditor__Document_LastSavedRevision(const KTextEditor__Document* self);
void KTextEditor__Document_LockRevision(KTextEditor__Document* self, long long revision);
void KTextEditor__Document_UnlockRevision(KTextEditor__Document* self, long long revision);
void KTextEditor__Document_TransformCursor(KTextEditor__Document* self, KTextEditor__Cursor* cursor, int insertBehavior, long long fromRevision, long long toRevision);
void KTextEditor__Document_TransformCursor2(KTextEditor__Document* self, int* line, int* column, int insertBehavior, long long fromRevision, long long toRevision);
void KTextEditor__Document_TransformRange(KTextEditor__Document* self, KTextEditor__Range* range, int insertBehaviors, int emptyBehavior, long long fromRevision, long long toRevision);
void KTextEditor__Document_AboutToDeleteMovingInterfaceContent(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_AboutToDeleteMovingInterfaceContent(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_AboutToInvalidateMovingInterfaceContent(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_AboutToInvalidateMovingInterfaceContent(KTextEditor__Document* self, intptr_t slot);
libqt_list /* of libqt_string */ KTextEditor__Document_ConfigKeys(const KTextEditor__Document* self);
QVariant* KTextEditor__Document_ConfigValue(KTextEditor__Document* self, const libqt_string key);
void KTextEditor__Document_SetConfigValue(KTextEditor__Document* self, const libqt_string key, const QVariant* value);
void KTextEditor__Document_SetModifiedOnDisk(KTextEditor__Document* self, int reason);
void KTextEditor__Document_SetModifiedOnDiskWarning(KTextEditor__Document* self, bool on);
void KTextEditor__Document_ModifiedOnDisk(KTextEditor__Document* self, KTextEditor__Document* document, bool isModified, int reason);
void KTextEditor__Document_Connect_ModifiedOnDisk(KTextEditor__Document* self, intptr_t slot);
unsigned int KTextEditor__Document_Mark(KTextEditor__Document* self, int line);
void KTextEditor__Document_SetMark(KTextEditor__Document* self, int line, unsigned int markType);
void KTextEditor__Document_ClearMark(KTextEditor__Document* self, int line);
void KTextEditor__Document_AddMark(KTextEditor__Document* self, int line, unsigned int markType);
void KTextEditor__Document_RemoveMark(KTextEditor__Document* self, int line, unsigned int markType);
libqt_map /* of int to KTextEditor__Mark* */ KTextEditor__Document_Marks(KTextEditor__Document* self);
void KTextEditor__Document_ClearMarks(KTextEditor__Document* self);
int KTextEditor__Document_ReservedMarkersCount();
void KTextEditor__Document_SetMarkDescription(KTextEditor__Document* self, int mark, const libqt_string text);
libqt_string KTextEditor__Document_MarkDescription(const KTextEditor__Document* self, int mark);
void KTextEditor__Document_SetEditableMarks(KTextEditor__Document* self, unsigned int markMask);
unsigned int KTextEditor__Document_EditableMarks(const KTextEditor__Document* self);
void KTextEditor__Document_SetMarkIcon(KTextEditor__Document* self, int markType, const QIcon* icon);
QIcon* KTextEditor__Document_MarkIcon(const KTextEditor__Document* self, int markType);
void KTextEditor__Document_MarksChanged(KTextEditor__Document* self, KTextEditor__Document* document);
void KTextEditor__Document_Connect_MarksChanged(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_MarkChanged(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, int action);
void KTextEditor__Document_Connect_MarkChanged(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_MarkToolTipRequested(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, QPoint* position, bool* handled);
void KTextEditor__Document_Connect_MarkToolTipRequested(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_MarkContextMenuRequested(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, QPoint* pos, bool* handled);
void KTextEditor__Document_Connect_MarkContextMenuRequested(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_MarkClicked(KTextEditor__Document* self, KTextEditor__Document* document, KTextEditor__Mark* mark, bool* handled);
void KTextEditor__Document_Connect_MarkClicked(KTextEditor__Document* self, intptr_t slot);
void KTextEditor__Document_SetAnnotationModel(KTextEditor__Document* self, KTextEditor__AnnotationModel* model);
KTextEditor__AnnotationModel* KTextEditor__Document_AnnotationModel(const KTextEditor__Document* self);
libqt_string KTextEditor__Document_Tr2(const char* s, const char* c);
libqt_string KTextEditor__Document_Tr3(const char* s, const char* c, int n);
libqt_list /* of KTextEditor__Range* */ KTextEditor__Document_SearchText3(const KTextEditor__Document* self, KTextEditor__Range* range, const libqt_string pattern, const int options);
void KTextEditor__Document_Delete(KTextEditor__Document* self);

KTextEditor__Document__EditingTransaction* KTextEditor__Document__EditingTransaction_new(KTextEditor__Document* document);
void KTextEditor__Document__EditingTransaction_Start(KTextEditor__Document__EditingTransaction* self);
void KTextEditor__Document__EditingTransaction_Finish(KTextEditor__Document__EditingTransaction* self);
void KTextEditor__Document__EditingTransaction_Delete(KTextEditor__Document__EditingTransaction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
