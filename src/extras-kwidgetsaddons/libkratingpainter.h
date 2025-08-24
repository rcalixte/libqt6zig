#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKRATINGPAINTER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKRATINGPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KRatingPainter KRatingPainter;
typedef struct QIcon QIcon;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
#endif

KRatingPainter* KRatingPainter_new();
int KRatingPainter_MaxRating(const KRatingPainter* self);
bool KRatingPainter_HalfStepsEnabled(const KRatingPainter* self);
int KRatingPainter_Alignment(const KRatingPainter* self);
int KRatingPainter_LayoutDirection(const KRatingPainter* self);
QIcon* KRatingPainter_Icon(const KRatingPainter* self);
bool KRatingPainter_IsEnabled(const KRatingPainter* self);
QPixmap* KRatingPainter_CustomPixmap(const KRatingPainter* self);
int KRatingPainter_Spacing(const KRatingPainter* self);
void KRatingPainter_SetMaxRating(KRatingPainter* self, int max);
void KRatingPainter_SetHalfStepsEnabled(KRatingPainter* self, bool enabled);
void KRatingPainter_SetAlignment(KRatingPainter* self, int alignVal);
void KRatingPainter_SetLayoutDirection(KRatingPainter* self, int direction);
void KRatingPainter_SetIcon(KRatingPainter* self, const QIcon* icon);
void KRatingPainter_SetEnabled(KRatingPainter* self, bool enabled);
void KRatingPainter_SetCustomPixmap(KRatingPainter* self, const QPixmap* pixmap);
void KRatingPainter_SetSpacing(KRatingPainter* self, int spacing);
void KRatingPainter_Paint(const KRatingPainter* self, QPainter* painter, const QRect* rect, int rating);
int KRatingPainter_RatingFromPosition(const KRatingPainter* self, const QRect* rect, const QPoint* pos);
void KRatingPainter_PaintRating(QPainter* p, const QRect* rect, int alignVal, int rating);
int KRatingPainter_GetRatingFromPosition(const QRect* rect, int alignVal, int direction, const QPoint* pos);
void KRatingPainter_Paint4(const KRatingPainter* self, QPainter* painter, const QRect* rect, int rating, int hoverRating);
void KRatingPainter_PaintRating5(QPainter* p, const QRect* rect, int alignVal, int rating, int hoverRating);
void KRatingPainter_Delete(KRatingPainter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
