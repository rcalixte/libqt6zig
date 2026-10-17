#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXISFORMATTER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQVALUE3DAXISFORMATTER_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValue3DAxis QValue3DAxis;
typedef struct QValue3DAxisFormatter QValue3DAxisFormatter;
#endif

QValue3DAxisFormatter* QValue3DAxisFormatter_new();
QValue3DAxisFormatter* QValue3DAxisFormatter_new2(QObject* parent);
QMetaObject* QValue3DAxisFormatter_MetaObject(const QValue3DAxisFormatter* self);
void* QValue3DAxisFormatter_Metacast(QValue3DAxisFormatter* self, const char* param1);
int QValue3DAxisFormatter_Metacall(QValue3DAxisFormatter* self, int param1, int param2, void** param3);
libqt_string QValue3DAxisFormatter_Tr(const char* s);
QValue3DAxisFormatter* QValue3DAxisFormatter_CreateNewInstance(const QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_Recalculate(QValue3DAxisFormatter* self);
libqt_string QValue3DAxisFormatter_StringForValue(const QValue3DAxisFormatter* self, double value, const libqt_string format);
float QValue3DAxisFormatter_PositionAt(const QValue3DAxisFormatter* self, float value);
float QValue3DAxisFormatter_ValueAt(const QValue3DAxisFormatter* self, float position);
void QValue3DAxisFormatter_PopulateCopy(const QValue3DAxisFormatter* self, QValue3DAxisFormatter* copy);
libqt_string QValue3DAxisFormatter_Tr2(const char* s, const char* c);
libqt_string QValue3DAxisFormatter_Tr3(const char* s, const char* c, int n);
void QValue3DAxisFormatter_OnMetaObject(QValue3DAxisFormatter* self, intptr_t slot);
QMetaObject* QValue3DAxisFormatter_SuperMetaObject(const QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_OnMetacast(QValue3DAxisFormatter* self, intptr_t slot);
void* QValue3DAxisFormatter_SuperMetacast(QValue3DAxisFormatter* self, const char* param1);
void QValue3DAxisFormatter_OnMetacall(QValue3DAxisFormatter* self, intptr_t slot);
int QValue3DAxisFormatter_SuperMetacall(QValue3DAxisFormatter* self, int param1, int param2, void** param3);
void QValue3DAxisFormatter_OnCreateNewInstance(QValue3DAxisFormatter* self, intptr_t slot);
QValue3DAxisFormatter* QValue3DAxisFormatter_SuperCreateNewInstance(const QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_OnRecalculate(QValue3DAxisFormatter* self, intptr_t slot);
void QValue3DAxisFormatter_SuperRecalculate(QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_OnStringForValue(QValue3DAxisFormatter* self, intptr_t slot);
libqt_string QValue3DAxisFormatter_SuperStringForValue(const QValue3DAxisFormatter* self, double value, const libqt_string format);
void QValue3DAxisFormatter_OnPositionAt(QValue3DAxisFormatter* self, intptr_t slot);
float QValue3DAxisFormatter_SuperPositionAt(const QValue3DAxisFormatter* self, float value);
void QValue3DAxisFormatter_OnValueAt(QValue3DAxisFormatter* self, intptr_t slot);
float QValue3DAxisFormatter_SuperValueAt(const QValue3DAxisFormatter* self, float position);
void QValue3DAxisFormatter_OnPopulateCopy(QValue3DAxisFormatter* self, intptr_t slot);
void QValue3DAxisFormatter_SuperPopulateCopy(const QValue3DAxisFormatter* self, QValue3DAxisFormatter* copy);
bool QValue3DAxisFormatter_Event(QValue3DAxisFormatter* self, QEvent* event);
void QValue3DAxisFormatter_OnEvent(QValue3DAxisFormatter* self, intptr_t slot);
bool QValue3DAxisFormatter_SuperEvent(QValue3DAxisFormatter* self, QEvent* event);
bool QValue3DAxisFormatter_EventFilter(QValue3DAxisFormatter* self, QObject* watched, QEvent* event);
void QValue3DAxisFormatter_OnEventFilter(QValue3DAxisFormatter* self, intptr_t slot);
bool QValue3DAxisFormatter_SuperEventFilter(QValue3DAxisFormatter* self, QObject* watched, QEvent* event);
void QValue3DAxisFormatter_TimerEvent(QValue3DAxisFormatter* self, QTimerEvent* event);
void QValue3DAxisFormatter_OnTimerEvent(QValue3DAxisFormatter* self, intptr_t slot);
void QValue3DAxisFormatter_SuperTimerEvent(QValue3DAxisFormatter* self, QTimerEvent* event);
void QValue3DAxisFormatter_ChildEvent(QValue3DAxisFormatter* self, QChildEvent* event);
void QValue3DAxisFormatter_OnChildEvent(QValue3DAxisFormatter* self, intptr_t slot);
void QValue3DAxisFormatter_SuperChildEvent(QValue3DAxisFormatter* self, QChildEvent* event);
void QValue3DAxisFormatter_CustomEvent(QValue3DAxisFormatter* self, QEvent* event);
void QValue3DAxisFormatter_OnCustomEvent(QValue3DAxisFormatter* self, intptr_t slot);
void QValue3DAxisFormatter_SuperCustomEvent(QValue3DAxisFormatter* self, QEvent* event);
void QValue3DAxisFormatter_ConnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal);
void QValue3DAxisFormatter_OnConnectNotify(QValue3DAxisFormatter* self, intptr_t slot);
void QValue3DAxisFormatter_SuperConnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal);
void QValue3DAxisFormatter_DisconnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal);
void QValue3DAxisFormatter_OnDisconnectNotify(QValue3DAxisFormatter* self, intptr_t slot);
void QValue3DAxisFormatter_SuperDisconnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal);
void QValue3DAxisFormatter_SetAllowNegatives(QValue3DAxisFormatter* self, bool allow);
bool QValue3DAxisFormatter_AllowNegatives(const QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_SetAllowZero(QValue3DAxisFormatter* self, bool allow);
bool QValue3DAxisFormatter_AllowZero(const QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_MarkDirty(QValue3DAxisFormatter* self);
QValue3DAxis* QValue3DAxisFormatter_Axis(const QValue3DAxisFormatter* self);
libqt_list /* of float */ QValue3DAxisFormatter_GridPositions(const QValue3DAxisFormatter* self);
libqt_list /* of float */ QValue3DAxisFormatter_SubGridPositions(const QValue3DAxisFormatter* self);
libqt_list /* of float */ QValue3DAxisFormatter_LabelPositions(const QValue3DAxisFormatter* self);
libqt_list /* of libqt_string */ QValue3DAxisFormatter_LabelStrings(const QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_SetLocale(QValue3DAxisFormatter* self, const QLocale* locale);
QLocale* QValue3DAxisFormatter_Locale(const QValue3DAxisFormatter* self);
void QValue3DAxisFormatter_MarkDirty1(QValue3DAxisFormatter* self, bool labelsChange);
QObject* QValue3DAxisFormatter_Sender(const QValue3DAxisFormatter* self);
int QValue3DAxisFormatter_SenderSignalIndex(const QValue3DAxisFormatter* self);
int QValue3DAxisFormatter_Receivers(const QValue3DAxisFormatter* self, const char* signal);
bool QValue3DAxisFormatter_IsSignalConnected(const QValue3DAxisFormatter* self, const QMetaMethod* signal);
void QValue3DAxisFormatter_Delete(QValue3DAxisFormatter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
