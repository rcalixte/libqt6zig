#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERVHDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERVHDL_H

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
typedef struct QsciLexerVHDL QsciLexerVHDL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerVHDL* QsciLexerVHDL_new();
QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent);
QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self);
void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1);
int QsciLexerVHDL_Metacall(QsciLexerVHDL* self, int param1, int param2, void** param3);
const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self);
int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style);
bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style);
const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set);
libqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self);
bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self);
void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnMetaObject(const QsciLexerVHDL* self, intptr_t slot);
QMetaObject* QsciLexerVHDL_SuperMetaObject(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnMetacast(QsciLexerVHDL* self, intptr_t slot);
void* QsciLexerVHDL_SuperMetacast(QsciLexerVHDL* self, const char* param1);
void QsciLexerVHDL_OnMetacall(QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperMetacall(QsciLexerVHDL* self, int param1, int param2, void** param3);
void QsciLexerVHDL_OnSetFoldComments(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetFoldComments(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldCompact(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetFoldCompact(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldAtElse(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetFoldAtElse(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldAtBegin(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetFoldAtBegin(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldAtParenthesis(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetFoldAtParenthesis(QsciLexerVHDL* self, bool fold);
int QsciLexerVHDL_LexerId(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnLexerId(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperLexerId(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_AutoCompletionFillups(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnAutoCompletionFillups(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_SuperAutoCompletionFillups(const QsciLexerVHDL* self);
libqt_list /* of libqt_string */ QsciLexerVHDL_AutoCompletionWordSeparators(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnAutoCompletionWordSeparators(const QsciLexerVHDL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerVHDL_SuperAutoCompletionWordSeparators(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_BlockEnd(const QsciLexerVHDL* self, int* style);
void QsciLexerVHDL_OnBlockEnd(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_SuperBlockEnd(const QsciLexerVHDL* self, int* style);
int QsciLexerVHDL_BlockLookback(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnBlockLookback(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperBlockLookback(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_BlockStart(const QsciLexerVHDL* self, int* style);
void QsciLexerVHDL_OnBlockStart(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_SuperBlockStart(const QsciLexerVHDL* self, int* style);
const char* QsciLexerVHDL_BlockStartKeyword(const QsciLexerVHDL* self, int* style);
void QsciLexerVHDL_OnBlockStartKeyword(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_SuperBlockStartKeyword(const QsciLexerVHDL* self, int* style);
bool QsciLexerVHDL_CaseSensitive(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnCaseSensitive(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_SuperCaseSensitive(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_Color(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnColor(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_SuperColor(const QsciLexerVHDL* self, int style);
bool QsciLexerVHDL_EolFill(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnEolFill(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_SuperEolFill(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_Font(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnFont(const QsciLexerVHDL* self, intptr_t slot);
QFont* QsciLexerVHDL_SuperFont(const QsciLexerVHDL* self, int style);
int QsciLexerVHDL_IndentationGuideView(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnIndentationGuideView(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperIndentationGuideView(const QsciLexerVHDL* self);
int QsciLexerVHDL_DefaultStyle(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnDefaultStyle(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperDefaultStyle(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_Paper(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnPaper(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_SuperPaper(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_DefaultColor2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnDefaultColor2(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_SuperDefaultColor2(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_DefaultFont2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnDefaultFont2(const QsciLexerVHDL* self, intptr_t slot);
QFont* QsciLexerVHDL_SuperDefaultFont2(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_DefaultPaper2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnDefaultPaper2(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_SuperDefaultPaper2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_SetEditor(QsciLexerVHDL* self, QsciScintilla* editor);
void QsciLexerVHDL_OnSetEditor(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetEditor(QsciLexerVHDL* self, QsciScintilla* editor);
int QsciLexerVHDL_StyleBitsNeeded(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnStyleBitsNeeded(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperStyleBitsNeeded(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_WordCharacters(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnWordCharacters(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_SuperWordCharacters(const QsciLexerVHDL* self);
void QsciLexerVHDL_SetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle);
void QsciLexerVHDL_OnSetAutoIndentStyle(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle);
void QsciLexerVHDL_SetColor(QsciLexerVHDL* self, const QColor* c, int style);
void QsciLexerVHDL_OnSetColor(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetColor(QsciLexerVHDL* self, const QColor* c, int style);
void QsciLexerVHDL_SetEolFill(QsciLexerVHDL* self, bool eoffill, int style);
void QsciLexerVHDL_OnSetEolFill(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetEolFill(QsciLexerVHDL* self, bool eoffill, int style);
void QsciLexerVHDL_SetFont(QsciLexerVHDL* self, const QFont* f, int style);
void QsciLexerVHDL_OnSetFont(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetFont(QsciLexerVHDL* self, const QFont* f, int style);
void QsciLexerVHDL_SetPaper(QsciLexerVHDL* self, const QColor* c, int style);
void QsciLexerVHDL_OnSetPaper(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperSetPaper(QsciLexerVHDL* self, const QColor* c, int style);
bool QsciLexerVHDL_ReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerVHDL_OnReadProperties(QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_SuperReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerVHDL_WriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerVHDL_OnWriteProperties(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_SuperWriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerVHDL_Event(QsciLexerVHDL* self, QEvent* event);
void QsciLexerVHDL_OnEvent(QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_SuperEvent(QsciLexerVHDL* self, QEvent* event);
bool QsciLexerVHDL_EventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event);
void QsciLexerVHDL_OnEventFilter(QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_SuperEventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event);
void QsciLexerVHDL_TimerEvent(QsciLexerVHDL* self, QTimerEvent* event);
void QsciLexerVHDL_OnTimerEvent(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperTimerEvent(QsciLexerVHDL* self, QTimerEvent* event);
void QsciLexerVHDL_ChildEvent(QsciLexerVHDL* self, QChildEvent* event);
void QsciLexerVHDL_OnChildEvent(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperChildEvent(QsciLexerVHDL* self, QChildEvent* event);
void QsciLexerVHDL_CustomEvent(QsciLexerVHDL* self, QEvent* event);
void QsciLexerVHDL_OnCustomEvent(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperCustomEvent(QsciLexerVHDL* self, QEvent* event);
void QsciLexerVHDL_ConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_OnConnectNotify(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_DisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_OnDisconnectNotify(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_SuperDisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
libqt_string QsciLexerVHDL_TextAsBytes(const QsciLexerVHDL* self, const libqt_string text);
void QsciLexerVHDL_OnTextAsBytes(const QsciLexerVHDL* self, intptr_t slot);
libqt_string QsciLexerVHDL_SuperTextAsBytes(const QsciLexerVHDL* self, const libqt_string text);
libqt_string QsciLexerVHDL_BytesAsText(const QsciLexerVHDL* self, const char* bytes, int size);
void QsciLexerVHDL_OnBytesAsText(const QsciLexerVHDL* self, intptr_t slot);
libqt_string QsciLexerVHDL_SuperBytesAsText(const QsciLexerVHDL* self, const char* bytes, int size);
QObject* QsciLexerVHDL_Sender(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnSender(const QsciLexerVHDL* self, intptr_t slot);
QObject* QsciLexerVHDL_SuperSender(const QsciLexerVHDL* self);
int QsciLexerVHDL_SenderSignalIndex(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnSenderSignalIndex(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperSenderSignalIndex(const QsciLexerVHDL* self);
int QsciLexerVHDL_Receivers(const QsciLexerVHDL* self, const char* signal);
void QsciLexerVHDL_OnReceivers(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_SuperReceivers(const QsciLexerVHDL* self, const char* signal);
bool QsciLexerVHDL_IsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_OnIsSignalConnected(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_SuperIsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_Delete(QsciLexerVHDL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
