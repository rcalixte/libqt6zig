#include <QColor>
#include <QImage>
#include <QOpenGLPixelTransferOptions>
#include <QOpenGLTexture>
#include <QPair>
#include <qopengltexture.h>
#include "libqopengltexture.h"
#include "libqopengltexture.hxx"

QOpenGLTexture* QOpenGLTexture_new(int target) {
    return new QOpenGLTexture(static_cast<QOpenGLTexture::Target>(target));
}

QOpenGLTexture* QOpenGLTexture_new2(const QImage* image) {
    return new QOpenGLTexture(*image);
}

QOpenGLTexture* QOpenGLTexture_new3(const QImage* image, int genMipMaps) {
    return new QOpenGLTexture(*image, static_cast<QOpenGLTexture::MipMapGeneration>(genMipMaps));
}

int QOpenGLTexture_Target(const QOpenGLTexture* self) {
    return static_cast<int>(self->target());
}

bool QOpenGLTexture_Create(QOpenGLTexture* self) {
    return self->create();
}

void QOpenGLTexture_Destroy(QOpenGLTexture* self) {
    self->destroy();
}

bool QOpenGLTexture_IsCreated(const QOpenGLTexture* self) {
    return self->isCreated();
}

uint32_t QOpenGLTexture_TextureId(const QOpenGLTexture* self) {
    return self->textureId();
}

void QOpenGLTexture_Bind(QOpenGLTexture* self) {
    self->bind();
}

void QOpenGLTexture_Bind2(QOpenGLTexture* self, unsigned int unit) {
    self->bind(static_cast<uint>(unit));
}

void QOpenGLTexture_Release(QOpenGLTexture* self) {
    self->release();
}

void QOpenGLTexture_Release2(QOpenGLTexture* self, unsigned int unit) {
    self->release(static_cast<uint>(unit));
}

bool QOpenGLTexture_IsBound(const QOpenGLTexture* self) {
    return self->isBound();
}

bool QOpenGLTexture_IsBound2(QOpenGLTexture* self, unsigned int unit) {
    return self->isBound(static_cast<uint>(unit));
}

uint32_t QOpenGLTexture_BoundTextureId(int target) {
    return QOpenGLTexture::boundTextureId(static_cast<QOpenGLTexture::BindingTarget>(target));
}

uint32_t QOpenGLTexture_BoundTextureId2(unsigned int unit, int target) {
    return QOpenGLTexture::boundTextureId(static_cast<uint>(unit), static_cast<QOpenGLTexture::BindingTarget>(target));
}

void QOpenGLTexture_SetFormat(QOpenGLTexture* self, int format) {
    self->setFormat(static_cast<QOpenGLTexture::TextureFormat>(format));
}

int QOpenGLTexture_Format(const QOpenGLTexture* self) {
    return static_cast<int>(self->format());
}

void QOpenGLTexture_SetSize(QOpenGLTexture* self, int width) {
    self->setSize(static_cast<int>(width));
}

int QOpenGLTexture_Width(const QOpenGLTexture* self) {
    return self->width();
}

int QOpenGLTexture_Height(const QOpenGLTexture* self) {
    return self->height();
}

int QOpenGLTexture_Depth(const QOpenGLTexture* self) {
    return self->depth();
}

void QOpenGLTexture_SetMipLevels(QOpenGLTexture* self, int levels) {
    self->setMipLevels(static_cast<int>(levels));
}

int QOpenGLTexture_MipLevels(const QOpenGLTexture* self) {
    return self->mipLevels();
}

int QOpenGLTexture_MaximumMipLevels(const QOpenGLTexture* self) {
    return self->maximumMipLevels();
}

void QOpenGLTexture_SetLayers(QOpenGLTexture* self, int layers) {
    self->setLayers(static_cast<int>(layers));
}

int QOpenGLTexture_Layers(const QOpenGLTexture* self) {
    return self->layers();
}

int QOpenGLTexture_Faces(const QOpenGLTexture* self) {
    return self->faces();
}

void QOpenGLTexture_SetSamples(QOpenGLTexture* self, int samples) {
    self->setSamples(static_cast<int>(samples));
}

int QOpenGLTexture_Samples(const QOpenGLTexture* self) {
    return self->samples();
}

void QOpenGLTexture_SetFixedSamplePositions(QOpenGLTexture* self, bool fixed) {
    self->setFixedSamplePositions(fixed);
}

bool QOpenGLTexture_IsFixedSamplePositions(const QOpenGLTexture* self) {
    return self->isFixedSamplePositions();
}

void QOpenGLTexture_AllocateStorage(QOpenGLTexture* self) {
    self->allocateStorage();
}

void QOpenGLTexture_AllocateStorage2(QOpenGLTexture* self, int pixelFormat, int pixelType) {
    self->allocateStorage(static_cast<QOpenGLTexture::PixelFormat>(pixelFormat), static_cast<QOpenGLTexture::PixelType>(pixelType));
}

bool QOpenGLTexture_IsStorageAllocated(const QOpenGLTexture* self) {
    return self->isStorageAllocated();
}

QOpenGLTexture* QOpenGLTexture_CreateTextureView(const QOpenGLTexture* self, int target, int viewFormat, int minimumMipmapLevel, int maximumMipmapLevel, int minimumLayer, int maximumLayer) {
    return self->createTextureView(static_cast<QOpenGLTexture::Target>(target), static_cast<QOpenGLTexture::TextureFormat>(viewFormat), static_cast<int>(minimumMipmapLevel), static_cast<int>(maximumMipmapLevel), static_cast<int>(minimumLayer), static_cast<int>(maximumLayer));
}

bool QOpenGLTexture_IsTextureView(const QOpenGLTexture* self) {
    return self->isTextureView();
}

void QOpenGLTexture_SetData(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData2(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<int>(layerCount), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData3(QOpenGLTexture* self, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData4(QOpenGLTexture* self, int mipLevel, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(mipLevel), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData5(QOpenGLTexture* self, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData6(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData7(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData8(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData9(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetData10(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int layerCount, int sourceFormat, int sourceType, const void* data) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<int>(layerCount), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data);
}

void QOpenGLTexture_SetCompressedData(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int dataSize, const void* data) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<int>(dataSize), data);
}

void QOpenGLTexture_SetCompressedData2(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int dataSize, const void* data) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<int>(layerCount), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<int>(dataSize), data);
}

void QOpenGLTexture_SetCompressedData3(QOpenGLTexture* self, int mipLevel, int layer, int dataSize, const void* data) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<int>(dataSize), data);
}

void QOpenGLTexture_SetCompressedData4(QOpenGLTexture* self, int mipLevel, int dataSize, const void* data) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(dataSize), data);
}

void QOpenGLTexture_SetCompressedData5(QOpenGLTexture* self, int dataSize, const void* data) {
    self->setCompressedData(static_cast<int>(dataSize), data);
}

void QOpenGLTexture_SetData11(QOpenGLTexture* self, const QImage* image) {
    self->setData(*image);
}

bool QOpenGLTexture_HasFeature(int feature) {
    return QOpenGLTexture::hasFeature(static_cast<QOpenGLTexture::Feature>(feature));
}

void QOpenGLTexture_SetMipBaseLevel(QOpenGLTexture* self, int baseLevel) {
    self->setMipBaseLevel(static_cast<int>(baseLevel));
}

int QOpenGLTexture_MipBaseLevel(const QOpenGLTexture* self) {
    return self->mipBaseLevel();
}

void QOpenGLTexture_SetMipMaxLevel(QOpenGLTexture* self, int maxLevel) {
    self->setMipMaxLevel(static_cast<int>(maxLevel));
}

int QOpenGLTexture_MipMaxLevel(const QOpenGLTexture* self) {
    return self->mipMaxLevel();
}

void QOpenGLTexture_SetMipLevelRange(QOpenGLTexture* self, int baseLevel, int maxLevel) {
    self->setMipLevelRange(static_cast<int>(baseLevel), static_cast<int>(maxLevel));
}

libqt_pair /* tuple of int and int */ QOpenGLTexture_MipLevelRange(const QOpenGLTexture* self) {
    QPair<int, int> _ret = self->mipLevelRange();
    // Convert QPair<> from C++ memory to manually-managed C memory
    int* _first = static_cast<int*>(malloc(sizeof(int)));
    int* _second = static_cast<int*>(malloc(sizeof(int)));
    *_first = _ret.first;
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

void QOpenGLTexture_SetAutoMipMapGenerationEnabled(QOpenGLTexture* self, bool enabled) {
    self->setAutoMipMapGenerationEnabled(enabled);
}

bool QOpenGLTexture_IsAutoMipMapGenerationEnabled(const QOpenGLTexture* self) {
    return self->isAutoMipMapGenerationEnabled();
}

void QOpenGLTexture_GenerateMipMaps(QOpenGLTexture* self) {
    self->generateMipMaps();
}

void QOpenGLTexture_GenerateMipMaps2(QOpenGLTexture* self, int baseLevel) {
    self->generateMipMaps(static_cast<int>(baseLevel));
}

void QOpenGLTexture_SetSwizzleMask(QOpenGLTexture* self, int component, int value) {
    self->setSwizzleMask(static_cast<QOpenGLTexture::SwizzleComponent>(component), static_cast<QOpenGLTexture::SwizzleValue>(value));
}

void QOpenGLTexture_SetSwizzleMask2(QOpenGLTexture* self, int r, int g, int b, int a) {
    self->setSwizzleMask(static_cast<QOpenGLTexture::SwizzleValue>(r), static_cast<QOpenGLTexture::SwizzleValue>(g), static_cast<QOpenGLTexture::SwizzleValue>(b), static_cast<QOpenGLTexture::SwizzleValue>(a));
}

int QOpenGLTexture_SwizzleMask(const QOpenGLTexture* self, int component) {
    return static_cast<int>(self->swizzleMask(static_cast<QOpenGLTexture::SwizzleComponent>(component)));
}

void QOpenGLTexture_SetDepthStencilMode(QOpenGLTexture* self, int mode) {
    self->setDepthStencilMode(static_cast<QOpenGLTexture::DepthStencilMode>(mode));
}

int QOpenGLTexture_DepthStencilMode(const QOpenGLTexture* self) {
    return static_cast<int>(self->depthStencilMode());
}

void QOpenGLTexture_SetComparisonFunction(QOpenGLTexture* self, int function) {
    self->setComparisonFunction(static_cast<QOpenGLTexture::ComparisonFunction>(function));
}

int QOpenGLTexture_ComparisonFunction(const QOpenGLTexture* self) {
    return static_cast<int>(self->comparisonFunction());
}

void QOpenGLTexture_SetComparisonMode(QOpenGLTexture* self, int mode) {
    self->setComparisonMode(static_cast<QOpenGLTexture::ComparisonMode>(mode));
}

int QOpenGLTexture_ComparisonMode(const QOpenGLTexture* self) {
    return static_cast<int>(self->comparisonMode());
}

void QOpenGLTexture_SetMinificationFilter(QOpenGLTexture* self, int filter) {
    self->setMinificationFilter(static_cast<QOpenGLTexture::Filter>(filter));
}

int QOpenGLTexture_MinificationFilter(const QOpenGLTexture* self) {
    return static_cast<int>(self->minificationFilter());
}

void QOpenGLTexture_SetMagnificationFilter(QOpenGLTexture* self, int filter) {
    self->setMagnificationFilter(static_cast<QOpenGLTexture::Filter>(filter));
}

int QOpenGLTexture_MagnificationFilter(const QOpenGLTexture* self) {
    return static_cast<int>(self->magnificationFilter());
}

void QOpenGLTexture_SetMinMagFilters(QOpenGLTexture* self, int minificationFilter, int magnificationFilter) {
    self->setMinMagFilters(static_cast<QOpenGLTexture::Filter>(minificationFilter), static_cast<QOpenGLTexture::Filter>(magnificationFilter));
}

libqt_pair /* tuple of int and int */ QOpenGLTexture_MinMagFilters(const QOpenGLTexture* self) {
    QPair<QOpenGLTexture::Filter, QOpenGLTexture::Filter> _ret = self->minMagFilters();
    // Convert QPair<> from C++ memory to manually-managed C memory
    int* _first = static_cast<int*>(malloc(sizeof(int)));
    int* _second = static_cast<int*>(malloc(sizeof(int)));
    *_first = static_cast<int>(_ret.first);
    *_second = static_cast<int>(_ret.second);
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

void QOpenGLTexture_SetMaximumAnisotropy(QOpenGLTexture* self, float anisotropy) {
    self->setMaximumAnisotropy(static_cast<float>(anisotropy));
}

float QOpenGLTexture_MaximumAnisotropy(const QOpenGLTexture* self) {
    return self->maximumAnisotropy();
}

void QOpenGLTexture_SetWrapMode(QOpenGLTexture* self, int mode) {
    self->setWrapMode(static_cast<QOpenGLTexture::WrapMode>(mode));
}

void QOpenGLTexture_SetWrapMode2(QOpenGLTexture* self, int direction, int mode) {
    self->setWrapMode(static_cast<QOpenGLTexture::CoordinateDirection>(direction), static_cast<QOpenGLTexture::WrapMode>(mode));
}

int QOpenGLTexture_WrapMode(const QOpenGLTexture* self, int direction) {
    return static_cast<int>(self->wrapMode(static_cast<QOpenGLTexture::CoordinateDirection>(direction)));
}

void QOpenGLTexture_SetBorderColor(QOpenGLTexture* self, const QColor* color) {
    self->setBorderColor(*color);
}

void QOpenGLTexture_SetBorderColor2(QOpenGLTexture* self, float r, float g, float b, float a) {
    self->setBorderColor(static_cast<float>(r), static_cast<float>(g), static_cast<float>(b), static_cast<float>(a));
}

void QOpenGLTexture_SetBorderColor3(QOpenGLTexture* self, int r, int g, int b, int a) {
    self->setBorderColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

void QOpenGLTexture_SetBorderColor4(QOpenGLTexture* self, unsigned int r, unsigned int g, unsigned int b, unsigned int a) {
    self->setBorderColor(static_cast<uint>(r), static_cast<uint>(g), static_cast<uint>(b), static_cast<uint>(a));
}

QColor* QOpenGLTexture_BorderColor(const QOpenGLTexture* self) {
    return new QColor(self->borderColor());
}

void QOpenGLTexture_BorderColor2(const QOpenGLTexture* self, float* border) {
    self->borderColor(static_cast<float*>(border));
}

void QOpenGLTexture_BorderColor3(const QOpenGLTexture* self, int* border) {
    self->borderColor(static_cast<int*>(border));
}

void QOpenGLTexture_BorderColor4(const QOpenGLTexture* self, unsigned int* border) {
    self->borderColor(static_cast<unsigned int*>(border));
}

void QOpenGLTexture_SetMinimumLevelOfDetail(QOpenGLTexture* self, float value) {
    self->setMinimumLevelOfDetail(static_cast<float>(value));
}

float QOpenGLTexture_MinimumLevelOfDetail(const QOpenGLTexture* self) {
    return self->minimumLevelOfDetail();
}

void QOpenGLTexture_SetMaximumLevelOfDetail(QOpenGLTexture* self, float value) {
    self->setMaximumLevelOfDetail(static_cast<float>(value));
}

float QOpenGLTexture_MaximumLevelOfDetail(const QOpenGLTexture* self) {
    return self->maximumLevelOfDetail();
}

void QOpenGLTexture_SetLevelOfDetailRange(QOpenGLTexture* self, float min, float max) {
    self->setLevelOfDetailRange(static_cast<float>(min), static_cast<float>(max));
}

libqt_pair /* tuple of float and float */ QOpenGLTexture_LevelOfDetailRange(const QOpenGLTexture* self) {
    QPair<float, float> _ret = self->levelOfDetailRange();
    // Convert QPair<> from C++ memory to manually-managed C memory
    float* _first = static_cast<float*>(malloc(sizeof(float)));
    float* _second = static_cast<float*>(malloc(sizeof(float)));
    *_first = _ret.first;
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

void QOpenGLTexture_SetLevelofDetailBias(QOpenGLTexture* self, float bias) {
    self->setLevelofDetailBias(static_cast<float>(bias));
}

float QOpenGLTexture_LevelofDetailBias(const QOpenGLTexture* self) {
    return self->levelofDetailBias();
}

void QOpenGLTexture_Bind22(QOpenGLTexture* self, unsigned int unit, int reset) {
    self->bind(static_cast<uint>(unit), static_cast<QOpenGLTexture::TextureUnitReset>(reset));
}

void QOpenGLTexture_Release22(QOpenGLTexture* self, unsigned int unit, int reset) {
    self->release(static_cast<uint>(unit), static_cast<QOpenGLTexture::TextureUnitReset>(reset));
}

void QOpenGLTexture_SetSize2(QOpenGLTexture* self, int width, int height) {
    self->setSize(static_cast<int>(width), static_cast<int>(height));
}

void QOpenGLTexture_SetSize3(QOpenGLTexture* self, int width, int height, int depth) {
    self->setSize(static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth));
}

void QOpenGLTexture_SetData72(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData82(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<int>(layerCount), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData62(QOpenGLTexture* self, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData52(QOpenGLTexture* self, int mipLevel, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(mipLevel), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData42(QOpenGLTexture* self, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData102(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData112(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData12(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData13(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetData14(QOpenGLTexture* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int cubeFace, int layerCount, int sourceFormat, int sourceType, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setData(static_cast<int>(xOffset), static_cast<int>(yOffset), static_cast<int>(zOffset), static_cast<int>(width), static_cast<int>(height), static_cast<int>(depth), static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<int>(layerCount), static_cast<QOpenGLTexture::PixelFormat>(sourceFormat), static_cast<QOpenGLTexture::PixelType>(sourceType), data, options);
}

void QOpenGLTexture_SetCompressedData6(QOpenGLTexture* self, int mipLevel, int layer, int cubeFace, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<int>(dataSize), data, options);
}

void QOpenGLTexture_SetCompressedData7(QOpenGLTexture* self, int mipLevel, int layer, int layerCount, int cubeFace, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<int>(layerCount), static_cast<QOpenGLTexture::CubeMapFace>(cubeFace), static_cast<int>(dataSize), data, options);
}

void QOpenGLTexture_SetCompressedData52(QOpenGLTexture* self, int mipLevel, int layer, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(layer), static_cast<int>(dataSize), data, options);
}

void QOpenGLTexture_SetCompressedData42(QOpenGLTexture* self, int mipLevel, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setCompressedData(static_cast<int>(mipLevel), static_cast<int>(dataSize), data, options);
}

void QOpenGLTexture_SetCompressedData32(QOpenGLTexture* self, int dataSize, const void* data, const QOpenGLPixelTransferOptions* options) {
    self->setCompressedData(static_cast<int>(dataSize), data, options);
}

void QOpenGLTexture_SetData22(QOpenGLTexture* self, const QImage* image, int genMipMaps) {
    self->setData(*image, static_cast<QOpenGLTexture::MipMapGeneration>(genMipMaps));
}

void QOpenGLTexture_GenerateMipMaps22(QOpenGLTexture* self, int baseLevel, bool resetBaseLevel) {
    self->generateMipMaps(static_cast<int>(baseLevel), resetBaseLevel);
}

void QOpenGLTexture_Delete(QOpenGLTexture* self) {
    delete self;
}
