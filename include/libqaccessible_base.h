#pragma once
#ifndef SRCC_LIBQACCESSIBLE_BASE_H
#define SRCC_LIBQACCESSIBLE_BASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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

#ifdef __cplusplus
typedef QAccessible::Event Event;                         // C++ enum
typedef QAccessible::Id Id;                               // C++ QFlags
typedef QAccessible::InterfaceFactory InterfaceFactory;   // C++ QFlags
typedef QAccessible::InterfaceType InterfaceType;         // C++ enum
typedef QAccessible::QtGadgetHelper QtGadgetHelper;       // C++ QFlags
typedef QAccessible::Relation Relation;                   // C++ QFlags
typedef QAccessible::RelationFlag RelationFlag;           // C++ enum
typedef QAccessible::Role Role;                           // C++ enum
typedef QAccessible::RootObjectHandler RootObjectHandler; // C++ QFlags
typedef QAccessible::Text Text;                           // C++ enum
typedef QAccessible::TextBoundaryType TextBoundaryType;   // C++ enum
typedef QAccessible::UpdateHandler UpdateHandler;         // C++ QFlags
#else
typedef int Event;            // C ABI enum
typedef int InterfaceType;    // C ABI enum
typedef int Relation;         // C ABI QFlags
typedef int RelationFlag;     // C ABI enum
typedef int Role;             // C ABI enum
typedef int Text;             // C ABI enum
typedef int TextBoundaryType; // C ABI enum
typedef unsigned int Id;      // C ABI QFlags
typedef void QtGadgetHelper;  // C ABI QFlags
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
void QAccessible__State_Delete(QAccessible__State* self);

void QAccessible__ActivationObserver_AccessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active);
void QAccessible__ActivationObserver_OperatorAssign(QAccessible__ActivationObserver* self, const QAccessible__ActivationObserver* param1);
void QAccessible__ActivationObserver_Delete(QAccessible__ActivationObserver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
