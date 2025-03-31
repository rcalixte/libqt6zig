#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCSHARP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCSHARP_H

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
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerCSharp QsciLexerCSharp;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCSharp* QsciLexerCSharp_new();
QsciLexerCSharp* QsciLexerCSharp_new2(QObject* parent);
QMetaObject* QsciLexerCSharp_MetaObject(const QsciLexerCSharp* self);
void* QsciLexerCSharp_Metacast(QsciLexerCSharp* self, const char* param1);
int QsciLexerCSharp_Metacall(QsciLexerCSharp* self, int param1, int param2, void** param3);
void QsciLexerCSharp_OnMetacall(QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseMetacall(QsciLexerCSharp* self, int param1, int param2, void** param3);
libqt_string QsciLexerCSharp_Tr(const char* s);
const char* QsciLexerCSharp_Language(const QsciLexerCSharp* self);
QColor* QsciLexerCSharp_DefaultColor(const QsciLexerCSharp* self, int style);
bool QsciLexerCSharp_DefaultEolFill(const QsciLexerCSharp* self, int style);
QFont* QsciLexerCSharp_DefaultFont(const QsciLexerCSharp* self, int style);
QColor* QsciLexerCSharp_DefaultPaper(const QsciLexerCSharp* self, int style);
const char* QsciLexerCSharp_Keywords(const QsciLexerCSharp* self, int set);
libqt_string QsciLexerCSharp_Description(const QsciLexerCSharp* self, int style);
libqt_string QsciLexerCSharp_Tr2(const char* s, const char* c);
libqt_string QsciLexerCSharp_Tr3(const char* s, const char* c, int n);
void QsciLexerCSharp_SetFoldAtElse(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_OnSetFoldAtElse(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetFoldAtElse(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_SetFoldComments(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_OnSetFoldComments(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetFoldComments(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_SetFoldCompact(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_OnSetFoldCompact(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetFoldCompact(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_SetFoldPreprocessor(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_OnSetFoldPreprocessor(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetFoldPreprocessor(QsciLexerCSharp* self, bool fold);
void QsciLexerCSharp_SetStylePreprocessor(QsciLexerCSharp* self, bool style);
void QsciLexerCSharp_OnSetStylePreprocessor(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetStylePreprocessor(QsciLexerCSharp* self, bool style);
int QsciLexerCSharp_LexerId(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnLexerId(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseLexerId(const QsciLexerCSharp* self);
const char* QsciLexerCSharp_AutoCompletionFillups(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnAutoCompletionFillups(const QsciLexerCSharp* self, intptr_t slot);
const char* QsciLexerCSharp_QBaseAutoCompletionFillups(const QsciLexerCSharp* self);
int QsciLexerCSharp_BlockLookback(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnBlockLookback(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseBlockLookback(const QsciLexerCSharp* self);
bool QsciLexerCSharp_CaseSensitive(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnCaseSensitive(const QsciLexerCSharp* self, intptr_t slot);
bool QsciLexerCSharp_QBaseCaseSensitive(const QsciLexerCSharp* self);
QColor* QsciLexerCSharp_Color(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_OnColor(const QsciLexerCSharp* self, intptr_t slot);
QColor* QsciLexerCSharp_QBaseColor(const QsciLexerCSharp* self, int style);
bool QsciLexerCSharp_EolFill(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_OnEolFill(const QsciLexerCSharp* self, intptr_t slot);
bool QsciLexerCSharp_QBaseEolFill(const QsciLexerCSharp* self, int style);
QFont* QsciLexerCSharp_Font(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_OnFont(const QsciLexerCSharp* self, intptr_t slot);
QFont* QsciLexerCSharp_QBaseFont(const QsciLexerCSharp* self, int style);
int QsciLexerCSharp_IndentationGuideView(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnIndentationGuideView(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseIndentationGuideView(const QsciLexerCSharp* self);
int QsciLexerCSharp_DefaultStyle(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnDefaultStyle(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseDefaultStyle(const QsciLexerCSharp* self);
QColor* QsciLexerCSharp_Paper(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_OnPaper(const QsciLexerCSharp* self, intptr_t slot);
QColor* QsciLexerCSharp_QBasePaper(const QsciLexerCSharp* self, int style);
QColor* QsciLexerCSharp_DefaultColorWithStyle(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_OnDefaultColorWithStyle(const QsciLexerCSharp* self, intptr_t slot);
QColor* QsciLexerCSharp_QBaseDefaultColorWithStyle(const QsciLexerCSharp* self, int style);
QFont* QsciLexerCSharp_DefaultFontWithStyle(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_OnDefaultFontWithStyle(const QsciLexerCSharp* self, intptr_t slot);
QFont* QsciLexerCSharp_QBaseDefaultFontWithStyle(const QsciLexerCSharp* self, int style);
QColor* QsciLexerCSharp_DefaultPaperWithStyle(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_OnDefaultPaperWithStyle(const QsciLexerCSharp* self, intptr_t slot);
QColor* QsciLexerCSharp_QBaseDefaultPaperWithStyle(const QsciLexerCSharp* self, int style);
void QsciLexerCSharp_SetEditor(QsciLexerCSharp* self, QsciScintilla* editor);
void QsciLexerCSharp_OnSetEditor(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetEditor(QsciLexerCSharp* self, QsciScintilla* editor);
int QsciLexerCSharp_StyleBitsNeeded(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnStyleBitsNeeded(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseStyleBitsNeeded(const QsciLexerCSharp* self);
void QsciLexerCSharp_SetAutoIndentStyle(QsciLexerCSharp* self, int autoindentstyle);
void QsciLexerCSharp_OnSetAutoIndentStyle(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetAutoIndentStyle(QsciLexerCSharp* self, int autoindentstyle);
void QsciLexerCSharp_SetColor(QsciLexerCSharp* self, QColor* c, int style);
void QsciLexerCSharp_OnSetColor(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetColor(QsciLexerCSharp* self, QColor* c, int style);
void QsciLexerCSharp_SetEolFill(QsciLexerCSharp* self, bool eoffill, int style);
void QsciLexerCSharp_OnSetEolFill(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetEolFill(QsciLexerCSharp* self, bool eoffill, int style);
void QsciLexerCSharp_SetFont(QsciLexerCSharp* self, QFont* f, int style);
void QsciLexerCSharp_OnSetFont(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetFont(QsciLexerCSharp* self, QFont* f, int style);
void QsciLexerCSharp_SetPaper(QsciLexerCSharp* self, QColor* c, int style);
void QsciLexerCSharp_OnSetPaper(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseSetPaper(QsciLexerCSharp* self, QColor* c, int style);
bool QsciLexerCSharp_Event(QsciLexerCSharp* self, QEvent* event);
void QsciLexerCSharp_OnEvent(QsciLexerCSharp* self, intptr_t slot);
bool QsciLexerCSharp_QBaseEvent(QsciLexerCSharp* self, QEvent* event);
bool QsciLexerCSharp_EventFilter(QsciLexerCSharp* self, QObject* watched, QEvent* event);
void QsciLexerCSharp_OnEventFilter(QsciLexerCSharp* self, intptr_t slot);
bool QsciLexerCSharp_QBaseEventFilter(QsciLexerCSharp* self, QObject* watched, QEvent* event);
void QsciLexerCSharp_TimerEvent(QsciLexerCSharp* self, QTimerEvent* event);
void QsciLexerCSharp_OnTimerEvent(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseTimerEvent(QsciLexerCSharp* self, QTimerEvent* event);
void QsciLexerCSharp_ChildEvent(QsciLexerCSharp* self, QChildEvent* event);
void QsciLexerCSharp_OnChildEvent(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseChildEvent(QsciLexerCSharp* self, QChildEvent* event);
void QsciLexerCSharp_CustomEvent(QsciLexerCSharp* self, QEvent* event);
void QsciLexerCSharp_OnCustomEvent(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseCustomEvent(QsciLexerCSharp* self, QEvent* event);
void QsciLexerCSharp_ConnectNotify(QsciLexerCSharp* self, QMetaMethod* signal);
void QsciLexerCSharp_OnConnectNotify(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseConnectNotify(QsciLexerCSharp* self, QMetaMethod* signal);
void QsciLexerCSharp_DisconnectNotify(QsciLexerCSharp* self, QMetaMethod* signal);
void QsciLexerCSharp_OnDisconnectNotify(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseDisconnectNotify(QsciLexerCSharp* self, QMetaMethod* signal);
const char* QsciLexerCSharp_Lexer(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnLexer(const QsciLexerCSharp* self, intptr_t slot);
const char* QsciLexerCSharp_QBaseLexer(const QsciLexerCSharp* self);
libqt_list /* of libqt_string */ QsciLexerCSharp_AutoCompletionWordSeparators(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnAutoCompletionWordSeparators(const QsciLexerCSharp* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerCSharp_QBaseAutoCompletionWordSeparators(const QsciLexerCSharp* self);
const char* QsciLexerCSharp_BlockEnd(const QsciLexerCSharp* self, int* style);
void QsciLexerCSharp_OnBlockEnd(const QsciLexerCSharp* self, intptr_t slot);
const char* QsciLexerCSharp_QBaseBlockEnd(const QsciLexerCSharp* self, int* style);
const char* QsciLexerCSharp_BlockStart(const QsciLexerCSharp* self, int* style);
void QsciLexerCSharp_OnBlockStart(const QsciLexerCSharp* self, intptr_t slot);
const char* QsciLexerCSharp_QBaseBlockStart(const QsciLexerCSharp* self, int* style);
const char* QsciLexerCSharp_BlockStartKeyword(const QsciLexerCSharp* self, int* style);
void QsciLexerCSharp_OnBlockStartKeyword(const QsciLexerCSharp* self, intptr_t slot);
const char* QsciLexerCSharp_QBaseBlockStartKeyword(const QsciLexerCSharp* self, int* style);
int QsciLexerCSharp_BraceStyle(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnBraceStyle(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseBraceStyle(const QsciLexerCSharp* self);
void QsciLexerCSharp_RefreshProperties(QsciLexerCSharp* self);
void QsciLexerCSharp_OnRefreshProperties(QsciLexerCSharp* self, intptr_t slot);
void QsciLexerCSharp_QBaseRefreshProperties(QsciLexerCSharp* self);
const char* QsciLexerCSharp_WordCharacters(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnWordCharacters(const QsciLexerCSharp* self, intptr_t slot);
const char* QsciLexerCSharp_QBaseWordCharacters(const QsciLexerCSharp* self);
bool QsciLexerCSharp_ReadProperties(QsciLexerCSharp* self, QSettings* qs, libqt_string prefix);
void QsciLexerCSharp_OnReadProperties(QsciLexerCSharp* self, intptr_t slot);
bool QsciLexerCSharp_QBaseReadProperties(QsciLexerCSharp* self, QSettings* qs, libqt_string prefix);
bool QsciLexerCSharp_WriteProperties(const QsciLexerCSharp* self, QSettings* qs, libqt_string prefix);
void QsciLexerCSharp_OnWriteProperties(const QsciLexerCSharp* self, intptr_t slot);
bool QsciLexerCSharp_QBaseWriteProperties(const QsciLexerCSharp* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerCSharp_Sender(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnSender(const QsciLexerCSharp* self, intptr_t slot);
QObject* QsciLexerCSharp_QBaseSender(const QsciLexerCSharp* self);
int QsciLexerCSharp_SenderSignalIndex(const QsciLexerCSharp* self);
void QsciLexerCSharp_OnSenderSignalIndex(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseSenderSignalIndex(const QsciLexerCSharp* self);
int QsciLexerCSharp_Receivers(const QsciLexerCSharp* self, const char* signal);
void QsciLexerCSharp_OnReceivers(const QsciLexerCSharp* self, intptr_t slot);
int QsciLexerCSharp_QBaseReceivers(const QsciLexerCSharp* self, const char* signal);
bool QsciLexerCSharp_IsSignalConnected(const QsciLexerCSharp* self, QMetaMethod* signal);
void QsciLexerCSharp_OnIsSignalConnected(const QsciLexerCSharp* self, intptr_t slot);
bool QsciLexerCSharp_QBaseIsSignalConnected(const QsciLexerCSharp* self, QMetaMethod* signal);
void QsciLexerCSharp_Delete(QsciLexerCSharp* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
