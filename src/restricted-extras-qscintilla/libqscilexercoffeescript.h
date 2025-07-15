#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCOFFEESCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCOFFEESCRIPT_H

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
typedef struct QsciLexerCoffeeScript QsciLexerCoffeeScript;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new();
QsciLexerCoffeeScript* QsciLexerCoffeeScript_new2(QObject* parent);
QMetaObject* QsciLexerCoffeeScript_MetaObject(const QsciLexerCoffeeScript* self);
void* QsciLexerCoffeeScript_Metacast(QsciLexerCoffeeScript* self, const char* param1);
int QsciLexerCoffeeScript_Metacall(QsciLexerCoffeeScript* self, int param1, int param2, void** param3);
void QsciLexerCoffeeScript_OnMetacall(QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseMetacall(QsciLexerCoffeeScript* self, int param1, int param2, void** param3);
libqt_string QsciLexerCoffeeScript_Tr(const char* s);
const char* QsciLexerCoffeeScript_Language(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_Lexer(const QsciLexerCoffeeScript* self);
libqt_list /* of libqt_string */ QsciLexerCoffeeScript_AutoCompletionWordSeparators(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockEnd(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockStart(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_BlockStartKeyword(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_BraceStyle(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_WordCharacters(const QsciLexerCoffeeScript* self);
QColor* QsciLexerCoffeeScript_DefaultColor(const QsciLexerCoffeeScript* self, int style);
bool QsciLexerCoffeeScript_DefaultEolFill(const QsciLexerCoffeeScript* self, int style);
QFont* QsciLexerCoffeeScript_DefaultFont(const QsciLexerCoffeeScript* self, int style);
QColor* QsciLexerCoffeeScript_DefaultPaper(const QsciLexerCoffeeScript* self, int style);
const char* QsciLexerCoffeeScript_Keywords(const QsciLexerCoffeeScript* self, int set);
libqt_string QsciLexerCoffeeScript_Description(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_RefreshProperties(QsciLexerCoffeeScript* self);
bool QsciLexerCoffeeScript_DollarsAllowed(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetDollarsAllowed(QsciLexerCoffeeScript* self, bool allowed);
bool QsciLexerCoffeeScript_FoldComments(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetFoldComments(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_FoldCompact(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetFoldCompact(QsciLexerCoffeeScript* self, bool fold);
bool QsciLexerCoffeeScript_StylePreprocessor(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetStylePreprocessor(QsciLexerCoffeeScript* self, bool style);
libqt_string QsciLexerCoffeeScript_Tr2(const char* s, const char* c);
libqt_string QsciLexerCoffeeScript_Tr3(const char* s, const char* c, int n);
const char* QsciLexerCoffeeScript_BlockEnd1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_BlockStart1(const QsciLexerCoffeeScript* self, int* style);
const char* QsciLexerCoffeeScript_BlockStartKeyword1(const QsciLexerCoffeeScript* self, int* style);
int QsciLexerCoffeeScript_LexerId(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnLexerId(const QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseLexerId(const QsciLexerCoffeeScript* self);
const char* QsciLexerCoffeeScript_AutoCompletionFillups(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnAutoCompletionFillups(const QsciLexerCoffeeScript* self, intptr_t slot);
const char* QsciLexerCoffeeScript_QBaseAutoCompletionFillups(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_BlockLookback(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnBlockLookback(const QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseBlockLookback(const QsciLexerCoffeeScript* self);
bool QsciLexerCoffeeScript_CaseSensitive(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnCaseSensitive(const QsciLexerCoffeeScript* self, intptr_t slot);
bool QsciLexerCoffeeScript_QBaseCaseSensitive(const QsciLexerCoffeeScript* self);
QColor* QsciLexerCoffeeScript_Color(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_OnColor(const QsciLexerCoffeeScript* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_QBaseColor(const QsciLexerCoffeeScript* self, int style);
bool QsciLexerCoffeeScript_EolFill(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_OnEolFill(const QsciLexerCoffeeScript* self, intptr_t slot);
bool QsciLexerCoffeeScript_QBaseEolFill(const QsciLexerCoffeeScript* self, int style);
QFont* QsciLexerCoffeeScript_Font(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_OnFont(const QsciLexerCoffeeScript* self, intptr_t slot);
QFont* QsciLexerCoffeeScript_QBaseFont(const QsciLexerCoffeeScript* self, int style);
int QsciLexerCoffeeScript_IndentationGuideView(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnIndentationGuideView(const QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseIndentationGuideView(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_DefaultStyle(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnDefaultStyle(const QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseDefaultStyle(const QsciLexerCoffeeScript* self);
QColor* QsciLexerCoffeeScript_Paper(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_OnPaper(const QsciLexerCoffeeScript* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_QBasePaper(const QsciLexerCoffeeScript* self, int style);
QColor* QsciLexerCoffeeScript_DefaultColor2(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_OnDefaultColor2(const QsciLexerCoffeeScript* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_QBaseDefaultColor2(const QsciLexerCoffeeScript* self, int style);
QFont* QsciLexerCoffeeScript_DefaultFont2(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_OnDefaultFont2(const QsciLexerCoffeeScript* self, intptr_t slot);
QFont* QsciLexerCoffeeScript_QBaseDefaultFont2(const QsciLexerCoffeeScript* self, int style);
QColor* QsciLexerCoffeeScript_DefaultPaper2(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_OnDefaultPaper2(const QsciLexerCoffeeScript* self, intptr_t slot);
QColor* QsciLexerCoffeeScript_QBaseDefaultPaper2(const QsciLexerCoffeeScript* self, int style);
void QsciLexerCoffeeScript_SetEditor(QsciLexerCoffeeScript* self, QsciScintilla* editor);
void QsciLexerCoffeeScript_OnSetEditor(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseSetEditor(QsciLexerCoffeeScript* self, QsciScintilla* editor);
int QsciLexerCoffeeScript_StyleBitsNeeded(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnStyleBitsNeeded(const QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseStyleBitsNeeded(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_SetAutoIndentStyle(QsciLexerCoffeeScript* self, int autoindentstyle);
void QsciLexerCoffeeScript_OnSetAutoIndentStyle(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseSetAutoIndentStyle(QsciLexerCoffeeScript* self, int autoindentstyle);
void QsciLexerCoffeeScript_SetColor(QsciLexerCoffeeScript* self, const QColor* c, int style);
void QsciLexerCoffeeScript_OnSetColor(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseSetColor(QsciLexerCoffeeScript* self, const QColor* c, int style);
void QsciLexerCoffeeScript_SetEolFill(QsciLexerCoffeeScript* self, bool eoffill, int style);
void QsciLexerCoffeeScript_OnSetEolFill(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseSetEolFill(QsciLexerCoffeeScript* self, bool eoffill, int style);
void QsciLexerCoffeeScript_SetFont(QsciLexerCoffeeScript* self, const QFont* f, int style);
void QsciLexerCoffeeScript_OnSetFont(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseSetFont(QsciLexerCoffeeScript* self, const QFont* f, int style);
void QsciLexerCoffeeScript_SetPaper(QsciLexerCoffeeScript* self, const QColor* c, int style);
void QsciLexerCoffeeScript_OnSetPaper(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseSetPaper(QsciLexerCoffeeScript* self, const QColor* c, int style);
bool QsciLexerCoffeeScript_ReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCoffeeScript_OnReadProperties(QsciLexerCoffeeScript* self, intptr_t slot);
bool QsciLexerCoffeeScript_QBaseReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCoffeeScript_WriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCoffeeScript_OnWriteProperties(const QsciLexerCoffeeScript* self, intptr_t slot);
bool QsciLexerCoffeeScript_QBaseWriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCoffeeScript_Event(QsciLexerCoffeeScript* self, QEvent* event);
void QsciLexerCoffeeScript_OnEvent(QsciLexerCoffeeScript* self, intptr_t slot);
bool QsciLexerCoffeeScript_QBaseEvent(QsciLexerCoffeeScript* self, QEvent* event);
bool QsciLexerCoffeeScript_EventFilter(QsciLexerCoffeeScript* self, QObject* watched, QEvent* event);
void QsciLexerCoffeeScript_OnEventFilter(QsciLexerCoffeeScript* self, intptr_t slot);
bool QsciLexerCoffeeScript_QBaseEventFilter(QsciLexerCoffeeScript* self, QObject* watched, QEvent* event);
void QsciLexerCoffeeScript_TimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event);
void QsciLexerCoffeeScript_OnTimerEvent(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseTimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event);
void QsciLexerCoffeeScript_ChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event);
void QsciLexerCoffeeScript_OnChildEvent(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event);
void QsciLexerCoffeeScript_CustomEvent(QsciLexerCoffeeScript* self, QEvent* event);
void QsciLexerCoffeeScript_OnCustomEvent(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseCustomEvent(QsciLexerCoffeeScript* self, QEvent* event);
void QsciLexerCoffeeScript_ConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
void QsciLexerCoffeeScript_OnConnectNotify(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
void QsciLexerCoffeeScript_DisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
void QsciLexerCoffeeScript_OnDisconnectNotify(QsciLexerCoffeeScript* self, intptr_t slot);
void QsciLexerCoffeeScript_QBaseDisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
libqt_string QsciLexerCoffeeScript_TextAsBytes(const QsciLexerCoffeeScript* self, const libqt_string text);
void QsciLexerCoffeeScript_OnTextAsBytes(const QsciLexerCoffeeScript* self, intptr_t slot);
libqt_string QsciLexerCoffeeScript_QBaseTextAsBytes(const QsciLexerCoffeeScript* self, const libqt_string text);
libqt_string QsciLexerCoffeeScript_BytesAsText(const QsciLexerCoffeeScript* self, const char* bytes, int size);
void QsciLexerCoffeeScript_OnBytesAsText(const QsciLexerCoffeeScript* self, intptr_t slot);
libqt_string QsciLexerCoffeeScript_QBaseBytesAsText(const QsciLexerCoffeeScript* self, const char* bytes, int size);
QObject* QsciLexerCoffeeScript_Sender(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnSender(const QsciLexerCoffeeScript* self, intptr_t slot);
QObject* QsciLexerCoffeeScript_QBaseSender(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_SenderSignalIndex(const QsciLexerCoffeeScript* self);
void QsciLexerCoffeeScript_OnSenderSignalIndex(const QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseSenderSignalIndex(const QsciLexerCoffeeScript* self);
int QsciLexerCoffeeScript_Receivers(const QsciLexerCoffeeScript* self, const char* signal);
void QsciLexerCoffeeScript_OnReceivers(const QsciLexerCoffeeScript* self, intptr_t slot);
int QsciLexerCoffeeScript_QBaseReceivers(const QsciLexerCoffeeScript* self, const char* signal);
bool QsciLexerCoffeeScript_IsSignalConnected(const QsciLexerCoffeeScript* self, const QMetaMethod* signal);
void QsciLexerCoffeeScript_OnIsSignalConnected(const QsciLexerCoffeeScript* self, intptr_t slot);
bool QsciLexerCoffeeScript_QBaseIsSignalConnected(const QsciLexerCoffeeScript* self, const QMetaMethod* signal);
void QsciLexerCoffeeScript_Delete(QsciLexerCoffeeScript* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
