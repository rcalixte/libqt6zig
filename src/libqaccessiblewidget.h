#pragma once
#ifndef SRCC_LIBQACCESSIBLEWIDGET_H
#define SRCC_LIBQACCESSIBLEWIDGET_H

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
typedef struct QAccessibleActionInterface QAccessibleActionInterface;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QAccessibleWidget QAccessibleWidget;
typedef struct QAccessible__State QAccessible__State;
typedef struct QColor QColor;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
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

QAccessibleWidget* QAccessibleWidget_new(QWidget* o);
QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r);
QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, const libqt_string name);
bool QAccessibleWidget_IsValid(const QAccessibleWidget* self);
QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self);
int QAccessibleWidget_ChildCount(const QAccessibleWidget* self);
int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleWidget_Relations(const QAccessibleWidget* self, int match);
QAccessibleInterface* QAccessibleWidget_FocusChild(const QAccessibleWidget* self);
QRect* QAccessibleWidget_Rect(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_Parent(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_Child(const QAccessibleWidget* self, int index);
libqt_string QAccessibleWidget_Text(const QAccessibleWidget* self, int t);
int QAccessibleWidget_Role(const QAccessibleWidget* self);
QAccessible__State* QAccessibleWidget_State(const QAccessibleWidget* self);
QColor* QAccessibleWidget_ForegroundColor(const QAccessibleWidget* self);
QColor* QAccessibleWidget_BackgroundColor(const QAccessibleWidget* self);
void* QAccessibleWidget_InterfaceCast(QAccessibleWidget* self, int t);
libqt_list /* of libqt_string */ QAccessibleWidget_ActionNames(const QAccessibleWidget* self);
void QAccessibleWidget_DoAction(QAccessibleWidget* self, const libqt_string actionName);
libqt_list /* of libqt_string */ QAccessibleWidget_KeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName);
void QAccessibleWidget_OnIsValid(const QAccessibleWidget* self, intptr_t slot);
bool QAccessibleWidget_SuperIsValid(const QAccessibleWidget* self);
void QAccessibleWidget_OnWindow(const QAccessibleWidget* self, intptr_t slot);
QWindow* QAccessibleWidget_SuperWindow(const QAccessibleWidget* self);
void QAccessibleWidget_OnChildCount(const QAccessibleWidget* self, intptr_t slot);
int QAccessibleWidget_SuperChildCount(const QAccessibleWidget* self);
void QAccessibleWidget_OnIndexOfChild(const QAccessibleWidget* self, intptr_t slot);
int QAccessibleWidget_SuperIndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child);
void QAccessibleWidget_OnRelations(const QAccessibleWidget* self, intptr_t slot);
libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ QAccessibleWidget_SuperRelations(const QAccessibleWidget* self, int match);
void QAccessibleWidget_OnFocusChild(const QAccessibleWidget* self, intptr_t slot);
QAccessibleInterface* QAccessibleWidget_SuperFocusChild(const QAccessibleWidget* self);
void QAccessibleWidget_OnRect(const QAccessibleWidget* self, intptr_t slot);
QRect* QAccessibleWidget_SuperRect(const QAccessibleWidget* self);
void QAccessibleWidget_OnParent(const QAccessibleWidget* self, intptr_t slot);
QAccessibleInterface* QAccessibleWidget_SuperParent(const QAccessibleWidget* self);
void QAccessibleWidget_OnChild(const QAccessibleWidget* self, intptr_t slot);
QAccessibleInterface* QAccessibleWidget_SuperChild(const QAccessibleWidget* self, int index);
void QAccessibleWidget_OnText(const QAccessibleWidget* self, intptr_t slot);
libqt_string QAccessibleWidget_SuperText(const QAccessibleWidget* self, int t);
void QAccessibleWidget_OnRole(const QAccessibleWidget* self, intptr_t slot);
int QAccessibleWidget_SuperRole(const QAccessibleWidget* self);
void QAccessibleWidget_OnState(const QAccessibleWidget* self, intptr_t slot);
QAccessible__State* QAccessibleWidget_SuperState(const QAccessibleWidget* self);
void QAccessibleWidget_OnForegroundColor(const QAccessibleWidget* self, intptr_t slot);
QColor* QAccessibleWidget_SuperForegroundColor(const QAccessibleWidget* self);
void QAccessibleWidget_OnBackgroundColor(const QAccessibleWidget* self, intptr_t slot);
QColor* QAccessibleWidget_SuperBackgroundColor(const QAccessibleWidget* self);
void QAccessibleWidget_OnInterfaceCast(QAccessibleWidget* self, intptr_t slot);
void* QAccessibleWidget_SuperInterfaceCast(QAccessibleWidget* self, int t);
void QAccessibleWidget_OnActionNames(const QAccessibleWidget* self, intptr_t slot);
libqt_list /* of libqt_string */ QAccessibleWidget_SuperActionNames(const QAccessibleWidget* self);
void QAccessibleWidget_OnDoAction(QAccessibleWidget* self, intptr_t slot);
void QAccessibleWidget_SuperDoAction(QAccessibleWidget* self, const libqt_string actionName);
void QAccessibleWidget_OnKeyBindingsForAction(const QAccessibleWidget* self, intptr_t slot);
libqt_list /* of libqt_string */ QAccessibleWidget_SuperKeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName);
QObject* QAccessibleWidget_Object(const QAccessibleWidget* self);
void QAccessibleWidget_OnObject(const QAccessibleWidget* self, intptr_t slot);
QObject* QAccessibleWidget_SuperObject(const QAccessibleWidget* self);
void QAccessibleWidget_SetText(QAccessibleWidget* self, int t, const libqt_string text);
void QAccessibleWidget_OnSetText(QAccessibleWidget* self, intptr_t slot);
void QAccessibleWidget_SuperSetText(QAccessibleWidget* self, int t, const libqt_string text);
QAccessibleInterface* QAccessibleWidget_ChildAt(const QAccessibleWidget* self, int x, int y);
void QAccessibleWidget_OnChildAt(const QAccessibleWidget* self, intptr_t slot);
QAccessibleInterface* QAccessibleWidget_SuperChildAt(const QAccessibleWidget* self, int x, int y);
void QAccessibleWidget_VirtualHook(QAccessibleWidget* self, int id, void* data);
void QAccessibleWidget_OnVirtualHook(QAccessibleWidget* self, intptr_t slot);
void QAccessibleWidget_SuperVirtualHook(QAccessibleWidget* self, int id, void* data);
libqt_string QAccessibleWidget_LocalizedActionName(const QAccessibleWidget* self, const libqt_string name);
void QAccessibleWidget_OnLocalizedActionName(const QAccessibleWidget* self, intptr_t slot);
libqt_string QAccessibleWidget_SuperLocalizedActionName(const QAccessibleWidget* self, const libqt_string name);
libqt_string QAccessibleWidget_LocalizedActionDescription(const QAccessibleWidget* self, const libqt_string name);
void QAccessibleWidget_OnLocalizedActionDescription(const QAccessibleWidget* self, intptr_t slot);
libqt_string QAccessibleWidget_SuperLocalizedActionDescription(const QAccessibleWidget* self, const libqt_string name);
QWidget* QAccessibleWidget_Widget(const QAccessibleWidget* self);
void QAccessibleWidget_OnWidget(const QAccessibleWidget* self, intptr_t slot);
QWidget* QAccessibleWidget_SuperWidget(const QAccessibleWidget* self);
QObject* QAccessibleWidget_ParentObject(const QAccessibleWidget* self);
void QAccessibleWidget_OnParentObject(const QAccessibleWidget* self, intptr_t slot);
QObject* QAccessibleWidget_SuperParentObject(const QAccessibleWidget* self);
void QAccessibleWidget_AddControllingSignal(QAccessibleWidget* self, const libqt_string signal);
void QAccessibleWidget_OnAddControllingSignal(QAccessibleWidget* self, intptr_t slot);
void QAccessibleWidget_SuperAddControllingSignal(QAccessibleWidget* self, const libqt_string signal);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
