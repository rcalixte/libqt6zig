#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXER_H

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
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexer* QsciLexer_new();
QsciLexer* QsciLexer_new2(QObject* parent);
QMetaObject* QsciLexer_MetaObject(const QsciLexer* self);
void* QsciLexer_Metacast(QsciLexer* self, const char* param1);
int QsciLexer_Metacall(QsciLexer* self, int param1, int param2, void** param3);
void QsciLexer_OnMetacall(QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseMetacall(QsciLexer* self, int param1, int param2, void** param3);
libqt_string QsciLexer_Tr(const char* s);
const char* QsciLexer_Language(const QsciLexer* self);
void QsciLexer_OnLanguage(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseLanguage(const QsciLexer* self);
const char* QsciLexer_Lexer(const QsciLexer* self);
void QsciLexer_OnLexer(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseLexer(const QsciLexer* self);
int QsciLexer_LexerId(const QsciLexer* self);
void QsciLexer_OnLexerId(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseLexerId(const QsciLexer* self);
QsciAbstractAPIs* QsciLexer_Apis(const QsciLexer* self);
const char* QsciLexer_AutoCompletionFillups(const QsciLexer* self);
void QsciLexer_OnAutoCompletionFillups(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseAutoCompletionFillups(const QsciLexer* self);
libqt_list /* of libqt_string */ QsciLexer_AutoCompletionWordSeparators(const QsciLexer* self);
void QsciLexer_OnAutoCompletionWordSeparators(const QsciLexer* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexer_QBaseAutoCompletionWordSeparators(const QsciLexer* self);
int QsciLexer_AutoIndentStyle(QsciLexer* self);
const char* QsciLexer_BlockEnd(const QsciLexer* self, int* style);
void QsciLexer_OnBlockEnd(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseBlockEnd(const QsciLexer* self, int* style);
int QsciLexer_BlockLookback(const QsciLexer* self);
void QsciLexer_OnBlockLookback(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseBlockLookback(const QsciLexer* self);
const char* QsciLexer_BlockStart(const QsciLexer* self, int* style);
void QsciLexer_OnBlockStart(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseBlockStart(const QsciLexer* self, int* style);
const char* QsciLexer_BlockStartKeyword(const QsciLexer* self, int* style);
void QsciLexer_OnBlockStartKeyword(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseBlockStartKeyword(const QsciLexer* self, int* style);
int QsciLexer_BraceStyle(const QsciLexer* self);
void QsciLexer_OnBraceStyle(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseBraceStyle(const QsciLexer* self);
bool QsciLexer_CaseSensitive(const QsciLexer* self);
void QsciLexer_OnCaseSensitive(const QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseCaseSensitive(const QsciLexer* self);
QColor* QsciLexer_Color(const QsciLexer* self, int style);
void QsciLexer_OnColor(const QsciLexer* self, intptr_t slot);
QColor* QsciLexer_QBaseColor(const QsciLexer* self, int style);
bool QsciLexer_EolFill(const QsciLexer* self, int style);
void QsciLexer_OnEolFill(const QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseEolFill(const QsciLexer* self, int style);
QFont* QsciLexer_Font(const QsciLexer* self, int style);
void QsciLexer_OnFont(const QsciLexer* self, intptr_t slot);
QFont* QsciLexer_QBaseFont(const QsciLexer* self, int style);
int QsciLexer_IndentationGuideView(const QsciLexer* self);
void QsciLexer_OnIndentationGuideView(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseIndentationGuideView(const QsciLexer* self);
const char* QsciLexer_Keywords(const QsciLexer* self, int set);
void QsciLexer_OnKeywords(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseKeywords(const QsciLexer* self, int set);
int QsciLexer_DefaultStyle(const QsciLexer* self);
void QsciLexer_OnDefaultStyle(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseDefaultStyle(const QsciLexer* self);
libqt_string QsciLexer_Description(const QsciLexer* self, int style);
void QsciLexer_OnDescription(const QsciLexer* self, intptr_t slot);
libqt_string QsciLexer_QBaseDescription(const QsciLexer* self, int style);
QColor* QsciLexer_Paper(const QsciLexer* self, int style);
void QsciLexer_OnPaper(const QsciLexer* self, intptr_t slot);
QColor* QsciLexer_QBasePaper(const QsciLexer* self, int style);
QColor* QsciLexer_DefaultColor(const QsciLexer* self);
QColor* QsciLexer_DefaultColorWithStyle(const QsciLexer* self, int style);
void QsciLexer_OnDefaultColorWithStyle(const QsciLexer* self, intptr_t slot);
QColor* QsciLexer_QBaseDefaultColorWithStyle(const QsciLexer* self, int style);
bool QsciLexer_DefaultEolFill(const QsciLexer* self, int style);
void QsciLexer_OnDefaultEolFill(const QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseDefaultEolFill(const QsciLexer* self, int style);
QFont* QsciLexer_DefaultFont(const QsciLexer* self);
QFont* QsciLexer_DefaultFontWithStyle(const QsciLexer* self, int style);
void QsciLexer_OnDefaultFontWithStyle(const QsciLexer* self, intptr_t slot);
QFont* QsciLexer_QBaseDefaultFontWithStyle(const QsciLexer* self, int style);
QColor* QsciLexer_DefaultPaper(const QsciLexer* self);
QColor* QsciLexer_DefaultPaperWithStyle(const QsciLexer* self, int style);
void QsciLexer_OnDefaultPaperWithStyle(const QsciLexer* self, intptr_t slot);
QColor* QsciLexer_QBaseDefaultPaperWithStyle(const QsciLexer* self, int style);
QsciScintilla* QsciLexer_Editor(const QsciLexer* self);
void QsciLexer_SetAPIs(QsciLexer* self, QsciAbstractAPIs* apis);
void QsciLexer_SetDefaultColor(QsciLexer* self, QColor* c);
void QsciLexer_SetDefaultFont(QsciLexer* self, QFont* f);
void QsciLexer_SetDefaultPaper(QsciLexer* self, QColor* c);
void QsciLexer_SetEditor(QsciLexer* self, QsciScintilla* editor);
void QsciLexer_OnSetEditor(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseSetEditor(QsciLexer* self, QsciScintilla* editor);
bool QsciLexer_ReadSettings(QsciLexer* self, QSettings* qs);
void QsciLexer_RefreshProperties(QsciLexer* self);
void QsciLexer_OnRefreshProperties(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseRefreshProperties(QsciLexer* self);
int QsciLexer_StyleBitsNeeded(const QsciLexer* self);
void QsciLexer_OnStyleBitsNeeded(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseStyleBitsNeeded(const QsciLexer* self);
const char* QsciLexer_WordCharacters(const QsciLexer* self);
void QsciLexer_OnWordCharacters(const QsciLexer* self, intptr_t slot);
const char* QsciLexer_QBaseWordCharacters(const QsciLexer* self);
bool QsciLexer_WriteSettings(const QsciLexer* self, QSettings* qs);
void QsciLexer_SetAutoIndentStyle(QsciLexer* self, int autoindentstyle);
void QsciLexer_OnSetAutoIndentStyle(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseSetAutoIndentStyle(QsciLexer* self, int autoindentstyle);
void QsciLexer_SetColor(QsciLexer* self, QColor* c, int style);
void QsciLexer_OnSetColor(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseSetColor(QsciLexer* self, QColor* c, int style);
void QsciLexer_SetEolFill(QsciLexer* self, bool eoffill, int style);
void QsciLexer_OnSetEolFill(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseSetEolFill(QsciLexer* self, bool eoffill, int style);
void QsciLexer_SetFont(QsciLexer* self, QFont* f, int style);
void QsciLexer_OnSetFont(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseSetFont(QsciLexer* self, QFont* f, int style);
void QsciLexer_SetPaper(QsciLexer* self, QColor* c, int style);
void QsciLexer_OnSetPaper(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseSetPaper(QsciLexer* self, QColor* c, int style);
void QsciLexer_ColorChanged(QsciLexer* self, QColor* c, int style);
void QsciLexer_Connect_ColorChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_EolFillChanged(QsciLexer* self, bool eolfilled, int style);
void QsciLexer_Connect_EolFillChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_FontChanged(QsciLexer* self, QFont* f, int style);
void QsciLexer_Connect_FontChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_PaperChanged(QsciLexer* self, QColor* c, int style);
void QsciLexer_Connect_PaperChanged(QsciLexer* self, intptr_t slot);
void QsciLexer_PropertyChanged(QsciLexer* self, const char* prop, const char* val);
void QsciLexer_Connect_PropertyChanged(QsciLexer* self, intptr_t slot);
bool QsciLexer_ReadProperties(QsciLexer* self, QSettings* qs, libqt_string prefix);
void QsciLexer_OnReadProperties(QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseReadProperties(QsciLexer* self, QSettings* qs, libqt_string prefix);
bool QsciLexer_WriteProperties(const QsciLexer* self, QSettings* qs, libqt_string prefix);
void QsciLexer_OnWriteProperties(const QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseWriteProperties(const QsciLexer* self, QSettings* qs, libqt_string prefix);
libqt_string QsciLexer_Tr2(const char* s, const char* c);
libqt_string QsciLexer_Tr3(const char* s, const char* c, int n);
bool QsciLexer_ReadSettings2(QsciLexer* self, QSettings* qs, const char* prefix);
bool QsciLexer_WriteSettings2(const QsciLexer* self, QSettings* qs, const char* prefix);
bool QsciLexer_Event(QsciLexer* self, QEvent* event);
void QsciLexer_OnEvent(QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseEvent(QsciLexer* self, QEvent* event);
bool QsciLexer_EventFilter(QsciLexer* self, QObject* watched, QEvent* event);
void QsciLexer_OnEventFilter(QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseEventFilter(QsciLexer* self, QObject* watched, QEvent* event);
void QsciLexer_TimerEvent(QsciLexer* self, QTimerEvent* event);
void QsciLexer_OnTimerEvent(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseTimerEvent(QsciLexer* self, QTimerEvent* event);
void QsciLexer_ChildEvent(QsciLexer* self, QChildEvent* event);
void QsciLexer_OnChildEvent(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseChildEvent(QsciLexer* self, QChildEvent* event);
void QsciLexer_CustomEvent(QsciLexer* self, QEvent* event);
void QsciLexer_OnCustomEvent(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseCustomEvent(QsciLexer* self, QEvent* event);
void QsciLexer_ConnectNotify(QsciLexer* self, QMetaMethod* signal);
void QsciLexer_OnConnectNotify(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseConnectNotify(QsciLexer* self, QMetaMethod* signal);
void QsciLexer_DisconnectNotify(QsciLexer* self, QMetaMethod* signal);
void QsciLexer_OnDisconnectNotify(QsciLexer* self, intptr_t slot);
void QsciLexer_QBaseDisconnectNotify(QsciLexer* self, QMetaMethod* signal);
QObject* QsciLexer_Sender(const QsciLexer* self);
void QsciLexer_OnSender(const QsciLexer* self, intptr_t slot);
QObject* QsciLexer_QBaseSender(const QsciLexer* self);
int QsciLexer_SenderSignalIndex(const QsciLexer* self);
void QsciLexer_OnSenderSignalIndex(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseSenderSignalIndex(const QsciLexer* self);
int QsciLexer_Receivers(const QsciLexer* self, const char* signal);
void QsciLexer_OnReceivers(const QsciLexer* self, intptr_t slot);
int QsciLexer_QBaseReceivers(const QsciLexer* self, const char* signal);
bool QsciLexer_IsSignalConnected(const QsciLexer* self, QMetaMethod* signal);
void QsciLexer_OnIsSignalConnected(const QsciLexer* self, intptr_t slot);
bool QsciLexer_QBaseIsSignalConnected(const QsciLexer* self, QMetaMethod* signal);
void QsciLexer_Delete(QsciLexer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
