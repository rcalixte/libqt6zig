#pragma once
#ifndef SRCC_LIBQINPUTDEVICE_H
#define SRCC_LIBQINPUTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QInputDevice QInputDevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QTimerEvent QTimerEvent;
#endif

QInputDevice* QInputDevice_new();
QInputDevice* QInputDevice_new2(const libqt_string name, long long systemId, int typeVal);
QInputDevice* QInputDevice_new3(QObject* parent);
QInputDevice* QInputDevice_new4(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName);
QInputDevice* QInputDevice_new5(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName, QObject* parent);
QMetaObject* QInputDevice_MetaObject(const QInputDevice* self);
void* QInputDevice_Metacast(QInputDevice* self, const char* param1);
int QInputDevice_Metacall(QInputDevice* self, int param1, int param2, void** param3);
libqt_string QInputDevice_Name(const QInputDevice* self);
int QInputDevice_Type(const QInputDevice* self);
int QInputDevice_Capabilities(const QInputDevice* self);
bool QInputDevice_HasCapability(const QInputDevice* self, int cap);
long long QInputDevice_SystemId(const QInputDevice* self);
libqt_string QInputDevice_SeatName(const QInputDevice* self);
QRect* QInputDevice_AvailableVirtualGeometry(const QInputDevice* self);
libqt_list /* of libqt_string */ QInputDevice_SeatNames();
libqt_list /* of QInputDevice* */ QInputDevice_Devices();
QInputDevice* QInputDevice_PrimaryKeyboard();
bool QInputDevice_OperatorEqual(const QInputDevice* self, const QInputDevice* other);
void QInputDevice_AvailableVirtualGeometryChanged(QInputDevice* self, QRect* area);
void QInputDevice_Connect_AvailableVirtualGeometryChanged(QInputDevice* self, intptr_t slot);
QInputDevice* QInputDevice_PrimaryKeyboard1(const libqt_string seatName);
void QInputDevice_OnMetaObject(const QInputDevice* self, intptr_t slot);
QMetaObject* QInputDevice_SuperMetaObject(const QInputDevice* self);
void QInputDevice_OnMetacast(QInputDevice* self, intptr_t slot);
void* QInputDevice_SuperMetacast(QInputDevice* self, const char* param1);
void QInputDevice_OnMetacall(QInputDevice* self, intptr_t slot);
int QInputDevice_SuperMetacall(QInputDevice* self, int param1, int param2, void** param3);
bool QInputDevice_Event(QInputDevice* self, QEvent* event);
void QInputDevice_OnEvent(QInputDevice* self, intptr_t slot);
bool QInputDevice_SuperEvent(QInputDevice* self, QEvent* event);
bool QInputDevice_EventFilter(QInputDevice* self, QObject* watched, QEvent* event);
void QInputDevice_OnEventFilter(QInputDevice* self, intptr_t slot);
bool QInputDevice_SuperEventFilter(QInputDevice* self, QObject* watched, QEvent* event);
void QInputDevice_TimerEvent(QInputDevice* self, QTimerEvent* event);
void QInputDevice_OnTimerEvent(QInputDevice* self, intptr_t slot);
void QInputDevice_SuperTimerEvent(QInputDevice* self, QTimerEvent* event);
void QInputDevice_ChildEvent(QInputDevice* self, QChildEvent* event);
void QInputDevice_OnChildEvent(QInputDevice* self, intptr_t slot);
void QInputDevice_SuperChildEvent(QInputDevice* self, QChildEvent* event);
void QInputDevice_CustomEvent(QInputDevice* self, QEvent* event);
void QInputDevice_OnCustomEvent(QInputDevice* self, intptr_t slot);
void QInputDevice_SuperCustomEvent(QInputDevice* self, QEvent* event);
void QInputDevice_ConnectNotify(QInputDevice* self, const QMetaMethod* signal);
void QInputDevice_OnConnectNotify(QInputDevice* self, intptr_t slot);
void QInputDevice_SuperConnectNotify(QInputDevice* self, const QMetaMethod* signal);
void QInputDevice_DisconnectNotify(QInputDevice* self, const QMetaMethod* signal);
void QInputDevice_OnDisconnectNotify(QInputDevice* self, intptr_t slot);
void QInputDevice_SuperDisconnectNotify(QInputDevice* self, const QMetaMethod* signal);
QObject* QInputDevice_Sender(const QInputDevice* self);
void QInputDevice_OnSender(const QInputDevice* self, intptr_t slot);
QObject* QInputDevice_SuperSender(const QInputDevice* self);
int QInputDevice_SenderSignalIndex(const QInputDevice* self);
void QInputDevice_OnSenderSignalIndex(const QInputDevice* self, intptr_t slot);
int QInputDevice_SuperSenderSignalIndex(const QInputDevice* self);
int QInputDevice_Receivers(const QInputDevice* self, const char* signal);
void QInputDevice_OnReceivers(const QInputDevice* self, intptr_t slot);
int QInputDevice_SuperReceivers(const QInputDevice* self, const char* signal);
bool QInputDevice_IsSignalConnected(const QInputDevice* self, const QMetaMethod* signal);
void QInputDevice_OnIsSignalConnected(const QInputDevice* self, intptr_t slot);
bool QInputDevice_SuperIsSignalConnected(const QInputDevice* self, const QMetaMethod* signal);
void QInputDevice_Delete(QInputDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
