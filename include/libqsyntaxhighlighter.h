#pragma once
#ifndef SRCC_LIBQSYNTAXHIGHLIGHTER_H
#define SRCC_LIBQSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
typedef struct QSyntaxHighlighter QSyntaxHighlighter;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockUserData QTextBlockUserData;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextDocument QTextDocument;
typedef struct QTimerEvent QTimerEvent;
#endif

QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent);
QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent);
QMetaObject* QSyntaxHighlighter_MetaObject(const QSyntaxHighlighter* self);
void* QSyntaxHighlighter_Metacast(QSyntaxHighlighter* self, const char* param1);
int QSyntaxHighlighter_Metacall(QSyntaxHighlighter* self, int param1, int param2, void** param3);
libqt_string QSyntaxHighlighter_Tr(const char* s);
void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc);
QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self);
void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, const QTextBlock* block);
void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
libqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c);
libqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n);
void QSyntaxHighlighter_OnMetacall(QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_QBaseMetacall(QSyntaxHighlighter* self, int param1, int param2, void** param3);
void QSyntaxHighlighter_OnHighlightBlock(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseHighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
bool QSyntaxHighlighter_Event(QSyntaxHighlighter* self, QEvent* event);
void QSyntaxHighlighter_OnEvent(QSyntaxHighlighter* self, intptr_t slot);
bool QSyntaxHighlighter_QBaseEvent(QSyntaxHighlighter* self, QEvent* event);
bool QSyntaxHighlighter_EventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event);
void QSyntaxHighlighter_OnEventFilter(QSyntaxHighlighter* self, intptr_t slot);
bool QSyntaxHighlighter_QBaseEventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event);
void QSyntaxHighlighter_TimerEvent(QSyntaxHighlighter* self, QTimerEvent* event);
void QSyntaxHighlighter_OnTimerEvent(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseTimerEvent(QSyntaxHighlighter* self, QTimerEvent* event);
void QSyntaxHighlighter_ChildEvent(QSyntaxHighlighter* self, QChildEvent* event);
void QSyntaxHighlighter_OnChildEvent(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseChildEvent(QSyntaxHighlighter* self, QChildEvent* event);
void QSyntaxHighlighter_CustomEvent(QSyntaxHighlighter* self, QEvent* event);
void QSyntaxHighlighter_OnCustomEvent(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseCustomEvent(QSyntaxHighlighter* self, QEvent* event);
void QSyntaxHighlighter_ConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_OnConnectNotify(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_DisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_OnDisconnectNotify(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseDisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
void QSyntaxHighlighter_OnSetFormat(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
void QSyntaxHighlighter_OnSetFormat2(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
void QSyntaxHighlighter_OnSetFormat3(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos);
void QSyntaxHighlighter_OnFormat(const QSyntaxHighlighter* self, intptr_t slot);
QTextCharFormat* QSyntaxHighlighter_QBaseFormat(const QSyntaxHighlighter* self, int pos);
int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnPreviousBlockState(const QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_QBasePreviousBlockState(const QSyntaxHighlighter* self);
int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnCurrentBlockState(const QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_QBaseCurrentBlockState(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState);
void QSyntaxHighlighter_OnSetCurrentBlockState(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetCurrentBlockState(QSyntaxHighlighter* self, int newState);
void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
void QSyntaxHighlighter_OnSetCurrentBlockUserData(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_QBaseSetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnCurrentBlockUserData(const QSyntaxHighlighter* self, intptr_t slot);
QTextBlockUserData* QSyntaxHighlighter_QBaseCurrentBlockUserData(const QSyntaxHighlighter* self);
QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnCurrentBlock(const QSyntaxHighlighter* self, intptr_t slot);
QTextBlock* QSyntaxHighlighter_QBaseCurrentBlock(const QSyntaxHighlighter* self);
QObject* QSyntaxHighlighter_Sender(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnSender(const QSyntaxHighlighter* self, intptr_t slot);
QObject* QSyntaxHighlighter_QBaseSender(const QSyntaxHighlighter* self);
int QSyntaxHighlighter_SenderSignalIndex(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnSenderSignalIndex(const QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_QBaseSenderSignalIndex(const QSyntaxHighlighter* self);
int QSyntaxHighlighter_Receivers(const QSyntaxHighlighter* self, const char* signal);
void QSyntaxHighlighter_OnReceivers(const QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_QBaseReceivers(const QSyntaxHighlighter* self, const char* signal);
bool QSyntaxHighlighter_IsSignalConnected(const QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_OnIsSignalConnected(const QSyntaxHighlighter* self, intptr_t slot);
bool QSyntaxHighlighter_QBaseIsSignalConnected(const QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
