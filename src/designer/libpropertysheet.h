#pragma once
#ifndef DESIGNER_LIBPROPERTYSHEET_H
#define DESIGNER_LIBPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerPropertySheetExtension QDesignerPropertySheetExtension;
typedef struct QVariant QVariant;
#endif

QDesignerPropertySheetExtension* QDesignerPropertySheetExtension_new();
int QDesignerPropertySheetExtension_Count(const QDesignerPropertySheetExtension* self);
int QDesignerPropertySheetExtension_IndexOf(const QDesignerPropertySheetExtension* self, const libqt_string name);
libqt_string QDesignerPropertySheetExtension_PropertyName(const QDesignerPropertySheetExtension* self, int index);
libqt_string QDesignerPropertySheetExtension_PropertyGroup(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_SetPropertyGroup(QDesignerPropertySheetExtension* self, int index, const libqt_string group);
bool QDesignerPropertySheetExtension_HasReset(const QDesignerPropertySheetExtension* self, int index);
bool QDesignerPropertySheetExtension_Reset(QDesignerPropertySheetExtension* self, int index);
bool QDesignerPropertySheetExtension_IsVisible(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_SetVisible(QDesignerPropertySheetExtension* self, int index, bool b);
bool QDesignerPropertySheetExtension_IsAttribute(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_SetAttribute(QDesignerPropertySheetExtension* self, int index, bool b);
QVariant* QDesignerPropertySheetExtension_Property(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_SetProperty(QDesignerPropertySheetExtension* self, int index, const QVariant* value);
bool QDesignerPropertySheetExtension_IsChanged(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_SetChanged(QDesignerPropertySheetExtension* self, int index, bool changed);
bool QDesignerPropertySheetExtension_IsEnabled(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnCount(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnIndexOf(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnPropertyName(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnPropertyGroup(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnSetPropertyGroup(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnHasReset(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnReset(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnIsVisible(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnSetVisible(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnIsAttribute(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnSetAttribute(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnProperty(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnSetProperty(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnIsChanged(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnSetChanged(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_OnIsEnabled(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_Delete(QDesignerPropertySheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
