#pragma once
#ifndef LIBQACCESSIBLEOBJECT_H
#define LIBQACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#endif
#else
typedef struct QAccessibleApplication QAccessibleApplication;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QAccessible__State QAccessible__State;
typedef struct QColor QColor;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWindow QWindow;
#endif

struct pair_qaccessibleinterface_int;

typedef struct pair_qaccessibleinterface_int pair_qaccessibleinterface_int;

#ifndef PAIR_QACCESSIBLEINTERFACE_INT
#define PAIR_QACCESSIBLEINTERFACE_INT
struct pair_qaccessibleinterface_int {
    QAccessibleInterface* first;
    int second;
};
#endif

QAccessibleObject* QAccessibleObject_new(QObject* object);
bool QAccessibleObject_IsValid(const QAccessibleObject* self);
QObject* QAccessibleObject_Object(const QAccessibleObject* self);
QRect* QAccessibleObject_Rect(const QAccessibleObject* self);
void QAccessibleObject_SetText(QAccessibleObject* self, int t, const libqt_string text);
QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y);
void QAccessibleObject_OnIsValid(QAccessibleObject* self, intptr_t slot);
bool QAccessibleObject_SuperIsValid(const QAccessibleObject* self);
void QAccessibleObject_OnObject(QAccessibleObject* self, intptr_t slot);
QObject* QAccessibleObject_SuperObject(const QAccessibleObject* self);
void QAccessibleObject_OnRect(QAccessibleObject* self, intptr_t slot);
QRect* QAccessibleObject_SuperRect(const QAccessibleObject* self);
void QAccessibleObject_OnSetText(QAccessibleObject* self, intptr_t slot);
void QAccessibleObject_SuperSetText(QAccessibleObject* self, int t, const libqt_string text);
void QAccessibleObject_OnChildAt(QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_SuperChildAt(const QAccessibleObject* self, int x, int y);
QWindow* QAccessibleObject_Window(const QAccessibleObject* self);
void QAccessibleObject_OnWindow(QAccessibleObject* self, intptr_t slot);
QWindow* QAccessibleObject_SuperWindow(const QAccessibleObject* self);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleObject_Relations(const QAccessibleObject* self, int match);
void QAccessibleObject_OnRelations(QAccessibleObject* self, intptr_t slot);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleObject_SuperRelations(const QAccessibleObject* self, int match);
QAccessibleInterface* QAccessibleObject_FocusChild(const QAccessibleObject* self);
void QAccessibleObject_OnFocusChild(QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_SuperFocusChild(const QAccessibleObject* self);
QAccessibleInterface* QAccessibleObject_Parent(const QAccessibleObject* self);
void QAccessibleObject_OnParent(QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_Child(const QAccessibleObject* self, int index);
void QAccessibleObject_OnChild(QAccessibleObject* self, intptr_t slot);
int QAccessibleObject_ChildCount(const QAccessibleObject* self);
void QAccessibleObject_OnChildCount(QAccessibleObject* self, intptr_t slot);
int QAccessibleObject_IndexOfChild(const QAccessibleObject* self, const QAccessibleInterface* param1);
void QAccessibleObject_OnIndexOfChild(QAccessibleObject* self, intptr_t slot);
libqt_string QAccessibleObject_Text(const QAccessibleObject* self, int t);
void QAccessibleObject_OnText(QAccessibleObject* self, intptr_t slot);
int QAccessibleObject_Role(const QAccessibleObject* self);
void QAccessibleObject_OnRole(QAccessibleObject* self, intptr_t slot);
QAccessible__State* QAccessibleObject_State(const QAccessibleObject* self);
void QAccessibleObject_OnState(QAccessibleObject* self, intptr_t slot);
QColor* QAccessibleObject_ForegroundColor(const QAccessibleObject* self);
void QAccessibleObject_OnForegroundColor(QAccessibleObject* self, intptr_t slot);
QColor* QAccessibleObject_SuperForegroundColor(const QAccessibleObject* self);
QColor* QAccessibleObject_BackgroundColor(const QAccessibleObject* self);
void QAccessibleObject_OnBackgroundColor(QAccessibleObject* self, intptr_t slot);
QColor* QAccessibleObject_SuperBackgroundColor(const QAccessibleObject* self);
void QAccessibleObject_VirtualHook(QAccessibleObject* self, int id, void* data);
void QAccessibleObject_OnVirtualHook(QAccessibleObject* self, intptr_t slot);
void QAccessibleObject_SuperVirtualHook(QAccessibleObject* self, int id, void* data);
void* QAccessibleObject_InterfaceCast(QAccessibleObject* self, int param1);
void QAccessibleObject_OnInterfaceCast(QAccessibleObject* self, intptr_t slot);
void* QAccessibleObject_SuperInterfaceCast(QAccessibleObject* self, int param1);

QAccessibleApplication* QAccessibleApplication_new();
QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self);
int QAccessibleApplication_ChildCount(const QAccessibleApplication* self);
int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1);
QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index);
libqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t);
int QAccessibleApplication_Role(const QAccessibleApplication* self);
QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self);
void QAccessibleApplication_OnWindow(QAccessibleApplication* self, intptr_t slot);
QWindow* QAccessibleApplication_SuperWindow(const QAccessibleApplication* self);
void QAccessibleApplication_OnChildCount(QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_SuperChildCount(const QAccessibleApplication* self);
void QAccessibleApplication_OnIndexOfChild(QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_SuperIndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1);
void QAccessibleApplication_OnFocusChild(QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperFocusChild(const QAccessibleApplication* self);
void QAccessibleApplication_OnParent(QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperParent(const QAccessibleApplication* self);
void QAccessibleApplication_OnChild(QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperChild(const QAccessibleApplication* self, int index);
void QAccessibleApplication_OnText(QAccessibleApplication* self, intptr_t slot);
libqt_string QAccessibleApplication_SuperText(const QAccessibleApplication* self, int t);
void QAccessibleApplication_OnRole(QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_SuperRole(const QAccessibleApplication* self);
void QAccessibleApplication_OnState(QAccessibleApplication* self, intptr_t slot);
QAccessible__State* QAccessibleApplication_SuperState(const QAccessibleApplication* self);
bool QAccessibleApplication_IsValid(const QAccessibleApplication* self);
void QAccessibleApplication_OnIsValid(QAccessibleApplication* self, intptr_t slot);
bool QAccessibleApplication_SuperIsValid(const QAccessibleApplication* self);
QObject* QAccessibleApplication_Object(const QAccessibleApplication* self);
void QAccessibleApplication_OnObject(QAccessibleApplication* self, intptr_t slot);
QObject* QAccessibleApplication_SuperObject(const QAccessibleApplication* self);
QRect* QAccessibleApplication_Rect(const QAccessibleApplication* self);
void QAccessibleApplication_OnRect(QAccessibleApplication* self, intptr_t slot);
QRect* QAccessibleApplication_SuperRect(const QAccessibleApplication* self);
void QAccessibleApplication_SetText(QAccessibleApplication* self, int t, const libqt_string text);
void QAccessibleApplication_OnSetText(QAccessibleApplication* self, intptr_t slot);
void QAccessibleApplication_SuperSetText(QAccessibleApplication* self, int t, const libqt_string text);
QAccessibleInterface* QAccessibleApplication_ChildAt(const QAccessibleApplication* self, int x, int y);
void QAccessibleApplication_OnChildAt(QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperChildAt(const QAccessibleApplication* self, int x, int y);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleApplication_Relations(const QAccessibleApplication* self, int match);
void QAccessibleApplication_OnRelations(QAccessibleApplication* self, intptr_t slot);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleApplication_SuperRelations(const QAccessibleApplication* self, int match);
QColor* QAccessibleApplication_ForegroundColor(const QAccessibleApplication* self);
void QAccessibleApplication_OnForegroundColor(QAccessibleApplication* self, intptr_t slot);
QColor* QAccessibleApplication_SuperForegroundColor(const QAccessibleApplication* self);
QColor* QAccessibleApplication_BackgroundColor(const QAccessibleApplication* self);
void QAccessibleApplication_OnBackgroundColor(QAccessibleApplication* self, intptr_t slot);
QColor* QAccessibleApplication_SuperBackgroundColor(const QAccessibleApplication* self);
void QAccessibleApplication_VirtualHook(QAccessibleApplication* self, int id, void* data);
void QAccessibleApplication_OnVirtualHook(QAccessibleApplication* self, intptr_t slot);
void QAccessibleApplication_SuperVirtualHook(QAccessibleApplication* self, int id, void* data);
void* QAccessibleApplication_InterfaceCast(QAccessibleApplication* self, int param1);
void QAccessibleApplication_OnInterfaceCast(QAccessibleApplication* self, intptr_t slot);
void* QAccessibleApplication_SuperInterfaceCast(QAccessibleApplication* self, int param1);
void QAccessibleApplication_Delete(QAccessibleApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
