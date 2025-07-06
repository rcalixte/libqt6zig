#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQABSTRACTBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQABSTRACTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QBarSet QBarSet;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAbstractBarSeries_MetaObject(const QAbstractBarSeries* self);
void* QAbstractBarSeries_Metacast(QAbstractBarSeries* self, const char* param1);
int QAbstractBarSeries_Metacall(QAbstractBarSeries* self, int param1, int param2, void** param3);
libqt_string QAbstractBarSeries_Tr(const char* s);
void QAbstractBarSeries_SetBarWidth(QAbstractBarSeries* self, double width);
double QAbstractBarSeries_BarWidth(const QAbstractBarSeries* self);
bool QAbstractBarSeries_Append(QAbstractBarSeries* self, QBarSet* set);
bool QAbstractBarSeries_Remove(QAbstractBarSeries* self, QBarSet* set);
bool QAbstractBarSeries_Take(QAbstractBarSeries* self, QBarSet* set);
bool QAbstractBarSeries_AppendWithSets(QAbstractBarSeries* self, const libqt_list /* of QBarSet* */ sets);
bool QAbstractBarSeries_Insert(QAbstractBarSeries* self, int index, QBarSet* set);
int QAbstractBarSeries_Count(const QAbstractBarSeries* self);
libqt_list /* of QBarSet* */ QAbstractBarSeries_BarSets(const QAbstractBarSeries* self);
void QAbstractBarSeries_Clear(QAbstractBarSeries* self);
void QAbstractBarSeries_SetLabelsVisible(QAbstractBarSeries* self);
bool QAbstractBarSeries_IsLabelsVisible(const QAbstractBarSeries* self);
void QAbstractBarSeries_SetLabelsFormat(QAbstractBarSeries* self, const libqt_string format);
libqt_string QAbstractBarSeries_LabelsFormat(const QAbstractBarSeries* self);
void QAbstractBarSeries_SetLabelsAngle(QAbstractBarSeries* self, double angle);
double QAbstractBarSeries_LabelsAngle(const QAbstractBarSeries* self);
void QAbstractBarSeries_SetLabelsPosition(QAbstractBarSeries* self, int position);
int QAbstractBarSeries_LabelsPosition(const QAbstractBarSeries* self);
void QAbstractBarSeries_SetLabelsPrecision(QAbstractBarSeries* self, int precision);
int QAbstractBarSeries_LabelsPrecision(const QAbstractBarSeries* self);
void QAbstractBarSeries_Clicked(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_Connect_Clicked(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_Hovered(QAbstractBarSeries* self, bool status, int index, QBarSet* barset);
void QAbstractBarSeries_Connect_Hovered(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_Pressed(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_Connect_Pressed(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_Released(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_Connect_Released(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_DoubleClicked(QAbstractBarSeries* self, int index, QBarSet* barset);
void QAbstractBarSeries_Connect_DoubleClicked(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_CountChanged(QAbstractBarSeries* self);
void QAbstractBarSeries_Connect_CountChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_LabelsVisibleChanged(QAbstractBarSeries* self);
void QAbstractBarSeries_Connect_LabelsVisibleChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_LabelsFormatChanged(QAbstractBarSeries* self, const libqt_string format);
void QAbstractBarSeries_Connect_LabelsFormatChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_LabelsPositionChanged(QAbstractBarSeries* self, int position);
void QAbstractBarSeries_Connect_LabelsPositionChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_LabelsAngleChanged(QAbstractBarSeries* self, double angle);
void QAbstractBarSeries_Connect_LabelsAngleChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_LabelsPrecisionChanged(QAbstractBarSeries* self, int precision);
void QAbstractBarSeries_Connect_LabelsPrecisionChanged(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_BarsetsAdded(QAbstractBarSeries* self, const libqt_list /* of QBarSet* */ sets);
void QAbstractBarSeries_Connect_BarsetsAdded(QAbstractBarSeries* self, intptr_t slot);
void QAbstractBarSeries_BarsetsRemoved(QAbstractBarSeries* self, const libqt_list /* of QBarSet* */ sets);
void QAbstractBarSeries_Connect_BarsetsRemoved(QAbstractBarSeries* self, intptr_t slot);
libqt_string QAbstractBarSeries_Tr2(const char* s, const char* c);
libqt_string QAbstractBarSeries_Tr3(const char* s, const char* c, int n);
void QAbstractBarSeries_SetLabelsVisible1(QAbstractBarSeries* self, bool visible);
void QAbstractBarSeries_Delete(QAbstractBarSeries* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
