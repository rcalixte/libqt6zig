#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMWINDOWCURSOR_H
#define DESIGNER_LIBABSTRACTFORMWINDOWCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerFormWindowCursorInterface QDesignerFormWindowCursorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QDesignerFormWindowCursorInterface* QDesignerFormWindowCursorInterface_new();
QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_FormWindow(const QDesignerFormWindowCursorInterface* self);
bool QDesignerFormWindowCursorInterface_MovePosition(QDesignerFormWindowCursorInterface* self, int op, int mode);
int QDesignerFormWindowCursorInterface_Position(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_SetPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode);
QWidget* QDesignerFormWindowCursorInterface_Current(const QDesignerFormWindowCursorInterface* self);
int QDesignerFormWindowCursorInterface_WidgetCount(const QDesignerFormWindowCursorInterface* self);
QWidget* QDesignerFormWindowCursorInterface_Widget(const QDesignerFormWindowCursorInterface* self, int index);
bool QDesignerFormWindowCursorInterface_HasSelection(const QDesignerFormWindowCursorInterface* self);
int QDesignerFormWindowCursorInterface_SelectedWidgetCount(const QDesignerFormWindowCursorInterface* self);
QWidget* QDesignerFormWindowCursorInterface_SelectedWidget(const QDesignerFormWindowCursorInterface* self, int index);
void QDesignerFormWindowCursorInterface_SetProperty(QDesignerFormWindowCursorInterface* self, const libqt_string name, const QVariant* value);
void QDesignerFormWindowCursorInterface_SetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name, const QVariant* value);
void QDesignerFormWindowCursorInterface_ResetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name);
bool QDesignerFormWindowCursorInterface_IsWidgetSelected(const QDesignerFormWindowCursorInterface* self, QWidget* widget);
void QDesignerFormWindowCursorInterface_OnFormWindow(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnMovePosition(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnPosition(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnSetPosition(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnCurrent(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnWidgetCount(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnWidget(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnHasSelection(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnSelectedWidgetCount(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnSelectedWidget(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnSetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnSetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_OnResetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_Delete(QDesignerFormWindowCursorInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
