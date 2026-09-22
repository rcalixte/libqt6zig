#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDSELECTIONLISTMODEL_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDSELECTIONLISTMODEL_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QVirtualKeyboardAbstractInputMethod QVirtualKeyboardAbstractInputMethod;
typedef struct QVirtualKeyboardSelectionListModel QVirtualKeyboardSelectionListModel;
#endif

QMetaObject* QVirtualKeyboardSelectionListModel_MetaObject(const QVirtualKeyboardSelectionListModel* self);
void* QVirtualKeyboardSelectionListModel_Metacast(QVirtualKeyboardSelectionListModel* self, const char* param1);
int QVirtualKeyboardSelectionListModel_Metacall(QVirtualKeyboardSelectionListModel* self, int param1, int param2, void** param3);
libqt_string QVirtualKeyboardSelectionListModel_Tr(const char* s);
void QVirtualKeyboardSelectionListModel_SetDataSource(QVirtualKeyboardSelectionListModel* self, QVirtualKeyboardAbstractInputMethod* dataSource, int typeVal);
QVirtualKeyboardAbstractInputMethod* QVirtualKeyboardSelectionListModel_DataSource(const QVirtualKeyboardSelectionListModel* self);
int QVirtualKeyboardSelectionListModel_RowCount(const QVirtualKeyboardSelectionListModel* self, const QModelIndex* parent);
QVariant* QVirtualKeyboardSelectionListModel_Data(const QVirtualKeyboardSelectionListModel* self, const QModelIndex* index, int role);
libqt_map /* of int to libqt_string */ QVirtualKeyboardSelectionListModel_RoleNames(const QVirtualKeyboardSelectionListModel* self);
int QVirtualKeyboardSelectionListModel_Count(const QVirtualKeyboardSelectionListModel* self);
void QVirtualKeyboardSelectionListModel_SelectItem(QVirtualKeyboardSelectionListModel* self, int index);
void QVirtualKeyboardSelectionListModel_RemoveItem(QVirtualKeyboardSelectionListModel* self, int index);
QVariant* QVirtualKeyboardSelectionListModel_DataAt(const QVirtualKeyboardSelectionListModel* self, int index);
void QVirtualKeyboardSelectionListModel_CountChanged(QVirtualKeyboardSelectionListModel* self);
void QVirtualKeyboardSelectionListModel_Connect_CountChanged(QVirtualKeyboardSelectionListModel* self, intptr_t slot);
void QVirtualKeyboardSelectionListModel_ActiveItemChanged(QVirtualKeyboardSelectionListModel* self, int index);
void QVirtualKeyboardSelectionListModel_Connect_ActiveItemChanged(QVirtualKeyboardSelectionListModel* self, intptr_t slot);
void QVirtualKeyboardSelectionListModel_ItemSelected(QVirtualKeyboardSelectionListModel* self, int index);
void QVirtualKeyboardSelectionListModel_Connect_ItemSelected(QVirtualKeyboardSelectionListModel* self, intptr_t slot);
libqt_string QVirtualKeyboardSelectionListModel_Tr2(const char* s, const char* c);
libqt_string QVirtualKeyboardSelectionListModel_Tr3(const char* s, const char* c, int n);
QVariant* QVirtualKeyboardSelectionListModel_DataAt2(const QVirtualKeyboardSelectionListModel* self, int index, int role);
void QVirtualKeyboardSelectionListModel_Delete(QVirtualKeyboardSelectionListModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
