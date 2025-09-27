#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLTEXTURE_H
#define SRC_OPENGLC_LIBQOPENGLTEXTURE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QImage QImage;
typedef struct QOpenGLPixelTransferOptions QOpenGLPixelTransferOptions;
typedef struct QOpenGLTexture QOpenGLTexture;
#endif

QOpenGLTexture* QOpenGLTexture_new(int target);
QOpenGLTexture* QOpenGLTexture_new2(const QImage* image);
QOpenGLTexture* QOpenGLTexture_new3(const QImage* image, int genMipMaps);
int QOpenGLTexture_Target(const QOpenGLTexture* self);
bool QOpenGLTexture_Create(QOpenGLTexture* self);
void QOpenGLTexture_Destroy(QOpenGLTexture* self);
bool QOpenGLTexture_IsCreated(const QOpenGLTexture* self);
uint32_t QOpenGLTexture_TextureId(const QOpenGLTexture* self);
void QOpenGLTexture_Bind(QOpenGLTexture* self);
void QOpenGLTexture_Bind2(QOpenGLTexture* self, unsigned int unit);
void QOpenGLTexture_Release(QOpenGLTexture* self);
void QOpenGLTexture_Release2(QOpenGLTexture* self, unsigned int unit);
bool QOpenGLTexture_IsBound(const QOpenGLTexture* self);
bool QOpenGLTexture_IsBound2(QOpenGLTexture* self, unsigned int unit);
uint32_t QOpenGLTexture_BoundTextureId(int target);
uint32_t QOpenGLTexture_BoundTextureId2(unsigned int unit, int target);
void QOpenGLTexture_SetFormat(QOpenGLTexture* self, int format);
int QOpenGLTexture_Format(const QOpenGLTexture* self);
void QOpenGLTexture_SetSize(QOpenGLTexture* self, int width);
int QOpenGLTexture_Width(const QOpenGLTexture* self);
int QOpenGLTexture_Height(const QOpenGLTexture* self);
int QOpenGLTexture_Depth(const QOpenGLTexture* self);
void QOpenGLTexture_SetMipLevels(QOpenGLTexture* self, int levels);
int QOpenGLTexture_MipLevels(const QOpenGLTexture* self);
int QOpenGLTexture_MaximumMipLevels(const QOpenGLTexture* self);
void QOpenGLTexture_SetLayers(QOpenGLTexture* self, int layers);
int QOpenGLTexture_Layers(const QOpenGLTexture* self);
int QOpenGLTexture_Faces(const QOpenGLTexture* self);
void QOpenGLTexture_SetSamples(QOpenGLTexture* self, int samples);
int QOpenGLTexture_Samples(const QOpenGLTexture* self);
void QOpenGLTexture_SetFixedSamplePositions(QOpenGLTexture* self, bool fixed);
bool QOpenGLTexture_IsFixedSamplePositions(const QOpenGLTexture* self);
void QOpenGLTexture_AllocateStorage(QOpenGLTexture* self);
void QOpenGLTexture_AllocateStorage2(QOpenGLTexture* self, int pixelFormat, int pixelType);
bool QOpenGLTexture_IsStorageAllocated(const QOpenGLTexture* self);
QOpenGLTexture* QOpenGLTexture_CreateTextureView(const QOpenGLTexture* self, int target, int viewFormat, int minimumMipmapLevel, int maximumMipmapLevel, int minimumLayer, int maximumLayer);
bool QOpenGLTexture_IsTextureView(const QOpenGLTexture* self);
void QOpenGLTexture_SetData(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData2(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData3(QOpenGLTexture* self, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData4(QOpenGLTexture* self, int mipLevel, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData5(QOpenGLTexture* self, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData6(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData7(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData8(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData9(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetData10(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int layerCount, int sourceFormat, int sourceType, const void* data);
void QOpenGLTexture_SetCompressedData(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int dataSize, const void* data);
void QOpenGLTexture_SetCompressedData2(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int dataSize, const void* data);
void QOpenGLTexture_SetCompressedData3(QOpenGLTexture* self, int mipLevel, int layer, int dataSize, const void* data);
void QOpenGLTexture_SetCompressedData4(QOpenGLTexture* self, int mipLevel, int dataSize, const void* data);
void QOpenGLTexture_SetCompressedData5(QOpenGLTexture* self, int dataSize, const void* data);
void QOpenGLTexture_SetData11(QOpenGLTexture* self, const QImage* image);
bool QOpenGLTexture_HasFeature(int feature);
void QOpenGLTexture_SetMipBaseLevel(QOpenGLTexture* self, int baseLevel);
int QOpenGLTexture_MipBaseLevel(const QOpenGLTexture* self);
void QOpenGLTexture_SetMipMaxLevel(QOpenGLTexture* self, int maxLevel);
int QOpenGLTexture_MipMaxLevel(const QOpenGLTexture* self);
void QOpenGLTexture_SetMipLevelRange(QOpenGLTexture* self, int baseLevel, int maxLevel);
libqt_pair /* tuple of int and int */ QOpenGLTexture_MipLevelRange(const QOpenGLTexture* self);
void QOpenGLTexture_SetAutoMipMapGenerationEnabled(QOpenGLTexture* self, bool enabled);
bool QOpenGLTexture_IsAutoMipMapGenerationEnabled(const QOpenGLTexture* self);
void QOpenGLTexture_GenerateMipMaps(QOpenGLTexture* self);
void QOpenGLTexture_GenerateMipMaps2(QOpenGLTexture* self, int baseLevel);
void QOpenGLTexture_SetSwizzleMask(QOpenGLTexture* self, int component, int value);
void QOpenGLTexture_SetSwizzleMask2(QOpenGLTexture* self, int r, int g, int b, int a);
int QOpenGLTexture_SwizzleMask(const QOpenGLTexture* self, int component);
void QOpenGLTexture_SetDepthStencilMode(QOpenGLTexture* self, int mode);
int QOpenGLTexture_DepthStencilMode(const QOpenGLTexture* self);
void QOpenGLTexture_SetComparisonFunction(QOpenGLTexture* self, int function);
int QOpenGLTexture_ComparisonFunction(const QOpenGLTexture* self);
void QOpenGLTexture_SetComparisonMode(QOpenGLTexture* self, int mode);
int QOpenGLTexture_ComparisonMode(const QOpenGLTexture* self);
void QOpenGLTexture_SetMinificationFilter(QOpenGLTexture* self, int filter);
int QOpenGLTexture_MinificationFilter(const QOpenGLTexture* self);
void QOpenGLTexture_SetMagnificationFilter(QOpenGLTexture* self, int filter);
int QOpenGLTexture_MagnificationFilter(const QOpenGLTexture* self);
void QOpenGLTexture_SetMinMagFilters(QOpenGLTexture* self, int minificationFilter, int magnificationFilter);
libqt_pair /* tuple of int and int */ QOpenGLTexture_MinMagFilters(const QOpenGLTexture* self);
void QOpenGLTexture_SetMaximumAnisotropy(QOpenGLTexture* self, float anisotropy);
float QOpenGLTexture_MaximumAnisotropy(const QOpenGLTexture* self);
void QOpenGLTexture_SetWrapMode(QOpenGLTexture* self, int mode);
void QOpenGLTexture_SetWrapMode2(QOpenGLTexture* self, int direction, int mode);
int QOpenGLTexture_WrapMode(const QOpenGLTexture* self, int direction);
void QOpenGLTexture_SetBorderColor(QOpenGLTexture* self, const QColor* color);
void QOpenGLTexture_SetBorderColor2(QOpenGLTexture* self, float r, float g, float b, float a);
void QOpenGLTexture_SetBorderColor3(QOpenGLTexture* self, int r, int g, int b, int a);
void QOpenGLTexture_SetBorderColor4(QOpenGLTexture* self, unsigned int r, unsigned int g, unsigned int b, unsigned int a);
QColor* QOpenGLTexture_BorderColor(const QOpenGLTexture* self);
void QOpenGLTexture_BorderColor2(const QOpenGLTexture* self, float* border);
void QOpenGLTexture_BorderColor3(const QOpenGLTexture* self, int* border);
void QOpenGLTexture_BorderColor4(const QOpenGLTexture* self, unsigned int* border);
void QOpenGLTexture_SetMinimumLevelOfDetail(QOpenGLTexture* self, float value);
float QOpenGLTexture_MinimumLevelOfDetail(const QOpenGLTexture* self);
void QOpenGLTexture_SetMaximumLevelOfDetail(QOpenGLTexture* self, float value);
float QOpenGLTexture_MaximumLevelOfDetail(const QOpenGLTexture* self);
void QOpenGLTexture_SetLevelOfDetailRange(QOpenGLTexture* self, float min, float max);
libqt_pair /* tuple of float and float */ QOpenGLTexture_LevelOfDetailRange(const QOpenGLTexture* self);
void QOpenGLTexture_SetLevelofDetailBias(QOpenGLTexture* self, float bias);
float QOpenGLTexture_LevelofDetailBias(const QOpenGLTexture* self);
void QOpenGLTexture_Bind22(QOpenGLTexture* self, unsigned int unit, int reset);
void QOpenGLTexture_Release22(QOpenGLTexture* self, unsigned int unit, int reset);
void QOpenGLTexture_SetSize2(QOpenGLTexture* self, int width, int height);
void QOpenGLTexture_SetSize3(QOpenGLTexture* self, int width, int height, int depth);
void QOpenGLTexture_SetData72(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData82(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData62(QOpenGLTexture* self, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData52(QOpenGLTexture* self, int mipLevel, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData42(QOpenGLTexture* self, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData102(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData112(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData12(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData13(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData14(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int layerCount, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetCompressedData6(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetCompressedData7(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetCompressedData52(QOpenGLTexture* self, int mipLevel, int layer, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetCompressedData42(QOpenGLTexture* self, int mipLevel, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetCompressedData32(QOpenGLTexture* self, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options);
void QOpenGLTexture_SetData22(QOpenGLTexture* self, const QImage* image, int genMipMaps);
void QOpenGLTexture_GenerateMipMaps22(QOpenGLTexture* self, int baseLevel, bool resetBaseLevel);
void QOpenGLTexture_Delete(QOpenGLTexture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
