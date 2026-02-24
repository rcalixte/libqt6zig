#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPERL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPERL_H

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
typedef struct QsciLexerPerl QsciLexerPerl;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPerl* QsciLexerPerl_new();
QsciLexerPerl* QsciLexerPerl_new2(QObject* parent);
QMetaObject* QsciLexerPerl_MetaObject(const QsciLexerPerl* self);
void* QsciLexerPerl_Metacast(QsciLexerPerl* self, const char* param1);
int QsciLexerPerl_Metacall(QsciLexerPerl* self, int param1, int param2, void** param3);
const char* QsciLexerPerl_Language(const QsciLexerPerl* self);
const char* QsciLexerPerl_Lexer(const QsciLexerPerl* self);
libqt_list /* of libqt_string */ QsciLexerPerl_AutoCompletionWordSeparators(const QsciLexerPerl* self);
const char* QsciLexerPerl_BlockEnd(const QsciLexerPerl* self);
const char* QsciLexerPerl_BlockStart(const QsciLexerPerl* self);
int QsciLexerPerl_BraceStyle(const QsciLexerPerl* self);
const char* QsciLexerPerl_WordCharacters(const QsciLexerPerl* self);
QColor* QsciLexerPerl_DefaultColor(const QsciLexerPerl* self, int style);
bool QsciLexerPerl_DefaultEolFill(const QsciLexerPerl* self, int style);
QFont* QsciLexerPerl_DefaultFont(const QsciLexerPerl* self, int style);
QColor* QsciLexerPerl_DefaultPaper(const QsciLexerPerl* self, int style);
const char* QsciLexerPerl_Keywords(const QsciLexerPerl* self, int set);
libqt_string QsciLexerPerl_Description(const QsciLexerPerl* self, int style);
void QsciLexerPerl_RefreshProperties(QsciLexerPerl* self);
void QsciLexerPerl_SetFoldAtElse(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldAtElse(const QsciLexerPerl* self);
bool QsciLexerPerl_FoldComments(const QsciLexerPerl* self);
bool QsciLexerPerl_FoldCompact(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldPackages(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldPackages(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldPODBlocks(QsciLexerPerl* self, bool fold);
bool QsciLexerPerl_FoldPODBlocks(const QsciLexerPerl* self);
void QsciLexerPerl_SetFoldComments(QsciLexerPerl* self, bool fold);
void QsciLexerPerl_SetFoldCompact(QsciLexerPerl* self, bool fold);
const char* QsciLexerPerl_BlockEnd1(const QsciLexerPerl* self, int* style);
const char* QsciLexerPerl_BlockStart1(const QsciLexerPerl* self, int* style);
void QsciLexerPerl_OnMetaObject(const QsciLexerPerl* self, intptr_t slot);
QMetaObject* QsciLexerPerl_SuperMetaObject(const QsciLexerPerl* self);
void QsciLexerPerl_OnMetacast(QsciLexerPerl* self, intptr_t slot);
void* QsciLexerPerl_SuperMetacast(QsciLexerPerl* self, const char* param1);
void QsciLexerPerl_OnMetacall(QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperMetacall(QsciLexerPerl* self, int param1, int param2, void** param3);
void QsciLexerPerl_OnSetFoldComments(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetFoldComments(QsciLexerPerl* self, bool fold);
void QsciLexerPerl_OnSetFoldCompact(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetFoldCompact(QsciLexerPerl* self, bool fold);
int QsciLexerPerl_LexerId(const QsciLexerPerl* self);
void QsciLexerPerl_OnLexerId(const QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperLexerId(const QsciLexerPerl* self);
const char* QsciLexerPerl_AutoCompletionFillups(const QsciLexerPerl* self);
void QsciLexerPerl_OnAutoCompletionFillups(const QsciLexerPerl* self, intptr_t slot);
const char* QsciLexerPerl_SuperAutoCompletionFillups(const QsciLexerPerl* self);
int QsciLexerPerl_BlockLookback(const QsciLexerPerl* self);
void QsciLexerPerl_OnBlockLookback(const QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperBlockLookback(const QsciLexerPerl* self);
const char* QsciLexerPerl_BlockStartKeyword(const QsciLexerPerl* self, int* style);
void QsciLexerPerl_OnBlockStartKeyword(const QsciLexerPerl* self, intptr_t slot);
const char* QsciLexerPerl_SuperBlockStartKeyword(const QsciLexerPerl* self, int* style);
bool QsciLexerPerl_CaseSensitive(const QsciLexerPerl* self);
void QsciLexerPerl_OnCaseSensitive(const QsciLexerPerl* self, intptr_t slot);
bool QsciLexerPerl_SuperCaseSensitive(const QsciLexerPerl* self);
QColor* QsciLexerPerl_Color(const QsciLexerPerl* self, int style);
void QsciLexerPerl_OnColor(const QsciLexerPerl* self, intptr_t slot);
QColor* QsciLexerPerl_SuperColor(const QsciLexerPerl* self, int style);
bool QsciLexerPerl_EolFill(const QsciLexerPerl* self, int style);
void QsciLexerPerl_OnEolFill(const QsciLexerPerl* self, intptr_t slot);
bool QsciLexerPerl_SuperEolFill(const QsciLexerPerl* self, int style);
QFont* QsciLexerPerl_Font(const QsciLexerPerl* self, int style);
void QsciLexerPerl_OnFont(const QsciLexerPerl* self, intptr_t slot);
QFont* QsciLexerPerl_SuperFont(const QsciLexerPerl* self, int style);
int QsciLexerPerl_IndentationGuideView(const QsciLexerPerl* self);
void QsciLexerPerl_OnIndentationGuideView(const QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperIndentationGuideView(const QsciLexerPerl* self);
int QsciLexerPerl_DefaultStyle(const QsciLexerPerl* self);
void QsciLexerPerl_OnDefaultStyle(const QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperDefaultStyle(const QsciLexerPerl* self);
QColor* QsciLexerPerl_Paper(const QsciLexerPerl* self, int style);
void QsciLexerPerl_OnPaper(const QsciLexerPerl* self, intptr_t slot);
QColor* QsciLexerPerl_SuperPaper(const QsciLexerPerl* self, int style);
QColor* QsciLexerPerl_DefaultColor2(const QsciLexerPerl* self, int style);
void QsciLexerPerl_OnDefaultColor2(const QsciLexerPerl* self, intptr_t slot);
QColor* QsciLexerPerl_SuperDefaultColor2(const QsciLexerPerl* self, int style);
QFont* QsciLexerPerl_DefaultFont2(const QsciLexerPerl* self, int style);
void QsciLexerPerl_OnDefaultFont2(const QsciLexerPerl* self, intptr_t slot);
QFont* QsciLexerPerl_SuperDefaultFont2(const QsciLexerPerl* self, int style);
QColor* QsciLexerPerl_DefaultPaper2(const QsciLexerPerl* self, int style);
void QsciLexerPerl_OnDefaultPaper2(const QsciLexerPerl* self, intptr_t slot);
QColor* QsciLexerPerl_SuperDefaultPaper2(const QsciLexerPerl* self, int style);
void QsciLexerPerl_SetEditor(QsciLexerPerl* self, QsciScintilla* editor);
void QsciLexerPerl_OnSetEditor(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetEditor(QsciLexerPerl* self, QsciScintilla* editor);
int QsciLexerPerl_StyleBitsNeeded(const QsciLexerPerl* self);
void QsciLexerPerl_OnStyleBitsNeeded(const QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperStyleBitsNeeded(const QsciLexerPerl* self);
void QsciLexerPerl_SetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle);
void QsciLexerPerl_OnSetAutoIndentStyle(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetAutoIndentStyle(QsciLexerPerl* self, int autoindentstyle);
void QsciLexerPerl_SetColor(QsciLexerPerl* self, const QColor* c, int style);
void QsciLexerPerl_OnSetColor(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetColor(QsciLexerPerl* self, const QColor* c, int style);
void QsciLexerPerl_SetEolFill(QsciLexerPerl* self, bool eoffill, int style);
void QsciLexerPerl_OnSetEolFill(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetEolFill(QsciLexerPerl* self, bool eoffill, int style);
void QsciLexerPerl_SetFont(QsciLexerPerl* self, const QFont* f, int style);
void QsciLexerPerl_OnSetFont(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetFont(QsciLexerPerl* self, const QFont* f, int style);
void QsciLexerPerl_SetPaper(QsciLexerPerl* self, const QColor* c, int style);
void QsciLexerPerl_OnSetPaper(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperSetPaper(QsciLexerPerl* self, const QColor* c, int style);
bool QsciLexerPerl_ReadProperties(QsciLexerPerl* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPerl_OnReadProperties(QsciLexerPerl* self, intptr_t slot);
bool QsciLexerPerl_SuperReadProperties(QsciLexerPerl* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPerl_WriteProperties(const QsciLexerPerl* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPerl_OnWriteProperties(const QsciLexerPerl* self, intptr_t slot);
bool QsciLexerPerl_SuperWriteProperties(const QsciLexerPerl* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPerl_Event(QsciLexerPerl* self, QEvent* event);
void QsciLexerPerl_OnEvent(QsciLexerPerl* self, intptr_t slot);
bool QsciLexerPerl_SuperEvent(QsciLexerPerl* self, QEvent* event);
bool QsciLexerPerl_EventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event);
void QsciLexerPerl_OnEventFilter(QsciLexerPerl* self, intptr_t slot);
bool QsciLexerPerl_SuperEventFilter(QsciLexerPerl* self, QObject* watched, QEvent* event);
void QsciLexerPerl_TimerEvent(QsciLexerPerl* self, QTimerEvent* event);
void QsciLexerPerl_OnTimerEvent(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperTimerEvent(QsciLexerPerl* self, QTimerEvent* event);
void QsciLexerPerl_ChildEvent(QsciLexerPerl* self, QChildEvent* event);
void QsciLexerPerl_OnChildEvent(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperChildEvent(QsciLexerPerl* self, QChildEvent* event);
void QsciLexerPerl_CustomEvent(QsciLexerPerl* self, QEvent* event);
void QsciLexerPerl_OnCustomEvent(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperCustomEvent(QsciLexerPerl* self, QEvent* event);
void QsciLexerPerl_ConnectNotify(QsciLexerPerl* self, const QMetaMethod* signal);
void QsciLexerPerl_OnConnectNotify(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperConnectNotify(QsciLexerPerl* self, const QMetaMethod* signal);
void QsciLexerPerl_DisconnectNotify(QsciLexerPerl* self, const QMetaMethod* signal);
void QsciLexerPerl_OnDisconnectNotify(QsciLexerPerl* self, intptr_t slot);
void QsciLexerPerl_SuperDisconnectNotify(QsciLexerPerl* self, const QMetaMethod* signal);
libqt_string QsciLexerPerl_TextAsBytes(const QsciLexerPerl* self, const libqt_string text);
void QsciLexerPerl_OnTextAsBytes(const QsciLexerPerl* self, intptr_t slot);
libqt_string QsciLexerPerl_SuperTextAsBytes(const QsciLexerPerl* self, const libqt_string text);
libqt_string QsciLexerPerl_BytesAsText(const QsciLexerPerl* self, const char* bytes, int size);
void QsciLexerPerl_OnBytesAsText(const QsciLexerPerl* self, intptr_t slot);
libqt_string QsciLexerPerl_SuperBytesAsText(const QsciLexerPerl* self, const char* bytes, int size);
QObject* QsciLexerPerl_Sender(const QsciLexerPerl* self);
void QsciLexerPerl_OnSender(const QsciLexerPerl* self, intptr_t slot);
QObject* QsciLexerPerl_SuperSender(const QsciLexerPerl* self);
int QsciLexerPerl_SenderSignalIndex(const QsciLexerPerl* self);
void QsciLexerPerl_OnSenderSignalIndex(const QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperSenderSignalIndex(const QsciLexerPerl* self);
int QsciLexerPerl_Receivers(const QsciLexerPerl* self, const char* signal);
void QsciLexerPerl_OnReceivers(const QsciLexerPerl* self, intptr_t slot);
int QsciLexerPerl_SuperReceivers(const QsciLexerPerl* self, const char* signal);
bool QsciLexerPerl_IsSignalConnected(const QsciLexerPerl* self, const QMetaMethod* signal);
void QsciLexerPerl_OnIsSignalConnected(const QsciLexerPerl* self, intptr_t slot);
bool QsciLexerPerl_SuperIsSignalConnected(const QsciLexerPerl* self, const QMetaMethod* signal);
void QsciLexerPerl_Delete(QsciLexerPerl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
