#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
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
typedef struct QQuick3DObject QQuick3DObject;
typedef struct QQuick3DObject__ItemChangeData QQuick3DObject__ItemChangeData;
typedef struct QTimerEvent QTimerEvent;
#endif

QQuick3DObject* QQuick3DObject_new();
QQuick3DObject* QQuick3DObject_new2(QQuick3DObject* parent);
QQmlParserStatus* QQuick3DObject_AsQQmlParserStatus(QQuick3DObject* self);
QQuick3DObject* QQuick3DObject_FromQQmlParserStatus(QQmlParserStatus* _qqmlparserstatus);
QMetaObject* QQuick3DObject_MetaObject(const QQuick3DObject* self);
void* QQuick3DObject_Metacast(QQuick3DObject* self, const char* param1);
int QQuick3DObject_Metacall(QQuick3DObject* self, int param1, int param2, void** param3);
libqt_string QQuick3DObject_Tr(const char* s);
libqt_string QQuick3DObject_State(const QQuick3DObject* self);
void QQuick3DObject_SetState(QQuick3DObject* self, const libqt_string state);
libqt_list /* of QQuick3DObject* */ QQuick3DObject_ChildItems(const QQuick3DObject* self);
QQuick3DObject* QQuick3DObject_ParentItem(const QQuick3DObject* self);
void QQuick3DObject_Update(QQuick3DObject* self);
void QQuick3DObject_SetParentItem(QQuick3DObject* self, QQuick3DObject* parentItem);
void QQuick3DObject_ParentChanged(QQuick3DObject* self);
void QQuick3DObject_Connect_ParentChanged(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_ChildrenChanged(QQuick3DObject* self);
void QQuick3DObject_Connect_ChildrenChanged(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_StateChanged(QQuick3DObject* self);
void QQuick3DObject_Connect_StateChanged(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_MarkAllDirty(QQuick3DObject* self);
void QQuick3DObject_ItemChange(QQuick3DObject* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DObject_ClassBegin(QQuick3DObject* self);
void QQuick3DObject_ComponentComplete(QQuick3DObject* self);
void QQuick3DObject_PreSync(QQuick3DObject* self);
libqt_string QQuick3DObject_Tr2(const char* s, const char* c);
libqt_string QQuick3DObject_Tr3(const char* s, const char* c, int n);
void QQuick3DObject_OnMetaObject(const QQuick3DObject* self, intptr_t slot);
QMetaObject* QQuick3DObject_SuperMetaObject(const QQuick3DObject* self);
void QQuick3DObject_OnMetacast(QQuick3DObject* self, intptr_t slot);
void* QQuick3DObject_SuperMetacast(QQuick3DObject* self, const char* param1);
void QQuick3DObject_OnMetacall(QQuick3DObject* self, intptr_t slot);
int QQuick3DObject_SuperMetacall(QQuick3DObject* self, int param1, int param2, void** param3);
void QQuick3DObject_OnMarkAllDirty(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperMarkAllDirty(QQuick3DObject* self);
void QQuick3DObject_OnItemChange(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperItemChange(QQuick3DObject* self, int param1, const QQuick3DObject__ItemChangeData* param2);
void QQuick3DObject_OnClassBegin(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperClassBegin(QQuick3DObject* self);
void QQuick3DObject_OnComponentComplete(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperComponentComplete(QQuick3DObject* self);
void QQuick3DObject_OnPreSync(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperPreSync(QQuick3DObject* self);
bool QQuick3DObject_Event(QQuick3DObject* self, QEvent* event);
void QQuick3DObject_OnEvent(QQuick3DObject* self, intptr_t slot);
bool QQuick3DObject_SuperEvent(QQuick3DObject* self, QEvent* event);
bool QQuick3DObject_EventFilter(QQuick3DObject* self, QObject* watched, QEvent* event);
void QQuick3DObject_OnEventFilter(QQuick3DObject* self, intptr_t slot);
bool QQuick3DObject_SuperEventFilter(QQuick3DObject* self, QObject* watched, QEvent* event);
void QQuick3DObject_TimerEvent(QQuick3DObject* self, QTimerEvent* event);
void QQuick3DObject_OnTimerEvent(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperTimerEvent(QQuick3DObject* self, QTimerEvent* event);
void QQuick3DObject_ChildEvent(QQuick3DObject* self, QChildEvent* event);
void QQuick3DObject_OnChildEvent(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperChildEvent(QQuick3DObject* self, QChildEvent* event);
void QQuick3DObject_CustomEvent(QQuick3DObject* self, QEvent* event);
void QQuick3DObject_OnCustomEvent(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperCustomEvent(QQuick3DObject* self, QEvent* event);
void QQuick3DObject_ConnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
void QQuick3DObject_OnConnectNotify(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperConnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
void QQuick3DObject_DisconnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
void QQuick3DObject_OnDisconnectNotify(QQuick3DObject* self, intptr_t slot);
void QQuick3DObject_SuperDisconnectNotify(QQuick3DObject* self, const QMetaMethod* signal);
bool QQuick3DObject_IsComponentComplete(const QQuick3DObject* self);
void QQuick3DObject_OnIsComponentComplete(const QQuick3DObject* self, intptr_t slot);
bool QQuick3DObject_SuperIsComponentComplete(const QQuick3DObject* self);
QObject* QQuick3DObject_Sender(const QQuick3DObject* self);
void QQuick3DObject_OnSender(const QQuick3DObject* self, intptr_t slot);
QObject* QQuick3DObject_SuperSender(const QQuick3DObject* self);
int QQuick3DObject_SenderSignalIndex(const QQuick3DObject* self);
void QQuick3DObject_OnSenderSignalIndex(const QQuick3DObject* self, intptr_t slot);
int QQuick3DObject_SuperSenderSignalIndex(const QQuick3DObject* self);
int QQuick3DObject_Receivers(const QQuick3DObject* self, const char* signal);
void QQuick3DObject_OnReceivers(const QQuick3DObject* self, intptr_t slot);
int QQuick3DObject_SuperReceivers(const QQuick3DObject* self, const char* signal);
bool QQuick3DObject_IsSignalConnected(const QQuick3DObject* self, const QMetaMethod* signal);
void QQuick3DObject_OnIsSignalConnected(const QQuick3DObject* self, intptr_t slot);
bool QQuick3DObject_SuperIsSignalConnected(const QQuick3DObject* self, const QMetaMethod* signal);
void QQuick3DObject_Delete(QQuick3DObject* self);

QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new(const QQuick3DObject__ItemChangeData* other);
QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new2(QQuick3DObject__ItemChangeData* other);
QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new3(QQuick3DObject* v);
QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new4(double v);
QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new5(bool v);
void QQuick3DObject__ItemChangeData_CopyAssign(QQuick3DObject__ItemChangeData* self, QQuick3DObject__ItemChangeData* other);
void QQuick3DObject__ItemChangeData_MoveAssign(QQuick3DObject__ItemChangeData* self, QQuick3DObject__ItemChangeData* other);
QQuick3DObject* QQuick3DObject__ItemChangeData_Item(const QQuick3DObject__ItemChangeData* self);
void QQuick3DObject__ItemChangeData_SetItem(QQuick3DObject__ItemChangeData* self, QQuick3DObject* item);
double QQuick3DObject__ItemChangeData_RealValue(const QQuick3DObject__ItemChangeData* self);
void QQuick3DObject__ItemChangeData_SetRealValue(QQuick3DObject__ItemChangeData* self, double realValue);
bool QQuick3DObject__ItemChangeData_BoolValue(const QQuick3DObject__ItemChangeData* self);
void QQuick3DObject__ItemChangeData_SetBoolValue(QQuick3DObject__ItemChangeData* self, bool boolValue);
void QQuick3DObject__ItemChangeData_Delete(QQuick3DObject__ItemChangeData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
