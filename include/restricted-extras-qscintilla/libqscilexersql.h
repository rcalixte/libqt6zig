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
void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_OnMetaObject(const QsciLexerSQL* self, intptr_t slot);
QMetaObject* QsciLexerSQL_SuperMetaObject(const QsciLexerSQL* self);
void QsciLexerSQL_OnMetacast(QsciLexerSQL* self, intptr_t slot);
void* QsciLexerSQL_SuperMetacast(QsciLexerSQL* self, const char* param1);
void QsciLexerSQL_OnMetacall(QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperMetacall(QsciLexerSQL* self, int param1, int param2, void** param3);
void QsciLexerSQL_OnSetBackslashEscapes(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetBackslashEscapes(QsciLexerSQL* self, bool enable);
void QsciLexerSQL_OnSetFoldComments(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetFoldComments(QsciLexerSQL* self, bool fold);
void QsciLexerSQL_OnSetFoldCompact(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetFoldCompact(QsciLexerSQL* self, bool fold);
int QsciLexerSQL_LexerId(const QsciLexerSQL* self);
void QsciLexerSQL_OnLexerId(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperLexerId(const QsciLexerSQL* self);
const char* QsciLexerSQL_AutoCompletionFillups(const QsciLexerSQL* self);
void QsciLexerSQL_OnAutoCompletionFillups(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_SuperAutoCompletionFillups(const QsciLexerSQL* self);
libqt_list /* of libqt_string */ QsciLexerSQL_AutoCompletionWordSeparators(const QsciLexerSQL* self);
void QsciLexerSQL_OnAutoCompletionWordSeparators(const QsciLexerSQL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerSQL_SuperAutoCompletionWordSeparators(const QsciLexerSQL* self);
const char* QsciLexerSQL_BlockEnd(const QsciLexerSQL* self, int* style);
void QsciLexerSQL_OnBlockEnd(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_SuperBlockEnd(const QsciLexerSQL* self, int* style);
int QsciLexerSQL_BlockLookback(const QsciLexerSQL* self);
void QsciLexerSQL_OnBlockLookback(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperBlockLookback(const QsciLexerSQL* self);
const char* QsciLexerSQL_BlockStart(const QsciLexerSQL* self, int* style);
void QsciLexerSQL_OnBlockStart(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_SuperBlockStart(const QsciLexerSQL* self, int* style);
const char* QsciLexerSQL_BlockStartKeyword(const QsciLexerSQL* self, int* style);
void QsciLexerSQL_OnBlockStartKeyword(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_SuperBlockStartKeyword(const QsciLexerSQL* self, int* style);
bool QsciLexerSQL_CaseSensitive(const QsciLexerSQL* self);
void QsciLexerSQL_OnCaseSensitive(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_SuperCaseSensitive(const QsciLexerSQL* self);
QColor* QsciLexerSQL_Color(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnColor(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_SuperColor(const QsciLexerSQL* self, int style);
bool QsciLexerSQL_EolFill(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnEolFill(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_SuperEolFill(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_Font(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnFont(const QsciLexerSQL* self, intptr_t slot);
QFont* QsciLexerSQL_SuperFont(const QsciLexerSQL* self, int style);
int QsciLexerSQL_IndentationGuideView(const QsciLexerSQL* self);
void QsciLexerSQL_OnIndentationGuideView(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperIndentationGuideView(const QsciLexerSQL* self);
int QsciLexerSQL_DefaultStyle(const QsciLexerSQL* self);
void QsciLexerSQL_OnDefaultStyle(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperDefaultStyle(const QsciLexerSQL* self);
QColor* QsciLexerSQL_Paper(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnPaper(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_SuperPaper(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_DefaultColor2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnDefaultColor2(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_SuperDefaultColor2(const QsciLexerSQL* self, int style);
QFont* QsciLexerSQL_DefaultFont2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnDefaultFont2(const QsciLexerSQL* self, intptr_t slot);
QFont* QsciLexerSQL_SuperDefaultFont2(const QsciLexerSQL* self, int style);
QColor* QsciLexerSQL_DefaultPaper2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_OnDefaultPaper2(const QsciLexerSQL* self, intptr_t slot);
QColor* QsciLexerSQL_SuperDefaultPaper2(const QsciLexerSQL* self, int style);
void QsciLexerSQL_SetEditor(QsciLexerSQL* self, QsciScintilla* editor);
void QsciLexerSQL_OnSetEditor(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetEditor(QsciLexerSQL* self, QsciScintilla* editor);
int QsciLexerSQL_StyleBitsNeeded(const QsciLexerSQL* self);
void QsciLexerSQL_OnStyleBitsNeeded(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperStyleBitsNeeded(const QsciLexerSQL* self);
const char* QsciLexerSQL_WordCharacters(const QsciLexerSQL* self);
void QsciLexerSQL_OnWordCharacters(const QsciLexerSQL* self, intptr_t slot);
const char* QsciLexerSQL_SuperWordCharacters(const QsciLexerSQL* self);
void QsciLexerSQL_SetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle);
void QsciLexerSQL_OnSetAutoIndentStyle(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle);
void QsciLexerSQL_SetColor(QsciLexerSQL* self, const QColor* c, int style);
void QsciLexerSQL_OnSetColor(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetColor(QsciLexerSQL* self, const QColor* c, int style);
void QsciLexerSQL_SetEolFill(QsciLexerSQL* self, bool eoffill, int style);
void QsciLexerSQL_OnSetEolFill(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetEolFill(QsciLexerSQL* self, bool eoffill, int style);
void QsciLexerSQL_SetFont(QsciLexerSQL* self, const QFont* f, int style);
void QsciLexerSQL_OnSetFont(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetFont(QsciLexerSQL* self, const QFont* f, int style);
void QsciLexerSQL_SetPaper(QsciLexerSQL* self, const QColor* c, int style);
void QsciLexerSQL_OnSetPaper(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperSetPaper(QsciLexerSQL* self, const QColor* c, int style);
bool QsciLexerSQL_ReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSQL_OnReadProperties(QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_SuperReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSQL_WriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSQL_OnWriteProperties(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_SuperWriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSQL_Event(QsciLexerSQL* self, QEvent* event);
void QsciLexerSQL_OnEvent(QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_SuperEvent(QsciLexerSQL* self, QEvent* event);
bool QsciLexerSQL_EventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event);
void QsciLexerSQL_OnEventFilter(QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_SuperEventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event);
void QsciLexerSQL_TimerEvent(QsciLexerSQL* self, QTimerEvent* event);
void QsciLexerSQL_OnTimerEvent(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperTimerEvent(QsciLexerSQL* self, QTimerEvent* event);
void QsciLexerSQL_ChildEvent(QsciLexerSQL* self, QChildEvent* event);
void QsciLexerSQL_OnChildEvent(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperChildEvent(QsciLexerSQL* self, QChildEvent* event);
void QsciLexerSQL_CustomEvent(QsciLexerSQL* self, QEvent* event);
void QsciLexerSQL_OnCustomEvent(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperCustomEvent(QsciLexerSQL* self, QEvent* event);
void QsciLexerSQL_ConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_OnConnectNotify(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_DisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_OnDisconnectNotify(QsciLexerSQL* self, intptr_t slot);
void QsciLexerSQL_SuperDisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
libqt_string QsciLexerSQL_TextAsBytes(const QsciLexerSQL* self, const libqt_string text);
void QsciLexerSQL_OnTextAsBytes(const QsciLexerSQL* self, intptr_t slot);
libqt_string QsciLexerSQL_SuperTextAsBytes(const QsciLexerSQL* self, const libqt_string text);
libqt_string QsciLexerSQL_BytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
void QsciLexerSQL_OnBytesAsText(const QsciLexerSQL* self, intptr_t slot);
libqt_string QsciLexerSQL_SuperBytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
QObject* QsciLexerSQL_Sender(const QsciLexerSQL* self);
void QsciLexerSQL_OnSender(const QsciLexerSQL* self, intptr_t slot);
QObject* QsciLexerSQL_SuperSender(const QsciLexerSQL* self);
int QsciLexerSQL_SenderSignalIndex(const QsciLexerSQL* self);
void QsciLexerSQL_OnSenderSignalIndex(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperSenderSignalIndex(const QsciLexerSQL* self);
int QsciLexerSQL_Receivers(const QsciLexerSQL* self, const char* signal);
void QsciLexerSQL_OnReceivers(const QsciLexerSQL* self, intptr_t slot);
int QsciLexerSQL_SuperReceivers(const QsciLexerSQL* self, const char* signal);
bool QsciLexerSQL_IsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_OnIsSignalConnected(const QsciLexerSQL* self, intptr_t slot);
bool QsciLexerSQL_SuperIsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
void QsciLexerSQL_Delete(QsciLexerSQL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
