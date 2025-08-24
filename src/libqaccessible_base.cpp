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

unsigned long long QAccessible__State_Disabled(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->disabled);
}

void QAccessible__State_SetDisabled(QAccessible__State* self, unsigned long long disabled) {
    self->disabled = static_cast<quint64>(disabled);
}

unsigned long long QAccessible__State_Selected(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->selected);
}

void QAccessible__State_SetSelected(QAccessible__State* self, unsigned long long selected) {
    self->selected = static_cast<quint64>(selected);
}

unsigned long long QAccessible__State_Focusable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->focusable);
}

void QAccessible__State_SetFocusable(QAccessible__State* self, unsigned long long focusable) {
    self->focusable = static_cast<quint64>(focusable);
}

unsigned long long QAccessible__State_Focused(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->focused);
}

void QAccessible__State_SetFocused(QAccessible__State* self, unsigned long long focused) {
    self->focused = static_cast<quint64>(focused);
}

unsigned long long QAccessible__State_Pressed(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->pressed);
}

void QAccessible__State_SetPressed(QAccessible__State* self, unsigned long long pressed) {
    self->pressed = static_cast<quint64>(pressed);
}

unsigned long long QAccessible__State_Checkable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->checkable);
}

void QAccessible__State_SetCheckable(QAccessible__State* self, unsigned long long checkable) {
    self->checkable = static_cast<quint64>(checkable);
}

unsigned long long QAccessible__State_Checked(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->checked);
}

void QAccessible__State_SetChecked(QAccessible__State* self, unsigned long long checked) {
    self->checked = static_cast<quint64>(checked);
}

unsigned long long QAccessible__State_CheckStateMixed(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->checkStateMixed);
}

void QAccessible__State_SetCheckStateMixed(QAccessible__State* self, unsigned long long checkStateMixed) {
    self->checkStateMixed = static_cast<quint64>(checkStateMixed);
}

unsigned long long QAccessible__State_ReadOnly(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->readOnly);
}

void QAccessible__State_SetReadOnly(QAccessible__State* self, unsigned long long readOnly) {
    self->readOnly = static_cast<quint64>(readOnly);
}

unsigned long long QAccessible__State_HotTracked(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->hotTracked);
}

void QAccessible__State_SetHotTracked(QAccessible__State* self, unsigned long long hotTracked) {
    self->hotTracked = static_cast<quint64>(hotTracked);
}

unsigned long long QAccessible__State_DefaultButton(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->defaultButton);
}

void QAccessible__State_SetDefaultButton(QAccessible__State* self, unsigned long long defaultButton) {
    self->defaultButton = static_cast<quint64>(defaultButton);
}

unsigned long long QAccessible__State_Expanded(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->expanded);
}

void QAccessible__State_SetExpanded(QAccessible__State* self, unsigned long long expanded) {
    self->expanded = static_cast<quint64>(expanded);
}

unsigned long long QAccessible__State_Collapsed(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->collapsed);
}

void QAccessible__State_SetCollapsed(QAccessible__State* self, unsigned long long collapsed) {
    self->collapsed = static_cast<quint64>(collapsed);
}

unsigned long long QAccessible__State_Busy(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->busy);
}

void QAccessible__State_SetBusy(QAccessible__State* self, unsigned long long busy) {
    self->busy = static_cast<quint64>(busy);
}

unsigned long long QAccessible__State_Expandable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->expandable);
}

void QAccessible__State_SetExpandable(QAccessible__State* self, unsigned long long expandable) {
    self->expandable = static_cast<quint64>(expandable);
}

unsigned long long QAccessible__State_Marqueed(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->marqueed);
}

void QAccessible__State_SetMarqueed(QAccessible__State* self, unsigned long long marqueed) {
    self->marqueed = static_cast<quint64>(marqueed);
}

unsigned long long QAccessible__State_Animated(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->animated);
}

void QAccessible__State_SetAnimated(QAccessible__State* self, unsigned long long animated) {
    self->animated = static_cast<quint64>(animated);
}

unsigned long long QAccessible__State_Invisible(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->invisible);
}

void QAccessible__State_SetInvisible(QAccessible__State* self, unsigned long long invisible) {
    self->invisible = static_cast<quint64>(invisible);
}

unsigned long long QAccessible__State_Offscreen(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->offscreen);
}

void QAccessible__State_SetOffscreen(QAccessible__State* self, unsigned long long offscreen) {
    self->offscreen = static_cast<quint64>(offscreen);
}

unsigned long long QAccessible__State_Sizeable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->sizeable);
}

void QAccessible__State_SetSizeable(QAccessible__State* self, unsigned long long sizeable) {
    self->sizeable = static_cast<quint64>(sizeable);
}

unsigned long long QAccessible__State_Movable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->movable);
}

void QAccessible__State_SetMovable(QAccessible__State* self, unsigned long long movable) {
    self->movable = static_cast<quint64>(movable);
}

unsigned long long QAccessible__State_SelfVoicing(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->selfVoicing);
}

void QAccessible__State_SetSelfVoicing(QAccessible__State* self, unsigned long long selfVoicing) {
    self->selfVoicing = static_cast<quint64>(selfVoicing);
}

unsigned long long QAccessible__State_Selectable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->selectable);
}

void QAccessible__State_SetSelectable(QAccessible__State* self, unsigned long long selectable) {
    self->selectable = static_cast<quint64>(selectable);
}

unsigned long long QAccessible__State_Linked(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->linked);
}

void QAccessible__State_SetLinked(QAccessible__State* self, unsigned long long linked) {
    self->linked = static_cast<quint64>(linked);
}

unsigned long long QAccessible__State_Traversed(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->traversed);
}

void QAccessible__State_SetTraversed(QAccessible__State* self, unsigned long long traversed) {
    self->traversed = static_cast<quint64>(traversed);
}

unsigned long long QAccessible__State_MultiSelectable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->multiSelectable);
}

void QAccessible__State_SetMultiSelectable(QAccessible__State* self, unsigned long long multiSelectable) {
    self->multiSelectable = static_cast<quint64>(multiSelectable);
}

unsigned long long QAccessible__State_ExtSelectable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->extSelectable);
}

void QAccessible__State_SetExtSelectable(QAccessible__State* self, unsigned long long extSelectable) {
    self->extSelectable = static_cast<quint64>(extSelectable);
}

unsigned long long QAccessible__State_PasswordEdit(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->passwordEdit);
}

void QAccessible__State_SetPasswordEdit(QAccessible__State* self, unsigned long long passwordEdit) {
    self->passwordEdit = static_cast<quint64>(passwordEdit);
}

unsigned long long QAccessible__State_HasPopup(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->hasPopup);
}

void QAccessible__State_SetHasPopup(QAccessible__State* self, unsigned long long hasPopup) {
    self->hasPopup = static_cast<quint64>(hasPopup);
}

unsigned long long QAccessible__State_Modal(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->modal);
}

void QAccessible__State_SetModal(QAccessible__State* self, unsigned long long modal) {
    self->modal = static_cast<quint64>(modal);
}

unsigned long long QAccessible__State_Active(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->active);
}

void QAccessible__State_SetActive(QAccessible__State* self, unsigned long long active) {
    self->active = static_cast<quint64>(active);
}

unsigned long long QAccessible__State_Invalid(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->invalid);
}

void QAccessible__State_SetInvalid(QAccessible__State* self, unsigned long long invalid) {
    self->invalid = static_cast<quint64>(invalid);
}

unsigned long long QAccessible__State_Editable(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->editable);
}

void QAccessible__State_SetEditable(QAccessible__State* self, unsigned long long editable) {
    self->editable = static_cast<quint64>(editable);
}

unsigned long long QAccessible__State_MultiLine(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->multiLine);
}

void QAccessible__State_SetMultiLine(QAccessible__State* self, unsigned long long multiLine) {
    self->multiLine = static_cast<quint64>(multiLine);
}

unsigned long long QAccessible__State_SelectableText(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->selectableText);
}

void QAccessible__State_SetSelectableText(QAccessible__State* self, unsigned long long selectableText) {
    self->selectableText = static_cast<quint64>(selectableText);
}

unsigned long long QAccessible__State_SupportsAutoCompletion(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->supportsAutoCompletion);
}

void QAccessible__State_SetSupportsAutoCompletion(QAccessible__State* self, unsigned long long supportsAutoCompletion) {
    self->supportsAutoCompletion = static_cast<quint64>(supportsAutoCompletion);
}

unsigned long long QAccessible__State_SearchEdit(const QAccessible__State* self) {
    return static_cast<unsigned long long>(self->searchEdit);
}

void QAccessible__State_SetSearchEdit(QAccessible__State* self, unsigned long long searchEdit) {
    self->searchEdit = static_cast<quint64>(searchEdit);
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
