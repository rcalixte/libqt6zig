#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQBAR3DSERIES_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQBAR3DSERIES_H

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
typedef struct QBar3DSeries QBar3DSeries;
typedef struct QBarDataProxy QBarDataProxy;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
#endif

QBar3DSeries* QBar3DSeries_new();
QBar3DSeries* QBar3DSeries_new2(QBarDataProxy* dataProxy);
QBar3DSeries* QBar3DSeries_new3(QObject* parent);
QBar3DSeries* QBar3DSeries_new4(QBarDataProxy* dataProxy, QObject* parent);
QMetaObject* QBar3DSeries_MetaObject(const QBar3DSeries* self);
void* QBar3DSeries_Metacast(QBar3DSeries* self, const char* param1);
int QBar3DSeries_Metacall(QBar3DSeries* self, int param1, int param2, void** param3);
libqt_string QBar3DSeries_Tr(const char* s);
void QBar3DSeries_SetDataProxy(QBar3DSeries* self, QBarDataProxy* proxy);
QBarDataProxy* QBar3DSeries_DataProxy(const QBar3DSeries* self);
void QBar3DSeries_SetSelectedBar(QBar3DSeries* self, const QPoint* position);
QPoint* QBar3DSeries_SelectedBar(const QBar3DSeries* self);
QPoint* QBar3DSeries_InvalidSelectionPosition();
void QBar3DSeries_SetMeshAngle(QBar3DSeries* self, float angle);
float QBar3DSeries_MeshAngle(const QBar3DSeries* self);
libqt_list /* of QColor* */ QBar3DSeries_RowColors(const QBar3DSeries* self);
void QBar3DSeries_SetRowColors(QBar3DSeries* self, const libqt_list /* of QColor* */ colors);
void QBar3DSeries_DataProxyChanged(QBar3DSeries* self, QBarDataProxy* proxy);
void QBar3DSeries_Connect_DataProxyChanged(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_SelectedBarChanged(QBar3DSeries* self, const QPoint* position);
void QBar3DSeries_Connect_SelectedBarChanged(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_MeshAngleChanged(QBar3DSeries* self, float angle);
void QBar3DSeries_Connect_MeshAngleChanged(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_RowColorsChanged(QBar3DSeries* self, const libqt_list /* of QColor* */ rowcolors);
void QBar3DSeries_Connect_RowColorsChanged(QBar3DSeries* self, intptr_t slot);
libqt_string QBar3DSeries_Tr2(const char* s, const char* c);
libqt_string QBar3DSeries_Tr3(const char* s, const char* c, int n);
void QBar3DSeries_OnMetaObject(QBar3DSeries* self, intptr_t slot);
QMetaObject* QBar3DSeries_SuperMetaObject(const QBar3DSeries* self);
void QBar3DSeries_OnMetacast(QBar3DSeries* self, intptr_t slot);
void* QBar3DSeries_SuperMetacast(QBar3DSeries* self, const char* param1);
void QBar3DSeries_OnMetacall(QBar3DSeries* self, intptr_t slot);
int QBar3DSeries_SuperMetacall(QBar3DSeries* self, int param1, int param2, void** param3);
bool QBar3DSeries_Event(QBar3DSeries* self, QEvent* event);
void QBar3DSeries_OnEvent(QBar3DSeries* self, intptr_t slot);
bool QBar3DSeries_SuperEvent(QBar3DSeries* self, QEvent* event);
bool QBar3DSeries_EventFilter(QBar3DSeries* self, QObject* watched, QEvent* event);
void QBar3DSeries_OnEventFilter(QBar3DSeries* self, intptr_t slot);
bool QBar3DSeries_SuperEventFilter(QBar3DSeries* self, QObject* watched, QEvent* event);
void QBar3DSeries_TimerEvent(QBar3DSeries* self, QTimerEvent* event);
void QBar3DSeries_OnTimerEvent(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_SuperTimerEvent(QBar3DSeries* self, QTimerEvent* event);
void QBar3DSeries_ChildEvent(QBar3DSeries* self, QChildEvent* event);
void QBar3DSeries_OnChildEvent(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_SuperChildEvent(QBar3DSeries* self, QChildEvent* event);
void QBar3DSeries_CustomEvent(QBar3DSeries* self, QEvent* event);
void QBar3DSeries_OnCustomEvent(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_SuperCustomEvent(QBar3DSeries* self, QEvent* event);
void QBar3DSeries_ConnectNotify(QBar3DSeries* self, const QMetaMethod* signal);
void QBar3DSeries_OnConnectNotify(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_SuperConnectNotify(QBar3DSeries* self, const QMetaMethod* signal);
void QBar3DSeries_DisconnectNotify(QBar3DSeries* self, const QMetaMethod* signal);
void QBar3DSeries_OnDisconnectNotify(QBar3DSeries* self, intptr_t slot);
void QBar3DSeries_SuperDisconnectNotify(QBar3DSeries* self, const QMetaMethod* signal);
QObject* QBar3DSeries_Sender(const QBar3DSeries* self);
int QBar3DSeries_SenderSignalIndex(const QBar3DSeries* self);
int QBar3DSeries_Receivers(const QBar3DSeries* self, const char* signal);
bool QBar3DSeries_IsSignalConnected(const QBar3DSeries* self, const QMetaMethod* signal);
void QBar3DSeries_Delete(QBar3DSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
