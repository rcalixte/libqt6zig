#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERFORTRAN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERFORTRAN_H

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
typedef struct QsciLexerFortran QsciLexerFortran;
typedef struct QsciLexerFortran77 QsciLexerFortran77;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerFortran* QsciLexerFortran_new();
QsciLexerFortran* QsciLexerFortran_new2(QObject* parent);
QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self);
void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1);
int QsciLexerFortran_Metacall(QsciLexerFortran* self, int param1, int param2, void** param3);
const char* QsciLexerFortran_Language(const QsciLexerFortran* self);
const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self);
const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set);
void QsciLexerFortran_OnMetaObject(const QsciLexerFortran* self, intptr_t slot);
QMetaObject* QsciLexerFortran_SuperMetaObject(const QsciLexerFortran* self);
void QsciLexerFortran_OnMetacast(QsciLexerFortran* self, intptr_t slot);
void* QsciLexerFortran_SuperMetacast(QsciLexerFortran* self, const char* param1);
void QsciLexerFortran_OnMetacall(QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperMetacall(QsciLexerFortran* self, int param1, int param2, void** param3);
void QsciLexerFortran_SetFoldCompact(QsciLexerFortran* self, bool fold);
void QsciLexerFortran_OnSetFoldCompact(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperSetFoldCompact(QsciLexerFortran* self, bool fold);
int QsciLexerFortran_LexerId(const QsciLexerFortran* self);
void QsciLexerFortran_OnLexerId(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperLexerId(const QsciLexerFortran* self);
const char* QsciLexerFortran_AutoCompletionFillups(const QsciLexerFortran* self);
void QsciLexerFortran_OnAutoCompletionFillups(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_SuperAutoCompletionFillups(const QsciLexerFortran* self);
libqt_list /* of libqt_string */ QsciLexerFortran_AutoCompletionWordSeparators(const QsciLexerFortran* self);
void QsciLexerFortran_OnAutoCompletionWordSeparators(const QsciLexerFortran* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerFortran_SuperAutoCompletionWordSeparators(const QsciLexerFortran* self);
const char* QsciLexerFortran_BlockEnd(const QsciLexerFortran* self, int* style);
void QsciLexerFortran_OnBlockEnd(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_SuperBlockEnd(const QsciLexerFortran* self, int* style);
int QsciLexerFortran_BlockLookback(const QsciLexerFortran* self);
void QsciLexerFortran_OnBlockLookback(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperBlockLookback(const QsciLexerFortran* self);
const char* QsciLexerFortran_BlockStart(const QsciLexerFortran* self, int* style);
void QsciLexerFortran_OnBlockStart(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_SuperBlockStart(const QsciLexerFortran* self, int* style);
const char* QsciLexerFortran_BlockStartKeyword(const QsciLexerFortran* self, int* style);
void QsciLexerFortran_OnBlockStartKeyword(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_SuperBlockStartKeyword(const QsciLexerFortran* self, int* style);
int QsciLexerFortran_BraceStyle(const QsciLexerFortran* self);
void QsciLexerFortran_OnBraceStyle(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperBraceStyle(const QsciLexerFortran* self);
bool QsciLexerFortran_CaseSensitive(const QsciLexerFortran* self);
void QsciLexerFortran_OnCaseSensitive(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperCaseSensitive(const QsciLexerFortran* self);
QColor* QsciLexerFortran_Color(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnColor(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_SuperColor(const QsciLexerFortran* self, int style);
bool QsciLexerFortran_EolFill(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnEolFill(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperEolFill(const QsciLexerFortran* self, int style);
QFont* QsciLexerFortran_Font(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnFont(const QsciLexerFortran* self, intptr_t slot);
QFont* QsciLexerFortran_SuperFont(const QsciLexerFortran* self, int style);
int QsciLexerFortran_IndentationGuideView(const QsciLexerFortran* self);
void QsciLexerFortran_OnIndentationGuideView(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperIndentationGuideView(const QsciLexerFortran* self);
int QsciLexerFortran_DefaultStyle(const QsciLexerFortran* self);
void QsciLexerFortran_OnDefaultStyle(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperDefaultStyle(const QsciLexerFortran* self);
libqt_string QsciLexerFortran_Description(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDescription(const QsciLexerFortran* self, intptr_t slot);
libqt_string QsciLexerFortran_SuperDescription(const QsciLexerFortran* self, int style);
QColor* QsciLexerFortran_Paper(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnPaper(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_SuperPaper(const QsciLexerFortran* self, int style);
QColor* QsciLexerFortran_DefaultColor2(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultColor2(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_SuperDefaultColor2(const QsciLexerFortran* self, int style);
bool QsciLexerFortran_DefaultEolFill(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultEolFill(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperDefaultEolFill(const QsciLexerFortran* self, int style);
QFont* QsciLexerFortran_DefaultFont2(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultFont2(const QsciLexerFortran* self, intptr_t slot);
QFont* QsciLexerFortran_SuperDefaultFont2(const QsciLexerFortran* self, int style);
QColor* QsciLexerFortran_DefaultPaper2(const QsciLexerFortran* self, int style);
void QsciLexerFortran_OnDefaultPaper2(const QsciLexerFortran* self, intptr_t slot);
QColor* QsciLexerFortran_SuperDefaultPaper2(const QsciLexerFortran* self, int style);
void QsciLexerFortran_SetEditor(QsciLexerFortran* self, QsciScintilla* editor);
void QsciLexerFortran_OnSetEditor(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperSetEditor(QsciLexerFortran* self, QsciScintilla* editor);
void QsciLexerFortran_RefreshProperties(QsciLexerFortran* self);
void QsciLexerFortran_OnRefreshProperties(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperRefreshProperties(QsciLexerFortran* self);
int QsciLexerFortran_StyleBitsNeeded(const QsciLexerFortran* self);
void QsciLexerFortran_OnStyleBitsNeeded(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperStyleBitsNeeded(const QsciLexerFortran* self);
const char* QsciLexerFortran_WordCharacters(const QsciLexerFortran* self);
void QsciLexerFortran_OnWordCharacters(const QsciLexerFortran* self, intptr_t slot);
const char* QsciLexerFortran_SuperWordCharacters(const QsciLexerFortran* self);
void QsciLexerFortran_SetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle);
void QsciLexerFortran_OnSetAutoIndentStyle(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperSetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle);
void QsciLexerFortran_SetColor(QsciLexerFortran* self, const QColor* c, int style);
void QsciLexerFortran_OnSetColor(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperSetColor(QsciLexerFortran* self, const QColor* c, int style);
void QsciLexerFortran_SetEolFill(QsciLexerFortran* self, bool eoffill, int style);
void QsciLexerFortran_OnSetEolFill(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperSetEolFill(QsciLexerFortran* self, bool eoffill, int style);
void QsciLexerFortran_SetFont(QsciLexerFortran* self, const QFont* f, int style);
void QsciLexerFortran_OnSetFont(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperSetFont(QsciLexerFortran* self, const QFont* f, int style);
void QsciLexerFortran_SetPaper(QsciLexerFortran* self, const QColor* c, int style);
void QsciLexerFortran_OnSetPaper(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperSetPaper(QsciLexerFortran* self, const QColor* c, int style);
bool QsciLexerFortran_ReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
void QsciLexerFortran_OnReadProperties(QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerFortran_WriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
void QsciLexerFortran_OnWriteProperties(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperWriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerFortran_Event(QsciLexerFortran* self, QEvent* event);
void QsciLexerFortran_OnEvent(QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperEvent(QsciLexerFortran* self, QEvent* event);
bool QsciLexerFortran_EventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event);
void QsciLexerFortran_OnEventFilter(QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperEventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event);
void QsciLexerFortran_TimerEvent(QsciLexerFortran* self, QTimerEvent* event);
void QsciLexerFortran_OnTimerEvent(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperTimerEvent(QsciLexerFortran* self, QTimerEvent* event);
void QsciLexerFortran_ChildEvent(QsciLexerFortran* self, QChildEvent* event);
void QsciLexerFortran_OnChildEvent(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperChildEvent(QsciLexerFortran* self, QChildEvent* event);
void QsciLexerFortran_CustomEvent(QsciLexerFortran* self, QEvent* event);
void QsciLexerFortran_OnCustomEvent(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperCustomEvent(QsciLexerFortran* self, QEvent* event);
void QsciLexerFortran_ConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_OnConnectNotify(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_DisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_OnDisconnectNotify(QsciLexerFortran* self, intptr_t slot);
void QsciLexerFortran_SuperDisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
libqt_string QsciLexerFortran_TextAsBytes(const QsciLexerFortran* self, const libqt_string text);
void QsciLexerFortran_OnTextAsBytes(const QsciLexerFortran* self, intptr_t slot);
libqt_string QsciLexerFortran_SuperTextAsBytes(const QsciLexerFortran* self, const libqt_string text);
libqt_string QsciLexerFortran_BytesAsText(const QsciLexerFortran* self, const char* bytes, int size);
void QsciLexerFortran_OnBytesAsText(const QsciLexerFortran* self, intptr_t slot);
libqt_string QsciLexerFortran_SuperBytesAsText(const QsciLexerFortran* self, const char* bytes, int size);
QObject* QsciLexerFortran_Sender(const QsciLexerFortran* self);
void QsciLexerFortran_OnSender(const QsciLexerFortran* self, intptr_t slot);
QObject* QsciLexerFortran_SuperSender(const QsciLexerFortran* self);
int QsciLexerFortran_SenderSignalIndex(const QsciLexerFortran* self);
void QsciLexerFortran_OnSenderSignalIndex(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperSenderSignalIndex(const QsciLexerFortran* self);
int QsciLexerFortran_Receivers(const QsciLexerFortran* self, const char* signal);
void QsciLexerFortran_OnReceivers(const QsciLexerFortran* self, intptr_t slot);
int QsciLexerFortran_SuperReceivers(const QsciLexerFortran* self, const char* signal);
bool QsciLexerFortran_IsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_OnIsSignalConnected(const QsciLexerFortran* self, intptr_t slot);
bool QsciLexerFortran_SuperIsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal);
void QsciLexerFortran_Delete(QsciLexerFortran* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
