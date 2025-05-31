#include <QAccessible>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__ActivationObserver
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QObject>
#include <QPair>
#include <QTextCursor>
#include <qaccessible_base.h>
#include "libqaccessible_base.h"
#include "libqaccessible_base.hxx"

QAccessible* QAccessible_new(const QAccessible* other) {
    return new QAccessible(*other);
}

QAccessible* QAccessible_new2(QAccessible* other) {
    return new QAccessible(std::move(*other));
}

void QAccessible_CopyAssign(QAccessible* self, QAccessible* other) {
    *self = *other;
}

void QAccessible_MoveAssign(QAccessible* self, QAccessible* other) {
    *self = std::move(*other);
}

void QAccessible_InstallActivationObserver(QAccessible__ActivationObserver* param1) {
    QAccessible::installActivationObserver(param1);
}

void QAccessible_RemoveActivationObserver(QAccessible__ActivationObserver* param1) {
    QAccessible::removeActivationObserver(param1);
}

QAccessibleInterface* QAccessible_QueryAccessibleInterface(QObject* param1) {
    return QAccessible::queryAccessibleInterface(param1);
}

unsigned int QAccessible_UniqueId(QAccessibleInterface* iface) {
    return static_cast<unsigned int>(QAccessible::uniqueId(iface));
}

QAccessibleInterface* QAccessible_AccessibleInterface(unsigned int uniqueId) {
    return QAccessible::accessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

unsigned int QAccessible_RegisterAccessibleInterface(QAccessibleInterface* iface) {
    return static_cast<unsigned int>(QAccessible::registerAccessibleInterface(iface));
}

void QAccessible_DeleteAccessibleInterface(unsigned int uniqueId) {
    QAccessible::deleteAccessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

void QAccessible_UpdateAccessibility(QAccessibleEvent* event) {
    QAccessible::updateAccessibility(event);
}

bool QAccessible_IsActive() {
    return QAccessible::isActive();
}

void QAccessible_SetActive(bool active) {
    QAccessible::setActive(active);
}

void QAccessible_SetRootObject(QObject* object) {
    QAccessible::setRootObject(object);
}

void QAccessible_Cleanup() {
    QAccessible::cleanup();
}

libqt_pair /* tuple of int and int */ QAccessible_QAccessibleTextBoundaryHelper(const QTextCursor* cursor, int boundaryType) {
    QPair<int, int> _ret = QAccessible::qAccessibleTextBoundaryHelper(*cursor, static_cast<QAccessible::TextBoundaryType>(boundaryType));
    // Convert QPair<> from C++ memory to manually-managed C memory
    int* _first = static_cast<int*>(malloc(sizeof(int)));
    int* _second = static_cast<int*>(malloc(sizeof(int)));
    *_first = _ret.first;
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

void QAccessible_Delete(QAccessible* self) {
    delete self;
}

QAccessible__State* QAccessible__State_new(const QAccessible__State* other) {
    return new QAccessible::State(*other);
}

QAccessible__State* QAccessible__State_new2(QAccessible__State* other) {
    return new QAccessible::State(std::move(*other));
}

QAccessible__State* QAccessible__State_new3() {
    return new QAccessible::State();
}

void QAccessible__State_CopyAssign(QAccessible__State* self, QAccessible__State* other) {
    *self = *other;
}

void QAccessible__State_MoveAssign(QAccessible__State* self, QAccessible__State* other) {
    *self = std::move(*other);
}

void QAccessible__State_Delete(QAccessible__State* self) {
    delete self;
}

void QAccessible__ActivationObserver_AccessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active) {
    self->accessibilityActiveChanged(active);
}

void QAccessible__ActivationObserver_OperatorAssign(QAccessible__ActivationObserver* self, const QAccessible__ActivationObserver* param1) {
    self->operator=(*param1);
}

void QAccessible__ActivationObserver_Delete(QAccessible__ActivationObserver* self) {
    delete self;
}
