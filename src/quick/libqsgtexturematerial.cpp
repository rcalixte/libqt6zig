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
    auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self));
    if (vqsgopaquetexturematerial && vqsgopaquetexturematerial->isVirtualQSGOpaqueTextureMaterial) {
        vqsgopaquetexturematerial->setQSGOpaqueTextureMaterial_Type_IsBase(true);
        return vqsgopaquetexturematerial->type();
    } else {
        return self->QSGOpaqueTextureMaterial::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGOpaqueTextureMaterial_OnType(const QSGOpaqueTextureMaterial* self, intptr_t slot) {
    auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self));
    if (vqsgopaquetexturematerial && vqsgopaquetexturematerial->isVirtualQSGOpaqueTextureMaterial)
        vqsgopaquetexturematerial->setQSGOpaqueTextureMaterial_Type_Callback(reinterpret_cast<VirtualQSGOpaqueTextureMaterial::QSGOpaqueTextureMaterial_Type_Callback>(slot));
}

// Base class handler implementation
QSGMaterialShader* QSGOpaqueTextureMaterial_SuperCreateShader(const QSGOpaqueTextureMaterial* self, int renderMode) {
    auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self));
    if (vqsgopaquetexturematerial && vqsgopaquetexturematerial->isVirtualQSGOpaqueTextureMaterial) {
        vqsgopaquetexturematerial->setQSGOpaqueTextureMaterial_CreateShader_IsBase(true);
        return vqsgopaquetexturematerial->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    } else {
        return self->QSGOpaqueTextureMaterial::createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGOpaqueTextureMaterial_OnCreateShader(const QSGOpaqueTextureMaterial* self, intptr_t slot) {
    auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self));
    if (vqsgopaquetexturematerial && vqsgopaquetexturematerial->isVirtualQSGOpaqueTextureMaterial)
        vqsgopaquetexturematerial->setQSGOpaqueTextureMaterial_CreateShader_Callback(reinterpret_cast<VirtualQSGOpaqueTextureMaterial::QSGOpaqueTextureMaterial_CreateShader_Callback>(slot));
}

// Base class handler implementation
int QSGOpaqueTextureMaterial_SuperCompare(const QSGOpaqueTextureMaterial* self, const QSGMaterial* other) {
    auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self));
    if (vqsgopaquetexturematerial && vqsgopaquetexturematerial->isVirtualQSGOpaqueTextureMaterial) {
        vqsgopaquetexturematerial->setQSGOpaqueTextureMaterial_Compare_IsBase(true);
        return vqsgopaquetexturematerial->compare(other);
    } else {
        return self->QSGOpaqueTextureMaterial::compare(other);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGOpaqueTextureMaterial_OnCompare(const QSGOpaqueTextureMaterial* self, intptr_t slot) {
    auto* vqsgopaquetexturematerial = const_cast<VirtualQSGOpaqueTextureMaterial*>(dynamic_cast<const VirtualQSGOpaqueTextureMaterial*>(self));
    if (vqsgopaquetexturematerial && vqsgopaquetexturematerial->isVirtualQSGOpaqueTextureMaterial)
        vqsgopaquetexturematerial->setQSGOpaqueTextureMaterial_Compare_Callback(reinterpret_cast<VirtualQSGOpaqueTextureMaterial::QSGOpaqueTextureMaterial_Compare_Callback>(slot));
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
    auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self));
    if (vqsgtexturematerial && vqsgtexturematerial->isVirtualQSGTextureMaterial) {
        vqsgtexturematerial->setQSGTextureMaterial_Type_IsBase(true);
        return vqsgtexturematerial->type();
    } else {
        return self->QSGTextureMaterial::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTextureMaterial_OnType(const QSGTextureMaterial* self, intptr_t slot) {
    auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self));
    if (vqsgtexturematerial && vqsgtexturematerial->isVirtualQSGTextureMaterial)
        vqsgtexturematerial->setQSGTextureMaterial_Type_Callback(reinterpret_cast<VirtualQSGTextureMaterial::QSGTextureMaterial_Type_Callback>(slot));
}

// Base class handler implementation
QSGMaterialShader* QSGTextureMaterial_SuperCreateShader(const QSGTextureMaterial* self, int renderMode) {
    auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self));
    if (vqsgtexturematerial && vqsgtexturematerial->isVirtualQSGTextureMaterial) {
        vqsgtexturematerial->setQSGTextureMaterial_CreateShader_IsBase(true);
        return vqsgtexturematerial->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    } else {
        return self->QSGTextureMaterial::createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTextureMaterial_OnCreateShader(const QSGTextureMaterial* self, intptr_t slot) {
    auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self));
    if (vqsgtexturematerial && vqsgtexturematerial->isVirtualQSGTextureMaterial)
        vqsgtexturematerial->setQSGTextureMaterial_CreateShader_Callback(reinterpret_cast<VirtualQSGTextureMaterial::QSGTextureMaterial_CreateShader_Callback>(slot));
}

// Derived class handler implementation
int QSGTextureMaterial_Compare(const QSGTextureMaterial* self, const QSGMaterial* other) {
    auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self));
    if (vqsgtexturematerial && vqsgtexturematerial->isVirtualQSGTextureMaterial) {
        return vqsgtexturematerial->compare(other);
    } else {
        return self->QSGTextureMaterial::compare(other);
    }
}

// Base class handler implementation
int QSGTextureMaterial_SuperCompare(const QSGTextureMaterial* self, const QSGMaterial* other) {
    auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self));
    if (vqsgtexturematerial && vqsgtexturematerial->isVirtualQSGTextureMaterial) {
        vqsgtexturematerial->setQSGTextureMaterial_Compare_IsBase(true);
        return vqsgtexturematerial->compare(other);
    } else {
        return self->QSGTextureMaterial::compare(other);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTextureMaterial_OnCompare(const QSGTextureMaterial* self, intptr_t slot) {
    auto* vqsgtexturematerial = const_cast<VirtualQSGTextureMaterial*>(dynamic_cast<const VirtualQSGTextureMaterial*>(self));
    if (vqsgtexturematerial && vqsgtexturematerial->isVirtualQSGTextureMaterial)
        vqsgtexturematerial->setQSGTextureMaterial_Compare_Callback(reinterpret_cast<VirtualQSGTextureMaterial::QSGTextureMaterial_Compare_Callback>(slot));
}

void QSGTextureMaterial_Delete(QSGTextureMaterial* self) {
    delete self;
}
