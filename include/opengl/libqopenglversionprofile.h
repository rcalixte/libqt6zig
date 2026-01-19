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

struct pair_int_int;

typedef struct pair_int_int pair_int_int;

#ifndef PAIR_INT_INT
#define PAIR_INT_INT
struct pair_int_int {
    int first;
    int second;
};
#endif

QOpenGLVersionProfile* QOpenGLVersionProfile_new();
QOpenGLVersionProfile* QOpenGLVersionProfile_new2(const QSurfaceFormat* format);
QOpenGLVersionProfile* QOpenGLVersionProfile_new3(const QOpenGLVersionProfile* other);
void QOpenGLVersionProfile_OperatorAssign(QOpenGLVersionProfile* self, const QOpenGLVersionProfile* rhs);
pair_int_int /* tuple of int and int */ QOpenGLVersionProfile_Version(const QOpenGLVersionProfile* self);
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
