#pragma once
#ifndef SRCC_LIBQIMAGEWRITER_H
#define SRCC_LIBQIMAGEWRITER_H

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
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageWriter QImageWriter;
#endif

QImageWriter* QImageWriter_new();
QImageWriter* QImageWriter_new2(QIODevice* device, const libqt_string format);
QImageWriter* QImageWriter_new3(const libqt_string fileName);
QImageWriter* QImageWriter_new4(const libqt_string fileName, const libqt_string format);
libqt_string QImageWriter_Tr(const char* sourceText);
void QImageWriter_SetFormat(QImageWriter* self, const libqt_string format);
libqt_string QImageWriter_Format(const QImageWriter* self);
void QImageWriter_SetDevice(QImageWriter* self, QIODevice* device);
QIODevice* QImageWriter_Device(const QImageWriter* self);
void QImageWriter_SetFileName(QImageWriter* self, const libqt_string fileName);
libqt_string QImageWriter_FileName(const QImageWriter* self);
void QImageWriter_SetQuality(QImageWriter* self, int quality);
int QImageWriter_Quality(const QImageWriter* self);
void QImageWriter_SetCompression(QImageWriter* self, int compression);
int QImageWriter_Compression(const QImageWriter* self);
void QImageWriter_SetSubType(QImageWriter* self, const libqt_string typeVal);
libqt_string QImageWriter_SubType(const QImageWriter* self);
libqt_list /* of libqt_string */ QImageWriter_SupportedSubTypes(const QImageWriter* self);
void QImageWriter_SetOptimizedWrite(QImageWriter* self, bool optimize);
bool QImageWriter_OptimizedWrite(const QImageWriter* self);
void QImageWriter_SetProgressiveScanWrite(QImageWriter* self, bool progressive);
bool QImageWriter_ProgressiveScanWrite(const QImageWriter* self);
int QImageWriter_Transformation(const QImageWriter* self);
void QImageWriter_SetTransformation(QImageWriter* self, int orientation);
void QImageWriter_SetText(QImageWriter* self, const libqt_string key, const libqt_string text);
bool QImageWriter_CanWrite(const QImageWriter* self);
bool QImageWriter_Write(QImageWriter* self, const QImage* image);
int QImageWriter_Error(const QImageWriter* self);
libqt_string QImageWriter_ErrorString(const QImageWriter* self);
bool QImageWriter_SupportsOption(const QImageWriter* self, int option);
libqt_list /* of libqt_string */ QImageWriter_SupportedImageFormats();
libqt_list /* of libqt_string */ QImageWriter_SupportedMimeTypes();
libqt_list /* of libqt_string */ QImageWriter_ImageFormatsForMimeType(const libqt_string mimeType);
libqt_string QImageWriter_Tr2(const char* sourceText, const char* disambiguation);
libqt_string QImageWriter_Tr3(const char* sourceText, const char* disambiguation, int n);
void QImageWriter_Delete(QImageWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
