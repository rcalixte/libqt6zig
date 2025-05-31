#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBATCH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBATCH_H

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
typedef struct QsciLexerBatch QsciLexerBatch;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerBatch* QsciLexerBatch_new();
QsciLexerBatch* QsciLexerBatch_new2(QObject* parent);
QMetaObject* QsciLexerBatch_MetaObject(const QsciLexerBatch* self);
void* QsciLexerBatch_Metacast(QsciLexerBatch* self, const char* param1);
int QsciLexerBatch_Metacall(QsciLexerBatch* self, int param1, int param2, void** param3);
void QsciLexerBatch_OnMetacall(QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseMetacall(QsciLexerBatch* self, int param1, int param2, void** param3);
libqt_string QsciLexerBatch_Tr(const char* s);
const char* QsciLexerBatch_Language(const QsciLexerBatch* self);
const char* QsciLexerBatch_Lexer(const QsciLexerBatch* self);
const char* QsciLexerBatch_WordCharacters(const QsciLexerBatch* self);
bool QsciLexerBatch_CaseSensitive(const QsciLexerBatch* self);
QColor* QsciLexerBatch_DefaultColor(const QsciLexerBatch* self, int style);
bool QsciLexerBatch_DefaultEolFill(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_DefaultFont(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_DefaultPaper(const QsciLexerBatch* self, int style);
const char* QsciLexerBatch_Keywords(const QsciLexerBatch* self, int set);
libqt_string QsciLexerBatch_Description(const QsciLexerBatch* self, int style);
libqt_string QsciLexerBatch_Tr2(const char* s, const char* c);
libqt_string QsciLexerBatch_Tr3(const char* s, const char* c, int n);
int QsciLexerBatch_LexerId(const QsciLexerBatch* self);
void QsciLexerBatch_OnLexerId(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseLexerId(const QsciLexerBatch* self);
const char* QsciLexerBatch_AutoCompletionFillups(const QsciLexerBatch* self);
void QsciLexerBatch_OnAutoCompletionFillups(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_QBaseAutoCompletionFillups(const QsciLexerBatch* self);
libqt_list /* of libqt_string */ QsciLexerBatch_AutoCompletionWordSeparators(const QsciLexerBatch* self);
void QsciLexerBatch_OnAutoCompletionWordSeparators(const QsciLexerBatch* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerBatch_QBaseAutoCompletionWordSeparators(const QsciLexerBatch* self);
const char* QsciLexerBatch_BlockEnd(const QsciLexerBatch* self, int* style);
void QsciLexerBatch_OnBlockEnd(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_QBaseBlockEnd(const QsciLexerBatch* self, int* style);
int QsciLexerBatch_BlockLookback(const QsciLexerBatch* self);
void QsciLexerBatch_OnBlockLookback(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseBlockLookback(const QsciLexerBatch* self);
const char* QsciLexerBatch_BlockStart(const QsciLexerBatch* self, int* style);
void QsciLexerBatch_OnBlockStart(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_QBaseBlockStart(const QsciLexerBatch* self, int* style);
const char* QsciLexerBatch_BlockStartKeyword(const QsciLexerBatch* self, int* style);
void QsciLexerBatch_OnBlockStartKeyword(const QsciLexerBatch* self, intptr_t slot);
const char* QsciLexerBatch_QBaseBlockStartKeyword(const QsciLexerBatch* self, int* style);
int QsciLexerBatch_BraceStyle(const QsciLexerBatch* self);
void QsciLexerBatch_OnBraceStyle(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseBraceStyle(const QsciLexerBatch* self);
QColor* QsciLexerBatch_Color(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnColor(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_QBaseColor(const QsciLexerBatch* self, int style);
bool QsciLexerBatch_EolFill(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnEolFill(const QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_QBaseEolFill(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_Font(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnFont(const QsciLexerBatch* self, intptr_t slot);
QFont* QsciLexerBatch_QBaseFont(const QsciLexerBatch* self, int style);
int QsciLexerBatch_IndentationGuideView(const QsciLexerBatch* self);
void QsciLexerBatch_OnIndentationGuideView(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseIndentationGuideView(const QsciLexerBatch* self);
int QsciLexerBatch_DefaultStyle(const QsciLexerBatch* self);
void QsciLexerBatch_OnDefaultStyle(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseDefaultStyle(const QsciLexerBatch* self);
QColor* QsciLexerBatch_Paper(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnPaper(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_QBasePaper(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_DefaultColorWithStyle(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnDefaultColorWithStyle(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_QBaseDefaultColorWithStyle(const QsciLexerBatch* self, int style);
QFont* QsciLexerBatch_DefaultFontWithStyle(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnDefaultFontWithStyle(const QsciLexerBatch* self, intptr_t slot);
QFont* QsciLexerBatch_QBaseDefaultFontWithStyle(const QsciLexerBatch* self, int style);
QColor* QsciLexerBatch_DefaultPaperWithStyle(const QsciLexerBatch* self, int style);
void QsciLexerBatch_OnDefaultPaperWithStyle(const QsciLexerBatch* self, intptr_t slot);
QColor* QsciLexerBatch_QBaseDefaultPaperWithStyle(const QsciLexerBatch* self, int style);
void QsciLexerBatch_SetEditor(QsciLexerBatch* self, QsciScintilla* editor);
void QsciLexerBatch_OnSetEditor(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseSetEditor(QsciLexerBatch* self, QsciScintilla* editor);
void QsciLexerBatch_RefreshProperties(QsciLexerBatch* self);
void QsciLexerBatch_OnRefreshProperties(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseRefreshProperties(QsciLexerBatch* self);
int QsciLexerBatch_StyleBitsNeeded(const QsciLexerBatch* self);
void QsciLexerBatch_OnStyleBitsNeeded(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseStyleBitsNeeded(const QsciLexerBatch* self);
void QsciLexerBatch_SetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle);
void QsciLexerBatch_OnSetAutoIndentStyle(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseSetAutoIndentStyle(QsciLexerBatch* self, int autoindentstyle);
void QsciLexerBatch_SetColor(QsciLexerBatch* self, const QColor* c, int style);
void QsciLexerBatch_OnSetColor(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseSetColor(QsciLexerBatch* self, const QColor* c, int style);
void QsciLexerBatch_SetEolFill(QsciLexerBatch* self, bool eoffill, int style);
void QsciLexerBatch_OnSetEolFill(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseSetEolFill(QsciLexerBatch* self, bool eoffill, int style);
void QsciLexerBatch_SetFont(QsciLexerBatch* self, const QFont* f, int style);
void QsciLexerBatch_OnSetFont(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseSetFont(QsciLexerBatch* self, const QFont* f, int style);
void QsciLexerBatch_SetPaper(QsciLexerBatch* self, const QColor* c, int style);
void QsciLexerBatch_OnSetPaper(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseSetPaper(QsciLexerBatch* self, const QColor* c, int style);
bool QsciLexerBatch_ReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBatch_OnReadProperties(QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_QBaseReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBatch_WriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBatch_OnWriteProperties(const QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_QBaseWriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBatch_Event(QsciLexerBatch* self, QEvent* event);
void QsciLexerBatch_OnEvent(QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_QBaseEvent(QsciLexerBatch* self, QEvent* event);
bool QsciLexerBatch_EventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event);
void QsciLexerBatch_OnEventFilter(QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_QBaseEventFilter(QsciLexerBatch* self, QObject* watched, QEvent* event);
void QsciLexerBatch_TimerEvent(QsciLexerBatch* self, QTimerEvent* event);
void QsciLexerBatch_OnTimerEvent(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseTimerEvent(QsciLexerBatch* self, QTimerEvent* event);
void QsciLexerBatch_ChildEvent(QsciLexerBatch* self, QChildEvent* event);
void QsciLexerBatch_OnChildEvent(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseChildEvent(QsciLexerBatch* self, QChildEvent* event);
void QsciLexerBatch_CustomEvent(QsciLexerBatch* self, QEvent* event);
void QsciLexerBatch_OnCustomEvent(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseCustomEvent(QsciLexerBatch* self, QEvent* event);
void QsciLexerBatch_ConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_OnConnectNotify(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_DisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_OnDisconnectNotify(QsciLexerBatch* self, intptr_t slot);
void QsciLexerBatch_QBaseDisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
QObject* QsciLexerBatch_Sender(const QsciLexerBatch* self);
void QsciLexerBatch_OnSender(const QsciLexerBatch* self, intptr_t slot);
QObject* QsciLexerBatch_QBaseSender(const QsciLexerBatch* self);
int QsciLexerBatch_SenderSignalIndex(const QsciLexerBatch* self);
void QsciLexerBatch_OnSenderSignalIndex(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseSenderSignalIndex(const QsciLexerBatch* self);
int QsciLexerBatch_Receivers(const QsciLexerBatch* self, const char* signal);
void QsciLexerBatch_OnReceivers(const QsciLexerBatch* self, intptr_t slot);
int QsciLexerBatch_QBaseReceivers(const QsciLexerBatch* self, const char* signal);
bool QsciLexerBatch_IsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_OnIsSignalConnected(const QsciLexerBatch* self, intptr_t slot);
bool QsciLexerBatch_QBaseIsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal);
void QsciLexerBatch_Delete(QsciLexerBatch* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
