#pragma once
#ifndef SRCC_LIBQACCESSIBLEOBJECT_H
#define SRCC_LIBQACCESSIBLEOBJECT_H

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
void QAccessibleObject_OnIsValid(const QAccessibleObject* self, intptr_t slot);
bool QAccessibleObject_SuperIsValid(const QAccessibleObject* self);
void QAccessibleObject_OnObject(const QAccessibleObject* self, intptr_t slot);
QObject* QAccessibleObject_SuperObject(const QAccessibleObject* self);
void QAccessibleObject_OnRect(const QAccessibleObject* self, intptr_t slot);
QRect* QAccessibleObject_SuperRect(const QAccessibleObject* self);
void QAccessibleObject_OnSetText(QAccessibleObject* self, intptr_t slot);
void QAccessibleObject_SuperSetText(QAccessibleObject* self, int t, const libqt_string text);
void QAccessibleObject_OnChildAt(const QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_SuperChildAt(const QAccessibleObject* self, int x, int y);
QWindow* QAccessibleObject_Window(const QAccessibleObject* self);
void QAccessibleObject_OnWindow(const QAccessibleObject* self, intptr_t slot);
QWindow* QAccessibleObject_SuperWindow(const QAccessibleObject* self);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleObject_Relations(const QAccessibleObject* self, int match);
void QAccessibleObject_OnRelations(const QAccessibleObject* self, intptr_t slot);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleObject_SuperRelations(const QAccessibleObject* self, int match);
QAccessibleInterface* QAccessibleObject_FocusChild(const QAccessibleObject* self);
void QAccessibleObject_OnFocusChild(const QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_SuperFocusChild(const QAccessibleObject* self);
QAccessibleInterface* QAccessibleObject_Parent(const QAccessibleObject* self);
void QAccessibleObject_OnParent(const QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_SuperParent(const QAccessibleObject* self);
QAccessibleInterface* QAccessibleObject_Child(const QAccessibleObject* self, int index);
void QAccessibleObject_OnChild(const QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_SuperChild(const QAccessibleObject* self, int index);
int QAccessibleObject_ChildCount(const QAccessibleObject* self);
void QAccessibleObject_OnChildCount(const QAccessibleObject* self, intptr_t slot);
int QAccessibleObject_SuperChildCount(const QAccessibleObject* self);
int QAccessibleObject_IndexOfChild(const QAccessibleObject* self, const QAccessibleInterface* param1);
void QAccessibleObject_OnIndexOfChild(const QAccessibleObject* self, intptr_t slot);
int QAccessibleObject_SuperIndexOfChild(const QAccessibleObject* self, const QAccessibleInterface* param1);
libqt_string QAccessibleObject_Text(const QAccessibleObject* self, int t);
void QAccessibleObject_OnText(const QAccessibleObject* self, intptr_t slot);
libqt_string QAccessibleObject_SuperText(const QAccessibleObject* self, int t);
int QAccessibleObject_Role(const QAccessibleObject* self);
void QAccessibleObject_OnRole(const QAccessibleObject* self, intptr_t slot);
int QAccessibleObject_SuperRole(const QAccessibleObject* self);
QAccessible__State* QAccessibleObject_State(const QAccessibleObject* self);
void QAccessibleObject_OnState(const QAccessibleObject* self, intptr_t slot);
QAccessible__State* QAccessibleObject_SuperState(const QAccessibleObject* self);
QColor* QAccessibleObject_ForegroundColor(const QAccessibleObject* self);
void QAccessibleObject_OnForegroundColor(const QAccessibleObject* self, intptr_t slot);
QColor* QAccessibleObject_SuperForegroundColor(const QAccessibleObject* self);
QColor* QAccessibleObject_BackgroundColor(const QAccessibleObject* self);
void QAccessibleObject_OnBackgroundColor(const QAccessibleObject* self, intptr_t slot);
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
void QAccessibleApplication_OnWindow(const QAccessibleApplication* self, intptr_t slot);
QWindow* QAccessibleApplication_SuperWindow(const QAccessibleApplication* self);
void QAccessibleApplication_OnChildCount(const QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_SuperChildCount(const QAccessibleApplication* self);
void QAccessibleApplication_OnIndexOfChild(const QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_SuperIndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1);
void QAccessibleApplication_OnFocusChild(const QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperFocusChild(const QAccessibleApplication* self);
void QAccessibleApplication_OnParent(const QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperParent(const QAccessibleApplication* self);
void QAccessibleApplication_OnChild(const QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperChild(const QAccessibleApplication* self, int index);
void QAccessibleApplication_OnText(const QAccessibleApplication* self, intptr_t slot);
libqt_string QAccessibleApplication_SuperText(const QAccessibleApplication* self, int t);
void QAccessibleApplication_OnRole(const QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_SuperRole(const QAccessibleApplication* self);
void QAccessibleApplication_OnState(const QAccessibleApplication* self, intptr_t slot);
QAccessible__State* QAccessibleApplication_SuperState(const QAccessibleApplication* self);
bool QAccessibleApplication_IsValid(const QAccessibleApplication* self);
void QAccessibleApplication_OnIsValid(const QAccessibleApplication* self, intptr_t slot);
bool QAccessibleApplication_SuperIsValid(const QAccessibleApplication* self);
QObject* QAccessibleApplication_Object(const QAccessibleApplication* self);
void QAccessibleApplication_OnObject(const QAccessibleApplication* self, intptr_t slot);
QObject* QAccessibleApplication_SuperObject(const QAccessibleApplication* self);
QRect* QAccessibleApplication_Rect(const QAccessibleApplication* self);
void QAccessibleApplication_OnRect(const QAccessibleApplication* self, intptr_t slot);
QRect* QAccessibleApplication_SuperRect(const QAccessibleApplication* self);
void QAccessibleApplication_SetText(QAccessibleApplication* self, int t, const libqt_string text);
void QAccessibleApplication_OnSetText(QAccessibleApplication* self, intptr_t slot);
void QAccessibleApplication_SuperSetText(QAccessibleApplication* self, int t, const libqt_string text);
QAccessibleInterface* QAccessibleApplication_ChildAt(const QAccessibleApplication* self, int x, int y);
void QAccessibleApplication_OnChildAt(const QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_SuperChildAt(const QAccessibleApplication* self, int x, int y);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleApplication_Relations(const QAccessibleApplication* self, int match);
void QAccessibleApplication_OnRelations(const QAccessibleApplication* self, intptr_t slot);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleApplication_SuperRelations(const QAccessibleApplication* self, int match);
QColor* QAccessibleApplication_ForegroundColor(const QAccessibleApplication* self);
void QAccessibleApplication_OnForegroundColor(const QAccessibleApplication* self, intptr_t slot);
QColor* QAccessibleApplication_SuperForegroundColor(const QAccessibleApplication* self);
QColor* QAccessibleApplication_BackgroundColor(const QAccessibleApplication* self);
void QAccessibleApplication_OnBackgroundColor(const QAccessibleApplication* self, intptr_t slot);
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
