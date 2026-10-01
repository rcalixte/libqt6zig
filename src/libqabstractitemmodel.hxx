#pragma once
#ifndef LIBQABSTRACTITEMMODEL_HXX
#define LIBQABSTRACTITEMMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemModel
class VirtualQAbstractItemModel : public QAbstractItemModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractItemModel_MetaObject_Callback = QMetaObject* (*)(const QAbstractItemModel*);
    using QAbstractItemModel_Metacast_Callback = void* (*)(QAbstractItemModel*, const char*);
    using QAbstractItemModel_Metacall_Callback = int (*)(QAbstractItemModel*, int, int, void**);
    using QAbstractItemModel_Index_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_Parent_Callback = QModelIndex* (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Sibling_Callback = QModelIndex* (*)(const QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_RowCount_Callback = int (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_ColumnCount_Callback = int (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_HasChildren_Callback = bool (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Data_Callback = QVariant* (*)(const QAbstractItemModel*, QModelIndex*, int);
    using QAbstractItemModel_SetData_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, QVariant*, int);
    using QAbstractItemModel_HeaderData_Callback = QVariant* (*)(const QAbstractItemModel*, int, int, int);
    using QAbstractItemModel_SetHeaderData_Callback = bool (*)(QAbstractItemModel*, int, int, QVariant*, int);
    using QAbstractItemModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_SetItemData_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractItemModel_ClearItemData_Callback = bool (*)(QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_MimeTypes_Callback = const char** (*)(const QAbstractItemModel*);
    using QAbstractItemModel_MimeData_Callback = QMimeData* (*)(const QAbstractItemModel*, libqt_list /* of QModelIndex* */);
    using QAbstractItemModel_CanDropMimeData_Callback = bool (*)(const QAbstractItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractItemModel_DropMimeData_Callback = bool (*)(QAbstractItemModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractItemModel_SupportedDropActions_Callback = int (*)(const QAbstractItemModel*);
    using QAbstractItemModel_SupportedDragActions_Callback = int (*)(const QAbstractItemModel*);
    using QAbstractItemModel_InsertRows_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_InsertColumns_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_RemoveRows_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_RemoveColumns_Callback = bool (*)(QAbstractItemModel*, int, int, QModelIndex*);
    using QAbstractItemModel_MoveRows_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractItemModel_MoveColumns_Callback = bool (*)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractItemModel_FetchMore_Callback = void (*)(QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_CanFetchMore_Callback = bool (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Flags_Callback = int (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Sort_Callback = void (*)(QAbstractItemModel*, int, int);
    using QAbstractItemModel_Buddy_Callback = QModelIndex* (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractItemModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractItemModel_Span_Callback = QSize* (*)(const QAbstractItemModel*, QModelIndex*);
    using QAbstractItemModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QAbstractItemModel*);
    using QAbstractItemModel_MultiData_Callback = void (*)(const QAbstractItemModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractItemModel_Submit_Callback = bool (*)(QAbstractItemModel*);
    using QAbstractItemModel_Revert_Callback = void (*)(QAbstractItemModel*);
    using QAbstractItemModel_ResetInternalData_Callback = void (*)(QAbstractItemModel*);
    using QAbstractItemModel_Event_Callback = bool (*)(QAbstractItemModel*, QEvent*);
    using QAbstractItemModel_EventFilter_Callback = bool (*)(QAbstractItemModel*, QObject*, QEvent*);
    using QAbstractItemModel_TimerEvent_Callback = void (*)(QAbstractItemModel*, QTimerEvent*);
    using QAbstractItemModel_ChildEvent_Callback = void (*)(QAbstractItemModel*, QChildEvent*);
    using QAbstractItemModel_CustomEvent_Callback = void (*)(QAbstractItemModel*, QEvent*);
    using QAbstractItemModel_ConnectNotify_Callback = void (*)(QAbstractItemModel*, QMetaMethod*);
    using QAbstractItemModel_DisconnectNotify_Callback = void (*)(QAbstractItemModel*, QMetaMethod*);
    using QAbstractItemModel::beginInsertColumns;
    using QAbstractItemModel::beginInsertRows;
    using QAbstractItemModel::beginMoveColumns;
    using QAbstractItemModel::beginMoveRows;
    using QAbstractItemModel::beginRemoveColumns;
    using QAbstractItemModel::beginRemoveRows;
    using QAbstractItemModel::beginResetModel;
    using QAbstractItemModel::changePersistentIndex;
    using QAbstractItemModel::changePersistentIndexList;
    using QAbstractItemModel::createIndex;
    using QAbstractItemModel::decodeData;
    using QAbstractItemModel::encodeData;
    using QAbstractItemModel::endInsertColumns;
    using QAbstractItemModel::endInsertRows;
    using QAbstractItemModel::endMoveColumns;
    using QAbstractItemModel::endMoveRows;
    using QAbstractItemModel::endRemoveColumns;
    using QAbstractItemModel::endRemoveRows;
    using QAbstractItemModel::endResetModel;
    using QAbstractItemModel::isSignalConnected;
    using QAbstractItemModel::persistentIndexList;
    using QAbstractItemModel::receivers;
    using QAbstractItemModel::sender;
    using QAbstractItemModel::senderSignalIndex;

    // Instance callback storage
    QAbstractItemModel_MetaObject_Callback qabstractitemmodel_metaobject_callback = nullptr;
    QAbstractItemModel_Metacast_Callback qabstractitemmodel_metacast_callback = nullptr;
    QAbstractItemModel_Metacall_Callback qabstractitemmodel_metacall_callback = nullptr;
    QAbstractItemModel_Index_Callback qabstractitemmodel_index_callback = nullptr;
    QAbstractItemModel_Parent_Callback qabstractitemmodel_parent_callback = nullptr;
    QAbstractItemModel_Sibling_Callback qabstractitemmodel_sibling_callback = nullptr;
    QAbstractItemModel_RowCount_Callback qabstractitemmodel_rowcount_callback = nullptr;
    QAbstractItemModel_ColumnCount_Callback qabstractitemmodel_columncount_callback = nullptr;
    QAbstractItemModel_HasChildren_Callback qabstractitemmodel_haschildren_callback = nullptr;
    QAbstractItemModel_Data_Callback qabstractitemmodel_data_callback = nullptr;
    QAbstractItemModel_SetData_Callback qabstractitemmodel_setdata_callback = nullptr;
    QAbstractItemModel_HeaderData_Callback qabstractitemmodel_headerdata_callback = nullptr;
    QAbstractItemModel_SetHeaderData_Callback qabstractitemmodel_setheaderdata_callback = nullptr;
    QAbstractItemModel_ItemData_Callback qabstractitemmodel_itemdata_callback = nullptr;
    QAbstractItemModel_SetItemData_Callback qabstractitemmodel_setitemdata_callback = nullptr;
    QAbstractItemModel_ClearItemData_Callback qabstractitemmodel_clearitemdata_callback = nullptr;
    QAbstractItemModel_MimeTypes_Callback qabstractitemmodel_mimetypes_callback = nullptr;
    QAbstractItemModel_MimeData_Callback qabstractitemmodel_mimedata_callback = nullptr;
    QAbstractItemModel_CanDropMimeData_Callback qabstractitemmodel_candropmimedata_callback = nullptr;
    QAbstractItemModel_DropMimeData_Callback qabstractitemmodel_dropmimedata_callback = nullptr;
    QAbstractItemModel_SupportedDropActions_Callback qabstractitemmodel_supporteddropactions_callback = nullptr;
    QAbstractItemModel_SupportedDragActions_Callback qabstractitemmodel_supporteddragactions_callback = nullptr;
    QAbstractItemModel_InsertRows_Callback qabstractitemmodel_insertrows_callback = nullptr;
    QAbstractItemModel_InsertColumns_Callback qabstractitemmodel_insertcolumns_callback = nullptr;
    QAbstractItemModel_RemoveRows_Callback qabstractitemmodel_removerows_callback = nullptr;
    QAbstractItemModel_RemoveColumns_Callback qabstractitemmodel_removecolumns_callback = nullptr;
    QAbstractItemModel_MoveRows_Callback qabstractitemmodel_moverows_callback = nullptr;
    QAbstractItemModel_MoveColumns_Callback qabstractitemmodel_movecolumns_callback = nullptr;
    QAbstractItemModel_FetchMore_Callback qabstractitemmodel_fetchmore_callback = nullptr;
    QAbstractItemModel_CanFetchMore_Callback qabstractitemmodel_canfetchmore_callback = nullptr;
    QAbstractItemModel_Flags_Callback qabstractitemmodel_flags_callback = nullptr;
    QAbstractItemModel_Sort_Callback qabstractitemmodel_sort_callback = nullptr;
    QAbstractItemModel_Buddy_Callback qabstractitemmodel_buddy_callback = nullptr;
    QAbstractItemModel_Match_Callback qabstractitemmodel_match_callback = nullptr;
    QAbstractItemModel_Span_Callback qabstractitemmodel_span_callback = nullptr;
    QAbstractItemModel_RoleNames_Callback qabstractitemmodel_rolenames_callback = nullptr;
    QAbstractItemModel_MultiData_Callback qabstractitemmodel_multidata_callback = nullptr;
    QAbstractItemModel_Submit_Callback qabstractitemmodel_submit_callback = nullptr;
    QAbstractItemModel_Revert_Callback qabstractitemmodel_revert_callback = nullptr;
    QAbstractItemModel_ResetInternalData_Callback qabstractitemmodel_resetinternaldata_callback = nullptr;
    QAbstractItemModel_Event_Callback qabstractitemmodel_event_callback = nullptr;
    QAbstractItemModel_EventFilter_Callback qabstractitemmodel_eventfilter_callback = nullptr;
    QAbstractItemModel_TimerEvent_Callback qabstractitemmodel_timerevent_callback = nullptr;
    QAbstractItemModel_ChildEvent_Callback qabstractitemmodel_childevent_callback = nullptr;
    QAbstractItemModel_CustomEvent_Callback qabstractitemmodel_customevent_callback = nullptr;
    QAbstractItemModel_ConnectNotify_Callback qabstractitemmodel_connectnotify_callback = nullptr;
    QAbstractItemModel_DisconnectNotify_Callback qabstractitemmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractItemModel {
        using QAbstractItemModel::childEvent;
        using QAbstractItemModel::connectNotify;
        using QAbstractItemModel::customEvent;
        using QAbstractItemModel::disconnectNotify;
        using QAbstractItemModel::resetInternalData;
        using QAbstractItemModel::timerEvent;
    };

    VirtualQAbstractItemModel() : QAbstractItemModel() {};
    VirtualQAbstractItemModel(QObject* parent) : QAbstractItemModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractitemmodel_metaobject_callback) {
            QMetaObject* callback_ret = qabstractitemmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractItemModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractitemmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractitemmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractitemmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qabstractitemmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qabstractitemmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemModel::index called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qabstractitemmodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = qabstractitemmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemModel::parent called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstractitemmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qabstractitemmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qabstractitemmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qabstractitemmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemModel::rowCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qabstractitemmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qabstractitemmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemModel::columnCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qabstractitemmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qabstractitemmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qabstractitemmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractItemModel::data called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstractitemmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qabstractitemmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstractitemmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qabstractitemmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstractitemmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qabstractitemmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractItemModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstractitemmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qabstractitemmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QAbstractItemModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstractitemmodel_setitemdata_callback) {
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
            bool callback_ret = qabstractitemmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractItemModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstractitemmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qabstractitemmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstractitemmodel_mimetypes_callback) {
            const char** callback_ret = qabstractitemmodel_mimetypes_callback(this);
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
        return QAbstractItemModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstractitemmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qabstractitemmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QAbstractItemModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstractitemmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstractitemmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstractitemmodel_supporteddropactions_callback) {
            int callback_ret = qabstractitemmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractItemModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstractitemmodel_supporteddragactions_callback) {
            int callback_ret = qabstractitemmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractItemModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractitemmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractitemmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstractitemmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractitemmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstractitemmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstractitemmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qabstractitemmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QAbstractItemModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstractitemmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractitemmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstractitemmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qabstractitemmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QAbstractItemModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstractitemmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qabstractitemmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstractitemmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qabstractitemmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstractitemmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qabstractitemmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAbstractItemModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstractitemmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qabstractitemmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractItemModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstractitemmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qabstractitemmodel_rolenames_callback(this);
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
        return QAbstractItemModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstractitemmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qabstractitemmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractItemModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstractitemmodel_submit_callback) {
            bool callback_ret = qabstractitemmodel_submit_callback(this);
            return callback_ret;
        }
        return QAbstractItemModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstractitemmodel_revert_callback) {
            qabstractitemmodel_revert_callback(this);
            return;
        }
        QAbstractItemModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstractitemmodel_resetinternaldata_callback) {
            qabstractitemmodel_resetinternaldata_callback(this);
            return;
        }
        QAbstractItemModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractitemmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractitemmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractitemmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractItemModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractitemmodel_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractItemModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractitemmodel_childevent_callback(this, cbval1);
            return;
        }
        QAbstractItemModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractitemmodel_customevent_callback(this, cbval1);
            return;
        }
        QAbstractItemModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractitemmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractItemModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractitemmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractItemModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractItemModel_SuperResetInternalData(QAbstractItemModel* self);
    friend void QAbstractItemModel_SuperTimerEvent(QAbstractItemModel* self, QTimerEvent* event);
    friend void QAbstractItemModel_SuperChildEvent(QAbstractItemModel* self, QChildEvent* event);
    friend void QAbstractItemModel_SuperCustomEvent(QAbstractItemModel* self, QEvent* event);
    friend void QAbstractItemModel_SuperConnectNotify(QAbstractItemModel* self, const QMetaMethod* signal);
    friend void QAbstractItemModel_SuperDisconnectNotify(QAbstractItemModel* self, const QMetaMethod* signal);
};

// This class is a subclass of QAbstractTableModel
class VirtualQAbstractTableModel : public QAbstractTableModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractTableModel_MetaObject_Callback = QMetaObject* (*)(const QAbstractTableModel*);
    using QAbstractTableModel_Metacast_Callback = void* (*)(QAbstractTableModel*, const char*);
    using QAbstractTableModel_Metacall_Callback = int (*)(QAbstractTableModel*, int, int, void**);
    using QAbstractTableModel_Index_Callback = QModelIndex* (*)(const QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_Sibling_Callback = QModelIndex* (*)(const QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_DropMimeData_Callback = bool (*)(QAbstractTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractTableModel_Flags_Callback = int (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_RowCount_Callback = int (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_ColumnCount_Callback = int (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_Data_Callback = QVariant* (*)(const QAbstractTableModel*, QModelIndex*, int);
    using QAbstractTableModel_SetData_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, QVariant*, int);
    using QAbstractTableModel_HeaderData_Callback = QVariant* (*)(const QAbstractTableModel*, int, int, int);
    using QAbstractTableModel_SetHeaderData_Callback = bool (*)(QAbstractTableModel*, int, int, QVariant*, int);
    using QAbstractTableModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_SetItemData_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractTableModel_ClearItemData_Callback = bool (*)(QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_MimeTypes_Callback = const char** (*)(const QAbstractTableModel*);
    using QAbstractTableModel_MimeData_Callback = QMimeData* (*)(const QAbstractTableModel*, libqt_list /* of QModelIndex* */);
    using QAbstractTableModel_CanDropMimeData_Callback = bool (*)(const QAbstractTableModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractTableModel_SupportedDropActions_Callback = int (*)(const QAbstractTableModel*);
    using QAbstractTableModel_SupportedDragActions_Callback = int (*)(const QAbstractTableModel*);
    using QAbstractTableModel_InsertRows_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_InsertColumns_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_RemoveRows_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_RemoveColumns_Callback = bool (*)(QAbstractTableModel*, int, int, QModelIndex*);
    using QAbstractTableModel_MoveRows_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractTableModel_MoveColumns_Callback = bool (*)(QAbstractTableModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractTableModel_FetchMore_Callback = void (*)(QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_CanFetchMore_Callback = bool (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_Sort_Callback = void (*)(QAbstractTableModel*, int, int);
    using QAbstractTableModel_Buddy_Callback = QModelIndex* (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractTableModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractTableModel_Span_Callback = QSize* (*)(const QAbstractTableModel*, QModelIndex*);
    using QAbstractTableModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QAbstractTableModel*);
    using QAbstractTableModel_MultiData_Callback = void (*)(const QAbstractTableModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractTableModel_Submit_Callback = bool (*)(QAbstractTableModel*);
    using QAbstractTableModel_Revert_Callback = void (*)(QAbstractTableModel*);
    using QAbstractTableModel_ResetInternalData_Callback = void (*)(QAbstractTableModel*);
    using QAbstractTableModel_Event_Callback = bool (*)(QAbstractTableModel*, QEvent*);
    using QAbstractTableModel_EventFilter_Callback = bool (*)(QAbstractTableModel*, QObject*, QEvent*);
    using QAbstractTableModel_TimerEvent_Callback = void (*)(QAbstractTableModel*, QTimerEvent*);
    using QAbstractTableModel_ChildEvent_Callback = void (*)(QAbstractTableModel*, QChildEvent*);
    using QAbstractTableModel_CustomEvent_Callback = void (*)(QAbstractTableModel*, QEvent*);
    using QAbstractTableModel_ConnectNotify_Callback = void (*)(QAbstractTableModel*, QMetaMethod*);
    using QAbstractTableModel_DisconnectNotify_Callback = void (*)(QAbstractTableModel*, QMetaMethod*);
    using QAbstractTableModel::beginInsertColumns;
    using QAbstractTableModel::beginInsertRows;
    using QAbstractTableModel::beginMoveColumns;
    using QAbstractTableModel::beginMoveRows;
    using QAbstractTableModel::beginRemoveColumns;
    using QAbstractTableModel::beginRemoveRows;
    using QAbstractTableModel::beginResetModel;
    using QAbstractTableModel::changePersistentIndex;
    using QAbstractTableModel::changePersistentIndexList;
    using QAbstractTableModel::createIndex;
    using QAbstractTableModel::decodeData;
    using QAbstractTableModel::encodeData;
    using QAbstractTableModel::endInsertColumns;
    using QAbstractTableModel::endInsertRows;
    using QAbstractTableModel::endMoveColumns;
    using QAbstractTableModel::endMoveRows;
    using QAbstractTableModel::endRemoveColumns;
    using QAbstractTableModel::endRemoveRows;
    using QAbstractTableModel::endResetModel;
    using QAbstractTableModel::isSignalConnected;
    using QAbstractTableModel::persistentIndexList;
    using QAbstractTableModel::receivers;
    using QAbstractTableModel::sender;
    using QAbstractTableModel::senderSignalIndex;

    // Instance callback storage
    QAbstractTableModel_MetaObject_Callback qabstracttablemodel_metaobject_callback = nullptr;
    QAbstractTableModel_Metacast_Callback qabstracttablemodel_metacast_callback = nullptr;
    QAbstractTableModel_Metacall_Callback qabstracttablemodel_metacall_callback = nullptr;
    QAbstractTableModel_Index_Callback qabstracttablemodel_index_callback = nullptr;
    QAbstractTableModel_Sibling_Callback qabstracttablemodel_sibling_callback = nullptr;
    QAbstractTableModel_DropMimeData_Callback qabstracttablemodel_dropmimedata_callback = nullptr;
    QAbstractTableModel_Flags_Callback qabstracttablemodel_flags_callback = nullptr;
    QAbstractTableModel_RowCount_Callback qabstracttablemodel_rowcount_callback = nullptr;
    QAbstractTableModel_ColumnCount_Callback qabstracttablemodel_columncount_callback = nullptr;
    QAbstractTableModel_Data_Callback qabstracttablemodel_data_callback = nullptr;
    QAbstractTableModel_SetData_Callback qabstracttablemodel_setdata_callback = nullptr;
    QAbstractTableModel_HeaderData_Callback qabstracttablemodel_headerdata_callback = nullptr;
    QAbstractTableModel_SetHeaderData_Callback qabstracttablemodel_setheaderdata_callback = nullptr;
    QAbstractTableModel_ItemData_Callback qabstracttablemodel_itemdata_callback = nullptr;
    QAbstractTableModel_SetItemData_Callback qabstracttablemodel_setitemdata_callback = nullptr;
    QAbstractTableModel_ClearItemData_Callback qabstracttablemodel_clearitemdata_callback = nullptr;
    QAbstractTableModel_MimeTypes_Callback qabstracttablemodel_mimetypes_callback = nullptr;
    QAbstractTableModel_MimeData_Callback qabstracttablemodel_mimedata_callback = nullptr;
    QAbstractTableModel_CanDropMimeData_Callback qabstracttablemodel_candropmimedata_callback = nullptr;
    QAbstractTableModel_SupportedDropActions_Callback qabstracttablemodel_supporteddropactions_callback = nullptr;
    QAbstractTableModel_SupportedDragActions_Callback qabstracttablemodel_supporteddragactions_callback = nullptr;
    QAbstractTableModel_InsertRows_Callback qabstracttablemodel_insertrows_callback = nullptr;
    QAbstractTableModel_InsertColumns_Callback qabstracttablemodel_insertcolumns_callback = nullptr;
    QAbstractTableModel_RemoveRows_Callback qabstracttablemodel_removerows_callback = nullptr;
    QAbstractTableModel_RemoveColumns_Callback qabstracttablemodel_removecolumns_callback = nullptr;
    QAbstractTableModel_MoveRows_Callback qabstracttablemodel_moverows_callback = nullptr;
    QAbstractTableModel_MoveColumns_Callback qabstracttablemodel_movecolumns_callback = nullptr;
    QAbstractTableModel_FetchMore_Callback qabstracttablemodel_fetchmore_callback = nullptr;
    QAbstractTableModel_CanFetchMore_Callback qabstracttablemodel_canfetchmore_callback = nullptr;
    QAbstractTableModel_Sort_Callback qabstracttablemodel_sort_callback = nullptr;
    QAbstractTableModel_Buddy_Callback qabstracttablemodel_buddy_callback = nullptr;
    QAbstractTableModel_Match_Callback qabstracttablemodel_match_callback = nullptr;
    QAbstractTableModel_Span_Callback qabstracttablemodel_span_callback = nullptr;
    QAbstractTableModel_RoleNames_Callback qabstracttablemodel_rolenames_callback = nullptr;
    QAbstractTableModel_MultiData_Callback qabstracttablemodel_multidata_callback = nullptr;
    QAbstractTableModel_Submit_Callback qabstracttablemodel_submit_callback = nullptr;
    QAbstractTableModel_Revert_Callback qabstracttablemodel_revert_callback = nullptr;
    QAbstractTableModel_ResetInternalData_Callback qabstracttablemodel_resetinternaldata_callback = nullptr;
    QAbstractTableModel_Event_Callback qabstracttablemodel_event_callback = nullptr;
    QAbstractTableModel_EventFilter_Callback qabstracttablemodel_eventfilter_callback = nullptr;
    QAbstractTableModel_TimerEvent_Callback qabstracttablemodel_timerevent_callback = nullptr;
    QAbstractTableModel_ChildEvent_Callback qabstracttablemodel_childevent_callback = nullptr;
    QAbstractTableModel_CustomEvent_Callback qabstracttablemodel_customevent_callback = nullptr;
    QAbstractTableModel_ConnectNotify_Callback qabstracttablemodel_connectnotify_callback = nullptr;
    QAbstractTableModel_DisconnectNotify_Callback qabstracttablemodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractTableModel {
        using QAbstractTableModel::childEvent;
        using QAbstractTableModel::connectNotify;
        using QAbstractTableModel::customEvent;
        using QAbstractTableModel::disconnectNotify;
        using QAbstractTableModel::resetInternalData;
        using QAbstractTableModel::timerEvent;
    };

    VirtualQAbstractTableModel() : QAbstractTableModel() {};
    VirtualQAbstractTableModel(QObject* parent) : QAbstractTableModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstracttablemodel_metaobject_callback) {
            QMetaObject* callback_ret = qabstracttablemodel_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractTableModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstracttablemodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstracttablemodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstracttablemodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstracttablemodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractTableModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qabstracttablemodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qabstracttablemodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractTableModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstracttablemodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qabstracttablemodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractTableModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstracttablemodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstracttablemodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractTableModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstracttablemodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qabstracttablemodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QAbstractTableModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qabstracttablemodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qabstracttablemodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTableModel::rowCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qabstracttablemodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qabstracttablemodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTableModel::columnCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qabstracttablemodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qabstracttablemodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractTableModel::data called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstracttablemodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qabstracttablemodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstracttablemodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qabstracttablemodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractTableModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstracttablemodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qabstracttablemodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractTableModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstracttablemodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qabstracttablemodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QAbstractTableModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstracttablemodel_setitemdata_callback) {
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
            bool callback_ret = qabstracttablemodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractTableModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstracttablemodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qabstracttablemodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstracttablemodel_mimetypes_callback) {
            const char** callback_ret = qabstracttablemodel_mimetypes_callback(this);
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
        return QAbstractTableModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstracttablemodel_mimedata_callback) {
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
            QMimeData* callback_ret = qabstracttablemodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QAbstractTableModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstracttablemodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstracttablemodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractTableModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstracttablemodel_supporteddropactions_callback) {
            int callback_ret = qabstracttablemodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractTableModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstracttablemodel_supporteddragactions_callback) {
            int callback_ret = qabstracttablemodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractTableModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstracttablemodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstracttablemodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstracttablemodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstracttablemodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstracttablemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractTableModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstracttablemodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstracttablemodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstracttablemodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstracttablemodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstracttablemodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qabstracttablemodel_fetchmore_callback(this, cbval1);
            return;
        }
        QAbstractTableModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstracttablemodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstracttablemodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstracttablemodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qabstracttablemodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractTableModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstracttablemodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qabstracttablemodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractTableModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstracttablemodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qabstracttablemodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAbstractTableModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstracttablemodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qabstracttablemodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractTableModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstracttablemodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qabstracttablemodel_rolenames_callback(this);
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
        return QAbstractTableModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstracttablemodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qabstracttablemodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractTableModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstracttablemodel_submit_callback) {
            bool callback_ret = qabstracttablemodel_submit_callback(this);
            return callback_ret;
        }
        return QAbstractTableModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstracttablemodel_revert_callback) {
            qabstracttablemodel_revert_callback(this);
            return;
        }
        QAbstractTableModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstracttablemodel_resetinternaldata_callback) {
            qabstracttablemodel_resetinternaldata_callback(this);
            return;
        }
        QAbstractTableModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstracttablemodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstracttablemodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractTableModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstracttablemodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstracttablemodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractTableModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstracttablemodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstracttablemodel_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractTableModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstracttablemodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstracttablemodel_childevent_callback(this, cbval1);
            return;
        }
        QAbstractTableModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstracttablemodel_customevent_callback) {
            QEvent* cbval1 = event;
            qabstracttablemodel_customevent_callback(this, cbval1);
            return;
        }
        QAbstractTableModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstracttablemodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstracttablemodel_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractTableModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstracttablemodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstracttablemodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractTableModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractTableModel_SuperResetInternalData(QAbstractTableModel* self);
    friend void QAbstractTableModel_SuperTimerEvent(QAbstractTableModel* self, QTimerEvent* event);
    friend void QAbstractTableModel_SuperChildEvent(QAbstractTableModel* self, QChildEvent* event);
    friend void QAbstractTableModel_SuperCustomEvent(QAbstractTableModel* self, QEvent* event);
    friend void QAbstractTableModel_SuperConnectNotify(QAbstractTableModel* self, const QMetaMethod* signal);
    friend void QAbstractTableModel_SuperDisconnectNotify(QAbstractTableModel* self, const QMetaMethod* signal);
};

// This class is a subclass of QAbstractListModel
class VirtualQAbstractListModel : public QAbstractListModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractListModel_MetaObject_Callback = QMetaObject* (*)(const QAbstractListModel*);
    using QAbstractListModel_Metacast_Callback = void* (*)(QAbstractListModel*, const char*);
    using QAbstractListModel_Metacall_Callback = int (*)(QAbstractListModel*, int, int, void**);
    using QAbstractListModel_Index_Callback = QModelIndex* (*)(const QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_Sibling_Callback = QModelIndex* (*)(const QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_DropMimeData_Callback = bool (*)(QAbstractListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractListModel_Flags_Callback = int (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_RowCount_Callback = int (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_Data_Callback = QVariant* (*)(const QAbstractListModel*, QModelIndex*, int);
    using QAbstractListModel_SetData_Callback = bool (*)(QAbstractListModel*, QModelIndex*, QVariant*, int);
    using QAbstractListModel_HeaderData_Callback = QVariant* (*)(const QAbstractListModel*, int, int, int);
    using QAbstractListModel_SetHeaderData_Callback = bool (*)(QAbstractListModel*, int, int, QVariant*, int);
    using QAbstractListModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_SetItemData_Callback = bool (*)(QAbstractListModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractListModel_ClearItemData_Callback = bool (*)(QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_MimeTypes_Callback = const char** (*)(const QAbstractListModel*);
    using QAbstractListModel_MimeData_Callback = QMimeData* (*)(const QAbstractListModel*, libqt_list /* of QModelIndex* */);
    using QAbstractListModel_CanDropMimeData_Callback = bool (*)(const QAbstractListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractListModel_SupportedDropActions_Callback = int (*)(const QAbstractListModel*);
    using QAbstractListModel_SupportedDragActions_Callback = int (*)(const QAbstractListModel*);
    using QAbstractListModel_InsertRows_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_InsertColumns_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_RemoveRows_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_RemoveColumns_Callback = bool (*)(QAbstractListModel*, int, int, QModelIndex*);
    using QAbstractListModel_MoveRows_Callback = bool (*)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractListModel_MoveColumns_Callback = bool (*)(QAbstractListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractListModel_FetchMore_Callback = void (*)(QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_CanFetchMore_Callback = bool (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_Sort_Callback = void (*)(QAbstractListModel*, int, int);
    using QAbstractListModel_Buddy_Callback = QModelIndex* (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractListModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractListModel_Span_Callback = QSize* (*)(const QAbstractListModel*, QModelIndex*);
    using QAbstractListModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QAbstractListModel*);
    using QAbstractListModel_MultiData_Callback = void (*)(const QAbstractListModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractListModel_Submit_Callback = bool (*)(QAbstractListModel*);
    using QAbstractListModel_Revert_Callback = void (*)(QAbstractListModel*);
    using QAbstractListModel_ResetInternalData_Callback = void (*)(QAbstractListModel*);
    using QAbstractListModel_Event_Callback = bool (*)(QAbstractListModel*, QEvent*);
    using QAbstractListModel_EventFilter_Callback = bool (*)(QAbstractListModel*, QObject*, QEvent*);
    using QAbstractListModel_TimerEvent_Callback = void (*)(QAbstractListModel*, QTimerEvent*);
    using QAbstractListModel_ChildEvent_Callback = void (*)(QAbstractListModel*, QChildEvent*);
    using QAbstractListModel_CustomEvent_Callback = void (*)(QAbstractListModel*, QEvent*);
    using QAbstractListModel_ConnectNotify_Callback = void (*)(QAbstractListModel*, QMetaMethod*);
    using QAbstractListModel_DisconnectNotify_Callback = void (*)(QAbstractListModel*, QMetaMethod*);
    using QAbstractListModel::beginInsertColumns;
    using QAbstractListModel::beginInsertRows;
    using QAbstractListModel::beginMoveColumns;
    using QAbstractListModel::beginMoveRows;
    using QAbstractListModel::beginRemoveColumns;
    using QAbstractListModel::beginRemoveRows;
    using QAbstractListModel::beginResetModel;
    using QAbstractListModel::changePersistentIndex;
    using QAbstractListModel::changePersistentIndexList;
    using QAbstractListModel::createIndex;
    using QAbstractListModel::decodeData;
    using QAbstractListModel::encodeData;
    using QAbstractListModel::endInsertColumns;
    using QAbstractListModel::endInsertRows;
    using QAbstractListModel::endMoveColumns;
    using QAbstractListModel::endMoveRows;
    using QAbstractListModel::endRemoveColumns;
    using QAbstractListModel::endRemoveRows;
    using QAbstractListModel::endResetModel;
    using QAbstractListModel::isSignalConnected;
    using QAbstractListModel::persistentIndexList;
    using QAbstractListModel::receivers;
    using QAbstractListModel::sender;
    using QAbstractListModel::senderSignalIndex;

    // Instance callback storage
    QAbstractListModel_MetaObject_Callback qabstractlistmodel_metaobject_callback = nullptr;
    QAbstractListModel_Metacast_Callback qabstractlistmodel_metacast_callback = nullptr;
    QAbstractListModel_Metacall_Callback qabstractlistmodel_metacall_callback = nullptr;
    QAbstractListModel_Index_Callback qabstractlistmodel_index_callback = nullptr;
    QAbstractListModel_Sibling_Callback qabstractlistmodel_sibling_callback = nullptr;
    QAbstractListModel_DropMimeData_Callback qabstractlistmodel_dropmimedata_callback = nullptr;
    QAbstractListModel_Flags_Callback qabstractlistmodel_flags_callback = nullptr;
    QAbstractListModel_RowCount_Callback qabstractlistmodel_rowcount_callback = nullptr;
    QAbstractListModel_Data_Callback qabstractlistmodel_data_callback = nullptr;
    QAbstractListModel_SetData_Callback qabstractlistmodel_setdata_callback = nullptr;
    QAbstractListModel_HeaderData_Callback qabstractlistmodel_headerdata_callback = nullptr;
    QAbstractListModel_SetHeaderData_Callback qabstractlistmodel_setheaderdata_callback = nullptr;
    QAbstractListModel_ItemData_Callback qabstractlistmodel_itemdata_callback = nullptr;
    QAbstractListModel_SetItemData_Callback qabstractlistmodel_setitemdata_callback = nullptr;
    QAbstractListModel_ClearItemData_Callback qabstractlistmodel_clearitemdata_callback = nullptr;
    QAbstractListModel_MimeTypes_Callback qabstractlistmodel_mimetypes_callback = nullptr;
    QAbstractListModel_MimeData_Callback qabstractlistmodel_mimedata_callback = nullptr;
    QAbstractListModel_CanDropMimeData_Callback qabstractlistmodel_candropmimedata_callback = nullptr;
    QAbstractListModel_SupportedDropActions_Callback qabstractlistmodel_supporteddropactions_callback = nullptr;
    QAbstractListModel_SupportedDragActions_Callback qabstractlistmodel_supporteddragactions_callback = nullptr;
    QAbstractListModel_InsertRows_Callback qabstractlistmodel_insertrows_callback = nullptr;
    QAbstractListModel_InsertColumns_Callback qabstractlistmodel_insertcolumns_callback = nullptr;
    QAbstractListModel_RemoveRows_Callback qabstractlistmodel_removerows_callback = nullptr;
    QAbstractListModel_RemoveColumns_Callback qabstractlistmodel_removecolumns_callback = nullptr;
    QAbstractListModel_MoveRows_Callback qabstractlistmodel_moverows_callback = nullptr;
    QAbstractListModel_MoveColumns_Callback qabstractlistmodel_movecolumns_callback = nullptr;
    QAbstractListModel_FetchMore_Callback qabstractlistmodel_fetchmore_callback = nullptr;
    QAbstractListModel_CanFetchMore_Callback qabstractlistmodel_canfetchmore_callback = nullptr;
    QAbstractListModel_Sort_Callback qabstractlistmodel_sort_callback = nullptr;
    QAbstractListModel_Buddy_Callback qabstractlistmodel_buddy_callback = nullptr;
    QAbstractListModel_Match_Callback qabstractlistmodel_match_callback = nullptr;
    QAbstractListModel_Span_Callback qabstractlistmodel_span_callback = nullptr;
    QAbstractListModel_RoleNames_Callback qabstractlistmodel_rolenames_callback = nullptr;
    QAbstractListModel_MultiData_Callback qabstractlistmodel_multidata_callback = nullptr;
    QAbstractListModel_Submit_Callback qabstractlistmodel_submit_callback = nullptr;
    QAbstractListModel_Revert_Callback qabstractlistmodel_revert_callback = nullptr;
    QAbstractListModel_ResetInternalData_Callback qabstractlistmodel_resetinternaldata_callback = nullptr;
    QAbstractListModel_Event_Callback qabstractlistmodel_event_callback = nullptr;
    QAbstractListModel_EventFilter_Callback qabstractlistmodel_eventfilter_callback = nullptr;
    QAbstractListModel_TimerEvent_Callback qabstractlistmodel_timerevent_callback = nullptr;
    QAbstractListModel_ChildEvent_Callback qabstractlistmodel_childevent_callback = nullptr;
    QAbstractListModel_CustomEvent_Callback qabstractlistmodel_customevent_callback = nullptr;
    QAbstractListModel_ConnectNotify_Callback qabstractlistmodel_connectnotify_callback = nullptr;
    QAbstractListModel_DisconnectNotify_Callback qabstractlistmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractListModel {
        using QAbstractListModel::childEvent;
        using QAbstractListModel::connectNotify;
        using QAbstractListModel::customEvent;
        using QAbstractListModel::disconnectNotify;
        using QAbstractListModel::resetInternalData;
        using QAbstractListModel::timerEvent;
    };

    VirtualQAbstractListModel() : QAbstractListModel() {};
    VirtualQAbstractListModel(QObject* parent) : QAbstractListModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractlistmodel_metaobject_callback) {
            QMetaObject* callback_ret = qabstractlistmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractListModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractlistmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractlistmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractlistmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractlistmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractListModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qabstractlistmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qabstractlistmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractListModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstractlistmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qabstractlistmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractListModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstractlistmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractlistmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractListModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstractlistmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qabstractlistmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QAbstractListModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qabstractlistmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qabstractlistmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractListModel::rowCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qabstractlistmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qabstractlistmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractListModel::data called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstractlistmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qabstractlistmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstractlistmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qabstractlistmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractListModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstractlistmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qabstractlistmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractListModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstractlistmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qabstractlistmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QAbstractListModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstractlistmodel_setitemdata_callback) {
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
            bool callback_ret = qabstractlistmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractListModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstractlistmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qabstractlistmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstractlistmodel_mimetypes_callback) {
            const char** callback_ret = qabstractlistmodel_mimetypes_callback(this);
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
        return QAbstractListModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstractlistmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qabstractlistmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QAbstractListModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstractlistmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractlistmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractListModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstractlistmodel_supporteddropactions_callback) {
            int callback_ret = qabstractlistmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractListModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstractlistmodel_supporteddragactions_callback) {
            int callback_ret = qabstractlistmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractListModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractlistmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractlistmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractlistmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractlistmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractlistmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractListModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractlistmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstractlistmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractlistmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstractlistmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstractlistmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qabstractlistmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QAbstractListModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstractlistmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractlistmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstractlistmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qabstractlistmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractListModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstractlistmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qabstractlistmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractListModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstractlistmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qabstractlistmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAbstractListModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstractlistmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qabstractlistmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractListModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstractlistmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qabstractlistmodel_rolenames_callback(this);
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
        return QAbstractListModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstractlistmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qabstractlistmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractListModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstractlistmodel_submit_callback) {
            bool callback_ret = qabstractlistmodel_submit_callback(this);
            return callback_ret;
        }
        return QAbstractListModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstractlistmodel_revert_callback) {
            qabstractlistmodel_revert_callback(this);
            return;
        }
        QAbstractListModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstractlistmodel_resetinternaldata_callback) {
            qabstractlistmodel_resetinternaldata_callback(this);
            return;
        }
        QAbstractListModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractlistmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractlistmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractListModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractlistmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractlistmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractListModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractlistmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractlistmodel_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractListModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractlistmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractlistmodel_childevent_callback(this, cbval1);
            return;
        }
        QAbstractListModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractlistmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractlistmodel_customevent_callback(this, cbval1);
            return;
        }
        QAbstractListModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractlistmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractlistmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractListModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractlistmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractlistmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractListModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractListModel_SuperResetInternalData(QAbstractListModel* self);
    friend void QAbstractListModel_SuperTimerEvent(QAbstractListModel* self, QTimerEvent* event);
    friend void QAbstractListModel_SuperChildEvent(QAbstractListModel* self, QChildEvent* event);
    friend void QAbstractListModel_SuperCustomEvent(QAbstractListModel* self, QEvent* event);
    friend void QAbstractListModel_SuperConnectNotify(QAbstractListModel* self, const QMetaMethod* signal);
    friend void QAbstractListModel_SuperDisconnectNotify(QAbstractListModel* self, const QMetaMethod* signal);
};

#endif
