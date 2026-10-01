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
    if (vqsgvertexcolormaterial) {
        return vqsgvertexcolormaterial->type();
    }
    qFatal("Error: Protected method QSGVertexColorMaterial::type called without a directly constructed type");
}

QSGMaterialShader* QSGVertexColorMaterial_CreateShader(const QSGVertexColorMaterial* self, int renderMode) {
    auto* vqsgvertexcolormaterial = dynamic_cast<const VirtualQSGVertexColorMaterial*>(self);
    if (vqsgvertexcolormaterial) {
        return vqsgvertexcolormaterial->createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    }
    qFatal("Error: Protected method QSGVertexColorMaterial::createShader called without a directly constructed type");
}

// Base class handler implementation
int QSGVertexColorMaterial_SuperCompare(const QSGVertexColorMaterial* self, const QSGMaterial* other) {
    return self->QSGVertexColorMaterial::compare(other);
}

// Auxiliary method to allow providing re-implementation
void QSGVertexColorMaterial_OnCompare(QSGVertexColorMaterial* self, intptr_t slot) {
    if (auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self)))
        vqsgvertexcolormaterial->qsgvertexcolormaterial_compare_callback = reinterpret_cast<VirtualQSGVertexColorMaterial::QSGVertexColorMaterial_Compare_Callback>(slot);
}

// Base class handler implementation
QSGMaterialType* QSGVertexColorMaterial_SuperType(const QSGVertexColorMaterial* self) {
    if (auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self))) {
        return vqsgvertexcolormaterial->QSGVertexColorMaterial::type();
    } else
        qFatal("Error: Protected virtual method QSGVertexColorMaterial::type called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGVertexColorMaterial_OnType(QSGVertexColorMaterial* self, intptr_t slot) {
    if (auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self)))
        vqsgvertexcolormaterial->qsgvertexcolormaterial_type_callback = reinterpret_cast<VirtualQSGVertexColorMaterial::QSGVertexColorMaterial_Type_Callback>(slot);
}

// Base class handler implementation
QSGMaterialShader* QSGVertexColorMaterial_SuperCreateShader(const QSGVertexColorMaterial* self, int renderMode) {
    if (auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self))) {
        return vqsgvertexcolormaterial->QSGVertexColorMaterial::createShader(static_cast<QSGRendererInterface::RenderMode>(renderMode));
    } else
        qFatal("Error: Protected virtual method QSGVertexColorMaterial::createShader called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGVertexColorMaterial_OnCreateShader(QSGVertexColorMaterial* self, intptr_t slot) {
    if (auto* vqsgvertexcolormaterial = const_cast<VirtualQSGVertexColorMaterial*>(dynamic_cast<const VirtualQSGVertexColorMaterial*>(self)))
        vqsgvertexcolormaterial->qsgvertexcolormaterial_createshader_callback = reinterpret_cast<VirtualQSGVertexColorMaterial::QSGVertexColorMaterial_CreateShader_Callback>(slot);
}

void QSGVertexColorMaterial_Delete(QSGVertexColorMaterial* self) {
    delete self;
}
