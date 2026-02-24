#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERRUBY_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERRUBY_H

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
typedef struct QsciLexerRuby QsciLexerRuby;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerRuby* QsciLexerRuby_new();
QsciLexerRuby* QsciLexerRuby_new2(QObject* parent);
QMetaObject* QsciLexerRuby_MetaObject(const QsciLexerRuby* self);
void* QsciLexerRuby_Metacast(QsciLexerRuby* self, const char* param1);
int QsciLexerRuby_Metacall(QsciLexerRuby* self, int param1, int param2, void** param3);
const char* QsciLexerRuby_Language(const QsciLexerRuby* self);
const char* QsciLexerRuby_Lexer(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockEnd(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockStart(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockStartKeyword(const QsciLexerRuby* self);
int QsciLexerRuby_BraceStyle(const QsciLexerRuby* self);
QColor* QsciLexerRuby_DefaultColor(const QsciLexerRuby* self, int style);
bool QsciLexerRuby_DefaultEolFill(const QsciLexerRuby* self, int style);
QFont* QsciLexerRuby_DefaultFont(const QsciLexerRuby* self, int style);
QColor* QsciLexerRuby_DefaultPaper(const QsciLexerRuby* self, int style);
const char* QsciLexerRuby_Keywords(const QsciLexerRuby* self, int set);
libqt_string QsciLexerRuby_Description(const QsciLexerRuby* self, int style);
void QsciLexerRuby_RefreshProperties(QsciLexerRuby* self);
void QsciLexerRuby_SetFoldComments(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_FoldComments(const QsciLexerRuby* self);
void QsciLexerRuby_SetFoldCompact(QsciLexerRuby* self, bool fold);
bool QsciLexerRuby_FoldCompact(const QsciLexerRuby* self);
const char* QsciLexerRuby_BlockEnd1(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_BlockStart1(const QsciLexerRuby* self, int* style);
const char* QsciLexerRuby_BlockStartKeyword1(const QsciLexerRuby* self, int* style);
void QsciLexerRuby_OnMetaObject(const QsciLexerRuby* self, intptr_t slot);
QMetaObject* QsciLexerRuby_SuperMetaObject(const QsciLexerRuby* self);
void QsciLexerRuby_OnMetacast(QsciLexerRuby* self, intptr_t slot);
void* QsciLexerRuby_SuperMetacast(QsciLexerRuby* self, const char* param1);
void QsciLexerRuby_OnMetacall(QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperMetacall(QsciLexerRuby* self, int param1, int param2, void** param3);
int QsciLexerRuby_LexerId(const QsciLexerRuby* self);
void QsciLexerRuby_OnLexerId(const QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperLexerId(const QsciLexerRuby* self);
const char* QsciLexerRuby_AutoCompletionFillups(const QsciLexerRuby* self);
void QsciLexerRuby_OnAutoCompletionFillups(const QsciLexerRuby* self, intptr_t slot);
const char* QsciLexerRuby_SuperAutoCompletionFillups(const QsciLexerRuby* self);
libqt_list /* of libqt_string */ QsciLexerRuby_AutoCompletionWordSeparators(const QsciLexerRuby* self);
void QsciLexerRuby_OnAutoCompletionWordSeparators(const QsciLexerRuby* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerRuby_SuperAutoCompletionWordSeparators(const QsciLexerRuby* self);
int QsciLexerRuby_BlockLookback(const QsciLexerRuby* self);
void QsciLexerRuby_OnBlockLookback(const QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperBlockLookback(const QsciLexerRuby* self);
bool QsciLexerRuby_CaseSensitive(const QsciLexerRuby* self);
void QsciLexerRuby_OnCaseSensitive(const QsciLexerRuby* self, intptr_t slot);
bool QsciLexerRuby_SuperCaseSensitive(const QsciLexerRuby* self);
QColor* QsciLexerRuby_Color(const QsciLexerRuby* self, int style);
void QsciLexerRuby_OnColor(const QsciLexerRuby* self, intptr_t slot);
QColor* QsciLexerRuby_SuperColor(const QsciLexerRuby* self, int style);
bool QsciLexerRuby_EolFill(const QsciLexerRuby* self, int style);
void QsciLexerRuby_OnEolFill(const QsciLexerRuby* self, intptr_t slot);
bool QsciLexerRuby_SuperEolFill(const QsciLexerRuby* self, int style);
QFont* QsciLexerRuby_Font(const QsciLexerRuby* self, int style);
void QsciLexerRuby_OnFont(const QsciLexerRuby* self, intptr_t slot);
QFont* QsciLexerRuby_SuperFont(const QsciLexerRuby* self, int style);
int QsciLexerRuby_IndentationGuideView(const QsciLexerRuby* self);
void QsciLexerRuby_OnIndentationGuideView(const QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperIndentationGuideView(const QsciLexerRuby* self);
int QsciLexerRuby_DefaultStyle(const QsciLexerRuby* self);
void QsciLexerRuby_OnDefaultStyle(const QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperDefaultStyle(const QsciLexerRuby* self);
QColor* QsciLexerRuby_Paper(const QsciLexerRuby* self, int style);
void QsciLexerRuby_OnPaper(const QsciLexerRuby* self, intptr_t slot);
QColor* QsciLexerRuby_SuperPaper(const QsciLexerRuby* self, int style);
QColor* QsciLexerRuby_DefaultColor2(const QsciLexerRuby* self, int style);
void QsciLexerRuby_OnDefaultColor2(const QsciLexerRuby* self, intptr_t slot);
QColor* QsciLexerRuby_SuperDefaultColor2(const QsciLexerRuby* self, int style);
QFont* QsciLexerRuby_DefaultFont2(const QsciLexerRuby* self, int style);
void QsciLexerRuby_OnDefaultFont2(const QsciLexerRuby* self, intptr_t slot);
QFont* QsciLexerRuby_SuperDefaultFont2(const QsciLexerRuby* self, int style);
QColor* QsciLexerRuby_DefaultPaper2(const QsciLexerRuby* self, int style);
void QsciLexerRuby_OnDefaultPaper2(const QsciLexerRuby* self, intptr_t slot);
QColor* QsciLexerRuby_SuperDefaultPaper2(const QsciLexerRuby* self, int style);
void QsciLexerRuby_SetEditor(QsciLexerRuby* self, QsciScintilla* editor);
void QsciLexerRuby_OnSetEditor(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperSetEditor(QsciLexerRuby* self, QsciScintilla* editor);
int QsciLexerRuby_StyleBitsNeeded(const QsciLexerRuby* self);
void QsciLexerRuby_OnStyleBitsNeeded(const QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperStyleBitsNeeded(const QsciLexerRuby* self);
const char* QsciLexerRuby_WordCharacters(const QsciLexerRuby* self);
void QsciLexerRuby_OnWordCharacters(const QsciLexerRuby* self, intptr_t slot);
const char* QsciLexerRuby_SuperWordCharacters(const QsciLexerRuby* self);
void QsciLexerRuby_SetAutoIndentStyle(QsciLexerRuby* self, int autoindentstyle);
void QsciLexerRuby_OnSetAutoIndentStyle(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperSetAutoIndentStyle(QsciLexerRuby* self, int autoindentstyle);
void QsciLexerRuby_SetColor(QsciLexerRuby* self, const QColor* c, int style);
void QsciLexerRuby_OnSetColor(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperSetColor(QsciLexerRuby* self, const QColor* c, int style);
void QsciLexerRuby_SetEolFill(QsciLexerRuby* self, bool eoffill, int style);
void QsciLexerRuby_OnSetEolFill(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperSetEolFill(QsciLexerRuby* self, bool eoffill, int style);
void QsciLexerRuby_SetFont(QsciLexerRuby* self, const QFont* f, int style);
void QsciLexerRuby_OnSetFont(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperSetFont(QsciLexerRuby* self, const QFont* f, int style);
void QsciLexerRuby_SetPaper(QsciLexerRuby* self, const QColor* c, int style);
void QsciLexerRuby_OnSetPaper(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperSetPaper(QsciLexerRuby* self, const QColor* c, int style);
bool QsciLexerRuby_ReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
void QsciLexerRuby_OnReadProperties(QsciLexerRuby* self, intptr_t slot);
bool QsciLexerRuby_SuperReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerRuby_WriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
void QsciLexerRuby_OnWriteProperties(const QsciLexerRuby* self, intptr_t slot);
bool QsciLexerRuby_SuperWriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerRuby_Event(QsciLexerRuby* self, QEvent* event);
void QsciLexerRuby_OnEvent(QsciLexerRuby* self, intptr_t slot);
bool QsciLexerRuby_SuperEvent(QsciLexerRuby* self, QEvent* event);
bool QsciLexerRuby_EventFilter(QsciLexerRuby* self, QObject* watched, QEvent* event);
void QsciLexerRuby_OnEventFilter(QsciLexerRuby* self, intptr_t slot);
bool QsciLexerRuby_SuperEventFilter(QsciLexerRuby* self, QObject* watched, QEvent* event);
void QsciLexerRuby_TimerEvent(QsciLexerRuby* self, QTimerEvent* event);
void QsciLexerRuby_OnTimerEvent(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperTimerEvent(QsciLexerRuby* self, QTimerEvent* event);
void QsciLexerRuby_ChildEvent(QsciLexerRuby* self, QChildEvent* event);
void QsciLexerRuby_OnChildEvent(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperChildEvent(QsciLexerRuby* self, QChildEvent* event);
void QsciLexerRuby_CustomEvent(QsciLexerRuby* self, QEvent* event);
void QsciLexerRuby_OnCustomEvent(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperCustomEvent(QsciLexerRuby* self, QEvent* event);
void QsciLexerRuby_ConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
void QsciLexerRuby_OnConnectNotify(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
void QsciLexerRuby_DisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
void QsciLexerRuby_OnDisconnectNotify(QsciLexerRuby* self, intptr_t slot);
void QsciLexerRuby_SuperDisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
libqt_string QsciLexerRuby_TextAsBytes(const QsciLexerRuby* self, const libqt_string text);
void QsciLexerRuby_OnTextAsBytes(const QsciLexerRuby* self, intptr_t slot);
libqt_string QsciLexerRuby_SuperTextAsBytes(const QsciLexerRuby* self, const libqt_string text);
libqt_string QsciLexerRuby_BytesAsText(const QsciLexerRuby* self, const char* bytes, int size);
void QsciLexerRuby_OnBytesAsText(const QsciLexerRuby* self, intptr_t slot);
libqt_string QsciLexerRuby_SuperBytesAsText(const QsciLexerRuby* self, const char* bytes, int size);
QObject* QsciLexerRuby_Sender(const QsciLexerRuby* self);
void QsciLexerRuby_OnSender(const QsciLexerRuby* self, intptr_t slot);
QObject* QsciLexerRuby_SuperSender(const QsciLexerRuby* self);
int QsciLexerRuby_SenderSignalIndex(const QsciLexerRuby* self);
void QsciLexerRuby_OnSenderSignalIndex(const QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperSenderSignalIndex(const QsciLexerRuby* self);
int QsciLexerRuby_Receivers(const QsciLexerRuby* self, const char* signal);
void QsciLexerRuby_OnReceivers(const QsciLexerRuby* self, intptr_t slot);
int QsciLexerRuby_SuperReceivers(const QsciLexerRuby* self, const char* signal);
bool QsciLexerRuby_IsSignalConnected(const QsciLexerRuby* self, const QMetaMethod* signal);
void QsciLexerRuby_OnIsSignalConnected(const QsciLexerRuby* self, intptr_t slot);
bool QsciLexerRuby_SuperIsSignalConnected(const QsciLexerRuby* self, const QMetaMethod* signal);
void QsciLexerRuby_Delete(QsciLexerRuby* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
