#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPYTHON_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPYTHON_H

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
typedef struct QsciLexerPython QsciLexerPython;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPython* QsciLexerPython_new();
QsciLexerPython* QsciLexerPython_new2(QObject* parent);
QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self);
void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1);
int QsciLexerPython_Metacall(QsciLexerPython* self, int param1, int param2, void** param3);
void QsciLexerPython_OnMetacall(QsciLexerPython* self, intptr_t slot);
int QsciLexerPython_QBaseMetacall(QsciLexerPython* self, int param1, int param2, void** param3);
libqt_string QsciLexerPython_Tr(const char* s);
const char* QsciLexerPython_Language(const QsciLexerPython* self);
const char* QsciLexerPython_Lexer(const QsciLexerPython* self);
libqt_list /* of libqt_string */ QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self);
int QsciLexerPython_BlockLookback(const QsciLexerPython* self);
const char* QsciLexerPython_BlockStart(const QsciLexerPython* self);
int QsciLexerPython_BraceStyle(const QsciLexerPython* self);
QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style);
bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style);
QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style);
QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style);
int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self);
void QsciLexerPython_OnIndentationGuideView(const QsciLexerPython* self, intptr_t slot);
int QsciLexerPython_QBaseIndentationGuideView(const QsciLexerPython* self);
const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set);
libqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style);
void QsciLexerPython_RefreshProperties(QsciLexerPython* self);
bool QsciLexerPython_FoldComments(const QsciLexerPython* self);
void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold);
bool QsciLexerPython_FoldCompact(const QsciLexerPython* self);
bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self);
int QsciLexerPython_IndentationWarning(const QsciLexerPython* self);
void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled);
bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self);
void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed);
bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self);
void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold);
void QsciLexerPython_OnSetFoldComments(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetFoldComments(QsciLexerPython* self, bool fold);
void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold);
void QsciLexerPython_OnSetFoldQuotes(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetFoldQuotes(QsciLexerPython* self, bool fold);
void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn);
void QsciLexerPython_OnSetIndentationWarning(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetIndentationWarning(QsciLexerPython* self, int warn);
libqt_string QsciLexerPython_Tr2(const char* s, const char* c);
libqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n);
const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style);
int QsciLexerPython_LexerId(const QsciLexerPython* self);
void QsciLexerPython_OnLexerId(const QsciLexerPython* self, intptr_t slot);
int QsciLexerPython_QBaseLexerId(const QsciLexerPython* self);
const char* QsciLexerPython_AutoCompletionFillups(const QsciLexerPython* self);
void QsciLexerPython_OnAutoCompletionFillups(const QsciLexerPython* self, intptr_t slot);
const char* QsciLexerPython_QBaseAutoCompletionFillups(const QsciLexerPython* self);
const char* QsciLexerPython_BlockEnd(const QsciLexerPython* self, int* style);
void QsciLexerPython_OnBlockEnd(const QsciLexerPython* self, intptr_t slot);
const char* QsciLexerPython_QBaseBlockEnd(const QsciLexerPython* self, int* style);
const char* QsciLexerPython_BlockStartKeyword(const QsciLexerPython* self, int* style);
void QsciLexerPython_OnBlockStartKeyword(const QsciLexerPython* self, intptr_t slot);
const char* QsciLexerPython_QBaseBlockStartKeyword(const QsciLexerPython* self, int* style);
bool QsciLexerPython_CaseSensitive(const QsciLexerPython* self);
void QsciLexerPython_OnCaseSensitive(const QsciLexerPython* self, intptr_t slot);
bool QsciLexerPython_QBaseCaseSensitive(const QsciLexerPython* self);
QColor* QsciLexerPython_Color(const QsciLexerPython* self, int style);
void QsciLexerPython_OnColor(const QsciLexerPython* self, intptr_t slot);
QColor* QsciLexerPython_QBaseColor(const QsciLexerPython* self, int style);
bool QsciLexerPython_EolFill(const QsciLexerPython* self, int style);
void QsciLexerPython_OnEolFill(const QsciLexerPython* self, intptr_t slot);
bool QsciLexerPython_QBaseEolFill(const QsciLexerPython* self, int style);
QFont* QsciLexerPython_Font(const QsciLexerPython* self, int style);
void QsciLexerPython_OnFont(const QsciLexerPython* self, intptr_t slot);
QFont* QsciLexerPython_QBaseFont(const QsciLexerPython* self, int style);
int QsciLexerPython_DefaultStyle(const QsciLexerPython* self);
void QsciLexerPython_OnDefaultStyle(const QsciLexerPython* self, intptr_t slot);
int QsciLexerPython_QBaseDefaultStyle(const QsciLexerPython* self);
QColor* QsciLexerPython_Paper(const QsciLexerPython* self, int style);
void QsciLexerPython_OnPaper(const QsciLexerPython* self, intptr_t slot);
QColor* QsciLexerPython_QBasePaper(const QsciLexerPython* self, int style);
QColor* QsciLexerPython_DefaultColorWithStyle(const QsciLexerPython* self, int style);
void QsciLexerPython_OnDefaultColorWithStyle(const QsciLexerPython* self, intptr_t slot);
QColor* QsciLexerPython_QBaseDefaultColorWithStyle(const QsciLexerPython* self, int style);
QFont* QsciLexerPython_DefaultFontWithStyle(const QsciLexerPython* self, int style);
void QsciLexerPython_OnDefaultFontWithStyle(const QsciLexerPython* self, intptr_t slot);
QFont* QsciLexerPython_QBaseDefaultFontWithStyle(const QsciLexerPython* self, int style);
QColor* QsciLexerPython_DefaultPaperWithStyle(const QsciLexerPython* self, int style);
void QsciLexerPython_OnDefaultPaperWithStyle(const QsciLexerPython* self, intptr_t slot);
QColor* QsciLexerPython_QBaseDefaultPaperWithStyle(const QsciLexerPython* self, int style);
void QsciLexerPython_SetEditor(QsciLexerPython* self, QsciScintilla* editor);
void QsciLexerPython_OnSetEditor(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetEditor(QsciLexerPython* self, QsciScintilla* editor);
int QsciLexerPython_StyleBitsNeeded(const QsciLexerPython* self);
void QsciLexerPython_OnStyleBitsNeeded(const QsciLexerPython* self, intptr_t slot);
int QsciLexerPython_QBaseStyleBitsNeeded(const QsciLexerPython* self);
const char* QsciLexerPython_WordCharacters(const QsciLexerPython* self);
void QsciLexerPython_OnWordCharacters(const QsciLexerPython* self, intptr_t slot);
const char* QsciLexerPython_QBaseWordCharacters(const QsciLexerPython* self);
void QsciLexerPython_SetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle);
void QsciLexerPython_OnSetAutoIndentStyle(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetAutoIndentStyle(QsciLexerPython* self, int autoindentstyle);
void QsciLexerPython_SetColor(QsciLexerPython* self, const QColor* c, int style);
void QsciLexerPython_OnSetColor(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetColor(QsciLexerPython* self, const QColor* c, int style);
void QsciLexerPython_SetEolFill(QsciLexerPython* self, bool eoffill, int style);
void QsciLexerPython_OnSetEolFill(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetEolFill(QsciLexerPython* self, bool eoffill, int style);
void QsciLexerPython_SetFont(QsciLexerPython* self, const QFont* f, int style);
void QsciLexerPython_OnSetFont(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetFont(QsciLexerPython* self, const QFont* f, int style);
void QsciLexerPython_SetPaper(QsciLexerPython* self, const QColor* c, int style);
void QsciLexerPython_OnSetPaper(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseSetPaper(QsciLexerPython* self, const QColor* c, int style);
bool QsciLexerPython_ReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPython_OnReadProperties(QsciLexerPython* self, intptr_t slot);
bool QsciLexerPython_QBaseReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPython_WriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPython_OnWriteProperties(const QsciLexerPython* self, intptr_t slot);
bool QsciLexerPython_QBaseWriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPython_Event(QsciLexerPython* self, QEvent* event);
void QsciLexerPython_OnEvent(QsciLexerPython* self, intptr_t slot);
bool QsciLexerPython_QBaseEvent(QsciLexerPython* self, QEvent* event);
bool QsciLexerPython_EventFilter(QsciLexerPython* self, QObject* watched, QEvent* event);
void QsciLexerPython_OnEventFilter(QsciLexerPython* self, intptr_t slot);
bool QsciLexerPython_QBaseEventFilter(QsciLexerPython* self, QObject* watched, QEvent* event);
void QsciLexerPython_TimerEvent(QsciLexerPython* self, QTimerEvent* event);
void QsciLexerPython_OnTimerEvent(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseTimerEvent(QsciLexerPython* self, QTimerEvent* event);
void QsciLexerPython_ChildEvent(QsciLexerPython* self, QChildEvent* event);
void QsciLexerPython_OnChildEvent(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseChildEvent(QsciLexerPython* self, QChildEvent* event);
void QsciLexerPython_CustomEvent(QsciLexerPython* self, QEvent* event);
void QsciLexerPython_OnCustomEvent(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseCustomEvent(QsciLexerPython* self, QEvent* event);
void QsciLexerPython_ConnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
void QsciLexerPython_OnConnectNotify(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseConnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
void QsciLexerPython_DisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
void QsciLexerPython_OnDisconnectNotify(QsciLexerPython* self, intptr_t slot);
void QsciLexerPython_QBaseDisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
libqt_string QsciLexerPython_TextAsBytes(const QsciLexerPython* self, const libqt_string text);
void QsciLexerPython_OnTextAsBytes(const QsciLexerPython* self, intptr_t slot);
libqt_string QsciLexerPython_QBaseTextAsBytes(const QsciLexerPython* self, const libqt_string text);
libqt_string QsciLexerPython_BytesAsText(const QsciLexerPython* self, const char* bytes, int size);
void QsciLexerPython_OnBytesAsText(const QsciLexerPython* self, intptr_t slot);
libqt_string QsciLexerPython_QBaseBytesAsText(const QsciLexerPython* self, const char* bytes, int size);
QObject* QsciLexerPython_Sender(const QsciLexerPython* self);
void QsciLexerPython_OnSender(const QsciLexerPython* self, intptr_t slot);
QObject* QsciLexerPython_QBaseSender(const QsciLexerPython* self);
int QsciLexerPython_SenderSignalIndex(const QsciLexerPython* self);
void QsciLexerPython_OnSenderSignalIndex(const QsciLexerPython* self, intptr_t slot);
int QsciLexerPython_QBaseSenderSignalIndex(const QsciLexerPython* self);
int QsciLexerPython_Receivers(const QsciLexerPython* self, const char* signal);
void QsciLexerPython_OnReceivers(const QsciLexerPython* self, intptr_t slot);
int QsciLexerPython_QBaseReceivers(const QsciLexerPython* self, const char* signal);
bool QsciLexerPython_IsSignalConnected(const QsciLexerPython* self, const QMetaMethod* signal);
void QsciLexerPython_OnIsSignalConnected(const QsciLexerPython* self, intptr_t slot);
bool QsciLexerPython_QBaseIsSignalConnected(const QsciLexerPython* self, const QMetaMethod* signal);
void QsciLexerPython_Delete(QsciLexerPython* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
