#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBATCH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBATCH_H

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
typedef struct QsciLexerBatch QsciLexerBatch;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerBatch* QsciLexerBatch_new();
QsciLexerBatch* QsciLexerBatch_new2(QObject* parent);
QMetaObject* QsciLexerBatch_MetaObject(const QsciLexerBatch* self);
void* QsciLexerBatch_Metacast(QsciLexerBatch* self, const char* param1);
int QsciLexerBatch_Metacall(QsciLexerBatch* self, int param1, int param2, void** param3);
const char* QsciLexerBatch_Language(const QsciLexerBatch* self);
const char* QsciLexerBatch_Lexer(const QsciLexerBatch* self);
const char* QsciLexerBatch_WordCharacters(const QsciLexerBatch* self);
bool QsciLexerBatch_CaseSensitive(const QsciLexerBatch* self);
QColor* QsciLexerBatch_DefaultColor(const QsciLexerBatch* self, int style);
bool QsciLexerBatch_DefaultEolFill(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_DefaultFont(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_DefaultPaper(const QsciLexerBatch* self, int style);
const char* QsciLexerBatch_Keywords(const QsciLexerBatch* self, int set);
libqt_string QsciLexerBatch_Description(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnMetaObject(const QsciLexerBatch* self, intptr_t slot);
QMetaObject* QsciLexerBatch_SuperMetaObject(const QsciLexerBatch* self);
void QsciLexerBatch_OnMetacast(QsciLexerBatch* self, intptr_t slot);
void* QsciLexerBatch_SuperMetacast(QsciLexerBatch* self, const char* param1);
void QsciLexerBatch_OnMetacall(QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperMetacall(QsciLexerBatch* self, int param1, int param2, void** param3);
int QsciLexerBatch_LexerId(const QsciLexerBatch* self);
void QsciLexerBatch_OnLexerId(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperLexerId(const QsciLexerBatch* self);
const char* QsciLexerBatch_AutoCompletionFillups(const QsciLexerBatch* self);
void QsciLexerBatch_OnAutoCompletionFillups(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_SuperAutoCompletionFillups(const QsciLexerBatch* self);
libqt_list /* of libqt_string */ QsciLexerBatch_AutoCompletionWordSeparators(const QsciLexerBatch* self);
void QsciLexerBatch_OnAutoCompletionWordSeparators(const QsciLexerBatch* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerBatch_SuperAutoCompletionWordSeparators(const QsciLexerBatch* self);
const char* QsciLexerBatch_BlockEnd(const QsciLexerBatch* self, int* style);
void QsciLexerBatch_OnBlockEnd(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_SuperBlockEnd(const QsciLexerBatch* self, int* style);
int QsciLexerBatch_BlockLookback(const QsciLexerBatch* self);
void QsciLexerBatch_OnBlockLookback(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperBlockLookback(const QsciLexerBatch* self);
const char* QsciLexerBatch_BlockStart(const QsciLexerBatch* self, int* style);
void QsciLexerBatch_OnBlockStart(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_SuperBlockStart(const QsciLexerBatch* self, int* style);
const char* QsciLexerBatch_BlockStartKeyword(const QsciLexerBatch* self, int* style);
void QsciLexerBatch_OnBlockStartKeyword(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_SuperBlockStartKeyword(const QsciLexerBatch* self, int* style);
int QsciLexerBatch_BraceStyle(const QsciLexerBatch* self);
void QsciLexerBatch_OnBraceStyle(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperBraceStyle(const QsciLexerBatch* self);
QColor* QsciLexerBatch_Color(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnColor(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_SuperColor(const QsciLexerBatch* self, int style);
bool QsciLexerBatch_EolFill(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnEolFill(const QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_SuperEolFill(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_Font(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnFont(const QsciLexerBatch* self, intptr_t slot);
QFont* QsciLexerBatch_SuperFont(const QsciLexerBatch* self, int style);
int QsciLexerBatch_IndentationGuideView(const QsciLexerBatch* self);
void QsciLexerBatch_OnIndentationGuideView(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperIndentationGuideView(const QsciLexerBatch* self);
int QsciLexerBatch_DefaultStyle(const QsciLexerBatch* self);
void QsciLexerBatch_OnDefaultStyle(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperDefaultStyle(const QsciLexerBatch* self);
QColor* QsciLexerBatch_Paper(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnPaper(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_SuperPaper(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_DefaultColor2(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnDefaultColor2(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_SuperDefaultColor2(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_DefaultFont2(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnDefaultFont2(const QsciLexerBatch* self, intptr_t slot);
QFont* QsciLexerBatch_SuperDefaultFont2(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_DefaultPaper2(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnDefaultPaper2(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_SuperDefaultPaper2(const QsciLexerBatch* self, int style);
void QsciLexerBatch_SetEditor(QsciLexerBatch* self, QsciScintilla* editor);
void QsciLexerBatch_OnSetEditor(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperSetEditor(QsciLexerBatch* self, QsciScintilla* editor);
void QsciLexerBatch_RefreshProperties(QsciLexerBatch* self);
void QsciLexerBatch_OnRefreshProperties(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperRefreshProperties(QsciLexerBatch* self);
int QsciLexerBatch_StyleBitsNeeded(const QsciLexerBatch* self);
void QsciLexerBatch_OnStyleBitsNeeded(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperStyleBitsNeeded(const QsciLexerBatch* self);
void QsciLexerBatch_SetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle);
void QsciLexerBatch_OnSetAutoIndentStyle(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperSetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle);
void QsciLexerBatch_SetColor(QsciLexerBatch* self, const QColor* c, int style);
void QsciLexerBatch_OnSetColor(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperSetColor(QsciLexerBatch* self, const QColor* c, int style);
void QsciLexerBatch_SetEolFill(QsciLexerBatch* self, bool eoffill, int style);
void QsciLexerBatch_OnSetEolFill(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperSetEolFill(QsciLexerBatch* self, bool eoffill, int style);
void QsciLexerBatch_SetFont(QsciLexerBatch* self, const QFont* f, int style);
void QsciLexerBatch_OnSetFont(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperSetFont(QsciLexerBatch* self, const QFont* f, int style);
void QsciLexerBatch_SetPaper(QsciLexerBatch* self, const QColor* c, int style);
void QsciLexerBatch_OnSetPaper(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperSetPaper(QsciLexerBatch* self, const QColor* c, int style);
bool QsciLexerBatch_ReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBatch_OnReadProperties(QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_SuperReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBatch_WriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBatch_OnWriteProperties(const QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_SuperWriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBatch_Event(QsciLexerBatch* self, QEvent* event);
void QsciLexerBatch_OnEvent(QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_SuperEvent(QsciLexerBatch* self, QEvent* event);
bool QsciLexerBatch_EventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event);
void QsciLexerBatch_OnEventFilter(QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_SuperEventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event);
void QsciLexerBatch_TimerEvent(QsciLexerBatch* self, QTimerEvent* event);
void QsciLexerBatch_OnTimerEvent(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperTimerEvent(QsciLexerBatch* self, QTimerEvent* event);
void QsciLexerBatch_ChildEvent(QsciLexerBatch* self, QChildEvent* event);
void QsciLexerBatch_OnChildEvent(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperChildEvent(QsciLexerBatch* self, QChildEvent* event);
void QsciLexerBatch_CustomEvent(QsciLexerBatch* self, QEvent* event);
void QsciLexerBatch_OnCustomEvent(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperCustomEvent(QsciLexerBatch* self, QEvent* event);
void QsciLexerBatch_ConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_OnConnectNotify(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_DisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_OnDisconnectNotify(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_SuperDisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
libqt_string QsciLexerBatch_TextAsBytes(const QsciLexerBatch* self, const libqt_string text);
void QsciLexerBatch_OnTextAsBytes(const QsciLexerBatch* self, intptr_t slot);
libqt_string QsciLexerBatch_SuperTextAsBytes(const QsciLexerBatch* self, const libqt_string text);
libqt_string QsciLexerBatch_BytesAsText(const QsciLexerBatch* self, const char* bytes, int size);
void QsciLexerBatch_OnBytesAsText(const QsciLexerBatch* self, intptr_t slot);
libqt_string QsciLexerBatch_SuperBytesAsText(const QsciLexerBatch* self, const char* bytes, int size);
QObject* QsciLexerBatch_Sender(const QsciLexerBatch* self);
void QsciLexerBatch_OnSender(const QsciLexerBatch* self, intptr_t slot);
QObject* QsciLexerBatch_SuperSender(const QsciLexerBatch* self);
int QsciLexerBatch_SenderSignalIndex(const QsciLexerBatch* self);
void QsciLexerBatch_OnSenderSignalIndex(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperSenderSignalIndex(const QsciLexerBatch* self);
int QsciLexerBatch_Receivers(const QsciLexerBatch* self, const char* signal);
void QsciLexerBatch_OnReceivers(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_SuperReceivers(const QsciLexerBatch* self, const char* signal);
bool QsciLexerBatch_IsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_OnIsSignalConnected(const QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_SuperIsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_Delete(QsciLexerBatch* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
