#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPAGEWIDGETMODEL_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPAGEWIDGETMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageWidgetItem
class VirtualKPageWidgetItem final : public KPageWidgetItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPageWidgetItem_MetaObject_Callback = QMetaObject* (*)(const KPageWidgetItem*);
    using KPageWidgetItem_Metacast_Callback = void* (*)(KPageWidgetItem*, const char*);
    using KPageWidgetItem_Metacall_Callback = int (*)(KPageWidgetItem*, int, int, void**);
    using KPageWidgetItem_Event_Callback = bool (*)(KPageWidgetItem*, QEvent*);
    using KPageWidgetItem_EventFilter_Callback = bool (*)(KPageWidgetItem*, QObject*, QEvent*);
    using KPageWidgetItem_TimerEvent_Callback = void (*)(KPageWidgetItem*, QTimerEvent*);
    using KPageWidgetItem_ChildEvent_Callback = void (*)(KPageWidgetItem*, QChildEvent*);
    using KPageWidgetItem_CustomEvent_Callback = void (*)(KPageWidgetItem*, QEvent*);
    using KPageWidgetItem_ConnectNotify_Callback = void (*)(KPageWidgetItem*, QMetaMethod*);
    using KPageWidgetItem_DisconnectNotify_Callback = void (*)(KPageWidgetItem*, QMetaMethod*);
    using KPageWidgetItem::isSignalConnected;
    using KPageWidgetItem::receivers;
    using KPageWidgetItem::sender;
    using KPageWidgetItem::senderSignalIndex;

    // Instance callback storage
    KPageWidgetItem_MetaObject_Callback kpagewidgetitem_metaobject_callback = nullptr;
    KPageWidgetItem_Metacast_Callback kpagewidgetitem_metacast_callback = nullptr;
    KPageWidgetItem_Metacall_Callback kpagewidgetitem_metacall_callback = nullptr;
    KPageWidgetItem_Event_Callback kpagewidgetitem_event_callback = nullptr;
    KPageWidgetItem_EventFilter_Callback kpagewidgetitem_eventfilter_callback = nullptr;
    KPageWidgetItem_TimerEvent_Callback kpagewidgetitem_timerevent_callback = nullptr;
    KPageWidgetItem_ChildEvent_Callback kpagewidgetitem_childevent_callback = nullptr;
    KPageWidgetItem_CustomEvent_Callback kpagewidgetitem_customevent_callback = nullptr;
    KPageWidgetItem_ConnectNotify_Callback kpagewidgetitem_connectnotify_callback = nullptr;
    KPageWidgetItem_DisconnectNotify_Callback kpagewidgetitem_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPageWidgetItem {
        using KPageWidgetItem::childEvent;
        using KPageWidgetItem::connectNotify;
        using KPageWidgetItem::customEvent;
        using KPageWidgetItem::disconnectNotify;
        using KPageWidgetItem::timerEvent;
    };

    VirtualKPageWidgetItem(QWidget* widget) : KPageWidgetItem(widget) {};
    VirtualKPageWidgetItem(QWidget* widget, const QString& name) : KPageWidgetItem(widget, name) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpagewidgetitem_metaobject_callback) {
            QMetaObject* callback_ret = kpagewidgetitem_metaobject_callback(this);
            return callback_ret;
        }
        return KPageWidgetItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpagewidgetitem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpagewidgetitem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidgetItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagewidgetitem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpagewidgetitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPageWidgetItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagewidgetitem_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpagewidgetitem_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidgetItem::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagewidgetitem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpagewidgetitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageWidgetItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagewidgetitem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpagewidgetitem_timerevent_callback(this, cbval1);
            return;
        }
        KPageWidgetItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagewidgetitem_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpagewidgetitem_childevent_callback(this, cbval1);
            return;
        }
        KPageWidgetItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagewidgetitem_customevent_callback) {
            QEvent* cbval1 = event;
            kpagewidgetitem_customevent_callback(this, cbval1);
            return;
        }
        KPageWidgetItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetitem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagewidgetitem_connectnotify_callback(this, cbval1);
            return;
        }
        KPageWidgetItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetitem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagewidgetitem_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPageWidgetItem::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPageWidgetItem_SuperTimerEvent(KPageWidgetItem* self, QTimerEvent* event);
    friend void KPageWidgetItem_SuperChildEvent(KPageWidgetItem* self, QChildEvent* event);
    friend void KPageWidgetItem_SuperCustomEvent(KPageWidgetItem* self, QEvent* event);
    friend void KPageWidgetItem_SuperConnectNotify(KPageWidgetItem* self, const QMetaMethod* signal);
    friend void KPageWidgetItem_SuperDisconnectNotify(KPageWidgetItem* self, const QMetaMethod* signal);
};

// This class is a subclass of KPageWidgetModel
class VirtualKPageWidgetModel final : public KPageWidgetModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPageWidgetModel_MetaObject_Callback = QMetaObject* (*)(const KPageWidgetModel*);
    using KPageWidgetModel_Metacast_Callback = void* (*)(KPageWidgetModel*, const char*);
    using KPageWidgetModel_Metacall_Callback = int (*)(KPageWidgetModel*, int, int, void**);
    using KPageWidgetModel_ColumnCount_Callback = int (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_Data_Callback = QVariant* (*)(const KPageWidgetModel*, QModelIndex*, int);
    using KPageWidgetModel_SetData_Callback = bool (*)(KPageWidgetModel*, QModelIndex*, QVariant*, int);
    using KPageWidgetModel_Flags_Callback = int (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_Index_Callback = QModelIndex* (*)(const KPageWidgetModel*, int, int, QModelIndex*);
    using KPageWidgetModel_Parent_Callback = QModelIndex* (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_RowCount_Callback = int (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_Sibling_Callback = QModelIndex* (*)(const KPageWidgetModel*, int, int, QModelIndex*);
    using KPageWidgetModel_HasChildren_Callback = bool (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_HeaderData_Callback = QVariant* (*)(const KPageWidgetModel*, int, int, int);
    using KPageWidgetModel_SetHeaderData_Callback = bool (*)(KPageWidgetModel*, int, int, QVariant*, int);
    using KPageWidgetModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_SetItemData_Callback = bool (*)(KPageWidgetModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KPageWidgetModel_ClearItemData_Callback = bool (*)(KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_MimeTypes_Callback = const char** (*)(const KPageWidgetModel*);
    using KPageWidgetModel_MimeData_Callback = QMimeData* (*)(const KPageWidgetModel*, libqt_list /* of QModelIndex* */);
    using KPageWidgetModel_CanDropMimeData_Callback = bool (*)(const KPageWidgetModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageWidgetModel_DropMimeData_Callback = bool (*)(KPageWidgetModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageWidgetModel_SupportedDropActions_Callback = int (*)(const KPageWidgetModel*);
    using KPageWidgetModel_SupportedDragActions_Callback = int (*)(const KPageWidgetModel*);
    using KPageWidgetModel_InsertRows_Callback = bool (*)(KPageWidgetModel*, int, int, QModelIndex*);
    using KPageWidgetModel_InsertColumns_Callback = bool (*)(KPageWidgetModel*, int, int, QModelIndex*);
    using KPageWidgetModel_RemoveRows_Callback = bool (*)(KPageWidgetModel*, int, int, QModelIndex*);
    using KPageWidgetModel_RemoveColumns_Callback = bool (*)(KPageWidgetModel*, int, int, QModelIndex*);
    using KPageWidgetModel_MoveRows_Callback = bool (*)(KPageWidgetModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageWidgetModel_MoveColumns_Callback = bool (*)(KPageWidgetModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageWidgetModel_FetchMore_Callback = void (*)(KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_CanFetchMore_Callback = bool (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_Sort_Callback = void (*)(KPageWidgetModel*, int, int);
    using KPageWidgetModel_Buddy_Callback = QModelIndex* (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KPageWidgetModel*, QModelIndex*, int, QVariant*, int, int);
    using KPageWidgetModel_Span_Callback = QSize* (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KPageWidgetModel*);
    using KPageWidgetModel_MultiData_Callback = void (*)(const KPageWidgetModel*, QModelIndex*, QModelRoleDataSpan*);
    using KPageWidgetModel_Submit_Callback = bool (*)(KPageWidgetModel*);
    using KPageWidgetModel_Revert_Callback = void (*)(KPageWidgetModel*);
    using KPageWidgetModel_ResetInternalData_Callback = void (*)(KPageWidgetModel*);
    using KPageWidgetModel_Event_Callback = bool (*)(KPageWidgetModel*, QEvent*);
    using KPageWidgetModel_EventFilter_Callback = bool (*)(KPageWidgetModel*, QObject*, QEvent*);
    using KPageWidgetModel_TimerEvent_Callback = void (*)(KPageWidgetModel*, QTimerEvent*);
    using KPageWidgetModel_ChildEvent_Callback = void (*)(KPageWidgetModel*, QChildEvent*);
    using KPageWidgetModel_CustomEvent_Callback = void (*)(KPageWidgetModel*, QEvent*);
    using KPageWidgetModel_ConnectNotify_Callback = void (*)(KPageWidgetModel*, QMetaMethod*);
    using KPageWidgetModel_DisconnectNotify_Callback = void (*)(KPageWidgetModel*, QMetaMethod*);
    using KPageWidgetModel::beginInsertColumns;
    using KPageWidgetModel::beginInsertRows;
    using KPageWidgetModel::beginMoveColumns;
    using KPageWidgetModel::beginMoveRows;
    using KPageWidgetModel::beginRemoveColumns;
    using KPageWidgetModel::beginRemoveRows;
    using KPageWidgetModel::beginResetModel;
    using KPageWidgetModel::changePersistentIndex;
    using KPageWidgetModel::changePersistentIndexList;
    using KPageWidgetModel::createIndex;
    using KPageWidgetModel::decodeData;
    using KPageWidgetModel::encodeData;
    using KPageWidgetModel::endInsertColumns;
    using KPageWidgetModel::endInsertRows;
    using KPageWidgetModel::endMoveColumns;
    using KPageWidgetModel::endMoveRows;
    using KPageWidgetModel::endRemoveColumns;
    using KPageWidgetModel::endRemoveRows;
    using KPageWidgetModel::endResetModel;
    using KPageWidgetModel::isSignalConnected;
    using KPageWidgetModel::persistentIndexList;
    using KPageWidgetModel::receivers;
    using KPageWidgetModel::sender;
    using KPageWidgetModel::senderSignalIndex;

    // Instance callback storage
    KPageWidgetModel_MetaObject_Callback kpagewidgetmodel_metaobject_callback = nullptr;
    KPageWidgetModel_Metacast_Callback kpagewidgetmodel_metacast_callback = nullptr;
    KPageWidgetModel_Metacall_Callback kpagewidgetmodel_metacall_callback = nullptr;
    KPageWidgetModel_ColumnCount_Callback kpagewidgetmodel_columncount_callback = nullptr;
    KPageWidgetModel_Data_Callback kpagewidgetmodel_data_callback = nullptr;
    KPageWidgetModel_SetData_Callback kpagewidgetmodel_setdata_callback = nullptr;
    KPageWidgetModel_Flags_Callback kpagewidgetmodel_flags_callback = nullptr;
    KPageWidgetModel_Index_Callback kpagewidgetmodel_index_callback = nullptr;
    KPageWidgetModel_Parent_Callback kpagewidgetmodel_parent_callback = nullptr;
    KPageWidgetModel_RowCount_Callback kpagewidgetmodel_rowcount_callback = nullptr;
    KPageWidgetModel_Sibling_Callback kpagewidgetmodel_sibling_callback = nullptr;
    KPageWidgetModel_HasChildren_Callback kpagewidgetmodel_haschildren_callback = nullptr;
    KPageWidgetModel_HeaderData_Callback kpagewidgetmodel_headerdata_callback = nullptr;
    KPageWidgetModel_SetHeaderData_Callback kpagewidgetmodel_setheaderdata_callback = nullptr;
    KPageWidgetModel_ItemData_Callback kpagewidgetmodel_itemdata_callback = nullptr;
    KPageWidgetModel_SetItemData_Callback kpagewidgetmodel_setitemdata_callback = nullptr;
    KPageWidgetModel_ClearItemData_Callback kpagewidgetmodel_clearitemdata_callback = nullptr;
    KPageWidgetModel_MimeTypes_Callback kpagewidgetmodel_mimetypes_callback = nullptr;
    KPageWidgetModel_MimeData_Callback kpagewidgetmodel_mimedata_callback = nullptr;
    KPageWidgetModel_CanDropMimeData_Callback kpagewidgetmodel_candropmimedata_callback = nullptr;
    KPageWidgetModel_DropMimeData_Callback kpagewidgetmodel_dropmimedata_callback = nullptr;
    KPageWidgetModel_SupportedDropActions_Callback kpagewidgetmodel_supporteddropactions_callback = nullptr;
    KPageWidgetModel_SupportedDragActions_Callback kpagewidgetmodel_supporteddragactions_callback = nullptr;
    KPageWidgetModel_InsertRows_Callback kpagewidgetmodel_insertrows_callback = nullptr;
    KPageWidgetModel_InsertColumns_Callback kpagewidgetmodel_insertcolumns_callback = nullptr;
    KPageWidgetModel_RemoveRows_Callback kpagewidgetmodel_removerows_callback = nullptr;
    KPageWidgetModel_RemoveColumns_Callback kpagewidgetmodel_removecolumns_callback = nullptr;
    KPageWidgetModel_MoveRows_Callback kpagewidgetmodel_moverows_callback = nullptr;
    KPageWidgetModel_MoveColumns_Callback kpagewidgetmodel_movecolumns_callback = nullptr;
    KPageWidgetModel_FetchMore_Callback kpagewidgetmodel_fetchmore_callback = nullptr;
    KPageWidgetModel_CanFetchMore_Callback kpagewidgetmodel_canfetchmore_callback = nullptr;
    KPageWidgetModel_Sort_Callback kpagewidgetmodel_sort_callback = nullptr;
    KPageWidgetModel_Buddy_Callback kpagewidgetmodel_buddy_callback = nullptr;
    KPageWidgetModel_Match_Callback kpagewidgetmodel_match_callback = nullptr;
    KPageWidgetModel_Span_Callback kpagewidgetmodel_span_callback = nullptr;
    KPageWidgetModel_RoleNames_Callback kpagewidgetmodel_rolenames_callback = nullptr;
    KPageWidgetModel_MultiData_Callback kpagewidgetmodel_multidata_callback = nullptr;
    KPageWidgetModel_Submit_Callback kpagewidgetmodel_submit_callback = nullptr;
    KPageWidgetModel_Revert_Callback kpagewidgetmodel_revert_callback = nullptr;
    KPageWidgetModel_ResetInternalData_Callback kpagewidgetmodel_resetinternaldata_callback = nullptr;
    KPageWidgetModel_Event_Callback kpagewidgetmodel_event_callback = nullptr;
    KPageWidgetModel_EventFilter_Callback kpagewidgetmodel_eventfilter_callback = nullptr;
    KPageWidgetModel_TimerEvent_Callback kpagewidgetmodel_timerevent_callback = nullptr;
    KPageWidgetModel_ChildEvent_Callback kpagewidgetmodel_childevent_callback = nullptr;
    KPageWidgetModel_CustomEvent_Callback kpagewidgetmodel_customevent_callback = nullptr;
    KPageWidgetModel_ConnectNotify_Callback kpagewidgetmodel_connectnotify_callback = nullptr;
    KPageWidgetModel_DisconnectNotify_Callback kpagewidgetmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPageWidgetModel {
        using KPageWidgetModel::childEvent;
        using KPageWidgetModel::connectNotify;
        using KPageWidgetModel::customEvent;
        using KPageWidgetModel::disconnectNotify;
        using KPageWidgetModel::resetInternalData;
        using KPageWidgetModel::timerEvent;
    };

    VirtualKPageWidgetModel() : KPageWidgetModel() {};
    VirtualKPageWidgetModel(QObject* parent) : KPageWidgetModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpagewidgetmodel_metaobject_callback) {
            QMetaObject* callback_ret = kpagewidgetmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KPageWidgetModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpagewidgetmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpagewidgetmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidgetModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagewidgetmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpagewidgetmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPageWidgetModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kpagewidgetmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageWidgetModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kpagewidgetmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = kpagewidgetmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidgetModel::data(index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kpagewidgetmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = kpagewidgetmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageWidgetModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kpagewidgetmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = kpagewidgetmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KPageWidgetModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kpagewidgetmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = kpagewidgetmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidgetModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (kpagewidgetmodel_parent_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kpagewidgetmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidgetModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = kpagewidgetmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPageWidgetModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kpagewidgetmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = kpagewidgetmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidgetModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidgetModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kpagewidgetmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = kpagewidgetmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidgetModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kpagewidgetmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = kpagewidgetmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KPageWidgetModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kpagewidgetmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = kpagewidgetmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KPageWidgetModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kpagewidgetmodel_setitemdata_callback) {
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
            bool callback_ret = kpagewidgetmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageWidgetModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kpagewidgetmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kpagewidgetmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidgetModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kpagewidgetmodel_mimetypes_callback) {
            const char** callback_ret = kpagewidgetmodel_mimetypes_callback(this);
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
        return KPageWidgetModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kpagewidgetmodel_mimedata_callback) {
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
            QMimeData* callback_ret = kpagewidgetmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KPageWidgetModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kpagewidgetmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageWidgetModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kpagewidgetmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageWidgetModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kpagewidgetmodel_supporteddropactions_callback) {
            int callback_ret = kpagewidgetmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KPageWidgetModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kpagewidgetmodel_supporteddragactions_callback) {
            int callback_ret = kpagewidgetmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KPageWidgetModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageWidgetModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageWidgetModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageWidgetModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KPageWidgetModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagewidgetmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kpagewidgetmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageWidgetModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagewidgetmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = kpagewidgetmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KPageWidgetModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kpagewidgetmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            kpagewidgetmodel_fetchmore_callback(this, cbval1);
            return;
        }
        KPageWidgetModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = kpagewidgetmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidgetModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kpagewidgetmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            kpagewidgetmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KPageWidgetModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kpagewidgetmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = kpagewidgetmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidgetModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kpagewidgetmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = kpagewidgetmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KPageWidgetModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kpagewidgetmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kpagewidgetmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPageWidgetModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kpagewidgetmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = kpagewidgetmodel_rolenames_callback(this);
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
        return KPageWidgetModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kpagewidgetmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            kpagewidgetmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KPageWidgetModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kpagewidgetmodel_submit_callback) {
            bool callback_ret = kpagewidgetmodel_submit_callback(this);
            return callback_ret;
        }
        return KPageWidgetModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kpagewidgetmodel_revert_callback) {
            kpagewidgetmodel_revert_callback(this);
            return;
        }
        KPageWidgetModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kpagewidgetmodel_resetinternaldata_callback) {
            kpagewidgetmodel_resetinternaldata_callback(this);
            return;
        }
        KPageWidgetModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagewidgetmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpagewidgetmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPageWidgetModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagewidgetmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kpagewidgetmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPageWidgetModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagewidgetmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpagewidgetmodel_timerevent_callback(this, cbval1);
            return;
        }
        KPageWidgetModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagewidgetmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpagewidgetmodel_childevent_callback(this, cbval1);
            return;
        }
        KPageWidgetModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagewidgetmodel_customevent_callback) {
            QEvent* cbval1 = event;
            kpagewidgetmodel_customevent_callback(this, cbval1);
            return;
        }
        KPageWidgetModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagewidgetmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KPageWidgetModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpagewidgetmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPageWidgetModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KPageWidgetModel_SuperResetInternalData(KPageWidgetModel* self);
    friend void KPageWidgetModel_SuperTimerEvent(KPageWidgetModel* self, QTimerEvent* event);
    friend void KPageWidgetModel_SuperChildEvent(KPageWidgetModel* self, QChildEvent* event);
    friend void KPageWidgetModel_SuperCustomEvent(KPageWidgetModel* self, QEvent* event);
    friend void KPageWidgetModel_SuperConnectNotify(KPageWidgetModel* self, const QMetaMethod* signal);
    friend void KPageWidgetModel_SuperDisconnectNotify(KPageWidgetModel* self, const QMetaMethod* signal);
};

#endif
