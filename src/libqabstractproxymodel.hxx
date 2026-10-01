#pragma once
#ifndef LIBQABSTRACTPROXYMODEL_HXX
#define LIBQABSTRACTPROXYMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractProxyModel
class VirtualQAbstractProxyModel : public QAbstractProxyModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractProxyModel_MetaObject_Callback = QMetaObject* (*)(const QAbstractProxyModel*);
    using QAbstractProxyModel_Metacast_Callback = void* (*)(QAbstractProxyModel*, const char*);
    using QAbstractProxyModel_Metacall_Callback = int (*)(QAbstractProxyModel*, int, int, void**);
    using QAbstractProxyModel_SetSourceModel_Callback = void (*)(QAbstractProxyModel*, QAbstractItemModel*);
    using QAbstractProxyModel_MapToSource_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_MapFromSource_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_MapSelectionToSource_Callback = QItemSelection* (*)(const QAbstractProxyModel*, QItemSelection*);
    using QAbstractProxyModel_MapSelectionFromSource_Callback = QItemSelection* (*)(const QAbstractProxyModel*, QItemSelection*);
    using QAbstractProxyModel_Submit_Callback = bool (*)(QAbstractProxyModel*);
    using QAbstractProxyModel_Revert_Callback = void (*)(QAbstractProxyModel*);
    using QAbstractProxyModel_Data_Callback = QVariant* (*)(const QAbstractProxyModel*, QModelIndex*, int);
    using QAbstractProxyModel_HeaderData_Callback = QVariant* (*)(const QAbstractProxyModel*, int, int, int);
    using QAbstractProxyModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Flags_Callback = int (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_SetData_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, QVariant*, int);
    using QAbstractProxyModel_SetItemData_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using QAbstractProxyModel_SetHeaderData_Callback = bool (*)(QAbstractProxyModel*, int, int, QVariant*, int);
    using QAbstractProxyModel_ClearItemData_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Buddy_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_CanFetchMore_Callback = bool (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_FetchMore_Callback = void (*)(QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Sort_Callback = void (*)(QAbstractProxyModel*, int, int);
    using QAbstractProxyModel_Span_Callback = QSize* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_HasChildren_Callback = bool (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_Sibling_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_MimeData_Callback = QMimeData* (*)(const QAbstractProxyModel*, libqt_list /* of QModelIndex* */);
    using QAbstractProxyModel_CanDropMimeData_Callback = bool (*)(const QAbstractProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractProxyModel_DropMimeData_Callback = bool (*)(QAbstractProxyModel*, QMimeData*, int, int, int, QModelIndex*);
    using QAbstractProxyModel_MimeTypes_Callback = const char** (*)(const QAbstractProxyModel*);
    using QAbstractProxyModel_SupportedDragActions_Callback = int (*)(const QAbstractProxyModel*);
    using QAbstractProxyModel_SupportedDropActions_Callback = int (*)(const QAbstractProxyModel*);
    using QAbstractProxyModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const QAbstractProxyModel*);
    using QAbstractProxyModel_Index_Callback = QModelIndex* (*)(const QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_Parent_Callback = QModelIndex* (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_RowCount_Callback = int (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_ColumnCount_Callback = int (*)(const QAbstractProxyModel*, QModelIndex*);
    using QAbstractProxyModel_InsertRows_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_InsertColumns_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_RemoveRows_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_RemoveColumns_Callback = bool (*)(QAbstractProxyModel*, int, int, QModelIndex*);
    using QAbstractProxyModel_MoveRows_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractProxyModel_MoveColumns_Callback = bool (*)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int);
    using QAbstractProxyModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const QAbstractProxyModel*, QModelIndex*, int, QVariant*, int, int);
    using QAbstractProxyModel_MultiData_Callback = void (*)(const QAbstractProxyModel*, QModelIndex*, QModelRoleDataSpan*);
    using QAbstractProxyModel_ResetInternalData_Callback = void (*)(QAbstractProxyModel*);
    using QAbstractProxyModel_Event_Callback = bool (*)(QAbstractProxyModel*, QEvent*);
    using QAbstractProxyModel_EventFilter_Callback = bool (*)(QAbstractProxyModel*, QObject*, QEvent*);
    using QAbstractProxyModel_TimerEvent_Callback = void (*)(QAbstractProxyModel*, QTimerEvent*);
    using QAbstractProxyModel_ChildEvent_Callback = void (*)(QAbstractProxyModel*, QChildEvent*);
    using QAbstractProxyModel_CustomEvent_Callback = void (*)(QAbstractProxyModel*, QEvent*);
    using QAbstractProxyModel_ConnectNotify_Callback = void (*)(QAbstractProxyModel*, QMetaMethod*);
    using QAbstractProxyModel_DisconnectNotify_Callback = void (*)(QAbstractProxyModel*, QMetaMethod*);
    using QAbstractProxyModel::beginInsertColumns;
    using QAbstractProxyModel::beginInsertRows;
    using QAbstractProxyModel::beginMoveColumns;
    using QAbstractProxyModel::beginMoveRows;
    using QAbstractProxyModel::beginRemoveColumns;
    using QAbstractProxyModel::beginRemoveRows;
    using QAbstractProxyModel::beginResetModel;
    using QAbstractProxyModel::changePersistentIndex;
    using QAbstractProxyModel::changePersistentIndexList;
    using QAbstractProxyModel::createIndex;
    using QAbstractProxyModel::createSourceIndex;
    using QAbstractProxyModel::decodeData;
    using QAbstractProxyModel::encodeData;
    using QAbstractProxyModel::endInsertColumns;
    using QAbstractProxyModel::endInsertRows;
    using QAbstractProxyModel::endMoveColumns;
    using QAbstractProxyModel::endMoveRows;
    using QAbstractProxyModel::endRemoveColumns;
    using QAbstractProxyModel::endRemoveRows;
    using QAbstractProxyModel::endResetModel;
    using QAbstractProxyModel::isSignalConnected;
    using QAbstractProxyModel::persistentIndexList;
    using QAbstractProxyModel::receivers;
    using QAbstractProxyModel::sender;
    using QAbstractProxyModel::senderSignalIndex;

    // Instance callback storage
    QAbstractProxyModel_MetaObject_Callback qabstractproxymodel_metaobject_callback = nullptr;
    QAbstractProxyModel_Metacast_Callback qabstractproxymodel_metacast_callback = nullptr;
    QAbstractProxyModel_Metacall_Callback qabstractproxymodel_metacall_callback = nullptr;
    QAbstractProxyModel_SetSourceModel_Callback qabstractproxymodel_setsourcemodel_callback = nullptr;
    QAbstractProxyModel_MapToSource_Callback qabstractproxymodel_maptosource_callback = nullptr;
    QAbstractProxyModel_MapFromSource_Callback qabstractproxymodel_mapfromsource_callback = nullptr;
    QAbstractProxyModel_MapSelectionToSource_Callback qabstractproxymodel_mapselectiontosource_callback = nullptr;
    QAbstractProxyModel_MapSelectionFromSource_Callback qabstractproxymodel_mapselectionfromsource_callback = nullptr;
    QAbstractProxyModel_Submit_Callback qabstractproxymodel_submit_callback = nullptr;
    QAbstractProxyModel_Revert_Callback qabstractproxymodel_revert_callback = nullptr;
    QAbstractProxyModel_Data_Callback qabstractproxymodel_data_callback = nullptr;
    QAbstractProxyModel_HeaderData_Callback qabstractproxymodel_headerdata_callback = nullptr;
    QAbstractProxyModel_ItemData_Callback qabstractproxymodel_itemdata_callback = nullptr;
    QAbstractProxyModel_Flags_Callback qabstractproxymodel_flags_callback = nullptr;
    QAbstractProxyModel_SetData_Callback qabstractproxymodel_setdata_callback = nullptr;
    QAbstractProxyModel_SetItemData_Callback qabstractproxymodel_setitemdata_callback = nullptr;
    QAbstractProxyModel_SetHeaderData_Callback qabstractproxymodel_setheaderdata_callback = nullptr;
    QAbstractProxyModel_ClearItemData_Callback qabstractproxymodel_clearitemdata_callback = nullptr;
    QAbstractProxyModel_Buddy_Callback qabstractproxymodel_buddy_callback = nullptr;
    QAbstractProxyModel_CanFetchMore_Callback qabstractproxymodel_canfetchmore_callback = nullptr;
    QAbstractProxyModel_FetchMore_Callback qabstractproxymodel_fetchmore_callback = nullptr;
    QAbstractProxyModel_Sort_Callback qabstractproxymodel_sort_callback = nullptr;
    QAbstractProxyModel_Span_Callback qabstractproxymodel_span_callback = nullptr;
    QAbstractProxyModel_HasChildren_Callback qabstractproxymodel_haschildren_callback = nullptr;
    QAbstractProxyModel_Sibling_Callback qabstractproxymodel_sibling_callback = nullptr;
    QAbstractProxyModel_MimeData_Callback qabstractproxymodel_mimedata_callback = nullptr;
    QAbstractProxyModel_CanDropMimeData_Callback qabstractproxymodel_candropmimedata_callback = nullptr;
    QAbstractProxyModel_DropMimeData_Callback qabstractproxymodel_dropmimedata_callback = nullptr;
    QAbstractProxyModel_MimeTypes_Callback qabstractproxymodel_mimetypes_callback = nullptr;
    QAbstractProxyModel_SupportedDragActions_Callback qabstractproxymodel_supporteddragactions_callback = nullptr;
    QAbstractProxyModel_SupportedDropActions_Callback qabstractproxymodel_supporteddropactions_callback = nullptr;
    QAbstractProxyModel_RoleNames_Callback qabstractproxymodel_rolenames_callback = nullptr;
    QAbstractProxyModel_Index_Callback qabstractproxymodel_index_callback = nullptr;
    QAbstractProxyModel_Parent_Callback qabstractproxymodel_parent_callback = nullptr;
    QAbstractProxyModel_RowCount_Callback qabstractproxymodel_rowcount_callback = nullptr;
    QAbstractProxyModel_ColumnCount_Callback qabstractproxymodel_columncount_callback = nullptr;
    QAbstractProxyModel_InsertRows_Callback qabstractproxymodel_insertrows_callback = nullptr;
    QAbstractProxyModel_InsertColumns_Callback qabstractproxymodel_insertcolumns_callback = nullptr;
    QAbstractProxyModel_RemoveRows_Callback qabstractproxymodel_removerows_callback = nullptr;
    QAbstractProxyModel_RemoveColumns_Callback qabstractproxymodel_removecolumns_callback = nullptr;
    QAbstractProxyModel_MoveRows_Callback qabstractproxymodel_moverows_callback = nullptr;
    QAbstractProxyModel_MoveColumns_Callback qabstractproxymodel_movecolumns_callback = nullptr;
    QAbstractProxyModel_Match_Callback qabstractproxymodel_match_callback = nullptr;
    QAbstractProxyModel_MultiData_Callback qabstractproxymodel_multidata_callback = nullptr;
    QAbstractProxyModel_ResetInternalData_Callback qabstractproxymodel_resetinternaldata_callback = nullptr;
    QAbstractProxyModel_Event_Callback qabstractproxymodel_event_callback = nullptr;
    QAbstractProxyModel_EventFilter_Callback qabstractproxymodel_eventfilter_callback = nullptr;
    QAbstractProxyModel_TimerEvent_Callback qabstractproxymodel_timerevent_callback = nullptr;
    QAbstractProxyModel_ChildEvent_Callback qabstractproxymodel_childevent_callback = nullptr;
    QAbstractProxyModel_CustomEvent_Callback qabstractproxymodel_customevent_callback = nullptr;
    QAbstractProxyModel_ConnectNotify_Callback qabstractproxymodel_connectnotify_callback = nullptr;
    QAbstractProxyModel_DisconnectNotify_Callback qabstractproxymodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractProxyModel {
        using QAbstractProxyModel::childEvent;
        using QAbstractProxyModel::connectNotify;
        using QAbstractProxyModel::customEvent;
        using QAbstractProxyModel::disconnectNotify;
        using QAbstractProxyModel::resetInternalData;
        using QAbstractProxyModel::timerEvent;
    };

    VirtualQAbstractProxyModel() : QAbstractProxyModel() {};
    VirtualQAbstractProxyModel(QObject* parent) : QAbstractProxyModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractproxymodel_metaobject_callback) {
            QMetaObject* callback_ret = qabstractproxymodel_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractProxyModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractproxymodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractproxymodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractProxyModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractproxymodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractproxymodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractProxyModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qabstractproxymodel_setsourcemodel_callback) {
            QAbstractItemModel* cbval1 = sourceModel;
            qabstractproxymodel_setsourcemodel_callback(this, cbval1);
            return;
        }
        QAbstractProxyModel::setSourceModel(sourceModel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qabstractproxymodel_maptosource_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            QModelIndex* callback_ret = qabstractproxymodel_maptosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractProxyModel::mapToSource called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qabstractproxymodel_mapfromsource_callback) {
            const QModelIndex& sourceIndex_ret = sourceIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
            QModelIndex* callback_ret = qabstractproxymodel_mapfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractProxyModel::mapFromSource called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qabstractproxymodel_mapselectiontosource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = qabstractproxymodel_mapselectiontosource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractProxyModel::mapSelectionToSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qabstractproxymodel_mapselectionfromsource_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            QItemSelection* callback_ret = qabstractproxymodel_mapselectionfromsource_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractProxyModel::mapSelectionFromSource(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qabstractproxymodel_submit_callback) {
            bool callback_ret = qabstractproxymodel_submit_callback(this);
            return callback_ret;
        }
        return QAbstractProxyModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qabstractproxymodel_revert_callback) {
            qabstractproxymodel_revert_callback(this);
            return;
        }
        QAbstractProxyModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qabstractproxymodel_data_callback) {
            const QModelIndex& proxyIndex_ret = proxyIndex;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
            int cbval2 = role;
            QVariant* callback_ret = qabstractproxymodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractProxyModel::data(proxyIndex, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qabstractproxymodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = qabstractproxymodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractProxyModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qabstractproxymodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = qabstractproxymodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return QAbstractProxyModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qabstractproxymodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = qabstractproxymodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return QAbstractProxyModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qabstractproxymodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = qabstractproxymodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractProxyModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qabstractproxymodel_setitemdata_callback) {
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
            bool callback_ret = qabstractproxymodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractProxyModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qabstractproxymodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = qabstractproxymodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qabstractproxymodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qabstractproxymodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractProxyModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qabstractproxymodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = qabstractproxymodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractProxyModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qabstractproxymodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractProxyModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qabstractproxymodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            qabstractproxymodel_fetchmore_callback(this, cbval1);
            return;
        }
        QAbstractProxyModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qabstractproxymodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            qabstractproxymodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractProxyModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qabstractproxymodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qabstractproxymodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractProxyModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qabstractproxymodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractProxyModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qabstractproxymodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = qabstractproxymodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractProxyModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (qabstractproxymodel_mimedata_callback) {
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
            QMimeData* callback_ret = qabstractproxymodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return QAbstractProxyModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qabstractproxymodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qabstractproxymodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (qabstractproxymodel_mimetypes_callback) {
            const char** callback_ret = qabstractproxymodel_mimetypes_callback(this);
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
        return QAbstractProxyModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qabstractproxymodel_supporteddragactions_callback) {
            int callback_ret = qabstractproxymodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractProxyModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qabstractproxymodel_supporteddropactions_callback) {
            int callback_ret = qabstractproxymodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return QAbstractProxyModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qabstractproxymodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = qabstractproxymodel_rolenames_callback(this);
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
        return QAbstractProxyModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qabstractproxymodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = qabstractproxymodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractProxyModel::index called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qabstractproxymodel_parent_callback) {
            const QModelIndex& child_ret = child;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&child_ret);
            QModelIndex* callback_ret = qabstractproxymodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractProxyModel::parent called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qabstractproxymodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qabstractproxymodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractProxyModel::rowCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qabstractproxymodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = qabstractproxymodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractProxyModel::columnCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractProxyModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractProxyModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractProxyModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qabstractproxymodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = qabstractproxymodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractProxyModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractproxymodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstractproxymodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qabstractproxymodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = qabstractproxymodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qabstractproxymodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = qabstractproxymodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAbstractProxyModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qabstractproxymodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            qabstractproxymodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractProxyModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qabstractproxymodel_resetinternaldata_callback) {
            qabstractproxymodel_resetinternaldata_callback(this);
            return;
        }
        QAbstractProxyModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractproxymodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractproxymodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractProxyModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractproxymodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractproxymodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractProxyModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractproxymodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractproxymodel_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractProxyModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractproxymodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractproxymodel_childevent_callback(this, cbval1);
            return;
        }
        QAbstractProxyModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractproxymodel_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractproxymodel_customevent_callback(this, cbval1);
            return;
        }
        QAbstractProxyModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractproxymodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractproxymodel_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractProxyModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractproxymodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractproxymodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractProxyModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractProxyModel_SuperResetInternalData(QAbstractProxyModel* self);
    friend void QAbstractProxyModel_SuperTimerEvent(QAbstractProxyModel* self, QTimerEvent* event);
    friend void QAbstractProxyModel_SuperChildEvent(QAbstractProxyModel* self, QChildEvent* event);
    friend void QAbstractProxyModel_SuperCustomEvent(QAbstractProxyModel* self, QEvent* event);
    friend void QAbstractProxyModel_SuperConnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
    friend void QAbstractProxyModel_SuperDisconnectNotify(QAbstractProxyModel* self, const QMetaMethod* signal);
};

#endif
