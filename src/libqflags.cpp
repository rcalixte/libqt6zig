#include <QFlag>
#include <QIncompatibleFlag>
#include <qflags.h>
#include "libqflags.h"
#include "libqflags.hxx"

QFlag* QFlag_new(const QFlag* other) {
    return new QFlag(*other);
}

QFlag* QFlag_new2(QFlag* other) {
    return new QFlag(std::move(*other));
}

QFlag* QFlag_new3(int value) {
    return new QFlag(static_cast<int>(value));
}

QFlag* QFlag_new4(unsigned int value) {
    return new QFlag(static_cast<uint>(value));
}

QFlag* QFlag_new5(int16_t value) {
    return new QFlag(static_cast<short>(value));
}

QFlag* QFlag_new6(uint16_t value) {
    return new QFlag(static_cast<ushort>(value));
}

QFlag* QFlag_new7(const QFlag* param1) {
    return new QFlag(*param1);
}

void QFlag_CopyAssign(QFlag* self, QFlag* other) {
    *self = *other;
}

void QFlag_MoveAssign(QFlag* self, QFlag* other) {
    *self = std::move(*other);
}

int QFlag_ToInt(const QFlag* self) {
    return self->operator int();
}

unsigned int QFlag_ToUnsignedInt(const QFlag* self) {
    return static_cast<unsigned int>(self->operator unsigned int());
}

void QFlag_Delete(QFlag* self) {
    delete self;
}

QIncompatibleFlag* QIncompatibleFlag_new(const QIncompatibleFlag* other) {
    return new QIncompatibleFlag(*other);
}

QIncompatibleFlag* QIncompatibleFlag_new2(QIncompatibleFlag* other) {
    return new QIncompatibleFlag(std::move(*other));
}

QIncompatibleFlag* QIncompatibleFlag_new3(int i) {
    return new QIncompatibleFlag(static_cast<int>(i));
}

QIncompatibleFlag* QIncompatibleFlag_new4(const QIncompatibleFlag* param1) {
    return new QIncompatibleFlag(*param1);
}

void QIncompatibleFlag_CopyAssign(QIncompatibleFlag* self, QIncompatibleFlag* other) {
    *self = *other;
}

void QIncompatibleFlag_MoveAssign(QIncompatibleFlag* self, QIncompatibleFlag* other) {
    *self = std::move(*other);
}

int QIncompatibleFlag_ToInt(const QIncompatibleFlag* self) {
    return self->operator int();
}

void QIncompatibleFlag_Delete(QIncompatibleFlag* self) {
    delete self;
}
