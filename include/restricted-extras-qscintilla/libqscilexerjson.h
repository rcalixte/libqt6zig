#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERJSON_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERJSON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
typedef struct QsciLexerJSON QsciLexerJSON;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJSON* QsciLexerJSON_new();
QsciLexerJSON* QsciLexerJSON_new2(QObject* parent);
QMetaObject* QsciLexerJSON_MetaObject(const QsciLexerJSON* self);
void* QsciLexerJSON_Metacast(QsciLexerJSON* self, const char* param1);
int QsciLexerJSON_Metacall(QsciLexerJSON* self, int param1, int param2, void** param3);
void QsciLexerJSON_OnMetacall(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseMetacall(QsciLexerJSON* self, int param1, int param2, void** param3);
libqt_string QsciLexerJSON_Tr(const char* s);
const char* QsciLexerJSON_Language(const QsciLexerJSON* self);
const char* QsciLexerJSON_Lexer(const QsciLexerJSON* self);
QColor* QsciLexerJSON_DefaultColor(const QsciLexerJSON* self, int style);
bool QsciLexerJSON_DefaultEolFill(const QsciLexerJSON* self, int style);
QFont* QsciLexerJSON_DefaultFont(const QsciLexerJSON* self, int style);
QColor* QsciLexerJSON_DefaultPaper(const QsciLexerJSON* self, int style);
const char* QsciLexerJSON_Keywords(const QsciLexerJSON* self, int set);
libqt_string QsciLexerJSON_Description(const QsciLexerJSON* self, int style);
void QsciLexerJSON_RefreshProperties(QsciLexerJSON* self);
void QsciLexerJSON_SetHighlightComments(QsciLexerJSON* self, bool highlight);
bool QsciLexerJSON_HighlightComments(const QsciLexerJSON* self);
void QsciLexerJSON_SetHighlightEscapeSequences(QsciLexerJSON* self, bool highlight);
bool QsciLexerJSON_HighlightEscapeSequences(const QsciLexerJSON* self);
void QsciLexerJSON_SetFoldCompact(QsciLexerJSON* self, bool fold);
bool QsciLexerJSON_FoldCompact(const QsciLexerJSON* self);
libqt_string QsciLexerJSON_Tr2(const char* s, const char* c);
libqt_string QsciLexerJSON_Tr3(const char* s, const char* c, int n);
int QsciLexerJSON_LexerId(const QsciLexerJSON* self);
void QsciLexerJSON_OnLexerId(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseLexerId(const QsciLexerJSON* self);
const char* QsciLexerJSON_AutoCompletionFillups(const QsciLexerJSON* self);
void QsciLexerJSON_OnAutoCompletionFillups(const QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_QBaseAutoCompletionFillups(const QsciLexerJSON* self);
libqt_list /* of libqt_string */ QsciLexerJSON_AutoCompletionWordSeparators(const QsciLexerJSON* self);
void QsciLexerJSON_OnAutoCompletionWordSeparators(const QsciLexerJSON* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerJSON_QBaseAutoCompletionWordSeparators(const QsciLexerJSON* self);
const char* QsciLexerJSON_BlockEnd(const QsciLexerJSON* self, int* style);
void QsciLexerJSON_OnBlockEnd(const QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_QBaseBlockEnd(const QsciLexerJSON* self, int* style);
int QsciLexerJSON_BlockLookback(const QsciLexerJSON* self);
void QsciLexerJSON_OnBlockLookback(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseBlockLookback(const QsciLexerJSON* self);
const char* QsciLexerJSON_BlockStart(const QsciLexerJSON* self, int* style);
void QsciLexerJSON_OnBlockStart(const QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_QBaseBlockStart(const QsciLexerJSON* self, int* style);
const char* QsciLexerJSON_BlockStartKeyword(const QsciLexerJSON* self, int* style);
void QsciLexerJSON_OnBlockStartKeyword(const QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_QBaseBlockStartKeyword(const QsciLexerJSON* self, int* style);
int QsciLexerJSON_BraceStyle(const QsciLexerJSON* self);
void QsciLexerJSON_OnBraceStyle(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseBraceStyle(const QsciLexerJSON* self);
bool QsciLexerJSON_CaseSensitive(const QsciLexerJSON* self);
void QsciLexerJSON_OnCaseSensitive(const QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_QBaseCaseSensitive(const QsciLexerJSON* self);
QColor* QsciLexerJSON_Color(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnColor(const QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_QBaseColor(const QsciLexerJSON* self, int style);
bool QsciLexerJSON_EolFill(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnEolFill(const QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_QBaseEolFill(const QsciLexerJSON* self, int style);
QFont* QsciLexerJSON_Font(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnFont(const QsciLexerJSON* self, intptr_t slot);
QFont* QsciLexerJSON_QBaseFont(const QsciLexerJSON* self, int style);
int QsciLexerJSON_IndentationGuideView(const QsciLexerJSON* self);
void QsciLexerJSON_OnIndentationGuideView(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseIndentationGuideView(const QsciLexerJSON* self);
int QsciLexerJSON_DefaultStyle(const QsciLexerJSON* self);
void QsciLexerJSON_OnDefaultStyle(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseDefaultStyle(const QsciLexerJSON* self);
QColor* QsciLexerJSON_Paper(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnPaper(const QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_QBasePaper(const QsciLexerJSON* self, int style);
QColor* QsciLexerJSON_DefaultColorWithStyle(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnDefaultColorWithStyle(const QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_QBaseDefaultColorWithStyle(const QsciLexerJSON* self, int style);
QFont* QsciLexerJSON_DefaultFontWithStyle(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnDefaultFontWithStyle(const QsciLexerJSON* self, intptr_t slot);
QFont* QsciLexerJSON_QBaseDefaultFontWithStyle(const QsciLexerJSON* self, int style);
QColor* QsciLexerJSON_DefaultPaperWithStyle(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnDefaultPaperWithStyle(const QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_QBaseDefaultPaperWithStyle(const QsciLexerJSON* self, int style);
void QsciLexerJSON_SetEditor(QsciLexerJSON* self, QsciScintilla* editor);
void QsciLexerJSON_OnSetEditor(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseSetEditor(QsciLexerJSON* self, QsciScintilla* editor);
int QsciLexerJSON_StyleBitsNeeded(const QsciLexerJSON* self);
void QsciLexerJSON_OnStyleBitsNeeded(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseStyleBitsNeeded(const QsciLexerJSON* self);
const char* QsciLexerJSON_WordCharacters(const QsciLexerJSON* self);
void QsciLexerJSON_OnWordCharacters(const QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_QBaseWordCharacters(const QsciLexerJSON* self);
void QsciLexerJSON_SetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle);
void QsciLexerJSON_OnSetAutoIndentStyle(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseSetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle);
void QsciLexerJSON_SetColor(QsciLexerJSON* self, const QColor* c, int style);
void QsciLexerJSON_OnSetColor(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseSetColor(QsciLexerJSON* self, const QColor* c, int style);
void QsciLexerJSON_SetEolFill(QsciLexerJSON* self, bool eoffill, int style);
void QsciLexerJSON_OnSetEolFill(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseSetEolFill(QsciLexerJSON* self, bool eoffill, int style);
void QsciLexerJSON_SetFont(QsciLexerJSON* self, const QFont* f, int style);
void QsciLexerJSON_OnSetFont(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseSetFont(QsciLexerJSON* self, const QFont* f, int style);
void QsciLexerJSON_SetPaper(QsciLexerJSON* self, const QColor* c, int style);
void QsciLexerJSON_OnSetPaper(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseSetPaper(QsciLexerJSON* self, const QColor* c, int style);
bool QsciLexerJSON_ReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJSON_OnReadProperties(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_QBaseReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJSON_WriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJSON_OnWriteProperties(const QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_QBaseWriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJSON_Event(QsciLexerJSON* self, QEvent* event);
void QsciLexerJSON_OnEvent(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_QBaseEvent(QsciLexerJSON* self, QEvent* event);
bool QsciLexerJSON_EventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event);
void QsciLexerJSON_OnEventFilter(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_QBaseEventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event);
void QsciLexerJSON_TimerEvent(QsciLexerJSON* self, QTimerEvent* event);
void QsciLexerJSON_OnTimerEvent(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseTimerEvent(QsciLexerJSON* self, QTimerEvent* event);
void QsciLexerJSON_ChildEvent(QsciLexerJSON* self, QChildEvent* event);
void QsciLexerJSON_OnChildEvent(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseChildEvent(QsciLexerJSON* self, QChildEvent* event);
void QsciLexerJSON_CustomEvent(QsciLexerJSON* self, QEvent* event);
void QsciLexerJSON_OnCustomEvent(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseCustomEvent(QsciLexerJSON* self, QEvent* event);
void QsciLexerJSON_ConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_OnConnectNotify(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_DisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_OnDisconnectNotify(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_QBaseDisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
libqt_string QsciLexerJSON_TextAsBytes(const QsciLexerJSON* self, const libqt_string text);
void QsciLexerJSON_OnTextAsBytes(const QsciLexerJSON* self, intptr_t slot);
libqt_string QsciLexerJSON_QBaseTextAsBytes(const QsciLexerJSON* self, const libqt_string text);
libqt_string QsciLexerJSON_BytesAsText(const QsciLexerJSON* self, const char* bytes, int size);
void QsciLexerJSON_OnBytesAsText(const QsciLexerJSON* self, intptr_t slot);
libqt_string QsciLexerJSON_QBaseBytesAsText(const QsciLexerJSON* self, const char* bytes, int size);
QObject* QsciLexerJSON_Sender(const QsciLexerJSON* self);
void QsciLexerJSON_OnSender(const QsciLexerJSON* self, intptr_t slot);
QObject* QsciLexerJSON_QBaseSender(const QsciLexerJSON* self);
int QsciLexerJSON_SenderSignalIndex(const QsciLexerJSON* self);
void QsciLexerJSON_OnSenderSignalIndex(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseSenderSignalIndex(const QsciLexerJSON* self);
int QsciLexerJSON_Receivers(const QsciLexerJSON* self, const char* signal);
void QsciLexerJSON_OnReceivers(const QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_QBaseReceivers(const QsciLexerJSON* self, const char* signal);
bool QsciLexerJSON_IsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_OnIsSignalConnected(const QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_QBaseIsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_Delete(QsciLexerJSON* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
