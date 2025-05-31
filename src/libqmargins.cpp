#include <QMargins>
#include <QMarginsF>
#include <qmargins.h>
#include "libqmargins.h"
#include "libqmargins.hxx"

QMargins* QMargins_new(const QMargins* other) {
    return new QMargins(*other);
}

QMargins* QMargins_new2(QMargins* other) {
    return new QMargins(std::move(*other));
}

QMargins* QMargins_new3() {
    return new QMargins();
}

QMargins* QMargins_new4(int left, int top, int right, int bottom) {
    return new QMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QMargins_new5(const QMargins* param1) {
    return new QMargins(*param1);
}

void QMargins_CopyAssign(QMargins* self, QMargins* other) {
    *self = *other;
}

void QMargins_MoveAssign(QMargins* self, QMargins* other) {
    *self = std::move(*other);
}

bool QMargins_IsNull(const QMargins* self) {
    return self->isNull();
}

int QMargins_Left(const QMargins* self) {
    return self->left();
}

int QMargins_Top(const QMargins* self) {
    return self->top();
}

int QMargins_Right(const QMargins* self) {
    return self->right();
}

int QMargins_Bottom(const QMargins* self) {
    return self->bottom();
}

void QMargins_SetLeft(QMargins* self, int left) {
    self->setLeft(static_cast<int>(left));
}

void QMargins_SetTop(QMargins* self, int top) {
    self->setTop(static_cast<int>(top));
}

void QMargins_SetRight(QMargins* self, int right) {
    self->setRight(static_cast<int>(right));
}

void QMargins_SetBottom(QMargins* self, int bottom) {
    self->setBottom(static_cast<int>(bottom));
}

QMargins* QMargins_OperatorPlusAssign(QMargins* self, const QMargins* margins) {
    QMargins& _ret = self->operator+=(*margins);
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMargins_OperatorMinusAssign(QMargins* self, const QMargins* margins) {
    QMargins& _ret = self->operator-=(*margins);
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMargins_OperatorPlusAssignWithInt(QMargins* self, int param1) {
    QMargins& _ret = self->operator+=(static_cast<int>(param1));
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMargins_OperatorMinusAssignWithInt(QMargins* self, int param1) {
    QMargins& _ret = self->operator-=(static_cast<int>(param1));
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMargins_OperatorMultiplyAssign(QMargins* self, int param1) {
    QMargins& _ret = self->operator*=(static_cast<int>(param1));
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMargins_OperatorDivideAssign(QMargins* self, int param1) {
    QMargins& _ret = self->operator/=(static_cast<int>(param1));
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMargins_OperatorMultiplyAssignWithDouble(QMargins* self, double param1) {
    QMargins& _ret = self->operator*=(static_cast<double>(param1));
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMargins_OperatorDivideAssignWithDouble(QMargins* self, double param1) {
    QMargins& _ret = self->operator/=(static_cast<double>(param1));
    // Cast returned reference into pointer
    return &_ret;
}

QMarginsF* QMargins_ToMarginsF(const QMargins* self) {
    return new QMarginsF(self->toMarginsF());
}

void QMargins_Delete(QMargins* self) {
    delete self;
}

QMarginsF* QMarginsF_new(const QMarginsF* other) {
    return new QMarginsF(*other);
}

QMarginsF* QMarginsF_new2(QMarginsF* other) {
    return new QMarginsF(std::move(*other));
}

QMarginsF* QMarginsF_new3() {
    return new QMarginsF();
}

QMarginsF* QMarginsF_new4(double left, double top, double right, double bottom) {
    return new QMarginsF(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

QMarginsF* QMarginsF_new5(const QMargins* margins) {
    return new QMarginsF(*margins);
}

QMarginsF* QMarginsF_new6(const QMarginsF* param1) {
    return new QMarginsF(*param1);
}

void QMarginsF_CopyAssign(QMarginsF* self, QMarginsF* other) {
    *self = *other;
}

void QMarginsF_MoveAssign(QMarginsF* self, QMarginsF* other) {
    *self = std::move(*other);
}

bool QMarginsF_IsNull(const QMarginsF* self) {
    return self->isNull();
}

double QMarginsF_Left(const QMarginsF* self) {
    return static_cast<double>(self->left());
}

double QMarginsF_Top(const QMarginsF* self) {
    return static_cast<double>(self->top());
}

double QMarginsF_Right(const QMarginsF* self) {
    return static_cast<double>(self->right());
}

double QMarginsF_Bottom(const QMarginsF* self) {
    return static_cast<double>(self->bottom());
}

void QMarginsF_SetLeft(QMarginsF* self, double aleft) {
    self->setLeft(static_cast<qreal>(aleft));
}

void QMarginsF_SetTop(QMarginsF* self, double atop) {
    self->setTop(static_cast<qreal>(atop));
}

void QMarginsF_SetRight(QMarginsF* self, double aright) {
    self->setRight(static_cast<qreal>(aright));
}

void QMarginsF_SetBottom(QMarginsF* self, double abottom) {
    self->setBottom(static_cast<qreal>(abottom));
}

QMarginsF* QMarginsF_OperatorPlusAssign(QMarginsF* self, const QMarginsF* margins) {
    QMarginsF& _ret = self->operator+=(*margins);
    // Cast returned reference into pointer
    return &_ret;
}

QMarginsF* QMarginsF_OperatorMinusAssign(QMarginsF* self, const QMarginsF* margins) {
    QMarginsF& _ret = self->operator-=(*margins);
    // Cast returned reference into pointer
    return &_ret;
}

QMarginsF* QMarginsF_OperatorPlusAssignWithAddend(QMarginsF* self, double addend) {
    QMarginsF& _ret = self->operator+=(static_cast<qreal>(addend));
    // Cast returned reference into pointer
    return &_ret;
}

QMarginsF* QMarginsF_OperatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend) {
    QMarginsF& _ret = self->operator-=(static_cast<qreal>(subtrahend));
    // Cast returned reference into pointer
    return &_ret;
}

QMarginsF* QMarginsF_OperatorMultiplyAssign(QMarginsF* self, double factor) {
    QMarginsF& _ret = self->operator*=(static_cast<qreal>(factor));
    // Cast returned reference into pointer
    return &_ret;
}

QMarginsF* QMarginsF_OperatorDivideAssign(QMarginsF* self, double divisor) {
    QMarginsF& _ret = self->operator/=(static_cast<qreal>(divisor));
    // Cast returned reference into pointer
    return &_ret;
}

QMargins* QMarginsF_ToMargins(const QMarginsF* self) {
    return new QMargins(self->toMargins());
}

void QMarginsF_Delete(QMarginsF* self) {
    delete self;
}
