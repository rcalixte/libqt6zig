#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERLUA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERLUA_H

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
typedef struct QsciLexerLua QsciLexerLua;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerLua* QsciLexerLua_new();
QsciLexerLua* QsciLexerLua_new2(QObject* parent);
QMetaObject* QsciLexerLua_MetaObject(const QsciLexerLua* self);
void* QsciLexerLua_Metacast(QsciLexerLua* self, const char* param1);
int QsciLexerLua_Metacall(QsciLexerLua* self, int param1, int param2, void** param3);
const char* QsciLexerLua_Language(const QsciLexerLua* self);
const char* QsciLexerLua_Lexer(const QsciLexerLua* self);
libqt_list /* of libqt_string */ QsciLexerLua_AutoCompletionWordSeparators(const QsciLexerLua* self);
const char* QsciLexerLua_BlockStart(const QsciLexerLua* self);
int QsciLexerLua_BraceStyle(const QsciLexerLua* self);
QColor* QsciLexerLua_DefaultColor(const QsciLexerLua* self, int style);
bool QsciLexerLua_DefaultEolFill(const QsciLexerLua* self, int style);
QFont* QsciLexerLua_DefaultFont(const QsciLexerLua* self, int style);
QColor* QsciLexerLua_DefaultPaper(const QsciLexerLua* self, int style);
const char* QsciLexerLua_Keywords(const QsciLexerLua* self, int set);
libqt_string QsciLexerLua_Description(const QsciLexerLua* self, int style);
void QsciLexerLua_RefreshProperties(QsciLexerLua* self);
bool QsciLexerLua_FoldCompact(const QsciLexerLua* self);
void QsciLexerLua_SetFoldCompact(QsciLexerLua* self, bool fold);
const char* QsciLexerLua_BlockStart1(const QsciLexerLua* self, int* style);
void QsciLexerLua_OnMetaObject(const QsciLexerLua* self, intptr_t slot);
QMetaObject* QsciLexerLua_SuperMetaObject(const QsciLexerLua* self);
void QsciLexerLua_OnMetacast(QsciLexerLua* self, intptr_t slot);
void* QsciLexerLua_SuperMetacast(QsciLexerLua* self, const char* param1);
void QsciLexerLua_OnMetacall(QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperMetacall(QsciLexerLua* self, int param1, int param2, void** param3);
void QsciLexerLua_OnSetFoldCompact(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperSetFoldCompact(QsciLexerLua* self, bool fold);
int QsciLexerLua_LexerId(const QsciLexerLua* self);
void QsciLexerLua_OnLexerId(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperLexerId(const QsciLexerLua* self);
const char* QsciLexerLua_AutoCompletionFillups(const QsciLexerLua* self);
void QsciLexerLua_OnAutoCompletionFillups(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_SuperAutoCompletionFillups(const QsciLexerLua* self);
const char* QsciLexerLua_BlockEnd(const QsciLexerLua* self, int* style);
void QsciLexerLua_OnBlockEnd(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_SuperBlockEnd(const QsciLexerLua* self, int* style);
int QsciLexerLua_BlockLookback(const QsciLexerLua* self);
void QsciLexerLua_OnBlockLookback(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperBlockLookback(const QsciLexerLua* self);
const char* QsciLexerLua_BlockStartKeyword(const QsciLexerLua* self, int* style);
void QsciLexerLua_OnBlockStartKeyword(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_SuperBlockStartKeyword(const QsciLexerLua* self, int* style);
bool QsciLexerLua_CaseSensitive(const QsciLexerLua* self);
void QsciLexerLua_OnCaseSensitive(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_SuperCaseSensitive(const QsciLexerLua* self);
QColor* QsciLexerLua_Color(const QsciLexerLua* self, int style);
void QsciLexerLua_OnColor(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_SuperColor(const QsciLexerLua* self, int style);
bool QsciLexerLua_EolFill(const QsciLexerLua* self, int style);
void QsciLexerLua_OnEolFill(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_SuperEolFill(const QsciLexerLua* self, int style);
QFont* QsciLexerLua_Font(const QsciLexerLua* self, int style);
void QsciLexerLua_OnFont(const QsciLexerLua* self, intptr_t slot);
QFont* QsciLexerLua_SuperFont(const QsciLexerLua* self, int style);
int QsciLexerLua_IndentationGuideView(const QsciLexerLua* self);
void QsciLexerLua_OnIndentationGuideView(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperIndentationGuideView(const QsciLexerLua* self);
int QsciLexerLua_DefaultStyle(const QsciLexerLua* self);
void QsciLexerLua_OnDefaultStyle(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperDefaultStyle(const QsciLexerLua* self);
QColor* QsciLexerLua_Paper(const QsciLexerLua* self, int style);
void QsciLexerLua_OnPaper(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_SuperPaper(const QsciLexerLua* self, int style);
QColor* QsciLexerLua_DefaultColor2(const QsciLexerLua* self, int style);
void QsciLexerLua_OnDefaultColor2(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_SuperDefaultColor2(const QsciLexerLua* self, int style);
QFont* QsciLexerLua_DefaultFont2(const QsciLexerLua* self, int style);
void QsciLexerLua_OnDefaultFont2(const QsciLexerLua* self, intptr_t slot);
QFont* QsciLexerLua_SuperDefaultFont2(const QsciLexerLua* self, int style);
QColor* QsciLexerLua_DefaultPaper2(const QsciLexerLua* self, int style);
void QsciLexerLua_OnDefaultPaper2(const QsciLexerLua* self, intptr_t slot);
QColor* QsciLexerLua_SuperDefaultPaper2(const QsciLexerLua* self, int style);
void QsciLexerLua_SetEditor(QsciLexerLua* self, QsciScintilla* editor);
void QsciLexerLua_OnSetEditor(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperSetEditor(QsciLexerLua* self, QsciScintilla* editor);
int QsciLexerLua_StyleBitsNeeded(const QsciLexerLua* self);
void QsciLexerLua_OnStyleBitsNeeded(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperStyleBitsNeeded(const QsciLexerLua* self);
const char* QsciLexerLua_WordCharacters(const QsciLexerLua* self);
void QsciLexerLua_OnWordCharacters(const QsciLexerLua* self, intptr_t slot);
const char* QsciLexerLua_SuperWordCharacters(const QsciLexerLua* self);
void QsciLexerLua_SetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle);
void QsciLexerLua_OnSetAutoIndentStyle(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperSetAutoIndentStyle(QsciLexerLua* self, int autoindentstyle);
void QsciLexerLua_SetColor(QsciLexerLua* self, const QColor* c, int style);
void QsciLexerLua_OnSetColor(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperSetColor(QsciLexerLua* self, const QColor* c, int style);
void QsciLexerLua_SetEolFill(QsciLexerLua* self, bool eoffill, int style);
void QsciLexerLua_OnSetEolFill(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperSetEolFill(QsciLexerLua* self, bool eoffill, int style);
void QsciLexerLua_SetFont(QsciLexerLua* self, const QFont* f, int style);
void QsciLexerLua_OnSetFont(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperSetFont(QsciLexerLua* self, const QFont* f, int style);
void QsciLexerLua_SetPaper(QsciLexerLua* self, const QColor* c, int style);
void QsciLexerLua_OnSetPaper(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperSetPaper(QsciLexerLua* self, const QColor* c, int style);
bool QsciLexerLua_ReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
void QsciLexerLua_OnReadProperties(QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_SuperReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerLua_WriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
void QsciLexerLua_OnWriteProperties(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_SuperWriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerLua_Event(QsciLexerLua* self, QEvent* event);
void QsciLexerLua_OnEvent(QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_SuperEvent(QsciLexerLua* self, QEvent* event);
bool QsciLexerLua_EventFilter(QsciLexerLua* self, QObject* watched, QEvent* event);
void QsciLexerLua_OnEventFilter(QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_SuperEventFilter(QsciLexerLua* self, QObject* watched, QEvent* event);
void QsciLexerLua_TimerEvent(QsciLexerLua* self, QTimerEvent* event);
void QsciLexerLua_OnTimerEvent(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperTimerEvent(QsciLexerLua* self, QTimerEvent* event);
void QsciLexerLua_ChildEvent(QsciLexerLua* self, QChildEvent* event);
void QsciLexerLua_OnChildEvent(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperChildEvent(QsciLexerLua* self, QChildEvent* event);
void QsciLexerLua_CustomEvent(QsciLexerLua* self, QEvent* event);
void QsciLexerLua_OnCustomEvent(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperCustomEvent(QsciLexerLua* self, QEvent* event);
void QsciLexerLua_ConnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_OnConnectNotify(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperConnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_DisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_OnDisconnectNotify(QsciLexerLua* self, intptr_t slot);
void QsciLexerLua_SuperDisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
libqt_string QsciLexerLua_TextAsBytes(const QsciLexerLua* self, const libqt_string text);
void QsciLexerLua_OnTextAsBytes(const QsciLexerLua* self, intptr_t slot);
libqt_string QsciLexerLua_SuperTextAsBytes(const QsciLexerLua* self, const libqt_string text);
libqt_string QsciLexerLua_BytesAsText(const QsciLexerLua* self, const char* bytes, int size);
void QsciLexerLua_OnBytesAsText(const QsciLexerLua* self, intptr_t slot);
libqt_string QsciLexerLua_SuperBytesAsText(const QsciLexerLua* self, const char* bytes, int size);
QObject* QsciLexerLua_Sender(const QsciLexerLua* self);
void QsciLexerLua_OnSender(const QsciLexerLua* self, intptr_t slot);
QObject* QsciLexerLua_SuperSender(const QsciLexerLua* self);
int QsciLexerLua_SenderSignalIndex(const QsciLexerLua* self);
void QsciLexerLua_OnSenderSignalIndex(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperSenderSignalIndex(const QsciLexerLua* self);
int QsciLexerLua_Receivers(const QsciLexerLua* self, const char* signal);
void QsciLexerLua_OnReceivers(const QsciLexerLua* self, intptr_t slot);
int QsciLexerLua_SuperReceivers(const QsciLexerLua* self, const char* signal);
bool QsciLexerLua_IsSignalConnected(const QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_OnIsSignalConnected(const QsciLexerLua* self, intptr_t slot);
bool QsciLexerLua_SuperIsSignalConnected(const QsciLexerLua* self, const QMetaMethod* signal);
void QsciLexerLua_Delete(QsciLexerLua* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
