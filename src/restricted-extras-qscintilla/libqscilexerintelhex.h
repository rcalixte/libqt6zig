#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERINTELHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERINTELHEX_H

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
typedef struct QsciLexerHex QsciLexerHex;
typedef struct QsciLexerIntelHex QsciLexerIntelHex;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerIntelHex* QsciLexerIntelHex_new();
QsciLexerIntelHex* QsciLexerIntelHex_new2(QObject* parent);
QMetaObject* QsciLexerIntelHex_MetaObject(const QsciLexerIntelHex* self);
void* QsciLexerIntelHex_Metacast(QsciLexerIntelHex* self, const char* param1);
int QsciLexerIntelHex_Metacall(QsciLexerIntelHex* self, int param1, int param2, void** param3);
void QsciLexerIntelHex_OnMetacall(QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseMetacall(QsciLexerIntelHex* self, int param1, int param2, void** param3);
libqt_string QsciLexerIntelHex_Tr(const char* s);
const char* QsciLexerIntelHex_Language(const QsciLexerIntelHex* self);
const char* QsciLexerIntelHex_Lexer(const QsciLexerIntelHex* self);
libqt_string QsciLexerIntelHex_Description(const QsciLexerIntelHex* self, int style);
libqt_string QsciLexerIntelHex_Tr2(const char* s, const char* c);
libqt_string QsciLexerIntelHex_Tr3(const char* s, const char* c, int n);
int QsciLexerIntelHex_LexerId(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnLexerId(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseLexerId(const QsciLexerIntelHex* self);
const char* QsciLexerIntelHex_AutoCompletionFillups(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnAutoCompletionFillups(const QsciLexerIntelHex* self, intptr_t slot);
const char* QsciLexerIntelHex_QBaseAutoCompletionFillups(const QsciLexerIntelHex* self);
libqt_list /* of libqt_string */ QsciLexerIntelHex_AutoCompletionWordSeparators(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnAutoCompletionWordSeparators(const QsciLexerIntelHex* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerIntelHex_QBaseAutoCompletionWordSeparators(const QsciLexerIntelHex* self);
const char* QsciLexerIntelHex_BlockEnd(const QsciLexerIntelHex* self, int* style);
void QsciLexerIntelHex_OnBlockEnd(const QsciLexerIntelHex* self, intptr_t slot);
const char* QsciLexerIntelHex_QBaseBlockEnd(const QsciLexerIntelHex* self, int* style);
int QsciLexerIntelHex_BlockLookback(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnBlockLookback(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseBlockLookback(const QsciLexerIntelHex* self);
const char* QsciLexerIntelHex_BlockStart(const QsciLexerIntelHex* self, int* style);
void QsciLexerIntelHex_OnBlockStart(const QsciLexerIntelHex* self, intptr_t slot);
const char* QsciLexerIntelHex_QBaseBlockStart(const QsciLexerIntelHex* self, int* style);
const char* QsciLexerIntelHex_BlockStartKeyword(const QsciLexerIntelHex* self, int* style);
void QsciLexerIntelHex_OnBlockStartKeyword(const QsciLexerIntelHex* self, intptr_t slot);
const char* QsciLexerIntelHex_QBaseBlockStartKeyword(const QsciLexerIntelHex* self, int* style);
int QsciLexerIntelHex_BraceStyle(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnBraceStyle(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseBraceStyle(const QsciLexerIntelHex* self);
bool QsciLexerIntelHex_CaseSensitive(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnCaseSensitive(const QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseCaseSensitive(const QsciLexerIntelHex* self);
QColor* QsciLexerIntelHex_Color(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnColor(const QsciLexerIntelHex* self, intptr_t slot);
QColor* QsciLexerIntelHex_QBaseColor(const QsciLexerIntelHex* self, int style);
bool QsciLexerIntelHex_EolFill(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnEolFill(const QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseEolFill(const QsciLexerIntelHex* self, int style);
QFont* QsciLexerIntelHex_Font(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnFont(const QsciLexerIntelHex* self, intptr_t slot);
QFont* QsciLexerIntelHex_QBaseFont(const QsciLexerIntelHex* self, int style);
int QsciLexerIntelHex_IndentationGuideView(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnIndentationGuideView(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseIndentationGuideView(const QsciLexerIntelHex* self);
const char* QsciLexerIntelHex_Keywords(const QsciLexerIntelHex* self, int set);
void QsciLexerIntelHex_OnKeywords(const QsciLexerIntelHex* self, intptr_t slot);
const char* QsciLexerIntelHex_QBaseKeywords(const QsciLexerIntelHex* self, int set);
int QsciLexerIntelHex_DefaultStyle(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnDefaultStyle(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseDefaultStyle(const QsciLexerIntelHex* self);
QColor* QsciLexerIntelHex_Paper(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnPaper(const QsciLexerIntelHex* self, intptr_t slot);
QColor* QsciLexerIntelHex_QBasePaper(const QsciLexerIntelHex* self, int style);
QColor* QsciLexerIntelHex_DefaultColor2(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnDefaultColor2(const QsciLexerIntelHex* self, intptr_t slot);
QColor* QsciLexerIntelHex_QBaseDefaultColor2(const QsciLexerIntelHex* self, int style);
bool QsciLexerIntelHex_DefaultEolFill(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnDefaultEolFill(const QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseDefaultEolFill(const QsciLexerIntelHex* self, int style);
QFont* QsciLexerIntelHex_DefaultFont2(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnDefaultFont2(const QsciLexerIntelHex* self, intptr_t slot);
QFont* QsciLexerIntelHex_QBaseDefaultFont2(const QsciLexerIntelHex* self, int style);
QColor* QsciLexerIntelHex_DefaultPaper2(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_OnDefaultPaper2(const QsciLexerIntelHex* self, intptr_t slot);
QColor* QsciLexerIntelHex_QBaseDefaultPaper2(const QsciLexerIntelHex* self, int style);
void QsciLexerIntelHex_SetEditor(QsciLexerIntelHex* self, QsciScintilla* editor);
void QsciLexerIntelHex_OnSetEditor(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseSetEditor(QsciLexerIntelHex* self, QsciScintilla* editor);
void QsciLexerIntelHex_RefreshProperties(QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnRefreshProperties(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseRefreshProperties(QsciLexerIntelHex* self);
int QsciLexerIntelHex_StyleBitsNeeded(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnStyleBitsNeeded(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseStyleBitsNeeded(const QsciLexerIntelHex* self);
const char* QsciLexerIntelHex_WordCharacters(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnWordCharacters(const QsciLexerIntelHex* self, intptr_t slot);
const char* QsciLexerIntelHex_QBaseWordCharacters(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_SetAutoIndentStyle(QsciLexerIntelHex* self, int autoindentstyle);
void QsciLexerIntelHex_OnSetAutoIndentStyle(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseSetAutoIndentStyle(QsciLexerIntelHex* self, int autoindentstyle);
void QsciLexerIntelHex_SetColor(QsciLexerIntelHex* self, const QColor* c, int style);
void QsciLexerIntelHex_OnSetColor(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseSetColor(QsciLexerIntelHex* self, const QColor* c, int style);
void QsciLexerIntelHex_SetEolFill(QsciLexerIntelHex* self, bool eoffill, int style);
void QsciLexerIntelHex_OnSetEolFill(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseSetEolFill(QsciLexerIntelHex* self, bool eoffill, int style);
void QsciLexerIntelHex_SetFont(QsciLexerIntelHex* self, const QFont* f, int style);
void QsciLexerIntelHex_OnSetFont(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseSetFont(QsciLexerIntelHex* self, const QFont* f, int style);
void QsciLexerIntelHex_SetPaper(QsciLexerIntelHex* self, const QColor* c, int style);
void QsciLexerIntelHex_OnSetPaper(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseSetPaper(QsciLexerIntelHex* self, const QColor* c, int style);
bool QsciLexerIntelHex_ReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerIntelHex_OnReadProperties(QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerIntelHex_WriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerIntelHex_OnWriteProperties(const QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseWriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerIntelHex_Event(QsciLexerIntelHex* self, QEvent* event);
void QsciLexerIntelHex_OnEvent(QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseEvent(QsciLexerIntelHex* self, QEvent* event);
bool QsciLexerIntelHex_EventFilter(QsciLexerIntelHex* self, QObject* watched, QEvent* event);
void QsciLexerIntelHex_OnEventFilter(QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseEventFilter(QsciLexerIntelHex* self, QObject* watched, QEvent* event);
void QsciLexerIntelHex_TimerEvent(QsciLexerIntelHex* self, QTimerEvent* event);
void QsciLexerIntelHex_OnTimerEvent(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseTimerEvent(QsciLexerIntelHex* self, QTimerEvent* event);
void QsciLexerIntelHex_ChildEvent(QsciLexerIntelHex* self, QChildEvent* event);
void QsciLexerIntelHex_OnChildEvent(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseChildEvent(QsciLexerIntelHex* self, QChildEvent* event);
void QsciLexerIntelHex_CustomEvent(QsciLexerIntelHex* self, QEvent* event);
void QsciLexerIntelHex_OnCustomEvent(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseCustomEvent(QsciLexerIntelHex* self, QEvent* event);
void QsciLexerIntelHex_ConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
void QsciLexerIntelHex_OnConnectNotify(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
void QsciLexerIntelHex_DisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
void QsciLexerIntelHex_OnDisconnectNotify(QsciLexerIntelHex* self, intptr_t slot);
void QsciLexerIntelHex_QBaseDisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
libqt_string QsciLexerIntelHex_TextAsBytes(const QsciLexerIntelHex* self, const libqt_string text);
void QsciLexerIntelHex_OnTextAsBytes(const QsciLexerIntelHex* self, intptr_t slot);
libqt_string QsciLexerIntelHex_QBaseTextAsBytes(const QsciLexerIntelHex* self, const libqt_string text);
libqt_string QsciLexerIntelHex_BytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size);
void QsciLexerIntelHex_OnBytesAsText(const QsciLexerIntelHex* self, intptr_t slot);
libqt_string QsciLexerIntelHex_QBaseBytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size);
QObject* QsciLexerIntelHex_Sender(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnSender(const QsciLexerIntelHex* self, intptr_t slot);
QObject* QsciLexerIntelHex_QBaseSender(const QsciLexerIntelHex* self);
int QsciLexerIntelHex_SenderSignalIndex(const QsciLexerIntelHex* self);
void QsciLexerIntelHex_OnSenderSignalIndex(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseSenderSignalIndex(const QsciLexerIntelHex* self);
int QsciLexerIntelHex_Receivers(const QsciLexerIntelHex* self, const char* signal);
void QsciLexerIntelHex_OnReceivers(const QsciLexerIntelHex* self, intptr_t slot);
int QsciLexerIntelHex_QBaseReceivers(const QsciLexerIntelHex* self, const char* signal);
bool QsciLexerIntelHex_IsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal);
void QsciLexerIntelHex_OnIsSignalConnected(const QsciLexerIntelHex* self, intptr_t slot);
bool QsciLexerIntelHex_QBaseIsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal);
void QsciLexerIntelHex_Delete(QsciLexerIntelHex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
