#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSREC_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERSREC_H

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
typedef struct QsciLexerSRec QsciLexerSRec;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerSRec* QsciLexerSRec_new();
QsciLexerSRec* QsciLexerSRec_new2(QObject* parent);
QMetaObject* QsciLexerSRec_MetaObject(const QsciLexerSRec* self);
void* QsciLexerSRec_Metacast(QsciLexerSRec* self, const char* param1);
int QsciLexerSRec_Metacall(QsciLexerSRec* self, int param1, int param2, void** param3);
const char* QsciLexerSRec_Language(const QsciLexerSRec* self);
const char* QsciLexerSRec_Lexer(const QsciLexerSRec* self);
libqt_string QsciLexerSRec_Description(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnMetaObject(const QsciLexerSRec* self, intptr_t slot);
QMetaObject* QsciLexerSRec_SuperMetaObject(const QsciLexerSRec* self);
void QsciLexerSRec_OnMetacast(QsciLexerSRec* self, intptr_t slot);
void* QsciLexerSRec_SuperMetacast(QsciLexerSRec* self, const char* param1);
void QsciLexerSRec_OnMetacall(QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperMetacall(QsciLexerSRec* self, int param1, int param2, void** param3);
int QsciLexerSRec_LexerId(const QsciLexerSRec* self);
void QsciLexerSRec_OnLexerId(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperLexerId(const QsciLexerSRec* self);
const char* QsciLexerSRec_AutoCompletionFillups(const QsciLexerSRec* self);
void QsciLexerSRec_OnAutoCompletionFillups(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_SuperAutoCompletionFillups(const QsciLexerSRec* self);
libqt_list /* of libqt_string */ QsciLexerSRec_AutoCompletionWordSeparators(const QsciLexerSRec* self);
void QsciLexerSRec_OnAutoCompletionWordSeparators(const QsciLexerSRec* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerSRec_SuperAutoCompletionWordSeparators(const QsciLexerSRec* self);
const char* QsciLexerSRec_BlockEnd(const QsciLexerSRec* self, int* style);
void QsciLexerSRec_OnBlockEnd(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_SuperBlockEnd(const QsciLexerSRec* self, int* style);
int QsciLexerSRec_BlockLookback(const QsciLexerSRec* self);
void QsciLexerSRec_OnBlockLookback(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperBlockLookback(const QsciLexerSRec* self);
const char* QsciLexerSRec_BlockStart(const QsciLexerSRec* self, int* style);
void QsciLexerSRec_OnBlockStart(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_SuperBlockStart(const QsciLexerSRec* self, int* style);
const char* QsciLexerSRec_BlockStartKeyword(const QsciLexerSRec* self, int* style);
void QsciLexerSRec_OnBlockStartKeyword(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_SuperBlockStartKeyword(const QsciLexerSRec* self, int* style);
int QsciLexerSRec_BraceStyle(const QsciLexerSRec* self);
void QsciLexerSRec_OnBraceStyle(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperBraceStyle(const QsciLexerSRec* self);
bool QsciLexerSRec_CaseSensitive(const QsciLexerSRec* self);
void QsciLexerSRec_OnCaseSensitive(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperCaseSensitive(const QsciLexerSRec* self);
QColor* QsciLexerSRec_Color(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnColor(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_SuperColor(const QsciLexerSRec* self, int style);
bool QsciLexerSRec_EolFill(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnEolFill(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperEolFill(const QsciLexerSRec* self, int style);
QFont* QsciLexerSRec_Font(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnFont(const QsciLexerSRec* self, intptr_t slot);
QFont* QsciLexerSRec_SuperFont(const QsciLexerSRec* self, int style);
int QsciLexerSRec_IndentationGuideView(const QsciLexerSRec* self);
void QsciLexerSRec_OnIndentationGuideView(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperIndentationGuideView(const QsciLexerSRec* self);
const char* QsciLexerSRec_Keywords(const QsciLexerSRec* self, int set);
void QsciLexerSRec_OnKeywords(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_SuperKeywords(const QsciLexerSRec* self, int set);
int QsciLexerSRec_DefaultStyle(const QsciLexerSRec* self);
void QsciLexerSRec_OnDefaultStyle(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperDefaultStyle(const QsciLexerSRec* self);
QColor* QsciLexerSRec_Paper(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnPaper(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_SuperPaper(const QsciLexerSRec* self, int style);
QColor* QsciLexerSRec_DefaultColor2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultColor2(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_SuperDefaultColor2(const QsciLexerSRec* self, int style);
bool QsciLexerSRec_DefaultEolFill(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultEolFill(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperDefaultEolFill(const QsciLexerSRec* self, int style);
QFont* QsciLexerSRec_DefaultFont2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultFont2(const QsciLexerSRec* self, intptr_t slot);
QFont* QsciLexerSRec_SuperDefaultFont2(const QsciLexerSRec* self, int style);
QColor* QsciLexerSRec_DefaultPaper2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_OnDefaultPaper2(const QsciLexerSRec* self, intptr_t slot);
QColor* QsciLexerSRec_SuperDefaultPaper2(const QsciLexerSRec* self, int style);
void QsciLexerSRec_SetEditor(QsciLexerSRec* self, QsciScintilla* editor);
void QsciLexerSRec_OnSetEditor(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperSetEditor(QsciLexerSRec* self, QsciScintilla* editor);
void QsciLexerSRec_RefreshProperties(QsciLexerSRec* self);
void QsciLexerSRec_OnRefreshProperties(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperRefreshProperties(QsciLexerSRec* self);
int QsciLexerSRec_StyleBitsNeeded(const QsciLexerSRec* self);
void QsciLexerSRec_OnStyleBitsNeeded(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperStyleBitsNeeded(const QsciLexerSRec* self);
const char* QsciLexerSRec_WordCharacters(const QsciLexerSRec* self);
void QsciLexerSRec_OnWordCharacters(const QsciLexerSRec* self, intptr_t slot);
const char* QsciLexerSRec_SuperWordCharacters(const QsciLexerSRec* self);
void QsciLexerSRec_SetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle);
void QsciLexerSRec_OnSetAutoIndentStyle(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperSetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle);
void QsciLexerSRec_SetColor(QsciLexerSRec* self, const QColor* c, int style);
void QsciLexerSRec_OnSetColor(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperSetColor(QsciLexerSRec* self, const QColor* c, int style);
void QsciLexerSRec_SetEolFill(QsciLexerSRec* self, bool eoffill, int style);
void QsciLexerSRec_OnSetEolFill(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperSetEolFill(QsciLexerSRec* self, bool eoffill, int style);
void QsciLexerSRec_SetFont(QsciLexerSRec* self, const QFont* f, int style);
void QsciLexerSRec_OnSetFont(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperSetFont(QsciLexerSRec* self, const QFont* f, int style);
void QsciLexerSRec_SetPaper(QsciLexerSRec* self, const QColor* c, int style);
void QsciLexerSRec_OnSetPaper(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperSetPaper(QsciLexerSRec* self, const QColor* c, int style);
bool QsciLexerSRec_ReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSRec_OnReadProperties(QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSRec_WriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
void QsciLexerSRec_OnWriteProperties(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperWriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerSRec_Event(QsciLexerSRec* self, QEvent* event);
void QsciLexerSRec_OnEvent(QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperEvent(QsciLexerSRec* self, QEvent* event);
bool QsciLexerSRec_EventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event);
void QsciLexerSRec_OnEventFilter(QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperEventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event);
void QsciLexerSRec_TimerEvent(QsciLexerSRec* self, QTimerEvent* event);
void QsciLexerSRec_OnTimerEvent(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperTimerEvent(QsciLexerSRec* self, QTimerEvent* event);
void QsciLexerSRec_ChildEvent(QsciLexerSRec* self, QChildEvent* event);
void QsciLexerSRec_OnChildEvent(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperChildEvent(QsciLexerSRec* self, QChildEvent* event);
void QsciLexerSRec_CustomEvent(QsciLexerSRec* self, QEvent* event);
void QsciLexerSRec_OnCustomEvent(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperCustomEvent(QsciLexerSRec* self, QEvent* event);
void QsciLexerSRec_ConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_OnConnectNotify(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_DisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_OnDisconnectNotify(QsciLexerSRec* self, intptr_t slot);
void QsciLexerSRec_SuperDisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
libqt_string QsciLexerSRec_TextAsBytes(const QsciLexerSRec* self, const libqt_string text);
void QsciLexerSRec_OnTextAsBytes(const QsciLexerSRec* self, intptr_t slot);
libqt_string QsciLexerSRec_SuperTextAsBytes(const QsciLexerSRec* self, const libqt_string text);
libqt_string QsciLexerSRec_BytesAsText(const QsciLexerSRec* self, const char* bytes, int size);
void QsciLexerSRec_OnBytesAsText(const QsciLexerSRec* self, intptr_t slot);
libqt_string QsciLexerSRec_SuperBytesAsText(const QsciLexerSRec* self, const char* bytes, int size);
QObject* QsciLexerSRec_Sender(const QsciLexerSRec* self);
void QsciLexerSRec_OnSender(const QsciLexerSRec* self, intptr_t slot);
QObject* QsciLexerSRec_SuperSender(const QsciLexerSRec* self);
int QsciLexerSRec_SenderSignalIndex(const QsciLexerSRec* self);
void QsciLexerSRec_OnSenderSignalIndex(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperSenderSignalIndex(const QsciLexerSRec* self);
int QsciLexerSRec_Receivers(const QsciLexerSRec* self, const char* signal);
void QsciLexerSRec_OnReceivers(const QsciLexerSRec* self, intptr_t slot);
int QsciLexerSRec_SuperReceivers(const QsciLexerSRec* self, const char* signal);
bool QsciLexerSRec_IsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_OnIsSignalConnected(const QsciLexerSRec* self, intptr_t slot);
bool QsciLexerSRec_SuperIsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal);
void QsciLexerSRec_Delete(QsciLexerSRec* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
