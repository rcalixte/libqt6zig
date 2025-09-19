#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Icon
#include <QUrl>
#include <icon.h>
#include "libicon.h"
#include "libicon.hxx"

Attica__Icon* Attica__Icon_new() {
    return new Attica::Icon();
}

Attica__Icon* Attica__Icon_new2(const Attica__Icon* other) {
    return new Attica::Icon(*other);
}

void Attica__Icon_OperatorAssign(Attica__Icon* self, const Attica__Icon* other) {
    self->operator=(*other);
}

QUrl* Attica__Icon_Url(const Attica__Icon* self) {
    return new QUrl(self->url());
}

void Attica__Icon_SetUrl(Attica__Icon* self, const QUrl* url) {
    self->setUrl(*url);
}

unsigned int Attica__Icon_Width(const Attica__Icon* self) {
    return static_cast<unsigned int>(self->width());
}

void Attica__Icon_SetWidth(Attica__Icon* self, unsigned int width) {
    self->setWidth(static_cast<uint>(width));
}

unsigned int Attica__Icon_Height(const Attica__Icon* self) {
    return static_cast<unsigned int>(self->height());
}

void Attica__Icon_SetHeight(Attica__Icon* self, unsigned int height) {
    self->setHeight(static_cast<uint>(height));
}

void Attica__Icon_Delete(Attica__Icon* self) {
    delete self;
}
