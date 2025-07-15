#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERNASM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERNASM_H

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
typedef struct QChar QChar;
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
typedef struct QsciLexerAsm QsciLexerAsm;
typedef struct QsciLexerNASM QsciLexerNASM;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerNASM* QsciLexerNASM_new();
QsciLexerNASM* QsciLexerNASM_new2(QObject* parent);
QMetaObject* QsciLexerNASM_MetaObject(const QsciLexerNASM* self);
void* QsciLexerNASM_Metacast(QsciLexerNASM* self, const char* param1);
int QsciLexerNASM_Metacall(QsciLexerNASM* self, int param1, int param2, void** param3);
void QsciLexerNASM_OnMetacall(QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseMetacall(QsciLexerNASM* self, int param1, int param2, void** param3);
libqt_string QsciLexerNASM_Tr(const char* s);
const char* QsciLexerNASM_Language(const QsciLexerNASM* self);
const char* QsciLexerNASM_Lexer(const QsciLexerNASM* self);
libqt_string QsciLexerNASM_Tr2(const char* s, const char* c);
libqt_string QsciLexerNASM_Tr3(const char* s, const char* c, int n);
void QsciLexerNASM_SetFoldComments(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_OnSetFoldComments(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetFoldComments(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_SetFoldCompact(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_OnSetFoldCompact(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetFoldCompact(QsciLexerNASM* self, bool fold);
void QsciLexerNASM_SetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter);
void QsciLexerNASM_OnSetCommentDelimiter(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetCommentDelimiter(QsciLexerNASM* self, QChar* delimeter);
void QsciLexerNASM_SetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based);
void QsciLexerNASM_OnSetFoldSyntaxBased(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetFoldSyntaxBased(QsciLexerNASM* self, bool syntax_based);
int QsciLexerNASM_LexerId(const QsciLexerNASM* self);
void QsciLexerNASM_OnLexerId(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseLexerId(const QsciLexerNASM* self);
const char* QsciLexerNASM_AutoCompletionFillups(const QsciLexerNASM* self);
void QsciLexerNASM_OnAutoCompletionFillups(const QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_QBaseAutoCompletionFillups(const QsciLexerNASM* self);
libqt_list /* of libqt_string */ QsciLexerNASM_AutoCompletionWordSeparators(const QsciLexerNASM* self);
void QsciLexerNASM_OnAutoCompletionWordSeparators(const QsciLexerNASM* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerNASM_QBaseAutoCompletionWordSeparators(const QsciLexerNASM* self);
const char* QsciLexerNASM_BlockEnd(const QsciLexerNASM* self, int* style);
void QsciLexerNASM_OnBlockEnd(const QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_QBaseBlockEnd(const QsciLexerNASM* self, int* style);
int QsciLexerNASM_BlockLookback(const QsciLexerNASM* self);
void QsciLexerNASM_OnBlockLookback(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseBlockLookback(const QsciLexerNASM* self);
const char* QsciLexerNASM_BlockStart(const QsciLexerNASM* self, int* style);
void QsciLexerNASM_OnBlockStart(const QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_QBaseBlockStart(const QsciLexerNASM* self, int* style);
const char* QsciLexerNASM_BlockStartKeyword(const QsciLexerNASM* self, int* style);
void QsciLexerNASM_OnBlockStartKeyword(const QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_QBaseBlockStartKeyword(const QsciLexerNASM* self, int* style);
int QsciLexerNASM_BraceStyle(const QsciLexerNASM* self);
void QsciLexerNASM_OnBraceStyle(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseBraceStyle(const QsciLexerNASM* self);
bool QsciLexerNASM_CaseSensitive(const QsciLexerNASM* self);
void QsciLexerNASM_OnCaseSensitive(const QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseCaseSensitive(const QsciLexerNASM* self);
QColor* QsciLexerNASM_Color(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnColor(const QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_QBaseColor(const QsciLexerNASM* self, int style);
bool QsciLexerNASM_EolFill(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnEolFill(const QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseEolFill(const QsciLexerNASM* self, int style);
QFont* QsciLexerNASM_Font(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnFont(const QsciLexerNASM* self, intptr_t slot);
QFont* QsciLexerNASM_QBaseFont(const QsciLexerNASM* self, int style);
int QsciLexerNASM_IndentationGuideView(const QsciLexerNASM* self);
void QsciLexerNASM_OnIndentationGuideView(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseIndentationGuideView(const QsciLexerNASM* self);
const char* QsciLexerNASM_Keywords(const QsciLexerNASM* self, int set);
void QsciLexerNASM_OnKeywords(const QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_QBaseKeywords(const QsciLexerNASM* self, int set);
int QsciLexerNASM_DefaultStyle(const QsciLexerNASM* self);
void QsciLexerNASM_OnDefaultStyle(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseDefaultStyle(const QsciLexerNASM* self);
libqt_string QsciLexerNASM_Description(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDescription(const QsciLexerNASM* self, intptr_t slot);
libqt_string QsciLexerNASM_QBaseDescription(const QsciLexerNASM* self, int style);
QColor* QsciLexerNASM_Paper(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnPaper(const QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_QBasePaper(const QsciLexerNASM* self, int style);
QColor* QsciLexerNASM_DefaultColor2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultColor2(const QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_QBaseDefaultColor2(const QsciLexerNASM* self, int style);
bool QsciLexerNASM_DefaultEolFill(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultEolFill(const QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseDefaultEolFill(const QsciLexerNASM* self, int style);
QFont* QsciLexerNASM_DefaultFont2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultFont2(const QsciLexerNASM* self, intptr_t slot);
QFont* QsciLexerNASM_QBaseDefaultFont2(const QsciLexerNASM* self, int style);
QColor* QsciLexerNASM_DefaultPaper2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_OnDefaultPaper2(const QsciLexerNASM* self, intptr_t slot);
QColor* QsciLexerNASM_QBaseDefaultPaper2(const QsciLexerNASM* self, int style);
void QsciLexerNASM_SetEditor(QsciLexerNASM* self, QsciScintilla* editor);
void QsciLexerNASM_OnSetEditor(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetEditor(QsciLexerNASM* self, QsciScintilla* editor);
void QsciLexerNASM_RefreshProperties(QsciLexerNASM* self);
void QsciLexerNASM_OnRefreshProperties(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseRefreshProperties(QsciLexerNASM* self);
int QsciLexerNASM_StyleBitsNeeded(const QsciLexerNASM* self);
void QsciLexerNASM_OnStyleBitsNeeded(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseStyleBitsNeeded(const QsciLexerNASM* self);
const char* QsciLexerNASM_WordCharacters(const QsciLexerNASM* self);
void QsciLexerNASM_OnWordCharacters(const QsciLexerNASM* self, intptr_t slot);
const char* QsciLexerNASM_QBaseWordCharacters(const QsciLexerNASM* self);
void QsciLexerNASM_SetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle);
void QsciLexerNASM_OnSetAutoIndentStyle(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetAutoIndentStyle(QsciLexerNASM* self, int autoindentstyle);
void QsciLexerNASM_SetColor(QsciLexerNASM* self, const QColor* c, int style);
void QsciLexerNASM_OnSetColor(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetColor(QsciLexerNASM* self, const QColor* c, int style);
void QsciLexerNASM_SetEolFill(QsciLexerNASM* self, bool eoffill, int style);
void QsciLexerNASM_OnSetEolFill(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetEolFill(QsciLexerNASM* self, bool eoffill, int style);
void QsciLexerNASM_SetFont(QsciLexerNASM* self, const QFont* f, int style);
void QsciLexerNASM_OnSetFont(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetFont(QsciLexerNASM* self, const QFont* f, int style);
void QsciLexerNASM_SetPaper(QsciLexerNASM* self, const QColor* c, int style);
void QsciLexerNASM_OnSetPaper(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseSetPaper(QsciLexerNASM* self, const QColor* c, int style);
bool QsciLexerNASM_ReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
void QsciLexerNASM_OnReadProperties(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerNASM_WriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
void QsciLexerNASM_OnWriteProperties(const QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseWriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerNASM_Event(QsciLexerNASM* self, QEvent* event);
void QsciLexerNASM_OnEvent(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseEvent(QsciLexerNASM* self, QEvent* event);
bool QsciLexerNASM_EventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event);
void QsciLexerNASM_OnEventFilter(QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseEventFilter(QsciLexerNASM* self, QObject* watched, QEvent* event);
void QsciLexerNASM_TimerEvent(QsciLexerNASM* self, QTimerEvent* event);
void QsciLexerNASM_OnTimerEvent(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseTimerEvent(QsciLexerNASM* self, QTimerEvent* event);
void QsciLexerNASM_ChildEvent(QsciLexerNASM* self, QChildEvent* event);
void QsciLexerNASM_OnChildEvent(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseChildEvent(QsciLexerNASM* self, QChildEvent* event);
void QsciLexerNASM_CustomEvent(QsciLexerNASM* self, QEvent* event);
void QsciLexerNASM_OnCustomEvent(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseCustomEvent(QsciLexerNASM* self, QEvent* event);
void QsciLexerNASM_ConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_OnConnectNotify(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_DisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_OnDisconnectNotify(QsciLexerNASM* self, intptr_t slot);
void QsciLexerNASM_QBaseDisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
libqt_string QsciLexerNASM_TextAsBytes(const QsciLexerNASM* self, const libqt_string text);
void QsciLexerNASM_OnTextAsBytes(const QsciLexerNASM* self, intptr_t slot);
libqt_string QsciLexerNASM_QBaseTextAsBytes(const QsciLexerNASM* self, const libqt_string text);
libqt_string QsciLexerNASM_BytesAsText(const QsciLexerNASM* self, const char* bytes, int size);
void QsciLexerNASM_OnBytesAsText(const QsciLexerNASM* self, intptr_t slot);
libqt_string QsciLexerNASM_QBaseBytesAsText(const QsciLexerNASM* self, const char* bytes, int size);
QObject* QsciLexerNASM_Sender(const QsciLexerNASM* self);
void QsciLexerNASM_OnSender(const QsciLexerNASM* self, intptr_t slot);
QObject* QsciLexerNASM_QBaseSender(const QsciLexerNASM* self);
int QsciLexerNASM_SenderSignalIndex(const QsciLexerNASM* self);
void QsciLexerNASM_OnSenderSignalIndex(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseSenderSignalIndex(const QsciLexerNASM* self);
int QsciLexerNASM_Receivers(const QsciLexerNASM* self, const char* signal);
void QsciLexerNASM_OnReceivers(const QsciLexerNASM* self, intptr_t slot);
int QsciLexerNASM_QBaseReceivers(const QsciLexerNASM* self, const char* signal);
bool QsciLexerNASM_IsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_OnIsSignalConnected(const QsciLexerNASM* self, intptr_t slot);
bool QsciLexerNASM_QBaseIsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal);
void QsciLexerNASM_Delete(QsciLexerNASM* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
