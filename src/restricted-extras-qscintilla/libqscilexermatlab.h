#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMATLAB_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMATLAB_H

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
typedef struct QsciLexerMatlab QsciLexerMatlab;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerMatlab* QsciLexerMatlab_new();
QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent);
QMetaObject* QsciLexerMatlab_MetaObject(const QsciLexerMatlab* self);
void* QsciLexerMatlab_Metacast(QsciLexerMatlab* self, const char* param1);
int QsciLexerMatlab_Metacall(QsciLexerMatlab* self, int param1, int param2, void** param3);
void QsciLexerMatlab_OnMetacall(QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseMetacall(QsciLexerMatlab* self, int param1, int param2, void** param3);
libqt_string QsciLexerMatlab_Tr(const char* s);
const char* QsciLexerMatlab_Language(const QsciLexerMatlab* self);
const char* QsciLexerMatlab_Lexer(const QsciLexerMatlab* self);
QColor* QsciLexerMatlab_DefaultColor(const QsciLexerMatlab* self, int style);
QFont* QsciLexerMatlab_DefaultFont(const QsciLexerMatlab* self, int style);
const char* QsciLexerMatlab_Keywords(const QsciLexerMatlab* self, int set);
libqt_string QsciLexerMatlab_Description(const QsciLexerMatlab* self, int style);
libqt_string QsciLexerMatlab_Tr2(const char* s, const char* c);
libqt_string QsciLexerMatlab_Tr3(const char* s, const char* c, int n);
int QsciLexerMatlab_LexerId(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnLexerId(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseLexerId(const QsciLexerMatlab* self);
const char* QsciLexerMatlab_AutoCompletionFillups(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnAutoCompletionFillups(const QsciLexerMatlab* self, intptr_t slot);
const char* QsciLexerMatlab_QBaseAutoCompletionFillups(const QsciLexerMatlab* self);
libqt_list /* of libqt_string */ QsciLexerMatlab_AutoCompletionWordSeparators(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnAutoCompletionWordSeparators(const QsciLexerMatlab* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerMatlab_QBaseAutoCompletionWordSeparators(const QsciLexerMatlab* self);
const char* QsciLexerMatlab_BlockEnd(const QsciLexerMatlab* self, int* style);
void QsciLexerMatlab_OnBlockEnd(const QsciLexerMatlab* self, intptr_t slot);
const char* QsciLexerMatlab_QBaseBlockEnd(const QsciLexerMatlab* self, int* style);
int QsciLexerMatlab_BlockLookback(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnBlockLookback(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseBlockLookback(const QsciLexerMatlab* self);
const char* QsciLexerMatlab_BlockStart(const QsciLexerMatlab* self, int* style);
void QsciLexerMatlab_OnBlockStart(const QsciLexerMatlab* self, intptr_t slot);
const char* QsciLexerMatlab_QBaseBlockStart(const QsciLexerMatlab* self, int* style);
const char* QsciLexerMatlab_BlockStartKeyword(const QsciLexerMatlab* self, int* style);
void QsciLexerMatlab_OnBlockStartKeyword(const QsciLexerMatlab* self, intptr_t slot);
const char* QsciLexerMatlab_QBaseBlockStartKeyword(const QsciLexerMatlab* self, int* style);
int QsciLexerMatlab_BraceStyle(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnBraceStyle(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseBraceStyle(const QsciLexerMatlab* self);
bool QsciLexerMatlab_CaseSensitive(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnCaseSensitive(const QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseCaseSensitive(const QsciLexerMatlab* self);
QColor* QsciLexerMatlab_Color(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnColor(const QsciLexerMatlab* self, intptr_t slot);
QColor* QsciLexerMatlab_QBaseColor(const QsciLexerMatlab* self, int style);
bool QsciLexerMatlab_EolFill(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnEolFill(const QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseEolFill(const QsciLexerMatlab* self, int style);
QFont* QsciLexerMatlab_Font(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnFont(const QsciLexerMatlab* self, intptr_t slot);
QFont* QsciLexerMatlab_QBaseFont(const QsciLexerMatlab* self, int style);
int QsciLexerMatlab_IndentationGuideView(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnIndentationGuideView(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseIndentationGuideView(const QsciLexerMatlab* self);
int QsciLexerMatlab_DefaultStyle(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnDefaultStyle(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseDefaultStyle(const QsciLexerMatlab* self);
QColor* QsciLexerMatlab_Paper(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnPaper(const QsciLexerMatlab* self, intptr_t slot);
QColor* QsciLexerMatlab_QBasePaper(const QsciLexerMatlab* self, int style);
QColor* QsciLexerMatlab_DefaultColorWithStyle(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnDefaultColorWithStyle(const QsciLexerMatlab* self, intptr_t slot);
QColor* QsciLexerMatlab_QBaseDefaultColorWithStyle(const QsciLexerMatlab* self, int style);
bool QsciLexerMatlab_DefaultEolFill(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnDefaultEolFill(const QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseDefaultEolFill(const QsciLexerMatlab* self, int style);
QFont* QsciLexerMatlab_DefaultFontWithStyle(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnDefaultFontWithStyle(const QsciLexerMatlab* self, intptr_t slot);
QFont* QsciLexerMatlab_QBaseDefaultFontWithStyle(const QsciLexerMatlab* self, int style);
QColor* QsciLexerMatlab_DefaultPaperWithStyle(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_OnDefaultPaperWithStyle(const QsciLexerMatlab* self, intptr_t slot);
QColor* QsciLexerMatlab_QBaseDefaultPaperWithStyle(const QsciLexerMatlab* self, int style);
void QsciLexerMatlab_SetEditor(QsciLexerMatlab* self, QsciScintilla* editor);
void QsciLexerMatlab_OnSetEditor(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseSetEditor(QsciLexerMatlab* self, QsciScintilla* editor);
void QsciLexerMatlab_RefreshProperties(QsciLexerMatlab* self);
void QsciLexerMatlab_OnRefreshProperties(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseRefreshProperties(QsciLexerMatlab* self);
int QsciLexerMatlab_StyleBitsNeeded(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnStyleBitsNeeded(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseStyleBitsNeeded(const QsciLexerMatlab* self);
const char* QsciLexerMatlab_WordCharacters(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnWordCharacters(const QsciLexerMatlab* self, intptr_t slot);
const char* QsciLexerMatlab_QBaseWordCharacters(const QsciLexerMatlab* self);
void QsciLexerMatlab_SetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle);
void QsciLexerMatlab_OnSetAutoIndentStyle(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseSetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle);
void QsciLexerMatlab_SetColor(QsciLexerMatlab* self, const QColor* c, int style);
void QsciLexerMatlab_OnSetColor(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseSetColor(QsciLexerMatlab* self, const QColor* c, int style);
void QsciLexerMatlab_SetEolFill(QsciLexerMatlab* self, bool eoffill, int style);
void QsciLexerMatlab_OnSetEolFill(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseSetEolFill(QsciLexerMatlab* self, bool eoffill, int style);
void QsciLexerMatlab_SetFont(QsciLexerMatlab* self, const QFont* f, int style);
void QsciLexerMatlab_OnSetFont(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseSetFont(QsciLexerMatlab* self, const QFont* f, int style);
void QsciLexerMatlab_SetPaper(QsciLexerMatlab* self, const QColor* c, int style);
void QsciLexerMatlab_OnSetPaper(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseSetPaper(QsciLexerMatlab* self, const QColor* c, int style);
bool QsciLexerMatlab_ReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMatlab_OnReadProperties(QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMatlab_WriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMatlab_OnWriteProperties(const QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseWriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMatlab_Event(QsciLexerMatlab* self, QEvent* event);
void QsciLexerMatlab_OnEvent(QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseEvent(QsciLexerMatlab* self, QEvent* event);
bool QsciLexerMatlab_EventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event);
void QsciLexerMatlab_OnEventFilter(QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseEventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event);
void QsciLexerMatlab_TimerEvent(QsciLexerMatlab* self, QTimerEvent* event);
void QsciLexerMatlab_OnTimerEvent(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseTimerEvent(QsciLexerMatlab* self, QTimerEvent* event);
void QsciLexerMatlab_ChildEvent(QsciLexerMatlab* self, QChildEvent* event);
void QsciLexerMatlab_OnChildEvent(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseChildEvent(QsciLexerMatlab* self, QChildEvent* event);
void QsciLexerMatlab_CustomEvent(QsciLexerMatlab* self, QEvent* event);
void QsciLexerMatlab_OnCustomEvent(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseCustomEvent(QsciLexerMatlab* self, QEvent* event);
void QsciLexerMatlab_ConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
void QsciLexerMatlab_OnConnectNotify(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
void QsciLexerMatlab_DisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
void QsciLexerMatlab_OnDisconnectNotify(QsciLexerMatlab* self, intptr_t slot);
void QsciLexerMatlab_QBaseDisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
libqt_string QsciLexerMatlab_TextAsBytes(const QsciLexerMatlab* self, const libqt_string text);
void QsciLexerMatlab_OnTextAsBytes(const QsciLexerMatlab* self, intptr_t slot);
libqt_string QsciLexerMatlab_QBaseTextAsBytes(const QsciLexerMatlab* self, const libqt_string text);
libqt_string QsciLexerMatlab_BytesAsText(const QsciLexerMatlab* self, const char* bytes, int size);
void QsciLexerMatlab_OnBytesAsText(const QsciLexerMatlab* self, intptr_t slot);
libqt_string QsciLexerMatlab_QBaseBytesAsText(const QsciLexerMatlab* self, const char* bytes, int size);
QObject* QsciLexerMatlab_Sender(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnSender(const QsciLexerMatlab* self, intptr_t slot);
QObject* QsciLexerMatlab_QBaseSender(const QsciLexerMatlab* self);
int QsciLexerMatlab_SenderSignalIndex(const QsciLexerMatlab* self);
void QsciLexerMatlab_OnSenderSignalIndex(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseSenderSignalIndex(const QsciLexerMatlab* self);
int QsciLexerMatlab_Receivers(const QsciLexerMatlab* self, const char* signal);
void QsciLexerMatlab_OnReceivers(const QsciLexerMatlab* self, intptr_t slot);
int QsciLexerMatlab_QBaseReceivers(const QsciLexerMatlab* self, const char* signal);
bool QsciLexerMatlab_IsSignalConnected(const QsciLexerMatlab* self, const QMetaMethod* signal);
void QsciLexerMatlab_OnIsSignalConnected(const QsciLexerMatlab* self, intptr_t slot);
bool QsciLexerMatlab_QBaseIsSignalConnected(const QsciLexerMatlab* self, const QMetaMethod* signal);
void QsciLexerMatlab_Delete(QsciLexerMatlab* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
