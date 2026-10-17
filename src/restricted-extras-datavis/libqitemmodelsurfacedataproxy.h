#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSURFACEDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSURFACEDATAPROXY_H

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
typedef struct QItemModelSurfaceDataProxy QItemModelSurfaceDataProxy;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSurfaceDataProxy QSurfaceDataProxy;
typedef struct QTimerEvent QTimerEvent;
#endif

QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new();
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new2(QAbstractItemModel* itemModel);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new3(QAbstractItemModel* itemModel, const libqt_string yPosRole);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new4(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new5(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new6(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new7(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new8(QObject* parent);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new9(QAbstractItemModel* itemModel, QObject* parent);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new10(QAbstractItemModel* itemModel, const libqt_string yPosRole, QObject* parent);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new11(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole, QObject* parent);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new12(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, QObject* parent);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new13(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string yPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent);
QItemModelSurfaceDataProxy* QItemModelSurfaceDataProxy_new14(QAbstractItemModel* itemModel, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories, QObject* parent);
QMetaObject* QItemModelSurfaceDataProxy_MetaObject(const QItemModelSurfaceDataProxy* self);
void* QItemModelSurfaceDataProxy_Metacast(QItemModelSurfaceDataProxy* self, const char* param1);
int QItemModelSurfaceDataProxy_Metacall(QItemModelSurfaceDataProxy* self, int param1, int param2, void** param3);
libqt_string QItemModelSurfaceDataProxy_Tr(const char* s);
void QItemModelSurfaceDataProxy_SetItemModel(QItemModelSurfaceDataProxy* self, QAbstractItemModel* itemModel);
QAbstractItemModel* QItemModelSurfaceDataProxy_ItemModel(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetRowRole(QItemModelSurfaceDataProxy* self, const libqt_string role);
libqt_string QItemModelSurfaceDataProxy_RowRole(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetColumnRole(QItemModelSurfaceDataProxy* self, const libqt_string role);
libqt_string QItemModelSurfaceDataProxy_ColumnRole(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetXPosRole(QItemModelSurfaceDataProxy* self, const libqt_string role);
libqt_string QItemModelSurfaceDataProxy_XPosRole(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetYPosRole(QItemModelSurfaceDataProxy* self, const libqt_string role);
libqt_string QItemModelSurfaceDataProxy_YPosRole(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetZPosRole(QItemModelSurfaceDataProxy* self, const libqt_string role);
libqt_string QItemModelSurfaceDataProxy_ZPosRole(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetRowCategories(QItemModelSurfaceDataProxy* self, const libqt_list /* of libqt_string */ categories);
libqt_list /* of libqt_string */ QItemModelSurfaceDataProxy_RowCategories(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetColumnCategories(QItemModelSurfaceDataProxy* self, const libqt_list /* of libqt_string */ categories);
libqt_list /* of libqt_string */ QItemModelSurfaceDataProxy_ColumnCategories(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetUseModelCategories(QItemModelSurfaceDataProxy* self, bool enable);
bool QItemModelSurfaceDataProxy_UseModelCategories(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetAutoRowCategories(QItemModelSurfaceDataProxy* self, bool enable);
bool QItemModelSurfaceDataProxy_AutoRowCategories(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetAutoColumnCategories(QItemModelSurfaceDataProxy* self, bool enable);
bool QItemModelSurfaceDataProxy_AutoColumnCategories(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_Remap(QItemModelSurfaceDataProxy* self, const libqt_string rowRole, const libqt_string columnRole, const libqt_string xPosRole, const libqt_string yPosRole, const libqt_string zPosRole, const libqt_list /* of libqt_string */ rowCategories, const libqt_list /* of libqt_string */ columnCategories);
int QItemModelSurfaceDataProxy_RowCategoryIndex(QItemModelSurfaceDataProxy* self, const libqt_string category);
int QItemModelSurfaceDataProxy_ColumnCategoryIndex(QItemModelSurfaceDataProxy* self, const libqt_string category);
void QItemModelSurfaceDataProxy_SetRowRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelSurfaceDataProxy_RowRolePattern(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetColumnRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelSurfaceDataProxy_ColumnRolePattern(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetXPosRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelSurfaceDataProxy_XPosRolePattern(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetYPosRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelSurfaceDataProxy_YPosRolePattern(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetZPosRolePattern(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
QRegularExpression* QItemModelSurfaceDataProxy_ZPosRolePattern(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetRowRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace);
libqt_string QItemModelSurfaceDataProxy_RowRoleReplace(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetColumnRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace);
libqt_string QItemModelSurfaceDataProxy_ColumnRoleReplace(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetXPosRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace);
libqt_string QItemModelSurfaceDataProxy_XPosRoleReplace(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetYPosRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace);
libqt_string QItemModelSurfaceDataProxy_YPosRoleReplace(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetZPosRoleReplace(QItemModelSurfaceDataProxy* self, const libqt_string replace);
libqt_string QItemModelSurfaceDataProxy_ZPosRoleReplace(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_SetMultiMatchBehavior(QItemModelSurfaceDataProxy* self, int behavior);
int QItemModelSurfaceDataProxy_MultiMatchBehavior(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_ItemModelChanged(QItemModelSurfaceDataProxy* self, const QAbstractItemModel* itemModel);
void QItemModelSurfaceDataProxy_Connect_ItemModelChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_RowRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role);
void QItemModelSurfaceDataProxy_Connect_RowRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_ColumnRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role);
void QItemModelSurfaceDataProxy_Connect_ColumnRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_XPosRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role);
void QItemModelSurfaceDataProxy_Connect_XPosRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_YPosRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role);
void QItemModelSurfaceDataProxy_Connect_YPosRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_ZPosRoleChanged(QItemModelSurfaceDataProxy* self, const libqt_string role);
void QItemModelSurfaceDataProxy_Connect_ZPosRoleChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_RowCategoriesChanged(QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_Connect_RowCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_ColumnCategoriesChanged(QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_Connect_ColumnCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_UseModelCategoriesChanged(QItemModelSurfaceDataProxy* self, bool enable);
void QItemModelSurfaceDataProxy_Connect_UseModelCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_AutoRowCategoriesChanged(QItemModelSurfaceDataProxy* self, bool enable);
void QItemModelSurfaceDataProxy_Connect_AutoRowCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_AutoColumnCategoriesChanged(QItemModelSurfaceDataProxy* self, bool enable);
void QItemModelSurfaceDataProxy_Connect_AutoColumnCategoriesChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_RowRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
void QItemModelSurfaceDataProxy_Connect_RowRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_ColumnRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
void QItemModelSurfaceDataProxy_Connect_ColumnRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_XPosRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
void QItemModelSurfaceDataProxy_Connect_XPosRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_YPosRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
void QItemModelSurfaceDataProxy_Connect_YPosRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_ZPosRolePatternChanged(QItemModelSurfaceDataProxy* self, const QRegularExpression* pattern);
void QItemModelSurfaceDataProxy_Connect_ZPosRolePatternChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_RowRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace);
void QItemModelSurfaceDataProxy_Connect_RowRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_ColumnRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace);
void QItemModelSurfaceDataProxy_Connect_ColumnRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_XPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace);
void QItemModelSurfaceDataProxy_Connect_XPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_YPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace);
void QItemModelSurfaceDataProxy_Connect_YPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_ZPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, const libqt_string replace);
void QItemModelSurfaceDataProxy_Connect_ZPosRoleReplaceChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_MultiMatchBehaviorChanged(QItemModelSurfaceDataProxy* self, int behavior);
void QItemModelSurfaceDataProxy_Connect_MultiMatchBehaviorChanged(QItemModelSurfaceDataProxy* self, intptr_t slot);
libqt_string QItemModelSurfaceDataProxy_Tr2(const char* s, const char* c);
libqt_string QItemModelSurfaceDataProxy_Tr3(const char* s, const char* c, int n);
void QItemModelSurfaceDataProxy_OnMetaObject(QItemModelSurfaceDataProxy* self, intptr_t slot);
QMetaObject* QItemModelSurfaceDataProxy_SuperMetaObject(const QItemModelSurfaceDataProxy* self);
void QItemModelSurfaceDataProxy_OnMetacast(QItemModelSurfaceDataProxy* self, intptr_t slot);
void* QItemModelSurfaceDataProxy_SuperMetacast(QItemModelSurfaceDataProxy* self, const char* param1);
void QItemModelSurfaceDataProxy_OnMetacall(QItemModelSurfaceDataProxy* self, intptr_t slot);
int QItemModelSurfaceDataProxy_SuperMetacall(QItemModelSurfaceDataProxy* self, int param1, int param2, void** param3);
bool QItemModelSurfaceDataProxy_Event(QItemModelSurfaceDataProxy* self, QEvent* event);
void QItemModelSurfaceDataProxy_OnEvent(QItemModelSurfaceDataProxy* self, intptr_t slot);
bool QItemModelSurfaceDataProxy_SuperEvent(QItemModelSurfaceDataProxy* self, QEvent* event);
bool QItemModelSurfaceDataProxy_EventFilter(QItemModelSurfaceDataProxy* self, QObject* watched, QEvent* event);
void QItemModelSurfaceDataProxy_OnEventFilter(QItemModelSurfaceDataProxy* self, intptr_t slot);
bool QItemModelSurfaceDataProxy_SuperEventFilter(QItemModelSurfaceDataProxy* self, QObject* watched, QEvent* event);
void QItemModelSurfaceDataProxy_TimerEvent(QItemModelSurfaceDataProxy* self, QTimerEvent* event);
void QItemModelSurfaceDataProxy_OnTimerEvent(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_SuperTimerEvent(QItemModelSurfaceDataProxy* self, QTimerEvent* event);
void QItemModelSurfaceDataProxy_ChildEvent(QItemModelSurfaceDataProxy* self, QChildEvent* event);
void QItemModelSurfaceDataProxy_OnChildEvent(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_SuperChildEvent(QItemModelSurfaceDataProxy* self, QChildEvent* event);
void QItemModelSurfaceDataProxy_CustomEvent(QItemModelSurfaceDataProxy* self, QEvent* event);
void QItemModelSurfaceDataProxy_OnCustomEvent(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_SuperCustomEvent(QItemModelSurfaceDataProxy* self, QEvent* event);
void QItemModelSurfaceDataProxy_ConnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal);
void QItemModelSurfaceDataProxy_OnConnectNotify(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_SuperConnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal);
void QItemModelSurfaceDataProxy_DisconnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal);
void QItemModelSurfaceDataProxy_OnDisconnectNotify(QItemModelSurfaceDataProxy* self, intptr_t slot);
void QItemModelSurfaceDataProxy_SuperDisconnectNotify(QItemModelSurfaceDataProxy* self, const QMetaMethod* signal);
QObject* QItemModelSurfaceDataProxy_Sender(const QItemModelSurfaceDataProxy* self);
int QItemModelSurfaceDataProxy_SenderSignalIndex(const QItemModelSurfaceDataProxy* self);
int QItemModelSurfaceDataProxy_Receivers(const QItemModelSurfaceDataProxy* self, const char* signal);
bool QItemModelSurfaceDataProxy_IsSignalConnected(const QItemModelSurfaceDataProxy* self, const QMetaMethod* signal);
void QItemModelSurfaceDataProxy_Delete(QItemModelSurfaceDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
