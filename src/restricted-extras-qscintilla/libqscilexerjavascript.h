#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERJAVASCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERJAVASCRIPT_H

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
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerJavaScript QsciLexerJavaScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerJavaScript* QsciLexerJavaScript_new();
QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent);
QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self);
void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1);
int QsciLexerJavaScript_Metacall(QsciLexerJavaScript* self, int param1, int param2, void** param3);
void QsciLexerJavaScript_OnMetacall(QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseMetacall(QsciLexerJavaScript* self, int param1, int param2, void** param3);
libqt_string QsciLexerJavaScript_Tr(const char* s);
const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style);
bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style);
const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set);
libqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style);
libqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c);
libqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n);
void QsciLexerJavaScript_SetFoldAtElse(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldAtElse(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetFoldAtElse(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetFoldComments(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldComments(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetFoldComments(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetFoldCompact(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldCompact(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetFoldCompact(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetFoldPreprocessor(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_OnSetFoldPreprocessor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetFoldPreprocessor(QsciLexerJavaScript* self, bool fold);
void QsciLexerJavaScript_SetStylePreprocessor(QsciLexerJavaScript* self, bool style);
void QsciLexerJavaScript_OnSetStylePreprocessor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetStylePreprocessor(QsciLexerJavaScript* self, bool style);
const char* QsciLexerJavaScript_Lexer(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnLexer(const QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_QBaseLexer(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_LexerId(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnLexerId(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseLexerId(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_AutoCompletionFillups(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnAutoCompletionFillups(const QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_QBaseAutoCompletionFillups(const QsciLexerJavaScript* self);
libqt_list /* of libqt_string */ QsciLexerJavaScript_AutoCompletionWordSeparators(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnAutoCompletionWordSeparators(const QsciLexerJavaScript* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerJavaScript_QBaseAutoCompletionWordSeparators(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_BlockEnd(const QsciLexerJavaScript* self, int* style);
void QsciLexerJavaScript_OnBlockEnd(const QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_QBaseBlockEnd(const QsciLexerJavaScript* self, int* style);
int QsciLexerJavaScript_BlockLookback(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnBlockLookback(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseBlockLookback(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_BlockStart(const QsciLexerJavaScript* self, int* style);
void QsciLexerJavaScript_OnBlockStart(const QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_QBaseBlockStart(const QsciLexerJavaScript* self, int* style);
const char* QsciLexerJavaScript_BlockStartKeyword(const QsciLexerJavaScript* self, int* style);
void QsciLexerJavaScript_OnBlockStartKeyword(const QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_QBaseBlockStartKeyword(const QsciLexerJavaScript* self, int* style);
int QsciLexerJavaScript_BraceStyle(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnBraceStyle(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseBraceStyle(const QsciLexerJavaScript* self);
bool QsciLexerJavaScript_CaseSensitive(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnCaseSensitive(const QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_QBaseCaseSensitive(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_Color(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnColor(const QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_QBaseColor(const QsciLexerJavaScript* self, int style);
bool QsciLexerJavaScript_EolFill(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnEolFill(const QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_QBaseEolFill(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_Font(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnFont(const QsciLexerJavaScript* self, intptr_t slot);
QFont* QsciLexerJavaScript_QBaseFont(const QsciLexerJavaScript* self, int style);
int QsciLexerJavaScript_IndentationGuideView(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnIndentationGuideView(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseIndentationGuideView(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_DefaultStyle(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnDefaultStyle(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseDefaultStyle(const QsciLexerJavaScript* self);
QColor* QsciLexerJavaScript_Paper(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnPaper(const QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_QBasePaper(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultColorWithStyle(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnDefaultColorWithStyle(const QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_QBaseDefaultColorWithStyle(const QsciLexerJavaScript* self, int style);
QFont* QsciLexerJavaScript_DefaultFontWithStyle(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnDefaultFontWithStyle(const QsciLexerJavaScript* self, intptr_t slot);
QFont* QsciLexerJavaScript_QBaseDefaultFontWithStyle(const QsciLexerJavaScript* self, int style);
QColor* QsciLexerJavaScript_DefaultPaperWithStyle(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_OnDefaultPaperWithStyle(const QsciLexerJavaScript* self, intptr_t slot);
QColor* QsciLexerJavaScript_QBaseDefaultPaperWithStyle(const QsciLexerJavaScript* self, int style);
void QsciLexerJavaScript_SetEditor(QsciLexerJavaScript* self, QsciScintilla* editor);
void QsciLexerJavaScript_OnSetEditor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetEditor(QsciLexerJavaScript* self, QsciScintilla* editor);
void QsciLexerJavaScript_RefreshProperties(QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnRefreshProperties(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseRefreshProperties(QsciLexerJavaScript* self);
int QsciLexerJavaScript_StyleBitsNeeded(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnStyleBitsNeeded(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseStyleBitsNeeded(const QsciLexerJavaScript* self);
const char* QsciLexerJavaScript_WordCharacters(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnWordCharacters(const QsciLexerJavaScript* self, intptr_t slot);
const char* QsciLexerJavaScript_QBaseWordCharacters(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_SetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle);
void QsciLexerJavaScript_OnSetAutoIndentStyle(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle);
void QsciLexerJavaScript_SetColor(QsciLexerJavaScript* self, const QColor* c, int style);
void QsciLexerJavaScript_OnSetColor(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetColor(QsciLexerJavaScript* self, const QColor* c, int style);
void QsciLexerJavaScript_SetEolFill(QsciLexerJavaScript* self, bool eoffill, int style);
void QsciLexerJavaScript_OnSetEolFill(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetEolFill(QsciLexerJavaScript* self, bool eoffill, int style);
void QsciLexerJavaScript_SetFont(QsciLexerJavaScript* self, const QFont* f, int style);
void QsciLexerJavaScript_OnSetFont(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetFont(QsciLexerJavaScript* self, const QFont* f, int style);
void QsciLexerJavaScript_SetPaper(QsciLexerJavaScript* self, const QColor* c, int style);
void QsciLexerJavaScript_OnSetPaper(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseSetPaper(QsciLexerJavaScript* self, const QColor* c, int style);
bool QsciLexerJavaScript_ReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJavaScript_OnReadProperties(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_QBaseReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJavaScript_WriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerJavaScript_OnWriteProperties(const QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_QBaseWriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerJavaScript_Event(QsciLexerJavaScript* self, QEvent* event);
void QsciLexerJavaScript_OnEvent(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_QBaseEvent(QsciLexerJavaScript* self, QEvent* event);
bool QsciLexerJavaScript_EventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event);
void QsciLexerJavaScript_OnEventFilter(QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_QBaseEventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event);
void QsciLexerJavaScript_TimerEvent(QsciLexerJavaScript* self, QTimerEvent* event);
void QsciLexerJavaScript_OnTimerEvent(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseTimerEvent(QsciLexerJavaScript* self, QTimerEvent* event);
void QsciLexerJavaScript_ChildEvent(QsciLexerJavaScript* self, QChildEvent* event);
void QsciLexerJavaScript_OnChildEvent(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseChildEvent(QsciLexerJavaScript* self, QChildEvent* event);
void QsciLexerJavaScript_CustomEvent(QsciLexerJavaScript* self, QEvent* event);
void QsciLexerJavaScript_OnCustomEvent(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseCustomEvent(QsciLexerJavaScript* self, QEvent* event);
void QsciLexerJavaScript_ConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_OnConnectNotify(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_DisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_OnDisconnectNotify(QsciLexerJavaScript* self, intptr_t slot);
void QsciLexerJavaScript_QBaseDisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
libqt_string QsciLexerJavaScript_TextAsBytes(const QsciLexerJavaScript* self, const libqt_string text);
void QsciLexerJavaScript_OnTextAsBytes(const QsciLexerJavaScript* self, intptr_t slot);
libqt_string QsciLexerJavaScript_QBaseTextAsBytes(const QsciLexerJavaScript* self, const libqt_string text);
libqt_string QsciLexerJavaScript_BytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size);
void QsciLexerJavaScript_OnBytesAsText(const QsciLexerJavaScript* self, intptr_t slot);
libqt_string QsciLexerJavaScript_QBaseBytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size);
QObject* QsciLexerJavaScript_Sender(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnSender(const QsciLexerJavaScript* self, intptr_t slot);
QObject* QsciLexerJavaScript_QBaseSender(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_SenderSignalIndex(const QsciLexerJavaScript* self);
void QsciLexerJavaScript_OnSenderSignalIndex(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseSenderSignalIndex(const QsciLexerJavaScript* self);
int QsciLexerJavaScript_Receivers(const QsciLexerJavaScript* self, const char* signal);
void QsciLexerJavaScript_OnReceivers(const QsciLexerJavaScript* self, intptr_t slot);
int QsciLexerJavaScript_QBaseReceivers(const QsciLexerJavaScript* self, const char* signal);
bool QsciLexerJavaScript_IsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_OnIsSignalConnected(const QsciLexerJavaScript* self, intptr_t slot);
bool QsciLexerJavaScript_QBaseIsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal);
void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
