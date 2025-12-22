#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOMANEUVER_H
#define SRC_LOCATIONC_LIBQGEOMANEUVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoManeuver QGeoManeuver;
typedef struct QVariant QVariant;
#endif

QGeoManeuver* QGeoManeuver_new();
QGeoManeuver* QGeoManeuver_new2(const QGeoManeuver* other);
void QGeoManeuver_OperatorAssign(QGeoManeuver* self, const QGeoManeuver* other);
void QGeoManeuver_Swap(QGeoManeuver* self, QGeoManeuver* other);
bool QGeoManeuver_IsValid(const QGeoManeuver* self);
void QGeoManeuver_SetPosition(QGeoManeuver* self, const QGeoCoordinate* position);
QGeoCoordinate* QGeoManeuver_Position(const QGeoManeuver* self);
void QGeoManeuver_SetInstructionText(QGeoManeuver* self, const libqt_string instructionText);
libqt_string QGeoManeuver_InstructionText(const QGeoManeuver* self);
void QGeoManeuver_SetDirection(QGeoManeuver* self, int direction);
int QGeoManeuver_Direction(const QGeoManeuver* self);
void QGeoManeuver_SetTimeToNextInstruction(QGeoManeuver* self, int secs);
int QGeoManeuver_TimeToNextInstruction(const QGeoManeuver* self);
void QGeoManeuver_SetDistanceToNextInstruction(QGeoManeuver* self, double distance);
double QGeoManeuver_DistanceToNextInstruction(const QGeoManeuver* self);
void QGeoManeuver_SetWaypoint(QGeoManeuver* self, const QGeoCoordinate* coordinate);
QGeoCoordinate* QGeoManeuver_Waypoint(const QGeoManeuver* self);
void QGeoManeuver_SetExtendedAttributes(QGeoManeuver* self, const libqt_map /* of libqt_string to QVariant* */ extendedAttributes);
libqt_map /* of libqt_string to QVariant* */ QGeoManeuver_ExtendedAttributes(const QGeoManeuver* self);
void QGeoManeuver_Delete(QGeoManeuver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
