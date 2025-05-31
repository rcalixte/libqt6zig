#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERFORTRAN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERFORTRAN_H

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
typedef struct QsciLexerFortran QsciLexerFortran;
typedef struct QsciLexerFortran77 QsciLexerFortran77;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerFortran* QsciLexerFortran_new();
QsciLexerFortran* QsciLexerFortran_new2(QObject* parent);
QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self);
void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1);
int QsciLexerFortran_Metacall(QsciLexerFortran* self, int param1, int param2, void** param3);
void QsciLexerFortran_OnMetacall(QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseMetacall(QsciLexerFortran* self, int param1, int param2, void** param3);
libqt_string QsciLexerFortran_Tr(const char* s);
const char* QsciLexerFortran_Language(const QsciLexerFortran* self);
const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self);
const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set);
libqt_string QsciLexerFortran_Tr2(const char* s, const char* c);
libqt_string QsciLexerFortran_Tr3(const char* s, const char* c, int n);
void QsciLexerFortran_SetFoldCompact(QsciLexerFortran* self, bool fold);
void QsciLexerFortran_OnSetFoldCompact(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseSetFoldCompact(QsciLexerFortran* self, bool fold);
int QsciLexerFortran_LexerId(const QsciLexerFortran* self);
void QsciLexerFortran_OnLexerId(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseLexerId(const QsciLexerFortran* self);
const char* QsciLexerFortran_AutoCompletionFillups(const QsciLexerFortran* self);
void QsciLexerFortran_OnAutoCompletionFillups(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_QBaseAutoCompletionFillups(const QsciLexerFortran* self);
libqt_list /* of libqt_string */ QsciLexerFortran_AutoCompletionWordSeparators(const QsciLexerFortran* self);
void QsciLexerFortran_OnAutoCompletionWordSeparators(const QsciLexerFortran* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerFortran_QBaseAutoCompletionWordSeparators(const QsciLexerFortran* self);
const char* QsciLexerFortran_BlockEnd(const QsciLexerFortran* self, int* style);
void QsciLexerFortran_OnBlockEnd(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_QBaseBlockEnd(const QsciLexerFortran* self, int* style);
int QsciLexerFortran_BlockLookback(const QsciLexerFortran* self);
void QsciLexerFortran_OnBlockLookback(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseBlockLookback(const QsciLexerFortran* self);
const char* QsciLexerFortran_BlockStart(const QsciLexerFortran* self, int* style);
void QsciLexerFortran_OnBlockStart(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_QBaseBlockStart(const QsciLexerFortran* self, int* style);
const char* QsciLexerFortran_BlockStartKeyword(const QsciLexerFortran* self, int* style);
void QsciLexerFortran_OnBlockStartKeyword(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_QBaseBlockStartKeyword(const QsciLexerFortran* self, int* style);
int QsciLexerFortran_BraceStyle(const QsciLexerFortran* self);
void QsciLexerFortran_OnBraceStyle(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseBraceStyle(const QsciLexerFortran* self);
bool QsciLexerFortran_CaseSensitive(const QsciLexerFortran* self);
void QsciLexerFortran_OnCaseSensitive(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseCaseSensitive(const QsciLexerFortran* self);
QColor* QsciLexerFortran_Color(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnColor(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_QBaseColor(const QsciLexerFortran* self, int style);
bool QsciLexerFortran_EolFill(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnEolFill(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseEolFill(const QsciLexerFortran* self, int style);
QFont* QsciLexerFortran_Font(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnFont(const QsciLexerFortran* self, intptr_t slot);
QFont* QsciLexerFortran_QBaseFont(const QsciLexerFortran* self, int style);
int QsciLexerFortran_IndentationGuideView(const QsciLexerFortran* self);
void QsciLexerFortran_OnIndentationGuideView(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseIndentationGuideView(const QsciLexerFortran* self);
int QsciLexerFortran_DefaultStyle(const QsciLexerFortran* self);
void QsciLexerFortran_OnDefaultStyle(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseDefaultStyle(const QsciLexerFortran* self);
libqt_string QsciLexerFortran_Description(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDescription(const QsciLexerFortran* self, intptr_t slot);
libqt_string QsciLexerFortran_QBaseDescription(const QsciLexerFortran* self, int style);
QColor* QsciLexerFortran_Paper(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnPaper(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_QBasePaper(const QsciLexerFortran* self, int style);
QColor* QsciLexerFortran_DefaultColorWithStyle(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultColorWithStyle(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_QBaseDefaultColorWithStyle(const QsciLexerFortran* self, int style);
bool QsciLexerFortran_DefaultEolFill(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultEolFill(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseDefaultEolFill(const QsciLexerFortran* self, int style);
QFont* QsciLexerFortran_DefaultFontWithStyle(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultFontWithStyle(const QsciLexerFortran* self, intptr_t slot);
QFont* QsciLexerFortran_QBaseDefaultFontWithStyle(const QsciLexerFortran* self, int style);
QColor* QsciLexerFortran_DefaultPaperWithStyle(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultPaperWithStyle(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_QBaseDefaultPaperWithStyle(const QsciLexerFortran* self, int style);
void QsciLexerFortran_SetEditor(QsciLexerFortran* self, QsciScintilla* editor);
void QsciLexerFortran_OnSetEditor(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseSetEditor(QsciLexerFortran* self, QsciScintilla* editor);
void QsciLexerFortran_RefreshProperties(QsciLexerFortran* self);
void QsciLexerFortran_OnRefreshProperties(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseRefreshProperties(QsciLexerFortran* self);
int QsciLexerFortran_StyleBitsNeeded(const QsciLexerFortran* self);
void QsciLexerFortran_OnStyleBitsNeeded(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseStyleBitsNeeded(const QsciLexerFortran* self);
const char* QsciLexerFortran_WordCharacters(const QsciLexerFortran* self);
void QsciLexerFortran_OnWordCharacters(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_QBaseWordCharacters(const QsciLexerFortran* self);
void QsciLexerFortran_SetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle);
void QsciLexerFortran_OnSetAutoIndentStyle(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseSetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle);
void QsciLexerFortran_SetColor(QsciLexerFortran* self, const QColor* c, int style);
void QsciLexerFortran_OnSetColor(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseSetColor(QsciLexerFortran* self, const QColor* c, int style);
void QsciLexerFortran_SetEolFill(QsciLexerFortran* self, bool eoffill, int style);
void QsciLexerFortran_OnSetEolFill(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseSetEolFill(QsciLexerFortran* self, bool eoffill, int style);
void QsciLexerFortran_SetFont(QsciLexerFortran* self, const QFont* f, int style);
void QsciLexerFortran_OnSetFont(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseSetFont(QsciLexerFortran* self, const QFont* f, int style);
void QsciLexerFortran_SetPaper(QsciLexerFortran* self, const QColor* c, int style);
void QsciLexerFortran_OnSetPaper(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseSetPaper(QsciLexerFortran* self, const QColor* c, int style);
bool QsciLexerFortran_ReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
void QsciLexerFortran_OnReadProperties(QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerFortran_WriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
void QsciLexerFortran_OnWriteProperties(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseWriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerFortran_Event(QsciLexerFortran* self, QEvent* event);
void QsciLexerFortran_OnEvent(QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseEvent(QsciLexerFortran* self, QEvent* event);
bool QsciLexerFortran_EventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event);
void QsciLexerFortran_OnEventFilter(QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseEventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event);
void QsciLexerFortran_TimerEvent(QsciLexerFortran* self, QTimerEvent* event);
void QsciLexerFortran_OnTimerEvent(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseTimerEvent(QsciLexerFortran* self, QTimerEvent* event);
void QsciLexerFortran_ChildEvent(QsciLexerFortran* self, QChildEvent* event);
void QsciLexerFortran_OnChildEvent(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseChildEvent(QsciLexerFortran* self, QChildEvent* event);
void QsciLexerFortran_CustomEvent(QsciLexerFortran* self, QEvent* event);
void QsciLexerFortran_OnCustomEvent(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseCustomEvent(QsciLexerFortran* self, QEvent* event);
void QsciLexerFortran_ConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_OnConnectNotify(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_DisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_OnDisconnectNotify(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_QBaseDisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
QObject* QsciLexerFortran_Sender(const QsciLexerFortran* self);
void QsciLexerFortran_OnSender(const QsciLexerFortran* self, intptr_t slot);
QObject* QsciLexerFortran_QBaseSender(const QsciLexerFortran* self);
int QsciLexerFortran_SenderSignalIndex(const QsciLexerFortran* self);
void QsciLexerFortran_OnSenderSignalIndex(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseSenderSignalIndex(const QsciLexerFortran* self);
int QsciLexerFortran_Receivers(const QsciLexerFortran* self, const char* signal);
void QsciLexerFortran_OnReceivers(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_QBaseReceivers(const QsciLexerFortran* self, const char* signal);
bool QsciLexerFortran_IsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_OnIsSignalConnected(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_QBaseIsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_Delete(QsciLexerFortran* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
