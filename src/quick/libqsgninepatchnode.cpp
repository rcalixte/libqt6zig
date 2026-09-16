#include <QRectF>
#include <QSGBasicGeometryNode>
#include <QSGGeometry>
#include <QSGGeometryNode>
#include <QSGNinePatchNode>
#include <QSGNode>
#include <QSGTexture>
#include <QVector4D>
#include <qsgninepatchnode.h>
#include "libqsgninepatchnode.h"
#include "libqsgninepatchnode.hxx"

void QSGNinePatchNode_SetTexture(QSGNinePatchNode* self, QSGTexture* texture) {
    self->setTexture(texture);
}

void QSGNinePatchNode_SetBounds(QSGNinePatchNode* self, const QRectF* bounds) {
    self->setBounds(*bounds);
}

void QSGNinePatchNode_SetDevicePixelRatio(QSGNinePatchNode* self, double ratio) {
    self->setDevicePixelRatio(static_cast<qreal>(ratio));
}

void QSGNinePatchNode_SetPadding(QSGNinePatchNode* self, double left, double top, double right, double bottom) {
    self->setPadding(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QSGNinePatchNode_Update(QSGNinePatchNode* self) {
    self->update();
}

void QSGNinePatchNode_RebuildGeometry(QSGTexture* texture, QSGGeometry* geometry, const QVector4D* padding, const QRectF* bounds, double dpr) {
    QSGNinePatchNode::rebuildGeometry(texture, geometry, *padding, *bounds, static_cast<qreal>(dpr));
}

void QSGNinePatchNode_Delete(QSGNinePatchNode* self) {
    delete self;
}
