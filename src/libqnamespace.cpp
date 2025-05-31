#include <QInternal>
#include <QKeyCombination>
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qnamespace.h>
#include "libqnamespace.h"
#include "libqnamespace.hxx"

Disambiguated_t* Disambiguated_t_new(const Disambiguated_t* other) {
    return new Qt::Disambiguated_t(*other);
}

Disambiguated_t* Disambiguated_t_new2(Disambiguated_t* other) {
    return new Qt::Disambiguated_t(std::move(*other));
}

Disambiguated_t* Disambiguated_t_new3() {
    return new Qt::Disambiguated_t();
}

Disambiguated_t* Disambiguated_t_new4(const Disambiguated_t* param1) {
    return new Qt::Disambiguated_t(*param1);
}

void Disambiguated_t_CopyAssign(Disambiguated_t* self, Disambiguated_t* other) {
    *self = *other;
}

void Disambiguated_t_MoveAssign(Disambiguated_t* self, Disambiguated_t* other) {
    *self = std::move(*other);
}

void Disambiguated_t_Delete(Disambiguated_t* self) {
    delete self;
}

QInternal* QInternal_new(const QInternal* other) {
    return new QInternal(*other);
}

QInternal* QInternal_new2(QInternal* other) {
    return new QInternal(std::move(*other));
}

void QInternal_CopyAssign(QInternal* self, QInternal* other) {
    *self = *other;
}

void QInternal_MoveAssign(QInternal* self, QInternal* other) {
    *self = std::move(*other);
}

bool QInternal_ActivateCallbacks(int param1, void** param2) {
    return QInternal::activateCallbacks(static_cast<QInternal::Callback>(param1), param2);
}

void QInternal_Delete(QInternal* self) {
    delete self;
}

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
