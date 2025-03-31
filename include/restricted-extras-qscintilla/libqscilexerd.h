#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERD_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERD_H

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
typedef struct QsciLexerD QsciLexerD;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerD* QsciLexerD_new();
QsciLexerD* QsciLexerD_new2(QObject* parent);
QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self);
void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1);
int QsciLexerD_Metacall(QsciLexerD* self, int param1, int param2, void** param3);
void QsciLexerD_OnMetacall(QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseMetacall(QsciLexerD* self, int param1, int param2, void** param3);
libqt_string QsciLexerD_Tr(const char* s);
const char* QsciLexerD_Language(const QsciLexerD* self);
const char* QsciLexerD_Lexer(const QsciLexerD* self);
libqt_list /* of libqt_string */ QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self);
const char* QsciLexerD_BlockEnd(const QsciLexerD* self);
const char* QsciLexerD_BlockStart(const QsciLexerD* self);
const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self);
int QsciLexerD_BraceStyle(const QsciLexerD* self);
const char* QsciLexerD_WordCharacters(const QsciLexerD* self);
QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style);
bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style);
QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style);
QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style);
const char* QsciLexerD_Keywords(const QsciLexerD* self, int set);
libqt_string QsciLexerD_Description(const QsciLexerD* self, int style);
void QsciLexerD_RefreshProperties(QsciLexerD* self);
bool QsciLexerD_FoldAtElse(const QsciLexerD* self);
bool QsciLexerD_FoldComments(const QsciLexerD* self);
bool QsciLexerD_FoldCompact(const QsciLexerD* self);
void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold);
void QsciLexerD_OnSetFoldAtElse(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetFoldAtElse(QsciLexerD* self, bool fold);
void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold);
void QsciLexerD_OnSetFoldComments(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetFoldComments(QsciLexerD* self, bool fold);
void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold);
void QsciLexerD_OnSetFoldCompact(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetFoldCompact(QsciLexerD* self, bool fold);
libqt_string QsciLexerD_Tr2(const char* s, const char* c);
libqt_string QsciLexerD_Tr3(const char* s, const char* c, int n);
const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style);
const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style);
const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style);
int QsciLexerD_LexerId(const QsciLexerD* self);
void QsciLexerD_OnLexerId(const QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseLexerId(const QsciLexerD* self);
const char* QsciLexerD_AutoCompletionFillups(const QsciLexerD* self);
void QsciLexerD_OnAutoCompletionFillups(const QsciLexerD* self, intptr_t slot);
const char* QsciLexerD_QBaseAutoCompletionFillups(const QsciLexerD* self);
int QsciLexerD_BlockLookback(const QsciLexerD* self);
void QsciLexerD_OnBlockLookback(const QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseBlockLookback(const QsciLexerD* self);
bool QsciLexerD_CaseSensitive(const QsciLexerD* self);
void QsciLexerD_OnCaseSensitive(const QsciLexerD* self, intptr_t slot);
bool QsciLexerD_QBaseCaseSensitive(const QsciLexerD* self);
QColor* QsciLexerD_Color(const QsciLexerD* self, int style);
void QsciLexerD_OnColor(const QsciLexerD* self, intptr_t slot);
QColor* QsciLexerD_QBaseColor(const QsciLexerD* self, int style);
bool QsciLexerD_EolFill(const QsciLexerD* self, int style);
void QsciLexerD_OnEolFill(const QsciLexerD* self, intptr_t slot);
bool QsciLexerD_QBaseEolFill(const QsciLexerD* self, int style);
QFont* QsciLexerD_Font(const QsciLexerD* self, int style);
void QsciLexerD_OnFont(const QsciLexerD* self, intptr_t slot);
QFont* QsciLexerD_QBaseFont(const QsciLexerD* self, int style);
int QsciLexerD_IndentationGuideView(const QsciLexerD* self);
void QsciLexerD_OnIndentationGuideView(const QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseIndentationGuideView(const QsciLexerD* self);
int QsciLexerD_DefaultStyle(const QsciLexerD* self);
void QsciLexerD_OnDefaultStyle(const QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseDefaultStyle(const QsciLexerD* self);
QColor* QsciLexerD_Paper(const QsciLexerD* self, int style);
void QsciLexerD_OnPaper(const QsciLexerD* self, intptr_t slot);
QColor* QsciLexerD_QBasePaper(const QsciLexerD* self, int style);
QColor* QsciLexerD_DefaultColorWithStyle(const QsciLexerD* self, int style);
void QsciLexerD_OnDefaultColorWithStyle(const QsciLexerD* self, intptr_t slot);
QColor* QsciLexerD_QBaseDefaultColorWithStyle(const QsciLexerD* self, int style);
QFont* QsciLexerD_DefaultFontWithStyle(const QsciLexerD* self, int style);
void QsciLexerD_OnDefaultFontWithStyle(const QsciLexerD* self, intptr_t slot);
QFont* QsciLexerD_QBaseDefaultFontWithStyle(const QsciLexerD* self, int style);
QColor* QsciLexerD_DefaultPaperWithStyle(const QsciLexerD* self, int style);
void QsciLexerD_OnDefaultPaperWithStyle(const QsciLexerD* self, intptr_t slot);
QColor* QsciLexerD_QBaseDefaultPaperWithStyle(const QsciLexerD* self, int style);
void QsciLexerD_SetEditor(QsciLexerD* self, QsciScintilla* editor);
void QsciLexerD_OnSetEditor(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetEditor(QsciLexerD* self, QsciScintilla* editor);
int QsciLexerD_StyleBitsNeeded(const QsciLexerD* self);
void QsciLexerD_OnStyleBitsNeeded(const QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseStyleBitsNeeded(const QsciLexerD* self);
void QsciLexerD_SetAutoIndentStyle(QsciLexerD* self, int autoindentstyle);
void QsciLexerD_OnSetAutoIndentStyle(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetAutoIndentStyle(QsciLexerD* self, int autoindentstyle);
void QsciLexerD_SetColor(QsciLexerD* self, QColor* c, int style);
void QsciLexerD_OnSetColor(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetColor(QsciLexerD* self, QColor* c, int style);
void QsciLexerD_SetEolFill(QsciLexerD* self, bool eoffill, int style);
void QsciLexerD_OnSetEolFill(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetEolFill(QsciLexerD* self, bool eoffill, int style);
void QsciLexerD_SetFont(QsciLexerD* self, QFont* f, int style);
void QsciLexerD_OnSetFont(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetFont(QsciLexerD* self, QFont* f, int style);
void QsciLexerD_SetPaper(QsciLexerD* self, QColor* c, int style);
void QsciLexerD_OnSetPaper(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseSetPaper(QsciLexerD* self, QColor* c, int style);
bool QsciLexerD_ReadProperties(QsciLexerD* self, QSettings* qs, libqt_string prefix);
void QsciLexerD_OnReadProperties(QsciLexerD* self, intptr_t slot);
bool QsciLexerD_QBaseReadProperties(QsciLexerD* self, QSettings* qs, libqt_string prefix);
bool QsciLexerD_Event(QsciLexerD* self, QEvent* event);
void QsciLexerD_OnEvent(QsciLexerD* self, intptr_t slot);
bool QsciLexerD_QBaseEvent(QsciLexerD* self, QEvent* event);
bool QsciLexerD_EventFilter(QsciLexerD* self, QObject* watched, QEvent* event);
void QsciLexerD_OnEventFilter(QsciLexerD* self, intptr_t slot);
bool QsciLexerD_QBaseEventFilter(QsciLexerD* self, QObject* watched, QEvent* event);
void QsciLexerD_TimerEvent(QsciLexerD* self, QTimerEvent* event);
void QsciLexerD_OnTimerEvent(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseTimerEvent(QsciLexerD* self, QTimerEvent* event);
void QsciLexerD_ChildEvent(QsciLexerD* self, QChildEvent* event);
void QsciLexerD_OnChildEvent(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseChildEvent(QsciLexerD* self, QChildEvent* event);
void QsciLexerD_CustomEvent(QsciLexerD* self, QEvent* event);
void QsciLexerD_OnCustomEvent(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseCustomEvent(QsciLexerD* self, QEvent* event);
void QsciLexerD_ConnectNotify(QsciLexerD* self, QMetaMethod* signal);
void QsciLexerD_OnConnectNotify(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseConnectNotify(QsciLexerD* self, QMetaMethod* signal);
void QsciLexerD_DisconnectNotify(QsciLexerD* self, QMetaMethod* signal);
void QsciLexerD_OnDisconnectNotify(QsciLexerD* self, intptr_t slot);
void QsciLexerD_QBaseDisconnectNotify(QsciLexerD* self, QMetaMethod* signal);
bool QsciLexerD_WriteProperties(const QsciLexerD* self, QSettings* qs, libqt_string prefix);
void QsciLexerD_OnWriteProperties(const QsciLexerD* self, intptr_t slot);
bool QsciLexerD_QBaseWriteProperties(const QsciLexerD* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerD_Sender(const QsciLexerD* self);
void QsciLexerD_OnSender(const QsciLexerD* self, intptr_t slot);
QObject* QsciLexerD_QBaseSender(const QsciLexerD* self);
int QsciLexerD_SenderSignalIndex(const QsciLexerD* self);
void QsciLexerD_OnSenderSignalIndex(const QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseSenderSignalIndex(const QsciLexerD* self);
int QsciLexerD_Receivers(const QsciLexerD* self, const char* signal);
void QsciLexerD_OnReceivers(const QsciLexerD* self, intptr_t slot);
int QsciLexerD_QBaseReceivers(const QsciLexerD* self, const char* signal);
bool QsciLexerD_IsSignalConnected(const QsciLexerD* self, QMetaMethod* signal);
void QsciLexerD_OnIsSignalConnected(const QsciLexerD* self, intptr_t slot);
bool QsciLexerD_QBaseIsSignalConnected(const QsciLexerD* self, QMetaMethod* signal);
void QsciLexerD_Delete(QsciLexerD* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
