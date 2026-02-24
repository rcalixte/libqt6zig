#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERIDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERIDL_H

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
typedef struct QsciLexerCPP QsciLexerCPP;
typedef struct QsciLexerIDL QsciLexerIDL;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerIDL* QsciLexerIDL_new();
QsciLexerIDL* QsciLexerIDL_new2(QObject* parent);
QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self);
void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1);
int QsciLexerIDL_Metacall(QsciLexerIDL* self, int param1, int param2, void** param3);
const char* QsciLexerIDL_Language(const QsciLexerIDL* self);
QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style);
const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set);
libqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnMetaObject(const QsciLexerIDL* self, intptr_t slot);
QMetaObject* QsciLexerIDL_SuperMetaObject(const QsciLexerIDL* self);
void QsciLexerIDL_OnMetacast(QsciLexerIDL* self, intptr_t slot);
void* QsciLexerIDL_SuperMetacast(QsciLexerIDL* self, const char* param1);
void QsciLexerIDL_OnMetacall(QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperMetacall(QsciLexerIDL* self, int param1, int param2, void** param3);
void QsciLexerIDL_SetFoldAtElse(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldAtElse(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetFoldAtElse(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetFoldComments(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldComments(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetFoldComments(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetFoldCompact(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldCompact(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetFoldCompact(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetFoldPreprocessor(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_OnSetFoldPreprocessor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetFoldPreprocessor(QsciLexerIDL* self, bool fold);
void QsciLexerIDL_SetStylePreprocessor(QsciLexerIDL* self, bool style);
void QsciLexerIDL_OnSetStylePreprocessor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetStylePreprocessor(QsciLexerIDL* self, bool style);
const char* QsciLexerIDL_Lexer(const QsciLexerIDL* self);
void QsciLexerIDL_OnLexer(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_SuperLexer(const QsciLexerIDL* self);
int QsciLexerIDL_LexerId(const QsciLexerIDL* self);
void QsciLexerIDL_OnLexerId(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperLexerId(const QsciLexerIDL* self);
const char* QsciLexerIDL_AutoCompletionFillups(const QsciLexerIDL* self);
void QsciLexerIDL_OnAutoCompletionFillups(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_SuperAutoCompletionFillups(const QsciLexerIDL* self);
libqt_list /* of libqt_string */ QsciLexerIDL_AutoCompletionWordSeparators(const QsciLexerIDL* self);
void QsciLexerIDL_OnAutoCompletionWordSeparators(const QsciLexerIDL* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerIDL_SuperAutoCompletionWordSeparators(const QsciLexerIDL* self);
const char* QsciLexerIDL_BlockEnd(const QsciLexerIDL* self, int* style);
void QsciLexerIDL_OnBlockEnd(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_SuperBlockEnd(const QsciLexerIDL* self, int* style);
int QsciLexerIDL_BlockLookback(const QsciLexerIDL* self);
void QsciLexerIDL_OnBlockLookback(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperBlockLookback(const QsciLexerIDL* self);
const char* QsciLexerIDL_BlockStart(const QsciLexerIDL* self, int* style);
void QsciLexerIDL_OnBlockStart(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_SuperBlockStart(const QsciLexerIDL* self, int* style);
const char* QsciLexerIDL_BlockStartKeyword(const QsciLexerIDL* self, int* style);
void QsciLexerIDL_OnBlockStartKeyword(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_SuperBlockStartKeyword(const QsciLexerIDL* self, int* style);
int QsciLexerIDL_BraceStyle(const QsciLexerIDL* self);
void QsciLexerIDL_OnBraceStyle(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperBraceStyle(const QsciLexerIDL* self);
bool QsciLexerIDL_CaseSensitive(const QsciLexerIDL* self);
void QsciLexerIDL_OnCaseSensitive(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperCaseSensitive(const QsciLexerIDL* self);
QColor* QsciLexerIDL_Color(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnColor(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_SuperColor(const QsciLexerIDL* self, int style);
bool QsciLexerIDL_EolFill(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnEolFill(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperEolFill(const QsciLexerIDL* self, int style);
QFont* QsciLexerIDL_Font(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnFont(const QsciLexerIDL* self, intptr_t slot);
QFont* QsciLexerIDL_SuperFont(const QsciLexerIDL* self, int style);
int QsciLexerIDL_IndentationGuideView(const QsciLexerIDL* self);
void QsciLexerIDL_OnIndentationGuideView(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperIndentationGuideView(const QsciLexerIDL* self);
int QsciLexerIDL_DefaultStyle(const QsciLexerIDL* self);
void QsciLexerIDL_OnDefaultStyle(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperDefaultStyle(const QsciLexerIDL* self);
QColor* QsciLexerIDL_Paper(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnPaper(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_SuperPaper(const QsciLexerIDL* self, int style);
QColor* QsciLexerIDL_DefaultColor2(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultColor2(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_SuperDefaultColor2(const QsciLexerIDL* self, int style);
bool QsciLexerIDL_DefaultEolFill(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultEolFill(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperDefaultEolFill(const QsciLexerIDL* self, int style);
QFont* QsciLexerIDL_DefaultFont2(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultFont2(const QsciLexerIDL* self, intptr_t slot);
QFont* QsciLexerIDL_SuperDefaultFont2(const QsciLexerIDL* self, int style);
QColor* QsciLexerIDL_DefaultPaper2(const QsciLexerIDL* self, int style);
void QsciLexerIDL_OnDefaultPaper2(const QsciLexerIDL* self, intptr_t slot);
QColor* QsciLexerIDL_SuperDefaultPaper2(const QsciLexerIDL* self, int style);
void QsciLexerIDL_SetEditor(QsciLexerIDL* self, QsciScintilla* editor);
void QsciLexerIDL_OnSetEditor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetEditor(QsciLexerIDL* self, QsciScintilla* editor);
void QsciLexerIDL_RefreshProperties(QsciLexerIDL* self);
void QsciLexerIDL_OnRefreshProperties(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperRefreshProperties(QsciLexerIDL* self);
int QsciLexerIDL_StyleBitsNeeded(const QsciLexerIDL* self);
void QsciLexerIDL_OnStyleBitsNeeded(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperStyleBitsNeeded(const QsciLexerIDL* self);
const char* QsciLexerIDL_WordCharacters(const QsciLexerIDL* self);
void QsciLexerIDL_OnWordCharacters(const QsciLexerIDL* self, intptr_t slot);
const char* QsciLexerIDL_SuperWordCharacters(const QsciLexerIDL* self);
void QsciLexerIDL_SetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle);
void QsciLexerIDL_OnSetAutoIndentStyle(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetAutoIndentStyle(QsciLexerIDL* self, int autoindentstyle);
void QsciLexerIDL_SetColor(QsciLexerIDL* self, const QColor* c, int style);
void QsciLexerIDL_OnSetColor(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetColor(QsciLexerIDL* self, const QColor* c, int style);
void QsciLexerIDL_SetEolFill(QsciLexerIDL* self, bool eoffill, int style);
void QsciLexerIDL_OnSetEolFill(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetEolFill(QsciLexerIDL* self, bool eoffill, int style);
void QsciLexerIDL_SetFont(QsciLexerIDL* self, const QFont* f, int style);
void QsciLexerIDL_OnSetFont(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetFont(QsciLexerIDL* self, const QFont* f, int style);
void QsciLexerIDL_SetPaper(QsciLexerIDL* self, const QColor* c, int style);
void QsciLexerIDL_OnSetPaper(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperSetPaper(QsciLexerIDL* self, const QColor* c, int style);
bool QsciLexerIDL_ReadProperties(QsciLexerIDL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerIDL_OnReadProperties(QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperReadProperties(QsciLexerIDL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerIDL_WriteProperties(const QsciLexerIDL* self, QSettings* qs, const libqt_string prefix);
void QsciLexerIDL_OnWriteProperties(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperWriteProperties(const QsciLexerIDL* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerIDL_Event(QsciLexerIDL* self, QEvent* event);
void QsciLexerIDL_OnEvent(QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperEvent(QsciLexerIDL* self, QEvent* event);
bool QsciLexerIDL_EventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event);
void QsciLexerIDL_OnEventFilter(QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperEventFilter(QsciLexerIDL* self, QObject* watched, QEvent* event);
void QsciLexerIDL_TimerEvent(QsciLexerIDL* self, QTimerEvent* event);
void QsciLexerIDL_OnTimerEvent(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperTimerEvent(QsciLexerIDL* self, QTimerEvent* event);
void QsciLexerIDL_ChildEvent(QsciLexerIDL* self, QChildEvent* event);
void QsciLexerIDL_OnChildEvent(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperChildEvent(QsciLexerIDL* self, QChildEvent* event);
void QsciLexerIDL_CustomEvent(QsciLexerIDL* self, QEvent* event);
void QsciLexerIDL_OnCustomEvent(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperCustomEvent(QsciLexerIDL* self, QEvent* event);
void QsciLexerIDL_ConnectNotify(QsciLexerIDL* self, const QMetaMethod* signal);
void QsciLexerIDL_OnConnectNotify(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperConnectNotify(QsciLexerIDL* self, const QMetaMethod* signal);
void QsciLexerIDL_DisconnectNotify(QsciLexerIDL* self, const QMetaMethod* signal);
void QsciLexerIDL_OnDisconnectNotify(QsciLexerIDL* self, intptr_t slot);
void QsciLexerIDL_SuperDisconnectNotify(QsciLexerIDL* self, const QMetaMethod* signal);
libqt_string QsciLexerIDL_TextAsBytes(const QsciLexerIDL* self, const libqt_string text);
void QsciLexerIDL_OnTextAsBytes(const QsciLexerIDL* self, intptr_t slot);
libqt_string QsciLexerIDL_SuperTextAsBytes(const QsciLexerIDL* self, const libqt_string text);
libqt_string QsciLexerIDL_BytesAsText(const QsciLexerIDL* self, const char* bytes, int size);
void QsciLexerIDL_OnBytesAsText(const QsciLexerIDL* self, intptr_t slot);
libqt_string QsciLexerIDL_SuperBytesAsText(const QsciLexerIDL* self, const char* bytes, int size);
QObject* QsciLexerIDL_Sender(const QsciLexerIDL* self);
void QsciLexerIDL_OnSender(const QsciLexerIDL* self, intptr_t slot);
QObject* QsciLexerIDL_SuperSender(const QsciLexerIDL* self);
int QsciLexerIDL_SenderSignalIndex(const QsciLexerIDL* self);
void QsciLexerIDL_OnSenderSignalIndex(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperSenderSignalIndex(const QsciLexerIDL* self);
int QsciLexerIDL_Receivers(const QsciLexerIDL* self, const char* signal);
void QsciLexerIDL_OnReceivers(const QsciLexerIDL* self, intptr_t slot);
int QsciLexerIDL_SuperReceivers(const QsciLexerIDL* self, const char* signal);
bool QsciLexerIDL_IsSignalConnected(const QsciLexerIDL* self, const QMetaMethod* signal);
void QsciLexerIDL_OnIsSignalConnected(const QsciLexerIDL* self, intptr_t slot);
bool QsciLexerIDL_SuperIsSignalConnected(const QsciLexerIDL* self, const QMetaMethod* signal);
void QsciLexerIDL_Delete(QsciLexerIDL* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
