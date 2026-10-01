#pragma once
#ifndef EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMODEL_HXX
#define EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorSchemeModel
class VirtualKColorSchemeModel final : public KColorSchemeModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KColorSchemeModel_MetaObject_Callback = QMetaObject* (*)(const KColorSchemeModel*);
    using KColorSchemeModel_Metacast_Callback = void* (*)(KColorSchemeModel*, const char*);
    using KColorSchemeModel_Metacall_Callback = int (*)(KColorSchemeModel*, int, int, void**);
    using KColorSchemeModel_Data_Callback = QVariant* (*)(const KColorSchemeModel*, QModelIndex*, int);
    using KColorSchemeModel_RowCount_Callback = int (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_Index_Callback = QModelIndex* (*)(const KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_Sibling_Callback = QModelIndex* (*)(const KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_DropMimeData_Callback = bool (*)(KColorSchemeModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColorSchemeModel_Flags_Callback = int (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_SetData_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, QVariant*, int);
    using KColorSchemeModel_HeaderData_Callback = QVariant* (*)(const KColorSchemeModel*, int, int, int);
    using KColorSchemeModel_SetHeaderData_Callback = bool (*)(KColorSchemeModel*, int, int, QVariant*, int);
    using KColorSchemeModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_SetItemData_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KColorSchemeModel_ClearItemData_Callback = bool (*)(KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_MimeTypes_Callback = const char** (*)(const KColorSchemeModel*);
    using KColorSchemeModel_MimeData_Callback = QMimeData* (*)(const KColorSchemeModel*, libqt_list /* of QModelIndex* */);
    using KColorSchemeModel_CanDropMimeData_Callback = bool (*)(const KColorSchemeModel*, QMimeData*, int, int, int, QModelIndex*);
    using KColorSchemeModel_SupportedDropActions_Callback = int (*)(const KColorSchemeModel*);
    using KColorSchemeModel_SupportedDragActions_Callback = int (*)(const KColorSchemeModel*);
    using KColorSchemeModel_InsertRows_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_InsertColumns_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_RemoveRows_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_RemoveColumns_Callback = bool (*)(KColorSchemeModel*, int, int, QModelIndex*);
    using KColorSchemeModel_MoveRows_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColorSchemeModel_MoveColumns_Callback = bool (*)(KColorSchemeModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KColorSchemeModel_FetchMore_Callback = void (*)(KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_CanFetchMore_Callback = bool (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_Sort_Callback = void (*)(KColorSchemeModel*, int, int);
    using KColorSchemeModel_Buddy_Callback = QModelIndex* (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KColorSchemeModel*, QModelIndex*, int, QVariant*, int, int);
    using KColorSchemeModel_Span_Callback = QSize* (*)(const KColorSchemeModel*, QModelIndex*);
    using KColorSchemeModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KColorSchemeModel*);
    using KColorSchemeModel_MultiData_Callback = void (*)(const KColorSchemeModel*, QModelIndex*, QModelRoleDataSpan*);
    using KColorSchemeModel_Submit_Callback = bool (*)(KColorSchemeModel*);
    using KColorSchemeModel_Revert_Callback = void (*)(KColorSchemeModel*);
    using KColorSchemeModel_ResetInternalData_Callback = void (*)(KColorSchemeModel*);
    using KColorSchemeModel_Event_Callback = bool (*)(KColorSchemeModel*, QEvent*);
    using KColorSchemeModel_EventFilter_Callback = bool (*)(KColorSchemeModel*, QObject*, QEvent*);
    using KColorSchemeModel_TimerEvent_Callback = void (*)(KColorSchemeModel*, QTimerEvent*);
    using KColorSchemeModel_ChildEvent_Callback = void (*)(KColorSchemeModel*, QChildEvent*);
    using KColorSchemeModel_CustomEvent_Callback = void (*)(KColorSchemeModel*, QEvent*);
    using KColorSchemeModel_ConnectNotify_Callback = void (*)(KColorSchemeModel*, QMetaMethod*);
    using KColorSchemeModel_DisconnectNotify_Callback = void (*)(KColorSchemeModel*, QMetaMethod*);
    using KColorSchemeModel::beginInsertColumns;
    using KColorSchemeModel::beginInsertRows;
    using KColorSchemeModel::beginMoveColumns;
    using KColorSchemeModel::beginMoveRows;
    using KColorSchemeModel::beginRemoveColumns;
    using KColorSchemeModel::beginRemoveRows;
    using KColorSchemeModel::beginResetModel;
    using KColorSchemeModel::changePersistentIndex;
    using KColorSchemeModel::changePersistentIndexList;
    using KColorSchemeModel::createIndex;
    using KColorSchemeModel::decodeData;
    using KColorSchemeModel::encodeData;
    using KColorSchemeModel::endInsertColumns;
    using KColorSchemeModel::endInsertRows;
    using KColorSchemeModel::endMoveColumns;
    using KColorSchemeModel::endMoveRows;
    using KColorSchemeModel::endRemoveColumns;
    using KColorSchemeModel::endRemoveRows;
    using KColorSchemeModel::endResetModel;
    using KColorSchemeModel::isSignalConnected;
    using KColorSchemeModel::persistentIndexList;
    using KColorSchemeModel::receivers;
    using KColorSchemeModel::sender;
    using KColorSchemeModel::senderSignalIndex;

    // Instance callback storage
    KColorSchemeModel_MetaObject_Callback kcolorschememodel_metaobject_callback = nullptr;
    KColorSchemeModel_Metacast_Callback kcolorschememodel_metacast_callback = nullptr;
    KColorSchemeModel_Metacall_Callback kcolorschememodel_metacall_callback = nullptr;
    KColorSchemeModel_Data_Callback kcolorschememodel_data_callback = nullptr;
    KColorSchemeModel_RowCount_Callback kcolorschememodel_rowcount_callback = nullptr;
    KColorSchemeModel_Index_Callback kcolorschememodel_index_callback = nullptr;
    KColorSchemeModel_Sibling_Callback kcolorschememodel_sibling_callback = nullptr;
    KColorSchemeModel_DropMimeData_Callback kcolorschememodel_dropmimedata_callback = nullptr;
    KColorSchemeModel_Flags_Callback kcolorschememodel_flags_callback = nullptr;
    KColorSchemeModel_SetData_Callback kcolorschememodel_setdata_callback = nullptr;
    KColorSchemeModel_HeaderData_Callback kcolorschememodel_headerdata_callback = nullptr;
    KColorSchemeModel_SetHeaderData_Callback kcolorschememodel_setheaderdata_callback = nullptr;
    KColorSchemeModel_ItemData_Callback kcolorschememodel_itemdata_callback = nullptr;
    KColorSchemeModel_SetItemData_Callback kcolorschememodel_setitemdata_callback = nullptr;
    KColorSchemeModel_ClearItemData_Callback kcolorschememodel_clearitemdata_callback = nullptr;
    KColorSchemeModel_MimeTypes_Callback kcolorschememodel_mimetypes_callback = nullptr;
    KColorSchemeModel_MimeData_Callback kcolorschememodel_mimedata_callback = nullptr;
    KColorSchemeModel_CanDropMimeData_Callback kcolorschememodel_candropmimedata_callback = nullptr;
    KColorSchemeModel_SupportedDropActions_Callback kcolorschememodel_supporteddropactions_callback = nullptr;
    KColorSchemeModel_SupportedDragActions_Callback kcolorschememodel_supporteddragactions_callback = nullptr;
    KColorSchemeModel_InsertRows_Callback kcolorschememodel_insertrows_callback = nullptr;
    KColorSchemeModel_InsertColumns_Callback kcolorschememodel_insertcolumns_callback = nullptr;
    KColorSchemeModel_RemoveRows_Callback kcolorschememodel_removerows_callback = nullptr;
    KColorSchemeModel_RemoveColumns_Callback kcolorschememodel_removecolumns_callback = nullptr;
    KColorSchemeModel_MoveRows_Callback kcolorschememodel_moverows_callback = nullptr;
    KColorSchemeModel_MoveColumns_Callback kcolorschememodel_movecolumns_callback = nullptr;
    KColorSchemeModel_FetchMore_Callback kcolorschememodel_fetchmore_callback = nullptr;
    KColorSchemeModel_CanFetchMore_Callback kcolorschememodel_canfetchmore_callback = nullptr;
    KColorSchemeModel_Sort_Callback kcolorschememodel_sort_callback = nullptr;
    KColorSchemeModel_Buddy_Callback kcolorschememodel_buddy_callback = nullptr;
    KColorSchemeModel_Match_Callback kcolorschememodel_match_callback = nullptr;
    KColorSchemeModel_Span_Callback kcolorschememodel_span_callback = nullptr;
    KColorSchemeModel_RoleNames_Callback kcolorschememodel_rolenames_callback = nullptr;
    KColorSchemeModel_MultiData_Callback kcolorschememodel_multidata_callback = nullptr;
    KColorSchemeModel_Submit_Callback kcolorschememodel_submit_callback = nullptr;
    KColorSchemeModel_Revert_Callback kcolorschememodel_revert_callback = nullptr;
    KColorSchemeModel_ResetInternalData_Callback kcolorschememodel_resetinternaldata_callback = nullptr;
    KColorSchemeModel_Event_Callback kcolorschememodel_event_callback = nullptr;
    KColorSchemeModel_EventFilter_Callback kcolorschememodel_eventfilter_callback = nullptr;
    KColorSchemeModel_TimerEvent_Callback kcolorschememodel_timerevent_callback = nullptr;
    KColorSchemeModel_ChildEvent_Callback kcolorschememodel_childevent_callback = nullptr;
    KColorSchemeModel_CustomEvent_Callback kcolorschememodel_customevent_callback = nullptr;
    KColorSchemeModel_ConnectNotify_Callback kcolorschememodel_connectnotify_callback = nullptr;
    KColorSchemeModel_DisconnectNotify_Callback kcolorschememodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KColorSchemeModel {
        using KColorSchemeModel::childEvent;
        using KColorSchemeModel::connectNotify;
        using KColorSchemeModel::customEvent;
        using KColorSchemeModel::disconnectNotify;
        using KColorSchemeModel::resetInternalData;
        using KColorSchemeModel::timerEvent;
    };

    VirtualKColorSchemeModel() : KColorSchemeModel() {};
    VirtualKColorSchemeModel(QObject* parent) : KColorSchemeModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorschememodel_metaobject_callback) {
            QMetaObject* callback_ret = kcolorschememodel_metaobject_callback(this);
            return callback_ret;
        }
        return KColorSchemeModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorschememodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcolorschememodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorschememodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcolorschememodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kcolorschememodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kcolorschememodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorSchemeModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kcolorschememodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kcolorschememodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorSchemeModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kcolorschememodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kcolorschememodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorSchemeModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kcolorschememodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kcolorschememodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorSchemeModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kcolorschememodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolorschememodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColorSchemeModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kcolorschememodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kcolorschememodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KColorSchemeModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kcolorschememodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kcolorschememodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kcolorschememodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kcolorschememodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorSchemeModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kcolorschememodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kcolorschememodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KColorSchemeModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kcolorschememodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kcolorschememodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KColorSchemeModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kcolorschememodel_setitemdata_callback) {
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
            bool callback_ret = kcolorschememodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorSchemeModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kcolorschememodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kcolorschememodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kcolorschememodel_mimetypes_callback) {
            const char** callback_ret = kcolorschememodel_mimetypes_callback(this);
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
        return KColorSchemeModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kcolorschememodel_mimedata_callback) {
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
            QMimeData* callback_ret = kcolorschememodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KColorSchemeModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kcolorschememodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolorschememodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColorSchemeModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kcolorschememodel_supporteddropactions_callback) {
            int callback_ret = kcolorschememodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KColorSchemeModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kcolorschememodel_supporteddragactions_callback) {
            int callback_ret = kcolorschememodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KColorSchemeModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolorschememodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolorschememodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolorschememodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kcolorschememodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolorschememodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KColorSchemeModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolorschememodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcolorschememodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColorSchemeModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kcolorschememodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kcolorschememodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KColorSchemeModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kcolorschememodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kcolorschememodel_fetchmore_callback(this, cbval1);
            return;
        }
        KColorSchemeModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kcolorschememodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kcolorschememodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kcolorschememodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kcolorschememodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KColorSchemeModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kcolorschememodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kcolorschememodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorSchemeModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kcolorschememodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kcolorschememodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KColorSchemeModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kcolorschememodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kcolorschememodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KColorSchemeModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kcolorschememodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kcolorschememodel_rolenames_callback(this);
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
        return KColorSchemeModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kcolorschememodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kcolorschememodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KColorSchemeModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kcolorschememodel_submit_callback) {
            bool callback_ret = kcolorschememodel_submit_callback(this);
            return callback_ret;
        }
        return KColorSchemeModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kcolorschememodel_revert_callback) {
            kcolorschememodel_revert_callback(this);
            return;
        }
        KColorSchemeModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kcolorschememodel_resetinternaldata_callback) {
            kcolorschememodel_resetinternaldata_callback(this);
            return;
        }
        KColorSchemeModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorschememodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcolorschememodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KColorSchemeModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorschememodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcolorschememodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorSchemeModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorschememodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcolorschememodel_timerevent_callback(this, cbval1);
            return;
        }
        KColorSchemeModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorschememodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcolorschememodel_childevent_callback(this, cbval1);
            return;
        }
        KColorSchemeModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorschememodel_customevent_callback) {
            QEvent* cbval1 = event;
            kcolorschememodel_customevent_callback(this, cbval1);
            return;
        }
        KColorSchemeModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorschememodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorschememodel_connectnotify_callback(this, cbval1);
            return;
        }
        KColorSchemeModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorschememodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcolorschememodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KColorSchemeModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KColorSchemeModel_SuperResetInternalData(KColorSchemeModel* self);
    friend void KColorSchemeModel_SuperTimerEvent(KColorSchemeModel* self, QTimerEvent* event);
    friend void KColorSchemeModel_SuperChildEvent(KColorSchemeModel* self, QChildEvent* event);
    friend void KColorSchemeModel_SuperCustomEvent(KColorSchemeModel* self, QEvent* event);
    friend void KColorSchemeModel_SuperConnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
    friend void KColorSchemeModel_SuperDisconnectNotify(KColorSchemeModel* self, const QMetaMethod* signal);
};

#endif
