#pragma once
#ifndef LIBQTRANSPOSEPROXYMODEL_HXX
#define LIBQTRANSPOSEPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTransposeProxyModel
class VirtualQTransposeProxyModel final : public QTransposeProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTransposeProxyModel_MetaObject_Callback = QMetaObject* (*)(const QTransposeProxyModel*);
    using QTransposeProxyModel_Metacast_Callback = void* (*)(QTransposeProxyModel*, const char*);
    using QTransposeProxyModel_Metacall_Callback = int (*)(QTransposeProxyModel*, int, int, void**);
    using QTransposeProxyModel_SetSourceModel_Callback = void (*)(QTransposeProxyModel*, QAbstractItemModel*);
    using QTransposeProxyModel_RowCount_Callback = int (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_ColumnCount_Callback = int (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_HeaderData_Callback = QVariant* (*)(const QTransposeProxyModel*, int, int, int);
    using QTransposeProxyModel_SetHeaderData_Callback = bool (*)(QTransposeProxyModel*, int, int, QVariant*, int);
    using QTransposeProxyModel_SetItemData_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QTransposeProxyModel_Span_Callback = QSize* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_MapToSource_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Parent_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Index_Callback = QModelIndex* (*)(const QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_InsertRows_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_RemoveRows_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_MoveRows_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QTransposeProxyModel_InsertColumns_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_RemoveColumns_Callback = bool (*)(QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_MoveColumns_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QTransposeProxyModel_Sort_Callback = void (*)(QTransposeProxyModel*, int, int);
    using QTransposeProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QTransposeProxyModel*, QItemSelection*);
    using QTransposeProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QTransposeProxyModel*, QItemSelection*);
    using QTransposeProxyModel_Submit_Callback = bool (*)(QTransposeProxyModel*);
    using QTransposeProxyModel_Revert_Callback = void (*)(QTransposeProxyModel*);
    using QTransposeProxyModel_Data_Callback = QVariant* (*)(const QTransposeProxyModel*, QModelIndex*, int);
    using QTransposeProxyModel_Flags_Callback = int (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_SetData_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*, QVariant*, int);
    using QTransposeProxyModel_ClearItemData_Callback = bool (*)(QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Buddy_Callback = QModelIndex* (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_CanFetchMore_Callback = bool (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_FetchMore_Callback = void (*)(QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_HasChildren_Callback = bool (*)(const QTransposeProxyModel*, QModelIndex*);
    using QTransposeProxyModel_Sibling_Callback = QModelIndex* (*)(const QTransposeProxyModel*, int, int, QModelIndex*);
    using QTransposeProxyModel_MimeData_Callback = QMimeData* (*)(const QTransposeProxyModel*, libqt_list /* of QModelIndex* */);
    using QTransposeProxyModel_CanDropMimeData_Callback = bool (*)(const QTransposeProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QTransposeProxyModel_DropMimeData_Callback = bool (*)(QTransposeProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QTransposeProxyModel_MimeTypes_Callback = const char** (*)(const QTransposeProxyModel*);
    using QTransposeProxyModel_SupportedDragActions_Callback = int (*)(const QTransposeProxyModel*);
    using QTransposeProxyModel_SupportedDropActions_Callback = int (*)(const QTransposeProxyModel*);
    using QTransposeProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QTransposeProxyModel*);
    using QTransposeProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QTransposeProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QTransposeProxyModel_MultiData_Callback = void (*)(const QTransposeProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QTransposeProxyModel_ResetInternalData_Callback = void (*)(QTransposeProxyModel*);
    using QTransposeProxyModel_Event_Callback = bool (*)(QTransposeProxyModel*, QEvent*);
    using QTransposeProxyModel_EventFilter_Callback = bool (*)(QTransposeProxyModel*, QObject*, QEvent*);
    using QTransposeProxyModel_TimerEvent_Callback = void (*)(QTransposeProxyModel*, QTimerEvent*);
    using QTransposeProxyModel_ChildEvent_Callback = void (*)(QTransposeProxyModel*, QChildEvent*);
    using QTransposeProxyModel_CustomEvent_Callback = void (*)(QTransposeProxyModel*, QEvent*);
    using QTransposeProxyModel_ConnectNotify_Callback = void (*)(QTransposeProxyModel*, QMetaMethod*);
    using QTransposeProxyModel_DisconnectNotify_Callback = void (*)(QTransposeProxyModel*, QMetaMethod*);
    using QTransposeProxyModel::beginInsertColumns;
    using QTransposeProxyModel::beginInsertRows;
    using QTransposeProxyModel::beginMoveColumns;
    using QTransposeProxyModel::beginMoveRows;
    using QTransposeProxyModel::beginRemoveColumns;
    using QTransposeProxyModel::beginRemoveRows;
    using QTransposeProxyModel::beginResetModel;
    using QTransposeProxyModel::changePersistentIndex;
    using QTransposeProxyModel::changePersistentIndexList;
    using QTransposeProxyModel::createIndex;
    using QTransposeProxyModel::createSourceIndex;
    using QTransposeProxyModel::decodeData;
    using QTransposeProxyModel::encodeData;
    using QTransposeProxyModel::endInsertColumns;
    using QTransposeProxyModel::endInsertRows;
    using QTransposeProxyModel::endMoveColumns;
    using QTransposeProxyModel::endMoveRows;
    using QTransposeProxyModel::endRemoveColumns;
    using QTransposeProxyModel::endRemoveRows;
    using QTransposeProxyModel::endResetModel;
    using QTransposeProxyModel::isSignalConnected;
    using QTransposeProxyModel::persistentIndexList;
    using QTransposeProxyModel::receivers;
    using QTransposeProxyModel::sender;
    using QTransposeProxyModel::senderSignalIndex;

    // Instance callback storage
    QTransposeProxyModel_MetaObject_Callback qtransposeproxymodel_metaobject_callback = nullptr;
    QTransposeProxyModel_Metacast_Callback qtransposeproxymodel_metacast_callback = nullptr;
    QTransposeProxyModel_Metacall_Callback qtransposeproxymodel_metacall_callback = nullptr;
    QTransposeProxyModel_SetSourceModel_Callback qtransposeproxymodel_setsourcemodel_callback = nullptr;
    QTransposeProxyModel_RowCount_Callback qtransposeproxymodel_rowcount_callback = nullptr;
    QTransposeProxyModel_ColumnCount_Callback qtransposeproxymodel_columncount_callback = nullptr;
    QTransposeProxyModel_HeaderData_Callback qtransposeproxymodel_headerdata_callback = nullptr;
    QTransposeProxyModel_SetHeaderData_Callback qtransposeproxymodel_setheaderdata_callback = nullptr;
    QTransposeProxyModel_SetItemData_Callback qtransposeproxymodel_setitemdata_callback = nullptr;
    QTransposeProxyModel_Span_Callback qtransposeproxymodel_span_callback = nullptr;
    QTransposeProxyModel_ItemData_Callback qtransposeproxymodel_itemdata_callback = nullptr;
    QTransposeProxyModel_MapFromSource_Callback qtransposeproxymodel_mapfromsource_callback = nullptr;
    QTransposeProxyModel_MapToSource_Callback qtransposeproxymodel_maptosource_callback = nullptr;
    QTransposeProxyModel_Parent_Callback qtransposeproxymodel_parent_callback = nullptr;
    QTransposeProxyModel_Index_Callback qtransposeproxymodel_index_callback = nullptr;
    QTransposeProxyModel_InsertRows_Callback qtransposeproxymodel_insertrows_callback = nullptr;
    QTransposeProxyModel_RemoveRows_Callback qtransposeproxymodel_removerows_callback = nullptr;
    QTransposeProxyModel_MoveRows_Callback qtransposeproxymodel_moverows_callback = nullptr;
    QTransposeProxyModel_InsertColumns_Callback qtransposeproxymodel_insertcolumns_callback = nullptr;
    QTransposeProxyModel_RemoveColumns_Callback qtransposeproxymodel_removecolumns_callback = nullptr;
    QTransposeProxyModel_MoveColumns_Callback qtransposeproxymodel_movecolumns_callback = nullptr;
    QTransposeProxyModel_Sort_Callback qtransposeproxymodel_sort_callback = nullptr;
    QTransposeProxyModel_MapSelectionToSource_Callback qtransposeproxymodel_mapselectiontosource_callback = nullptr;
    QTransposeProxyModel_MapSelectionFromSource_Callback qtransposeproxymodel_mapselectionfromsource_callback = nullptr;
    QTransposeProxyModel_Submit_Callback qtransposeproxymodel_submit_callback = nullptr;
    QTransposeProxyModel_Revert_Callback qtransposeproxymodel_revert_callback = nullptr;
    QTransposeProxyModel_Data_Callback qtransposeproxymodel_data_callback = nullptr;
    QTransposeProxyModel_Flags_Callback qtransposeproxymodel_flags_callback = nullptr;
    QTransposeProxyModel_SetData_Callback qtransposeproxymodel_setdata_callback = nullptr;
    QTransposeProxyModel_ClearItemData_Callback qtransposeproxymodel_clearitemdata_callback = nullptr;
    QTransposeProxyModel_Buddy_Callback qtransposeproxymodel_buddy_callback = nullptr;
    QTransposeProxyModel_CanFetchMore_Callback qtransposeproxymodel_canfetchmore_callback = nullptr;
    QTransposeProxyModel_FetchMore_Callback qtransposeproxymodel_fetchmore_callback = nullptr;
    QTransposeProxyModel_HasChildren_Callback qtransposeproxymodel_haschildren_callback = nullptr;
    QTransposeProxyModel_Sibling_Callback qtransposeproxymodel_sibling_callback = nullptr;
    QTransposeProxyModel_MimeData_Callback qtransposeproxymodel_mimedata_callback = nullptr;
    QTransposeProxyModel_CanDropMimeData_Callback qtransposeproxymodel_candropmimedata_callback = nullptr;
    QTransposeProxyModel_DropMimeData_Callback qtransposeproxymodel_dropmimedata_callback = nullptr;
    QTransposeProxyModel_MimeTypes_Callback qtransposeproxymodel_mimetypes_callback = nullptr;
    QTransposeProxyModel_SupportedDragActions_Callback qtransposeproxymodel_supporteddragactions_callback = nullptr;
    QTransposeProxyModel_SupportedDropActions_Callback qtransposeproxymodel_supporteddropactions_callback = nullptr;
    QTransposeProxyModel_RoleNames_Callback qtransposeproxymodel_rolenames_callback = nullptr;
    QTransposeProxyModel_Match_Callback qtransposeproxymodel_match_callback = nullptr;
    QTransposeProxyModel_MultiData_Callback qtransposeproxymodel_multidata_callback = nullptr;
    QTransposeProxyModel_ResetInternalData_Callback qtransposeproxymodel_resetinternaldata_callback = nullptr;
    QTransposeProxyModel_Event_Callback qtransposeproxymodel_event_callback = nullptr;
    QTransposeProxyModel_EventFilter_Callback qtransposeproxymodel_eventfilter_callback = nullptr;
    QTransposeProxyModel_TimerEvent_Callback qtransposeproxymodel_timerevent_callback = nullptr;
    QTransposeProxyModel_ChildEvent_Callback qtransposeproxymodel_childevent_callback = nullptr;
    QTransposeProxyModel_CustomEvent_Callback qtransposeproxymodel_customevent_callback = nullptr;
    QTransposeProxyModel_ConnectNotify_Callback qtransposeproxymodel_connectnotify_callback = nullptr;
    QTransposeProxyModel_DisconnectNotify_Callback qtransposeproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTransposeProxyModel {
        using QTransposeProxyModel::childEvent;
        using QTransposeProxyModel::connectNotify;
        using QTransposeProxyModel::customEvent;
        using QTransposeProxyModel::disconnectNotify;
        using QTransposeProxyModel::resetInternalData;
        using QTransposeProxyModel::timerEvent;
    };

    VirtualQTransposeProxyModel() : QTransposeProxyModel() {};
    VirtualQTransposeProxyModel(QObject* parent) : QTransposeProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtransposeproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = qtransposeproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return QTransposeProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtransposeproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtransposeproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtransposeproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtransposeproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* newSourceModel) override {
        if (qtransposeproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = newSourceModel;
            qtransposeproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        QTransposeProxyModel::setSourceModel(newSourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qtransposeproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qtransposeproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTransposeProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qtransposeproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qtransposeproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qtransposeproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qtransposeproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qtransposeproxymodel_setitemdata_callback) {
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
            bool callback_ret = qtransposeproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTransposeProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qtransposeproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qtransposeproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qtransposeproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qtransposeproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QTransposeProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qtransposeproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = qtransposeproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qtransposeproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = qtransposeproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qtransposeproxymodel_parent_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qtransposeproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qtransposeproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qtransposeproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qtransposeproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qtransposeproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qtransposeproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qtransposeproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qtransposeproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qtransposeproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qtransposeproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QTransposeProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qtransposeproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = qtransposeproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qtransposeproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = qtransposeproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qtransposeproxymodel_submit_callback) {
            bool callback_ret = qtransposeproxymodel_submit_callback(this);
            return callback_ret;
        }
        return QTransposeProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qtransposeproxymodel_revert_callback) {
            qtransposeproxymodel_revert_callback(this);
            return;
        }
        QTransposeProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qtransposeproxymodel_data_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;
            QVariant* callback_ret = qtransposeproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::data(proxyIndex, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qtransposeproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qtransposeproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QTransposeProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qtransposeproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qtransposeproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTransposeProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qtransposeproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qtransposeproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qtransposeproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qtransposeproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qtransposeproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qtransposeproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        QTransposeProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qtransposeproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qtransposeproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qtransposeproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTransposeProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qtransposeproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = qtransposeproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QTransposeProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qtransposeproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QTransposeProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qtransposeproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qtransposeproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QTransposeProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qtransposeproxymodel_mimetypes_callback) {
            const char** callback_ret = qtransposeproxymodel_mimetypes_callback(this);
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
        return QTransposeProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qtransposeproxymodel_supporteddragactions_callback) {
            int callback_ret = qtransposeproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QTransposeProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qtransposeproxymodel_supporteddropactions_callback) {
            int callback_ret = qtransposeproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QTransposeProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qtransposeproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qtransposeproxymodel_rolenames_callback(this);
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
        return QTransposeProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qtransposeproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qtransposeproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTransposeProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qtransposeproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qtransposeproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QTransposeProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qtransposeproxymodel_resetinternaldata_callback) {
            qtransposeproxymodel_resetinternaldata_callback(this);
            return;
        }
        QTransposeProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtransposeproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtransposeproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTransposeProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtransposeproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtransposeproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTransposeProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtransposeproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtransposeproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        QTransposeProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtransposeproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtransposeproxymodel_childevent_callback(this, cbval1);
            return;
        }
        QTransposeProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtransposeproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            qtransposeproxymodel_customevent_callback(this, cbval1);
            return;
        }
        QTransposeProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtransposeproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtransposeproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        QTransposeProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtransposeproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtransposeproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTransposeProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTransposeProxyModel_SuperResetInternalData(QTransposeProxyModel* self);
    friend void QTransposeProxyModel_SuperTimerEvent(QTransposeProxyModel* self, QTimerEvent* event);
    friend void QTransposeProxyModel_SuperChildEvent(QTransposeProxyModel* self, QChildEvent* event);
    friend void QTransposeProxyModel_SuperCustomEvent(QTransposeProxyModel* self, QEvent* event);
    friend void QTransposeProxyModel_SuperConnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
    friend void QTransposeProxyModel_SuperDisconnectNotify(QTransposeProxyModel* self, const QMetaMethod* signal);
};

#endif
