#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMAKEFILE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMAKEFILE_H

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
typedef struct QsciLexerMakefile QsciLexerMakefile;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerMakefile* QsciLexerMakefile_new();
QsciLexerMakefile* QsciLexerMakefile_new2(QObject* parent);
QMetaObject* QsciLexerMakefile_MetaObject(const QsciLexerMakefile* self);
void* QsciLexerMakefile_Metacast(QsciLexerMakefile* self, const char* param1);
int QsciLexerMakefile_Metacall(QsciLexerMakefile* self, int param1, int param2, void** param3);
const char* QsciLexerMakefile_Language(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_Lexer(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_WordCharacters(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_DefaultColor(const QsciLexerMakefile* self, int style);
bool QsciLexerMakefile_DefaultEolFill(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_DefaultFont(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultPaper(const QsciLexerMakefile* self, int style);
libqt_string QsciLexerMakefile_Description(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnMetaObject(const QsciLexerMakefile* self, intptr_t slot);
QMetaObject* QsciLexerMakefile_SuperMetaObject(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnMetacast(QsciLexerMakefile* self, intptr_t slot);
void* QsciLexerMakefile_SuperMetacast(QsciLexerMakefile* self, const char* param1);
void QsciLexerMakefile_OnMetacall(QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperMetacall(QsciLexerMakefile* self, int param1, int param2, void** param3);
int QsciLexerMakefile_LexerId(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnLexerId(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperLexerId(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_AutoCompletionFillups(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnAutoCompletionFillups(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_SuperAutoCompletionFillups(const QsciLexerMakefile* self);
libqt_list /* of libqt_string */ QsciLexerMakefile_AutoCompletionWordSeparators(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnAutoCompletionWordSeparators(const QsciLexerMakefile* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerMakefile_SuperAutoCompletionWordSeparators(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_BlockEnd(const QsciLexerMakefile* self, int* style);
void QsciLexerMakefile_OnBlockEnd(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_SuperBlockEnd(const QsciLexerMakefile* self, int* style);
int QsciLexerMakefile_BlockLookback(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnBlockLookback(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperBlockLookback(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_BlockStart(const QsciLexerMakefile* self, int* style);
void QsciLexerMakefile_OnBlockStart(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_SuperBlockStart(const QsciLexerMakefile* self, int* style);
const char* QsciLexerMakefile_BlockStartKeyword(const QsciLexerMakefile* self, int* style);
void QsciLexerMakefile_OnBlockStartKeyword(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_SuperBlockStartKeyword(const QsciLexerMakefile* self, int* style);
int QsciLexerMakefile_BraceStyle(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnBraceStyle(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperBraceStyle(const QsciLexerMakefile* self);
bool QsciLexerMakefile_CaseSensitive(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnCaseSensitive(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_SuperCaseSensitive(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_Color(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnColor(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_SuperColor(const QsciLexerMakefile* self, int style);
bool QsciLexerMakefile_EolFill(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnEolFill(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_SuperEolFill(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_Font(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnFont(const QsciLexerMakefile* self, intptr_t slot);
QFont* QsciLexerMakefile_SuperFont(const QsciLexerMakefile* self, int style);
int QsciLexerMakefile_IndentationGuideView(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnIndentationGuideView(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperIndentationGuideView(const QsciLexerMakefile* self);
const char* QsciLexerMakefile_Keywords(const QsciLexerMakefile* self, int set);
void QsciLexerMakefile_OnKeywords(const QsciLexerMakefile* self, intptr_t slot);
const char* QsciLexerMakefile_SuperKeywords(const QsciLexerMakefile* self, int set);
int QsciLexerMakefile_DefaultStyle(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnDefaultStyle(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperDefaultStyle(const QsciLexerMakefile* self);
QColor* QsciLexerMakefile_Paper(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnPaper(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_SuperPaper(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultColor2(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnDefaultColor2(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_SuperDefaultColor2(const QsciLexerMakefile* self, int style);
QFont* QsciLexerMakefile_DefaultFont2(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnDefaultFont2(const QsciLexerMakefile* self, intptr_t slot);
QFont* QsciLexerMakefile_SuperDefaultFont2(const QsciLexerMakefile* self, int style);
QColor* QsciLexerMakefile_DefaultPaper2(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_OnDefaultPaper2(const QsciLexerMakefile* self, intptr_t slot);
QColor* QsciLexerMakefile_SuperDefaultPaper2(const QsciLexerMakefile* self, int style);
void QsciLexerMakefile_SetEditor(QsciLexerMakefile* self, QsciScintilla* editor);
void QsciLexerMakefile_OnSetEditor(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperSetEditor(QsciLexerMakefile* self, QsciScintilla* editor);
void QsciLexerMakefile_RefreshProperties(QsciLexerMakefile* self);
void QsciLexerMakefile_OnRefreshProperties(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperRefreshProperties(QsciLexerMakefile* self);
int QsciLexerMakefile_StyleBitsNeeded(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnStyleBitsNeeded(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperStyleBitsNeeded(const QsciLexerMakefile* self);
void QsciLexerMakefile_SetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle);
void QsciLexerMakefile_OnSetAutoIndentStyle(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperSetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle);
void QsciLexerMakefile_SetColor(QsciLexerMakefile* self, const QColor* c, int style);
void QsciLexerMakefile_OnSetColor(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperSetColor(QsciLexerMakefile* self, const QColor* c, int style);
void QsciLexerMakefile_SetEolFill(QsciLexerMakefile* self, bool eoffill, int style);
void QsciLexerMakefile_OnSetEolFill(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperSetEolFill(QsciLexerMakefile* self, bool eoffill, int style);
void QsciLexerMakefile_SetFont(QsciLexerMakefile* self, const QFont* f, int style);
void QsciLexerMakefile_OnSetFont(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperSetFont(QsciLexerMakefile* self, const QFont* f, int style);
void QsciLexerMakefile_SetPaper(QsciLexerMakefile* self, const QColor* c, int style);
void QsciLexerMakefile_OnSetPaper(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperSetPaper(QsciLexerMakefile* self, const QColor* c, int style);
bool QsciLexerMakefile_ReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMakefile_OnReadProperties(QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_SuperReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMakefile_WriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMakefile_OnWriteProperties(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_SuperWriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMakefile_Event(QsciLexerMakefile* self, QEvent* event);
void QsciLexerMakefile_OnEvent(QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_SuperEvent(QsciLexerMakefile* self, QEvent* event);
bool QsciLexerMakefile_EventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event);
void QsciLexerMakefile_OnEventFilter(QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_SuperEventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event);
void QsciLexerMakefile_TimerEvent(QsciLexerMakefile* self, QTimerEvent* event);
void QsciLexerMakefile_OnTimerEvent(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperTimerEvent(QsciLexerMakefile* self, QTimerEvent* event);
void QsciLexerMakefile_ChildEvent(QsciLexerMakefile* self, QChildEvent* event);
void QsciLexerMakefile_OnChildEvent(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperChildEvent(QsciLexerMakefile* self, QChildEvent* event);
void QsciLexerMakefile_CustomEvent(QsciLexerMakefile* self, QEvent* event);
void QsciLexerMakefile_OnCustomEvent(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperCustomEvent(QsciLexerMakefile* self, QEvent* event);
void QsciLexerMakefile_ConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_OnConnectNotify(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_DisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_OnDisconnectNotify(QsciLexerMakefile* self, intptr_t slot);
void QsciLexerMakefile_SuperDisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
libqt_string QsciLexerMakefile_TextAsBytes(const QsciLexerMakefile* self, const libqt_string text);
void QsciLexerMakefile_OnTextAsBytes(const QsciLexerMakefile* self, intptr_t slot);
libqt_string QsciLexerMakefile_SuperTextAsBytes(const QsciLexerMakefile* self, const libqt_string text);
libqt_string QsciLexerMakefile_BytesAsText(const QsciLexerMakefile* self, const char* bytes, int size);
void QsciLexerMakefile_OnBytesAsText(const QsciLexerMakefile* self, intptr_t slot);
libqt_string QsciLexerMakefile_SuperBytesAsText(const QsciLexerMakefile* self, const char* bytes, int size);
QObject* QsciLexerMakefile_Sender(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnSender(const QsciLexerMakefile* self, intptr_t slot);
QObject* QsciLexerMakefile_SuperSender(const QsciLexerMakefile* self);
int QsciLexerMakefile_SenderSignalIndex(const QsciLexerMakefile* self);
void QsciLexerMakefile_OnSenderSignalIndex(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperSenderSignalIndex(const QsciLexerMakefile* self);
int QsciLexerMakefile_Receivers(const QsciLexerMakefile* self, const char* signal);
void QsciLexerMakefile_OnReceivers(const QsciLexerMakefile* self, intptr_t slot);
int QsciLexerMakefile_SuperReceivers(const QsciLexerMakefile* self, const char* signal);
bool QsciLexerMakefile_IsSignalConnected(const QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_OnIsSignalConnected(const QsciLexerMakefile* self, intptr_t slot);
bool QsciLexerMakefile_SuperIsSignalConnected(const QsciLexerMakefile* self, const QMetaMethod* signal);
void QsciLexerMakefile_Delete(QsciLexerMakefile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
