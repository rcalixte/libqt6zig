#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERLUA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERLUA_H

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
typedef struct QsciLexerLua QsciLexerLua;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerLua* QsciLexerLua_new();
QsciLexerLua* QsciLexerLua_new2(QObject* parent);
QMetaObject* QsciLexerLua_MetaObject(const QsciLexerLua* self);
void* QsciLexerLua_Metacast(QsciLexerLua* self, const char* param1);
int QsciLexerLua_Metacall(QsciLexerLua* self, int param1, int param2, void** param3);
void QsciLexerLua_OnMetacall(QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseMetacall(QsciLexerLua* self, int param1, int param2, void** param3);
libqt_string QsciLexerLua_Tr(const char* s);
const char* QsciLexerLua_Language(const QsciLexerLua* self);
const char* QsciLexerLua_Lexer(const QsciLexerLua* self);
libqt_list /* of libqt_string */ QsciLexerLua_AutoCompletionWordSeparators(const QsciLexerLua* self);
const char* QsciLexerLua_BlockStart(const QsciLexerLua* self);
int QsciLexerLua_BraceStyle(const QsciLexerLua* self);
QColor* QsciLexerLua_DefaultColor(const QsciLexerLua* self, int style);
bool QsciLexerLua_DefaultEolFill(const QsciLexerLua* self, int style);
QFont* QsciLexerLua_DefaultFont(const QsciLexerLua* self, int style);
QColor* QsciLexerLua_DefaultPaper(const QsciLexerLua* self, int style);
const char* QsciLexerLua_Keywords(const QsciLexerLua* self, int set);
libqt_string QsciLexerLua_Description(const QsciLexerLua* self, int style);
void QsciLexerLua_RefreshProperties(QsciLexerLua* self);
bool QsciLexerLua_FoldCompact(const QsciLexerLua* self);
void QsciLexerLua_SetFoldCompact(QsciLexerLua* self, bool fold);
void QsciLexerLua_OnSetFoldCompact(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseSetFoldCompact(QsciLexerLua* self, bool fold);
libqt_string QsciLexerLua_Tr2(const char* s, const char* c);
libqt_string QsciLexerLua_Tr3(const char* s, const char* c, int n);
const char* QsciLexerLua_BlockStart1(const QsciLexerLua* self, int* style);
int QsciLexerLua_LexerId(const QsciLexerLua* self);
void QsciLexerLua_OnLexerId(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseLexerId(const QsciLexerLua* self);
const char* QsciLexerLua_AutoCompletionFillups(const QsciLexerLua* self);
void QsciLexerLua_OnAutoCompletionFillups(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_QBaseAutoCompletionFillups(const QsciLexerLua* self);
const char* QsciLexerLua_BlockEnd(const QsciLexerLua* self, int* style);
void QsciLexerLua_OnBlockEnd(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_QBaseBlockEnd(const QsciLexerLua* self, int* style);
int QsciLexerLua_BlockLookback(const QsciLexerLua* self);
void QsciLexerLua_OnBlockLookback(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseBlockLookback(const QsciLexerLua* self);
const char* QsciLexerLua_BlockStartKeyword(const QsciLexerLua* self, int* style);
void QsciLexerLua_OnBlockStartKeyword(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_QBaseBlockStartKeyword(const QsciLexerLua* self, int* style);
bool QsciLexerLua_CaseSensitive(const QsciLexerLua* self);
void QsciLexerLua_OnCaseSensitive(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_QBaseCaseSensitive(const QsciLexerLua* self);
QColor* QsciLexerLua_Color(const QsciLexerLua* self, int style);
void QsciLexerLua_OnColor(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_QBaseColor(const QsciLexerLua* self, int style);
bool QsciLexerLua_EolFill(const QsciLexerLua* self, int style);
void QsciLexerLua_OnEolFill(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_QBaseEolFill(const QsciLexerLua* self, int style);
QFont* QsciLexerLua_Font(const QsciLexerLua* self, int style);
void QsciLexerLua_OnFont(const QsciLexerLua* self, intptr_t slot);
QFont* QsciLexerLua_QBaseFont(const QsciLexerLua* self, int style);
int QsciLexerLua_IndentationGuideView(const QsciLexerLua* self);
void QsciLexerLua_OnIndentationGuideView(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseIndentationGuideView(const QsciLexerLua* self);
int QsciLexerLua_DefaultStyle(const QsciLexerLua* self);
void QsciLexerLua_OnDefaultStyle(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseDefaultStyle(const QsciLexerLua* self);
QColor* QsciLexerLua_Paper(const QsciLexerLua* self, int style);
void QsciLexerLua_OnPaper(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_QBasePaper(const QsciLexerLua* self, int style);
QColor* QsciLexerLua_DefaultColor2(const QsciLexerLua* self, int style);
void QsciLexerLua_OnDefaultColor2(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_QBaseDefaultColor2(const QsciLexerLua* self, int style);
QFont* QsciLexerLua_DefaultFont2(const QsciLexerLua* self, int style);
void QsciLexerLua_OnDefaultFont2(const QsciLexerLua* self, intptr_t slot);
QFont* QsciLexerLua_QBaseDefaultFont2(const QsciLexerLua* self, int style);
QColor* QsciLexerLua_DefaultPaper2(const QsciLexerLua* self, int style);
void QsciLexerLua_OnDefaultPaper2(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_QBaseDefaultPaper2(const QsciLexerLua* self, int style);
void QsciLexerLua_SetEditor(QsciLexerLua* self, QsciScintilla* editor);
void QsciLexerLua_OnSetEditor(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseSetEditor(QsciLexerLua* self, QsciScintilla* editor);
int QsciLexerLua_StyleBitsNeeded(const QsciLexerLua* self);
void QsciLexerLua_OnStyleBitsNeeded(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseStyleBitsNeeded(const QsciLexerLua* self);
const char* QsciLexerLua_WordCharacters(const QsciLexerLua* self);
void QsciLexerLua_OnWordCharacters(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_QBaseWordCharacters(const QsciLexerLua* self);
void QsciLexerLua_SetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle);
void QsciLexerLua_OnSetAutoIndentStyle(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseSetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle);
void QsciLexerLua_SetColor(QsciLexerLua* self, const QColor* c, int style);
void QsciLexerLua_OnSetColor(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseSetColor(QsciLexerLua* self, const QColor* c, int style);
void QsciLexerLua_SetEolFill(QsciLexerLua* self, bool eoffill, int style);
void QsciLexerLua_OnSetEolFill(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseSetEolFill(QsciLexerLua* self, bool eoffill, int style);
void QsciLexerLua_SetFont(QsciLexerLua* self, const QFont* f, int style);
void QsciLexerLua_OnSetFont(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseSetFont(QsciLexerLua* self, const QFont* f, int style);
void QsciLexerLua_SetPaper(QsciLexerLua* self, const QColor* c, int style);
void QsciLexerLua_OnSetPaper(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseSetPaper(QsciLexerLua* self, const QColor* c, int style);
bool QsciLexerLua_ReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
void QsciLexerLua_OnReadProperties(QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_QBaseReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerLua_WriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
void QsciLexerLua_OnWriteProperties(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_QBaseWriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerLua_Event(QsciLexerLua* self, QEvent* event);
void QsciLexerLua_OnEvent(QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_QBaseEvent(QsciLexerLua* self, QEvent* event);
bool QsciLexerLua_EventFilter(QsciLexerLua* self, QObject* watched, QEvent* event);
void QsciLexerLua_OnEventFilter(QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_QBaseEventFilter(QsciLexerLua* self, QObject* watched, QEvent* event);
void QsciLexerLua_TimerEvent(QsciLexerLua* self, QTimerEvent* event);
void QsciLexerLua_OnTimerEvent(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseTimerEvent(QsciLexerLua* self, QTimerEvent* event);
void QsciLexerLua_ChildEvent(QsciLexerLua* self, QChildEvent* event);
void QsciLexerLua_OnChildEvent(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseChildEvent(QsciLexerLua* self, QChildEvent* event);
void QsciLexerLua_CustomEvent(QsciLexerLua* self, QEvent* event);
void QsciLexerLua_OnCustomEvent(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseCustomEvent(QsciLexerLua* self, QEvent* event);
void QsciLexerLua_ConnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_OnConnectNotify(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseConnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_DisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_OnDisconnectNotify(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_QBaseDisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
libqt_string QsciLexerLua_TextAsBytes(const QsciLexerLua* self, const libqt_string text);
void QsciLexerLua_OnTextAsBytes(const QsciLexerLua* self, intptr_t slot);
libqt_string QsciLexerLua_QBaseTextAsBytes(const QsciLexerLua* self, const libqt_string text);
libqt_string QsciLexerLua_BytesAsText(const QsciLexerLua* self, const char* bytes, int size);
void QsciLexerLua_OnBytesAsText(const QsciLexerLua* self, intptr_t slot);
libqt_string QsciLexerLua_QBaseBytesAsText(const QsciLexerLua* self, const char* bytes, int size);
QObject* QsciLexerLua_Sender(const QsciLexerLua* self);
void QsciLexerLua_OnSender(const QsciLexerLua* self, intptr_t slot);
QObject* QsciLexerLua_QBaseSender(const QsciLexerLua* self);
int QsciLexerLua_SenderSignalIndex(const QsciLexerLua* self);
void QsciLexerLua_OnSenderSignalIndex(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseSenderSignalIndex(const QsciLexerLua* self);
int QsciLexerLua_Receivers(const QsciLexerLua* self, const char* signal);
void QsciLexerLua_OnReceivers(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_QBaseReceivers(const QsciLexerLua* self, const char* signal);
bool QsciLexerLua_IsSignalConnected(const QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_OnIsSignalConnected(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_QBaseIsSignalConnected(const QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_Delete(QsciLexerLua* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
