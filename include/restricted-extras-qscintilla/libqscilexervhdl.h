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
libqt_string QsciLexerVHDL_Tr(const char* s);
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
libqt_string QsciLexerVHDL_Tr2(const char* s, const char* c);
libqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n);
void QsciLexerVHDL_OnMetacall(QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseMetacall(QsciLexerVHDL* self, int param1, int param2, void** param3);
void QsciLexerVHDL_OnSetFoldComments(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetFoldComments(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldCompact(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetFoldCompact(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldAtElse(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetFoldAtElse(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldAtBegin(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetFoldAtBegin(QsciLexerVHDL* self, bool fold);
void QsciLexerVHDL_OnSetFoldAtParenthesis(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetFoldAtParenthesis(QsciLexerVHDL* self, bool fold);
int QsciLexerVHDL_LexerId(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnLexerId(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseLexerId(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_AutoCompletionFillups(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnAutoCompletionFillups(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_QBaseAutoCompletionFillups(const QsciLexerVHDL* self);
libqt_list /* of libqt_string */ QsciLexerVHDL_AutoCompletionWordSeparators(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnAutoCompletionWordSeparators(const QsciLexerVHDL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerVHDL_QBaseAutoCompletionWordSeparators(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_BlockEnd(const QsciLexerVHDL* self, int* style);
void QsciLexerVHDL_OnBlockEnd(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_QBaseBlockEnd(const QsciLexerVHDL* self, int* style);
int QsciLexerVHDL_BlockLookback(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnBlockLookback(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseBlockLookback(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_BlockStart(const QsciLexerVHDL* self, int* style);
void QsciLexerVHDL_OnBlockStart(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_QBaseBlockStart(const QsciLexerVHDL* self, int* style);
const char* QsciLexerVHDL_BlockStartKeyword(const QsciLexerVHDL* self, int* style);
void QsciLexerVHDL_OnBlockStartKeyword(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_QBaseBlockStartKeyword(const QsciLexerVHDL* self, int* style);
bool QsciLexerVHDL_CaseSensitive(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnCaseSensitive(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_QBaseCaseSensitive(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_Color(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnColor(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_QBaseColor(const QsciLexerVHDL* self, int style);
bool QsciLexerVHDL_EolFill(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnEolFill(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_QBaseEolFill(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_Font(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnFont(const QsciLexerVHDL* self, intptr_t slot);
QFont* QsciLexerVHDL_QBaseFont(const QsciLexerVHDL* self, int style);
int QsciLexerVHDL_IndentationGuideView(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnIndentationGuideView(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseIndentationGuideView(const QsciLexerVHDL* self);
int QsciLexerVHDL_DefaultStyle(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnDefaultStyle(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseDefaultStyle(const QsciLexerVHDL* self);
QColor* QsciLexerVHDL_Paper(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnPaper(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_QBasePaper(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_DefaultColor2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnDefaultColor2(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_QBaseDefaultColor2(const QsciLexerVHDL* self, int style);
QFont* QsciLexerVHDL_DefaultFont2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnDefaultFont2(const QsciLexerVHDL* self, intptr_t slot);
QFont* QsciLexerVHDL_QBaseDefaultFont2(const QsciLexerVHDL* self, int style);
QColor* QsciLexerVHDL_DefaultPaper2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_OnDefaultPaper2(const QsciLexerVHDL* self, intptr_t slot);
QColor* QsciLexerVHDL_QBaseDefaultPaper2(const QsciLexerVHDL* self, int style);
void QsciLexerVHDL_SetEditor(QsciLexerVHDL* self, QsciScintilla* editor);
void QsciLexerVHDL_OnSetEditor(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetEditor(QsciLexerVHDL* self, QsciScintilla* editor);
int QsciLexerVHDL_StyleBitsNeeded(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnStyleBitsNeeded(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseStyleBitsNeeded(const QsciLexerVHDL* self);
const char* QsciLexerVHDL_WordCharacters(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnWordCharacters(const QsciLexerVHDL* self, intptr_t slot);
const char* QsciLexerVHDL_QBaseWordCharacters(const QsciLexerVHDL* self);
void QsciLexerVHDL_SetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle);
void QsciLexerVHDL_OnSetAutoIndentStyle(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetAutoIndentStyle(QsciLexerVHDL* self, int autoindentstyle);
void QsciLexerVHDL_SetColor(QsciLexerVHDL* self, const QColor* c, int style);
void QsciLexerVHDL_OnSetColor(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetColor(QsciLexerVHDL* self, const QColor* c, int style);
void QsciLexerVHDL_SetEolFill(QsciLexerVHDL* self, bool eoffill, int style);
void QsciLexerVHDL_OnSetEolFill(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetEolFill(QsciLexerVHDL* self, bool eoffill, int style);
void QsciLexerVHDL_SetFont(QsciLexerVHDL* self, const QFont* f, int style);
void QsciLexerVHDL_OnSetFont(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetFont(QsciLexerVHDL* self, const QFont* f, int style);
void QsciLexerVHDL_SetPaper(QsciLexerVHDL* self, const QColor* c, int style);
void QsciLexerVHDL_OnSetPaper(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseSetPaper(QsciLexerVHDL* self, const QColor* c, int style);
bool QsciLexerVHDL_ReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerVHDL_OnReadProperties(QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_QBaseReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerVHDL_WriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerVHDL_OnWriteProperties(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_QBaseWriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerVHDL_Event(QsciLexerVHDL* self, QEvent* event);
void QsciLexerVHDL_OnEvent(QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_QBaseEvent(QsciLexerVHDL* self, QEvent* event);
bool QsciLexerVHDL_EventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event);
void QsciLexerVHDL_OnEventFilter(QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_QBaseEventFilter(QsciLexerVHDL* self, QObject* watched, QEvent* event);
void QsciLexerVHDL_TimerEvent(QsciLexerVHDL* self, QTimerEvent* event);
void QsciLexerVHDL_OnTimerEvent(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseTimerEvent(QsciLexerVHDL* self, QTimerEvent* event);
void QsciLexerVHDL_ChildEvent(QsciLexerVHDL* self, QChildEvent* event);
void QsciLexerVHDL_OnChildEvent(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseChildEvent(QsciLexerVHDL* self, QChildEvent* event);
void QsciLexerVHDL_CustomEvent(QsciLexerVHDL* self, QEvent* event);
void QsciLexerVHDL_OnCustomEvent(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseCustomEvent(QsciLexerVHDL* self, QEvent* event);
void QsciLexerVHDL_ConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_OnConnectNotify(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_DisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_OnDisconnectNotify(QsciLexerVHDL* self, intptr_t slot);
void QsciLexerVHDL_QBaseDisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
libqt_string QsciLexerVHDL_TextAsBytes(const QsciLexerVHDL* self, const libqt_string text);
void QsciLexerVHDL_OnTextAsBytes(const QsciLexerVHDL* self, intptr_t slot);
libqt_string QsciLexerVHDL_QBaseTextAsBytes(const QsciLexerVHDL* self, const libqt_string text);
libqt_string QsciLexerVHDL_BytesAsText(const QsciLexerVHDL* self, const char* bytes, int size);
void QsciLexerVHDL_OnBytesAsText(const QsciLexerVHDL* self, intptr_t slot);
libqt_string QsciLexerVHDL_QBaseBytesAsText(const QsciLexerVHDL* self, const char* bytes, int size);
QObject* QsciLexerVHDL_Sender(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnSender(const QsciLexerVHDL* self, intptr_t slot);
QObject* QsciLexerVHDL_QBaseSender(const QsciLexerVHDL* self);
int QsciLexerVHDL_SenderSignalIndex(const QsciLexerVHDL* self);
void QsciLexerVHDL_OnSenderSignalIndex(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseSenderSignalIndex(const QsciLexerVHDL* self);
int QsciLexerVHDL_Receivers(const QsciLexerVHDL* self, const char* signal);
void QsciLexerVHDL_OnReceivers(const QsciLexerVHDL* self, intptr_t slot);
int QsciLexerVHDL_QBaseReceivers(const QsciLexerVHDL* self, const char* signal);
bool QsciLexerVHDL_IsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_OnIsSignalConnected(const QsciLexerVHDL* self, intptr_t slot);
bool QsciLexerVHDL_QBaseIsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal);
void QsciLexerVHDL_Delete(QsciLexerVHDL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
