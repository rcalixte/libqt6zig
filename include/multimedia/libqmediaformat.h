#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQMEDIAFORMAT_H
#define SRC_MULTIMEDIAC_LIBQMEDIAFORMAT_H

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
typedef struct QMediaFormat QMediaFormat;
typedef struct QMimeType QMimeType;
#endif

#ifdef __cplusplus
typedef QMediaFormat::AudioCodec AudioCodec;         // C++ enum
typedef QMediaFormat::ConversionMode ConversionMode; // C++ enum
typedef QMediaFormat::FileFormat FileFormat;         // C++ enum
typedef QMediaFormat::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QMediaFormat::ResolveFlags ResolveFlags;     // C++ enum
typedef QMediaFormat::VideoCodec VideoCodec;         // C++ enum
#else
typedef int AudioCodec;      // C ABI enum
typedef int ConversionMode;  // C ABI enum
typedef int FileFormat;      // C ABI enum
typedef int ResolveFlags;    // C ABI enum
typedef int VideoCodec;      // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QMediaFormat* QMediaFormat_new();
QMediaFormat* QMediaFormat_new2(QMediaFormat* other);
QMediaFormat* QMediaFormat_new3(int format);
void QMediaFormat_OperatorAssign(QMediaFormat* self, QMediaFormat* other);
void QMediaFormat_Swap(QMediaFormat* self, QMediaFormat* other);
int QMediaFormat_FileFormat(const QMediaFormat* self);
void QMediaFormat_SetFileFormat(QMediaFormat* self, int f);
void QMediaFormat_SetVideoCodec(QMediaFormat* self, int codec);
int QMediaFormat_VideoCodec(const QMediaFormat* self);
void QMediaFormat_SetAudioCodec(QMediaFormat* self, int codec);
int QMediaFormat_AudioCodec(const QMediaFormat* self);
bool QMediaFormat_IsSupported(const QMediaFormat* self, int mode);
QMimeType* QMediaFormat_MimeType(const QMediaFormat* self);
libqt_list /* of int */ QMediaFormat_SupportedFileFormats(QMediaFormat* self, int m);
libqt_list /* of int */ QMediaFormat_SupportedVideoCodecs(QMediaFormat* self, int m);
libqt_list /* of int */ QMediaFormat_SupportedAudioCodecs(QMediaFormat* self, int m);
libqt_string QMediaFormat_FileFormatName(int fileFormat);
libqt_string QMediaFormat_AudioCodecName(int codec);
libqt_string QMediaFormat_VideoCodecName(int codec);
libqt_string QMediaFormat_FileFormatDescription(int fileFormat);
libqt_string QMediaFormat_AudioCodecDescription(int codec);
libqt_string QMediaFormat_VideoCodecDescription(int codec);
bool QMediaFormat_OperatorEqual(const QMediaFormat* self, QMediaFormat* other);
bool QMediaFormat_OperatorNotEqual(const QMediaFormat* self, QMediaFormat* other);
void QMediaFormat_ResolveForEncoding(QMediaFormat* self, int flags);
void QMediaFormat_Delete(QMediaFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
