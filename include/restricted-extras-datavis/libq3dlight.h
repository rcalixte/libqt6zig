#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DLIGHT_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DLIGHT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DLight Q3DLight;
typedef struct Q3DObject Q3DObject;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

Q3DLight* Q3DLight_new();
Q3DLight* Q3DLight_new2(QObject* parent);
QMetaObject* Q3DLight_MetaObject(const Q3DLight* self);
void* Q3DLight_Metacast(Q3DLight* self, const char* param1);
int Q3DLight_Metacall(Q3DLight* self, int param1, int param2, void** param3);
libqt_string Q3DLight_Tr(const char* s);
void Q3DLight_SetAutoPosition(Q3DLight* self, bool enabled);
bool Q3DLight_IsAutoPosition(Q3DLight* self);
void Q3DLight_AutoPositionChanged(Q3DLight* self, bool autoPosition);
void Q3DLight_Connect_AutoPositionChanged(Q3DLight* self, intptr_t slot);
libqt_string Q3DLight_Tr2(const char* s, const char* c);
libqt_string Q3DLight_Tr3(const char* s, const char* c, int n);
void Q3DLight_OnMetaObject(Q3DLight* self, intptr_t slot);
QMetaObject* Q3DLight_SuperMetaObject(const Q3DLight* self);
void Q3DLight_OnMetacast(Q3DLight* self, intptr_t slot);
void* Q3DLight_SuperMetacast(Q3DLight* self, const char* param1);
void Q3DLight_OnMetacall(Q3DLight* self, intptr_t slot);
int Q3DLight_SuperMetacall(Q3DLight* self, int param1, int param2, void** param3);
void Q3DLight_CopyValuesFrom(Q3DLight* self, const Q3DObject* source);
void Q3DLight_OnCopyValuesFrom(Q3DLight* self, intptr_t slot);
void Q3DLight_SuperCopyValuesFrom(Q3DLight* self, const Q3DObject* source);
bool Q3DLight_Event(Q3DLight* self, QEvent* event);
void Q3DLight_OnEvent(Q3DLight* self, intptr_t slot);
bool Q3DLight_SuperEvent(Q3DLight* self, QEvent* event);
bool Q3DLight_EventFilter(Q3DLight* self, QObject* watched, QEvent* event);
void Q3DLight_OnEventFilter(Q3DLight* self, intptr_t slot);
bool Q3DLight_SuperEventFilter(Q3DLight* self, QObject* watched, QEvent* event);
void Q3DLight_TimerEvent(Q3DLight* self, QTimerEvent* event);
void Q3DLight_OnTimerEvent(Q3DLight* self, intptr_t slot);
void Q3DLight_SuperTimerEvent(Q3DLight* self, QTimerEvent* event);
void Q3DLight_ChildEvent(Q3DLight* self, QChildEvent* event);
void Q3DLight_OnChildEvent(Q3DLight* self, intptr_t slot);
void Q3DLight_SuperChildEvent(Q3DLight* self, QChildEvent* event);
void Q3DLight_CustomEvent(Q3DLight* self, QEvent* event);
void Q3DLight_OnCustomEvent(Q3DLight* self, intptr_t slot);
void Q3DLight_SuperCustomEvent(Q3DLight* self, QEvent* event);
void Q3DLight_ConnectNotify(Q3DLight* self, const QMetaMethod* signal);
void Q3DLight_OnConnectNotify(Q3DLight* self, intptr_t slot);
void Q3DLight_SuperConnectNotify(Q3DLight* self, const QMetaMethod* signal);
void Q3DLight_DisconnectNotify(Q3DLight* self, const QMetaMethod* signal);
void Q3DLight_OnDisconnectNotify(Q3DLight* self, intptr_t slot);
void Q3DLight_SuperDisconnectNotify(Q3DLight* self, const QMetaMethod* signal);
void Q3DLight_SetDirty(Q3DLight* self, bool dirty);
bool Q3DLight_IsDirty(const Q3DLight* self);
QObject* Q3DLight_Sender(const Q3DLight* self);
int Q3DLight_SenderSignalIndex(const Q3DLight* self);
int Q3DLight_Receivers(const Q3DLight* self, const char* signal);
bool Q3DLight_IsSignalConnected(const Q3DLight* self, const QMetaMethod* signal);
void Q3DLight_Delete(Q3DLight* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
