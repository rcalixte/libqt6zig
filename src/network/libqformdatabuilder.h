#pragma once
#ifndef SRC_NETWORKC_LIBQFORMDATABUILDER_H
#define SRC_NETWORKC_LIBQFORMDATABUILDER_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QFormDataBuilder QFormDataBuilder;
typedef struct QFormDataPartBuilder QFormDataPartBuilder;
typedef struct QHttpHeaders QHttpHeaders;
typedef struct QIODevice QIODevice;
#endif

QFormDataPartBuilder* QFormDataPartBuilder_new();
QFormDataPartBuilder* QFormDataPartBuilder_new2(const QFormDataPartBuilder* param1);
void QFormDataPartBuilder_Swap(QFormDataPartBuilder* self, QFormDataPartBuilder* other);
QFormDataPartBuilder* QFormDataPartBuilder_SetBody(QFormDataPartBuilder* self, QByteArrayView* data);
QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice(QFormDataPartBuilder* self, QIODevice* body);
QFormDataPartBuilder* QFormDataPartBuilder_SetHeaders(QFormDataPartBuilder* self, const QHttpHeaders* headers);
QFormDataPartBuilder* QFormDataPartBuilder_SetBody2(QFormDataPartBuilder* self, QByteArrayView* data, libqt_string fileName);
QFormDataPartBuilder* QFormDataPartBuilder_SetBody3(QFormDataPartBuilder* self, QByteArrayView* data, libqt_string fileName, libqt_string mimeType);
QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice2(QFormDataPartBuilder* self, QIODevice* body, libqt_string fileName);
QFormDataPartBuilder* QFormDataPartBuilder_SetBodyDevice3(QFormDataPartBuilder* self, QIODevice* body, libqt_string fileName, libqt_string mimeType);
void QFormDataPartBuilder_Delete(QFormDataPartBuilder* self);

QFormDataBuilder* QFormDataBuilder_new();
void QFormDataBuilder_Swap(QFormDataBuilder* self, QFormDataBuilder* other);
QFormDataPartBuilder* QFormDataBuilder_Part(QFormDataBuilder* self, libqt_string name);
void QFormDataBuilder_Delete(QFormDataBuilder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
