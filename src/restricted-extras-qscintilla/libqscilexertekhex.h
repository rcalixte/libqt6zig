#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTEKHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTEKHEX_H

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
typedef struct QsciLexerHex QsciLexerHex;
typedef struct QsciLexerTekHex QsciLexerTekHex;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerTekHex* QsciLexerTekHex_new();
QsciLexerTekHex* QsciLexerTekHex_new2(QObject* parent);
QMetaObject* QsciLexerTekHex_MetaObject(const QsciLexerTekHex* self);
void* QsciLexerTekHex_Metacast(QsciLexerTekHex* self, const char* param1);
int QsciLexerTekHex_Metacall(QsciLexerTekHex* self, int param1, int param2, void** param3);
void QsciLexerTekHex_OnMetacall(QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseMetacall(QsciLexerTekHex* self, int param1, int param2, void** param3);
libqt_string QsciLexerTekHex_Tr(const char* s);
const char* QsciLexerTekHex_Language(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_Lexer(const QsciLexerTekHex* self);
libqt_string QsciLexerTekHex_Description(const QsciLexerTekHex* self, int style);
libqt_string QsciLexerTekHex_Tr2(const char* s, const char* c);
libqt_string QsciLexerTekHex_Tr3(const char* s, const char* c, int n);
int QsciLexerTekHex_LexerId(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnLexerId(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseLexerId(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_AutoCompletionFillups(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnAutoCompletionFillups(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_QBaseAutoCompletionFillups(const QsciLexerTekHex* self);
libqt_list /* of libqt_string */ QsciLexerTekHex_AutoCompletionWordSeparators(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnAutoCompletionWordSeparators(const QsciLexerTekHex* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerTekHex_QBaseAutoCompletionWordSeparators(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_BlockEnd(const QsciLexerTekHex* self, int* style);
void QsciLexerTekHex_OnBlockEnd(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_QBaseBlockEnd(const QsciLexerTekHex* self, int* style);
int QsciLexerTekHex_BlockLookback(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnBlockLookback(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseBlockLookback(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_BlockStart(const QsciLexerTekHex* self, int* style);
void QsciLexerTekHex_OnBlockStart(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_QBaseBlockStart(const QsciLexerTekHex* self, int* style);
const char* QsciLexerTekHex_BlockStartKeyword(const QsciLexerTekHex* self, int* style);
void QsciLexerTekHex_OnBlockStartKeyword(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_QBaseBlockStartKeyword(const QsciLexerTekHex* self, int* style);
int QsciLexerTekHex_BraceStyle(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnBraceStyle(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseBraceStyle(const QsciLexerTekHex* self);
bool QsciLexerTekHex_CaseSensitive(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnCaseSensitive(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseCaseSensitive(const QsciLexerTekHex* self);
QColor* QsciLexerTekHex_Color(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnColor(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_QBaseColor(const QsciLexerTekHex* self, int style);
bool QsciLexerTekHex_EolFill(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnEolFill(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseEolFill(const QsciLexerTekHex* self, int style);
QFont* QsciLexerTekHex_Font(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnFont(const QsciLexerTekHex* self, intptr_t slot);
QFont* QsciLexerTekHex_QBaseFont(const QsciLexerTekHex* self, int style);
int QsciLexerTekHex_IndentationGuideView(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnIndentationGuideView(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseIndentationGuideView(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_Keywords(const QsciLexerTekHex* self, int set);
void QsciLexerTekHex_OnKeywords(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_QBaseKeywords(const QsciLexerTekHex* self, int set);
int QsciLexerTekHex_DefaultStyle(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnDefaultStyle(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseDefaultStyle(const QsciLexerTekHex* self);
QColor* QsciLexerTekHex_Paper(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnPaper(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_QBasePaper(const QsciLexerTekHex* self, int style);
QColor* QsciLexerTekHex_DefaultColorWithStyle(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultColorWithStyle(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_QBaseDefaultColorWithStyle(const QsciLexerTekHex* self, int style);
bool QsciLexerTekHex_DefaultEolFill(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultEolFill(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseDefaultEolFill(const QsciLexerTekHex* self, int style);
QFont* QsciLexerTekHex_DefaultFontWithStyle(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultFontWithStyle(const QsciLexerTekHex* self, intptr_t slot);
QFont* QsciLexerTekHex_QBaseDefaultFontWithStyle(const QsciLexerTekHex* self, int style);
QColor* QsciLexerTekHex_DefaultPaperWithStyle(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultPaperWithStyle(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_QBaseDefaultPaperWithStyle(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_SetEditor(QsciLexerTekHex* self, QsciScintilla* editor);
void QsciLexerTekHex_OnSetEditor(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseSetEditor(QsciLexerTekHex* self, QsciScintilla* editor);
void QsciLexerTekHex_RefreshProperties(QsciLexerTekHex* self);
void QsciLexerTekHex_OnRefreshProperties(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseRefreshProperties(QsciLexerTekHex* self);
int QsciLexerTekHex_StyleBitsNeeded(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnStyleBitsNeeded(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseStyleBitsNeeded(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_WordCharacters(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnWordCharacters(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_QBaseWordCharacters(const QsciLexerTekHex* self);
void QsciLexerTekHex_SetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle);
void QsciLexerTekHex_OnSetAutoIndentStyle(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseSetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle);
void QsciLexerTekHex_SetColor(QsciLexerTekHex* self, const QColor* c, int style);
void QsciLexerTekHex_OnSetColor(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseSetColor(QsciLexerTekHex* self, const QColor* c, int style);
void QsciLexerTekHex_SetEolFill(QsciLexerTekHex* self, bool eoffill, int style);
void QsciLexerTekHex_OnSetEolFill(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseSetEolFill(QsciLexerTekHex* self, bool eoffill, int style);
void QsciLexerTekHex_SetFont(QsciLexerTekHex* self, const QFont* f, int style);
void QsciLexerTekHex_OnSetFont(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseSetFont(QsciLexerTekHex* self, const QFont* f, int style);
void QsciLexerTekHex_SetPaper(QsciLexerTekHex* self, const QColor* c, int style);
void QsciLexerTekHex_OnSetPaper(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseSetPaper(QsciLexerTekHex* self, const QColor* c, int style);
bool QsciLexerTekHex_ReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTekHex_OnReadProperties(QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTekHex_WriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTekHex_OnWriteProperties(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseWriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTekHex_Event(QsciLexerTekHex* self, QEvent* event);
void QsciLexerTekHex_OnEvent(QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseEvent(QsciLexerTekHex* self, QEvent* event);
bool QsciLexerTekHex_EventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event);
void QsciLexerTekHex_OnEventFilter(QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseEventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event);
void QsciLexerTekHex_TimerEvent(QsciLexerTekHex* self, QTimerEvent* event);
void QsciLexerTekHex_OnTimerEvent(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseTimerEvent(QsciLexerTekHex* self, QTimerEvent* event);
void QsciLexerTekHex_ChildEvent(QsciLexerTekHex* self, QChildEvent* event);
void QsciLexerTekHex_OnChildEvent(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseChildEvent(QsciLexerTekHex* self, QChildEvent* event);
void QsciLexerTekHex_CustomEvent(QsciLexerTekHex* self, QEvent* event);
void QsciLexerTekHex_OnCustomEvent(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseCustomEvent(QsciLexerTekHex* self, QEvent* event);
void QsciLexerTekHex_ConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_OnConnectNotify(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_DisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_OnDisconnectNotify(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_QBaseDisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
libqt_string QsciLexerTekHex_TextAsBytes(const QsciLexerTekHex* self, const libqt_string text);
void QsciLexerTekHex_OnTextAsBytes(const QsciLexerTekHex* self, intptr_t slot);
libqt_string QsciLexerTekHex_QBaseTextAsBytes(const QsciLexerTekHex* self, const libqt_string text);
libqt_string QsciLexerTekHex_BytesAsText(const QsciLexerTekHex* self, const char* bytes, int size);
void QsciLexerTekHex_OnBytesAsText(const QsciLexerTekHex* self, intptr_t slot);
libqt_string QsciLexerTekHex_QBaseBytesAsText(const QsciLexerTekHex* self, const char* bytes, int size);
QObject* QsciLexerTekHex_Sender(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnSender(const QsciLexerTekHex* self, intptr_t slot);
QObject* QsciLexerTekHex_QBaseSender(const QsciLexerTekHex* self);
int QsciLexerTekHex_SenderSignalIndex(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnSenderSignalIndex(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseSenderSignalIndex(const QsciLexerTekHex* self);
int QsciLexerTekHex_Receivers(const QsciLexerTekHex* self, const char* signal);
void QsciLexerTekHex_OnReceivers(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_QBaseReceivers(const QsciLexerTekHex* self, const char* signal);
bool QsciLexerTekHex_IsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_OnIsSignalConnected(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_QBaseIsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_Delete(QsciLexerTekHex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
