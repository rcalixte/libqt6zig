#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSQL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSQL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
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
typedef struct QsciLexerSQL QsciLexerSQL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSQL* QsciLexerSQL_new();
QsciLexerSQL* QsciLexerSQL_new2(QObject* parent);
QMetaObject* QsciLexerSQL_MetaObject(const QsciLexerSQL* self);
void* QsciLexerSQL_Metacast(QsciLexerSQL* self, const char* param1);
int QsciLexerSQL_Metacall(QsciLexerSQL* self, int param1, int param2, void** param3);
void QsciLexerSQL_OnMetacall(QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseMetacall(QsciLexerSQL* self, int param1, int param2, void** param3);
libqt_string QsciLexerSQL_Tr(const char* s);
const char* QsciLexerSQL_Language(const QsciLexerSQL* self);
const char* QsciLexerSQL_Lexer(const QsciLexerSQL* self);
int QsciLexerSQL_BraceStyle(const QsciLexerSQL* self);
QColor* QsciLexerSQL_DefaultColor(const QsciLexerSQL* self, int style);
bool QsciLexerSQL_DefaultEolFill(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_DefaultFont(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_DefaultPaper(const QsciLexerSQL* self, int style);
const char* QsciLexerSQL_Keywords(const QsciLexerSQL* self, int set);
libqt_string QsciLexerSQL_Description(const QsciLexerSQL* self, int style);
void QsciLexerSQL_RefreshProperties(QsciLexerSQL* self);
bool QsciLexerSQL_BackslashEscapes(const QsciLexerSQL* self);
void QsciLexerSQL_SetDottedWords(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_DottedWords(const QsciLexerSQL* self);
void QsciLexerSQL_SetFoldAtElse(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_FoldAtElse(const QsciLexerSQL* self);
bool QsciLexerSQL_FoldComments(const QsciLexerSQL* self);
bool QsciLexerSQL_FoldCompact(const QsciLexerSQL* self);
void QsciLexerSQL_SetFoldOnlyBegin(QsciLexerSQL* self, bool fold);
bool QsciLexerSQL_FoldOnlyBegin(const QsciLexerSQL* self);
void QsciLexerSQL_SetHashComments(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_HashComments(const QsciLexerSQL* self);
void QsciLexerSQL_SetQuotedIdentifiers(QsciLexerSQL* self, bool enable);
bool QsciLexerSQL_QuotedIdentifiers(const QsciLexerSQL* self);
void QsciLexerSQL_SetBackslashEscapes(QsciLexerSQL* self, bool enable);
void QsciLexerSQL_OnSetBackslashEscapes(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetBackslashEscapes(QsciLexerSQL* self, bool enable);
void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_OnSetFoldComments(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetFoldComments(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_OnSetFoldCompact(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetFoldCompact(QsciLexerSQL* self, bool fold);
libqt_string QsciLexerSQL_Tr2(const char* s, const char* c);
libqt_string QsciLexerSQL_Tr3(const char* s, const char* c, int n);
int QsciLexerSQL_LexerId(const QsciLexerSQL* self);
void QsciLexerSQL_OnLexerId(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseLexerId(const QsciLexerSQL* self);
const char* QsciLexerSQL_AutoCompletionFillups(const QsciLexerSQL* self);
void QsciLexerSQL_OnAutoCompletionFillups(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_QBaseAutoCompletionFillups(const QsciLexerSQL* self);
libqt_list /* of libqt_string */ QsciLexerSQL_AutoCompletionWordSeparators(const QsciLexerSQL* self);
void QsciLexerSQL_OnAutoCompletionWordSeparators(const QsciLexerSQL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerSQL_QBaseAutoCompletionWordSeparators(const QsciLexerSQL* self);
const char* QsciLexerSQL_BlockEnd(const QsciLexerSQL* self, int* style);
void QsciLexerSQL_OnBlockEnd(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_QBaseBlockEnd(const QsciLexerSQL* self, int* style);
int QsciLexerSQL_BlockLookback(const QsciLexerSQL* self);
void QsciLexerSQL_OnBlockLookback(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseBlockLookback(const QsciLexerSQL* self);
const char* QsciLexerSQL_BlockStart(const QsciLexerSQL* self, int* style);
void QsciLexerSQL_OnBlockStart(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_QBaseBlockStart(const QsciLexerSQL* self, int* style);
const char* QsciLexerSQL_BlockStartKeyword(const QsciLexerSQL* self, int* style);
void QsciLexerSQL_OnBlockStartKeyword(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_QBaseBlockStartKeyword(const QsciLexerSQL* self, int* style);
bool QsciLexerSQL_CaseSensitive(const QsciLexerSQL* self);
void QsciLexerSQL_OnCaseSensitive(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_QBaseCaseSensitive(const QsciLexerSQL* self);
QColor* QsciLexerSQL_Color(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnColor(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_QBaseColor(const QsciLexerSQL* self, int style);
bool QsciLexerSQL_EolFill(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnEolFill(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_QBaseEolFill(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_Font(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnFont(const QsciLexerSQL* self, intptr_t slot);
QFont* QsciLexerSQL_QBaseFont(const QsciLexerSQL* self, int style);
int QsciLexerSQL_IndentationGuideView(const QsciLexerSQL* self);
void QsciLexerSQL_OnIndentationGuideView(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseIndentationGuideView(const QsciLexerSQL* self);
int QsciLexerSQL_DefaultStyle(const QsciLexerSQL* self);
void QsciLexerSQL_OnDefaultStyle(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseDefaultStyle(const QsciLexerSQL* self);
QColor* QsciLexerSQL_Paper(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnPaper(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_QBasePaper(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_DefaultColor2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnDefaultColor2(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_QBaseDefaultColor2(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_DefaultFont2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnDefaultFont2(const QsciLexerSQL* self, intptr_t slot);
QFont* QsciLexerSQL_QBaseDefaultFont2(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_DefaultPaper2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnDefaultPaper2(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_QBaseDefaultPaper2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_SetEditor(QsciLexerSQL* self, QsciScintilla* editor);
void QsciLexerSQL_OnSetEditor(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetEditor(QsciLexerSQL* self, QsciScintilla* editor);
int QsciLexerSQL_StyleBitsNeeded(const QsciLexerSQL* self);
void QsciLexerSQL_OnStyleBitsNeeded(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseStyleBitsNeeded(const QsciLexerSQL* self);
const char* QsciLexerSQL_WordCharacters(const QsciLexerSQL* self);
void QsciLexerSQL_OnWordCharacters(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_QBaseWordCharacters(const QsciLexerSQL* self);
void QsciLexerSQL_SetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle);
void QsciLexerSQL_OnSetAutoIndentStyle(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle);
void QsciLexerSQL_SetColor(QsciLexerSQL* self, const QColor* c, int style);
void QsciLexerSQL_OnSetColor(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetColor(QsciLexerSQL* self, const QColor* c, int style);
void QsciLexerSQL_SetEolFill(QsciLexerSQL* self, bool eoffill, int style);
void QsciLexerSQL_OnSetEolFill(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetEolFill(QsciLexerSQL* self, bool eoffill, int style);
void QsciLexerSQL_SetFont(QsciLexerSQL* self, const QFont* f, int style);
void QsciLexerSQL_OnSetFont(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetFont(QsciLexerSQL* self, const QFont* f, int style);
void QsciLexerSQL_SetPaper(QsciLexerSQL* self, const QColor* c, int style);
void QsciLexerSQL_OnSetPaper(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseSetPaper(QsciLexerSQL* self, const QColor* c, int style);
bool QsciLexerSQL_ReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSQL_OnReadProperties(QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_QBaseReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSQL_WriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSQL_OnWriteProperties(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_QBaseWriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSQL_Event(QsciLexerSQL* self, QEvent* event);
void QsciLexerSQL_OnEvent(QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_QBaseEvent(QsciLexerSQL* self, QEvent* event);
bool QsciLexerSQL_EventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event);
void QsciLexerSQL_OnEventFilter(QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_QBaseEventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event);
void QsciLexerSQL_TimerEvent(QsciLexerSQL* self, QTimerEvent* event);
void QsciLexerSQL_OnTimerEvent(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseTimerEvent(QsciLexerSQL* self, QTimerEvent* event);
void QsciLexerSQL_ChildEvent(QsciLexerSQL* self, QChildEvent* event);
void QsciLexerSQL_OnChildEvent(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseChildEvent(QsciLexerSQL* self, QChildEvent* event);
void QsciLexerSQL_CustomEvent(QsciLexerSQL* self, QEvent* event);
void QsciLexerSQL_OnCustomEvent(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseCustomEvent(QsciLexerSQL* self, QEvent* event);
void QsciLexerSQL_ConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_OnConnectNotify(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_DisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_OnDisconnectNotify(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_QBaseDisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
libqt_string QsciLexerSQL_TextAsBytes(const QsciLexerSQL* self, const libqt_string text);
void QsciLexerSQL_OnTextAsBytes(const QsciLexerSQL* self, intptr_t slot);
libqt_string QsciLexerSQL_QBaseTextAsBytes(const QsciLexerSQL* self, const libqt_string text);
libqt_string QsciLexerSQL_BytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
void QsciLexerSQL_OnBytesAsText(const QsciLexerSQL* self, intptr_t slot);
libqt_string QsciLexerSQL_QBaseBytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
QObject* QsciLexerSQL_Sender(const QsciLexerSQL* self);
void QsciLexerSQL_OnSender(const QsciLexerSQL* self, intptr_t slot);
QObject* QsciLexerSQL_QBaseSender(const QsciLexerSQL* self);
int QsciLexerSQL_SenderSignalIndex(const QsciLexerSQL* self);
void QsciLexerSQL_OnSenderSignalIndex(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseSenderSignalIndex(const QsciLexerSQL* self);
int QsciLexerSQL_Receivers(const QsciLexerSQL* self, const char* signal);
void QsciLexerSQL_OnReceivers(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_QBaseReceivers(const QsciLexerSQL* self, const char* signal);
bool QsciLexerSQL_IsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_OnIsSignalConnected(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_QBaseIsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_Delete(QsciLexerSQL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
