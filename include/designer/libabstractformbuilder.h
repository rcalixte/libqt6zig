#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTFORMBUILDER_H
#define SRC_DESIGNERC_LIBABSTRACTFORMBUILDER_H

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
typedef struct QDir QDir;
typedef struct QIODevice QIODevice;
typedef struct QLayout QLayout;
typedef struct QMetaEnum QMetaEnum;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QAbstractFormBuilder* QAbstractFormBuilder_new();
QDir* QAbstractFormBuilder_WorkingDirectory(const QAbstractFormBuilder* self);
void QAbstractFormBuilder_SetWorkingDirectory(QAbstractFormBuilder* self, const QDir* directory);
QWidget* QAbstractFormBuilder_Load(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget);
void QAbstractFormBuilder_Save(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget);
libqt_string QAbstractFormBuilder_ErrorString(const QAbstractFormBuilder* self);
void QAbstractFormBuilder_AddMenuAction(QAbstractFormBuilder* self, QAction* action);
QWidget* QAbstractFormBuilder_CreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
QLayout* QAbstractFormBuilder_CreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
QAction* QAbstractFormBuilder_CreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
QActionGroup* QAbstractFormBuilder_CreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
bool QAbstractFormBuilder_CheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop);
void QAbstractFormBuilder_OnLoad(QAbstractFormBuilder* self, intptr_t slot);
QWidget* QAbstractFormBuilder_QBaseLoad(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget);
void QAbstractFormBuilder_OnSave(QAbstractFormBuilder* self, intptr_t slot);
void QAbstractFormBuilder_QBaseSave(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget);
void QAbstractFormBuilder_OnAddMenuAction(QAbstractFormBuilder* self, intptr_t slot);
void QAbstractFormBuilder_QBaseAddMenuAction(QAbstractFormBuilder* self, QAction* action);
void QAbstractFormBuilder_OnCreateWidget(QAbstractFormBuilder* self, intptr_t slot);
QWidget* QAbstractFormBuilder_QBaseCreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
void QAbstractFormBuilder_OnCreateLayout(QAbstractFormBuilder* self, intptr_t slot);
QLayout* QAbstractFormBuilder_QBaseCreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
void QAbstractFormBuilder_OnCreateAction(QAbstractFormBuilder* self, intptr_t slot);
QAction* QAbstractFormBuilder_QBaseCreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
void QAbstractFormBuilder_OnCreateActionGroup(QAbstractFormBuilder* self, intptr_t slot);
QActionGroup* QAbstractFormBuilder_QBaseCreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
void QAbstractFormBuilder_OnCheckProperty(const QAbstractFormBuilder* self, intptr_t slot);
bool QAbstractFormBuilder_QBaseCheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop);
bool QAbstractFormBuilder_ApplyPropertyInternally(QAbstractFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
void QAbstractFormBuilder_OnApplyPropertyInternally(QAbstractFormBuilder* self, intptr_t slot);
bool QAbstractFormBuilder_QBaseApplyPropertyInternally(QAbstractFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
void QAbstractFormBuilder_Reset(QAbstractFormBuilder* self);
void QAbstractFormBuilder_OnReset(QAbstractFormBuilder* self, intptr_t slot);
void QAbstractFormBuilder_QBaseReset(QAbstractFormBuilder* self);
QMetaEnum* QAbstractFormBuilder_ToolBarAreaMetaEnum(QAbstractFormBuilder* self);
void QAbstractFormBuilder_OnToolBarAreaMetaEnum(QAbstractFormBuilder* self, intptr_t slot);
QMetaEnum* QAbstractFormBuilder_QBaseToolBarAreaMetaEnum(QAbstractFormBuilder* self);
void QAbstractFormBuilder_Delete(QAbstractFormBuilder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
