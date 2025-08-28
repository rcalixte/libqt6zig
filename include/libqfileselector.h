#pragma once
#ifndef SRCC_LIBQFILESELECTOR_H
#define SRCC_LIBQFILESELECTOR_H

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
typedef struct QFileSelector QFileSelector;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QFileSelector* QFileSelector_new();
QFileSelector* QFileSelector_new2(QObject* parent);
QMetaObject* QFileSelector_MetaObject(const QFileSelector* self);
void* QFileSelector_Metacast(QFileSelector* self, const char* param1);
int QFileSelector_Metacall(QFileSelector* self, int param1, int param2, void** param3);
libqt_string QFileSelector_Tr(const char* s);
libqt_string QFileSelector_Select(const QFileSelector* self, const libqt_string filePath);
QUrl* QFileSelector_Select2(const QFileSelector* self, const QUrl* filePath);
libqt_list /* of libqt_string */ QFileSelector_ExtraSelectors(const QFileSelector* self);
void QFileSelector_SetExtraSelectors(QFileSelector* self, const libqt_list /* of libqt_string */ list);
libqt_list /* of libqt_string */ QFileSelector_AllSelectors(const QFileSelector* self);
libqt_string QFileSelector_Tr2(const char* s, const char* c);
libqt_string QFileSelector_Tr3(const char* s, const char* c, int n);
void QFileSelector_OnMetacall(QFileSelector* self, intptr_t slot);
int QFileSelector_QBaseMetacall(QFileSelector* self, int param1, int param2, void** param3);
bool QFileSelector_Event(QFileSelector* self, QEvent* event);
void QFileSelector_OnEvent(QFileSelector* self, intptr_t slot);
bool QFileSelector_QBaseEvent(QFileSelector* self, QEvent* event);
bool QFileSelector_EventFilter(QFileSelector* self, QObject* watched, QEvent* event);
void QFileSelector_OnEventFilter(QFileSelector* self, intptr_t slot);
bool QFileSelector_QBaseEventFilter(QFileSelector* self, QObject* watched, QEvent* event);
void QFileSelector_TimerEvent(QFileSelector* self, QTimerEvent* event);
void QFileSelector_OnTimerEvent(QFileSelector* self, intptr_t slot);
void QFileSelector_QBaseTimerEvent(QFileSelector* self, QTimerEvent* event);
void QFileSelector_ChildEvent(QFileSelector* self, QChildEvent* event);
void QFileSelector_OnChildEvent(QFileSelector* self, intptr_t slot);
void QFileSelector_QBaseChildEvent(QFileSelector* self, QChildEvent* event);
void QFileSelector_CustomEvent(QFileSelector* self, QEvent* event);
void QFileSelector_OnCustomEvent(QFileSelector* self, intptr_t slot);
void QFileSelector_QBaseCustomEvent(QFileSelector* self, QEvent* event);
void QFileSelector_ConnectNotify(QFileSelector* self, const QMetaMethod* signal);
void QFileSelector_OnConnectNotify(QFileSelector* self, intptr_t slot);
void QFileSelector_QBaseConnectNotify(QFileSelector* self, const QMetaMethod* signal);
void QFileSelector_DisconnectNotify(QFileSelector* self, const QMetaMethod* signal);
void QFileSelector_OnDisconnectNotify(QFileSelector* self, intptr_t slot);
void QFileSelector_QBaseDisconnectNotify(QFileSelector* self, const QMetaMethod* signal);
QObject* QFileSelector_Sender(const QFileSelector* self);
void QFileSelector_OnSender(const QFileSelector* self, intptr_t slot);
QObject* QFileSelector_QBaseSender(const QFileSelector* self);
int QFileSelector_SenderSignalIndex(const QFileSelector* self);
void QFileSelector_OnSenderSignalIndex(const QFileSelector* self, intptr_t slot);
int QFileSelector_QBaseSenderSignalIndex(const QFileSelector* self);
int QFileSelector_Receivers(const QFileSelector* self, const char* signal);
void QFileSelector_OnReceivers(const QFileSelector* self, intptr_t slot);
int QFileSelector_QBaseReceivers(const QFileSelector* self, const char* signal);
bool QFileSelector_IsSignalConnected(const QFileSelector* self, const QMetaMethod* signal);
void QFileSelector_OnIsSignalConnected(const QFileSelector* self, intptr_t slot);
bool QFileSelector_QBaseIsSignalConnected(const QFileSelector* self, const QMetaMethod* signal);
void QFileSelector_Delete(QFileSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
