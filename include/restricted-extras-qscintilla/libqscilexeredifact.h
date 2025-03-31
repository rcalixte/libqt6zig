#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEREDIFACT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEREDIFACT_H

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
typedef struct QsciLexerEDIFACT QsciLexerEDIFACT;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerEDIFACT* QsciLexerEDIFACT_new();
QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent);
QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self);
void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1);
int QsciLexerEDIFACT_Metacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3);
void QsciLexerEDIFACT_OnMetacall(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseMetacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3);
libqt_string QsciLexerEDIFACT_Tr(const char* s);
const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style);
libqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style);
libqt_string QsciLexerEDIFACT_Tr2(const char* s, const char* c);
libqt_string QsciLexerEDIFACT_Tr3(const char* s, const char* c, int n);
int QsciLexerEDIFACT_LexerId(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnLexerId(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseLexerId(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_AutoCompletionFillups(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnAutoCompletionFillups(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_QBaseAutoCompletionFillups(const QsciLexerEDIFACT* self);
libqt_list /* of libqt_string */ QsciLexerEDIFACT_AutoCompletionWordSeparators(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnAutoCompletionWordSeparators(const QsciLexerEDIFACT* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerEDIFACT_QBaseAutoCompletionWordSeparators(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_BlockEnd(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockEnd(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_QBaseBlockEnd(const QsciLexerEDIFACT* self, int* style);
int QsciLexerEDIFACT_BlockLookback(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnBlockLookback(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseBlockLookback(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_BlockStart(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockStart(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_QBaseBlockStart(const QsciLexerEDIFACT* self, int* style);
const char* QsciLexerEDIFACT_BlockStartKeyword(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockStartKeyword(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_QBaseBlockStartKeyword(const QsciLexerEDIFACT* self, int* style);
int QsciLexerEDIFACT_BraceStyle(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnBraceStyle(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseBraceStyle(const QsciLexerEDIFACT* self);
bool QsciLexerEDIFACT_CaseSensitive(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnCaseSensitive(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseCaseSensitive(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_Color(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnColor(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_QBaseColor(const QsciLexerEDIFACT* self, int style);
bool QsciLexerEDIFACT_EolFill(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnEolFill(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseEolFill(const QsciLexerEDIFACT* self, int style);
QFont* QsciLexerEDIFACT_Font(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnFont(const QsciLexerEDIFACT* self, intptr_t slot);
QFont* QsciLexerEDIFACT_QBaseFont(const QsciLexerEDIFACT* self, int style);
int QsciLexerEDIFACT_IndentationGuideView(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnIndentationGuideView(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseIndentationGuideView(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Keywords(const QsciLexerEDIFACT* self, int set);
void QsciLexerEDIFACT_OnKeywords(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_QBaseKeywords(const QsciLexerEDIFACT* self, int set);
int QsciLexerEDIFACT_DefaultStyle(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnDefaultStyle(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseDefaultStyle(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_Paper(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnPaper(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_QBasePaper(const QsciLexerEDIFACT* self, int style);
QColor* QsciLexerEDIFACT_DefaultColorWithStyle(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultColorWithStyle(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_QBaseDefaultColorWithStyle(const QsciLexerEDIFACT* self, int style);
bool QsciLexerEDIFACT_DefaultEolFill(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultEolFill(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseDefaultEolFill(const QsciLexerEDIFACT* self, int style);
QFont* QsciLexerEDIFACT_DefaultFontWithStyle(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultFontWithStyle(const QsciLexerEDIFACT* self, intptr_t slot);
QFont* QsciLexerEDIFACT_QBaseDefaultFontWithStyle(const QsciLexerEDIFACT* self, int style);
QColor* QsciLexerEDIFACT_DefaultPaperWithStyle(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultPaperWithStyle(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_QBaseDefaultPaperWithStyle(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_SetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor);
void QsciLexerEDIFACT_OnSetEditor(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseSetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor);
void QsciLexerEDIFACT_RefreshProperties(QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnRefreshProperties(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseRefreshProperties(QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_StyleBitsNeeded(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnStyleBitsNeeded(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseStyleBitsNeeded(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_WordCharacters(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnWordCharacters(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_QBaseWordCharacters(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_SetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle);
void QsciLexerEDIFACT_OnSetAutoIndentStyle(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseSetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle);
void QsciLexerEDIFACT_SetColor(QsciLexerEDIFACT* self, QColor* c, int style);
void QsciLexerEDIFACT_OnSetColor(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseSetColor(QsciLexerEDIFACT* self, QColor* c, int style);
void QsciLexerEDIFACT_SetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style);
void QsciLexerEDIFACT_OnSetEolFill(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseSetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style);
void QsciLexerEDIFACT_SetFont(QsciLexerEDIFACT* self, QFont* f, int style);
void QsciLexerEDIFACT_OnSetFont(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseSetFont(QsciLexerEDIFACT* self, QFont* f, int style);
void QsciLexerEDIFACT_SetPaper(QsciLexerEDIFACT* self, QColor* c, int style);
void QsciLexerEDIFACT_OnSetPaper(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseSetPaper(QsciLexerEDIFACT* self, QColor* c, int style);
bool QsciLexerEDIFACT_ReadProperties(QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix);
void QsciLexerEDIFACT_OnReadProperties(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseReadProperties(QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix);
bool QsciLexerEDIFACT_Event(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_OnEvent(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseEvent(QsciLexerEDIFACT* self, QEvent* event);
bool QsciLexerEDIFACT_EventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event);
void QsciLexerEDIFACT_OnEventFilter(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseEventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event);
void QsciLexerEDIFACT_TimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
void QsciLexerEDIFACT_OnTimerEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
void QsciLexerEDIFACT_ChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
void QsciLexerEDIFACT_OnChildEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
void QsciLexerEDIFACT_CustomEvent(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_OnCustomEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseCustomEvent(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_ConnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal);
void QsciLexerEDIFACT_OnConnectNotify(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseConnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal);
void QsciLexerEDIFACT_DisconnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal);
void QsciLexerEDIFACT_OnDisconnectNotify(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_QBaseDisconnectNotify(QsciLexerEDIFACT* self, QMetaMethod* signal);
bool QsciLexerEDIFACT_WriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix);
void QsciLexerEDIFACT_OnWriteProperties(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerEDIFACT_Sender(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnSender(const QsciLexerEDIFACT* self, intptr_t slot);
QObject* QsciLexerEDIFACT_QBaseSender(const QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_SenderSignalIndex(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnSenderSignalIndex(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseSenderSignalIndex(const QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_Receivers(const QsciLexerEDIFACT* self, const char* signal);
void QsciLexerEDIFACT_OnReceivers(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_QBaseReceivers(const QsciLexerEDIFACT* self, const char* signal);
bool QsciLexerEDIFACT_IsSignalConnected(const QsciLexerEDIFACT* self, QMetaMethod* signal);
void QsciLexerEDIFACT_OnIsSignalConnected(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_QBaseIsSignalConnected(const QsciLexerEDIFACT* self, QMetaMethod* signal);
void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
