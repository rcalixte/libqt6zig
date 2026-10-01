#pragma once
#ifndef LIBQSTRINGLISTMODEL_HXX
#define LIBQSTRINGLISTMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStringListModel
class VirtualQStringListModel final : public QStringListModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStringListModel_MetaObject_Callback = QMetaObject* (*)(const QStringListModel*);
    using QStringListModel_Metacast_Callback = void* (*)(QStringListModel*, const char*);
    using QStringListModel_Metacall_Callback = int (*)(QStringListModel*, int, int, void**);
    using QStringListModel_RowCount_Callback = int (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_Sibling_Callback = QModelIndex* (*)(const QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_Data_Callback = QVariant* (*)(const QStringListModel*, QModelIndex*, int);
    using QStringListModel_SetData_Callback = bool (*)(QStringListModel*, QModelIndex*, QVariant*, int);
    using QStringListModel_ClearItemData_Callback = bool (*)(QStringListModel*, QModelIndex*);
    using QStringListModel_Flags_Callback = int (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_InsertRows_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_RemoveRows_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_MoveRows_Callback = bool (*)(QStringListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStringListModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_SetItemData_Callback = bool (*)(QStringListModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QStringListModel_Sort_Callback = void (*)(QStringListModel*, int, int);
    using QStringListModel_SupportedDropActions_Callback = int (*)(const QStringListModel*);
    using QStringListModel_Index_Callback = QModelIndex* (*)(const QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_DropMimeData_Callback = bool (*)(QStringListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStringListModel_HeaderData_Callback = QVariant* (*)(const QStringListModel*, int, int, int);
    using QStringListModel_SetHeaderData_Callback = bool (*)(QStringListModel*, int, int, QVariant*, int);
    using QStringListModel_MimeTypes_Callback = const char** (*)(const QStringListModel*);
    using QStringListModel_MimeData_Callback = QMimeData* (*)(const QStringListModel*, libqt_list /* of QModelIndex* */);
    using QStringListModel_CanDropMimeData_Callback = bool (*)(const QStringListModel*, QMimeData*, int, int, int, QModelIndex*);
    using QStringListModel_SupportedDragActions_Callback = int (*)(const QStringListModel*);
    using QStringListModel_InsertColumns_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_RemoveColumns_Callback = bool (*)(QStringListModel*, int, int, QModelIndex*);
    using QStringListModel_MoveColumns_Callback = bool (*)(QStringListModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QStringListModel_FetchMore_Callback = void (*)(QStringListModel*, QModelIndex*);
    using QStringListModel_CanFetchMore_Callback = bool (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_Buddy_Callback = QModelIndex* (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QStringListModel*, QModelIndex*, int, QVariant*, int, int);
    using QStringListModel_Span_Callback = QSize* (*)(const QStringListModel*, QModelIndex*);
    using QStringListModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QStringListModel*);
    using QStringListModel_MultiData_Callback = void (*)(const QStringListModel*, QModelIndex*, QModelRoleDataSpan*);
    using QStringListModel_Submit_Callback = bool (*)(QStringListModel*);
    using QStringListModel_Revert_Callback = void (*)(QStringListModel*);
    using QStringListModel_ResetInternalData_Callback = void (*)(QStringListModel*);
    using QStringListModel_Event_Callback = bool (*)(QStringListModel*, QEvent*);
    using QStringListModel_EventFilter_Callback = bool (*)(QStringListModel*, QObject*, QEvent*);
    using QStringListModel_TimerEvent_Callback = void (*)(QStringListModel*, QTimerEvent*);
    using QStringListModel_ChildEvent_Callback = void (*)(QStringListModel*, QChildEvent*);
    using QStringListModel_CustomEvent_Callback = void (*)(QStringListModel*, QEvent*);
    using QStringListModel_ConnectNotify_Callback = void (*)(QStringListModel*, QMetaMethod*);
    using QStringListModel_DisconnectNotify_Callback = void (*)(QStringListModel*, QMetaMethod*);
    using QStringListModel::beginInsertColumns;
    using QStringListModel::beginInsertRows;
    using QStringListModel::beginMoveColumns;
    using QStringListModel::beginMoveRows;
    using QStringListModel::beginRemoveColumns;
    using QStringListModel::beginRemoveRows;
    using QStringListModel::beginResetModel;
    using QStringListModel::changePersistentIndex;
    using QStringListModel::changePersistentIndexList;
    using QStringListModel::createIndex;
    using QStringListModel::decodeData;
    using QStringListModel::encodeData;
    using QStringListModel::endInsertColumns;
    using QStringListModel::endInsertRows;
    using QStringListModel::endMoveColumns;
    using QStringListModel::endMoveRows;
    using QStringListModel::endRemoveColumns;
    using QStringListModel::endRemoveRows;
    using QStringListModel::endResetModel;
    using QStringListModel::isSignalConnected;
    using QStringListModel::persistentIndexList;
    using QStringListModel::receivers;
    using QStringListModel::sender;
    using QStringListModel::senderSignalIndex;

    // Instance callback storage
    QStringListModel_MetaObject_Callback qstringlistmodel_metaobject_callback = nullptr;
    QStringListModel_Metacast_Callback qstringlistmodel_metacast_callback = nullptr;
    QStringListModel_Metacall_Callback qstringlistmodel_metacall_callback = nullptr;
    QStringListModel_RowCount_Callback qstringlistmodel_rowcount_callback = nullptr;
    QStringListModel_Sibling_Callback qstringlistmodel_sibling_callback = nullptr;
    QStringListModel_Data_Callback qstringlistmodel_data_callback = nullptr;
    QStringListModel_SetData_Callback qstringlistmodel_setdata_callback = nullptr;
    QStringListModel_ClearItemData_Callback qstringlistmodel_clearitemdata_callback = nullptr;
    QStringListModel_Flags_Callback qstringlistmodel_flags_callback = nullptr;
    QStringListModel_InsertRows_Callback qstringlistmodel_insertrows_callback = nullptr;
    QStringListModel_RemoveRows_Callback qstringlistmodel_removerows_callback = nullptr;
    QStringListModel_MoveRows_Callback qstringlistmodel_moverows_callback = nullptr;
    QStringListModel_ItemData_Callback qstringlistmodel_itemdata_callback = nullptr;
    QStringListModel_SetItemData_Callback qstringlistmodel_setitemdata_callback = nullptr;
    QStringListModel_Sort_Callback qstringlistmodel_sort_callback = nullptr;
    QStringListModel_SupportedDropActions_Callback qstringlistmodel_supporteddropactions_callback = nullptr;
    QStringListModel_Index_Callback qstringlistmodel_index_callback = nullptr;
    QStringListModel_DropMimeData_Callback qstringlistmodel_dropmimedata_callback = nullptr;
    QStringListModel_HeaderData_Callback qstringlistmodel_headerdata_callback = nullptr;
    QStringListModel_SetHeaderData_Callback qstringlistmodel_setheaderdata_callback = nullptr;
    QStringListModel_MimeTypes_Callback qstringlistmodel_mimetypes_callback = nullptr;
    QStringListModel_MimeData_Callback qstringlistmodel_mimedata_callback = nullptr;
    QStringListModel_CanDropMimeData_Callback qstringlistmodel_candropmimedata_callback = nullptr;
    QStringListModel_SupportedDragActions_Callback qstringlistmodel_supporteddragactions_callback = nullptr;
    QStringListModel_InsertColumns_Callback qstringlistmodel_insertcolumns_callback = nullptr;
    QStringListModel_RemoveColumns_Callback qstringlistmodel_removecolumns_callback = nullptr;
    QStringListModel_MoveColumns_Callback qstringlistmodel_movecolumns_callback = nullptr;
    QStringListModel_FetchMore_Callback qstringlistmodel_fetchmore_callback = nullptr;
    QStringListModel_CanFetchMore_Callback qstringlistmodel_canfetchmore_callback = nullptr;
    QStringListModel_Buddy_Callback qstringlistmodel_buddy_callback = nullptr;
    QStringListModel_Match_Callback qstringlistmodel_match_callback = nullptr;
    QStringListModel_Span_Callback qstringlistmodel_span_callback = nullptr;
    QStringListModel_RoleNames_Callback qstringlistmodel_rolenames_callback = nullptr;
    QStringListModel_MultiData_Callback qstringlistmodel_multidata_callback = nullptr;
    QStringListModel_Submit_Callback qstringlistmodel_submit_callback = nullptr;
    QStringListModel_Revert_Callback qstringlistmodel_revert_callback = nullptr;
    QStringListModel_ResetInternalData_Callback qstringlistmodel_resetinternaldata_callback = nullptr;
    QStringListModel_Event_Callback qstringlistmodel_event_callback = nullptr;
    QStringListModel_EventFilter_Callback qstringlistmodel_eventfilter_callback = nullptr;
    QStringListModel_TimerEvent_Callback qstringlistmodel_timerevent_callback = nullptr;
    QStringListModel_ChildEvent_Callback qstringlistmodel_childevent_callback = nullptr;
    QStringListModel_CustomEvent_Callback qstringlistmodel_customevent_callback = nullptr;
    QStringListModel_ConnectNotify_Callback qstringlistmodel_connectnotify_callback = nullptr;
    QStringListModel_DisconnectNotify_Callback qstringlistmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QStringListModel {
        using QStringListModel::childEvent;
        using QStringListModel::connectNotify;
        using QStringListModel::customEvent;
        using QStringListModel::disconnectNotify;
        using QStringListModel::resetInternalData;
        using QStringListModel::timerEvent;
    };

    VirtualQStringListModel() : QStringListModel() {};
    VirtualQStringListModel(const QList<QString>& strings) : QStringListModel(strings) {};
    VirtualQStringListModel(QObject* parent) : QStringListModel(parent) {};
    VirtualQStringListModel(const QList<QString>& strings, QObject* parent) : QStringListModel(strings, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstringlistmodel_metaobject_callback) {
            QMetaObject* callback_ret = qstringlistmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QStringListModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstringlistmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstringlistmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStringListModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstringlistmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstringlistmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStringListModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qstringlistmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qstringlistmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStringListModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qstringlistmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qstringlistmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStringListModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (qstringlistmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = qstringlistmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStringListModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qstringlistmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qstringlistmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStringListModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qstringlistmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qstringlistmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QStringListModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qstringlistmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qstringlistmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QStringListModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstringlistmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStringListModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstringlistmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStringListModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstringlistmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qstringlistmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qstringlistmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qstringlistmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QStringListModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qstringlistmodel_setitemdata_callback) {
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
            bool callback_ret = qstringlistmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStringListModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qstringlistmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qstringlistmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QStringListModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qstringlistmodel_supporteddropactions_callback) {
            int callback_ret = qstringlistmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QStringListModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qstringlistmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qstringlistmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStringListModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qstringlistmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstringlistmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStringListModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qstringlistmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qstringlistmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStringListModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qstringlistmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qstringlistmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QStringListModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qstringlistmodel_mimetypes_callback) {
            const char** callback_ret = qstringlistmodel_mimetypes_callback(this);
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
        return QStringListModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qstringlistmodel_mimedata_callback) {
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
            QMimeData* callback_ret = qstringlistmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QStringListModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qstringlistmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstringlistmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStringListModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qstringlistmodel_supporteddragactions_callback) {
            int callback_ret = qstringlistmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QStringListModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstringlistmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStringListModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qstringlistmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstringlistmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStringListModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qstringlistmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qstringlistmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QStringListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qstringlistmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qstringlistmodel_fetchmore_callback(this, cbval1);
            return;
        }
        QStringListModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qstringlistmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qstringlistmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QStringListModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qstringlistmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qstringlistmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStringListModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qstringlistmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qstringlistmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QStringListModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qstringlistmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qstringlistmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStringListModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qstringlistmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qstringlistmodel_rolenames_callback(this);
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
        return QStringListModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qstringlistmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qstringlistmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QStringListModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qstringlistmodel_submit_callback) {
            bool callback_ret = qstringlistmodel_submit_callback(this);
            return callback_ret;
        }
        return QStringListModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qstringlistmodel_revert_callback) {
            qstringlistmodel_revert_callback(this);
            return;
        }
        QStringListModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qstringlistmodel_resetinternaldata_callback) {
            qstringlistmodel_resetinternaldata_callback(this);
            return;
        }
        QStringListModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstringlistmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qstringlistmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStringListModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstringlistmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstringlistmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStringListModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstringlistmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstringlistmodel_timerevent_callback(this, cbval1);
            return;
        }
        QStringListModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstringlistmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstringlistmodel_childevent_callback(this, cbval1);
            return;
        }
        QStringListModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstringlistmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qstringlistmodel_customevent_callback(this, cbval1);
            return;
        }
        QStringListModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstringlistmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstringlistmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QStringListModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstringlistmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstringlistmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStringListModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStringListModel_SuperResetInternalData(QStringListModel* self);
    friend void QStringListModel_SuperTimerEvent(QStringListModel* self, QTimerEvent* event);
    friend void QStringListModel_SuperChildEvent(QStringListModel* self, QChildEvent* event);
    friend void QStringListModel_SuperCustomEvent(QStringListModel* self, QEvent* event);
    friend void QStringListModel_SuperConnectNotify(QStringListModel* self, const QMetaMethod* signal);
    friend void QStringListModel_SuperDisconnectNotify(QStringListModel* self, const QMetaMethod* signal);
};

#endif
