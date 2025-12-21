#pragma once
#ifndef SRC_UIPLUGINC_LIBCUSTOMWIDGET_H
#define SRC_UIPLUGINC_LIBCUSTOMWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerCustomWidgetCollectionInterface QDesignerCustomWidgetCollectionInterface;
typedef struct QDesignerCustomWidgetInterface QDesignerCustomWidgetInterface;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QIcon QIcon;
typedef struct QWidget QWidget;
#endif

libqt_string QDesignerCustomWidgetInterface_Name(const QDesignerCustomWidgetInterface* self);
libqt_string QDesignerCustomWidgetInterface_Group(const QDesignerCustomWidgetInterface* self);
libqt_string QDesignerCustomWidgetInterface_ToolTip(const QDesignerCustomWidgetInterface* self);
libqt_string QDesignerCustomWidgetInterface_WhatsThis(const QDesignerCustomWidgetInterface* self);
libqt_string QDesignerCustomWidgetInterface_IncludeFile(const QDesignerCustomWidgetInterface* self);
QIcon* QDesignerCustomWidgetInterface_Icon(const QDesignerCustomWidgetInterface* self);
bool QDesignerCustomWidgetInterface_IsContainer(const QDesignerCustomWidgetInterface* self);
QWidget* QDesignerCustomWidgetInterface_CreateWidget(QDesignerCustomWidgetInterface* self, QWidget* parent);
bool QDesignerCustomWidgetInterface_IsInitialized(const QDesignerCustomWidgetInterface* self);
void QDesignerCustomWidgetInterface_Initialize(QDesignerCustomWidgetInterface* self, QDesignerFormEditorInterface* core);
libqt_string QDesignerCustomWidgetInterface_DomXml(const QDesignerCustomWidgetInterface* self);
libqt_string QDesignerCustomWidgetInterface_CodeTemplate(const QDesignerCustomWidgetInterface* self);
void QDesignerCustomWidgetInterface_OperatorAssign(QDesignerCustomWidgetInterface* self, const QDesignerCustomWidgetInterface* param1);
void QDesignerCustomWidgetInterface_Delete(QDesignerCustomWidgetInterface* self);

libqt_list /* of QDesignerCustomWidgetInterface* */ QDesignerCustomWidgetCollectionInterface_CustomWidgets(const QDesignerCustomWidgetCollectionInterface* self);
void QDesignerCustomWidgetCollectionInterface_OperatorAssign(QDesignerCustomWidgetCollectionInterface* self, const QDesignerCustomWidgetCollectionInterface* param1);
void QDesignerCustomWidgetCollectionInterface_Delete(QDesignerCustomWidgetCollectionInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
