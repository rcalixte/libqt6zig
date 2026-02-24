#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPOSTSCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPOSTSCRIPT_H

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
typedef struct QsciLexerPostScript QsciLexerPostScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPostScript* QsciLexerPostScript_new();
QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent);
QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self);
void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1);
int QsciLexerPostScript_Metacall(QsciLexerPostScript* self, int param1, int param2, void** param3);
const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self);
int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style);
const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set);
libqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self);
bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self);
int QsciLexerPostScript_Level(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self);
void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize);
void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level);
void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_OnMetaObject(const QsciLexerPostScript* self, intptr_t slot);
QMetaObject* QsciLexerPostScript_SuperMetaObject(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnMetacast(QsciLexerPostScript* self, intptr_t slot);
void* QsciLexerPostScript_SuperMetacast(QsciLexerPostScript* self, const char* param1);
void QsciLexerPostScript_OnMetacall(QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperMetacall(QsciLexerPostScript* self, int param1, int param2, void** param3);
void QsciLexerPostScript_OnSetTokenize(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetTokenize(QsciLexerPostScript* self, bool tokenize);
void QsciLexerPostScript_OnSetLevel(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetLevel(QsciLexerPostScript* self, int level);
void QsciLexerPostScript_OnSetFoldCompact(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetFoldCompact(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_OnSetFoldAtElse(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetFoldAtElse(QsciLexerPostScript* self, bool fold);
int QsciLexerPostScript_LexerId(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnLexerId(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperLexerId(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_AutoCompletionFillups(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnAutoCompletionFillups(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_SuperAutoCompletionFillups(const QsciLexerPostScript* self);
libqt_list /* of libqt_string */ QsciLexerPostScript_AutoCompletionWordSeparators(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnAutoCompletionWordSeparators(const QsciLexerPostScript* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerPostScript_SuperAutoCompletionWordSeparators(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_BlockEnd(const QsciLexerPostScript* self, int* style);
void QsciLexerPostScript_OnBlockEnd(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_SuperBlockEnd(const QsciLexerPostScript* self, int* style);
int QsciLexerPostScript_BlockLookback(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnBlockLookback(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperBlockLookback(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_BlockStart(const QsciLexerPostScript* self, int* style);
void QsciLexerPostScript_OnBlockStart(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_SuperBlockStart(const QsciLexerPostScript* self, int* style);
const char* QsciLexerPostScript_BlockStartKeyword(const QsciLexerPostScript* self, int* style);
void QsciLexerPostScript_OnBlockStartKeyword(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_SuperBlockStartKeyword(const QsciLexerPostScript* self, int* style);
bool QsciLexerPostScript_CaseSensitive(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnCaseSensitive(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperCaseSensitive(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_Color(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnColor(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_SuperColor(const QsciLexerPostScript* self, int style);
bool QsciLexerPostScript_EolFill(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnEolFill(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperEolFill(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_Font(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnFont(const QsciLexerPostScript* self, intptr_t slot);
QFont* QsciLexerPostScript_SuperFont(const QsciLexerPostScript* self, int style);
int QsciLexerPostScript_IndentationGuideView(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnIndentationGuideView(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperIndentationGuideView(const QsciLexerPostScript* self);
int QsciLexerPostScript_DefaultStyle(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnDefaultStyle(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperDefaultStyle(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_Paper(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnPaper(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_SuperPaper(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultColor2(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultColor2(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_SuperDefaultColor2(const QsciLexerPostScript* self, int style);
bool QsciLexerPostScript_DefaultEolFill(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultEolFill(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperDefaultEolFill(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_DefaultFont2(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultFont2(const QsciLexerPostScript* self, intptr_t slot);
QFont* QsciLexerPostScript_SuperDefaultFont2(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultPaper2(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultPaper2(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_SuperDefaultPaper2(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_SetEditor(QsciLexerPostScript* self, QsciScintilla* editor);
void QsciLexerPostScript_OnSetEditor(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetEditor(QsciLexerPostScript* self, QsciScintilla* editor);
int QsciLexerPostScript_StyleBitsNeeded(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnStyleBitsNeeded(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperStyleBitsNeeded(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_WordCharacters(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnWordCharacters(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_SuperWordCharacters(const QsciLexerPostScript* self);
void QsciLexerPostScript_SetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle);
void QsciLexerPostScript_OnSetAutoIndentStyle(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle);
void QsciLexerPostScript_SetColor(QsciLexerPostScript* self, const QColor* c, int style);
void QsciLexerPostScript_OnSetColor(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetColor(QsciLexerPostScript* self, const QColor* c, int style);
void QsciLexerPostScript_SetEolFill(QsciLexerPostScript* self, bool eoffill, int style);
void QsciLexerPostScript_OnSetEolFill(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetEolFill(QsciLexerPostScript* self, bool eoffill, int style);
void QsciLexerPostScript_SetFont(QsciLexerPostScript* self, const QFont* f, int style);
void QsciLexerPostScript_OnSetFont(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetFont(QsciLexerPostScript* self, const QFont* f, int style);
void QsciLexerPostScript_SetPaper(QsciLexerPostScript* self, const QColor* c, int style);
void QsciLexerPostScript_OnSetPaper(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperSetPaper(QsciLexerPostScript* self, const QColor* c, int style);
bool QsciLexerPostScript_ReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPostScript_OnReadProperties(QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPostScript_WriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPostScript_OnWriteProperties(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperWriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPostScript_Event(QsciLexerPostScript* self, QEvent* event);
void QsciLexerPostScript_OnEvent(QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperEvent(QsciLexerPostScript* self, QEvent* event);
bool QsciLexerPostScript_EventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event);
void QsciLexerPostScript_OnEventFilter(QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperEventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event);
void QsciLexerPostScript_TimerEvent(QsciLexerPostScript* self, QTimerEvent* event);
void QsciLexerPostScript_OnTimerEvent(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperTimerEvent(QsciLexerPostScript* self, QTimerEvent* event);
void QsciLexerPostScript_ChildEvent(QsciLexerPostScript* self, QChildEvent* event);
void QsciLexerPostScript_OnChildEvent(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperChildEvent(QsciLexerPostScript* self, QChildEvent* event);
void QsciLexerPostScript_CustomEvent(QsciLexerPostScript* self, QEvent* event);
void QsciLexerPostScript_OnCustomEvent(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperCustomEvent(QsciLexerPostScript* self, QEvent* event);
void QsciLexerPostScript_ConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
void QsciLexerPostScript_OnConnectNotify(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
void QsciLexerPostScript_DisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
void QsciLexerPostScript_OnDisconnectNotify(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_SuperDisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
libqt_string QsciLexerPostScript_TextAsBytes(const QsciLexerPostScript* self, const libqt_string text);
void QsciLexerPostScript_OnTextAsBytes(const QsciLexerPostScript* self, intptr_t slot);
libqt_string QsciLexerPostScript_SuperTextAsBytes(const QsciLexerPostScript* self, const libqt_string text);
libqt_string QsciLexerPostScript_BytesAsText(const QsciLexerPostScript* self, const char* bytes, int size);
void QsciLexerPostScript_OnBytesAsText(const QsciLexerPostScript* self, intptr_t slot);
libqt_string QsciLexerPostScript_SuperBytesAsText(const QsciLexerPostScript* self, const char* bytes, int size);
QObject* QsciLexerPostScript_Sender(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnSender(const QsciLexerPostScript* self, intptr_t slot);
QObject* QsciLexerPostScript_SuperSender(const QsciLexerPostScript* self);
int QsciLexerPostScript_SenderSignalIndex(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnSenderSignalIndex(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperSenderSignalIndex(const QsciLexerPostScript* self);
int QsciLexerPostScript_Receivers(const QsciLexerPostScript* self, const char* signal);
void QsciLexerPostScript_OnReceivers(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_SuperReceivers(const QsciLexerPostScript* self, const char* signal);
bool QsciLexerPostScript_IsSignalConnected(const QsciLexerPostScript* self, const QMetaMethod* signal);
void QsciLexerPostScript_OnIsSignalConnected(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_SuperIsSignalConnected(const QsciLexerPostScript* self, const QMetaMethod* signal);
void QsciLexerPostScript_Delete(QsciLexerPostScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
