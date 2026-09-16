#include <QSGMaterial>
#include <QSGMaterialShader>
#include <qsgmaterial.h>
#include "libqsgmaterial.h"
#include "libqsgmaterial.hxx"

QSGMaterial* QSGMaterial_new() {
    return new VirtualQSGMaterial();
}

QSGMaterialType* QSGMaterial_Type(const QSGMaterial* self) {
    return self->type();
}

QSGMaterialShader* QSGMaterial_CreateShader(const QSGMaterial* self, int renderMode) {
    return self->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
}

int QSGMaterial_Compare(const QSGMaterial* self, const QSGMaterial* other) {
    return self->compare(other);
}

int QSGMaterial_Flags(const QSGMaterial* self) {
    return static_cast<int>(self->flags());
}

void QSGMaterial_SetFlag(QSGMaterial* self, int flags) {
    self->setFlag(static_cast<QSGMaterial::Flags>(flags));
}

int QSGMaterial_ViewCount(const QSGMaterial* self) {
    return self->viewCount();
}

void QSGMaterial_SetFlag2(QSGMaterial* self, int flags, bool on) {
    self->setFlag(static_cast<QSGMaterial::Flags>(flags), on);
}

// Base class handler implementation
QSGMaterialType* QSGMaterial_SuperType(const QSGMaterial* self) {
    auto* vqsgmaterial = const_cast<VirtualQSGMaterial*>(dynamic_cast<const VirtualQSGMaterial*>(self));
    if (vqsgmaterial && vqsgmaterial->isVirtualQSGMaterial) {
        vqsgmaterial->setQSGMaterial_Type_IsBase(true);
        return vqsgmaterial->type();
    } else {
        return ((VirtualQSGMaterial*)self)->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterial_OnType(const QSGMaterial* self, intptr_t slot) {
    auto* vqsgmaterial = const_cast<VirtualQSGMaterial*>(dynamic_cast<const VirtualQSGMaterial*>(self));
    if (vqsgmaterial && vqsgmaterial->isVirtualQSGMaterial)
        vqsgmaterial->setQSGMaterial_Type_Callback(reinterpret_cast<VirtualQSGMaterial::QSGMaterial_Type_Callback>(slot));
}

// Base class handler implementation
QSGMaterialShader* QSGMaterial_SuperCreateShader(const QSGMaterial* self, int renderMode) {
    auto* vqsgmaterial = const_cast<VirtualQSGMaterial*>(dynamic_cast<const VirtualQSGMaterial*>(self));
    if (vqsgmaterial && vqsgmaterial->isVirtualQSGMaterial) {
        vqsgmaterial->setQSGMaterial_CreateShader_IsBase(true);
        return vqsgmaterial->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    } else {
        return ((VirtualQSGMaterial*)self)->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterial_OnCreateShader(const QSGMaterial* self, intptr_t slot) {
    auto* vqsgmaterial = const_cast<VirtualQSGMaterial*>(dynamic_cast<const VirtualQSGMaterial*>(self));
    if (vqsgmaterial && vqsgmaterial->isVirtualQSGMaterial)
        vqsgmaterial->setQSGMaterial_CreateShader_Callback(reinterpret_cast<VirtualQSGMaterial::QSGMaterial_CreateShader_Callback>(slot));
}

// Base class handler implementation
int QSGMaterial_SuperCompare(const QSGMaterial* self, const QSGMaterial* other) {
    auto* vqsgmaterial = const_cast<VirtualQSGMaterial*>(dynamic_cast<const VirtualQSGMaterial*>(self));
    if (vqsgmaterial && vqsgmaterial->isVirtualQSGMaterial) {
        vqsgmaterial->setQSGMaterial_Compare_IsBase(true);
        return vqsgmaterial->compare(other);
    } else {
        return self->QSGMaterial::compare(other);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGMaterial_OnCompare(const QSGMaterial* self, intptr_t slot) {
    auto* vqsgmaterial = const_cast<VirtualQSGMaterial*>(dynamic_cast<const VirtualQSGMaterial*>(self));
    if (vqsgmaterial && vqsgmaterial->isVirtualQSGMaterial)
        vqsgmaterial->setQSGMaterial_Compare_Callback(reinterpret_cast<VirtualQSGMaterial::QSGMaterial_Compare_Callback>(slot));
}

void QSGMaterial_Delete(QSGMaterial* self) {
    delete self;
}
