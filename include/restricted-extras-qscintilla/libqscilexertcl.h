#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTCL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTCL_H

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
typedef struct QsciLexerTCL QsciLexerTCL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerTCL* QsciLexerTCL_new();
QsciLexerTCL* QsciLexerTCL_new2(QObject* parent);
QMetaObject* QsciLexerTCL_MetaObject(const QsciLexerTCL* self);
void* QsciLexerTCL_Metacast(QsciLexerTCL* self, const char* param1);
int QsciLexerTCL_Metacall(QsciLexerTCL* self, int param1, int param2, void** param3);
void QsciLexerTCL_OnMetacall(QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseMetacall(QsciLexerTCL* self, int param1, int param2, void** param3);
libqt_string QsciLexerTCL_Tr(const char* s);
const char* QsciLexerTCL_Language(const QsciLexerTCL* self);
const char* QsciLexerTCL_Lexer(const QsciLexerTCL* self);
int QsciLexerTCL_BraceStyle(const QsciLexerTCL* self);
QColor* QsciLexerTCL_DefaultColor(const QsciLexerTCL* self, int style);
bool QsciLexerTCL_DefaultEolFill(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_DefaultFont(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_DefaultPaper(const QsciLexerTCL* self, int style);
const char* QsciLexerTCL_Keywords(const QsciLexerTCL* self, int set);
libqt_string QsciLexerTCL_Description(const QsciLexerTCL* self, int style);
void QsciLexerTCL_RefreshProperties(QsciLexerTCL* self);
void QsciLexerTCL_SetFoldComments(QsciLexerTCL* self, bool fold);
bool QsciLexerTCL_FoldComments(const QsciLexerTCL* self);
libqt_string QsciLexerTCL_Tr2(const char* s, const char* c);
libqt_string QsciLexerTCL_Tr3(const char* s, const char* c, int n);
int QsciLexerTCL_LexerId(const QsciLexerTCL* self);
void QsciLexerTCL_OnLexerId(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseLexerId(const QsciLexerTCL* self);
const char* QsciLexerTCL_AutoCompletionFillups(const QsciLexerTCL* self);
void QsciLexerTCL_OnAutoCompletionFillups(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_QBaseAutoCompletionFillups(const QsciLexerTCL* self);
libqt_list /* of libqt_string */ QsciLexerTCL_AutoCompletionWordSeparators(const QsciLexerTCL* self);
void QsciLexerTCL_OnAutoCompletionWordSeparators(const QsciLexerTCL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerTCL_QBaseAutoCompletionWordSeparators(const QsciLexerTCL* self);
const char* QsciLexerTCL_BlockEnd(const QsciLexerTCL* self, int* style);
void QsciLexerTCL_OnBlockEnd(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_QBaseBlockEnd(const QsciLexerTCL* self, int* style);
int QsciLexerTCL_BlockLookback(const QsciLexerTCL* self);
void QsciLexerTCL_OnBlockLookback(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseBlockLookback(const QsciLexerTCL* self);
const char* QsciLexerTCL_BlockStart(const QsciLexerTCL* self, int* style);
void QsciLexerTCL_OnBlockStart(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_QBaseBlockStart(const QsciLexerTCL* self, int* style);
const char* QsciLexerTCL_BlockStartKeyword(const QsciLexerTCL* self, int* style);
void QsciLexerTCL_OnBlockStartKeyword(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_QBaseBlockStartKeyword(const QsciLexerTCL* self, int* style);
bool QsciLexerTCL_CaseSensitive(const QsciLexerTCL* self);
void QsciLexerTCL_OnCaseSensitive(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_QBaseCaseSensitive(const QsciLexerTCL* self);
QColor* QsciLexerTCL_Color(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnColor(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_QBaseColor(const QsciLexerTCL* self, int style);
bool QsciLexerTCL_EolFill(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnEolFill(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_QBaseEolFill(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_Font(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnFont(const QsciLexerTCL* self, intptr_t slot);
QFont* QsciLexerTCL_QBaseFont(const QsciLexerTCL* self, int style);
int QsciLexerTCL_IndentationGuideView(const QsciLexerTCL* self);
void QsciLexerTCL_OnIndentationGuideView(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseIndentationGuideView(const QsciLexerTCL* self);
int QsciLexerTCL_DefaultStyle(const QsciLexerTCL* self);
void QsciLexerTCL_OnDefaultStyle(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseDefaultStyle(const QsciLexerTCL* self);
QColor* QsciLexerTCL_Paper(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnPaper(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_QBasePaper(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_DefaultColorWithStyle(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnDefaultColorWithStyle(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_QBaseDefaultColorWithStyle(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_DefaultFontWithStyle(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnDefaultFontWithStyle(const QsciLexerTCL* self, intptr_t slot);
QFont* QsciLexerTCL_QBaseDefaultFontWithStyle(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_DefaultPaperWithStyle(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnDefaultPaperWithStyle(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_QBaseDefaultPaperWithStyle(const QsciLexerTCL* self, int style);
void QsciLexerTCL_SetEditor(QsciLexerTCL* self, QsciScintilla* editor);
void QsciLexerTCL_OnSetEditor(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseSetEditor(QsciLexerTCL* self, QsciScintilla* editor);
int QsciLexerTCL_StyleBitsNeeded(const QsciLexerTCL* self);
void QsciLexerTCL_OnStyleBitsNeeded(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseStyleBitsNeeded(const QsciLexerTCL* self);
const char* QsciLexerTCL_WordCharacters(const QsciLexerTCL* self);
void QsciLexerTCL_OnWordCharacters(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_QBaseWordCharacters(const QsciLexerTCL* self);
void QsciLexerTCL_SetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle);
void QsciLexerTCL_OnSetAutoIndentStyle(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseSetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle);
void QsciLexerTCL_SetColor(QsciLexerTCL* self, QColor* c, int style);
void QsciLexerTCL_OnSetColor(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseSetColor(QsciLexerTCL* self, QColor* c, int style);
void QsciLexerTCL_SetEolFill(QsciLexerTCL* self, bool eoffill, int style);
void QsciLexerTCL_OnSetEolFill(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseSetEolFill(QsciLexerTCL* self, bool eoffill, int style);
void QsciLexerTCL_SetFont(QsciLexerTCL* self, QFont* f, int style);
void QsciLexerTCL_OnSetFont(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseSetFont(QsciLexerTCL* self, QFont* f, int style);
void QsciLexerTCL_SetPaper(QsciLexerTCL* self, QColor* c, int style);
void QsciLexerTCL_OnSetPaper(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseSetPaper(QsciLexerTCL* self, QColor* c, int style);
bool QsciLexerTCL_ReadProperties(QsciLexerTCL* self, QSettings* qs, libqt_string prefix);
void QsciLexerTCL_OnReadProperties(QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_QBaseReadProperties(QsciLexerTCL* self, QSettings* qs, libqt_string prefix);
bool QsciLexerTCL_Event(QsciLexerTCL* self, QEvent* event);
void QsciLexerTCL_OnEvent(QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_QBaseEvent(QsciLexerTCL* self, QEvent* event);
bool QsciLexerTCL_EventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event);
void QsciLexerTCL_OnEventFilter(QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_QBaseEventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event);
void QsciLexerTCL_TimerEvent(QsciLexerTCL* self, QTimerEvent* event);
void QsciLexerTCL_OnTimerEvent(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseTimerEvent(QsciLexerTCL* self, QTimerEvent* event);
void QsciLexerTCL_ChildEvent(QsciLexerTCL* self, QChildEvent* event);
void QsciLexerTCL_OnChildEvent(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseChildEvent(QsciLexerTCL* self, QChildEvent* event);
void QsciLexerTCL_CustomEvent(QsciLexerTCL* self, QEvent* event);
void QsciLexerTCL_OnCustomEvent(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseCustomEvent(QsciLexerTCL* self, QEvent* event);
void QsciLexerTCL_ConnectNotify(QsciLexerTCL* self, QMetaMethod* signal);
void QsciLexerTCL_OnConnectNotify(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseConnectNotify(QsciLexerTCL* self, QMetaMethod* signal);
void QsciLexerTCL_DisconnectNotify(QsciLexerTCL* self, QMetaMethod* signal);
void QsciLexerTCL_OnDisconnectNotify(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_QBaseDisconnectNotify(QsciLexerTCL* self, QMetaMethod* signal);
bool QsciLexerTCL_WriteProperties(const QsciLexerTCL* self, QSettings* qs, libqt_string prefix);
void QsciLexerTCL_OnWriteProperties(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_QBaseWriteProperties(const QsciLexerTCL* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerTCL_Sender(const QsciLexerTCL* self);
void QsciLexerTCL_OnSender(const QsciLexerTCL* self, intptr_t slot);
QObject* QsciLexerTCL_QBaseSender(const QsciLexerTCL* self);
int QsciLexerTCL_SenderSignalIndex(const QsciLexerTCL* self);
void QsciLexerTCL_OnSenderSignalIndex(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseSenderSignalIndex(const QsciLexerTCL* self);
int QsciLexerTCL_Receivers(const QsciLexerTCL* self, const char* signal);
void QsciLexerTCL_OnReceivers(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_QBaseReceivers(const QsciLexerTCL* self, const char* signal);
bool QsciLexerTCL_IsSignalConnected(const QsciLexerTCL* self, QMetaMethod* signal);
void QsciLexerTCL_OnIsSignalConnected(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_QBaseIsSignalConnected(const QsciLexerTCL* self, QMetaMethod* signal);
void QsciLexerTCL_Delete(QsciLexerTCL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
