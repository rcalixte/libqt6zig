#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCMAKE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCMAKE_H

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
typedef struct QsciLexerCMake QsciLexerCMake;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerCMake* QsciLexerCMake_new();
QsciLexerCMake* QsciLexerCMake_new2(QObject* parent);
QMetaObject* QsciLexerCMake_MetaObject(const QsciLexerCMake* self);
void* QsciLexerCMake_Metacast(QsciLexerCMake* self, const char* param1);
int QsciLexerCMake_Metacall(QsciLexerCMake* self, int param1, int param2, void** param3);
const char* QsciLexerCMake_Language(const QsciLexerCMake* self);
const char* QsciLexerCMake_Lexer(const QsciLexerCMake* self);
QColor* QsciLexerCMake_DefaultColor(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_DefaultFont(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultPaper(const QsciLexerCMake* self, int style);
const char* QsciLexerCMake_Keywords(const QsciLexerCMake* self, int set);
libqt_string QsciLexerCMake_Description(const QsciLexerCMake* self, int style);
void QsciLexerCMake_RefreshProperties(QsciLexerCMake* self);
bool QsciLexerCMake_FoldAtElse(const QsciLexerCMake* self);
void QsciLexerCMake_SetFoldAtElse(QsciLexerCMake* self, bool fold);
void QsciLexerCMake_OnMetaObject(const QsciLexerCMake* self, intptr_t slot);
QMetaObject* QsciLexerCMake_SuperMetaObject(const QsciLexerCMake* self);
void QsciLexerCMake_OnMetacast(QsciLexerCMake* self, intptr_t slot);
void* QsciLexerCMake_SuperMetacast(QsciLexerCMake* self, const char* param1);
void QsciLexerCMake_OnMetacall(QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperMetacall(QsciLexerCMake* self, int param1, int param2, void** param3);
void QsciLexerCMake_OnSetFoldAtElse(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperSetFoldAtElse(QsciLexerCMake* self, bool fold);
int QsciLexerCMake_LexerId(const QsciLexerCMake* self);
void QsciLexerCMake_OnLexerId(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperLexerId(const QsciLexerCMake* self);
const char* QsciLexerCMake_AutoCompletionFillups(const QsciLexerCMake* self);
void QsciLexerCMake_OnAutoCompletionFillups(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_SuperAutoCompletionFillups(const QsciLexerCMake* self);
libqt_list /* of libqt_string */ QsciLexerCMake_AutoCompletionWordSeparators(const QsciLexerCMake* self);
void QsciLexerCMake_OnAutoCompletionWordSeparators(const QsciLexerCMake* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerCMake_SuperAutoCompletionWordSeparators(const QsciLexerCMake* self);
const char* QsciLexerCMake_BlockEnd(const QsciLexerCMake* self, int* style);
void QsciLexerCMake_OnBlockEnd(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_SuperBlockEnd(const QsciLexerCMake* self, int* style);
int QsciLexerCMake_BlockLookback(const QsciLexerCMake* self);
void QsciLexerCMake_OnBlockLookback(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperBlockLookback(const QsciLexerCMake* self);
const char* QsciLexerCMake_BlockStart(const QsciLexerCMake* self, int* style);
void QsciLexerCMake_OnBlockStart(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_SuperBlockStart(const QsciLexerCMake* self, int* style);
const char* QsciLexerCMake_BlockStartKeyword(const QsciLexerCMake* self, int* style);
void QsciLexerCMake_OnBlockStartKeyword(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_SuperBlockStartKeyword(const QsciLexerCMake* self, int* style);
int QsciLexerCMake_BraceStyle(const QsciLexerCMake* self);
void QsciLexerCMake_OnBraceStyle(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperBraceStyle(const QsciLexerCMake* self);
bool QsciLexerCMake_CaseSensitive(const QsciLexerCMake* self);
void QsciLexerCMake_OnCaseSensitive(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperCaseSensitive(const QsciLexerCMake* self);
QColor* QsciLexerCMake_Color(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnColor(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_SuperColor(const QsciLexerCMake* self, int style);
bool QsciLexerCMake_EolFill(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnEolFill(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperEolFill(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_Font(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnFont(const QsciLexerCMake* self, intptr_t slot);
QFont* QsciLexerCMake_SuperFont(const QsciLexerCMake* self, int style);
int QsciLexerCMake_IndentationGuideView(const QsciLexerCMake* self);
void QsciLexerCMake_OnIndentationGuideView(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperIndentationGuideView(const QsciLexerCMake* self);
int QsciLexerCMake_DefaultStyle(const QsciLexerCMake* self);
void QsciLexerCMake_OnDefaultStyle(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperDefaultStyle(const QsciLexerCMake* self);
QColor* QsciLexerCMake_Paper(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnPaper(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_SuperPaper(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultColor2(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultColor2(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_SuperDefaultColor2(const QsciLexerCMake* self, int style);
bool QsciLexerCMake_DefaultEolFill(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultEolFill(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperDefaultEolFill(const QsciLexerCMake* self, int style);
QFont* QsciLexerCMake_DefaultFont2(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultFont2(const QsciLexerCMake* self, intptr_t slot);
QFont* QsciLexerCMake_SuperDefaultFont2(const QsciLexerCMake* self, int style);
QColor* QsciLexerCMake_DefaultPaper2(const QsciLexerCMake* self, int style);
void QsciLexerCMake_OnDefaultPaper2(const QsciLexerCMake* self, intptr_t slot);
QColor* QsciLexerCMake_SuperDefaultPaper2(const QsciLexerCMake* self, int style);
void QsciLexerCMake_SetEditor(QsciLexerCMake* self, QsciScintilla* editor);
void QsciLexerCMake_OnSetEditor(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperSetEditor(QsciLexerCMake* self, QsciScintilla* editor);
int QsciLexerCMake_StyleBitsNeeded(const QsciLexerCMake* self);
void QsciLexerCMake_OnStyleBitsNeeded(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperStyleBitsNeeded(const QsciLexerCMake* self);
const char* QsciLexerCMake_WordCharacters(const QsciLexerCMake* self);
void QsciLexerCMake_OnWordCharacters(const QsciLexerCMake* self, intptr_t slot);
const char* QsciLexerCMake_SuperWordCharacters(const QsciLexerCMake* self);
void QsciLexerCMake_SetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle);
void QsciLexerCMake_OnSetAutoIndentStyle(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperSetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle);
void QsciLexerCMake_SetColor(QsciLexerCMake* self, const QColor* c, int style);
void QsciLexerCMake_OnSetColor(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperSetColor(QsciLexerCMake* self, const QColor* c, int style);
void QsciLexerCMake_SetEolFill(QsciLexerCMake* self, bool eoffill, int style);
void QsciLexerCMake_OnSetEolFill(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperSetEolFill(QsciLexerCMake* self, bool eoffill, int style);
void QsciLexerCMake_SetFont(QsciLexerCMake* self, const QFont* f, int style);
void QsciLexerCMake_OnSetFont(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperSetFont(QsciLexerCMake* self, const QFont* f, int style);
void QsciLexerCMake_SetPaper(QsciLexerCMake* self, const QColor* c, int style);
void QsciLexerCMake_OnSetPaper(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperSetPaper(QsciLexerCMake* self, const QColor* c, int style);
bool QsciLexerCMake_ReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCMake_OnReadProperties(QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCMake_WriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCMake_OnWriteProperties(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperWriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCMake_Event(QsciLexerCMake* self, QEvent* event);
void QsciLexerCMake_OnEvent(QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperEvent(QsciLexerCMake* self, QEvent* event);
bool QsciLexerCMake_EventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event);
void QsciLexerCMake_OnEventFilter(QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperEventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event);
void QsciLexerCMake_TimerEvent(QsciLexerCMake* self, QTimerEvent* event);
void QsciLexerCMake_OnTimerEvent(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperTimerEvent(QsciLexerCMake* self, QTimerEvent* event);
void QsciLexerCMake_ChildEvent(QsciLexerCMake* self, QChildEvent* event);
void QsciLexerCMake_OnChildEvent(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperChildEvent(QsciLexerCMake* self, QChildEvent* event);
void QsciLexerCMake_CustomEvent(QsciLexerCMake* self, QEvent* event);
void QsciLexerCMake_OnCustomEvent(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperCustomEvent(QsciLexerCMake* self, QEvent* event);
void QsciLexerCMake_ConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
void QsciLexerCMake_OnConnectNotify(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
void QsciLexerCMake_DisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
void QsciLexerCMake_OnDisconnectNotify(QsciLexerCMake* self, intptr_t slot);
void QsciLexerCMake_SuperDisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
libqt_string QsciLexerCMake_TextAsBytes(const QsciLexerCMake* self, const libqt_string text);
void QsciLexerCMake_OnTextAsBytes(const QsciLexerCMake* self, intptr_t slot);
libqt_string QsciLexerCMake_SuperTextAsBytes(const QsciLexerCMake* self, const libqt_string text);
libqt_string QsciLexerCMake_BytesAsText(const QsciLexerCMake* self, const char* bytes, int size);
void QsciLexerCMake_OnBytesAsText(const QsciLexerCMake* self, intptr_t slot);
libqt_string QsciLexerCMake_SuperBytesAsText(const QsciLexerCMake* self, const char* bytes, int size);
QObject* QsciLexerCMake_Sender(const QsciLexerCMake* self);
void QsciLexerCMake_OnSender(const QsciLexerCMake* self, intptr_t slot);
QObject* QsciLexerCMake_SuperSender(const QsciLexerCMake* self);
int QsciLexerCMake_SenderSignalIndex(const QsciLexerCMake* self);
void QsciLexerCMake_OnSenderSignalIndex(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperSenderSignalIndex(const QsciLexerCMake* self);
int QsciLexerCMake_Receivers(const QsciLexerCMake* self, const char* signal);
void QsciLexerCMake_OnReceivers(const QsciLexerCMake* self, intptr_t slot);
int QsciLexerCMake_SuperReceivers(const QsciLexerCMake* self, const char* signal);
bool QsciLexerCMake_IsSignalConnected(const QsciLexerCMake* self, const QMetaMethod* signal);
void QsciLexerCMake_OnIsSignalConnected(const QsciLexerCMake* self, intptr_t slot);
bool QsciLexerCMake_SuperIsSignalConnected(const QsciLexerCMake* self, const QMetaMethod* signal);
void QsciLexerCMake_Delete(QsciLexerCMake* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
