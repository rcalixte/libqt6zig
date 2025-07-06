#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERDIFF_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERDIFF_H

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
typedef struct QsciLexerDiff QsciLexerDiff;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerDiff* QsciLexerDiff_new();
QsciLexerDiff* QsciLexerDiff_new2(QObject* parent);
QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self);
void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1);
int QsciLexerDiff_Metacall(QsciLexerDiff* self, int param1, int param2, void** param3);
void QsciLexerDiff_OnMetacall(QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseMetacall(QsciLexerDiff* self, int param1, int param2, void** param3);
libqt_string QsciLexerDiff_Tr(const char* s);
const char* QsciLexerDiff_Language(const QsciLexerDiff* self);
const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self);
const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self);
QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style);
libqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style);
libqt_string QsciLexerDiff_Tr2(const char* s, const char* c);
libqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n);
int QsciLexerDiff_LexerId(const QsciLexerDiff* self);
void QsciLexerDiff_OnLexerId(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseLexerId(const QsciLexerDiff* self);
const char* QsciLexerDiff_AutoCompletionFillups(const QsciLexerDiff* self);
void QsciLexerDiff_OnAutoCompletionFillups(const QsciLexerDiff* self, intptr_t slot);
const char* QsciLexerDiff_QBaseAutoCompletionFillups(const QsciLexerDiff* self);
libqt_list /* of libqt_string */ QsciLexerDiff_AutoCompletionWordSeparators(const QsciLexerDiff* self);
void QsciLexerDiff_OnAutoCompletionWordSeparators(const QsciLexerDiff* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerDiff_QBaseAutoCompletionWordSeparators(const QsciLexerDiff* self);
const char* QsciLexerDiff_BlockEnd(const QsciLexerDiff* self, int* style);
void QsciLexerDiff_OnBlockEnd(const QsciLexerDiff* self, intptr_t slot);
const char* QsciLexerDiff_QBaseBlockEnd(const QsciLexerDiff* self, int* style);
int QsciLexerDiff_BlockLookback(const QsciLexerDiff* self);
void QsciLexerDiff_OnBlockLookback(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseBlockLookback(const QsciLexerDiff* self);
const char* QsciLexerDiff_BlockStart(const QsciLexerDiff* self, int* style);
void QsciLexerDiff_OnBlockStart(const QsciLexerDiff* self, intptr_t slot);
const char* QsciLexerDiff_QBaseBlockStart(const QsciLexerDiff* self, int* style);
const char* QsciLexerDiff_BlockStartKeyword(const QsciLexerDiff* self, int* style);
void QsciLexerDiff_OnBlockStartKeyword(const QsciLexerDiff* self, intptr_t slot);
const char* QsciLexerDiff_QBaseBlockStartKeyword(const QsciLexerDiff* self, int* style);
int QsciLexerDiff_BraceStyle(const QsciLexerDiff* self);
void QsciLexerDiff_OnBraceStyle(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseBraceStyle(const QsciLexerDiff* self);
bool QsciLexerDiff_CaseSensitive(const QsciLexerDiff* self);
void QsciLexerDiff_OnCaseSensitive(const QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseCaseSensitive(const QsciLexerDiff* self);
QColor* QsciLexerDiff_Color(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnColor(const QsciLexerDiff* self, intptr_t slot);
QColor* QsciLexerDiff_QBaseColor(const QsciLexerDiff* self, int style);
bool QsciLexerDiff_EolFill(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnEolFill(const QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseEolFill(const QsciLexerDiff* self, int style);
QFont* QsciLexerDiff_Font(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnFont(const QsciLexerDiff* self, intptr_t slot);
QFont* QsciLexerDiff_QBaseFont(const QsciLexerDiff* self, int style);
int QsciLexerDiff_IndentationGuideView(const QsciLexerDiff* self);
void QsciLexerDiff_OnIndentationGuideView(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseIndentationGuideView(const QsciLexerDiff* self);
const char* QsciLexerDiff_Keywords(const QsciLexerDiff* self, int set);
void QsciLexerDiff_OnKeywords(const QsciLexerDiff* self, intptr_t slot);
const char* QsciLexerDiff_QBaseKeywords(const QsciLexerDiff* self, int set);
int QsciLexerDiff_DefaultStyle(const QsciLexerDiff* self);
void QsciLexerDiff_OnDefaultStyle(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseDefaultStyle(const QsciLexerDiff* self);
QColor* QsciLexerDiff_Paper(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnPaper(const QsciLexerDiff* self, intptr_t slot);
QColor* QsciLexerDiff_QBasePaper(const QsciLexerDiff* self, int style);
QColor* QsciLexerDiff_DefaultColorWithStyle(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnDefaultColorWithStyle(const QsciLexerDiff* self, intptr_t slot);
QColor* QsciLexerDiff_QBaseDefaultColorWithStyle(const QsciLexerDiff* self, int style);
bool QsciLexerDiff_DefaultEolFill(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnDefaultEolFill(const QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseDefaultEolFill(const QsciLexerDiff* self, int style);
QFont* QsciLexerDiff_DefaultFontWithStyle(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnDefaultFontWithStyle(const QsciLexerDiff* self, intptr_t slot);
QFont* QsciLexerDiff_QBaseDefaultFontWithStyle(const QsciLexerDiff* self, int style);
QColor* QsciLexerDiff_DefaultPaperWithStyle(const QsciLexerDiff* self, int style);
void QsciLexerDiff_OnDefaultPaperWithStyle(const QsciLexerDiff* self, intptr_t slot);
QColor* QsciLexerDiff_QBaseDefaultPaperWithStyle(const QsciLexerDiff* self, int style);
void QsciLexerDiff_SetEditor(QsciLexerDiff* self, QsciScintilla* editor);
void QsciLexerDiff_OnSetEditor(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseSetEditor(QsciLexerDiff* self, QsciScintilla* editor);
void QsciLexerDiff_RefreshProperties(QsciLexerDiff* self);
void QsciLexerDiff_OnRefreshProperties(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseRefreshProperties(QsciLexerDiff* self);
int QsciLexerDiff_StyleBitsNeeded(const QsciLexerDiff* self);
void QsciLexerDiff_OnStyleBitsNeeded(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseStyleBitsNeeded(const QsciLexerDiff* self);
void QsciLexerDiff_SetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle);
void QsciLexerDiff_OnSetAutoIndentStyle(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseSetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle);
void QsciLexerDiff_SetColor(QsciLexerDiff* self, const QColor* c, int style);
void QsciLexerDiff_OnSetColor(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseSetColor(QsciLexerDiff* self, const QColor* c, int style);
void QsciLexerDiff_SetEolFill(QsciLexerDiff* self, bool eoffill, int style);
void QsciLexerDiff_OnSetEolFill(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseSetEolFill(QsciLexerDiff* self, bool eoffill, int style);
void QsciLexerDiff_SetFont(QsciLexerDiff* self, const QFont* f, int style);
void QsciLexerDiff_OnSetFont(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseSetFont(QsciLexerDiff* self, const QFont* f, int style);
void QsciLexerDiff_SetPaper(QsciLexerDiff* self, const QColor* c, int style);
void QsciLexerDiff_OnSetPaper(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseSetPaper(QsciLexerDiff* self, const QColor* c, int style);
bool QsciLexerDiff_ReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
void QsciLexerDiff_OnReadProperties(QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerDiff_WriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
void QsciLexerDiff_OnWriteProperties(const QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseWriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerDiff_Event(QsciLexerDiff* self, QEvent* event);
void QsciLexerDiff_OnEvent(QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseEvent(QsciLexerDiff* self, QEvent* event);
bool QsciLexerDiff_EventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event);
void QsciLexerDiff_OnEventFilter(QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseEventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event);
void QsciLexerDiff_TimerEvent(QsciLexerDiff* self, QTimerEvent* event);
void QsciLexerDiff_OnTimerEvent(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseTimerEvent(QsciLexerDiff* self, QTimerEvent* event);
void QsciLexerDiff_ChildEvent(QsciLexerDiff* self, QChildEvent* event);
void QsciLexerDiff_OnChildEvent(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseChildEvent(QsciLexerDiff* self, QChildEvent* event);
void QsciLexerDiff_CustomEvent(QsciLexerDiff* self, QEvent* event);
void QsciLexerDiff_OnCustomEvent(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseCustomEvent(QsciLexerDiff* self, QEvent* event);
void QsciLexerDiff_ConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
void QsciLexerDiff_OnConnectNotify(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
void QsciLexerDiff_DisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
void QsciLexerDiff_OnDisconnectNotify(QsciLexerDiff* self, intptr_t slot);
void QsciLexerDiff_QBaseDisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
libqt_string QsciLexerDiff_TextAsBytes(const QsciLexerDiff* self, const libqt_string text);
void QsciLexerDiff_OnTextAsBytes(const QsciLexerDiff* self, intptr_t slot);
libqt_string QsciLexerDiff_QBaseTextAsBytes(const QsciLexerDiff* self, const libqt_string text);
libqt_string QsciLexerDiff_BytesAsText(const QsciLexerDiff* self, const char* bytes, int size);
void QsciLexerDiff_OnBytesAsText(const QsciLexerDiff* self, intptr_t slot);
libqt_string QsciLexerDiff_QBaseBytesAsText(const QsciLexerDiff* self, const char* bytes, int size);
QObject* QsciLexerDiff_Sender(const QsciLexerDiff* self);
void QsciLexerDiff_OnSender(const QsciLexerDiff* self, intptr_t slot);
QObject* QsciLexerDiff_QBaseSender(const QsciLexerDiff* self);
int QsciLexerDiff_SenderSignalIndex(const QsciLexerDiff* self);
void QsciLexerDiff_OnSenderSignalIndex(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseSenderSignalIndex(const QsciLexerDiff* self);
int QsciLexerDiff_Receivers(const QsciLexerDiff* self, const char* signal);
void QsciLexerDiff_OnReceivers(const QsciLexerDiff* self, intptr_t slot);
int QsciLexerDiff_QBaseReceivers(const QsciLexerDiff* self, const char* signal);
bool QsciLexerDiff_IsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal);
void QsciLexerDiff_OnIsSignalConnected(const QsciLexerDiff* self, intptr_t slot);
bool QsciLexerDiff_QBaseIsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal);
void QsciLexerDiff_Delete(QsciLexerDiff* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
