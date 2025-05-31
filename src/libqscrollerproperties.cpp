#include <QScrollerProperties>
#include <QVariant>
#include <qscrollerproperties.h>
#include "libqscrollerproperties.h"
#include "libqscrollerproperties.hxx"

QScrollerProperties* QScrollerProperties_new() {
    return new QScrollerProperties();
}

QScrollerProperties* QScrollerProperties_new2(const QScrollerProperties* sp) {
    return new QScrollerProperties(*sp);
}

void QScrollerProperties_OperatorAssign(QScrollerProperties* self, const QScrollerProperties* sp) {
    self->operator=(*sp);
}

bool QScrollerProperties_OperatorEqual(const QScrollerProperties* self, const QScrollerProperties* sp) {
    return (*self == *sp);
}

bool QScrollerProperties_OperatorNotEqual(const QScrollerProperties* self, const QScrollerProperties* sp) {
    return (*self != *sp);
}

void QScrollerProperties_SetDefaultScrollerProperties(const QScrollerProperties* sp) {
    QScrollerProperties::setDefaultScrollerProperties(*sp);
}

void QScrollerProperties_UnsetDefaultScrollerProperties() {
    QScrollerProperties::unsetDefaultScrollerProperties();
}

QVariant* QScrollerProperties_ScrollMetric(const QScrollerProperties* self, int metric) {
    return new QVariant(self->scrollMetric(static_cast<QScrollerProperties::ScrollMetric>(metric)));
}

void QScrollerProperties_SetScrollMetric(QScrollerProperties* self, int metric, const QVariant* value) {
    self->setScrollMetric(static_cast<QScrollerProperties::ScrollMetric>(metric), *value);
}

void QScrollerProperties_Delete(QScrollerProperties* self) {
    delete self;
}
