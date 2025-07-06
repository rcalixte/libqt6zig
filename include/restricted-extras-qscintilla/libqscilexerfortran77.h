#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERFORTRAN77_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERFORTRAN77_H

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
typedef struct QsciLexerFortran77 QsciLexerFortran77;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerFortran77* QsciLexerFortran77_new();
QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent);
QMetaObject* QsciLexerFortran77_MetaObject(const QsciLexerFortran77* self);
void* QsciLexerFortran77_Metacast(QsciLexerFortran77* self, const char* param1);
int QsciLexerFortran77_Metacall(QsciLexerFortran77* self, int param1, int param2, void** param3);
void QsciLexerFortran77_OnMetacall(QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseMetacall(QsciLexerFortran77* self, int param1, int param2, void** param3);
libqt_string QsciLexerFortran77_Tr(const char* s);
const char* QsciLexerFortran77_Language(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_Lexer(const QsciLexerFortran77* self);
int QsciLexerFortran77_BraceStyle(const QsciLexerFortran77* self);
QColor* QsciLexerFortran77_DefaultColor(const QsciLexerFortran77* self, int style);
bool QsciLexerFortran77_DefaultEolFill(const QsciLexerFortran77* self, int style);
QFont* QsciLexerFortran77_DefaultFont(const QsciLexerFortran77* self, int style);
QColor* QsciLexerFortran77_DefaultPaper(const QsciLexerFortran77* self, int style);
const char* QsciLexerFortran77_Keywords(const QsciLexerFortran77* self, int set);
libqt_string QsciLexerFortran77_Description(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_RefreshProperties(QsciLexerFortran77* self);
bool QsciLexerFortran77_FoldCompact(const QsciLexerFortran77* self);
void QsciLexerFortran77_SetFoldCompact(QsciLexerFortran77* self, bool fold);
void QsciLexerFortran77_OnSetFoldCompact(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseSetFoldCompact(QsciLexerFortran77* self, bool fold);
libqt_string QsciLexerFortran77_Tr2(const char* s, const char* c);
libqt_string QsciLexerFortran77_Tr3(const char* s, const char* c, int n);
int QsciLexerFortran77_LexerId(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnLexerId(const QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseLexerId(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_AutoCompletionFillups(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnAutoCompletionFillups(const QsciLexerFortran77* self, intptr_t slot);
const char* QsciLexerFortran77_QBaseAutoCompletionFillups(const QsciLexerFortran77* self);
libqt_list /* of libqt_string */ QsciLexerFortran77_AutoCompletionWordSeparators(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnAutoCompletionWordSeparators(const QsciLexerFortran77* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerFortran77_QBaseAutoCompletionWordSeparators(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_BlockEnd(const QsciLexerFortran77* self, int* style);
void QsciLexerFortran77_OnBlockEnd(const QsciLexerFortran77* self, intptr_t slot);
const char* QsciLexerFortran77_QBaseBlockEnd(const QsciLexerFortran77* self, int* style);
int QsciLexerFortran77_BlockLookback(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnBlockLookback(const QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseBlockLookback(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_BlockStart(const QsciLexerFortran77* self, int* style);
void QsciLexerFortran77_OnBlockStart(const QsciLexerFortran77* self, intptr_t slot);
const char* QsciLexerFortran77_QBaseBlockStart(const QsciLexerFortran77* self, int* style);
const char* QsciLexerFortran77_BlockStartKeyword(const QsciLexerFortran77* self, int* style);
void QsciLexerFortran77_OnBlockStartKeyword(const QsciLexerFortran77* self, intptr_t slot);
const char* QsciLexerFortran77_QBaseBlockStartKeyword(const QsciLexerFortran77* self, int* style);
bool QsciLexerFortran77_CaseSensitive(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnCaseSensitive(const QsciLexerFortran77* self, intptr_t slot);
bool QsciLexerFortran77_QBaseCaseSensitive(const QsciLexerFortran77* self);
QColor* QsciLexerFortran77_Color(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_OnColor(const QsciLexerFortran77* self, intptr_t slot);
QColor* QsciLexerFortran77_QBaseColor(const QsciLexerFortran77* self, int style);
bool QsciLexerFortran77_EolFill(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_OnEolFill(const QsciLexerFortran77* self, intptr_t slot);
bool QsciLexerFortran77_QBaseEolFill(const QsciLexerFortran77* self, int style);
QFont* QsciLexerFortran77_Font(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_OnFont(const QsciLexerFortran77* self, intptr_t slot);
QFont* QsciLexerFortran77_QBaseFont(const QsciLexerFortran77* self, int style);
int QsciLexerFortran77_IndentationGuideView(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnIndentationGuideView(const QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseIndentationGuideView(const QsciLexerFortran77* self);
int QsciLexerFortran77_DefaultStyle(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnDefaultStyle(const QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseDefaultStyle(const QsciLexerFortran77* self);
QColor* QsciLexerFortran77_Paper(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_OnPaper(const QsciLexerFortran77* self, intptr_t slot);
QColor* QsciLexerFortran77_QBasePaper(const QsciLexerFortran77* self, int style);
QColor* QsciLexerFortran77_DefaultColorWithStyle(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_OnDefaultColorWithStyle(const QsciLexerFortran77* self, intptr_t slot);
QColor* QsciLexerFortran77_QBaseDefaultColorWithStyle(const QsciLexerFortran77* self, int style);
QFont* QsciLexerFortran77_DefaultFontWithStyle(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_OnDefaultFontWithStyle(const QsciLexerFortran77* self, intptr_t slot);
QFont* QsciLexerFortran77_QBaseDefaultFontWithStyle(const QsciLexerFortran77* self, int style);
QColor* QsciLexerFortran77_DefaultPaperWithStyle(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_OnDefaultPaperWithStyle(const QsciLexerFortran77* self, intptr_t slot);
QColor* QsciLexerFortran77_QBaseDefaultPaperWithStyle(const QsciLexerFortran77* self, int style);
void QsciLexerFortran77_SetEditor(QsciLexerFortran77* self, QsciScintilla* editor);
void QsciLexerFortran77_OnSetEditor(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseSetEditor(QsciLexerFortran77* self, QsciScintilla* editor);
int QsciLexerFortran77_StyleBitsNeeded(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnStyleBitsNeeded(const QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseStyleBitsNeeded(const QsciLexerFortran77* self);
const char* QsciLexerFortran77_WordCharacters(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnWordCharacters(const QsciLexerFortran77* self, intptr_t slot);
const char* QsciLexerFortran77_QBaseWordCharacters(const QsciLexerFortran77* self);
void QsciLexerFortran77_SetAutoIndentStyle(QsciLexerFortran77* self, int autoindentstyle);
void QsciLexerFortran77_OnSetAutoIndentStyle(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseSetAutoIndentStyle(QsciLexerFortran77* self, int autoindentstyle);
void QsciLexerFortran77_SetColor(QsciLexerFortran77* self, const QColor* c, int style);
void QsciLexerFortran77_OnSetColor(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseSetColor(QsciLexerFortran77* self, const QColor* c, int style);
void QsciLexerFortran77_SetEolFill(QsciLexerFortran77* self, bool eoffill, int style);
void QsciLexerFortran77_OnSetEolFill(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseSetEolFill(QsciLexerFortran77* self, bool eoffill, int style);
void QsciLexerFortran77_SetFont(QsciLexerFortran77* self, const QFont* f, int style);
void QsciLexerFortran77_OnSetFont(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseSetFont(QsciLexerFortran77* self, const QFont* f, int style);
void QsciLexerFortran77_SetPaper(QsciLexerFortran77* self, const QColor* c, int style);
void QsciLexerFortran77_OnSetPaper(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseSetPaper(QsciLexerFortran77* self, const QColor* c, int style);
bool QsciLexerFortran77_ReadProperties(QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
void QsciLexerFortran77_OnReadProperties(QsciLexerFortran77* self, intptr_t slot);
bool QsciLexerFortran77_QBaseReadProperties(QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerFortran77_WriteProperties(const QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
void QsciLexerFortran77_OnWriteProperties(const QsciLexerFortran77* self, intptr_t slot);
bool QsciLexerFortran77_QBaseWriteProperties(const QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerFortran77_Event(QsciLexerFortran77* self, QEvent* event);
void QsciLexerFortran77_OnEvent(QsciLexerFortran77* self, intptr_t slot);
bool QsciLexerFortran77_QBaseEvent(QsciLexerFortran77* self, QEvent* event);
bool QsciLexerFortran77_EventFilter(QsciLexerFortran77* self, QObject* watched, QEvent* event);
void QsciLexerFortran77_OnEventFilter(QsciLexerFortran77* self, intptr_t slot);
bool QsciLexerFortran77_QBaseEventFilter(QsciLexerFortran77* self, QObject* watched, QEvent* event);
void QsciLexerFortran77_TimerEvent(QsciLexerFortran77* self, QTimerEvent* event);
void QsciLexerFortran77_OnTimerEvent(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseTimerEvent(QsciLexerFortran77* self, QTimerEvent* event);
void QsciLexerFortran77_ChildEvent(QsciLexerFortran77* self, QChildEvent* event);
void QsciLexerFortran77_OnChildEvent(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseChildEvent(QsciLexerFortran77* self, QChildEvent* event);
void QsciLexerFortran77_CustomEvent(QsciLexerFortran77* self, QEvent* event);
void QsciLexerFortran77_OnCustomEvent(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseCustomEvent(QsciLexerFortran77* self, QEvent* event);
void QsciLexerFortran77_ConnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
void QsciLexerFortran77_OnConnectNotify(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseConnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
void QsciLexerFortran77_DisconnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
void QsciLexerFortran77_OnDisconnectNotify(QsciLexerFortran77* self, intptr_t slot);
void QsciLexerFortran77_QBaseDisconnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
libqt_string QsciLexerFortran77_TextAsBytes(const QsciLexerFortran77* self, const libqt_string text);
void QsciLexerFortran77_OnTextAsBytes(const QsciLexerFortran77* self, intptr_t slot);
libqt_string QsciLexerFortran77_QBaseTextAsBytes(const QsciLexerFortran77* self, const libqt_string text);
libqt_string QsciLexerFortran77_BytesAsText(const QsciLexerFortran77* self, const char* bytes, int size);
void QsciLexerFortran77_OnBytesAsText(const QsciLexerFortran77* self, intptr_t slot);
libqt_string QsciLexerFortran77_QBaseBytesAsText(const QsciLexerFortran77* self, const char* bytes, int size);
QObject* QsciLexerFortran77_Sender(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnSender(const QsciLexerFortran77* self, intptr_t slot);
QObject* QsciLexerFortran77_QBaseSender(const QsciLexerFortran77* self);
int QsciLexerFortran77_SenderSignalIndex(const QsciLexerFortran77* self);
void QsciLexerFortran77_OnSenderSignalIndex(const QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseSenderSignalIndex(const QsciLexerFortran77* self);
int QsciLexerFortran77_Receivers(const QsciLexerFortran77* self, const char* signal);
void QsciLexerFortran77_OnReceivers(const QsciLexerFortran77* self, intptr_t slot);
int QsciLexerFortran77_QBaseReceivers(const QsciLexerFortran77* self, const char* signal);
bool QsciLexerFortran77_IsSignalConnected(const QsciLexerFortran77* self, const QMetaMethod* signal);
void QsciLexerFortran77_OnIsSignalConnected(const QsciLexerFortran77* self, intptr_t slot);
bool QsciLexerFortran77_QBaseIsSignalConnected(const QsciLexerFortran77* self, const QMetaMethod* signal);
void QsciLexerFortran77_Delete(QsciLexerFortran77* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
