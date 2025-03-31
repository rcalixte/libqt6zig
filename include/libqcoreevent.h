#pragma once
#ifndef SRCC_LIBQCOREEVENT_H
#define SRCC_LIBQCOREEVENT_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QDynamicPropertyChangeEvent QDynamicPropertyChangeEvent;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

#ifdef __cplusplus
typedef QEvent::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QEvent::Type Type;                     // C++ enum
#else
typedef unsigned char Type;  // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QEvent* QEvent_new(int typeVal);
int QEvent_Type(const QEvent* self);
bool QEvent_Spontaneous(const QEvent* self);
void QEvent_SetAccepted(QEvent* self, bool accepted);
void QEvent_OnSetAccepted(QEvent* self, intptr_t slot);
void QEvent_QBaseSetAccepted(QEvent* self, bool accepted);
bool QEvent_IsAccepted(const QEvent* self);
void QEvent_Accept(QEvent* self);
void QEvent_Ignore(QEvent* self);
bool QEvent_IsInputEvent(const QEvent* self);
bool QEvent_IsPointerEvent(const QEvent* self);
bool QEvent_IsSinglePointEvent(const QEvent* self);
int QEvent_RegisterEventType();
QEvent* QEvent_Clone(const QEvent* self);
void QEvent_OnClone(const QEvent* self, intptr_t slot);
QEvent* QEvent_QBaseClone(const QEvent* self);
int QEvent_RegisterEventType1(int hint);
void QEvent_Delete(QEvent* self);

QTimerEvent* QTimerEvent_new(int timerId);
QTimerEvent* QTimerEvent_Clone(const QTimerEvent* self);
void QTimerEvent_OnClone(const QTimerEvent* self, intptr_t slot);
QTimerEvent* QTimerEvent_QBaseClone(const QTimerEvent* self);
int QTimerEvent_TimerId(const QTimerEvent* self);
void QTimerEvent_SetAccepted(QTimerEvent* self, bool accepted);
void QTimerEvent_OnSetAccepted(QTimerEvent* self, intptr_t slot);
void QTimerEvent_QBaseSetAccepted(QTimerEvent* self, bool accepted);
void QTimerEvent_Delete(QTimerEvent* self);

QChildEvent* QChildEvent_new(int typeVal, QObject* child);
QChildEvent* QChildEvent_Clone(const QChildEvent* self);
void QChildEvent_OnClone(const QChildEvent* self, intptr_t slot);
QChildEvent* QChildEvent_QBaseClone(const QChildEvent* self);
QObject* QChildEvent_Child(const QChildEvent* self);
bool QChildEvent_Added(const QChildEvent* self);
bool QChildEvent_Polished(const QChildEvent* self);
bool QChildEvent_Removed(const QChildEvent* self);
void QChildEvent_SetAccepted(QChildEvent* self, bool accepted);
void QChildEvent_OnSetAccepted(QChildEvent* self, intptr_t slot);
void QChildEvent_QBaseSetAccepted(QChildEvent* self, bool accepted);
void QChildEvent_Delete(QChildEvent* self);

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(libqt_string name);
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_Clone(const QDynamicPropertyChangeEvent* self);
void QDynamicPropertyChangeEvent_OnClone(const QDynamicPropertyChangeEvent* self, intptr_t slot);
QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_QBaseClone(const QDynamicPropertyChangeEvent* self);
libqt_string QDynamicPropertyChangeEvent_PropertyName(const QDynamicPropertyChangeEvent* self);
void QDynamicPropertyChangeEvent_SetAccepted(QDynamicPropertyChangeEvent* self, bool accepted);
void QDynamicPropertyChangeEvent_OnSetAccepted(QDynamicPropertyChangeEvent* self, intptr_t slot);
void QDynamicPropertyChangeEvent_QBaseSetAccepted(QDynamicPropertyChangeEvent* self, bool accepted);
void QDynamicPropertyChangeEvent_Delete(QDynamicPropertyChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
