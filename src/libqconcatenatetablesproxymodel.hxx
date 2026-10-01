#pragma once
#ifndef LIBQCONCATENATETABLESPROXYMODEL_HXX
#define LIBQCONCATENATETABLESPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QConcatenateTablesProxyModel
class VirtualQConcatenateTablesProxyModel final : public QConcatenateTablesProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QConcatenateTablesProxyModel_MetaObject_Callback = QMetaObject* (*)(const QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_Metacast_Callback = void* (*)(QConcatenateTablesProxyModel*, const char*);
    using QConcatenateTablesProxyModel_Metacall_Callback = int (*)(QConcatenateTablesProxyModel*, int, int, void**);
    using QConcatenateTablesProxyModel_Data_Callback = QVariant* (*)(const QConcatenateTablesProxyModel*, QModelIndex*, int);
    using QConcatenateTablesProxyModel_SetData_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, QVariant*, int);
    using QConcatenateTablesProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_SetItemData_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QConcatenateTablesProxyModel_Flags_Callback = int (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Index_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_Parent_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_RowCount_Callback = int (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_HeaderData_Callback = QVariant* (*)(const QConcatenateTablesProxyModel*, int, int, int);
    using QConcatenateTablesProxyModel_ColumnCount_Callback = int (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_MimeTypes_Callback = const char** (*)(const QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_MimeData_Callback = QMimeData* (*)(const QConcatenateTablesProxyModel*, libqt_list /* of QModelIndex* */);
    using QConcatenateTablesProxyModel_CanDropMimeData_Callback = bool (*)(const QConcatenateTablesProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_DropMimeData_Callback = bool (*)(QConcatenateTablesProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_Span_Callback = QSize* (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Sibling_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_HasChildren_Callback = bool (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_SetHeaderData_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QVariant*, int);
    using QConcatenateTablesProxyModel_ClearItemData_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_SupportedDropActions_Callback = int (*)(const QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_SupportedDragActions_Callback = int (*)(const QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_InsertRows_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_InsertColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_RemoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_RemoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, int, int, QModelIndex*);
    using QConcatenateTablesProxyModel_MoveRows_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QConcatenateTablesProxyModel_MoveColumns_Callback = bool (*)(QConcatenateTablesProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QConcatenateTablesProxyModel_FetchMore_Callback = void (*)(QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_CanFetchMore_Callback = bool (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Sort_Callback = void (*)(QConcatenateTablesProxyModel*, int, int);
    using QConcatenateTablesProxyModel_Buddy_Callback = QModelIndex* (*)(const QConcatenateTablesProxyModel*, QModelIndex*);
    using QConcatenateTablesProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QConcatenateTablesProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QConcatenateTablesProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_MultiData_Callback = void (*)(const QConcatenateTablesProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QConcatenateTablesProxyModel_Submit_Callback = bool (*)(QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_Revert_Callback = void (*)(QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_ResetInternalData_Callback = void (*)(QConcatenateTablesProxyModel*);
    using QConcatenateTablesProxyModel_Event_Callback = bool (*)(QConcatenateTablesProxyModel*, QEvent*);
    using QConcatenateTablesProxyModel_EventFilter_Callback = bool (*)(QConcatenateTablesProxyModel*, QObject*, QEvent*);
    using QConcatenateTablesProxyModel_TimerEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QTimerEvent*);
    using QConcatenateTablesProxyModel_ChildEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QChildEvent*);
    using QConcatenateTablesProxyModel_CustomEvent_Callback = void (*)(QConcatenateTablesProxyModel*, QEvent*);
    using QConcatenateTablesProxyModel_ConnectNotify_Callback = void (*)(QConcatenateTablesProxyModel*, QMetaMethod*);
    using QConcatenateTablesProxyModel_DisconnectNotify_Callback = void (*)(QConcatenateTablesProxyModel*, QMetaMethod*);
    using QConcatenateTablesProxyModel::beginInsertColumns;
    using QConcatenateTablesProxyModel::beginInsertRows;
    using QConcatenateTablesProxyModel::beginMoveColumns;
    using QConcatenateTablesProxyModel::beginMoveRows;
    using QConcatenateTablesProxyModel::beginRemoveColumns;
    using QConcatenateTablesProxyModel::beginRemoveRows;
    using QConcatenateTablesProxyModel::beginResetModel;
    using QConcatenateTablesProxyModel::changePersistentIndex;
    using QConcatenateTablesProxyModel::changePersistentIndexList;
    using QConcatenateTablesProxyModel::createIndex;
    using QConcatenateTablesProxyModel::decodeData;
    using QConcatenateTablesProxyModel::encodeData;
    using QConcatenateTablesProxyModel::endInsertColumns;
    using QConcatenateTablesProxyModel::endInsertRows;
    using QConcatenateTablesProxyModel::endMoveColumns;
    using QConcatenateTablesProxyModel::endMoveRows;
    using QConcatenateTablesProxyModel::endRemoveColumns;
    using QConcatenateTablesProxyModel::endRemoveRows;
    using QConcatenateTablesProxyModel::endResetModel;
    using QConcatenateTablesProxyModel::isSignalConnected;
    using QConcatenateTablesProxyModel::persistentIndexList;
    using QConcatenateTablesProxyModel::receivers;
    using QConcatenateTablesProxyModel::sender;
    using QConcatenateTablesProxyModel::senderSignalIndex;

    // Instance callback storage
    QConcatenateTablesProxyModel_MetaObject_Callback qconcatenatetablesproxymodel_metaobject_callback = nullptr;
    QConcatenateTablesProxyModel_Metacast_Callback qconcatenatetablesproxymodel_metacast_callback = nullptr;
    QConcatenateTablesProxyModel_Metacall_Callback qconcatenatetablesproxymodel_metacall_callback = nullptr;
    QConcatenateTablesProxyModel_Data_Callback qconcatenatetablesproxymodel_data_callback = nullptr;
    QConcatenateTablesProxyModel_SetData_Callback qconcatenatetablesproxymodel_setdata_callback = nullptr;
    QConcatenateTablesProxyModel_ItemData_Callback qconcatenatetablesproxymodel_itemdata_callback = nullptr;
    QConcatenateTablesProxyModel_SetItemData_Callback qconcatenatetablesproxymodel_setitemdata_callback = nullptr;
    QConcatenateTablesProxyModel_Flags_Callback qconcatenatetablesproxymodel_flags_callback = nullptr;
    QConcatenateTablesProxyModel_Index_Callback qconcatenatetablesproxymodel_index_callback = nullptr;
    QConcatenateTablesProxyModel_Parent_Callback qconcatenatetablesproxymodel_parent_callback = nullptr;
    QConcatenateTablesProxyModel_RowCount_Callback qconcatenatetablesproxymodel_rowcount_callback = nullptr;
    QConcatenateTablesProxyModel_HeaderData_Callback qconcatenatetablesproxymodel_headerdata_callback = nullptr;
    QConcatenateTablesProxyModel_ColumnCount_Callback qconcatenatetablesproxymodel_columncount_callback = nullptr;
    QConcatenateTablesProxyModel_MimeTypes_Callback qconcatenatetablesproxymodel_mimetypes_callback = nullptr;
    QConcatenateTablesProxyModel_MimeData_Callback qconcatenatetablesproxymodel_mimedata_callback = nullptr;
    QConcatenateTablesProxyModel_CanDropMimeData_Callback qconcatenatetablesproxymodel_candropmimedata_callback = nullptr;
    QConcatenateTablesProxyModel_DropMimeData_Callback qconcatenatetablesproxymodel_dropmimedata_callback = nullptr;
    QConcatenateTablesProxyModel_Span_Callback qconcatenatetablesproxymodel_span_callback = nullptr;
    QConcatenateTablesProxyModel_Sibling_Callback qconcatenatetablesproxymodel_sibling_callback = nullptr;
    QConcatenateTablesProxyModel_HasChildren_Callback qconcatenatetablesproxymodel_haschildren_callback = nullptr;
    QConcatenateTablesProxyModel_SetHeaderData_Callback qconcatenatetablesproxymodel_setheaderdata_callback = nullptr;
    QConcatenateTablesProxyModel_ClearItemData_Callback qconcatenatetablesproxymodel_clearitemdata_callback = nullptr;
    QConcatenateTablesProxyModel_SupportedDropActions_Callback qconcatenatetablesproxymodel_supporteddropactions_callback = nullptr;
    QConcatenateTablesProxyModel_SupportedDragActions_Callback qconcatenatetablesproxymodel_supporteddragactions_callback = nullptr;
    QConcatenateTablesProxyModel_InsertRows_Callback qconcatenatetablesproxymodel_insertrows_callback = nullptr;
    QConcatenateTablesProxyModel_InsertColumns_Callback qconcatenatetablesproxymodel_insertcolumns_callback = nullptr;
    QConcatenateTablesProxyModel_RemoveRows_Callback qconcatenatetablesproxymodel_removerows_callback = nullptr;
    QConcatenateTablesProxyModel_RemoveColumns_Callback qconcatenatetablesproxymodel_removecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_MoveRows_Callback qconcatenatetablesproxymodel_moverows_callback = nullptr;
    QConcatenateTablesProxyModel_MoveColumns_Callback qconcatenatetablesproxymodel_movecolumns_callback = nullptr;
    QConcatenateTablesProxyModel_FetchMore_Callback qconcatenatetablesproxymodel_fetchmore_callback = nullptr;
    QConcatenateTablesProxyModel_CanFetchMore_Callback qconcatenatetablesproxymodel_canfetchmore_callback = nullptr;
    QConcatenateTablesProxyModel_Sort_Callback qconcatenatetablesproxymodel_sort_callback = nullptr;
    QConcatenateTablesProxyModel_Buddy_Callback qconcatenatetablesproxymodel_buddy_callback = nullptr;
    QConcatenateTablesProxyModel_Match_Callback qconcatenatetablesproxymodel_match_callback = nullptr;
    QConcatenateTablesProxyModel_RoleNames_Callback qconcatenatetablesproxymodel_rolenames_callback = nullptr;
    QConcatenateTablesProxyModel_MultiData_Callback qconcatenatetablesproxymodel_multidata_callback = nullptr;
    QConcatenateTablesProxyModel_Submit_Callback qconcatenatetablesproxymodel_submit_callback = nullptr;
    QConcatenateTablesProxyModel_Revert_Callback qconcatenatetablesproxymodel_revert_callback = nullptr;
    QConcatenateTablesProxyModel_ResetInternalData_Callback qconcatenatetablesproxymodel_resetinternaldata_callback = nullptr;
    QConcatenateTablesProxyModel_Event_Callback qconcatenatetablesproxymodel_event_callback = nullptr;
    QConcatenateTablesProxyModel_EventFilter_Callback qconcatenatetablesproxymodel_eventfilter_callback = nullptr;
    QConcatenateTablesProxyModel_TimerEvent_Callback qconcatenatetablesproxymodel_timerevent_callback = nullptr;
    QConcatenateTablesProxyModel_ChildEvent_Callback qconcatenatetablesproxymodel_childevent_callback = nullptr;
    QConcatenateTablesProxyModel_CustomEvent_Callback qconcatenatetablesproxymodel_customevent_callback = nullptr;
    QConcatenateTablesProxyModel_ConnectNotify_Callback qconcatenatetablesproxymodel_connectnotify_callback = nullptr;
    QConcatenateTablesProxyModel_DisconnectNotify_Callback qconcatenatetablesproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QConcatenateTablesProxyModel {
        using QConcatenateTablesProxyModel::childEvent;
        using QConcatenateTablesProxyModel::connectNotify;
        using QConcatenateTablesProxyModel::customEvent;
        using QConcatenateTablesProxyModel::disconnectNotify;
        using QConcatenateTablesProxyModel::resetInternalData;
        using QConcatenateTablesProxyModel::timerEvent;
    };

    VirtualQConcatenateTablesProxyModel() : QConcatenateTablesProxyModel() {};
    VirtualQConcatenateTablesProxyModel(QObject* parent) : QConcatenateTablesProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qconcatenatetablesproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = qconcatenatetablesproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qconcatenatetablesproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qconcatenatetablesproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qconcatenatetablesproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qconcatenatetablesproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QConcatenateTablesProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qconcatenatetablesproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qconcatenatetablesproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QConcatenateTablesProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qconcatenatetablesproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qconcatenatetablesproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& proxyIndex) const override {
        if (qconcatenatetablesproxymodel_itemdata_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qconcatenatetablesproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QConcatenateTablesProxyModel::itemData(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qconcatenatetablesproxymodel_setitemdata_callback) {
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
            bool callback_ret = qconcatenatetablesproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qconcatenatetablesproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QConcatenateTablesProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qconcatenatetablesproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QConcatenateTablesProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_parent_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qconcatenatetablesproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QConcatenateTablesProxyModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qconcatenatetablesproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QConcatenateTablesProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qconcatenatetablesproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qconcatenatetablesproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QConcatenateTablesProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qconcatenatetablesproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QConcatenateTablesProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qconcatenatetablesproxymodel_mimetypes_callback) {
            const char** callback_ret = qconcatenatetablesproxymodel_mimetypes_callback(this);
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
        return QConcatenateTablesProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qconcatenatetablesproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = qconcatenatetablesproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qconcatenatetablesproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QConcatenateTablesProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qconcatenatetablesproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qconcatenatetablesproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QConcatenateTablesProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qconcatenatetablesproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qconcatenatetablesproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qconcatenatetablesproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qconcatenatetablesproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qconcatenatetablesproxymodel_supporteddropactions_callback) {
            int callback_ret = qconcatenatetablesproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QConcatenateTablesProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qconcatenatetablesproxymodel_supporteddragactions_callback) {
            int callback_ret = qconcatenatetablesproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QConcatenateTablesProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qconcatenatetablesproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qconcatenatetablesproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qconcatenatetablesproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qconcatenatetablesproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qconcatenatetablesproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qconcatenatetablesproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        QConcatenateTablesProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qconcatenatetablesproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qconcatenatetablesproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qconcatenatetablesproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qconcatenatetablesproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QConcatenateTablesProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qconcatenatetablesproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qconcatenatetablesproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QConcatenateTablesProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qconcatenatetablesproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qconcatenatetablesproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QConcatenateTablesProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qconcatenatetablesproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qconcatenatetablesproxymodel_rolenames_callback(this);
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
        return QConcatenateTablesProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qconcatenatetablesproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qconcatenatetablesproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QConcatenateTablesProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qconcatenatetablesproxymodel_submit_callback) {
            bool callback_ret = qconcatenatetablesproxymodel_submit_callback(this);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qconcatenatetablesproxymodel_revert_callback) {
            qconcatenatetablesproxymodel_revert_callback(this);
            return;
        }
        QConcatenateTablesProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qconcatenatetablesproxymodel_resetinternaldata_callback) {
            qconcatenatetablesproxymodel_resetinternaldata_callback(this);
            return;
        }
        QConcatenateTablesProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qconcatenatetablesproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qconcatenatetablesproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qconcatenatetablesproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qconcatenatetablesproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QConcatenateTablesProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qconcatenatetablesproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qconcatenatetablesproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        QConcatenateTablesProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qconcatenatetablesproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qconcatenatetablesproxymodel_childevent_callback(this, cbval1);
            return;
        }
        QConcatenateTablesProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qconcatenatetablesproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            qconcatenatetablesproxymodel_customevent_callback(this, cbval1);
            return;
        }
        QConcatenateTablesProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qconcatenatetablesproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qconcatenatetablesproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        QConcatenateTablesProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qconcatenatetablesproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qconcatenatetablesproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QConcatenateTablesProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QConcatenateTablesProxyModel_SuperResetInternalData(QConcatenateTablesProxyModel* self);
    friend void QConcatenateTablesProxyModel_SuperTimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event);
    friend void QConcatenateTablesProxyModel_SuperChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event);
    friend void QConcatenateTablesProxyModel_SuperCustomEvent(QConcatenateTablesProxyModel* self, QEvent* event);
    friend void QConcatenateTablesProxyModel_SuperConnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
    friend void QConcatenateTablesProxyModel_SuperDisconnectNotify(QConcatenateTablesProxyModel* self, const QMetaMethod* signal);
};

#endif
