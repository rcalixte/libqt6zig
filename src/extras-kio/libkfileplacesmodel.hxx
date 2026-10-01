#pragma once
#ifndef EXTRAS_KIO_LIBKFILEPLACESMODEL_HXX
#define EXTRAS_KIO_LIBKFILEPLACESMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePlacesModel
class VirtualKFilePlacesModel final : public KFilePlacesModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFilePlacesModel_MetaObject_Callback = QMetaObject* (*)(const KFilePlacesModel*);
    using KFilePlacesModel_Metacast_Callback = void* (*)(KFilePlacesModel*, const char*);
    using KFilePlacesModel_Metacall_Callback = int (*)(KFilePlacesModel*, int, int, void**);
    using KFilePlacesModel_Data_Callback = QVariant* (*)(const KFilePlacesModel*, QModelIndex*, int);
    using KFilePlacesModel_Index_Callback = QModelIndex* (*)(const KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_Parent_Callback = QModelIndex* (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KFilePlacesModel*);
    using KFilePlacesModel_RowCount_Callback = int (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_ColumnCount_Callback = int (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_SupportedDropActions_Callback = int (*)(const KFilePlacesModel*);
    using KFilePlacesModel_Flags_Callback = int (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_MimeTypes_Callback = const char** (*)(const KFilePlacesModel*);
    using KFilePlacesModel_MimeData_Callback = QMimeData* (*)(const KFilePlacesModel*, libqt_list /* of QModelIndex* */);
    using KFilePlacesModel_DropMimeData_Callback = bool (*)(KFilePlacesModel*, QMimeData*, int, int, int, QModelIndex*);
    using KFilePlacesModel_Sibling_Callback = QModelIndex* (*)(const KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_HasChildren_Callback = bool (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_SetData_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, QVariant*, int);
    using KFilePlacesModel_HeaderData_Callback = QVariant* (*)(const KFilePlacesModel*, int, int, int);
    using KFilePlacesModel_SetHeaderData_Callback = bool (*)(KFilePlacesModel*, int, int, QVariant*, int);
    using KFilePlacesModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_SetItemData_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KFilePlacesModel_ClearItemData_Callback = bool (*)(KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_CanDropMimeData_Callback = bool (*)(const KFilePlacesModel*, QMimeData*, int, int, int, QModelIndex*);
    using KFilePlacesModel_SupportedDragActions_Callback = int (*)(const KFilePlacesModel*);
    using KFilePlacesModel_InsertRows_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_InsertColumns_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_RemoveRows_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_RemoveColumns_Callback = bool (*)(KFilePlacesModel*, int, int, QModelIndex*);
    using KFilePlacesModel_MoveRows_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KFilePlacesModel_MoveColumns_Callback = bool (*)(KFilePlacesModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KFilePlacesModel_FetchMore_Callback = void (*)(KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_CanFetchMore_Callback = bool (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_Sort_Callback = void (*)(KFilePlacesModel*, int, int);
    using KFilePlacesModel_Buddy_Callback = QModelIndex* (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KFilePlacesModel*, QModelIndex*, int, QVariant*, int, int);
    using KFilePlacesModel_Span_Callback = QSize* (*)(const KFilePlacesModel*, QModelIndex*);
    using KFilePlacesModel_MultiData_Callback = void (*)(const KFilePlacesModel*, QModelIndex*, QModelRoleDataSpan*);
    using KFilePlacesModel_Submit_Callback = bool (*)(KFilePlacesModel*);
    using KFilePlacesModel_Revert_Callback = void (*)(KFilePlacesModel*);
    using KFilePlacesModel_ResetInternalData_Callback = void (*)(KFilePlacesModel*);
    using KFilePlacesModel_Event_Callback = bool (*)(KFilePlacesModel*, QEvent*);
    using KFilePlacesModel_EventFilter_Callback = bool (*)(KFilePlacesModel*, QObject*, QEvent*);
    using KFilePlacesModel_TimerEvent_Callback = void (*)(KFilePlacesModel*, QTimerEvent*);
    using KFilePlacesModel_ChildEvent_Callback = void (*)(KFilePlacesModel*, QChildEvent*);
    using KFilePlacesModel_CustomEvent_Callback = void (*)(KFilePlacesModel*, QEvent*);
    using KFilePlacesModel_ConnectNotify_Callback = void (*)(KFilePlacesModel*, QMetaMethod*);
    using KFilePlacesModel_DisconnectNotify_Callback = void (*)(KFilePlacesModel*, QMetaMethod*);
    using KFilePlacesModel::beginInsertColumns;
    using KFilePlacesModel::beginInsertRows;
    using KFilePlacesModel::beginMoveColumns;
    using KFilePlacesModel::beginMoveRows;
    using KFilePlacesModel::beginRemoveColumns;
    using KFilePlacesModel::beginRemoveRows;
    using KFilePlacesModel::beginResetModel;
    using KFilePlacesModel::changePersistentIndex;
    using KFilePlacesModel::changePersistentIndexList;
    using KFilePlacesModel::createIndex;
    using KFilePlacesModel::decodeData;
    using KFilePlacesModel::encodeData;
    using KFilePlacesModel::endInsertColumns;
    using KFilePlacesModel::endInsertRows;
    using KFilePlacesModel::endMoveColumns;
    using KFilePlacesModel::endMoveRows;
    using KFilePlacesModel::endRemoveColumns;
    using KFilePlacesModel::endRemoveRows;
    using KFilePlacesModel::endResetModel;
    using KFilePlacesModel::isSignalConnected;
    using KFilePlacesModel::persistentIndexList;
    using KFilePlacesModel::receivers;
    using KFilePlacesModel::sender;
    using KFilePlacesModel::senderSignalIndex;

    // Instance callback storage
    KFilePlacesModel_MetaObject_Callback kfileplacesmodel_metaobject_callback = nullptr;
    KFilePlacesModel_Metacast_Callback kfileplacesmodel_metacast_callback = nullptr;
    KFilePlacesModel_Metacall_Callback kfileplacesmodel_metacall_callback = nullptr;
    KFilePlacesModel_Data_Callback kfileplacesmodel_data_callback = nullptr;
    KFilePlacesModel_Index_Callback kfileplacesmodel_index_callback = nullptr;
    KFilePlacesModel_Parent_Callback kfileplacesmodel_parent_callback = nullptr;
    KFilePlacesModel_RoleNames_Callback kfileplacesmodel_rolenames_callback = nullptr;
    KFilePlacesModel_RowCount_Callback kfileplacesmodel_rowcount_callback = nullptr;
    KFilePlacesModel_ColumnCount_Callback kfileplacesmodel_columncount_callback = nullptr;
    KFilePlacesModel_SupportedDropActions_Callback kfileplacesmodel_supporteddropactions_callback = nullptr;
    KFilePlacesModel_Flags_Callback kfileplacesmodel_flags_callback = nullptr;
    KFilePlacesModel_MimeTypes_Callback kfileplacesmodel_mimetypes_callback = nullptr;
    KFilePlacesModel_MimeData_Callback kfileplacesmodel_mimedata_callback = nullptr;
    KFilePlacesModel_DropMimeData_Callback kfileplacesmodel_dropmimedata_callback = nullptr;
    KFilePlacesModel_Sibling_Callback kfileplacesmodel_sibling_callback = nullptr;
    KFilePlacesModel_HasChildren_Callback kfileplacesmodel_haschildren_callback = nullptr;
    KFilePlacesModel_SetData_Callback kfileplacesmodel_setdata_callback = nullptr;
    KFilePlacesModel_HeaderData_Callback kfileplacesmodel_headerdata_callback = nullptr;
    KFilePlacesModel_SetHeaderData_Callback kfileplacesmodel_setheaderdata_callback = nullptr;
    KFilePlacesModel_ItemData_Callback kfileplacesmodel_itemdata_callback = nullptr;
    KFilePlacesModel_SetItemData_Callback kfileplacesmodel_setitemdata_callback = nullptr;
    KFilePlacesModel_ClearItemData_Callback kfileplacesmodel_clearitemdata_callback = nullptr;
    KFilePlacesModel_CanDropMimeData_Callback kfileplacesmodel_candropmimedata_callback = nullptr;
    KFilePlacesModel_SupportedDragActions_Callback kfileplacesmodel_supporteddragactions_callback = nullptr;
    KFilePlacesModel_InsertRows_Callback kfileplacesmodel_insertrows_callback = nullptr;
    KFilePlacesModel_InsertColumns_Callback kfileplacesmodel_insertcolumns_callback = nullptr;
    KFilePlacesModel_RemoveRows_Callback kfileplacesmodel_removerows_callback = nullptr;
    KFilePlacesModel_RemoveColumns_Callback kfileplacesmodel_removecolumns_callback = nullptr;
    KFilePlacesModel_MoveRows_Callback kfileplacesmodel_moverows_callback = nullptr;
    KFilePlacesModel_MoveColumns_Callback kfileplacesmodel_movecolumns_callback = nullptr;
    KFilePlacesModel_FetchMore_Callback kfileplacesmodel_fetchmore_callback = nullptr;
    KFilePlacesModel_CanFetchMore_Callback kfileplacesmodel_canfetchmore_callback = nullptr;
    KFilePlacesModel_Sort_Callback kfileplacesmodel_sort_callback = nullptr;
    KFilePlacesModel_Buddy_Callback kfileplacesmodel_buddy_callback = nullptr;
    KFilePlacesModel_Match_Callback kfileplacesmodel_match_callback = nullptr;
    KFilePlacesModel_Span_Callback kfileplacesmodel_span_callback = nullptr;
    KFilePlacesModel_MultiData_Callback kfileplacesmodel_multidata_callback = nullptr;
    KFilePlacesModel_Submit_Callback kfileplacesmodel_submit_callback = nullptr;
    KFilePlacesModel_Revert_Callback kfileplacesmodel_revert_callback = nullptr;
    KFilePlacesModel_ResetInternalData_Callback kfileplacesmodel_resetinternaldata_callback = nullptr;
    KFilePlacesModel_Event_Callback kfileplacesmodel_event_callback = nullptr;
    KFilePlacesModel_EventFilter_Callback kfileplacesmodel_eventfilter_callback = nullptr;
    KFilePlacesModel_TimerEvent_Callback kfileplacesmodel_timerevent_callback = nullptr;
    KFilePlacesModel_ChildEvent_Callback kfileplacesmodel_childevent_callback = nullptr;
    KFilePlacesModel_CustomEvent_Callback kfileplacesmodel_customevent_callback = nullptr;
    KFilePlacesModel_ConnectNotify_Callback kfileplacesmodel_connectnotify_callback = nullptr;
    KFilePlacesModel_DisconnectNotify_Callback kfileplacesmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFilePlacesModel {
        using KFilePlacesModel::childEvent;
        using KFilePlacesModel::connectNotify;
        using KFilePlacesModel::customEvent;
        using KFilePlacesModel::disconnectNotify;
        using KFilePlacesModel::resetInternalData;
        using KFilePlacesModel::timerEvent;
    };

    VirtualKFilePlacesModel() : KFilePlacesModel() {};
    VirtualKFilePlacesModel(QObject* parent) : KFilePlacesModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfileplacesmodel_metaobject_callback) {
            QMetaObject* callback_ret = kfileplacesmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KFilePlacesModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileplacesmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfileplacesmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplacesmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfileplacesmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kfileplacesmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kfileplacesmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kfileplacesmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kfileplacesmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kfileplacesmodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = kfileplacesmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kfileplacesmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kfileplacesmodel_rolenames_callback(this);
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
        return KFilePlacesModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kfileplacesmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kfileplacesmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kfileplacesmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kfileplacesmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlacesModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kfileplacesmodel_supporteddropactions_callback) {
            int callback_ret = kfileplacesmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KFilePlacesModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kfileplacesmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kfileplacesmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KFilePlacesModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kfileplacesmodel_mimetypes_callback) {
            const char** callback_ret = kfileplacesmodel_mimetypes_callback(this);
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
        return KFilePlacesModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kfileplacesmodel_mimedata_callback) {
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
            QMimeData* callback_ret = kfileplacesmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KFilePlacesModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kfileplacesmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KFilePlacesModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kfileplacesmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kfileplacesmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kfileplacesmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kfileplacesmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kfileplacesmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFilePlacesModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kfileplacesmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kfileplacesmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kfileplacesmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kfileplacesmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KFilePlacesModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kfileplacesmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kfileplacesmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KFilePlacesModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kfileplacesmodel_setitemdata_callback) {
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
            bool callback_ret = kfileplacesmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFilePlacesModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kfileplacesmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kfileplacesmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kfileplacesmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KFilePlacesModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kfileplacesmodel_supporteddragactions_callback) {
            int callback_ret = kfileplacesmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KFilePlacesModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFilePlacesModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFilePlacesModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFilePlacesModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kfileplacesmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KFilePlacesModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kfileplacesmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kfileplacesmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KFilePlacesModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kfileplacesmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kfileplacesmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KFilePlacesModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kfileplacesmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kfileplacesmodel_fetchmore_callback(this, cbval1);
            return;
        }
        KFilePlacesModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kfileplacesmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kfileplacesmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kfileplacesmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kfileplacesmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kfileplacesmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kfileplacesmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kfileplacesmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kfileplacesmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KFilePlacesModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kfileplacesmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kfileplacesmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFilePlacesModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kfileplacesmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kfileplacesmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KFilePlacesModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kfileplacesmodel_submit_callback) {
            bool callback_ret = kfileplacesmodel_submit_callback(this);
            return callback_ret;
        }
        return KFilePlacesModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kfileplacesmodel_revert_callback) {
            kfileplacesmodel_revert_callback(this);
            return;
        }
        KFilePlacesModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kfileplacesmodel_resetinternaldata_callback) {
            kfileplacesmodel_resetinternaldata_callback(this);
            return;
        }
        KFilePlacesModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileplacesmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfileplacesmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFilePlacesModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfileplacesmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfileplacesmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFilePlacesModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileplacesmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfileplacesmodel_timerevent_callback(this, cbval1);
            return;
        }
        KFilePlacesModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplacesmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfileplacesmodel_childevent_callback(this, cbval1);
            return;
        }
        KFilePlacesModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplacesmodel_customevent_callback) {
            QEvent* cbval1 = event;
            kfileplacesmodel_customevent_callback(this, cbval1);
            return;
        }
        KFilePlacesModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplacesmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileplacesmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KFilePlacesModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplacesmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfileplacesmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFilePlacesModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFilePlacesModel_SuperResetInternalData(KFilePlacesModel* self);
    friend void KFilePlacesModel_SuperTimerEvent(KFilePlacesModel* self, QTimerEvent* event);
    friend void KFilePlacesModel_SuperChildEvent(KFilePlacesModel* self, QChildEvent* event);
    friend void KFilePlacesModel_SuperCustomEvent(KFilePlacesModel* self, QEvent* event);
    friend void KFilePlacesModel_SuperConnectNotify(KFilePlacesModel* self, const QMetaMethod* signal);
    friend void KFilePlacesModel_SuperDisconnectNotify(KFilePlacesModel* self, const QMetaMethod* signal);
};

#endif
