#pragma once
#ifndef PDF_LIBQPDFLINKMODEL_HXX
#define PDF_LIBQPDFLINKMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfLinkModel
class VirtualQPdfLinkModel final : public QPdfLinkModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfLinkModel_MetaObject_Callback = QMetaObject* (*)(const QPdfLinkModel*);
    using QPdfLinkModel_Metacast_Callback = void* (*)(QPdfLinkModel*, const char*);
    using QPdfLinkModel_Metacall_Callback = int (*)(QPdfLinkModel*, int, int, void**);
    using QPdfLinkModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QPdfLinkModel*);
    using QPdfLinkModel_RowCount_Callback = int (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_Data_Callback = QVariant* (*)(const QPdfLinkModel*, QModelIndex*, int);
    using QPdfLinkModel_Index_Callback = QModelIndex* (*)(const QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_Sibling_Callback = QModelIndex* (*)(const QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_DropMimeData_Callback = bool (*)(QPdfLinkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfLinkModel_Flags_Callback = int (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_SetData_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, QVariant*, int);
    using QPdfLinkModel_HeaderData_Callback = QVariant* (*)(const QPdfLinkModel*, int, int, int);
    using QPdfLinkModel_SetHeaderData_Callback = bool (*)(QPdfLinkModel*, int, int, QVariant*, int);
    using QPdfLinkModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_SetItemData_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QPdfLinkModel_ClearItemData_Callback = bool (*)(QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_MimeTypes_Callback = const char** (*)(const QPdfLinkModel*);
    using QPdfLinkModel_MimeData_Callback = QMimeData* (*)(const QPdfLinkModel*, libqt_list /* of QModelIndex* */);
    using QPdfLinkModel_CanDropMimeData_Callback = bool (*)(const QPdfLinkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfLinkModel_SupportedDropActions_Callback = int (*)(const QPdfLinkModel*);
    using QPdfLinkModel_SupportedDragActions_Callback = int (*)(const QPdfLinkModel*);
    using QPdfLinkModel_InsertRows_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_InsertColumns_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_RemoveRows_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_RemoveColumns_Callback = bool (*)(QPdfLinkModel*, int, int, QModelIndex*);
    using QPdfLinkModel_MoveRows_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfLinkModel_MoveColumns_Callback = bool (*)(QPdfLinkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfLinkModel_FetchMore_Callback = void (*)(QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_CanFetchMore_Callback = bool (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_Sort_Callback = void (*)(QPdfLinkModel*, int, int);
    using QPdfLinkModel_Buddy_Callback = QModelIndex* (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QPdfLinkModel*, QModelIndex*, int, QVariant*, int, int);
    using QPdfLinkModel_Span_Callback = QSize* (*)(const QPdfLinkModel*, QModelIndex*);
    using QPdfLinkModel_MultiData_Callback = void (*)(const QPdfLinkModel*, QModelIndex*, QModelRoleDataSpan*);
    using QPdfLinkModel_Submit_Callback = bool (*)(QPdfLinkModel*);
    using QPdfLinkModel_Revert_Callback = void (*)(QPdfLinkModel*);
    using QPdfLinkModel_ResetInternalData_Callback = void (*)(QPdfLinkModel*);
    using QPdfLinkModel_Event_Callback = bool (*)(QPdfLinkModel*, QEvent*);
    using QPdfLinkModel_EventFilter_Callback = bool (*)(QPdfLinkModel*, QObject*, QEvent*);
    using QPdfLinkModel_TimerEvent_Callback = void (*)(QPdfLinkModel*, QTimerEvent*);
    using QPdfLinkModel_ChildEvent_Callback = void (*)(QPdfLinkModel*, QChildEvent*);
    using QPdfLinkModel_CustomEvent_Callback = void (*)(QPdfLinkModel*, QEvent*);
    using QPdfLinkModel_ConnectNotify_Callback = void (*)(QPdfLinkModel*, QMetaMethod*);
    using QPdfLinkModel_DisconnectNotify_Callback = void (*)(QPdfLinkModel*, QMetaMethod*);
    using QPdfLinkModel::beginInsertColumns;
    using QPdfLinkModel::beginInsertRows;
    using QPdfLinkModel::beginMoveColumns;
    using QPdfLinkModel::beginMoveRows;
    using QPdfLinkModel::beginRemoveColumns;
    using QPdfLinkModel::beginRemoveRows;
    using QPdfLinkModel::beginResetModel;
    using QPdfLinkModel::changePersistentIndex;
    using QPdfLinkModel::changePersistentIndexList;
    using QPdfLinkModel::createIndex;
    using QPdfLinkModel::decodeData;
    using QPdfLinkModel::encodeData;
    using QPdfLinkModel::endInsertColumns;
    using QPdfLinkModel::endInsertRows;
    using QPdfLinkModel::endMoveColumns;
    using QPdfLinkModel::endMoveRows;
    using QPdfLinkModel::endRemoveColumns;
    using QPdfLinkModel::endRemoveRows;
    using QPdfLinkModel::endResetModel;
    using QPdfLinkModel::isSignalConnected;
    using QPdfLinkModel::persistentIndexList;
    using QPdfLinkModel::receivers;
    using QPdfLinkModel::sender;
    using QPdfLinkModel::senderSignalIndex;

    // Instance callback storage
    QPdfLinkModel_MetaObject_Callback qpdflinkmodel_metaobject_callback = nullptr;
    QPdfLinkModel_Metacast_Callback qpdflinkmodel_metacast_callback = nullptr;
    QPdfLinkModel_Metacall_Callback qpdflinkmodel_metacall_callback = nullptr;
    QPdfLinkModel_RoleNames_Callback qpdflinkmodel_rolenames_callback = nullptr;
    QPdfLinkModel_RowCount_Callback qpdflinkmodel_rowcount_callback = nullptr;
    QPdfLinkModel_Data_Callback qpdflinkmodel_data_callback = nullptr;
    QPdfLinkModel_Index_Callback qpdflinkmodel_index_callback = nullptr;
    QPdfLinkModel_Sibling_Callback qpdflinkmodel_sibling_callback = nullptr;
    QPdfLinkModel_DropMimeData_Callback qpdflinkmodel_dropmimedata_callback = nullptr;
    QPdfLinkModel_Flags_Callback qpdflinkmodel_flags_callback = nullptr;
    QPdfLinkModel_SetData_Callback qpdflinkmodel_setdata_callback = nullptr;
    QPdfLinkModel_HeaderData_Callback qpdflinkmodel_headerdata_callback = nullptr;
    QPdfLinkModel_SetHeaderData_Callback qpdflinkmodel_setheaderdata_callback = nullptr;
    QPdfLinkModel_ItemData_Callback qpdflinkmodel_itemdata_callback = nullptr;
    QPdfLinkModel_SetItemData_Callback qpdflinkmodel_setitemdata_callback = nullptr;
    QPdfLinkModel_ClearItemData_Callback qpdflinkmodel_clearitemdata_callback = nullptr;
    QPdfLinkModel_MimeTypes_Callback qpdflinkmodel_mimetypes_callback = nullptr;
    QPdfLinkModel_MimeData_Callback qpdflinkmodel_mimedata_callback = nullptr;
    QPdfLinkModel_CanDropMimeData_Callback qpdflinkmodel_candropmimedata_callback = nullptr;
    QPdfLinkModel_SupportedDropActions_Callback qpdflinkmodel_supporteddropactions_callback = nullptr;
    QPdfLinkModel_SupportedDragActions_Callback qpdflinkmodel_supporteddragactions_callback = nullptr;
    QPdfLinkModel_InsertRows_Callback qpdflinkmodel_insertrows_callback = nullptr;
    QPdfLinkModel_InsertColumns_Callback qpdflinkmodel_insertcolumns_callback = nullptr;
    QPdfLinkModel_RemoveRows_Callback qpdflinkmodel_removerows_callback = nullptr;
    QPdfLinkModel_RemoveColumns_Callback qpdflinkmodel_removecolumns_callback = nullptr;
    QPdfLinkModel_MoveRows_Callback qpdflinkmodel_moverows_callback = nullptr;
    QPdfLinkModel_MoveColumns_Callback qpdflinkmodel_movecolumns_callback = nullptr;
    QPdfLinkModel_FetchMore_Callback qpdflinkmodel_fetchmore_callback = nullptr;
    QPdfLinkModel_CanFetchMore_Callback qpdflinkmodel_canfetchmore_callback = nullptr;
    QPdfLinkModel_Sort_Callback qpdflinkmodel_sort_callback = nullptr;
    QPdfLinkModel_Buddy_Callback qpdflinkmodel_buddy_callback = nullptr;
    QPdfLinkModel_Match_Callback qpdflinkmodel_match_callback = nullptr;
    QPdfLinkModel_Span_Callback qpdflinkmodel_span_callback = nullptr;
    QPdfLinkModel_MultiData_Callback qpdflinkmodel_multidata_callback = nullptr;
    QPdfLinkModel_Submit_Callback qpdflinkmodel_submit_callback = nullptr;
    QPdfLinkModel_Revert_Callback qpdflinkmodel_revert_callback = nullptr;
    QPdfLinkModel_ResetInternalData_Callback qpdflinkmodel_resetinternaldata_callback = nullptr;
    QPdfLinkModel_Event_Callback qpdflinkmodel_event_callback = nullptr;
    QPdfLinkModel_EventFilter_Callback qpdflinkmodel_eventfilter_callback = nullptr;
    QPdfLinkModel_TimerEvent_Callback qpdflinkmodel_timerevent_callback = nullptr;
    QPdfLinkModel_ChildEvent_Callback qpdflinkmodel_childevent_callback = nullptr;
    QPdfLinkModel_CustomEvent_Callback qpdflinkmodel_customevent_callback = nullptr;
    QPdfLinkModel_ConnectNotify_Callback qpdflinkmodel_connectnotify_callback = nullptr;
    QPdfLinkModel_DisconnectNotify_Callback qpdflinkmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfLinkModel {
        using QPdfLinkModel::childEvent;
        using QPdfLinkModel::connectNotify;
        using QPdfLinkModel::customEvent;
        using QPdfLinkModel::disconnectNotify;
        using QPdfLinkModel::resetInternalData;
        using QPdfLinkModel::timerEvent;
    };

    VirtualQPdfLinkModel() : QPdfLinkModel() {};
    VirtualQPdfLinkModel(QObject* parent) : QPdfLinkModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdflinkmodel_metaobject_callback) {
            QMetaObject* callback_ret = qpdflinkmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfLinkModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdflinkmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdflinkmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfLinkModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdflinkmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdflinkmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfLinkModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdflinkmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qpdflinkmodel_rolenames_callback(this);
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
        return QPdfLinkModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdflinkmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qpdflinkmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfLinkModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdflinkmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qpdflinkmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfLinkModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdflinkmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qpdflinkmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfLinkModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdflinkmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qpdflinkmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfLinkModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdflinkmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdflinkmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfLinkModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdflinkmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qpdflinkmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QPdfLinkModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdflinkmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qpdflinkmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfLinkModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdflinkmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qpdflinkmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfLinkModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdflinkmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qpdflinkmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QPdfLinkModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdflinkmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qpdflinkmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QPdfLinkModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdflinkmodel_setitemdata_callback) {
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
            bool callback_ret = qpdflinkmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfLinkModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdflinkmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qpdflinkmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfLinkModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qpdflinkmodel_mimetypes_callback) {
            const char** callback_ret = qpdflinkmodel_mimetypes_callback(this);
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
        return QPdfLinkModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qpdflinkmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qpdflinkmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QPdfLinkModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdflinkmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdflinkmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfLinkModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdflinkmodel_supporteddropactions_callback) {
            int callback_ret = qpdflinkmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfLinkModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdflinkmodel_supporteddragactions_callback) {
            int callback_ret = qpdflinkmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfLinkModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdflinkmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfLinkModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdflinkmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfLinkModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdflinkmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfLinkModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdflinkmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdflinkmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfLinkModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdflinkmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qpdflinkmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfLinkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdflinkmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qpdflinkmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfLinkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdflinkmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qpdflinkmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QPdfLinkModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdflinkmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdflinkmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfLinkModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdflinkmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qpdflinkmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QPdfLinkModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdflinkmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qpdflinkmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfLinkModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdflinkmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qpdflinkmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QPdfLinkModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdflinkmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qpdflinkmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfLinkModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdflinkmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qpdflinkmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QPdfLinkModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdflinkmodel_submit_callback) {
            bool callback_ret = qpdflinkmodel_submit_callback(this);
            return callback_ret;
        }
        return QPdfLinkModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdflinkmodel_revert_callback) {
            qpdflinkmodel_revert_callback(this);
            return;
        }
        QPdfLinkModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdflinkmodel_resetinternaldata_callback) {
            qpdflinkmodel_resetinternaldata_callback(this);
            return;
        }
        QPdfLinkModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdflinkmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdflinkmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfLinkModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdflinkmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdflinkmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfLinkModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdflinkmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdflinkmodel_timerevent_callback(this, cbval1);
            return;
        }
        QPdfLinkModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdflinkmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdflinkmodel_childevent_callback(this, cbval1);
            return;
        }
        QPdfLinkModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdflinkmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qpdflinkmodel_customevent_callback(this, cbval1);
            return;
        }
        QPdfLinkModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdflinkmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdflinkmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfLinkModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdflinkmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdflinkmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfLinkModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPdfLinkModel_SuperResetInternalData(QPdfLinkModel* self);
    friend void QPdfLinkModel_SuperTimerEvent(QPdfLinkModel* self, QTimerEvent* event);
    friend void QPdfLinkModel_SuperChildEvent(QPdfLinkModel* self, QChildEvent* event);
    friend void QPdfLinkModel_SuperCustomEvent(QPdfLinkModel* self, QEvent* event);
    friend void QPdfLinkModel_SuperConnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
    friend void QPdfLinkModel_SuperDisconnectNotify(QPdfLinkModel* self, const QMetaMethod* signal);
};

#endif
