#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTEX_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTEX_H

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
typedef struct QsciLexerTeX QsciLexerTeX;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerTeX* QsciLexerTeX_new();
QsciLexerTeX* QsciLexerTeX_new2(QObject* parent);
QMetaObject* QsciLexerTeX_MetaObject(const QsciLexerTeX* self);
void* QsciLexerTeX_Metacast(QsciLexerTeX* self, const char* param1);
int QsciLexerTeX_Metacall(QsciLexerTeX* self, int param1, int param2, void** param3);
libqt_string QsciLexerTeX_Tr(const char* s);
const char* QsciLexerTeX_Language(const QsciLexerTeX* self);
const char* QsciLexerTeX_Lexer(const QsciLexerTeX* self);
const char* QsciLexerTeX_WordCharacters(const QsciLexerTeX* self);
QColor* QsciLexerTeX_DefaultColor(const QsciLexerTeX* self, int style);
const char* QsciLexerTeX_Keywords(const QsciLexerTeX* self, int set);
libqt_string QsciLexerTeX_Description(const QsciLexerTeX* self, int style);
void QsciLexerTeX_RefreshProperties(QsciLexerTeX* self);
void QsciLexerTeX_SetFoldComments(QsciLexerTeX* self, bool fold);
bool QsciLexerTeX_FoldComments(const QsciLexerTeX* self);
void QsciLexerTeX_SetFoldCompact(QsciLexerTeX* self, bool fold);
bool QsciLexerTeX_FoldCompact(const QsciLexerTeX* self);
void QsciLexerTeX_SetProcessComments(QsciLexerTeX* self, bool enable);
bool QsciLexerTeX_ProcessComments(const QsciLexerTeX* self);
void QsciLexerTeX_SetProcessIf(QsciLexerTeX* self, bool enable);
bool QsciLexerTeX_ProcessIf(const QsciLexerTeX* self);
libqt_string QsciLexerTeX_Tr2(const char* s, const char* c);
libqt_string QsciLexerTeX_Tr3(const char* s, const char* c, int n);
void QsciLexerTeX_OnMetaObject(QsciLexerTeX* self, intptr_t slot);
QMetaObject* QsciLexerTeX_SuperMetaObject(const QsciLexerTeX* self);
void QsciLexerTeX_OnMetacast(QsciLexerTeX* self, intptr_t slot);
void* QsciLexerTeX_SuperMetacast(QsciLexerTeX* self, const char* param1);
void QsciLexerTeX_OnMetacall(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_SuperMetacall(QsciLexerTeX* self, int param1, int param2, void** param3);
int QsciLexerTeX_LexerId(const QsciLexerTeX* self);
void QsciLexerTeX_OnLexerId(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_SuperLexerId(const QsciLexerTeX* self);
const char* QsciLexerTeX_AutoCompletionFillups(const QsciLexerTeX* self);
void QsciLexerTeX_OnAutoCompletionFillups(QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_SuperAutoCompletionFillups(const QsciLexerTeX* self);
libqt_list /* of libqt_string */ QsciLexerTeX_AutoCompletionWordSeparators(const QsciLexerTeX* self);
void QsciLexerTeX_OnAutoCompletionWordSeparators(QsciLexerTeX* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerTeX_SuperAutoCompletionWordSeparators(const QsciLexerTeX* self);
const char* QsciLexerTeX_BlockEnd(const QsciLexerTeX* self, int* style);
void QsciLexerTeX_OnBlockEnd(QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_SuperBlockEnd(const QsciLexerTeX* self, int* style);
int QsciLexerTeX_BlockLookback(const QsciLexerTeX* self);
void QsciLexerTeX_OnBlockLookback(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_SuperBlockLookback(const QsciLexerTeX* self);
const char* QsciLexerTeX_BlockStart(const QsciLexerTeX* self, int* style);
void QsciLexerTeX_OnBlockStart(QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_SuperBlockStart(const QsciLexerTeX* self, int* style);
const char* QsciLexerTeX_BlockStartKeyword(const QsciLexerTeX* self, int* style);
void QsciLexerTeX_OnBlockStartKeyword(QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_SuperBlockStartKeyword(const QsciLexerTeX* self, int* style);
int QsciLexerTeX_BraceStyle(const QsciLexerTeX* self);
void QsciLexerTeX_OnBraceStyle(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_SuperBraceStyle(const QsciLexerTeX* self);
bool QsciLexerTeX_CaseSensitive(const QsciLexerTeX* self);
void QsciLexerTeX_OnCaseSensitive(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_SuperCaseSensitive(const QsciLexerTeX* self);
QColor* QsciLexerTeX_Color(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnColor(QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_SuperColor(const QsciLexerTeX* self, int style);
bool QsciLexerTeX_EolFill(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnEolFill(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_SuperEolFill(const QsciLexerTeX* self, int style);
QFont* QsciLexerTeX_Font(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnFont(QsciLexerTeX* self, intptr_t slot);
QFont* QsciLexerTeX_SuperFont(const QsciLexerTeX* self, int style);
int QsciLexerTeX_IndentationGuideView(const QsciLexerTeX* self);
void QsciLexerTeX_OnIndentationGuideView(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_SuperIndentationGuideView(const QsciLexerTeX* self);
int QsciLexerTeX_DefaultStyle(const QsciLexerTeX* self);
void QsciLexerTeX_OnDefaultStyle(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_SuperDefaultStyle(const QsciLexerTeX* self);
QColor* QsciLexerTeX_Paper(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnPaper(QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_SuperPaper(const QsciLexerTeX* self, int style);
QColor* QsciLexerTeX_DefaultColor2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultColor2(QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_SuperDefaultColor2(const QsciLexerTeX* self, int style);
bool QsciLexerTeX_DefaultEolFill(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultEolFill(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_SuperDefaultEolFill(const QsciLexerTeX* self, int style);
QFont* QsciLexerTeX_DefaultFont2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultFont2(QsciLexerTeX* self, intptr_t slot);
QFont* QsciLexerTeX_SuperDefaultFont2(const QsciLexerTeX* self, int style);
QColor* QsciLexerTeX_DefaultPaper2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultPaper2(QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_SuperDefaultPaper2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_SetEditor(QsciLexerTeX* self, QsciScintilla* editor);
void QsciLexerTeX_OnSetEditor(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperSetEditor(QsciLexerTeX* self, QsciScintilla* editor);
int QsciLexerTeX_StyleBitsNeeded(const QsciLexerTeX* self);
void QsciLexerTeX_OnStyleBitsNeeded(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_SuperStyleBitsNeeded(const QsciLexerTeX* self);
void QsciLexerTeX_SetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle);
void QsciLexerTeX_OnSetAutoIndentStyle(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperSetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle);
void QsciLexerTeX_SetColor(QsciLexerTeX* self, const QColor* c, int style);
void QsciLexerTeX_OnSetColor(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperSetColor(QsciLexerTeX* self, const QColor* c, int style);
void QsciLexerTeX_SetEolFill(QsciLexerTeX* self, bool eoffill, int style);
void QsciLexerTeX_OnSetEolFill(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperSetEolFill(QsciLexerTeX* self, bool eoffill, int style);
void QsciLexerTeX_SetFont(QsciLexerTeX* self, const QFont* f, int style);
void QsciLexerTeX_OnSetFont(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperSetFont(QsciLexerTeX* self, const QFont* f, int style);
void QsciLexerTeX_SetPaper(QsciLexerTeX* self, const QColor* c, int style);
void QsciLexerTeX_OnSetPaper(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperSetPaper(QsciLexerTeX* self, const QColor* c, int style);
bool QsciLexerTeX_ReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTeX_OnReadProperties(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_SuperReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTeX_WriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTeX_OnWriteProperties(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_SuperWriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTeX_Event(QsciLexerTeX* self, QEvent* event);
void QsciLexerTeX_OnEvent(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_SuperEvent(QsciLexerTeX* self, QEvent* event);
bool QsciLexerTeX_EventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event);
void QsciLexerTeX_OnEventFilter(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_SuperEventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event);
void QsciLexerTeX_TimerEvent(QsciLexerTeX* self, QTimerEvent* event);
void QsciLexerTeX_OnTimerEvent(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperTimerEvent(QsciLexerTeX* self, QTimerEvent* event);
void QsciLexerTeX_ChildEvent(QsciLexerTeX* self, QChildEvent* event);
void QsciLexerTeX_OnChildEvent(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperChildEvent(QsciLexerTeX* self, QChildEvent* event);
void QsciLexerTeX_CustomEvent(QsciLexerTeX* self, QEvent* event);
void QsciLexerTeX_OnCustomEvent(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperCustomEvent(QsciLexerTeX* self, QEvent* event);
void QsciLexerTeX_ConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_OnConnectNotify(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_DisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_OnDisconnectNotify(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_SuperDisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
libqt_string QsciLexerTeX_TextAsBytes(const QsciLexerTeX* self, const libqt_string text);
libqt_string QsciLexerTeX_BytesAsText(const QsciLexerTeX* self, const char* bytes, int size);
QObject* QsciLexerTeX_Sender(const QsciLexerTeX* self);
int QsciLexerTeX_SenderSignalIndex(const QsciLexerTeX* self);
int QsciLexerTeX_Receivers(const QsciLexerTeX* self, const char* signal);
bool QsciLexerTeX_IsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_Delete(QsciLexerTeX* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
