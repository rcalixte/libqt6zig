#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEROCTAVE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEROCTAVE_H

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
typedef struct QsciLexerMatlab QsciLexerMatlab;
typedef struct QsciLexerOctave QsciLexerOctave;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerOctave* QsciLexerOctave_new();
QsciLexerOctave* QsciLexerOctave_new2(QObject* parent);
QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self);
void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1);
int QsciLexerOctave_Metacall(QsciLexerOctave* self, int param1, int param2, void** param3);
void QsciLexerOctave_OnMetacall(QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseMetacall(QsciLexerOctave* self, int param1, int param2, void** param3);
libqt_string QsciLexerOctave_Tr(const char* s);
const char* QsciLexerOctave_Language(const QsciLexerOctave* self);
const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self);
const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set);
libqt_string QsciLexerOctave_Tr2(const char* s, const char* c);
libqt_string QsciLexerOctave_Tr3(const char* s, const char* c, int n);
int QsciLexerOctave_LexerId(const QsciLexerOctave* self);
void QsciLexerOctave_OnLexerId(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseLexerId(const QsciLexerOctave* self);
const char* QsciLexerOctave_AutoCompletionFillups(const QsciLexerOctave* self);
void QsciLexerOctave_OnAutoCompletionFillups(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_QBaseAutoCompletionFillups(const QsciLexerOctave* self);
libqt_list /* of libqt_string */ QsciLexerOctave_AutoCompletionWordSeparators(const QsciLexerOctave* self);
void QsciLexerOctave_OnAutoCompletionWordSeparators(const QsciLexerOctave* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerOctave_QBaseAutoCompletionWordSeparators(const QsciLexerOctave* self);
const char* QsciLexerOctave_BlockEnd(const QsciLexerOctave* self, int* style);
void QsciLexerOctave_OnBlockEnd(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_QBaseBlockEnd(const QsciLexerOctave* self, int* style);
int QsciLexerOctave_BlockLookback(const QsciLexerOctave* self);
void QsciLexerOctave_OnBlockLookback(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseBlockLookback(const QsciLexerOctave* self);
const char* QsciLexerOctave_BlockStart(const QsciLexerOctave* self, int* style);
void QsciLexerOctave_OnBlockStart(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_QBaseBlockStart(const QsciLexerOctave* self, int* style);
const char* QsciLexerOctave_BlockStartKeyword(const QsciLexerOctave* self, int* style);
void QsciLexerOctave_OnBlockStartKeyword(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_QBaseBlockStartKeyword(const QsciLexerOctave* self, int* style);
int QsciLexerOctave_BraceStyle(const QsciLexerOctave* self);
void QsciLexerOctave_OnBraceStyle(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseBraceStyle(const QsciLexerOctave* self);
bool QsciLexerOctave_CaseSensitive(const QsciLexerOctave* self);
void QsciLexerOctave_OnCaseSensitive(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseCaseSensitive(const QsciLexerOctave* self);
QColor* QsciLexerOctave_Color(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnColor(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_QBaseColor(const QsciLexerOctave* self, int style);
bool QsciLexerOctave_EolFill(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnEolFill(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseEolFill(const QsciLexerOctave* self, int style);
QFont* QsciLexerOctave_Font(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnFont(const QsciLexerOctave* self, intptr_t slot);
QFont* QsciLexerOctave_QBaseFont(const QsciLexerOctave* self, int style);
int QsciLexerOctave_IndentationGuideView(const QsciLexerOctave* self);
void QsciLexerOctave_OnIndentationGuideView(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseIndentationGuideView(const QsciLexerOctave* self);
int QsciLexerOctave_DefaultStyle(const QsciLexerOctave* self);
void QsciLexerOctave_OnDefaultStyle(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseDefaultStyle(const QsciLexerOctave* self);
libqt_string QsciLexerOctave_Description(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDescription(const QsciLexerOctave* self, intptr_t slot);
libqt_string QsciLexerOctave_QBaseDescription(const QsciLexerOctave* self, int style);
QColor* QsciLexerOctave_Paper(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnPaper(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_QBasePaper(const QsciLexerOctave* self, int style);
QColor* QsciLexerOctave_DefaultColorWithStyle(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultColorWithStyle(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_QBaseDefaultColorWithStyle(const QsciLexerOctave* self, int style);
bool QsciLexerOctave_DefaultEolFill(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultEolFill(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseDefaultEolFill(const QsciLexerOctave* self, int style);
QFont* QsciLexerOctave_DefaultFontWithStyle(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultFontWithStyle(const QsciLexerOctave* self, intptr_t slot);
QFont* QsciLexerOctave_QBaseDefaultFontWithStyle(const QsciLexerOctave* self, int style);
QColor* QsciLexerOctave_DefaultPaperWithStyle(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultPaperWithStyle(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_QBaseDefaultPaperWithStyle(const QsciLexerOctave* self, int style);
void QsciLexerOctave_SetEditor(QsciLexerOctave* self, QsciScintilla* editor);
void QsciLexerOctave_OnSetEditor(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseSetEditor(QsciLexerOctave* self, QsciScintilla* editor);
void QsciLexerOctave_RefreshProperties(QsciLexerOctave* self);
void QsciLexerOctave_OnRefreshProperties(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseRefreshProperties(QsciLexerOctave* self);
int QsciLexerOctave_StyleBitsNeeded(const QsciLexerOctave* self);
void QsciLexerOctave_OnStyleBitsNeeded(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseStyleBitsNeeded(const QsciLexerOctave* self);
const char* QsciLexerOctave_WordCharacters(const QsciLexerOctave* self);
void QsciLexerOctave_OnWordCharacters(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_QBaseWordCharacters(const QsciLexerOctave* self);
void QsciLexerOctave_SetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle);
void QsciLexerOctave_OnSetAutoIndentStyle(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseSetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle);
void QsciLexerOctave_SetColor(QsciLexerOctave* self, const QColor* c, int style);
void QsciLexerOctave_OnSetColor(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseSetColor(QsciLexerOctave* self, const QColor* c, int style);
void QsciLexerOctave_SetEolFill(QsciLexerOctave* self, bool eoffill, int style);
void QsciLexerOctave_OnSetEolFill(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseSetEolFill(QsciLexerOctave* self, bool eoffill, int style);
void QsciLexerOctave_SetFont(QsciLexerOctave* self, const QFont* f, int style);
void QsciLexerOctave_OnSetFont(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseSetFont(QsciLexerOctave* self, const QFont* f, int style);
void QsciLexerOctave_SetPaper(QsciLexerOctave* self, const QColor* c, int style);
void QsciLexerOctave_OnSetPaper(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseSetPaper(QsciLexerOctave* self, const QColor* c, int style);
bool QsciLexerOctave_ReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
void QsciLexerOctave_OnReadProperties(QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerOctave_WriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
void QsciLexerOctave_OnWriteProperties(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseWriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerOctave_Event(QsciLexerOctave* self, QEvent* event);
void QsciLexerOctave_OnEvent(QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseEvent(QsciLexerOctave* self, QEvent* event);
bool QsciLexerOctave_EventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event);
void QsciLexerOctave_OnEventFilter(QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseEventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event);
void QsciLexerOctave_TimerEvent(QsciLexerOctave* self, QTimerEvent* event);
void QsciLexerOctave_OnTimerEvent(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseTimerEvent(QsciLexerOctave* self, QTimerEvent* event);
void QsciLexerOctave_ChildEvent(QsciLexerOctave* self, QChildEvent* event);
void QsciLexerOctave_OnChildEvent(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseChildEvent(QsciLexerOctave* self, QChildEvent* event);
void QsciLexerOctave_CustomEvent(QsciLexerOctave* self, QEvent* event);
void QsciLexerOctave_OnCustomEvent(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseCustomEvent(QsciLexerOctave* self, QEvent* event);
void QsciLexerOctave_ConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_OnConnectNotify(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_DisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_OnDisconnectNotify(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_QBaseDisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
libqt_string QsciLexerOctave_TextAsBytes(const QsciLexerOctave* self, const libqt_string text);
void QsciLexerOctave_OnTextAsBytes(const QsciLexerOctave* self, intptr_t slot);
libqt_string QsciLexerOctave_QBaseTextAsBytes(const QsciLexerOctave* self, const libqt_string text);
libqt_string QsciLexerOctave_BytesAsText(const QsciLexerOctave* self, const char* bytes, int size);
void QsciLexerOctave_OnBytesAsText(const QsciLexerOctave* self, intptr_t slot);
libqt_string QsciLexerOctave_QBaseBytesAsText(const QsciLexerOctave* self, const char* bytes, int size);
QObject* QsciLexerOctave_Sender(const QsciLexerOctave* self);
void QsciLexerOctave_OnSender(const QsciLexerOctave* self, intptr_t slot);
QObject* QsciLexerOctave_QBaseSender(const QsciLexerOctave* self);
int QsciLexerOctave_SenderSignalIndex(const QsciLexerOctave* self);
void QsciLexerOctave_OnSenderSignalIndex(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseSenderSignalIndex(const QsciLexerOctave* self);
int QsciLexerOctave_Receivers(const QsciLexerOctave* self, const char* signal);
void QsciLexerOctave_OnReceivers(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_QBaseReceivers(const QsciLexerOctave* self, const char* signal);
bool QsciLexerOctave_IsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_OnIsSignalConnected(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_QBaseIsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_Delete(QsciLexerOctave* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
