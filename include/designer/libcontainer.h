#pragma once
#ifndef DESIGNER_LIBCONTAINER_H
#define DESIGNER_LIBCONTAINER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerContainerExtension QDesignerContainerExtension;
typedef struct QWidget QWidget;
#endif

QDesignerContainerExtension* QDesignerContainerExtension_new();
int QDesignerContainerExtension_Count(const QDesignerContainerExtension* self);
QWidget* QDesignerContainerExtension_Widget(const QDesignerContainerExtension* self, int index);
int QDesignerContainerExtension_CurrentIndex(const QDesignerContainerExtension* self);
void QDesignerContainerExtension_SetCurrentIndex(QDesignerContainerExtension* self, int index);
bool QDesignerContainerExtension_CanAddWidget(const QDesignerContainerExtension* self);
void QDesignerContainerExtension_AddWidget(QDesignerContainerExtension* self, QWidget* widget);
void QDesignerContainerExtension_InsertWidget(QDesignerContainerExtension* self, int index, QWidget* widget);
bool QDesignerContainerExtension_CanRemove(const QDesignerContainerExtension* self, int index);
void QDesignerContainerExtension_Remove(QDesignerContainerExtension* self, int index);
void QDesignerContainerExtension_OnCount(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnWidget(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnCurrentIndex(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnSetCurrentIndex(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnCanAddWidget(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnAddWidget(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnInsertWidget(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnCanRemove(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_OnRemove(QDesignerContainerExtension* self, intptr_t slot);
void QDesignerContainerExtension_Delete(QDesignerContainerExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
