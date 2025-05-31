#pragma once
#ifndef SRCC_LIBQACCESSIBLEWIDGET_H
#define SRCC_LIBQACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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

QAccessibleWidget* QAccessibleWidget_new(QWidget* o);
QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r);
QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, const libqt_string name);
bool QAccessibleWidget_IsValid(const QAccessibleWidget* self);
QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self);
int QAccessibleWidget_ChildCount(const QAccessibleWidget* self);
int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child);
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleWidget_Relations(const QAccessibleWidget* self, int match);
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

#ifdef __cplusplus
} /* extern C */
#endif

#endif
