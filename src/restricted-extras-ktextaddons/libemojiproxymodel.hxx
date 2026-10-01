#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOJIPROXYMODEL_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOJIPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsCore::EmojiProxyModel
class VirtualTextEmoticonsCoreEmojiProxyModel final : public TextEmoticonsCore::EmojiProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEmoticonsCore__EmojiProxyModel_MetaObject_Callback = QMetaObject* (*)(const TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_Metacast_Callback = void* (*)(TextEmoticonsCore__EmojiProxyModel*, const char*);
    using TextEmoticonsCore__EmojiProxyModel_Metacall_Callback = int (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, void**);
    using TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_LessThan_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QAbstractItemModel*);
    using TextEmoticonsCore__EmojiProxyModel_MapToSource_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const TextEmoticonsCore__EmojiProxyModel*, QItemSelection*);
    using TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const TextEmoticonsCore__EmojiProxyModel*, QItemSelection*);
    using TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Index_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Parent_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Sibling_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_RowCount_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_HasChildren_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Data_Callback = QVariant* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_SetData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, QVariant*, int);
    using TextEmoticonsCore__EmojiProxyModel_HeaderData_Callback = QVariant* (*)(const TextEmoticonsCore__EmojiProxyModel*, int, int, int);
    using TextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QVariant*, int);
    using TextEmoticonsCore__EmojiProxyModel_MimeData_Callback = QMimeData* (*)(const TextEmoticonsCore__EmojiProxyModel*, libqt_list /* of QModelIndex* */);
    using TextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_InsertRows_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_FetchMore_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Flags_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Buddy_Callback = QModelIndex* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_Span_Callback = QSize* (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_Sort_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, int, int);
    using TextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback = const char** (*)(const TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_Submit_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_Revert_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_SetItemData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using TextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback = bool (*)(const TextEmoticonsCore__EmojiProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using TextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback = int (*)(const TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_MoveRows_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using TextEmoticonsCore__EmojiProxyModel_MultiData_Callback = void (*)(const TextEmoticonsCore__EmojiProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using TextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*);
    using TextEmoticonsCore__EmojiProxyModel_Event_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QEvent*);
    using TextEmoticonsCore__EmojiProxyModel_EventFilter_Callback = bool (*)(TextEmoticonsCore__EmojiProxyModel*, QObject*, QEvent*);
    using TextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QTimerEvent*);
    using TextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QChildEvent*);
    using TextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QEvent*);
    using TextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QMetaMethod*);
    using TextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback = void (*)(TextEmoticonsCore__EmojiProxyModel*, QMetaMethod*);
    using TextEmoticonsCore::EmojiProxyModel::beginInsertColumns;
    using TextEmoticonsCore::EmojiProxyModel::beginInsertRows;
    using TextEmoticonsCore::EmojiProxyModel::beginMoveColumns;
    using TextEmoticonsCore::EmojiProxyModel::beginMoveRows;
    using TextEmoticonsCore::EmojiProxyModel::beginRemoveColumns;
    using TextEmoticonsCore::EmojiProxyModel::beginRemoveRows;
    using TextEmoticonsCore::EmojiProxyModel::beginResetModel;
    using TextEmoticonsCore::EmojiProxyModel::changePersistentIndex;
    using TextEmoticonsCore::EmojiProxyModel::changePersistentIndexList;
    using TextEmoticonsCore::EmojiProxyModel::createIndex;
    using TextEmoticonsCore::EmojiProxyModel::createSourceIndex;
    using TextEmoticonsCore::EmojiProxyModel::decodeData;
    using TextEmoticonsCore::EmojiProxyModel::encodeData;
    using TextEmoticonsCore::EmojiProxyModel::endInsertColumns;
    using TextEmoticonsCore::EmojiProxyModel::endInsertRows;
    using TextEmoticonsCore::EmojiProxyModel::endMoveColumns;
    using TextEmoticonsCore::EmojiProxyModel::endMoveRows;
    using TextEmoticonsCore::EmojiProxyModel::endRemoveColumns;
    using TextEmoticonsCore::EmojiProxyModel::endRemoveRows;
    using TextEmoticonsCore::EmojiProxyModel::endResetModel;
    using TextEmoticonsCore::EmojiProxyModel::invalidateColumnsFilter;
    using TextEmoticonsCore::EmojiProxyModel::invalidateFilter;
    using TextEmoticonsCore::EmojiProxyModel::invalidateRowsFilter;
    using TextEmoticonsCore::EmojiProxyModel::isSignalConnected;
    using TextEmoticonsCore::EmojiProxyModel::persistentIndexList;
    using TextEmoticonsCore::EmojiProxyModel::receivers;
    using TextEmoticonsCore::EmojiProxyModel::sender;
    using TextEmoticonsCore::EmojiProxyModel::senderSignalIndex;

    // Instance callback storage
    TextEmoticonsCore__EmojiProxyModel_MetaObject_Callback textemoticonscore__emojiproxymodel_metaobject_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Metacast_Callback textemoticonscore__emojiproxymodel_metacast_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Metacall_Callback textemoticonscore__emojiproxymodel_metacall_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow_Callback textemoticonscore__emojiproxymodel_filteracceptsrow_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_LessThan_Callback textemoticonscore__emojiproxymodel_lessthan_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetSourceModel_Callback textemoticonscore__emojiproxymodel_setsourcemodel_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapToSource_Callback textemoticonscore__emojiproxymodel_maptosource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapFromSource_Callback textemoticonscore__emojiproxymodel_mapfromsource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource_Callback textemoticonscore__emojiproxymodel_mapselectiontosource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource_Callback textemoticonscore__emojiproxymodel_mapselectionfromsource_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn_Callback textemoticonscore__emojiproxymodel_filteracceptscolumn_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Index_Callback textemoticonscore__emojiproxymodel_index_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Parent_Callback textemoticonscore__emojiproxymodel_parent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Sibling_Callback textemoticonscore__emojiproxymodel_sibling_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RowCount_Callback textemoticonscore__emojiproxymodel_rowcount_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ColumnCount_Callback textemoticonscore__emojiproxymodel_columncount_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_HasChildren_Callback textemoticonscore__emojiproxymodel_haschildren_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Data_Callback textemoticonscore__emojiproxymodel_data_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetData_Callback textemoticonscore__emojiproxymodel_setdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_HeaderData_Callback textemoticonscore__emojiproxymodel_headerdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetHeaderData_Callback textemoticonscore__emojiproxymodel_setheaderdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MimeData_Callback textemoticonscore__emojiproxymodel_mimedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_DropMimeData_Callback textemoticonscore__emojiproxymodel_dropmimedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_InsertRows_Callback textemoticonscore__emojiproxymodel_insertrows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_InsertColumns_Callback textemoticonscore__emojiproxymodel_insertcolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RemoveRows_Callback textemoticonscore__emojiproxymodel_removerows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RemoveColumns_Callback textemoticonscore__emojiproxymodel_removecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_FetchMore_Callback textemoticonscore__emojiproxymodel_fetchmore_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CanFetchMore_Callback textemoticonscore__emojiproxymodel_canfetchmore_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Flags_Callback textemoticonscore__emojiproxymodel_flags_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Buddy_Callback textemoticonscore__emojiproxymodel_buddy_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Match_Callback textemoticonscore__emojiproxymodel_match_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Span_Callback textemoticonscore__emojiproxymodel_span_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Sort_Callback textemoticonscore__emojiproxymodel_sort_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MimeTypes_Callback textemoticonscore__emojiproxymodel_mimetypes_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SupportedDropActions_Callback textemoticonscore__emojiproxymodel_supporteddropactions_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Submit_Callback textemoticonscore__emojiproxymodel_submit_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Revert_Callback textemoticonscore__emojiproxymodel_revert_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ItemData_Callback textemoticonscore__emojiproxymodel_itemdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SetItemData_Callback textemoticonscore__emojiproxymodel_setitemdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ClearItemData_Callback textemoticonscore__emojiproxymodel_clearitemdata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CanDropMimeData_Callback textemoticonscore__emojiproxymodel_candropmimedata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_SupportedDragActions_Callback textemoticonscore__emojiproxymodel_supporteddragactions_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_RoleNames_Callback textemoticonscore__emojiproxymodel_rolenames_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MoveRows_Callback textemoticonscore__emojiproxymodel_moverows_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MoveColumns_Callback textemoticonscore__emojiproxymodel_movecolumns_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_MultiData_Callback textemoticonscore__emojiproxymodel_multidata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ResetInternalData_Callback textemoticonscore__emojiproxymodel_resetinternaldata_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_Event_Callback textemoticonscore__emojiproxymodel_event_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_EventFilter_Callback textemoticonscore__emojiproxymodel_eventfilter_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_TimerEvent_Callback textemoticonscore__emojiproxymodel_timerevent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ChildEvent_Callback textemoticonscore__emojiproxymodel_childevent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_CustomEvent_Callback textemoticonscore__emojiproxymodel_customevent_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_ConnectNotify_Callback textemoticonscore__emojiproxymodel_connectnotify_callback = nullptr;
    TextEmoticonsCore__EmojiProxyModel_DisconnectNotify_Callback textemoticonscore__emojiproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEmoticonsCore::EmojiProxyModel {
        using TextEmoticonsCore::EmojiProxyModel::childEvent;
        using TextEmoticonsCore::EmojiProxyModel::connectNotify;
        using TextEmoticonsCore::EmojiProxyModel::customEvent;
        using TextEmoticonsCore::EmojiProxyModel::disconnectNotify;
        using TextEmoticonsCore::EmojiProxyModel::filterAcceptsColumn;
        using TextEmoticonsCore::EmojiProxyModel::filterAcceptsRow;
        using TextEmoticonsCore::EmojiProxyModel::lessThan;
        using TextEmoticonsCore::EmojiProxyModel::resetInternalData;
        using TextEmoticonsCore::EmojiProxyModel::timerEvent;
    };

    VirtualTextEmoticonsCoreEmojiProxyModel() : TextEmoticonsCore::EmojiProxyModel() {};
    VirtualTextEmoticonsCoreEmojiProxyModel(QObject* parent) : TextEmoticonsCore::EmojiProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonscore__emojiproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = textemoticonscore__emojiproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonscore__emojiproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textemoticonscore__emojiproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonscore__emojiproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textemoticonscore__emojiproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
        if (textemoticonscore__emojiproxymodel_filteracceptsrow_callback) {
            int cbval1 = source_row;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_filteracceptsrow_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::filterAcceptsRow(source_row, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool lessThan(const QModelIndex& left, const QModelIndex& right) const override {
        if (textemoticonscore__emojiproxymodel_lessthan_callback) {
            const QModelIndex& left_ret = left;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&left_ret);
            const QModelIndex& right_ret = right;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&right_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_lessthan_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::lessThan(left, right);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (textemoticonscore__emojiproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            textemoticonscore__emojiproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (textemoticonscore__emojiproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = textemoticonscore__emojiproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapToSource(proxyIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (textemoticonscore__emojiproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = textemoticonscore__emojiproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapFromSource(sourceIndex);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
        if (textemoticonscore__emojiproxymodel_mapselectiontosource_callback) {
            const QItemSelection& proxySelection_ret = proxySelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&proxySelection_ret);
            QItemSelection* callback_ret = textemoticonscore__emojiproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapSelectionToSource(proxySelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
        if (textemoticonscore__emojiproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& sourceSelection_ret = sourceSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&sourceSelection_ret);
            QItemSelection* callback_ret = textemoticonscore__emojiproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::mapSelectionFromSource(sourceSelection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
        if (textemoticonscore__emojiproxymodel_filteracceptscolumn_callback) {
            int cbval1 = source_column;
            const QModelIndex& source_parent_ret = source_parent;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&source_parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_filteracceptscolumn_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::filterAcceptsColumn(source_column, source_parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = textemoticonscore__emojiproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (textemoticonscore__emojiproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = textemoticonscore__emojiproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::parent(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (textemoticonscore__emojiproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = textemoticonscore__emojiproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = textemoticonscore__emojiproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = textemoticonscore__emojiproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (textemoticonscore__emojiproxymodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = textemoticonscore__emojiproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (textemoticonscore__emojiproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = textemoticonscore__emojiproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (textemoticonscore__emojiproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = textemoticonscore__emojiproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (textemoticonscore__emojiproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = textemoticonscore__emojiproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (textemoticonscore__emojiproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = textemoticonscore__emojiproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (textemoticonscore__emojiproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            textemoticonscore__emojiproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = textemoticonscore__emojiproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = textemoticonscore__emojiproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (textemoticonscore__emojiproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = textemoticonscore__emojiproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return TextEmoticonsCore__EmojiProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = textemoticonscore__emojiproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsCore__EmojiProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (textemoticonscore__emojiproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            textemoticonscore__emojiproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (textemoticonscore__emojiproxymodel_mimetypes_callback) {
            const char** callback_ret = textemoticonscore__emojiproxymodel_mimetypes_callback(this);
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
        return TextEmoticonsCore__EmojiProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (textemoticonscore__emojiproxymodel_supporteddropactions_callback) {
            int callback_ret = textemoticonscore__emojiproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (textemoticonscore__emojiproxymodel_submit_callback) {
            bool callback_ret = textemoticonscore__emojiproxymodel_submit_callback(this);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (textemoticonscore__emojiproxymodel_revert_callback) {
            textemoticonscore__emojiproxymodel_revert_callback(this);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (textemoticonscore__emojiproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = textemoticonscore__emojiproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return TextEmoticonsCore__EmojiProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (textemoticonscore__emojiproxymodel_setitemdata_callback) {
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
            bool callback_ret = textemoticonscore__emojiproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (textemoticonscore__emojiproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (textemoticonscore__emojiproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = textemoticonscore__emojiproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (textemoticonscore__emojiproxymodel_supporteddragactions_callback) {
            int callback_ret = textemoticonscore__emojiproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return TextEmoticonsCore__EmojiProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (textemoticonscore__emojiproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = textemoticonscore__emojiproxymodel_rolenames_callback(this);
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
        return TextEmoticonsCore__EmojiProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (textemoticonscore__emojiproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = textemoticonscore__emojiproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (textemoticonscore__emojiproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = textemoticonscore__emojiproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (textemoticonscore__emojiproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            textemoticonscore__emojiproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (textemoticonscore__emojiproxymodel_resetinternaldata_callback) {
            textemoticonscore__emojiproxymodel_resetinternaldata_callback(this);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonscore__emojiproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textemoticonscore__emojiproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonscore__emojiproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textemoticonscore__emojiproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsCore__EmojiProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonscore__emojiproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textemoticonscore__emojiproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonscore__emojiproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            textemoticonscore__emojiproxymodel_childevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonscore__emojiproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            textemoticonscore__emojiproxymodel_customevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojiproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__emojiproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonscore__emojiproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonscore__emojiproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsCore__EmojiProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsRow(const TextEmoticonsCore::EmojiProxyModel* self, int source_row, const QModelIndex* source_parent);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperLessThan(const TextEmoticonsCore::EmojiProxyModel* self, const QModelIndex* left, const QModelIndex* right);
    friend bool TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsColumn(const TextEmoticonsCore::EmojiProxyModel* self, int source_column, const QModelIndex* source_parent);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperResetInternalData(TextEmoticonsCore::EmojiProxyModel* self);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperTimerEvent(TextEmoticonsCore::EmojiProxyModel* self, QTimerEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperChildEvent(TextEmoticonsCore::EmojiProxyModel* self, QChildEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperCustomEvent(TextEmoticonsCore::EmojiProxyModel* self, QEvent* event);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperConnectNotify(TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
    friend void TextEmoticonsCore__EmojiProxyModel_SuperDisconnectNotify(TextEmoticonsCore::EmojiProxyModel* self, const QMetaMethod* signal);
};

#endif
