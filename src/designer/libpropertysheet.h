#pragma once
#ifndef SRC_DESIGNERC_LIBPROPERTYSHEET_H
#define SRC_DESIGNERC_LIBPROPERTYSHEET_H

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
void QDesignerPropertySheetExtension_OnCount(const QDesignerPropertySheetExtension* self, intptr_t slot);
int QDesignerPropertySheetExtension_SuperCount(const QDesignerPropertySheetExtension* self);
void QDesignerPropertySheetExtension_OnIndexOf(const QDesignerPropertySheetExtension* self, intptr_t slot);
int QDesignerPropertySheetExtension_SuperIndexOf(const QDesignerPropertySheetExtension* self, const libqt_string name);
void QDesignerPropertySheetExtension_OnPropertyName(const QDesignerPropertySheetExtension* self, intptr_t slot);
libqt_string QDesignerPropertySheetExtension_SuperPropertyName(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnPropertyGroup(const QDesignerPropertySheetExtension* self, intptr_t slot);
libqt_string QDesignerPropertySheetExtension_SuperPropertyGroup(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnSetPropertyGroup(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_SuperSetPropertyGroup(QDesignerPropertySheetExtension* self, int index, const libqt_string group);
void QDesignerPropertySheetExtension_OnHasReset(const QDesignerPropertySheetExtension* self, intptr_t slot);
bool QDesignerPropertySheetExtension_SuperHasReset(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnReset(QDesignerPropertySheetExtension* self, intptr_t slot);
bool QDesignerPropertySheetExtension_SuperReset(QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnIsVisible(const QDesignerPropertySheetExtension* self, intptr_t slot);
bool QDesignerPropertySheetExtension_SuperIsVisible(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnSetVisible(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_SuperSetVisible(QDesignerPropertySheetExtension* self, int index, bool b);
void QDesignerPropertySheetExtension_OnIsAttribute(const QDesignerPropertySheetExtension* self, intptr_t slot);
bool QDesignerPropertySheetExtension_SuperIsAttribute(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnSetAttribute(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_SuperSetAttribute(QDesignerPropertySheetExtension* self, int index, bool b);
void QDesignerPropertySheetExtension_OnProperty(const QDesignerPropertySheetExtension* self, intptr_t slot);
QVariant* QDesignerPropertySheetExtension_SuperProperty(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnSetProperty(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_SuperSetProperty(QDesignerPropertySheetExtension* self, int index, const QVariant* value);
void QDesignerPropertySheetExtension_OnIsChanged(const QDesignerPropertySheetExtension* self, intptr_t slot);
bool QDesignerPropertySheetExtension_SuperIsChanged(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_OnSetChanged(QDesignerPropertySheetExtension* self, intptr_t slot);
void QDesignerPropertySheetExtension_SuperSetChanged(QDesignerPropertySheetExtension* self, int index, bool changed);
void QDesignerPropertySheetExtension_OnIsEnabled(const QDesignerPropertySheetExtension* self, intptr_t slot);
bool QDesignerPropertySheetExtension_SuperIsEnabled(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_Delete(QDesignerPropertySheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
