#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERJAVA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERJAVA_H

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
typedef struct QsciLexerJava QsciLexerJava;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJava* QsciLexerJava_new();
QsciLexerJava* QsciLexerJava_new2(QObject* parent);
QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self);
void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1);
int QsciLexerJava_Metacall(QsciLexerJava* self, int param1, int param2, void** param3);
const char* QsciLexerJava_Language(const QsciLexerJava* self);
const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set);
void QsciLexerJava_OnMetaObject(const QsciLexerJava* self, intptr_t slot);
QMetaObject* QsciLexerJava_SuperMetaObject(const QsciLexerJava* self);
void QsciLexerJava_OnMetacast(QsciLexerJava* self, intptr_t slot);
void* QsciLexerJava_SuperMetacast(QsciLexerJava* self, const char* param1);
void QsciLexerJava_OnMetacall(QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperMetacall(QsciLexerJava* self, int param1, int param2, void** param3);
void QsciLexerJava_SetFoldAtElse(QsciLexerJava* self, bool fold);
void QsciLexerJava_OnSetFoldAtElse(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetFoldAtElse(QsciLexerJava* self, bool fold);
void QsciLexerJava_SetFoldComments(QsciLexerJava* self, bool fold);
void QsciLexerJava_OnSetFoldComments(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetFoldComments(QsciLexerJava* self, bool fold);
void QsciLexerJava_SetFoldCompact(QsciLexerJava* self, bool fold);
void QsciLexerJava_OnSetFoldCompact(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetFoldCompact(QsciLexerJava* self, bool fold);
void QsciLexerJava_SetFoldPreprocessor(QsciLexerJava* self, bool fold);
void QsciLexerJava_OnSetFoldPreprocessor(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetFoldPreprocessor(QsciLexerJava* self, bool fold);
void QsciLexerJava_SetStylePreprocessor(QsciLexerJava* self, bool style);
void QsciLexerJava_OnSetStylePreprocessor(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetStylePreprocessor(QsciLexerJava* self, bool style);
const char* QsciLexerJava_Lexer(const QsciLexerJava* self);
void QsciLexerJava_OnLexer(const QsciLexerJava* self, intptr_t slot);
const char* QsciLexerJava_SuperLexer(const QsciLexerJava* self);
int QsciLexerJava_LexerId(const QsciLexerJava* self);
void QsciLexerJava_OnLexerId(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperLexerId(const QsciLexerJava* self);
const char* QsciLexerJava_AutoCompletionFillups(const QsciLexerJava* self);
void QsciLexerJava_OnAutoCompletionFillups(const QsciLexerJava* self, intptr_t slot);
const char* QsciLexerJava_SuperAutoCompletionFillups(const QsciLexerJava* self);
libqt_list /* of libqt_string */ QsciLexerJava_AutoCompletionWordSeparators(const QsciLexerJava* self);
void QsciLexerJava_OnAutoCompletionWordSeparators(const QsciLexerJava* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerJava_SuperAutoCompletionWordSeparators(const QsciLexerJava* self);
const char* QsciLexerJava_BlockEnd(const QsciLexerJava* self, int* style);
void QsciLexerJava_OnBlockEnd(const QsciLexerJava* self, intptr_t slot);
const char* QsciLexerJava_SuperBlockEnd(const QsciLexerJava* self, int* style);
int QsciLexerJava_BlockLookback(const QsciLexerJava* self);
void QsciLexerJava_OnBlockLookback(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperBlockLookback(const QsciLexerJava* self);
const char* QsciLexerJava_BlockStart(const QsciLexerJava* self, int* style);
void QsciLexerJava_OnBlockStart(const QsciLexerJava* self, intptr_t slot);
const char* QsciLexerJava_SuperBlockStart(const QsciLexerJava* self, int* style);
const char* QsciLexerJava_BlockStartKeyword(const QsciLexerJava* self, int* style);
void QsciLexerJava_OnBlockStartKeyword(const QsciLexerJava* self, intptr_t slot);
const char* QsciLexerJava_SuperBlockStartKeyword(const QsciLexerJava* self, int* style);
int QsciLexerJava_BraceStyle(const QsciLexerJava* self);
void QsciLexerJava_OnBraceStyle(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperBraceStyle(const QsciLexerJava* self);
bool QsciLexerJava_CaseSensitive(const QsciLexerJava* self);
void QsciLexerJava_OnCaseSensitive(const QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperCaseSensitive(const QsciLexerJava* self);
QColor* QsciLexerJava_Color(const QsciLexerJava* self, int style);
void QsciLexerJava_OnColor(const QsciLexerJava* self, intptr_t slot);
QColor* QsciLexerJava_SuperColor(const QsciLexerJava* self, int style);
bool QsciLexerJava_EolFill(const QsciLexerJava* self, int style);
void QsciLexerJava_OnEolFill(const QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperEolFill(const QsciLexerJava* self, int style);
QFont* QsciLexerJava_Font(const QsciLexerJava* self, int style);
void QsciLexerJava_OnFont(const QsciLexerJava* self, intptr_t slot);
QFont* QsciLexerJava_SuperFont(const QsciLexerJava* self, int style);
int QsciLexerJava_IndentationGuideView(const QsciLexerJava* self);
void QsciLexerJava_OnIndentationGuideView(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperIndentationGuideView(const QsciLexerJava* self);
int QsciLexerJava_DefaultStyle(const QsciLexerJava* self);
void QsciLexerJava_OnDefaultStyle(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperDefaultStyle(const QsciLexerJava* self);
libqt_string QsciLexerJava_Description(const QsciLexerJava* self, int style);
void QsciLexerJava_OnDescription(const QsciLexerJava* self, intptr_t slot);
libqt_string QsciLexerJava_SuperDescription(const QsciLexerJava* self, int style);
QColor* QsciLexerJava_Paper(const QsciLexerJava* self, int style);
void QsciLexerJava_OnPaper(const QsciLexerJava* self, intptr_t slot);
QColor* QsciLexerJava_SuperPaper(const QsciLexerJava* self, int style);
QColor* QsciLexerJava_DefaultColor2(const QsciLexerJava* self, int style);
void QsciLexerJava_OnDefaultColor2(const QsciLexerJava* self, intptr_t slot);
QColor* QsciLexerJava_SuperDefaultColor2(const QsciLexerJava* self, int style);
bool QsciLexerJava_DefaultEolFill(const QsciLexerJava* self, int style);
void QsciLexerJava_OnDefaultEolFill(const QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperDefaultEolFill(const QsciLexerJava* self, int style);
QFont* QsciLexerJava_DefaultFont2(const QsciLexerJava* self, int style);
void QsciLexerJava_OnDefaultFont2(const QsciLexerJava* self, intptr_t slot);
QFont* QsciLexerJava_SuperDefaultFont2(const QsciLexerJava* self, int style);
QColor* QsciLexerJava_DefaultPaper2(const QsciLexerJava* self, int style);
void QsciLexerJava_OnDefaultPaper2(const QsciLexerJava* self, intptr_t slot);
QColor* QsciLexerJava_SuperDefaultPaper2(const QsciLexerJava* self, int style);
void QsciLexerJava_SetEditor(QsciLexerJava* self, QsciScintilla* editor);
void QsciLexerJava_OnSetEditor(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetEditor(QsciLexerJava* self, QsciScintilla* editor);
void QsciLexerJava_RefreshProperties(QsciLexerJava* self);
void QsciLexerJava_OnRefreshProperties(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperRefreshProperties(QsciLexerJava* self);
int QsciLexerJava_StyleBitsNeeded(const QsciLexerJava* self);
void QsciLexerJava_OnStyleBitsNeeded(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperStyleBitsNeeded(const QsciLexerJava* self);
const char* QsciLexerJava_WordCharacters(const QsciLexerJava* self);
void QsciLexerJava_OnWordCharacters(const QsciLexerJava* self, intptr_t slot);
const char* QsciLexerJava_SuperWordCharacters(const QsciLexerJava* self);
void QsciLexerJava_SetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle);
void QsciLexerJava_OnSetAutoIndentStyle(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetAutoIndentStyle(QsciLexerJava* self, int autoindentstyle);
void QsciLexerJava_SetColor(QsciLexerJava* self, const QColor* c, int style);
void QsciLexerJava_OnSetColor(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetColor(QsciLexerJava* self, const QColor* c, int style);
void QsciLexerJava_SetEolFill(QsciLexerJava* self, bool eoffill, int style);
void QsciLexerJava_OnSetEolFill(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetEolFill(QsciLexerJava* self, bool eoffill, int style);
void QsciLexerJava_SetFont(QsciLexerJava* self, const QFont* f, int style);
void QsciLexerJava_OnSetFont(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetFont(QsciLexerJava* self, const QFont* f, int style);
void QsciLexerJava_SetPaper(QsciLexerJava* self, const QColor* c, int style);
void QsciLexerJava_OnSetPaper(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperSetPaper(QsciLexerJava* self, const QColor* c, int style);
bool QsciLexerJava_ReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJava_OnReadProperties(QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJava_WriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJava_OnWriteProperties(const QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperWriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJava_Event(QsciLexerJava* self, QEvent* event);
void QsciLexerJava_OnEvent(QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperEvent(QsciLexerJava* self, QEvent* event);
bool QsciLexerJava_EventFilter(QsciLexerJava* self, QObject* watched, QEvent* event);
void QsciLexerJava_OnEventFilter(QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperEventFilter(QsciLexerJava* self, QObject* watched, QEvent* event);
void QsciLexerJava_TimerEvent(QsciLexerJava* self, QTimerEvent* event);
void QsciLexerJava_OnTimerEvent(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperTimerEvent(QsciLexerJava* self, QTimerEvent* event);
void QsciLexerJava_ChildEvent(QsciLexerJava* self, QChildEvent* event);
void QsciLexerJava_OnChildEvent(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperChildEvent(QsciLexerJava* self, QChildEvent* event);
void QsciLexerJava_CustomEvent(QsciLexerJava* self, QEvent* event);
void QsciLexerJava_OnCustomEvent(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperCustomEvent(QsciLexerJava* self, QEvent* event);
void QsciLexerJava_ConnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
void QsciLexerJava_OnConnectNotify(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperConnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
void QsciLexerJava_DisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
void QsciLexerJava_OnDisconnectNotify(QsciLexerJava* self, intptr_t slot);
void QsciLexerJava_SuperDisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
libqt_string QsciLexerJava_TextAsBytes(const QsciLexerJava* self, const libqt_string text);
void QsciLexerJava_OnTextAsBytes(const QsciLexerJava* self, intptr_t slot);
libqt_string QsciLexerJava_SuperTextAsBytes(const QsciLexerJava* self, const libqt_string text);
libqt_string QsciLexerJava_BytesAsText(const QsciLexerJava* self, const char* bytes, int size);
void QsciLexerJava_OnBytesAsText(const QsciLexerJava* self, intptr_t slot);
libqt_string QsciLexerJava_SuperBytesAsText(const QsciLexerJava* self, const char* bytes, int size);
QObject* QsciLexerJava_Sender(const QsciLexerJava* self);
void QsciLexerJava_OnSender(const QsciLexerJava* self, intptr_t slot);
QObject* QsciLexerJava_SuperSender(const QsciLexerJava* self);
int QsciLexerJava_SenderSignalIndex(const QsciLexerJava* self);
void QsciLexerJava_OnSenderSignalIndex(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperSenderSignalIndex(const QsciLexerJava* self);
int QsciLexerJava_Receivers(const QsciLexerJava* self, const char* signal);
void QsciLexerJava_OnReceivers(const QsciLexerJava* self, intptr_t slot);
int QsciLexerJava_SuperReceivers(const QsciLexerJava* self, const char* signal);
bool QsciLexerJava_IsSignalConnected(const QsciLexerJava* self, const QMetaMethod* signal);
void QsciLexerJava_OnIsSignalConnected(const QsciLexerJava* self, intptr_t slot);
bool QsciLexerJava_SuperIsSignalConnected(const QsciLexerJava* self, const QMetaMethod* signal);
void QsciLexerJava_Delete(QsciLexerJava* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
