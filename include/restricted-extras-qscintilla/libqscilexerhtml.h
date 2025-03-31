#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERHTML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERHTML_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerHTML QsciLexerHTML;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerHTML* QsciLexerHTML_new();
QsciLexerHTML* QsciLexerHTML_new2(QObject* parent);
QMetaObject* QsciLexerHTML_MetaObject(const QsciLexerHTML* self);
void* QsciLexerHTML_Metacast(QsciLexerHTML* self, const char* param1);
int QsciLexerHTML_Metacall(QsciLexerHTML* self, int param1, int param2, void** param3);
void QsciLexerHTML_OnMetacall(QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseMetacall(QsciLexerHTML* self, int param1, int param2, void** param3);
libqt_string QsciLexerHTML_Tr(const char* s);
const char* QsciLexerHTML_Language(const QsciLexerHTML* self);
const char* QsciLexerHTML_Lexer(const QsciLexerHTML* self);
const char* QsciLexerHTML_AutoCompletionFillups(const QsciLexerHTML* self);
const char* QsciLexerHTML_WordCharacters(const QsciLexerHTML* self);
QColor* QsciLexerHTML_DefaultColor(const QsciLexerHTML* self, int style);
bool QsciLexerHTML_DefaultEolFill(const QsciLexerHTML* self, int style);
QFont* QsciLexerHTML_DefaultFont(const QsciLexerHTML* self, int style);
QColor* QsciLexerHTML_DefaultPaper(const QsciLexerHTML* self, int style);
const char* QsciLexerHTML_Keywords(const QsciLexerHTML* self, int set);
libqt_string QsciLexerHTML_Description(const QsciLexerHTML* self, int style);
void QsciLexerHTML_RefreshProperties(QsciLexerHTML* self);
bool QsciLexerHTML_CaseSensitiveTags(const QsciLexerHTML* self);
void QsciLexerHTML_SetDjangoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_DjangoTemplates(const QsciLexerHTML* self);
bool QsciLexerHTML_FoldCompact(const QsciLexerHTML* self);
bool QsciLexerHTML_FoldPreprocessor(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldScriptComments(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_FoldScriptComments(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldScriptHeredocs(QsciLexerHTML* self, bool fold);
bool QsciLexerHTML_FoldScriptHeredocs(const QsciLexerHTML* self);
void QsciLexerHTML_SetMakoTemplates(QsciLexerHTML* self, bool enabled);
bool QsciLexerHTML_MakoTemplates(const QsciLexerHTML* self);
void QsciLexerHTML_SetFoldCompact(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_OnSetFoldCompact(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetFoldCompact(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_SetFoldPreprocessor(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_OnSetFoldPreprocessor(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetFoldPreprocessor(QsciLexerHTML* self, bool fold);
void QsciLexerHTML_SetCaseSensitiveTags(QsciLexerHTML* self, bool sens);
void QsciLexerHTML_OnSetCaseSensitiveTags(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetCaseSensitiveTags(QsciLexerHTML* self, bool sens);
libqt_string QsciLexerHTML_Tr2(const char* s, const char* c);
libqt_string QsciLexerHTML_Tr3(const char* s, const char* c, int n);
int QsciLexerHTML_LexerId(const QsciLexerHTML* self);
void QsciLexerHTML_OnLexerId(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseLexerId(const QsciLexerHTML* self);
libqt_list /* of libqt_string */ QsciLexerHTML_AutoCompletionWordSeparators(const QsciLexerHTML* self);
void QsciLexerHTML_OnAutoCompletionWordSeparators(const QsciLexerHTML* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerHTML_QBaseAutoCompletionWordSeparators(const QsciLexerHTML* self);
const char* QsciLexerHTML_BlockEnd(const QsciLexerHTML* self, int* style);
void QsciLexerHTML_OnBlockEnd(const QsciLexerHTML* self, intptr_t slot);
const char* QsciLexerHTML_QBaseBlockEnd(const QsciLexerHTML* self, int* style);
int QsciLexerHTML_BlockLookback(const QsciLexerHTML* self);
void QsciLexerHTML_OnBlockLookback(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseBlockLookback(const QsciLexerHTML* self);
const char* QsciLexerHTML_BlockStart(const QsciLexerHTML* self, int* style);
void QsciLexerHTML_OnBlockStart(const QsciLexerHTML* self, intptr_t slot);
const char* QsciLexerHTML_QBaseBlockStart(const QsciLexerHTML* self, int* style);
const char* QsciLexerHTML_BlockStartKeyword(const QsciLexerHTML* self, int* style);
void QsciLexerHTML_OnBlockStartKeyword(const QsciLexerHTML* self, intptr_t slot);
const char* QsciLexerHTML_QBaseBlockStartKeyword(const QsciLexerHTML* self, int* style);
int QsciLexerHTML_BraceStyle(const QsciLexerHTML* self);
void QsciLexerHTML_OnBraceStyle(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseBraceStyle(const QsciLexerHTML* self);
bool QsciLexerHTML_CaseSensitive(const QsciLexerHTML* self);
void QsciLexerHTML_OnCaseSensitive(const QsciLexerHTML* self, intptr_t slot);
bool QsciLexerHTML_QBaseCaseSensitive(const QsciLexerHTML* self);
QColor* QsciLexerHTML_Color(const QsciLexerHTML* self, int style);
void QsciLexerHTML_OnColor(const QsciLexerHTML* self, intptr_t slot);
QColor* QsciLexerHTML_QBaseColor(const QsciLexerHTML* self, int style);
bool QsciLexerHTML_EolFill(const QsciLexerHTML* self, int style);
void QsciLexerHTML_OnEolFill(const QsciLexerHTML* self, intptr_t slot);
bool QsciLexerHTML_QBaseEolFill(const QsciLexerHTML* self, int style);
QFont* QsciLexerHTML_Font(const QsciLexerHTML* self, int style);
void QsciLexerHTML_OnFont(const QsciLexerHTML* self, intptr_t slot);
QFont* QsciLexerHTML_QBaseFont(const QsciLexerHTML* self, int style);
int QsciLexerHTML_IndentationGuideView(const QsciLexerHTML* self);
void QsciLexerHTML_OnIndentationGuideView(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseIndentationGuideView(const QsciLexerHTML* self);
int QsciLexerHTML_DefaultStyle(const QsciLexerHTML* self);
void QsciLexerHTML_OnDefaultStyle(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseDefaultStyle(const QsciLexerHTML* self);
QColor* QsciLexerHTML_Paper(const QsciLexerHTML* self, int style);
void QsciLexerHTML_OnPaper(const QsciLexerHTML* self, intptr_t slot);
QColor* QsciLexerHTML_QBasePaper(const QsciLexerHTML* self, int style);
QColor* QsciLexerHTML_DefaultColorWithStyle(const QsciLexerHTML* self, int style);
void QsciLexerHTML_OnDefaultColorWithStyle(const QsciLexerHTML* self, intptr_t slot);
QColor* QsciLexerHTML_QBaseDefaultColorWithStyle(const QsciLexerHTML* self, int style);
QFont* QsciLexerHTML_DefaultFontWithStyle(const QsciLexerHTML* self, int style);
void QsciLexerHTML_OnDefaultFontWithStyle(const QsciLexerHTML* self, intptr_t slot);
QFont* QsciLexerHTML_QBaseDefaultFontWithStyle(const QsciLexerHTML* self, int style);
QColor* QsciLexerHTML_DefaultPaperWithStyle(const QsciLexerHTML* self, int style);
void QsciLexerHTML_OnDefaultPaperWithStyle(const QsciLexerHTML* self, intptr_t slot);
QColor* QsciLexerHTML_QBaseDefaultPaperWithStyle(const QsciLexerHTML* self, int style);
void QsciLexerHTML_SetEditor(QsciLexerHTML* self, QsciScintilla* editor);
void QsciLexerHTML_OnSetEditor(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetEditor(QsciLexerHTML* self, QsciScintilla* editor);
int QsciLexerHTML_StyleBitsNeeded(const QsciLexerHTML* self);
void QsciLexerHTML_OnStyleBitsNeeded(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseStyleBitsNeeded(const QsciLexerHTML* self);
void QsciLexerHTML_SetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle);
void QsciLexerHTML_OnSetAutoIndentStyle(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle);
void QsciLexerHTML_SetColor(QsciLexerHTML* self, QColor* c, int style);
void QsciLexerHTML_OnSetColor(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetColor(QsciLexerHTML* self, QColor* c, int style);
void QsciLexerHTML_SetEolFill(QsciLexerHTML* self, bool eoffill, int style);
void QsciLexerHTML_OnSetEolFill(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetEolFill(QsciLexerHTML* self, bool eoffill, int style);
void QsciLexerHTML_SetFont(QsciLexerHTML* self, QFont* f, int style);
void QsciLexerHTML_OnSetFont(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetFont(QsciLexerHTML* self, QFont* f, int style);
void QsciLexerHTML_SetPaper(QsciLexerHTML* self, QColor* c, int style);
void QsciLexerHTML_OnSetPaper(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseSetPaper(QsciLexerHTML* self, QColor* c, int style);
bool QsciLexerHTML_ReadProperties(QsciLexerHTML* self, QSettings* qs, libqt_string prefix);
void QsciLexerHTML_OnReadProperties(QsciLexerHTML* self, intptr_t slot);
bool QsciLexerHTML_QBaseReadProperties(QsciLexerHTML* self, QSettings* qs, libqt_string prefix);
bool QsciLexerHTML_Event(QsciLexerHTML* self, QEvent* event);
void QsciLexerHTML_OnEvent(QsciLexerHTML* self, intptr_t slot);
bool QsciLexerHTML_QBaseEvent(QsciLexerHTML* self, QEvent* event);
bool QsciLexerHTML_EventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event);
void QsciLexerHTML_OnEventFilter(QsciLexerHTML* self, intptr_t slot);
bool QsciLexerHTML_QBaseEventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event);
void QsciLexerHTML_TimerEvent(QsciLexerHTML* self, QTimerEvent* event);
void QsciLexerHTML_OnTimerEvent(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseTimerEvent(QsciLexerHTML* self, QTimerEvent* event);
void QsciLexerHTML_ChildEvent(QsciLexerHTML* self, QChildEvent* event);
void QsciLexerHTML_OnChildEvent(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseChildEvent(QsciLexerHTML* self, QChildEvent* event);
void QsciLexerHTML_CustomEvent(QsciLexerHTML* self, QEvent* event);
void QsciLexerHTML_OnCustomEvent(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseCustomEvent(QsciLexerHTML* self, QEvent* event);
void QsciLexerHTML_ConnectNotify(QsciLexerHTML* self, QMetaMethod* signal);
void QsciLexerHTML_OnConnectNotify(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseConnectNotify(QsciLexerHTML* self, QMetaMethod* signal);
void QsciLexerHTML_DisconnectNotify(QsciLexerHTML* self, QMetaMethod* signal);
void QsciLexerHTML_OnDisconnectNotify(QsciLexerHTML* self, intptr_t slot);
void QsciLexerHTML_QBaseDisconnectNotify(QsciLexerHTML* self, QMetaMethod* signal);
bool QsciLexerHTML_WriteProperties(const QsciLexerHTML* self, QSettings* qs, libqt_string prefix);
void QsciLexerHTML_OnWriteProperties(const QsciLexerHTML* self, intptr_t slot);
bool QsciLexerHTML_QBaseWriteProperties(const QsciLexerHTML* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerHTML_Sender(const QsciLexerHTML* self);
void QsciLexerHTML_OnSender(const QsciLexerHTML* self, intptr_t slot);
QObject* QsciLexerHTML_QBaseSender(const QsciLexerHTML* self);
int QsciLexerHTML_SenderSignalIndex(const QsciLexerHTML* self);
void QsciLexerHTML_OnSenderSignalIndex(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseSenderSignalIndex(const QsciLexerHTML* self);
int QsciLexerHTML_Receivers(const QsciLexerHTML* self, const char* signal);
void QsciLexerHTML_OnReceivers(const QsciLexerHTML* self, intptr_t slot);
int QsciLexerHTML_QBaseReceivers(const QsciLexerHTML* self, const char* signal);
bool QsciLexerHTML_IsSignalConnected(const QsciLexerHTML* self, QMetaMethod* signal);
void QsciLexerHTML_OnIsSignalConnected(const QsciLexerHTML* self, intptr_t slot);
bool QsciLexerHTML_QBaseIsSignalConnected(const QsciLexerHTML* self, QMetaMethod* signal);
void QsciLexerHTML_Delete(QsciLexerHTML* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
