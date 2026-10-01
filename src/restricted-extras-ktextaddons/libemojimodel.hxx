#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOJIMODEL_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOJIMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::EmojiModel
class VirtualTextEmoticonsCoreEmojiModel final : public TextEmoticonsCore::EmojiModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEmoticonsCore__EmojiModel_MetaObject_Callback = QMetaObject* (*)(const TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_Metacast_Callback = void* (*)(TextEmoticonsCore__EmojiModel*, const char*);
    using TextEmoticonsCore__EmojiModel_Metacall_Callback = int (*)(TextEmoticonsCore__EmojiModel*, int, int, void**);
    using TextEmoticonsCore__EmojiModel_RowCount_Callback = int (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_Data_Callback = QVariant* (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*, int);
    using TextEmoticonsCore__EmojiModel_Index_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_Sibling_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_DropMimeData_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QMimeData*, int, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_Flags_Callback = int (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_SetData_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QModelIndex*, QVariant*, int);
    using TextEmoticonsCore__EmojiModel_HeaderData_Callback = QVariant* (*)(const TextEmoticonsCore__EmojiModel*, int, int, int);
    using TextEmoticonsCore__EmojiModel_SetHeaderData_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, int, int, QVariant*, int);
    using TextEmoticonsCore__EmojiModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_SetItemData_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using TextEmoticonsCore__EmojiModel_ClearItemData_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_MimeTypes_Callback = const char** (*)(const TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_MimeData_Callback = QMimeData* (*)(const TextEmoticonsCore__EmojiModel*, libqt_list /* of QModelIndex* */);
    using TextEmoticonsCore__EmojiModel_CanDropMimeData_Callback = bool (*)(const TextEmoticonsCore__EmojiModel*, QMimeData*, int, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_SupportedDropActions_Callback = int (*)(const TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_SupportedDragActions_Callback = int (*)(const TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_InsertRows_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_InsertColumns_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_RemoveRows_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_RemoveColumns_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_MoveRows_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiModel_MoveColumns_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiModel_FetchMore_Callback = void (*)(TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_CanFetchMore_Callback = bool (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_Sort_Callback = void (*)(TextEmoticonsCore__EmojiModel*, int, int);
    using TextEmoticonsCore__EmojiModel_Buddy_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*, int, QVariant*, int, int);
    using TextEmoticonsCore__EmojiModel_Span_Callback = QSize* (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_MultiData_Callback = void (*)(const TextEmoticonsCore__EmojiModel*, QModelIndex*, QModelRoleDataSpan*);
    using TextEmoticonsCore__EmojiModel_Submit_Callback = bool (*)(TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_Revert_Callback = void (*)(TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_ResetInternalData_Callback = void (*)(TextEmoticonsCore__EmojiModel*);
    using TextEmoticonsCore__EmojiModel_Event_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QEvent*);
    using TextEmoticonsCore__EmojiModel_EventFilter_Callback = bool (*)(TextEmoticonsCore__EmojiModel*, QObject*, QEvent*);
    using TextEmoticonsCore__EmojiModel_TimerEvent_Callback = void (*)(TextEmoticonsCore__EmojiModel*, QTimerEvent*);
    using TextEmoticonsCore__EmojiModel_ChildEvent_Callback = void (*)(TextEmoticonsCore__EmojiModel*, QChildEvent*);
    using TextEmoticonsCore__EmojiModel_CustomEvent_Callback = void (*)(TextEmoticonsCore__EmojiModel*, QEvent*);
    using TextEmoticonsCore__EmojiModel_ConnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiModel*, QMetaMethod*);
    using TextEmoticonsCore__EmojiModel_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiModel*, QMetaMethod*);
    using TextEmoticonsCore::EmojiModel::beginInsertColumns;
    using TextEmoticonsCore::EmojiModel::beginInsertRows;
    using TextEmoticonsCore::EmojiModel::beginMoveColumns;
    using TextEmoticonsCore::EmojiModel::beginMoveRows;
    using TextEmoticonsCore::EmojiModel::beginRemoveColumns;
    using TextEmoticonsCore::EmojiModel::beginRemoveRows;
    using TextEmoticonsCore::EmojiModel::beginResetModel;
    using TextEmoticonsCore::EmojiModel::changePersistentIndex;
    using TextEmoticonsCore::EmojiModel::changePersistentIndexList;
    using TextEmoticonsCore::EmojiModel::createIndex;
    using TextEmoticonsCore::EmojiModel::decodeData;
    using TextEmoticonsCore::EmojiModel::encodeData;
    using TextEmoticonsCore::EmojiModel::endInsertColumns;
    using TextEmoticonsCore::EmojiModel::endInsertRows;
    using TextEmoticonsCore::EmojiModel::endMoveColumns;
    using TextEmoticonsCore::EmojiModel::endMoveRows;
    using TextEmoticonsCore::EmojiModel::endRemoveColumns;
    using TextEmoticonsCore::EmojiModel::endRemoveRows;
    using TextEmoticonsCore::EmojiModel::endResetModel;
    using TextEmoticonsCore::EmojiModel::isSignalConnected;
    using TextEmoticonsCore::EmojiModel::persistentIndexList;
    using TextEmoticonsCore::EmojiModel::receivers;
    using TextEmoticonsCore::EmojiModel::sender;
    using TextEmoticonsCore::EmojiModel::senderSignalIndex;

    // Instance callback storage
    TextEmoticonsCore__EmojiModel_MetaObject_Callback textemoticonscore__emojimodel_metaobject_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Metacast_Callback textemoticonscore__emojimodel_metacast_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Metacall_Callback textemoticonscore__emojimodel_metacall_callback = nullptr;
    TextEmoticonsCore__EmojiModel_RowCount_Callback textemoticonscore__emojimodel_rowcount_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Data_Callback textemoticonscore__emojimodel_data_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Index_Callback textemoticonscore__emojimodel_index_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Sibling_Callback textemoticonscore__emojimodel_sibling_callback = nullptr;
    TextEmoticonsCore__EmojiModel_DropMimeData_Callback textemoticonscore__emojimodel_dropmimedata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Flags_Callback textemoticonscore__emojimodel_flags_callback = nullptr;
    TextEmoticonsCore__EmojiModel_SetData_Callback textemoticonscore__emojimodel_setdata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_HeaderData_Callback textemoticonscore__emojimodel_headerdata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_SetHeaderData_Callback textemoticonscore__emojimodel_setheaderdata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_ItemData_Callback textemoticonscore__emojimodel_itemdata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_SetItemData_Callback textemoticonscore__emojimodel_setitemdata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_ClearItemData_Callback textemoticonscore__emojimodel_clearitemdata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_MimeTypes_Callback textemoticonscore__emojimodel_mimetypes_callback = nullptr;
    TextEmoticonsCore__EmojiModel_MimeData_Callback textemoticonscore__emojimodel_mimedata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_CanDropMimeData_Callback textemoticonscore__emojimodel_candropmimedata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_SupportedDropActions_Callback textemoticonscore__emojimodel_supporteddropactions_callback = nullptr;
    TextEmoticonsCore__EmojiModel_SupportedDragActions_Callback textemoticonscore__emojimodel_supporteddragactions_callback = nullptr;
    TextEmoticonsCore__EmojiModel_InsertRows_Callback textemoticonscore__emojimodel_insertrows_callback = nullptr;
    TextEmoticonsCore__EmojiModel_InsertColumns_Callback textemoticonscore__emojimodel_insertcolumns_callback = nullptr;
    TextEmoticonsCore__EmojiModel_RemoveRows_Callback textemoticonscore__emojimodel_removerows_callback = nullptr;
    TextEmoticonsCore__EmojiModel_RemoveColumns_Callback textemoticonscore__emojimodel_removecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiModel_MoveRows_Callback textemoticonscore__emojimodel_moverows_callback = nullptr;
    TextEmoticonsCore__EmojiModel_MoveColumns_Callback textemoticonscore__emojimodel_movecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiModel_FetchMore_Callback textemoticonscore__emojimodel_fetchmore_callback = nullptr;
    TextEmoticonsCore__EmojiModel_CanFetchMore_Callback textemoticonscore__emojimodel_canfetchmore_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Sort_Callback textemoticonscore__emojimodel_sort_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Buddy_Callback textemoticonscore__emojimodel_buddy_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Match_Callback textemoticonscore__emojimodel_match_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Span_Callback textemoticonscore__emojimodel_span_callback = nullptr;
    TextEmoticonsCore__EmojiModel_RoleNames_Callback textemoticonscore__emojimodel_rolenames_callback = nullptr;
    TextEmoticonsCore__EmojiModel_MultiData_Callback textemoticonscore__emojimodel_multidata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Submit_Callback textemoticonscore__emojimodel_submit_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Revert_Callback textemoticonscore__emojimodel_revert_callback = nullptr;
    TextEmoticonsCore__EmojiModel_ResetInternalData_Callback textemoticonscore__emojimodel_resetinternaldata_callback = nullptr;
    TextEmoticonsCore__EmojiModel_Event_Callback textemoticonscore__emojimodel_event_callback = nullptr;
    TextEmoticonsCore__EmojiModel_EventFilter_Callback textemoticonscore__emojimodel_eventfilter_callback = nullptr;
    TextEmoticonsCore__EmojiModel_TimerEvent_Callback textemoticonscore__emojimodel_timerevent_callback = nullptr;
    TextEmoticonsCore__EmojiModel_ChildEvent_Callback textemoticonscore__emojimodel_childevent_callback = nullptr;
    TextEmoticonsCore__EmojiModel_CustomEvent_Callback textemoticonscore__emojimodel_customevent_callback = nullptr;
    TextEmoticonsCore__EmojiModel_ConnectNotify_Callback textemoticonscore__emojimodel_connectnotify_callback = nullptr;
    TextEmoticonsCore__EmojiModel_DisconnectNotify_Callback textemoticonscore__emojimodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEmoticonsCore::EmojiModel {
        using TextEmoticonsCore::EmojiModel::childEvent;
        using TextEmoticonsCore::EmojiModel::connectNotify;
        using TextEmoticonsCore::EmojiModel::customEvent;
        using TextEmoticonsCore::EmojiModel::disconnectNotify;
        using TextEmoticonsCore::EmojiModel::resetInternalData;
        using TextEmoticonsCore::EmojiModel::timerEvent;
    };

    VirtualTextEmoticonsCoreEmojiModel() : TextEmoticonsCore::EmojiModel() {};
    VirtualTextEmoticonsCoreEmojiModel(QObject* parent) : TextEmoticonsCore::EmojiModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__emojimodel_metaobject_callback) {
            QMetaObject* callback_ret = textemoticonscore__emojimodel_metaobject_callback(this);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__emojimodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textemoticonscore__emojimodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__emojimodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textemoticonscore__emojimodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (textemoticonscore__emojimodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = textemoticonscore__emojimodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (textemoticonscore__emojimodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = textemoticonscore__emojimodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (textemoticonscore__emojimodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = textemoticonscore__emojimodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (textemoticonscore__emojimodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = textemoticonscore__emojimodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (textemoticonscore__emojimodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojimodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (textemoticonscore__emojimodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = textemoticonscore__emojimodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (textemoticonscore__emojimodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = textemoticonscore__emojimodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (textemoticonscore__emojimodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = textemoticonscore__emojimodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (textemoticonscore__emojimodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = textemoticonscore__emojimodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (textemoticonscore__emojimodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = textemoticonscore__emojimodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return TextEmoticonsCore__EmojiModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (textemoticonscore__emojimodel_setitemdata_callback) {
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
            bool callback_ret = textemoticonscore__emojimodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (textemoticonscore__emojimodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = textemoticonscore__emojimodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (textemoticonscore__emojimodel_mimetypes_callback) {
            const char** callback_ret = textemoticonscore__emojimodel_mimetypes_callback(this);
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
        return TextEmoticonsCore__EmojiModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (textemoticonscore__emojimodel_mimedata_callback) {
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
            QMimeData* callback_ret = textemoticonscore__emojimodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (textemoticonscore__emojimodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojimodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (textemoticonscore__emojimodel_supporteddropactions_callback) {
            int callback_ret = textemoticonscore__emojimodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (textemoticonscore__emojimodel_supporteddragactions_callback) {
            int callback_ret = textemoticonscore__emojimodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return TextEmoticonsCore__EmojiModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojimodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojimodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojimodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojimodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojimodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojimodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojimodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojimodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (textemoticonscore__emojimodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = textemoticonscore__emojimodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (textemoticonscore__emojimodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = textemoticonscore__emojimodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (textemoticonscore__emojimodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            textemoticonscore__emojimodel_fetchmore_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (textemoticonscore__emojimodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojimodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (textemoticonscore__emojimodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            textemoticonscore__emojimodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        TextEmoticonsCore__EmojiModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (textemoticonscore__emojimodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = textemoticonscore__emojimodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (textemoticonscore__emojimodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = textemoticonscore__emojimodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return TextEmoticonsCore__EmojiModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (textemoticonscore__emojimodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = textemoticonscore__emojimodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (textemoticonscore__emojimodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = textemoticonscore__emojimodel_rolenames_callback(this);
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
        return TextEmoticonsCore__EmojiModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (textemoticonscore__emojimodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            textemoticonscore__emojimodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        TextEmoticonsCore__EmojiModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (textemoticonscore__emojimodel_submit_callback) {
            bool callback_ret = textemoticonscore__emojimodel_submit_callback(this);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (textemoticonscore__emojimodel_revert_callback) {
            textemoticonscore__emojimodel_revert_callback(this);
            return;
        }
        TextEmoticonsCore__EmojiModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (textemoticonscore__emojimodel_resetinternaldata_callback) {
            textemoticonscore__emojimodel_resetinternaldata_callback(this);
            return;
        }
        TextEmoticonsCore__EmojiModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__emojimodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textemoticonscore__emojimodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__emojimodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textemoticonscore__emojimodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__emojimodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textemoticonscore__emojimodel_timerevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__emojimodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            textemoticonscore__emojimodel_childevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__emojimodel_customevent_callback) {
            QEvent* cbval1 = event;
            textemoticonscore__emojimodel_customevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojimodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__emojimodel_connectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojimodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__emojimodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextEmoticonsCore__EmojiModel_SuperResetInternalData(TextEmoticonsCore::EmojiModel* self);
    friend void TextEmoticonsCore__EmojiModel_SuperTimerEvent(TextEmoticonsCore::EmojiModel* self, QTimerEvent* event);
    friend void TextEmoticonsCore__EmojiModel_SuperChildEvent(TextEmoticonsCore::EmojiModel* self, QChildEvent* event);
    friend void TextEmoticonsCore__EmojiModel_SuperCustomEvent(TextEmoticonsCore::EmojiModel* self, QEvent* event);
    friend void TextEmoticonsCore__EmojiModel_SuperConnectNotify(TextEmoticonsCore::EmojiModel* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiModel_SuperDisconnectNotify(TextEmoticonsCore::EmojiModel* self, const QMetaMethod* signal);
};

#endif
