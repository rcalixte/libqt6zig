#include <QPartialOrdering>
#define WORKAROUND_INNER_CLASS_DEFINITION_partial_ordering
#define WORKAROUND_INNER_CLASS_DEFINITION_strong_ordering
#define WORKAROUND_INNER_CLASS_DEFINITION_weak_ordering
#include <qcompare.h>
#include "libqcompare.h"
#include "libqcompare.hxx"

partial_ordering* partial_ordering_new(const partial_ordering* other) {
    return new Qt::partial_ordering(*other);
}

partial_ordering* partial_ordering_new2(partial_ordering* other) {
    return new Qt::partial_ordering(std::move(*other));
}

partial_ordering* partial_ordering_new3(const partial_ordering* param1) {
    return new Qt::partial_ordering(*param1);
}

void partial_ordering_CopyAssign(partial_ordering* self, partial_ordering* other) {
    *self = *other;
}

void partial_ordering_MoveAssign(partial_ordering* self, partial_ordering* other) {
    *self = std::move(*other);
}

void partial_ordering_Delete(partial_ordering* self) {
    delete self;
}

weak_ordering* weak_ordering_new(const weak_ordering* other) {
    return new Qt::weak_ordering(*other);
}

weak_ordering* weak_ordering_new2(weak_ordering* other) {
    return new Qt::weak_ordering(std::move(*other));
}

weak_ordering* weak_ordering_new3(const weak_ordering* param1) {
    return new Qt::weak_ordering(*param1);
}

void weak_ordering_CopyAssign(weak_ordering* self, weak_ordering* other) {
    *self = *other;
}

void weak_ordering_MoveAssign(weak_ordering* self, weak_ordering* other) {
    *self = std::move(*other);
}

partial_ordering* weak_ordering_ToPartialOrdering(const weak_ordering* self) {
    return new Qt::partial_ordering(self->operator partial_ordering());
}

void weak_ordering_Delete(weak_ordering* self) {
    delete self;
}

strong_ordering* strong_ordering_new(const strong_ordering* other) {
    return new Qt::strong_ordering(*other);
}

strong_ordering* strong_ordering_new2(strong_ordering* other) {
    return new Qt::strong_ordering(std::move(*other));
}

strong_ordering* strong_ordering_new3(const strong_ordering* param1) {
    return new Qt::strong_ordering(*param1);
}

void strong_ordering_CopyAssign(strong_ordering* self, strong_ordering* other) {
    *self = *other;
}

void strong_ordering_MoveAssign(strong_ordering* self, strong_ordering* other) {
    *self = std::move(*other);
}

partial_ordering* strong_ordering_ToPartialOrdering(const strong_ordering* self) {
    return new Qt::partial_ordering(self->operator partial_ordering());
}

weak_ordering* strong_ordering_ToWeakOrdering(const strong_ordering* self) {
    return new Qt::weak_ordering(self->operator weak_ordering());
}

void strong_ordering_Delete(strong_ordering* self) {
    delete self;
}

QPartialOrdering* QPartialOrdering_new(const QPartialOrdering* other) {
    return new QPartialOrdering(*other);
}

QPartialOrdering* QPartialOrdering_new2(QPartialOrdering* other) {
    return new QPartialOrdering(std::move(*other));
}

QPartialOrdering* QPartialOrdering_new3(partial_ordering* order) {
    return new QPartialOrdering(*order);
}

QPartialOrdering* QPartialOrdering_new4(weak_ordering* stdorder) {
    return new QPartialOrdering(*stdorder);
}

QPartialOrdering* QPartialOrdering_new5(strong_ordering* stdorder) {
    return new QPartialOrdering(*stdorder);
}

QPartialOrdering* QPartialOrdering_new6(const QPartialOrdering* param1) {
    return new QPartialOrdering(*param1);
}

void QPartialOrdering_CopyAssign(QPartialOrdering* self, QPartialOrdering* other) {
    *self = *other;
}

void QPartialOrdering_MoveAssign(QPartialOrdering* self, QPartialOrdering* other) {
    *self = std::move(*other);
}

partial_ordering* QPartialOrdering_ToPartialOrdering(const QPartialOrdering* self) {
    return new Qt::partial_ordering(self->operator partial_ordering());
}

void QPartialOrdering_Delete(QPartialOrdering* self) {
    delete self;
}
