#include <QPlaceRatings>
#include <qplaceratings.h>
#include "libqplaceratings.h"
#include "libqplaceratings.hxx"

QPlaceRatings* QPlaceRatings_new() {
    return new QPlaceRatings();
}

QPlaceRatings* QPlaceRatings_new2(const QPlaceRatings* other) {
    return new QPlaceRatings(*other);
}

void QPlaceRatings_OperatorAssign(QPlaceRatings* self, const QPlaceRatings* other) {
    self->operator=(*other);
}

void QPlaceRatings_Swap(QPlaceRatings* self, QPlaceRatings* other) {
    self->swap(*other);
}

double QPlaceRatings_Average(const QPlaceRatings* self) {
    return static_cast<double>(self->average());
}

void QPlaceRatings_SetAverage(QPlaceRatings* self, double average) {
    self->setAverage(static_cast<qreal>(average));
}

int QPlaceRatings_Count(const QPlaceRatings* self) {
    return self->count();
}

void QPlaceRatings_SetCount(QPlaceRatings* self, int count) {
    self->setCount(static_cast<int>(count));
}

double QPlaceRatings_Maximum(const QPlaceRatings* self) {
    return static_cast<double>(self->maximum());
}

void QPlaceRatings_SetMaximum(QPlaceRatings* self, double max) {
    self->setMaximum(static_cast<qreal>(max));
}

bool QPlaceRatings_IsEmpty(const QPlaceRatings* self) {
    return self->isEmpty();
}

void QPlaceRatings_Delete(QPlaceRatings* self) {
    delete self;
}
