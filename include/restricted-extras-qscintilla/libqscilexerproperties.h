#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPROPERTIES_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPROPERTIES_H

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
typedef struct QsciLexerProperties QsciLexerProperties;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerProperties* QsciLexerProperties_new();
QsciLexerProperties* QsciLexerProperties_new2(QObject* parent);
QMetaObject* QsciLexerProperties_MetaObject(const QsciLexerProperties* self);
void* QsciLexerProperties_Metacast(QsciLexerProperties* self, const char* param1);
int QsciLexerProperties_Metacall(QsciLexerProperties* self, int param1, int param2, void** param3);
const char* QsciLexerProperties_Language(const QsciLexerProperties* self);
const char* QsciLexerProperties_Lexer(const QsciLexerProperties* self);
const char* QsciLexerProperties_WordCharacters(const QsciLexerProperties* self);
QColor* QsciLexerProperties_DefaultColor(const QsciLexerProperties* self, int style);
bool QsciLexerProperties_DefaultEolFill(const QsciLexerProperties* self, int style);
QFont* QsciLexerProperties_DefaultFont(const QsciLexerProperties* self, int style);
QColor* QsciLexerProperties_DefaultPaper(const QsciLexerProperties* self, int style);
libqt_string QsciLexerProperties_Description(const QsciLexerProperties* self, int style);
void QsciLexerProperties_RefreshProperties(QsciLexerProperties* self);
bool QsciLexerProperties_FoldCompact(const QsciLexerProperties* self);
void QsciLexerProperties_SetInitialSpaces(QsciLexerProperties* self, bool enable);
bool QsciLexerProperties_InitialSpaces(const QsciLexerProperties* self);
void QsciLexerProperties_SetFoldCompact(QsciLexerProperties* self, bool fold);
void QsciLexerProperties_OnMetaObject(const QsciLexerProperties* self, intptr_t slot);
QMetaObject* QsciLexerProperties_SuperMetaObject(const QsciLexerProperties* self);
void QsciLexerProperties_OnMetacast(QsciLexerProperties* self, intptr_t slot);
void* QsciLexerProperties_SuperMetacast(QsciLexerProperties* self, const char* param1);
void QsciLexerProperties_OnMetacall(QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperMetacall(QsciLexerProperties* self, int param1, int param2, void** param3);
void QsciLexerProperties_OnSetFoldCompact(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperSetFoldCompact(QsciLexerProperties* self, bool fold);
int QsciLexerProperties_LexerId(const QsciLexerProperties* self);
void QsciLexerProperties_OnLexerId(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperLexerId(const QsciLexerProperties* self);
const char* QsciLexerProperties_AutoCompletionFillups(const QsciLexerProperties* self);
void QsciLexerProperties_OnAutoCompletionFillups(const QsciLexerProperties* self, intptr_t slot);
const char* QsciLexerProperties_SuperAutoCompletionFillups(const QsciLexerProperties* self);
libqt_list /* of libqt_string */ QsciLexerProperties_AutoCompletionWordSeparators(const QsciLexerProperties* self);
void QsciLexerProperties_OnAutoCompletionWordSeparators(const QsciLexerProperties* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerProperties_SuperAutoCompletionWordSeparators(const QsciLexerProperties* self);
const char* QsciLexerProperties_BlockEnd(const QsciLexerProperties* self, int* style);
void QsciLexerProperties_OnBlockEnd(const QsciLexerProperties* self, intptr_t slot);
const char* QsciLexerProperties_SuperBlockEnd(const QsciLexerProperties* self, int* style);
int QsciLexerProperties_BlockLookback(const QsciLexerProperties* self);
void QsciLexerProperties_OnBlockLookback(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperBlockLookback(const QsciLexerProperties* self);
const char* QsciLexerProperties_BlockStart(const QsciLexerProperties* self, int* style);
void QsciLexerProperties_OnBlockStart(const QsciLexerProperties* self, intptr_t slot);
const char* QsciLexerProperties_SuperBlockStart(const QsciLexerProperties* self, int* style);
const char* QsciLexerProperties_BlockStartKeyword(const QsciLexerProperties* self, int* style);
void QsciLexerProperties_OnBlockStartKeyword(const QsciLexerProperties* self, intptr_t slot);
const char* QsciLexerProperties_SuperBlockStartKeyword(const QsciLexerProperties* self, int* style);
int QsciLexerProperties_BraceStyle(const QsciLexerProperties* self);
void QsciLexerProperties_OnBraceStyle(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperBraceStyle(const QsciLexerProperties* self);
bool QsciLexerProperties_CaseSensitive(const QsciLexerProperties* self);
void QsciLexerProperties_OnCaseSensitive(const QsciLexerProperties* self, intptr_t slot);
bool QsciLexerProperties_SuperCaseSensitive(const QsciLexerProperties* self);
QColor* QsciLexerProperties_Color(const QsciLexerProperties* self, int style);
void QsciLexerProperties_OnColor(const QsciLexerProperties* self, intptr_t slot);
QColor* QsciLexerProperties_SuperColor(const QsciLexerProperties* self, int style);
bool QsciLexerProperties_EolFill(const QsciLexerProperties* self, int style);
void QsciLexerProperties_OnEolFill(const QsciLexerProperties* self, intptr_t slot);
bool QsciLexerProperties_SuperEolFill(const QsciLexerProperties* self, int style);
QFont* QsciLexerProperties_Font(const QsciLexerProperties* self, int style);
void QsciLexerProperties_OnFont(const QsciLexerProperties* self, intptr_t slot);
QFont* QsciLexerProperties_SuperFont(const QsciLexerProperties* self, int style);
int QsciLexerProperties_IndentationGuideView(const QsciLexerProperties* self);
void QsciLexerProperties_OnIndentationGuideView(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperIndentationGuideView(const QsciLexerProperties* self);
const char* QsciLexerProperties_Keywords(const QsciLexerProperties* self, int set);
void QsciLexerProperties_OnKeywords(const QsciLexerProperties* self, intptr_t slot);
const char* QsciLexerProperties_SuperKeywords(const QsciLexerProperties* self, int set);
int QsciLexerProperties_DefaultStyle(const QsciLexerProperties* self);
void QsciLexerProperties_OnDefaultStyle(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperDefaultStyle(const QsciLexerProperties* self);
QColor* QsciLexerProperties_Paper(const QsciLexerProperties* self, int style);
void QsciLexerProperties_OnPaper(const QsciLexerProperties* self, intptr_t slot);
QColor* QsciLexerProperties_SuperPaper(const QsciLexerProperties* self, int style);
QColor* QsciLexerProperties_DefaultColor2(const QsciLexerProperties* self, int style);
void QsciLexerProperties_OnDefaultColor2(const QsciLexerProperties* self, intptr_t slot);
QColor* QsciLexerProperties_SuperDefaultColor2(const QsciLexerProperties* self, int style);
QFont* QsciLexerProperties_DefaultFont2(const QsciLexerProperties* self, int style);
void QsciLexerProperties_OnDefaultFont2(const QsciLexerProperties* self, intptr_t slot);
QFont* QsciLexerProperties_SuperDefaultFont2(const QsciLexerProperties* self, int style);
QColor* QsciLexerProperties_DefaultPaper2(const QsciLexerProperties* self, int style);
void QsciLexerProperties_OnDefaultPaper2(const QsciLexerProperties* self, intptr_t slot);
QColor* QsciLexerProperties_SuperDefaultPaper2(const QsciLexerProperties* self, int style);
void QsciLexerProperties_SetEditor(QsciLexerProperties* self, QsciScintilla* editor);
void QsciLexerProperties_OnSetEditor(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperSetEditor(QsciLexerProperties* self, QsciScintilla* editor);
int QsciLexerProperties_StyleBitsNeeded(const QsciLexerProperties* self);
void QsciLexerProperties_OnStyleBitsNeeded(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperStyleBitsNeeded(const QsciLexerProperties* self);
void QsciLexerProperties_SetAutoIndentStyle(QsciLexerProperties* self, int autoindentstyle);
void QsciLexerProperties_OnSetAutoIndentStyle(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperSetAutoIndentStyle(QsciLexerProperties* self, int autoindentstyle);
void QsciLexerProperties_SetColor(QsciLexerProperties* self, const QColor* c, int style);
void QsciLexerProperties_OnSetColor(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperSetColor(QsciLexerProperties* self, const QColor* c, int style);
void QsciLexerProperties_SetEolFill(QsciLexerProperties* self, bool eoffill, int style);
void QsciLexerProperties_OnSetEolFill(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperSetEolFill(QsciLexerProperties* self, bool eoffill, int style);
void QsciLexerProperties_SetFont(QsciLexerProperties* self, const QFont* f, int style);
void QsciLexerProperties_OnSetFont(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperSetFont(QsciLexerProperties* self, const QFont* f, int style);
void QsciLexerProperties_SetPaper(QsciLexerProperties* self, const QColor* c, int style);
void QsciLexerProperties_OnSetPaper(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperSetPaper(QsciLexerProperties* self, const QColor* c, int style);
bool QsciLexerProperties_ReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
void QsciLexerProperties_OnReadProperties(QsciLexerProperties* self, intptr_t slot);
bool QsciLexerProperties_SuperReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerProperties_WriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
void QsciLexerProperties_OnWriteProperties(const QsciLexerProperties* self, intptr_t slot);
bool QsciLexerProperties_SuperWriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerProperties_Event(QsciLexerProperties* self, QEvent* event);
void QsciLexerProperties_OnEvent(QsciLexerProperties* self, intptr_t slot);
bool QsciLexerProperties_SuperEvent(QsciLexerProperties* self, QEvent* event);
bool QsciLexerProperties_EventFilter(QsciLexerProperties* self, QObject* watched, QEvent* event);
void QsciLexerProperties_OnEventFilter(QsciLexerProperties* self, intptr_t slot);
bool QsciLexerProperties_SuperEventFilter(QsciLexerProperties* self, QObject* watched, QEvent* event);
void QsciLexerProperties_TimerEvent(QsciLexerProperties* self, QTimerEvent* event);
void QsciLexerProperties_OnTimerEvent(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperTimerEvent(QsciLexerProperties* self, QTimerEvent* event);
void QsciLexerProperties_ChildEvent(QsciLexerProperties* self, QChildEvent* event);
void QsciLexerProperties_OnChildEvent(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperChildEvent(QsciLexerProperties* self, QChildEvent* event);
void QsciLexerProperties_CustomEvent(QsciLexerProperties* self, QEvent* event);
void QsciLexerProperties_OnCustomEvent(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperCustomEvent(QsciLexerProperties* self, QEvent* event);
void QsciLexerProperties_ConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
void QsciLexerProperties_OnConnectNotify(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
void QsciLexerProperties_DisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
void QsciLexerProperties_OnDisconnectNotify(QsciLexerProperties* self, intptr_t slot);
void QsciLexerProperties_SuperDisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
libqt_string QsciLexerProperties_TextAsBytes(const QsciLexerProperties* self, const libqt_string text);
void QsciLexerProperties_OnTextAsBytes(const QsciLexerProperties* self, intptr_t slot);
libqt_string QsciLexerProperties_SuperTextAsBytes(const QsciLexerProperties* self, const libqt_string text);
libqt_string QsciLexerProperties_BytesAsText(const QsciLexerProperties* self, const char* bytes, int size);
void QsciLexerProperties_OnBytesAsText(const QsciLexerProperties* self, intptr_t slot);
libqt_string QsciLexerProperties_SuperBytesAsText(const QsciLexerProperties* self, const char* bytes, int size);
QObject* QsciLexerProperties_Sender(const QsciLexerProperties* self);
void QsciLexerProperties_OnSender(const QsciLexerProperties* self, intptr_t slot);
QObject* QsciLexerProperties_SuperSender(const QsciLexerProperties* self);
int QsciLexerProperties_SenderSignalIndex(const QsciLexerProperties* self);
void QsciLexerProperties_OnSenderSignalIndex(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperSenderSignalIndex(const QsciLexerProperties* self);
int QsciLexerProperties_Receivers(const QsciLexerProperties* self, const char* signal);
void QsciLexerProperties_OnReceivers(const QsciLexerProperties* self, intptr_t slot);
int QsciLexerProperties_SuperReceivers(const QsciLexerProperties* self, const char* signal);
bool QsciLexerProperties_IsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal);
void QsciLexerProperties_OnIsSignalConnected(const QsciLexerProperties* self, intptr_t slot);
bool QsciLexerProperties_SuperIsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal);
void QsciLexerProperties_Delete(QsciLexerProperties* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
