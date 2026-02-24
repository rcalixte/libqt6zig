#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTEKHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTEKHEX_H

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
typedef struct QsciLexerTekHex QsciLexerTekHex;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerTekHex* QsciLexerTekHex_new();
QsciLexerTekHex* QsciLexerTekHex_new2(QObject* parent);
QMetaObject* QsciLexerTekHex_MetaObject(const QsciLexerTekHex* self);
void* QsciLexerTekHex_Metacast(QsciLexerTekHex* self, const char* param1);
int QsciLexerTekHex_Metacall(QsciLexerTekHex* self, int param1, int param2, void** param3);
const char* QsciLexerTekHex_Language(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_Lexer(const QsciLexerTekHex* self);
libqt_string QsciLexerTekHex_Description(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnMetaObject(const QsciLexerTekHex* self, intptr_t slot);
QMetaObject* QsciLexerTekHex_SuperMetaObject(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnMetacast(QsciLexerTekHex* self, intptr_t slot);
void* QsciLexerTekHex_SuperMetacast(QsciLexerTekHex* self, const char* param1);
void QsciLexerTekHex_OnMetacall(QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperMetacall(QsciLexerTekHex* self, int param1, int param2, void** param3);
int QsciLexerTekHex_LexerId(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnLexerId(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperLexerId(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_AutoCompletionFillups(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnAutoCompletionFillups(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_SuperAutoCompletionFillups(const QsciLexerTekHex* self);
libqt_list /* of libqt_string */ QsciLexerTekHex_AutoCompletionWordSeparators(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnAutoCompletionWordSeparators(const QsciLexerTekHex* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerTekHex_SuperAutoCompletionWordSeparators(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_BlockEnd(const QsciLexerTekHex* self, int* style);
void QsciLexerTekHex_OnBlockEnd(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_SuperBlockEnd(const QsciLexerTekHex* self, int* style);
int QsciLexerTekHex_BlockLookback(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnBlockLookback(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperBlockLookback(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_BlockStart(const QsciLexerTekHex* self, int* style);
void QsciLexerTekHex_OnBlockStart(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_SuperBlockStart(const QsciLexerTekHex* self, int* style);
const char* QsciLexerTekHex_BlockStartKeyword(const QsciLexerTekHex* self, int* style);
void QsciLexerTekHex_OnBlockStartKeyword(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_SuperBlockStartKeyword(const QsciLexerTekHex* self, int* style);
int QsciLexerTekHex_BraceStyle(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnBraceStyle(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperBraceStyle(const QsciLexerTekHex* self);
bool QsciLexerTekHex_CaseSensitive(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnCaseSensitive(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperCaseSensitive(const QsciLexerTekHex* self);
QColor* QsciLexerTekHex_Color(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnColor(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_SuperColor(const QsciLexerTekHex* self, int style);
bool QsciLexerTekHex_EolFill(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnEolFill(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperEolFill(const QsciLexerTekHex* self, int style);
QFont* QsciLexerTekHex_Font(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnFont(const QsciLexerTekHex* self, intptr_t slot);
QFont* QsciLexerTekHex_SuperFont(const QsciLexerTekHex* self, int style);
int QsciLexerTekHex_IndentationGuideView(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnIndentationGuideView(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperIndentationGuideView(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_Keywords(const QsciLexerTekHex* self, int set);
void QsciLexerTekHex_OnKeywords(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_SuperKeywords(const QsciLexerTekHex* self, int set);
int QsciLexerTekHex_DefaultStyle(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnDefaultStyle(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperDefaultStyle(const QsciLexerTekHex* self);
QColor* QsciLexerTekHex_Paper(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnPaper(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_SuperPaper(const QsciLexerTekHex* self, int style);
QColor* QsciLexerTekHex_DefaultColor2(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultColor2(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_SuperDefaultColor2(const QsciLexerTekHex* self, int style);
bool QsciLexerTekHex_DefaultEolFill(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultEolFill(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperDefaultEolFill(const QsciLexerTekHex* self, int style);
QFont* QsciLexerTekHex_DefaultFont2(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultFont2(const QsciLexerTekHex* self, intptr_t slot);
QFont* QsciLexerTekHex_SuperDefaultFont2(const QsciLexerTekHex* self, int style);
QColor* QsciLexerTekHex_DefaultPaper2(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_OnDefaultPaper2(const QsciLexerTekHex* self, intptr_t slot);
QColor* QsciLexerTekHex_SuperDefaultPaper2(const QsciLexerTekHex* self, int style);
void QsciLexerTekHex_SetEditor(QsciLexerTekHex* self, QsciScintilla* editor);
void QsciLexerTekHex_OnSetEditor(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperSetEditor(QsciLexerTekHex* self, QsciScintilla* editor);
void QsciLexerTekHex_RefreshProperties(QsciLexerTekHex* self);
void QsciLexerTekHex_OnRefreshProperties(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperRefreshProperties(QsciLexerTekHex* self);
int QsciLexerTekHex_StyleBitsNeeded(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnStyleBitsNeeded(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperStyleBitsNeeded(const QsciLexerTekHex* self);
const char* QsciLexerTekHex_WordCharacters(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnWordCharacters(const QsciLexerTekHex* self, intptr_t slot);
const char* QsciLexerTekHex_SuperWordCharacters(const QsciLexerTekHex* self);
void QsciLexerTekHex_SetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle);
void QsciLexerTekHex_OnSetAutoIndentStyle(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperSetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle);
void QsciLexerTekHex_SetColor(QsciLexerTekHex* self, const QColor* c, int style);
void QsciLexerTekHex_OnSetColor(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperSetColor(QsciLexerTekHex* self, const QColor* c, int style);
void QsciLexerTekHex_SetEolFill(QsciLexerTekHex* self, bool eoffill, int style);
void QsciLexerTekHex_OnSetEolFill(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperSetEolFill(QsciLexerTekHex* self, bool eoffill, int style);
void QsciLexerTekHex_SetFont(QsciLexerTekHex* self, const QFont* f, int style);
void QsciLexerTekHex_OnSetFont(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperSetFont(QsciLexerTekHex* self, const QFont* f, int style);
void QsciLexerTekHex_SetPaper(QsciLexerTekHex* self, const QColor* c, int style);
void QsciLexerTekHex_OnSetPaper(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperSetPaper(QsciLexerTekHex* self, const QColor* c, int style);
bool QsciLexerTekHex_ReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTekHex_OnReadProperties(QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTekHex_WriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTekHex_OnWriteProperties(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperWriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTekHex_Event(QsciLexerTekHex* self, QEvent* event);
void QsciLexerTekHex_OnEvent(QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperEvent(QsciLexerTekHex* self, QEvent* event);
bool QsciLexerTekHex_EventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event);
void QsciLexerTekHex_OnEventFilter(QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperEventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event);
void QsciLexerTekHex_TimerEvent(QsciLexerTekHex* self, QTimerEvent* event);
void QsciLexerTekHex_OnTimerEvent(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperTimerEvent(QsciLexerTekHex* self, QTimerEvent* event);
void QsciLexerTekHex_ChildEvent(QsciLexerTekHex* self, QChildEvent* event);
void QsciLexerTekHex_OnChildEvent(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperChildEvent(QsciLexerTekHex* self, QChildEvent* event);
void QsciLexerTekHex_CustomEvent(QsciLexerTekHex* self, QEvent* event);
void QsciLexerTekHex_OnCustomEvent(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperCustomEvent(QsciLexerTekHex* self, QEvent* event);
void QsciLexerTekHex_ConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_OnConnectNotify(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_DisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_OnDisconnectNotify(QsciLexerTekHex* self, intptr_t slot);
void QsciLexerTekHex_SuperDisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
libqt_string QsciLexerTekHex_TextAsBytes(const QsciLexerTekHex* self, const libqt_string text);
void QsciLexerTekHex_OnTextAsBytes(const QsciLexerTekHex* self, intptr_t slot);
libqt_string QsciLexerTekHex_SuperTextAsBytes(const QsciLexerTekHex* self, const libqt_string text);
libqt_string QsciLexerTekHex_BytesAsText(const QsciLexerTekHex* self, const char* bytes, int size);
void QsciLexerTekHex_OnBytesAsText(const QsciLexerTekHex* self, intptr_t slot);
libqt_string QsciLexerTekHex_SuperBytesAsText(const QsciLexerTekHex* self, const char* bytes, int size);
QObject* QsciLexerTekHex_Sender(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnSender(const QsciLexerTekHex* self, intptr_t slot);
QObject* QsciLexerTekHex_SuperSender(const QsciLexerTekHex* self);
int QsciLexerTekHex_SenderSignalIndex(const QsciLexerTekHex* self);
void QsciLexerTekHex_OnSenderSignalIndex(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperSenderSignalIndex(const QsciLexerTekHex* self);
int QsciLexerTekHex_Receivers(const QsciLexerTekHex* self, const char* signal);
void QsciLexerTekHex_OnReceivers(const QsciLexerTekHex* self, intptr_t slot);
int QsciLexerTekHex_SuperReceivers(const QsciLexerTekHex* self, const char* signal);
bool QsciLexerTekHex_IsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_OnIsSignalConnected(const QsciLexerTekHex* self, intptr_t slot);
bool QsciLexerTekHex_SuperIsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal);
void QsciLexerTekHex_Delete(QsciLexerTekHex* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
