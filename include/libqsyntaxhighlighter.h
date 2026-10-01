#pragma once
#ifndef LIBQSYNTAXHIGHLIGHTER_H
#define LIBQSYNTAXHIGHLIGHTER_H

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
void QSyntaxHighlighter_OnMetaObject(QSyntaxHighlighter* self, intptr_t slot);
QMetaObject* QSyntaxHighlighter_SuperMetaObject(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_OnMetacast(QSyntaxHighlighter* self, intptr_t slot);
void* QSyntaxHighlighter_SuperMetacast(QSyntaxHighlighter* self, const char* param1);
void QSyntaxHighlighter_OnMetacall(QSyntaxHighlighter* self, intptr_t slot);
int QSyntaxHighlighter_SuperMetacall(QSyntaxHighlighter* self, int param1, int param2, void** param3);
void QSyntaxHighlighter_OnHighlightBlock(QSyntaxHighlighter* self, intptr_t slot);
bool QSyntaxHighlighter_Event(QSyntaxHighlighter* self, QEvent* event);
void QSyntaxHighlighter_OnEvent(QSyntaxHighlighter* self, intptr_t slot);
bool QSyntaxHighlighter_SuperEvent(QSyntaxHighlighter* self, QEvent* event);
bool QSyntaxHighlighter_EventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event);
void QSyntaxHighlighter_OnEventFilter(QSyntaxHighlighter* self, intptr_t slot);
bool QSyntaxHighlighter_SuperEventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event);
void QSyntaxHighlighter_TimerEvent(QSyntaxHighlighter* self, QTimerEvent* event);
void QSyntaxHighlighter_OnTimerEvent(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_SuperTimerEvent(QSyntaxHighlighter* self, QTimerEvent* event);
void QSyntaxHighlighter_ChildEvent(QSyntaxHighlighter* self, QChildEvent* event);
void QSyntaxHighlighter_OnChildEvent(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_SuperChildEvent(QSyntaxHighlighter* self, QChildEvent* event);
void QSyntaxHighlighter_CustomEvent(QSyntaxHighlighter* self, QEvent* event);
void QSyntaxHighlighter_OnCustomEvent(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_SuperCustomEvent(QSyntaxHighlighter* self, QEvent* event);
void QSyntaxHighlighter_ConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_OnConnectNotify(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_SuperConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_DisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_OnDisconnectNotify(QSyntaxHighlighter* self, intptr_t slot);
void QSyntaxHighlighter_SuperDisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos);
int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self);
int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState);
void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self);
QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self);
QObject* QSyntaxHighlighter_Sender(const QSyntaxHighlighter* self);
int QSyntaxHighlighter_SenderSignalIndex(const QSyntaxHighlighter* self);
int QSyntaxHighlighter_Receivers(const QSyntaxHighlighter* self, const char* signal);
bool QSyntaxHighlighter_IsSignalConnected(const QSyntaxHighlighter* self, const QMetaMethod* signal);
void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
