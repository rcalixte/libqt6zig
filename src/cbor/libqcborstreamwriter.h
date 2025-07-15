#pragma once
#ifndef SRC_CBORC_LIBQCBORSTREAMWRITER_H
#define SRC_CBORC_LIBQCBORSTREAMWRITER_H

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
typedef struct QCborStreamWriter QCborStreamWriter;
typedef struct QIODevice QIODevice;
#endif

QCborStreamWriter* QCborStreamWriter_new(QIODevice* device);
void QCborStreamWriter_SetDevice(QCborStreamWriter* self, QIODevice* device);
QIODevice* QCborStreamWriter_Device(const QCborStreamWriter* self);
void QCborStreamWriter_Append(QCborStreamWriter* self, unsigned long long u);
void QCborStreamWriter_Append2(QCborStreamWriter* self, long long i);
void QCborStreamWriter_Append3(QCborStreamWriter* self, uint64_t n);
void QCborStreamWriter_Append4(QCborStreamWriter* self, const libqt_string ba);
void QCborStreamWriter_Append7(QCborStreamWriter* self, uint64_t tag);
void QCborStreamWriter_Append8(QCborStreamWriter* self, int tag);
void QCborStreamWriter_Append9(QCborStreamWriter* self, uint8_t st);
void QCborStreamWriter_Append12(QCborStreamWriter* self, float f);
void QCborStreamWriter_Append13(QCborStreamWriter* self, double d);
void QCborStreamWriter_AppendByteString(QCborStreamWriter* self, const char* data, ptrdiff_t lenVal);
void QCborStreamWriter_AppendTextString(QCborStreamWriter* self, const char* utf8, ptrdiff_t lenVal);
void QCborStreamWriter_Append14(QCborStreamWriter* self, bool b);
void QCborStreamWriter_AppendNull(QCborStreamWriter* self);
void QCborStreamWriter_AppendUndefined(QCborStreamWriter* self);
void QCborStreamWriter_Append15(QCborStreamWriter* self, int i);
void QCborStreamWriter_Append16(QCborStreamWriter* self, unsigned int u);
void QCborStreamWriter_Append17(QCborStreamWriter* self, const char* str);
void QCborStreamWriter_StartArray(QCborStreamWriter* self);
void QCborStreamWriter_StartArray2(QCborStreamWriter* self, unsigned long long count);
bool QCborStreamWriter_EndArray(QCborStreamWriter* self);
void QCborStreamWriter_StartMap(QCborStreamWriter* self);
void QCborStreamWriter_StartMap2(QCborStreamWriter* self, unsigned long long count);
bool QCborStreamWriter_EndMap(QCborStreamWriter* self);
void QCborStreamWriter_Append22(QCborStreamWriter* self, const char* str, ptrdiff_t size);
void QCborStreamWriter_Delete(QCborStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
