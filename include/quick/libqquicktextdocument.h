#pragma once
#ifndef QUICK_LIBQQUICKTEXTDOCUMENT_H
#define QUICK_LIBQQUICKTEXTDOCUMENT_H

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
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuickItem QQuickItem;
typedef struct QQuickTextDocument QQuickTextDocument;
typedef struct QTextDocument QTextDocument;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QQuickTextDocument* QQuickTextDocument_new(QQuickItem* parent);
QMetaObject* QQuickTextDocument_MetaObject(const QQuickTextDocument* self);
void* QQuickTextDocument_Metacast(QQuickTextDocument* self, const char* param1);
int QQuickTextDocument_Metacall(QQuickTextDocument* self, int param1, int param2, void** param3);
libqt_string QQuickTextDocument_Tr(const char* s);
QUrl* QQuickTextDocument_Source(const QQuickTextDocument* self);
void QQuickTextDocument_SetSource(QQuickTextDocument* self, const QUrl* url);
bool QQuickTextDocument_IsModified(const QQuickTextDocument* self);
void QQuickTextDocument_SetModified(QQuickTextDocument* self, bool modified);
QTextDocument* QQuickTextDocument_TextDocument(const QQuickTextDocument* self);
void QQuickTextDocument_SetTextDocument(QQuickTextDocument* self, QTextDocument* document);
void QQuickTextDocument_Save(QQuickTextDocument* self);
void QQuickTextDocument_SaveAs(QQuickTextDocument* self, const QUrl* url);
uint8_t QQuickTextDocument_Status(const QQuickTextDocument* self);
libqt_string QQuickTextDocument_ErrorString(const QQuickTextDocument* self);
void QQuickTextDocument_TextDocumentChanged(QQuickTextDocument* self);
void QQuickTextDocument_Connect_TextDocumentChanged(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_SourceChanged(QQuickTextDocument* self);
void QQuickTextDocument_Connect_SourceChanged(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_ModifiedChanged(QQuickTextDocument* self);
void QQuickTextDocument_Connect_ModifiedChanged(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_StatusChanged(QQuickTextDocument* self);
void QQuickTextDocument_Connect_StatusChanged(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_ErrorStringChanged(QQuickTextDocument* self);
void QQuickTextDocument_Connect_ErrorStringChanged(QQuickTextDocument* self, intptr_t slot);
libqt_string QQuickTextDocument_Tr2(const char* s, const char* c);
libqt_string QQuickTextDocument_Tr3(const char* s, const char* c, int n);
void QQuickTextDocument_OnMetaObject(const QQuickTextDocument* self, intptr_t slot);
QMetaObject* QQuickTextDocument_SuperMetaObject(const QQuickTextDocument* self);
void QQuickTextDocument_OnMetacast(QQuickTextDocument* self, intptr_t slot);
void* QQuickTextDocument_SuperMetacast(QQuickTextDocument* self, const char* param1);
void QQuickTextDocument_OnMetacall(QQuickTextDocument* self, intptr_t slot);
int QQuickTextDocument_SuperMetacall(QQuickTextDocument* self, int param1, int param2, void** param3);
bool QQuickTextDocument_Event(QQuickTextDocument* self, QEvent* event);
void QQuickTextDocument_OnEvent(QQuickTextDocument* self, intptr_t slot);
bool QQuickTextDocument_SuperEvent(QQuickTextDocument* self, QEvent* event);
bool QQuickTextDocument_EventFilter(QQuickTextDocument* self, QObject* watched, QEvent* event);
void QQuickTextDocument_OnEventFilter(QQuickTextDocument* self, intptr_t slot);
bool QQuickTextDocument_SuperEventFilter(QQuickTextDocument* self, QObject* watched, QEvent* event);
void QQuickTextDocument_TimerEvent(QQuickTextDocument* self, QTimerEvent* event);
void QQuickTextDocument_OnTimerEvent(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_SuperTimerEvent(QQuickTextDocument* self, QTimerEvent* event);
void QQuickTextDocument_ChildEvent(QQuickTextDocument* self, QChildEvent* event);
void QQuickTextDocument_OnChildEvent(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_SuperChildEvent(QQuickTextDocument* self, QChildEvent* event);
void QQuickTextDocument_CustomEvent(QQuickTextDocument* self, QEvent* event);
void QQuickTextDocument_OnCustomEvent(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_SuperCustomEvent(QQuickTextDocument* self, QEvent* event);
void QQuickTextDocument_ConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
void QQuickTextDocument_OnConnectNotify(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_SuperConnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
void QQuickTextDocument_DisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
void QQuickTextDocument_OnDisconnectNotify(QQuickTextDocument* self, intptr_t slot);
void QQuickTextDocument_SuperDisconnectNotify(QQuickTextDocument* self, const QMetaMethod* signal);
QObject* QQuickTextDocument_Sender(const QQuickTextDocument* self);
void QQuickTextDocument_OnSender(const QQuickTextDocument* self, intptr_t slot);
QObject* QQuickTextDocument_SuperSender(const QQuickTextDocument* self);
int QQuickTextDocument_SenderSignalIndex(const QQuickTextDocument* self);
void QQuickTextDocument_OnSenderSignalIndex(const QQuickTextDocument* self, intptr_t slot);
int QQuickTextDocument_SuperSenderSignalIndex(const QQuickTextDocument* self);
int QQuickTextDocument_Receivers(const QQuickTextDocument* self, const char* signal);
void QQuickTextDocument_OnReceivers(const QQuickTextDocument* self, intptr_t slot);
int QQuickTextDocument_SuperReceivers(const QQuickTextDocument* self, const char* signal);
bool QQuickTextDocument_IsSignalConnected(const QQuickTextDocument* self, const QMetaMethod* signal);
void QQuickTextDocument_OnIsSignalConnected(const QQuickTextDocument* self, intptr_t slot);
bool QQuickTextDocument_SuperIsSignalConnected(const QQuickTextDocument* self, const QMetaMethod* signal);
void QQuickTextDocument_Delete(QQuickTextDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
