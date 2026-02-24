#pragma once
#ifndef SRC_DESIGNERC_LIBFORMBUILDER_H
#define SRC_DESIGNERC_LIBFORMBUILDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractFormBuilder QAbstractFormBuilder;
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QDesignerCustomWidgetInterface QDesignerCustomWidgetInterface;
typedef struct QFormBuilder QFormBuilder;
typedef struct QIODevice QIODevice;
typedef struct QLayout QLayout;
typedef struct QMetaEnum QMetaEnum;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QFormBuilder* QFormBuilder_new();
libqt_list /* of libqt_string */ QFormBuilder_PluginPaths(const QFormBuilder* self);
void QFormBuilder_ClearPluginPaths(QFormBuilder* self);
void QFormBuilder_AddPluginPath(QFormBuilder* self, const libqt_string pluginPath);
void QFormBuilder_SetPluginPath(QFormBuilder* self, const libqt_list /* of libqt_string */ pluginPaths);
libqt_list /* of QDesignerCustomWidgetInterface* */ QFormBuilder_CustomWidgets(const QFormBuilder* self);
QWidget* QFormBuilder_CreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
QLayout* QFormBuilder_CreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
void QFormBuilder_UpdateCustomWidgets(QFormBuilder* self);
void QFormBuilder_OnCreateWidget(QFormBuilder* self, intptr_t slot);
QWidget* QFormBuilder_SuperCreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
void QFormBuilder_OnCreateLayout(QFormBuilder* self, intptr_t slot);
QLayout* QFormBuilder_SuperCreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
void QFormBuilder_OnUpdateCustomWidgets(QFormBuilder* self, intptr_t slot);
void QFormBuilder_SuperUpdateCustomWidgets(QFormBuilder* self);
QWidget* QFormBuilder_Load(QFormBuilder* self, QIODevice* dev, QWidget* parentWidget);
void QFormBuilder_OnLoad(QFormBuilder* self, intptr_t slot);
QWidget* QFormBuilder_SuperLoad(QFormBuilder* self, QIODevice* dev, QWidget* parentWidget);
void QFormBuilder_Save(QFormBuilder* self, QIODevice* dev, QWidget* widget);
void QFormBuilder_OnSave(QFormBuilder* self, intptr_t slot);
void QFormBuilder_SuperSave(QFormBuilder* self, QIODevice* dev, QWidget* widget);
void QFormBuilder_AddMenuAction(QFormBuilder* self, QAction* action);
void QFormBuilder_OnAddMenuAction(QFormBuilder* self, intptr_t slot);
void QFormBuilder_SuperAddMenuAction(QFormBuilder* self, QAction* action);
QAction* QFormBuilder_CreateAction(QFormBuilder* self, QObject* parent, const libqt_string name);
void QFormBuilder_OnCreateAction(QFormBuilder* self, intptr_t slot);
QAction* QFormBuilder_SuperCreateAction(QFormBuilder* self, QObject* parent, const libqt_string name);
QActionGroup* QFormBuilder_CreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name);
void QFormBuilder_OnCreateActionGroup(QFormBuilder* self, intptr_t slot);
QActionGroup* QFormBuilder_SuperCreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name);
bool QFormBuilder_CheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop);
void QFormBuilder_OnCheckProperty(const QFormBuilder* self, intptr_t slot);
bool QFormBuilder_SuperCheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop);
QWidget* QFormBuilder_WidgetByName(QFormBuilder* self, QWidget* topLevel, const libqt_string name);
void QFormBuilder_OnWidgetByName(QFormBuilder* self, intptr_t slot);
QWidget* QFormBuilder_SuperWidgetByName(QFormBuilder* self, QWidget* topLevel, const libqt_string name);
bool QFormBuilder_ApplyPropertyInternally(QFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
void QFormBuilder_OnApplyPropertyInternally(QFormBuilder* self, intptr_t slot);
bool QFormBuilder_SuperApplyPropertyInternally(QFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
void QFormBuilder_Reset(QFormBuilder* self);
void QFormBuilder_OnReset(QFormBuilder* self, intptr_t slot);
void QFormBuilder_SuperReset(QFormBuilder* self);
QMetaEnum* QFormBuilder_ToolBarAreaMetaEnum(QFormBuilder* self);
void QFormBuilder_OnToolBarAreaMetaEnum(QFormBuilder* self, intptr_t slot);
QMetaEnum* QFormBuilder_SuperToolBarAreaMetaEnum(QFormBuilder* self);
void QFormBuilder_Delete(QFormBuilder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
