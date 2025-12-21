#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTNEWFORMWIDGET_H
#define SRC_DESIGNERC_LIBABSTRACTNEWFORMWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerNewFormWidgetInterface QDesignerNewFormWidgetInterface;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QWidget QWidget;
#endif

QMetaObject* QDesignerNewFormWidgetInterface_MetaObject(const QDesignerNewFormWidgetInterface* self);
void* QDesignerNewFormWidgetInterface_Metacast(QDesignerNewFormWidgetInterface* self, const char* param1);
int QDesignerNewFormWidgetInterface_Metacall(QDesignerNewFormWidgetInterface* self, int param1, int param2, void** param3);
bool QDesignerNewFormWidgetInterface_HasCurrentTemplate(const QDesignerNewFormWidgetInterface* self);
QDesignerNewFormWidgetInterface* QDesignerNewFormWidgetInterface_CreateNewFormWidget(QDesignerFormEditorInterface* core);
void QDesignerNewFormWidgetInterface_TemplateActivated(QDesignerNewFormWidgetInterface* self);
void QDesignerNewFormWidgetInterface_Connect_TemplateActivated(QDesignerNewFormWidgetInterface* self, intptr_t slot);
void QDesignerNewFormWidgetInterface_CurrentTemplateChanged(QDesignerNewFormWidgetInterface* self, bool templateSelected);
void QDesignerNewFormWidgetInterface_Connect_CurrentTemplateChanged(QDesignerNewFormWidgetInterface* self, intptr_t slot);
QDesignerNewFormWidgetInterface* QDesignerNewFormWidgetInterface_CreateNewFormWidget2(QDesignerFormEditorInterface* core, QWidget* parent);
void QDesignerNewFormWidgetInterface_Delete(QDesignerNewFormWidgetInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
