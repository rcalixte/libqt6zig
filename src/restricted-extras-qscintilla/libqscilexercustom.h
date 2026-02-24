#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCUSTOM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERCUSTOM_H

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
typedef struct QsciLexerCustom QsciLexerCustom;
typedef struct QsciScintilla QsciScintilla;
typedef struct QsciStyle QsciStyle;
#endif

QsciLexerCustom* QsciLexerCustom_new();
QsciLexerCustom* QsciLexerCustom_new2(QObject* parent);
QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self);
void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1);
int QsciLexerCustom_Metacall(QsciLexerCustom* self, int param1, int param2, void** param3);
void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style);
void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, const QsciStyle* style);
void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos);
void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end);
void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor);
int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self);
void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits);
void QsciLexerCustom_OnMetaObject(const QsciLexerCustom* self, intptr_t slot);
QMetaObject* QsciLexerCustom_SuperMetaObject(const QsciLexerCustom* self);
void QsciLexerCustom_OnMetacast(QsciLexerCustom* self, intptr_t slot);
void* QsciLexerCustom_SuperMetacast(QsciLexerCustom* self, const char* param1);
void QsciLexerCustom_OnMetacall(QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperMetacall(QsciLexerCustom* self, int param1, int param2, void** param3);
void QsciLexerCustom_OnStyleText(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperStyleText(QsciLexerCustom* self, int start, int end);
void QsciLexerCustom_OnSetEditor(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperSetEditor(QsciLexerCustom* self, QsciScintilla* editor);
void QsciLexerCustom_OnStyleBitsNeeded(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperStyleBitsNeeded(const QsciLexerCustom* self);
const char* QsciLexerCustom_Language(const QsciLexerCustom* self);
void QsciLexerCustom_OnLanguage(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperLanguage(const QsciLexerCustom* self);
const char* QsciLexerCustom_Lexer(const QsciLexerCustom* self);
void QsciLexerCustom_OnLexer(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperLexer(const QsciLexerCustom* self);
int QsciLexerCustom_LexerId(const QsciLexerCustom* self);
void QsciLexerCustom_OnLexerId(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperLexerId(const QsciLexerCustom* self);
const char* QsciLexerCustom_AutoCompletionFillups(const QsciLexerCustom* self);
void QsciLexerCustom_OnAutoCompletionFillups(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperAutoCompletionFillups(const QsciLexerCustom* self);
libqt_list /* of libqt_string */ QsciLexerCustom_AutoCompletionWordSeparators(const QsciLexerCustom* self);
void QsciLexerCustom_OnAutoCompletionWordSeparators(const QsciLexerCustom* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerCustom_SuperAutoCompletionWordSeparators(const QsciLexerCustom* self);
const char* QsciLexerCustom_BlockEnd(const QsciLexerCustom* self, int* style);
void QsciLexerCustom_OnBlockEnd(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperBlockEnd(const QsciLexerCustom* self, int* style);
int QsciLexerCustom_BlockLookback(const QsciLexerCustom* self);
void QsciLexerCustom_OnBlockLookback(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperBlockLookback(const QsciLexerCustom* self);
const char* QsciLexerCustom_BlockStart(const QsciLexerCustom* self, int* style);
void QsciLexerCustom_OnBlockStart(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperBlockStart(const QsciLexerCustom* self, int* style);
const char* QsciLexerCustom_BlockStartKeyword(const QsciLexerCustom* self, int* style);
void QsciLexerCustom_OnBlockStartKeyword(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperBlockStartKeyword(const QsciLexerCustom* self, int* style);
int QsciLexerCustom_BraceStyle(const QsciLexerCustom* self);
void QsciLexerCustom_OnBraceStyle(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperBraceStyle(const QsciLexerCustom* self);
bool QsciLexerCustom_CaseSensitive(const QsciLexerCustom* self);
void QsciLexerCustom_OnCaseSensitive(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperCaseSensitive(const QsciLexerCustom* self);
QColor* QsciLexerCustom_Color(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnColor(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_SuperColor(const QsciLexerCustom* self, int style);
bool QsciLexerCustom_EolFill(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnEolFill(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperEolFill(const QsciLexerCustom* self, int style);
QFont* QsciLexerCustom_Font(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnFont(const QsciLexerCustom* self, intptr_t slot);
QFont* QsciLexerCustom_SuperFont(const QsciLexerCustom* self, int style);
int QsciLexerCustom_IndentationGuideView(const QsciLexerCustom* self);
void QsciLexerCustom_OnIndentationGuideView(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperIndentationGuideView(const QsciLexerCustom* self);
const char* QsciLexerCustom_Keywords(const QsciLexerCustom* self, int set);
void QsciLexerCustom_OnKeywords(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperKeywords(const QsciLexerCustom* self, int set);
int QsciLexerCustom_DefaultStyle(const QsciLexerCustom* self);
void QsciLexerCustom_OnDefaultStyle(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperDefaultStyle(const QsciLexerCustom* self);
libqt_string QsciLexerCustom_Description(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDescription(const QsciLexerCustom* self, intptr_t slot);
libqt_string QsciLexerCustom_SuperDescription(const QsciLexerCustom* self, int style);
QColor* QsciLexerCustom_Paper(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnPaper(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_SuperPaper(const QsciLexerCustom* self, int style);
QColor* QsciLexerCustom_DefaultColor2(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultColor2(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_SuperDefaultColor2(const QsciLexerCustom* self, int style);
bool QsciLexerCustom_DefaultEolFill(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultEolFill(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperDefaultEolFill(const QsciLexerCustom* self, int style);
QFont* QsciLexerCustom_DefaultFont2(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultFont2(const QsciLexerCustom* self, intptr_t slot);
QFont* QsciLexerCustom_SuperDefaultFont2(const QsciLexerCustom* self, int style);
QColor* QsciLexerCustom_DefaultPaper2(const QsciLexerCustom* self, int style);
void QsciLexerCustom_OnDefaultPaper2(const QsciLexerCustom* self, intptr_t slot);
QColor* QsciLexerCustom_SuperDefaultPaper2(const QsciLexerCustom* self, int style);
void QsciLexerCustom_RefreshProperties(QsciLexerCustom* self);
void QsciLexerCustom_OnRefreshProperties(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperRefreshProperties(QsciLexerCustom* self);
const char* QsciLexerCustom_WordCharacters(const QsciLexerCustom* self);
void QsciLexerCustom_OnWordCharacters(const QsciLexerCustom* self, intptr_t slot);
const char* QsciLexerCustom_SuperWordCharacters(const QsciLexerCustom* self);
void QsciLexerCustom_SetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle);
void QsciLexerCustom_OnSetAutoIndentStyle(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperSetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle);
void QsciLexerCustom_SetColor(QsciLexerCustom* self, const QColor* c, int style);
void QsciLexerCustom_OnSetColor(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperSetColor(QsciLexerCustom* self, const QColor* c, int style);
void QsciLexerCustom_SetEolFill(QsciLexerCustom* self, bool eoffill, int style);
void QsciLexerCustom_OnSetEolFill(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperSetEolFill(QsciLexerCustom* self, bool eoffill, int style);
void QsciLexerCustom_SetFont(QsciLexerCustom* self, const QFont* f, int style);
void QsciLexerCustom_OnSetFont(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperSetFont(QsciLexerCustom* self, const QFont* f, int style);
void QsciLexerCustom_SetPaper(QsciLexerCustom* self, const QColor* c, int style);
void QsciLexerCustom_OnSetPaper(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperSetPaper(QsciLexerCustom* self, const QColor* c, int style);
bool QsciLexerCustom_ReadProperties(QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCustom_OnReadProperties(QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperReadProperties(QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCustom_WriteProperties(const QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
void QsciLexerCustom_OnWriteProperties(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperWriteProperties(const QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerCustom_Event(QsciLexerCustom* self, QEvent* event);
void QsciLexerCustom_OnEvent(QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperEvent(QsciLexerCustom* self, QEvent* event);
bool QsciLexerCustom_EventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event);
void QsciLexerCustom_OnEventFilter(QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperEventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event);
void QsciLexerCustom_TimerEvent(QsciLexerCustom* self, QTimerEvent* event);
void QsciLexerCustom_OnTimerEvent(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperTimerEvent(QsciLexerCustom* self, QTimerEvent* event);
void QsciLexerCustom_ChildEvent(QsciLexerCustom* self, QChildEvent* event);
void QsciLexerCustom_OnChildEvent(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperChildEvent(QsciLexerCustom* self, QChildEvent* event);
void QsciLexerCustom_CustomEvent(QsciLexerCustom* self, QEvent* event);
void QsciLexerCustom_OnCustomEvent(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperCustomEvent(QsciLexerCustom* self, QEvent* event);
void QsciLexerCustom_ConnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
void QsciLexerCustom_OnConnectNotify(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperConnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
void QsciLexerCustom_DisconnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
void QsciLexerCustom_OnDisconnectNotify(QsciLexerCustom* self, intptr_t slot);
void QsciLexerCustom_SuperDisconnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
libqt_string QsciLexerCustom_TextAsBytes(const QsciLexerCustom* self, const libqt_string text);
void QsciLexerCustom_OnTextAsBytes(const QsciLexerCustom* self, intptr_t slot);
libqt_string QsciLexerCustom_SuperTextAsBytes(const QsciLexerCustom* self, const libqt_string text);
libqt_string QsciLexerCustom_BytesAsText(const QsciLexerCustom* self, const char* bytes, int size);
void QsciLexerCustom_OnBytesAsText(const QsciLexerCustom* self, intptr_t slot);
libqt_string QsciLexerCustom_SuperBytesAsText(const QsciLexerCustom* self, const char* bytes, int size);
QObject* QsciLexerCustom_Sender(const QsciLexerCustom* self);
void QsciLexerCustom_OnSender(const QsciLexerCustom* self, intptr_t slot);
QObject* QsciLexerCustom_SuperSender(const QsciLexerCustom* self);
int QsciLexerCustom_SenderSignalIndex(const QsciLexerCustom* self);
void QsciLexerCustom_OnSenderSignalIndex(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperSenderSignalIndex(const QsciLexerCustom* self);
int QsciLexerCustom_Receivers(const QsciLexerCustom* self, const char* signal);
void QsciLexerCustom_OnReceivers(const QsciLexerCustom* self, intptr_t slot);
int QsciLexerCustom_SuperReceivers(const QsciLexerCustom* self, const char* signal);
bool QsciLexerCustom_IsSignalConnected(const QsciLexerCustom* self, const QMetaMethod* signal);
void QsciLexerCustom_OnIsSignalConnected(const QsciLexerCustom* self, intptr_t slot);
bool QsciLexerCustom_SuperIsSignalConnected(const QsciLexerCustom* self, const QMetaMethod* signal);
void QsciLexerCustom_Delete(QsciLexerCustom* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
