#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPOV_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPOV_H

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
typedef struct QsciLexerPOV QsciLexerPOV;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPOV* QsciLexerPOV_new();
QsciLexerPOV* QsciLexerPOV_new2(QObject* parent);
QMetaObject* QsciLexerPOV_MetaObject(const QsciLexerPOV* self);
void* QsciLexerPOV_Metacast(QsciLexerPOV* self, const char* param1);
int QsciLexerPOV_Metacall(QsciLexerPOV* self, int param1, int param2, void** param3);
void QsciLexerPOV_OnMetacall(QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseMetacall(QsciLexerPOV* self, int param1, int param2, void** param3);
libqt_string QsciLexerPOV_Tr(const char* s);
const char* QsciLexerPOV_Language(const QsciLexerPOV* self);
const char* QsciLexerPOV_Lexer(const QsciLexerPOV* self);
int QsciLexerPOV_BraceStyle(const QsciLexerPOV* self);
const char* QsciLexerPOV_WordCharacters(const QsciLexerPOV* self);
QColor* QsciLexerPOV_DefaultColor(const QsciLexerPOV* self, int style);
bool QsciLexerPOV_DefaultEolFill(const QsciLexerPOV* self, int style);
QFont* QsciLexerPOV_DefaultFont(const QsciLexerPOV* self, int style);
QColor* QsciLexerPOV_DefaultPaper(const QsciLexerPOV* self, int style);
const char* QsciLexerPOV_Keywords(const QsciLexerPOV* self, int set);
libqt_string QsciLexerPOV_Description(const QsciLexerPOV* self, int style);
void QsciLexerPOV_RefreshProperties(QsciLexerPOV* self);
bool QsciLexerPOV_FoldComments(const QsciLexerPOV* self);
bool QsciLexerPOV_FoldCompact(const QsciLexerPOV* self);
bool QsciLexerPOV_FoldDirectives(const QsciLexerPOV* self);
void QsciLexerPOV_SetFoldComments(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_OnSetFoldComments(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetFoldComments(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_SetFoldCompact(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_OnSetFoldCompact(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetFoldCompact(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_SetFoldDirectives(QsciLexerPOV* self, bool fold);
void QsciLexerPOV_OnSetFoldDirectives(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetFoldDirectives(QsciLexerPOV* self, bool fold);
libqt_string QsciLexerPOV_Tr2(const char* s, const char* c);
libqt_string QsciLexerPOV_Tr3(const char* s, const char* c, int n);
int QsciLexerPOV_LexerId(const QsciLexerPOV* self);
void QsciLexerPOV_OnLexerId(const QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseLexerId(const QsciLexerPOV* self);
const char* QsciLexerPOV_AutoCompletionFillups(const QsciLexerPOV* self);
void QsciLexerPOV_OnAutoCompletionFillups(const QsciLexerPOV* self, intptr_t slot);
const char* QsciLexerPOV_QBaseAutoCompletionFillups(const QsciLexerPOV* self);
libqt_list /* of libqt_string */ QsciLexerPOV_AutoCompletionWordSeparators(const QsciLexerPOV* self);
void QsciLexerPOV_OnAutoCompletionWordSeparators(const QsciLexerPOV* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerPOV_QBaseAutoCompletionWordSeparators(const QsciLexerPOV* self);
const char* QsciLexerPOV_BlockEnd(const QsciLexerPOV* self, int* style);
void QsciLexerPOV_OnBlockEnd(const QsciLexerPOV* self, intptr_t slot);
const char* QsciLexerPOV_QBaseBlockEnd(const QsciLexerPOV* self, int* style);
int QsciLexerPOV_BlockLookback(const QsciLexerPOV* self);
void QsciLexerPOV_OnBlockLookback(const QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseBlockLookback(const QsciLexerPOV* self);
const char* QsciLexerPOV_BlockStart(const QsciLexerPOV* self, int* style);
void QsciLexerPOV_OnBlockStart(const QsciLexerPOV* self, intptr_t slot);
const char* QsciLexerPOV_QBaseBlockStart(const QsciLexerPOV* self, int* style);
const char* QsciLexerPOV_BlockStartKeyword(const QsciLexerPOV* self, int* style);
void QsciLexerPOV_OnBlockStartKeyword(const QsciLexerPOV* self, intptr_t slot);
const char* QsciLexerPOV_QBaseBlockStartKeyword(const QsciLexerPOV* self, int* style);
bool QsciLexerPOV_CaseSensitive(const QsciLexerPOV* self);
void QsciLexerPOV_OnCaseSensitive(const QsciLexerPOV* self, intptr_t slot);
bool QsciLexerPOV_QBaseCaseSensitive(const QsciLexerPOV* self);
QColor* QsciLexerPOV_Color(const QsciLexerPOV* self, int style);
void QsciLexerPOV_OnColor(const QsciLexerPOV* self, intptr_t slot);
QColor* QsciLexerPOV_QBaseColor(const QsciLexerPOV* self, int style);
bool QsciLexerPOV_EolFill(const QsciLexerPOV* self, int style);
void QsciLexerPOV_OnEolFill(const QsciLexerPOV* self, intptr_t slot);
bool QsciLexerPOV_QBaseEolFill(const QsciLexerPOV* self, int style);
QFont* QsciLexerPOV_Font(const QsciLexerPOV* self, int style);
void QsciLexerPOV_OnFont(const QsciLexerPOV* self, intptr_t slot);
QFont* QsciLexerPOV_QBaseFont(const QsciLexerPOV* self, int style);
int QsciLexerPOV_IndentationGuideView(const QsciLexerPOV* self);
void QsciLexerPOV_OnIndentationGuideView(const QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseIndentationGuideView(const QsciLexerPOV* self);
int QsciLexerPOV_DefaultStyle(const QsciLexerPOV* self);
void QsciLexerPOV_OnDefaultStyle(const QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseDefaultStyle(const QsciLexerPOV* self);
QColor* QsciLexerPOV_Paper(const QsciLexerPOV* self, int style);
void QsciLexerPOV_OnPaper(const QsciLexerPOV* self, intptr_t slot);
QColor* QsciLexerPOV_QBasePaper(const QsciLexerPOV* self, int style);
QColor* QsciLexerPOV_DefaultColor2(const QsciLexerPOV* self, int style);
void QsciLexerPOV_OnDefaultColor2(const QsciLexerPOV* self, intptr_t slot);
QColor* QsciLexerPOV_QBaseDefaultColor2(const QsciLexerPOV* self, int style);
QFont* QsciLexerPOV_DefaultFont2(const QsciLexerPOV* self, int style);
void QsciLexerPOV_OnDefaultFont2(const QsciLexerPOV* self, intptr_t slot);
QFont* QsciLexerPOV_QBaseDefaultFont2(const QsciLexerPOV* self, int style);
QColor* QsciLexerPOV_DefaultPaper2(const QsciLexerPOV* self, int style);
void QsciLexerPOV_OnDefaultPaper2(const QsciLexerPOV* self, intptr_t slot);
QColor* QsciLexerPOV_QBaseDefaultPaper2(const QsciLexerPOV* self, int style);
void QsciLexerPOV_SetEditor(QsciLexerPOV* self, QsciScintilla* editor);
void QsciLexerPOV_OnSetEditor(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetEditor(QsciLexerPOV* self, QsciScintilla* editor);
int QsciLexerPOV_StyleBitsNeeded(const QsciLexerPOV* self);
void QsciLexerPOV_OnStyleBitsNeeded(const QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseStyleBitsNeeded(const QsciLexerPOV* self);
void QsciLexerPOV_SetAutoIndentStyle(QsciLexerPOV* self, int autoindentstyle);
void QsciLexerPOV_OnSetAutoIndentStyle(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetAutoIndentStyle(QsciLexerPOV* self, int autoindentstyle);
void QsciLexerPOV_SetColor(QsciLexerPOV* self, const QColor* c, int style);
void QsciLexerPOV_OnSetColor(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetColor(QsciLexerPOV* self, const QColor* c, int style);
void QsciLexerPOV_SetEolFill(QsciLexerPOV* self, bool eoffill, int style);
void QsciLexerPOV_OnSetEolFill(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetEolFill(QsciLexerPOV* self, bool eoffill, int style);
void QsciLexerPOV_SetFont(QsciLexerPOV* self, const QFont* f, int style);
void QsciLexerPOV_OnSetFont(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetFont(QsciLexerPOV* self, const QFont* f, int style);
void QsciLexerPOV_SetPaper(QsciLexerPOV* self, const QColor* c, int style);
void QsciLexerPOV_OnSetPaper(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseSetPaper(QsciLexerPOV* self, const QColor* c, int style);
bool QsciLexerPOV_ReadProperties(QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPOV_OnReadProperties(QsciLexerPOV* self, intptr_t slot);
bool QsciLexerPOV_QBaseReadProperties(QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPOV_WriteProperties(const QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPOV_OnWriteProperties(const QsciLexerPOV* self, intptr_t slot);
bool QsciLexerPOV_QBaseWriteProperties(const QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPOV_Event(QsciLexerPOV* self, QEvent* event);
void QsciLexerPOV_OnEvent(QsciLexerPOV* self, intptr_t slot);
bool QsciLexerPOV_QBaseEvent(QsciLexerPOV* self, QEvent* event);
bool QsciLexerPOV_EventFilter(QsciLexerPOV* self, QObject* watched, QEvent* event);
void QsciLexerPOV_OnEventFilter(QsciLexerPOV* self, intptr_t slot);
bool QsciLexerPOV_QBaseEventFilter(QsciLexerPOV* self, QObject* watched, QEvent* event);
void QsciLexerPOV_TimerEvent(QsciLexerPOV* self, QTimerEvent* event);
void QsciLexerPOV_OnTimerEvent(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseTimerEvent(QsciLexerPOV* self, QTimerEvent* event);
void QsciLexerPOV_ChildEvent(QsciLexerPOV* self, QChildEvent* event);
void QsciLexerPOV_OnChildEvent(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseChildEvent(QsciLexerPOV* self, QChildEvent* event);
void QsciLexerPOV_CustomEvent(QsciLexerPOV* self, QEvent* event);
void QsciLexerPOV_OnCustomEvent(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseCustomEvent(QsciLexerPOV* self, QEvent* event);
void QsciLexerPOV_ConnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
void QsciLexerPOV_OnConnectNotify(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseConnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
void QsciLexerPOV_DisconnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
void QsciLexerPOV_OnDisconnectNotify(QsciLexerPOV* self, intptr_t slot);
void QsciLexerPOV_QBaseDisconnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
libqt_string QsciLexerPOV_TextAsBytes(const QsciLexerPOV* self, const libqt_string text);
void QsciLexerPOV_OnTextAsBytes(const QsciLexerPOV* self, intptr_t slot);
libqt_string QsciLexerPOV_QBaseTextAsBytes(const QsciLexerPOV* self, const libqt_string text);
libqt_string QsciLexerPOV_BytesAsText(const QsciLexerPOV* self, const char* bytes, int size);
void QsciLexerPOV_OnBytesAsText(const QsciLexerPOV* self, intptr_t slot);
libqt_string QsciLexerPOV_QBaseBytesAsText(const QsciLexerPOV* self, const char* bytes, int size);
QObject* QsciLexerPOV_Sender(const QsciLexerPOV* self);
void QsciLexerPOV_OnSender(const QsciLexerPOV* self, intptr_t slot);
QObject* QsciLexerPOV_QBaseSender(const QsciLexerPOV* self);
int QsciLexerPOV_SenderSignalIndex(const QsciLexerPOV* self);
void QsciLexerPOV_OnSenderSignalIndex(const QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseSenderSignalIndex(const QsciLexerPOV* self);
int QsciLexerPOV_Receivers(const QsciLexerPOV* self, const char* signal);
void QsciLexerPOV_OnReceivers(const QsciLexerPOV* self, intptr_t slot);
int QsciLexerPOV_QBaseReceivers(const QsciLexerPOV* self, const char* signal);
bool QsciLexerPOV_IsSignalConnected(const QsciLexerPOV* self, const QMetaMethod* signal);
void QsciLexerPOV_OnIsSignalConnected(const QsciLexerPOV* self, intptr_t slot);
bool QsciLexerPOV_QBaseIsSignalConnected(const QsciLexerPOV* self, const QMetaMethod* signal);
void QsciLexerPOV_Delete(QsciLexerPOV* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
