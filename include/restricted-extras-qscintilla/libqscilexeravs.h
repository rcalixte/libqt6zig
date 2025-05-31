#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERAVS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERAVS_H

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
typedef struct QsciLexerAVS QsciLexerAVS;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerAVS* QsciLexerAVS_new();
QsciLexerAVS* QsciLexerAVS_new2(QObject* parent);
QMetaObject* QsciLexerAVS_MetaObject(const QsciLexerAVS* self);
void* QsciLexerAVS_Metacast(QsciLexerAVS* self, const char* param1);
int QsciLexerAVS_Metacall(QsciLexerAVS* self, int param1, int param2, void** param3);
void QsciLexerAVS_OnMetacall(QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseMetacall(QsciLexerAVS* self, int param1, int param2, void** param3);
libqt_string QsciLexerAVS_Tr(const char* s);
const char* QsciLexerAVS_Language(const QsciLexerAVS* self);
const char* QsciLexerAVS_Lexer(const QsciLexerAVS* self);
int QsciLexerAVS_BraceStyle(const QsciLexerAVS* self);
const char* QsciLexerAVS_WordCharacters(const QsciLexerAVS* self);
QColor* QsciLexerAVS_DefaultColor(const QsciLexerAVS* self, int style);
QFont* QsciLexerAVS_DefaultFont(const QsciLexerAVS* self, int style);
const char* QsciLexerAVS_Keywords(const QsciLexerAVS* self, int set);
libqt_string QsciLexerAVS_Description(const QsciLexerAVS* self, int style);
void QsciLexerAVS_RefreshProperties(QsciLexerAVS* self);
bool QsciLexerAVS_FoldComments(const QsciLexerAVS* self);
bool QsciLexerAVS_FoldCompact(const QsciLexerAVS* self);
void QsciLexerAVS_SetFoldComments(QsciLexerAVS* self, bool fold);
void QsciLexerAVS_OnSetFoldComments(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetFoldComments(QsciLexerAVS* self, bool fold);
void QsciLexerAVS_SetFoldCompact(QsciLexerAVS* self, bool fold);
void QsciLexerAVS_OnSetFoldCompact(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetFoldCompact(QsciLexerAVS* self, bool fold);
libqt_string QsciLexerAVS_Tr2(const char* s, const char* c);
libqt_string QsciLexerAVS_Tr3(const char* s, const char* c, int n);
int QsciLexerAVS_LexerId(const QsciLexerAVS* self);
void QsciLexerAVS_OnLexerId(const QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseLexerId(const QsciLexerAVS* self);
const char* QsciLexerAVS_AutoCompletionFillups(const QsciLexerAVS* self);
void QsciLexerAVS_OnAutoCompletionFillups(const QsciLexerAVS* self, intptr_t slot);
const char* QsciLexerAVS_QBaseAutoCompletionFillups(const QsciLexerAVS* self);
libqt_list /* of libqt_string */ QsciLexerAVS_AutoCompletionWordSeparators(const QsciLexerAVS* self);
void QsciLexerAVS_OnAutoCompletionWordSeparators(const QsciLexerAVS* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerAVS_QBaseAutoCompletionWordSeparators(const QsciLexerAVS* self);
const char* QsciLexerAVS_BlockEnd(const QsciLexerAVS* self, int* style);
void QsciLexerAVS_OnBlockEnd(const QsciLexerAVS* self, intptr_t slot);
const char* QsciLexerAVS_QBaseBlockEnd(const QsciLexerAVS* self, int* style);
int QsciLexerAVS_BlockLookback(const QsciLexerAVS* self);
void QsciLexerAVS_OnBlockLookback(const QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseBlockLookback(const QsciLexerAVS* self);
const char* QsciLexerAVS_BlockStart(const QsciLexerAVS* self, int* style);
void QsciLexerAVS_OnBlockStart(const QsciLexerAVS* self, intptr_t slot);
const char* QsciLexerAVS_QBaseBlockStart(const QsciLexerAVS* self, int* style);
const char* QsciLexerAVS_BlockStartKeyword(const QsciLexerAVS* self, int* style);
void QsciLexerAVS_OnBlockStartKeyword(const QsciLexerAVS* self, intptr_t slot);
const char* QsciLexerAVS_QBaseBlockStartKeyword(const QsciLexerAVS* self, int* style);
bool QsciLexerAVS_CaseSensitive(const QsciLexerAVS* self);
void QsciLexerAVS_OnCaseSensitive(const QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseCaseSensitive(const QsciLexerAVS* self);
QColor* QsciLexerAVS_Color(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnColor(const QsciLexerAVS* self, intptr_t slot);
QColor* QsciLexerAVS_QBaseColor(const QsciLexerAVS* self, int style);
bool QsciLexerAVS_EolFill(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnEolFill(const QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseEolFill(const QsciLexerAVS* self, int style);
QFont* QsciLexerAVS_Font(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnFont(const QsciLexerAVS* self, intptr_t slot);
QFont* QsciLexerAVS_QBaseFont(const QsciLexerAVS* self, int style);
int QsciLexerAVS_IndentationGuideView(const QsciLexerAVS* self);
void QsciLexerAVS_OnIndentationGuideView(const QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseIndentationGuideView(const QsciLexerAVS* self);
int QsciLexerAVS_DefaultStyle(const QsciLexerAVS* self);
void QsciLexerAVS_OnDefaultStyle(const QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseDefaultStyle(const QsciLexerAVS* self);
QColor* QsciLexerAVS_Paper(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnPaper(const QsciLexerAVS* self, intptr_t slot);
QColor* QsciLexerAVS_QBasePaper(const QsciLexerAVS* self, int style);
QColor* QsciLexerAVS_DefaultColorWithStyle(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnDefaultColorWithStyle(const QsciLexerAVS* self, intptr_t slot);
QColor* QsciLexerAVS_QBaseDefaultColorWithStyle(const QsciLexerAVS* self, int style);
bool QsciLexerAVS_DefaultEolFill(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnDefaultEolFill(const QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseDefaultEolFill(const QsciLexerAVS* self, int style);
QFont* QsciLexerAVS_DefaultFontWithStyle(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnDefaultFontWithStyle(const QsciLexerAVS* self, intptr_t slot);
QFont* QsciLexerAVS_QBaseDefaultFontWithStyle(const QsciLexerAVS* self, int style);
QColor* QsciLexerAVS_DefaultPaperWithStyle(const QsciLexerAVS* self, int style);
void QsciLexerAVS_OnDefaultPaperWithStyle(const QsciLexerAVS* self, intptr_t slot);
QColor* QsciLexerAVS_QBaseDefaultPaperWithStyle(const QsciLexerAVS* self, int style);
void QsciLexerAVS_SetEditor(QsciLexerAVS* self, QsciScintilla* editor);
void QsciLexerAVS_OnSetEditor(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetEditor(QsciLexerAVS* self, QsciScintilla* editor);
int QsciLexerAVS_StyleBitsNeeded(const QsciLexerAVS* self);
void QsciLexerAVS_OnStyleBitsNeeded(const QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseStyleBitsNeeded(const QsciLexerAVS* self);
void QsciLexerAVS_SetAutoIndentStyle(QsciLexerAVS* self, int autoindentstyle);
void QsciLexerAVS_OnSetAutoIndentStyle(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetAutoIndentStyle(QsciLexerAVS* self, int autoindentstyle);
void QsciLexerAVS_SetColor(QsciLexerAVS* self, const QColor* c, int style);
void QsciLexerAVS_OnSetColor(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetColor(QsciLexerAVS* self, const QColor* c, int style);
void QsciLexerAVS_SetEolFill(QsciLexerAVS* self, bool eoffill, int style);
void QsciLexerAVS_OnSetEolFill(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetEolFill(QsciLexerAVS* self, bool eoffill, int style);
void QsciLexerAVS_SetFont(QsciLexerAVS* self, const QFont* f, int style);
void QsciLexerAVS_OnSetFont(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetFont(QsciLexerAVS* self, const QFont* f, int style);
void QsciLexerAVS_SetPaper(QsciLexerAVS* self, const QColor* c, int style);
void QsciLexerAVS_OnSetPaper(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseSetPaper(QsciLexerAVS* self, const QColor* c, int style);
bool QsciLexerAVS_ReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
void QsciLexerAVS_OnReadProperties(QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerAVS_WriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
void QsciLexerAVS_OnWriteProperties(const QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseWriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerAVS_Event(QsciLexerAVS* self, QEvent* event);
void QsciLexerAVS_OnEvent(QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseEvent(QsciLexerAVS* self, QEvent* event);
bool QsciLexerAVS_EventFilter(QsciLexerAVS* self, QObject* watched, QEvent* event);
void QsciLexerAVS_OnEventFilter(QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseEventFilter(QsciLexerAVS* self, QObject* watched, QEvent* event);
void QsciLexerAVS_TimerEvent(QsciLexerAVS* self, QTimerEvent* event);
void QsciLexerAVS_OnTimerEvent(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseTimerEvent(QsciLexerAVS* self, QTimerEvent* event);
void QsciLexerAVS_ChildEvent(QsciLexerAVS* self, QChildEvent* event);
void QsciLexerAVS_OnChildEvent(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseChildEvent(QsciLexerAVS* self, QChildEvent* event);
void QsciLexerAVS_CustomEvent(QsciLexerAVS* self, QEvent* event);
void QsciLexerAVS_OnCustomEvent(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseCustomEvent(QsciLexerAVS* self, QEvent* event);
void QsciLexerAVS_ConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
void QsciLexerAVS_OnConnectNotify(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
void QsciLexerAVS_DisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
void QsciLexerAVS_OnDisconnectNotify(QsciLexerAVS* self, intptr_t slot);
void QsciLexerAVS_QBaseDisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
QObject* QsciLexerAVS_Sender(const QsciLexerAVS* self);
void QsciLexerAVS_OnSender(const QsciLexerAVS* self, intptr_t slot);
QObject* QsciLexerAVS_QBaseSender(const QsciLexerAVS* self);
int QsciLexerAVS_SenderSignalIndex(const QsciLexerAVS* self);
void QsciLexerAVS_OnSenderSignalIndex(const QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseSenderSignalIndex(const QsciLexerAVS* self);
int QsciLexerAVS_Receivers(const QsciLexerAVS* self, const char* signal);
void QsciLexerAVS_OnReceivers(const QsciLexerAVS* self, intptr_t slot);
int QsciLexerAVS_QBaseReceivers(const QsciLexerAVS* self, const char* signal);
bool QsciLexerAVS_IsSignalConnected(const QsciLexerAVS* self, const QMetaMethod* signal);
void QsciLexerAVS_OnIsSignalConnected(const QsciLexerAVS* self, intptr_t slot);
bool QsciLexerAVS_QBaseIsSignalConnected(const QsciLexerAVS* self, const QMetaMethod* signal);
void QsciLexerAVS_Delete(QsciLexerAVS* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
