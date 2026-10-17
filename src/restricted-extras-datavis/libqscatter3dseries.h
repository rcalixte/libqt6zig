#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTER3DSERIES_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTER3DSERIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstract3DSeries QAbstract3DSeries;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScatter3DSeries QScatter3DSeries;
typedef struct QScatterDataProxy QScatterDataProxy;
typedef struct QTimerEvent QTimerEvent;
#endif

QScatter3DSeries* QScatter3DSeries_new();
QScatter3DSeries* QScatter3DSeries_new2(QScatterDataProxy* dataProxy);
QScatter3DSeries* QScatter3DSeries_new3(QObject* parent);
QScatter3DSeries* QScatter3DSeries_new4(QScatterDataProxy* dataProxy, QObject* parent);
QMetaObject* QScatter3DSeries_MetaObject(const QScatter3DSeries* self);
void* QScatter3DSeries_Metacast(QScatter3DSeries* self, const char* param1);
int QScatter3DSeries_Metacall(QScatter3DSeries* self, int param1, int param2, void** param3);
libqt_string QScatter3DSeries_Tr(const char* s);
void QScatter3DSeries_SetDataProxy(QScatter3DSeries* self, QScatterDataProxy* proxy);
QScatterDataProxy* QScatter3DSeries_DataProxy(const QScatter3DSeries* self);
void QScatter3DSeries_SetSelectedItem(QScatter3DSeries* self, int index);
int QScatter3DSeries_SelectedItem(const QScatter3DSeries* self);
int QScatter3DSeries_InvalidSelectionIndex();
void QScatter3DSeries_SetItemSize(QScatter3DSeries* self, float size);
float QScatter3DSeries_ItemSize(const QScatter3DSeries* self);
void QScatter3DSeries_DataProxyChanged(QScatter3DSeries* self, QScatterDataProxy* proxy);
void QScatter3DSeries_Connect_DataProxyChanged(QScatter3DSeries* self, intptr_t slot);
void QScatter3DSeries_SelectedItemChanged(QScatter3DSeries* self, int index);
void QScatter3DSeries_Connect_SelectedItemChanged(QScatter3DSeries* self, intptr_t slot);
void QScatter3DSeries_ItemSizeChanged(QScatter3DSeries* self, float size);
void QScatter3DSeries_Connect_ItemSizeChanged(QScatter3DSeries* self, intptr_t slot);
libqt_string QScatter3DSeries_Tr2(const char* s, const char* c);
libqt_string QScatter3DSeries_Tr3(const char* s, const char* c, int n);
void QScatter3DSeries_OnMetaObject(QScatter3DSeries* self, intptr_t slot);
QMetaObject* QScatter3DSeries_SuperMetaObject(const QScatter3DSeries* self);
void QScatter3DSeries_OnMetacast(QScatter3DSeries* self, intptr_t slot);
void* QScatter3DSeries_SuperMetacast(QScatter3DSeries* self, const char* param1);
void QScatter3DSeries_OnMetacall(QScatter3DSeries* self, intptr_t slot);
int QScatter3DSeries_SuperMetacall(QScatter3DSeries* self, int param1, int param2, void** param3);
bool QScatter3DSeries_Event(QScatter3DSeries* self, QEvent* event);
void QScatter3DSeries_OnEvent(QScatter3DSeries* self, intptr_t slot);
bool QScatter3DSeries_SuperEvent(QScatter3DSeries* self, QEvent* event);
bool QScatter3DSeries_EventFilter(QScatter3DSeries* self, QObject* watched, QEvent* event);
void QScatter3DSeries_OnEventFilter(QScatter3DSeries* self, intptr_t slot);
bool QScatter3DSeries_SuperEventFilter(QScatter3DSeries* self, QObject* watched, QEvent* event);
void QScatter3DSeries_TimerEvent(QScatter3DSeries* self, QTimerEvent* event);
void QScatter3DSeries_OnTimerEvent(QScatter3DSeries* self, intptr_t slot);
void QScatter3DSeries_SuperTimerEvent(QScatter3DSeries* self, QTimerEvent* event);
void QScatter3DSeries_ChildEvent(QScatter3DSeries* self, QChildEvent* event);
void QScatter3DSeries_OnChildEvent(QScatter3DSeries* self, intptr_t slot);
void QScatter3DSeries_SuperChildEvent(QScatter3DSeries* self, QChildEvent* event);
void QScatter3DSeries_CustomEvent(QScatter3DSeries* self, QEvent* event);
void QScatter3DSeries_OnCustomEvent(QScatter3DSeries* self, intptr_t slot);
void QScatter3DSeries_SuperCustomEvent(QScatter3DSeries* self, QEvent* event);
void QScatter3DSeries_ConnectNotify(QScatter3DSeries* self, const QMetaMethod* signal);
void QScatter3DSeries_OnConnectNotify(QScatter3DSeries* self, intptr_t slot);
void QScatter3DSeries_SuperConnectNotify(QScatter3DSeries* self, const QMetaMethod* signal);
void QScatter3DSeries_DisconnectNotify(QScatter3DSeries* self, const QMetaMethod* signal);
void QScatter3DSeries_OnDisconnectNotify(QScatter3DSeries* self, intptr_t slot);
void QScatter3DSeries_SuperDisconnectNotify(QScatter3DSeries* self, const QMetaMethod* signal);
QObject* QScatter3DSeries_Sender(const QScatter3DSeries* self);
int QScatter3DSeries_SenderSignalIndex(const QScatter3DSeries* self);
int QScatter3DSeries_Receivers(const QScatter3DSeries* self, const char* signal);
bool QScatter3DSeries_IsSignalConnected(const QScatter3DSeries* self, const QMetaMethod* signal);
void QScatter3DSeries_Delete(QScatter3DSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
