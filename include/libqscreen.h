#pragma once
#ifndef SRCC_LIBQSCREEN_H
#define SRCC_LIBQSCREEN_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
#endif

QMetaObject* QScreen_MetaObject(const QScreen* self);
void* QScreen_Metacast(QScreen* self, const char* param1);
int QScreen_Metacall(QScreen* self, int param1, int param2, void** param3);
libqt_string QScreen_Tr(const char* s);
libqt_string QScreen_Name(const QScreen* self);
libqt_string QScreen_Manufacturer(const QScreen* self);
libqt_string QScreen_Model(const QScreen* self);
libqt_string QScreen_SerialNumber(const QScreen* self);
int QScreen_Depth(const QScreen* self);
QSize* QScreen_Size(const QScreen* self);
QRect* QScreen_Geometry(const QScreen* self);
QSizeF* QScreen_PhysicalSize(const QScreen* self);
double QScreen_PhysicalDotsPerInchX(const QScreen* self);
double QScreen_PhysicalDotsPerInchY(const QScreen* self);
double QScreen_PhysicalDotsPerInch(const QScreen* self);
double QScreen_LogicalDotsPerInchX(const QScreen* self);
double QScreen_LogicalDotsPerInchY(const QScreen* self);
double QScreen_LogicalDotsPerInch(const QScreen* self);
double QScreen_DevicePixelRatio(const QScreen* self);
QSize* QScreen_AvailableSize(const QScreen* self);
QRect* QScreen_AvailableGeometry(const QScreen* self);
libqt_list /* of QScreen* */ QScreen_VirtualSiblings(const QScreen* self);
QScreen* QScreen_VirtualSiblingAt(QScreen* self, QPoint* point);
QSize* QScreen_VirtualSize(const QScreen* self);
QRect* QScreen_VirtualGeometry(const QScreen* self);
QSize* QScreen_AvailableVirtualSize(const QScreen* self);
QRect* QScreen_AvailableVirtualGeometry(const QScreen* self);
int QScreen_PrimaryOrientation(const QScreen* self);
int QScreen_Orientation(const QScreen* self);
int QScreen_NativeOrientation(const QScreen* self);
int QScreen_AngleBetween(const QScreen* self, int a, int b);
QTransform* QScreen_TransformBetween(const QScreen* self, int a, int b, const QRect* target);
QRect* QScreen_MapBetween(const QScreen* self, int a, int b, const QRect* rect);
bool QScreen_IsPortrait(const QScreen* self, int orientation);
bool QScreen_IsLandscape(const QScreen* self, int orientation);
QPixmap* QScreen_GrabWindow(QScreen* self);
double QScreen_RefreshRate(const QScreen* self);
void QScreen_GeometryChanged(QScreen* self, const QRect* geometry);
void QScreen_Connect_GeometryChanged(QScreen* self, intptr_t slot);
void QScreen_AvailableGeometryChanged(QScreen* self, const QRect* geometry);
void QScreen_Connect_AvailableGeometryChanged(QScreen* self, intptr_t slot);
void QScreen_PhysicalSizeChanged(QScreen* self, const QSizeF* size);
void QScreen_Connect_PhysicalSizeChanged(QScreen* self, intptr_t slot);
void QScreen_PhysicalDotsPerInchChanged(QScreen* self, double dpi);
void QScreen_Connect_PhysicalDotsPerInchChanged(QScreen* self, intptr_t slot);
void QScreen_LogicalDotsPerInchChanged(QScreen* self, double dpi);
void QScreen_Connect_LogicalDotsPerInchChanged(QScreen* self, intptr_t slot);
void QScreen_VirtualGeometryChanged(QScreen* self, const QRect* rect);
void QScreen_Connect_VirtualGeometryChanged(QScreen* self, intptr_t slot);
void QScreen_PrimaryOrientationChanged(QScreen* self, int orientation);
void QScreen_Connect_PrimaryOrientationChanged(QScreen* self, intptr_t slot);
void QScreen_OrientationChanged(QScreen* self, int orientation);
void QScreen_Connect_OrientationChanged(QScreen* self, intptr_t slot);
void QScreen_RefreshRateChanged(QScreen* self, double refreshRate);
void QScreen_Connect_RefreshRateChanged(QScreen* self, intptr_t slot);
libqt_string QScreen_Tr2(const char* s, const char* c);
libqt_string QScreen_Tr3(const char* s, const char* c, int n);
QPixmap* QScreen_GrabWindow1(QScreen* self, uintptr_t window);
QPixmap* QScreen_GrabWindow2(QScreen* self, uintptr_t window, int x);
QPixmap* QScreen_GrabWindow3(QScreen* self, uintptr_t window, int x, int y);
QPixmap* QScreen_GrabWindow4(QScreen* self, uintptr_t window, int x, int y, int w);
QPixmap* QScreen_GrabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h);
void QScreen_Delete(QScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
