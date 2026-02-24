#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTCL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERTCL_H

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
typedef struct QsciLexerTCL QsciLexerTCL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerTCL* QsciLexerTCL_new();
QsciLexerTCL* QsciLexerTCL_new2(QObject* parent);
QMetaObject* QsciLexerTCL_MetaObject(const QsciLexerTCL* self);
void* QsciLexerTCL_Metacast(QsciLexerTCL* self, const char* param1);
int QsciLexerTCL_Metacall(QsciLexerTCL* self, int param1, int param2, void** param3);
const char* QsciLexerTCL_Language(const QsciLexerTCL* self);
const char* QsciLexerTCL_Lexer(const QsciLexerTCL* self);
int QsciLexerTCL_BraceStyle(const QsciLexerTCL* self);
QColor* QsciLexerTCL_DefaultColor(const QsciLexerTCL* self, int style);
bool QsciLexerTCL_DefaultEolFill(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_DefaultFont(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_DefaultPaper(const QsciLexerTCL* self, int style);
const char* QsciLexerTCL_Keywords(const QsciLexerTCL* self, int set);
libqt_string QsciLexerTCL_Description(const QsciLexerTCL* self, int style);
void QsciLexerTCL_RefreshProperties(QsciLexerTCL* self);
void QsciLexerTCL_SetFoldComments(QsciLexerTCL* self, bool fold);
bool QsciLexerTCL_FoldComments(const QsciLexerTCL* self);
void QsciLexerTCL_OnMetaObject(const QsciLexerTCL* self, intptr_t slot);
QMetaObject* QsciLexerTCL_SuperMetaObject(const QsciLexerTCL* self);
void QsciLexerTCL_OnMetacast(QsciLexerTCL* self, intptr_t slot);
void* QsciLexerTCL_SuperMetacast(QsciLexerTCL* self, const char* param1);
void QsciLexerTCL_OnMetacall(QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperMetacall(QsciLexerTCL* self, int param1, int param2, void** param3);
int QsciLexerTCL_LexerId(const QsciLexerTCL* self);
void QsciLexerTCL_OnLexerId(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperLexerId(const QsciLexerTCL* self);
const char* QsciLexerTCL_AutoCompletionFillups(const QsciLexerTCL* self);
void QsciLexerTCL_OnAutoCompletionFillups(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_SuperAutoCompletionFillups(const QsciLexerTCL* self);
libqt_list /* of libqt_string */ QsciLexerTCL_AutoCompletionWordSeparators(const QsciLexerTCL* self);
void QsciLexerTCL_OnAutoCompletionWordSeparators(const QsciLexerTCL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerTCL_SuperAutoCompletionWordSeparators(const QsciLexerTCL* self);
const char* QsciLexerTCL_BlockEnd(const QsciLexerTCL* self, int* style);
void QsciLexerTCL_OnBlockEnd(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_SuperBlockEnd(const QsciLexerTCL* self, int* style);
int QsciLexerTCL_BlockLookback(const QsciLexerTCL* self);
void QsciLexerTCL_OnBlockLookback(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperBlockLookback(const QsciLexerTCL* self);
const char* QsciLexerTCL_BlockStart(const QsciLexerTCL* self, int* style);
void QsciLexerTCL_OnBlockStart(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_SuperBlockStart(const QsciLexerTCL* self, int* style);
const char* QsciLexerTCL_BlockStartKeyword(const QsciLexerTCL* self, int* style);
void QsciLexerTCL_OnBlockStartKeyword(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_SuperBlockStartKeyword(const QsciLexerTCL* self, int* style);
bool QsciLexerTCL_CaseSensitive(const QsciLexerTCL* self);
void QsciLexerTCL_OnCaseSensitive(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_SuperCaseSensitive(const QsciLexerTCL* self);
QColor* QsciLexerTCL_Color(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnColor(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_SuperColor(const QsciLexerTCL* self, int style);
bool QsciLexerTCL_EolFill(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnEolFill(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_SuperEolFill(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_Font(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnFont(const QsciLexerTCL* self, intptr_t slot);
QFont* QsciLexerTCL_SuperFont(const QsciLexerTCL* self, int style);
int QsciLexerTCL_IndentationGuideView(const QsciLexerTCL* self);
void QsciLexerTCL_OnIndentationGuideView(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperIndentationGuideView(const QsciLexerTCL* self);
int QsciLexerTCL_DefaultStyle(const QsciLexerTCL* self);
void QsciLexerTCL_OnDefaultStyle(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperDefaultStyle(const QsciLexerTCL* self);
QColor* QsciLexerTCL_Paper(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnPaper(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_SuperPaper(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_DefaultColor2(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnDefaultColor2(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_SuperDefaultColor2(const QsciLexerTCL* self, int style);
QFont* QsciLexerTCL_DefaultFont2(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnDefaultFont2(const QsciLexerTCL* self, intptr_t slot);
QFont* QsciLexerTCL_SuperDefaultFont2(const QsciLexerTCL* self, int style);
QColor* QsciLexerTCL_DefaultPaper2(const QsciLexerTCL* self, int style);
void QsciLexerTCL_OnDefaultPaper2(const QsciLexerTCL* self, intptr_t slot);
QColor* QsciLexerTCL_SuperDefaultPaper2(const QsciLexerTCL* self, int style);
void QsciLexerTCL_SetEditor(QsciLexerTCL* self, QsciScintilla* editor);
void QsciLexerTCL_OnSetEditor(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperSetEditor(QsciLexerTCL* self, QsciScintilla* editor);
int QsciLexerTCL_StyleBitsNeeded(const QsciLexerTCL* self);
void QsciLexerTCL_OnStyleBitsNeeded(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperStyleBitsNeeded(const QsciLexerTCL* self);
const char* QsciLexerTCL_WordCharacters(const QsciLexerTCL* self);
void QsciLexerTCL_OnWordCharacters(const QsciLexerTCL* self, intptr_t slot);
const char* QsciLexerTCL_SuperWordCharacters(const QsciLexerTCL* self);
void QsciLexerTCL_SetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle);
void QsciLexerTCL_OnSetAutoIndentStyle(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperSetAutoIndentStyle(QsciLexerTCL* self, int autoindentstyle);
void QsciLexerTCL_SetColor(QsciLexerTCL* self, const QColor* c, int style);
void QsciLexerTCL_OnSetColor(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperSetColor(QsciLexerTCL* self, const QColor* c, int style);
void QsciLexerTCL_SetEolFill(QsciLexerTCL* self, bool eoffill, int style);
void QsciLexerTCL_OnSetEolFill(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperSetEolFill(QsciLexerTCL* self, bool eoffill, int style);
void QsciLexerTCL_SetFont(QsciLexerTCL* self, const QFont* f, int style);
void QsciLexerTCL_OnSetFont(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperSetFont(QsciLexerTCL* self, const QFont* f, int style);
void QsciLexerTCL_SetPaper(QsciLexerTCL* self, const QColor* c, int style);
void QsciLexerTCL_OnSetPaper(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperSetPaper(QsciLexerTCL* self, const QColor* c, int style);
bool QsciLexerTCL_ReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTCL_OnReadProperties(QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_SuperReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTCL_WriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerTCL_OnWriteProperties(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_SuperWriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerTCL_Event(QsciLexerTCL* self, QEvent* event);
void QsciLexerTCL_OnEvent(QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_SuperEvent(QsciLexerTCL* self, QEvent* event);
bool QsciLexerTCL_EventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event);
void QsciLexerTCL_OnEventFilter(QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_SuperEventFilter(QsciLexerTCL* self, QObject* watched, QEvent* event);
void QsciLexerTCL_TimerEvent(QsciLexerTCL* self, QTimerEvent* event);
void QsciLexerTCL_OnTimerEvent(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperTimerEvent(QsciLexerTCL* self, QTimerEvent* event);
void QsciLexerTCL_ChildEvent(QsciLexerTCL* self, QChildEvent* event);
void QsciLexerTCL_OnChildEvent(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperChildEvent(QsciLexerTCL* self, QChildEvent* event);
void QsciLexerTCL_CustomEvent(QsciLexerTCL* self, QEvent* event);
void QsciLexerTCL_OnCustomEvent(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperCustomEvent(QsciLexerTCL* self, QEvent* event);
void QsciLexerTCL_ConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
void QsciLexerTCL_OnConnectNotify(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
void QsciLexerTCL_DisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
void QsciLexerTCL_OnDisconnectNotify(QsciLexerTCL* self, intptr_t slot);
void QsciLexerTCL_SuperDisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
libqt_string QsciLexerTCL_TextAsBytes(const QsciLexerTCL* self, const libqt_string text);
void QsciLexerTCL_OnTextAsBytes(const QsciLexerTCL* self, intptr_t slot);
libqt_string QsciLexerTCL_SuperTextAsBytes(const QsciLexerTCL* self, const libqt_string text);
libqt_string QsciLexerTCL_BytesAsText(const QsciLexerTCL* self, const char* bytes, int size);
void QsciLexerTCL_OnBytesAsText(const QsciLexerTCL* self, intptr_t slot);
libqt_string QsciLexerTCL_SuperBytesAsText(const QsciLexerTCL* self, const char* bytes, int size);
QObject* QsciLexerTCL_Sender(const QsciLexerTCL* self);
void QsciLexerTCL_OnSender(const QsciLexerTCL* self, intptr_t slot);
QObject* QsciLexerTCL_SuperSender(const QsciLexerTCL* self);
int QsciLexerTCL_SenderSignalIndex(const QsciLexerTCL* self);
void QsciLexerTCL_OnSenderSignalIndex(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperSenderSignalIndex(const QsciLexerTCL* self);
int QsciLexerTCL_Receivers(const QsciLexerTCL* self, const char* signal);
void QsciLexerTCL_OnReceivers(const QsciLexerTCL* self, intptr_t slot);
int QsciLexerTCL_SuperReceivers(const QsciLexerTCL* self, const char* signal);
bool QsciLexerTCL_IsSignalConnected(const QsciLexerTCL* self, const QMetaMethod* signal);
void QsciLexerTCL_OnIsSignalConnected(const QsciLexerTCL* self, intptr_t slot);
bool QsciLexerTCL_SuperIsSignalConnected(const QsciLexerTCL* self, const QMetaMethod* signal);
void QsciLexerTCL_Delete(QsciLexerTCL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
