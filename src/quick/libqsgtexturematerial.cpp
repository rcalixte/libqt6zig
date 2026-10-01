#include <QSGMaterial>
#include <QSGMaterialShader>
#include <QSGOpaqueTextureMaterial>
#include <QSGTexture>
#include <QSGTextureMaterial>
#include <qsgtexturematerial.h>
#include "libqsgtexturematerial.h"
#include "libqsgtexturematerial.hxx"

QSGOpaqueTextureMaterial* QSGOpaqueTextureMaterial_new() {
    return new VirtualQSGOpaqueTextureMaterial();
}

QSGMaterialType* QSGOpaqueTextureMaterial_Type(const QSGOpaqueTextureMaterial* self) {
    return self->type();
}

QSGMaterialShader* QSGOpaqueTextureMaterial_CreateShader(const QSGOpaqueTextureMaterial* self, int renderMode) {
    return self->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
}

int QSGOpaqueTextureMaterial_Compare(const QSGOpaqueTextureMaterial* self, const QSGMaterial* other) {
    return self->compare(other);
}

void QSGOpaqueTextureMaterial_SetTexture(QSGOpaqueTextureMaterial* self, QSGTexture* texture) {
    self->setTexture(texture);
}

QSGTexture* QSGOpaqueTextureMaterial_Texture(const QSGOpaqueTextureMaterial* self) {
    return self->texture();
}

void QSGOpaqueTextureMaterial_SetMipmapFiltering(QSGOpaqueTextureMaterial* self, int filteringType) {
    self->setMipmapFiltering(static_cast<QSGTexture::Filtering>(filteringType));
}

int QSGOpaqueTextureMaterial_MipmapFiltering(const QSGOpaqueTextureMaterial* self) {
    return static_cast<int>(self->mipmapFiltering());
}

void QSGOpaqueTextureMaterial_SetFiltering(QSGOpaqueTextureMaterial* self, int filteringType) {
    self->setFiltering(static_cast<QSGTexture::Filtering>(filteringType));
}

int QSGOpaqueTextureMaterial_Filtering(const QSGOpaqueTextureMaterial* self) {
    return static_cast<int>(self->filtering());
}

void QSGOpaqueTextureMaterial_SetHorizontalWrapMode(QSGOpaqueTextureMaterial* self, int mode) {
    self->setHorizontalWrapMode(static_cast<QSGTexture::WrapMode>(mode));
}

int QSGOpaqueTextureMaterial_HorizontalWrapMode(const QSGOpaqueTextureMaterial* self) {
    return static_cast<int>(self->horizontalWrapMode());
}

void QSGOpaqueTextureMaterial_SetVerticalWrapMode(QSGOpaqueTextureMaterial* self, int mode) {
    self->setVerticalWrapMode(static_cast<QSGTexture::WrapMode>(mode));
}

int QSGOpaqueTextureMaterial_VerticalWrapMode(const QSGOpaqueTextureMaterial* self) {
    return static_cast<int>(self->verticalWrapMode());
}

void QSGOpaqueTextureMaterial_SetAnisotropyLevel(QSGOpaqueTextureMaterial* self, int level) {
    self->setAnisotropyLevel(static_cast<QSGTexture::AnisotropyLevel>(level));
}

int QSGOpaqueTextureMaterial_AnisotropyLevel(const QSGOpaqueTextureMaterial* self) {
    return static_cast<int>(self->anisotropyLevel());
}

// Base class handler implementation
QSGMaterialType* QSGOpaqueTextureMaterial_SuperType(const QSGOpaqueTextureMaterial* self) {
    return self->QSGOpaqueTextureMaterial::type();
}

// Auxiliary method to allow providing re-implementation
void QSGOpaqueTextureMaterial_OnType(QSGOpaqueTextureMaterial* self, intptr_t slot) {
    if (auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self)))
        vqsgopaquetexturematerial->qsgopaquetexturematerial_type_callback = reinterpret_cast<VirtualQSGOpaqueTextureMaterial::QSGOpaqueTextureMaterial_Type_Callback>(slot);
}

// Base class handler implementation
QSGMaterialShader* QSGOpaqueTextureMaterial_SuperCreateShader(const QSGOpaqueTextureMaterial* self, int renderMode) {
    return self->QSGOpaqueTextureMaterial::createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
}

// Auxiliary method to allow providing re-implementation
void QSGOpaqueTextureMaterial_OnCreateShader(QSGOpaqueTextureMaterial* self, intptr_t slot) {
    if (auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self)))
        vqsgopaquetexturematerial->qsgopaquetexturematerial_createshader_callback = reinterpret_cast<VirtualQSGOpaqueTextureMaterial::QSGOpaqueTextureMaterial_CreateShader_Callback>(slot);
}

// Base class handler implementation
int QSGOpaqueTextureMaterial_SuperCompare(const QSGOpaqueTextureMaterial* self, const QSGMaterial* other) {
    return self->QSGOpaqueTextureMaterial::compare(other);
}

// Auxiliary method to allow providing re-implementation
void QSGOpaqueTextureMaterial_OnCompare(QSGOpaqueTextureMaterial* self, intptr_t slot) {
    if (auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self)))
        vqsgopaquetexturematerial->qsgopaquetexturematerial_compare_callback = reinterpret_cast<VirtualQSGOpaqueTextureMaterial::QSGOpaqueTextureMaterial_Compare_Callback>(slot);
}

void QSGOpaqueTextureMaterial_Delete(QSGOpaqueTextureMaterial* self) {
    delete self;
}

QSGTextureMaterial* QSGTextureMaterial_new() {
    return new VirtualQSGTextureMaterial();
}

QSGMaterialType* QSGTextureMaterial_Type(const QSGTextureMaterial* self) {
    return self->type();
}

QSGMaterialShader* QSGTextureMaterial_CreateShader(const QSGTextureMaterial* self, int renderMode) {
    return self->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
}

// Base class handler implementation
QSGMaterialType* QSGTextureMaterial_SuperType(const QSGTextureMaterial* self) {
    return self->QSGTextureMaterial::type();
}

// Auxiliary method to allow providing re-implementation
void QSGTextureMaterial_OnType(QSGTextureMaterial* self, intptr_t slot) {
    if (auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self)))
        vqsgtexturematerial->qsgtexturematerial_type_callback = reinterpret_cast<VirtualQSGTextureMaterial::QSGTextureMaterial_Type_Callback>(slot);
}

// Base class handler implementation
QSGMaterialShader* QSGTextureMaterial_SuperCreateShader(const QSGTextureMaterial* self, int renderMode) {
    return self->QSGTextureMaterial::createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
}

// Auxiliary method to allow providing re-implementation
void QSGTextureMaterial_OnCreateShader(QSGTextureMaterial* self, intptr_t slot) {
    if (auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self)))
        vqsgtexturematerial->qsgtexturematerial_createshader_callback = reinterpret_cast<VirtualQSGTextureMaterial::QSGTextureMaterial_CreateShader_Callback>(slot);
}

// Derived class handler implementation
int QSGTextureMaterial_Compare(const QSGTextureMaterial* self, const QSGMaterial* other) {
    return self->compare(other);
}

// Base class handler implementation
int QSGTextureMaterial_SuperCompare(const QSGTextureMaterial* self, const QSGMaterial* other) {
    return self->QSGTextureMaterial::compare(other);
}

// Auxiliary method to allow providing re-implementation
void QSGTextureMaterial_OnCompare(QSGTextureMaterial* self, intptr_t slot) {
    if (auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self)))
        vqsgtexturematerial->qsgtexturematerial_compare_callback = reinterpret_cast<VirtualQSGTextureMaterial::QSGTextureMaterial_Compare_Callback>(slot);
}

void QSGTextureMaterial_Delete(QSGTextureMaterial* self) {
    delete self;
}
