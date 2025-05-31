#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEHISTORY_H
#define SRC_WEBENGINEC_LIBQWEBENGINEHISTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QDataStream QDataStream;
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHistoryItem QWebEngineHistoryItem;
typedef struct QWebEngineHistoryModel QWebEngineHistoryModel;
#endif

#ifdef __cplusplus
typedef QWebEngineHistoryModel::Roles Roles; // C++ enum
#else
typedef int Roles; // C ABI enum
#endif

QWebEngineHistoryItem* QWebEngineHistoryItem_new(const QWebEngineHistoryItem* other);
void QWebEngineHistoryItem_OperatorAssign(QWebEngineHistoryItem* self, const QWebEngineHistoryItem* other);
QUrl* QWebEngineHistoryItem_OriginalUrl(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_Url(const QWebEngineHistoryItem* self);
libqt_string QWebEngineHistoryItem_Title(const QWebEngineHistoryItem* self);
QDateTime* QWebEngineHistoryItem_LastVisited(const QWebEngineHistoryItem* self);
QUrl* QWebEngineHistoryItem_IconUrl(const QWebEngineHistoryItem* self);
bool QWebEngineHistoryItem_IsValid(const QWebEngineHistoryItem* self);
void QWebEngineHistoryItem_Swap(QWebEngineHistoryItem* self, QWebEngineHistoryItem* other);
void QWebEngineHistoryItem_Delete(QWebEngineHistoryItem* self);

QMetaObject* QWebEngineHistoryModel_MetaObject(const QWebEngineHistoryModel* self);
void* QWebEngineHistoryModel_Metacast(QWebEngineHistoryModel* self, const char* param1);
int QWebEngineHistoryModel_Metacall(QWebEngineHistoryModel* self, int param1, int param2, void** param3);
libqt_string QWebEngineHistoryModel_Tr(const char* s);
int QWebEngineHistoryModel_RowCount(const QWebEngineHistoryModel* self, const QModelIndex* parent);
QVariant* QWebEngineHistoryModel_Data(const QWebEngineHistoryModel* self, const QModelIndex* index, int role);
libqt_map /* of int to libqt_string */ QWebEngineHistoryModel_RoleNames(const QWebEngineHistoryModel* self);
void QWebEngineHistoryModel_Reset(QWebEngineHistoryModel* self);
libqt_string QWebEngineHistoryModel_Tr2(const char* s, const char* c);
libqt_string QWebEngineHistoryModel_Tr3(const char* s, const char* c, int n);

QMetaObject* QWebEngineHistory_MetaObject(const QWebEngineHistory* self);
void* QWebEngineHistory_Metacast(QWebEngineHistory* self, const char* param1);
int QWebEngineHistory_Metacall(QWebEngineHistory* self, int param1, int param2, void** param3);
libqt_string QWebEngineHistory_Tr(const char* s);
void QWebEngineHistory_Clear(QWebEngineHistory* self);
libqt_list /* of QWebEngineHistoryItem* */ QWebEngineHistory_Items(const QWebEngineHistory* self);
libqt_list /* of QWebEngineHistoryItem* */ QWebEngineHistory_BackItems(const QWebEngineHistory* self, int maxItems);
libqt_list /* of QWebEngineHistoryItem* */ QWebEngineHistory_ForwardItems(const QWebEngineHistory* self, int maxItems);
bool QWebEngineHistory_CanGoBack(const QWebEngineHistory* self);
bool QWebEngineHistory_CanGoForward(const QWebEngineHistory* self);
void QWebEngineHistory_Back(QWebEngineHistory* self);
void QWebEngineHistory_Forward(QWebEngineHistory* self);
void QWebEngineHistory_GoToItem(QWebEngineHistory* self, const QWebEngineHistoryItem* item);
QWebEngineHistoryItem* QWebEngineHistory_BackItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_CurrentItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_ForwardItem(const QWebEngineHistory* self);
QWebEngineHistoryItem* QWebEngineHistory_ItemAt(const QWebEngineHistory* self, int i);
int QWebEngineHistory_CurrentItemIndex(const QWebEngineHistory* self);
int QWebEngineHistory_Count(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_ItemsModel(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_BackItemsModel(const QWebEngineHistory* self);
QWebEngineHistoryModel* QWebEngineHistory_ForwardItemsModel(const QWebEngineHistory* self);
libqt_string QWebEngineHistory_Tr2(const char* s, const char* c);
libqt_string QWebEngineHistory_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
