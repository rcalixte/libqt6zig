#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTSETTINGS_H
#define SRC_DESIGNERC_LIBABSTRACTSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerSettingsInterface QDesignerSettingsInterface;
typedef struct QVariant QVariant;
#endif

QDesignerSettingsInterface* QDesignerSettingsInterface_new();
void QDesignerSettingsInterface_BeginGroup(QDesignerSettingsInterface* self, const libqt_string prefix);
void QDesignerSettingsInterface_EndGroup(QDesignerSettingsInterface* self);
bool QDesignerSettingsInterface_Contains(const QDesignerSettingsInterface* self, const libqt_string key);
void QDesignerSettingsInterface_SetValue(QDesignerSettingsInterface* self, const libqt_string key, const QVariant* value);
QVariant* QDesignerSettingsInterface_Value(const QDesignerSettingsInterface* self, const libqt_string key, const QVariant* defaultValue);
void QDesignerSettingsInterface_Remove(QDesignerSettingsInterface* self, const libqt_string key);
void QDesignerSettingsInterface_OnBeginGroup(QDesignerSettingsInterface* self, intptr_t slot);
void QDesignerSettingsInterface_SuperBeginGroup(QDesignerSettingsInterface* self, const libqt_string prefix);
void QDesignerSettingsInterface_OnEndGroup(QDesignerSettingsInterface* self, intptr_t slot);
void QDesignerSettingsInterface_SuperEndGroup(QDesignerSettingsInterface* self);
void QDesignerSettingsInterface_OnContains(const QDesignerSettingsInterface* self, intptr_t slot);
bool QDesignerSettingsInterface_SuperContains(const QDesignerSettingsInterface* self, const libqt_string key);
void QDesignerSettingsInterface_OnSetValue(QDesignerSettingsInterface* self, intptr_t slot);
void QDesignerSettingsInterface_SuperSetValue(QDesignerSettingsInterface* self, const libqt_string key, const QVariant* value);
void QDesignerSettingsInterface_OnValue(const QDesignerSettingsInterface* self, intptr_t slot);
QVariant* QDesignerSettingsInterface_SuperValue(const QDesignerSettingsInterface* self, const libqt_string key, const QVariant* defaultValue);
void QDesignerSettingsInterface_OnRemove(QDesignerSettingsInterface* self, intptr_t slot);
void QDesignerSettingsInterface_SuperRemove(QDesignerSettingsInterface* self, const libqt_string key);
void QDesignerSettingsInterface_Delete(QDesignerSettingsInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
