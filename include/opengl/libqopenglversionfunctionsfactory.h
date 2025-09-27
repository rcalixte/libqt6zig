#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLVERSIONFUNCTIONSFACTORY_H
#define SRC_OPENGLC_LIBQOPENGLVERSIONFUNCTIONSFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractOpenGLFunctions QAbstractOpenGLFunctions;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLVersionFunctionsFactory QOpenGLVersionFunctionsFactory;
typedef struct QOpenGLVersionProfile QOpenGLVersionProfile;
#endif

QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new(const QOpenGLVersionFunctionsFactory* other);
QOpenGLVersionFunctionsFactory* QOpenGLVersionFunctionsFactory_new2(QOpenGLVersionFunctionsFactory* other);
void QOpenGLVersionFunctionsFactory_CopyAssign(QOpenGLVersionFunctionsFactory* self, QOpenGLVersionFunctionsFactory* other);
void QOpenGLVersionFunctionsFactory_MoveAssign(QOpenGLVersionFunctionsFactory* self, QOpenGLVersionFunctionsFactory* other);
QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get();
QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get1(const QOpenGLVersionProfile* versionProfile);
QAbstractOpenGLFunctions* QOpenGLVersionFunctionsFactory_Get2(const QOpenGLVersionProfile* versionProfile, QOpenGLContext* context);
void QOpenGLVersionFunctionsFactory_Delete(QOpenGLVersionFunctionsFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
