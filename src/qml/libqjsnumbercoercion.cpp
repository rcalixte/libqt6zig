#include <QJSNumberCoercion>
#include <qjsnumbercoercion.h>
#include "libqjsnumbercoercion.h"
#include "libqjsnumbercoercion.hxx"

QJSNumberCoercion* QJSNumberCoercion_new(const QJSNumberCoercion* other) {
    return new QJSNumberCoercion(*other);
}

QJSNumberCoercion* QJSNumberCoercion_new2(QJSNumberCoercion* other) {
    return new QJSNumberCoercion(std::move(*other));
}

QJSNumberCoercion* QJSNumberCoercion_new3(const QJSNumberCoercion* param1) {
    return new QJSNumberCoercion(*param1);
}

void QJSNumberCoercion_CopyAssign(QJSNumberCoercion* self, QJSNumberCoercion* other) {
    *self = *other;
}

void QJSNumberCoercion_MoveAssign(QJSNumberCoercion* self, QJSNumberCoercion* other) {
    *self = std::move(*other);
}

bool QJSNumberCoercion_IsInteger(double d) {
    return QJSNumberCoercion::isInteger(static_cast<double>(d));
}

bool QJSNumberCoercion_IsArrayIndex(double d) {
    return QJSNumberCoercion::isArrayIndex(static_cast<double>(d));
}

bool QJSNumberCoercion_IsArrayIndex2(long long i) {
    return QJSNumberCoercion::isArrayIndex(static_cast<qint64>(i));
}

bool QJSNumberCoercion_IsArrayIndex3(unsigned long long i) {
    return QJSNumberCoercion::isArrayIndex(static_cast<quint64>(i));
}

int QJSNumberCoercion_ToInteger(double d) {
    return QJSNumberCoercion::toInteger(static_cast<double>(d));
}

bool QJSNumberCoercion_Equals(double lhs, double rhs) {
    return QJSNumberCoercion::equals(static_cast<double>(lhs), static_cast<double>(rhs));
}

double QJSNumberCoercion_RoundTowards0(double d) {
    return QJSNumberCoercion::roundTowards0(static_cast<double>(d));
}

void QJSNumberCoercion_Delete(QJSNumberCoercion* self) {
    delete self;
}
