#include <QEventPoint>
#include <QPointF>
#include <QPointingDevice>
#include <QPointingDeviceUniqueId>
#include <QSizeF>
#include <QVector2D>
#include <qeventpoint.h>
#include "libqeventpoint.h"
#include "libqeventpoint.hxx"

QEventPoint* QEventPoint_new() {
    return new QEventPoint();
}

QEventPoint* QEventPoint_new2(int pointId, uint8_t state, const QPointF* scenePosition, const QPointF* globalPosition) {
    return new QEventPoint(static_cast<int>(pointId), static_cast<QEventPoint::State>(state), *scenePosition, *globalPosition);
}

QEventPoint* QEventPoint_new3(const QEventPoint* other) {
    return new QEventPoint(*other);
}

QEventPoint* QEventPoint_new4(int id) {
    return new QEventPoint(static_cast<int>(id));
}

QEventPoint* QEventPoint_new5(int id, const QPointingDevice* device) {
    return new QEventPoint(static_cast<int>(id), device);
}

void QEventPoint_OperatorAssign(QEventPoint* self, const QEventPoint* other) {
    self->operator=(*other);
}

bool QEventPoint_OperatorEqual(const QEventPoint* self, const QEventPoint* other) {
    return (*self == *other);
}

bool QEventPoint_OperatorNotEqual(const QEventPoint* self, const QEventPoint* other) {
    return (*self != *other);
}

void QEventPoint_Swap(QEventPoint* self, QEventPoint* other) {
    self->swap(*other);
}

QPointF* QEventPoint_Position(const QEventPoint* self) {
    return new QPointF(self->position());
}

QPointF* QEventPoint_PressPosition(const QEventPoint* self) {
    return new QPointF(self->pressPosition());
}

QPointF* QEventPoint_GrabPosition(const QEventPoint* self) {
    return new QPointF(self->grabPosition());
}

QPointF* QEventPoint_LastPosition(const QEventPoint* self) {
    return new QPointF(self->lastPosition());
}

QPointF* QEventPoint_ScenePosition(const QEventPoint* self) {
    return new QPointF(self->scenePosition());
}

QPointF* QEventPoint_ScenePressPosition(const QEventPoint* self) {
    return new QPointF(self->scenePressPosition());
}

QPointF* QEventPoint_SceneGrabPosition(const QEventPoint* self) {
    return new QPointF(self->sceneGrabPosition());
}

QPointF* QEventPoint_SceneLastPosition(const QEventPoint* self) {
    return new QPointF(self->sceneLastPosition());
}

QPointF* QEventPoint_GlobalPosition(const QEventPoint* self) {
    return new QPointF(self->globalPosition());
}

QPointF* QEventPoint_GlobalPressPosition(const QEventPoint* self) {
    return new QPointF(self->globalPressPosition());
}

QPointF* QEventPoint_GlobalGrabPosition(const QEventPoint* self) {
    return new QPointF(self->globalGrabPosition());
}

QPointF* QEventPoint_GlobalLastPosition(const QEventPoint* self) {
    return new QPointF(self->globalLastPosition());
}

QPointF* QEventPoint_NormalizedPosition(const QEventPoint* self) {
    return new QPointF(self->normalizedPosition());
}

QPointF* QEventPoint_Pos(const QEventPoint* self) {
    return new QPointF(self->pos());
}

QPointF* QEventPoint_StartPos(const QEventPoint* self) {
    return new QPointF(self->startPos());
}

QPointF* QEventPoint_ScenePos(const QEventPoint* self) {
    return new QPointF(self->scenePos());
}

QPointF* QEventPoint_StartScenePos(const QEventPoint* self) {
    return new QPointF(self->startScenePos());
}

QPointF* QEventPoint_ScreenPos(const QEventPoint* self) {
    return new QPointF(self->screenPos());
}

QPointF* QEventPoint_StartScreenPos(const QEventPoint* self) {
    return new QPointF(self->startScreenPos());
}

QPointF* QEventPoint_StartNormalizedPos(const QEventPoint* self) {
    return new QPointF(self->startNormalizedPos());
}

QPointF* QEventPoint_NormalizedPos(const QEventPoint* self) {
    return new QPointF(self->normalizedPos());
}

QPointF* QEventPoint_LastPos(const QEventPoint* self) {
    return new QPointF(self->lastPos());
}

QPointF* QEventPoint_LastScenePos(const QEventPoint* self) {
    return new QPointF(self->lastScenePos());
}

QPointF* QEventPoint_LastScreenPos(const QEventPoint* self) {
    return new QPointF(self->lastScreenPos());
}

QPointF* QEventPoint_LastNormalizedPos(const QEventPoint* self) {
    return new QPointF(self->lastNormalizedPos());
}

QVector2D* QEventPoint_Velocity(const QEventPoint* self) {
    return new QVector2D(self->velocity());
}

uint8_t QEventPoint_State(const QEventPoint* self) {
    return static_cast<uint8_t>(self->state());
}

QPointingDevice* QEventPoint_Device(const QEventPoint* self) {
    return (QPointingDevice*)self->device();
}

int QEventPoint_Id(const QEventPoint* self) {
    return self->id();
}

QPointingDeviceUniqueId* QEventPoint_UniqueId(const QEventPoint* self) {
    return new QPointingDeviceUniqueId(self->uniqueId());
}

unsigned long QEventPoint_Timestamp(const QEventPoint* self) {
    return static_cast<unsigned long>(self->timestamp());
}

unsigned long QEventPoint_LastTimestamp(const QEventPoint* self) {
    return static_cast<unsigned long>(self->lastTimestamp());
}

unsigned long QEventPoint_PressTimestamp(const QEventPoint* self) {
    return static_cast<unsigned long>(self->pressTimestamp());
}

double QEventPoint_TimeHeld(const QEventPoint* self) {
    return static_cast<double>(self->timeHeld());
}

double QEventPoint_Pressure(const QEventPoint* self) {
    return static_cast<double>(self->pressure());
}

double QEventPoint_Rotation(const QEventPoint* self) {
    return static_cast<double>(self->rotation());
}

QSizeF* QEventPoint_EllipseDiameters(const QEventPoint* self) {
    return new QSizeF(self->ellipseDiameters());
}

bool QEventPoint_IsAccepted(const QEventPoint* self) {
    return self->isAccepted();
}

void QEventPoint_SetAccepted(QEventPoint* self) {
    self->setAccepted();
}

void QEventPoint_SetAccepted1(QEventPoint* self, bool accepted) {
    self->setAccepted(accepted);
}

void QEventPoint_Delete(QEventPoint* self) {
    delete self;
}
