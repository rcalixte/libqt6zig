#pragma once
#ifndef SRCC_LIBQACCESSIBLE_BASE_H
#define SRCC_LIBQACCESSIBLE_BASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__ActivationObserver)
typedef QAccessible::ActivationObserver QAccessible__ActivationObserver;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#endif
#else
typedef struct QAccessible QAccessible;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessible__ActivationObserver QAccessible__ActivationObserver;
typedef struct QAccessible__State QAccessible__State;
typedef struct QObject QObject;
typedef struct QTextCursor QTextCursor;
#endif

QAccessible* QAccessible_new(const QAccessible* other);
QAccessible* QAccessible_new2(QAccessible* other);
void QAccessible_CopyAssign(QAccessible* self, QAccessible* other);
void QAccessible_MoveAssign(QAccessible* self, QAccessible* other);
void QAccessible_InstallActivationObserver(QAccessible__ActivationObserver* param1);
void QAccessible_RemoveActivationObserver(QAccessible__ActivationObserver* param1);
QAccessibleInterface* QAccessible_QueryAccessibleInterface(QObject* param1);
unsigned int QAccessible_UniqueId(QAccessibleInterface* iface);
QAccessibleInterface* QAccessible_AccessibleInterface(unsigned int uniqueId);
unsigned int QAccessible_RegisterAccessibleInterface(QAccessibleInterface* iface);
void QAccessible_DeleteAccessibleInterface(unsigned int uniqueId);
void QAccessible_UpdateAccessibility(QAccessibleEvent* event);
bool QAccessible_IsActive();
void QAccessible_SetActive(bool active);
void QAccessible_SetRootObject(QObject* object);
void QAccessible_Cleanup();
libqt_pair /* tuple of int and int */ QAccessible_QAccessibleTextBoundaryHelper(const QTextCursor* cursor, int boundaryType);
void QAccessible_Delete(QAccessible* self);

QAccessible__State* QAccessible__State_new(const QAccessible__State* other);
QAccessible__State* QAccessible__State_new2(QAccessible__State* other);
QAccessible__State* QAccessible__State_new3();
void QAccessible__State_CopyAssign(QAccessible__State* self, QAccessible__State* other);
void QAccessible__State_MoveAssign(QAccessible__State* self, QAccessible__State* other);
unsigned long long QAccessible__State_Disabled(const QAccessible__State* self);
void QAccessible__State_SetDisabled(QAccessible__State* self, unsigned long long disabled);
unsigned long long QAccessible__State_Selected(const QAccessible__State* self);
void QAccessible__State_SetSelected(QAccessible__State* self, unsigned long long selected);
unsigned long long QAccessible__State_Focusable(const QAccessible__State* self);
void QAccessible__State_SetFocusable(QAccessible__State* self, unsigned long long focusable);
unsigned long long QAccessible__State_Focused(const QAccessible__State* self);
void QAccessible__State_SetFocused(QAccessible__State* self, unsigned long long focused);
unsigned long long QAccessible__State_Pressed(const QAccessible__State* self);
void QAccessible__State_SetPressed(QAccessible__State* self, unsigned long long pressed);
unsigned long long QAccessible__State_Checkable(const QAccessible__State* self);
void QAccessible__State_SetCheckable(QAccessible__State* self, unsigned long long checkable);
unsigned long long QAccessible__State_Checked(const QAccessible__State* self);
void QAccessible__State_SetChecked(QAccessible__State* self, unsigned long long checked);
unsigned long long QAccessible__State_CheckStateMixed(const QAccessible__State* self);
void QAccessible__State_SetCheckStateMixed(QAccessible__State* self, unsigned long long checkStateMixed);
unsigned long long QAccessible__State_ReadOnly(const QAccessible__State* self);
void QAccessible__State_SetReadOnly(QAccessible__State* self, unsigned long long readOnly);
unsigned long long QAccessible__State_HotTracked(const QAccessible__State* self);
void QAccessible__State_SetHotTracked(QAccessible__State* self, unsigned long long hotTracked);
unsigned long long QAccessible__State_DefaultButton(const QAccessible__State* self);
void QAccessible__State_SetDefaultButton(QAccessible__State* self, unsigned long long defaultButton);
unsigned long long QAccessible__State_Expanded(const QAccessible__State* self);
void QAccessible__State_SetExpanded(QAccessible__State* self, unsigned long long expanded);
unsigned long long QAccessible__State_Collapsed(const QAccessible__State* self);
void QAccessible__State_SetCollapsed(QAccessible__State* self, unsigned long long collapsed);
unsigned long long QAccessible__State_Busy(const QAccessible__State* self);
void QAccessible__State_SetBusy(QAccessible__State* self, unsigned long long busy);
unsigned long long QAccessible__State_Expandable(const QAccessible__State* self);
void QAccessible__State_SetExpandable(QAccessible__State* self, unsigned long long expandable);
unsigned long long QAccessible__State_Marqueed(const QAccessible__State* self);
void QAccessible__State_SetMarqueed(QAccessible__State* self, unsigned long long marqueed);
unsigned long long QAccessible__State_Animated(const QAccessible__State* self);
void QAccessible__State_SetAnimated(QAccessible__State* self, unsigned long long animated);
unsigned long long QAccessible__State_Invisible(const QAccessible__State* self);
void QAccessible__State_SetInvisible(QAccessible__State* self, unsigned long long invisible);
unsigned long long QAccessible__State_Offscreen(const QAccessible__State* self);
void QAccessible__State_SetOffscreen(QAccessible__State* self, unsigned long long offscreen);
unsigned long long QAccessible__State_Sizeable(const QAccessible__State* self);
void QAccessible__State_SetSizeable(QAccessible__State* self, unsigned long long sizeable);
unsigned long long QAccessible__State_Movable(const QAccessible__State* self);
void QAccessible__State_SetMovable(QAccessible__State* self, unsigned long long movable);
unsigned long long QAccessible__State_SelfVoicing(const QAccessible__State* self);
void QAccessible__State_SetSelfVoicing(QAccessible__State* self, unsigned long long selfVoicing);
unsigned long long QAccessible__State_Selectable(const QAccessible__State* self);
void QAccessible__State_SetSelectable(QAccessible__State* self, unsigned long long selectable);
unsigned long long QAccessible__State_Linked(const QAccessible__State* self);
void QAccessible__State_SetLinked(QAccessible__State* self, unsigned long long linked);
unsigned long long QAccessible__State_Traversed(const QAccessible__State* self);
void QAccessible__State_SetTraversed(QAccessible__State* self, unsigned long long traversed);
unsigned long long QAccessible__State_MultiSelectable(const QAccessible__State* self);
void QAccessible__State_SetMultiSelectable(QAccessible__State* self, unsigned long long multiSelectable);
unsigned long long QAccessible__State_ExtSelectable(const QAccessible__State* self);
void QAccessible__State_SetExtSelectable(QAccessible__State* self, unsigned long long extSelectable);
unsigned long long QAccessible__State_PasswordEdit(const QAccessible__State* self);
void QAccessible__State_SetPasswordEdit(QAccessible__State* self, unsigned long long passwordEdit);
unsigned long long QAccessible__State_HasPopup(const QAccessible__State* self);
void QAccessible__State_SetHasPopup(QAccessible__State* self, unsigned long long hasPopup);
unsigned long long QAccessible__State_Modal(const QAccessible__State* self);
void QAccessible__State_SetModal(QAccessible__State* self, unsigned long long modal);
unsigned long long QAccessible__State_Active(const QAccessible__State* self);
void QAccessible__State_SetActive(QAccessible__State* self, unsigned long long active);
unsigned long long QAccessible__State_Invalid(const QAccessible__State* self);
void QAccessible__State_SetInvalid(QAccessible__State* self, unsigned long long invalid);
unsigned long long QAccessible__State_Editable(const QAccessible__State* self);
void QAccessible__State_SetEditable(QAccessible__State* self, unsigned long long editable);
unsigned long long QAccessible__State_MultiLine(const QAccessible__State* self);
void QAccessible__State_SetMultiLine(QAccessible__State* self, unsigned long long multiLine);
unsigned long long QAccessible__State_SelectableText(const QAccessible__State* self);
void QAccessible__State_SetSelectableText(QAccessible__State* self, unsigned long long selectableText);
unsigned long long QAccessible__State_SupportsAutoCompletion(const QAccessible__State* self);
void QAccessible__State_SetSupportsAutoCompletion(QAccessible__State* self, unsigned long long supportsAutoCompletion);
unsigned long long QAccessible__State_SearchEdit(const QAccessible__State* self);
void QAccessible__State_SetSearchEdit(QAccessible__State* self, unsigned long long searchEdit);
void QAccessible__State_Delete(QAccessible__State* self);

void QAccessible__ActivationObserver_AccessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active);
void QAccessible__ActivationObserver_OperatorAssign(QAccessible__ActivationObserver* self, const QAccessible__ActivationObserver* param1);
void QAccessible__ActivationObserver_Delete(QAccessible__ActivationObserver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
