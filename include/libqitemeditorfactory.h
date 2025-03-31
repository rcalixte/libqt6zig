#pragma once
#ifndef SRCC_LIBQITEMEDITORFACTORY_H
#define SRCC_LIBQITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QItemEditorCreatorBase QItemEditorCreatorBase;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QWidget QWidget;
#endif

QWidget* QItemEditorCreatorBase_CreateWidget(const QItemEditorCreatorBase* self, QWidget* parent);
libqt_string QItemEditorCreatorBase_ValuePropertyName(const QItemEditorCreatorBase* self);
void QItemEditorCreatorBase_OperatorAssign(QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1);
void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self);

QItemEditorFactory* QItemEditorFactory_new();
QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1);
QWidget* QItemEditorFactory_CreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent);
void QItemEditorFactory_OnCreateEditor(const QItemEditorFactory* self, intptr_t slot);
QWidget* QItemEditorFactory_QBaseCreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent);
libqt_string QItemEditorFactory_ValuePropertyName(const QItemEditorFactory* self, int userType);
void QItemEditorFactory_OnValuePropertyName(const QItemEditorFactory* self, intptr_t slot);
libqt_string QItemEditorFactory_QBaseValuePropertyName(const QItemEditorFactory* self, int userType);
void QItemEditorFactory_RegisterEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator);
QItemEditorFactory* QItemEditorFactory_DefaultFactory();
void QItemEditorFactory_SetDefaultFactory(QItemEditorFactory* factory);
void QItemEditorFactory_Delete(QItemEditorFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
