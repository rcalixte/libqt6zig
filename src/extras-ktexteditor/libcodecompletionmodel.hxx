#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBCODECOMPLETIONMODEL_HXX
#define EXTRAS_KTEXTEDITOR_LIBCODECOMPLETIONMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::CodeCompletionModel
class VirtualKTextEditorCodeCompletionModel : public KTextEditor::CodeCompletionModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__CodeCompletionModel_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_Metacast_Callback = void* (*)(KTextEditor__CodeCompletionModel*, const char*);
    using KTextEditor__CodeCompletionModel_Metacall_Callback = int (*)(KTextEditor__CodeCompletionModel*, int, int, void**);
    using KTextEditor__CodeCompletionModel_CompletionInvoked_Callback = void (*)(KTextEditor__CodeCompletionModel*, KTextEditor__View*, KTextEditor__Range*, int);
    using KTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback = void (*)(const KTextEditor__CodeCompletionModel*, KTextEditor__View*, KTextEditor__Range*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_ColumnCount_Callback = int (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Index_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_ItemData_Callback = libqt_map /* of int to QVariant* */ (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Parent_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RowCount_Callback = int (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Sibling_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_HasChildren_Callback = bool (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Data_Callback = QVariant* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_SetData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, QVariant*, int);
    using KTextEditor__CodeCompletionModel_HeaderData_Callback = QVariant* (*)(const KTextEditor__CodeCompletionModel*, int, int, int);
    using KTextEditor__CodeCompletionModel_SetHeaderData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QVariant*, int);
    using KTextEditor__CodeCompletionModel_SetItemData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, libqt_map /* of int to QVariant* */);
    using KTextEditor__CodeCompletionModel_ClearItemData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_MimeTypes_Callback = const char** (*)(const KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_MimeData_Callback = QMimeData* (*)(const KTextEditor__CodeCompletionModel*, libqt_list /* of QModelIndex* */);
    using KTextEditor__CodeCompletionModel_CanDropMimeData_Callback = bool (*)(const KTextEditor__CodeCompletionModel*, QMimeData*, int, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_DropMimeData_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QMimeData*, int, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_SupportedDropActions_Callback = int (*)(const KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_SupportedDragActions_Callback = int (*)(const KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_InsertRows_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_InsertColumns_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RemoveRows_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RemoveColumns_Callback = bool (*)(KTextEditor__CodeCompletionModel*, int, int, QModelIndex*);
    using KTextEditor__CodeCompletionModel_MoveRows_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_MoveColumns_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KTextEditor__CodeCompletionModel_FetchMore_Callback = void (*)(KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_CanFetchMore_Callback = bool (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Flags_Callback = int (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Sort_Callback = void (*)(KTextEditor__CodeCompletionModel*, int, int);
    using KTextEditor__CodeCompletionModel_Buddy_Callback = QModelIndex* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_Match_Callback = libqt_list /* of QModelIndex* */ (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*, int, QVariant*, int, int);
    using KTextEditor__CodeCompletionModel_Span_Callback = QSize* (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*);
    using KTextEditor__CodeCompletionModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)(const KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_MultiData_Callback = void (*)(const KTextEditor__CodeCompletionModel*, QModelIndex*, QModelRoleDataSpan*);
    using KTextEditor__CodeCompletionModel_Submit_Callback = bool (*)(KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_Revert_Callback = void (*)(KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_ResetInternalData_Callback = void (*)(KTextEditor__CodeCompletionModel*);
    using KTextEditor__CodeCompletionModel_Event_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QEvent*);
    using KTextEditor__CodeCompletionModel_EventFilter_Callback = bool (*)(KTextEditor__CodeCompletionModel*, QObject*, QEvent*);
    using KTextEditor__CodeCompletionModel_TimerEvent_Callback = void (*)(KTextEditor__CodeCompletionModel*, QTimerEvent*);
    using KTextEditor__CodeCompletionModel_ChildEvent_Callback = void (*)(KTextEditor__CodeCompletionModel*, QChildEvent*);
    using KTextEditor__CodeCompletionModel_CustomEvent_Callback = void (*)(KTextEditor__CodeCompletionModel*, QEvent*);
    using KTextEditor__CodeCompletionModel_ConnectNotify_Callback = void (*)(KTextEditor__CodeCompletionModel*, QMetaMethod*);
    using KTextEditor__CodeCompletionModel_DisconnectNotify_Callback = void (*)(KTextEditor__CodeCompletionModel*, QMetaMethod*);
    using KTextEditor::CodeCompletionModel::beginInsertColumns;
    using KTextEditor::CodeCompletionModel::beginInsertRows;
    using KTextEditor::CodeCompletionModel::beginMoveColumns;
    using KTextEditor::CodeCompletionModel::beginMoveRows;
    using KTextEditor::CodeCompletionModel::beginRemoveColumns;
    using KTextEditor::CodeCompletionModel::beginRemoveRows;
    using KTextEditor::CodeCompletionModel::beginResetModel;
    using KTextEditor::CodeCompletionModel::changePersistentIndex;
    using KTextEditor::CodeCompletionModel::changePersistentIndexList;
    using KTextEditor::CodeCompletionModel::createIndex;
    using KTextEditor::CodeCompletionModel::decodeData;
    using KTextEditor::CodeCompletionModel::encodeData;
    using KTextEditor::CodeCompletionModel::endInsertColumns;
    using KTextEditor::CodeCompletionModel::endInsertRows;
    using KTextEditor::CodeCompletionModel::endMoveColumns;
    using KTextEditor::CodeCompletionModel::endMoveRows;
    using KTextEditor::CodeCompletionModel::endRemoveColumns;
    using KTextEditor::CodeCompletionModel::endRemoveRows;
    using KTextEditor::CodeCompletionModel::endResetModel;
    using KTextEditor::CodeCompletionModel::isSignalConnected;
    using KTextEditor::CodeCompletionModel::persistentIndexList;
    using KTextEditor::CodeCompletionModel::receivers;
    using KTextEditor::CodeCompletionModel::sender;
    using KTextEditor::CodeCompletionModel::senderSignalIndex;
    using KTextEditor::CodeCompletionModel::setHasGroups;

    // Instance callback storage
    KTextEditor__CodeCompletionModel_MetaObject_Callback ktexteditor__codecompletionmodel_metaobject_callback = nullptr;
    KTextEditor__CodeCompletionModel_Metacast_Callback ktexteditor__codecompletionmodel_metacast_callback = nullptr;
    KTextEditor__CodeCompletionModel_Metacall_Callback ktexteditor__codecompletionmodel_metacall_callback = nullptr;
    KTextEditor__CodeCompletionModel_CompletionInvoked_Callback ktexteditor__codecompletionmodel_completioninvoked_callback = nullptr;
    KTextEditor__CodeCompletionModel_ExecuteCompletionItem_Callback ktexteditor__codecompletionmodel_executecompletionitem_callback = nullptr;
    KTextEditor__CodeCompletionModel_ColumnCount_Callback ktexteditor__codecompletionmodel_columncount_callback = nullptr;
    KTextEditor__CodeCompletionModel_Index_Callback ktexteditor__codecompletionmodel_index_callback = nullptr;
    KTextEditor__CodeCompletionModel_ItemData_Callback ktexteditor__codecompletionmodel_itemdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_Parent_Callback ktexteditor__codecompletionmodel_parent_callback = nullptr;
    KTextEditor__CodeCompletionModel_RowCount_Callback ktexteditor__codecompletionmodel_rowcount_callback = nullptr;
    KTextEditor__CodeCompletionModel_Sibling_Callback ktexteditor__codecompletionmodel_sibling_callback = nullptr;
    KTextEditor__CodeCompletionModel_HasChildren_Callback ktexteditor__codecompletionmodel_haschildren_callback = nullptr;
    KTextEditor__CodeCompletionModel_Data_Callback ktexteditor__codecompletionmodel_data_callback = nullptr;
    KTextEditor__CodeCompletionModel_SetData_Callback ktexteditor__codecompletionmodel_setdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_HeaderData_Callback ktexteditor__codecompletionmodel_headerdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_SetHeaderData_Callback ktexteditor__codecompletionmodel_setheaderdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_SetItemData_Callback ktexteditor__codecompletionmodel_setitemdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_ClearItemData_Callback ktexteditor__codecompletionmodel_clearitemdata_callback = nullptr;
    KTextEditor__CodeCompletionModel_MimeTypes_Callback ktexteditor__codecompletionmodel_mimetypes_callback = nullptr;
    KTextEditor__CodeCompletionModel_MimeData_Callback ktexteditor__codecompletionmodel_mimedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_CanDropMimeData_Callback ktexteditor__codecompletionmodel_candropmimedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_DropMimeData_Callback ktexteditor__codecompletionmodel_dropmimedata_callback = nullptr;
    KTextEditor__CodeCompletionModel_SupportedDropActions_Callback ktexteditor__codecompletionmodel_supporteddropactions_callback = nullptr;
    KTextEditor__CodeCompletionModel_SupportedDragActions_Callback ktexteditor__codecompletionmodel_supporteddragactions_callback = nullptr;
    KTextEditor__CodeCompletionModel_InsertRows_Callback ktexteditor__codecompletionmodel_insertrows_callback = nullptr;
    KTextEditor__CodeCompletionModel_InsertColumns_Callback ktexteditor__codecompletionmodel_insertcolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_RemoveRows_Callback ktexteditor__codecompletionmodel_removerows_callback = nullptr;
    KTextEditor__CodeCompletionModel_RemoveColumns_Callback ktexteditor__codecompletionmodel_removecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_MoveRows_Callback ktexteditor__codecompletionmodel_moverows_callback = nullptr;
    KTextEditor__CodeCompletionModel_MoveColumns_Callback ktexteditor__codecompletionmodel_movecolumns_callback = nullptr;
    KTextEditor__CodeCompletionModel_FetchMore_Callback ktexteditor__codecompletionmodel_fetchmore_callback = nullptr;
    KTextEditor__CodeCompletionModel_CanFetchMore_Callback ktexteditor__codecompletionmodel_canfetchmore_callback = nullptr;
    KTextEditor__CodeCompletionModel_Flags_Callback ktexteditor__codecompletionmodel_flags_callback = nullptr;
    KTextEditor__CodeCompletionModel_Sort_Callback ktexteditor__codecompletionmodel_sort_callback = nullptr;
    KTextEditor__CodeCompletionModel_Buddy_Callback ktexteditor__codecompletionmodel_buddy_callback = nullptr;
    KTextEditor__CodeCompletionModel_Match_Callback ktexteditor__codecompletionmodel_match_callback = nullptr;
    KTextEditor__CodeCompletionModel_Span_Callback ktexteditor__codecompletionmodel_span_callback = nullptr;
    KTextEditor__CodeCompletionModel_RoleNames_Callback ktexteditor__codecompletionmodel_rolenames_callback = nullptr;
    KTextEditor__CodeCompletionModel_MultiData_Callback ktexteditor__codecompletionmodel_multidata_callback = nullptr;
    KTextEditor__CodeCompletionModel_Submit_Callback ktexteditor__codecompletionmodel_submit_callback = nullptr;
    KTextEditor__CodeCompletionModel_Revert_Callback ktexteditor__codecompletionmodel_revert_callback = nullptr;
    KTextEditor__CodeCompletionModel_ResetInternalData_Callback ktexteditor__codecompletionmodel_resetinternaldata_callback = nullptr;
    KTextEditor__CodeCompletionModel_Event_Callback ktexteditor__codecompletionmodel_event_callback = nullptr;
    KTextEditor__CodeCompletionModel_EventFilter_Callback ktexteditor__codecompletionmodel_eventfilter_callback = nullptr;
    KTextEditor__CodeCompletionModel_TimerEvent_Callback ktexteditor__codecompletionmodel_timerevent_callback = nullptr;
    KTextEditor__CodeCompletionModel_ChildEvent_Callback ktexteditor__codecompletionmodel_childevent_callback = nullptr;
    KTextEditor__CodeCompletionModel_CustomEvent_Callback ktexteditor__codecompletionmodel_customevent_callback = nullptr;
    KTextEditor__CodeCompletionModel_ConnectNotify_Callback ktexteditor__codecompletionmodel_connectnotify_callback = nullptr;
    KTextEditor__CodeCompletionModel_DisconnectNotify_Callback ktexteditor__codecompletionmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTextEditor::CodeCompletionModel {
        using KTextEditor::CodeCompletionModel::childEvent;
        using KTextEditor::CodeCompletionModel::connectNotify;
        using KTextEditor::CodeCompletionModel::customEvent;
        using KTextEditor::CodeCompletionModel::disconnectNotify;
        using KTextEditor::CodeCompletionModel::resetInternalData;
        using KTextEditor::CodeCompletionModel::timerEvent;
    };

    VirtualKTextEditorCodeCompletionModel(QObject* parent) : KTextEditor::CodeCompletionModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__codecompletionmodel_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__codecompletionmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__codecompletionmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__codecompletionmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__codecompletionmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__codecompletionmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__CodeCompletionModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void completionInvoked(KTextEditor::View* view, const KTextEditor::Range& range, KTextEditor::CodeCompletionModel::InvocationType invocationType) override {
        if (ktexteditor__codecompletionmodel_completioninvoked_callback) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& range_ret = range;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&range_ret);
            int cbval3 = static_cast<int>(invocationType);
            ktexteditor__codecompletionmodel_completioninvoked_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KTextEditor__CodeCompletionModel::completionInvoked(view, range, invocationType);
    }

    // Virtual method for C ABI access and custom callback
    virtual void executeCompletionItem(KTextEditor::View* view, const KTextEditor::Range& word, const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_executecompletionitem_callback) {
            KTextEditor__View* cbval1 = view;
            const KTextEditor::Range& word_ret = word;
            // Cast returned reference into pointer
            KTextEditor__Range* cbval2 = const_cast<KTextEditor::Range*>(&word_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            ktexteditor__codecompletionmodel_executecompletionitem_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KTextEditor__CodeCompletionModel::executeCompletionItem(view, word, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_columncount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = ktexteditor__codecompletionmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__CodeCompletionModel::columnCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_index_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_index_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModel::index(row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_itemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            libqt_map /* of int to QVariant* */ callback_ret = ktexteditor__codecompletionmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap.insert(static_cast<int>(callback_ret_karr[i]), *(callback_ret_varr[i]));
            }
            return callback_ret_QMap;
        }
        return KTextEditor__CodeCompletionModel::itemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_parent_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_parent_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModel::parent(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_rowcount_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int callback_ret = ktexteditor__codecompletionmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__CodeCompletionModel::rowCount(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (ktexteditor__codecompletionmodel_sibling_callback) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);
            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModel::sibling(row, column, idx);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_haschildren_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::hasChildren(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (ktexteditor__codecompletionmodel_data_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;
            QVariant* callback_ret = ktexteditor__codecompletionmodel_data_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::CodeCompletionModel::data called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (ktexteditor__codecompletionmodel_setdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;
            bool callback_ret = ktexteditor__codecompletionmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::setData(index, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (ktexteditor__codecompletionmodel_headerdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;
            QVariant* callback_ret = ktexteditor__codecompletionmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModel::headerData(section, orientation, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (ktexteditor__codecompletionmodel_setheaderdata_callback) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;
            bool callback_ret = ktexteditor__codecompletionmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::setHeaderData(section, orientation, value, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (ktexteditor__codecompletionmodel_setitemdata_callback) {
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
            bool callback_ret = ktexteditor__codecompletionmodel_setitemdata_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::setItemData(index, roles);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (ktexteditor__codecompletionmodel_clearitemdata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::clearItemData(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (ktexteditor__codecompletionmodel_mimetypes_callback) {
            const char** callback_ret = ktexteditor__codecompletionmodel_mimetypes_callback(this);
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
        return KTextEditor__CodeCompletionModel::mimeTypes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (ktexteditor__codecompletionmodel_mimedata_callback) {
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
            QMimeData* callback_ret = ktexteditor__codecompletionmodel_mimedata_callback(this, cbval1);
            free(indexes_arr);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::mimeData(indexes);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_candropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::canDropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_dropmimedata_callback) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::dropMimeData(data, action, row, column, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (ktexteditor__codecompletionmodel_supporteddropactions_callback) {
            int callback_ret = ktexteditor__codecompletionmodel_supporteddropactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KTextEditor__CodeCompletionModel::supportedDropActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (ktexteditor__codecompletionmodel_supporteddragactions_callback) {
            int callback_ret = ktexteditor__codecompletionmodel_supporteddragactions_callback(this);
            return static_cast<Qt::DropActions>(callback_ret);
        }
        return KTextEditor__CodeCompletionModel::supportedDragActions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_insertrows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::insertRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_insertcolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::insertColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_removerows_callback) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::removeRows(row, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_removecolumns_callback) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::removeColumns(column, count, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (ktexteditor__codecompletionmodel_moverows_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceRow;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = ktexteditor__codecompletionmodel_moverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (ktexteditor__codecompletionmodel_movecolumns_callback) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceColumn;
            int cbval3 = count;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationChild;
            bool callback_ret = ktexteditor__codecompletionmodel_movecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (ktexteditor__codecompletionmodel_fetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            ktexteditor__codecompletionmodel_fetchmore_callback(this, cbval1);
            return;
        }
        KTextEditor__CodeCompletionModel::fetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (ktexteditor__codecompletionmodel_canfetchmore_callback) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            bool callback_ret = ktexteditor__codecompletionmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::canFetchMore(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_flags_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int callback_ret = ktexteditor__codecompletionmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        }
        return KTextEditor__CodeCompletionModel::flags(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (ktexteditor__codecompletionmodel_sort_callback) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);
            ktexteditor__codecompletionmodel_sort_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__CodeCompletionModel::sort(column, order);
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_buddy_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelIndex* callback_ret = ktexteditor__codecompletionmodel_buddy_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModel::buddy(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (ktexteditor__codecompletionmodel_match_callback) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);
            libqt_list /* of QModelIndex* */ callback_ret = ktexteditor__codecompletionmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QModelIndex** callback_ret_arr = static_cast<QModelIndex**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KTextEditor__CodeCompletionModel::match(start, role, value, hits, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (ktexteditor__codecompletionmodel_span_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = ktexteditor__codecompletionmodel_span_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KTextEditor__CodeCompletionModel::span(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (ktexteditor__codecompletionmodel_rolenames_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = ktexteditor__codecompletionmodel_rolenames_callback(this);
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
        return KTextEditor__CodeCompletionModel::roleNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (ktexteditor__codecompletionmodel_multidata_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);
            ktexteditor__codecompletionmodel_multidata_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__CodeCompletionModel::multiData(index, roleDataSpan);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (ktexteditor__codecompletionmodel_submit_callback) {
            bool callback_ret = ktexteditor__codecompletionmodel_submit_callback(this);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::submit();
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (ktexteditor__codecompletionmodel_revert_callback) {
            ktexteditor__codecompletionmodel_revert_callback(this);
            return;
        }
        KTextEditor__CodeCompletionModel::revert();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (ktexteditor__codecompletionmodel_resetinternaldata_callback) {
            ktexteditor__codecompletionmodel_resetinternaldata_callback(this);
            return;
        }
        KTextEditor__CodeCompletionModel::resetInternalData();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__codecompletionmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__codecompletionmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__codecompletionmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__codecompletionmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__CodeCompletionModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__codecompletionmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__codecompletionmodel_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__CodeCompletionModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__codecompletionmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__codecompletionmodel_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__CodeCompletionModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__codecompletionmodel_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__codecompletionmodel_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__CodeCompletionModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__codecompletionmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__codecompletionmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__CodeCompletionModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__codecompletionmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__codecompletionmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__CodeCompletionModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTextEditor__CodeCompletionModel_SuperResetInternalData(KTextEditor::CodeCompletionModel* self);
    friend void KTextEditor__CodeCompletionModel_SuperTimerEvent(KTextEditor::CodeCompletionModel* self, QTimerEvent* event);
    friend void KTextEditor__CodeCompletionModel_SuperChildEvent(KTextEditor::CodeCompletionModel* self, QChildEvent* event);
    friend void KTextEditor__CodeCompletionModel_SuperCustomEvent(KTextEditor::CodeCompletionModel* self, QEvent* event);
    friend void KTextEditor__CodeCompletionModel_SuperConnectNotify(KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
    friend void KTextEditor__CodeCompletionModel_SuperDisconnectNotify(KTextEditor::CodeCompletionModel* self, const QMetaMethod* signal);
};

#endif
