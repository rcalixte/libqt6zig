#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEROCTAVE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXEROCTAVE_H

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
typedef struct QsciLexerMatlab QsciLexerMatlab;
typedef struct QsciLexerOctave QsciLexerOctave;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerOctave* QsciLexerOctave_new();
QsciLexerOctave* QsciLexerOctave_new2(QObject* parent);
QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self);
void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1);
int QsciLexerOctave_Metacall(QsciLexerOctave* self, int param1, int param2, void** param3);
const char* QsciLexerOctave_Language(const QsciLexerOctave* self);
const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self);
const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set);
void QsciLexerOctave_OnMetaObject(const QsciLexerOctave* self, intptr_t slot);
QMetaObject* QsciLexerOctave_SuperMetaObject(const QsciLexerOctave* self);
void QsciLexerOctave_OnMetacast(QsciLexerOctave* self, intptr_t slot);
void* QsciLexerOctave_SuperMetacast(QsciLexerOctave* self, const char* param1);
void QsciLexerOctave_OnMetacall(QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperMetacall(QsciLexerOctave* self, int param1, int param2, void** param3);
int QsciLexerOctave_LexerId(const QsciLexerOctave* self);
void QsciLexerOctave_OnLexerId(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperLexerId(const QsciLexerOctave* self);
const char* QsciLexerOctave_AutoCompletionFillups(const QsciLexerOctave* self);
void QsciLexerOctave_OnAutoCompletionFillups(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_SuperAutoCompletionFillups(const QsciLexerOctave* self);
libqt_list /* of libqt_string */ QsciLexerOctave_AutoCompletionWordSeparators(const QsciLexerOctave* self);
void QsciLexerOctave_OnAutoCompletionWordSeparators(const QsciLexerOctave* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerOctave_SuperAutoCompletionWordSeparators(const QsciLexerOctave* self);
const char* QsciLexerOctave_BlockEnd(const QsciLexerOctave* self, int* style);
void QsciLexerOctave_OnBlockEnd(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_SuperBlockEnd(const QsciLexerOctave* self, int* style);
int QsciLexerOctave_BlockLookback(const QsciLexerOctave* self);
void QsciLexerOctave_OnBlockLookback(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperBlockLookback(const QsciLexerOctave* self);
const char* QsciLexerOctave_BlockStart(const QsciLexerOctave* self, int* style);
void QsciLexerOctave_OnBlockStart(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_SuperBlockStart(const QsciLexerOctave* self, int* style);
const char* QsciLexerOctave_BlockStartKeyword(const QsciLexerOctave* self, int* style);
void QsciLexerOctave_OnBlockStartKeyword(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_SuperBlockStartKeyword(const QsciLexerOctave* self, int* style);
int QsciLexerOctave_BraceStyle(const QsciLexerOctave* self);
void QsciLexerOctave_OnBraceStyle(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperBraceStyle(const QsciLexerOctave* self);
bool QsciLexerOctave_CaseSensitive(const QsciLexerOctave* self);
void QsciLexerOctave_OnCaseSensitive(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperCaseSensitive(const QsciLexerOctave* self);
QColor* QsciLexerOctave_Color(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnColor(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_SuperColor(const QsciLexerOctave* self, int style);
bool QsciLexerOctave_EolFill(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnEolFill(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperEolFill(const QsciLexerOctave* self, int style);
QFont* QsciLexerOctave_Font(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnFont(const QsciLexerOctave* self, intptr_t slot);
QFont* QsciLexerOctave_SuperFont(const QsciLexerOctave* self, int style);
int QsciLexerOctave_IndentationGuideView(const QsciLexerOctave* self);
void QsciLexerOctave_OnIndentationGuideView(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperIndentationGuideView(const QsciLexerOctave* self);
int QsciLexerOctave_DefaultStyle(const QsciLexerOctave* self);
void QsciLexerOctave_OnDefaultStyle(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperDefaultStyle(const QsciLexerOctave* self);
libqt_string QsciLexerOctave_Description(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDescription(const QsciLexerOctave* self, intptr_t slot);
libqt_string QsciLexerOctave_SuperDescription(const QsciLexerOctave* self, int style);
QColor* QsciLexerOctave_Paper(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnPaper(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_SuperPaper(const QsciLexerOctave* self, int style);
QColor* QsciLexerOctave_DefaultColor2(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultColor2(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_SuperDefaultColor2(const QsciLexerOctave* self, int style);
bool QsciLexerOctave_DefaultEolFill(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultEolFill(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperDefaultEolFill(const QsciLexerOctave* self, int style);
QFont* QsciLexerOctave_DefaultFont2(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultFont2(const QsciLexerOctave* self, intptr_t slot);
QFont* QsciLexerOctave_SuperDefaultFont2(const QsciLexerOctave* self, int style);
QColor* QsciLexerOctave_DefaultPaper2(const QsciLexerOctave* self, int style);
void QsciLexerOctave_OnDefaultPaper2(const QsciLexerOctave* self, intptr_t slot);
QColor* QsciLexerOctave_SuperDefaultPaper2(const QsciLexerOctave* self, int style);
void QsciLexerOctave_SetEditor(QsciLexerOctave* self, QsciScintilla* editor);
void QsciLexerOctave_OnSetEditor(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperSetEditor(QsciLexerOctave* self, QsciScintilla* editor);
void QsciLexerOctave_RefreshProperties(QsciLexerOctave* self);
void QsciLexerOctave_OnRefreshProperties(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperRefreshProperties(QsciLexerOctave* self);
int QsciLexerOctave_StyleBitsNeeded(const QsciLexerOctave* self);
void QsciLexerOctave_OnStyleBitsNeeded(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperStyleBitsNeeded(const QsciLexerOctave* self);
const char* QsciLexerOctave_WordCharacters(const QsciLexerOctave* self);
void QsciLexerOctave_OnWordCharacters(const QsciLexerOctave* self, intptr_t slot);
const char* QsciLexerOctave_SuperWordCharacters(const QsciLexerOctave* self);
void QsciLexerOctave_SetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle);
void QsciLexerOctave_OnSetAutoIndentStyle(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperSetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle);
void QsciLexerOctave_SetColor(QsciLexerOctave* self, const QColor* c, int style);
void QsciLexerOctave_OnSetColor(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperSetColor(QsciLexerOctave* self, const QColor* c, int style);
void QsciLexerOctave_SetEolFill(QsciLexerOctave* self, bool eoffill, int style);
void QsciLexerOctave_OnSetEolFill(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperSetEolFill(QsciLexerOctave* self, bool eoffill, int style);
void QsciLexerOctave_SetFont(QsciLexerOctave* self, const QFont* f, int style);
void QsciLexerOctave_OnSetFont(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperSetFont(QsciLexerOctave* self, const QFont* f, int style);
void QsciLexerOctave_SetPaper(QsciLexerOctave* self, const QColor* c, int style);
void QsciLexerOctave_OnSetPaper(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperSetPaper(QsciLexerOctave* self, const QColor* c, int style);
bool QsciLexerOctave_ReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
void QsciLexerOctave_OnReadProperties(QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerOctave_WriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
void QsciLexerOctave_OnWriteProperties(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperWriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerOctave_Event(QsciLexerOctave* self, QEvent* event);
void QsciLexerOctave_OnEvent(QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperEvent(QsciLexerOctave* self, QEvent* event);
bool QsciLexerOctave_EventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event);
void QsciLexerOctave_OnEventFilter(QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperEventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event);
void QsciLexerOctave_TimerEvent(QsciLexerOctave* self, QTimerEvent* event);
void QsciLexerOctave_OnTimerEvent(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperTimerEvent(QsciLexerOctave* self, QTimerEvent* event);
void QsciLexerOctave_ChildEvent(QsciLexerOctave* self, QChildEvent* event);
void QsciLexerOctave_OnChildEvent(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperChildEvent(QsciLexerOctave* self, QChildEvent* event);
void QsciLexerOctave_CustomEvent(QsciLexerOctave* self, QEvent* event);
void QsciLexerOctave_OnCustomEvent(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperCustomEvent(QsciLexerOctave* self, QEvent* event);
void QsciLexerOctave_ConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_OnConnectNotify(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_DisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_OnDisconnectNotify(QsciLexerOctave* self, intptr_t slot);
void QsciLexerOctave_SuperDisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
libqt_string QsciLexerOctave_TextAsBytes(const QsciLexerOctave* self, const libqt_string text);
void QsciLexerOctave_OnTextAsBytes(const QsciLexerOctave* self, intptr_t slot);
libqt_string QsciLexerOctave_SuperTextAsBytes(const QsciLexerOctave* self, const libqt_string text);
libqt_string QsciLexerOctave_BytesAsText(const QsciLexerOctave* self, const char* bytes, int size);
void QsciLexerOctave_OnBytesAsText(const QsciLexerOctave* self, intptr_t slot);
libqt_string QsciLexerOctave_SuperBytesAsText(const QsciLexerOctave* self, const char* bytes, int size);
QObject* QsciLexerOctave_Sender(const QsciLexerOctave* self);
void QsciLexerOctave_OnSender(const QsciLexerOctave* self, intptr_t slot);
QObject* QsciLexerOctave_SuperSender(const QsciLexerOctave* self);
int QsciLexerOctave_SenderSignalIndex(const QsciLexerOctave* self);
void QsciLexerOctave_OnSenderSignalIndex(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperSenderSignalIndex(const QsciLexerOctave* self);
int QsciLexerOctave_Receivers(const QsciLexerOctave* self, const char* signal);
void QsciLexerOctave_OnReceivers(const QsciLexerOctave* self, intptr_t slot);
int QsciLexerOctave_SuperReceivers(const QsciLexerOctave* self, const char* signal);
bool QsciLexerOctave_IsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_OnIsSignalConnected(const QsciLexerOctave* self, intptr_t slot);
bool QsciLexerOctave_SuperIsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal);
void QsciLexerOctave_Delete(QsciLexerOctave* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
