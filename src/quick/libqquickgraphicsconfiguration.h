#pragma once
#ifndef QUICK_LIBQQUICKGRAPHICSCONFIGURATION_H
#define QUICK_LIBQQUICKGRAPHICSCONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQuickGraphicsConfiguration QQuickGraphicsConfiguration;
#endif

QQuickGraphicsConfiguration* QQuickGraphicsConfiguration_new();
QQuickGraphicsConfiguration* QQuickGraphicsConfiguration_new2(const QQuickGraphicsConfiguration* other);
void QQuickGraphicsConfiguration_OperatorAssign(QQuickGraphicsConfiguration* self, const QQuickGraphicsConfiguration* other);
libqt_list /* of libqt_string */ QQuickGraphicsConfiguration_PreferredInstanceExtensions();
void QQuickGraphicsConfiguration_SetDeviceExtensions(QQuickGraphicsConfiguration* self, const libqt_list /* of libqt_string */ extensions);
libqt_list /* of libqt_string */ QQuickGraphicsConfiguration_DeviceExtensions(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetDepthBufferFor2D(QQuickGraphicsConfiguration* self, bool enable);
bool QQuickGraphicsConfiguration_IsDepthBufferEnabledFor2D(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetDebugLayer(QQuickGraphicsConfiguration* self, bool enable);
bool QQuickGraphicsConfiguration_IsDebugLayerEnabled(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetDebugMarkers(QQuickGraphicsConfiguration* self, bool enable);
bool QQuickGraphicsConfiguration_IsDebugMarkersEnabled(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetTimestamps(QQuickGraphicsConfiguration* self, bool enable);
bool QQuickGraphicsConfiguration_TimestampsEnabled(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetPreferSoftwareDevice(QQuickGraphicsConfiguration* self, bool enable);
bool QQuickGraphicsConfiguration_PrefersSoftwareDevice(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetAutomaticPipelineCache(QQuickGraphicsConfiguration* self, bool enable);
bool QQuickGraphicsConfiguration_IsAutomaticPipelineCacheEnabled(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetPipelineCacheSaveFile(QQuickGraphicsConfiguration* self, const libqt_string filename);
libqt_string QQuickGraphicsConfiguration_PipelineCacheSaveFile(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_SetPipelineCacheLoadFile(QQuickGraphicsConfiguration* self, const libqt_string filename);
libqt_string QQuickGraphicsConfiguration_PipelineCacheLoadFile(const QQuickGraphicsConfiguration* self);
void QQuickGraphicsConfiguration_Delete(QQuickGraphicsConfiguration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
