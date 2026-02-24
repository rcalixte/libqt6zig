#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTFORMWINDOWCURSOR_H
#define SRC_DESIGNERC_LIBABSTRACTFORMWINDOWCURSOR_H

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
void QDesignerFormWindowCursorInterface_OnFormWindow(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_SuperFormWindow(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_OnMovePosition(QDesignerFormWindowCursorInterface* self, intptr_t slot);
bool QDesignerFormWindowCursorInterface_SuperMovePosition(QDesignerFormWindowCursorInterface* self, int op, int mode);
void QDesignerFormWindowCursorInterface_OnPosition(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
int QDesignerFormWindowCursorInterface_SuperPosition(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_OnSetPosition(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_SuperSetPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode);
void QDesignerFormWindowCursorInterface_OnCurrent(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
QWidget* QDesignerFormWindowCursorInterface_SuperCurrent(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_OnWidgetCount(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
int QDesignerFormWindowCursorInterface_SuperWidgetCount(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_OnWidget(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
QWidget* QDesignerFormWindowCursorInterface_SuperWidget(const QDesignerFormWindowCursorInterface* self, int index);
void QDesignerFormWindowCursorInterface_OnHasSelection(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
bool QDesignerFormWindowCursorInterface_SuperHasSelection(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_OnSelectedWidgetCount(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
int QDesignerFormWindowCursorInterface_SuperSelectedWidgetCount(const QDesignerFormWindowCursorInterface* self);
void QDesignerFormWindowCursorInterface_OnSelectedWidget(const QDesignerFormWindowCursorInterface* self, intptr_t slot);
QWidget* QDesignerFormWindowCursorInterface_SuperSelectedWidget(const QDesignerFormWindowCursorInterface* self, int index);
void QDesignerFormWindowCursorInterface_OnSetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_SuperSetProperty(QDesignerFormWindowCursorInterface* self, const libqt_string name, const QVariant* value);
void QDesignerFormWindowCursorInterface_OnSetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_SuperSetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name, const QVariant* value);
void QDesignerFormWindowCursorInterface_OnResetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot);
void QDesignerFormWindowCursorInterface_SuperResetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name);
void QDesignerFormWindowCursorInterface_Delete(QDesignerFormWindowCursorInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
