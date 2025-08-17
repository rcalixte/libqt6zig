#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQABSTRACTVIDEOBUFFER_H
#define SRC_MULTIMEDIAC_LIBQABSTRACTVIDEOBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractVideoBuffer__MapData)
typedef QAbstractVideoBuffer::MapData QAbstractVideoBuffer__MapData;
#endif
#else
typedef struct QAbstractVideoBuffer QAbstractVideoBuffer;
typedef struct QAbstractVideoBuffer__MapData QAbstractVideoBuffer__MapData;
typedef struct QVideoFrameFormat QVideoFrameFormat;
#endif

void QAbstractVideoBuffer_Unmap(QAbstractVideoBuffer* self);
QVideoFrameFormat* QAbstractVideoBuffer_Format(const QAbstractVideoBuffer* self);
void QAbstractVideoBuffer_Delete(QAbstractVideoBuffer* self);

QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new(const QAbstractVideoBuffer__MapData* other);
QAbstractVideoBuffer__MapData* QAbstractVideoBuffer__MapData_new2(QAbstractVideoBuffer__MapData* other);
void QAbstractVideoBuffer__MapData_CopyAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other);
void QAbstractVideoBuffer__MapData_MoveAssign(QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other);
void QAbstractVideoBuffer__MapData_Delete(QAbstractVideoBuffer__MapData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
