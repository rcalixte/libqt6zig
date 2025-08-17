#pragma once
#ifndef SRCC_LIBQTEXTLIST_H
#define SRCC_LIBQTEXTLIST_H

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
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockGroup QTextBlockGroup;
typedef struct QTextDocument QTextDocument;
typedef struct QTextList QTextList;
typedef struct QTextListFormat QTextListFormat;
typedef struct QTextObject QTextObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QTextList* QTextList_new(QTextDocument* doc);
QMetaObject* QTextList_MetaObject(const QTextList* self);
void* QTextList_Metacast(QTextList* self, const char* param1);
int QTextList_Metacall(QTextList* self, int param1, int param2, void** param3);
void QTextList_OnMetacall(QTextList* self, intptr_t slot);
int QTextList_QBaseMetacall(QTextList* self, int param1, int param2, void** param3);
libqt_string QTextList_Tr(const char* s);
int QTextList_Count(const QTextList* self);
QTextBlock* QTextList_Item(const QTextList* self, int i);
int QTextList_ItemNumber(const QTextList* self, const QTextBlock* param1);
libqt_string QTextList_ItemText(const QTextList* self, const QTextBlock* param1);
void QTextList_RemoveItem(QTextList* self, int i);
void QTextList_Remove(QTextList* self, const QTextBlock* param1);
void QTextList_Add(QTextList* self, const QTextBlock* block);
void QTextList_SetFormat(QTextList* self, const QTextListFormat* format);
QTextListFormat* QTextList_Format(const QTextList* self);
libqt_string QTextList_Tr2(const char* s, const char* c);
libqt_string QTextList_Tr3(const char* s, const char* c, int n);
void QTextList_BlockInserted(QTextList* self, const QTextBlock* block);
void QTextList_OnBlockInserted(QTextList* self, intptr_t slot);
void QTextList_QBaseBlockInserted(QTextList* self, const QTextBlock* block);
void QTextList_BlockRemoved(QTextList* self, const QTextBlock* block);
void QTextList_OnBlockRemoved(QTextList* self, intptr_t slot);
void QTextList_QBaseBlockRemoved(QTextList* self, const QTextBlock* block);
void QTextList_BlockFormatChanged(QTextList* self, const QTextBlock* block);
void QTextList_OnBlockFormatChanged(QTextList* self, intptr_t slot);
void QTextList_QBaseBlockFormatChanged(QTextList* self, const QTextBlock* block);
bool QTextList_Event(QTextList* self, QEvent* event);
void QTextList_OnEvent(QTextList* self, intptr_t slot);
bool QTextList_QBaseEvent(QTextList* self, QEvent* event);
bool QTextList_EventFilter(QTextList* self, QObject* watched, QEvent* event);
void QTextList_OnEventFilter(QTextList* self, intptr_t slot);
bool QTextList_QBaseEventFilter(QTextList* self, QObject* watched, QEvent* event);
void QTextList_TimerEvent(QTextList* self, QTimerEvent* event);
void QTextList_OnTimerEvent(QTextList* self, intptr_t slot);
void QTextList_QBaseTimerEvent(QTextList* self, QTimerEvent* event);
void QTextList_ChildEvent(QTextList* self, QChildEvent* event);
void QTextList_OnChildEvent(QTextList* self, intptr_t slot);
void QTextList_QBaseChildEvent(QTextList* self, QChildEvent* event);
void QTextList_CustomEvent(QTextList* self, QEvent* event);
void QTextList_OnCustomEvent(QTextList* self, intptr_t slot);
void QTextList_QBaseCustomEvent(QTextList* self, QEvent* event);
void QTextList_ConnectNotify(QTextList* self, const QMetaMethod* signal);
void QTextList_OnConnectNotify(QTextList* self, intptr_t slot);
void QTextList_QBaseConnectNotify(QTextList* self, const QMetaMethod* signal);
void QTextList_DisconnectNotify(QTextList* self, const QMetaMethod* signal);
void QTextList_OnDisconnectNotify(QTextList* self, intptr_t slot);
void QTextList_QBaseDisconnectNotify(QTextList* self, const QMetaMethod* signal);
libqt_list /* of QTextBlock* */ QTextList_BlockList(const QTextList* self);
void QTextList_OnBlockList(const QTextList* self, intptr_t slot);
libqt_list /* of QTextBlock* */ QTextList_QBaseBlockList(const QTextList* self);
QObject* QTextList_Sender(const QTextList* self);
void QTextList_OnSender(const QTextList* self, intptr_t slot);
QObject* QTextList_QBaseSender(const QTextList* self);
int QTextList_SenderSignalIndex(const QTextList* self);
void QTextList_OnSenderSignalIndex(const QTextList* self, intptr_t slot);
int QTextList_QBaseSenderSignalIndex(const QTextList* self);
int QTextList_Receivers(const QTextList* self, const char* signal);
void QTextList_OnReceivers(const QTextList* self, intptr_t slot);
int QTextList_QBaseReceivers(const QTextList* self, const char* signal);
bool QTextList_IsSignalConnected(const QTextList* self, const QMetaMethod* signal);
void QTextList_OnIsSignalConnected(const QTextList* self, intptr_t slot);
bool QTextList_QBaseIsSignalConnected(const QTextList* self, const QMetaMethod* signal);
void QTextList_Delete(QTextList* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
