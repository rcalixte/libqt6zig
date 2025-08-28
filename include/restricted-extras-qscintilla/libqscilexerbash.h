#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBASH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERBASH_H

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
typedef struct QsciLexerBash QsciLexerBash;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerBash* QsciLexerBash_new();
QsciLexerBash* QsciLexerBash_new2(QObject* parent);
QMetaObject* QsciLexerBash_MetaObject(const QsciLexerBash* self);
void* QsciLexerBash_Metacast(QsciLexerBash* self, const char* param1);
int QsciLexerBash_Metacall(QsciLexerBash* self, int param1, int param2, void** param3);
libqt_string QsciLexerBash_Tr(const char* s);
const char* QsciLexerBash_Language(const QsciLexerBash* self);
const char* QsciLexerBash_Lexer(const QsciLexerBash* self);
int QsciLexerBash_BraceStyle(const QsciLexerBash* self);
const char* QsciLexerBash_WordCharacters(const QsciLexerBash* self);
QColor* QsciLexerBash_DefaultColor(const QsciLexerBash* self, int style);
bool QsciLexerBash_DefaultEolFill(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_DefaultFont(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_DefaultPaper(const QsciLexerBash* self, int style);
const char* QsciLexerBash_Keywords(const QsciLexerBash* self, int set);
libqt_string QsciLexerBash_Description(const QsciLexerBash* self, int style);
void QsciLexerBash_RefreshProperties(QsciLexerBash* self);
bool QsciLexerBash_FoldComments(const QsciLexerBash* self);
bool QsciLexerBash_FoldCompact(const QsciLexerBash* self);
void QsciLexerBash_SetFoldComments(QsciLexerBash* self, bool fold);
void QsciLexerBash_SetFoldCompact(QsciLexerBash* self, bool fold);
libqt_string QsciLexerBash_Tr2(const char* s, const char* c);
libqt_string QsciLexerBash_Tr3(const char* s, const char* c, int n);
void QsciLexerBash_OnMetacall(QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseMetacall(QsciLexerBash* self, int param1, int param2, void** param3);
void QsciLexerBash_OnSetFoldComments(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetFoldComments(QsciLexerBash* self, bool fold);
void QsciLexerBash_OnSetFoldCompact(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetFoldCompact(QsciLexerBash* self, bool fold);
int QsciLexerBash_LexerId(const QsciLexerBash* self);
void QsciLexerBash_OnLexerId(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseLexerId(const QsciLexerBash* self);
const char* QsciLexerBash_AutoCompletionFillups(const QsciLexerBash* self);
void QsciLexerBash_OnAutoCompletionFillups(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_QBaseAutoCompletionFillups(const QsciLexerBash* self);
libqt_list /* of libqt_string */ QsciLexerBash_AutoCompletionWordSeparators(const QsciLexerBash* self);
void QsciLexerBash_OnAutoCompletionWordSeparators(const QsciLexerBash* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerBash_QBaseAutoCompletionWordSeparators(const QsciLexerBash* self);
const char* QsciLexerBash_BlockEnd(const QsciLexerBash* self, int* style);
void QsciLexerBash_OnBlockEnd(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_QBaseBlockEnd(const QsciLexerBash* self, int* style);
int QsciLexerBash_BlockLookback(const QsciLexerBash* self);
void QsciLexerBash_OnBlockLookback(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseBlockLookback(const QsciLexerBash* self);
const char* QsciLexerBash_BlockStart(const QsciLexerBash* self, int* style);
void QsciLexerBash_OnBlockStart(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_QBaseBlockStart(const QsciLexerBash* self, int* style);
const char* QsciLexerBash_BlockStartKeyword(const QsciLexerBash* self, int* style);
void QsciLexerBash_OnBlockStartKeyword(const QsciLexerBash* self, intptr_t slot);
const char* QsciLexerBash_QBaseBlockStartKeyword(const QsciLexerBash* self, int* style);
bool QsciLexerBash_CaseSensitive(const QsciLexerBash* self);
void QsciLexerBash_OnCaseSensitive(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_QBaseCaseSensitive(const QsciLexerBash* self);
QColor* QsciLexerBash_Color(const QsciLexerBash* self, int style);
void QsciLexerBash_OnColor(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_QBaseColor(const QsciLexerBash* self, int style);
bool QsciLexerBash_EolFill(const QsciLexerBash* self, int style);
void QsciLexerBash_OnEolFill(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_QBaseEolFill(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_Font(const QsciLexerBash* self, int style);
void QsciLexerBash_OnFont(const QsciLexerBash* self, intptr_t slot);
QFont* QsciLexerBash_QBaseFont(const QsciLexerBash* self, int style);
int QsciLexerBash_IndentationGuideView(const QsciLexerBash* self);
void QsciLexerBash_OnIndentationGuideView(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseIndentationGuideView(const QsciLexerBash* self);
int QsciLexerBash_DefaultStyle(const QsciLexerBash* self);
void QsciLexerBash_OnDefaultStyle(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseDefaultStyle(const QsciLexerBash* self);
QColor* QsciLexerBash_Paper(const QsciLexerBash* self, int style);
void QsciLexerBash_OnPaper(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_QBasePaper(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_DefaultColor2(const QsciLexerBash* self, int style);
void QsciLexerBash_OnDefaultColor2(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_QBaseDefaultColor2(const QsciLexerBash* self, int style);
QFont* QsciLexerBash_DefaultFont2(const QsciLexerBash* self, int style);
void QsciLexerBash_OnDefaultFont2(const QsciLexerBash* self, intptr_t slot);
QFont* QsciLexerBash_QBaseDefaultFont2(const QsciLexerBash* self, int style);
QColor* QsciLexerBash_DefaultPaper2(const QsciLexerBash* self, int style);
void QsciLexerBash_OnDefaultPaper2(const QsciLexerBash* self, intptr_t slot);
QColor* QsciLexerBash_QBaseDefaultPaper2(const QsciLexerBash* self, int style);
void QsciLexerBash_SetEditor(QsciLexerBash* self, QsciScintilla* editor);
void QsciLexerBash_OnSetEditor(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetEditor(QsciLexerBash* self, QsciScintilla* editor);
int QsciLexerBash_StyleBitsNeeded(const QsciLexerBash* self);
void QsciLexerBash_OnStyleBitsNeeded(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseStyleBitsNeeded(const QsciLexerBash* self);
void QsciLexerBash_SetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle);
void QsciLexerBash_OnSetAutoIndentStyle(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle);
void QsciLexerBash_SetColor(QsciLexerBash* self, const QColor* c, int style);
void QsciLexerBash_OnSetColor(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetColor(QsciLexerBash* self, const QColor* c, int style);
void QsciLexerBash_SetEolFill(QsciLexerBash* self, bool eoffill, int style);
void QsciLexerBash_OnSetEolFill(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetEolFill(QsciLexerBash* self, bool eoffill, int style);
void QsciLexerBash_SetFont(QsciLexerBash* self, const QFont* f, int style);
void QsciLexerBash_OnSetFont(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetFont(QsciLexerBash* self, const QFont* f, int style);
void QsciLexerBash_SetPaper(QsciLexerBash* self, const QColor* c, int style);
void QsciLexerBash_OnSetPaper(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseSetPaper(QsciLexerBash* self, const QColor* c, int style);
bool QsciLexerBash_ReadProperties(QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBash_OnReadProperties(QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_QBaseReadProperties(QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBash_WriteProperties(const QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
void QsciLexerBash_OnWriteProperties(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_QBaseWriteProperties(const QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerBash_Event(QsciLexerBash* self, QEvent* event);
void QsciLexerBash_OnEvent(QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_QBaseEvent(QsciLexerBash* self, QEvent* event);
bool QsciLexerBash_EventFilter(QsciLexerBash* self, QObject* watched, QEvent* event);
void QsciLexerBash_OnEventFilter(QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_QBaseEventFilter(QsciLexerBash* self, QObject* watched, QEvent* event);
void QsciLexerBash_TimerEvent(QsciLexerBash* self, QTimerEvent* event);
void QsciLexerBash_OnTimerEvent(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseTimerEvent(QsciLexerBash* self, QTimerEvent* event);
void QsciLexerBash_ChildEvent(QsciLexerBash* self, QChildEvent* event);
void QsciLexerBash_OnChildEvent(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseChildEvent(QsciLexerBash* self, QChildEvent* event);
void QsciLexerBash_CustomEvent(QsciLexerBash* self, QEvent* event);
void QsciLexerBash_OnCustomEvent(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseCustomEvent(QsciLexerBash* self, QEvent* event);
void QsciLexerBash_ConnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_OnConnectNotify(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseConnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_DisconnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_OnDisconnectNotify(QsciLexerBash* self, intptr_t slot);
void QsciLexerBash_QBaseDisconnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
libqt_string QsciLexerBash_TextAsBytes(const QsciLexerBash* self, const libqt_string text);
void QsciLexerBash_OnTextAsBytes(const QsciLexerBash* self, intptr_t slot);
libqt_string QsciLexerBash_QBaseTextAsBytes(const QsciLexerBash* self, const libqt_string text);
libqt_string QsciLexerBash_BytesAsText(const QsciLexerBash* self, const char* bytes, int size);
void QsciLexerBash_OnBytesAsText(const QsciLexerBash* self, intptr_t slot);
libqt_string QsciLexerBash_QBaseBytesAsText(const QsciLexerBash* self, const char* bytes, int size);
QObject* QsciLexerBash_Sender(const QsciLexerBash* self);
void QsciLexerBash_OnSender(const QsciLexerBash* self, intptr_t slot);
QObject* QsciLexerBash_QBaseSender(const QsciLexerBash* self);
int QsciLexerBash_SenderSignalIndex(const QsciLexerBash* self);
void QsciLexerBash_OnSenderSignalIndex(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseSenderSignalIndex(const QsciLexerBash* self);
int QsciLexerBash_Receivers(const QsciLexerBash* self, const char* signal);
void QsciLexerBash_OnReceivers(const QsciLexerBash* self, intptr_t slot);
int QsciLexerBash_QBaseReceivers(const QsciLexerBash* self, const char* signal);
bool QsciLexerBash_IsSignalConnected(const QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_OnIsSignalConnected(const QsciLexerBash* self, intptr_t slot);
bool QsciLexerBash_QBaseIsSignalConnected(const QsciLexerBash* self, const QMetaMethod* signal);
void QsciLexerBash_Delete(QsciLexerBash* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
