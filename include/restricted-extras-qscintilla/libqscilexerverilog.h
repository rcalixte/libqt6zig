#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERVERILOG_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERVERILOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerVerilog QsciLexerVerilog;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerVerilog* QsciLexerVerilog_new();
QsciLexerVerilog* QsciLexerVerilog_new2(QObject* parent);
QMetaObject* QsciLexerVerilog_MetaObject(const QsciLexerVerilog* self);
void* QsciLexerVerilog_Metacast(QsciLexerVerilog* self, const char* param1);
int QsciLexerVerilog_Metacall(QsciLexerVerilog* self, int param1, int param2, void** param3);
void QsciLexerVerilog_OnMetacall(QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseMetacall(QsciLexerVerilog* self, int param1, int param2, void** param3);
libqt_string QsciLexerVerilog_Tr(const char* s);
const char* QsciLexerVerilog_Language(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_Lexer(const QsciLexerVerilog* self);
int QsciLexerVerilog_BraceStyle(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_WordCharacters(const QsciLexerVerilog* self);
QColor* QsciLexerVerilog_DefaultColor(const QsciLexerVerilog* self, int style);
bool QsciLexerVerilog_DefaultEolFill(const QsciLexerVerilog* self, int style);
QFont* QsciLexerVerilog_DefaultFont(const QsciLexerVerilog* self, int style);
QColor* QsciLexerVerilog_DefaultPaper(const QsciLexerVerilog* self, int style);
const char* QsciLexerVerilog_Keywords(const QsciLexerVerilog* self, int set);
libqt_string QsciLexerVerilog_Description(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_RefreshProperties(QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldAtElse(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldAtElse(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldComments(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldComments(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldCompact(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldCompact(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldPreprocessor(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldPreprocessor(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetFoldAtModule(QsciLexerVerilog* self, bool fold);
bool QsciLexerVerilog_FoldAtModule(const QsciLexerVerilog* self);
libqt_string QsciLexerVerilog_Tr2(const char* s, const char* c);
libqt_string QsciLexerVerilog_Tr3(const char* s, const char* c, int n);
int QsciLexerVerilog_LexerId(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnLexerId(const QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseLexerId(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_AutoCompletionFillups(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnAutoCompletionFillups(const QsciLexerVerilog* self, intptr_t slot);
const char* QsciLexerVerilog_QBaseAutoCompletionFillups(const QsciLexerVerilog* self);
libqt_list /* of libqt_string */ QsciLexerVerilog_AutoCompletionWordSeparators(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnAutoCompletionWordSeparators(const QsciLexerVerilog* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerVerilog_QBaseAutoCompletionWordSeparators(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_BlockEnd(const QsciLexerVerilog* self, int* style);
void QsciLexerVerilog_OnBlockEnd(const QsciLexerVerilog* self, intptr_t slot);
const char* QsciLexerVerilog_QBaseBlockEnd(const QsciLexerVerilog* self, int* style);
int QsciLexerVerilog_BlockLookback(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnBlockLookback(const QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseBlockLookback(const QsciLexerVerilog* self);
const char* QsciLexerVerilog_BlockStart(const QsciLexerVerilog* self, int* style);
void QsciLexerVerilog_OnBlockStart(const QsciLexerVerilog* self, intptr_t slot);
const char* QsciLexerVerilog_QBaseBlockStart(const QsciLexerVerilog* self, int* style);
const char* QsciLexerVerilog_BlockStartKeyword(const QsciLexerVerilog* self, int* style);
void QsciLexerVerilog_OnBlockStartKeyword(const QsciLexerVerilog* self, intptr_t slot);
const char* QsciLexerVerilog_QBaseBlockStartKeyword(const QsciLexerVerilog* self, int* style);
bool QsciLexerVerilog_CaseSensitive(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnCaseSensitive(const QsciLexerVerilog* self, intptr_t slot);
bool QsciLexerVerilog_QBaseCaseSensitive(const QsciLexerVerilog* self);
QColor* QsciLexerVerilog_Color(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_OnColor(const QsciLexerVerilog* self, intptr_t slot);
QColor* QsciLexerVerilog_QBaseColor(const QsciLexerVerilog* self, int style);
bool QsciLexerVerilog_EolFill(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_OnEolFill(const QsciLexerVerilog* self, intptr_t slot);
bool QsciLexerVerilog_QBaseEolFill(const QsciLexerVerilog* self, int style);
QFont* QsciLexerVerilog_Font(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_OnFont(const QsciLexerVerilog* self, intptr_t slot);
QFont* QsciLexerVerilog_QBaseFont(const QsciLexerVerilog* self, int style);
int QsciLexerVerilog_IndentationGuideView(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnIndentationGuideView(const QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseIndentationGuideView(const QsciLexerVerilog* self);
int QsciLexerVerilog_DefaultStyle(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnDefaultStyle(const QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseDefaultStyle(const QsciLexerVerilog* self);
QColor* QsciLexerVerilog_Paper(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_OnPaper(const QsciLexerVerilog* self, intptr_t slot);
QColor* QsciLexerVerilog_QBasePaper(const QsciLexerVerilog* self, int style);
QColor* QsciLexerVerilog_DefaultColorWithStyle(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_OnDefaultColorWithStyle(const QsciLexerVerilog* self, intptr_t slot);
QColor* QsciLexerVerilog_QBaseDefaultColorWithStyle(const QsciLexerVerilog* self, int style);
QFont* QsciLexerVerilog_DefaultFontWithStyle(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_OnDefaultFontWithStyle(const QsciLexerVerilog* self, intptr_t slot);
QFont* QsciLexerVerilog_QBaseDefaultFontWithStyle(const QsciLexerVerilog* self, int style);
QColor* QsciLexerVerilog_DefaultPaperWithStyle(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_OnDefaultPaperWithStyle(const QsciLexerVerilog* self, intptr_t slot);
QColor* QsciLexerVerilog_QBaseDefaultPaperWithStyle(const QsciLexerVerilog* self, int style);
void QsciLexerVerilog_SetEditor(QsciLexerVerilog* self, QsciScintilla* editor);
void QsciLexerVerilog_OnSetEditor(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseSetEditor(QsciLexerVerilog* self, QsciScintilla* editor);
int QsciLexerVerilog_StyleBitsNeeded(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnStyleBitsNeeded(const QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseStyleBitsNeeded(const QsciLexerVerilog* self);
void QsciLexerVerilog_SetAutoIndentStyle(QsciLexerVerilog* self, int autoindentstyle);
void QsciLexerVerilog_OnSetAutoIndentStyle(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseSetAutoIndentStyle(QsciLexerVerilog* self, int autoindentstyle);
void QsciLexerVerilog_SetColor(QsciLexerVerilog* self, QColor* c, int style);
void QsciLexerVerilog_OnSetColor(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseSetColor(QsciLexerVerilog* self, QColor* c, int style);
void QsciLexerVerilog_SetEolFill(QsciLexerVerilog* self, bool eoffill, int style);
void QsciLexerVerilog_OnSetEolFill(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseSetEolFill(QsciLexerVerilog* self, bool eoffill, int style);
void QsciLexerVerilog_SetFont(QsciLexerVerilog* self, QFont* f, int style);
void QsciLexerVerilog_OnSetFont(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseSetFont(QsciLexerVerilog* self, QFont* f, int style);
void QsciLexerVerilog_SetPaper(QsciLexerVerilog* self, QColor* c, int style);
void QsciLexerVerilog_OnSetPaper(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseSetPaper(QsciLexerVerilog* self, QColor* c, int style);
bool QsciLexerVerilog_ReadProperties(QsciLexerVerilog* self, QSettings* qs, libqt_string prefix);
void QsciLexerVerilog_OnReadProperties(QsciLexerVerilog* self, intptr_t slot);
bool QsciLexerVerilog_QBaseReadProperties(QsciLexerVerilog* self, QSettings* qs, libqt_string prefix);
bool QsciLexerVerilog_Event(QsciLexerVerilog* self, QEvent* event);
void QsciLexerVerilog_OnEvent(QsciLexerVerilog* self, intptr_t slot);
bool QsciLexerVerilog_QBaseEvent(QsciLexerVerilog* self, QEvent* event);
bool QsciLexerVerilog_EventFilter(QsciLexerVerilog* self, QObject* watched, QEvent* event);
void QsciLexerVerilog_OnEventFilter(QsciLexerVerilog* self, intptr_t slot);
bool QsciLexerVerilog_QBaseEventFilter(QsciLexerVerilog* self, QObject* watched, QEvent* event);
void QsciLexerVerilog_TimerEvent(QsciLexerVerilog* self, QTimerEvent* event);
void QsciLexerVerilog_OnTimerEvent(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseTimerEvent(QsciLexerVerilog* self, QTimerEvent* event);
void QsciLexerVerilog_ChildEvent(QsciLexerVerilog* self, QChildEvent* event);
void QsciLexerVerilog_OnChildEvent(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseChildEvent(QsciLexerVerilog* self, QChildEvent* event);
void QsciLexerVerilog_CustomEvent(QsciLexerVerilog* self, QEvent* event);
void QsciLexerVerilog_OnCustomEvent(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseCustomEvent(QsciLexerVerilog* self, QEvent* event);
void QsciLexerVerilog_ConnectNotify(QsciLexerVerilog* self, QMetaMethod* signal);
void QsciLexerVerilog_OnConnectNotify(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseConnectNotify(QsciLexerVerilog* self, QMetaMethod* signal);
void QsciLexerVerilog_DisconnectNotify(QsciLexerVerilog* self, QMetaMethod* signal);
void QsciLexerVerilog_OnDisconnectNotify(QsciLexerVerilog* self, intptr_t slot);
void QsciLexerVerilog_QBaseDisconnectNotify(QsciLexerVerilog* self, QMetaMethod* signal);
bool QsciLexerVerilog_WriteProperties(const QsciLexerVerilog* self, QSettings* qs, libqt_string prefix);
void QsciLexerVerilog_OnWriteProperties(const QsciLexerVerilog* self, intptr_t slot);
bool QsciLexerVerilog_QBaseWriteProperties(const QsciLexerVerilog* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerVerilog_Sender(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnSender(const QsciLexerVerilog* self, intptr_t slot);
QObject* QsciLexerVerilog_QBaseSender(const QsciLexerVerilog* self);
int QsciLexerVerilog_SenderSignalIndex(const QsciLexerVerilog* self);
void QsciLexerVerilog_OnSenderSignalIndex(const QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseSenderSignalIndex(const QsciLexerVerilog* self);
int QsciLexerVerilog_Receivers(const QsciLexerVerilog* self, const char* signal);
void QsciLexerVerilog_OnReceivers(const QsciLexerVerilog* self, intptr_t slot);
int QsciLexerVerilog_QBaseReceivers(const QsciLexerVerilog* self, const char* signal);
bool QsciLexerVerilog_IsSignalConnected(const QsciLexerVerilog* self, QMetaMethod* signal);
void QsciLexerVerilog_OnIsSignalConnected(const QsciLexerVerilog* self, intptr_t slot);
bool QsciLexerVerilog_QBaseIsSignalConnected(const QsciLexerVerilog* self, QMetaMethod* signal);
void QsciLexerVerilog_Delete(QsciLexerVerilog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
