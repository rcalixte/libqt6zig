#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DOBJECT_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DObject Q3DObject;
typedef struct Q3DScene Q3DScene;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

Q3DObject* Q3DObject_new();
Q3DObject* Q3DObject_new2(QObject* parent);
QMetaObject* Q3DObject_MetaObject(const Q3DObject* self);
void* Q3DObject_Metacast(Q3DObject* self, const char* param1);
int Q3DObject_Metacall(Q3DObject* self, int param1, int param2, void** param3);
libqt_string Q3DObject_Tr(const char* s);
void Q3DObject_CopyValuesFrom(Q3DObject* self, const Q3DObject* source);
Q3DScene* Q3DObject_ParentScene(Q3DObject* self);
QVector3D* Q3DObject_Position(const Q3DObject* self);
void Q3DObject_SetPosition(Q3DObject* self, const QVector3D* position);
void Q3DObject_PositionChanged(Q3DObject* self, const QVector3D* position);
void Q3DObject_Connect_PositionChanged(Q3DObject* self, intptr_t slot);
libqt_string Q3DObject_Tr2(const char* s, const char* c);
libqt_string Q3DObject_Tr3(const char* s, const char* c, int n);
void Q3DObject_OnMetaObject(Q3DObject* self, intptr_t slot);
QMetaObject* Q3DObject_SuperMetaObject(const Q3DObject* self);
void Q3DObject_OnMetacast(Q3DObject* self, intptr_t slot);
void* Q3DObject_SuperMetacast(Q3DObject* self, const char* param1);
void Q3DObject_OnMetacall(Q3DObject* self, intptr_t slot);
int Q3DObject_SuperMetacall(Q3DObject* self, int param1, int param2, void** param3);
void Q3DObject_OnCopyValuesFrom(Q3DObject* self, intptr_t slot);
void Q3DObject_SuperCopyValuesFrom(Q3DObject* self, const Q3DObject* source);
bool Q3DObject_Event(Q3DObject* self, QEvent* event);
void Q3DObject_OnEvent(Q3DObject* self, intptr_t slot);
bool Q3DObject_SuperEvent(Q3DObject* self, QEvent* event);
bool Q3DObject_EventFilter(Q3DObject* self, QObject* watched, QEvent* event);
void Q3DObject_OnEventFilter(Q3DObject* self, intptr_t slot);
bool Q3DObject_SuperEventFilter(Q3DObject* self, QObject* watched, QEvent* event);
void Q3DObject_TimerEvent(Q3DObject* self, QTimerEvent* event);
void Q3DObject_OnTimerEvent(Q3DObject* self, intptr_t slot);
void Q3DObject_SuperTimerEvent(Q3DObject* self, QTimerEvent* event);
void Q3DObject_ChildEvent(Q3DObject* self, QChildEvent* event);
void Q3DObject_OnChildEvent(Q3DObject* self, intptr_t slot);
void Q3DObject_SuperChildEvent(Q3DObject* self, QChildEvent* event);
void Q3DObject_CustomEvent(Q3DObject* self, QEvent* event);
void Q3DObject_OnCustomEvent(Q3DObject* self, intptr_t slot);
void Q3DObject_SuperCustomEvent(Q3DObject* self, QEvent* event);
void Q3DObject_ConnectNotify(Q3DObject* self, const QMetaMethod* signal);
void Q3DObject_OnConnectNotify(Q3DObject* self, intptr_t slot);
void Q3DObject_SuperConnectNotify(Q3DObject* self, const QMetaMethod* signal);
void Q3DObject_DisconnectNotify(Q3DObject* self, const QMetaMethod* signal);
void Q3DObject_OnDisconnectNotify(Q3DObject* self, intptr_t slot);
void Q3DObject_SuperDisconnectNotify(Q3DObject* self, const QMetaMethod* signal);
void Q3DObject_SetDirty(Q3DObject* self, bool dirty);
bool Q3DObject_IsDirty(const Q3DObject* self);
QObject* Q3DObject_Sender(const Q3DObject* self);
int Q3DObject_SenderSignalIndex(const Q3DObject* self);
int Q3DObject_Receivers(const Q3DObject* self, const char* signal);
bool Q3DObject_IsSignalConnected(const Q3DObject* self, const QMetaMethod* signal);
void Q3DObject_Delete(Q3DObject* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
