#pragma once
#ifndef LIBQDRAWUTIL_H
#define LIBQDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QMargins QMargins;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QTileRules QTileRules;
#endif

void qdrawutil_h_QDrawShadeLine(QPainter* p, int x1, int y1, int x2, int y2, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth);
void qdrawutil_h_QDrawShadeLine2(QPainter* p, const QPoint* p1, const QPoint* p2, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth);
void qdrawutil_h_QDrawShadeRect(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth, const QBrush* fill);
void qdrawutil_h_QDrawShadeRect2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth, const QBrush* fill);
void qdrawutil_h_QDrawShadePanel(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, int lineWidth, const QBrush* fill);
void qdrawutil_h_QDrawShadePanel2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, int lineWidth, const QBrush* fill);
void qdrawutil_h_QDrawWinButton(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, const QBrush* fill);
void qdrawutil_h_QDrawWinButton2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, const QBrush* fill);
void qdrawutil_h_QDrawWinPanel(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, const QBrush* fill);
void qdrawutil_h_QDrawWinPanel2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, const QBrush* fill);
void qdrawutil_h_QDrawPlainRect(QPainter* p, int x, int y, int w, int h, const QColor* param6, int lineWidth, const QBrush* fill);
void qdrawutil_h_QDrawPlainRect2(QPainter* p, const QRect* r, const QColor* param3, int lineWidth, const QBrush* fill);
void qdrawutil_h_QDrawPlainRoundedRect(QPainter* p, int x, int y, int w, int h, double rx, double ry, const QColor* param8, int lineWidth, const QBrush* fill);
void qdrawutil_h_QDrawPlainRoundedRect2(QPainter* painter, const QRect* rect, double rx, double ry, const QColor* lineColor, int lineWidth, const QBrush* fill);
void qdrawutil_h_QDrawBorderPixmap(QPainter* painter, const QRect* targetRect, const QMargins* targetMargins, const QPixmap* pixmap, const QRect* sourceRect, const QMargins* sourceMargins, const QTileRules* rules, int hints);
void qdrawutil_h_QDrawBorderPixmap2(QPainter* painter, const QRect* target, const QMargins* margins, const QPixmap* pixmap);

QTileRules* QTileRules_new(const QTileRules* other);
QTileRules* QTileRules_new2(QTileRules* other);
QTileRules* QTileRules_new3(int horizontalRule, int verticalRule);
QTileRules* QTileRules_new4();
QTileRules* QTileRules_new5(const QTileRules* param1);
QTileRules* QTileRules_new6(int rule);
void QTileRules_CopyAssign(QTileRules* self, QTileRules* other);
void QTileRules_MoveAssign(QTileRules* self, QTileRules* other);
int QTileRules_Horizontal(const QTileRules* self);
void QTileRules_SetHorizontal(QTileRules* self, int horizontal);
int QTileRules_Vertical(const QTileRules* self);
void QTileRules_SetVertical(QTileRules* self, int vertical);
void QTileRules_Delete(QTileRules* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
