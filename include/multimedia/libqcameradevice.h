#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQCAMERADEVICE_H
#define SRC_MULTIMEDIAC_LIBQCAMERADEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCameraDevice QCameraDevice;
typedef struct QCameraFormat QCameraFormat;
typedef struct QSize QSize;
#endif

QCameraFormat* QCameraFormat_new();
QCameraFormat* QCameraFormat_new2(const QCameraFormat* other);
void QCameraFormat_OperatorAssign(QCameraFormat* self, const QCameraFormat* other);
int QCameraFormat_PixelFormat(const QCameraFormat* self);
QSize* QCameraFormat_Resolution(const QCameraFormat* self);
float QCameraFormat_MinFrameRate(const QCameraFormat* self);
float QCameraFormat_MaxFrameRate(const QCameraFormat* self);
bool QCameraFormat_IsNull(const QCameraFormat* self);
bool QCameraFormat_OperatorEqual(const QCameraFormat* self, const QCameraFormat* other);
bool QCameraFormat_OperatorNotEqual(const QCameraFormat* self, const QCameraFormat* other);
void QCameraFormat_Delete(QCameraFormat* self);

QCameraDevice* QCameraDevice_new();
QCameraDevice* QCameraDevice_new2(const QCameraDevice* other);
void QCameraDevice_OperatorAssign(QCameraDevice* self, const QCameraDevice* other);
bool QCameraDevice_OperatorEqual(const QCameraDevice* self, const QCameraDevice* other);
bool QCameraDevice_OperatorNotEqual(const QCameraDevice* self, const QCameraDevice* other);
bool QCameraDevice_IsNull(const QCameraDevice* self);
libqt_string QCameraDevice_Id(const QCameraDevice* self);
libqt_string QCameraDevice_Description(const QCameraDevice* self);
bool QCameraDevice_IsDefault(const QCameraDevice* self);
int QCameraDevice_Position(const QCameraDevice* self);
libqt_list /* of QSize* */ QCameraDevice_PhotoResolutions(const QCameraDevice* self);
libqt_list /* of QCameraFormat* */ QCameraDevice_VideoFormats(const QCameraDevice* self);
int QCameraDevice_CorrectionAngle(const QCameraDevice* self);
void QCameraDevice_Delete(QCameraDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
