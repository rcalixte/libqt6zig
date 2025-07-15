#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTEX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
void QsciLexerTeX_OnMetacall(QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseMetacall(QsciLexerTeX* self, int param1, int param2, void** param3);
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
int QsciLexerTeX_LexerId(const QsciLexerTeX* self);
void QsciLexerTeX_OnLexerId(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseLexerId(const QsciLexerTeX* self);
const char* QsciLexerTeX_AutoCompletionFillups(const QsciLexerTeX* self);
void QsciLexerTeX_OnAutoCompletionFillups(const QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_QBaseAutoCompletionFillups(const QsciLexerTeX* self);
libqt_list /* of libqt_string */ QsciLexerTeX_AutoCompletionWordSeparators(const QsciLexerTeX* self);
void QsciLexerTeX_OnAutoCompletionWordSeparators(const QsciLexerTeX* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerTeX_QBaseAutoCompletionWordSeparators(const QsciLexerTeX* self);
const char* QsciLexerTeX_BlockEnd(const QsciLexerTeX* self, int* style);
void QsciLexerTeX_OnBlockEnd(const QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_QBaseBlockEnd(const QsciLexerTeX* self, int* style);
int QsciLexerTeX_BlockLookback(const QsciLexerTeX* self);
void QsciLexerTeX_OnBlockLookback(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseBlockLookback(const QsciLexerTeX* self);
const char* QsciLexerTeX_BlockStart(const QsciLexerTeX* self, int* style);
void QsciLexerTeX_OnBlockStart(const QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_QBaseBlockStart(const QsciLexerTeX* self, int* style);
const char* QsciLexerTeX_BlockStartKeyword(const QsciLexerTeX* self, int* style);
void QsciLexerTeX_OnBlockStartKeyword(const QsciLexerTeX* self, intptr_t slot);
const char* QsciLexerTeX_QBaseBlockStartKeyword(const QsciLexerTeX* self, int* style);
int QsciLexerTeX_BraceStyle(const QsciLexerTeX* self);
void QsciLexerTeX_OnBraceStyle(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseBraceStyle(const QsciLexerTeX* self);
bool QsciLexerTeX_CaseSensitive(const QsciLexerTeX* self);
void QsciLexerTeX_OnCaseSensitive(const QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseCaseSensitive(const QsciLexerTeX* self);
QColor* QsciLexerTeX_Color(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnColor(const QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_QBaseColor(const QsciLexerTeX* self, int style);
bool QsciLexerTeX_EolFill(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnEolFill(const QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseEolFill(const QsciLexerTeX* self, int style);
QFont* QsciLexerTeX_Font(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnFont(const QsciLexerTeX* self, intptr_t slot);
QFont* QsciLexerTeX_QBaseFont(const QsciLexerTeX* self, int style);
int QsciLexerTeX_IndentationGuideView(const QsciLexerTeX* self);
void QsciLexerTeX_OnIndentationGuideView(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseIndentationGuideView(const QsciLexerTeX* self);
int QsciLexerTeX_DefaultStyle(const QsciLexerTeX* self);
void QsciLexerTeX_OnDefaultStyle(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseDefaultStyle(const QsciLexerTeX* self);
QColor* QsciLexerTeX_Paper(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnPaper(const QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_QBasePaper(const QsciLexerTeX* self, int style);
QColor* QsciLexerTeX_DefaultColor2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultColor2(const QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_QBaseDefaultColor2(const QsciLexerTeX* self, int style);
bool QsciLexerTeX_DefaultEolFill(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultEolFill(const QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseDefaultEolFill(const QsciLexerTeX* self, int style);
QFont* QsciLexerTeX_DefaultFont2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultFont2(const QsciLexerTeX* self, intptr_t slot);
QFont* QsciLexerTeX_QBaseDefaultFont2(const QsciLexerTeX* self, int style);
QColor* QsciLexerTeX_DefaultPaper2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_OnDefaultPaper2(const QsciLexerTeX* self, intptr_t slot);
QColor* QsciLexerTeX_QBaseDefaultPaper2(const QsciLexerTeX* self, int style);
void QsciLexerTeX_SetEditor(QsciLexerTeX* self, QsciScintilla* editor);
void QsciLexerTeX_OnSetEditor(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseSetEditor(QsciLexerTeX* self, QsciScintilla* editor);
int QsciLexerTeX_StyleBitsNeeded(const QsciLexerTeX* self);
void QsciLexerTeX_OnStyleBitsNeeded(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseStyleBitsNeeded(const QsciLexerTeX* self);
void QsciLexerTeX_SetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle);
void QsciLexerTeX_OnSetAutoIndentStyle(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseSetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle);
void QsciLexerTeX_SetColor(QsciLexerTeX* self, const QColor* c, int style);
void QsciLexerTeX_OnSetColor(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseSetColor(QsciLexerTeX* self, const QColor* c, int style);
void QsciLexerTeX_SetEolFill(QsciLexerTeX* self, bool eoffill, int style);
void QsciLexerTeX_OnSetEolFill(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseSetEolFill(QsciLexerTeX* self, bool eoffill, int style);
void QsciLexerTeX_SetFont(QsciLexerTeX* self, const QFont* f, int style);
void QsciLexerTeX_OnSetFont(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseSetFont(QsciLexerTeX* self, const QFont* f, int style);
void QsciLexerTeX_SetPaper(QsciLexerTeX* self, const QColor* c, int style);
void QsciLexerTeX_OnSetPaper(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseSetPaper(QsciLexerTeX* self, const QColor* c, int style);
bool QsciLexerTeX_ReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTeX_OnReadProperties(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTeX_WriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTeX_OnWriteProperties(const QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseWriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTeX_Event(QsciLexerTeX* self, QEvent* event);
void QsciLexerTeX_OnEvent(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseEvent(QsciLexerTeX* self, QEvent* event);
bool QsciLexerTeX_EventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event);
void QsciLexerTeX_OnEventFilter(QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseEventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event);
void QsciLexerTeX_TimerEvent(QsciLexerTeX* self, QTimerEvent* event);
void QsciLexerTeX_OnTimerEvent(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseTimerEvent(QsciLexerTeX* self, QTimerEvent* event);
void QsciLexerTeX_ChildEvent(QsciLexerTeX* self, QChildEvent* event);
void QsciLexerTeX_OnChildEvent(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseChildEvent(QsciLexerTeX* self, QChildEvent* event);
void QsciLexerTeX_CustomEvent(QsciLexerTeX* self, QEvent* event);
void QsciLexerTeX_OnCustomEvent(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseCustomEvent(QsciLexerTeX* self, QEvent* event);
void QsciLexerTeX_ConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_OnConnectNotify(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_DisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_OnDisconnectNotify(QsciLexerTeX* self, intptr_t slot);
void QsciLexerTeX_QBaseDisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
libqt_string QsciLexerTeX_TextAsBytes(const QsciLexerTeX* self, const libqt_string text);
void QsciLexerTeX_OnTextAsBytes(const QsciLexerTeX* self, intptr_t slot);
libqt_string QsciLexerTeX_QBaseTextAsBytes(const QsciLexerTeX* self, const libqt_string text);
libqt_string QsciLexerTeX_BytesAsText(const QsciLexerTeX* self, const char* bytes, int size);
void QsciLexerTeX_OnBytesAsText(const QsciLexerTeX* self, intptr_t slot);
libqt_string QsciLexerTeX_QBaseBytesAsText(const QsciLexerTeX* self, const char* bytes, int size);
QObject* QsciLexerTeX_Sender(const QsciLexerTeX* self);
void QsciLexerTeX_OnSender(const QsciLexerTeX* self, intptr_t slot);
QObject* QsciLexerTeX_QBaseSender(const QsciLexerTeX* self);
int QsciLexerTeX_SenderSignalIndex(const QsciLexerTeX* self);
void QsciLexerTeX_OnSenderSignalIndex(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseSenderSignalIndex(const QsciLexerTeX* self);
int QsciLexerTeX_Receivers(const QsciLexerTeX* self, const char* signal);
void QsciLexerTeX_OnReceivers(const QsciLexerTeX* self, intptr_t slot);
int QsciLexerTeX_QBaseReceivers(const QsciLexerTeX* self, const char* signal);
bool QsciLexerTeX_IsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_OnIsSignalConnected(const QsciLexerTeX* self, intptr_t slot);
bool QsciLexerTeX_QBaseIsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal);
void QsciLexerTeX_Delete(QsciLexerTeX* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
