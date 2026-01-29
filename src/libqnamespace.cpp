#include <QKeyCombination>
#include <qnamespace.h>
#include "libqnamespace.h"
#include "libqnamespace.hxx"

QKeyCombination* QKeyCombination_new(const QKeyCombination* other) {
    return new QKeyCombination(*other);
}

QKeyCombination* QKeyCombination_new2(QKeyCombination* other) {
    return new QKeyCombination(std::move(*other));
}

QKeyCombination* QKeyCombination_new3() {
    return new QKeyCombination();
}

QKeyCombination* QKeyCombination_new4(int modifiers) {
    return new QKeyCombination(static_cast<Qt::Modifiers>(modifiers));
}

QKeyCombination* QKeyCombination_new5(int modifiers) {
    return new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyCombination* QKeyCombination_new6(const QKeyCombination* param1) {
    return new QKeyCombination(*param1);
}

QKeyCombination* QKeyCombination_new7(int key) {
    return new QKeyCombination(static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new8(int modifiers, int key) {
    return new QKeyCombination(static_cast<Qt::Modifiers>(modifiers), static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new9(int modifiers, int key) {
    return new QKeyCombination(static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Key>(key));
}

void QKeyCombination_CopyAssign(QKeyCombination* self, QKeyCombination* other) {
    *self = *other;
}

void QKeyCombination_MoveAssign(QKeyCombination* self, QKeyCombination* other) {
    *self = std::move(*other);
}

int QKeyCombination_KeyboardModifiers(const QKeyCombination* self) {
    return static_cast<int>(self->keyboardModifiers());
}

int QKeyCombination_Key(const QKeyCombination* self) {
    return static_cast<int>(self->key());
}

QKeyCombination* QKeyCombination_FromCombined(int combined) {
    return new QKeyCombination(QKeyCombination::fromCombined(static_cast<int>(combined)));
}

int QKeyCombination_ToCombined(const QKeyCombination* self) {
    return self->toCombined();
}

int QKeyCombination_ToInt(const QKeyCombination* self) {
    return self->operator int();
}

void QKeyCombination_Delete(QKeyCombination* self) {
    delete self;
}
