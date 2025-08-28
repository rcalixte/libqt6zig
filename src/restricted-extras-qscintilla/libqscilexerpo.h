#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPO_H

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
typedef struct QsciLexerPO QsciLexerPO;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPO* QsciLexerPO_new();
QsciLexerPO* QsciLexerPO_new2(QObject* parent);
QMetaObject* QsciLexerPO_MetaObject(const QsciLexerPO* self);
void* QsciLexerPO_Metacast(QsciLexerPO* self, const char* param1);
int QsciLexerPO_Metacall(QsciLexerPO* self, int param1, int param2, void** param3);
libqt_string QsciLexerPO_Tr(const char* s);
const char* QsciLexerPO_Language(const QsciLexerPO* self);
const char* QsciLexerPO_Lexer(const QsciLexerPO* self);
QColor* QsciLexerPO_DefaultColor(const QsciLexerPO* self, int style);
QFont* QsciLexerPO_DefaultFont(const QsciLexerPO* self, int style);
libqt_string QsciLexerPO_Description(const QsciLexerPO* self, int style);
void QsciLexerPO_RefreshProperties(QsciLexerPO* self);
bool QsciLexerPO_FoldComments(const QsciLexerPO* self);
bool QsciLexerPO_FoldCompact(const QsciLexerPO* self);
void QsciLexerPO_SetFoldComments(QsciLexerPO* self, bool fold);
void QsciLexerPO_SetFoldCompact(QsciLexerPO* self, bool fold);
libqt_string QsciLexerPO_Tr2(const char* s, const char* c);
libqt_string QsciLexerPO_Tr3(const char* s, const char* c, int n);
void QsciLexerPO_OnMetacall(QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseMetacall(QsciLexerPO* self, int param1, int param2, void** param3);
void QsciLexerPO_OnSetFoldComments(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetFoldComments(QsciLexerPO* self, bool fold);
void QsciLexerPO_OnSetFoldCompact(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetFoldCompact(QsciLexerPO* self, bool fold);
int QsciLexerPO_LexerId(const QsciLexerPO* self);
void QsciLexerPO_OnLexerId(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseLexerId(const QsciLexerPO* self);
const char* QsciLexerPO_AutoCompletionFillups(const QsciLexerPO* self);
void QsciLexerPO_OnAutoCompletionFillups(const QsciLexerPO* self, intptr_t slot);
const char* QsciLexerPO_QBaseAutoCompletionFillups(const QsciLexerPO* self);
libqt_list /* of libqt_string */ QsciLexerPO_AutoCompletionWordSeparators(const QsciLexerPO* self);
void QsciLexerPO_OnAutoCompletionWordSeparators(const QsciLexerPO* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerPO_QBaseAutoCompletionWordSeparators(const QsciLexerPO* self);
const char* QsciLexerPO_BlockEnd(const QsciLexerPO* self, int* style);
void QsciLexerPO_OnBlockEnd(const QsciLexerPO* self, intptr_t slot);
const char* QsciLexerPO_QBaseBlockEnd(const QsciLexerPO* self, int* style);
int QsciLexerPO_BlockLookback(const QsciLexerPO* self);
void QsciLexerPO_OnBlockLookback(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseBlockLookback(const QsciLexerPO* self);
const char* QsciLexerPO_BlockStart(const QsciLexerPO* self, int* style);
void QsciLexerPO_OnBlockStart(const QsciLexerPO* self, intptr_t slot);
const char* QsciLexerPO_QBaseBlockStart(const QsciLexerPO* self, int* style);
const char* QsciLexerPO_BlockStartKeyword(const QsciLexerPO* self, int* style);
void QsciLexerPO_OnBlockStartKeyword(const QsciLexerPO* self, intptr_t slot);
const char* QsciLexerPO_QBaseBlockStartKeyword(const QsciLexerPO* self, int* style);
int QsciLexerPO_BraceStyle(const QsciLexerPO* self);
void QsciLexerPO_OnBraceStyle(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseBraceStyle(const QsciLexerPO* self);
bool QsciLexerPO_CaseSensitive(const QsciLexerPO* self);
void QsciLexerPO_OnCaseSensitive(const QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseCaseSensitive(const QsciLexerPO* self);
QColor* QsciLexerPO_Color(const QsciLexerPO* self, int style);
void QsciLexerPO_OnColor(const QsciLexerPO* self, intptr_t slot);
QColor* QsciLexerPO_QBaseColor(const QsciLexerPO* self, int style);
bool QsciLexerPO_EolFill(const QsciLexerPO* self, int style);
void QsciLexerPO_OnEolFill(const QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseEolFill(const QsciLexerPO* self, int style);
QFont* QsciLexerPO_Font(const QsciLexerPO* self, int style);
void QsciLexerPO_OnFont(const QsciLexerPO* self, intptr_t slot);
QFont* QsciLexerPO_QBaseFont(const QsciLexerPO* self, int style);
int QsciLexerPO_IndentationGuideView(const QsciLexerPO* self);
void QsciLexerPO_OnIndentationGuideView(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseIndentationGuideView(const QsciLexerPO* self);
const char* QsciLexerPO_Keywords(const QsciLexerPO* self, int set);
void QsciLexerPO_OnKeywords(const QsciLexerPO* self, intptr_t slot);
const char* QsciLexerPO_QBaseKeywords(const QsciLexerPO* self, int set);
int QsciLexerPO_DefaultStyle(const QsciLexerPO* self);
void QsciLexerPO_OnDefaultStyle(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseDefaultStyle(const QsciLexerPO* self);
QColor* QsciLexerPO_Paper(const QsciLexerPO* self, int style);
void QsciLexerPO_OnPaper(const QsciLexerPO* self, intptr_t slot);
QColor* QsciLexerPO_QBasePaper(const QsciLexerPO* self, int style);
QColor* QsciLexerPO_DefaultColor2(const QsciLexerPO* self, int style);
void QsciLexerPO_OnDefaultColor2(const QsciLexerPO* self, intptr_t slot);
QColor* QsciLexerPO_QBaseDefaultColor2(const QsciLexerPO* self, int style);
bool QsciLexerPO_DefaultEolFill(const QsciLexerPO* self, int style);
void QsciLexerPO_OnDefaultEolFill(const QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseDefaultEolFill(const QsciLexerPO* self, int style);
QFont* QsciLexerPO_DefaultFont2(const QsciLexerPO* self, int style);
void QsciLexerPO_OnDefaultFont2(const QsciLexerPO* self, intptr_t slot);
QFont* QsciLexerPO_QBaseDefaultFont2(const QsciLexerPO* self, int style);
QColor* QsciLexerPO_DefaultPaper2(const QsciLexerPO* self, int style);
void QsciLexerPO_OnDefaultPaper2(const QsciLexerPO* self, intptr_t slot);
QColor* QsciLexerPO_QBaseDefaultPaper2(const QsciLexerPO* self, int style);
void QsciLexerPO_SetEditor(QsciLexerPO* self, QsciScintilla* editor);
void QsciLexerPO_OnSetEditor(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetEditor(QsciLexerPO* self, QsciScintilla* editor);
int QsciLexerPO_StyleBitsNeeded(const QsciLexerPO* self);
void QsciLexerPO_OnStyleBitsNeeded(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseStyleBitsNeeded(const QsciLexerPO* self);
const char* QsciLexerPO_WordCharacters(const QsciLexerPO* self);
void QsciLexerPO_OnWordCharacters(const QsciLexerPO* self, intptr_t slot);
const char* QsciLexerPO_QBaseWordCharacters(const QsciLexerPO* self);
void QsciLexerPO_SetAutoIndentStyle(QsciLexerPO* self, int autoindentstyle);
void QsciLexerPO_OnSetAutoIndentStyle(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetAutoIndentStyle(QsciLexerPO* self, int autoindentstyle);
void QsciLexerPO_SetColor(QsciLexerPO* self, const QColor* c, int style);
void QsciLexerPO_OnSetColor(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetColor(QsciLexerPO* self, const QColor* c, int style);
void QsciLexerPO_SetEolFill(QsciLexerPO* self, bool eoffill, int style);
void QsciLexerPO_OnSetEolFill(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetEolFill(QsciLexerPO* self, bool eoffill, int style);
void QsciLexerPO_SetFont(QsciLexerPO* self, const QFont* f, int style);
void QsciLexerPO_OnSetFont(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetFont(QsciLexerPO* self, const QFont* f, int style);
void QsciLexerPO_SetPaper(QsciLexerPO* self, const QColor* c, int style);
void QsciLexerPO_OnSetPaper(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseSetPaper(QsciLexerPO* self, const QColor* c, int style);
bool QsciLexerPO_ReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPO_OnReadProperties(QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPO_WriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPO_OnWriteProperties(const QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseWriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPO_Event(QsciLexerPO* self, QEvent* event);
void QsciLexerPO_OnEvent(QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseEvent(QsciLexerPO* self, QEvent* event);
bool QsciLexerPO_EventFilter(QsciLexerPO* self, QObject* watched, QEvent* event);
void QsciLexerPO_OnEventFilter(QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseEventFilter(QsciLexerPO* self, QObject* watched, QEvent* event);
void QsciLexerPO_TimerEvent(QsciLexerPO* self, QTimerEvent* event);
void QsciLexerPO_OnTimerEvent(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseTimerEvent(QsciLexerPO* self, QTimerEvent* event);
void QsciLexerPO_ChildEvent(QsciLexerPO* self, QChildEvent* event);
void QsciLexerPO_OnChildEvent(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseChildEvent(QsciLexerPO* self, QChildEvent* event);
void QsciLexerPO_CustomEvent(QsciLexerPO* self, QEvent* event);
void QsciLexerPO_OnCustomEvent(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseCustomEvent(QsciLexerPO* self, QEvent* event);
void QsciLexerPO_ConnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
void QsciLexerPO_OnConnectNotify(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseConnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
void QsciLexerPO_DisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
void QsciLexerPO_OnDisconnectNotify(QsciLexerPO* self, intptr_t slot);
void QsciLexerPO_QBaseDisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
libqt_string QsciLexerPO_TextAsBytes(const QsciLexerPO* self, const libqt_string text);
void QsciLexerPO_OnTextAsBytes(const QsciLexerPO* self, intptr_t slot);
libqt_string QsciLexerPO_QBaseTextAsBytes(const QsciLexerPO* self, const libqt_string text);
libqt_string QsciLexerPO_BytesAsText(const QsciLexerPO* self, const char* bytes, int size);
void QsciLexerPO_OnBytesAsText(const QsciLexerPO* self, intptr_t slot);
libqt_string QsciLexerPO_QBaseBytesAsText(const QsciLexerPO* self, const char* bytes, int size);
QObject* QsciLexerPO_Sender(const QsciLexerPO* self);
void QsciLexerPO_OnSender(const QsciLexerPO* self, intptr_t slot);
QObject* QsciLexerPO_QBaseSender(const QsciLexerPO* self);
int QsciLexerPO_SenderSignalIndex(const QsciLexerPO* self);
void QsciLexerPO_OnSenderSignalIndex(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseSenderSignalIndex(const QsciLexerPO* self);
int QsciLexerPO_Receivers(const QsciLexerPO* self, const char* signal);
void QsciLexerPO_OnReceivers(const QsciLexerPO* self, intptr_t slot);
int QsciLexerPO_QBaseReceivers(const QsciLexerPO* self, const char* signal);
bool QsciLexerPO_IsSignalConnected(const QsciLexerPO* self, const QMetaMethod* signal);
void QsciLexerPO_OnIsSignalConnected(const QsciLexerPO* self, intptr_t slot);
bool QsciLexerPO_QBaseIsSignalConnected(const QsciLexerPO* self, const QMetaMethod* signal);
void QsciLexerPO_Delete(QsciLexerPO* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
