#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMEDITORPLUGIN_H
#define DESIGNER_LIBABSTRACTFORMEDITORPLUGIN_H

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
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormEditorPluginInterface QDesignerFormEditorPluginInterface;
#endif

QDesignerFormEditorPluginInterface* QDesignerFormEditorPluginInterface_new();
bool QDesignerFormEditorPluginInterface_IsInitialized(const QDesignerFormEditorPluginInterface* self);
void QDesignerFormEditorPluginInterface_Initialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core);
QAction* QDesignerFormEditorPluginInterface_Action(const QDesignerFormEditorPluginInterface* self);
QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_Core(const QDesignerFormEditorPluginInterface* self);
void QDesignerFormEditorPluginInterface_OnIsInitialized(QDesignerFormEditorPluginInterface* self, intptr_t slot);
void QDesignerFormEditorPluginInterface_OnInitialize(QDesignerFormEditorPluginInterface* self, intptr_t slot);
void QDesignerFormEditorPluginInterface_OnAction(QDesignerFormEditorPluginInterface* self, intptr_t slot);
void QDesignerFormEditorPluginInterface_OnCore(QDesignerFormEditorPluginInterface* self, intptr_t slot);
void QDesignerFormEditorPluginInterface_Delete(QDesignerFormEditorPluginInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
