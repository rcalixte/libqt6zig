#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEREDIFACT_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEREDIFACT_H

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
typedef struct QsciLexerEDIFACT QsciLexerEDIFACT;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerEDIFACT* QsciLexerEDIFACT_new();
QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent);
QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self);
void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1);
int QsciLexerEDIFACT_Metacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3);
libqt_string QsciLexerEDIFACT_Tr(const char* s);
const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style);
libqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style);
libqt_string QsciLexerEDIFACT_Tr2(const char* s, const char* c);
libqt_string QsciLexerEDIFACT_Tr3(const char* s, const char* c, int n);
void QsciLexerEDIFACT_OnMetaObject(QsciLexerEDIFACT* self, intptr_t slot);
QMetaObject* QsciLexerEDIFACT_SuperMetaObject(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnMetacast(QsciLexerEDIFACT* self, intptr_t slot);
void* QsciLexerEDIFACT_SuperMetacast(QsciLexerEDIFACT* self, const char* param1);
void QsciLexerEDIFACT_OnMetacall(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperMetacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3);
int QsciLexerEDIFACT_LexerId(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnLexerId(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperLexerId(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_AutoCompletionFillups(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnAutoCompletionFillups(QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperAutoCompletionFillups(const QsciLexerEDIFACT* self);
libqt_list /* of libqt_string */ QsciLexerEDIFACT_AutoCompletionWordSeparators(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnAutoCompletionWordSeparators(QsciLexerEDIFACT* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerEDIFACT_SuperAutoCompletionWordSeparators(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_BlockEnd(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockEnd(QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperBlockEnd(const QsciLexerEDIFACT* self, int* style);
int QsciLexerEDIFACT_BlockLookback(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnBlockLookback(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperBlockLookback(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_BlockStart(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockStart(QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperBlockStart(const QsciLexerEDIFACT* self, int* style);
const char* QsciLexerEDIFACT_BlockStartKeyword(const QsciLexerEDIFACT* self, int* style);
void QsciLexerEDIFACT_OnBlockStartKeyword(QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperBlockStartKeyword(const QsciLexerEDIFACT* self, int* style);
int QsciLexerEDIFACT_BraceStyle(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnBraceStyle(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperBraceStyle(const QsciLexerEDIFACT* self);
bool QsciLexerEDIFACT_CaseSensitive(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnCaseSensitive(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperCaseSensitive(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_Color(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnColor(QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperColor(const QsciLexerEDIFACT* self, int style);
bool QsciLexerEDIFACT_EolFill(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnEolFill(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperEolFill(const QsciLexerEDIFACT* self, int style);
QFont* QsciLexerEDIFACT_Font(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnFont(QsciLexerEDIFACT* self, intptr_t slot);
QFont* QsciLexerEDIFACT_SuperFont(const QsciLexerEDIFACT* self, int style);
int QsciLexerEDIFACT_IndentationGuideView(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnIndentationGuideView(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperIndentationGuideView(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Keywords(const QsciLexerEDIFACT* self, int set);
void QsciLexerEDIFACT_OnKeywords(QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperKeywords(const QsciLexerEDIFACT* self, int set);
int QsciLexerEDIFACT_DefaultStyle(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnDefaultStyle(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperDefaultStyle(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_Paper(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnPaper(QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperPaper(const QsciLexerEDIFACT* self, int style);
QColor* QsciLexerEDIFACT_DefaultColor2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultColor2(QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperDefaultColor2(const QsciLexerEDIFACT* self, int style);
bool QsciLexerEDIFACT_DefaultEolFill(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultEolFill(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperDefaultEolFill(const QsciLexerEDIFACT* self, int style);
QFont* QsciLexerEDIFACT_DefaultFont2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultFont2(QsciLexerEDIFACT* self, intptr_t slot);
QFont* QsciLexerEDIFACT_SuperDefaultFont2(const QsciLexerEDIFACT* self, int style);
QColor* QsciLexerEDIFACT_DefaultPaper2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_OnDefaultPaper2(QsciLexerEDIFACT* self, intptr_t slot);
QColor* QsciLexerEDIFACT_SuperDefaultPaper2(const QsciLexerEDIFACT* self, int style);
void QsciLexerEDIFACT_SetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor);
void QsciLexerEDIFACT_OnSetEditor(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor);
void QsciLexerEDIFACT_RefreshProperties(QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnRefreshProperties(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperRefreshProperties(QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_StyleBitsNeeded(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnStyleBitsNeeded(QsciLexerEDIFACT* self, intptr_t slot);
int QsciLexerEDIFACT_SuperStyleBitsNeeded(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_WordCharacters(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_OnWordCharacters(QsciLexerEDIFACT* self, intptr_t slot);
const char* QsciLexerEDIFACT_SuperWordCharacters(const QsciLexerEDIFACT* self);
void QsciLexerEDIFACT_SetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle);
void QsciLexerEDIFACT_OnSetAutoIndentStyle(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle);
void QsciLexerEDIFACT_SetColor(QsciLexerEDIFACT* self, const QColor* c, int style);
void QsciLexerEDIFACT_OnSetColor(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetColor(QsciLexerEDIFACT* self, const QColor* c, int style);
void QsciLexerEDIFACT_SetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style);
void QsciLexerEDIFACT_OnSetEolFill(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style);
void QsciLexerEDIFACT_SetFont(QsciLexerEDIFACT* self, const QFont* f, int style);
void QsciLexerEDIFACT_OnSetFont(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetFont(QsciLexerEDIFACT* self, const QFont* f, int style);
void QsciLexerEDIFACT_SetPaper(QsciLexerEDIFACT* self, const QColor* c, int style);
void QsciLexerEDIFACT_OnSetPaper(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperSetPaper(QsciLexerEDIFACT* self, const QColor* c, int style);
bool QsciLexerEDIFACT_ReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
void QsciLexerEDIFACT_OnReadProperties(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerEDIFACT_WriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
void QsciLexerEDIFACT_OnWriteProperties(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerEDIFACT_Event(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_OnEvent(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperEvent(QsciLexerEDIFACT* self, QEvent* event);
bool QsciLexerEDIFACT_EventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event);
void QsciLexerEDIFACT_OnEventFilter(QsciLexerEDIFACT* self, intptr_t slot);
bool QsciLexerEDIFACT_SuperEventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event);
void QsciLexerEDIFACT_TimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
void QsciLexerEDIFACT_OnTimerEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
void QsciLexerEDIFACT_ChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
void QsciLexerEDIFACT_OnChildEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
void QsciLexerEDIFACT_CustomEvent(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_OnCustomEvent(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperCustomEvent(QsciLexerEDIFACT* self, QEvent* event);
void QsciLexerEDIFACT_ConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_OnConnectNotify(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_DisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_OnDisconnectNotify(QsciLexerEDIFACT* self, intptr_t slot);
void QsciLexerEDIFACT_SuperDisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
libqt_string QsciLexerEDIFACT_TextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text);
libqt_string QsciLexerEDIFACT_BytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size);
QObject* QsciLexerEDIFACT_Sender(const QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_SenderSignalIndex(const QsciLexerEDIFACT* self);
int QsciLexerEDIFACT_Receivers(const QsciLexerEDIFACT* self, const char* signal);
bool QsciLexerEDIFACT_IsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal);
void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
