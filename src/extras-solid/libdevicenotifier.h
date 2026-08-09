#pragma once
#ifndef EXTRAS_SOLID_LIBDEVICENOTIFIER_H
#define EXTRAS_SOLID_LIBDEVICENOTIFIER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceNotifier)
typedef Solid::DeviceNotifier Solid__DeviceNotifier;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct Solid__DeviceNotifier Solid__DeviceNotifier;
#endif

Solid__DeviceNotifier* Solid__DeviceNotifier_new();
QMetaObject* Solid__DeviceNotifier_MetaObject(const Solid__DeviceNotifier* self);
void* Solid__DeviceNotifier_Metacast(Solid__DeviceNotifier* self, const char* param1);
int Solid__DeviceNotifier_Metacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3);
Solid__DeviceNotifier* Solid__DeviceNotifier_Instance();
void Solid__DeviceNotifier_DeviceAdded(Solid__DeviceNotifier* self, const libqt_string udi);
void Solid__DeviceNotifier_Connect_DeviceAdded(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_DeviceRemoved(Solid__DeviceNotifier* self, const libqt_string udi);
void Solid__DeviceNotifier_Connect_DeviceRemoved(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_OnMetaObject(const Solid__DeviceNotifier* self, intptr_t slot);
QMetaObject* Solid__DeviceNotifier_SuperMetaObject(const Solid__DeviceNotifier* self);
void Solid__DeviceNotifier_OnMetacast(Solid__DeviceNotifier* self, intptr_t slot);
void* Solid__DeviceNotifier_SuperMetacast(Solid__DeviceNotifier* self, const char* param1);
void Solid__DeviceNotifier_OnMetacall(Solid__DeviceNotifier* self, intptr_t slot);
int Solid__DeviceNotifier_SuperMetacall(Solid__DeviceNotifier* self, int param1, int param2, void** param3);
bool Solid__DeviceNotifier_Event(Solid__DeviceNotifier* self, QEvent* event);
void Solid__DeviceNotifier_OnEvent(Solid__DeviceNotifier* self, intptr_t slot);
bool Solid__DeviceNotifier_SuperEvent(Solid__DeviceNotifier* self, QEvent* event);
bool Solid__DeviceNotifier_EventFilter(Solid__DeviceNotifier* self, QObject* watched, QEvent* event);
void Solid__DeviceNotifier_OnEventFilter(Solid__DeviceNotifier* self, intptr_t slot);
bool Solid__DeviceNotifier_SuperEventFilter(Solid__DeviceNotifier* self, QObject* watched, QEvent* event);
void Solid__DeviceNotifier_TimerEvent(Solid__DeviceNotifier* self, QTimerEvent* event);
void Solid__DeviceNotifier_OnTimerEvent(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_SuperTimerEvent(Solid__DeviceNotifier* self, QTimerEvent* event);
void Solid__DeviceNotifier_ChildEvent(Solid__DeviceNotifier* self, QChildEvent* event);
void Solid__DeviceNotifier_OnChildEvent(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_SuperChildEvent(Solid__DeviceNotifier* self, QChildEvent* event);
void Solid__DeviceNotifier_CustomEvent(Solid__DeviceNotifier* self, QEvent* event);
void Solid__DeviceNotifier_OnCustomEvent(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_SuperCustomEvent(Solid__DeviceNotifier* self, QEvent* event);
void Solid__DeviceNotifier_ConnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal);
void Solid__DeviceNotifier_OnConnectNotify(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_SuperConnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal);
void Solid__DeviceNotifier_DisconnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal);
void Solid__DeviceNotifier_OnDisconnectNotify(Solid__DeviceNotifier* self, intptr_t slot);
void Solid__DeviceNotifier_SuperDisconnectNotify(Solid__DeviceNotifier* self, const QMetaMethod* signal);
QObject* Solid__DeviceNotifier_Sender(const Solid__DeviceNotifier* self);
void Solid__DeviceNotifier_OnSender(const Solid__DeviceNotifier* self, intptr_t slot);
QObject* Solid__DeviceNotifier_SuperSender(const Solid__DeviceNotifier* self);
int Solid__DeviceNotifier_SenderSignalIndex(const Solid__DeviceNotifier* self);
void Solid__DeviceNotifier_OnSenderSignalIndex(const Solid__DeviceNotifier* self, intptr_t slot);
int Solid__DeviceNotifier_SuperSenderSignalIndex(const Solid__DeviceNotifier* self);
int Solid__DeviceNotifier_Receivers(const Solid__DeviceNotifier* self, const char* signal);
void Solid__DeviceNotifier_OnReceivers(const Solid__DeviceNotifier* self, intptr_t slot);
int Solid__DeviceNotifier_SuperReceivers(const Solid__DeviceNotifier* self, const char* signal);
bool Solid__DeviceNotifier_IsSignalConnected(const Solid__DeviceNotifier* self, const QMetaMethod* signal);
void Solid__DeviceNotifier_OnIsSignalConnected(const Solid__DeviceNotifier* self, intptr_t slot);
bool Solid__DeviceNotifier_SuperIsSignalConnected(const Solid__DeviceNotifier* self, const QMetaMethod* signal);
void Solid__DeviceNotifier_Delete(Solid__DeviceNotifier* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
