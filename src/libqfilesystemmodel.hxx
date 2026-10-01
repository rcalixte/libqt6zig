#pragma once
#ifndef LIBQFILESYSTEMMODEL_HXX
#define LIBQFILESYSTEMMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileSystemModel
class VirtualQFileSystemModel final : public QFileSystemModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFileSystemModel_MetaObject_Callback = QMetaObject* (*)(const QFileSystemModel*);
    using QFileSystemModel_Metacast_Callback = void* (*)(QFileSystemModel*, const char*);
    using QFileSystemModel_Metacall_Callback = int (*)(QFileSystemModel*, int, int, void**);
    using QFileSystemModel_Index_Callback = QModelIndex* (*)(const QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_Parent_Callback = QModelIndex* (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Sibling_Callback = QModelIndex* (*)(const QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_HasChildren_Callback = bool (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_CanFetchMore_Callback = bool (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_FetchMore_Callback = void (*)(QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_RowCount_Callback = int (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_ColumnCount_Callback = int (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Data_Callback = QVariant* (*)(const QFileSystemModel*, QModelIndex*, int);
    using QFileSystemModel_SetData_Callback = bool (*)(QFileSystemModel*, QModelIndex*, QVariant*, int);
    using QFileSystemModel_HeaderData_Callback = QVariant* (*)(const QFileSystemModel*, int, int, int);
    using QFileSystemModel_Flags_Callback = int (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Sort_Callback = void (*)(QFileSystemModel*, int, int);
    using QFileSystemModel_MimeTypes_Callback = const char** (*)(const QFileSystemModel*);
    using QFileSystemModel_MimeData_Callback = QMimeData* (*)(const QFileSystemModel*, libqt_list /* of QModelIndex* */);
    using QFileSystemModel_DropMimeData_Callback = bool (*)(QFileSystemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QFileSystemModel_SupportedDropActions_Callback = int (*)(const QFileSystemModel*);
    using QFileSystemModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QFileSystemModel*);
    using QFileSystemModel_TimerEvent_Callback = void (*)(QFileSystemModel*, QTimerEvent*);
    using QFileSystemModel_Event_Callback = bool (*)(QFileSystemModel*, QEvent*);
    using QFileSystemModel_SetHeaderData_Callback = bool (*)(QFileSystemModel*, int, int, QVariant*, int);
    using QFileSystemModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_SetItemData_Callback = bool (*)(QFileSystemModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QFileSystemModel_ClearItemData_Callback = bool (*)(QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_CanDropMimeData_Callback = bool (*)(const QFileSystemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QFileSystemModel_SupportedDragActions_Callback = int (*)(const QFileSystemModel*);
    using QFileSystemModel_InsertRows_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_InsertColumns_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_RemoveRows_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_RemoveColumns_Callback = bool (*)(QFileSystemModel*, int, int, QModelIndex*);
    using QFileSystemModel_MoveRows_Callback = bool (*)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QFileSystemModel_MoveColumns_Callback = bool (*)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QFileSystemModel_Buddy_Callback = QModelIndex* (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QFileSystemModel*, QModelIndex*, int, QVariant*, int, int);
    using QFileSystemModel_Span_Callback = QSize* (*)(const QFileSystemModel*, QModelIndex*);
    using QFileSystemModel_MultiData_Callback = void (*)(const QFileSystemModel*, QModelIndex*, QModelRoleDataSpan*);
    using QFileSystemModel_Submit_Callback = bool (*)(QFileSystemModel*);
    using QFileSystemModel_Revert_Callback = void (*)(QFileSystemModel*);
    using QFileSystemModel_ResetInternalData_Callback = void (*)(QFileSystemModel*);
    using QFileSystemModel_EventFilter_Callback = bool (*)(QFileSystemModel*, QObject*, QEvent*);
    using QFileSystemModel_ChildEvent_Callback = void (*)(QFileSystemModel*, QChildEvent*);
    using QFileSystemModel_CustomEvent_Callback = void (*)(QFileSystemModel*, QEvent*);
    using QFileSystemModel_ConnectNotify_Callback = void (*)(QFileSystemModel*, QMetaMethod*);
    using QFileSystemModel_DisconnectNotify_Callback = void (*)(QFileSystemModel*, QMetaMethod*);
    using QFileSystemModel::beginInsertColumns;
    using QFileSystemModel::beginInsertRows;
    using QFileSystemModel::beginMoveColumns;
    using QFileSystemModel::beginMoveRows;
    using QFileSystemModel::beginRemoveColumns;
    using QFileSystemModel::beginRemoveRows;
    using QFileSystemModel::beginResetModel;
    using QFileSystemModel::changePersistentIndex;
    using QFileSystemModel::changePersistentIndexList;
    using QFileSystemModel::createIndex;
    using QFileSystemModel::decodeData;
    using QFileSystemModel::encodeData;
    using QFileSystemModel::endInsertColumns;
    using QFileSystemModel::endInsertRows;
    using QFileSystemModel::endMoveColumns;
    using QFileSystemModel::endMoveRows;
    using QFileSystemModel::endRemoveColumns;
    using QFileSystemModel::endRemoveRows;
    using QFileSystemModel::endResetModel;
    using QFileSystemModel::isSignalConnected;
    using QFileSystemModel::persistentIndexList;
    using QFileSystemModel::receivers;
    using QFileSystemModel::sender;
    using QFileSystemModel::senderSignalIndex;

    // Instance callback storage
    QFileSystemModel_MetaObject_Callback qfilesystemmodel_metaobject_callback = nullptr;
    QFileSystemModel_Metacast_Callback qfilesystemmodel_metacast_callback = nullptr;
    QFileSystemModel_Metacall_Callback qfilesystemmodel_metacall_callback = nullptr;
    QFileSystemModel_Index_Callback qfilesystemmodel_index_callback = nullptr;
    QFileSystemModel_Parent_Callback qfilesystemmodel_parent_callback = nullptr;
    QFileSystemModel_Sibling_Callback qfilesystemmodel_sibling_callback = nullptr;
    QFileSystemModel_HasChildren_Callback qfilesystemmodel_haschildren_callback = nullptr;
    QFileSystemModel_CanFetchMore_Callback qfilesystemmodel_canfetchmore_callback = nullptr;
    QFileSystemModel_FetchMore_Callback qfilesystemmodel_fetchmore_callback = nullptr;
    QFileSystemModel_RowCount_Callback qfilesystemmodel_rowcount_callback = nullptr;
    QFileSystemModel_ColumnCount_Callback qfilesystemmodel_columncount_callback = nullptr;
    QFileSystemModel_Data_Callback qfilesystemmodel_data_callback = nullptr;
    QFileSystemModel_SetData_Callback qfilesystemmodel_setdata_callback = nullptr;
    QFileSystemModel_HeaderData_Callback qfilesystemmodel_headerdata_callback = nullptr;
    QFileSystemModel_Flags_Callback qfilesystemmodel_flags_callback = nullptr;
    QFileSystemModel_Sort_Callback qfilesystemmodel_sort_callback = nullptr;
    QFileSystemModel_MimeTypes_Callback qfilesystemmodel_mimetypes_callback = nullptr;
    QFileSystemModel_MimeData_Callback qfilesystemmodel_mimedata_callback = nullptr;
    QFileSystemModel_DropMimeData_Callback qfilesystemmodel_dropmimedata_callback = nullptr;
    QFileSystemModel_SupportedDropActions_Callback qfilesystemmodel_supporteddropactions_callback = nullptr;
    QFileSystemModel_RoleNames_Callback qfilesystemmodel_rolenames_callback = nullptr;
    QFileSystemModel_TimerEvent_Callback qfilesystemmodel_timerevent_callback = nullptr;
    QFileSystemModel_Event_Callback qfilesystemmodel_event_callback = nullptr;
    QFileSystemModel_SetHeaderData_Callback qfilesystemmodel_setheaderdata_callback = nullptr;
    QFileSystemModel_ItemData_Callback qfilesystemmodel_itemdata_callback = nullptr;
    QFileSystemModel_SetItemData_Callback qfilesystemmodel_setitemdata_callback = nullptr;
    QFileSystemModel_ClearItemData_Callback qfilesystemmodel_clearitemdata_callback = nullptr;
    QFileSystemModel_CanDropMimeData_Callback qfilesystemmodel_candropmimedata_callback = nullptr;
    QFileSystemModel_SupportedDragActions_Callback qfilesystemmodel_supporteddragactions_callback = nullptr;
    QFileSystemModel_InsertRows_Callback qfilesystemmodel_insertrows_callback = nullptr;
    QFileSystemModel_InsertColumns_Callback qfilesystemmodel_insertcolumns_callback = nullptr;
    QFileSystemModel_RemoveRows_Callback qfilesystemmodel_removerows_callback = nullptr;
    QFileSystemModel_RemoveColumns_Callback qfilesystemmodel_removecolumns_callback = nullptr;
    QFileSystemModel_MoveRows_Callback qfilesystemmodel_moverows_callback = nullptr;
    QFileSystemModel_MoveColumns_Callback qfilesystemmodel_movecolumns_callback = nullptr;
    QFileSystemModel_Buddy_Callback qfilesystemmodel_buddy_callback = nullptr;
    QFileSystemModel_Match_Callback qfilesystemmodel_match_callback = nullptr;
    QFileSystemModel_Span_Callback qfilesystemmodel_span_callback = nullptr;
    QFileSystemModel_MultiData_Callback qfilesystemmodel_multidata_callback = nullptr;
    QFileSystemModel_Submit_Callback qfilesystemmodel_submit_callback = nullptr;
    QFileSystemModel_Revert_Callback qfilesystemmodel_revert_callback = nullptr;
    QFileSystemModel_ResetInternalData_Callback qfilesystemmodel_resetinternaldata_callback = nullptr;
    QFileSystemModel_EventFilter_Callback qfilesystemmodel_eventfilter_callback = nullptr;
    QFileSystemModel_ChildEvent_Callback qfilesystemmodel_childevent_callback = nullptr;
    QFileSystemModel_CustomEvent_Callback qfilesystemmodel_customevent_callback = nullptr;
    QFileSystemModel_ConnectNotify_Callback qfilesystemmodel_connectnotify_callback = nullptr;
    QFileSystemModel_DisconnectNotify_Callback qfilesystemmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFileSystemModel {
        using QFileSystemModel::childEvent;
        using QFileSystemModel::connectNotify;
        using QFileSystemModel::customEvent;
        using QFileSystemModel::disconnectNotify;
        using QFileSystemModel::event;
        using QFileSystemModel::resetInternalData;
        using QFileSystemModel::timerEvent;
    };

    VirtualQFileSystemModel() : QFileSystemModel() {};
    VirtualQFileSystemModel(QObject* parent) : QFileSystemModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfilesystemmodel_metaobject_callback) {
            QMetaObject* callback_ret = qfilesystemmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QFileSystemModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfilesystemmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfilesystemmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfilesystemmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfilesystemmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qfilesystemmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qfilesystemmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileSystemModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qfilesystemmodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = qfilesystemmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileSystemModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qfilesystemmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qfilesystemmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileSystemModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qfilesystemmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qfilesystemmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qfilesystemmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qfilesystemmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QFileSystemModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qfilesystemmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qfilesystemmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qfilesystemmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qfilesystemmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFileSystemModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qfilesystemmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qfilesystemmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileSystemModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qfilesystemmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qfilesystemmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qfilesystemmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qfilesystemmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileSystemModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qfilesystemmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qfilesystemmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QFileSystemModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qfilesystemmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qfilesystemmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QFileSystemModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qfilesystemmodel_mimetypes_callback) {
            const char** callback_ret = qfilesystemmodel_mimetypes_callback(this);
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
        return QFileSystemModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qfilesystemmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qfilesystemmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QFileSystemModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qfilesystemmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QFileSystemModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qfilesystemmodel_supporteddropactions_callback) {
            int callback_ret = qfilesystemmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QFileSystemModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qfilesystemmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qfilesystemmodel_rolenames_callback(this);
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
        return QFileSystemModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfilesystemmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfilesystemmodel_timerevent_callback(this, cbval1);
            return;
        }
        QFileSystemModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfilesystemmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qfilesystemmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qfilesystemmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qfilesystemmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QFileSystemModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qfilesystemmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qfilesystemmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QFileSystemModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qfilesystemmodel_setitemdata_callback) {
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
            bool callback_ret = qfilesystemmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileSystemModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qfilesystemmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qfilesystemmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QFileSystemModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qfilesystemmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QFileSystemModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qfilesystemmodel_supporteddragactions_callback) {
            int callback_ret = qfilesystemmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QFileSystemModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qfilesystemmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qfilesystemmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QFileSystemModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qfilesystemmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qfilesystemmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QFileSystemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qfilesystemmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qfilesystemmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QFileSystemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qfilesystemmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qfilesystemmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileSystemModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qfilesystemmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qfilesystemmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QFileSystemModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qfilesystemmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qfilesystemmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileSystemModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qfilesystemmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qfilesystemmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QFileSystemModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qfilesystemmodel_submit_callback) {
            bool callback_ret = qfilesystemmodel_submit_callback(this);
            return callback_ret;
        }
        return QFileSystemModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qfilesystemmodel_revert_callback) {
            qfilesystemmodel_revert_callback(this);
            return;
        }
        QFileSystemModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qfilesystemmodel_resetinternaldata_callback) {
            qfilesystemmodel_resetinternaldata_callback(this);
            return;
        }
        QFileSystemModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfilesystemmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qfilesystemmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFileSystemModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfilesystemmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfilesystemmodel_childevent_callback(this, cbval1);
            return;
        }
        QFileSystemModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfilesystemmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qfilesystemmodel_customevent_callback(this, cbval1);
            return;
        }
        QFileSystemModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfilesystemmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfilesystemmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QFileSystemModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfilesystemmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfilesystemmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFileSystemModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QFileSystemModel_SuperTimerEvent(QFileSystemModel* self, QTimerEvent* event);
    friend bool QFileSystemModel_SuperEvent(QFileSystemModel* self, QEvent* event);
    friend void QFileSystemModel_SuperResetInternalData(QFileSystemModel* self);
    friend void QFileSystemModel_SuperChildEvent(QFileSystemModel* self, QChildEvent* event);
    friend void QFileSystemModel_SuperCustomEvent(QFileSystemModel* self, QEvent* event);
    friend void QFileSystemModel_SuperConnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
    friend void QFileSystemModel_SuperDisconnectNotify(QFileSystemModel* self, const QMetaMethod* signal);
};

#endif
