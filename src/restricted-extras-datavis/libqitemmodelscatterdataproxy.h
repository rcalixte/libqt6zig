#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSCATTERDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSCATTERDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractDataProxy QAbstractDataProxy;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemModelScatterDataProxy QItemModelScatterDataProxy;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QScatterDataProxy QScatterDataProxy;
typedef struct QTimerEvent QTimerEvent;
#endif

QItemModelScatterDataProxy* QItemModelScatterDataProxy_new();
QItemModelScatterDataProxy* QItemModelScatterDataProxy_new2(QAbstractItemModel* itemModel);
QItemModelScatterDataProxy* QItemModelScatterDataProxy_new3(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole);
QItemModelScatterDataProxy* QItemModelScatterDataProxy_new4(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_string rotationRole);
QItemModelScatterDataProxy* QItemModelScatterDataProxy_new5(QObject* parent);
QItemModelScatterDataProxy* QItemModelScatterDataProxy_new6(QAbstractItemModel* itemModel, QObject* parent);
QItemModelScatterDataProxy* QItemModelScatterDataProxy_new7(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, QObject* parent);
QItemModelScatterDataProxy* QItemModelScatterDataProxy_new8(QAbstractItemModel* itemModel, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_string rotationRole, QObject* parent);
QMetaObject* QItemModelScatterDataProxy_MetaObject(const QItemModelScatterDataProxy* self);
void* QItemModelScatterDataProxy_Metacast(QItemModelScatterDataProxy* self, const char* param1);
int QItemModelScatterDataProxy_Metacall(QItemModelScatterDataProxy* self, int param1, int param2, void** param3);
libqt_string QItemModelScatterDataProxy_Tr(const char* s);
void QItemModelScatterDataProxy_SetItemModel(QItemModelScatterDataProxy* self, QAbstractItemModel* itemModel);
QAbstractItemModel* QItemModelScatterDataProxy_ItemModel(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetXPosRole(QItemModelScatterDataProxy* self, const libqt_string role);
libqt_string QItemModelScatterDataProxy_XPosRole(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetYPosRole(QItemModelScatterDataProxy* self, const libqt_string role);
libqt_string QItemModelScatterDataProxy_YPosRole(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetZPosRole(QItemModelScatterDataProxy* self, const libqt_string role);
libqt_string QItemModelScatterDataProxy_ZPosRole(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetRotationRole(QItemModelScatterDataProxy* self, const libqt_string role);
libqt_string QItemModelScatterDataProxy_RotationRole(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_Remap(QItemModelScatterDataProxy* self, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_string rotationRole);
void QItemModelScatterDataProxy_SetXPosRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelScatterDataProxy_XPosRolePattern(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetYPosRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelScatterDataProxy_YPosRolePattern(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetZPosRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelScatterDataProxy_ZPosRolePattern(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetRotationRolePattern(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelScatterDataProxy_RotationRolePattern(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetXPosRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace);
libqt_string QItemModelScatterDataProxy_XPosRoleReplace(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetYPosRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace);
libqt_string QItemModelScatterDataProxy_YPosRoleReplace(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetZPosRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace);
libqt_string QItemModelScatterDataProxy_ZPosRoleReplace(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_SetRotationRoleReplace(QItemModelScatterDataProxy* self, const libqt_string replace);
libqt_string QItemModelScatterDataProxy_RotationRoleReplace(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_ItemModelChanged(QItemModelScatterDataProxy* self, const QAbstractItemModel* itemModel);
void QItemModelScatterDataProxy_Connect_ItemModelChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_XPosRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role);
void QItemModelScatterDataProxy_Connect_XPosRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_YPosRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role);
void QItemModelScatterDataProxy_Connect_YPosRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_ZPosRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role);
void QItemModelScatterDataProxy_Connect_ZPosRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_RotationRoleChanged(QItemModelScatterDataProxy* self, const libqt_string role);
void QItemModelScatterDataProxy_Connect_RotationRoleChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_XPosRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
void QItemModelScatterDataProxy_Connect_XPosRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_YPosRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
void QItemModelScatterDataProxy_Connect_YPosRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_ZPosRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
void QItemModelScatterDataProxy_Connect_ZPosRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_RotationRolePatternChanged(QItemModelScatterDataProxy* self, const QRegularExpression* pattern);
void QItemModelScatterDataProxy_Connect_RotationRolePatternChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_RotationRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace);
void QItemModelScatterDataProxy_Connect_RotationRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_XPosRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace);
void QItemModelScatterDataProxy_Connect_XPosRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_YPosRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace);
void QItemModelScatterDataProxy_Connect_YPosRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_ZPosRoleReplaceChanged(QItemModelScatterDataProxy* self, const libqt_string replace);
void QItemModelScatterDataProxy_Connect_ZPosRoleReplaceChanged(QItemModelScatterDataProxy* self, intptr_t slot);
libqt_string QItemModelScatterDataProxy_Tr2(const char* s, const char* c);
libqt_string QItemModelScatterDataProxy_Tr3(const char* s, const char* c, int n);
void QItemModelScatterDataProxy_OnMetaObject(QItemModelScatterDataProxy* self, intptr_t slot);
QMetaObject* QItemModelScatterDataProxy_SuperMetaObject(const QItemModelScatterDataProxy* self);
void QItemModelScatterDataProxy_OnMetacast(QItemModelScatterDataProxy* self, intptr_t slot);
void* QItemModelScatterDataProxy_SuperMetacast(QItemModelScatterDataProxy* self, const char* param1);
void QItemModelScatterDataProxy_OnMetacall(QItemModelScatterDataProxy* self, intptr_t slot);
int QItemModelScatterDataProxy_SuperMetacall(QItemModelScatterDataProxy* self, int param1, int param2, void** param3);
bool QItemModelScatterDataProxy_Event(QItemModelScatterDataProxy* self, QEvent* event);
void QItemModelScatterDataProxy_OnEvent(QItemModelScatterDataProxy* self, intptr_t slot);
bool QItemModelScatterDataProxy_SuperEvent(QItemModelScatterDataProxy* self, QEvent* event);
bool QItemModelScatterDataProxy_EventFilter(QItemModelScatterDataProxy* self, QObject* watched, QEvent* event);
void QItemModelScatterDataProxy_OnEventFilter(QItemModelScatterDataProxy* self, intptr_t slot);
bool QItemModelScatterDataProxy_SuperEventFilter(QItemModelScatterDataProxy* self, QObject* watched, QEvent* event);
void QItemModelScatterDataProxy_TimerEvent(QItemModelScatterDataProxy* self, QTimerEvent* event);
void QItemModelScatterDataProxy_OnTimerEvent(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_SuperTimerEvent(QItemModelScatterDataProxy* self, QTimerEvent* event);
void QItemModelScatterDataProxy_ChildEvent(QItemModelScatterDataProxy* self, QChildEvent* event);
void QItemModelScatterDataProxy_OnChildEvent(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_SuperChildEvent(QItemModelScatterDataProxy* self, QChildEvent* event);
void QItemModelScatterDataProxy_CustomEvent(QItemModelScatterDataProxy* self, QEvent* event);
void QItemModelScatterDataProxy_OnCustomEvent(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_SuperCustomEvent(QItemModelScatterDataProxy* self, QEvent* event);
void QItemModelScatterDataProxy_ConnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal);
void QItemModelScatterDataProxy_OnConnectNotify(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_SuperConnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal);
void QItemModelScatterDataProxy_DisconnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal);
void QItemModelScatterDataProxy_OnDisconnectNotify(QItemModelScatterDataProxy* self, intptr_t slot);
void QItemModelScatterDataProxy_SuperDisconnectNotify(QItemModelScatterDataProxy* self, const QMetaMethod* signal);
QObject* QItemModelScatterDataProxy_Sender(const QItemModelScatterDataProxy* self);
int QItemModelScatterDataProxy_SenderSignalIndex(const QItemModelScatterDataProxy* self);
int QItemModelScatterDataProxy_Receivers(const QItemModelScatterDataProxy* self, const char* signal);
bool QItemModelScatterDataProxy_IsSignalConnected(const QItemModelScatterDataProxy* self, const QMetaMethod* signal);
void QItemModelScatterDataProxy_Delete(QItemModelScatterDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
