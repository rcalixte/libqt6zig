#include <QQuickWindow>
#include <QSGRendererInterface>
#include <qsgrendererinterface.h>
#include "libqsgrendererinterface.h"
#include "libqsgrendererinterface.hxx"

int QSGRendererInterface_GraphicsApi(const QSGRendererInterface* self) {
    return static_cast<int>(self->graphicsApi());
}

void* QSGRendererInterface_GetResource(const QSGRendererInterface* self, QQuickWindow* window, int resource) {
    return self->getResource(window, static_cast<QSGRendererInterface::Resource>(resource));
}

void* QSGRendererInterface_GetResource2(const QSGRendererInterface* self, QQuickWindow* window, const char* resource) {
    return self->getResource(window, resource);
}

int QSGRendererInterface_ShaderType(const QSGRendererInterface* self) {
    return static_cast<int>(self->shaderType());
}

int QSGRendererInterface_ShaderCompilationType(const QSGRendererInterface* self) {
    return static_cast<int>(self->shaderCompilationType());
}

int QSGRendererInterface_ShaderSourceType(const QSGRendererInterface* self) {
    return static_cast<int>(self->shaderSourceType());
}

bool QSGRendererInterface_IsApiRhiBased(int api) {
    return QSGRendererInterface::isApiRhiBased(static_cast<QSGRendererInterface::GraphicsApi>(api));
}

void QSGRendererInterface_OperatorAssign(QSGRendererInterface* self, const QSGRendererInterface* param1) {
    self->operator=(*param1);
}

void QSGRendererInterface_Delete(QSGRendererInterface* self) {
    delete self;
}
