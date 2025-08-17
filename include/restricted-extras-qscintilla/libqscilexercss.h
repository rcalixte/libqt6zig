#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCSS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCSS_H

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
typedef struct QsciLexerCSS QsciLexerCSS;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCSS* QsciLexerCSS_new();
QsciLexerCSS* QsciLexerCSS_new2(QObject* parent);
QMetaObject* QsciLexerCSS_MetaObject(const QsciLexerCSS* self);
void* QsciLexerCSS_Metacast(QsciLexerCSS* self, const char* param1);
int QsciLexerCSS_Metacall(QsciLexerCSS* self, int param1, int param2, void** param3);
void QsciLexerCSS_OnMetacall(QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseMetacall(QsciLexerCSS* self, int param1, int param2, void** param3);
libqt_string QsciLexerCSS_Tr(const char* s);
const char* QsciLexerCSS_Language(const QsciLexerCSS* self);
const char* QsciLexerCSS_Lexer(const QsciLexerCSS* self);
const char* QsciLexerCSS_BlockEnd(const QsciLexerCSS* self);
const char* QsciLexerCSS_BlockStart(const QsciLexerCSS* self);
const char* QsciLexerCSS_WordCharacters(const QsciLexerCSS* self);
QColor* QsciLexerCSS_DefaultColor(const QsciLexerCSS* self, int style);
QFont* QsciLexerCSS_DefaultFont(const QsciLexerCSS* self, int style);
const char* QsciLexerCSS_Keywords(const QsciLexerCSS* self, int set);
libqt_string QsciLexerCSS_Description(const QsciLexerCSS* self, int style);
void QsciLexerCSS_RefreshProperties(QsciLexerCSS* self);
bool QsciLexerCSS_FoldComments(const QsciLexerCSS* self);
bool QsciLexerCSS_FoldCompact(const QsciLexerCSS* self);
void QsciLexerCSS_SetHSSLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_SetLessLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_SetSCSSLanguage(QsciLexerCSS* self, bool enabled);
bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self);
void QsciLexerCSS_SetFoldComments(QsciLexerCSS* self, bool fold);
void QsciLexerCSS_OnSetFoldComments(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetFoldComments(QsciLexerCSS* self, bool fold);
void QsciLexerCSS_SetFoldCompact(QsciLexerCSS* self, bool fold);
void QsciLexerCSS_OnSetFoldCompact(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetFoldCompact(QsciLexerCSS* self, bool fold);
libqt_string QsciLexerCSS_Tr2(const char* s, const char* c);
libqt_string QsciLexerCSS_Tr3(const char* s, const char* c, int n);
const char* QsciLexerCSS_BlockEnd1(const QsciLexerCSS* self, int* style);
const char* QsciLexerCSS_BlockStart1(const QsciLexerCSS* self, int* style);
int QsciLexerCSS_LexerId(const QsciLexerCSS* self);
void QsciLexerCSS_OnLexerId(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseLexerId(const QsciLexerCSS* self);
const char* QsciLexerCSS_AutoCompletionFillups(const QsciLexerCSS* self);
void QsciLexerCSS_OnAutoCompletionFillups(const QsciLexerCSS* self, intptr_t slot);
const char* QsciLexerCSS_QBaseAutoCompletionFillups(const QsciLexerCSS* self);
libqt_list /* of libqt_string */ QsciLexerCSS_AutoCompletionWordSeparators(const QsciLexerCSS* self);
void QsciLexerCSS_OnAutoCompletionWordSeparators(const QsciLexerCSS* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerCSS_QBaseAutoCompletionWordSeparators(const QsciLexerCSS* self);
int QsciLexerCSS_BlockLookback(const QsciLexerCSS* self);
void QsciLexerCSS_OnBlockLookback(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseBlockLookback(const QsciLexerCSS* self);
const char* QsciLexerCSS_BlockStartKeyword(const QsciLexerCSS* self, int* style);
void QsciLexerCSS_OnBlockStartKeyword(const QsciLexerCSS* self, intptr_t slot);
const char* QsciLexerCSS_QBaseBlockStartKeyword(const QsciLexerCSS* self, int* style);
int QsciLexerCSS_BraceStyle(const QsciLexerCSS* self);
void QsciLexerCSS_OnBraceStyle(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseBraceStyle(const QsciLexerCSS* self);
bool QsciLexerCSS_CaseSensitive(const QsciLexerCSS* self);
void QsciLexerCSS_OnCaseSensitive(const QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseCaseSensitive(const QsciLexerCSS* self);
QColor* QsciLexerCSS_Color(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnColor(const QsciLexerCSS* self, intptr_t slot);
QColor* QsciLexerCSS_QBaseColor(const QsciLexerCSS* self, int style);
bool QsciLexerCSS_EolFill(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnEolFill(const QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseEolFill(const QsciLexerCSS* self, int style);
QFont* QsciLexerCSS_Font(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnFont(const QsciLexerCSS* self, intptr_t slot);
QFont* QsciLexerCSS_QBaseFont(const QsciLexerCSS* self, int style);
int QsciLexerCSS_IndentationGuideView(const QsciLexerCSS* self);
void QsciLexerCSS_OnIndentationGuideView(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseIndentationGuideView(const QsciLexerCSS* self);
int QsciLexerCSS_DefaultStyle(const QsciLexerCSS* self);
void QsciLexerCSS_OnDefaultStyle(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseDefaultStyle(const QsciLexerCSS* self);
QColor* QsciLexerCSS_Paper(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnPaper(const QsciLexerCSS* self, intptr_t slot);
QColor* QsciLexerCSS_QBasePaper(const QsciLexerCSS* self, int style);
QColor* QsciLexerCSS_DefaultColor2(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnDefaultColor2(const QsciLexerCSS* self, intptr_t slot);
QColor* QsciLexerCSS_QBaseDefaultColor2(const QsciLexerCSS* self, int style);
bool QsciLexerCSS_DefaultEolFill(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnDefaultEolFill(const QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseDefaultEolFill(const QsciLexerCSS* self, int style);
QFont* QsciLexerCSS_DefaultFont2(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnDefaultFont2(const QsciLexerCSS* self, intptr_t slot);
QFont* QsciLexerCSS_QBaseDefaultFont2(const QsciLexerCSS* self, int style);
QColor* QsciLexerCSS_DefaultPaper2(const QsciLexerCSS* self, int style);
void QsciLexerCSS_OnDefaultPaper2(const QsciLexerCSS* self, intptr_t slot);
QColor* QsciLexerCSS_QBaseDefaultPaper2(const QsciLexerCSS* self, int style);
void QsciLexerCSS_SetEditor(QsciLexerCSS* self, QsciScintilla* editor);
void QsciLexerCSS_OnSetEditor(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetEditor(QsciLexerCSS* self, QsciScintilla* editor);
int QsciLexerCSS_StyleBitsNeeded(const QsciLexerCSS* self);
void QsciLexerCSS_OnStyleBitsNeeded(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseStyleBitsNeeded(const QsciLexerCSS* self);
void QsciLexerCSS_SetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle);
void QsciLexerCSS_OnSetAutoIndentStyle(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle);
void QsciLexerCSS_SetColor(QsciLexerCSS* self, const QColor* c, int style);
void QsciLexerCSS_OnSetColor(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetColor(QsciLexerCSS* self, const QColor* c, int style);
void QsciLexerCSS_SetEolFill(QsciLexerCSS* self, bool eoffill, int style);
void QsciLexerCSS_OnSetEolFill(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetEolFill(QsciLexerCSS* self, bool eoffill, int style);
void QsciLexerCSS_SetFont(QsciLexerCSS* self, const QFont* f, int style);
void QsciLexerCSS_OnSetFont(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetFont(QsciLexerCSS* self, const QFont* f, int style);
void QsciLexerCSS_SetPaper(QsciLexerCSS* self, const QColor* c, int style);
void QsciLexerCSS_OnSetPaper(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseSetPaper(QsciLexerCSS* self, const QColor* c, int style);
bool QsciLexerCSS_ReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCSS_OnReadProperties(QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCSS_WriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCSS_OnWriteProperties(const QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseWriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCSS_Event(QsciLexerCSS* self, QEvent* event);
void QsciLexerCSS_OnEvent(QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseEvent(QsciLexerCSS* self, QEvent* event);
bool QsciLexerCSS_EventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event);
void QsciLexerCSS_OnEventFilter(QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseEventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event);
void QsciLexerCSS_TimerEvent(QsciLexerCSS* self, QTimerEvent* event);
void QsciLexerCSS_OnTimerEvent(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseTimerEvent(QsciLexerCSS* self, QTimerEvent* event);
void QsciLexerCSS_ChildEvent(QsciLexerCSS* self, QChildEvent* event);
void QsciLexerCSS_OnChildEvent(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseChildEvent(QsciLexerCSS* self, QChildEvent* event);
void QsciLexerCSS_CustomEvent(QsciLexerCSS* self, QEvent* event);
void QsciLexerCSS_OnCustomEvent(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseCustomEvent(QsciLexerCSS* self, QEvent* event);
void QsciLexerCSS_ConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
void QsciLexerCSS_OnConnectNotify(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
void QsciLexerCSS_DisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
void QsciLexerCSS_OnDisconnectNotify(QsciLexerCSS* self, intptr_t slot);
void QsciLexerCSS_QBaseDisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
libqt_string QsciLexerCSS_TextAsBytes(const QsciLexerCSS* self, const libqt_string text);
void QsciLexerCSS_OnTextAsBytes(const QsciLexerCSS* self, intptr_t slot);
libqt_string QsciLexerCSS_QBaseTextAsBytes(const QsciLexerCSS* self, const libqt_string text);
libqt_string QsciLexerCSS_BytesAsText(const QsciLexerCSS* self, const char* bytes, int size);
void QsciLexerCSS_OnBytesAsText(const QsciLexerCSS* self, intptr_t slot);
libqt_string QsciLexerCSS_QBaseBytesAsText(const QsciLexerCSS* self, const char* bytes, int size);
QObject* QsciLexerCSS_Sender(const QsciLexerCSS* self);
void QsciLexerCSS_OnSender(const QsciLexerCSS* self, intptr_t slot);
QObject* QsciLexerCSS_QBaseSender(const QsciLexerCSS* self);
int QsciLexerCSS_SenderSignalIndex(const QsciLexerCSS* self);
void QsciLexerCSS_OnSenderSignalIndex(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseSenderSignalIndex(const QsciLexerCSS* self);
int QsciLexerCSS_Receivers(const QsciLexerCSS* self, const char* signal);
void QsciLexerCSS_OnReceivers(const QsciLexerCSS* self, intptr_t slot);
int QsciLexerCSS_QBaseReceivers(const QsciLexerCSS* self, const char* signal);
bool QsciLexerCSS_IsSignalConnected(const QsciLexerCSS* self, const QMetaMethod* signal);
void QsciLexerCSS_OnIsSignalConnected(const QsciLexerCSS* self, intptr_t slot);
bool QsciLexerCSS_QBaseIsSignalConnected(const QsciLexerCSS* self, const QMetaMethod* signal);
void QsciLexerCSS_Delete(QsciLexerCSS* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
