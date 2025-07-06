#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCPP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCPP_H

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
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCPP* QsciLexerCPP_new();
QsciLexerCPP* QsciLexerCPP_new2(QObject* parent);
QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords);
QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self);
void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1);
int QsciLexerCPP_Metacall(QsciLexerCPP* self, int param1, int param2, void** param3);
void QsciLexerCPP_OnMetacall(QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseMetacall(QsciLexerCPP* self, int param1, int param2, void** param3);
libqt_string QsciLexerCPP_Tr(const char* s);
const char* QsciLexerCPP_Language(const QsciLexerCPP* self);
const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self);
libqt_list /* of libqt_string */ QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self);
const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self);
int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self);
const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self);
QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style);
bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style);
QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style);
QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style);
const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set);
libqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style);
void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self);
bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self);
bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self);
bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self);
void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self);
void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled);
bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self);
void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed);
bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self);
void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_OnSetFoldAtElse(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetFoldAtElse(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_OnSetFoldComments(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetFoldComments(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_OnSetFoldCompact(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetFoldCompact(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_OnSetFoldPreprocessor(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetFoldPreprocessor(QsciLexerCPP* self, bool fold);
void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style);
void QsciLexerCPP_OnSetStylePreprocessor(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetStylePreprocessor(QsciLexerCPP* self, bool style);
libqt_string QsciLexerCPP_Tr2(const char* s, const char* c);
libqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n);
const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style);
const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style);
int QsciLexerCPP_LexerId(const QsciLexerCPP* self);
void QsciLexerCPP_OnLexerId(const QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseLexerId(const QsciLexerCPP* self);
const char* QsciLexerCPP_AutoCompletionFillups(const QsciLexerCPP* self);
void QsciLexerCPP_OnAutoCompletionFillups(const QsciLexerCPP* self, intptr_t slot);
const char* QsciLexerCPP_QBaseAutoCompletionFillups(const QsciLexerCPP* self);
int QsciLexerCPP_BlockLookback(const QsciLexerCPP* self);
void QsciLexerCPP_OnBlockLookback(const QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseBlockLookback(const QsciLexerCPP* self);
bool QsciLexerCPP_CaseSensitive(const QsciLexerCPP* self);
void QsciLexerCPP_OnCaseSensitive(const QsciLexerCPP* self, intptr_t slot);
bool QsciLexerCPP_QBaseCaseSensitive(const QsciLexerCPP* self);
QColor* QsciLexerCPP_Color(const QsciLexerCPP* self, int style);
void QsciLexerCPP_OnColor(const QsciLexerCPP* self, intptr_t slot);
QColor* QsciLexerCPP_QBaseColor(const QsciLexerCPP* self, int style);
bool QsciLexerCPP_EolFill(const QsciLexerCPP* self, int style);
void QsciLexerCPP_OnEolFill(const QsciLexerCPP* self, intptr_t slot);
bool QsciLexerCPP_QBaseEolFill(const QsciLexerCPP* self, int style);
QFont* QsciLexerCPP_Font(const QsciLexerCPP* self, int style);
void QsciLexerCPP_OnFont(const QsciLexerCPP* self, intptr_t slot);
QFont* QsciLexerCPP_QBaseFont(const QsciLexerCPP* self, int style);
int QsciLexerCPP_IndentationGuideView(const QsciLexerCPP* self);
void QsciLexerCPP_OnIndentationGuideView(const QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseIndentationGuideView(const QsciLexerCPP* self);
int QsciLexerCPP_DefaultStyle(const QsciLexerCPP* self);
void QsciLexerCPP_OnDefaultStyle(const QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseDefaultStyle(const QsciLexerCPP* self);
QColor* QsciLexerCPP_Paper(const QsciLexerCPP* self, int style);
void QsciLexerCPP_OnPaper(const QsciLexerCPP* self, intptr_t slot);
QColor* QsciLexerCPP_QBasePaper(const QsciLexerCPP* self, int style);
QColor* QsciLexerCPP_DefaultColorWithStyle(const QsciLexerCPP* self, int style);
void QsciLexerCPP_OnDefaultColorWithStyle(const QsciLexerCPP* self, intptr_t slot);
QColor* QsciLexerCPP_QBaseDefaultColorWithStyle(const QsciLexerCPP* self, int style);
QFont* QsciLexerCPP_DefaultFontWithStyle(const QsciLexerCPP* self, int style);
void QsciLexerCPP_OnDefaultFontWithStyle(const QsciLexerCPP* self, intptr_t slot);
QFont* QsciLexerCPP_QBaseDefaultFontWithStyle(const QsciLexerCPP* self, int style);
QColor* QsciLexerCPP_DefaultPaperWithStyle(const QsciLexerCPP* self, int style);
void QsciLexerCPP_OnDefaultPaperWithStyle(const QsciLexerCPP* self, intptr_t slot);
QColor* QsciLexerCPP_QBaseDefaultPaperWithStyle(const QsciLexerCPP* self, int style);
void QsciLexerCPP_SetEditor(QsciLexerCPP* self, QsciScintilla* editor);
void QsciLexerCPP_OnSetEditor(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetEditor(QsciLexerCPP* self, QsciScintilla* editor);
int QsciLexerCPP_StyleBitsNeeded(const QsciLexerCPP* self);
void QsciLexerCPP_OnStyleBitsNeeded(const QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseStyleBitsNeeded(const QsciLexerCPP* self);
void QsciLexerCPP_SetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle);
void QsciLexerCPP_OnSetAutoIndentStyle(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle);
void QsciLexerCPP_SetColor(QsciLexerCPP* self, const QColor* c, int style);
void QsciLexerCPP_OnSetColor(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetColor(QsciLexerCPP* self, const QColor* c, int style);
void QsciLexerCPP_SetEolFill(QsciLexerCPP* self, bool eoffill, int style);
void QsciLexerCPP_OnSetEolFill(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetEolFill(QsciLexerCPP* self, bool eoffill, int style);
void QsciLexerCPP_SetFont(QsciLexerCPP* self, const QFont* f, int style);
void QsciLexerCPP_OnSetFont(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetFont(QsciLexerCPP* self, const QFont* f, int style);
void QsciLexerCPP_SetPaper(QsciLexerCPP* self, const QColor* c, int style);
void QsciLexerCPP_OnSetPaper(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseSetPaper(QsciLexerCPP* self, const QColor* c, int style);
bool QsciLexerCPP_ReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCPP_OnReadProperties(QsciLexerCPP* self, intptr_t slot);
bool QsciLexerCPP_QBaseReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCPP_WriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCPP_OnWriteProperties(const QsciLexerCPP* self, intptr_t slot);
bool QsciLexerCPP_QBaseWriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCPP_Event(QsciLexerCPP* self, QEvent* event);
void QsciLexerCPP_OnEvent(QsciLexerCPP* self, intptr_t slot);
bool QsciLexerCPP_QBaseEvent(QsciLexerCPP* self, QEvent* event);
bool QsciLexerCPP_EventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event);
void QsciLexerCPP_OnEventFilter(QsciLexerCPP* self, intptr_t slot);
bool QsciLexerCPP_QBaseEventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event);
void QsciLexerCPP_TimerEvent(QsciLexerCPP* self, QTimerEvent* event);
void QsciLexerCPP_OnTimerEvent(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseTimerEvent(QsciLexerCPP* self, QTimerEvent* event);
void QsciLexerCPP_ChildEvent(QsciLexerCPP* self, QChildEvent* event);
void QsciLexerCPP_OnChildEvent(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseChildEvent(QsciLexerCPP* self, QChildEvent* event);
void QsciLexerCPP_CustomEvent(QsciLexerCPP* self, QEvent* event);
void QsciLexerCPP_OnCustomEvent(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseCustomEvent(QsciLexerCPP* self, QEvent* event);
void QsciLexerCPP_ConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
void QsciLexerCPP_OnConnectNotify(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
void QsciLexerCPP_DisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
void QsciLexerCPP_OnDisconnectNotify(QsciLexerCPP* self, intptr_t slot);
void QsciLexerCPP_QBaseDisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
libqt_string QsciLexerCPP_TextAsBytes(const QsciLexerCPP* self, const libqt_string text);
void QsciLexerCPP_OnTextAsBytes(const QsciLexerCPP* self, intptr_t slot);
libqt_string QsciLexerCPP_QBaseTextAsBytes(const QsciLexerCPP* self, const libqt_string text);
libqt_string QsciLexerCPP_BytesAsText(const QsciLexerCPP* self, const char* bytes, int size);
void QsciLexerCPP_OnBytesAsText(const QsciLexerCPP* self, intptr_t slot);
libqt_string QsciLexerCPP_QBaseBytesAsText(const QsciLexerCPP* self, const char* bytes, int size);
QObject* QsciLexerCPP_Sender(const QsciLexerCPP* self);
void QsciLexerCPP_OnSender(const QsciLexerCPP* self, intptr_t slot);
QObject* QsciLexerCPP_QBaseSender(const QsciLexerCPP* self);
int QsciLexerCPP_SenderSignalIndex(const QsciLexerCPP* self);
void QsciLexerCPP_OnSenderSignalIndex(const QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseSenderSignalIndex(const QsciLexerCPP* self);
int QsciLexerCPP_Receivers(const QsciLexerCPP* self, const char* signal);
void QsciLexerCPP_OnReceivers(const QsciLexerCPP* self, intptr_t slot);
int QsciLexerCPP_QBaseReceivers(const QsciLexerCPP* self, const char* signal);
bool QsciLexerCPP_IsSignalConnected(const QsciLexerCPP* self, const QMetaMethod* signal);
void QsciLexerCPP_OnIsSignalConnected(const QsciLexerCPP* self, intptr_t slot);
bool QsciLexerCPP_QBaseIsSignalConnected(const QsciLexerCPP* self, const QMetaMethod* signal);
void QsciLexerCPP_Delete(QsciLexerCPP* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
