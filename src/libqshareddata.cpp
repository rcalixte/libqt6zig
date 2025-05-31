#include <QSharedData>
#include <qshareddata.h>
#include "libqshareddata.h"
#include "libqshareddata.hxx"

QSharedData* QSharedData_new() {
    return new QSharedData();
}

QSharedData* QSharedData_new2(const QSharedData* param1) {
    return new QSharedData(*param1);
}

void QSharedData_Delete(QSharedData* self) {
    delete self;
}

QAdoptSharedDataTag* QAdoptSharedDataTag_new(const QAdoptSharedDataTag* other) {
    return new QAdoptSharedDataTag(*other);
}

QAdoptSharedDataTag* QAdoptSharedDataTag_new2(QAdoptSharedDataTag* other) {
    return new QAdoptSharedDataTag(std::move(*other));
}

QAdoptSharedDataTag* QAdoptSharedDataTag_new3() {
    return new QAdoptSharedDataTag();
}

void QAdoptSharedDataTag_CopyAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other) {
    *self = *other;
}

void QAdoptSharedDataTag_MoveAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other) {
    *self = std::move(*other);
}

void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self) {
    delete self;
}
