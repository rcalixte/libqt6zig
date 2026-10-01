#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJAVASCRIPT_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJAVASCRIPT_H

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
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerJavaScript QsciLexerJavaScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJavaScript* QsciLexerJavaScript_new();
QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent);
QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self);
void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1);
int QsciLexerJavaScript_Metacall(QsciLexerJavaScript* self, int param1, int param2, void** param3);
libqt_string QsciLexerJavaScript_Tr(const char* s);
const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style);
bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style);
const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set);
libqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style);
libqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c);
libqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n);
void QsciLexerJavaScript_OnMetaObject(QsciLexerJavaScript* self, intptr_t slot);
QMetaObject* QsciLexerJavaScript_SuperMetaObject(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnMetacast(QsciLexerJavaScript* self, intptr_t slot);
void* QsciLexerJavaScript_SuperMetacast(QsciLexerJavaScript* self, const char* param1);
void QsciLexerJavaScript_OnMetacall(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_SuperMetacall(QsciLexerJavaScript* self, int param1, int param2, void** param3);
void QsciLexerJavaScript_SetFoldAtElse(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldAtElse(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetFoldAtElse(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetFoldComments(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldComments(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetFoldComments(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetFoldCompact(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldCompact(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetFoldCompact(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetFoldPreprocessor(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldPreprocessor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetFoldPreprocessor(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetStylePreprocessor(QsciLexerJavaScript* self, bool style);
void QsciLexerJavaScript_OnSetStylePreprocessor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetStylePreprocessor(QsciLexerJavaScript* self, bool style);
const char* QsciLexerJavaScript_Lexer(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnLexer(QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_SuperLexer(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_LexerId(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnLexerId(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_SuperLexerId(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_AutoCompletionFillups(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnAutoCompletionFillups(QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_SuperAutoCompletionFillups(const QsciLexerJavaScript* self);
libqt_list /* of libqt_string */ QsciLexerJavaScript_AutoCompletionWordSeparators(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnAutoCompletionWordSeparators(QsciLexerJavaScript* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerJavaScript_SuperAutoCompletionWordSeparators(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_BlockEnd(const QsciLexerJavaScript* self, int* style);
void QsciLexerJavaScript_OnBlockEnd(QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_SuperBlockEnd(const QsciLexerJavaScript* self, int* style);
int QsciLexerJavaScript_BlockLookback(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnBlockLookback(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_SuperBlockLookback(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_BlockStart(const QsciLexerJavaScript* self, int* style);
void QsciLexerJavaScript_OnBlockStart(QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_SuperBlockStart(const QsciLexerJavaScript* self, int* style);
const char* QsciLexerJavaScript_BlockStartKeyword(const QsciLexerJavaScript* self, int* style);
void QsciLexerJavaScript_OnBlockStartKeyword(QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_SuperBlockStartKeyword(const QsciLexerJavaScript* self, int* style);
int QsciLexerJavaScript_BraceStyle(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnBraceStyle(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_SuperBraceStyle(const QsciLexerJavaScript* self);
bool QsciLexerJavaScript_CaseSensitive(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnCaseSensitive(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_SuperCaseSensitive(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_Color(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnColor(QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_SuperColor(const QsciLexerJavaScript* self, int style);
bool QsciLexerJavaScript_EolFill(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnEolFill(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_SuperEolFill(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_Font(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnFont(QsciLexerJavaScript* self, intptr_t slot);
QFont* QsciLexerJavaScript_SuperFont(const QsciLexerJavaScript* self, int style);
int QsciLexerJavaScript_IndentationGuideView(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnIndentationGuideView(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_SuperIndentationGuideView(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_DefaultStyle(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnDefaultStyle(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_SuperDefaultStyle(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_Paper(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnPaper(QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_SuperPaper(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultColor2(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnDefaultColor2(QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_SuperDefaultColor2(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_DefaultFont2(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnDefaultFont2(QsciLexerJavaScript* self, intptr_t slot);
QFont* QsciLexerJavaScript_SuperDefaultFont2(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultPaper2(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnDefaultPaper2(QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_SuperDefaultPaper2(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_SetEditor(QsciLexerJavaScript* self, QsciScintilla* editor);
void QsciLexerJavaScript_OnSetEditor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetEditor(QsciLexerJavaScript* self, QsciScintilla* editor);
void QsciLexerJavaScript_RefreshProperties(QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnRefreshProperties(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperRefreshProperties(QsciLexerJavaScript* self);
int QsciLexerJavaScript_StyleBitsNeeded(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnStyleBitsNeeded(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_SuperStyleBitsNeeded(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_WordCharacters(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnWordCharacters(QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_SuperWordCharacters(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_SetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle);
void QsciLexerJavaScript_OnSetAutoIndentStyle(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle);
void QsciLexerJavaScript_SetColor(QsciLexerJavaScript* self, const QColor* c, int style);
void QsciLexerJavaScript_OnSetColor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetColor(QsciLexerJavaScript* self, const QColor* c, int style);
void QsciLexerJavaScript_SetEolFill(QsciLexerJavaScript* self, bool eoffill, int style);
void QsciLexerJavaScript_OnSetEolFill(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetEolFill(QsciLexerJavaScript* self, bool eoffill, int style);
void QsciLexerJavaScript_SetFont(QsciLexerJavaScript* self, const QFont* f, int style);
void QsciLexerJavaScript_OnSetFont(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetFont(QsciLexerJavaScript* self, const QFont* f, int style);
void QsciLexerJavaScript_SetPaper(QsciLexerJavaScript* self, const QColor* c, int style);
void QsciLexerJavaScript_OnSetPaper(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperSetPaper(QsciLexerJavaScript* self, const QColor* c, int style);
bool QsciLexerJavaScript_ReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJavaScript_OnReadProperties(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_SuperReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJavaScript_WriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJavaScript_OnWriteProperties(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_SuperWriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJavaScript_Event(QsciLexerJavaScript* self, QEvent* event);
void QsciLexerJavaScript_OnEvent(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_SuperEvent(QsciLexerJavaScript* self, QEvent* event);
bool QsciLexerJavaScript_EventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event);
void QsciLexerJavaScript_OnEventFilter(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_SuperEventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event);
void QsciLexerJavaScript_TimerEvent(QsciLexerJavaScript* self, QTimerEvent* event);
void QsciLexerJavaScript_OnTimerEvent(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperTimerEvent(QsciLexerJavaScript* self, QTimerEvent* event);
void QsciLexerJavaScript_ChildEvent(QsciLexerJavaScript* self, QChildEvent* event);
void QsciLexerJavaScript_OnChildEvent(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperChildEvent(QsciLexerJavaScript* self, QChildEvent* event);
void QsciLexerJavaScript_CustomEvent(QsciLexerJavaScript* self, QEvent* event);
void QsciLexerJavaScript_OnCustomEvent(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperCustomEvent(QsciLexerJavaScript* self, QEvent* event);
void QsciLexerJavaScript_ConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_OnConnectNotify(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_DisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_OnDisconnectNotify(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_SuperDisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
libqt_string QsciLexerJavaScript_TextAsBytes(const QsciLexerJavaScript* self, const libqt_string text);
libqt_string QsciLexerJavaScript_BytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size);
QObject* QsciLexerJavaScript_Sender(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_SenderSignalIndex(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_Receivers(const QsciLexerJavaScript* self, const char* signal);
bool QsciLexerJavaScript_IsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
