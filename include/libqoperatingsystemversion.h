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
typedef struct QVersionNumber QVersionNumber;
#endif

#ifdef __cplusplus
typedef QOperatingSystemVersionBase::OSType OSType; // C++ enum
#else
typedef int OSType; // C ABI enum
#endif

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(int osType, int vmajor);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(QOperatingSystemVersionBase* param1);
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

QOperatingSystemVersion* QOperatingSystemVersion_new(QOperatingSystemVersionBase* osversion);
QOperatingSystemVersion* QOperatingSystemVersion_new2(int osType, int vmajor);
QOperatingSystemVersion* QOperatingSystemVersion_new3(QOperatingSystemVersion* param1);
QOperatingSystemVersion* QOperatingSystemVersion_new4(int osType, int vmajor, int vminor);
QOperatingSystemVersion* QOperatingSystemVersion_new5(int osType, int vmajor, int vminor, int vmicro);
QOperatingSystemVersion* QOperatingSystemVersion_Current();
int QOperatingSystemVersion_CurrentType();
QVersionNumber* QOperatingSystemVersion_Version(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_MajorVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_MinorVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_MicroVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_SegmentCount(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_Type(const QOperatingSystemVersion* self);
libqt_string QOperatingSystemVersion_Name(const QOperatingSystemVersion* self);
void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
