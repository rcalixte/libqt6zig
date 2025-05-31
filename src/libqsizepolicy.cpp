#include <QSizePolicy>
#include <QVariant>
#include <qsizepolicy.h>
#include "libqsizepolicy.h"
#include "libqsizepolicy.hxx"

QSizePolicy* QSizePolicy_new(const QSizePolicy* other) {
    return new QSizePolicy(*other);
}

QSizePolicy* QSizePolicy_new2(QSizePolicy* other) {
    return new QSizePolicy(std::move(*other));
}

QSizePolicy* QSizePolicy_new3() {
    return new QSizePolicy();
}

QSizePolicy* QSizePolicy_new4(int horizontal, int vertical) {
    return new QSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

QSizePolicy* QSizePolicy_new5(const QSizePolicy* param1) {
    return new QSizePolicy(*param1);
}

QSizePolicy* QSizePolicy_new6(int horizontal, int vertical, int typeVal) {
    return new QSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical), static_cast<QSizePolicy::ControlType>(typeVal));
}

void QSizePolicy_CopyAssign(QSizePolicy* self, QSizePolicy* other) {
    *self = *other;
}

void QSizePolicy_MoveAssign(QSizePolicy* self, QSizePolicy* other) {
    *self = std::move(*other);
}

int QSizePolicy_HorizontalPolicy(const QSizePolicy* self) {
    return static_cast<int>(self->horizontalPolicy());
}

int QSizePolicy_VerticalPolicy(const QSizePolicy* self) {
    return static_cast<int>(self->verticalPolicy());
}

int QSizePolicy_ControlType(const QSizePolicy* self) {
    return static_cast<int>(self->controlType());
}

void QSizePolicy_SetHorizontalPolicy(QSizePolicy* self, int d) {
    self->setHorizontalPolicy(static_cast<QSizePolicy::Policy>(d));
}

void QSizePolicy_SetVerticalPolicy(QSizePolicy* self, int d) {
    self->setVerticalPolicy(static_cast<QSizePolicy::Policy>(d));
}

void QSizePolicy_SetControlType(QSizePolicy* self, int typeVal) {
    self->setControlType(static_cast<QSizePolicy::ControlType>(typeVal));
}

int QSizePolicy_ExpandingDirections(const QSizePolicy* self) {
    return static_cast<int>(self->expandingDirections());
}

void QSizePolicy_SetHeightForWidth(QSizePolicy* self, bool b) {
    self->setHeightForWidth(b);
}

bool QSizePolicy_HasHeightForWidth(const QSizePolicy* self) {
    return self->hasHeightForWidth();
}

void QSizePolicy_SetWidthForHeight(QSizePolicy* self, bool b) {
    self->setWidthForHeight(b);
}

bool QSizePolicy_HasWidthForHeight(const QSizePolicy* self) {
    return self->hasWidthForHeight();
}

bool QSizePolicy_OperatorEqual(const QSizePolicy* self, const QSizePolicy* s) {
    return (*self == *s);
}

bool QSizePolicy_OperatorNotEqual(const QSizePolicy* self, const QSizePolicy* s) {
    return (*self != *s);
}

QVariant* QSizePolicy_ToQVariant(const QSizePolicy* self) {
    return new QVariant(self->operator QVariant());
}

int QSizePolicy_HorizontalStretch(const QSizePolicy* self) {
    return self->horizontalStretch();
}

int QSizePolicy_VerticalStretch(const QSizePolicy* self) {
    return self->verticalStretch();
}

void QSizePolicy_SetHorizontalStretch(QSizePolicy* self, int stretchFactor) {
    self->setHorizontalStretch(static_cast<int>(stretchFactor));
}

void QSizePolicy_SetVerticalStretch(QSizePolicy* self, int stretchFactor) {
    self->setVerticalStretch(static_cast<int>(stretchFactor));
}

bool QSizePolicy_RetainSizeWhenHidden(const QSizePolicy* self) {
    return self->retainSizeWhenHidden();
}

void QSizePolicy_SetRetainSizeWhenHidden(QSizePolicy* self, bool retainSize) {
    self->setRetainSizeWhenHidden(retainSize);
}

void QSizePolicy_Transpose(QSizePolicy* self) {
    self->transpose();
}

QSizePolicy* QSizePolicy_Transposed(const QSizePolicy* self) {
    return new QSizePolicy(self->transposed());
}

void QSizePolicy_Delete(QSizePolicy* self) {
    delete self;
}
