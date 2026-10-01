#pragma once
#ifndef PDF_LIBQPDFSEARCHMODEL_HXX
#define PDF_LIBQPDFSEARCHMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfSearchModel
class VirtualQPdfSearchModel final : public QPdfSearchModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfSearchModel_MetaObject_Callback = QMetaObject* (*)(const QPdfSearchModel*);
    using QPdfSearchModel_Metacast_Callback = void* (*)(QPdfSearchModel*, const char*);
    using QPdfSearchModel_Metacall_Callback = int (*)(QPdfSearchModel*, int, int, void**);
    using QPdfSearchModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QPdfSearchModel*);
    using QPdfSearchModel_RowCount_Callback = int (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_Data_Callback = QVariant* (*)(const QPdfSearchModel*, QModelIndex*, int);
    using QPdfSearchModel_TimerEvent_Callback = void (*)(QPdfSearchModel*, QTimerEvent*);
    using QPdfSearchModel_Index_Callback = QModelIndex* (*)(const QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_Sibling_Callback = QModelIndex* (*)(const QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_DropMimeData_Callback = bool (*)(QPdfSearchModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfSearchModel_Flags_Callback = int (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_SetData_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, QVariant*, int);
    using QPdfSearchModel_HeaderData_Callback = QVariant* (*)(const QPdfSearchModel*, int, int, int);
    using QPdfSearchModel_SetHeaderData_Callback = bool (*)(QPdfSearchModel*, int, int, QVariant*, int);
    using QPdfSearchModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_SetItemData_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QPdfSearchModel_ClearItemData_Callback = bool (*)(QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_MimeTypes_Callback = const char** (*)(const QPdfSearchModel*);
    using QPdfSearchModel_MimeData_Callback = QMimeData* (*)(const QPdfSearchModel*, libqt_list /* of QModelIndex* */);
    using QPdfSearchModel_CanDropMimeData_Callback = bool (*)(const QPdfSearchModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfSearchModel_SupportedDropActions_Callback = int (*)(const QPdfSearchModel*);
    using QPdfSearchModel_SupportedDragActions_Callback = int (*)(const QPdfSearchModel*);
    using QPdfSearchModel_InsertRows_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_InsertColumns_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_RemoveRows_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_RemoveColumns_Callback = bool (*)(QPdfSearchModel*, int, int, QModelIndex*);
    using QPdfSearchModel_MoveRows_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfSearchModel_MoveColumns_Callback = bool (*)(QPdfSearchModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfSearchModel_FetchMore_Callback = void (*)(QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_CanFetchMore_Callback = bool (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_Sort_Callback = void (*)(QPdfSearchModel*, int, int);
    using QPdfSearchModel_Buddy_Callback = QModelIndex* (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QPdfSearchModel*, QModelIndex*, int, QVariant*, int, int);
    using QPdfSearchModel_Span_Callback = QSize* (*)(const QPdfSearchModel*, QModelIndex*);
    using QPdfSearchModel_MultiData_Callback = void (*)(const QPdfSearchModel*, QModelIndex*, QModelRoleDataSpan*);
    using QPdfSearchModel_Submit_Callback = bool (*)(QPdfSearchModel*);
    using QPdfSearchModel_Revert_Callback = void (*)(QPdfSearchModel*);
    using QPdfSearchModel_ResetInternalData_Callback = void (*)(QPdfSearchModel*);
    using QPdfSearchModel_Event_Callback = bool (*)(QPdfSearchModel*, QEvent*);
    using QPdfSearchModel_EventFilter_Callback = bool (*)(QPdfSearchModel*, QObject*, QEvent*);
    using QPdfSearchModel_ChildEvent_Callback = void (*)(QPdfSearchModel*, QChildEvent*);
    using QPdfSearchModel_CustomEvent_Callback = void (*)(QPdfSearchModel*, QEvent*);
    using QPdfSearchModel_ConnectNotify_Callback = void (*)(QPdfSearchModel*, QMetaMethod*);
    using QPdfSearchModel_DisconnectNotify_Callback = void (*)(QPdfSearchModel*, QMetaMethod*);
    using QPdfSearchModel::beginInsertColumns;
    using QPdfSearchModel::beginInsertRows;
    using QPdfSearchModel::beginMoveColumns;
    using QPdfSearchModel::beginMoveRows;
    using QPdfSearchModel::beginRemoveColumns;
    using QPdfSearchModel::beginRemoveRows;
    using QPdfSearchModel::beginResetModel;
    using QPdfSearchModel::changePersistentIndex;
    using QPdfSearchModel::changePersistentIndexList;
    using QPdfSearchModel::createIndex;
    using QPdfSearchModel::decodeData;
    using QPdfSearchModel::encodeData;
    using QPdfSearchModel::endInsertColumns;
    using QPdfSearchModel::endInsertRows;
    using QPdfSearchModel::endMoveColumns;
    using QPdfSearchModel::endMoveRows;
    using QPdfSearchModel::endRemoveColumns;
    using QPdfSearchModel::endRemoveRows;
    using QPdfSearchModel::endResetModel;
    using QPdfSearchModel::isSignalConnected;
    using QPdfSearchModel::persistentIndexList;
    using QPdfSearchModel::receivers;
    using QPdfSearchModel::sender;
    using QPdfSearchModel::senderSignalIndex;
    using QPdfSearchModel::updatePage;

    // Instance callback storage
    QPdfSearchModel_MetaObject_Callback qpdfsearchmodel_metaobject_callback = nullptr;
    QPdfSearchModel_Metacast_Callback qpdfsearchmodel_metacast_callback = nullptr;
    QPdfSearchModel_Metacall_Callback qpdfsearchmodel_metacall_callback = nullptr;
    QPdfSearchModel_RoleNames_Callback qpdfsearchmodel_rolenames_callback = nullptr;
    QPdfSearchModel_RowCount_Callback qpdfsearchmodel_rowcount_callback = nullptr;
    QPdfSearchModel_Data_Callback qpdfsearchmodel_data_callback = nullptr;
    QPdfSearchModel_TimerEvent_Callback qpdfsearchmodel_timerevent_callback = nullptr;
    QPdfSearchModel_Index_Callback qpdfsearchmodel_index_callback = nullptr;
    QPdfSearchModel_Sibling_Callback qpdfsearchmodel_sibling_callback = nullptr;
    QPdfSearchModel_DropMimeData_Callback qpdfsearchmodel_dropmimedata_callback = nullptr;
    QPdfSearchModel_Flags_Callback qpdfsearchmodel_flags_callback = nullptr;
    QPdfSearchModel_SetData_Callback qpdfsearchmodel_setdata_callback = nullptr;
    QPdfSearchModel_HeaderData_Callback qpdfsearchmodel_headerdata_callback = nullptr;
    QPdfSearchModel_SetHeaderData_Callback qpdfsearchmodel_setheaderdata_callback = nullptr;
    QPdfSearchModel_ItemData_Callback qpdfsearchmodel_itemdata_callback = nullptr;
    QPdfSearchModel_SetItemData_Callback qpdfsearchmodel_setitemdata_callback = nullptr;
    QPdfSearchModel_ClearItemData_Callback qpdfsearchmodel_clearitemdata_callback = nullptr;
    QPdfSearchModel_MimeTypes_Callback qpdfsearchmodel_mimetypes_callback = nullptr;
    QPdfSearchModel_MimeData_Callback qpdfsearchmodel_mimedata_callback = nullptr;
    QPdfSearchModel_CanDropMimeData_Callback qpdfsearchmodel_candropmimedata_callback = nullptr;
    QPdfSearchModel_SupportedDropActions_Callback qpdfsearchmodel_supporteddropactions_callback = nullptr;
    QPdfSearchModel_SupportedDragActions_Callback qpdfsearchmodel_supporteddragactions_callback = nullptr;
    QPdfSearchModel_InsertRows_Callback qpdfsearchmodel_insertrows_callback = nullptr;
    QPdfSearchModel_InsertColumns_Callback qpdfsearchmodel_insertcolumns_callback = nullptr;
    QPdfSearchModel_RemoveRows_Callback qpdfsearchmodel_removerows_callback = nullptr;
    QPdfSearchModel_RemoveColumns_Callback qpdfsearchmodel_removecolumns_callback = nullptr;
    QPdfSearchModel_MoveRows_Callback qpdfsearchmodel_moverows_callback = nullptr;
    QPdfSearchModel_MoveColumns_Callback qpdfsearchmodel_movecolumns_callback = nullptr;
    QPdfSearchModel_FetchMore_Callback qpdfsearchmodel_fetchmore_callback = nullptr;
    QPdfSearchModel_CanFetchMore_Callback qpdfsearchmodel_canfetchmore_callback = nullptr;
    QPdfSearchModel_Sort_Callback qpdfsearchmodel_sort_callback = nullptr;
    QPdfSearchModel_Buddy_Callback qpdfsearchmodel_buddy_callback = nullptr;
    QPdfSearchModel_Match_Callback qpdfsearchmodel_match_callback = nullptr;
    QPdfSearchModel_Span_Callback qpdfsearchmodel_span_callback = nullptr;
    QPdfSearchModel_MultiData_Callback qpdfsearchmodel_multidata_callback = nullptr;
    QPdfSearchModel_Submit_Callback qpdfsearchmodel_submit_callback = nullptr;
    QPdfSearchModel_Revert_Callback qpdfsearchmodel_revert_callback = nullptr;
    QPdfSearchModel_ResetInternalData_Callback qpdfsearchmodel_resetinternaldata_callback = nullptr;
    QPdfSearchModel_Event_Callback qpdfsearchmodel_event_callback = nullptr;
    QPdfSearchModel_EventFilter_Callback qpdfsearchmodel_eventfilter_callback = nullptr;
    QPdfSearchModel_ChildEvent_Callback qpdfsearchmodel_childevent_callback = nullptr;
    QPdfSearchModel_CustomEvent_Callback qpdfsearchmodel_customevent_callback = nullptr;
    QPdfSearchModel_ConnectNotify_Callback qpdfsearchmodel_connectnotify_callback = nullptr;
    QPdfSearchModel_DisconnectNotify_Callback qpdfsearchmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfSearchModel {
        using QPdfSearchModel::childEvent;
        using QPdfSearchModel::connectNotify;
        using QPdfSearchModel::customEvent;
        using QPdfSearchModel::disconnectNotify;
        using QPdfSearchModel::resetInternalData;
        using QPdfSearchModel::timerEvent;
    };

    VirtualQPdfSearchModel() : QPdfSearchModel() {};
    VirtualQPdfSearchModel(QObject* parent) : QPdfSearchModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfsearchmodel_metaobject_callback) {
            QMetaObject* callback_ret = qpdfsearchmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfSearchModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfsearchmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfsearchmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfSearchModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfsearchmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfsearchmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfSearchModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdfsearchmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qpdfsearchmodel_rolenames_callback(this);
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
        return QPdfSearchModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdfsearchmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qpdfsearchmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfSearchModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdfsearchmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qpdfsearchmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfSearchModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfsearchmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfsearchmodel_timerevent_callback(this, cbval1);
            return;
        }
        QPdfSearchModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdfsearchmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qpdfsearchmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfSearchModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdfsearchmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qpdfsearchmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfSearchModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdfsearchmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfsearchmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfSearchModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdfsearchmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qpdfsearchmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QPdfSearchModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdfsearchmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qpdfsearchmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfSearchModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdfsearchmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qpdfsearchmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfSearchModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdfsearchmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qpdfsearchmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QPdfSearchModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdfsearchmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qpdfsearchmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QPdfSearchModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdfsearchmodel_setitemdata_callback) {
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
            bool callback_ret = qpdfsearchmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfSearchModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdfsearchmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qpdfsearchmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfSearchModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qpdfsearchmodel_mimetypes_callback) {
            const char** callback_ret = qpdfsearchmodel_mimetypes_callback(this);
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
        return QPdfSearchModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qpdfsearchmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qpdfsearchmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QPdfSearchModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdfsearchmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfsearchmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfSearchModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdfsearchmodel_supporteddropactions_callback) {
            int callback_ret = qpdfsearchmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfSearchModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdfsearchmodel_supporteddragactions_callback) {
            int callback_ret = qpdfsearchmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfSearchModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfsearchmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfSearchModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfsearchmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfSearchModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfsearchmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfSearchModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfsearchmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfsearchmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfSearchModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfsearchmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qpdfsearchmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfSearchModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfsearchmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qpdfsearchmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfSearchModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdfsearchmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qpdfsearchmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QPdfSearchModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdfsearchmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfsearchmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfSearchModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdfsearchmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qpdfsearchmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QPdfSearchModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdfsearchmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qpdfsearchmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfSearchModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdfsearchmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qpdfsearchmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QPdfSearchModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdfsearchmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qpdfsearchmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfSearchModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdfsearchmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qpdfsearchmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QPdfSearchModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdfsearchmodel_submit_callback) {
            bool callback_ret = qpdfsearchmodel_submit_callback(this);
            return callback_ret;
        }
        return QPdfSearchModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdfsearchmodel_revert_callback) {
            qpdfsearchmodel_revert_callback(this);
            return;
        }
        QPdfSearchModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdfsearchmodel_resetinternaldata_callback) {
            qpdfsearchmodel_resetinternaldata_callback(this);
            return;
        }
        QPdfSearchModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfsearchmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdfsearchmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfSearchModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfsearchmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdfsearchmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfSearchModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfsearchmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfsearchmodel_childevent_callback(this, cbval1);
            return;
        }
        QPdfSearchModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfsearchmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfsearchmodel_customevent_callback(this, cbval1);
            return;
        }
        QPdfSearchModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfsearchmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfsearchmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfSearchModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfsearchmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfsearchmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfSearchModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPdfSearchModel_SuperTimerEvent(QPdfSearchModel* self, QTimerEvent* event);
    friend void QPdfSearchModel_SuperResetInternalData(QPdfSearchModel* self);
    friend void QPdfSearchModel_SuperChildEvent(QPdfSearchModel* self, QChildEvent* event);
    friend void QPdfSearchModel_SuperCustomEvent(QPdfSearchModel* self, QEvent* event);
    friend void QPdfSearchModel_SuperConnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
    friend void QPdfSearchModel_SuperDisconnectNotify(QPdfSearchModel* self, const QMetaMethod* signal);
};

#endif
