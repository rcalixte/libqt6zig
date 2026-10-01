#pragma once
#ifndef DESIGNER_LIBABSTRACTOPTIONSPAGE_H
#define DESIGNER_LIBABSTRACTOPTIONSPAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerOptionsPageInterface QDesignerOptionsPageInterface;
typedef struct QWidget QWidget;
#endif

QDesignerOptionsPageInterface* QDesignerOptionsPageInterface_new();
libqt_string QDesignerOptionsPageInterface_Name(const QDesignerOptionsPageInterface* self);
QWidget* QDesignerOptionsPageInterface_CreatePage(QDesignerOptionsPageInterface* self, QWidget* parent);
void QDesignerOptionsPageInterface_Apply(QDesignerOptionsPageInterface* self);
void QDesignerOptionsPageInterface_Finish(QDesignerOptionsPageInterface* self);
void QDesignerOptionsPageInterface_OnName(QDesignerOptionsPageInterface* self, intptr_t slot);
void QDesignerOptionsPageInterface_OnCreatePage(QDesignerOptionsPageInterface* self, intptr_t slot);
void QDesignerOptionsPageInterface_OnApply(QDesignerOptionsPageInterface* self, intptr_t slot);
void QDesignerOptionsPageInterface_OnFinish(QDesignerOptionsPageInterface* self, intptr_t slot);
void QDesignerOptionsPageInterface_Delete(QDesignerOptionsPageInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
