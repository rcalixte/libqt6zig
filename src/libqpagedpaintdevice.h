#pragma once
#ifndef SRCC_LIBQPAGEDPAINTDEVICE_H
#define SRCC_LIBQPAGEDPAINTDEVICE_H

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
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
#endif

bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self);
bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, const QPageLayout* pageLayout);
bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, const QPageSize* pageSize);
bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, int orientation);
bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, const QMarginsF* margins, int units);
QPageLayout* QPagedPaintDevice_PageLayout(const QPagedPaintDevice* self);
void QPagedPaintDevice_SetPageRanges(QPagedPaintDevice* self, const QPageRanges* ranges);
QPageRanges* QPagedPaintDevice_PageRanges(const QPagedPaintDevice* self);
void QPagedPaintDevice_Delete(QPagedPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
