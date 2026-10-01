#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERNASM_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERNASM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerAsm QsciLexerAsm;
typedef struct QsciLexerNASM QsciLexerNASM;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerNASM* QsciLexerNASM_new();
QsciLexerNASM* QsciLexerNASM_new2(QObject* parent);
QMetaObject* QsciLexerNASM_MetaObject(const QsciLexerNASM* self);
void* QsciLexerNASM_Metacast(QsciLexerNASM* self, const char* param1);
int QsciLexerNASM_Metacall(QsciLexerNASM* self, int param1, int param2, void** param3);
libqt_string QsciLexerNASM_Tr(const char* s);
const char* QsciLexerNASM_Language(const QsciLexerNASM* self);
const char* QsciLexerNASM_Lexer(const QsciLexerNASM* self);
libqt_string QsciLexerNASM_Tr2(const char* s, const char* c);
libqt_string QsciLexerNASM_Tr3(const char* s, const char* c, int n);
void QsciLexerNASM_OnMetaObject(QsciLexerNASM* self, intptr_t slot);
QMetaObject* QsciLexerNASM_SuperMetaObject(const QsciLexerNASM* self);
void QsciLexerNASM_OnMetacast(QsciLexerNASM* self, intptr_t slot);
void* QsciLexerNASM_SuperMetacast(QsciLexerNASM* self, const char* param1);
void QsciLexerNASM_OnMetacall(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_SuperMetacall(QsciLexerNASM* self, int param1, int param2, void** param3);
void QsciLexerNASM_SetFoldComments(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_OnSetFoldComments(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetFoldComments(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_SetFoldCompact(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_OnSetFoldCompact(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetFoldCompact(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_SetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter);
void QsciLexerNASM_OnSetCommentDelimiter(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter);
void QsciLexerNASM_SetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based);
void QsciLexerNASM_OnSetFoldSyntaxBased(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based);
int QsciLexerNASM_LexerId(const QsciLexerNASM* self);
void QsciLexerNASM_OnLexerId(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_SuperLexerId(const QsciLexerNASM* self);
const char* QsciLexerNASM_AutoCompletionFillups(const QsciLexerNASM* self);
void QsciLexerNASM_OnAutoCompletionFillups(QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_SuperAutoCompletionFillups(const QsciLexerNASM* self);
libqt_list /* of libqt_string */ QsciLexerNASM_AutoCompletionWordSeparators(const QsciLexerNASM* self);
void QsciLexerNASM_OnAutoCompletionWordSeparators(QsciLexerNASM* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerNASM_SuperAutoCompletionWordSeparators(const QsciLexerNASM* self);
const char* QsciLexerNASM_BlockEnd(const QsciLexerNASM* self, int* style);
void QsciLexerNASM_OnBlockEnd(QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_SuperBlockEnd(const QsciLexerNASM* self, int* style);
int QsciLexerNASM_BlockLookback(const QsciLexerNASM* self);
void QsciLexerNASM_OnBlockLookback(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_SuperBlockLookback(const QsciLexerNASM* self);
const char* QsciLexerNASM_BlockStart(const QsciLexerNASM* self, int* style);
void QsciLexerNASM_OnBlockStart(QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_SuperBlockStart(const QsciLexerNASM* self, int* style);
const char* QsciLexerNASM_BlockStartKeyword(const QsciLexerNASM* self, int* style);
void QsciLexerNASM_OnBlockStartKeyword(QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_SuperBlockStartKeyword(const QsciLexerNASM* self, int* style);
int QsciLexerNASM_BraceStyle(const QsciLexerNASM* self);
void QsciLexerNASM_OnBraceStyle(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_SuperBraceStyle(const QsciLexerNASM* self);
bool QsciLexerNASM_CaseSensitive(const QsciLexerNASM* self);
void QsciLexerNASM_OnCaseSensitive(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_SuperCaseSensitive(const QsciLexerNASM* self);
QColor* QsciLexerNASM_Color(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnColor(QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_SuperColor(const QsciLexerNASM* self, int style);
bool QsciLexerNASM_EolFill(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnEolFill(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_SuperEolFill(const QsciLexerNASM* self, int style);
QFont* QsciLexerNASM_Font(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnFont(QsciLexerNASM* self, intptr_t slot);
QFont* QsciLexerNASM_SuperFont(const QsciLexerNASM* self, int style);
int QsciLexerNASM_IndentationGuideView(const QsciLexerNASM* self);
void QsciLexerNASM_OnIndentationGuideView(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_SuperIndentationGuideView(const QsciLexerNASM* self);
const char* QsciLexerNASM_Keywords(const QsciLexerNASM* self, int set);
void QsciLexerNASM_OnKeywords(QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_SuperKeywords(const QsciLexerNASM* self, int set);
int QsciLexerNASM_DefaultStyle(const QsciLexerNASM* self);
void QsciLexerNASM_OnDefaultStyle(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_SuperDefaultStyle(const QsciLexerNASM* self);
libqt_string QsciLexerNASM_Description(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDescription(QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_Paper(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnPaper(QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_SuperPaper(const QsciLexerNASM* self, int style);
QColor* QsciLexerNASM_DefaultColor2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultColor2(QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_SuperDefaultColor2(const QsciLexerNASM* self, int style);
bool QsciLexerNASM_DefaultEolFill(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultEolFill(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_SuperDefaultEolFill(const QsciLexerNASM* self, int style);
QFont* QsciLexerNASM_DefaultFont2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultFont2(QsciLexerNASM* self, intptr_t slot);
QFont* QsciLexerNASM_SuperDefaultFont2(const QsciLexerNASM* self, int style);
QColor* QsciLexerNASM_DefaultPaper2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultPaper2(QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_SuperDefaultPaper2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_SetEditor(QsciLexerNASM* self, QsciScintilla* editor);
void QsciLexerNASM_OnSetEditor(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetEditor(QsciLexerNASM* self, QsciScintilla* editor);
void QsciLexerNASM_RefreshProperties(QsciLexerNASM* self);
void QsciLexerNASM_OnRefreshProperties(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperRefreshProperties(QsciLexerNASM* self);
int QsciLexerNASM_StyleBitsNeeded(const QsciLexerNASM* self);
void QsciLexerNASM_OnStyleBitsNeeded(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_SuperStyleBitsNeeded(const QsciLexerNASM* self);
const char* QsciLexerNASM_WordCharacters(const QsciLexerNASM* self);
void QsciLexerNASM_OnWordCharacters(QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_SuperWordCharacters(const QsciLexerNASM* self);
void QsciLexerNASM_SetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle);
void QsciLexerNASM_OnSetAutoIndentStyle(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle);
void QsciLexerNASM_SetColor(QsciLexerNASM* self, const QColor* c, int style);
void QsciLexerNASM_OnSetColor(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetColor(QsciLexerNASM* self, const QColor* c, int style);
void QsciLexerNASM_SetEolFill(QsciLexerNASM* self, bool eoffill, int style);
void QsciLexerNASM_OnSetEolFill(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetEolFill(QsciLexerNASM* self, bool eoffill, int style);
void QsciLexerNASM_SetFont(QsciLexerNASM* self, const QFont* f, int style);
void QsciLexerNASM_OnSetFont(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetFont(QsciLexerNASM* self, const QFont* f, int style);
void QsciLexerNASM_SetPaper(QsciLexerNASM* self, const QColor* c, int style);
void QsciLexerNASM_OnSetPaper(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperSetPaper(QsciLexerNASM* self, const QColor* c, int style);
bool QsciLexerNASM_ReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
void QsciLexerNASM_OnReadProperties(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_SuperReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerNASM_WriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
void QsciLexerNASM_OnWriteProperties(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_SuperWriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerNASM_Event(QsciLexerNASM* self, QEvent* event);
void QsciLexerNASM_OnEvent(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_SuperEvent(QsciLexerNASM* self, QEvent* event);
bool QsciLexerNASM_EventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event);
void QsciLexerNASM_OnEventFilter(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_SuperEventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event);
void QsciLexerNASM_TimerEvent(QsciLexerNASM* self, QTimerEvent* event);
void QsciLexerNASM_OnTimerEvent(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperTimerEvent(QsciLexerNASM* self, QTimerEvent* event);
void QsciLexerNASM_ChildEvent(QsciLexerNASM* self, QChildEvent* event);
void QsciLexerNASM_OnChildEvent(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperChildEvent(QsciLexerNASM* self, QChildEvent* event);
void QsciLexerNASM_CustomEvent(QsciLexerNASM* self, QEvent* event);
void QsciLexerNASM_OnCustomEvent(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperCustomEvent(QsciLexerNASM* self, QEvent* event);
void QsciLexerNASM_ConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_OnConnectNotify(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_DisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_OnDisconnectNotify(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_SuperDisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
libqt_string QsciLexerNASM_TextAsBytes(const QsciLexerNASM* self, const libqt_string text);
libqt_string QsciLexerNASM_BytesAsText(const QsciLexerNASM* self, const char* bytes, int size);
QObject* QsciLexerNASM_Sender(const QsciLexerNASM* self);
int QsciLexerNASM_SenderSignalIndex(const QsciLexerNASM* self);
int QsciLexerNASM_Receivers(const QsciLexerNASM* self, const char* signal);
bool QsciLexerNASM_IsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_Delete(QsciLexerNASM* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
