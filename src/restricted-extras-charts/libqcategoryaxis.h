#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCATEGORYAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBQCATEGORYAXIS_H

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
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QCategoryAxis QCategoryAxis;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValueAxis QValueAxis;
#endif

#ifdef __cplusplus
typedef QCategoryAxis::AxisLabelsPosition AxisLabelsPosition; // C++ enum
#else
typedef int AxisLabelsPosition; // C ABI enum
#endif

QCategoryAxis* QCategoryAxis_new();
QCategoryAxis* QCategoryAxis_new2(QObject* parent);
QMetaObject* QCategoryAxis_MetaObject(const QCategoryAxis* self);
void* QCategoryAxis_Metacast(QCategoryAxis* self, const char* param1);
int QCategoryAxis_Metacall(QCategoryAxis* self, int param1, int param2, void** param3);
void QCategoryAxis_OnMetacall(QCategoryAxis* self, intptr_t slot);
int QCategoryAxis_QBaseMetacall(QCategoryAxis* self, int param1, int param2, void** param3);
libqt_string QCategoryAxis_Tr(const char* s);
int QCategoryAxis_Type(const QCategoryAxis* self);
void QCategoryAxis_OnType(const QCategoryAxis* self, intptr_t slot);
int QCategoryAxis_QBaseType(const QCategoryAxis* self);
void QCategoryAxis_Append(QCategoryAxis* self, const libqt_string label, double categoryEndValue);
void QCategoryAxis_Remove(QCategoryAxis* self, const libqt_string label);
void QCategoryAxis_ReplaceLabel(QCategoryAxis* self, const libqt_string oldLabel, const libqt_string newLabel);
double QCategoryAxis_StartValue(const QCategoryAxis* self);
void QCategoryAxis_SetStartValue(QCategoryAxis* self, double min);
double QCategoryAxis_EndValue(const QCategoryAxis* self, const libqt_string categoryLabel);
libqt_list /* of libqt_string */ QCategoryAxis_CategoriesLabels(QCategoryAxis* self);
int QCategoryAxis_Count(const QCategoryAxis* self);
int QCategoryAxis_LabelsPosition(const QCategoryAxis* self);
void QCategoryAxis_SetLabelsPosition(QCategoryAxis* self, int position);
void QCategoryAxis_CategoriesChanged(QCategoryAxis* self);
void QCategoryAxis_Connect_CategoriesChanged(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_LabelsPositionChanged(QCategoryAxis* self, int position);
void QCategoryAxis_Connect_LabelsPositionChanged(QCategoryAxis* self, intptr_t slot);
libqt_string QCategoryAxis_Tr2(const char* s, const char* c);
libqt_string QCategoryAxis_Tr3(const char* s, const char* c, int n);
double QCategoryAxis_StartValue1(const QCategoryAxis* self, const libqt_string categoryLabel);
bool QCategoryAxis_Event(QCategoryAxis* self, QEvent* event);
void QCategoryAxis_OnEvent(QCategoryAxis* self, intptr_t slot);
bool QCategoryAxis_QBaseEvent(QCategoryAxis* self, QEvent* event);
bool QCategoryAxis_EventFilter(QCategoryAxis* self, QObject* watched, QEvent* event);
void QCategoryAxis_OnEventFilter(QCategoryAxis* self, intptr_t slot);
bool QCategoryAxis_QBaseEventFilter(QCategoryAxis* self, QObject* watched, QEvent* event);
void QCategoryAxis_TimerEvent(QCategoryAxis* self, QTimerEvent* event);
void QCategoryAxis_OnTimerEvent(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_QBaseTimerEvent(QCategoryAxis* self, QTimerEvent* event);
void QCategoryAxis_ChildEvent(QCategoryAxis* self, QChildEvent* event);
void QCategoryAxis_OnChildEvent(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_QBaseChildEvent(QCategoryAxis* self, QChildEvent* event);
void QCategoryAxis_CustomEvent(QCategoryAxis* self, QEvent* event);
void QCategoryAxis_OnCustomEvent(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_QBaseCustomEvent(QCategoryAxis* self, QEvent* event);
void QCategoryAxis_ConnectNotify(QCategoryAxis* self, const QMetaMethod* signal);
void QCategoryAxis_OnConnectNotify(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_QBaseConnectNotify(QCategoryAxis* self, const QMetaMethod* signal);
void QCategoryAxis_DisconnectNotify(QCategoryAxis* self, const QMetaMethod* signal);
void QCategoryAxis_OnDisconnectNotify(QCategoryAxis* self, intptr_t slot);
void QCategoryAxis_QBaseDisconnectNotify(QCategoryAxis* self, const QMetaMethod* signal);
QObject* QCategoryAxis_Sender(const QCategoryAxis* self);
void QCategoryAxis_OnSender(const QCategoryAxis* self, intptr_t slot);
QObject* QCategoryAxis_QBaseSender(const QCategoryAxis* self);
int QCategoryAxis_SenderSignalIndex(const QCategoryAxis* self);
void QCategoryAxis_OnSenderSignalIndex(const QCategoryAxis* self, intptr_t slot);
int QCategoryAxis_QBaseSenderSignalIndex(const QCategoryAxis* self);
int QCategoryAxis_Receivers(const QCategoryAxis* self, const char* signal);
void QCategoryAxis_OnReceivers(const QCategoryAxis* self, intptr_t slot);
int QCategoryAxis_QBaseReceivers(const QCategoryAxis* self, const char* signal);
bool QCategoryAxis_IsSignalConnected(const QCategoryAxis* self, const QMetaMethod* signal);
void QCategoryAxis_OnIsSignalConnected(const QCategoryAxis* self, intptr_t slot);
bool QCategoryAxis_QBaseIsSignalConnected(const QCategoryAxis* self, const QMetaMethod* signal);
void QCategoryAxis_Delete(QCategoryAxis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
