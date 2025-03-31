#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSPICE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSPICE_H

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
typedef struct QsciLexerSpice QsciLexerSpice;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSpice* QsciLexerSpice_new();
QsciLexerSpice* QsciLexerSpice_new2(QObject* parent);
QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self);
void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1);
int QsciLexerSpice_Metacall(QsciLexerSpice* self, int param1, int param2, void** param3);
void QsciLexerSpice_OnMetacall(QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseMetacall(QsciLexerSpice* self, int param1, int param2, void** param3);
libqt_string QsciLexerSpice_Tr(const char* s);
const char* QsciLexerSpice_Language(const QsciLexerSpice* self);
const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self);
int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self);
const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set);
QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style);
libqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style);
libqt_string QsciLexerSpice_Tr2(const char* s, const char* c);
libqt_string QsciLexerSpice_Tr3(const char* s, const char* c, int n);
int QsciLexerSpice_LexerId(const QsciLexerSpice* self);
void QsciLexerSpice_OnLexerId(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseLexerId(const QsciLexerSpice* self);
const char* QsciLexerSpice_AutoCompletionFillups(const QsciLexerSpice* self);
void QsciLexerSpice_OnAutoCompletionFillups(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_QBaseAutoCompletionFillups(const QsciLexerSpice* self);
libqt_list /* of libqt_string */ QsciLexerSpice_AutoCompletionWordSeparators(const QsciLexerSpice* self);
void QsciLexerSpice_OnAutoCompletionWordSeparators(const QsciLexerSpice* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerSpice_QBaseAutoCompletionWordSeparators(const QsciLexerSpice* self);
const char* QsciLexerSpice_BlockEnd(const QsciLexerSpice* self, int* style);
void QsciLexerSpice_OnBlockEnd(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_QBaseBlockEnd(const QsciLexerSpice* self, int* style);
int QsciLexerSpice_BlockLookback(const QsciLexerSpice* self);
void QsciLexerSpice_OnBlockLookback(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseBlockLookback(const QsciLexerSpice* self);
const char* QsciLexerSpice_BlockStart(const QsciLexerSpice* self, int* style);
void QsciLexerSpice_OnBlockStart(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_QBaseBlockStart(const QsciLexerSpice* self, int* style);
const char* QsciLexerSpice_BlockStartKeyword(const QsciLexerSpice* self, int* style);
void QsciLexerSpice_OnBlockStartKeyword(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_QBaseBlockStartKeyword(const QsciLexerSpice* self, int* style);
bool QsciLexerSpice_CaseSensitive(const QsciLexerSpice* self);
void QsciLexerSpice_OnCaseSensitive(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseCaseSensitive(const QsciLexerSpice* self);
QColor* QsciLexerSpice_Color(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnColor(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_QBaseColor(const QsciLexerSpice* self, int style);
bool QsciLexerSpice_EolFill(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnEolFill(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseEolFill(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_Font(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnFont(const QsciLexerSpice* self, intptr_t slot);
QFont* QsciLexerSpice_QBaseFont(const QsciLexerSpice* self, int style);
int QsciLexerSpice_IndentationGuideView(const QsciLexerSpice* self);
void QsciLexerSpice_OnIndentationGuideView(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseIndentationGuideView(const QsciLexerSpice* self);
int QsciLexerSpice_DefaultStyle(const QsciLexerSpice* self);
void QsciLexerSpice_OnDefaultStyle(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseDefaultStyle(const QsciLexerSpice* self);
QColor* QsciLexerSpice_Paper(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnPaper(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_QBasePaper(const QsciLexerSpice* self, int style);
QColor* QsciLexerSpice_DefaultColorWithStyle(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultColorWithStyle(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_QBaseDefaultColorWithStyle(const QsciLexerSpice* self, int style);
bool QsciLexerSpice_DefaultEolFill(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultEolFill(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseDefaultEolFill(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_DefaultFontWithStyle(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultFontWithStyle(const QsciLexerSpice* self, intptr_t slot);
QFont* QsciLexerSpice_QBaseDefaultFontWithStyle(const QsciLexerSpice* self, int style);
QColor* QsciLexerSpice_DefaultPaperWithStyle(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultPaperWithStyle(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_QBaseDefaultPaperWithStyle(const QsciLexerSpice* self, int style);
void QsciLexerSpice_SetEditor(QsciLexerSpice* self, QsciScintilla* editor);
void QsciLexerSpice_OnSetEditor(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseSetEditor(QsciLexerSpice* self, QsciScintilla* editor);
void QsciLexerSpice_RefreshProperties(QsciLexerSpice* self);
void QsciLexerSpice_OnRefreshProperties(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseRefreshProperties(QsciLexerSpice* self);
int QsciLexerSpice_StyleBitsNeeded(const QsciLexerSpice* self);
void QsciLexerSpice_OnStyleBitsNeeded(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseStyleBitsNeeded(const QsciLexerSpice* self);
const char* QsciLexerSpice_WordCharacters(const QsciLexerSpice* self);
void QsciLexerSpice_OnWordCharacters(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_QBaseWordCharacters(const QsciLexerSpice* self);
void QsciLexerSpice_SetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle);
void QsciLexerSpice_OnSetAutoIndentStyle(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseSetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle);
void QsciLexerSpice_SetColor(QsciLexerSpice* self, QColor* c, int style);
void QsciLexerSpice_OnSetColor(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseSetColor(QsciLexerSpice* self, QColor* c, int style);
void QsciLexerSpice_SetEolFill(QsciLexerSpice* self, bool eoffill, int style);
void QsciLexerSpice_OnSetEolFill(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseSetEolFill(QsciLexerSpice* self, bool eoffill, int style);
void QsciLexerSpice_SetFont(QsciLexerSpice* self, QFont* f, int style);
void QsciLexerSpice_OnSetFont(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseSetFont(QsciLexerSpice* self, QFont* f, int style);
void QsciLexerSpice_SetPaper(QsciLexerSpice* self, QColor* c, int style);
void QsciLexerSpice_OnSetPaper(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseSetPaper(QsciLexerSpice* self, QColor* c, int style);
bool QsciLexerSpice_ReadProperties(QsciLexerSpice* self, QSettings* qs, libqt_string prefix);
void QsciLexerSpice_OnReadProperties(QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseReadProperties(QsciLexerSpice* self, QSettings* qs, libqt_string prefix);
bool QsciLexerSpice_Event(QsciLexerSpice* self, QEvent* event);
void QsciLexerSpice_OnEvent(QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseEvent(QsciLexerSpice* self, QEvent* event);
bool QsciLexerSpice_EventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event);
void QsciLexerSpice_OnEventFilter(QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseEventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event);
void QsciLexerSpice_TimerEvent(QsciLexerSpice* self, QTimerEvent* event);
void QsciLexerSpice_OnTimerEvent(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseTimerEvent(QsciLexerSpice* self, QTimerEvent* event);
void QsciLexerSpice_ChildEvent(QsciLexerSpice* self, QChildEvent* event);
void QsciLexerSpice_OnChildEvent(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseChildEvent(QsciLexerSpice* self, QChildEvent* event);
void QsciLexerSpice_CustomEvent(QsciLexerSpice* self, QEvent* event);
void QsciLexerSpice_OnCustomEvent(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseCustomEvent(QsciLexerSpice* self, QEvent* event);
void QsciLexerSpice_ConnectNotify(QsciLexerSpice* self, QMetaMethod* signal);
void QsciLexerSpice_OnConnectNotify(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseConnectNotify(QsciLexerSpice* self, QMetaMethod* signal);
void QsciLexerSpice_DisconnectNotify(QsciLexerSpice* self, QMetaMethod* signal);
void QsciLexerSpice_OnDisconnectNotify(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_QBaseDisconnectNotify(QsciLexerSpice* self, QMetaMethod* signal);
bool QsciLexerSpice_WriteProperties(const QsciLexerSpice* self, QSettings* qs, libqt_string prefix);
void QsciLexerSpice_OnWriteProperties(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseWriteProperties(const QsciLexerSpice* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerSpice_Sender(const QsciLexerSpice* self);
void QsciLexerSpice_OnSender(const QsciLexerSpice* self, intptr_t slot);
QObject* QsciLexerSpice_QBaseSender(const QsciLexerSpice* self);
int QsciLexerSpice_SenderSignalIndex(const QsciLexerSpice* self);
void QsciLexerSpice_OnSenderSignalIndex(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseSenderSignalIndex(const QsciLexerSpice* self);
int QsciLexerSpice_Receivers(const QsciLexerSpice* self, const char* signal);
void QsciLexerSpice_OnReceivers(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_QBaseReceivers(const QsciLexerSpice* self, const char* signal);
bool QsciLexerSpice_IsSignalConnected(const QsciLexerSpice* self, QMetaMethod* signal);
void QsciLexerSpice_OnIsSignalConnected(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_QBaseIsSignalConnected(const QsciLexerSpice* self, QMetaMethod* signal);
void QsciLexerSpice_Delete(QsciLexerSpice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
