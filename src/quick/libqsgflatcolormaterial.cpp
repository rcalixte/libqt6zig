#include <QColor>
#include <QSGFlatColorMaterial>
#include <QSGMaterial>
#include <QSGMaterialShader>
#include <qsgflatcolormaterial.h>
#include "libqsgflatcolormaterial.h"
#include "libqsgflatcolormaterial.hxx"

QSGFlatColorMaterial* QSGFlatColorMaterial_new() {
    return new VirtualQSGFlatColorMaterial();
}

QSGMaterialType* QSGFlatColorMaterial_Type(const QSGFlatColorMaterial* self) {
    return self->type();
}

QSGMaterialShader* QSGFlatColorMaterial_CreateShader(const QSGFlatColorMaterial* self, int renderMode) {
    return self->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
}

void QSGFlatColorMaterial_SetColor(QSGFlatColorMaterial* self, const QColor* color) {
    self->setColor(*color);
}

QColor* QSGFlatColorMaterial_Color(const QSGFlatColorMaterial* self) {
    const QColor& _ret = self->color();
    // Cast returned reference into pointer
    return const_cast<QColor*>(&_ret);
}

int QSGFlatColorMaterial_Compare(const QSGFlatColorMaterial* self, const QSGMaterial* other) {
    return self->compare(other);
}

// Base class handler implementation
QSGMaterialType* QSGFlatColorMaterial_SuperType(const QSGFlatColorMaterial* self) {
    auto* vqsgflatcolormaterial = const_cast<VirtualQSGFlatColorMaterial*>(dynamic_cast<const VirtualQSGFlatColorMaterial*>(self));
    if (vqsgflatcolormaterial && vqsgflatcolormaterial->isVirtualQSGFlatColorMaterial) {
        vqsgflatcolormaterial->setQSGFlatColorMaterial_Type_IsBase(true);
        return vqsgflatcolormaterial->type();
    } else {
        return self->QSGFlatColorMaterial::type();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGFlatColorMaterial_OnType(const QSGFlatColorMaterial* self, intptr_t slot) {
    auto* vqsgflatcolormaterial = const_cast<VirtualQSGFlatColorMaterial*>(dynamic_cast<const VirtualQSGFlatColorMaterial*>(self));
    if (vqsgflatcolormaterial && vqsgflatcolormaterial->isVirtualQSGFlatColorMaterial)
        vqsgflatcolormaterial->setQSGFlatColorMaterial_Type_Callback(reinterpret_cast<VirtualQSGFlatColorMaterial::QSGFlatColorMaterial_Type_Callback>(slot));
}

// Base class handler implementation
QSGMaterialShader* QSGFlatColorMaterial_SuperCreateShader(const QSGFlatColorMaterial* self, int renderMode) {
    auto* vqsgflatcolormaterial = const_cast<VirtualQSGFlatColorMaterial*>(dynamic_cast<const VirtualQSGFlatColorMaterial*>(self));
    if (vqsgflatcolormaterial && vqsgflatcolormaterial->isVirtualQSGFlatColorMaterial) {
        vqsgflatcolormaterial->setQSGFlatColorMaterial_CreateShader_IsBase(true);
        return vqsgflatcolormaterial->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    } else {
        return self->QSGFlatColorMaterial::createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGFlatColorMaterial_OnCreateShader(const QSGFlatColorMaterial* self, intptr_t slot) {
    auto* vqsgflatcolormaterial = const_cast<VirtualQSGFlatColorMaterial*>(dynamic_cast<const VirtualQSGFlatColorMaterial*>(self));
    if (vqsgflatcolormaterial && vqsgflatcolormaterial->isVirtualQSGFlatColorMaterial)
        vqsgflatcolormaterial->setQSGFlatColorMaterial_CreateShader_Callback(reinterpret_cast<VirtualQSGFlatColorMaterial::QSGFlatColorMaterial_CreateShader_Callback>(slot));
}

// Base class handler implementation
int QSGFlatColorMaterial_SuperCompare(const QSGFlatColorMaterial* self, const QSGMaterial* other) {
    auto* vqsgflatcolormaterial = const_cast<VirtualQSGFlatColorMaterial*>(dynamic_cast<const VirtualQSGFlatColorMaterial*>(self));
    if (vqsgflatcolormaterial && vqsgflatcolormaterial->isVirtualQSGFlatColorMaterial) {
        vqsgflatcolormaterial->setQSGFlatColorMaterial_Compare_IsBase(true);
        return vqsgflatcolormaterial->compare(other);
    } else {
        return self->QSGFlatColorMaterial::compare(other);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGFlatColorMaterial_OnCompare(const QSGFlatColorMaterial* self, intptr_t slot) {
    auto* vqsgflatcolormaterial = const_cast<VirtualQSGFlatColorMaterial*>(dynamic_cast<const VirtualQSGFlatColorMaterial*>(self));
    if (vqsgflatcolormaterial && vqsgflatcolormaterial->isVirtualQSGFlatColorMaterial)
        vqsgflatcolormaterial->setQSGFlatColorMaterial_Compare_Callback(reinterpret_cast<VirtualQSGFlatColorMaterial::QSGFlatColorMaterial_Compare_Callback>(slot));
}

void QSGFlatColorMaterial_Delete(QSGFlatColorMaterial* self) {
    delete self;
}
