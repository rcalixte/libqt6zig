#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLVERSIONPROFILE_H
#define SRC_OPENGLC_LIBQOPENGLVERSIONPROFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QOpenGLVersionProfile QOpenGLVersionProfile;
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

QOpenGLVersionProfile* QOpenGLVersionProfile_new();
QOpenGLVersionProfile* QOpenGLVersionProfile_new2(const QSurfaceFormat* format);
QOpenGLVersionProfile* QOpenGLVersionProfile_new3(const QOpenGLVersionProfile* other);
void QOpenGLVersionProfile_OperatorAssign(QOpenGLVersionProfile* self, const QOpenGLVersionProfile* rhs);
libqt_pair /* tuple of int and int */ QOpenGLVersionProfile_Version(const QOpenGLVersionProfile* self);
void QOpenGLVersionProfile_SetVersion(QOpenGLVersionProfile* self, int majorVersion, int minorVersion);
int QOpenGLVersionProfile_Profile(const QOpenGLVersionProfile* self);
void QOpenGLVersionProfile_SetProfile(QOpenGLVersionProfile* self, int profile);
bool QOpenGLVersionProfile_HasProfiles(const QOpenGLVersionProfile* self);
bool QOpenGLVersionProfile_IsLegacyVersion(const QOpenGLVersionProfile* self);
bool QOpenGLVersionProfile_IsValid(const QOpenGLVersionProfile* self);
void QOpenGLVersionProfile_Delete(QOpenGLVersionProfile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
