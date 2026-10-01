#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPAGEMODEL_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPAGEMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageModel
class VirtualKPageModel : public KPageModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPageModel_MetaObject_Callback = QMetaObject* (*)(const KPageModel*);
    using KPageModel_Metacast_Callback = void* (*)(KPageModel*, const char*);
    using KPageModel_Metacall_Callback = int (*)(KPageModel*, int, int, void**);
    using KPageModel_Index_Callback = QModelIndex* (*)(const KPageModel*, int, int, QModelIndex*);
    using KPageModel_Parent_Callback = QModelIndex* (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Sibling_Callback = QModelIndex* (*)(const KPageModel*, int, int, QModelIndex*);
    using KPageModel_RowCount_Callback = int (*)(const KPageModel*, QModelIndex*);
    using KPageModel_ColumnCount_Callback = int (*)(const KPageModel*, QModelIndex*);
    using KPageModel_HasChildren_Callback = bool (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Data_Callback = QVariant* (*)(const KPageModel*, QModelIndex*, int);
    using KPageModel_SetData_Callback = bool (*)(KPageModel*, QModelIndex*, QVariant*, int);
    using KPageModel_HeaderData_Callback = QVariant* (*)(const KPageModel*, int, int, int);
    using KPageModel_SetHeaderData_Callback = bool (*)(KPageModel*, int, int, QVariant*, int);
    using KPageModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KPageModel*, QModelIndex*);
    using KPageModel_SetItemData_Callback = bool (*)(KPageModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KPageModel_ClearItemData_Callback = bool (*)(KPageModel*, QModelIndex*);
    using KPageModel_MimeTypes_Callback = const char** (*)(const KPageModel*);
    using KPageModel_MimeData_Callback = QMimeData* (*)(const KPageModel*, libqt_list /* of QModelIndex* */);
    using KPageModel_CanDropMimeData_Callback = bool (*)(const KPageModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageModel_DropMimeData_Callback = bool (*)(KPageModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageModel_SupportedDropActions_Callback = int (*)(const KPageModel*);
    using KPageModel_SupportedDragActions_Callback = int (*)(const KPageModel*);
    using KPageModel_InsertRows_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_InsertColumns_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_RemoveRows_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_RemoveColumns_Callback = bool (*)(KPageModel*, int, int, QModelIndex*);
    using KPageModel_MoveRows_Callback = bool (*)(KPageModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageModel_MoveColumns_Callback = bool (*)(KPageModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageModel_FetchMore_Callback = void (*)(KPageModel*, QModelIndex*);
    using KPageModel_CanFetchMore_Callback = bool (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Flags_Callback = int (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Sort_Callback = void (*)(KPageModel*, int, int);
    using KPageModel_Buddy_Callback = QModelIndex* (*)(const KPageModel*, QModelIndex*);
    using KPageModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KPageModel*, QModelIndex*, int, QVariant*, int, int);
    using KPageModel_Span_Callback = QSize* (*)(const KPageModel*, QModelIndex*);
    using KPageModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KPageModel*);
    using KPageModel_MultiData_Callback = void (*)(const KPageModel*, QModelIndex*, QModelRoleDataSpan*);
    using KPageModel_Submit_Callback = bool (*)(KPageModel*);
    using KPageModel_Revert_Callback = void (*)(KPageModel*);
    using KPageModel_ResetInternalData_Callback = void (*)(KPageModel*);
    using KPageModel_Event_Callback = bool (*)(KPageModel*, QEvent*);
    using KPageModel_EventFilter_Callback = bool (*)(KPageModel*, QObject*, QEvent*);
    using KPageModel_TimerEvent_Callback = void (*)(KPageModel*, QTimerEvent*);
    using KPageModel_ChildEvent_Callback = void (*)(KPageModel*, QChildEvent*);
    using KPageModel_CustomEvent_Callback = void (*)(KPageModel*, QEvent*);
    using KPageModel_ConnectNotify_Callback = void (*)(KPageModel*, QMetaMethod*);
    using KPageModel_DisconnectNotify_Callback = void (*)(KPageModel*, QMetaMethod*);
    using KPageModel::beginInsertColumns;
    using KPageModel::beginInsertRows;
    using KPageModel::beginMoveColumns;
    using KPageModel::beginMoveRows;
    using KPageModel::beginRemoveColumns;
    using KPageModel::beginRemoveRows;
    using KPageModel::beginResetModel;
    using KPageModel::changePersistentIndex;
    using KPageModel::changePersistentIndexList;
    using KPageModel::createIndex;
    using KPageModel::decodeData;
    using KPageModel::encodeData;
    using KPageModel::endInsertColumns;
    using KPageModel::endInsertRows;
    using KPageModel::endMoveColumns;
    using KPageModel::endMoveRows;
    using KPageModel::endRemoveColumns;
    using KPageModel::endRemoveRows;
    using KPageModel::endResetModel;
    using KPageModel::isSignalConnected;
    using KPageModel::persistentIndexList;
    using KPageModel::receivers;
    using KPageModel::sender;
    using KPageModel::senderSignalIndex;

    // Instance callback storage
    KPageModel_MetaObject_Callback kpagemodel_metaobject_callback = nullptr;
    KPageModel_Metacast_Callback kpagemodel_metacast_callback = nullptr;
    KPageModel_Metacall_Callback kpagemodel_metacall_callback = nullptr;
    KPageModel_Index_Callback kpagemodel_index_callback = nullptr;
    KPageModel_Parent_Callback kpagemodel_parent_callback = nullptr;
    KPageModel_Sibling_Callback kpagemodel_sibling_callback = nullptr;
    KPageModel_RowCount_Callback kpagemodel_rowcount_callback = nullptr;
    KPageModel_ColumnCount_Callback kpagemodel_columncount_callback = nullptr;
    KPageModel_HasChildren_Callback kpagemodel_haschildren_callback = nullptr;
    KPageModel_Data_Callback kpagemodel_data_callback = nullptr;
    KPageModel_SetData_Callback kpagemodel_setdata_callback = nullptr;
    KPageModel_HeaderData_Callback kpagemodel_headerdata_callback = nullptr;
    KPageModel_SetHeaderData_Callback kpagemodel_setheaderdata_callback = nullptr;
    KPageModel_ItemData_Callback kpagemodel_itemdata_callback = nullptr;
    KPageModel_SetItemData_Callback kpagemodel_setitemdata_callback = nullptr;
    KPageModel_ClearItemData_Callback kpagemodel_clearitemdata_callback = nullptr;
    KPageModel_MimeTypes_Callback kpagemodel_mimetypes_callback = nullptr;
    KPageModel_MimeData_Callback kpagemodel_mimedata_callback = nullptr;
    KPageModel_CanDropMimeData_Callback kpagemodel_candropmimedata_callback = nullptr;
    KPageModel_DropMimeData_Callback kpagemodel_dropmimedata_callback = nullptr;
    KPageModel_SupportedDropActions_Callback kpagemodel_supporteddropactions_callback = nullptr;
    KPageModel_SupportedDragActions_Callback kpagemodel_supporteddragactions_callback = nullptr;
    KPageModel_InsertRows_Callback kpagemodel_insertrows_callback = nullptr;
    KPageModel_InsertColumns_Callback kpagemodel_insertcolumns_callback = nullptr;
    KPageModel_RemoveRows_Callback kpagemodel_removerows_callback = nullptr;
    KPageModel_RemoveColumns_Callback kpagemodel_removecolumns_callback = nullptr;
    KPageModel_MoveRows_Callback kpagemodel_moverows_callback = nullptr;
    KPageModel_MoveColumns_Callback kpagemodel_movecolumns_callback = nullptr;
    KPageModel_FetchMore_Callback kpagemodel_fetchmore_callback = nullptr;
    KPageModel_CanFetchMore_Callback kpagemodel_canfetchmore_callback = nullptr;
    KPageModel_Flags_Callback kpagemodel_flags_callback = nullptr;
    KPageModel_Sort_Callback kpagemodel_sort_callback = nullptr;
    KPageModel_Buddy_Callback kpagemodel_buddy_callback = nullptr;
    KPageModel_Match_Callback kpagemodel_match_callback = nullptr;
    KPageModel_Span_Callback kpagemodel_span_callback = nullptr;
    KPageModel_RoleNames_Callback kpagemodel_rolenames_callback = nullptr;
    KPageModel_MultiData_Callback kpagemodel_multidata_callback = nullptr;
    KPageModel_Submit_Callback kpagemodel_submit_callback = nullptr;
    KPageModel_Revert_Callback kpagemodel_revert_callback = nullptr;
    KPageModel_ResetInternalData_Callback kpagemodel_resetinternaldata_callback = nullptr;
    KPageModel_Event_Callback kpagemodel_event_callback = nullptr;
    KPageModel_EventFilter_Callback kpagemodel_eventfilter_callback = nullptr;
    KPageModel_TimerEvent_Callback kpagemodel_timerevent_callback = nullptr;
    KPageModel_ChildEvent_Callback kpagemodel_childevent_callback = nullptr;
    KPageModel_CustomEvent_Callback kpagemodel_customevent_callback = nullptr;
    KPageModel_ConnectNotify_Callback kpagemodel_connectnotify_callback = nullptr;
    KPageModel_DisconnectNotify_Callback kpagemodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPageModel {
        using KPageModel::childEvent;
        using KPageModel::connectNotify;
        using KPageModel::customEvent;
        using KPageModel::disconnectNotify;
        using KPageModel::resetInternalData;
        using KPageModel::timerEvent;
    };

    VirtualKPageModel() : KPageModel() {};
    VirtualKPageModel(QObject* parent) : KPageModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpagemodel_metaobject_callback) {
            QMetaObject* callback_ret = kpagemodel_metaobject_callback(this);
            return callback_ret;
        }
        return KPageModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpagemodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpagemodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPageModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagemodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpagemodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPageModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kpagemodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kpagemodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KPageModel::index called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (kpagemodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = kpagemodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KPageModel::parent called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kpagemodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kpagemodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kpagemodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kpagemodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KPageModel::rowCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kpagemodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kpagemodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KPageModel::columnCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kpagemodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KPageModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kpagemodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kpagemodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KPageModel::data called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kpagemodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kpagemodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kpagemodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kpagemodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kpagemodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kpagemodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KPageModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kpagemodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kpagemodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KPageModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kpagemodel_setitemdata_callback) {
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
            bool callback_ret = kpagemodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kpagemodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kpagemodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KPageModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kpagemodel_mimetypes_callback) {
            const char** callback_ret = kpagemodel_mimetypes_callback(this);
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
        return KPageModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kpagemodel_mimedata_callback) {
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
            QMimeData* callback_ret = kpagemodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KPageModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kpagemodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kpagemodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kpagemodel_supporteddropactions_callback) {
            int callback_ret = kpagemodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KPageModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kpagemodel_supporteddragactions_callback) {
            int callback_ret = kpagemodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KPageModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kpagemodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagemodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kpagemodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagemodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagemodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kpagemodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagemodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kpagemodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kpagemodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kpagemodel_fetchmore_callback(this, cbval1);
            return;
        }
        KPageModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kpagemodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagemodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KPageModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kpagemodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kpagemodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KPageModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kpagemodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kpagemodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KPageModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kpagemodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kpagemodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kpagemodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kpagemodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KPageModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kpagemodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kpagemodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kpagemodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kpagemodel_rolenames_callback(this);
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
        return KPageModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kpagemodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kpagemodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KPageModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kpagemodel_submit_callback) {
            bool callback_ret = kpagemodel_submit_callback(this);
            return callback_ret;
        }
        return KPageModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kpagemodel_revert_callback) {
            kpagemodel_revert_callback(this);
            return;
        }
        KPageModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kpagemodel_resetinternaldata_callback) {
            kpagemodel_resetinternaldata_callback(this);
            return;
        }
        KPageModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagemodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpagemodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPageModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagemodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpagemodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagemodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpagemodel_timerevent_callback(this, cbval1);
            return;
        }
        KPageModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagemodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpagemodel_childevent_callback(this, cbval1);
            return;
        }
        KPageModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagemodel_customevent_callback) {
            QEvent* cbval1 = event;
            kpagemodel_customevent_callback(this, cbval1);
            return;
        }
        KPageModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagemodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagemodel_connectnotify_callback(this, cbval1);
            return;
        }
        KPageModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagemodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagemodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPageModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPageModel_SuperResetInternalData(KPageModel* self);
    friend void KPageModel_SuperTimerEvent(KPageModel* self, QTimerEvent* event);
    friend void KPageModel_SuperChildEvent(KPageModel* self, QChildEvent* event);
    friend void KPageModel_SuperCustomEvent(KPageModel* self, QEvent* event);
    friend void KPageModel_SuperConnectNotify(KPageModel* self, const QMetaMethod* signal);
    friend void KPageModel_SuperDisconnectNotify(KPageModel* self, const QMetaMethod* signal);
};

#endif
