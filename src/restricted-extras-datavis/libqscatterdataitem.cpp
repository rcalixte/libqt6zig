#include <QQuaternion>
#include <QScatterDataItem>
#include <QVector3D>
#include <qscatterdataitem.h>
#include "libqscatterdataitem.h"
#include "libqscatterdataitem.hxx"

QScatterDataItem* QScatterDataItem_new() {
    return new QScatterDataItem();
}

QScatterDataItem* QScatterDataItem_new2(const QVector3D* position) {
    return new QScatterDataItem(*position);
}

QScatterDataItem* QScatterDataItem_new3(const QVector3D* position, const QQuaternion* rotation) {
    return new QScatterDataItem(*position, *rotation);
}

QScatterDataItem* QScatterDataItem_new4(const QScatterDataItem* other) {
    return new QScatterDataItem(*other);
}

void QScatterDataItem_OperatorAssign(QScatterDataItem* self, const QScatterDataItem* other) {
    self->operator=(*other);
}

void QScatterDataItem_SetPosition(QScatterDataItem* self, const QVector3D* pos) {
    self->setPosition(*pos);
}

QVector3D* QScatterDataItem_Position(const QScatterDataItem* self) {
    return new QVector3D(self->position());
}

void QScatterDataItem_SetRotation(QScatterDataItem* self, const QQuaternion* rot) {
    self->setRotation(*rot);
}

QQuaternion* QScatterDataItem_Rotation(const QScatterDataItem* self) {
    return new QQuaternion(self->rotation());
}

void QScatterDataItem_SetX(QScatterDataItem* self, float value) {
    self->setX(static_cast<float>(value));
}

void QScatterDataItem_SetY(QScatterDataItem* self, float value) {
    self->setY(static_cast<float>(value));
}

void QScatterDataItem_SetZ(QScatterDataItem* self, float value) {
    self->setZ(static_cast<float>(value));
}

float QScatterDataItem_X(const QScatterDataItem* self) {
    return self->x();
}

float QScatterDataItem_Y(const QScatterDataItem* self) {
    return self->y();
}

float QScatterDataItem_Z(const QScatterDataItem* self) {
    return self->z();
}

void QScatterDataItem_Delete(QScatterDataItem* self) {
    delete self;
}
