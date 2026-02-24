#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMASM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERMASM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
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
typedef struct QsciLexerAsm QsciLexerAsm;
typedef struct QsciLexerMASM QsciLexerMASM;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerMASM* QsciLexerMASM_new();
QsciLexerMASM* QsciLexerMASM_new2(QObject* parent);
QMetaObject* QsciLexerMASM_MetaObject(const QsciLexerMASM* self);
void* QsciLexerMASM_Metacast(QsciLexerMASM* self, const char* param1);
int QsciLexerMASM_Metacall(QsciLexerMASM* self, int param1, int param2, void** param3);
const char* QsciLexerMASM_Language(const QsciLexerMASM* self);
const char* QsciLexerMASM_Lexer(const QsciLexerMASM* self);
void QsciLexerMASM_OnMetaObject(const QsciLexerMASM* self, intptr_t slot);
QMetaObject* QsciLexerMASM_SuperMetaObject(const QsciLexerMASM* self);
void QsciLexerMASM_OnMetacast(QsciLexerMASM* self, intptr_t slot);
void* QsciLexerMASM_SuperMetacast(QsciLexerMASM* self, const char* param1);
void QsciLexerMASM_OnMetacall(QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperMetacall(QsciLexerMASM* self, int param1, int param2, void** param3);
void QsciLexerMASM_SetFoldComments(QsciLexerMASM* self, bool fold);
void QsciLexerMASM_OnSetFoldComments(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetFoldComments(QsciLexerMASM* self, bool fold);
void QsciLexerMASM_SetFoldCompact(QsciLexerMASM* self, bool fold);
void QsciLexerMASM_OnSetFoldCompact(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetFoldCompact(QsciLexerMASM* self, bool fold);
void QsciLexerMASM_SetCommentDelimiter(QsciLexerMASM* self, QChar* delimeter);
void QsciLexerMASM_OnSetCommentDelimiter(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetCommentDelimiter(QsciLexerMASM* self, QChar* delimeter);
void QsciLexerMASM_SetFoldSyntaxBased(QsciLexerMASM* self, bool syntax_based);
void QsciLexerMASM_OnSetFoldSyntaxBased(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetFoldSyntaxBased(QsciLexerMASM* self, bool syntax_based);
int QsciLexerMASM_LexerId(const QsciLexerMASM* self);
void QsciLexerMASM_OnLexerId(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperLexerId(const QsciLexerMASM* self);
const char* QsciLexerMASM_AutoCompletionFillups(const QsciLexerMASM* self);
void QsciLexerMASM_OnAutoCompletionFillups(const QsciLexerMASM* self, intptr_t slot);
const char* QsciLexerMASM_SuperAutoCompletionFillups(const QsciLexerMASM* self);
libqt_list /* of libqt_string */ QsciLexerMASM_AutoCompletionWordSeparators(const QsciLexerMASM* self);
void QsciLexerMASM_OnAutoCompletionWordSeparators(const QsciLexerMASM* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerMASM_SuperAutoCompletionWordSeparators(const QsciLexerMASM* self);
const char* QsciLexerMASM_BlockEnd(const QsciLexerMASM* self, int* style);
void QsciLexerMASM_OnBlockEnd(const QsciLexerMASM* self, intptr_t slot);
const char* QsciLexerMASM_SuperBlockEnd(const QsciLexerMASM* self, int* style);
int QsciLexerMASM_BlockLookback(const QsciLexerMASM* self);
void QsciLexerMASM_OnBlockLookback(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperBlockLookback(const QsciLexerMASM* self);
const char* QsciLexerMASM_BlockStart(const QsciLexerMASM* self, int* style);
void QsciLexerMASM_OnBlockStart(const QsciLexerMASM* self, intptr_t slot);
const char* QsciLexerMASM_SuperBlockStart(const QsciLexerMASM* self, int* style);
const char* QsciLexerMASM_BlockStartKeyword(const QsciLexerMASM* self, int* style);
void QsciLexerMASM_OnBlockStartKeyword(const QsciLexerMASM* self, intptr_t slot);
const char* QsciLexerMASM_SuperBlockStartKeyword(const QsciLexerMASM* self, int* style);
int QsciLexerMASM_BraceStyle(const QsciLexerMASM* self);
void QsciLexerMASM_OnBraceStyle(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperBraceStyle(const QsciLexerMASM* self);
bool QsciLexerMASM_CaseSensitive(const QsciLexerMASM* self);
void QsciLexerMASM_OnCaseSensitive(const QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperCaseSensitive(const QsciLexerMASM* self);
QColor* QsciLexerMASM_Color(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnColor(const QsciLexerMASM* self, intptr_t slot);
QColor* QsciLexerMASM_SuperColor(const QsciLexerMASM* self, int style);
bool QsciLexerMASM_EolFill(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnEolFill(const QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperEolFill(const QsciLexerMASM* self, int style);
QFont* QsciLexerMASM_Font(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnFont(const QsciLexerMASM* self, intptr_t slot);
QFont* QsciLexerMASM_SuperFont(const QsciLexerMASM* self, int style);
int QsciLexerMASM_IndentationGuideView(const QsciLexerMASM* self);
void QsciLexerMASM_OnIndentationGuideView(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperIndentationGuideView(const QsciLexerMASM* self);
const char* QsciLexerMASM_Keywords(const QsciLexerMASM* self, int set);
void QsciLexerMASM_OnKeywords(const QsciLexerMASM* self, intptr_t slot);
const char* QsciLexerMASM_SuperKeywords(const QsciLexerMASM* self, int set);
int QsciLexerMASM_DefaultStyle(const QsciLexerMASM* self);
void QsciLexerMASM_OnDefaultStyle(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperDefaultStyle(const QsciLexerMASM* self);
libqt_string QsciLexerMASM_Description(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnDescription(const QsciLexerMASM* self, intptr_t slot);
libqt_string QsciLexerMASM_SuperDescription(const QsciLexerMASM* self, int style);
QColor* QsciLexerMASM_Paper(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnPaper(const QsciLexerMASM* self, intptr_t slot);
QColor* QsciLexerMASM_SuperPaper(const QsciLexerMASM* self, int style);
QColor* QsciLexerMASM_DefaultColor2(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnDefaultColor2(const QsciLexerMASM* self, intptr_t slot);
QColor* QsciLexerMASM_SuperDefaultColor2(const QsciLexerMASM* self, int style);
bool QsciLexerMASM_DefaultEolFill(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnDefaultEolFill(const QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperDefaultEolFill(const QsciLexerMASM* self, int style);
QFont* QsciLexerMASM_DefaultFont2(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnDefaultFont2(const QsciLexerMASM* self, intptr_t slot);
QFont* QsciLexerMASM_SuperDefaultFont2(const QsciLexerMASM* self, int style);
QColor* QsciLexerMASM_DefaultPaper2(const QsciLexerMASM* self, int style);
void QsciLexerMASM_OnDefaultPaper2(const QsciLexerMASM* self, intptr_t slot);
QColor* QsciLexerMASM_SuperDefaultPaper2(const QsciLexerMASM* self, int style);
void QsciLexerMASM_SetEditor(QsciLexerMASM* self, QsciScintilla* editor);
void QsciLexerMASM_OnSetEditor(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetEditor(QsciLexerMASM* self, QsciScintilla* editor);
void QsciLexerMASM_RefreshProperties(QsciLexerMASM* self);
void QsciLexerMASM_OnRefreshProperties(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperRefreshProperties(QsciLexerMASM* self);
int QsciLexerMASM_StyleBitsNeeded(const QsciLexerMASM* self);
void QsciLexerMASM_OnStyleBitsNeeded(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperStyleBitsNeeded(const QsciLexerMASM* self);
const char* QsciLexerMASM_WordCharacters(const QsciLexerMASM* self);
void QsciLexerMASM_OnWordCharacters(const QsciLexerMASM* self, intptr_t slot);
const char* QsciLexerMASM_SuperWordCharacters(const QsciLexerMASM* self);
void QsciLexerMASM_SetAutoIndentStyle(QsciLexerMASM* self, int autoindentstyle);
void QsciLexerMASM_OnSetAutoIndentStyle(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetAutoIndentStyle(QsciLexerMASM* self, int autoindentstyle);
void QsciLexerMASM_SetColor(QsciLexerMASM* self, const QColor* c, int style);
void QsciLexerMASM_OnSetColor(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetColor(QsciLexerMASM* self, const QColor* c, int style);
void QsciLexerMASM_SetEolFill(QsciLexerMASM* self, bool eoffill, int style);
void QsciLexerMASM_OnSetEolFill(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetEolFill(QsciLexerMASM* self, bool eoffill, int style);
void QsciLexerMASM_SetFont(QsciLexerMASM* self, const QFont* f, int style);
void QsciLexerMASM_OnSetFont(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetFont(QsciLexerMASM* self, const QFont* f, int style);
void QsciLexerMASM_SetPaper(QsciLexerMASM* self, const QColor* c, int style);
void QsciLexerMASM_OnSetPaper(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperSetPaper(QsciLexerMASM* self, const QColor* c, int style);
bool QsciLexerMASM_ReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMASM_OnReadProperties(QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMASM_WriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
void QsciLexerMASM_OnWriteProperties(const QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperWriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerMASM_Event(QsciLexerMASM* self, QEvent* event);
void QsciLexerMASM_OnEvent(QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperEvent(QsciLexerMASM* self, QEvent* event);
bool QsciLexerMASM_EventFilter(QsciLexerMASM* self, QObject* watched, QEvent* event);
void QsciLexerMASM_OnEventFilter(QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperEventFilter(QsciLexerMASM* self, QObject* watched, QEvent* event);
void QsciLexerMASM_TimerEvent(QsciLexerMASM* self, QTimerEvent* event);
void QsciLexerMASM_OnTimerEvent(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperTimerEvent(QsciLexerMASM* self, QTimerEvent* event);
void QsciLexerMASM_ChildEvent(QsciLexerMASM* self, QChildEvent* event);
void QsciLexerMASM_OnChildEvent(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperChildEvent(QsciLexerMASM* self, QChildEvent* event);
void QsciLexerMASM_CustomEvent(QsciLexerMASM* self, QEvent* event);
void QsciLexerMASM_OnCustomEvent(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperCustomEvent(QsciLexerMASM* self, QEvent* event);
void QsciLexerMASM_ConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
void QsciLexerMASM_OnConnectNotify(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
void QsciLexerMASM_DisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
void QsciLexerMASM_OnDisconnectNotify(QsciLexerMASM* self, intptr_t slot);
void QsciLexerMASM_SuperDisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
libqt_string QsciLexerMASM_TextAsBytes(const QsciLexerMASM* self, const libqt_string text);
void QsciLexerMASM_OnTextAsBytes(const QsciLexerMASM* self, intptr_t slot);
libqt_string QsciLexerMASM_SuperTextAsBytes(const QsciLexerMASM* self, const libqt_string text);
libqt_string QsciLexerMASM_BytesAsText(const QsciLexerMASM* self, const char* bytes, int size);
void QsciLexerMASM_OnBytesAsText(const QsciLexerMASM* self, intptr_t slot);
libqt_string QsciLexerMASM_SuperBytesAsText(const QsciLexerMASM* self, const char* bytes, int size);
QObject* QsciLexerMASM_Sender(const QsciLexerMASM* self);
void QsciLexerMASM_OnSender(const QsciLexerMASM* self, intptr_t slot);
QObject* QsciLexerMASM_SuperSender(const QsciLexerMASM* self);
int QsciLexerMASM_SenderSignalIndex(const QsciLexerMASM* self);
void QsciLexerMASM_OnSenderSignalIndex(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperSenderSignalIndex(const QsciLexerMASM* self);
int QsciLexerMASM_Receivers(const QsciLexerMASM* self, const char* signal);
void QsciLexerMASM_OnReceivers(const QsciLexerMASM* self, intptr_t slot);
int QsciLexerMASM_SuperReceivers(const QsciLexerMASM* self, const char* signal);
bool QsciLexerMASM_IsSignalConnected(const QsciLexerMASM* self, const QMetaMethod* signal);
void QsciLexerMASM_OnIsSignalConnected(const QsciLexerMASM* self, intptr_t slot);
bool QsciLexerMASM_SuperIsSignalConnected(const QsciLexerMASM* self, const QMetaMethod* signal);
void QsciLexerMASM_Delete(QsciLexerMASM* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
