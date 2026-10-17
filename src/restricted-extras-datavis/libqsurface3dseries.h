#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACE3DSERIES_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACE3DSERIES_H

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
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QSurface3DSeries QSurface3DSeries;
typedef struct QSurfaceDataProxy QSurfaceDataProxy;
typedef struct QTimerEvent QTimerEvent;
#endif

QSurface3DSeries* QSurface3DSeries_new();
QSurface3DSeries* QSurface3DSeries_new2(QSurfaceDataProxy* dataProxy);
QSurface3DSeries* QSurface3DSeries_new3(QObject* parent);
QSurface3DSeries* QSurface3DSeries_new4(QSurfaceDataProxy* dataProxy, QObject* parent);
QMetaObject* QSurface3DSeries_MetaObject(const QSurface3DSeries* self);
void* QSurface3DSeries_Metacast(QSurface3DSeries* self, const char* param1);
int QSurface3DSeries_Metacall(QSurface3DSeries* self, int param1, int param2, void** param3);
libqt_string QSurface3DSeries_Tr(const char* s);
void QSurface3DSeries_SetDataProxy(QSurface3DSeries* self, QSurfaceDataProxy* proxy);
QSurfaceDataProxy* QSurface3DSeries_DataProxy(const QSurface3DSeries* self);
void QSurface3DSeries_SetSelectedPoint(QSurface3DSeries* self, const QPoint* position);
QPoint* QSurface3DSeries_SelectedPoint(const QSurface3DSeries* self);
QPoint* QSurface3DSeries_InvalidSelectionPosition();
void QSurface3DSeries_SetFlatShadingEnabled(QSurface3DSeries* self, bool enabled);
bool QSurface3DSeries_IsFlatShadingEnabled(const QSurface3DSeries* self);
void QSurface3DSeries_SetDrawMode(QSurface3DSeries* self, int mode);
int QSurface3DSeries_DrawMode(const QSurface3DSeries* self);
bool QSurface3DSeries_IsFlatShadingSupported(const QSurface3DSeries* self);
void QSurface3DSeries_SetTexture(QSurface3DSeries* self, const QImage* texture);
QImage* QSurface3DSeries_Texture(const QSurface3DSeries* self);
void QSurface3DSeries_SetTextureFile(QSurface3DSeries* self, const libqt_string filename);
libqt_string QSurface3DSeries_TextureFile(const QSurface3DSeries* self);
void QSurface3DSeries_SetWireframeColor(QSurface3DSeries* self, const QColor* color);
QColor* QSurface3DSeries_WireframeColor(const QSurface3DSeries* self);
void QSurface3DSeries_DataProxyChanged(QSurface3DSeries* self, QSurfaceDataProxy* proxy);
void QSurface3DSeries_Connect_DataProxyChanged(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_SelectedPointChanged(QSurface3DSeries* self, const QPoint* position);
void QSurface3DSeries_Connect_SelectedPointChanged(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_FlatShadingEnabledChanged(QSurface3DSeries* self, bool enable);
void QSurface3DSeries_Connect_FlatShadingEnabledChanged(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_FlatShadingSupportedChanged(QSurface3DSeries* self, bool enable);
void QSurface3DSeries_Connect_FlatShadingSupportedChanged(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_DrawModeChanged(QSurface3DSeries* self, int mode);
void QSurface3DSeries_Connect_DrawModeChanged(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_TextureChanged(QSurface3DSeries* self, const QImage* image);
void QSurface3DSeries_Connect_TextureChanged(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_TextureFileChanged(QSurface3DSeries* self, const libqt_string filename);
void QSurface3DSeries_Connect_TextureFileChanged(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_WireframeColorChanged(QSurface3DSeries* self, const QColor* color);
void QSurface3DSeries_Connect_WireframeColorChanged(QSurface3DSeries* self, intptr_t slot);
libqt_string QSurface3DSeries_Tr2(const char* s, const char* c);
libqt_string QSurface3DSeries_Tr3(const char* s, const char* c, int n);
void QSurface3DSeries_OnMetaObject(QSurface3DSeries* self, intptr_t slot);
QMetaObject* QSurface3DSeries_SuperMetaObject(const QSurface3DSeries* self);
void QSurface3DSeries_OnMetacast(QSurface3DSeries* self, intptr_t slot);
void* QSurface3DSeries_SuperMetacast(QSurface3DSeries* self, const char* param1);
void QSurface3DSeries_OnMetacall(QSurface3DSeries* self, intptr_t slot);
int QSurface3DSeries_SuperMetacall(QSurface3DSeries* self, int param1, int param2, void** param3);
bool QSurface3DSeries_Event(QSurface3DSeries* self, QEvent* event);
void QSurface3DSeries_OnEvent(QSurface3DSeries* self, intptr_t slot);
bool QSurface3DSeries_SuperEvent(QSurface3DSeries* self, QEvent* event);
bool QSurface3DSeries_EventFilter(QSurface3DSeries* self, QObject* watched, QEvent* event);
void QSurface3DSeries_OnEventFilter(QSurface3DSeries* self, intptr_t slot);
bool QSurface3DSeries_SuperEventFilter(QSurface3DSeries* self, QObject* watched, QEvent* event);
void QSurface3DSeries_TimerEvent(QSurface3DSeries* self, QTimerEvent* event);
void QSurface3DSeries_OnTimerEvent(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_SuperTimerEvent(QSurface3DSeries* self, QTimerEvent* event);
void QSurface3DSeries_ChildEvent(QSurface3DSeries* self, QChildEvent* event);
void QSurface3DSeries_OnChildEvent(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_SuperChildEvent(QSurface3DSeries* self, QChildEvent* event);
void QSurface3DSeries_CustomEvent(QSurface3DSeries* self, QEvent* event);
void QSurface3DSeries_OnCustomEvent(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_SuperCustomEvent(QSurface3DSeries* self, QEvent* event);
void QSurface3DSeries_ConnectNotify(QSurface3DSeries* self, const QMetaMethod* signal);
void QSurface3DSeries_OnConnectNotify(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_SuperConnectNotify(QSurface3DSeries* self, const QMetaMethod* signal);
void QSurface3DSeries_DisconnectNotify(QSurface3DSeries* self, const QMetaMethod* signal);
void QSurface3DSeries_OnDisconnectNotify(QSurface3DSeries* self, intptr_t slot);
void QSurface3DSeries_SuperDisconnectNotify(QSurface3DSeries* self, const QMetaMethod* signal);
QObject* QSurface3DSeries_Sender(const QSurface3DSeries* self);
int QSurface3DSeries_SenderSignalIndex(const QSurface3DSeries* self);
int QSurface3DSeries_Receivers(const QSurface3DSeries* self, const char* signal);
bool QSurface3DSeries_IsSignalConnected(const QSurface3DSeries* self, const QMetaMethod* signal);
void QSurface3DSeries_Delete(QSurface3DSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
