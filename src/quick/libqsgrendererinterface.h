#pragma once
#ifndef QUICK_LIBQSGRENDERERINTERFACE_H
#define QUICK_LIBQSGRENDERERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQuickWindow QQuickWindow;
typedef struct QSGRendererInterface QSGRendererInterface;
#endif

int QSGRendererInterface_GraphicsApi(const QSGRendererInterface* self);
void* QSGRendererInterface_GetResource(const QSGRendererInterface* self, QQuickWindow* window, int resource);
void* QSGRendererInterface_GetResource2(const QSGRendererInterface* self, QQuickWindow* window, const char* resource);
int QSGRendererInterface_ShaderType(const QSGRendererInterface* self);
int QSGRendererInterface_ShaderCompilationType(const QSGRendererInterface* self);
int QSGRendererInterface_ShaderSourceType(const QSGRendererInterface* self);
bool QSGRendererInterface_IsApiRhiBased(int api);
void QSGRendererInterface_OperatorAssign(QSGRendererInterface* self, const QSGRendererInterface* param1);
void QSGRendererInterface_Delete(QSGRendererInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
