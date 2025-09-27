#pragma once
#ifndef SRCC_LIBQOPENGLCONTEXT_PLATFORM_H
#define SRCC_LIBQOPENGLCONTEXT_PLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QEGLContext)
typedef QNativeInterface::QEGLContext QNativeInterface__QEGLContext;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QGLXContext)
typedef QNativeInterface::QGLXContext QNativeInterface__QGLXContext;
#endif
#else
typedef struct QNativeInterface__QEGLContext QNativeInterface__QEGLContext;
typedef struct QNativeInterface__QGLXContext QNativeInterface__QGLXContext;
typedef struct QOpenGLContext QOpenGLContext;
#endif

QOpenGLContext* QNativeInterface__QEGLContext_FromNative(void* context, void* display);
void* QNativeInterface__QEGLContext_NativeContext(const QNativeInterface__QEGLContext* self);
void* QNativeInterface__QEGLContext_Config(const QNativeInterface__QEGLContext* self);
void* QNativeInterface__QEGLContext_Display(const QNativeInterface__QEGLContext* self);
void QNativeInterface__QEGLContext_InvalidateContext(QNativeInterface__QEGLContext* self);
QOpenGLContext* QNativeInterface__QEGLContext_FromNative3(void* context, void* display, QOpenGLContext* shareContext);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
