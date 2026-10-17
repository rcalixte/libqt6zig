#include <QBarDataItem>
#include <qbardataitem.h>
#include "libqbardataitem.h"
#include "libqbardataitem.hxx"

QBarDataItem* QBarDataItem_new() {
    return new QBarDataItem();
}

QBarDataItem* QBarDataItem_new2(float value) {
    return new QBarDataItem(static_cast<float>(value));
}

QBarDataItem* QBarDataItem_new3(float value, float angle) {
    return new QBarDataItem(static_cast<float>(value), static_cast<float>(angle));
}

QBarDataItem* QBarDataItem_new4(const QBarDataItem* other) {
    return new QBarDataItem(*other);
}

void QBarDataItem_OperatorAssign(QBarDataItem* self, const QBarDataItem* other) {
    self->operator=(*other);
}

void QBarDataItem_SetValue(QBarDataItem* self, float val) {
    self->setValue(static_cast<float>(val));
}

float QBarDataItem_Value(const QBarDataItem* self) {
    return self->value();
}

void QBarDataItem_SetRotation(QBarDataItem* self, float angle) {
    self->setRotation(static_cast<float>(angle));
}

float QBarDataItem_Rotation(const QBarDataItem* self) {
    return self->rotation();
}

void QBarDataItem_Delete(QBarDataItem* self) {
    delete self;
}
