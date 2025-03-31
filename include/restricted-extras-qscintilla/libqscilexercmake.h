#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCMAKE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCMAKE_H

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
typedef struct QsciLexerCMake QsciLexerCMake;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCMake* QsciLexerCMake_new();
QsciLexerCMake* QsciLexerCMake_new2(QObject* parent);
QMetaObject* QsciLexerCMake_MetaObject(const QsciLexerCMake* self);
void* QsciLexerCMake_Metacast(QsciLexerCMake* self, const char* param1);
int QsciLexerCMake_Metacall(QsciLexerCMake* self, int param1, int param2, void** param3);
void QsciLexerCMake_OnMetacall(QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseMetacall(QsciLexerCMake* self, int param1, int param2, void** param3);
libqt_string QsciLexerCMake_Tr(const char* s);
const char* QsciLexerCMake_Language(const QsciLexerCMake* self);
const char* QsciLexerCMake_Lexer(const QsciLexerCMake* self);
QColor* QsciLexerCMake_DefaultColor(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_DefaultFont(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultPaper(const QsciLexerCMake* self, int style);
const char* QsciLexerCMake_Keywords(const QsciLexerCMake* self, int set);
libqt_string QsciLexerCMake_Description(const QsciLexerCMake* self, int style);
void QsciLexerCMake_RefreshProperties(QsciLexerCMake* self);
bool QsciLexerCMake_FoldAtElse(const QsciLexerCMake* self);
void QsciLexerCMake_SetFoldAtElse(QsciLexerCMake* self, bool fold);
void QsciLexerCMake_OnSetFoldAtElse(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseSetFoldAtElse(QsciLexerCMake* self, bool fold);
libqt_string QsciLexerCMake_Tr2(const char* s, const char* c);
libqt_string QsciLexerCMake_Tr3(const char* s, const char* c, int n);
int QsciLexerCMake_LexerId(const QsciLexerCMake* self);
void QsciLexerCMake_OnLexerId(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseLexerId(const QsciLexerCMake* self);
const char* QsciLexerCMake_AutoCompletionFillups(const QsciLexerCMake* self);
void QsciLexerCMake_OnAutoCompletionFillups(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_QBaseAutoCompletionFillups(const QsciLexerCMake* self);
libqt_list /* of libqt_string */ QsciLexerCMake_AutoCompletionWordSeparators(const QsciLexerCMake* self);
void QsciLexerCMake_OnAutoCompletionWordSeparators(const QsciLexerCMake* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerCMake_QBaseAutoCompletionWordSeparators(const QsciLexerCMake* self);
const char* QsciLexerCMake_BlockEnd(const QsciLexerCMake* self, int* style);
void QsciLexerCMake_OnBlockEnd(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_QBaseBlockEnd(const QsciLexerCMake* self, int* style);
int QsciLexerCMake_BlockLookback(const QsciLexerCMake* self);
void QsciLexerCMake_OnBlockLookback(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseBlockLookback(const QsciLexerCMake* self);
const char* QsciLexerCMake_BlockStart(const QsciLexerCMake* self, int* style);
void QsciLexerCMake_OnBlockStart(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_QBaseBlockStart(const QsciLexerCMake* self, int* style);
const char* QsciLexerCMake_BlockStartKeyword(const QsciLexerCMake* self, int* style);
void QsciLexerCMake_OnBlockStartKeyword(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_QBaseBlockStartKeyword(const QsciLexerCMake* self, int* style);
int QsciLexerCMake_BraceStyle(const QsciLexerCMake* self);
void QsciLexerCMake_OnBraceStyle(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseBraceStyle(const QsciLexerCMake* self);
bool QsciLexerCMake_CaseSensitive(const QsciLexerCMake* self);
void QsciLexerCMake_OnCaseSensitive(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseCaseSensitive(const QsciLexerCMake* self);
QColor* QsciLexerCMake_Color(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnColor(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_QBaseColor(const QsciLexerCMake* self, int style);
bool QsciLexerCMake_EolFill(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnEolFill(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseEolFill(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_Font(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnFont(const QsciLexerCMake* self, intptr_t slot);
QFont* QsciLexerCMake_QBaseFont(const QsciLexerCMake* self, int style);
int QsciLexerCMake_IndentationGuideView(const QsciLexerCMake* self);
void QsciLexerCMake_OnIndentationGuideView(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseIndentationGuideView(const QsciLexerCMake* self);
int QsciLexerCMake_DefaultStyle(const QsciLexerCMake* self);
void QsciLexerCMake_OnDefaultStyle(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseDefaultStyle(const QsciLexerCMake* self);
QColor* QsciLexerCMake_Paper(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnPaper(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_QBasePaper(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultColorWithStyle(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultColorWithStyle(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_QBaseDefaultColorWithStyle(const QsciLexerCMake* self, int style);
bool QsciLexerCMake_DefaultEolFill(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultEolFill(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseDefaultEolFill(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_DefaultFontWithStyle(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultFontWithStyle(const QsciLexerCMake* self, intptr_t slot);
QFont* QsciLexerCMake_QBaseDefaultFontWithStyle(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultPaperWithStyle(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultPaperWithStyle(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_QBaseDefaultPaperWithStyle(const QsciLexerCMake* self, int style);
void QsciLexerCMake_SetEditor(QsciLexerCMake* self, QsciScintilla* editor);
void QsciLexerCMake_OnSetEditor(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseSetEditor(QsciLexerCMake* self, QsciScintilla* editor);
int QsciLexerCMake_StyleBitsNeeded(const QsciLexerCMake* self);
void QsciLexerCMake_OnStyleBitsNeeded(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseStyleBitsNeeded(const QsciLexerCMake* self);
const char* QsciLexerCMake_WordCharacters(const QsciLexerCMake* self);
void QsciLexerCMake_OnWordCharacters(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_QBaseWordCharacters(const QsciLexerCMake* self);
void QsciLexerCMake_SetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle);
void QsciLexerCMake_OnSetAutoIndentStyle(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseSetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle);
void QsciLexerCMake_SetColor(QsciLexerCMake* self, QColor* c, int style);
void QsciLexerCMake_OnSetColor(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseSetColor(QsciLexerCMake* self, QColor* c, int style);
void QsciLexerCMake_SetEolFill(QsciLexerCMake* self, bool eoffill, int style);
void QsciLexerCMake_OnSetEolFill(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseSetEolFill(QsciLexerCMake* self, bool eoffill, int style);
void QsciLexerCMake_SetFont(QsciLexerCMake* self, QFont* f, int style);
void QsciLexerCMake_OnSetFont(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseSetFont(QsciLexerCMake* self, QFont* f, int style);
void QsciLexerCMake_SetPaper(QsciLexerCMake* self, QColor* c, int style);
void QsciLexerCMake_OnSetPaper(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseSetPaper(QsciLexerCMake* self, QColor* c, int style);
bool QsciLexerCMake_ReadProperties(QsciLexerCMake* self, QSettings* qs, libqt_string prefix);
void QsciLexerCMake_OnReadProperties(QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseReadProperties(QsciLexerCMake* self, QSettings* qs, libqt_string prefix);
bool QsciLexerCMake_Event(QsciLexerCMake* self, QEvent* event);
void QsciLexerCMake_OnEvent(QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseEvent(QsciLexerCMake* self, QEvent* event);
bool QsciLexerCMake_EventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event);
void QsciLexerCMake_OnEventFilter(QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseEventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event);
void QsciLexerCMake_TimerEvent(QsciLexerCMake* self, QTimerEvent* event);
void QsciLexerCMake_OnTimerEvent(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseTimerEvent(QsciLexerCMake* self, QTimerEvent* event);
void QsciLexerCMake_ChildEvent(QsciLexerCMake* self, QChildEvent* event);
void QsciLexerCMake_OnChildEvent(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseChildEvent(QsciLexerCMake* self, QChildEvent* event);
void QsciLexerCMake_CustomEvent(QsciLexerCMake* self, QEvent* event);
void QsciLexerCMake_OnCustomEvent(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseCustomEvent(QsciLexerCMake* self, QEvent* event);
void QsciLexerCMake_ConnectNotify(QsciLexerCMake* self, QMetaMethod* signal);
void QsciLexerCMake_OnConnectNotify(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseConnectNotify(QsciLexerCMake* self, QMetaMethod* signal);
void QsciLexerCMake_DisconnectNotify(QsciLexerCMake* self, QMetaMethod* signal);
void QsciLexerCMake_OnDisconnectNotify(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_QBaseDisconnectNotify(QsciLexerCMake* self, QMetaMethod* signal);
bool QsciLexerCMake_WriteProperties(const QsciLexerCMake* self, QSettings* qs, libqt_string prefix);
void QsciLexerCMake_OnWriteProperties(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseWriteProperties(const QsciLexerCMake* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerCMake_Sender(const QsciLexerCMake* self);
void QsciLexerCMake_OnSender(const QsciLexerCMake* self, intptr_t slot);
QObject* QsciLexerCMake_QBaseSender(const QsciLexerCMake* self);
int QsciLexerCMake_SenderSignalIndex(const QsciLexerCMake* self);
void QsciLexerCMake_OnSenderSignalIndex(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseSenderSignalIndex(const QsciLexerCMake* self);
int QsciLexerCMake_Receivers(const QsciLexerCMake* self, const char* signal);
void QsciLexerCMake_OnReceivers(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_QBaseReceivers(const QsciLexerCMake* self, const char* signal);
bool QsciLexerCMake_IsSignalConnected(const QsciLexerCMake* self, QMetaMethod* signal);
void QsciLexerCMake_OnIsSignalConnected(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_QBaseIsSignalConnected(const QsciLexerCMake* self, QMetaMethod* signal);
void QsciLexerCMake_Delete(QsciLexerCMake* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
