#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJSON_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJSON_H

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
typedef struct QsciLexerJSON QsciLexerJSON;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJSON* QsciLexerJSON_new();
QsciLexerJSON* QsciLexerJSON_new2(QObject* parent);
QMetaObject* QsciLexerJSON_MetaObject(const QsciLexerJSON* self);
void* QsciLexerJSON_Metacast(QsciLexerJSON* self, const char* param1);
int QsciLexerJSON_Metacall(QsciLexerJSON* self, int param1, int param2, void** param3);
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
void QsciLexerJSON_OnMetaObject(QsciLexerJSON* self, intptr_t slot);
QMetaObject* QsciLexerJSON_SuperMetaObject(const QsciLexerJSON* self);
void QsciLexerJSON_OnMetacast(QsciLexerJSON* self, intptr_t slot);
void* QsciLexerJSON_SuperMetacast(QsciLexerJSON* self, const char* param1);
void QsciLexerJSON_OnMetacall(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_SuperMetacall(QsciLexerJSON* self, int param1, int param2, void** param3);
int QsciLexerJSON_LexerId(const QsciLexerJSON* self);
void QsciLexerJSON_OnLexerId(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_SuperLexerId(const QsciLexerJSON* self);
const char* QsciLexerJSON_AutoCompletionFillups(const QsciLexerJSON* self);
void QsciLexerJSON_OnAutoCompletionFillups(QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_SuperAutoCompletionFillups(const QsciLexerJSON* self);
libqt_list /* of libqt_string */ QsciLexerJSON_AutoCompletionWordSeparators(const QsciLexerJSON* self);
void QsciLexerJSON_OnAutoCompletionWordSeparators(QsciLexerJSON* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerJSON_SuperAutoCompletionWordSeparators(const QsciLexerJSON* self);
const char* QsciLexerJSON_BlockEnd(const QsciLexerJSON* self, int* style);
void QsciLexerJSON_OnBlockEnd(QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_SuperBlockEnd(const QsciLexerJSON* self, int* style);
int QsciLexerJSON_BlockLookback(const QsciLexerJSON* self);
void QsciLexerJSON_OnBlockLookback(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_SuperBlockLookback(const QsciLexerJSON* self);
const char* QsciLexerJSON_BlockStart(const QsciLexerJSON* self, int* style);
void QsciLexerJSON_OnBlockStart(QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_SuperBlockStart(const QsciLexerJSON* self, int* style);
const char* QsciLexerJSON_BlockStartKeyword(const QsciLexerJSON* self, int* style);
void QsciLexerJSON_OnBlockStartKeyword(QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_SuperBlockStartKeyword(const QsciLexerJSON* self, int* style);
int QsciLexerJSON_BraceStyle(const QsciLexerJSON* self);
void QsciLexerJSON_OnBraceStyle(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_SuperBraceStyle(const QsciLexerJSON* self);
bool QsciLexerJSON_CaseSensitive(const QsciLexerJSON* self);
void QsciLexerJSON_OnCaseSensitive(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_SuperCaseSensitive(const QsciLexerJSON* self);
QColor* QsciLexerJSON_Color(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnColor(QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_SuperColor(const QsciLexerJSON* self, int style);
bool QsciLexerJSON_EolFill(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnEolFill(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_SuperEolFill(const QsciLexerJSON* self, int style);
QFont* QsciLexerJSON_Font(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnFont(QsciLexerJSON* self, intptr_t slot);
QFont* QsciLexerJSON_SuperFont(const QsciLexerJSON* self, int style);
int QsciLexerJSON_IndentationGuideView(const QsciLexerJSON* self);
void QsciLexerJSON_OnIndentationGuideView(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_SuperIndentationGuideView(const QsciLexerJSON* self);
int QsciLexerJSON_DefaultStyle(const QsciLexerJSON* self);
void QsciLexerJSON_OnDefaultStyle(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_SuperDefaultStyle(const QsciLexerJSON* self);
QColor* QsciLexerJSON_Paper(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnPaper(QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_SuperPaper(const QsciLexerJSON* self, int style);
QColor* QsciLexerJSON_DefaultColor2(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnDefaultColor2(QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_SuperDefaultColor2(const QsciLexerJSON* self, int style);
QFont* QsciLexerJSON_DefaultFont2(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnDefaultFont2(QsciLexerJSON* self, intptr_t slot);
QFont* QsciLexerJSON_SuperDefaultFont2(const QsciLexerJSON* self, int style);
QColor* QsciLexerJSON_DefaultPaper2(const QsciLexerJSON* self, int style);
void QsciLexerJSON_OnDefaultPaper2(QsciLexerJSON* self, intptr_t slot);
QColor* QsciLexerJSON_SuperDefaultPaper2(const QsciLexerJSON* self, int style);
void QsciLexerJSON_SetEditor(QsciLexerJSON* self, QsciScintilla* editor);
void QsciLexerJSON_OnSetEditor(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperSetEditor(QsciLexerJSON* self, QsciScintilla* editor);
int QsciLexerJSON_StyleBitsNeeded(const QsciLexerJSON* self);
void QsciLexerJSON_OnStyleBitsNeeded(QsciLexerJSON* self, intptr_t slot);
int QsciLexerJSON_SuperStyleBitsNeeded(const QsciLexerJSON* self);
const char* QsciLexerJSON_WordCharacters(const QsciLexerJSON* self);
void QsciLexerJSON_OnWordCharacters(QsciLexerJSON* self, intptr_t slot);
const char* QsciLexerJSON_SuperWordCharacters(const QsciLexerJSON* self);
void QsciLexerJSON_SetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle);
void QsciLexerJSON_OnSetAutoIndentStyle(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperSetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle);
void QsciLexerJSON_SetColor(QsciLexerJSON* self, const QColor* c, int style);
void QsciLexerJSON_OnSetColor(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperSetColor(QsciLexerJSON* self, const QColor* c, int style);
void QsciLexerJSON_SetEolFill(QsciLexerJSON* self, bool eoffill, int style);
void QsciLexerJSON_OnSetEolFill(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperSetEolFill(QsciLexerJSON* self, bool eoffill, int style);
void QsciLexerJSON_SetFont(QsciLexerJSON* self, const QFont* f, int style);
void QsciLexerJSON_OnSetFont(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperSetFont(QsciLexerJSON* self, const QFont* f, int style);
void QsciLexerJSON_SetPaper(QsciLexerJSON* self, const QColor* c, int style);
void QsciLexerJSON_OnSetPaper(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperSetPaper(QsciLexerJSON* self, const QColor* c, int style);
bool QsciLexerJSON_ReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJSON_OnReadProperties(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_SuperReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJSON_WriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJSON_OnWriteProperties(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_SuperWriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJSON_Event(QsciLexerJSON* self, QEvent* event);
void QsciLexerJSON_OnEvent(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_SuperEvent(QsciLexerJSON* self, QEvent* event);
bool QsciLexerJSON_EventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event);
void QsciLexerJSON_OnEventFilter(QsciLexerJSON* self, intptr_t slot);
bool QsciLexerJSON_SuperEventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event);
void QsciLexerJSON_TimerEvent(QsciLexerJSON* self, QTimerEvent* event);
void QsciLexerJSON_OnTimerEvent(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperTimerEvent(QsciLexerJSON* self, QTimerEvent* event);
void QsciLexerJSON_ChildEvent(QsciLexerJSON* self, QChildEvent* event);
void QsciLexerJSON_OnChildEvent(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperChildEvent(QsciLexerJSON* self, QChildEvent* event);
void QsciLexerJSON_CustomEvent(QsciLexerJSON* self, QEvent* event);
void QsciLexerJSON_OnCustomEvent(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperCustomEvent(QsciLexerJSON* self, QEvent* event);
void QsciLexerJSON_ConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_OnConnectNotify(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_DisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_OnDisconnectNotify(QsciLexerJSON* self, intptr_t slot);
void QsciLexerJSON_SuperDisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
libqt_string QsciLexerJSON_TextAsBytes(const QsciLexerJSON* self, const libqt_string text);
libqt_string QsciLexerJSON_BytesAsText(const QsciLexerJSON* self, const char* bytes, int size);
QObject* QsciLexerJSON_Sender(const QsciLexerJSON* self);
int QsciLexerJSON_SenderSignalIndex(const QsciLexerJSON* self);
int QsciLexerJSON_Receivers(const QsciLexerJSON* self, const char* signal);
bool QsciLexerJSON_IsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal);
void QsciLexerJSON_Delete(QsciLexerJSON* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
