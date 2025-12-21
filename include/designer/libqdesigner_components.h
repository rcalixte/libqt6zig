#pragma once
#ifndef SRC_DESIGNERC_LIBQDESIGNER_COMPONENTS_H
#define SRC_DESIGNERC_LIBQDESIGNER_COMPONENTS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerActionEditorInterface QDesignerActionEditorInterface;
typedef struct QDesignerComponents QDesignerComponents;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerObjectInspectorInterface QDesignerObjectInspectorInterface;
typedef struct QDesignerPropertyEditorInterface QDesignerPropertyEditorInterface;
typedef struct QDesignerWidgetBoxInterface QDesignerWidgetBoxInterface;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

QDesignerComponents* QDesignerComponents_new(const QDesignerComponents* other);
QDesignerComponents* QDesignerComponents_new2(QDesignerComponents* other);
void QDesignerComponents_CopyAssign(QDesignerComponents* self, QDesignerComponents* other);
void QDesignerComponents_MoveAssign(QDesignerComponents* self, QDesignerComponents* other);
void QDesignerComponents_InitializeResources();
void QDesignerComponents_InitializePlugins(QDesignerFormEditorInterface* core);
QDesignerFormEditorInterface* QDesignerComponents_CreateFormEditor(QObject* parent);
QDesignerFormEditorInterface* QDesignerComponents_CreateFormEditorWithPluginPaths(const libqt_list /* of libqt_string */ pluginPaths, QObject* parent);
QDesignerWidgetBoxInterface* QDesignerComponents_CreateWidgetBox(QDesignerFormEditorInterface* core, QWidget* parent);
QDesignerPropertyEditorInterface* QDesignerComponents_CreatePropertyEditor(QDesignerFormEditorInterface* core, QWidget* parent);
QDesignerObjectInspectorInterface* QDesignerComponents_CreateObjectInspector(QDesignerFormEditorInterface* core, QWidget* parent);
QDesignerActionEditorInterface* QDesignerComponents_CreateActionEditor(QDesignerFormEditorInterface* core, QWidget* parent);
QObject* QDesignerComponents_CreateTaskMenu(QDesignerFormEditorInterface* core, QObject* parent);
QWidget* QDesignerComponents_CreateResourceEditor(QDesignerFormEditorInterface* core, QWidget* parent);
QWidget* QDesignerComponents_CreateSignalSlotEditor(QDesignerFormEditorInterface* core, QWidget* parent);
libqt_list /* of libqt_string */ QDesignerComponents_DefaultPluginPaths();
void QDesignerComponents_Delete(QDesignerComponents* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
