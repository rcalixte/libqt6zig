#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERHEX_H

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
typedef struct QsciLexerHex QsciLexerHex;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerHex* QsciLexerHex_new();
QsciLexerHex* QsciLexerHex_new2(QObject* parent);
QMetaObject* QsciLexerHex_MetaObject(const QsciLexerHex* self);
void* QsciLexerHex_Metacast(QsciLexerHex* self, const char* param1);
int QsciLexerHex_Metacall(QsciLexerHex* self, int param1, int param2, void** param3);
QColor* QsciLexerHex_DefaultColor(const QsciLexerHex* self, int style);
QFont* QsciLexerHex_DefaultFont(const QsciLexerHex* self, int style);
QColor* QsciLexerHex_DefaultPaper(const QsciLexerHex* self, int style);
libqt_string QsciLexerHex_Description(const QsciLexerHex* self, int style);
void QsciLexerHex_OnMetaObject(const QsciLexerHex* self, intptr_t slot);
QMetaObject* QsciLexerHex_SuperMetaObject(const QsciLexerHex* self);
void QsciLexerHex_OnMetacast(QsciLexerHex* self, intptr_t slot);
void* QsciLexerHex_SuperMetacast(QsciLexerHex* self, const char* param1);
void QsciLexerHex_OnMetacall(QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperMetacall(QsciLexerHex* self, int param1, int param2, void** param3);
const char* QsciLexerHex_Language(const QsciLexerHex* self);
void QsciLexerHex_OnLanguage(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperLanguage(const QsciLexerHex* self);
const char* QsciLexerHex_Lexer(const QsciLexerHex* self);
void QsciLexerHex_OnLexer(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperLexer(const QsciLexerHex* self);
int QsciLexerHex_LexerId(const QsciLexerHex* self);
void QsciLexerHex_OnLexerId(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperLexerId(const QsciLexerHex* self);
const char* QsciLexerHex_AutoCompletionFillups(const QsciLexerHex* self);
void QsciLexerHex_OnAutoCompletionFillups(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperAutoCompletionFillups(const QsciLexerHex* self);
libqt_list /* of libqt_string */ QsciLexerHex_AutoCompletionWordSeparators(const QsciLexerHex* self);
void QsciLexerHex_OnAutoCompletionWordSeparators(const QsciLexerHex* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerHex_SuperAutoCompletionWordSeparators(const QsciLexerHex* self);
const char* QsciLexerHex_BlockEnd(const QsciLexerHex* self, int* style);
void QsciLexerHex_OnBlockEnd(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperBlockEnd(const QsciLexerHex* self, int* style);
int QsciLexerHex_BlockLookback(const QsciLexerHex* self);
void QsciLexerHex_OnBlockLookback(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperBlockLookback(const QsciLexerHex* self);
const char* QsciLexerHex_BlockStart(const QsciLexerHex* self, int* style);
void QsciLexerHex_OnBlockStart(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperBlockStart(const QsciLexerHex* self, int* style);
const char* QsciLexerHex_BlockStartKeyword(const QsciLexerHex* self, int* style);
void QsciLexerHex_OnBlockStartKeyword(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperBlockStartKeyword(const QsciLexerHex* self, int* style);
int QsciLexerHex_BraceStyle(const QsciLexerHex* self);
void QsciLexerHex_OnBraceStyle(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperBraceStyle(const QsciLexerHex* self);
bool QsciLexerHex_CaseSensitive(const QsciLexerHex* self);
void QsciLexerHex_OnCaseSensitive(const QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperCaseSensitive(const QsciLexerHex* self);
QColor* QsciLexerHex_Color(const QsciLexerHex* self, int style);
void QsciLexerHex_OnColor(const QsciLexerHex* self, intptr_t slot);
QColor* QsciLexerHex_SuperColor(const QsciLexerHex* self, int style);
bool QsciLexerHex_EolFill(const QsciLexerHex* self, int style);
void QsciLexerHex_OnEolFill(const QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperEolFill(const QsciLexerHex* self, int style);
QFont* QsciLexerHex_Font(const QsciLexerHex* self, int style);
void QsciLexerHex_OnFont(const QsciLexerHex* self, intptr_t slot);
QFont* QsciLexerHex_SuperFont(const QsciLexerHex* self, int style);
int QsciLexerHex_IndentationGuideView(const QsciLexerHex* self);
void QsciLexerHex_OnIndentationGuideView(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperIndentationGuideView(const QsciLexerHex* self);
const char* QsciLexerHex_Keywords(const QsciLexerHex* self, int set);
void QsciLexerHex_OnKeywords(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperKeywords(const QsciLexerHex* self, int set);
int QsciLexerHex_DefaultStyle(const QsciLexerHex* self);
void QsciLexerHex_OnDefaultStyle(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperDefaultStyle(const QsciLexerHex* self);
QColor* QsciLexerHex_Paper(const QsciLexerHex* self, int style);
void QsciLexerHex_OnPaper(const QsciLexerHex* self, intptr_t slot);
QColor* QsciLexerHex_SuperPaper(const QsciLexerHex* self, int style);
QColor* QsciLexerHex_DefaultColor2(const QsciLexerHex* self, int style);
void QsciLexerHex_OnDefaultColor2(const QsciLexerHex* self, intptr_t slot);
QColor* QsciLexerHex_SuperDefaultColor2(const QsciLexerHex* self, int style);
bool QsciLexerHex_DefaultEolFill(const QsciLexerHex* self, int style);
void QsciLexerHex_OnDefaultEolFill(const QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperDefaultEolFill(const QsciLexerHex* self, int style);
QFont* QsciLexerHex_DefaultFont2(const QsciLexerHex* self, int style);
void QsciLexerHex_OnDefaultFont2(const QsciLexerHex* self, intptr_t slot);
QFont* QsciLexerHex_SuperDefaultFont2(const QsciLexerHex* self, int style);
QColor* QsciLexerHex_DefaultPaper2(const QsciLexerHex* self, int style);
void QsciLexerHex_OnDefaultPaper2(const QsciLexerHex* self, intptr_t slot);
QColor* QsciLexerHex_SuperDefaultPaper2(const QsciLexerHex* self, int style);
void QsciLexerHex_SetEditor(QsciLexerHex* self, QsciScintilla* editor);
void QsciLexerHex_OnSetEditor(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperSetEditor(QsciLexerHex* self, QsciScintilla* editor);
void QsciLexerHex_RefreshProperties(QsciLexerHex* self);
void QsciLexerHex_OnRefreshProperties(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperRefreshProperties(QsciLexerHex* self);
int QsciLexerHex_StyleBitsNeeded(const QsciLexerHex* self);
void QsciLexerHex_OnStyleBitsNeeded(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperStyleBitsNeeded(const QsciLexerHex* self);
const char* QsciLexerHex_WordCharacters(const QsciLexerHex* self);
void QsciLexerHex_OnWordCharacters(const QsciLexerHex* self, intptr_t slot);
const char* QsciLexerHex_SuperWordCharacters(const QsciLexerHex* self);
void QsciLexerHex_SetAutoIndentStyle(QsciLexerHex* self, int autoindentstyle);
void QsciLexerHex_OnSetAutoIndentStyle(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperSetAutoIndentStyle(QsciLexerHex* self, int autoindentstyle);
void QsciLexerHex_SetColor(QsciLexerHex* self, const QColor* c, int style);
void QsciLexerHex_OnSetColor(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperSetColor(QsciLexerHex* self, const QColor* c, int style);
void QsciLexerHex_SetEolFill(QsciLexerHex* self, bool eoffill, int style);
void QsciLexerHex_OnSetEolFill(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperSetEolFill(QsciLexerHex* self, bool eoffill, int style);
void QsciLexerHex_SetFont(QsciLexerHex* self, const QFont* f, int style);
void QsciLexerHex_OnSetFont(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperSetFont(QsciLexerHex* self, const QFont* f, int style);
void QsciLexerHex_SetPaper(QsciLexerHex* self, const QColor* c, int style);
void QsciLexerHex_OnSetPaper(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperSetPaper(QsciLexerHex* self, const QColor* c, int style);
bool QsciLexerHex_ReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerHex_OnReadProperties(QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerHex_WriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerHex_OnWriteProperties(const QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperWriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerHex_Event(QsciLexerHex* self, QEvent* event);
void QsciLexerHex_OnEvent(QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperEvent(QsciLexerHex* self, QEvent* event);
bool QsciLexerHex_EventFilter(QsciLexerHex* self, QObject* watched, QEvent* event);
void QsciLexerHex_OnEventFilter(QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperEventFilter(QsciLexerHex* self, QObject* watched, QEvent* event);
void QsciLexerHex_TimerEvent(QsciLexerHex* self, QTimerEvent* event);
void QsciLexerHex_OnTimerEvent(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperTimerEvent(QsciLexerHex* self, QTimerEvent* event);
void QsciLexerHex_ChildEvent(QsciLexerHex* self, QChildEvent* event);
void QsciLexerHex_OnChildEvent(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperChildEvent(QsciLexerHex* self, QChildEvent* event);
void QsciLexerHex_CustomEvent(QsciLexerHex* self, QEvent* event);
void QsciLexerHex_OnCustomEvent(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperCustomEvent(QsciLexerHex* self, QEvent* event);
void QsciLexerHex_ConnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
void QsciLexerHex_OnConnectNotify(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperConnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
void QsciLexerHex_DisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
void QsciLexerHex_OnDisconnectNotify(QsciLexerHex* self, intptr_t slot);
void QsciLexerHex_SuperDisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
libqt_string QsciLexerHex_TextAsBytes(const QsciLexerHex* self, const libqt_string text);
void QsciLexerHex_OnTextAsBytes(const QsciLexerHex* self, intptr_t slot);
libqt_string QsciLexerHex_SuperTextAsBytes(const QsciLexerHex* self, const libqt_string text);
libqt_string QsciLexerHex_BytesAsText(const QsciLexerHex* self, const char* bytes, int size);
void QsciLexerHex_OnBytesAsText(const QsciLexerHex* self, intptr_t slot);
libqt_string QsciLexerHex_SuperBytesAsText(const QsciLexerHex* self, const char* bytes, int size);
QObject* QsciLexerHex_Sender(const QsciLexerHex* self);
void QsciLexerHex_OnSender(const QsciLexerHex* self, intptr_t slot);
QObject* QsciLexerHex_SuperSender(const QsciLexerHex* self);
int QsciLexerHex_SenderSignalIndex(const QsciLexerHex* self);
void QsciLexerHex_OnSenderSignalIndex(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperSenderSignalIndex(const QsciLexerHex* self);
int QsciLexerHex_Receivers(const QsciLexerHex* self, const char* signal);
void QsciLexerHex_OnReceivers(const QsciLexerHex* self, intptr_t slot);
int QsciLexerHex_SuperReceivers(const QsciLexerHex* self, const char* signal);
bool QsciLexerHex_IsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal);
void QsciLexerHex_OnIsSignalConnected(const QsciLexerHex* self, intptr_t slot);
bool QsciLexerHex_SuperIsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal);
void QsciLexerHex_Delete(QsciLexerHex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
