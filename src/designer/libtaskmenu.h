#pragma once
#ifndef SRC_DESIGNERC_LIBTASKMENU_H
#define SRC_DESIGNERC_LIBTASKMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QDesignerTaskMenuExtension QDesignerTaskMenuExtension;
#endif

QDesignerTaskMenuExtension* QDesignerTaskMenuExtension_new();
QAction* QDesignerTaskMenuExtension_PreferredEditAction(const QDesignerTaskMenuExtension* self);
libqt_list /* of QAction* */ QDesignerTaskMenuExtension_TaskActions(const QDesignerTaskMenuExtension* self);
void QDesignerTaskMenuExtension_OnPreferredEditAction(const QDesignerTaskMenuExtension* self, intptr_t slot);
QAction* QDesignerTaskMenuExtension_QBasePreferredEditAction(const QDesignerTaskMenuExtension* self);
void QDesignerTaskMenuExtension_OnTaskActions(const QDesignerTaskMenuExtension* self, intptr_t slot);
libqt_list /* of QAction* */ QDesignerTaskMenuExtension_QBaseTaskActions(const QDesignerTaskMenuExtension* self);
void QDesignerTaskMenuExtension_Delete(QDesignerTaskMenuExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
