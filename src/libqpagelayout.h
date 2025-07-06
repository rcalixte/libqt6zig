#pragma once
#ifndef SRCC_LIBQPAGELAYOUT_H
#define SRCC_LIBQPAGELAYOUT_H

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
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageSize QPageSize;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
#endif

QPageLayout* QPageLayout_new();
QPageLayout* QPageLayout_new2(const QPageSize* pageSize, int orientation, const QMarginsF* margins);
QPageLayout* QPageLayout_new3(const QPageLayout* other);
QPageLayout* QPageLayout_new4(const QPageSize* pageSize, int orientation, const QMarginsF* margins, int units);
QPageLayout* QPageLayout_new5(const QPageSize* pageSize, int orientation, const QMarginsF* margins, int units, const QMarginsF* minMargins);
void QPageLayout_OperatorAssign(QPageLayout* self, const QPageLayout* other);
void QPageLayout_Swap(QPageLayout* self, QPageLayout* other);
bool QPageLayout_IsEquivalentTo(const QPageLayout* self, const QPageLayout* other);
bool QPageLayout_IsValid(const QPageLayout* self);
void QPageLayout_SetMode(QPageLayout* self, int mode);
int QPageLayout_Mode(const QPageLayout* self);
void QPageLayout_SetPageSize(QPageLayout* self, const QPageSize* pageSize);
QPageSize* QPageLayout_PageSize(const QPageLayout* self);
void QPageLayout_SetOrientation(QPageLayout* self, int orientation);
int QPageLayout_Orientation(const QPageLayout* self);
void QPageLayout_SetUnits(QPageLayout* self, int units);
int QPageLayout_Units(const QPageLayout* self);
bool QPageLayout_SetMargins(QPageLayout* self, const QMarginsF* margins);
bool QPageLayout_SetLeftMargin(QPageLayout* self, double leftMargin);
bool QPageLayout_SetRightMargin(QPageLayout* self, double rightMargin);
bool QPageLayout_SetTopMargin(QPageLayout* self, double topMargin);
bool QPageLayout_SetBottomMargin(QPageLayout* self, double bottomMargin);
QMarginsF* QPageLayout_Margins(const QPageLayout* self);
QMarginsF* QPageLayout_MarginsWithUnits(const QPageLayout* self, int units);
QMargins* QPageLayout_MarginsPoints(const QPageLayout* self);
QMargins* QPageLayout_MarginsPixels(const QPageLayout* self, int resolution);
void QPageLayout_SetMinimumMargins(QPageLayout* self, const QMarginsF* minMargins);
QMarginsF* QPageLayout_MinimumMargins(const QPageLayout* self);
QMarginsF* QPageLayout_MaximumMargins(const QPageLayout* self);
QRectF* QPageLayout_FullRect(const QPageLayout* self);
QRectF* QPageLayout_FullRectWithUnits(const QPageLayout* self, int units);
QRect* QPageLayout_FullRectPoints(const QPageLayout* self);
QRect* QPageLayout_FullRectPixels(const QPageLayout* self, int resolution);
QRectF* QPageLayout_PaintRect(const QPageLayout* self);
QRectF* QPageLayout_PaintRectWithUnits(const QPageLayout* self, int units);
QRect* QPageLayout_PaintRectPoints(const QPageLayout* self);
QRect* QPageLayout_PaintRectPixels(const QPageLayout* self, int resolution);
void QPageLayout_SetPageSize2(QPageLayout* self, const QPageSize* pageSize, const QMarginsF* minMargins);
bool QPageLayout_SetMargins2(QPageLayout* self, const QMarginsF* margins, int outOfBoundsPolicy);
bool QPageLayout_SetLeftMargin2(QPageLayout* self, double leftMargin, int outOfBoundsPolicy);
bool QPageLayout_SetRightMargin2(QPageLayout* self, double rightMargin, int outOfBoundsPolicy);
bool QPageLayout_SetTopMargin2(QPageLayout* self, double topMargin, int outOfBoundsPolicy);
bool QPageLayout_SetBottomMargin2(QPageLayout* self, double bottomMargin, int outOfBoundsPolicy);
void QPageLayout_Delete(QPageLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
