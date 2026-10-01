#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKREARRANGECOLUMNSPROXYMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKREARRANGECOLUMNSPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRearrangeColumnsProxyModel
class VirtualKRearrangeColumnsProxyModel final : public KRearrangeColumnsProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KRearrangeColumnsProxyModel_MetaObject_Callback = QMetaObject* (*)(const KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_Metacast_Callback = void* (*)(KRearrangeColumnsProxyModel*, const char*);
    using KRearrangeColumnsProxyModel_Metacall_Callback = int (*)(KRearrangeColumnsProxyModel*, int, int, void**);
    using KRearrangeColumnsProxyModel_ColumnCount_Callback = int (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_RowCount_Callback = int (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Index_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_Parent_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_MapFromSource_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_MapToSource_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_HeaderData_Callback = QVariant* (*)(const KRearrangeColumnsProxyModel*, int, int, int);
    using KRearrangeColumnsProxyModel_HasChildren_Callback = bool (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Sibling_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_DropMimeData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const KRearrangeColumnsProxyModel*, QItemSelection*);
    using KRearrangeColumnsProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const KRearrangeColumnsProxyModel*, QItemSelection*);
    using KRearrangeColumnsProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KRearrangeColumnsProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using KRearrangeColumnsProxyModel_SetSourceModel_Callback = void (*)(KRearrangeColumnsProxyModel*, QAbstractItemModel*);
    using KRearrangeColumnsProxyModel_InsertColumns_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_InsertRows_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_RemoveColumns_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_RemoveRows_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_MoveRows_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_MoveColumns_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_Submit_Callback = bool (*)(KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_Revert_Callback = void (*)(KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_Data_Callback = QVariant* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*, int);
    using KRearrangeColumnsProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Flags_Callback = int (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_SetData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, QVariant*, int);
    using KRearrangeColumnsProxyModel_SetItemData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KRearrangeColumnsProxyModel_SetHeaderData_Callback = bool (*)(KRearrangeColumnsProxyModel*, int, int, QVariant*, int);
    using KRearrangeColumnsProxyModel_ClearItemData_Callback = bool (*)(KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Buddy_Callback = QModelIndex* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_CanFetchMore_Callback = bool (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_FetchMore_Callback = void (*)(KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_Sort_Callback = void (*)(KRearrangeColumnsProxyModel*, int, int);
    using KRearrangeColumnsProxyModel_Span_Callback = QSize* (*)(const KRearrangeColumnsProxyModel*, QModelIndex*);
    using KRearrangeColumnsProxyModel_MimeData_Callback = QMimeData* (*)(const KRearrangeColumnsProxyModel*, libqt_list /* of QModelIndex* */);
    using KRearrangeColumnsProxyModel_CanDropMimeData_Callback = bool (*)(const KRearrangeColumnsProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using KRearrangeColumnsProxyModel_MimeTypes_Callback = const char** (*)(const KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_SupportedDragActions_Callback = int (*)(const KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_SupportedDropActions_Callback = int (*)(const KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_MultiData_Callback = void (*)(const KRearrangeColumnsProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using KRearrangeColumnsProxyModel_ResetInternalData_Callback = void (*)(KRearrangeColumnsProxyModel*);
    using KRearrangeColumnsProxyModel_Event_Callback = bool (*)(KRearrangeColumnsProxyModel*, QEvent*);
    using KRearrangeColumnsProxyModel_EventFilter_Callback = bool (*)(KRearrangeColumnsProxyModel*, QObject*, QEvent*);
    using KRearrangeColumnsProxyModel_TimerEvent_Callback = void (*)(KRearrangeColumnsProxyModel*, QTimerEvent*);
    using KRearrangeColumnsProxyModel_ChildEvent_Callback = void (*)(KRearrangeColumnsProxyModel*, QChildEvent*);
    using KRearrangeColumnsProxyModel_CustomEvent_Callback = void (*)(KRearrangeColumnsProxyModel*, QEvent*);
    using KRearrangeColumnsProxyModel_ConnectNotify_Callback = void (*)(KRearrangeColumnsProxyModel*, QMetaMethod*);
    using KRearrangeColumnsProxyModel_DisconnectNotify_Callback = void (*)(KRearrangeColumnsProxyModel*, QMetaMethod*);
    using KRearrangeColumnsProxyModel::beginInsertColumns;
    using KRearrangeColumnsProxyModel::beginInsertRows;
    using KRearrangeColumnsProxyModel::beginMoveColumns;
    using KRearrangeColumnsProxyModel::beginMoveRows;
    using KRearrangeColumnsProxyModel::beginRemoveColumns;
    using KRearrangeColumnsProxyModel::beginRemoveRows;
    using KRearrangeColumnsProxyModel::beginResetModel;
    using KRearrangeColumnsProxyModel::changePersistentIndex;
    using KRearrangeColumnsProxyModel::changePersistentIndexList;
    using KRearrangeColumnsProxyModel::createIndex;
    using KRearrangeColumnsProxyModel::createSourceIndex;
    using KRearrangeColumnsProxyModel::decodeData;
    using KRearrangeColumnsProxyModel::encodeData;
    using KRearrangeColumnsProxyModel::endInsertColumns;
    using KRearrangeColumnsProxyModel::endInsertRows;
    using KRearrangeColumnsProxyModel::endMoveColumns;
    using KRearrangeColumnsProxyModel::endMoveRows;
    using KRearrangeColumnsProxyModel::endRemoveColumns;
    using KRearrangeColumnsProxyModel::endRemoveRows;
    using KRearrangeColumnsProxyModel::endResetModel;
    using KRearrangeColumnsProxyModel::isSignalConnected;
    using KRearrangeColumnsProxyModel::persistentIndexList;
    using KRearrangeColumnsProxyModel::receivers;
    using KRearrangeColumnsProxyModel::sender;
    using KRearrangeColumnsProxyModel::senderSignalIndex;
    using KRearrangeColumnsProxyModel::setHandleSourceDataChanges;
    using KRearrangeColumnsProxyModel::setHandleSourceLayoutChanges;

    // Instance callback storage
    KRearrangeColumnsProxyModel_MetaObject_Callback krearrangecolumnsproxymodel_metaobject_callback = nullptr;
    KRearrangeColumnsProxyModel_Metacast_Callback krearrangecolumnsproxymodel_metacast_callback = nullptr;
    KRearrangeColumnsProxyModel_Metacall_Callback krearrangecolumnsproxymodel_metacall_callback = nullptr;
    KRearrangeColumnsProxyModel_ColumnCount_Callback krearrangecolumnsproxymodel_columncount_callback = nullptr;
    KRearrangeColumnsProxyModel_RowCount_Callback krearrangecolumnsproxymodel_rowcount_callback = nullptr;
    KRearrangeColumnsProxyModel_Index_Callback krearrangecolumnsproxymodel_index_callback = nullptr;
    KRearrangeColumnsProxyModel_Parent_Callback krearrangecolumnsproxymodel_parent_callback = nullptr;
    KRearrangeColumnsProxyModel_MapFromSource_Callback krearrangecolumnsproxymodel_mapfromsource_callback = nullptr;
    KRearrangeColumnsProxyModel_MapToSource_Callback krearrangecolumnsproxymodel_maptosource_callback = nullptr;
    KRearrangeColumnsProxyModel_HeaderData_Callback krearrangecolumnsproxymodel_headerdata_callback = nullptr;
    KRearrangeColumnsProxyModel_HasChildren_Callback krearrangecolumnsproxymodel_haschildren_callback = nullptr;
    KRearrangeColumnsProxyModel_Sibling_Callback krearrangecolumnsproxymodel_sibling_callback = nullptr;
    KRearrangeColumnsProxyModel_DropMimeData_Callback krearrangecolumnsproxymodel_dropmimedata_callback = nullptr;
    KRearrangeColumnsProxyModel_MapSelectionFromSource_Callback krearrangecolumnsproxymodel_mapselectionfromsource_callback = nullptr;
    KRearrangeColumnsProxyModel_MapSelectionToSource_Callback krearrangecolumnsproxymodel_mapselectiontosource_callback = nullptr;
    KRearrangeColumnsProxyModel_Match_Callback krearrangecolumnsproxymodel_match_callback = nullptr;
    KRearrangeColumnsProxyModel_SetSourceModel_Callback krearrangecolumnsproxymodel_setsourcemodel_callback = nullptr;
    KRearrangeColumnsProxyModel_InsertColumns_Callback krearrangecolumnsproxymodel_insertcolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_InsertRows_Callback krearrangecolumnsproxymodel_insertrows_callback = nullptr;
    KRearrangeColumnsProxyModel_RemoveColumns_Callback krearrangecolumnsproxymodel_removecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_RemoveRows_Callback krearrangecolumnsproxymodel_removerows_callback = nullptr;
    KRearrangeColumnsProxyModel_MoveRows_Callback krearrangecolumnsproxymodel_moverows_callback = nullptr;
    KRearrangeColumnsProxyModel_MoveColumns_Callback krearrangecolumnsproxymodel_movecolumns_callback = nullptr;
    KRearrangeColumnsProxyModel_Submit_Callback krearrangecolumnsproxymodel_submit_callback = nullptr;
    KRearrangeColumnsProxyModel_Revert_Callback krearrangecolumnsproxymodel_revert_callback = nullptr;
    KRearrangeColumnsProxyModel_Data_Callback krearrangecolumnsproxymodel_data_callback = nullptr;
    KRearrangeColumnsProxyModel_ItemData_Callback krearrangecolumnsproxymodel_itemdata_callback = nullptr;
    KRearrangeColumnsProxyModel_Flags_Callback krearrangecolumnsproxymodel_flags_callback = nullptr;
    KRearrangeColumnsProxyModel_SetData_Callback krearrangecolumnsproxymodel_setdata_callback = nullptr;
    KRearrangeColumnsProxyModel_SetItemData_Callback krearrangecolumnsproxymodel_setitemdata_callback = nullptr;
    KRearrangeColumnsProxyModel_SetHeaderData_Callback krearrangecolumnsproxymodel_setheaderdata_callback = nullptr;
    KRearrangeColumnsProxyModel_ClearItemData_Callback krearrangecolumnsproxymodel_clearitemdata_callback = nullptr;
    KRearrangeColumnsProxyModel_Buddy_Callback krearrangecolumnsproxymodel_buddy_callback = nullptr;
    KRearrangeColumnsProxyModel_CanFetchMore_Callback krearrangecolumnsproxymodel_canfetchmore_callback = nullptr;
    KRearrangeColumnsProxyModel_FetchMore_Callback krearrangecolumnsproxymodel_fetchmore_callback = nullptr;
    KRearrangeColumnsProxyModel_Sort_Callback krearrangecolumnsproxymodel_sort_callback = nullptr;
    KRearrangeColumnsProxyModel_Span_Callback krearrangecolumnsproxymodel_span_callback = nullptr;
    KRearrangeColumnsProxyModel_MimeData_Callback krearrangecolumnsproxymodel_mimedata_callback = nullptr;
    KRearrangeColumnsProxyModel_CanDropMimeData_Callback krearrangecolumnsproxymodel_candropmimedata_callback = nullptr;
    KRearrangeColumnsProxyModel_MimeTypes_Callback krearrangecolumnsproxymodel_mimetypes_callback = nullptr;
    KRearrangeColumnsProxyModel_SupportedDragActions_Callback krearrangecolumnsproxymodel_supporteddragactions_callback = nullptr;
    KRearrangeColumnsProxyModel_SupportedDropActions_Callback krearrangecolumnsproxymodel_supporteddropactions_callback = nullptr;
    KRearrangeColumnsProxyModel_RoleNames_Callback krearrangecolumnsproxymodel_rolenames_callback = nullptr;
    KRearrangeColumnsProxyModel_MultiData_Callback krearrangecolumnsproxymodel_multidata_callback = nullptr;
    KRearrangeColumnsProxyModel_ResetInternalData_Callback krearrangecolumnsproxymodel_resetinternaldata_callback = nullptr;
    KRearrangeColumnsProxyModel_Event_Callback krearrangecolumnsproxymodel_event_callback = nullptr;
    KRearrangeColumnsProxyModel_EventFilter_Callback krearrangecolumnsproxymodel_eventfilter_callback = nullptr;
    KRearrangeColumnsProxyModel_TimerEvent_Callback krearrangecolumnsproxymodel_timerevent_callback = nullptr;
    KRearrangeColumnsProxyModel_ChildEvent_Callback krearrangecolumnsproxymodel_childevent_callback = nullptr;
    KRearrangeColumnsProxyModel_CustomEvent_Callback krearrangecolumnsproxymodel_customevent_callback = nullptr;
    KRearrangeColumnsProxyModel_ConnectNotify_Callback krearrangecolumnsproxymodel_connectnotify_callback = nullptr;
    KRearrangeColumnsProxyModel_DisconnectNotify_Callback krearrangecolumnsproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KRearrangeColumnsProxyModel {
        using KRearrangeColumnsProxyModel::childEvent;
        using KRearrangeColumnsProxyModel::connectNotify;
        using KRearrangeColumnsProxyModel::customEvent;
        using KRearrangeColumnsProxyModel::disconnectNotify;
        using KRearrangeColumnsProxyModel::resetInternalData;
        using KRearrangeColumnsProxyModel::timerEvent;
    };

    VirtualKRearrangeColumnsProxyModel() : KRearrangeColumnsProxyModel() {};
    VirtualKRearrangeColumnsProxyModel(QObject* parent) : KRearrangeColumnsProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (krearrangecolumnsproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = krearrangecolumnsproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (krearrangecolumnsproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = krearrangecolumnsproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krearrangecolumnsproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = krearrangecolumnsproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRearrangeColumnsProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = krearrangecolumnsproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRearrangeColumnsProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = krearrangecolumnsproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRearrangeColumnsProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = krearrangecolumnsproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (krearrangecolumnsproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = krearrangecolumnsproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (krearrangecolumnsproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = krearrangecolumnsproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (krearrangecolumnsproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = krearrangecolumnsproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (krearrangecolumnsproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = krearrangecolumnsproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (krearrangecolumnsproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = krearrangecolumnsproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (krearrangecolumnsproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = krearrangecolumnsproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (krearrangecolumnsproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = krearrangecolumnsproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (krearrangecolumnsproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = krearrangecolumnsproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KRearrangeColumnsProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (krearrangecolumnsproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            krearrangecolumnsproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        KRearrangeColumnsProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (krearrangecolumnsproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = krearrangecolumnsproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (krearrangecolumnsproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = krearrangecolumnsproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (krearrangecolumnsproxymodel_submit_callback) {
            bool callback_ret = krearrangecolumnsproxymodel_submit_callback(this);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (krearrangecolumnsproxymodel_revert_callback) {
            krearrangecolumnsproxymodel_revert_callback(this);
            return;
        }
        KRearrangeColumnsProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (krearrangecolumnsproxymodel_data_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;
            QVariant* callback_ret = krearrangecolumnsproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::data(proxyIndex, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = krearrangecolumnsproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KRearrangeColumnsProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = krearrangecolumnsproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KRearrangeColumnsProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (krearrangecolumnsproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = krearrangecolumnsproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (krearrangecolumnsproxymodel_setitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QMap<int, QVariant>& roles_ret = roles;
            // Convert QMap<> from C++ memory to manually-managed C memory
            int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
            QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
            int roles_ctr = 0;
            for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
                roles_karr[roles_ctr] = roles_itr->first;
                roles_varr[roles_ctr] = new QVariant(roles_itr->second);
                roles_ctr++;
            }
            libqt_map roles_out;
            roles_out.len = roles_ret.size();
            roles_out.keys = static_cast<void*>(roles_karr);
            roles_out.values = static_cast<void*>(roles_varr);
            libqt_map /* of int to QVariant* */ cbval2 = roles_out;
            bool callback_ret = krearrangecolumnsproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (krearrangecolumnsproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = krearrangecolumnsproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (krearrangecolumnsproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = krearrangecolumnsproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = krearrangecolumnsproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (krearrangecolumnsproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            krearrangecolumnsproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        KRearrangeColumnsProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (krearrangecolumnsproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            krearrangecolumnsproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KRearrangeColumnsProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (krearrangecolumnsproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = krearrangecolumnsproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KRearrangeColumnsProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (krearrangecolumnsproxymodel_mimedata_callback) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size())));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;
            QMimeData* callback_ret = krearrangecolumnsproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (krearrangecolumnsproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = krearrangecolumnsproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (krearrangecolumnsproxymodel_mimetypes_callback) {
            const char** callback_ret = krearrangecolumnsproxymodel_mimetypes_callback(this);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return KRearrangeColumnsProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (krearrangecolumnsproxymodel_supporteddragactions_callback) {
            int callback_ret = krearrangecolumnsproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KRearrangeColumnsProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (krearrangecolumnsproxymodel_supporteddropactions_callback) {
            int callback_ret = krearrangecolumnsproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KRearrangeColumnsProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (krearrangecolumnsproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = krearrangecolumnsproxymodel_rolenames_callback(this);
            QHash<int, QByteArray> callback_ret_QHash;
            callback_ret_QHash.reserve(callback_ret.len);
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QByteArray callback_ret_varr_i_QByteArray(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QHash.insert(static_cast<int>(callback_ret_karr[i]), callback_ret_varr_i_QByteArray);
            }
            return callback_ret_QHash;
        }
        return KRearrangeColumnsProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (krearrangecolumnsproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            krearrangecolumnsproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KRearrangeColumnsProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (krearrangecolumnsproxymodel_resetinternaldata_callback) {
            krearrangecolumnsproxymodel_resetinternaldata_callback(this);
            return;
        }
        KRearrangeColumnsProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (krearrangecolumnsproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = krearrangecolumnsproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (krearrangecolumnsproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = krearrangecolumnsproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRearrangeColumnsProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (krearrangecolumnsproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            krearrangecolumnsproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        KRearrangeColumnsProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krearrangecolumnsproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            krearrangecolumnsproxymodel_childevent_callback(this, cbval1);
            return;
        }
        KRearrangeColumnsProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krearrangecolumnsproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            krearrangecolumnsproxymodel_customevent_callback(this, cbval1);
            return;
        }
        KRearrangeColumnsProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krearrangecolumnsproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krearrangecolumnsproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        KRearrangeColumnsProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krearrangecolumnsproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            krearrangecolumnsproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KRearrangeColumnsProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KRearrangeColumnsProxyModel_SuperResetInternalData(KRearrangeColumnsProxyModel* self);
    friend void KRearrangeColumnsProxyModel_SuperTimerEvent(KRearrangeColumnsProxyModel* self, QTimerEvent* event);
    friend void KRearrangeColumnsProxyModel_SuperChildEvent(KRearrangeColumnsProxyModel* self, QChildEvent* event);
    friend void KRearrangeColumnsProxyModel_SuperCustomEvent(KRearrangeColumnsProxyModel* self, QEvent* event);
    friend void KRearrangeColumnsProxyModel_SuperConnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
    friend void KRearrangeColumnsProxyModel_SuperDisconnectNotify(KRearrangeColumnsProxyModel* self, const QMetaMethod* signal);
};

#endif
