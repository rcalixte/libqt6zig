#pragma once
#ifndef SRCC_LIBQPAINTDEVICEWINDOW_H
#define SRCC_LIBQPAINTDEVICEWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QPaintEvent QPaintEvent;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QSurface QSurface;
typedef struct QWindow QWindow;
#endif

QMetaObject* QPaintDeviceWindow_MetaObject(const QPaintDeviceWindow* self);
void* QPaintDeviceWindow_Metacast(QPaintDeviceWindow* self, const char* param1);
int QPaintDeviceWindow_Metacall(QPaintDeviceWindow* self, int param1, int param2, void** param3);
void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, const QRect* rect);
void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self, const QRegion* region);
void QPaintDeviceWindow_Update3(QPaintDeviceWindow* self);
void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
