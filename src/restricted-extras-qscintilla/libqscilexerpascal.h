#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPASCAL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCILEXERPASCAL_H

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
typedef struct QsciLexerPascal QsciLexerPascal;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerPascal* QsciLexerPascal_new();
QsciLexerPascal* QsciLexerPascal_new2(QObject* parent);
QMetaObject* QsciLexerPascal_MetaObject(const QsciLexerPascal* self);
void* QsciLexerPascal_Metacast(QsciLexerPascal* self, const char* param1);
int QsciLexerPascal_Metacall(QsciLexerPascal* self, int param1, int param2, void** param3);
libqt_string QsciLexerPascal_Tr(const char* s);
const char* QsciLexerPascal_Language(const QsciLexerPascal* self);
const char* QsciLexerPascal_Lexer(const QsciLexerPascal* self);
libqt_list /* of libqt_string */ QsciLexerPascal_AutoCompletionWordSeparators(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockEnd(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockStart(const QsciLexerPascal* self);
const char* QsciLexerPascal_BlockStartKeyword(const QsciLexerPascal* self);
int QsciLexerPascal_BraceStyle(const QsciLexerPascal* self);
QColor* QsciLexerPascal_DefaultColor(const QsciLexerPascal* self, int style);
bool QsciLexerPascal_DefaultEolFill(const QsciLexerPascal* self, int style);
QFont* QsciLexerPascal_DefaultFont(const QsciLexerPascal* self, int style);
QColor* QsciLexerPascal_DefaultPaper(const QsciLexerPascal* self, int style);
const char* QsciLexerPascal_Keywords(const QsciLexerPascal* self, int set);
libqt_string QsciLexerPascal_Description(const QsciLexerPascal* self, int style);
void QsciLexerPascal_RefreshProperties(QsciLexerPascal* self);
bool QsciLexerPascal_FoldComments(const QsciLexerPascal* self);
bool QsciLexerPascal_FoldCompact(const QsciLexerPascal* self);
bool QsciLexerPascal_FoldPreprocessor(const QsciLexerPascal* self);
void QsciLexerPascal_SetSmartHighlighting(QsciLexerPascal* self, bool enabled);
bool QsciLexerPascal_SmartHighlighting(const QsciLexerPascal* self);
void QsciLexerPascal_SetFoldComments(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_SetFoldCompact(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_SetFoldPreprocessor(QsciLexerPascal* self, bool fold);
libqt_string QsciLexerPascal_Tr2(const char* s, const char* c);
libqt_string QsciLexerPascal_Tr3(const char* s, const char* c, int n);
const char* QsciLexerPascal_BlockEnd1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_BlockStart1(const QsciLexerPascal* self, int* style);
const char* QsciLexerPascal_BlockStartKeyword1(const QsciLexerPascal* self, int* style);
void QsciLexerPascal_OnMetacall(QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseMetacall(QsciLexerPascal* self, int param1, int param2, void** param3);
void QsciLexerPascal_OnSetFoldComments(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetFoldComments(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_OnSetFoldCompact(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetFoldCompact(QsciLexerPascal* self, bool fold);
void QsciLexerPascal_OnSetFoldPreprocessor(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetFoldPreprocessor(QsciLexerPascal* self, bool fold);
int QsciLexerPascal_LexerId(const QsciLexerPascal* self);
void QsciLexerPascal_OnLexerId(const QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseLexerId(const QsciLexerPascal* self);
const char* QsciLexerPascal_AutoCompletionFillups(const QsciLexerPascal* self);
void QsciLexerPascal_OnAutoCompletionFillups(const QsciLexerPascal* self, intptr_t slot);
const char* QsciLexerPascal_QBaseAutoCompletionFillups(const QsciLexerPascal* self);
int QsciLexerPascal_BlockLookback(const QsciLexerPascal* self);
void QsciLexerPascal_OnBlockLookback(const QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseBlockLookback(const QsciLexerPascal* self);
bool QsciLexerPascal_CaseSensitive(const QsciLexerPascal* self);
void QsciLexerPascal_OnCaseSensitive(const QsciLexerPascal* self, intptr_t slot);
bool QsciLexerPascal_QBaseCaseSensitive(const QsciLexerPascal* self);
QColor* QsciLexerPascal_Color(const QsciLexerPascal* self, int style);
void QsciLexerPascal_OnColor(const QsciLexerPascal* self, intptr_t slot);
QColor* QsciLexerPascal_QBaseColor(const QsciLexerPascal* self, int style);
bool QsciLexerPascal_EolFill(const QsciLexerPascal* self, int style);
void QsciLexerPascal_OnEolFill(const QsciLexerPascal* self, intptr_t slot);
bool QsciLexerPascal_QBaseEolFill(const QsciLexerPascal* self, int style);
QFont* QsciLexerPascal_Font(const QsciLexerPascal* self, int style);
void QsciLexerPascal_OnFont(const QsciLexerPascal* self, intptr_t slot);
QFont* QsciLexerPascal_QBaseFont(const QsciLexerPascal* self, int style);
int QsciLexerPascal_IndentationGuideView(const QsciLexerPascal* self);
void QsciLexerPascal_OnIndentationGuideView(const QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseIndentationGuideView(const QsciLexerPascal* self);
int QsciLexerPascal_DefaultStyle(const QsciLexerPascal* self);
void QsciLexerPascal_OnDefaultStyle(const QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseDefaultStyle(const QsciLexerPascal* self);
QColor* QsciLexerPascal_Paper(const QsciLexerPascal* self, int style);
void QsciLexerPascal_OnPaper(const QsciLexerPascal* self, intptr_t slot);
QColor* QsciLexerPascal_QBasePaper(const QsciLexerPascal* self, int style);
QColor* QsciLexerPascal_DefaultColor2(const QsciLexerPascal* self, int style);
void QsciLexerPascal_OnDefaultColor2(const QsciLexerPascal* self, intptr_t slot);
QColor* QsciLexerPascal_QBaseDefaultColor2(const QsciLexerPascal* self, int style);
QFont* QsciLexerPascal_DefaultFont2(const QsciLexerPascal* self, int style);
void QsciLexerPascal_OnDefaultFont2(const QsciLexerPascal* self, intptr_t slot);
QFont* QsciLexerPascal_QBaseDefaultFont2(const QsciLexerPascal* self, int style);
QColor* QsciLexerPascal_DefaultPaper2(const QsciLexerPascal* self, int style);
void QsciLexerPascal_OnDefaultPaper2(const QsciLexerPascal* self, intptr_t slot);
QColor* QsciLexerPascal_QBaseDefaultPaper2(const QsciLexerPascal* self, int style);
void QsciLexerPascal_SetEditor(QsciLexerPascal* self, QsciScintilla* editor);
void QsciLexerPascal_OnSetEditor(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetEditor(QsciLexerPascal* self, QsciScintilla* editor);
int QsciLexerPascal_StyleBitsNeeded(const QsciLexerPascal* self);
void QsciLexerPascal_OnStyleBitsNeeded(const QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseStyleBitsNeeded(const QsciLexerPascal* self);
const char* QsciLexerPascal_WordCharacters(const QsciLexerPascal* self);
void QsciLexerPascal_OnWordCharacters(const QsciLexerPascal* self, intptr_t slot);
const char* QsciLexerPascal_QBaseWordCharacters(const QsciLexerPascal* self);
void QsciLexerPascal_SetAutoIndentStyle(QsciLexerPascal* self, int autoindentstyle);
void QsciLexerPascal_OnSetAutoIndentStyle(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetAutoIndentStyle(QsciLexerPascal* self, int autoindentstyle);
void QsciLexerPascal_SetColor(QsciLexerPascal* self, const QColor* c, int style);
void QsciLexerPascal_OnSetColor(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetColor(QsciLexerPascal* self, const QColor* c, int style);
void QsciLexerPascal_SetEolFill(QsciLexerPascal* self, bool eoffill, int style);
void QsciLexerPascal_OnSetEolFill(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetEolFill(QsciLexerPascal* self, bool eoffill, int style);
void QsciLexerPascal_SetFont(QsciLexerPascal* self, const QFont* f, int style);
void QsciLexerPascal_OnSetFont(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetFont(QsciLexerPascal* self, const QFont* f, int style);
void QsciLexerPascal_SetPaper(QsciLexerPascal* self, const QColor* c, int style);
void QsciLexerPascal_OnSetPaper(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseSetPaper(QsciLexerPascal* self, const QColor* c, int style);
bool QsciLexerPascal_ReadProperties(QsciLexerPascal* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPascal_OnReadProperties(QsciLexerPascal* self, intptr_t slot);
bool QsciLexerPascal_QBaseReadProperties(QsciLexerPascal* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPascal_WriteProperties(const QsciLexerPascal* self, QSettings* qs, const libqt_string prefix);
void QsciLexerPascal_OnWriteProperties(const QsciLexerPascal* self, intptr_t slot);
bool QsciLexerPascal_QBaseWriteProperties(const QsciLexerPascal* self, QSettings* qs, const libqt_string prefix);
bool QsciLexerPascal_Event(QsciLexerPascal* self, QEvent* event);
void QsciLexerPascal_OnEvent(QsciLexerPascal* self, intptr_t slot);
bool QsciLexerPascal_QBaseEvent(QsciLexerPascal* self, QEvent* event);
bool QsciLexerPascal_EventFilter(QsciLexerPascal* self, QObject* watched, QEvent* event);
void QsciLexerPascal_OnEventFilter(QsciLexerPascal* self, intptr_t slot);
bool QsciLexerPascal_QBaseEventFilter(QsciLexerPascal* self, QObject* watched, QEvent* event);
void QsciLexerPascal_TimerEvent(QsciLexerPascal* self, QTimerEvent* event);
void QsciLexerPascal_OnTimerEvent(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseTimerEvent(QsciLexerPascal* self, QTimerEvent* event);
void QsciLexerPascal_ChildEvent(QsciLexerPascal* self, QChildEvent* event);
void QsciLexerPascal_OnChildEvent(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseChildEvent(QsciLexerPascal* self, QChildEvent* event);
void QsciLexerPascal_CustomEvent(QsciLexerPascal* self, QEvent* event);
void QsciLexerPascal_OnCustomEvent(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseCustomEvent(QsciLexerPascal* self, QEvent* event);
void QsciLexerPascal_ConnectNotify(QsciLexerPascal* self, const QMetaMethod* signal);
void QsciLexerPascal_OnConnectNotify(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseConnectNotify(QsciLexerPascal* self, const QMetaMethod* signal);
void QsciLexerPascal_DisconnectNotify(QsciLexerPascal* self, const QMetaMethod* signal);
void QsciLexerPascal_OnDisconnectNotify(QsciLexerPascal* self, intptr_t slot);
void QsciLexerPascal_QBaseDisconnectNotify(QsciLexerPascal* self, const QMetaMethod* signal);
libqt_string QsciLexerPascal_TextAsBytes(const QsciLexerPascal* self, const libqt_string text);
void QsciLexerPascal_OnTextAsBytes(const QsciLexerPascal* self, intptr_t slot);
libqt_string QsciLexerPascal_QBaseTextAsBytes(const QsciLexerPascal* self, const libqt_string text);
libqt_string QsciLexerPascal_BytesAsText(const QsciLexerPascal* self, const char* bytes, int size);
void QsciLexerPascal_OnBytesAsText(const QsciLexerPascal* self, intptr_t slot);
libqt_string QsciLexerPascal_QBaseBytesAsText(const QsciLexerPascal* self, const char* bytes, int size);
QObject* QsciLexerPascal_Sender(const QsciLexerPascal* self);
void QsciLexerPascal_OnSender(const QsciLexerPascal* self, intptr_t slot);
QObject* QsciLexerPascal_QBaseSender(const QsciLexerPascal* self);
int QsciLexerPascal_SenderSignalIndex(const QsciLexerPascal* self);
void QsciLexerPascal_OnSenderSignalIndex(const QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseSenderSignalIndex(const QsciLexerPascal* self);
int QsciLexerPascal_Receivers(const QsciLexerPascal* self, const char* signal);
void QsciLexerPascal_OnReceivers(const QsciLexerPascal* self, intptr_t slot);
int QsciLexerPascal_QBaseReceivers(const QsciLexerPascal* self, const char* signal);
bool QsciLexerPascal_IsSignalConnected(const QsciLexerPascal* self, const QMetaMethod* signal);
void QsciLexerPascal_OnIsSignalConnected(const QsciLexerPascal* self, intptr_t slot);
bool QsciLexerPascal_QBaseIsSignalConnected(const QsciLexerPascal* self, const QMetaMethod* signal);
void QsciLexerPascal_Delete(QsciLexerPascal* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
