#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPOSTSCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPOSTSCRIPT_H

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
typedef struct QsciLexerPostScript QsciLexerPostScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPostScript* QsciLexerPostScript_new();
QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent);
QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self);
void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1);
int QsciLexerPostScript_Metacall(QsciLexerPostScript* self, int param1, int param2, void** param3);
void QsciLexerPostScript_OnMetacall(QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseMetacall(QsciLexerPostScript* self, int param1, int param2, void** param3);
libqt_string QsciLexerPostScript_Tr(const char* s);
const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self);
int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style);
const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set);
libqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self);
bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self);
int QsciLexerPostScript_Level(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self);
bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self);
void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize);
void QsciLexerPostScript_OnSetTokenize(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetTokenize(QsciLexerPostScript* self, bool tokenize);
void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level);
void QsciLexerPostScript_OnSetLevel(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetLevel(QsciLexerPostScript* self, int level);
void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_OnSetFoldCompact(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetFoldCompact(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold);
void QsciLexerPostScript_OnSetFoldAtElse(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetFoldAtElse(QsciLexerPostScript* self, bool fold);
libqt_string QsciLexerPostScript_Tr2(const char* s, const char* c);
libqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n);
int QsciLexerPostScript_LexerId(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnLexerId(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseLexerId(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_AutoCompletionFillups(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnAutoCompletionFillups(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_QBaseAutoCompletionFillups(const QsciLexerPostScript* self);
libqt_list /* of libqt_string */ QsciLexerPostScript_AutoCompletionWordSeparators(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnAutoCompletionWordSeparators(const QsciLexerPostScript* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerPostScript_QBaseAutoCompletionWordSeparators(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_BlockEnd(const QsciLexerPostScript* self, int* style);
void QsciLexerPostScript_OnBlockEnd(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_QBaseBlockEnd(const QsciLexerPostScript* self, int* style);
int QsciLexerPostScript_BlockLookback(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnBlockLookback(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseBlockLookback(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_BlockStart(const QsciLexerPostScript* self, int* style);
void QsciLexerPostScript_OnBlockStart(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_QBaseBlockStart(const QsciLexerPostScript* self, int* style);
const char* QsciLexerPostScript_BlockStartKeyword(const QsciLexerPostScript* self, int* style);
void QsciLexerPostScript_OnBlockStartKeyword(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_QBaseBlockStartKeyword(const QsciLexerPostScript* self, int* style);
bool QsciLexerPostScript_CaseSensitive(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnCaseSensitive(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseCaseSensitive(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_Color(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnColor(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_QBaseColor(const QsciLexerPostScript* self, int style);
bool QsciLexerPostScript_EolFill(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnEolFill(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseEolFill(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_Font(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnFont(const QsciLexerPostScript* self, intptr_t slot);
QFont* QsciLexerPostScript_QBaseFont(const QsciLexerPostScript* self, int style);
int QsciLexerPostScript_IndentationGuideView(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnIndentationGuideView(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseIndentationGuideView(const QsciLexerPostScript* self);
int QsciLexerPostScript_DefaultStyle(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnDefaultStyle(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseDefaultStyle(const QsciLexerPostScript* self);
QColor* QsciLexerPostScript_Paper(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnPaper(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_QBasePaper(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultColorWithStyle(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultColorWithStyle(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_QBaseDefaultColorWithStyle(const QsciLexerPostScript* self, int style);
bool QsciLexerPostScript_DefaultEolFill(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultEolFill(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseDefaultEolFill(const QsciLexerPostScript* self, int style);
QFont* QsciLexerPostScript_DefaultFontWithStyle(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultFontWithStyle(const QsciLexerPostScript* self, intptr_t slot);
QFont* QsciLexerPostScript_QBaseDefaultFontWithStyle(const QsciLexerPostScript* self, int style);
QColor* QsciLexerPostScript_DefaultPaperWithStyle(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_OnDefaultPaperWithStyle(const QsciLexerPostScript* self, intptr_t slot);
QColor* QsciLexerPostScript_QBaseDefaultPaperWithStyle(const QsciLexerPostScript* self, int style);
void QsciLexerPostScript_SetEditor(QsciLexerPostScript* self, QsciScintilla* editor);
void QsciLexerPostScript_OnSetEditor(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetEditor(QsciLexerPostScript* self, QsciScintilla* editor);
int QsciLexerPostScript_StyleBitsNeeded(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnStyleBitsNeeded(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseStyleBitsNeeded(const QsciLexerPostScript* self);
const char* QsciLexerPostScript_WordCharacters(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnWordCharacters(const QsciLexerPostScript* self, intptr_t slot);
const char* QsciLexerPostScript_QBaseWordCharacters(const QsciLexerPostScript* self);
void QsciLexerPostScript_SetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle);
void QsciLexerPostScript_OnSetAutoIndentStyle(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle);
void QsciLexerPostScript_SetColor(QsciLexerPostScript* self, QColor* c, int style);
void QsciLexerPostScript_OnSetColor(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetColor(QsciLexerPostScript* self, QColor* c, int style);
void QsciLexerPostScript_SetEolFill(QsciLexerPostScript* self, bool eoffill, int style);
void QsciLexerPostScript_OnSetEolFill(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetEolFill(QsciLexerPostScript* self, bool eoffill, int style);
void QsciLexerPostScript_SetFont(QsciLexerPostScript* self, QFont* f, int style);
void QsciLexerPostScript_OnSetFont(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetFont(QsciLexerPostScript* self, QFont* f, int style);
void QsciLexerPostScript_SetPaper(QsciLexerPostScript* self, QColor* c, int style);
void QsciLexerPostScript_OnSetPaper(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseSetPaper(QsciLexerPostScript* self, QColor* c, int style);
bool QsciLexerPostScript_ReadProperties(QsciLexerPostScript* self, QSettings* qs, libqt_string prefix);
void QsciLexerPostScript_OnReadProperties(QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseReadProperties(QsciLexerPostScript* self, QSettings* qs, libqt_string prefix);
bool QsciLexerPostScript_Event(QsciLexerPostScript* self, QEvent* event);
void QsciLexerPostScript_OnEvent(QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseEvent(QsciLexerPostScript* self, QEvent* event);
bool QsciLexerPostScript_EventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event);
void QsciLexerPostScript_OnEventFilter(QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseEventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event);
void QsciLexerPostScript_TimerEvent(QsciLexerPostScript* self, QTimerEvent* event);
void QsciLexerPostScript_OnTimerEvent(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseTimerEvent(QsciLexerPostScript* self, QTimerEvent* event);
void QsciLexerPostScript_ChildEvent(QsciLexerPostScript* self, QChildEvent* event);
void QsciLexerPostScript_OnChildEvent(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseChildEvent(QsciLexerPostScript* self, QChildEvent* event);
void QsciLexerPostScript_CustomEvent(QsciLexerPostScript* self, QEvent* event);
void QsciLexerPostScript_OnCustomEvent(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseCustomEvent(QsciLexerPostScript* self, QEvent* event);
void QsciLexerPostScript_ConnectNotify(QsciLexerPostScript* self, QMetaMethod* signal);
void QsciLexerPostScript_OnConnectNotify(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseConnectNotify(QsciLexerPostScript* self, QMetaMethod* signal);
void QsciLexerPostScript_DisconnectNotify(QsciLexerPostScript* self, QMetaMethod* signal);
void QsciLexerPostScript_OnDisconnectNotify(QsciLexerPostScript* self, intptr_t slot);
void QsciLexerPostScript_QBaseDisconnectNotify(QsciLexerPostScript* self, QMetaMethod* signal);
bool QsciLexerPostScript_WriteProperties(const QsciLexerPostScript* self, QSettings* qs, libqt_string prefix);
void QsciLexerPostScript_OnWriteProperties(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseWriteProperties(const QsciLexerPostScript* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerPostScript_Sender(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnSender(const QsciLexerPostScript* self, intptr_t slot);
QObject* QsciLexerPostScript_QBaseSender(const QsciLexerPostScript* self);
int QsciLexerPostScript_SenderSignalIndex(const QsciLexerPostScript* self);
void QsciLexerPostScript_OnSenderSignalIndex(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseSenderSignalIndex(const QsciLexerPostScript* self);
int QsciLexerPostScript_Receivers(const QsciLexerPostScript* self, const char* signal);
void QsciLexerPostScript_OnReceivers(const QsciLexerPostScript* self, intptr_t slot);
int QsciLexerPostScript_QBaseReceivers(const QsciLexerPostScript* self, const char* signal);
bool QsciLexerPostScript_IsSignalConnected(const QsciLexerPostScript* self, QMetaMethod* signal);
void QsciLexerPostScript_OnIsSignalConnected(const QsciLexerPostScript* self, intptr_t slot);
bool QsciLexerPostScript_QBaseIsSignalConnected(const QsciLexerPostScript* self, QMetaMethod* signal);
void QsciLexerPostScript_Delete(QsciLexerPostScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
