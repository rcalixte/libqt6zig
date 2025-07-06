#pragma once
#ifndef SRCC_LIBQOPERATINGSYSTEMVERSION_H
#define SRCC_LIBQOPERATINGSYSTEMVERSION_H

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
typedef struct QOperatingSystemVersion QOperatingSystemVersion;
typedef struct QOperatingSystemVersionBase QOperatingSystemVersionBase;
typedef struct QOperatingSystemVersionUnexported QOperatingSystemVersionUnexported;
typedef struct QVersionNumber QVersionNumber;
#endif

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(int osType, int vmajor);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(const QOperatingSystemVersionBase* param1);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new3(int osType, int vmajor, int vminor);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new4(int osType, int vmajor, int vminor, int vmicro);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_Current();
libqt_string QOperatingSystemVersionBase_Name(QOperatingSystemVersionBase* osversion);
int QOperatingSystemVersionBase_CurrentType();
QVersionNumber* QOperatingSystemVersionBase_Version(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_MajorVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_MinorVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_MicroVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_SegmentCount(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_Type(const QOperatingSystemVersionBase* self);
libqt_string QOperatingSystemVersionBase_Name2(const QOperatingSystemVersionBase* self);
void QOperatingSystemVersionBase_Delete(QOperatingSystemVersionBase* self);

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new(QOperatingSystemVersionBase* other);
QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new2();
QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new3(const QOperatingSystemVersionUnexported* param1);
void QOperatingSystemVersionUnexported_Delete(QOperatingSystemVersionUnexported* self);

QOperatingSystemVersion* QOperatingSystemVersion_new(const QOperatingSystemVersionBase* osversion);
QOperatingSystemVersion* QOperatingSystemVersion_new2(int osType, int vmajor);
QOperatingSystemVersion* QOperatingSystemVersion_new3(const QOperatingSystemVersion* param1);
QOperatingSystemVersion* QOperatingSystemVersion_new4(int osType, int vmajor, int vminor);
QOperatingSystemVersion* QOperatingSystemVersion_new5(int osType, int vmajor, int vminor, int vmicro);
int QOperatingSystemVersion_CurrentType();
int QOperatingSystemVersion_Type(const QOperatingSystemVersion* self);
void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
