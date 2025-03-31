#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERIDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERIDL_H

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
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerIDL QsciLexerIDL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerIDL* QsciLexerIDL_new();
QsciLexerIDL* QsciLexerIDL_new2(QObject* parent);
QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self);
void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1);
int QsciLexerIDL_Metacall(QsciLexerIDL* self, int param1, int param2, void** param3);
void QsciLexerIDL_OnMetacall(QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseMetacall(QsciLexerIDL* self, int param1, int param2, void** param3);
libqt_string QsciLexerIDL_Tr(const char* s);
const char* QsciLexerIDL_Language(const QsciLexerIDL* self);
QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style);
const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set);
libqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style);
libqt_string QsciLexerIDL_Tr2(const char* s, const char* c);
libqt_string QsciLexerIDL_Tr3(const char* s, const char* c, int n);
void QsciLexerIDL_SetFoldAtElse(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldAtElse(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetFoldAtElse(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetFoldComments(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldComments(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetFoldComments(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetFoldCompact(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldCompact(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetFoldCompact(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetFoldPreprocessor(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldPreprocessor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetFoldPreprocessor(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetStylePreprocessor(QsciLexerIDL* self, bool style);
void QsciLexerIDL_OnSetStylePreprocessor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetStylePreprocessor(QsciLexerIDL* self, bool style);
int QsciLexerIDL_LexerId(const QsciLexerIDL* self);
void QsciLexerIDL_OnLexerId(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseLexerId(const QsciLexerIDL* self);
const char* QsciLexerIDL_AutoCompletionFillups(const QsciLexerIDL* self);
void QsciLexerIDL_OnAutoCompletionFillups(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_QBaseAutoCompletionFillups(const QsciLexerIDL* self);
int QsciLexerIDL_BlockLookback(const QsciLexerIDL* self);
void QsciLexerIDL_OnBlockLookback(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseBlockLookback(const QsciLexerIDL* self);
bool QsciLexerIDL_CaseSensitive(const QsciLexerIDL* self);
void QsciLexerIDL_OnCaseSensitive(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseCaseSensitive(const QsciLexerIDL* self);
QColor* QsciLexerIDL_Color(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnColor(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_QBaseColor(const QsciLexerIDL* self, int style);
bool QsciLexerIDL_EolFill(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnEolFill(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseEolFill(const QsciLexerIDL* self, int style);
QFont* QsciLexerIDL_Font(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnFont(const QsciLexerIDL* self, intptr_t slot);
QFont* QsciLexerIDL_QBaseFont(const QsciLexerIDL* self, int style);
int QsciLexerIDL_IndentationGuideView(const QsciLexerIDL* self);
void QsciLexerIDL_OnIndentationGuideView(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseIndentationGuideView(const QsciLexerIDL* self);
int QsciLexerIDL_DefaultStyle(const QsciLexerIDL* self);
void QsciLexerIDL_OnDefaultStyle(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseDefaultStyle(const QsciLexerIDL* self);
QColor* QsciLexerIDL_Paper(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnPaper(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_QBasePaper(const QsciLexerIDL* self, int style);
QColor* QsciLexerIDL_DefaultColorWithStyle(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultColorWithStyle(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_QBaseDefaultColorWithStyle(const QsciLexerIDL* self, int style);
QFont* QsciLexerIDL_DefaultFontWithStyle(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultFontWithStyle(const QsciLexerIDL* self, intptr_t slot);
QFont* QsciLexerIDL_QBaseDefaultFontWithStyle(const QsciLexerIDL* self, int style);
QColor* QsciLexerIDL_DefaultPaperWithStyle(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultPaperWithStyle(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_QBaseDefaultPaperWithStyle(const QsciLexerIDL* self, int style);
void QsciLexerIDL_SetEditor(QsciLexerIDL* self, QsciScintilla* editor);
void QsciLexerIDL_OnSetEditor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetEditor(QsciLexerIDL* self, QsciScintilla* editor);
int QsciLexerIDL_StyleBitsNeeded(const QsciLexerIDL* self);
void QsciLexerIDL_OnStyleBitsNeeded(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseStyleBitsNeeded(const QsciLexerIDL* self);
void QsciLexerIDL_SetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle);
void QsciLexerIDL_OnSetAutoIndentStyle(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle);
void QsciLexerIDL_SetColor(QsciLexerIDL* self, QColor* c, int style);
void QsciLexerIDL_OnSetColor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetColor(QsciLexerIDL* self, QColor* c, int style);
void QsciLexerIDL_SetEolFill(QsciLexerIDL* self, bool eoffill, int style);
void QsciLexerIDL_OnSetEolFill(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetEolFill(QsciLexerIDL* self, bool eoffill, int style);
void QsciLexerIDL_SetFont(QsciLexerIDL* self, QFont* f, int style);
void QsciLexerIDL_OnSetFont(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetFont(QsciLexerIDL* self, QFont* f, int style);
void QsciLexerIDL_SetPaper(QsciLexerIDL* self, QColor* c, int style);
void QsciLexerIDL_OnSetPaper(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseSetPaper(QsciLexerIDL* self, QColor* c, int style);
bool QsciLexerIDL_Event(QsciLexerIDL* self, QEvent* event);
void QsciLexerIDL_OnEvent(QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseEvent(QsciLexerIDL* self, QEvent* event);
bool QsciLexerIDL_EventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event);
void QsciLexerIDL_OnEventFilter(QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseEventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event);
void QsciLexerIDL_TimerEvent(QsciLexerIDL* self, QTimerEvent* event);
void QsciLexerIDL_OnTimerEvent(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseTimerEvent(QsciLexerIDL* self, QTimerEvent* event);
void QsciLexerIDL_ChildEvent(QsciLexerIDL* self, QChildEvent* event);
void QsciLexerIDL_OnChildEvent(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseChildEvent(QsciLexerIDL* self, QChildEvent* event);
void QsciLexerIDL_CustomEvent(QsciLexerIDL* self, QEvent* event);
void QsciLexerIDL_OnCustomEvent(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseCustomEvent(QsciLexerIDL* self, QEvent* event);
void QsciLexerIDL_ConnectNotify(QsciLexerIDL* self, QMetaMethod* signal);
void QsciLexerIDL_OnConnectNotify(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseConnectNotify(QsciLexerIDL* self, QMetaMethod* signal);
void QsciLexerIDL_DisconnectNotify(QsciLexerIDL* self, QMetaMethod* signal);
void QsciLexerIDL_OnDisconnectNotify(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseDisconnectNotify(QsciLexerIDL* self, QMetaMethod* signal);
const char* QsciLexerIDL_Lexer(const QsciLexerIDL* self);
void QsciLexerIDL_OnLexer(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_QBaseLexer(const QsciLexerIDL* self);
libqt_list /* of libqt_string */ QsciLexerIDL_AutoCompletionWordSeparators(const QsciLexerIDL* self);
void QsciLexerIDL_OnAutoCompletionWordSeparators(const QsciLexerIDL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerIDL_QBaseAutoCompletionWordSeparators(const QsciLexerIDL* self);
const char* QsciLexerIDL_BlockEnd(const QsciLexerIDL* self, int* style);
void QsciLexerIDL_OnBlockEnd(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_QBaseBlockEnd(const QsciLexerIDL* self, int* style);
const char* QsciLexerIDL_BlockStart(const QsciLexerIDL* self, int* style);
void QsciLexerIDL_OnBlockStart(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_QBaseBlockStart(const QsciLexerIDL* self, int* style);
const char* QsciLexerIDL_BlockStartKeyword(const QsciLexerIDL* self, int* style);
void QsciLexerIDL_OnBlockStartKeyword(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_QBaseBlockStartKeyword(const QsciLexerIDL* self, int* style);
int QsciLexerIDL_BraceStyle(const QsciLexerIDL* self);
void QsciLexerIDL_OnBraceStyle(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseBraceStyle(const QsciLexerIDL* self);
bool QsciLexerIDL_DefaultEolFill(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultEolFill(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseDefaultEolFill(const QsciLexerIDL* self, int style);
void QsciLexerIDL_RefreshProperties(QsciLexerIDL* self);
void QsciLexerIDL_OnRefreshProperties(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_QBaseRefreshProperties(QsciLexerIDL* self);
const char* QsciLexerIDL_WordCharacters(const QsciLexerIDL* self);
void QsciLexerIDL_OnWordCharacters(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_QBaseWordCharacters(const QsciLexerIDL* self);
bool QsciLexerIDL_ReadProperties(QsciLexerIDL* self, QSettings* qs, libqt_string prefix);
void QsciLexerIDL_OnReadProperties(QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseReadProperties(QsciLexerIDL* self, QSettings* qs, libqt_string prefix);
bool QsciLexerIDL_WriteProperties(const QsciLexerIDL* self, QSettings* qs, libqt_string prefix);
void QsciLexerIDL_OnWriteProperties(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseWriteProperties(const QsciLexerIDL* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerIDL_Sender(const QsciLexerIDL* self);
void QsciLexerIDL_OnSender(const QsciLexerIDL* self, intptr_t slot);
QObject* QsciLexerIDL_QBaseSender(const QsciLexerIDL* self);
int QsciLexerIDL_SenderSignalIndex(const QsciLexerIDL* self);
void QsciLexerIDL_OnSenderSignalIndex(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseSenderSignalIndex(const QsciLexerIDL* self);
int QsciLexerIDL_Receivers(const QsciLexerIDL* self, const char* signal);
void QsciLexerIDL_OnReceivers(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_QBaseReceivers(const QsciLexerIDL* self, const char* signal);
bool QsciLexerIDL_IsSignalConnected(const QsciLexerIDL* self, QMetaMethod* signal);
void QsciLexerIDL_OnIsSignalConnected(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_QBaseIsSignalConnected(const QsciLexerIDL* self, QMetaMethod* signal);
void QsciLexerIDL_Delete(QsciLexerIDL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
