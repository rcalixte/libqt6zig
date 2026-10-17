#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQLOGVALUE3DAXISFORMATTER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQLOGVALUE3DAXISFORMATTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocale QLocale;
typedef struct QLogValue3DAxisFormatter QLogValue3DAxisFormatter;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValue3DAxis QValue3DAxis;
typedef struct QValue3DAxisFormatter QValue3DAxisFormatter;
#endif

QLogValue3DAxisFormatter* QLogValue3DAxisFormatter_new();
QLogValue3DAxisFormatter* QLogValue3DAxisFormatter_new2(QObject* parent);
QMetaObject* QLogValue3DAxisFormatter_MetaObject(const QLogValue3DAxisFormatter* self);
void* QLogValue3DAxisFormatter_Metacast(QLogValue3DAxisFormatter* self, const char* param1);
int QLogValue3DAxisFormatter_Metacall(QLogValue3DAxisFormatter* self, int param1, int param2, void** param3);
libqt_string QLogValue3DAxisFormatter_Tr(const char* s);
void QLogValue3DAxisFormatter_SetBase(QLogValue3DAxisFormatter* self, double base);
double QLogValue3DAxisFormatter_Base(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_SetAutoSubGrid(QLogValue3DAxisFormatter* self, bool enabled);
bool QLogValue3DAxisFormatter_AutoSubGrid(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_SetShowEdgeLabels(QLogValue3DAxisFormatter* self, bool enabled);
bool QLogValue3DAxisFormatter_ShowEdgeLabels(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_BaseChanged(QLogValue3DAxisFormatter* self, double base);
void QLogValue3DAxisFormatter_Connect_BaseChanged(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_AutoSubGridChanged(QLogValue3DAxisFormatter* self, bool enabled);
void QLogValue3DAxisFormatter_Connect_AutoSubGridChanged(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_ShowEdgeLabelsChanged(QLogValue3DAxisFormatter* self, bool enabled);
void QLogValue3DAxisFormatter_Connect_ShowEdgeLabelsChanged(QLogValue3DAxisFormatter* self, intptr_t slot);
QValue3DAxisFormatter* QLogValue3DAxisFormatter_CreateNewInstance(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_Recalculate(QLogValue3DAxisFormatter* self);
float QLogValue3DAxisFormatter_PositionAt(const QLogValue3DAxisFormatter* self, float value);
float QLogValue3DAxisFormatter_ValueAt(const QLogValue3DAxisFormatter* self, float position);
void QLogValue3DAxisFormatter_PopulateCopy(const QLogValue3DAxisFormatter* self, QValue3DAxisFormatter* copy);
libqt_string QLogValue3DAxisFormatter_Tr2(const char* s, const char* c);
libqt_string QLogValue3DAxisFormatter_Tr3(const char* s, const char* c, int n);
void QLogValue3DAxisFormatter_OnMetaObject(QLogValue3DAxisFormatter* self, intptr_t slot);
QMetaObject* QLogValue3DAxisFormatter_SuperMetaObject(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_OnMetacast(QLogValue3DAxisFormatter* self, intptr_t slot);
void* QLogValue3DAxisFormatter_SuperMetacast(QLogValue3DAxisFormatter* self, const char* param1);
void QLogValue3DAxisFormatter_OnMetacall(QLogValue3DAxisFormatter* self, intptr_t slot);
int QLogValue3DAxisFormatter_SuperMetacall(QLogValue3DAxisFormatter* self, int param1, int param2, void** param3);
void QLogValue3DAxisFormatter_OnCreateNewInstance(QLogValue3DAxisFormatter* self, intptr_t slot);
QValue3DAxisFormatter* QLogValue3DAxisFormatter_SuperCreateNewInstance(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_OnRecalculate(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_SuperRecalculate(QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_OnPositionAt(QLogValue3DAxisFormatter* self, intptr_t slot);
float QLogValue3DAxisFormatter_SuperPositionAt(const QLogValue3DAxisFormatter* self, float value);
void QLogValue3DAxisFormatter_OnValueAt(QLogValue3DAxisFormatter* self, intptr_t slot);
float QLogValue3DAxisFormatter_SuperValueAt(const QLogValue3DAxisFormatter* self, float position);
void QLogValue3DAxisFormatter_OnPopulateCopy(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_SuperPopulateCopy(const QLogValue3DAxisFormatter* self, QValue3DAxisFormatter* copy);
libqt_string QLogValue3DAxisFormatter_StringForValue(const QLogValue3DAxisFormatter* self, double value, const libqt_string format);
void QLogValue3DAxisFormatter_OnStringForValue(QLogValue3DAxisFormatter* self, intptr_t slot);
libqt_string QLogValue3DAxisFormatter_SuperStringForValue(const QLogValue3DAxisFormatter* self, double value, const libqt_string format);
bool QLogValue3DAxisFormatter_Event(QLogValue3DAxisFormatter* self, QEvent* event);
void QLogValue3DAxisFormatter_OnEvent(QLogValue3DAxisFormatter* self, intptr_t slot);
bool QLogValue3DAxisFormatter_SuperEvent(QLogValue3DAxisFormatter* self, QEvent* event);
bool QLogValue3DAxisFormatter_EventFilter(QLogValue3DAxisFormatter* self, QObject* watched, QEvent* event);
void QLogValue3DAxisFormatter_OnEventFilter(QLogValue3DAxisFormatter* self, intptr_t slot);
bool QLogValue3DAxisFormatter_SuperEventFilter(QLogValue3DAxisFormatter* self, QObject* watched, QEvent* event);
void QLogValue3DAxisFormatter_TimerEvent(QLogValue3DAxisFormatter* self, QTimerEvent* event);
void QLogValue3DAxisFormatter_OnTimerEvent(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_SuperTimerEvent(QLogValue3DAxisFormatter* self, QTimerEvent* event);
void QLogValue3DAxisFormatter_ChildEvent(QLogValue3DAxisFormatter* self, QChildEvent* event);
void QLogValue3DAxisFormatter_OnChildEvent(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_SuperChildEvent(QLogValue3DAxisFormatter* self, QChildEvent* event);
void QLogValue3DAxisFormatter_CustomEvent(QLogValue3DAxisFormatter* self, QEvent* event);
void QLogValue3DAxisFormatter_OnCustomEvent(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_SuperCustomEvent(QLogValue3DAxisFormatter* self, QEvent* event);
void QLogValue3DAxisFormatter_ConnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal);
void QLogValue3DAxisFormatter_OnConnectNotify(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_SuperConnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal);
void QLogValue3DAxisFormatter_DisconnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal);
void QLogValue3DAxisFormatter_OnDisconnectNotify(QLogValue3DAxisFormatter* self, intptr_t slot);
void QLogValue3DAxisFormatter_SuperDisconnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal);
void QLogValue3DAxisFormatter_SetAllowNegatives(QLogValue3DAxisFormatter* self, bool allow);
bool QLogValue3DAxisFormatter_AllowNegatives(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_SetAllowZero(QLogValue3DAxisFormatter* self, bool allow);
bool QLogValue3DAxisFormatter_AllowZero(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_MarkDirty(QLogValue3DAxisFormatter* self);
QValue3DAxis* QLogValue3DAxisFormatter_Axis(const QLogValue3DAxisFormatter* self);
libqt_list /* of float */ QLogValue3DAxisFormatter_GridPositions(const QLogValue3DAxisFormatter* self);
libqt_list /* of float */ QLogValue3DAxisFormatter_SubGridPositions(const QLogValue3DAxisFormatter* self);
libqt_list /* of float */ QLogValue3DAxisFormatter_LabelPositions(const QLogValue3DAxisFormatter* self);
libqt_list /* of libqt_string */ QLogValue3DAxisFormatter_LabelStrings(const QLogValue3DAxisFormatter* self);
void QLogValue3DAxisFormatter_SetLocale(QLogValue3DAxisFormatter* self, const QLocale* locale);
QLocale* QLogValue3DAxisFormatter_Locale(const QLogValue3DAxisFormatter* self);
QObject* QLogValue3DAxisFormatter_Sender(const QLogValue3DAxisFormatter* self);
int QLogValue3DAxisFormatter_SenderSignalIndex(const QLogValue3DAxisFormatter* self);
int QLogValue3DAxisFormatter_Receivers(const QLogValue3DAxisFormatter* self, const char* signal);
bool QLogValue3DAxisFormatter_IsSignalConnected(const QLogValue3DAxisFormatter* self, const QMetaMethod* signal);
void QLogValue3DAxisFormatter_Delete(QLogValue3DAxisFormatter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
