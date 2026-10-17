#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQHEIGHTMAPSURFACEDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQHEIGHTMAPSURFACEDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractDataProxy QAbstractDataProxy;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHeightMapSurfaceDataProxy QHeightMapSurfaceDataProxy;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSurfaceDataProxy QSurfaceDataProxy;
typedef struct QTimerEvent QTimerEvent;
#endif

QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new();
QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new2(const QImage* image);
QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new3(const libqt_string filename);
QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new4(QObject* parent);
QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new5(const QImage* image, QObject* parent);
QHeightMapSurfaceDataProxy* QHeightMapSurfaceDataProxy_new6(const libqt_string filename, QObject* parent);
QMetaObject* QHeightMapSurfaceDataProxy_MetaObject(const QHeightMapSurfaceDataProxy* self);
void* QHeightMapSurfaceDataProxy_Metacast(QHeightMapSurfaceDataProxy* self, const char* param1);
int QHeightMapSurfaceDataProxy_Metacall(QHeightMapSurfaceDataProxy* self, int param1, int param2, void** param3);
libqt_string QHeightMapSurfaceDataProxy_Tr(const char* s);
void QHeightMapSurfaceDataProxy_SetHeightMap(QHeightMapSurfaceDataProxy* self, const QImage* image);
QImage* QHeightMapSurfaceDataProxy_HeightMap(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetHeightMapFile(QHeightMapSurfaceDataProxy* self, const libqt_string filename);
libqt_string QHeightMapSurfaceDataProxy_HeightMapFile(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetValueRanges(QHeightMapSurfaceDataProxy* self, float minX, float maxX, float minZ, float maxZ);
void QHeightMapSurfaceDataProxy_SetMinXValue(QHeightMapSurfaceDataProxy* self, float min);
float QHeightMapSurfaceDataProxy_MinXValue(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetMaxXValue(QHeightMapSurfaceDataProxy* self, float max);
float QHeightMapSurfaceDataProxy_MaxXValue(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetMinZValue(QHeightMapSurfaceDataProxy* self, float min);
float QHeightMapSurfaceDataProxy_MinZValue(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetMaxZValue(QHeightMapSurfaceDataProxy* self, float max);
float QHeightMapSurfaceDataProxy_MaxZValue(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetMinYValue(QHeightMapSurfaceDataProxy* self, float min);
float QHeightMapSurfaceDataProxy_MinYValue(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetMaxYValue(QHeightMapSurfaceDataProxy* self, float max);
float QHeightMapSurfaceDataProxy_MaxYValue(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_SetAutoScaleY(QHeightMapSurfaceDataProxy* self, bool enabled);
bool QHeightMapSurfaceDataProxy_AutoScaleY(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_HeightMapChanged(QHeightMapSurfaceDataProxy* self, const QImage* image);
void QHeightMapSurfaceDataProxy_Connect_HeightMapChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_HeightMapFileChanged(QHeightMapSurfaceDataProxy* self, const libqt_string filename);
void QHeightMapSurfaceDataProxy_Connect_HeightMapFileChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_MinXValueChanged(QHeightMapSurfaceDataProxy* self, float value);
void QHeightMapSurfaceDataProxy_Connect_MinXValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_MaxXValueChanged(QHeightMapSurfaceDataProxy* self, float value);
void QHeightMapSurfaceDataProxy_Connect_MaxXValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_MinZValueChanged(QHeightMapSurfaceDataProxy* self, float value);
void QHeightMapSurfaceDataProxy_Connect_MinZValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_MaxZValueChanged(QHeightMapSurfaceDataProxy* self, float value);
void QHeightMapSurfaceDataProxy_Connect_MaxZValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_MinYValueChanged(QHeightMapSurfaceDataProxy* self, float value);
void QHeightMapSurfaceDataProxy_Connect_MinYValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_MaxYValueChanged(QHeightMapSurfaceDataProxy* self, float value);
void QHeightMapSurfaceDataProxy_Connect_MaxYValueChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_AutoScaleYChanged(QHeightMapSurfaceDataProxy* self, bool enabled);
void QHeightMapSurfaceDataProxy_Connect_AutoScaleYChanged(QHeightMapSurfaceDataProxy* self, intptr_t slot);
libqt_string QHeightMapSurfaceDataProxy_Tr2(const char* s, const char* c);
libqt_string QHeightMapSurfaceDataProxy_Tr3(const char* s, const char* c, int n);
void QHeightMapSurfaceDataProxy_OnMetaObject(QHeightMapSurfaceDataProxy* self, intptr_t slot);
QMetaObject* QHeightMapSurfaceDataProxy_SuperMetaObject(const QHeightMapSurfaceDataProxy* self);
void QHeightMapSurfaceDataProxy_OnMetacast(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void* QHeightMapSurfaceDataProxy_SuperMetacast(QHeightMapSurfaceDataProxy* self, const char* param1);
void QHeightMapSurfaceDataProxy_OnMetacall(QHeightMapSurfaceDataProxy* self, intptr_t slot);
int QHeightMapSurfaceDataProxy_SuperMetacall(QHeightMapSurfaceDataProxy* self, int param1, int param2, void** param3);
bool QHeightMapSurfaceDataProxy_Event(QHeightMapSurfaceDataProxy* self, QEvent* event);
void QHeightMapSurfaceDataProxy_OnEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot);
bool QHeightMapSurfaceDataProxy_SuperEvent(QHeightMapSurfaceDataProxy* self, QEvent* event);
bool QHeightMapSurfaceDataProxy_EventFilter(QHeightMapSurfaceDataProxy* self, QObject* watched, QEvent* event);
void QHeightMapSurfaceDataProxy_OnEventFilter(QHeightMapSurfaceDataProxy* self, intptr_t slot);
bool QHeightMapSurfaceDataProxy_SuperEventFilter(QHeightMapSurfaceDataProxy* self, QObject* watched, QEvent* event);
void QHeightMapSurfaceDataProxy_TimerEvent(QHeightMapSurfaceDataProxy* self, QTimerEvent* event);
void QHeightMapSurfaceDataProxy_OnTimerEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_SuperTimerEvent(QHeightMapSurfaceDataProxy* self, QTimerEvent* event);
void QHeightMapSurfaceDataProxy_ChildEvent(QHeightMapSurfaceDataProxy* self, QChildEvent* event);
void QHeightMapSurfaceDataProxy_OnChildEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_SuperChildEvent(QHeightMapSurfaceDataProxy* self, QChildEvent* event);
void QHeightMapSurfaceDataProxy_CustomEvent(QHeightMapSurfaceDataProxy* self, QEvent* event);
void QHeightMapSurfaceDataProxy_OnCustomEvent(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_SuperCustomEvent(QHeightMapSurfaceDataProxy* self, QEvent* event);
void QHeightMapSurfaceDataProxy_ConnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal);
void QHeightMapSurfaceDataProxy_OnConnectNotify(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_SuperConnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal);
void QHeightMapSurfaceDataProxy_DisconnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal);
void QHeightMapSurfaceDataProxy_OnDisconnectNotify(QHeightMapSurfaceDataProxy* self, intptr_t slot);
void QHeightMapSurfaceDataProxy_SuperDisconnectNotify(QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal);
QObject* QHeightMapSurfaceDataProxy_Sender(const QHeightMapSurfaceDataProxy* self);
int QHeightMapSurfaceDataProxy_SenderSignalIndex(const QHeightMapSurfaceDataProxy* self);
int QHeightMapSurfaceDataProxy_Receivers(const QHeightMapSurfaceDataProxy* self, const char* signal);
bool QHeightMapSurfaceDataProxy_IsSignalConnected(const QHeightMapSurfaceDataProxy* self, const QMetaMethod* signal);
void QHeightMapSurfaceDataProxy_Delete(QHeightMapSurfaceDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
