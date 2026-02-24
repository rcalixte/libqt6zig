#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSPICE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSPICE_H

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
typedef struct QsciLexerSpice QsciLexerSpice;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSpice* QsciLexerSpice_new();
QsciLexerSpice* QsciLexerSpice_new2(QObject* parent);
QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self);
void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1);
int QsciLexerSpice_Metacall(QsciLexerSpice* self, int param1, int param2, void** param3);
const char* QsciLexerSpice_Language(const QsciLexerSpice* self);
const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self);
int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self);
const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set);
QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style);
libqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnMetaObject(const QsciLexerSpice* self, intptr_t slot);
QMetaObject* QsciLexerSpice_SuperMetaObject(const QsciLexerSpice* self);
void QsciLexerSpice_OnMetacast(QsciLexerSpice* self, intptr_t slot);
void* QsciLexerSpice_SuperMetacast(QsciLexerSpice* self, const char* param1);
void QsciLexerSpice_OnMetacall(QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperMetacall(QsciLexerSpice* self, int param1, int param2, void** param3);
int QsciLexerSpice_LexerId(const QsciLexerSpice* self);
void QsciLexerSpice_OnLexerId(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperLexerId(const QsciLexerSpice* self);
const char* QsciLexerSpice_AutoCompletionFillups(const QsciLexerSpice* self);
void QsciLexerSpice_OnAutoCompletionFillups(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_SuperAutoCompletionFillups(const QsciLexerSpice* self);
libqt_list /* of libqt_string */ QsciLexerSpice_AutoCompletionWordSeparators(const QsciLexerSpice* self);
void QsciLexerSpice_OnAutoCompletionWordSeparators(const QsciLexerSpice* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerSpice_SuperAutoCompletionWordSeparators(const QsciLexerSpice* self);
const char* QsciLexerSpice_BlockEnd(const QsciLexerSpice* self, int* style);
void QsciLexerSpice_OnBlockEnd(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_SuperBlockEnd(const QsciLexerSpice* self, int* style);
int QsciLexerSpice_BlockLookback(const QsciLexerSpice* self);
void QsciLexerSpice_OnBlockLookback(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperBlockLookback(const QsciLexerSpice* self);
const char* QsciLexerSpice_BlockStart(const QsciLexerSpice* self, int* style);
void QsciLexerSpice_OnBlockStart(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_SuperBlockStart(const QsciLexerSpice* self, int* style);
const char* QsciLexerSpice_BlockStartKeyword(const QsciLexerSpice* self, int* style);
void QsciLexerSpice_OnBlockStartKeyword(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_SuperBlockStartKeyword(const QsciLexerSpice* self, int* style);
bool QsciLexerSpice_CaseSensitive(const QsciLexerSpice* self);
void QsciLexerSpice_OnCaseSensitive(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperCaseSensitive(const QsciLexerSpice* self);
QColor* QsciLexerSpice_Color(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnColor(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_SuperColor(const QsciLexerSpice* self, int style);
bool QsciLexerSpice_EolFill(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnEolFill(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperEolFill(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_Font(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnFont(const QsciLexerSpice* self, intptr_t slot);
QFont* QsciLexerSpice_SuperFont(const QsciLexerSpice* self, int style);
int QsciLexerSpice_IndentationGuideView(const QsciLexerSpice* self);
void QsciLexerSpice_OnIndentationGuideView(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperIndentationGuideView(const QsciLexerSpice* self);
int QsciLexerSpice_DefaultStyle(const QsciLexerSpice* self);
void QsciLexerSpice_OnDefaultStyle(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperDefaultStyle(const QsciLexerSpice* self);
QColor* QsciLexerSpice_Paper(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnPaper(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_SuperPaper(const QsciLexerSpice* self, int style);
QColor* QsciLexerSpice_DefaultColor2(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultColor2(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_SuperDefaultColor2(const QsciLexerSpice* self, int style);
bool QsciLexerSpice_DefaultEolFill(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultEolFill(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperDefaultEolFill(const QsciLexerSpice* self, int style);
QFont* QsciLexerSpice_DefaultFont2(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultFont2(const QsciLexerSpice* self, intptr_t slot);
QFont* QsciLexerSpice_SuperDefaultFont2(const QsciLexerSpice* self, int style);
QColor* QsciLexerSpice_DefaultPaper2(const QsciLexerSpice* self, int style);
void QsciLexerSpice_OnDefaultPaper2(const QsciLexerSpice* self, intptr_t slot);
QColor* QsciLexerSpice_SuperDefaultPaper2(const QsciLexerSpice* self, int style);
void QsciLexerSpice_SetEditor(QsciLexerSpice* self, QsciScintilla* editor);
void QsciLexerSpice_OnSetEditor(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperSetEditor(QsciLexerSpice* self, QsciScintilla* editor);
void QsciLexerSpice_RefreshProperties(QsciLexerSpice* self);
void QsciLexerSpice_OnRefreshProperties(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperRefreshProperties(QsciLexerSpice* self);
int QsciLexerSpice_StyleBitsNeeded(const QsciLexerSpice* self);
void QsciLexerSpice_OnStyleBitsNeeded(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperStyleBitsNeeded(const QsciLexerSpice* self);
const char* QsciLexerSpice_WordCharacters(const QsciLexerSpice* self);
void QsciLexerSpice_OnWordCharacters(const QsciLexerSpice* self, intptr_t slot);
const char* QsciLexerSpice_SuperWordCharacters(const QsciLexerSpice* self);
void QsciLexerSpice_SetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle);
void QsciLexerSpice_OnSetAutoIndentStyle(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperSetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle);
void QsciLexerSpice_SetColor(QsciLexerSpice* self, const QColor* c, int style);
void QsciLexerSpice_OnSetColor(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperSetColor(QsciLexerSpice* self, const QColor* c, int style);
void QsciLexerSpice_SetEolFill(QsciLexerSpice* self, bool eoffill, int style);
void QsciLexerSpice_OnSetEolFill(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperSetEolFill(QsciLexerSpice* self, bool eoffill, int style);
void QsciLexerSpice_SetFont(QsciLexerSpice* self, const QFont* f, int style);
void QsciLexerSpice_OnSetFont(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperSetFont(QsciLexerSpice* self, const QFont* f, int style);
void QsciLexerSpice_SetPaper(QsciLexerSpice* self, const QColor* c, int style);
void QsciLexerSpice_OnSetPaper(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperSetPaper(QsciLexerSpice* self, const QColor* c, int style);
bool QsciLexerSpice_ReadProperties(QsciLexerSpice* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSpice_OnReadProperties(QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperReadProperties(QsciLexerSpice* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSpice_WriteProperties(const QsciLexerSpice* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSpice_OnWriteProperties(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperWriteProperties(const QsciLexerSpice* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSpice_Event(QsciLexerSpice* self, QEvent* event);
void QsciLexerSpice_OnEvent(QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperEvent(QsciLexerSpice* self, QEvent* event);
bool QsciLexerSpice_EventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event);
void QsciLexerSpice_OnEventFilter(QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperEventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event);
void QsciLexerSpice_TimerEvent(QsciLexerSpice* self, QTimerEvent* event);
void QsciLexerSpice_OnTimerEvent(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperTimerEvent(QsciLexerSpice* self, QTimerEvent* event);
void QsciLexerSpice_ChildEvent(QsciLexerSpice* self, QChildEvent* event);
void QsciLexerSpice_OnChildEvent(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperChildEvent(QsciLexerSpice* self, QChildEvent* event);
void QsciLexerSpice_CustomEvent(QsciLexerSpice* self, QEvent* event);
void QsciLexerSpice_OnCustomEvent(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperCustomEvent(QsciLexerSpice* self, QEvent* event);
void QsciLexerSpice_ConnectNotify(QsciLexerSpice* self, const QMetaMethod* signal);
void QsciLexerSpice_OnConnectNotify(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperConnectNotify(QsciLexerSpice* self, const QMetaMethod* signal);
void QsciLexerSpice_DisconnectNotify(QsciLexerSpice* self, const QMetaMethod* signal);
void QsciLexerSpice_OnDisconnectNotify(QsciLexerSpice* self, intptr_t slot);
void QsciLexerSpice_SuperDisconnectNotify(QsciLexerSpice* self, const QMetaMethod* signal);
libqt_string QsciLexerSpice_TextAsBytes(const QsciLexerSpice* self, const libqt_string text);
void QsciLexerSpice_OnTextAsBytes(const QsciLexerSpice* self, intptr_t slot);
libqt_string QsciLexerSpice_SuperTextAsBytes(const QsciLexerSpice* self, const libqt_string text);
libqt_string QsciLexerSpice_BytesAsText(const QsciLexerSpice* self, const char* bytes, int size);
void QsciLexerSpice_OnBytesAsText(const QsciLexerSpice* self, intptr_t slot);
libqt_string QsciLexerSpice_SuperBytesAsText(const QsciLexerSpice* self, const char* bytes, int size);
QObject* QsciLexerSpice_Sender(const QsciLexerSpice* self);
void QsciLexerSpice_OnSender(const QsciLexerSpice* self, intptr_t slot);
QObject* QsciLexerSpice_SuperSender(const QsciLexerSpice* self);
int QsciLexerSpice_SenderSignalIndex(const QsciLexerSpice* self);
void QsciLexerSpice_OnSenderSignalIndex(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperSenderSignalIndex(const QsciLexerSpice* self);
int QsciLexerSpice_Receivers(const QsciLexerSpice* self, const char* signal);
void QsciLexerSpice_OnReceivers(const QsciLexerSpice* self, intptr_t slot);
int QsciLexerSpice_SuperReceivers(const QsciLexerSpice* self, const char* signal);
bool QsciLexerSpice_IsSignalConnected(const QsciLexerSpice* self, const QMetaMethod* signal);
void QsciLexerSpice_OnIsSignalConnected(const QsciLexerSpice* self, intptr_t slot);
bool QsciLexerSpice_SuperIsSignalConnected(const QsciLexerSpice* self, const QMetaMethod* signal);
void QsciLexerSpice_Delete(QsciLexerSpice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
