#pragma once
#ifndef DESIGNER_LIBDYNAMICPROPERTYSHEET_H
#define DESIGNER_LIBDYNAMICPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerDynamicPropertySheetExtension QDesignerDynamicPropertySheetExtension;
typedef struct QVariant QVariant;
#endif

QDesignerDynamicPropertySheetExtension* QDesignerDynamicPropertySheetExtension_new();
bool QDesignerDynamicPropertySheetExtension_DynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self);
int QDesignerDynamicPropertySheetExtension_AddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName, const QVariant* value);
bool QDesignerDynamicPropertySheetExtension_RemoveDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index);
bool QDesignerDynamicPropertySheetExtension_IsDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index);
bool QDesignerDynamicPropertySheetExtension_CanAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, const libqt_string propertyName);
void QDesignerDynamicPropertySheetExtension_OnDynamicPropertiesAllowed(QDesignerDynamicPropertySheetExtension* self, intptr_t slot);
void QDesignerDynamicPropertySheetExtension_OnAddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot);
void QDesignerDynamicPropertySheetExtension_OnRemoveDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot);
void QDesignerDynamicPropertySheetExtension_OnIsDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot);
void QDesignerDynamicPropertySheetExtension_OnCanAddDynamicProperty(QDesignerDynamicPropertySheetExtension* self, intptr_t slot);
void QDesignerDynamicPropertySheetExtension_Delete(QDesignerDynamicPropertySheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
