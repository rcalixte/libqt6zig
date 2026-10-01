#pragma once
#ifndef PDF_LIBQPDFBOOKMARKMODEL_HXX
#define PDF_LIBQPDFBOOKMARKMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPdfBookmarkModel
class VirtualQPdfBookmarkModel final : public QPdfBookmarkModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPdfBookmarkModel_MetaObject_Callback = QMetaObject* (*)(const QPdfBookmarkModel*);
    using QPdfBookmarkModel_Metacast_Callback = void* (*)(QPdfBookmarkModel*, const char*);
    using QPdfBookmarkModel_Metacall_Callback = int (*)(QPdfBookmarkModel*, int, int, void**);
    using QPdfBookmarkModel_Data_Callback = QVariant* (*)(const QPdfBookmarkModel*, QModelIndex*, int);
    using QPdfBookmarkModel_Index_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_Parent_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_RowCount_Callback = int (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_ColumnCount_Callback = int (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QPdfBookmarkModel*);
    using QPdfBookmarkModel_Sibling_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_HasChildren_Callback = bool (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_SetData_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, QVariant*, int);
    using QPdfBookmarkModel_HeaderData_Callback = QVariant* (*)(const QPdfBookmarkModel*, int, int, int);
    using QPdfBookmarkModel_SetHeaderData_Callback = bool (*)(QPdfBookmarkModel*, int, int, QVariant*, int);
    using QPdfBookmarkModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_SetItemData_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QPdfBookmarkModel_ClearItemData_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_MimeTypes_Callback = const char** (*)(const QPdfBookmarkModel*);
    using QPdfBookmarkModel_MimeData_Callback = QMimeData* (*)(const QPdfBookmarkModel*, libqt_list /* of QModelIndex* */);
    using QPdfBookmarkModel_CanDropMimeData_Callback = bool (*)(const QPdfBookmarkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfBookmarkModel_DropMimeData_Callback = bool (*)(QPdfBookmarkModel*, QMimeData*, int, int, int, QModelIndex*);
    using QPdfBookmarkModel_SupportedDropActions_Callback = int (*)(const QPdfBookmarkModel*);
    using QPdfBookmarkModel_SupportedDragActions_Callback = int (*)(const QPdfBookmarkModel*);
    using QPdfBookmarkModel_InsertRows_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_InsertColumns_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_RemoveRows_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_RemoveColumns_Callback = bool (*)(QPdfBookmarkModel*, int, int, QModelIndex*);
    using QPdfBookmarkModel_MoveRows_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfBookmarkModel_MoveColumns_Callback = bool (*)(QPdfBookmarkModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QPdfBookmarkModel_FetchMore_Callback = void (*)(QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_CanFetchMore_Callback = bool (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_Flags_Callback = int (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_Sort_Callback = void (*)(QPdfBookmarkModel*, int, int);
    using QPdfBookmarkModel_Buddy_Callback = QModelIndex* (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QPdfBookmarkModel*, QModelIndex*, int, QVariant*, int, int);
    using QPdfBookmarkModel_Span_Callback = QSize* (*)(const QPdfBookmarkModel*, QModelIndex*);
    using QPdfBookmarkModel_MultiData_Callback = void (*)(const QPdfBookmarkModel*, QModelIndex*, QModelRoleDataSpan*);
    using QPdfBookmarkModel_Submit_Callback = bool (*)(QPdfBookmarkModel*);
    using QPdfBookmarkModel_Revert_Callback = void (*)(QPdfBookmarkModel*);
    using QPdfBookmarkModel_ResetInternalData_Callback = void (*)(QPdfBookmarkModel*);
    using QPdfBookmarkModel_Event_Callback = bool (*)(QPdfBookmarkModel*, QEvent*);
    using QPdfBookmarkModel_EventFilter_Callback = bool (*)(QPdfBookmarkModel*, QObject*, QEvent*);
    using QPdfBookmarkModel_TimerEvent_Callback = void (*)(QPdfBookmarkModel*, QTimerEvent*);
    using QPdfBookmarkModel_ChildEvent_Callback = void (*)(QPdfBookmarkModel*, QChildEvent*);
    using QPdfBookmarkModel_CustomEvent_Callback = void (*)(QPdfBookmarkModel*, QEvent*);
    using QPdfBookmarkModel_ConnectNotify_Callback = void (*)(QPdfBookmarkModel*, QMetaMethod*);
    using QPdfBookmarkModel_DisconnectNotify_Callback = void (*)(QPdfBookmarkModel*, QMetaMethod*);
    using QPdfBookmarkModel::beginInsertColumns;
    using QPdfBookmarkModel::beginInsertRows;
    using QPdfBookmarkModel::beginMoveColumns;
    using QPdfBookmarkModel::beginMoveRows;
    using QPdfBookmarkModel::beginRemoveColumns;
    using QPdfBookmarkModel::beginRemoveRows;
    using QPdfBookmarkModel::beginResetModel;
    using QPdfBookmarkModel::changePersistentIndex;
    using QPdfBookmarkModel::changePersistentIndexList;
    using QPdfBookmarkModel::createIndex;
    using QPdfBookmarkModel::decodeData;
    using QPdfBookmarkModel::encodeData;
    using QPdfBookmarkModel::endInsertColumns;
    using QPdfBookmarkModel::endInsertRows;
    using QPdfBookmarkModel::endMoveColumns;
    using QPdfBookmarkModel::endMoveRows;
    using QPdfBookmarkModel::endRemoveColumns;
    using QPdfBookmarkModel::endRemoveRows;
    using QPdfBookmarkModel::endResetModel;
    using QPdfBookmarkModel::isSignalConnected;
    using QPdfBookmarkModel::persistentIndexList;
    using QPdfBookmarkModel::receivers;
    using QPdfBookmarkModel::sender;
    using QPdfBookmarkModel::senderSignalIndex;

    // Instance callback storage
    QPdfBookmarkModel_MetaObject_Callback qpdfbookmarkmodel_metaobject_callback = nullptr;
    QPdfBookmarkModel_Metacast_Callback qpdfbookmarkmodel_metacast_callback = nullptr;
    QPdfBookmarkModel_Metacall_Callback qpdfbookmarkmodel_metacall_callback = nullptr;
    QPdfBookmarkModel_Data_Callback qpdfbookmarkmodel_data_callback = nullptr;
    QPdfBookmarkModel_Index_Callback qpdfbookmarkmodel_index_callback = nullptr;
    QPdfBookmarkModel_Parent_Callback qpdfbookmarkmodel_parent_callback = nullptr;
    QPdfBookmarkModel_RowCount_Callback qpdfbookmarkmodel_rowcount_callback = nullptr;
    QPdfBookmarkModel_ColumnCount_Callback qpdfbookmarkmodel_columncount_callback = nullptr;
    QPdfBookmarkModel_RoleNames_Callback qpdfbookmarkmodel_rolenames_callback = nullptr;
    QPdfBookmarkModel_Sibling_Callback qpdfbookmarkmodel_sibling_callback = nullptr;
    QPdfBookmarkModel_HasChildren_Callback qpdfbookmarkmodel_haschildren_callback = nullptr;
    QPdfBookmarkModel_SetData_Callback qpdfbookmarkmodel_setdata_callback = nullptr;
    QPdfBookmarkModel_HeaderData_Callback qpdfbookmarkmodel_headerdata_callback = nullptr;
    QPdfBookmarkModel_SetHeaderData_Callback qpdfbookmarkmodel_setheaderdata_callback = nullptr;
    QPdfBookmarkModel_ItemData_Callback qpdfbookmarkmodel_itemdata_callback = nullptr;
    QPdfBookmarkModel_SetItemData_Callback qpdfbookmarkmodel_setitemdata_callback = nullptr;
    QPdfBookmarkModel_ClearItemData_Callback qpdfbookmarkmodel_clearitemdata_callback = nullptr;
    QPdfBookmarkModel_MimeTypes_Callback qpdfbookmarkmodel_mimetypes_callback = nullptr;
    QPdfBookmarkModel_MimeData_Callback qpdfbookmarkmodel_mimedata_callback = nullptr;
    QPdfBookmarkModel_CanDropMimeData_Callback qpdfbookmarkmodel_candropmimedata_callback = nullptr;
    QPdfBookmarkModel_DropMimeData_Callback qpdfbookmarkmodel_dropmimedata_callback = nullptr;
    QPdfBookmarkModel_SupportedDropActions_Callback qpdfbookmarkmodel_supporteddropactions_callback = nullptr;
    QPdfBookmarkModel_SupportedDragActions_Callback qpdfbookmarkmodel_supporteddragactions_callback = nullptr;
    QPdfBookmarkModel_InsertRows_Callback qpdfbookmarkmodel_insertrows_callback = nullptr;
    QPdfBookmarkModel_InsertColumns_Callback qpdfbookmarkmodel_insertcolumns_callback = nullptr;
    QPdfBookmarkModel_RemoveRows_Callback qpdfbookmarkmodel_removerows_callback = nullptr;
    QPdfBookmarkModel_RemoveColumns_Callback qpdfbookmarkmodel_removecolumns_callback = nullptr;
    QPdfBookmarkModel_MoveRows_Callback qpdfbookmarkmodel_moverows_callback = nullptr;
    QPdfBookmarkModel_MoveColumns_Callback qpdfbookmarkmodel_movecolumns_callback = nullptr;
    QPdfBookmarkModel_FetchMore_Callback qpdfbookmarkmodel_fetchmore_callback = nullptr;
    QPdfBookmarkModel_CanFetchMore_Callback qpdfbookmarkmodel_canfetchmore_callback = nullptr;
    QPdfBookmarkModel_Flags_Callback qpdfbookmarkmodel_flags_callback = nullptr;
    QPdfBookmarkModel_Sort_Callback qpdfbookmarkmodel_sort_callback = nullptr;
    QPdfBookmarkModel_Buddy_Callback qpdfbookmarkmodel_buddy_callback = nullptr;
    QPdfBookmarkModel_Match_Callback qpdfbookmarkmodel_match_callback = nullptr;
    QPdfBookmarkModel_Span_Callback qpdfbookmarkmodel_span_callback = nullptr;
    QPdfBookmarkModel_MultiData_Callback qpdfbookmarkmodel_multidata_callback = nullptr;
    QPdfBookmarkModel_Submit_Callback qpdfbookmarkmodel_submit_callback = nullptr;
    QPdfBookmarkModel_Revert_Callback qpdfbookmarkmodel_revert_callback = nullptr;
    QPdfBookmarkModel_ResetInternalData_Callback qpdfbookmarkmodel_resetinternaldata_callback = nullptr;
    QPdfBookmarkModel_Event_Callback qpdfbookmarkmodel_event_callback = nullptr;
    QPdfBookmarkModel_EventFilter_Callback qpdfbookmarkmodel_eventfilter_callback = nullptr;
    QPdfBookmarkModel_TimerEvent_Callback qpdfbookmarkmodel_timerevent_callback = nullptr;
    QPdfBookmarkModel_ChildEvent_Callback qpdfbookmarkmodel_childevent_callback = nullptr;
    QPdfBookmarkModel_CustomEvent_Callback qpdfbookmarkmodel_customevent_callback = nullptr;
    QPdfBookmarkModel_ConnectNotify_Callback qpdfbookmarkmodel_connectnotify_callback = nullptr;
    QPdfBookmarkModel_DisconnectNotify_Callback qpdfbookmarkmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPdfBookmarkModel {
        using QPdfBookmarkModel::childEvent;
        using QPdfBookmarkModel::connectNotify;
        using QPdfBookmarkModel::customEvent;
        using QPdfBookmarkModel::disconnectNotify;
        using QPdfBookmarkModel::resetInternalData;
        using QPdfBookmarkModel::timerEvent;
    };

    VirtualQPdfBookmarkModel() : QPdfBookmarkModel() {};
    VirtualQPdfBookmarkModel(QObject* parent) : QPdfBookmarkModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpdfbookmarkmodel_metaobject_callback) {
            QMetaObject* callback_ret = qpdfbookmarkmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QPdfBookmarkModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpdfbookmarkmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpdfbookmarkmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfbookmarkmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpdfbookmarkmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qpdfbookmarkmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qpdfbookmarkmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfBookmarkModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qpdfbookmarkmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfBookmarkModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_parent_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qpdfbookmarkmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfBookmarkModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qpdfbookmarkmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qpdfbookmarkmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPdfBookmarkModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qpdfbookmarkmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qpdfbookmarkmodel_rolenames_callback(this);
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
        return QPdfBookmarkModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qpdfbookmarkmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qpdfbookmarkmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfBookmarkModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qpdfbookmarkmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qpdfbookmarkmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qpdfbookmarkmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qpdfbookmarkmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfBookmarkModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qpdfbookmarkmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qpdfbookmarkmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QPdfBookmarkModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qpdfbookmarkmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QPdfBookmarkModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qpdfbookmarkmodel_setitemdata_callback) {
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
            bool callback_ret = qpdfbookmarkmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfBookmarkModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qpdfbookmarkmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qpdfbookmarkmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qpdfbookmarkmodel_mimetypes_callback) {
            const char** callback_ret = qpdfbookmarkmodel_mimetypes_callback(this);
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
        return QPdfBookmarkModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qpdfbookmarkmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qpdfbookmarkmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QPdfBookmarkModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qpdfbookmarkmodel_supporteddropactions_callback) {
            int callback_ret = qpdfbookmarkmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfBookmarkModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qpdfbookmarkmodel_supporteddragactions_callback) {
            int callback_ret = qpdfbookmarkmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QPdfBookmarkModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QPdfBookmarkModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfbookmarkmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qpdfbookmarkmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qpdfbookmarkmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qpdfbookmarkmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QPdfBookmarkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qpdfbookmarkmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qpdfbookmarkmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QPdfBookmarkModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qpdfbookmarkmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qpdfbookmarkmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qpdfbookmarkmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QPdfBookmarkModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qpdfbookmarkmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qpdfbookmarkmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QPdfBookmarkModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qpdfbookmarkmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfBookmarkModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qpdfbookmarkmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qpdfbookmarkmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QPdfBookmarkModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qpdfbookmarkmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qpdfbookmarkmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPdfBookmarkModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qpdfbookmarkmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qpdfbookmarkmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QPdfBookmarkModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qpdfbookmarkmodel_submit_callback) {
            bool callback_ret = qpdfbookmarkmodel_submit_callback(this);
            return callback_ret;
        }
        return QPdfBookmarkModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qpdfbookmarkmodel_revert_callback) {
            qpdfbookmarkmodel_revert_callback(this);
            return;
        }
        QPdfBookmarkModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qpdfbookmarkmodel_resetinternaldata_callback) {
            qpdfbookmarkmodel_resetinternaldata_callback(this);
            return;
        }
        QPdfBookmarkModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfbookmarkmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpdfbookmarkmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPdfBookmarkModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfbookmarkmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpdfbookmarkmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPdfBookmarkModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfbookmarkmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpdfbookmarkmodel_timerevent_callback(this, cbval1);
            return;
        }
        QPdfBookmarkModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfbookmarkmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpdfbookmarkmodel_childevent_callback(this, cbval1);
            return;
        }
        QPdfBookmarkModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfbookmarkmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qpdfbookmarkmodel_customevent_callback(this, cbval1);
            return;
        }
        QPdfBookmarkModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfbookmarkmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfbookmarkmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QPdfBookmarkModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfbookmarkmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpdfbookmarkmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPdfBookmarkModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPdfBookmarkModel_SuperResetInternalData(QPdfBookmarkModel* self);
    friend void QPdfBookmarkModel_SuperTimerEvent(QPdfBookmarkModel* self, QTimerEvent* event);
    friend void QPdfBookmarkModel_SuperChildEvent(QPdfBookmarkModel* self, QChildEvent* event);
    friend void QPdfBookmarkModel_SuperCustomEvent(QPdfBookmarkModel* self, QEvent* event);
    friend void QPdfBookmarkModel_SuperConnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
    friend void QPdfBookmarkModel_SuperDisconnectNotify(QPdfBookmarkModel* self, const QMetaMethod* signal);
};

#endif
