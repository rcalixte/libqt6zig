#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELBARDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELBARDATAPROXY_H

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
typedef struct QBarDataProxy QBarDataProxy;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemModelBarDataProxy QItemModelBarDataProxy;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QTimerEvent QTimerEvent;
#endif

QItemModelBarDataProxy* QItemModelBarDataProxy_new();
QItemModelBarDataProxy* QItemModelBarDataProxy_new2(QAbstractItemModel* itemModel);
QItemModelBarDataProxy* QItemModelBarDataProxy_new3(QAbstractItemModel* itemModel, const libqt_string valueRole);
QItemModelBarDataProxy* QItemModelBarDataProxy_new4(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole);
QItemModelBarDataProxy* QItemModelBarDataProxy_new5(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole);
QItemModelBarDataProxy* QItemModelBarDataProxy_new6(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories);
QItemModelBarDataProxy* QItemModelBarDataProxy_new7(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories);
QItemModelBarDataProxy* QItemModelBarDataProxy_new8(QObject* parent);
QItemModelBarDataProxy* QItemModelBarDataProxy_new9(QAbstractItemModel* itemModel, QObject* parent);
QItemModelBarDataProxy* QItemModelBarDataProxy_new10(QAbstractItemModel* itemModel, const libqt_string valueRole, QObject* parent);
QItemModelBarDataProxy* QItemModelBarDataProxy_new11(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, QObject* parent);
QItemModelBarDataProxy* QItemModelBarDataProxy_new12(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, QObject* parent);
QItemModelBarDataProxy* QItemModelBarDataProxy_new13(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent);
QItemModelBarDataProxy* QItemModelBarDataProxy_new14(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent);
QMetaObject* QItemModelBarDataProxy_MetaObject(const QItemModelBarDataProxy* self);
void* QItemModelBarDataProxy_Metacast(QItemModelBarDataProxy* self, const char* param1);
int QItemModelBarDataProxy_Metacall(QItemModelBarDataProxy* self, int param1, int param2, void** param3);
libqt_string QItemModelBarDataProxy_Tr(const char* s);
void QItemModelBarDataProxy_SetItemModel(QItemModelBarDataProxy* self, QAbstractItemModel* itemModel);
QAbstractItemModel* QItemModelBarDataProxy_ItemModel(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetRowRole(QItemModelBarDataProxy* self, const libqt_string role);
libqt_string QItemModelBarDataProxy_RowRole(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetColumnRole(QItemModelBarDataProxy* self, const libqt_string role);
libqt_string QItemModelBarDataProxy_ColumnRole(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetValueRole(QItemModelBarDataProxy* self, const libqt_string role);
libqt_string QItemModelBarDataProxy_ValueRole(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetRotationRole(QItemModelBarDataProxy* self, const libqt_string role);
libqt_string QItemModelBarDataProxy_RotationRole(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetRowCategories(QItemModelBarDataProxy* self, const libqt_list /* of libqt_string */ categories);
libqt_list /* of libqt_string */ QItemModelBarDataProxy_RowCategories(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetColumnCategories(QItemModelBarDataProxy* self, const libqt_list /* of libqt_string */ categories);
libqt_list /* of libqt_string */ QItemModelBarDataProxy_ColumnCategories(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetUseModelCategories(QItemModelBarDataProxy* self, bool enable);
bool QItemModelBarDataProxy_UseModelCategories(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetAutoRowCategories(QItemModelBarDataProxy* self, bool enable);
bool QItemModelBarDataProxy_AutoRowCategories(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetAutoColumnCategories(QItemModelBarDataProxy* self, bool enable);
bool QItemModelBarDataProxy_AutoColumnCategories(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_Remap(QItemModelBarDataProxy* self, const libqt_string rowRole, const libqt_string columnRole, const libqt_string valueRole, const libqt_string rotationRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories);
int QItemModelBarDataProxy_RowCategoryIndex(QItemModelBarDataProxy* self, const libqt_string category);
int QItemModelBarDataProxy_ColumnCategoryIndex(QItemModelBarDataProxy* self, const libqt_string category);
void QItemModelBarDataProxy_SetRowRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelBarDataProxy_RowRolePattern(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetColumnRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelBarDataProxy_ColumnRolePattern(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetValueRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelBarDataProxy_ValueRolePattern(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetRotationRolePattern(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelBarDataProxy_RotationRolePattern(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetRowRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace);
libqt_string QItemModelBarDataProxy_RowRoleReplace(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetColumnRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace);
libqt_string QItemModelBarDataProxy_ColumnRoleReplace(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetValueRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace);
libqt_string QItemModelBarDataProxy_ValueRoleReplace(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetRotationRoleReplace(QItemModelBarDataProxy* self, const libqt_string replace);
libqt_string QItemModelBarDataProxy_RotationRoleReplace(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_SetMultiMatchBehavior(QItemModelBarDataProxy* self, int behavior);
int QItemModelBarDataProxy_MultiMatchBehavior(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_ItemModelChanged(QItemModelBarDataProxy* self, const QAbstractItemModel* itemModel);
void QItemModelBarDataProxy_Connect_ItemModelChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_RowRoleChanged(QItemModelBarDataProxy* self, const libqt_string role);
void QItemModelBarDataProxy_Connect_RowRoleChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_ColumnRoleChanged(QItemModelBarDataProxy* self, const libqt_string role);
void QItemModelBarDataProxy_Connect_ColumnRoleChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_ValueRoleChanged(QItemModelBarDataProxy* self, const libqt_string role);
void QItemModelBarDataProxy_Connect_ValueRoleChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_RotationRoleChanged(QItemModelBarDataProxy* self, const libqt_string role);
void QItemModelBarDataProxy_Connect_RotationRoleChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_RowCategoriesChanged(QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_Connect_RowCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_ColumnCategoriesChanged(QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_Connect_ColumnCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_UseModelCategoriesChanged(QItemModelBarDataProxy* self, bool enable);
void QItemModelBarDataProxy_Connect_UseModelCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_AutoRowCategoriesChanged(QItemModelBarDataProxy* self, bool enable);
void QItemModelBarDataProxy_Connect_AutoRowCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_AutoColumnCategoriesChanged(QItemModelBarDataProxy* self, bool enable);
void QItemModelBarDataProxy_Connect_AutoColumnCategoriesChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_RowRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
void QItemModelBarDataProxy_Connect_RowRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_ColumnRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
void QItemModelBarDataProxy_Connect_ColumnRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_ValueRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
void QItemModelBarDataProxy_Connect_ValueRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_RotationRolePatternChanged(QItemModelBarDataProxy* self, const QRegularExpression* pattern);
void QItemModelBarDataProxy_Connect_RotationRolePatternChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_RowRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace);
void QItemModelBarDataProxy_Connect_RowRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_ColumnRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace);
void QItemModelBarDataProxy_Connect_ColumnRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_ValueRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace);
void QItemModelBarDataProxy_Connect_ValueRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_RotationRoleReplaceChanged(QItemModelBarDataProxy* self, const libqt_string replace);
void QItemModelBarDataProxy_Connect_RotationRoleReplaceChanged(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_MultiMatchBehaviorChanged(QItemModelBarDataProxy* self, int behavior);
void QItemModelBarDataProxy_Connect_MultiMatchBehaviorChanged(QItemModelBarDataProxy* self, intptr_t slot);
libqt_string QItemModelBarDataProxy_Tr2(const char* s, const char* c);
libqt_string QItemModelBarDataProxy_Tr3(const char* s, const char* c, int n);
void QItemModelBarDataProxy_OnMetaObject(QItemModelBarDataProxy* self, intptr_t slot);
QMetaObject* QItemModelBarDataProxy_SuperMetaObject(const QItemModelBarDataProxy* self);
void QItemModelBarDataProxy_OnMetacast(QItemModelBarDataProxy* self, intptr_t slot);
void* QItemModelBarDataProxy_SuperMetacast(QItemModelBarDataProxy* self, const char* param1);
void QItemModelBarDataProxy_OnMetacall(QItemModelBarDataProxy* self, intptr_t slot);
int QItemModelBarDataProxy_SuperMetacall(QItemModelBarDataProxy* self, int param1, int param2, void** param3);
bool QItemModelBarDataProxy_Event(QItemModelBarDataProxy* self, QEvent* event);
void QItemModelBarDataProxy_OnEvent(QItemModelBarDataProxy* self, intptr_t slot);
bool QItemModelBarDataProxy_SuperEvent(QItemModelBarDataProxy* self, QEvent* event);
bool QItemModelBarDataProxy_EventFilter(QItemModelBarDataProxy* self, QObject* watched, QEvent* event);
void QItemModelBarDataProxy_OnEventFilter(QItemModelBarDataProxy* self, intptr_t slot);
bool QItemModelBarDataProxy_SuperEventFilter(QItemModelBarDataProxy* self, QObject* watched, QEvent* event);
void QItemModelBarDataProxy_TimerEvent(QItemModelBarDataProxy* self, QTimerEvent* event);
void QItemModelBarDataProxy_OnTimerEvent(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_SuperTimerEvent(QItemModelBarDataProxy* self, QTimerEvent* event);
void QItemModelBarDataProxy_ChildEvent(QItemModelBarDataProxy* self, QChildEvent* event);
void QItemModelBarDataProxy_OnChildEvent(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_SuperChildEvent(QItemModelBarDataProxy* self, QChildEvent* event);
void QItemModelBarDataProxy_CustomEvent(QItemModelBarDataProxy* self, QEvent* event);
void QItemModelBarDataProxy_OnCustomEvent(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_SuperCustomEvent(QItemModelBarDataProxy* self, QEvent* event);
void QItemModelBarDataProxy_ConnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal);
void QItemModelBarDataProxy_OnConnectNotify(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_SuperConnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal);
void QItemModelBarDataProxy_DisconnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal);
void QItemModelBarDataProxy_OnDisconnectNotify(QItemModelBarDataProxy* self, intptr_t slot);
void QItemModelBarDataProxy_SuperDisconnectNotify(QItemModelBarDataProxy* self, const QMetaMethod* signal);
QObject* QItemModelBarDataProxy_Sender(const QItemModelBarDataProxy* self);
int QItemModelBarDataProxy_SenderSignalIndex(const QItemModelBarDataProxy* self);
int QItemModelBarDataProxy_Receivers(const QItemModelBarDataProxy* self, const char* signal);
bool QItemModelBarDataProxy_IsSignalConnected(const QItemModelBarDataProxy* self, const QMetaMethod* signal);
void QItemModelBarDataProxy_Delete(QItemModelBarDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
