#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCUSTOM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCUSTOM_H

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
typedef struct QsciLexerCustom QsciLexerCustom;
typedef struct QsciScintilla QsciScintilla;
typedef struct QsciStyle QsciStyle;
#endif

QsciLexerCustom* QsciLexerCustom_new();
QsciLexerCustom* QsciLexerCustom_new2(QObject* parent);
QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self);
void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1);
int QsciLexerCustom_Metacall(QsciLexerCustom* self, int param1, int param2, void** param3);
void QsciLexerCustom_OnMetacall(QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseMetacall(QsciLexerCustom* self, int param1, int param2, void** param3);
libqt_string QsciLexerCustom_Tr(const char* s);
void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style);
void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, QsciStyle* style);
void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos);
void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end);
void QsciLexerCustom_OnStyleText(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseStyleText(QsciLexerCustom* self, int start, int end);
void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor);
void QsciLexerCustom_OnSetEditor(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseSetEditor(QsciLexerCustom* self, QsciScintilla* editor);
int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self);
void QsciLexerCustom_OnStyleBitsNeeded(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseStyleBitsNeeded(const QsciLexerCustom* self);
libqt_string QsciLexerCustom_Tr2(const char* s, const char* c);
libqt_string QsciLexerCustom_Tr3(const char* s, const char* c, int n);
void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits);
const char* QsciLexerCustom_Language(const QsciLexerCustom* self);
void QsciLexerCustom_OnLanguage(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseLanguage(const QsciLexerCustom* self);
const char* QsciLexerCustom_Lexer(const QsciLexerCustom* self);
void QsciLexerCustom_OnLexer(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseLexer(const QsciLexerCustom* self);
int QsciLexerCustom_LexerId(const QsciLexerCustom* self);
void QsciLexerCustom_OnLexerId(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseLexerId(const QsciLexerCustom* self);
const char* QsciLexerCustom_AutoCompletionFillups(const QsciLexerCustom* self);
void QsciLexerCustom_OnAutoCompletionFillups(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseAutoCompletionFillups(const QsciLexerCustom* self);
libqt_list /* of libqt_string */ QsciLexerCustom_AutoCompletionWordSeparators(const QsciLexerCustom* self);
void QsciLexerCustom_OnAutoCompletionWordSeparators(const QsciLexerCustom* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerCustom_QBaseAutoCompletionWordSeparators(const QsciLexerCustom* self);
const char* QsciLexerCustom_BlockEnd(const QsciLexerCustom* self, int* style);
void QsciLexerCustom_OnBlockEnd(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseBlockEnd(const QsciLexerCustom* self, int* style);
int QsciLexerCustom_BlockLookback(const QsciLexerCustom* self);
void QsciLexerCustom_OnBlockLookback(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseBlockLookback(const QsciLexerCustom* self);
const char* QsciLexerCustom_BlockStart(const QsciLexerCustom* self, int* style);
void QsciLexerCustom_OnBlockStart(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseBlockStart(const QsciLexerCustom* self, int* style);
const char* QsciLexerCustom_BlockStartKeyword(const QsciLexerCustom* self, int* style);
void QsciLexerCustom_OnBlockStartKeyword(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseBlockStartKeyword(const QsciLexerCustom* self, int* style);
int QsciLexerCustom_BraceStyle(const QsciLexerCustom* self);
void QsciLexerCustom_OnBraceStyle(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseBraceStyle(const QsciLexerCustom* self);
bool QsciLexerCustom_CaseSensitive(const QsciLexerCustom* self);
void QsciLexerCustom_OnCaseSensitive(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseCaseSensitive(const QsciLexerCustom* self);
QColor* QsciLexerCustom_Color(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnColor(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_QBaseColor(const QsciLexerCustom* self, int style);
bool QsciLexerCustom_EolFill(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnEolFill(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseEolFill(const QsciLexerCustom* self, int style);
QFont* QsciLexerCustom_Font(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnFont(const QsciLexerCustom* self, intptr_t slot);
QFont* QsciLexerCustom_QBaseFont(const QsciLexerCustom* self, int style);
int QsciLexerCustom_IndentationGuideView(const QsciLexerCustom* self);
void QsciLexerCustom_OnIndentationGuideView(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseIndentationGuideView(const QsciLexerCustom* self);
const char* QsciLexerCustom_Keywords(const QsciLexerCustom* self, int set);
void QsciLexerCustom_OnKeywords(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseKeywords(const QsciLexerCustom* self, int set);
int QsciLexerCustom_DefaultStyle(const QsciLexerCustom* self);
void QsciLexerCustom_OnDefaultStyle(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseDefaultStyle(const QsciLexerCustom* self);
libqt_string QsciLexerCustom_Description(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDescription(const QsciLexerCustom* self, intptr_t slot);
libqt_string QsciLexerCustom_QBaseDescription(const QsciLexerCustom* self, int style);
QColor* QsciLexerCustom_Paper(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnPaper(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_QBasePaper(const QsciLexerCustom* self, int style);
QColor* QsciLexerCustom_DefaultColorWithStyle(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultColorWithStyle(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_QBaseDefaultColorWithStyle(const QsciLexerCustom* self, int style);
bool QsciLexerCustom_DefaultEolFill(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultEolFill(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseDefaultEolFill(const QsciLexerCustom* self, int style);
QFont* QsciLexerCustom_DefaultFontWithStyle(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultFontWithStyle(const QsciLexerCustom* self, intptr_t slot);
QFont* QsciLexerCustom_QBaseDefaultFontWithStyle(const QsciLexerCustom* self, int style);
QColor* QsciLexerCustom_DefaultPaperWithStyle(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultPaperWithStyle(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_QBaseDefaultPaperWithStyle(const QsciLexerCustom* self, int style);
void QsciLexerCustom_RefreshProperties(QsciLexerCustom* self);
void QsciLexerCustom_OnRefreshProperties(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseRefreshProperties(QsciLexerCustom* self);
const char* QsciLexerCustom_WordCharacters(const QsciLexerCustom* self);
void QsciLexerCustom_OnWordCharacters(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_QBaseWordCharacters(const QsciLexerCustom* self);
void QsciLexerCustom_SetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle);
void QsciLexerCustom_OnSetAutoIndentStyle(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseSetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle);
void QsciLexerCustom_SetColor(QsciLexerCustom* self, QColor* c, int style);
void QsciLexerCustom_OnSetColor(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseSetColor(QsciLexerCustom* self, QColor* c, int style);
void QsciLexerCustom_SetEolFill(QsciLexerCustom* self, bool eoffill, int style);
void QsciLexerCustom_OnSetEolFill(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseSetEolFill(QsciLexerCustom* self, bool eoffill, int style);
void QsciLexerCustom_SetFont(QsciLexerCustom* self, QFont* f, int style);
void QsciLexerCustom_OnSetFont(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseSetFont(QsciLexerCustom* self, QFont* f, int style);
void QsciLexerCustom_SetPaper(QsciLexerCustom* self, QColor* c, int style);
void QsciLexerCustom_OnSetPaper(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseSetPaper(QsciLexerCustom* self, QColor* c, int style);
bool QsciLexerCustom_ReadProperties(QsciLexerCustom* self, QSettings* qs, libqt_string prefix);
void QsciLexerCustom_OnReadProperties(QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseReadProperties(QsciLexerCustom* self, QSettings* qs, libqt_string prefix);
bool QsciLexerCustom_Event(QsciLexerCustom* self, QEvent* event);
void QsciLexerCustom_OnEvent(QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseEvent(QsciLexerCustom* self, QEvent* event);
bool QsciLexerCustom_EventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event);
void QsciLexerCustom_OnEventFilter(QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseEventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event);
void QsciLexerCustom_TimerEvent(QsciLexerCustom* self, QTimerEvent* event);
void QsciLexerCustom_OnTimerEvent(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseTimerEvent(QsciLexerCustom* self, QTimerEvent* event);
void QsciLexerCustom_ChildEvent(QsciLexerCustom* self, QChildEvent* event);
void QsciLexerCustom_OnChildEvent(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseChildEvent(QsciLexerCustom* self, QChildEvent* event);
void QsciLexerCustom_CustomEvent(QsciLexerCustom* self, QEvent* event);
void QsciLexerCustom_OnCustomEvent(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseCustomEvent(QsciLexerCustom* self, QEvent* event);
void QsciLexerCustom_ConnectNotify(QsciLexerCustom* self, QMetaMethod* signal);
void QsciLexerCustom_OnConnectNotify(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseConnectNotify(QsciLexerCustom* self, QMetaMethod* signal);
void QsciLexerCustom_DisconnectNotify(QsciLexerCustom* self, QMetaMethod* signal);
void QsciLexerCustom_OnDisconnectNotify(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_QBaseDisconnectNotify(QsciLexerCustom* self, QMetaMethod* signal);
bool QsciLexerCustom_WriteProperties(const QsciLexerCustom* self, QSettings* qs, libqt_string prefix);
void QsciLexerCustom_OnWriteProperties(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseWriteProperties(const QsciLexerCustom* self, QSettings* qs, libqt_string prefix);
QObject* QsciLexerCustom_Sender(const QsciLexerCustom* self);
void QsciLexerCustom_OnSender(const QsciLexerCustom* self, intptr_t slot);
QObject* QsciLexerCustom_QBaseSender(const QsciLexerCustom* self);
int QsciLexerCustom_SenderSignalIndex(const QsciLexerCustom* self);
void QsciLexerCustom_OnSenderSignalIndex(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseSenderSignalIndex(const QsciLexerCustom* self);
int QsciLexerCustom_Receivers(const QsciLexerCustom* self, const char* signal);
void QsciLexerCustom_OnReceivers(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_QBaseReceivers(const QsciLexerCustom* self, const char* signal);
bool QsciLexerCustom_IsSignalConnected(const QsciLexerCustom* self, QMetaMethod* signal);
void QsciLexerCustom_OnIsSignalConnected(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_QBaseIsSignalConnected(const QsciLexerCustom* self, QMetaMethod* signal);
void QsciLexerCustom_Delete(QsciLexerCustom* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
