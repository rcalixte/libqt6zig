#include <QColor>
#include <QRectF>
#include <QSGBasicGeometryNode>
#include <QSGGeometryNode>
#include <QSGNode>
#include <QSGRectangleNode>
#include <qsgrectanglenode.h>
#include "libqsgrectanglenode.h"
#include "libqsgrectanglenode.hxx"

void QSGRectangleNode_SetRect(QSGRectangleNode* self, const QRectF* rect) {
    self->setRect(*rect);
}

void QSGRectangleNode_SetRect2(QSGRectangleNode* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QSGRectangleNode_Rect(const QSGRectangleNode* self) {
    return new QRectF(self->rect());
}

void QSGRectangleNode_SetColor(QSGRectangleNode* self, const QColor* color) {
    self->setColor(*color);
}

QColor* QSGRectangleNode_Color(const QSGRectangleNode* self) {
    return new QColor(self->color());
}

void QSGRectangleNode_Delete(QSGRectangleNode* self) {
    delete self;
}
