#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKNUMBERMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKNUMBERMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNumberModel
class VirtualKNumberModel final : public KNumberModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNumberModel_MetaObject_Callback = QMetaObject* (*)(const KNumberModel*);
    using KNumberModel_Metacast_Callback = void* (*)(KNumberModel*, const char*);
    using KNumberModel_Metacall_Callback = int (*)(KNumberModel*, int, int, void**);
    using KNumberModel_RowCount_Callback = int (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_Data_Callback = QVariant* (*)(const KNumberModel*, QModelIndex*, int);
    using KNumberModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KNumberModel*);
    using KNumberModel_Index_Callback = QModelIndex* (*)(const KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_Sibling_Callback = QModelIndex* (*)(const KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_DropMimeData_Callback = bool (*)(KNumberModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNumberModel_Flags_Callback = int (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_SetData_Callback = bool (*)(KNumberModel*, QModelIndex*, QVariant*, int);
    using KNumberModel_HeaderData_Callback = QVariant* (*)(const KNumberModel*, int, int, int);
    using KNumberModel_SetHeaderData_Callback = bool (*)(KNumberModel*, int, int, QVariant*, int);
    using KNumberModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_SetItemData_Callback = bool (*)(KNumberModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KNumberModel_ClearItemData_Callback = bool (*)(KNumberModel*, QModelIndex*);
    using KNumberModel_MimeTypes_Callback = const char** (*)(const KNumberModel*);
    using KNumberModel_MimeData_Callback = QMimeData* (*)(const KNumberModel*, libqt_list /* of QModelIndex* */);
    using KNumberModel_CanDropMimeData_Callback = bool (*)(const KNumberModel*, QMimeData*, int, int, int, QModelIndex*);
    using KNumberModel_SupportedDropActions_Callback = int (*)(const KNumberModel*);
    using KNumberModel_SupportedDragActions_Callback = int (*)(const KNumberModel*);
    using KNumberModel_InsertRows_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_InsertColumns_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_RemoveRows_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_RemoveColumns_Callback = bool (*)(KNumberModel*, int, int, QModelIndex*);
    using KNumberModel_MoveRows_Callback = bool (*)(KNumberModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNumberModel_MoveColumns_Callback = bool (*)(KNumberModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KNumberModel_FetchMore_Callback = void (*)(KNumberModel*, QModelIndex*);
    using KNumberModel_CanFetchMore_Callback = bool (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_Sort_Callback = void (*)(KNumberModel*, int, int);
    using KNumberModel_Buddy_Callback = QModelIndex* (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KNumberModel*, QModelIndex*, int, QVariant*, int, int);
    using KNumberModel_Span_Callback = QSize* (*)(const KNumberModel*, QModelIndex*);
    using KNumberModel_MultiData_Callback = void (*)(const KNumberModel*, QModelIndex*, QModelRoleDataSpan*);
    using KNumberModel_Submit_Callback = bool (*)(KNumberModel*);
    using KNumberModel_Revert_Callback = void (*)(KNumberModel*);
    using KNumberModel_ResetInternalData_Callback = void (*)(KNumberModel*);
    using KNumberModel_Event_Callback = bool (*)(KNumberModel*, QEvent*);
    using KNumberModel_EventFilter_Callback = bool (*)(KNumberModel*, QObject*, QEvent*);
    using KNumberModel_TimerEvent_Callback = void (*)(KNumberModel*, QTimerEvent*);
    using KNumberModel_ChildEvent_Callback = void (*)(KNumberModel*, QChildEvent*);
    using KNumberModel_CustomEvent_Callback = void (*)(KNumberModel*, QEvent*);
    using KNumberModel_ConnectNotify_Callback = void (*)(KNumberModel*, QMetaMethod*);
    using KNumberModel_DisconnectNotify_Callback = void (*)(KNumberModel*, QMetaMethod*);
    using KNumberModel::beginInsertColumns;
    using KNumberModel::beginInsertRows;
    using KNumberModel::beginMoveColumns;
    using KNumberModel::beginMoveRows;
    using KNumberModel::beginRemoveColumns;
    using KNumberModel::beginRemoveRows;
    using KNumberModel::beginResetModel;
    using KNumberModel::changePersistentIndex;
    using KNumberModel::changePersistentIndexList;
    using KNumberModel::createIndex;
    using KNumberModel::decodeData;
    using KNumberModel::encodeData;
    using KNumberModel::endInsertColumns;
    using KNumberModel::endInsertRows;
    using KNumberModel::endMoveColumns;
    using KNumberModel::endMoveRows;
    using KNumberModel::endRemoveColumns;
    using KNumberModel::endRemoveRows;
    using KNumberModel::endResetModel;
    using KNumberModel::isSignalConnected;
    using KNumberModel::persistentIndexList;
    using KNumberModel::receivers;
    using KNumberModel::sender;
    using KNumberModel::senderSignalIndex;

    // Instance callback storage
    KNumberModel_MetaObject_Callback knumbermodel_metaobject_callback = nullptr;
    KNumberModel_Metacast_Callback knumbermodel_metacast_callback = nullptr;
    KNumberModel_Metacall_Callback knumbermodel_metacall_callback = nullptr;
    KNumberModel_RowCount_Callback knumbermodel_rowcount_callback = nullptr;
    KNumberModel_Data_Callback knumbermodel_data_callback = nullptr;
    KNumberModel_RoleNames_Callback knumbermodel_rolenames_callback = nullptr;
    KNumberModel_Index_Callback knumbermodel_index_callback = nullptr;
    KNumberModel_Sibling_Callback knumbermodel_sibling_callback = nullptr;
    KNumberModel_DropMimeData_Callback knumbermodel_dropmimedata_callback = nullptr;
    KNumberModel_Flags_Callback knumbermodel_flags_callback = nullptr;
    KNumberModel_SetData_Callback knumbermodel_setdata_callback = nullptr;
    KNumberModel_HeaderData_Callback knumbermodel_headerdata_callback = nullptr;
    KNumberModel_SetHeaderData_Callback knumbermodel_setheaderdata_callback = nullptr;
    KNumberModel_ItemData_Callback knumbermodel_itemdata_callback = nullptr;
    KNumberModel_SetItemData_Callback knumbermodel_setitemdata_callback = nullptr;
    KNumberModel_ClearItemData_Callback knumbermodel_clearitemdata_callback = nullptr;
    KNumberModel_MimeTypes_Callback knumbermodel_mimetypes_callback = nullptr;
    KNumberModel_MimeData_Callback knumbermodel_mimedata_callback = nullptr;
    KNumberModel_CanDropMimeData_Callback knumbermodel_candropmimedata_callback = nullptr;
    KNumberModel_SupportedDropActions_Callback knumbermodel_supporteddropactions_callback = nullptr;
    KNumberModel_SupportedDragActions_Callback knumbermodel_supporteddragactions_callback = nullptr;
    KNumberModel_InsertRows_Callback knumbermodel_insertrows_callback = nullptr;
    KNumberModel_InsertColumns_Callback knumbermodel_insertcolumns_callback = nullptr;
    KNumberModel_RemoveRows_Callback knumbermodel_removerows_callback = nullptr;
    KNumberModel_RemoveColumns_Callback knumbermodel_removecolumns_callback = nullptr;
    KNumberModel_MoveRows_Callback knumbermodel_moverows_callback = nullptr;
    KNumberModel_MoveColumns_Callback knumbermodel_movecolumns_callback = nullptr;
    KNumberModel_FetchMore_Callback knumbermodel_fetchmore_callback = nullptr;
    KNumberModel_CanFetchMore_Callback knumbermodel_canfetchmore_callback = nullptr;
    KNumberModel_Sort_Callback knumbermodel_sort_callback = nullptr;
    KNumberModel_Buddy_Callback knumbermodel_buddy_callback = nullptr;
    KNumberModel_Match_Callback knumbermodel_match_callback = nullptr;
    KNumberModel_Span_Callback knumbermodel_span_callback = nullptr;
    KNumberModel_MultiData_Callback knumbermodel_multidata_callback = nullptr;
    KNumberModel_Submit_Callback knumbermodel_submit_callback = nullptr;
    KNumberModel_Revert_Callback knumbermodel_revert_callback = nullptr;
    KNumberModel_ResetInternalData_Callback knumbermodel_resetinternaldata_callback = nullptr;
    KNumberModel_Event_Callback knumbermodel_event_callback = nullptr;
    KNumberModel_EventFilter_Callback knumbermodel_eventfilter_callback = nullptr;
    KNumberModel_TimerEvent_Callback knumbermodel_timerevent_callback = nullptr;
    KNumberModel_ChildEvent_Callback knumbermodel_childevent_callback = nullptr;
    KNumberModel_CustomEvent_Callback knumbermodel_customevent_callback = nullptr;
    KNumberModel_ConnectNotify_Callback knumbermodel_connectnotify_callback = nullptr;
    KNumberModel_DisconnectNotify_Callback knumbermodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNumberModel {
        using KNumberModel::childEvent;
        using KNumberModel::connectNotify;
        using KNumberModel::customEvent;
        using KNumberModel::disconnectNotify;
        using KNumberModel::resetInternalData;
        using KNumberModel::timerEvent;
    };

    VirtualKNumberModel() : KNumberModel() {};
    VirtualKNumberModel(QObject* parent) : KNumberModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knumbermodel_metaobject_callback) {
            QMetaObject* callback_ret = knumbermodel_metaobject_callback(this);
            return callback_ret;
        }
        return KNumberModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knumbermodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knumbermodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knumbermodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knumbermodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNumberModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& index) const override {
        if (knumbermodel_rowcount_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = knumbermodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNumberModel::rowCount(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (knumbermodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = knumbermodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNumberModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (knumbermodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = knumbermodel_rolenames_callback(this);
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
        return KNumberModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (knumbermodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = knumbermodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNumberModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (knumbermodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = knumbermodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNumberModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (knumbermodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knumbermodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNumberModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (knumbermodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = knumbermodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KNumberModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (knumbermodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = knumbermodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (knumbermodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = knumbermodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNumberModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (knumbermodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = knumbermodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KNumberModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (knumbermodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = knumbermodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KNumberModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (knumbermodel_setitemdata_callback) {
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
            bool callback_ret = knumbermodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNumberModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (knumbermodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = knumbermodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (knumbermodel_mimetypes_callback) {
            const char** callback_ret = knumbermodel_mimetypes_callback(this);
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
        return KNumberModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (knumbermodel_mimedata_callback) {
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
            QMimeData* callback_ret = knumbermodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KNumberModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (knumbermodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knumbermodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNumberModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (knumbermodel_supporteddropactions_callback) {
            int callback_ret = knumbermodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNumberModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (knumbermodel_supporteddragactions_callback) {
            int callback_ret = knumbermodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KNumberModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (knumbermodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knumbermodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (knumbermodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knumbermodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (knumbermodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knumbermodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (knumbermodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knumbermodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KNumberModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knumbermodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = knumbermodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNumberModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (knumbermodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = knumbermodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KNumberModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (knumbermodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            knumbermodel_fetchmore_callback(this, cbval1);
            return;
        }
        KNumberModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (knumbermodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = knumbermodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (knumbermodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            knumbermodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KNumberModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (knumbermodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = knumbermodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNumberModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (knumbermodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = knumbermodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KNumberModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (knumbermodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = knumbermodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNumberModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (knumbermodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            knumbermodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KNumberModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (knumbermodel_submit_callback) {
            bool callback_ret = knumbermodel_submit_callback(this);
            return callback_ret;
        }
        return KNumberModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (knumbermodel_revert_callback) {
            knumbermodel_revert_callback(this);
            return;
        }
        KNumberModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (knumbermodel_resetinternaldata_callback) {
            knumbermodel_resetinternaldata_callback(this);
            return;
        }
        KNumberModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knumbermodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knumbermodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNumberModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knumbermodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knumbermodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNumberModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knumbermodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knumbermodel_timerevent_callback(this, cbval1);
            return;
        }
        KNumberModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knumbermodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            knumbermodel_childevent_callback(this, cbval1);
            return;
        }
        KNumberModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knumbermodel_customevent_callback) {
            QEvent* cbval1 = event;
            knumbermodel_customevent_callback(this, cbval1);
            return;
        }
        KNumberModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knumbermodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knumbermodel_connectnotify_callback(this, cbval1);
            return;
        }
        KNumberModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knumbermodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knumbermodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNumberModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNumberModel_SuperResetInternalData(KNumberModel* self);
    friend void KNumberModel_SuperTimerEvent(KNumberModel* self, QTimerEvent* event);
    friend void KNumberModel_SuperChildEvent(KNumberModel* self, QChildEvent* event);
    friend void KNumberModel_SuperCustomEvent(KNumberModel* self, QEvent* event);
    friend void KNumberModel_SuperConnectNotify(KNumberModel* self, const QMetaMethod* signal);
    friend void KNumberModel_SuperDisconnectNotify(KNumberModel* self, const QMetaMethod* signal);
};

#endif
