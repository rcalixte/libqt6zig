#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBASH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBASH_H

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
typedef struct QsciLexerBash QsciLexerBash;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerBash* QsciLexerBash_new();
QsciLexerBash* QsciLexerBash_new2(QObject* parent);
QMetaObject* QsciLexerBash_MetaObject(const QsciLexerBash* self);
void* QsciLexerBash_Metacast(QsciLexerBash* self, const char* param1);
int QsciLexerBash_Metacall(QsciLexerBash* self, int param1, int param2, void** param3);
const char* QsciLexerBash_Language(const QsciLexerBash* self);
const char* QsciLexerBash_Lexer(const QsciLexerBash* self);
int QsciLexerBash_BraceStyle(const QsciLexerBash* self);
const char* QsciLexerBash_WordCharacters(const QsciLexerBash* self);
QColor* QsciLexerBash_DefaultColor(const QsciLexerBash* self, int style);
bool QsciLexerBash_DefaultEolFill(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_DefaultFont(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_DefaultPaper(const QsciLexerBash* self, int style);
const char* QsciLexerBash_Keywords(const QsciLexerBash* self, int set);
libqt_string QsciLexerBash_Description(const QsciLexerBash* self, int style);
void QsciLexerBash_RefreshProperties(QsciLexerBash* self);
bool QsciLexerBash_FoldComments(const QsciLexerBash* self);
bool QsciLexerBash_FoldCompact(const QsciLexerBash* self);
void QsciLexerBash_SetFoldComments(QsciLexerBash* self, bool fold);
void QsciLexerBash_SetFoldCompact(QsciLexerBash* self, bool fold);
void QsciLexerBash_OnMetaObject(const QsciLexerBash* self, intptr_t slot);
QMetaObject* QsciLexerBash_SuperMetaObject(const QsciLexerBash* self);
void QsciLexerBash_OnMetacast(QsciLexerBash* self, intptr_t slot);
void* QsciLexerBash_SuperMetacast(QsciLexerBash* self, const char* param1);
void QsciLexerBash_OnMetacall(QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperMetacall(QsciLexerBash* self, int param1, int param2, void** param3);
void QsciLexerBash_OnSetFoldComments(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetFoldComments(QsciLexerBash* self, bool fold);
void QsciLexerBash_OnSetFoldCompact(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetFoldCompact(QsciLexerBash* self, bool fold);
int QsciLexerBash_LexerId(const QsciLexerBash* self);
void QsciLexerBash_OnLexerId(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperLexerId(const QsciLexerBash* self);
const char* QsciLexerBash_AutoCompletionFillups(const QsciLexerBash* self);
void QsciLexerBash_OnAutoCompletionFillups(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_SuperAutoCompletionFillups(const QsciLexerBash* self);
libqt_list /* of libqt_string */ QsciLexerBash_AutoCompletionWordSeparators(const QsciLexerBash* self);
void QsciLexerBash_OnAutoCompletionWordSeparators(const QsciLexerBash* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerBash_SuperAutoCompletionWordSeparators(const QsciLexerBash* self);
const char* QsciLexerBash_BlockEnd(const QsciLexerBash* self, int* style);
void QsciLexerBash_OnBlockEnd(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_SuperBlockEnd(const QsciLexerBash* self, int* style);
int QsciLexerBash_BlockLookback(const QsciLexerBash* self);
void QsciLexerBash_OnBlockLookback(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperBlockLookback(const QsciLexerBash* self);
const char* QsciLexerBash_BlockStart(const QsciLexerBash* self, int* style);
void QsciLexerBash_OnBlockStart(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_SuperBlockStart(const QsciLexerBash* self, int* style);
const char* QsciLexerBash_BlockStartKeyword(const QsciLexerBash* self, int* style);
void QsciLexerBash_OnBlockStartKeyword(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_SuperBlockStartKeyword(const QsciLexerBash* self, int* style);
bool QsciLexerBash_CaseSensitive(const QsciLexerBash* self);
void QsciLexerBash_OnCaseSensitive(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_SuperCaseSensitive(const QsciLexerBash* self);
QColor* QsciLexerBash_Color(const QsciLexerBash* self, int style);
void QsciLexerBash_OnColor(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_SuperColor(const QsciLexerBash* self, int style);
bool QsciLexerBash_EolFill(const QsciLexerBash* self, int style);
void QsciLexerBash_OnEolFill(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_SuperEolFill(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_Font(const QsciLexerBash* self, int style);
void QsciLexerBash_OnFont(const QsciLexerBash* self, intptr_t slot);
QFont* QsciLexerBash_SuperFont(const QsciLexerBash* self, int style);
int QsciLexerBash_IndentationGuideView(const QsciLexerBash* self);
void QsciLexerBash_OnIndentationGuideView(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperIndentationGuideView(const QsciLexerBash* self);
int QsciLexerBash_DefaultStyle(const QsciLexerBash* self);
void QsciLexerBash_OnDefaultStyle(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperDefaultStyle(const QsciLexerBash* self);
QColor* QsciLexerBash_Paper(const QsciLexerBash* self, int style);
void QsciLexerBash_OnPaper(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_SuperPaper(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_DefaultColor2(const QsciLexerBash* self, int style);
void QsciLexerBash_OnDefaultColor2(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_SuperDefaultColor2(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_DefaultFont2(const QsciLexerBash* self, int style);
void QsciLexerBash_OnDefaultFont2(const QsciLexerBash* self, intptr_t slot);
QFont* QsciLexerBash_SuperDefaultFont2(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_DefaultPaper2(const QsciLexerBash* self, int style);
void QsciLexerBash_OnDefaultPaper2(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_SuperDefaultPaper2(const QsciLexerBash* self, int style);
void QsciLexerBash_SetEditor(QsciLexerBash* self, QsciScintilla* editor);
void QsciLexerBash_OnSetEditor(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetEditor(QsciLexerBash* self, QsciScintilla* editor);
int QsciLexerBash_StyleBitsNeeded(const QsciLexerBash* self);
void QsciLexerBash_OnStyleBitsNeeded(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperStyleBitsNeeded(const QsciLexerBash* self);
void QsciLexerBash_SetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle);
void QsciLexerBash_OnSetAutoIndentStyle(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle);
void QsciLexerBash_SetColor(QsciLexerBash* self, const QColor* c, int style);
void QsciLexerBash_OnSetColor(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetColor(QsciLexerBash* self, const QColor* c, int style);
void QsciLexerBash_SetEolFill(QsciLexerBash* self, bool eoffill, int style);
void QsciLexerBash_OnSetEolFill(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetEolFill(QsciLexerBash* self, bool eoffill, int style);
void QsciLexerBash_SetFont(QsciLexerBash* self, const QFont* f, int style);
void QsciLexerBash_OnSetFont(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetFont(QsciLexerBash* self, const QFont* f, int style);
void QsciLexerBash_SetPaper(QsciLexerBash* self, const QColor* c, int style);
void QsciLexerBash_OnSetPaper(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperSetPaper(QsciLexerBash* self, const QColor* c, int style);
bool QsciLexerBash_ReadProperties(QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBash_OnReadProperties(QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_SuperReadProperties(QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBash_WriteProperties(const QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBash_OnWriteProperties(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_SuperWriteProperties(const QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBash_Event(QsciLexerBash* self, QEvent* event);
void QsciLexerBash_OnEvent(QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_SuperEvent(QsciLexerBash* self, QEvent* event);
bool QsciLexerBash_EventFilter(QsciLexerBash* self, QObject* watched, QEvent* event);
void QsciLexerBash_OnEventFilter(QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_SuperEventFilter(QsciLexerBash* self, QObject* watched, QEvent* event);
void QsciLexerBash_TimerEvent(QsciLexerBash* self, QTimerEvent* event);
void QsciLexerBash_OnTimerEvent(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperTimerEvent(QsciLexerBash* self, QTimerEvent* event);
void QsciLexerBash_ChildEvent(QsciLexerBash* self, QChildEvent* event);
void QsciLexerBash_OnChildEvent(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperChildEvent(QsciLexerBash* self, QChildEvent* event);
void QsciLexerBash_CustomEvent(QsciLexerBash* self, QEvent* event);
void QsciLexerBash_OnCustomEvent(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperCustomEvent(QsciLexerBash* self, QEvent* event);
void QsciLexerBash_ConnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_OnConnectNotify(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperConnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_DisconnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_OnDisconnectNotify(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_SuperDisconnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
libqt_string QsciLexerBash_TextAsBytes(const QsciLexerBash* self, const libqt_string text);
void QsciLexerBash_OnTextAsBytes(const QsciLexerBash* self, intptr_t slot);
libqt_string QsciLexerBash_SuperTextAsBytes(const QsciLexerBash* self, const libqt_string text);
libqt_string QsciLexerBash_BytesAsText(const QsciLexerBash* self, const char* bytes, int size);
void QsciLexerBash_OnBytesAsText(const QsciLexerBash* self, intptr_t slot);
libqt_string QsciLexerBash_SuperBytesAsText(const QsciLexerBash* self, const char* bytes, int size);
QObject* QsciLexerBash_Sender(const QsciLexerBash* self);
void QsciLexerBash_OnSender(const QsciLexerBash* self, intptr_t slot);
QObject* QsciLexerBash_SuperSender(const QsciLexerBash* self);
int QsciLexerBash_SenderSignalIndex(const QsciLexerBash* self);
void QsciLexerBash_OnSenderSignalIndex(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperSenderSignalIndex(const QsciLexerBash* self);
int QsciLexerBash_Receivers(const QsciLexerBash* self, const char* signal);
void QsciLexerBash_OnReceivers(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_SuperReceivers(const QsciLexerBash* self, const char* signal);
bool QsciLexerBash_IsSignalConnected(const QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_OnIsSignalConnected(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_SuperIsSignalConnected(const QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_Delete(QsciLexerBash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
