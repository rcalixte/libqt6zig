#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBarDataItem QBarDataItem;
#endif

QBarDataItem* QBarDataItem_new();
QBarDataItem* QBarDataItem_new2(float value);
QBarDataItem* QBarDataItem_new3(float value, float angle);
QBarDataItem* QBarDataItem_new4(const QBarDataItem* other);
void QBarDataItem_OperatorAssign(QBarDataItem* self, const QBarDataItem* other);
void QBarDataItem_SetValue(QBarDataItem* self, float val);
float QBarDataItem_Value(const QBarDataItem* self);
void QBarDataItem_SetRotation(QBarDataItem* self, float angle);
float QBarDataItem_Rotation(const QBarDataItem* self);
void QBarDataItem_Delete(QBarDataItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
