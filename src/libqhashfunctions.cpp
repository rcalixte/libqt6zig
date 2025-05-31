#include <QHashSeed>
#include <qhashfunctions.h>
#include "libqhashfunctions.h"
#include "libqhashfunctions.hxx"

QHashSeed* QHashSeed_new(const QHashSeed* other) {
    return new QHashSeed(*other);
}

QHashSeed* QHashSeed_new2(QHashSeed* other) {
    return new QHashSeed(std::move(*other));
}

QHashSeed* QHashSeed_new3() {
    return new QHashSeed();
}

QHashSeed* QHashSeed_new4(size_t d) {
    return new QHashSeed(static_cast<size_t>(d));
}

void QHashSeed_CopyAssign(QHashSeed* self, QHashSeed* other) {
    *self = *other;
}

void QHashSeed_MoveAssign(QHashSeed* self, QHashSeed* other) {
    *self = std::move(*other);
}

size_t QHashSeed_ToUnsignedLong(const QHashSeed* self) {
    return self->operator unsigned long();
}

QHashSeed* QHashSeed_GlobalSeed() {
    return new QHashSeed(QHashSeed::globalSeed());
}

void QHashSeed_SetDeterministicGlobalSeed() {
    QHashSeed::setDeterministicGlobalSeed();
}

void QHashSeed_ResetRandomGlobalSeed() {
    QHashSeed::resetRandomGlobalSeed();
}

void QHashSeed_Delete(QHashSeed* self) {
    delete self;
}
