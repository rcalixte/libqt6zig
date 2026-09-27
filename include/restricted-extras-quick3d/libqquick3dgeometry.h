#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DGEOMETRY_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DGEOMETRY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DGeometry__Attribute)
typedef QQuick3DGeometry::Attribute QQuick3DGeometry__Attribute;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DGeometry__TargetAttribute)
typedef QQuick3DGeometry::TargetAttribute QQuick3DGeometry__TargetAttribute;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData)
typedef QQuick3DObject::ItemChangeData QQuick3DObject__ItemChangeData;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlParserStatus QQmlParserStatus;
typedef struct QQuick3DGeometry QQuick3DGeometry;
typedef struct QQuick3DGeometry__Attribute QQuick3DGeometry__Attribute;
typedef struct QQuick3DGeometry__TargetAttribute QQuick3DGeometry__TargetAttribute;
typedef struct QQuick3DObject QQuick3DObject;
typedef struct QQuick3DObject__ItemChangeData QQuick3DObject__ItemChangeData;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QQuick3DGeometry* QQuick3DGeometry_new();
QQuick3DGeometry* QQuick3DGeometry_new2(QQuick3DObject* parent);
QMetaObject* QQuick3DGeometry_MetaObject(const QQuick3DGeometry* self);
void* QQuick3DGeometry_Metacast(QQuick3DGeometry* self, const char* param1);
int QQuick3DGeometry_Metacall(QQuick3DGeometry* self, int param1, int param2, void** param3);
libqt_string QQuick3DGeometry_Tr(const char* s);
libqt_string QQuick3DGeometry_VertexData(const QQuick3DGeometry* self);
libqt_string QQuick3DGeometry_IndexData(const QQuick3DGeometry* self);
int QQuick3DGeometry_AttributeCount(const QQuick3DGeometry* self);
QQuick3DGeometry__Attribute* QQuick3DGeometry_Attribute(const QQuick3DGeometry* self, int index);
int QQuick3DGeometry_PrimitiveType(const QQuick3DGeometry* self);
QVector3D* QQuick3DGeometry_BoundsMin(const QQuick3DGeometry* self);
QVector3D* QQuick3DGeometry_BoundsMax(const QQuick3DGeometry* self);
int QQuick3DGeometry_Stride(const QQuick3DGeometry* self);
void QQuick3DGeometry_SetVertexData(QQuick3DGeometry* self, const libqt_string data);
void QQuick3DGeometry_SetVertexData2(QQuick3DGeometry* self, int offset, const libqt_string data);
void QQuick3DGeometry_SetIndexData(QQuick3DGeometry* self, const libqt_string data);
void QQuick3DGeometry_SetIndexData2(QQuick3DGeometry* self, int offset, const libqt_string data);
void QQuick3DGeometry_SetStride(QQuick3DGeometry* self, int stride);
void QQuick3DGeometry_SetBounds(QQuick3DGeometry* self, const QVector3D* min, const QVector3D* max);
void QQuick3DGeometry_SetPrimitiveType(QQuick3DGeometry* self, int typeVal);
void QQuick3DGeometry_AddAttribute(QQuick3DGeometry* self, int semantic, int offset, int componentType);
void QQuick3DGeometry_AddAttribute2(QQuick3DGeometry* self, const QQuick3DGeometry__Attribute* att);
int QQuick3DGeometry_SubsetCount(const QQuick3DGeometry* self);
QVector3D* QQuick3DGeometry_SubsetBoundsMin(const QQuick3DGeometry* self, int subset);
QVector3D* QQuick3DGeometry_SubsetBoundsMax(const QQuick3DGeometry* self, int subset);
int QQuick3DGeometry_SubsetOffset(const QQuick3DGeometry* self, int subset);
int QQuick3DGeometry_SubsetCount2(const QQuick3DGeometry* self, int subset);
libqt_string QQuick3DGeometry_SubsetName(const QQuick3DGeometry* self, int subset);
void QQuick3DGeometry_AddSubset(QQuick3DGeometry* self, int offset, int count, const QVector3D* boundsMin, const QVector3D* boundsMax);
libqt_string QQuick3DGeometry_TargetData(const QQuick3DGeometry* self);
void QQuick3DGeometry_SetTargetData(QQuick3DGeometry* self, const libqt_string data);
void QQuick3DGeometry_SetTargetData2(QQuick3DGeometry* self, int offset, const libqt_string data);
QQuick3DGeometry__TargetAttribute* QQuick3DGeometry_TargetAttribute(const QQuick3DGeometry* self, int index);
int QQuick3DGeometry_TargetAttributeCount(const QQuick3DGeometry* self);
void QQuick3DGeometry_AddTargetAttribute(QQuick3DGeometry* self, unsigned int targetId, int semantic, int offset);
void QQuick3DGeometry_AddTargetAttribute2(QQuick3DGeometry* self, const QQuick3DGeometry__TargetAttribute* att);
void QQuick3DGeometry_Clear(QQuick3DGeometry* self);
void QQuick3DGeometry_GeometryNodeDirty(QQuick3DGeometry* self);
void QQuick3DGeometry_Connect_GeometryNodeDirty(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_GeometryChanged(QQuick3DGeometry* self);
void QQuick3DGeometry_Connect_GeometryChanged(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_MarkAllDirty(QQuick3DGeometry* self);
libqt_string QQuick3DGeometry_Tr2(const char* s, const char* c);
libqt_string QQuick3DGeometry_Tr3(const char* s, const char* c, int n);
void QQuick3DGeometry_AddSubset5(QQuick3DGeometry* self, int offset, int count, const QVector3D* boundsMin, const QVector3D* boundsMax, const libqt_string name);
void QQuick3DGeometry_AddTargetAttribute4(QQuick3DGeometry* self, unsigned int targetId, int semantic, int offset, int stride);
void QQuick3DGeometry_OnMetaObject(const QQuick3DGeometry* self, intptr_t slot);
QMetaObject* QQuick3DGeometry_SuperMetaObject(const QQuick3DGeometry* self);
void QQuick3DGeometry_OnMetacast(QQuick3DGeometry* self, intptr_t slot);
void* QQuick3DGeometry_SuperMetacast(QQuick3DGeometry* self, const char* param1);
void QQuick3DGeometry_OnMetacall(QQuick3DGeometry* self, intptr_t slot);
int QQuick3DGeometry_SuperMetacall(QQuick3DGeometry* self, int param1, int param2, void** param3);
void QQuick3DGeometry_OnMarkAllDirty(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperMarkAllDirty(QQuick3DGeometry* self);
void QQuick3DGeometry_ItemChange(QQuick3DGeometry* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DGeometry_OnItemChange(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperItemChange(QQuick3DGeometry* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DGeometry_ClassBegin(QQuick3DGeometry* self);
void QQuick3DGeometry_OnClassBegin(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperClassBegin(QQuick3DGeometry* self);
void QQuick3DGeometry_ComponentComplete(QQuick3DGeometry* self);
void QQuick3DGeometry_OnComponentComplete(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperComponentComplete(QQuick3DGeometry* self);
void QQuick3DGeometry_PreSync(QQuick3DGeometry* self);
void QQuick3DGeometry_OnPreSync(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperPreSync(QQuick3DGeometry* self);
bool QQuick3DGeometry_Event(QQuick3DGeometry* self, QEvent* event);
void QQuick3DGeometry_OnEvent(QQuick3DGeometry* self, intptr_t slot);
bool QQuick3DGeometry_SuperEvent(QQuick3DGeometry* self, QEvent* event);
bool QQuick3DGeometry_EventFilter(QQuick3DGeometry* self, QObject* watched, QEvent* event);
void QQuick3DGeometry_OnEventFilter(QQuick3DGeometry* self, intptr_t slot);
bool QQuick3DGeometry_SuperEventFilter(QQuick3DGeometry* self, QObject* watched, QEvent* event);
void QQuick3DGeometry_TimerEvent(QQuick3DGeometry* self, QTimerEvent* event);
void QQuick3DGeometry_OnTimerEvent(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperTimerEvent(QQuick3DGeometry* self, QTimerEvent* event);
void QQuick3DGeometry_ChildEvent(QQuick3DGeometry* self, QChildEvent* event);
void QQuick3DGeometry_OnChildEvent(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperChildEvent(QQuick3DGeometry* self, QChildEvent* event);
void QQuick3DGeometry_CustomEvent(QQuick3DGeometry* self, QEvent* event);
void QQuick3DGeometry_OnCustomEvent(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperCustomEvent(QQuick3DGeometry* self, QEvent* event);
void QQuick3DGeometry_ConnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal);
void QQuick3DGeometry_OnConnectNotify(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperConnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal);
void QQuick3DGeometry_DisconnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal);
void QQuick3DGeometry_OnDisconnectNotify(QQuick3DGeometry* self, intptr_t slot);
void QQuick3DGeometry_SuperDisconnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal);
bool QQuick3DGeometry_IsComponentComplete(const QQuick3DGeometry* self);
void QQuick3DGeometry_OnIsComponentComplete(const QQuick3DGeometry* self, intptr_t slot);
bool QQuick3DGeometry_SuperIsComponentComplete(const QQuick3DGeometry* self);
QObject* QQuick3DGeometry_Sender(const QQuick3DGeometry* self);
void QQuick3DGeometry_OnSender(const QQuick3DGeometry* self, intptr_t slot);
QObject* QQuick3DGeometry_SuperSender(const QQuick3DGeometry* self);
int QQuick3DGeometry_SenderSignalIndex(const QQuick3DGeometry* self);
void QQuick3DGeometry_OnSenderSignalIndex(const QQuick3DGeometry* self, intptr_t slot);
int QQuick3DGeometry_SuperSenderSignalIndex(const QQuick3DGeometry* self);
int QQuick3DGeometry_Receivers(const QQuick3DGeometry* self, const char* signal);
void QQuick3DGeometry_OnReceivers(const QQuick3DGeometry* self, intptr_t slot);
int QQuick3DGeometry_SuperReceivers(const QQuick3DGeometry* self, const char* signal);
bool QQuick3DGeometry_IsSignalConnected(const QQuick3DGeometry* self, const QMetaMethod* signal);
void QQuick3DGeometry_OnIsSignalConnected(const QQuick3DGeometry* self, intptr_t slot);
bool QQuick3DGeometry_SuperIsSignalConnected(const QQuick3DGeometry* self, const QMetaMethod* signal);
void QQuick3DGeometry_Delete(QQuick3DGeometry* self);

QQuick3DGeometry__Attribute* QQuick3DGeometry__Attribute_new();
QQuick3DGeometry__Attribute* QQuick3DGeometry__Attribute_new2(const QQuick3DGeometry__Attribute* other);
QQuick3DGeometry__Attribute* QQuick3DGeometry__Attribute_new3(QQuick3DGeometry__Attribute* other);
void QQuick3DGeometry__Attribute_CopyAssign(QQuick3DGeometry__Attribute* self, QQuick3DGeometry__Attribute* other);
void QQuick3DGeometry__Attribute_MoveAssign(QQuick3DGeometry__Attribute* self, QQuick3DGeometry__Attribute* other);
int QQuick3DGeometry__Attribute_Semantic(const QQuick3DGeometry__Attribute* self);
void QQuick3DGeometry__Attribute_SetSemantic(QQuick3DGeometry__Attribute* self, int semantic);
int QQuick3DGeometry__Attribute_Offset(const QQuick3DGeometry__Attribute* self);
void QQuick3DGeometry__Attribute_SetOffset(QQuick3DGeometry__Attribute* self, int offset);
int QQuick3DGeometry__Attribute_ComponentType(const QQuick3DGeometry__Attribute* self);
void QQuick3DGeometry__Attribute_SetComponentType(QQuick3DGeometry__Attribute* self, int componentType);
void QQuick3DGeometry__Attribute_Delete(QQuick3DGeometry__Attribute* self);

QQuick3DGeometry__TargetAttribute* QQuick3DGeometry__TargetAttribute_new();
QQuick3DGeometry__TargetAttribute* QQuick3DGeometry__TargetAttribute_new2(const QQuick3DGeometry__TargetAttribute* other);
QQuick3DGeometry__TargetAttribute* QQuick3DGeometry__TargetAttribute_new3(QQuick3DGeometry__TargetAttribute* other);
void QQuick3DGeometry__TargetAttribute_CopyAssign(QQuick3DGeometry__TargetAttribute* self, QQuick3DGeometry__TargetAttribute* other);
void QQuick3DGeometry__TargetAttribute_MoveAssign(QQuick3DGeometry__TargetAttribute* self, QQuick3DGeometry__TargetAttribute* other);
unsigned int QQuick3DGeometry__TargetAttribute_TargetId(const QQuick3DGeometry__TargetAttribute* self);
void QQuick3DGeometry__TargetAttribute_SetTargetId(QQuick3DGeometry__TargetAttribute* self, unsigned int targetId);
QQuick3DGeometry__Attribute* QQuick3DGeometry__TargetAttribute_Attr(const QQuick3DGeometry__TargetAttribute* self);
void QQuick3DGeometry__TargetAttribute_SetAttr(QQuick3DGeometry__TargetAttribute* self, QQuick3DGeometry__Attribute* attr);
int QQuick3DGeometry__TargetAttribute_Stride(const QQuick3DGeometry__TargetAttribute* self);
void QQuick3DGeometry__TargetAttribute_SetStride(QQuick3DGeometry__TargetAttribute* self, int stride);
void QQuick3DGeometry__TargetAttribute_Delete(QQuick3DGeometry__TargetAttribute* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
