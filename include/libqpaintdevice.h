#pragma once
#ifndef SRCC_LIBQPAINTDEVICE_H
#define SRCC_LIBQPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
#endif

#ifdef __cplusplus
typedef QPaintDevice::PaintDeviceMetric PaintDeviceMetric; // C++ enum
#else
typedef int PaintDeviceMetric; // C ABI enum
#endif

int QPaintDevice_DevType(const QPaintDevice* self);
bool QPaintDevice_PaintingActive(const QPaintDevice* self);
QPaintEngine* QPaintDevice_PaintEngine(const QPaintDevice* self);
int QPaintDevice_Width(const QPaintDevice* self);
int QPaintDevice_Height(const QPaintDevice* self);
int QPaintDevice_WidthMM(const QPaintDevice* self);
int QPaintDevice_HeightMM(const QPaintDevice* self);
int QPaintDevice_LogicalDpiX(const QPaintDevice* self);
int QPaintDevice_LogicalDpiY(const QPaintDevice* self);
int QPaintDevice_PhysicalDpiX(const QPaintDevice* self);
int QPaintDevice_PhysicalDpiY(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatio(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatioF(const QPaintDevice* self);
int QPaintDevice_ColorCount(const QPaintDevice* self);
int QPaintDevice_Depth(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatioFScale();
void QPaintDevice_Delete(QPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
