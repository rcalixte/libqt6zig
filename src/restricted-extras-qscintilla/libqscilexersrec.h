#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSREC_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSREC_H

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
typedef struct QsciLexerSRec QsciLexerSRec;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSRec* QsciLexerSRec_new();
QsciLexerSRec* QsciLexerSRec_new2(QObject* parent);
QMetaObject* QsciLexerSRec_MetaObject(const QsciLexerSRec* self);
void* QsciLexerSRec_Metacast(QsciLexerSRec* self, const char* param1);
int QsciLexerSRec_Metacall(QsciLexerSRec* self, int param1, int param2, void** param3);
libqt_string QsciLexerSRec_Tr(const char* s);
const char* QsciLexerSRec_Language(const QsciLexerSRec* self);
const char* QsciLexerSRec_Lexer(const QsciLexerSRec* self);
libqt_string QsciLexerSRec_Description(const QsciLexerSRec* self, int style);
libqt_string QsciLexerSRec_Tr2(const char* s, const char* c);
libqt_string QsciLexerSRec_Tr3(const char* s, const char* c, int n);
void QsciLexerSRec_OnMetacall(QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseMetacall(QsciLexerSRec* self, int param1, int param2, void** param3);
int QsciLexerSRec_LexerId(const QsciLexerSRec* self);
void QsciLexerSRec_OnLexerId(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseLexerId(const QsciLexerSRec* self);
const char* QsciLexerSRec_AutoCompletionFillups(const QsciLexerSRec* self);
void QsciLexerSRec_OnAutoCompletionFillups(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_QBaseAutoCompletionFillups(const QsciLexerSRec* self);
libqt_list /* of libqt_string */ QsciLexerSRec_AutoCompletionWordSeparators(const QsciLexerSRec* self);
void QsciLexerSRec_OnAutoCompletionWordSeparators(const QsciLexerSRec* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerSRec_QBaseAutoCompletionWordSeparators(const QsciLexerSRec* self);
const char* QsciLexerSRec_BlockEnd(const QsciLexerSRec* self, int* style);
void QsciLexerSRec_OnBlockEnd(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_QBaseBlockEnd(const QsciLexerSRec* self, int* style);
int QsciLexerSRec_BlockLookback(const QsciLexerSRec* self);
void QsciLexerSRec_OnBlockLookback(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseBlockLookback(const QsciLexerSRec* self);
const char* QsciLexerSRec_BlockStart(const QsciLexerSRec* self, int* style);
void QsciLexerSRec_OnBlockStart(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_QBaseBlockStart(const QsciLexerSRec* self, int* style);
const char* QsciLexerSRec_BlockStartKeyword(const QsciLexerSRec* self, int* style);
void QsciLexerSRec_OnBlockStartKeyword(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_QBaseBlockStartKeyword(const QsciLexerSRec* self, int* style);
int QsciLexerSRec_BraceStyle(const QsciLexerSRec* self);
void QsciLexerSRec_OnBraceStyle(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseBraceStyle(const QsciLexerSRec* self);
bool QsciLexerSRec_CaseSensitive(const QsciLexerSRec* self);
void QsciLexerSRec_OnCaseSensitive(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseCaseSensitive(const QsciLexerSRec* self);
QColor* QsciLexerSRec_Color(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnColor(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_QBaseColor(const QsciLexerSRec* self, int style);
bool QsciLexerSRec_EolFill(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnEolFill(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseEolFill(const QsciLexerSRec* self, int style);
QFont* QsciLexerSRec_Font(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnFont(const QsciLexerSRec* self, intptr_t slot);
QFont* QsciLexerSRec_QBaseFont(const QsciLexerSRec* self, int style);
int QsciLexerSRec_IndentationGuideView(const QsciLexerSRec* self);
void QsciLexerSRec_OnIndentationGuideView(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseIndentationGuideView(const QsciLexerSRec* self);
const char* QsciLexerSRec_Keywords(const QsciLexerSRec* self, int set);
void QsciLexerSRec_OnKeywords(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_QBaseKeywords(const QsciLexerSRec* self, int set);
int QsciLexerSRec_DefaultStyle(const QsciLexerSRec* self);
void QsciLexerSRec_OnDefaultStyle(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseDefaultStyle(const QsciLexerSRec* self);
QColor* QsciLexerSRec_Paper(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnPaper(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_QBasePaper(const QsciLexerSRec* self, int style);
QColor* QsciLexerSRec_DefaultColor2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultColor2(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_QBaseDefaultColor2(const QsciLexerSRec* self, int style);
bool QsciLexerSRec_DefaultEolFill(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultEolFill(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseDefaultEolFill(const QsciLexerSRec* self, int style);
QFont* QsciLexerSRec_DefaultFont2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultFont2(const QsciLexerSRec* self, intptr_t slot);
QFont* QsciLexerSRec_QBaseDefaultFont2(const QsciLexerSRec* self, int style);
QColor* QsciLexerSRec_DefaultPaper2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultPaper2(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_QBaseDefaultPaper2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_SetEditor(QsciLexerSRec* self, QsciScintilla* editor);
void QsciLexerSRec_OnSetEditor(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseSetEditor(QsciLexerSRec* self, QsciScintilla* editor);
void QsciLexerSRec_RefreshProperties(QsciLexerSRec* self);
void QsciLexerSRec_OnRefreshProperties(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseRefreshProperties(QsciLexerSRec* self);
int QsciLexerSRec_StyleBitsNeeded(const QsciLexerSRec* self);
void QsciLexerSRec_OnStyleBitsNeeded(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseStyleBitsNeeded(const QsciLexerSRec* self);
const char* QsciLexerSRec_WordCharacters(const QsciLexerSRec* self);
void QsciLexerSRec_OnWordCharacters(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_QBaseWordCharacters(const QsciLexerSRec* self);
void QsciLexerSRec_SetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle);
void QsciLexerSRec_OnSetAutoIndentStyle(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseSetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle);
void QsciLexerSRec_SetColor(QsciLexerSRec* self, const QColor* c, int style);
void QsciLexerSRec_OnSetColor(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseSetColor(QsciLexerSRec* self, const QColor* c, int style);
void QsciLexerSRec_SetEolFill(QsciLexerSRec* self, bool eoffill, int style);
void QsciLexerSRec_OnSetEolFill(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseSetEolFill(QsciLexerSRec* self, bool eoffill, int style);
void QsciLexerSRec_SetFont(QsciLexerSRec* self, const QFont* f, int style);
void QsciLexerSRec_OnSetFont(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseSetFont(QsciLexerSRec* self, const QFont* f, int style);
void QsciLexerSRec_SetPaper(QsciLexerSRec* self, const QColor* c, int style);
void QsciLexerSRec_OnSetPaper(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseSetPaper(QsciLexerSRec* self, const QColor* c, int style);
bool QsciLexerSRec_ReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSRec_OnReadProperties(QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSRec_WriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSRec_OnWriteProperties(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseWriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSRec_Event(QsciLexerSRec* self, QEvent* event);
void QsciLexerSRec_OnEvent(QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseEvent(QsciLexerSRec* self, QEvent* event);
bool QsciLexerSRec_EventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event);
void QsciLexerSRec_OnEventFilter(QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseEventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event);
void QsciLexerSRec_TimerEvent(QsciLexerSRec* self, QTimerEvent* event);
void QsciLexerSRec_OnTimerEvent(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseTimerEvent(QsciLexerSRec* self, QTimerEvent* event);
void QsciLexerSRec_ChildEvent(QsciLexerSRec* self, QChildEvent* event);
void QsciLexerSRec_OnChildEvent(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseChildEvent(QsciLexerSRec* self, QChildEvent* event);
void QsciLexerSRec_CustomEvent(QsciLexerSRec* self, QEvent* event);
void QsciLexerSRec_OnCustomEvent(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseCustomEvent(QsciLexerSRec* self, QEvent* event);
void QsciLexerSRec_ConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_OnConnectNotify(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_DisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_OnDisconnectNotify(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_QBaseDisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
libqt_string QsciLexerSRec_TextAsBytes(const QsciLexerSRec* self, const libqt_string text);
void QsciLexerSRec_OnTextAsBytes(const QsciLexerSRec* self, intptr_t slot);
libqt_string QsciLexerSRec_QBaseTextAsBytes(const QsciLexerSRec* self, const libqt_string text);
libqt_string QsciLexerSRec_BytesAsText(const QsciLexerSRec* self, const char* bytes, int size);
void QsciLexerSRec_OnBytesAsText(const QsciLexerSRec* self, intptr_t slot);
libqt_string QsciLexerSRec_QBaseBytesAsText(const QsciLexerSRec* self, const char* bytes, int size);
QObject* QsciLexerSRec_Sender(const QsciLexerSRec* self);
void QsciLexerSRec_OnSender(const QsciLexerSRec* self, intptr_t slot);
QObject* QsciLexerSRec_QBaseSender(const QsciLexerSRec* self);
int QsciLexerSRec_SenderSignalIndex(const QsciLexerSRec* self);
void QsciLexerSRec_OnSenderSignalIndex(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseSenderSignalIndex(const QsciLexerSRec* self);
int QsciLexerSRec_Receivers(const QsciLexerSRec* self, const char* signal);
void QsciLexerSRec_OnReceivers(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_QBaseReceivers(const QsciLexerSRec* self, const char* signal);
bool QsciLexerSRec_IsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_OnIsSignalConnected(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_QBaseIsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_Delete(QsciLexerSRec* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
