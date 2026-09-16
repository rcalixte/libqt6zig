#include <QSGMaterial>
#include <QSGMaterialShader>
#include <QSGVertexColorMaterial>
#include <qsgvertexcolormaterial.h>
#include "libqsgvertexcolormaterial.h"
#include "libqsgvertexcolormaterial.hxx"

QSGVertexColorMaterial* QSGVertexColorMaterial_new() {
    return new VirtualQSGVertexColorMaterial();
}

int QSGVertexColorMaterial_Compare(const QSGVertexColorMaterial* self, const QSGMaterial* other) {
    return self->compare(other);
}

QSGMaterialType* QSGVertexColorMaterial_Type(const QSGVertexColorMaterial* self) {
    auto* vqsgvertexcolormaterial = dynamic_cast<const VirtualQSGVertexColorMaterial*>(self);
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial) {
        return vqsgvertexcolormaterial->type();
    }
    return {};
}

QSGMaterialShader* QSGVertexColorMaterial_CreateShader(const QSGVertexColorMaterial* self, int renderMode) {
    auto* vqsgvertexcolormaterial = dynamic_cast<const VirtualQSGVertexColorMaterial*>(self);
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial) {
        return vqsgvertexcolormaterial->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    }
    return {};
}

// Base class handler implementation
int QSGVertexColorMaterial_SuperCompare(const QSGVertexColorMaterial* self, const QSGMaterial* other) {
    auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self));
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial) {
        vqsgvertexcolormaterial->setQSGVertexColorMaterial_Compare_IsBase(true);
        return vqsgvertexcolormaterial->compare(other);
    } else {
        return self->QSGVertexColorMaterial::compare(other);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGVertexColorMaterial_OnCompare(const QSGVertexColorMaterial* self, intptr_t slot) {
    auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self));
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial)
        vqsgvertexcolormaterial->setQSGVertexColorMaterial_Compare_Callback(reinterpret_cast<VirtualQSGVertexColorMaterial::QSGVertexColorMaterial_Compare_Callback>(slot));
}

// Base class handler implementation
QSGMaterialType* QSGVertexColorMaterial_SuperType(const QSGVertexColorMaterial* self) {
    auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self));
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial) {
        vqsgvertexcolormaterial->setQSGVertexColorMaterial_Type_IsBase(true);
        return vqsgvertexcolormaterial->type();
    } else {
        return ((VirtualQSGVertexColorMaterial*)self)->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGVertexColorMaterial_OnType(const QSGVertexColorMaterial* self, intptr_t slot) {
    auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self));
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial)
        vqsgvertexcolormaterial->setQSGVertexColorMaterial_Type_Callback(reinterpret_cast<VirtualQSGVertexColorMaterial::QSGVertexColorMaterial_Type_Callback>(slot));
}

// Base class handler implementation
QSGMaterialShader* QSGVertexColorMaterial_SuperCreateShader(const QSGVertexColorMaterial* self, int renderMode) {
    auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self));
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial) {
        vqsgvertexcolormaterial->setQSGVertexColorMaterial_CreateShader_IsBase(true);
        return vqsgvertexcolormaterial->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    } else {
        return ((VirtualQSGVertexColorMaterial*)self)->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGVertexColorMaterial_OnCreateShader(const QSGVertexColorMaterial* self, intptr_t slot) {
    auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self));
    if (vqsgvertexcolormaterial && vqsgvertexcolormaterial->isVirtualQSGVertexColorMaterial)
        vqsgvertexcolormaterial->setQSGVertexColorMaterial_CreateShader_Callback(reinterpret_cast<VirtualQSGVertexColorMaterial::QSGVertexColorMaterial_CreateShader_Callback>(slot));
}

void QSGVertexColorMaterial_Delete(QSGVertexColorMaterial* self) {
    delete self;
}
