#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERASM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERASM_H

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
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerAsm* QsciLexerAsm_new();
QsciLexerAsm* QsciLexerAsm_new2(QObject* parent);
QMetaObject* QsciLexerAsm_MetaObject(const QsciLexerAsm* self);
void* QsciLexerAsm_Metacast(QsciLexerAsm* self, const char* param1);
int QsciLexerAsm_Metacall(QsciLexerAsm* self, int param1, int param2, void** param3);
QColor* QsciLexerAsm_DefaultColor(const QsciLexerAsm* self, int style);
bool QsciLexerAsm_DefaultEolFill(const QsciLexerAsm* self, int style);
QFont* QsciLexerAsm_DefaultFont(const QsciLexerAsm* self, int style);
QColor* QsciLexerAsm_DefaultPaper(const QsciLexerAsm* self, int style);
const char* QsciLexerAsm_Keywords(const QsciLexerAsm* self, int set);
libqt_string QsciLexerAsm_Description(const QsciLexerAsm* self, int style);
void QsciLexerAsm_RefreshProperties(QsciLexerAsm* self);
bool QsciLexerAsm_FoldComments(const QsciLexerAsm* self);
bool QsciLexerAsm_FoldCompact(const QsciLexerAsm* self);
QChar* QsciLexerAsm_CommentDelimiter(const QsciLexerAsm* self);
bool QsciLexerAsm_FoldSyntaxBased(const QsciLexerAsm* self);
void QsciLexerAsm_SetFoldComments(QsciLexerAsm* self, bool fold);
void QsciLexerAsm_SetFoldCompact(QsciLexerAsm* self, bool fold);
void QsciLexerAsm_SetCommentDelimiter(QsciLexerAsm* self, QChar* delimeter);
void QsciLexerAsm_SetFoldSyntaxBased(QsciLexerAsm* self, bool syntax_based);
void QsciLexerAsm_OnMetaObject(const QsciLexerAsm* self, intptr_t slot);
QMetaObject* QsciLexerAsm_SuperMetaObject(const QsciLexerAsm* self);
void QsciLexerAsm_OnMetacast(QsciLexerAsm* self, intptr_t slot);
void* QsciLexerAsm_SuperMetacast(QsciLexerAsm* self, const char* param1);
void QsciLexerAsm_OnMetacall(QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperMetacall(QsciLexerAsm* self, int param1, int param2, void** param3);
void QsciLexerAsm_OnSetFoldComments(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetFoldComments(QsciLexerAsm* self, bool fold);
void QsciLexerAsm_OnSetFoldCompact(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetFoldCompact(QsciLexerAsm* self, bool fold);
void QsciLexerAsm_OnSetCommentDelimiter(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetCommentDelimiter(QsciLexerAsm* self, QChar* delimeter);
void QsciLexerAsm_OnSetFoldSyntaxBased(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetFoldSyntaxBased(QsciLexerAsm* self, bool syntax_based);
const char* QsciLexerAsm_Language(const QsciLexerAsm* self);
void QsciLexerAsm_OnLanguage(const QsciLexerAsm* self, intptr_t slot);
const char* QsciLexerAsm_SuperLanguage(const QsciLexerAsm* self);
const char* QsciLexerAsm_Lexer(const QsciLexerAsm* self);
void QsciLexerAsm_OnLexer(const QsciLexerAsm* self, intptr_t slot);
const char* QsciLexerAsm_SuperLexer(const QsciLexerAsm* self);
int QsciLexerAsm_LexerId(const QsciLexerAsm* self);
void QsciLexerAsm_OnLexerId(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperLexerId(const QsciLexerAsm* self);
const char* QsciLexerAsm_AutoCompletionFillups(const QsciLexerAsm* self);
void QsciLexerAsm_OnAutoCompletionFillups(const QsciLexerAsm* self, intptr_t slot);
const char* QsciLexerAsm_SuperAutoCompletionFillups(const QsciLexerAsm* self);
libqt_list /* of libqt_string */ QsciLexerAsm_AutoCompletionWordSeparators(const QsciLexerAsm* self);
void QsciLexerAsm_OnAutoCompletionWordSeparators(const QsciLexerAsm* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerAsm_SuperAutoCompletionWordSeparators(const QsciLexerAsm* self);
const char* QsciLexerAsm_BlockEnd(const QsciLexerAsm* self, int* style);
void QsciLexerAsm_OnBlockEnd(const QsciLexerAsm* self, intptr_t slot);
const char* QsciLexerAsm_SuperBlockEnd(const QsciLexerAsm* self, int* style);
int QsciLexerAsm_BlockLookback(const QsciLexerAsm* self);
void QsciLexerAsm_OnBlockLookback(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperBlockLookback(const QsciLexerAsm* self);
const char* QsciLexerAsm_BlockStart(const QsciLexerAsm* self, int* style);
void QsciLexerAsm_OnBlockStart(const QsciLexerAsm* self, intptr_t slot);
const char* QsciLexerAsm_SuperBlockStart(const QsciLexerAsm* self, int* style);
const char* QsciLexerAsm_BlockStartKeyword(const QsciLexerAsm* self, int* style);
void QsciLexerAsm_OnBlockStartKeyword(const QsciLexerAsm* self, intptr_t slot);
const char* QsciLexerAsm_SuperBlockStartKeyword(const QsciLexerAsm* self, int* style);
int QsciLexerAsm_BraceStyle(const QsciLexerAsm* self);
void QsciLexerAsm_OnBraceStyle(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperBraceStyle(const QsciLexerAsm* self);
bool QsciLexerAsm_CaseSensitive(const QsciLexerAsm* self);
void QsciLexerAsm_OnCaseSensitive(const QsciLexerAsm* self, intptr_t slot);
bool QsciLexerAsm_SuperCaseSensitive(const QsciLexerAsm* self);
QColor* QsciLexerAsm_Color(const QsciLexerAsm* self, int style);
void QsciLexerAsm_OnColor(const QsciLexerAsm* self, intptr_t slot);
QColor* QsciLexerAsm_SuperColor(const QsciLexerAsm* self, int style);
bool QsciLexerAsm_EolFill(const QsciLexerAsm* self, int style);
void QsciLexerAsm_OnEolFill(const QsciLexerAsm* self, intptr_t slot);
bool QsciLexerAsm_SuperEolFill(const QsciLexerAsm* self, int style);
QFont* QsciLexerAsm_Font(const QsciLexerAsm* self, int style);
void QsciLexerAsm_OnFont(const QsciLexerAsm* self, intptr_t slot);
QFont* QsciLexerAsm_SuperFont(const QsciLexerAsm* self, int style);
int QsciLexerAsm_IndentationGuideView(const QsciLexerAsm* self);
void QsciLexerAsm_OnIndentationGuideView(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperIndentationGuideView(const QsciLexerAsm* self);
int QsciLexerAsm_DefaultStyle(const QsciLexerAsm* self);
void QsciLexerAsm_OnDefaultStyle(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperDefaultStyle(const QsciLexerAsm* self);
QColor* QsciLexerAsm_Paper(const QsciLexerAsm* self, int style);
void QsciLexerAsm_OnPaper(const QsciLexerAsm* self, intptr_t slot);
QColor* QsciLexerAsm_SuperPaper(const QsciLexerAsm* self, int style);
QColor* QsciLexerAsm_DefaultColor2(const QsciLexerAsm* self, int style);
void QsciLexerAsm_OnDefaultColor2(const QsciLexerAsm* self, intptr_t slot);
QColor* QsciLexerAsm_SuperDefaultColor2(const QsciLexerAsm* self, int style);
QFont* QsciLexerAsm_DefaultFont2(const QsciLexerAsm* self, int style);
void QsciLexerAsm_OnDefaultFont2(const QsciLexerAsm* self, intptr_t slot);
QFont* QsciLexerAsm_SuperDefaultFont2(const QsciLexerAsm* self, int style);
QColor* QsciLexerAsm_DefaultPaper2(const QsciLexerAsm* self, int style);
void QsciLexerAsm_OnDefaultPaper2(const QsciLexerAsm* self, intptr_t slot);
QColor* QsciLexerAsm_SuperDefaultPaper2(const QsciLexerAsm* self, int style);
void QsciLexerAsm_SetEditor(QsciLexerAsm* self, QsciScintilla* editor);
void QsciLexerAsm_OnSetEditor(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetEditor(QsciLexerAsm* self, QsciScintilla* editor);
int QsciLexerAsm_StyleBitsNeeded(const QsciLexerAsm* self);
void QsciLexerAsm_OnStyleBitsNeeded(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperStyleBitsNeeded(const QsciLexerAsm* self);
const char* QsciLexerAsm_WordCharacters(const QsciLexerAsm* self);
void QsciLexerAsm_OnWordCharacters(const QsciLexerAsm* self, intptr_t slot);
const char* QsciLexerAsm_SuperWordCharacters(const QsciLexerAsm* self);
void QsciLexerAsm_SetAutoIndentStyle(QsciLexerAsm* self, int autoindentstyle);
void QsciLexerAsm_OnSetAutoIndentStyle(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetAutoIndentStyle(QsciLexerAsm* self, int autoindentstyle);
void QsciLexerAsm_SetColor(QsciLexerAsm* self, const QColor* c, int style);
void QsciLexerAsm_OnSetColor(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetColor(QsciLexerAsm* self, const QColor* c, int style);
void QsciLexerAsm_SetEolFill(QsciLexerAsm* self, bool eoffill, int style);
void QsciLexerAsm_OnSetEolFill(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetEolFill(QsciLexerAsm* self, bool eoffill, int style);
void QsciLexerAsm_SetFont(QsciLexerAsm* self, const QFont* f, int style);
void QsciLexerAsm_OnSetFont(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetFont(QsciLexerAsm* self, const QFont* f, int style);
void QsciLexerAsm_SetPaper(QsciLexerAsm* self, const QColor* c, int style);
void QsciLexerAsm_OnSetPaper(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperSetPaper(QsciLexerAsm* self, const QColor* c, int style);
bool QsciLexerAsm_ReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
void QsciLexerAsm_OnReadProperties(QsciLexerAsm* self, intptr_t slot);
bool QsciLexerAsm_SuperReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerAsm_WriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
void QsciLexerAsm_OnWriteProperties(const QsciLexerAsm* self, intptr_t slot);
bool QsciLexerAsm_SuperWriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerAsm_Event(QsciLexerAsm* self, QEvent* event);
void QsciLexerAsm_OnEvent(QsciLexerAsm* self, intptr_t slot);
bool QsciLexerAsm_SuperEvent(QsciLexerAsm* self, QEvent* event);
bool QsciLexerAsm_EventFilter(QsciLexerAsm* self, QObject* watched, QEvent* event);
void QsciLexerAsm_OnEventFilter(QsciLexerAsm* self, intptr_t slot);
bool QsciLexerAsm_SuperEventFilter(QsciLexerAsm* self, QObject* watched, QEvent* event);
void QsciLexerAsm_TimerEvent(QsciLexerAsm* self, QTimerEvent* event);
void QsciLexerAsm_OnTimerEvent(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperTimerEvent(QsciLexerAsm* self, QTimerEvent* event);
void QsciLexerAsm_ChildEvent(QsciLexerAsm* self, QChildEvent* event);
void QsciLexerAsm_OnChildEvent(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperChildEvent(QsciLexerAsm* self, QChildEvent* event);
void QsciLexerAsm_CustomEvent(QsciLexerAsm* self, QEvent* event);
void QsciLexerAsm_OnCustomEvent(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperCustomEvent(QsciLexerAsm* self, QEvent* event);
void QsciLexerAsm_ConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
void QsciLexerAsm_OnConnectNotify(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
void QsciLexerAsm_DisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
void QsciLexerAsm_OnDisconnectNotify(QsciLexerAsm* self, intptr_t slot);
void QsciLexerAsm_SuperDisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
libqt_string QsciLexerAsm_TextAsBytes(const QsciLexerAsm* self, const libqt_string text);
void QsciLexerAsm_OnTextAsBytes(const QsciLexerAsm* self, intptr_t slot);
libqt_string QsciLexerAsm_SuperTextAsBytes(const QsciLexerAsm* self, const libqt_string text);
libqt_string QsciLexerAsm_BytesAsText(const QsciLexerAsm* self, const char* bytes, int size);
void QsciLexerAsm_OnBytesAsText(const QsciLexerAsm* self, intptr_t slot);
libqt_string QsciLexerAsm_SuperBytesAsText(const QsciLexerAsm* self, const char* bytes, int size);
QObject* QsciLexerAsm_Sender(const QsciLexerAsm* self);
void QsciLexerAsm_OnSender(const QsciLexerAsm* self, intptr_t slot);
QObject* QsciLexerAsm_SuperSender(const QsciLexerAsm* self);
int QsciLexerAsm_SenderSignalIndex(const QsciLexerAsm* self);
void QsciLexerAsm_OnSenderSignalIndex(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperSenderSignalIndex(const QsciLexerAsm* self);
int QsciLexerAsm_Receivers(const QsciLexerAsm* self, const char* signal);
void QsciLexerAsm_OnReceivers(const QsciLexerAsm* self, intptr_t slot);
int QsciLexerAsm_SuperReceivers(const QsciLexerAsm* self, const char* signal);
bool QsciLexerAsm_IsSignalConnected(const QsciLexerAsm* self, const QMetaMethod* signal);
void QsciLexerAsm_OnIsSignalConnected(const QsciLexerAsm* self, intptr_t slot);
bool QsciLexerAsm_SuperIsSignalConnected(const QsciLexerAsm* self, const QMetaMethod* signal);
void QsciLexerAsm_Delete(QsciLexerAsm* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
