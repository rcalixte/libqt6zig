#include <QPdfDocumentRenderOptions>
#include <QRect>
#include <QSize>
#include <qpdfdocumentrenderoptions.h>
#include "libqpdfdocumentrenderoptions.h"
#include "libqpdfdocumentrenderoptions.hxx"

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new(QPdfDocumentRenderOptions* other) {
    return new QPdfDocumentRenderOptions(*other);
}

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new2(QPdfDocumentRenderOptions* other) {
    return new QPdfDocumentRenderOptions(std::move(*other));
}

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new3() {
    return new QPdfDocumentRenderOptions();
}

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new4(QPdfDocumentRenderOptions* param1) {
    return new QPdfDocumentRenderOptions(*param1);
}

void QPdfDocumentRenderOptions_CopyAssign(QPdfDocumentRenderOptions* self, QPdfDocumentRenderOptions* other) {
    *self = *other;
}

void QPdfDocumentRenderOptions_MoveAssign(QPdfDocumentRenderOptions* self, QPdfDocumentRenderOptions* other) {
    *self = std::move(*other);
}

int QPdfDocumentRenderOptions_Rotation(const QPdfDocumentRenderOptions* self) {
    return static_cast<int>(self->rotation());
}

void QPdfDocumentRenderOptions_SetRotation(QPdfDocumentRenderOptions* self, int r) {
    self->setRotation(static_cast<QPdfDocumentRenderOptions::Rotation>(r));
}

int QPdfDocumentRenderOptions_RenderFlags(const QPdfDocumentRenderOptions* self) {
    return static_cast<int>(self->renderFlags());
}

void QPdfDocumentRenderOptions_SetRenderFlags(QPdfDocumentRenderOptions* self, int r) {
    self->setRenderFlags(static_cast<QPdfDocumentRenderOptions::RenderFlags>(r));
}

QRect* QPdfDocumentRenderOptions_ScaledClipRect(const QPdfDocumentRenderOptions* self) {
    return new QRect(self->scaledClipRect());
}

void QPdfDocumentRenderOptions_SetScaledClipRect(QPdfDocumentRenderOptions* self, QRect* r) {
    self->setScaledClipRect(*r);
}

QSize* QPdfDocumentRenderOptions_ScaledSize(const QPdfDocumentRenderOptions* self) {
    return new QSize(self->scaledSize());
}

void QPdfDocumentRenderOptions_SetScaledSize(QPdfDocumentRenderOptions* self, QSize* s) {
    self->setScaledSize(*s);
}

void QPdfDocumentRenderOptions_Delete(QPdfDocumentRenderOptions* self) {
    delete self;
}
