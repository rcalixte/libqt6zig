#pragma once
#ifndef SRCC_LIBQRESOURCE_H
#define SRCC_LIBQRESOURCE_H

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
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QResource QResource;
#endif

#ifdef __cplusplus
typedef QResource::Compression Compression; // C++ enum
#else
typedef int Compression; // C ABI enum
#endif

QResource* QResource_new();
QResource* QResource_new2(const libqt_string file);
QResource* QResource_new3(const libqt_string file, const QLocale* locale);
void QResource_SetFileName(QResource* self, const libqt_string file);
libqt_string QResource_FileName(const QResource* self);
libqt_string QResource_AbsoluteFilePath(const QResource* self);
void QResource_SetLocale(QResource* self, const QLocale* locale);
QLocale* QResource_Locale(const QResource* self);
bool QResource_IsValid(const QResource* self);
int QResource_CompressionAlgorithm(const QResource* self);
long long QResource_Size(const QResource* self);
const unsigned char* QResource_Data(const QResource* self);
long long QResource_UncompressedSize(const QResource* self);
libqt_string QResource_UncompressedData(const QResource* self);
QDateTime* QResource_LastModified(const QResource* self);
bool QResource_RegisterResource(const libqt_string rccFilename);
bool QResource_UnregisterResource(const libqt_string rccFilename);
bool QResource_RegisterResourceWithRccData(const unsigned char* rccData);
bool QResource_UnregisterResourceWithRccData(const unsigned char* rccData);
bool QResource_RegisterResource2(const libqt_string rccFilename, const libqt_string resourceRoot);
bool QResource_UnregisterResource2(const libqt_string rccFilename, const libqt_string resourceRoot);
bool QResource_RegisterResource22(const unsigned char* rccData, const libqt_string resourceRoot);
bool QResource_UnregisterResource22(const unsigned char* rccData, const libqt_string resourceRoot);
void QResource_Delete(QResource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
