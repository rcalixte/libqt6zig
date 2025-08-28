#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMARKDOWN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMARKDOWN_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QsciLexerMarkdown QsciLexerMarkdown;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerMarkdown* QsciLexerMarkdown_new();
QsciLexerMarkdown* QsciLexerMarkdown_new2(QObject* parent);
QMetaObject* QsciLexerMarkdown_MetaObject(const QsciLexerMarkdown* self);
void* QsciLexerMarkdown_Metacast(QsciLexerMarkdown* self, const char* param1);
int QsciLexerMarkdown_Metacall(QsciLexerMarkdown* self, int param1, int param2, void** param3);
libqt_string QsciLexerMarkdown_Tr(const char* s);
const char* QsciLexerMarkdown_Language(const QsciLexerMarkdown* self);
const char* QsciLexerMarkdown_Lexer(const QsciLexerMarkdown* self);
QColor* QsciLexerMarkdown_DefaultColor(const QsciLexerMarkdown* self, int style);
QFont* QsciLexerMarkdown_DefaultFont(const QsciLexerMarkdown* self, int style);
QColor* QsciLexerMarkdown_DefaultPaper(const QsciLexerMarkdown* self, int style);
libqt_string QsciLexerMarkdown_Description(const QsciLexerMarkdown* self, int style);
libqt_string QsciLexerMarkdown_Tr2(const char* s, const char* c);
libqt_string QsciLexerMarkdown_Tr3(const char* s, const char* c, int n);
void QsciLexerMarkdown_OnMetacall(QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseMetacall(QsciLexerMarkdown* self, int param1, int param2, void** param3);
int QsciLexerMarkdown_LexerId(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnLexerId(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseLexerId(const QsciLexerMarkdown* self);
const char* QsciLexerMarkdown_AutoCompletionFillups(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnAutoCompletionFillups(const QsciLexerMarkdown* self, intptr_t slot);
const char* QsciLexerMarkdown_QBaseAutoCompletionFillups(const QsciLexerMarkdown* self);
libqt_list /* of libqt_string */ QsciLexerMarkdown_AutoCompletionWordSeparators(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnAutoCompletionWordSeparators(const QsciLexerMarkdown* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerMarkdown_QBaseAutoCompletionWordSeparators(const QsciLexerMarkdown* self);
const char* QsciLexerMarkdown_BlockEnd(const QsciLexerMarkdown* self, int* style);
void QsciLexerMarkdown_OnBlockEnd(const QsciLexerMarkdown* self, intptr_t slot);
const char* QsciLexerMarkdown_QBaseBlockEnd(const QsciLexerMarkdown* self, int* style);
int QsciLexerMarkdown_BlockLookback(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnBlockLookback(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseBlockLookback(const QsciLexerMarkdown* self);
const char* QsciLexerMarkdown_BlockStart(const QsciLexerMarkdown* self, int* style);
void QsciLexerMarkdown_OnBlockStart(const QsciLexerMarkdown* self, intptr_t slot);
const char* QsciLexerMarkdown_QBaseBlockStart(const QsciLexerMarkdown* self, int* style);
const char* QsciLexerMarkdown_BlockStartKeyword(const QsciLexerMarkdown* self, int* style);
void QsciLexerMarkdown_OnBlockStartKeyword(const QsciLexerMarkdown* self, intptr_t slot);
const char* QsciLexerMarkdown_QBaseBlockStartKeyword(const QsciLexerMarkdown* self, int* style);
int QsciLexerMarkdown_BraceStyle(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnBraceStyle(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseBraceStyle(const QsciLexerMarkdown* self);
bool QsciLexerMarkdown_CaseSensitive(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnCaseSensitive(const QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseCaseSensitive(const QsciLexerMarkdown* self);
QColor* QsciLexerMarkdown_Color(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnColor(const QsciLexerMarkdown* self, intptr_t slot);
QColor* QsciLexerMarkdown_QBaseColor(const QsciLexerMarkdown* self, int style);
bool QsciLexerMarkdown_EolFill(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnEolFill(const QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseEolFill(const QsciLexerMarkdown* self, int style);
QFont* QsciLexerMarkdown_Font(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnFont(const QsciLexerMarkdown* self, intptr_t slot);
QFont* QsciLexerMarkdown_QBaseFont(const QsciLexerMarkdown* self, int style);
int QsciLexerMarkdown_IndentationGuideView(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnIndentationGuideView(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseIndentationGuideView(const QsciLexerMarkdown* self);
const char* QsciLexerMarkdown_Keywords(const QsciLexerMarkdown* self, int set);
void QsciLexerMarkdown_OnKeywords(const QsciLexerMarkdown* self, intptr_t slot);
const char* QsciLexerMarkdown_QBaseKeywords(const QsciLexerMarkdown* self, int set);
int QsciLexerMarkdown_DefaultStyle(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnDefaultStyle(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseDefaultStyle(const QsciLexerMarkdown* self);
QColor* QsciLexerMarkdown_Paper(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnPaper(const QsciLexerMarkdown* self, intptr_t slot);
QColor* QsciLexerMarkdown_QBasePaper(const QsciLexerMarkdown* self, int style);
QColor* QsciLexerMarkdown_DefaultColor2(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnDefaultColor2(const QsciLexerMarkdown* self, intptr_t slot);
QColor* QsciLexerMarkdown_QBaseDefaultColor2(const QsciLexerMarkdown* self, int style);
bool QsciLexerMarkdown_DefaultEolFill(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnDefaultEolFill(const QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseDefaultEolFill(const QsciLexerMarkdown* self, int style);
QFont* QsciLexerMarkdown_DefaultFont2(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnDefaultFont2(const QsciLexerMarkdown* self, intptr_t slot);
QFont* QsciLexerMarkdown_QBaseDefaultFont2(const QsciLexerMarkdown* self, int style);
QColor* QsciLexerMarkdown_DefaultPaper2(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_OnDefaultPaper2(const QsciLexerMarkdown* self, intptr_t slot);
QColor* QsciLexerMarkdown_QBaseDefaultPaper2(const QsciLexerMarkdown* self, int style);
void QsciLexerMarkdown_SetEditor(QsciLexerMarkdown* self, QsciScintilla* editor);
void QsciLexerMarkdown_OnSetEditor(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseSetEditor(QsciLexerMarkdown* self, QsciScintilla* editor);
void QsciLexerMarkdown_RefreshProperties(QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnRefreshProperties(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseRefreshProperties(QsciLexerMarkdown* self);
int QsciLexerMarkdown_StyleBitsNeeded(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnStyleBitsNeeded(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseStyleBitsNeeded(const QsciLexerMarkdown* self);
const char* QsciLexerMarkdown_WordCharacters(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnWordCharacters(const QsciLexerMarkdown* self, intptr_t slot);
const char* QsciLexerMarkdown_QBaseWordCharacters(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_SetAutoIndentStyle(QsciLexerMarkdown* self, int autoindentstyle);
void QsciLexerMarkdown_OnSetAutoIndentStyle(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseSetAutoIndentStyle(QsciLexerMarkdown* self, int autoindentstyle);
void QsciLexerMarkdown_SetColor(QsciLexerMarkdown* self, const QColor* c, int style);
void QsciLexerMarkdown_OnSetColor(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseSetColor(QsciLexerMarkdown* self, const QColor* c, int style);
void QsciLexerMarkdown_SetEolFill(QsciLexerMarkdown* self, bool eoffill, int style);
void QsciLexerMarkdown_OnSetEolFill(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseSetEolFill(QsciLexerMarkdown* self, bool eoffill, int style);
void QsciLexerMarkdown_SetFont(QsciLexerMarkdown* self, const QFont* f, int style);
void QsciLexerMarkdown_OnSetFont(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseSetFont(QsciLexerMarkdown* self, const QFont* f, int style);
void QsciLexerMarkdown_SetPaper(QsciLexerMarkdown* self, const QColor* c, int style);
void QsciLexerMarkdown_OnSetPaper(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseSetPaper(QsciLexerMarkdown* self, const QColor* c, int style);
bool QsciLexerMarkdown_ReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMarkdown_OnReadProperties(QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMarkdown_WriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMarkdown_OnWriteProperties(const QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseWriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMarkdown_Event(QsciLexerMarkdown* self, QEvent* event);
void QsciLexerMarkdown_OnEvent(QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseEvent(QsciLexerMarkdown* self, QEvent* event);
bool QsciLexerMarkdown_EventFilter(QsciLexerMarkdown* self, QObject* watched, QEvent* event);
void QsciLexerMarkdown_OnEventFilter(QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseEventFilter(QsciLexerMarkdown* self, QObject* watched, QEvent* event);
void QsciLexerMarkdown_TimerEvent(QsciLexerMarkdown* self, QTimerEvent* event);
void QsciLexerMarkdown_OnTimerEvent(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseTimerEvent(QsciLexerMarkdown* self, QTimerEvent* event);
void QsciLexerMarkdown_ChildEvent(QsciLexerMarkdown* self, QChildEvent* event);
void QsciLexerMarkdown_OnChildEvent(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseChildEvent(QsciLexerMarkdown* self, QChildEvent* event);
void QsciLexerMarkdown_CustomEvent(QsciLexerMarkdown* self, QEvent* event);
void QsciLexerMarkdown_OnCustomEvent(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseCustomEvent(QsciLexerMarkdown* self, QEvent* event);
void QsciLexerMarkdown_ConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
void QsciLexerMarkdown_OnConnectNotify(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
void QsciLexerMarkdown_DisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
void QsciLexerMarkdown_OnDisconnectNotify(QsciLexerMarkdown* self, intptr_t slot);
void QsciLexerMarkdown_QBaseDisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
libqt_string QsciLexerMarkdown_TextAsBytes(const QsciLexerMarkdown* self, const libqt_string text);
void QsciLexerMarkdown_OnTextAsBytes(const QsciLexerMarkdown* self, intptr_t slot);
libqt_string QsciLexerMarkdown_QBaseTextAsBytes(const QsciLexerMarkdown* self, const libqt_string text);
libqt_string QsciLexerMarkdown_BytesAsText(const QsciLexerMarkdown* self, const char* bytes, int size);
void QsciLexerMarkdown_OnBytesAsText(const QsciLexerMarkdown* self, intptr_t slot);
libqt_string QsciLexerMarkdown_QBaseBytesAsText(const QsciLexerMarkdown* self, const char* bytes, int size);
QObject* QsciLexerMarkdown_Sender(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnSender(const QsciLexerMarkdown* self, intptr_t slot);
QObject* QsciLexerMarkdown_QBaseSender(const QsciLexerMarkdown* self);
int QsciLexerMarkdown_SenderSignalIndex(const QsciLexerMarkdown* self);
void QsciLexerMarkdown_OnSenderSignalIndex(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseSenderSignalIndex(const QsciLexerMarkdown* self);
int QsciLexerMarkdown_Receivers(const QsciLexerMarkdown* self, const char* signal);
void QsciLexerMarkdown_OnReceivers(const QsciLexerMarkdown* self, intptr_t slot);
int QsciLexerMarkdown_QBaseReceivers(const QsciLexerMarkdown* self, const char* signal);
bool QsciLexerMarkdown_IsSignalConnected(const QsciLexerMarkdown* self, const QMetaMethod* signal);
void QsciLexerMarkdown_OnIsSignalConnected(const QsciLexerMarkdown* self, intptr_t slot);
bool QsciLexerMarkdown_QBaseIsSignalConnected(const QsciLexerMarkdown* self, const QMetaMethod* signal);
void QsciLexerMarkdown_Delete(QsciLexerMarkdown* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
