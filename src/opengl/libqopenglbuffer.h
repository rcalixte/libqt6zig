#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLBUFFER_H
#define SRC_OPENGLC_LIBQOPENGLBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QOpenGLBuffer QOpenGLBuffer;
#endif

QOpenGLBuffer* QOpenGLBuffer_new();
QOpenGLBuffer* QOpenGLBuffer_new2(int typeVal);
QOpenGLBuffer* QOpenGLBuffer_new3(const QOpenGLBuffer* other);
void QOpenGLBuffer_OperatorAssign(QOpenGLBuffer* self, const QOpenGLBuffer* other);
void QOpenGLBuffer_Swap(QOpenGLBuffer* self, QOpenGLBuffer* other);
int QOpenGLBuffer_Type(const QOpenGLBuffer* self);
int QOpenGLBuffer_UsagePattern(const QOpenGLBuffer* self);
void QOpenGLBuffer_SetUsagePattern(QOpenGLBuffer* self, int value);
bool QOpenGLBuffer_Create(QOpenGLBuffer* self);
bool QOpenGLBuffer_IsCreated(const QOpenGLBuffer* self);
void QOpenGLBuffer_Destroy(QOpenGLBuffer* self);
bool QOpenGLBuffer_Bind(QOpenGLBuffer* self);
void QOpenGLBuffer_Release(QOpenGLBuffer* self);
void QOpenGLBuffer_Release2(int typeVal);
uint32_t QOpenGLBuffer_BufferId(const QOpenGLBuffer* self);
int QOpenGLBuffer_Size(const QOpenGLBuffer* self);
bool QOpenGLBuffer_Read(QOpenGLBuffer* self, int offset, void* data, int count);
void QOpenGLBuffer_Write(QOpenGLBuffer* self, int offset, const void* data, int count);
void QOpenGLBuffer_Allocate(QOpenGLBuffer* self, const void* data, int count);
void QOpenGLBuffer_Allocate2(QOpenGLBuffer* self, int count);
void* QOpenGLBuffer_Map(QOpenGLBuffer* self, int access);
void* QOpenGLBuffer_MapRange(QOpenGLBuffer* self, int offset, int count, int access);
bool QOpenGLBuffer_Unmap(QOpenGLBuffer* self);
void QOpenGLBuffer_Delete(QOpenGLBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
