#pragma once
#ifndef SRCC_LIBQMIMEDATA_H
#define SRCC_LIBQMIMEDATA_H

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
typedef struct QMetaType QMetaType;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QMimeData* QMimeData_new();
QMetaObject* QMimeData_MetaObject(const QMimeData* self);
void* QMimeData_Metacast(QMimeData* self, const char* param1);
int QMimeData_Metacall(QMimeData* self, int param1, int param2, void** param3);
void QMimeData_OnMetacall(QMimeData* self, intptr_t slot);
int QMimeData_QBaseMetacall(QMimeData* self, int param1, int param2, void** param3);
libqt_string QMimeData_Tr(const char* s);
libqt_list /* of QUrl* */ QMimeData_Urls(const QMimeData* self);
void QMimeData_SetUrls(QMimeData* self, const libqt_list /* of QUrl* */ urls);
bool QMimeData_HasUrls(const QMimeData* self);
libqt_string QMimeData_Text(const QMimeData* self);
void QMimeData_SetText(QMimeData* self, const libqt_string text);
bool QMimeData_HasText(const QMimeData* self);
libqt_string QMimeData_Html(const QMimeData* self);
void QMimeData_SetHtml(QMimeData* self, const libqt_string html);
bool QMimeData_HasHtml(const QMimeData* self);
QVariant* QMimeData_ImageData(const QMimeData* self);
void QMimeData_SetImageData(QMimeData* self, const QVariant* image);
bool QMimeData_HasImage(const QMimeData* self);
QVariant* QMimeData_ColorData(const QMimeData* self);
void QMimeData_SetColorData(QMimeData* self, const QVariant* color);
bool QMimeData_HasColor(const QMimeData* self);
libqt_string QMimeData_Data(const QMimeData* self, const libqt_string mimetype);
void QMimeData_SetData(QMimeData* self, const libqt_string mimetype, const libqt_string data);
void QMimeData_RemoveFormat(QMimeData* self, const libqt_string mimetype);
bool QMimeData_HasFormat(const QMimeData* self, const libqt_string mimetype);
void QMimeData_OnHasFormat(const QMimeData* self, intptr_t slot);
bool QMimeData_QBaseHasFormat(const QMimeData* self, const libqt_string mimetype);
libqt_list /* of libqt_string */ QMimeData_Formats(const QMimeData* self);
void QMimeData_OnFormats(const QMimeData* self, intptr_t slot);
libqt_list /* of libqt_string */ QMimeData_QBaseFormats(const QMimeData* self);
void QMimeData_Clear(QMimeData* self);
QVariant* QMimeData_RetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
void QMimeData_OnRetrieveData(const QMimeData* self, intptr_t slot);
QVariant* QMimeData_QBaseRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
libqt_string QMimeData_Tr2(const char* s, const char* c);
libqt_string QMimeData_Tr3(const char* s, const char* c, int n);
bool QMimeData_Event(QMimeData* self, QEvent* event);
void QMimeData_OnEvent(QMimeData* self, intptr_t slot);
bool QMimeData_QBaseEvent(QMimeData* self, QEvent* event);
bool QMimeData_EventFilter(QMimeData* self, QObject* watched, QEvent* event);
void QMimeData_OnEventFilter(QMimeData* self, intptr_t slot);
bool QMimeData_QBaseEventFilter(QMimeData* self, QObject* watched, QEvent* event);
void QMimeData_TimerEvent(QMimeData* self, QTimerEvent* event);
void QMimeData_OnTimerEvent(QMimeData* self, intptr_t slot);
void QMimeData_QBaseTimerEvent(QMimeData* self, QTimerEvent* event);
void QMimeData_ChildEvent(QMimeData* self, QChildEvent* event);
void QMimeData_OnChildEvent(QMimeData* self, intptr_t slot);
void QMimeData_QBaseChildEvent(QMimeData* self, QChildEvent* event);
void QMimeData_CustomEvent(QMimeData* self, QEvent* event);
void QMimeData_OnCustomEvent(QMimeData* self, intptr_t slot);
void QMimeData_QBaseCustomEvent(QMimeData* self, QEvent* event);
void QMimeData_ConnectNotify(QMimeData* self, const QMetaMethod* signal);
void QMimeData_OnConnectNotify(QMimeData* self, intptr_t slot);
void QMimeData_QBaseConnectNotify(QMimeData* self, const QMetaMethod* signal);
void QMimeData_DisconnectNotify(QMimeData* self, const QMetaMethod* signal);
void QMimeData_OnDisconnectNotify(QMimeData* self, intptr_t slot);
void QMimeData_QBaseDisconnectNotify(QMimeData* self, const QMetaMethod* signal);
QObject* QMimeData_Sender(const QMimeData* self);
void QMimeData_OnSender(const QMimeData* self, intptr_t slot);
QObject* QMimeData_QBaseSender(const QMimeData* self);
int QMimeData_SenderSignalIndex(const QMimeData* self);
void QMimeData_OnSenderSignalIndex(const QMimeData* self, intptr_t slot);
int QMimeData_QBaseSenderSignalIndex(const QMimeData* self);
int QMimeData_Receivers(const QMimeData* self, const char* signal);
void QMimeData_OnReceivers(const QMimeData* self, intptr_t slot);
int QMimeData_QBaseReceivers(const QMimeData* self, const char* signal);
bool QMimeData_IsSignalConnected(const QMimeData* self, const QMetaMethod* signal);
void QMimeData_OnIsSignalConnected(const QMimeData* self, intptr_t slot);
bool QMimeData_QBaseIsSignalConnected(const QMimeData* self, const QMetaMethod* signal);
void QMimeData_Delete(QMimeData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
