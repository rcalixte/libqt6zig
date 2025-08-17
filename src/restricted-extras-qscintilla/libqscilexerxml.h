#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERXML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERXML_H

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
typedef struct QsciLexerHTML QsciLexerHTML;
typedef struct QsciLexerXML QsciLexerXML;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerXML* QsciLexerXML_new();
QsciLexerXML* QsciLexerXML_new2(QObject* parent);
QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self);
void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1);
int QsciLexerXML_Metacall(QsciLexerXML* self, int param1, int param2, void** param3);
void QsciLexerXML_OnMetacall(QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseMetacall(QsciLexerXML* self, int param1, int param2, void** param3);
libqt_string QsciLexerXML_Tr(const char* s);
const char* QsciLexerXML_Language(const QsciLexerXML* self);
const char* QsciLexerXML_Lexer(const QsciLexerXML* self);
QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style);
bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style);
QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style);
QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style);
const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set);
void QsciLexerXML_RefreshProperties(QsciLexerXML* self);
void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled);
bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self);
libqt_string QsciLexerXML_Tr2(const char* s, const char* c);
libqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n);
void QsciLexerXML_SetFoldCompact(QsciLexerXML* self, bool fold);
void QsciLexerXML_OnSetFoldCompact(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetFoldCompact(QsciLexerXML* self, bool fold);
void QsciLexerXML_SetFoldPreprocessor(QsciLexerXML* self, bool fold);
void QsciLexerXML_OnSetFoldPreprocessor(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetFoldPreprocessor(QsciLexerXML* self, bool fold);
void QsciLexerXML_SetCaseSensitiveTags(QsciLexerXML* self, bool sens);
void QsciLexerXML_OnSetCaseSensitiveTags(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetCaseSensitiveTags(QsciLexerXML* self, bool sens);
int QsciLexerXML_LexerId(const QsciLexerXML* self);
void QsciLexerXML_OnLexerId(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseLexerId(const QsciLexerXML* self);
const char* QsciLexerXML_AutoCompletionFillups(const QsciLexerXML* self);
void QsciLexerXML_OnAutoCompletionFillups(const QsciLexerXML* self, intptr_t slot);
const char* QsciLexerXML_QBaseAutoCompletionFillups(const QsciLexerXML* self);
libqt_list /* of libqt_string */ QsciLexerXML_AutoCompletionWordSeparators(const QsciLexerXML* self);
void QsciLexerXML_OnAutoCompletionWordSeparators(const QsciLexerXML* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerXML_QBaseAutoCompletionWordSeparators(const QsciLexerXML* self);
const char* QsciLexerXML_BlockEnd(const QsciLexerXML* self, int* style);
void QsciLexerXML_OnBlockEnd(const QsciLexerXML* self, intptr_t slot);
const char* QsciLexerXML_QBaseBlockEnd(const QsciLexerXML* self, int* style);
int QsciLexerXML_BlockLookback(const QsciLexerXML* self);
void QsciLexerXML_OnBlockLookback(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseBlockLookback(const QsciLexerXML* self);
const char* QsciLexerXML_BlockStart(const QsciLexerXML* self, int* style);
void QsciLexerXML_OnBlockStart(const QsciLexerXML* self, intptr_t slot);
const char* QsciLexerXML_QBaseBlockStart(const QsciLexerXML* self, int* style);
const char* QsciLexerXML_BlockStartKeyword(const QsciLexerXML* self, int* style);
void QsciLexerXML_OnBlockStartKeyword(const QsciLexerXML* self, intptr_t slot);
const char* QsciLexerXML_QBaseBlockStartKeyword(const QsciLexerXML* self, int* style);
int QsciLexerXML_BraceStyle(const QsciLexerXML* self);
void QsciLexerXML_OnBraceStyle(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseBraceStyle(const QsciLexerXML* self);
bool QsciLexerXML_CaseSensitive(const QsciLexerXML* self);
void QsciLexerXML_OnCaseSensitive(const QsciLexerXML* self, intptr_t slot);
bool QsciLexerXML_QBaseCaseSensitive(const QsciLexerXML* self);
QColor* QsciLexerXML_Color(const QsciLexerXML* self, int style);
void QsciLexerXML_OnColor(const QsciLexerXML* self, intptr_t slot);
QColor* QsciLexerXML_QBaseColor(const QsciLexerXML* self, int style);
bool QsciLexerXML_EolFill(const QsciLexerXML* self, int style);
void QsciLexerXML_OnEolFill(const QsciLexerXML* self, intptr_t slot);
bool QsciLexerXML_QBaseEolFill(const QsciLexerXML* self, int style);
QFont* QsciLexerXML_Font(const QsciLexerXML* self, int style);
void QsciLexerXML_OnFont(const QsciLexerXML* self, intptr_t slot);
QFont* QsciLexerXML_QBaseFont(const QsciLexerXML* self, int style);
int QsciLexerXML_IndentationGuideView(const QsciLexerXML* self);
void QsciLexerXML_OnIndentationGuideView(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseIndentationGuideView(const QsciLexerXML* self);
int QsciLexerXML_DefaultStyle(const QsciLexerXML* self);
void QsciLexerXML_OnDefaultStyle(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseDefaultStyle(const QsciLexerXML* self);
libqt_string QsciLexerXML_Description(const QsciLexerXML* self, int style);
void QsciLexerXML_OnDescription(const QsciLexerXML* self, intptr_t slot);
libqt_string QsciLexerXML_QBaseDescription(const QsciLexerXML* self, int style);
QColor* QsciLexerXML_Paper(const QsciLexerXML* self, int style);
void QsciLexerXML_OnPaper(const QsciLexerXML* self, intptr_t slot);
QColor* QsciLexerXML_QBasePaper(const QsciLexerXML* self, int style);
QColor* QsciLexerXML_DefaultColor2(const QsciLexerXML* self, int style);
void QsciLexerXML_OnDefaultColor2(const QsciLexerXML* self, intptr_t slot);
QColor* QsciLexerXML_QBaseDefaultColor2(const QsciLexerXML* self, int style);
QFont* QsciLexerXML_DefaultFont2(const QsciLexerXML* self, int style);
void QsciLexerXML_OnDefaultFont2(const QsciLexerXML* self, intptr_t slot);
QFont* QsciLexerXML_QBaseDefaultFont2(const QsciLexerXML* self, int style);
QColor* QsciLexerXML_DefaultPaper2(const QsciLexerXML* self, int style);
void QsciLexerXML_OnDefaultPaper2(const QsciLexerXML* self, intptr_t slot);
QColor* QsciLexerXML_QBaseDefaultPaper2(const QsciLexerXML* self, int style);
void QsciLexerXML_SetEditor(QsciLexerXML* self, QsciScintilla* editor);
void QsciLexerXML_OnSetEditor(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetEditor(QsciLexerXML* self, QsciScintilla* editor);
int QsciLexerXML_StyleBitsNeeded(const QsciLexerXML* self);
void QsciLexerXML_OnStyleBitsNeeded(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseStyleBitsNeeded(const QsciLexerXML* self);
const char* QsciLexerXML_WordCharacters(const QsciLexerXML* self);
void QsciLexerXML_OnWordCharacters(const QsciLexerXML* self, intptr_t slot);
const char* QsciLexerXML_QBaseWordCharacters(const QsciLexerXML* self);
void QsciLexerXML_SetAutoIndentStyle(QsciLexerXML* self, int autoindentstyle);
void QsciLexerXML_OnSetAutoIndentStyle(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetAutoIndentStyle(QsciLexerXML* self, int autoindentstyle);
void QsciLexerXML_SetColor(QsciLexerXML* self, const QColor* c, int style);
void QsciLexerXML_OnSetColor(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetColor(QsciLexerXML* self, const QColor* c, int style);
void QsciLexerXML_SetEolFill(QsciLexerXML* self, bool eoffill, int style);
void QsciLexerXML_OnSetEolFill(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetEolFill(QsciLexerXML* self, bool eoffill, int style);
void QsciLexerXML_SetFont(QsciLexerXML* self, const QFont* f, int style);
void QsciLexerXML_OnSetFont(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetFont(QsciLexerXML* self, const QFont* f, int style);
void QsciLexerXML_SetPaper(QsciLexerXML* self, const QColor* c, int style);
void QsciLexerXML_OnSetPaper(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseSetPaper(QsciLexerXML* self, const QColor* c, int style);
bool QsciLexerXML_ReadProperties(QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
void QsciLexerXML_OnReadProperties(QsciLexerXML* self, intptr_t slot);
bool QsciLexerXML_QBaseReadProperties(QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerXML_WriteProperties(const QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
void QsciLexerXML_OnWriteProperties(const QsciLexerXML* self, intptr_t slot);
bool QsciLexerXML_QBaseWriteProperties(const QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerXML_Event(QsciLexerXML* self, QEvent* event);
void QsciLexerXML_OnEvent(QsciLexerXML* self, intptr_t slot);
bool QsciLexerXML_QBaseEvent(QsciLexerXML* self, QEvent* event);
bool QsciLexerXML_EventFilter(QsciLexerXML* self, QObject* watched, QEvent* event);
void QsciLexerXML_OnEventFilter(QsciLexerXML* self, intptr_t slot);
bool QsciLexerXML_QBaseEventFilter(QsciLexerXML* self, QObject* watched, QEvent* event);
void QsciLexerXML_TimerEvent(QsciLexerXML* self, QTimerEvent* event);
void QsciLexerXML_OnTimerEvent(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseTimerEvent(QsciLexerXML* self, QTimerEvent* event);
void QsciLexerXML_ChildEvent(QsciLexerXML* self, QChildEvent* event);
void QsciLexerXML_OnChildEvent(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseChildEvent(QsciLexerXML* self, QChildEvent* event);
void QsciLexerXML_CustomEvent(QsciLexerXML* self, QEvent* event);
void QsciLexerXML_OnCustomEvent(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseCustomEvent(QsciLexerXML* self, QEvent* event);
void QsciLexerXML_ConnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
void QsciLexerXML_OnConnectNotify(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseConnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
void QsciLexerXML_DisconnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
void QsciLexerXML_OnDisconnectNotify(QsciLexerXML* self, intptr_t slot);
void QsciLexerXML_QBaseDisconnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
libqt_string QsciLexerXML_TextAsBytes(const QsciLexerXML* self, const libqt_string text);
void QsciLexerXML_OnTextAsBytes(const QsciLexerXML* self, intptr_t slot);
libqt_string QsciLexerXML_QBaseTextAsBytes(const QsciLexerXML* self, const libqt_string text);
libqt_string QsciLexerXML_BytesAsText(const QsciLexerXML* self, const char* bytes, int size);
void QsciLexerXML_OnBytesAsText(const QsciLexerXML* self, intptr_t slot);
libqt_string QsciLexerXML_QBaseBytesAsText(const QsciLexerXML* self, const char* bytes, int size);
QObject* QsciLexerXML_Sender(const QsciLexerXML* self);
void QsciLexerXML_OnSender(const QsciLexerXML* self, intptr_t slot);
QObject* QsciLexerXML_QBaseSender(const QsciLexerXML* self);
int QsciLexerXML_SenderSignalIndex(const QsciLexerXML* self);
void QsciLexerXML_OnSenderSignalIndex(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseSenderSignalIndex(const QsciLexerXML* self);
int QsciLexerXML_Receivers(const QsciLexerXML* self, const char* signal);
void QsciLexerXML_OnReceivers(const QsciLexerXML* self, intptr_t slot);
int QsciLexerXML_QBaseReceivers(const QsciLexerXML* self, const char* signal);
bool QsciLexerXML_IsSignalConnected(const QsciLexerXML* self, const QMetaMethod* signal);
void QsciLexerXML_OnIsSignalConnected(const QsciLexerXML* self, intptr_t slot);
bool QsciLexerXML_QBaseIsSignalConnected(const QsciLexerXML* self, const QMetaMethod* signal);
void QsciLexerXML_Delete(QsciLexerXML* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
