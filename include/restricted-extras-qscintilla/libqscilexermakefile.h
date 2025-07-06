#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMAKEFILE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMAKEFILE_H

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
typedef struct QsciLexerMakefile QsciLexerMakefile;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerMakefile* QsciLexerMakefile_new();
QsciLexerMakefile* QsciLexerMakefile_new2(QObject* parent);
QMetaObject* QsciLexerMakefile_MetaObject(const QsciLexerMakefile* self);
void* QsciLexerMakefile_Metacast(QsciLexerMakefile* self, const char* param1);
int QsciLexerMakefile_Metacall(QsciLexerMakefile* self, int param1, int param2, void** param3);
void QsciLexerMakefile_OnMetacall(QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseMetacall(QsciLexerMakefile* self, int param1, int param2, void** param3);
libqt_string QsciLexerMakefile_Tr(const char* s);
const char* QsciLexerMakefile_Language(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_Lexer(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_WordCharacters(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_DefaultColor(const QsciLexerMakefile* self, int style);
bool QsciLexerMakefile_DefaultEolFill(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_DefaultFont(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultPaper(const QsciLexerMakefile* self, int style);
libqt_string QsciLexerMakefile_Description(const QsciLexerMakefile* self, int style);
libqt_string QsciLexerMakefile_Tr2(const char* s, const char* c);
libqt_string QsciLexerMakefile_Tr3(const char* s, const char* c, int n);
int QsciLexerMakefile_LexerId(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnLexerId(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseLexerId(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_AutoCompletionFillups(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnAutoCompletionFillups(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_QBaseAutoCompletionFillups(const QsciLexerMakefile* self);
libqt_list /* of libqt_string */ QsciLexerMakefile_AutoCompletionWordSeparators(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnAutoCompletionWordSeparators(const QsciLexerMakefile* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerMakefile_QBaseAutoCompletionWordSeparators(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_BlockEnd(const QsciLexerMakefile* self, int* style);
void QsciLexerMakefile_OnBlockEnd(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_QBaseBlockEnd(const QsciLexerMakefile* self, int* style);
int QsciLexerMakefile_BlockLookback(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnBlockLookback(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseBlockLookback(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_BlockStart(const QsciLexerMakefile* self, int* style);
void QsciLexerMakefile_OnBlockStart(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_QBaseBlockStart(const QsciLexerMakefile* self, int* style);
const char* QsciLexerMakefile_BlockStartKeyword(const QsciLexerMakefile* self, int* style);
void QsciLexerMakefile_OnBlockStartKeyword(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_QBaseBlockStartKeyword(const QsciLexerMakefile* self, int* style);
int QsciLexerMakefile_BraceStyle(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnBraceStyle(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseBraceStyle(const QsciLexerMakefile* self);
bool QsciLexerMakefile_CaseSensitive(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnCaseSensitive(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_QBaseCaseSensitive(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_Color(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnColor(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_QBaseColor(const QsciLexerMakefile* self, int style);
bool QsciLexerMakefile_EolFill(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnEolFill(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_QBaseEolFill(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_Font(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnFont(const QsciLexerMakefile* self, intptr_t slot);
QFont* QsciLexerMakefile_QBaseFont(const QsciLexerMakefile* self, int style);
int QsciLexerMakefile_IndentationGuideView(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnIndentationGuideView(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseIndentationGuideView(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_Keywords(const QsciLexerMakefile* self, int set);
void QsciLexerMakefile_OnKeywords(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_QBaseKeywords(const QsciLexerMakefile* self, int set);
int QsciLexerMakefile_DefaultStyle(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnDefaultStyle(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseDefaultStyle(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_Paper(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnPaper(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_QBasePaper(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultColorWithStyle(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnDefaultColorWithStyle(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_QBaseDefaultColorWithStyle(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_DefaultFontWithStyle(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnDefaultFontWithStyle(const QsciLexerMakefile* self, intptr_t slot);
QFont* QsciLexerMakefile_QBaseDefaultFontWithStyle(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultPaperWithStyle(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnDefaultPaperWithStyle(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_QBaseDefaultPaperWithStyle(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_SetEditor(QsciLexerMakefile* self, QsciScintilla* editor);
void QsciLexerMakefile_OnSetEditor(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseSetEditor(QsciLexerMakefile* self, QsciScintilla* editor);
void QsciLexerMakefile_RefreshProperties(QsciLexerMakefile* self);
void QsciLexerMakefile_OnRefreshProperties(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseRefreshProperties(QsciLexerMakefile* self);
int QsciLexerMakefile_StyleBitsNeeded(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnStyleBitsNeeded(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseStyleBitsNeeded(const QsciLexerMakefile* self);
void QsciLexerMakefile_SetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle);
void QsciLexerMakefile_OnSetAutoIndentStyle(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseSetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle);
void QsciLexerMakefile_SetColor(QsciLexerMakefile* self, const QColor* c, int style);
void QsciLexerMakefile_OnSetColor(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseSetColor(QsciLexerMakefile* self, const QColor* c, int style);
void QsciLexerMakefile_SetEolFill(QsciLexerMakefile* self, bool eoffill, int style);
void QsciLexerMakefile_OnSetEolFill(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseSetEolFill(QsciLexerMakefile* self, bool eoffill, int style);
void QsciLexerMakefile_SetFont(QsciLexerMakefile* self, const QFont* f, int style);
void QsciLexerMakefile_OnSetFont(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseSetFont(QsciLexerMakefile* self, const QFont* f, int style);
void QsciLexerMakefile_SetPaper(QsciLexerMakefile* self, const QColor* c, int style);
void QsciLexerMakefile_OnSetPaper(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseSetPaper(QsciLexerMakefile* self, const QColor* c, int style);
bool QsciLexerMakefile_ReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMakefile_OnReadProperties(QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_QBaseReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMakefile_WriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMakefile_OnWriteProperties(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_QBaseWriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMakefile_Event(QsciLexerMakefile* self, QEvent* event);
void QsciLexerMakefile_OnEvent(QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_QBaseEvent(QsciLexerMakefile* self, QEvent* event);
bool QsciLexerMakefile_EventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event);
void QsciLexerMakefile_OnEventFilter(QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_QBaseEventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event);
void QsciLexerMakefile_TimerEvent(QsciLexerMakefile* self, QTimerEvent* event);
void QsciLexerMakefile_OnTimerEvent(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseTimerEvent(QsciLexerMakefile* self, QTimerEvent* event);
void QsciLexerMakefile_ChildEvent(QsciLexerMakefile* self, QChildEvent* event);
void QsciLexerMakefile_OnChildEvent(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseChildEvent(QsciLexerMakefile* self, QChildEvent* event);
void QsciLexerMakefile_CustomEvent(QsciLexerMakefile* self, QEvent* event);
void QsciLexerMakefile_OnCustomEvent(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseCustomEvent(QsciLexerMakefile* self, QEvent* event);
void QsciLexerMakefile_ConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_OnConnectNotify(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_DisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_OnDisconnectNotify(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_QBaseDisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
libqt_string QsciLexerMakefile_TextAsBytes(const QsciLexerMakefile* self, const libqt_string text);
void QsciLexerMakefile_OnTextAsBytes(const QsciLexerMakefile* self, intptr_t slot);
libqt_string QsciLexerMakefile_QBaseTextAsBytes(const QsciLexerMakefile* self, const libqt_string text);
libqt_string QsciLexerMakefile_BytesAsText(const QsciLexerMakefile* self, const char* bytes, int size);
void QsciLexerMakefile_OnBytesAsText(const QsciLexerMakefile* self, intptr_t slot);
libqt_string QsciLexerMakefile_QBaseBytesAsText(const QsciLexerMakefile* self, const char* bytes, int size);
QObject* QsciLexerMakefile_Sender(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnSender(const QsciLexerMakefile* self, intptr_t slot);
QObject* QsciLexerMakefile_QBaseSender(const QsciLexerMakefile* self);
int QsciLexerMakefile_SenderSignalIndex(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnSenderSignalIndex(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseSenderSignalIndex(const QsciLexerMakefile* self);
int QsciLexerMakefile_Receivers(const QsciLexerMakefile* self, const char* signal);
void QsciLexerMakefile_OnReceivers(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_QBaseReceivers(const QsciLexerMakefile* self, const char* signal);
bool QsciLexerMakefile_IsSignalConnected(const QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_OnIsSignalConnected(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_QBaseIsSignalConnected(const QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_Delete(QsciLexerMakefile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
