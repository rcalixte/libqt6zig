#pragma once
#ifndef LIBQIDENTITYPROXYMODEL_HXX
#define LIBQIDENTITYPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIdentityProxyModel
class VirtualQIdentityProxyModel final : public QIdentityProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QIdentityProxyModel_MetaObject_Callback = QMetaObject* (*)(const QIdentityProxyModel*);
    using QIdentityProxyModel_Metacast_Callback = void* (*)(QIdentityProxyModel*, const char*);
    using QIdentityProxyModel_Metacall_Callback = int (*)(QIdentityProxyModel*, int, int, void**);
    using QIdentityProxyModel_ColumnCount_Callback = int (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Index_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_MapToSource_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Parent_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_RowCount_Callback = int (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_HeaderData_Callback = QVariant* (*)(const QIdentityProxyModel*, int, int, int);
    using QIdentityProxyModel_DropMimeData_Callback = bool (*)(QIdentityProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QIdentityProxyModel_Sibling_Callback = QModelIndex* (*)(const QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QIdentityProxyModel*, QItemSelection*);
    using QIdentityProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QIdentityProxyModel*, QItemSelection*);
    using QIdentityProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QIdentityProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QIdentityProxyModel_SetSourceModel_Callback = void (*)(QIdentityProxyModel*, QAbstractItemModel*);
    using QIdentityProxyModel_InsertColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_InsertRows_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_RemoveColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_RemoveRows_Callback = bool (*)(QIdentityProxyModel*, int, int, QModelIndex*);
    using QIdentityProxyModel_MoveRows_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QIdentityProxyModel_MoveColumns_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QIdentityProxyModel_Submit_Callback = bool (*)(QIdentityProxyModel*);
    using QIdentityProxyModel_Revert_Callback = void (*)(QIdentityProxyModel*);
    using QIdentityProxyModel_Data_Callback = QVariant* (*)(const QIdentityProxyModel*, QModelIndex*, int);
    using QIdentityProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Flags_Callback = int (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_SetData_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, QVariant*, int);
    using QIdentityProxyModel_SetItemData_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QIdentityProxyModel_SetHeaderData_Callback = bool (*)(QIdentityProxyModel*, int, int, QVariant*, int);
    using QIdentityProxyModel_ClearItemData_Callback = bool (*)(QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Buddy_Callback = QModelIndex* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_CanFetchMore_Callback = bool (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_FetchMore_Callback = void (*)(QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_Sort_Callback = void (*)(QIdentityProxyModel*, int, int);
    using QIdentityProxyModel_Span_Callback = QSize* (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_HasChildren_Callback = bool (*)(const QIdentityProxyModel*, QModelIndex*);
    using QIdentityProxyModel_MimeData_Callback = QMimeData* (*)(const QIdentityProxyModel*, libqt_list /* of QModelIndex* */);
    using QIdentityProxyModel_CanDropMimeData_Callback = bool (*)(const QIdentityProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QIdentityProxyModel_MimeTypes_Callback = const char** (*)(const QIdentityProxyModel*);
    using QIdentityProxyModel_SupportedDragActions_Callback = int (*)(const QIdentityProxyModel*);
    using QIdentityProxyModel_SupportedDropActions_Callback = int (*)(const QIdentityProxyModel*);
    using QIdentityProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QIdentityProxyModel*);
    using QIdentityProxyModel_MultiData_Callback = void (*)(const QIdentityProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QIdentityProxyModel_ResetInternalData_Callback = void (*)(QIdentityProxyModel*);
    using QIdentityProxyModel_Event_Callback = bool (*)(QIdentityProxyModel*, QEvent*);
    using QIdentityProxyModel_EventFilter_Callback = bool (*)(QIdentityProxyModel*, QObject*, QEvent*);
    using QIdentityProxyModel_TimerEvent_Callback = void (*)(QIdentityProxyModel*, QTimerEvent*);
    using QIdentityProxyModel_ChildEvent_Callback = void (*)(QIdentityProxyModel*, QChildEvent*);
    using QIdentityProxyModel_CustomEvent_Callback = void (*)(QIdentityProxyModel*, QEvent*);
    using QIdentityProxyModel_ConnectNotify_Callback = void (*)(QIdentityProxyModel*, QMetaMethod*);
    using QIdentityProxyModel_DisconnectNotify_Callback = void (*)(QIdentityProxyModel*, QMetaMethod*);
    using QIdentityProxyModel::beginInsertColumns;
    using QIdentityProxyModel::beginInsertRows;
    using QIdentityProxyModel::beginMoveColumns;
    using QIdentityProxyModel::beginMoveRows;
    using QIdentityProxyModel::beginRemoveColumns;
    using QIdentityProxyModel::beginRemoveRows;
    using QIdentityProxyModel::beginResetModel;
    using QIdentityProxyModel::changePersistentIndex;
    using QIdentityProxyModel::changePersistentIndexList;
    using QIdentityProxyModel::createIndex;
    using QIdentityProxyModel::createSourceIndex;
    using QIdentityProxyModel::decodeData;
    using QIdentityProxyModel::encodeData;
    using QIdentityProxyModel::endInsertColumns;
    using QIdentityProxyModel::endInsertRows;
    using QIdentityProxyModel::endMoveColumns;
    using QIdentityProxyModel::endMoveRows;
    using QIdentityProxyModel::endRemoveColumns;
    using QIdentityProxyModel::endRemoveRows;
    using QIdentityProxyModel::endResetModel;
    using QIdentityProxyModel::isSignalConnected;
    using QIdentityProxyModel::persistentIndexList;
    using QIdentityProxyModel::receivers;
    using QIdentityProxyModel::sender;
    using QIdentityProxyModel::senderSignalIndex;
    using QIdentityProxyModel::setHandleSourceDataChanges;
    using QIdentityProxyModel::setHandleSourceLayoutChanges;

    // Instance callback storage
    QIdentityProxyModel_MetaObject_Callback qidentityproxymodel_metaobject_callback = nullptr;
    QIdentityProxyModel_Metacast_Callback qidentityproxymodel_metacast_callback = nullptr;
    QIdentityProxyModel_Metacall_Callback qidentityproxymodel_metacall_callback = nullptr;
    QIdentityProxyModel_ColumnCount_Callback qidentityproxymodel_columncount_callback = nullptr;
    QIdentityProxyModel_Index_Callback qidentityproxymodel_index_callback = nullptr;
    QIdentityProxyModel_MapFromSource_Callback qidentityproxymodel_mapfromsource_callback = nullptr;
    QIdentityProxyModel_MapToSource_Callback qidentityproxymodel_maptosource_callback = nullptr;
    QIdentityProxyModel_Parent_Callback qidentityproxymodel_parent_callback = nullptr;
    QIdentityProxyModel_RowCount_Callback qidentityproxymodel_rowcount_callback = nullptr;
    QIdentityProxyModel_HeaderData_Callback qidentityproxymodel_headerdata_callback = nullptr;
    QIdentityProxyModel_DropMimeData_Callback qidentityproxymodel_dropmimedata_callback = nullptr;
    QIdentityProxyModel_Sibling_Callback qidentityproxymodel_sibling_callback = nullptr;
    QIdentityProxyModel_MapSelectionFromSource_Callback qidentityproxymodel_mapselectionfromsource_callback = nullptr;
    QIdentityProxyModel_MapSelectionToSource_Callback qidentityproxymodel_mapselectiontosource_callback = nullptr;
    QIdentityProxyModel_Match_Callback qidentityproxymodel_match_callback = nullptr;
    QIdentityProxyModel_SetSourceModel_Callback qidentityproxymodel_setsourcemodel_callback = nullptr;
    QIdentityProxyModel_InsertColumns_Callback qidentityproxymodel_insertcolumns_callback = nullptr;
    QIdentityProxyModel_InsertRows_Callback qidentityproxymodel_insertrows_callback = nullptr;
    QIdentityProxyModel_RemoveColumns_Callback qidentityproxymodel_removecolumns_callback = nullptr;
    QIdentityProxyModel_RemoveRows_Callback qidentityproxymodel_removerows_callback = nullptr;
    QIdentityProxyModel_MoveRows_Callback qidentityproxymodel_moverows_callback = nullptr;
    QIdentityProxyModel_MoveColumns_Callback qidentityproxymodel_movecolumns_callback = nullptr;
    QIdentityProxyModel_Submit_Callback qidentityproxymodel_submit_callback = nullptr;
    QIdentityProxyModel_Revert_Callback qidentityproxymodel_revert_callback = nullptr;
    QIdentityProxyModel_Data_Callback qidentityproxymodel_data_callback = nullptr;
    QIdentityProxyModel_ItemData_Callback qidentityproxymodel_itemdata_callback = nullptr;
    QIdentityProxyModel_Flags_Callback qidentityproxymodel_flags_callback = nullptr;
    QIdentityProxyModel_SetData_Callback qidentityproxymodel_setdata_callback = nullptr;
    QIdentityProxyModel_SetItemData_Callback qidentityproxymodel_setitemdata_callback = nullptr;
    QIdentityProxyModel_SetHeaderData_Callback qidentityproxymodel_setheaderdata_callback = nullptr;
    QIdentityProxyModel_ClearItemData_Callback qidentityproxymodel_clearitemdata_callback = nullptr;
    QIdentityProxyModel_Buddy_Callback qidentityproxymodel_buddy_callback = nullptr;
    QIdentityProxyModel_CanFetchMore_Callback qidentityproxymodel_canfetchmore_callback = nullptr;
    QIdentityProxyModel_FetchMore_Callback qidentityproxymodel_fetchmore_callback = nullptr;
    QIdentityProxyModel_Sort_Callback qidentityproxymodel_sort_callback = nullptr;
    QIdentityProxyModel_Span_Callback qidentityproxymodel_span_callback = nullptr;
    QIdentityProxyModel_HasChildren_Callback qidentityproxymodel_haschildren_callback = nullptr;
    QIdentityProxyModel_MimeData_Callback qidentityproxymodel_mimedata_callback = nullptr;
    QIdentityProxyModel_CanDropMimeData_Callback qidentityproxymodel_candropmimedata_callback = nullptr;
    QIdentityProxyModel_MimeTypes_Callback qidentityproxymodel_mimetypes_callback = nullptr;
    QIdentityProxyModel_SupportedDragActions_Callback qidentityproxymodel_supporteddragactions_callback = nullptr;
    QIdentityProxyModel_SupportedDropActions_Callback qidentityproxymodel_supporteddropactions_callback = nullptr;
    QIdentityProxyModel_RoleNames_Callback qidentityproxymodel_rolenames_callback = nullptr;
    QIdentityProxyModel_MultiData_Callback qidentityproxymodel_multidata_callback = nullptr;
    QIdentityProxyModel_ResetInternalData_Callback qidentityproxymodel_resetinternaldata_callback = nullptr;
    QIdentityProxyModel_Event_Callback qidentityproxymodel_event_callback = nullptr;
    QIdentityProxyModel_EventFilter_Callback qidentityproxymodel_eventfilter_callback = nullptr;
    QIdentityProxyModel_TimerEvent_Callback qidentityproxymodel_timerevent_callback = nullptr;
    QIdentityProxyModel_ChildEvent_Callback qidentityproxymodel_childevent_callback = nullptr;
    QIdentityProxyModel_CustomEvent_Callback qidentityproxymodel_customevent_callback = nullptr;
    QIdentityProxyModel_ConnectNotify_Callback qidentityproxymodel_connectnotify_callback = nullptr;
    QIdentityProxyModel_DisconnectNotify_Callback qidentityproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QIdentityProxyModel {
        using QIdentityProxyModel::childEvent;
        using QIdentityProxyModel::connectNotify;
        using QIdentityProxyModel::customEvent;
        using QIdentityProxyModel::disconnectNotify;
        using QIdentityProxyModel::resetInternalData;
        using QIdentityProxyModel::timerEvent;
    };

    VirtualQIdentityProxyModel() : QIdentityProxyModel() {};
    VirtualQIdentityProxyModel(QObject* parent) : QIdentityProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qidentityproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = qidentityproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return QIdentityProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qidentityproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qidentityproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qidentityproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qidentityproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qidentityproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qidentityproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qidentityproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = qidentityproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qidentityproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = qidentityproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qidentityproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = qidentityproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qidentityproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QIdentityProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qidentityproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qidentityproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qidentityproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qidentityproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qidentityproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = qidentityproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = qidentityproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qidentityproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qidentityproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QIdentityProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qidentityproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            qidentityproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        QIdentityProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qidentityproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qidentityproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qidentityproxymodel_submit_callback) {
            bool callback_ret = qidentityproxymodel_submit_callback(this);
            return callback_ret;
        }
        return QIdentityProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qidentityproxymodel_revert_callback) {
            qidentityproxymodel_revert_callback(this);
            return;
        }
        QIdentityProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qidentityproxymodel_data_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;
            QVariant* callback_ret = qidentityproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::data(proxyIndex, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qidentityproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qidentityproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QIdentityProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qidentityproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qidentityproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QIdentityProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qidentityproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qidentityproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QIdentityProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qidentityproxymodel_setitemdata_callback) {
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
            bool callback_ret = qidentityproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QIdentityProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qidentityproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qidentityproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qidentityproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qidentityproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qidentityproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qidentityproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qidentityproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qidentityproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qidentityproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        QIdentityProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qidentityproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qidentityproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QIdentityProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qidentityproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qidentityproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIdentityProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qidentityproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qidentityproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = qidentityproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QIdentityProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qidentityproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qidentityproxymodel_mimetypes_callback) {
            const char** callback_ret = qidentityproxymodel_mimetypes_callback(this);
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
        return QIdentityProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qidentityproxymodel_supporteddragactions_callback) {
            int callback_ret = qidentityproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QIdentityProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qidentityproxymodel_supporteddropactions_callback) {
            int callback_ret = qidentityproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QIdentityProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qidentityproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qidentityproxymodel_rolenames_callback(this);
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
        return QIdentityProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qidentityproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qidentityproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QIdentityProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qidentityproxymodel_resetinternaldata_callback) {
            qidentityproxymodel_resetinternaldata_callback(this);
            return;
        }
        QIdentityProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qidentityproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qidentityproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QIdentityProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qidentityproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qidentityproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QIdentityProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qidentityproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qidentityproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        QIdentityProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qidentityproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qidentityproxymodel_childevent_callback(this, cbval1);
            return;
        }
        QIdentityProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qidentityproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            qidentityproxymodel_customevent_callback(this, cbval1);
            return;
        }
        QIdentityProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qidentityproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        QIdentityProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qidentityproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QIdentityProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QIdentityProxyModel_SuperResetInternalData(QIdentityProxyModel* self);
    friend void QIdentityProxyModel_SuperTimerEvent(QIdentityProxyModel* self, QTimerEvent* event);
    friend void QIdentityProxyModel_SuperChildEvent(QIdentityProxyModel* self, QChildEvent* event);
    friend void QIdentityProxyModel_SuperCustomEvent(QIdentityProxyModel* self, QEvent* event);
    friend void QIdentityProxyModel_SuperConnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
    friend void QIdentityProxyModel_SuperDisconnectNotify(QIdentityProxyModel* self, const QMetaMethod* signal);
};

#endif
