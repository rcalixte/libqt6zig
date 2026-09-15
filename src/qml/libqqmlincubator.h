#pragma once
#ifndef QML_LIBQQMLINCUBATOR_H
#define QML_LIBQQMLINCUBATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQmlIncubationController QQmlIncubationController;
typedef struct QQmlIncubator QQmlIncubator;
typedef struct QVariant QVariant;
#endif

QQmlIncubator* QQmlIncubator_new();
QQmlIncubator* QQmlIncubator_new2(int param1);
void QQmlIncubator_Clear(QQmlIncubator* self);
void QQmlIncubator_ForceCompletion(QQmlIncubator* self);
bool QQmlIncubator_IsNull(const QQmlIncubator* self);
bool QQmlIncubator_IsReady(const QQmlIncubator* self);
bool QQmlIncubator_IsError(const QQmlIncubator* self);
bool QQmlIncubator_IsLoading(const QQmlIncubator* self);
libqt_list /* of QQmlError* */ QQmlIncubator_Errors(const QQmlIncubator* self);
int QQmlIncubator_IncubationMode(const QQmlIncubator* self);
int QQmlIncubator_Status(const QQmlIncubator* self);
QObject* QQmlIncubator_Object(const QQmlIncubator* self);
void QQmlIncubator_SetInitialProperties(QQmlIncubator* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties);
void QQmlIncubator_StatusChanged(QQmlIncubator* self, int param1);
void QQmlIncubator_SetInitialState(QQmlIncubator* self, QObject* initialState);
void QQmlIncubator_OnStatusChanged(QQmlIncubator* self, intptr_t slot);
void QQmlIncubator_SuperStatusChanged(QQmlIncubator* self, int param1);
void QQmlIncubator_OnSetInitialState(QQmlIncubator* self, intptr_t slot);
void QQmlIncubator_SuperSetInitialState(QQmlIncubator* self, QObject* initialState);
void QQmlIncubator_Delete(QQmlIncubator* self);

QQmlIncubationController* QQmlIncubationController_new();
QQmlEngine* QQmlIncubationController_Engine(const QQmlIncubationController* self);
int QQmlIncubationController_IncubatingObjectCount(const QQmlIncubationController* self);
void QQmlIncubationController_IncubateFor(QQmlIncubationController* self, int msecs);
void QQmlIncubationController_IncubatingObjectCountChanged(QQmlIncubationController* self, int param1);
void QQmlIncubationController_OnIncubatingObjectCountChanged(QQmlIncubationController* self, intptr_t slot);
void QQmlIncubationController_SuperIncubatingObjectCountChanged(QQmlIncubationController* self, int param1);
void QQmlIncubationController_Delete(QQmlIncubationController* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
