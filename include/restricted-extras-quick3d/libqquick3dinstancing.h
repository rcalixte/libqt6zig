#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DINSTANCING_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DInstancing__InstanceTableEntry)
typedef QQuick3DInstancing::InstanceTableEntry QQuick3DInstancing__InstanceTableEntry;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData)
typedef QQuick3DObject::ItemChangeData QQuick3DObject__ItemChangeData;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlParserStatus QQmlParserStatus;
typedef struct QQuaternion QQuaternion;
typedef struct QQuick3DInstancing QQuick3DInstancing;
typedef struct QQuick3DInstancing__InstanceTableEntry QQuick3DInstancing__InstanceTableEntry;
typedef struct QQuick3DObject QQuick3DObject;
typedef struct QQuick3DObject__ItemChangeData QQuick3DObject__ItemChangeData;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
#endif

QQuick3DInstancing* QQuick3DInstancing_new();
QQuick3DInstancing* QQuick3DInstancing_new2(QQuick3DObject* parent);
QMetaObject* QQuick3DInstancing_MetaObject(const QQuick3DInstancing* self);
void* QQuick3DInstancing_Metacast(QQuick3DInstancing* self, const char* param1);
int QQuick3DInstancing_Metacall(QQuick3DInstancing* self, int param1, int param2, void** param3);
libqt_string QQuick3DInstancing_Tr(const char* s);
libqt_string QQuick3DInstancing_InstanceBuffer(QQuick3DInstancing* self, int* instanceCount);
int QQuick3DInstancing_InstanceCountOverride(const QQuick3DInstancing* self);
bool QQuick3DInstancing_HasTransparency(const QQuick3DInstancing* self);
bool QQuick3DInstancing_DepthSortingEnabled(const QQuick3DInstancing* self);
QVector3D* QQuick3DInstancing_InstancePosition(QQuick3DInstancing* self, int index);
QVector3D* QQuick3DInstancing_InstanceScale(QQuick3DInstancing* self, int index);
QQuaternion* QQuick3DInstancing_InstanceRotation(QQuick3DInstancing* self, int index);
QColor* QQuick3DInstancing_InstanceColor(QQuick3DInstancing* self, int index);
QVector4D* QQuick3DInstancing_InstanceCustomData(QQuick3DInstancing* self, int index);
void QQuick3DInstancing_SetInstanceCountOverride(QQuick3DInstancing* self, int instanceCountOverride);
void QQuick3DInstancing_SetHasTransparency(QQuick3DInstancing* self, bool hasTransparency);
void QQuick3DInstancing_SetDepthSortingEnabled(QQuick3DInstancing* self, bool enabled);
void QQuick3DInstancing_InstanceTableChanged(QQuick3DInstancing* self);
void QQuick3DInstancing_Connect_InstanceTableChanged(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_InstanceNodeDirty(QQuick3DInstancing* self);
void QQuick3DInstancing_Connect_InstanceNodeDirty(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_InstanceCountOverrideChanged(QQuick3DInstancing* self);
void QQuick3DInstancing_Connect_InstanceCountOverrideChanged(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_HasTransparencyChanged(QQuick3DInstancing* self);
void QQuick3DInstancing_Connect_HasTransparencyChanged(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_DepthSortingEnabledChanged(QQuick3DInstancing* self);
void QQuick3DInstancing_Connect_DepthSortingEnabledChanged(QQuick3DInstancing* self, intptr_t slot);
libqt_string QQuick3DInstancing_GetInstanceBuffer(QQuick3DInstancing* self, int* instanceCount);
libqt_string QQuick3DInstancing_Tr2(const char* s, const char* c);
libqt_string QQuick3DInstancing_Tr3(const char* s, const char* c, int n);
void QQuick3DInstancing_OnMetaObject(QQuick3DInstancing* self, intptr_t slot);
QMetaObject* QQuick3DInstancing_SuperMetaObject(const QQuick3DInstancing* self);
void QQuick3DInstancing_OnMetacast(QQuick3DInstancing* self, intptr_t slot);
void* QQuick3DInstancing_SuperMetacast(QQuick3DInstancing* self, const char* param1);
void QQuick3DInstancing_OnMetacall(QQuick3DInstancing* self, intptr_t slot);
int QQuick3DInstancing_SuperMetacall(QQuick3DInstancing* self, int param1, int param2, void** param3);
void QQuick3DInstancing_OnGetInstanceBuffer(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_MarkAllDirty(QQuick3DInstancing* self);
void QQuick3DInstancing_OnMarkAllDirty(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperMarkAllDirty(QQuick3DInstancing* self);
void QQuick3DInstancing_ItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DInstancing_OnItemChange(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DInstancing_ClassBegin(QQuick3DInstancing* self);
void QQuick3DInstancing_OnClassBegin(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperClassBegin(QQuick3DInstancing* self);
void QQuick3DInstancing_ComponentComplete(QQuick3DInstancing* self);
void QQuick3DInstancing_OnComponentComplete(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperComponentComplete(QQuick3DInstancing* self);
void QQuick3DInstancing_PreSync(QQuick3DInstancing* self);
void QQuick3DInstancing_OnPreSync(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperPreSync(QQuick3DInstancing* self);
bool QQuick3DInstancing_Event(QQuick3DInstancing* self, QEvent* event);
void QQuick3DInstancing_OnEvent(QQuick3DInstancing* self, intptr_t slot);
bool QQuick3DInstancing_SuperEvent(QQuick3DInstancing* self, QEvent* event);
bool QQuick3DInstancing_EventFilter(QQuick3DInstancing* self, QObject* watched, QEvent* event);
void QQuick3DInstancing_OnEventFilter(QQuick3DInstancing* self, intptr_t slot);
bool QQuick3DInstancing_SuperEventFilter(QQuick3DInstancing* self, QObject* watched, QEvent* event);
void QQuick3DInstancing_TimerEvent(QQuick3DInstancing* self, QTimerEvent* event);
void QQuick3DInstancing_OnTimerEvent(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperTimerEvent(QQuick3DInstancing* self, QTimerEvent* event);
void QQuick3DInstancing_ChildEvent(QQuick3DInstancing* self, QChildEvent* event);
void QQuick3DInstancing_OnChildEvent(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperChildEvent(QQuick3DInstancing* self, QChildEvent* event);
void QQuick3DInstancing_CustomEvent(QQuick3DInstancing* self, QEvent* event);
void QQuick3DInstancing_OnCustomEvent(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperCustomEvent(QQuick3DInstancing* self, QEvent* event);
void QQuick3DInstancing_ConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
void QQuick3DInstancing_OnConnectNotify(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
void QQuick3DInstancing_DisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
void QQuick3DInstancing_OnDisconnectNotify(QQuick3DInstancing* self, intptr_t slot);
void QQuick3DInstancing_SuperDisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal);
void QQuick3DInstancing_MarkDirty(QQuick3DInstancing* self);
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color);
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color);
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color, const QVector4D* customData);
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color, const QVector4D* customData);
bool QQuick3DInstancing_IsComponentComplete(const QQuick3DInstancing* self);
QObject* QQuick3DInstancing_Sender(const QQuick3DInstancing* self);
int QQuick3DInstancing_SenderSignalIndex(const QQuick3DInstancing* self);
int QQuick3DInstancing_Receivers(const QQuick3DInstancing* self, const char* signal);
bool QQuick3DInstancing_IsSignalConnected(const QQuick3DInstancing* self, const QMetaMethod* signal);
void QQuick3DInstancing_Delete(QQuick3DInstancing* self);

QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing__InstanceTableEntry_new();
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing__InstanceTableEntry_new2(const QQuick3DInstancing__InstanceTableEntry* other);
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing__InstanceTableEntry_new3(QQuick3DInstancing__InstanceTableEntry* other);
void QQuick3DInstancing__InstanceTableEntry_CopyAssign(QQuick3DInstancing__InstanceTableEntry* self, QQuick3DInstancing__InstanceTableEntry* other);
void QQuick3DInstancing__InstanceTableEntry_MoveAssign(QQuick3DInstancing__InstanceTableEntry* self, QQuick3DInstancing__InstanceTableEntry* other);
QVector4D* QQuick3DInstancing__InstanceTableEntry_Row0(const QQuick3DInstancing__InstanceTableEntry* self);
void QQuick3DInstancing__InstanceTableEntry_SetRow0(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* row0);
QVector4D* QQuick3DInstancing__InstanceTableEntry_Row1(const QQuick3DInstancing__InstanceTableEntry* self);
void QQuick3DInstancing__InstanceTableEntry_SetRow1(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* row1);
QVector4D* QQuick3DInstancing__InstanceTableEntry_Row2(const QQuick3DInstancing__InstanceTableEntry* self);
void QQuick3DInstancing__InstanceTableEntry_SetRow2(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* row2);
QVector4D* QQuick3DInstancing__InstanceTableEntry_Color(const QQuick3DInstancing__InstanceTableEntry* self);
void QQuick3DInstancing__InstanceTableEntry_SetColor(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* color);
QVector4D* QQuick3DInstancing__InstanceTableEntry_InstanceData(const QQuick3DInstancing__InstanceTableEntry* self);
void QQuick3DInstancing__InstanceTableEntry_SetInstanceData(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* instanceData);
QVector3D* QQuick3DInstancing__InstanceTableEntry_GetPosition(const QQuick3DInstancing__InstanceTableEntry* self);
QVector3D* QQuick3DInstancing__InstanceTableEntry_GetScale(const QQuick3DInstancing__InstanceTableEntry* self);
QQuaternion* QQuick3DInstancing__InstanceTableEntry_GetRotation(const QQuick3DInstancing__InstanceTableEntry* self);
QColor* QQuick3DInstancing__InstanceTableEntry_GetColor(const QQuick3DInstancing__InstanceTableEntry* self);
void QQuick3DInstancing__InstanceTableEntry_Delete(QQuick3DInstancing__InstanceTableEntry* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
