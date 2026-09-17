#include <QBrush>
#include <QColor>
#include <QMargins>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QTileRules>
#include <qdrawutil.h>
#include "libqdrawutil.h"
#include "libqdrawutil.hxx"

void qdrawutil_h_QDrawShadeLine(QPainter* p, int x1, int y1, int x2, int y2, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth) {
    qDrawShadeLine(p, static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2), *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth));
}

void qdrawutil_h_QDrawShadeLine2(QPainter* p, const QPoint* p1, const QPoint* p2, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth) {
    qDrawShadeLine(p, *p1, *p2, *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth));
}

void qdrawutil_h_QDrawShadeRect(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth, const QBrush* fill) {
    qDrawShadeRect(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth), fill);
}

void qdrawutil_h_QDrawShadeRect2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, int lineWidth, int midLineWidth, const QBrush* fill) {
    qDrawShadeRect(p, *r, *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth), fill);
}

void qdrawutil_h_QDrawShadePanel(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, int lineWidth, const QBrush* fill) {
    qDrawShadePanel(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, static_cast<int>(lineWidth), fill);
}

void qdrawutil_h_QDrawShadePanel2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, int lineWidth, const QBrush* fill) {
    qDrawShadePanel(p, *r, *pal, sunken, static_cast<int>(lineWidth), fill);
}

void qdrawutil_h_QDrawWinButton(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, const QBrush* fill) {
    qDrawWinButton(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, fill);
}

void qdrawutil_h_QDrawWinButton2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, const QBrush* fill) {
    qDrawWinButton(p, *r, *pal, sunken, fill);
}

void qdrawutil_h_QDrawWinPanel(QPainter* p, int x, int y, int w, int h, const QPalette* pal, bool sunken, const QBrush* fill) {
    qDrawWinPanel(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, fill);
}

void qdrawutil_h_QDrawWinPanel2(QPainter* p, const QRect* r, const QPalette* pal, bool sunken, const QBrush* fill) {
    qDrawWinPanel(p, *r, *pal, sunken, fill);
}

void qdrawutil_h_QDrawPlainRect(QPainter* p, int x, int y, int w, int h, const QColor* param6, int lineWidth, const QBrush* fill) {
    qDrawPlainRect(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param6, static_cast<int>(lineWidth), fill);
}

void qdrawutil_h_QDrawPlainRect2(QPainter* p, const QRect* r, const QColor* param3, int lineWidth, const QBrush* fill) {
    qDrawPlainRect(p, *r, *param3, static_cast<int>(lineWidth), fill);
}

void qdrawutil_h_QDrawPlainRoundedRect(QPainter* p, int x, int y, int w, int h, double rx, double ry, const QColor* param8, int lineWidth, const QBrush* fill) {
    qDrawPlainRoundedRect(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<qreal>(rx), static_cast<qreal>(ry), *param8, static_cast<int>(lineWidth), fill);
}

void qdrawutil_h_QDrawPlainRoundedRect2(QPainter* painter, const QRect* rect, double rx, double ry, const QColor* lineColor, int lineWidth, const QBrush* fill) {
    qDrawPlainRoundedRect(painter, *rect, static_cast<qreal>(rx), static_cast<qreal>(ry), *lineColor, static_cast<int>(lineWidth), fill);
}

void qdrawutil_h_QDrawBorderPixmap(QPainter* painter, const QRect* targetRect, const QMargins* targetMargins, const QPixmap* pixmap, const QRect* sourceRect, const QMargins* sourceMargins, const QTileRules* rules, int hints) {
    qDrawBorderPixmap(painter, *targetRect, *targetMargins, *pixmap, *sourceRect, *sourceMargins, *rules, static_cast<QDrawBorderPixmap::DrawingHints>(hints));
}

void qdrawutil_h_QDrawBorderPixmap2(QPainter* painter, const QRect* target, const QMargins* margins, const QPixmap* pixmap) {
    qDrawBorderPixmap(painter, *target, *margins, *pixmap);
}

QTileRules* QTileRules_new(const QTileRules* other) {
    return new QTileRules(*other);
}

QTileRules* QTileRules_new2(QTileRules* other) {
    return new QTileRules(std::move(*other));
}

QTileRules* QTileRules_new3(int horizontalRule, int verticalRule) {
    return new QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
}

QTileRules* QTileRules_new4() {
    return new QTileRules();
}

QTileRules* QTileRules_new5(const QTileRules* param1) {
    return new QTileRules(*param1);
}

QTileRules* QTileRules_new6(int rule) {
    return new QTileRules(static_cast<Qt::TileRule>(rule));
}

void QTileRules_CopyAssign(QTileRules* self, QTileRules* other) {
    *self = *other;
}

void QTileRules_MoveAssign(QTileRules* self, QTileRules* other) {
    *self = std::move(*other);
}

int QTileRules_Horizontal(const QTileRules* self) {
    return static_cast<int>(self->horizontal);
}

void QTileRules_SetHorizontal(QTileRules* self, int horizontal) {
    self->horizontal = static_cast<Qt::TileRule>(horizontal);
}

int QTileRules_Vertical(const QTileRules* self) {
    return static_cast<int>(self->vertical);
}

void QTileRules_SetVertical(QTileRules* self, int vertical) {
    self->vertical = static_cast<Qt::TileRule>(vertical);
}

void QTileRules_Delete(QTileRules* self) {
    delete self;
}
