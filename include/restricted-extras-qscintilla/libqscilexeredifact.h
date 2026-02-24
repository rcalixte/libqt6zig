#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEREDIFACT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEREDIFACT_H

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
typedef struct QsciLexerEDIFACT QsciLexerEDIFACT;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerEDIFACT* QsciLexerEDIFACT_new();
QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent);
QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self);
void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1);
int QsciLexerEDIFACT_Metacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3);
const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style);
libqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnMetaObject(const QsciLexerEDIFACT* self, intptr_t slot);
QMetaObject* QsciLexerEDIFACT_SuperMetaObject(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnMetacast(QsciLexerEDIFACT* self, intptr_t slot);
void* QsciLexerEDIFACT_SuperMetacast(QsciLexerEDIFACT* self, const char* param1);
void QsciLexerEDIFACT_OnMetacall(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperMetacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3);
int QsciLexerEDIFACT_LexerId(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnLexerId(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperLexerId(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_AutoCompletionFillups(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnAutoCompletionFillups(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperAutoCompletionFillups(const QsciLexerEDIFACT* self);
libqt_list /* of libqt_string */ QsciLexerEDIFACT_AutoCompletionWordSeparators(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnAutoCompletionWordSeparators(const QsciLexerEDIFACT* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerEDIFACT_SuperAutoCompletionWordSeparators(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_BlockEnd(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockEnd(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperBlockEnd(const QsciLexerEDIFACT* self, int* style);
int QsciLexerEDIFACT_BlockLookback(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnBlockLookback(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperBlockLookback(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_BlockStart(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockStart(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperBlockStart(const QsciLexerEDIFACT* self, int* style);
const char* QsciLexerEDIFACT_BlockStartKeyword(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockStartKeyword(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperBlockStartKeyword(const QsciLexerEDIFACT* self, int* style);
int QsciLexerEDIFACT_BraceStyle(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnBraceStyle(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperBraceStyle(const QsciLexerEDIFACT* self);
bool QsciLexerEDIFACT_CaseSensitive(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnCaseSensitive(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperCaseSensitive(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_Color(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnColor(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperColor(const QsciLexerEDIFACT* self, int style);
bool QsciLexerEDIFACT_EolFill(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnEolFill(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperEolFill(const QsciLexerEDIFACT* self, int style);
QFont* QsciLexerEDIFACT_Font(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnFont(const QsciLexerEDIFACT* self, intptr_t slot);
QFont* QsciLexerEDIFACT_SuperFont(const QsciLexerEDIFACT* self, int style);
int QsciLexerEDIFACT_IndentationGuideView(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnIndentationGuideView(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperIndentationGuideView(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Keywords(const QsciLexerEDIFACT* self, int set);
void QsciLexerEDIFACT_OnKeywords(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperKeywords(const QsciLexerEDIFACT* self, int set);
int QsciLexerEDIFACT_DefaultStyle(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnDefaultStyle(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperDefaultStyle(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_Paper(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnPaper(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperPaper(const QsciLexerEDIFACT* self, int style);
QColor* QsciLexerEDIFACT_DefaultColor2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultColor2(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperDefaultColor2(const QsciLexerEDIFACT* self, int style);
bool QsciLexerEDIFACT_DefaultEolFill(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultEolFill(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperDefaultEolFill(const QsciLexerEDIFACT* self, int style);
QFont* QsciLexerEDIFACT_DefaultFont2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultFont2(const QsciLexerEDIFACT* self, intptr_t slot);
QFont* QsciLexerEDIFACT_SuperDefaultFont2(const QsciLexerEDIFACT* self, int style);
QColor* QsciLexerEDIFACT_DefaultPaper2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultPaper2(const QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperDefaultPaper2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_SetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor);
void QsciLexerEDIFACT_OnSetEditor(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor);
void QsciLexerEDIFACT_RefreshProperties(QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnRefreshProperties(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperRefreshProperties(QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_StyleBitsNeeded(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnStyleBitsNeeded(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperStyleBitsNeeded(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_WordCharacters(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnWordCharacters(const QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperWordCharacters(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_SetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle);
void QsciLexerEDIFACT_OnSetAutoIndentStyle(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle);
void QsciLexerEDIFACT_SetColor(QsciLexerEDIFACT* self, const QColor* c, int style);
void QsciLexerEDIFACT_OnSetColor(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetColor(QsciLexerEDIFACT* self, const QColor* c, int style);
void QsciLexerEDIFACT_SetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style);
void QsciLexerEDIFACT_OnSetEolFill(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style);
void QsciLexerEDIFACT_SetFont(QsciLexerEDIFACT* self, const QFont* f, int style);
void QsciLexerEDIFACT_OnSetFont(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetFont(QsciLexerEDIFACT* self, const QFont* f, int style);
void QsciLexerEDIFACT_SetPaper(QsciLexerEDIFACT* self, const QColor* c, int style);
void QsciLexerEDIFACT_OnSetPaper(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetPaper(QsciLexerEDIFACT* self, const QColor* c, int style);
bool QsciLexerEDIFACT_ReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
void QsciLexerEDIFACT_OnReadProperties(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerEDIFACT_WriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
void QsciLexerEDIFACT_OnWriteProperties(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerEDIFACT_Event(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_OnEvent(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperEvent(QsciLexerEDIFACT* self, QEvent* event);
bool QsciLexerEDIFACT_EventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event);
void QsciLexerEDIFACT_OnEventFilter(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperEventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event);
void QsciLexerEDIFACT_TimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
void QsciLexerEDIFACT_OnTimerEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
void QsciLexerEDIFACT_ChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
void QsciLexerEDIFACT_OnChildEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
void QsciLexerEDIFACT_CustomEvent(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_OnCustomEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperCustomEvent(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_ConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_OnConnectNotify(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_DisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_OnDisconnectNotify(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperDisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
libqt_string QsciLexerEDIFACT_TextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text);
void QsciLexerEDIFACT_OnTextAsBytes(const QsciLexerEDIFACT* self, intptr_t slot);
libqt_string QsciLexerEDIFACT_SuperTextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text);
libqt_string QsciLexerEDIFACT_BytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size);
void QsciLexerEDIFACT_OnBytesAsText(const QsciLexerEDIFACT* self, intptr_t slot);
libqt_string QsciLexerEDIFACT_SuperBytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size);
QObject* QsciLexerEDIFACT_Sender(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnSender(const QsciLexerEDIFACT* self, intptr_t slot);
QObject* QsciLexerEDIFACT_SuperSender(const QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_SenderSignalIndex(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnSenderSignalIndex(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperSenderSignalIndex(const QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_Receivers(const QsciLexerEDIFACT* self, const char* signal);
void QsciLexerEDIFACT_OnReceivers(const QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperReceivers(const QsciLexerEDIFACT* self, const char* signal);
bool QsciLexerEDIFACT_IsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_OnIsSignalConnected(const QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperIsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
