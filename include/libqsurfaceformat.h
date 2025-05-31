#pragma once
#ifndef SRCC_LIBQSURFACEFORMAT_H
#define SRCC_LIBQSURFACEFORMAT_H

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
typedef struct QColorSpace QColorSpace;
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

#ifdef __cplusplus
typedef QSurfaceFormat::ColorSpace ColorSpace;                     // C++ enum
typedef QSurfaceFormat::FormatOption FormatOption;                 // C++ enum
typedef QSurfaceFormat::FormatOptions FormatOptions;               // C++ QFlags
typedef QSurfaceFormat::OpenGLContextProfile OpenGLContextProfile; // C++ enum
typedef QSurfaceFormat::QtGadgetHelper QtGadgetHelper;             // C++ QFlags
typedef QSurfaceFormat::RenderableType RenderableType;             // C++ enum
typedef QSurfaceFormat::SwapBehavior SwapBehavior;                 // C++ enum
#else
typedef int ColorSpace;           // C ABI enum
typedef int FormatOption;         // C ABI enum
typedef int FormatOptions;        // C ABI QFlags
typedef int OpenGLContextProfile; // C ABI enum
typedef int RenderableType;       // C ABI enum
typedef int SwapBehavior;         // C ABI enum
typedef void QtGadgetHelper;      // C ABI QFlags
#endif

QSurfaceFormat* QSurfaceFormat_new();
QSurfaceFormat* QSurfaceFormat_new2(int options);
QSurfaceFormat* QSurfaceFormat_new3(const QSurfaceFormat* other);
void QSurfaceFormat_OperatorAssign(QSurfaceFormat* self, const QSurfaceFormat* other);
void QSurfaceFormat_SetDepthBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_DepthBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetStencilBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_StencilBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetRedBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_RedBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetGreenBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_GreenBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetBlueBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_BlueBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetAlphaBufferSize(QSurfaceFormat* self, int size);
int QSurfaceFormat_AlphaBufferSize(const QSurfaceFormat* self);
void QSurfaceFormat_SetSamples(QSurfaceFormat* self, int numSamples);
int QSurfaceFormat_Samples(const QSurfaceFormat* self);
void QSurfaceFormat_SetSwapBehavior(QSurfaceFormat* self, int behavior);
int QSurfaceFormat_SwapBehavior(const QSurfaceFormat* self);
bool QSurfaceFormat_HasAlpha(const QSurfaceFormat* self);
void QSurfaceFormat_SetProfile(QSurfaceFormat* self, int profile);
int QSurfaceFormat_Profile(const QSurfaceFormat* self);
void QSurfaceFormat_SetRenderableType(QSurfaceFormat* self, int typeVal);
int QSurfaceFormat_RenderableType(const QSurfaceFormat* self);
void QSurfaceFormat_SetMajorVersion(QSurfaceFormat* self, int majorVersion);
int QSurfaceFormat_MajorVersion(const QSurfaceFormat* self);
void QSurfaceFormat_SetMinorVersion(QSurfaceFormat* self, int minorVersion);
int QSurfaceFormat_MinorVersion(const QSurfaceFormat* self);
libqt_pair /* tuple of int and int */ QSurfaceFormat_Version(const QSurfaceFormat* self);
void QSurfaceFormat_SetVersion(QSurfaceFormat* self, int major, int minor);
bool QSurfaceFormat_Stereo(const QSurfaceFormat* self);
void QSurfaceFormat_SetStereo(QSurfaceFormat* self, bool enable);
void QSurfaceFormat_SetOptions(QSurfaceFormat* self, int options);
void QSurfaceFormat_SetOption(QSurfaceFormat* self, int option);
bool QSurfaceFormat_TestOption(const QSurfaceFormat* self, int option);
int QSurfaceFormat_Options(const QSurfaceFormat* self);
int QSurfaceFormat_SwapInterval(const QSurfaceFormat* self);
void QSurfaceFormat_SetSwapInterval(QSurfaceFormat* self, int interval);
QColorSpace* QSurfaceFormat_ColorSpace(const QSurfaceFormat* self);
void QSurfaceFormat_SetColorSpace(QSurfaceFormat* self, const QColorSpace* colorSpace);
void QSurfaceFormat_SetColorSpaceWithColorSpace(QSurfaceFormat* self, int colorSpace);
void QSurfaceFormat_SetDefaultFormat(const QSurfaceFormat* format);
QSurfaceFormat* QSurfaceFormat_DefaultFormat();
void QSurfaceFormat_SetOption2(QSurfaceFormat* self, int option, bool on);
void QSurfaceFormat_Delete(QSurfaceFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
