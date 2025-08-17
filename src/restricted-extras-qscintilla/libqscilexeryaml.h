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
void QsciLexerYAML_OnMetacall(QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseMetacall(QsciLexerYAML* self, int param1, int param2, void** param3);
libqt_string QsciLexerYAML_Tr(const char* s);
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
void QsciLexerYAML_OnSetFoldComments(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseSetFoldComments(QsciLexerYAML* self, bool fold);
libqt_string QsciLexerYAML_Tr2(const char* s, const char* c);
libqt_string QsciLexerYAML_Tr3(const char* s, const char* c, int n);
int QsciLexerYAML_LexerId(const QsciLexerYAML* self);
void QsciLexerYAML_OnLexerId(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseLexerId(const QsciLexerYAML* self);
const char* QsciLexerYAML_AutoCompletionFillups(const QsciLexerYAML* self);
void QsciLexerYAML_OnAutoCompletionFillups(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_QBaseAutoCompletionFillups(const QsciLexerYAML* self);
libqt_list /* of libqt_string */ QsciLexerYAML_AutoCompletionWordSeparators(const QsciLexerYAML* self);
void QsciLexerYAML_OnAutoCompletionWordSeparators(const QsciLexerYAML* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciLexerYAML_QBaseAutoCompletionWordSeparators(const QsciLexerYAML* self);
const char* QsciLexerYAML_BlockEnd(const QsciLexerYAML* self, int* style);
void QsciLexerYAML_OnBlockEnd(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_QBaseBlockEnd(const QsciLexerYAML* self, int* style);
int QsciLexerYAML_BlockLookback(const QsciLexerYAML* self);
void QsciLexerYAML_OnBlockLookback(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseBlockLookback(const QsciLexerYAML* self);
const char* QsciLexerYAML_BlockStart(const QsciLexerYAML* self, int* style);
void QsciLexerYAML_OnBlockStart(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_QBaseBlockStart(const QsciLexerYAML* self, int* style);
const char* QsciLexerYAML_BlockStartKeyword(const QsciLexerYAML* self, int* style);
void QsciLexerYAML_OnBlockStartKeyword(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_QBaseBlockStartKeyword(const QsciLexerYAML* self, int* style);
int QsciLexerYAML_BraceStyle(const QsciLexerYAML* self);
void QsciLexerYAML_OnBraceStyle(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseBraceStyle(const QsciLexerYAML* self);
bool QsciLexerYAML_CaseSensitive(const QsciLexerYAML* self);
void QsciLexerYAML_OnCaseSensitive(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_QBaseCaseSensitive(const QsciLexerYAML* self);
QColor* QsciLexerYAML_Color(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnColor(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_QBaseColor(const QsciLexerYAML* self, int style);
bool QsciLexerYAML_EolFill(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnEolFill(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_QBaseEolFill(const QsciLexerYAML* self, int style);
QFont* QsciLexerYAML_Font(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnFont(const QsciLexerYAML* self, intptr_t slot);
QFont* QsciLexerYAML_QBaseFont(const QsciLexerYAML* self, int style);
int QsciLexerYAML_IndentationGuideView(const QsciLexerYAML* self);
void QsciLexerYAML_OnIndentationGuideView(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseIndentationGuideView(const QsciLexerYAML* self);
int QsciLexerYAML_DefaultStyle(const QsciLexerYAML* self);
void QsciLexerYAML_OnDefaultStyle(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseDefaultStyle(const QsciLexerYAML* self);
QColor* QsciLexerYAML_Paper(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnPaper(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_QBasePaper(const QsciLexerYAML* self, int style);
QColor* QsciLexerYAML_DefaultColor2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnDefaultColor2(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_QBaseDefaultColor2(const QsciLexerYAML* self, int style);
QFont* QsciLexerYAML_DefaultFont2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnDefaultFont2(const QsciLexerYAML* self, intptr_t slot);
QFont* QsciLexerYAML_QBaseDefaultFont2(const QsciLexerYAML* self, int style);
QColor* QsciLexerYAML_DefaultPaper2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_OnDefaultPaper2(const QsciLexerYAML* self, intptr_t slot);
QColor* QsciLexerYAML_QBaseDefaultPaper2(const QsciLexerYAML* self, int style);
void QsciLexerYAML_SetEditor(QsciLexerYAML* self, QsciScintilla* editor);
void QsciLexerYAML_OnSetEditor(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseSetEditor(QsciLexerYAML* self, QsciScintilla* editor);
int QsciLexerYAML_StyleBitsNeeded(const QsciLexerYAML* self);
void QsciLexerYAML_OnStyleBitsNeeded(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseStyleBitsNeeded(const QsciLexerYAML* self);
const char* QsciLexerYAML_WordCharacters(const QsciLexerYAML* self);
void QsciLexerYAML_OnWordCharacters(const QsciLexerYAML* self, intptr_t slot);
const char* QsciLexerYAML_QBaseWordCharacters(const QsciLexerYAML* self);
void QsciLexerYAML_SetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle);
void QsciLexerYAML_OnSetAutoIndentStyle(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseSetAutoIndentStyle(QsciLexerYAML* self, int autoindentstyle);
void QsciLexerYAML_SetColor(QsciLexerYAML* self, const QColor* c, int style);
void QsciLexerYAML_OnSetColor(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseSetColor(QsciLexerYAML* self, const QColor* c, int style);
void QsciLexerYAML_SetEolFill(QsciLexerYAML* self, bool eoffill, int style);
void QsciLexerYAML_OnSetEolFill(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseSetEolFill(QsciLexerYAML* self, bool eoffill, int style);
void QsciLexerYAML_SetFont(QsciLexerYAML* self, const QFont* f, int style);
void QsciLexerYAML_OnSetFont(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseSetFont(QsciLexerYAML* self, const QFont* f, int style);
void QsciLexerYAML_SetPaper(QsciLexerYAML* self, const QColor* c, int style);
void QsciLexerYAML_OnSetPaper(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseSetPaper(QsciLexerYAML* self, const QColor* c, int style);
bool QsciLexerYAML_ReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
void QsciLexerYAML_OnReadProperties(QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_QBaseReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerYAML_WriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
void QsciLexerYAML_OnWriteProperties(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_QBaseWriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerYAML_Event(QsciLexerYAML* self, QEvent* event);
void QsciLexerYAML_OnEvent(QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_QBaseEvent(QsciLexerYAML* self, QEvent* event);
bool QsciLexerYAML_EventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event);
void QsciLexerYAML_OnEventFilter(QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_QBaseEventFilter(QsciLexerYAML* self, QObject* watched, QEvent* event);
void QsciLexerYAML_TimerEvent(QsciLexerYAML* self, QTimerEvent* event);
void QsciLexerYAML_OnTimerEvent(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseTimerEvent(QsciLexerYAML* self, QTimerEvent* event);
void QsciLexerYAML_ChildEvent(QsciLexerYAML* self, QChildEvent* event);
void QsciLexerYAML_OnChildEvent(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseChildEvent(QsciLexerYAML* self, QChildEvent* event);
void QsciLexerYAML_CustomEvent(QsciLexerYAML* self, QEvent* event);
void QsciLexerYAML_OnCustomEvent(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseCustomEvent(QsciLexerYAML* self, QEvent* event);
void QsciLexerYAML_ConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_OnConnectNotify(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_DisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_OnDisconnectNotify(QsciLexerYAML* self, intptr_t slot);
void QsciLexerYAML_QBaseDisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
libqt_string QsciLexerYAML_TextAsBytes(const QsciLexerYAML* self, const libqt_string text);
void QsciLexerYAML_OnTextAsBytes(const QsciLexerYAML* self, intptr_t slot);
libqt_string QsciLexerYAML_QBaseTextAsBytes(const QsciLexerYAML* self, const libqt_string text);
libqt_string QsciLexerYAML_BytesAsText(const QsciLexerYAML* self, const char* bytes, int size);
void QsciLexerYAML_OnBytesAsText(const QsciLexerYAML* self, intptr_t slot);
libqt_string QsciLexerYAML_QBaseBytesAsText(const QsciLexerYAML* self, const char* bytes, int size);
QObject* QsciLexerYAML_Sender(const QsciLexerYAML* self);
void QsciLexerYAML_OnSender(const QsciLexerYAML* self, intptr_t slot);
QObject* QsciLexerYAML_QBaseSender(const QsciLexerYAML* self);
int QsciLexerYAML_SenderSignalIndex(const QsciLexerYAML* self);
void QsciLexerYAML_OnSenderSignalIndex(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseSenderSignalIndex(const QsciLexerYAML* self);
int QsciLexerYAML_Receivers(const QsciLexerYAML* self, const char* signal);
void QsciLexerYAML_OnReceivers(const QsciLexerYAML* self, intptr_t slot);
int QsciLexerYAML_QBaseReceivers(const QsciLexerYAML* self, const char* signal);
bool QsciLexerYAML_IsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_OnIsSignalConnected(const QsciLexerYAML* self, intptr_t slot);
bool QsciLexerYAML_QBaseIsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal);
void QsciLexerYAML_Delete(QsciLexerYAML* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
