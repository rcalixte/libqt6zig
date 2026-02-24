#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERYAML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERYAML_H

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
typedef struct QsciLexerYAML QsciLexerYAML;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerYAML* QsciLexerYAML_new();
QsciLexerYAML* QsciLexerYAML_new2(QObject* parent);
QMetaObject* QsciLexerYAML_MetaObject(const QsciLexerYAML* self);
void* QsciLexerYAML_Metacast(QsciLexerYAML* self, const char* param1);
int QsciLexerYAML_Metacall(QsciLexerYAML* self, int param1, int param2, void** param3);
const char* QsciLexerYAML_Language(const QsciLexerYAML* self);
const char* QsciLexerYAML_Lexer(const QsciLexerYAML* self);
QColor* QsciLexerYAML_DefaultColor(const QsciLexerYAML* self, int style);
bool QsciLexerYAML_DefaultEolFill(const QsciLexerYAML* self, int style);
QFont* QsciLexerYAML_DefaultFont(const QsciLexerYAML* self, int style);
QColor* QsciLexerYAML_DefaultPaper(const QsciLexerYAML* self, int style);
const char* QsciLexerYAML_Keywords(const QsciLexerYAML* self, int set);
libqt_string QsciLexerYAML_Description(const QsciLexerYAML* self, int style);
void QsciLexerYAML_RefreshProperties(QsciLexerYAML* self);
bool QsciLexerYAML_FoldComments(const QsciLexerYAML* self);
void QsciLexerYAML_SetFoldComments(QsciLexerYAML* self, bool fold);
void QsciLexerYAML_OnMetaObject(const QsciLexerYAML* self, intptr_t slot);
QMetaObject* QsciLexerYAML_SuperMetaObject(const QsciLexerYAML* self);
void QsciLexerYAML_OnMetacast(QsciLexerYAML* self, intptr_t slot);
void* QsciLexerYAML_SuperMetacast(QsciLexerYAML* self, const char* param1);
void QsciLexerYAML_OnMetacall(QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperMetacall(QsciLexerYAML* self, int param1, int param2, void** param3);
void QsciLexerYAML_OnSetFoldComments(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperSetFoldComments(QsciLexerYAML* self, bool fold);
int QsciLexerYAML_LexerId(const QsciLexerYAML* self);
void QsciLexerYAML_OnLexerId(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperLexerId(const QsciLexerYAML* self);
const char* QsciLexerYAML_AutoCompletionFillups(const QsciLexerYAML* self);
void QsciLexerYAML_OnAutoCompletionFillups(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_SuperAutoCompletionFillups(const QsciLexerYAML* self);
libqt_list /* of libqt_string */ QsciLexerYAML_AutoCompletionWordSeparators(const QsciLexerYAML* self);
void QsciLexerYAML_OnAutoCompletionWordSeparators(const QsciLexerYAML* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerYAML_SuperAutoCompletionWordSeparators(const QsciLexerYAML* self);
const char* QsciLexerYAML_BlockEnd(const QsciLexerYAML* self, int* style);
void QsciLexerYAML_OnBlockEnd(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_SuperBlockEnd(const QsciLexerYAML* self, int* style);
int QsciLexerYAML_BlockLookback(const QsciLexerYAML* self);
void QsciLexerYAML_OnBlockLookback(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperBlockLookback(const QsciLexerYAML* self);
const char* QsciLexerYAML_BlockStart(const QsciLexerYAML* self, int* style);
void QsciLexerYAML_OnBlockStart(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_SuperBlockStart(const QsciLexerYAML* self, int* style);
const char* QsciLexerYAML_BlockStartKeyword(const QsciLexerYAML* self, int* style);
void QsciLexerYAML_OnBlockStartKeyword(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_SuperBlockStartKeyword(const QsciLexerYAML* self, int* style);
int QsciLexerYAML_BraceStyle(const QsciLexerYAML* self);
void QsciLexerYAML_OnBraceStyle(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperBraceStyle(const QsciLexerYAML* self);
bool QsciLexerYAML_CaseSensitive(const QsciLexerYAML* self);
void QsciLexerYAML_OnCaseSensitive(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_SuperCaseSensitive(const QsciLexerYAML* self);
QColor* QsciLexerYAML_Color(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnColor(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_SuperColor(const QsciLexerYAML* self, int style);
bool QsciLexerYAML_EolFill(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnEolFill(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_SuperEolFill(const QsciLexerYAML* self, int style);
QFont* QsciLexerYAML_Font(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnFont(const QsciLexerYAML* self, intptr_t slot);
QFont* QsciLexerYAML_SuperFont(const QsciLexerYAML* self, int style);
int QsciLexerYAML_IndentationGuideView(const QsciLexerYAML* self);
void QsciLexerYAML_OnIndentationGuideView(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperIndentationGuideView(const QsciLexerYAML* self);
int QsciLexerYAML_DefaultStyle(const QsciLexerYAML* self);
void QsciLexerYAML_OnDefaultStyle(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperDefaultStyle(const QsciLexerYAML* self);
QColor* QsciLexerYAML_Paper(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnPaper(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_SuperPaper(const QsciLexerYAML* self, int style);
QColor* QsciLexerYAML_DefaultColor2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnDefaultColor2(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_SuperDefaultColor2(const QsciLexerYAML* self, int style);
QFont* QsciLexerYAML_DefaultFont2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnDefaultFont2(const QsciLexerYAML* self, intptr_t slot);
QFont* QsciLexerYAML_SuperDefaultFont2(const QsciLexerYAML* self, int style);
QColor* QsciLexerYAML_DefaultPaper2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnDefaultPaper2(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_SuperDefaultPaper2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_SetEditor(QsciLexerYAML* self, QsciScintilla* editor);
void QsciLexerYAML_OnSetEditor(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperSetEditor(QsciLexerYAML* self, QsciScintilla* editor);
int QsciLexerYAML_StyleBitsNeeded(const QsciLexerYAML* self);
void QsciLexerYAML_OnStyleBitsNeeded(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperStyleBitsNeeded(const QsciLexerYAML* self);
const char* QsciLexerYAML_WordCharacters(const QsciLexerYAML* self);
void QsciLexerYAML_OnWordCharacters(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_SuperWordCharacters(const QsciLexerYAML* self);
void QsciLexerYAML_SetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle);
void QsciLexerYAML_OnSetAutoIndentStyle(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperSetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle);
void QsciLexerYAML_SetColor(QsciLexerYAML* self, const QColor* c, int style);
void QsciLexerYAML_OnSetColor(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperSetColor(QsciLexerYAML* self, const QColor* c, int style);
void QsciLexerYAML_SetEolFill(QsciLexerYAML* self, bool eoffill, int style);
void QsciLexerYAML_OnSetEolFill(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperSetEolFill(QsciLexerYAML* self, bool eoffill, int style);
void QsciLexerYAML_SetFont(QsciLexerYAML* self, const QFont* f, int style);
void QsciLexerYAML_OnSetFont(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperSetFont(QsciLexerYAML* self, const QFont* f, int style);
void QsciLexerYAML_SetPaper(QsciLexerYAML* self, const QColor* c, int style);
void QsciLexerYAML_OnSetPaper(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperSetPaper(QsciLexerYAML* self, const QColor* c, int style);
bool QsciLexerYAML_ReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
void QsciLexerYAML_OnReadProperties(QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_SuperReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerYAML_WriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
void QsciLexerYAML_OnWriteProperties(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_SuperWriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerYAML_Event(QsciLexerYAML* self, QEvent* event);
void QsciLexerYAML_OnEvent(QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_SuperEvent(QsciLexerYAML* self, QEvent* event);
bool QsciLexerYAML_EventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event);
void QsciLexerYAML_OnEventFilter(QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_SuperEventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event);
void QsciLexerYAML_TimerEvent(QsciLexerYAML* self, QTimerEvent* event);
void QsciLexerYAML_OnTimerEvent(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperTimerEvent(QsciLexerYAML* self, QTimerEvent* event);
void QsciLexerYAML_ChildEvent(QsciLexerYAML* self, QChildEvent* event);
void QsciLexerYAML_OnChildEvent(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperChildEvent(QsciLexerYAML* self, QChildEvent* event);
void QsciLexerYAML_CustomEvent(QsciLexerYAML* self, QEvent* event);
void QsciLexerYAML_OnCustomEvent(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperCustomEvent(QsciLexerYAML* self, QEvent* event);
void QsciLexerYAML_ConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_OnConnectNotify(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_DisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_OnDisconnectNotify(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_SuperDisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
libqt_string QsciLexerYAML_TextAsBytes(const QsciLexerYAML* self, const libqt_string text);
void QsciLexerYAML_OnTextAsBytes(const QsciLexerYAML* self, intptr_t slot);
libqt_string QsciLexerYAML_SuperTextAsBytes(const QsciLexerYAML* self, const libqt_string text);
libqt_string QsciLexerYAML_BytesAsText(const QsciLexerYAML* self, const char* bytes, int size);
void QsciLexerYAML_OnBytesAsText(const QsciLexerYAML* self, intptr_t slot);
libqt_string QsciLexerYAML_SuperBytesAsText(const QsciLexerYAML* self, const char* bytes, int size);
QObject* QsciLexerYAML_Sender(const QsciLexerYAML* self);
void QsciLexerYAML_OnSender(const QsciLexerYAML* self, intptr_t slot);
QObject* QsciLexerYAML_SuperSender(const QsciLexerYAML* self);
int QsciLexerYAML_SenderSignalIndex(const QsciLexerYAML* self);
void QsciLexerYAML_OnSenderSignalIndex(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperSenderSignalIndex(const QsciLexerYAML* self);
int QsciLexerYAML_Receivers(const QsciLexerYAML* self, const char* signal);
void QsciLexerYAML_OnReceivers(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_SuperReceivers(const QsciLexerYAML* self, const char* signal);
bool QsciLexerYAML_IsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_OnIsSignalConnected(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_SuperIsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_Delete(QsciLexerYAML* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
