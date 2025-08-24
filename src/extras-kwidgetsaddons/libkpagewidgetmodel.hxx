#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEWIDGETMODEL_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPAGEWIDGETMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPageWidgetItem so that we can call protected methods
class VirtualKPageWidgetItem final : public KPageWidgetItem {

  public:
    // Virtual class boolean flag
    bool isVirtualKPageWidgetItem = true;

    // Virtual class public types (including callbacks)
    using KPageWidgetItem_Metacall_Callback = int (*)(KPageWidgetItem*, int, int, void**);
    using KPageWidgetItem_Event_Callback = bool (*)(KPageWidgetItem*, QEvent*);
    using KPageWidgetItem_EventFilter_Callback = bool (*)(KPageWidgetItem*, QObject*, QEvent*);
    using KPageWidgetItem_TimerEvent_Callback = void (*)(KPageWidgetItem*, QTimerEvent*);
    using KPageWidgetItem_ChildEvent_Callback = void (*)(KPageWidgetItem*, QChildEvent*);
    using KPageWidgetItem_CustomEvent_Callback = void (*)(KPageWidgetItem*, QEvent*);
    using KPageWidgetItem_ConnectNotify_Callback = void (*)(KPageWidgetItem*, QMetaMethod*);
    using KPageWidgetItem_DisconnectNotify_Callback = void (*)(KPageWidgetItem*, QMetaMethod*);
    using KPageWidgetItem_Sender_Callback = QObject* (*)();
    using KPageWidgetItem_SenderSignalIndex_Callback = int (*)();
    using KPageWidgetItem_Receivers_Callback = int (*)(const KPageWidgetItem*, const char*);
    using KPageWidgetItem_IsSignalConnected_Callback = bool (*)(const KPageWidgetItem*, QMetaMethod*);

  protected:
    // Instance callback storage
    KPageWidgetItem_Metacall_Callback kpagewidgetitem_metacall_callback = nullptr;
    KPageWidgetItem_Event_Callback kpagewidgetitem_event_callback = nullptr;
    KPageWidgetItem_EventFilter_Callback kpagewidgetitem_eventfilter_callback = nullptr;
    KPageWidgetItem_TimerEvent_Callback kpagewidgetitem_timerevent_callback = nullptr;
    KPageWidgetItem_ChildEvent_Callback kpagewidgetitem_childevent_callback = nullptr;
    KPageWidgetItem_CustomEvent_Callback kpagewidgetitem_customevent_callback = nullptr;
    KPageWidgetItem_ConnectNotify_Callback kpagewidgetitem_connectnotify_callback = nullptr;
    KPageWidgetItem_DisconnectNotify_Callback kpagewidgetitem_disconnectnotify_callback = nullptr;
    KPageWidgetItem_Sender_Callback kpagewidgetitem_sender_callback = nullptr;
    KPageWidgetItem_SenderSignalIndex_Callback kpagewidgetitem_sendersignalindex_callback = nullptr;
    KPageWidgetItem_Receivers_Callback kpagewidgetitem_receivers_callback = nullptr;
    KPageWidgetItem_IsSignalConnected_Callback kpagewidgetitem_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kpagewidgetitem_metacall_isbase = false;
    mutable bool kpagewidgetitem_event_isbase = false;
    mutable bool kpagewidgetitem_eventfilter_isbase = false;
    mutable bool kpagewidgetitem_timerevent_isbase = false;
    mutable bool kpagewidgetitem_childevent_isbase = false;
    mutable bool kpagewidgetitem_customevent_isbase = false;
    mutable bool kpagewidgetitem_connectnotify_isbase = false;
    mutable bool kpagewidgetitem_disconnectnotify_isbase = false;
    mutable bool kpagewidgetitem_sender_isbase = false;
    mutable bool kpagewidgetitem_sendersignalindex_isbase = false;
    mutable bool kpagewidgetitem_receivers_isbase = false;
    mutable bool kpagewidgetitem_issignalconnected_isbase = false;

  public:
    VirtualKPageWidgetItem(QWidget* widget) : KPageWidgetItem(widget) {};
    VirtualKPageWidgetItem(QWidget* widget, const QString& name) : KPageWidgetItem(widget, name) {};

    ~VirtualKPageWidgetItem() {
        kpagewidgetitem_metacall_callback = nullptr;
        kpagewidgetitem_event_callback = nullptr;
        kpagewidgetitem_eventfilter_callback = nullptr;
        kpagewidgetitem_timerevent_callback = nullptr;
        kpagewidgetitem_childevent_callback = nullptr;
        kpagewidgetitem_customevent_callback = nullptr;
        kpagewidgetitem_connectnotify_callback = nullptr;
        kpagewidgetitem_disconnectnotify_callback = nullptr;
        kpagewidgetitem_sender_callback = nullptr;
        kpagewidgetitem_sendersignalindex_callback = nullptr;
        kpagewidgetitem_receivers_callback = nullptr;
        kpagewidgetitem_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKPageWidgetItem_Metacall_Callback(KPageWidgetItem_Metacall_Callback cb) { kpagewidgetitem_metacall_callback = cb; }
    inline void setKPageWidgetItem_Event_Callback(KPageWidgetItem_Event_Callback cb) { kpagewidgetitem_event_callback = cb; }
    inline void setKPageWidgetItem_EventFilter_Callback(KPageWidgetItem_EventFilter_Callback cb) { kpagewidgetitem_eventfilter_callback = cb; }
    inline void setKPageWidgetItem_TimerEvent_Callback(KPageWidgetItem_TimerEvent_Callback cb) { kpagewidgetitem_timerevent_callback = cb; }
    inline void setKPageWidgetItem_ChildEvent_Callback(KPageWidgetItem_ChildEvent_Callback cb) { kpagewidgetitem_childevent_callback = cb; }
    inline void setKPageWidgetItem_CustomEvent_Callback(KPageWidgetItem_CustomEvent_Callback cb) { kpagewidgetitem_customevent_callback = cb; }
    inline void setKPageWidgetItem_ConnectNotify_Callback(KPageWidgetItem_ConnectNotify_Callback cb) { kpagewidgetitem_connectnotify_callback = cb; }
    inline void setKPageWidgetItem_DisconnectNotify_Callback(KPageWidgetItem_DisconnectNotify_Callback cb) { kpagewidgetitem_disconnectnotify_callback = cb; }
    inline void setKPageWidgetItem_Sender_Callback(KPageWidgetItem_Sender_Callback cb) { kpagewidgetitem_sender_callback = cb; }
    inline void setKPageWidgetItem_SenderSignalIndex_Callback(KPageWidgetItem_SenderSignalIndex_Callback cb) { kpagewidgetitem_sendersignalindex_callback = cb; }
    inline void setKPageWidgetItem_Receivers_Callback(KPageWidgetItem_Receivers_Callback cb) { kpagewidgetitem_receivers_callback = cb; }
    inline void setKPageWidgetItem_IsSignalConnected_Callback(KPageWidgetItem_IsSignalConnected_Callback cb) { kpagewidgetitem_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKPageWidgetItem_Metacall_IsBase(bool value) const { kpagewidgetitem_metacall_isbase = value; }
    inline void setKPageWidgetItem_Event_IsBase(bool value) const { kpagewidgetitem_event_isbase = value; }
    inline void setKPageWidgetItem_EventFilter_IsBase(bool value) const { kpagewidgetitem_eventfilter_isbase = value; }
    inline void setKPageWidgetItem_TimerEvent_IsBase(bool value) const { kpagewidgetitem_timerevent_isbase = value; }
    inline void setKPageWidgetItem_ChildEvent_IsBase(bool value) const { kpagewidgetitem_childevent_isbase = value; }
    inline void setKPageWidgetItem_CustomEvent_IsBase(bool value) const { kpagewidgetitem_customevent_isbase = value; }
    inline void setKPageWidgetItem_ConnectNotify_IsBase(bool value) const { kpagewidgetitem_connectnotify_isbase = value; }
    inline void setKPageWidgetItem_DisconnectNotify_IsBase(bool value) const { kpagewidgetitem_disconnectnotify_isbase = value; }
    inline void setKPageWidgetItem_Sender_IsBase(bool value) const { kpagewidgetitem_sender_isbase = value; }
    inline void setKPageWidgetItem_SenderSignalIndex_IsBase(bool value) const { kpagewidgetitem_sendersignalindex_isbase = value; }
    inline void setKPageWidgetItem_Receivers_IsBase(bool value) const { kpagewidgetitem_receivers_isbase = value; }
    inline void setKPageWidgetItem_IsSignalConnected_IsBase(bool value) const { kpagewidgetitem_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagewidgetitem_metacall_isbase) {
            kpagewidgetitem_metacall_isbase = false;
            return KPageWidgetItem::qt_metacall(param1, param2, param3);
        } else if (kpagewidgetitem_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpagewidgetitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetItem::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagewidgetitem_event_isbase) {
            kpagewidgetitem_event_isbase = false;
            return KPageWidgetItem::event(event);
        } else if (kpagewidgetitem_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpagewidgetitem_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetItem::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagewidgetitem_eventfilter_isbase) {
            kpagewidgetitem_eventfilter_isbase = false;
            return KPageWidgetItem::eventFilter(watched, event);
        } else if (kpagewidgetitem_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kpagewidgetitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPageWidgetItem::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagewidgetitem_timerevent_isbase) {
            kpagewidgetitem_timerevent_isbase = false;
            KPageWidgetItem::timerEvent(event);
        } else if (kpagewidgetitem_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpagewidgetitem_timerevent_callback(this, cbval1);
        } else {
            KPageWidgetItem::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagewidgetitem_childevent_isbase) {
            kpagewidgetitem_childevent_isbase = false;
            KPageWidgetItem::childEvent(event);
        } else if (kpagewidgetitem_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpagewidgetitem_childevent_callback(this, cbval1);
        } else {
            KPageWidgetItem::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagewidgetitem_customevent_isbase) {
            kpagewidgetitem_customevent_isbase = false;
            KPageWidgetItem::customEvent(event);
        } else if (kpagewidgetitem_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpagewidgetitem_customevent_callback(this, cbval1);
        } else {
            KPageWidgetItem::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetitem_connectnotify_isbase) {
            kpagewidgetitem_connectnotify_isbase = false;
            KPageWidgetItem::connectNotify(signal);
        } else if (kpagewidgetitem_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagewidgetitem_connectnotify_callback(this, cbval1);
        } else {
            KPageWidgetItem::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetitem_disconnectnotify_isbase) {
            kpagewidgetitem_disconnectnotify_isbase = false;
            KPageWidgetItem::disconnectNotify(signal);
        } else if (kpagewidgetitem_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagewidgetitem_disconnectnotify_callback(this, cbval1);
        } else {
            KPageWidgetItem::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpagewidgetitem_sender_isbase) {
            kpagewidgetitem_sender_isbase = false;
            return KPageWidgetItem::sender();
        } else if (kpagewidgetitem_sender_callback != nullptr) {
            QObject* callback_ret = kpagewidgetitem_sender_callback();
            return callback_ret;
        } else {
            return KPageWidgetItem::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpagewidgetitem_sendersignalindex_isbase) {
            kpagewidgetitem_sendersignalindex_isbase = false;
            return KPageWidgetItem::senderSignalIndex();
        } else if (kpagewidgetitem_sendersignalindex_callback != nullptr) {
            int callback_ret = kpagewidgetitem_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetItem::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpagewidgetitem_receivers_isbase) {
            kpagewidgetitem_receivers_isbase = false;
            return KPageWidgetItem::receivers(signal);
        } else if (kpagewidgetitem_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpagewidgetitem_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetItem::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpagewidgetitem_issignalconnected_isbase) {
            kpagewidgetitem_issignalconnected_isbase = false;
            return KPageWidgetItem::isSignalConnected(signal);
        } else if (kpagewidgetitem_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpagewidgetitem_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetItem::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KPageWidgetItem_TimerEvent(KPageWidgetItem* self, QTimerEvent* event);
    friend void KPageWidgetItem_QBaseTimerEvent(KPageWidgetItem* self, QTimerEvent* event);
    friend void KPageWidgetItem_ChildEvent(KPageWidgetItem* self, QChildEvent* event);
    friend void KPageWidgetItem_QBaseChildEvent(KPageWidgetItem* self, QChildEvent* event);
    friend void KPageWidgetItem_CustomEvent(KPageWidgetItem* self, QEvent* event);
    friend void KPageWidgetItem_QBaseCustomEvent(KPageWidgetItem* self, QEvent* event);
    friend void KPageWidgetItem_ConnectNotify(KPageWidgetItem* self, const QMetaMethod* signal);
    friend void KPageWidgetItem_QBaseConnectNotify(KPageWidgetItem* self, const QMetaMethod* signal);
    friend void KPageWidgetItem_DisconnectNotify(KPageWidgetItem* self, const QMetaMethod* signal);
    friend void KPageWidgetItem_QBaseDisconnectNotify(KPageWidgetItem* self, const QMetaMethod* signal);
    friend QObject* KPageWidgetItem_Sender(const KPageWidgetItem* self);
    friend QObject* KPageWidgetItem_QBaseSender(const KPageWidgetItem* self);
    friend int KPageWidgetItem_SenderSignalIndex(const KPageWidgetItem* self);
    friend int KPageWidgetItem_QBaseSenderSignalIndex(const KPageWidgetItem* self);
    friend int KPageWidgetItem_Receivers(const KPageWidgetItem* self, const char* signal);
    friend int KPageWidgetItem_QBaseReceivers(const KPageWidgetItem* self, const char* signal);
    friend bool KPageWidgetItem_IsSignalConnected(const KPageWidgetItem* self, const QMetaMethod* signal);
    friend bool KPageWidgetItem_QBaseIsSignalConnected(const KPageWidgetItem* self, const QMetaMethod* signal);
};

// This class is a subclass of KPageWidgetModel so that we can call protected methods
class VirtualKPageWidgetModel final : public KPageWidgetModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKPageWidgetModel = true;

    // Virtual class public types (including callbacks)
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
    using KPageWidgetModel_MimeTypes_Callback = const char** (*)();
    using KPageWidgetModel_MimeData_Callback = QMimeData* (*)(const KPageWidgetModel*, libqt_list /* of QModelIndex* */);
    using KPageWidgetModel_CanDropMimeData_Callback = bool (*)(const KPageWidgetModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageWidgetModel_DropMimeData_Callback = bool (*)(KPageWidgetModel*, QMimeData*, int, int, int, QModelIndex*);
    using KPageWidgetModel_SupportedDropActions_Callback = int (*)();
    using KPageWidgetModel_SupportedDragActions_Callback = int (*)();
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
    using KPageWidgetModel_Match_Callback = QModelIndex** (*)(const KPageWidgetModel*, QModelIndex*, int, QVariant*, int, int);
    using KPageWidgetModel_Span_Callback = QSize* (*)(const KPageWidgetModel*, QModelIndex*);
    using KPageWidgetModel_RoleNames_Callback = libqt_map /* of int to libqt_string */ (*)();
    using KPageWidgetModel_MultiData_Callback = void (*)(const KPageWidgetModel*, QModelIndex*, QModelRoleDataSpan*);
    using KPageWidgetModel_Submit_Callback = bool (*)();
    using KPageWidgetModel_Revert_Callback = void (*)();
    using KPageWidgetModel_ResetInternalData_Callback = void (*)();
    using KPageWidgetModel_Event_Callback = bool (*)(KPageWidgetModel*, QEvent*);
    using KPageWidgetModel_EventFilter_Callback = bool (*)(KPageWidgetModel*, QObject*, QEvent*);
    using KPageWidgetModel_TimerEvent_Callback = void (*)(KPageWidgetModel*, QTimerEvent*);
    using KPageWidgetModel_ChildEvent_Callback = void (*)(KPageWidgetModel*, QChildEvent*);
    using KPageWidgetModel_CustomEvent_Callback = void (*)(KPageWidgetModel*, QEvent*);
    using KPageWidgetModel_ConnectNotify_Callback = void (*)(KPageWidgetModel*, QMetaMethod*);
    using KPageWidgetModel_DisconnectNotify_Callback = void (*)(KPageWidgetModel*, QMetaMethod*);
    using KPageWidgetModel_CreateIndex_Callback = QModelIndex* (*)(const KPageWidgetModel*, int, int);
    using KPageWidgetModel_EncodeData_Callback = void (*)(const KPageWidgetModel*, libqt_list /* of QModelIndex* */, QDataStream*);
    using KPageWidgetModel_DecodeData_Callback = bool (*)(KPageWidgetModel*, int, int, QModelIndex*, QDataStream*);
    using KPageWidgetModel_BeginInsertRows_Callback = void (*)(KPageWidgetModel*, QModelIndex*, int, int);
    using KPageWidgetModel_EndInsertRows_Callback = void (*)();
    using KPageWidgetModel_BeginRemoveRows_Callback = void (*)(KPageWidgetModel*, QModelIndex*, int, int);
    using KPageWidgetModel_EndRemoveRows_Callback = void (*)();
    using KPageWidgetModel_BeginMoveRows_Callback = bool (*)(KPageWidgetModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageWidgetModel_EndMoveRows_Callback = void (*)();
    using KPageWidgetModel_BeginInsertColumns_Callback = void (*)(KPageWidgetModel*, QModelIndex*, int, int);
    using KPageWidgetModel_EndInsertColumns_Callback = void (*)();
    using KPageWidgetModel_BeginRemoveColumns_Callback = void (*)(KPageWidgetModel*, QModelIndex*, int, int);
    using KPageWidgetModel_EndRemoveColumns_Callback = void (*)();
    using KPageWidgetModel_BeginMoveColumns_Callback = bool (*)(KPageWidgetModel*, QModelIndex*, int, int, QModelIndex*, int);
    using KPageWidgetModel_EndMoveColumns_Callback = void (*)();
    using KPageWidgetModel_BeginResetModel_Callback = void (*)();
    using KPageWidgetModel_EndResetModel_Callback = void (*)();
    using KPageWidgetModel_ChangePersistentIndex_Callback = void (*)(KPageWidgetModel*, QModelIndex*, QModelIndex*);
    using KPageWidgetModel_ChangePersistentIndexList_Callback = void (*)(KPageWidgetModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */);
    using KPageWidgetModel_PersistentIndexList_Callback = QModelIndex** (*)();
    using KPageWidgetModel_Sender_Callback = QObject* (*)();
    using KPageWidgetModel_SenderSignalIndex_Callback = int (*)();
    using KPageWidgetModel_Receivers_Callback = int (*)(const KPageWidgetModel*, const char*);
    using KPageWidgetModel_IsSignalConnected_Callback = bool (*)(const KPageWidgetModel*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KPageWidgetModel_CreateIndex_Callback kpagewidgetmodel_createindex_callback = nullptr;
    KPageWidgetModel_EncodeData_Callback kpagewidgetmodel_encodedata_callback = nullptr;
    KPageWidgetModel_DecodeData_Callback kpagewidgetmodel_decodedata_callback = nullptr;
    KPageWidgetModel_BeginInsertRows_Callback kpagewidgetmodel_begininsertrows_callback = nullptr;
    KPageWidgetModel_EndInsertRows_Callback kpagewidgetmodel_endinsertrows_callback = nullptr;
    KPageWidgetModel_BeginRemoveRows_Callback kpagewidgetmodel_beginremoverows_callback = nullptr;
    KPageWidgetModel_EndRemoveRows_Callback kpagewidgetmodel_endremoverows_callback = nullptr;
    KPageWidgetModel_BeginMoveRows_Callback kpagewidgetmodel_beginmoverows_callback = nullptr;
    KPageWidgetModel_EndMoveRows_Callback kpagewidgetmodel_endmoverows_callback = nullptr;
    KPageWidgetModel_BeginInsertColumns_Callback kpagewidgetmodel_begininsertcolumns_callback = nullptr;
    KPageWidgetModel_EndInsertColumns_Callback kpagewidgetmodel_endinsertcolumns_callback = nullptr;
    KPageWidgetModel_BeginRemoveColumns_Callback kpagewidgetmodel_beginremovecolumns_callback = nullptr;
    KPageWidgetModel_EndRemoveColumns_Callback kpagewidgetmodel_endremovecolumns_callback = nullptr;
    KPageWidgetModel_BeginMoveColumns_Callback kpagewidgetmodel_beginmovecolumns_callback = nullptr;
    KPageWidgetModel_EndMoveColumns_Callback kpagewidgetmodel_endmovecolumns_callback = nullptr;
    KPageWidgetModel_BeginResetModel_Callback kpagewidgetmodel_beginresetmodel_callback = nullptr;
    KPageWidgetModel_EndResetModel_Callback kpagewidgetmodel_endresetmodel_callback = nullptr;
    KPageWidgetModel_ChangePersistentIndex_Callback kpagewidgetmodel_changepersistentindex_callback = nullptr;
    KPageWidgetModel_ChangePersistentIndexList_Callback kpagewidgetmodel_changepersistentindexlist_callback = nullptr;
    KPageWidgetModel_PersistentIndexList_Callback kpagewidgetmodel_persistentindexlist_callback = nullptr;
    KPageWidgetModel_Sender_Callback kpagewidgetmodel_sender_callback = nullptr;
    KPageWidgetModel_SenderSignalIndex_Callback kpagewidgetmodel_sendersignalindex_callback = nullptr;
    KPageWidgetModel_Receivers_Callback kpagewidgetmodel_receivers_callback = nullptr;
    KPageWidgetModel_IsSignalConnected_Callback kpagewidgetmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kpagewidgetmodel_metacall_isbase = false;
    mutable bool kpagewidgetmodel_columncount_isbase = false;
    mutable bool kpagewidgetmodel_data_isbase = false;
    mutable bool kpagewidgetmodel_setdata_isbase = false;
    mutable bool kpagewidgetmodel_flags_isbase = false;
    mutable bool kpagewidgetmodel_index_isbase = false;
    mutable bool kpagewidgetmodel_parent_isbase = false;
    mutable bool kpagewidgetmodel_rowcount_isbase = false;
    mutable bool kpagewidgetmodel_sibling_isbase = false;
    mutable bool kpagewidgetmodel_haschildren_isbase = false;
    mutable bool kpagewidgetmodel_headerdata_isbase = false;
    mutable bool kpagewidgetmodel_setheaderdata_isbase = false;
    mutable bool kpagewidgetmodel_itemdata_isbase = false;
    mutable bool kpagewidgetmodel_setitemdata_isbase = false;
    mutable bool kpagewidgetmodel_clearitemdata_isbase = false;
    mutable bool kpagewidgetmodel_mimetypes_isbase = false;
    mutable bool kpagewidgetmodel_mimedata_isbase = false;
    mutable bool kpagewidgetmodel_candropmimedata_isbase = false;
    mutable bool kpagewidgetmodel_dropmimedata_isbase = false;
    mutable bool kpagewidgetmodel_supporteddropactions_isbase = false;
    mutable bool kpagewidgetmodel_supporteddragactions_isbase = false;
    mutable bool kpagewidgetmodel_insertrows_isbase = false;
    mutable bool kpagewidgetmodel_insertcolumns_isbase = false;
    mutable bool kpagewidgetmodel_removerows_isbase = false;
    mutable bool kpagewidgetmodel_removecolumns_isbase = false;
    mutable bool kpagewidgetmodel_moverows_isbase = false;
    mutable bool kpagewidgetmodel_movecolumns_isbase = false;
    mutable bool kpagewidgetmodel_fetchmore_isbase = false;
    mutable bool kpagewidgetmodel_canfetchmore_isbase = false;
    mutable bool kpagewidgetmodel_sort_isbase = false;
    mutable bool kpagewidgetmodel_buddy_isbase = false;
    mutable bool kpagewidgetmodel_match_isbase = false;
    mutable bool kpagewidgetmodel_span_isbase = false;
    mutable bool kpagewidgetmodel_rolenames_isbase = false;
    mutable bool kpagewidgetmodel_multidata_isbase = false;
    mutable bool kpagewidgetmodel_submit_isbase = false;
    mutable bool kpagewidgetmodel_revert_isbase = false;
    mutable bool kpagewidgetmodel_resetinternaldata_isbase = false;
    mutable bool kpagewidgetmodel_event_isbase = false;
    mutable bool kpagewidgetmodel_eventfilter_isbase = false;
    mutable bool kpagewidgetmodel_timerevent_isbase = false;
    mutable bool kpagewidgetmodel_childevent_isbase = false;
    mutable bool kpagewidgetmodel_customevent_isbase = false;
    mutable bool kpagewidgetmodel_connectnotify_isbase = false;
    mutable bool kpagewidgetmodel_disconnectnotify_isbase = false;
    mutable bool kpagewidgetmodel_createindex_isbase = false;
    mutable bool kpagewidgetmodel_encodedata_isbase = false;
    mutable bool kpagewidgetmodel_decodedata_isbase = false;
    mutable bool kpagewidgetmodel_begininsertrows_isbase = false;
    mutable bool kpagewidgetmodel_endinsertrows_isbase = false;
    mutable bool kpagewidgetmodel_beginremoverows_isbase = false;
    mutable bool kpagewidgetmodel_endremoverows_isbase = false;
    mutable bool kpagewidgetmodel_beginmoverows_isbase = false;
    mutable bool kpagewidgetmodel_endmoverows_isbase = false;
    mutable bool kpagewidgetmodel_begininsertcolumns_isbase = false;
    mutable bool kpagewidgetmodel_endinsertcolumns_isbase = false;
    mutable bool kpagewidgetmodel_beginremovecolumns_isbase = false;
    mutable bool kpagewidgetmodel_endremovecolumns_isbase = false;
    mutable bool kpagewidgetmodel_beginmovecolumns_isbase = false;
    mutable bool kpagewidgetmodel_endmovecolumns_isbase = false;
    mutable bool kpagewidgetmodel_beginresetmodel_isbase = false;
    mutable bool kpagewidgetmodel_endresetmodel_isbase = false;
    mutable bool kpagewidgetmodel_changepersistentindex_isbase = false;
    mutable bool kpagewidgetmodel_changepersistentindexlist_isbase = false;
    mutable bool kpagewidgetmodel_persistentindexlist_isbase = false;
    mutable bool kpagewidgetmodel_sender_isbase = false;
    mutable bool kpagewidgetmodel_sendersignalindex_isbase = false;
    mutable bool kpagewidgetmodel_receivers_isbase = false;
    mutable bool kpagewidgetmodel_issignalconnected_isbase = false;

  public:
    VirtualKPageWidgetModel() : KPageWidgetModel() {};
    VirtualKPageWidgetModel(QObject* parent) : KPageWidgetModel(parent) {};

    ~VirtualKPageWidgetModel() {
        kpagewidgetmodel_metacall_callback = nullptr;
        kpagewidgetmodel_columncount_callback = nullptr;
        kpagewidgetmodel_data_callback = nullptr;
        kpagewidgetmodel_setdata_callback = nullptr;
        kpagewidgetmodel_flags_callback = nullptr;
        kpagewidgetmodel_index_callback = nullptr;
        kpagewidgetmodel_parent_callback = nullptr;
        kpagewidgetmodel_rowcount_callback = nullptr;
        kpagewidgetmodel_sibling_callback = nullptr;
        kpagewidgetmodel_haschildren_callback = nullptr;
        kpagewidgetmodel_headerdata_callback = nullptr;
        kpagewidgetmodel_setheaderdata_callback = nullptr;
        kpagewidgetmodel_itemdata_callback = nullptr;
        kpagewidgetmodel_setitemdata_callback = nullptr;
        kpagewidgetmodel_clearitemdata_callback = nullptr;
        kpagewidgetmodel_mimetypes_callback = nullptr;
        kpagewidgetmodel_mimedata_callback = nullptr;
        kpagewidgetmodel_candropmimedata_callback = nullptr;
        kpagewidgetmodel_dropmimedata_callback = nullptr;
        kpagewidgetmodel_supporteddropactions_callback = nullptr;
        kpagewidgetmodel_supporteddragactions_callback = nullptr;
        kpagewidgetmodel_insertrows_callback = nullptr;
        kpagewidgetmodel_insertcolumns_callback = nullptr;
        kpagewidgetmodel_removerows_callback = nullptr;
        kpagewidgetmodel_removecolumns_callback = nullptr;
        kpagewidgetmodel_moverows_callback = nullptr;
        kpagewidgetmodel_movecolumns_callback = nullptr;
        kpagewidgetmodel_fetchmore_callback = nullptr;
        kpagewidgetmodel_canfetchmore_callback = nullptr;
        kpagewidgetmodel_sort_callback = nullptr;
        kpagewidgetmodel_buddy_callback = nullptr;
        kpagewidgetmodel_match_callback = nullptr;
        kpagewidgetmodel_span_callback = nullptr;
        kpagewidgetmodel_rolenames_callback = nullptr;
        kpagewidgetmodel_multidata_callback = nullptr;
        kpagewidgetmodel_submit_callback = nullptr;
        kpagewidgetmodel_revert_callback = nullptr;
        kpagewidgetmodel_resetinternaldata_callback = nullptr;
        kpagewidgetmodel_event_callback = nullptr;
        kpagewidgetmodel_eventfilter_callback = nullptr;
        kpagewidgetmodel_timerevent_callback = nullptr;
        kpagewidgetmodel_childevent_callback = nullptr;
        kpagewidgetmodel_customevent_callback = nullptr;
        kpagewidgetmodel_connectnotify_callback = nullptr;
        kpagewidgetmodel_disconnectnotify_callback = nullptr;
        kpagewidgetmodel_createindex_callback = nullptr;
        kpagewidgetmodel_encodedata_callback = nullptr;
        kpagewidgetmodel_decodedata_callback = nullptr;
        kpagewidgetmodel_begininsertrows_callback = nullptr;
        kpagewidgetmodel_endinsertrows_callback = nullptr;
        kpagewidgetmodel_beginremoverows_callback = nullptr;
        kpagewidgetmodel_endremoverows_callback = nullptr;
        kpagewidgetmodel_beginmoverows_callback = nullptr;
        kpagewidgetmodel_endmoverows_callback = nullptr;
        kpagewidgetmodel_begininsertcolumns_callback = nullptr;
        kpagewidgetmodel_endinsertcolumns_callback = nullptr;
        kpagewidgetmodel_beginremovecolumns_callback = nullptr;
        kpagewidgetmodel_endremovecolumns_callback = nullptr;
        kpagewidgetmodel_beginmovecolumns_callback = nullptr;
        kpagewidgetmodel_endmovecolumns_callback = nullptr;
        kpagewidgetmodel_beginresetmodel_callback = nullptr;
        kpagewidgetmodel_endresetmodel_callback = nullptr;
        kpagewidgetmodel_changepersistentindex_callback = nullptr;
        kpagewidgetmodel_changepersistentindexlist_callback = nullptr;
        kpagewidgetmodel_persistentindexlist_callback = nullptr;
        kpagewidgetmodel_sender_callback = nullptr;
        kpagewidgetmodel_sendersignalindex_callback = nullptr;
        kpagewidgetmodel_receivers_callback = nullptr;
        kpagewidgetmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKPageWidgetModel_Metacall_Callback(KPageWidgetModel_Metacall_Callback cb) { kpagewidgetmodel_metacall_callback = cb; }
    inline void setKPageWidgetModel_ColumnCount_Callback(KPageWidgetModel_ColumnCount_Callback cb) { kpagewidgetmodel_columncount_callback = cb; }
    inline void setKPageWidgetModel_Data_Callback(KPageWidgetModel_Data_Callback cb) { kpagewidgetmodel_data_callback = cb; }
    inline void setKPageWidgetModel_SetData_Callback(KPageWidgetModel_SetData_Callback cb) { kpagewidgetmodel_setdata_callback = cb; }
    inline void setKPageWidgetModel_Flags_Callback(KPageWidgetModel_Flags_Callback cb) { kpagewidgetmodel_flags_callback = cb; }
    inline void setKPageWidgetModel_Index_Callback(KPageWidgetModel_Index_Callback cb) { kpagewidgetmodel_index_callback = cb; }
    inline void setKPageWidgetModel_Parent_Callback(KPageWidgetModel_Parent_Callback cb) { kpagewidgetmodel_parent_callback = cb; }
    inline void setKPageWidgetModel_RowCount_Callback(KPageWidgetModel_RowCount_Callback cb) { kpagewidgetmodel_rowcount_callback = cb; }
    inline void setKPageWidgetModel_Sibling_Callback(KPageWidgetModel_Sibling_Callback cb) { kpagewidgetmodel_sibling_callback = cb; }
    inline void setKPageWidgetModel_HasChildren_Callback(KPageWidgetModel_HasChildren_Callback cb) { kpagewidgetmodel_haschildren_callback = cb; }
    inline void setKPageWidgetModel_HeaderData_Callback(KPageWidgetModel_HeaderData_Callback cb) { kpagewidgetmodel_headerdata_callback = cb; }
    inline void setKPageWidgetModel_SetHeaderData_Callback(KPageWidgetModel_SetHeaderData_Callback cb) { kpagewidgetmodel_setheaderdata_callback = cb; }
    inline void setKPageWidgetModel_ItemData_Callback(KPageWidgetModel_ItemData_Callback cb) { kpagewidgetmodel_itemdata_callback = cb; }
    inline void setKPageWidgetModel_SetItemData_Callback(KPageWidgetModel_SetItemData_Callback cb) { kpagewidgetmodel_setitemdata_callback = cb; }
    inline void setKPageWidgetModel_ClearItemData_Callback(KPageWidgetModel_ClearItemData_Callback cb) { kpagewidgetmodel_clearitemdata_callback = cb; }
    inline void setKPageWidgetModel_MimeTypes_Callback(KPageWidgetModel_MimeTypes_Callback cb) { kpagewidgetmodel_mimetypes_callback = cb; }
    inline void setKPageWidgetModel_MimeData_Callback(KPageWidgetModel_MimeData_Callback cb) { kpagewidgetmodel_mimedata_callback = cb; }
    inline void setKPageWidgetModel_CanDropMimeData_Callback(KPageWidgetModel_CanDropMimeData_Callback cb) { kpagewidgetmodel_candropmimedata_callback = cb; }
    inline void setKPageWidgetModel_DropMimeData_Callback(KPageWidgetModel_DropMimeData_Callback cb) { kpagewidgetmodel_dropmimedata_callback = cb; }
    inline void setKPageWidgetModel_SupportedDropActions_Callback(KPageWidgetModel_SupportedDropActions_Callback cb) { kpagewidgetmodel_supporteddropactions_callback = cb; }
    inline void setKPageWidgetModel_SupportedDragActions_Callback(KPageWidgetModel_SupportedDragActions_Callback cb) { kpagewidgetmodel_supporteddragactions_callback = cb; }
    inline void setKPageWidgetModel_InsertRows_Callback(KPageWidgetModel_InsertRows_Callback cb) { kpagewidgetmodel_insertrows_callback = cb; }
    inline void setKPageWidgetModel_InsertColumns_Callback(KPageWidgetModel_InsertColumns_Callback cb) { kpagewidgetmodel_insertcolumns_callback = cb; }
    inline void setKPageWidgetModel_RemoveRows_Callback(KPageWidgetModel_RemoveRows_Callback cb) { kpagewidgetmodel_removerows_callback = cb; }
    inline void setKPageWidgetModel_RemoveColumns_Callback(KPageWidgetModel_RemoveColumns_Callback cb) { kpagewidgetmodel_removecolumns_callback = cb; }
    inline void setKPageWidgetModel_MoveRows_Callback(KPageWidgetModel_MoveRows_Callback cb) { kpagewidgetmodel_moverows_callback = cb; }
    inline void setKPageWidgetModel_MoveColumns_Callback(KPageWidgetModel_MoveColumns_Callback cb) { kpagewidgetmodel_movecolumns_callback = cb; }
    inline void setKPageWidgetModel_FetchMore_Callback(KPageWidgetModel_FetchMore_Callback cb) { kpagewidgetmodel_fetchmore_callback = cb; }
    inline void setKPageWidgetModel_CanFetchMore_Callback(KPageWidgetModel_CanFetchMore_Callback cb) { kpagewidgetmodel_canfetchmore_callback = cb; }
    inline void setKPageWidgetModel_Sort_Callback(KPageWidgetModel_Sort_Callback cb) { kpagewidgetmodel_sort_callback = cb; }
    inline void setKPageWidgetModel_Buddy_Callback(KPageWidgetModel_Buddy_Callback cb) { kpagewidgetmodel_buddy_callback = cb; }
    inline void setKPageWidgetModel_Match_Callback(KPageWidgetModel_Match_Callback cb) { kpagewidgetmodel_match_callback = cb; }
    inline void setKPageWidgetModel_Span_Callback(KPageWidgetModel_Span_Callback cb) { kpagewidgetmodel_span_callback = cb; }
    inline void setKPageWidgetModel_RoleNames_Callback(KPageWidgetModel_RoleNames_Callback cb) { kpagewidgetmodel_rolenames_callback = cb; }
    inline void setKPageWidgetModel_MultiData_Callback(KPageWidgetModel_MultiData_Callback cb) { kpagewidgetmodel_multidata_callback = cb; }
    inline void setKPageWidgetModel_Submit_Callback(KPageWidgetModel_Submit_Callback cb) { kpagewidgetmodel_submit_callback = cb; }
    inline void setKPageWidgetModel_Revert_Callback(KPageWidgetModel_Revert_Callback cb) { kpagewidgetmodel_revert_callback = cb; }
    inline void setKPageWidgetModel_ResetInternalData_Callback(KPageWidgetModel_ResetInternalData_Callback cb) { kpagewidgetmodel_resetinternaldata_callback = cb; }
    inline void setKPageWidgetModel_Event_Callback(KPageWidgetModel_Event_Callback cb) { kpagewidgetmodel_event_callback = cb; }
    inline void setKPageWidgetModel_EventFilter_Callback(KPageWidgetModel_EventFilter_Callback cb) { kpagewidgetmodel_eventfilter_callback = cb; }
    inline void setKPageWidgetModel_TimerEvent_Callback(KPageWidgetModel_TimerEvent_Callback cb) { kpagewidgetmodel_timerevent_callback = cb; }
    inline void setKPageWidgetModel_ChildEvent_Callback(KPageWidgetModel_ChildEvent_Callback cb) { kpagewidgetmodel_childevent_callback = cb; }
    inline void setKPageWidgetModel_CustomEvent_Callback(KPageWidgetModel_CustomEvent_Callback cb) { kpagewidgetmodel_customevent_callback = cb; }
    inline void setKPageWidgetModel_ConnectNotify_Callback(KPageWidgetModel_ConnectNotify_Callback cb) { kpagewidgetmodel_connectnotify_callback = cb; }
    inline void setKPageWidgetModel_DisconnectNotify_Callback(KPageWidgetModel_DisconnectNotify_Callback cb) { kpagewidgetmodel_disconnectnotify_callback = cb; }
    inline void setKPageWidgetModel_CreateIndex_Callback(KPageWidgetModel_CreateIndex_Callback cb) { kpagewidgetmodel_createindex_callback = cb; }
    inline void setKPageWidgetModel_EncodeData_Callback(KPageWidgetModel_EncodeData_Callback cb) { kpagewidgetmodel_encodedata_callback = cb; }
    inline void setKPageWidgetModel_DecodeData_Callback(KPageWidgetModel_DecodeData_Callback cb) { kpagewidgetmodel_decodedata_callback = cb; }
    inline void setKPageWidgetModel_BeginInsertRows_Callback(KPageWidgetModel_BeginInsertRows_Callback cb) { kpagewidgetmodel_begininsertrows_callback = cb; }
    inline void setKPageWidgetModel_EndInsertRows_Callback(KPageWidgetModel_EndInsertRows_Callback cb) { kpagewidgetmodel_endinsertrows_callback = cb; }
    inline void setKPageWidgetModel_BeginRemoveRows_Callback(KPageWidgetModel_BeginRemoveRows_Callback cb) { kpagewidgetmodel_beginremoverows_callback = cb; }
    inline void setKPageWidgetModel_EndRemoveRows_Callback(KPageWidgetModel_EndRemoveRows_Callback cb) { kpagewidgetmodel_endremoverows_callback = cb; }
    inline void setKPageWidgetModel_BeginMoveRows_Callback(KPageWidgetModel_BeginMoveRows_Callback cb) { kpagewidgetmodel_beginmoverows_callback = cb; }
    inline void setKPageWidgetModel_EndMoveRows_Callback(KPageWidgetModel_EndMoveRows_Callback cb) { kpagewidgetmodel_endmoverows_callback = cb; }
    inline void setKPageWidgetModel_BeginInsertColumns_Callback(KPageWidgetModel_BeginInsertColumns_Callback cb) { kpagewidgetmodel_begininsertcolumns_callback = cb; }
    inline void setKPageWidgetModel_EndInsertColumns_Callback(KPageWidgetModel_EndInsertColumns_Callback cb) { kpagewidgetmodel_endinsertcolumns_callback = cb; }
    inline void setKPageWidgetModel_BeginRemoveColumns_Callback(KPageWidgetModel_BeginRemoveColumns_Callback cb) { kpagewidgetmodel_beginremovecolumns_callback = cb; }
    inline void setKPageWidgetModel_EndRemoveColumns_Callback(KPageWidgetModel_EndRemoveColumns_Callback cb) { kpagewidgetmodel_endremovecolumns_callback = cb; }
    inline void setKPageWidgetModel_BeginMoveColumns_Callback(KPageWidgetModel_BeginMoveColumns_Callback cb) { kpagewidgetmodel_beginmovecolumns_callback = cb; }
    inline void setKPageWidgetModel_EndMoveColumns_Callback(KPageWidgetModel_EndMoveColumns_Callback cb) { kpagewidgetmodel_endmovecolumns_callback = cb; }
    inline void setKPageWidgetModel_BeginResetModel_Callback(KPageWidgetModel_BeginResetModel_Callback cb) { kpagewidgetmodel_beginresetmodel_callback = cb; }
    inline void setKPageWidgetModel_EndResetModel_Callback(KPageWidgetModel_EndResetModel_Callback cb) { kpagewidgetmodel_endresetmodel_callback = cb; }
    inline void setKPageWidgetModel_ChangePersistentIndex_Callback(KPageWidgetModel_ChangePersistentIndex_Callback cb) { kpagewidgetmodel_changepersistentindex_callback = cb; }
    inline void setKPageWidgetModel_ChangePersistentIndexList_Callback(KPageWidgetModel_ChangePersistentIndexList_Callback cb) { kpagewidgetmodel_changepersistentindexlist_callback = cb; }
    inline void setKPageWidgetModel_PersistentIndexList_Callback(KPageWidgetModel_PersistentIndexList_Callback cb) { kpagewidgetmodel_persistentindexlist_callback = cb; }
    inline void setKPageWidgetModel_Sender_Callback(KPageWidgetModel_Sender_Callback cb) { kpagewidgetmodel_sender_callback = cb; }
    inline void setKPageWidgetModel_SenderSignalIndex_Callback(KPageWidgetModel_SenderSignalIndex_Callback cb) { kpagewidgetmodel_sendersignalindex_callback = cb; }
    inline void setKPageWidgetModel_Receivers_Callback(KPageWidgetModel_Receivers_Callback cb) { kpagewidgetmodel_receivers_callback = cb; }
    inline void setKPageWidgetModel_IsSignalConnected_Callback(KPageWidgetModel_IsSignalConnected_Callback cb) { kpagewidgetmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKPageWidgetModel_Metacall_IsBase(bool value) const { kpagewidgetmodel_metacall_isbase = value; }
    inline void setKPageWidgetModel_ColumnCount_IsBase(bool value) const { kpagewidgetmodel_columncount_isbase = value; }
    inline void setKPageWidgetModel_Data_IsBase(bool value) const { kpagewidgetmodel_data_isbase = value; }
    inline void setKPageWidgetModel_SetData_IsBase(bool value) const { kpagewidgetmodel_setdata_isbase = value; }
    inline void setKPageWidgetModel_Flags_IsBase(bool value) const { kpagewidgetmodel_flags_isbase = value; }
    inline void setKPageWidgetModel_Index_IsBase(bool value) const { kpagewidgetmodel_index_isbase = value; }
    inline void setKPageWidgetModel_Parent_IsBase(bool value) const { kpagewidgetmodel_parent_isbase = value; }
    inline void setKPageWidgetModel_RowCount_IsBase(bool value) const { kpagewidgetmodel_rowcount_isbase = value; }
    inline void setKPageWidgetModel_Sibling_IsBase(bool value) const { kpagewidgetmodel_sibling_isbase = value; }
    inline void setKPageWidgetModel_HasChildren_IsBase(bool value) const { kpagewidgetmodel_haschildren_isbase = value; }
    inline void setKPageWidgetModel_HeaderData_IsBase(bool value) const { kpagewidgetmodel_headerdata_isbase = value; }
    inline void setKPageWidgetModel_SetHeaderData_IsBase(bool value) const { kpagewidgetmodel_setheaderdata_isbase = value; }
    inline void setKPageWidgetModel_ItemData_IsBase(bool value) const { kpagewidgetmodel_itemdata_isbase = value; }
    inline void setKPageWidgetModel_SetItemData_IsBase(bool value) const { kpagewidgetmodel_setitemdata_isbase = value; }
    inline void setKPageWidgetModel_ClearItemData_IsBase(bool value) const { kpagewidgetmodel_clearitemdata_isbase = value; }
    inline void setKPageWidgetModel_MimeTypes_IsBase(bool value) const { kpagewidgetmodel_mimetypes_isbase = value; }
    inline void setKPageWidgetModel_MimeData_IsBase(bool value) const { kpagewidgetmodel_mimedata_isbase = value; }
    inline void setKPageWidgetModel_CanDropMimeData_IsBase(bool value) const { kpagewidgetmodel_candropmimedata_isbase = value; }
    inline void setKPageWidgetModel_DropMimeData_IsBase(bool value) const { kpagewidgetmodel_dropmimedata_isbase = value; }
    inline void setKPageWidgetModel_SupportedDropActions_IsBase(bool value) const { kpagewidgetmodel_supporteddropactions_isbase = value; }
    inline void setKPageWidgetModel_SupportedDragActions_IsBase(bool value) const { kpagewidgetmodel_supporteddragactions_isbase = value; }
    inline void setKPageWidgetModel_InsertRows_IsBase(bool value) const { kpagewidgetmodel_insertrows_isbase = value; }
    inline void setKPageWidgetModel_InsertColumns_IsBase(bool value) const { kpagewidgetmodel_insertcolumns_isbase = value; }
    inline void setKPageWidgetModel_RemoveRows_IsBase(bool value) const { kpagewidgetmodel_removerows_isbase = value; }
    inline void setKPageWidgetModel_RemoveColumns_IsBase(bool value) const { kpagewidgetmodel_removecolumns_isbase = value; }
    inline void setKPageWidgetModel_MoveRows_IsBase(bool value) const { kpagewidgetmodel_moverows_isbase = value; }
    inline void setKPageWidgetModel_MoveColumns_IsBase(bool value) const { kpagewidgetmodel_movecolumns_isbase = value; }
    inline void setKPageWidgetModel_FetchMore_IsBase(bool value) const { kpagewidgetmodel_fetchmore_isbase = value; }
    inline void setKPageWidgetModel_CanFetchMore_IsBase(bool value) const { kpagewidgetmodel_canfetchmore_isbase = value; }
    inline void setKPageWidgetModel_Sort_IsBase(bool value) const { kpagewidgetmodel_sort_isbase = value; }
    inline void setKPageWidgetModel_Buddy_IsBase(bool value) const { kpagewidgetmodel_buddy_isbase = value; }
    inline void setKPageWidgetModel_Match_IsBase(bool value) const { kpagewidgetmodel_match_isbase = value; }
    inline void setKPageWidgetModel_Span_IsBase(bool value) const { kpagewidgetmodel_span_isbase = value; }
    inline void setKPageWidgetModel_RoleNames_IsBase(bool value) const { kpagewidgetmodel_rolenames_isbase = value; }
    inline void setKPageWidgetModel_MultiData_IsBase(bool value) const { kpagewidgetmodel_multidata_isbase = value; }
    inline void setKPageWidgetModel_Submit_IsBase(bool value) const { kpagewidgetmodel_submit_isbase = value; }
    inline void setKPageWidgetModel_Revert_IsBase(bool value) const { kpagewidgetmodel_revert_isbase = value; }
    inline void setKPageWidgetModel_ResetInternalData_IsBase(bool value) const { kpagewidgetmodel_resetinternaldata_isbase = value; }
    inline void setKPageWidgetModel_Event_IsBase(bool value) const { kpagewidgetmodel_event_isbase = value; }
    inline void setKPageWidgetModel_EventFilter_IsBase(bool value) const { kpagewidgetmodel_eventfilter_isbase = value; }
    inline void setKPageWidgetModel_TimerEvent_IsBase(bool value) const { kpagewidgetmodel_timerevent_isbase = value; }
    inline void setKPageWidgetModel_ChildEvent_IsBase(bool value) const { kpagewidgetmodel_childevent_isbase = value; }
    inline void setKPageWidgetModel_CustomEvent_IsBase(bool value) const { kpagewidgetmodel_customevent_isbase = value; }
    inline void setKPageWidgetModel_ConnectNotify_IsBase(bool value) const { kpagewidgetmodel_connectnotify_isbase = value; }
    inline void setKPageWidgetModel_DisconnectNotify_IsBase(bool value) const { kpagewidgetmodel_disconnectnotify_isbase = value; }
    inline void setKPageWidgetModel_CreateIndex_IsBase(bool value) const { kpagewidgetmodel_createindex_isbase = value; }
    inline void setKPageWidgetModel_EncodeData_IsBase(bool value) const { kpagewidgetmodel_encodedata_isbase = value; }
    inline void setKPageWidgetModel_DecodeData_IsBase(bool value) const { kpagewidgetmodel_decodedata_isbase = value; }
    inline void setKPageWidgetModel_BeginInsertRows_IsBase(bool value) const { kpagewidgetmodel_begininsertrows_isbase = value; }
    inline void setKPageWidgetModel_EndInsertRows_IsBase(bool value) const { kpagewidgetmodel_endinsertrows_isbase = value; }
    inline void setKPageWidgetModel_BeginRemoveRows_IsBase(bool value) const { kpagewidgetmodel_beginremoverows_isbase = value; }
    inline void setKPageWidgetModel_EndRemoveRows_IsBase(bool value) const { kpagewidgetmodel_endremoverows_isbase = value; }
    inline void setKPageWidgetModel_BeginMoveRows_IsBase(bool value) const { kpagewidgetmodel_beginmoverows_isbase = value; }
    inline void setKPageWidgetModel_EndMoveRows_IsBase(bool value) const { kpagewidgetmodel_endmoverows_isbase = value; }
    inline void setKPageWidgetModel_BeginInsertColumns_IsBase(bool value) const { kpagewidgetmodel_begininsertcolumns_isbase = value; }
    inline void setKPageWidgetModel_EndInsertColumns_IsBase(bool value) const { kpagewidgetmodel_endinsertcolumns_isbase = value; }
    inline void setKPageWidgetModel_BeginRemoveColumns_IsBase(bool value) const { kpagewidgetmodel_beginremovecolumns_isbase = value; }
    inline void setKPageWidgetModel_EndRemoveColumns_IsBase(bool value) const { kpagewidgetmodel_endremovecolumns_isbase = value; }
    inline void setKPageWidgetModel_BeginMoveColumns_IsBase(bool value) const { kpagewidgetmodel_beginmovecolumns_isbase = value; }
    inline void setKPageWidgetModel_EndMoveColumns_IsBase(bool value) const { kpagewidgetmodel_endmovecolumns_isbase = value; }
    inline void setKPageWidgetModel_BeginResetModel_IsBase(bool value) const { kpagewidgetmodel_beginresetmodel_isbase = value; }
    inline void setKPageWidgetModel_EndResetModel_IsBase(bool value) const { kpagewidgetmodel_endresetmodel_isbase = value; }
    inline void setKPageWidgetModel_ChangePersistentIndex_IsBase(bool value) const { kpagewidgetmodel_changepersistentindex_isbase = value; }
    inline void setKPageWidgetModel_ChangePersistentIndexList_IsBase(bool value) const { kpagewidgetmodel_changepersistentindexlist_isbase = value; }
    inline void setKPageWidgetModel_PersistentIndexList_IsBase(bool value) const { kpagewidgetmodel_persistentindexlist_isbase = value; }
    inline void setKPageWidgetModel_Sender_IsBase(bool value) const { kpagewidgetmodel_sender_isbase = value; }
    inline void setKPageWidgetModel_SenderSignalIndex_IsBase(bool value) const { kpagewidgetmodel_sendersignalindex_isbase = value; }
    inline void setKPageWidgetModel_Receivers_IsBase(bool value) const { kpagewidgetmodel_receivers_isbase = value; }
    inline void setKPageWidgetModel_IsSignalConnected_IsBase(bool value) const { kpagewidgetmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpagewidgetmodel_metacall_isbase) {
            kpagewidgetmodel_metacall_isbase = false;
            return KPageWidgetModel::qt_metacall(param1, param2, param3);
        } else if (kpagewidgetmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpagewidgetmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_columncount_isbase) {
            kpagewidgetmodel_columncount_isbase = false;
            return KPageWidgetModel::columnCount(parent);
        } else if (kpagewidgetmodel_columncount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kpagewidgetmodel_columncount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& index, int role) const override {
        if (kpagewidgetmodel_data_isbase) {
            kpagewidgetmodel_data_isbase = false;
            return KPageWidgetModel::data(index, role);
        } else if (kpagewidgetmodel_data_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = role;

            QVariant* callback_ret = kpagewidgetmodel_data_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KPageWidgetModel::data(index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (kpagewidgetmodel_setdata_isbase) {
            kpagewidgetmodel_setdata_isbase = false;
            return KPageWidgetModel::setData(index, value, role);
        } else if (kpagewidgetmodel_setdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            int cbval3 = role;

            bool callback_ret = kpagewidgetmodel_setdata_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageWidgetModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (kpagewidgetmodel_flags_isbase) {
            kpagewidgetmodel_flags_isbase = false;
            return KPageWidgetModel::flags(index);
        } else if (kpagewidgetmodel_flags_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            int callback_ret = kpagewidgetmodel_flags_callback(this, cbval1);
            return static_cast<Qt::ItemFlags>(callback_ret);
        } else {
            return KPageWidgetModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (kpagewidgetmodel_index_isbase) {
            kpagewidgetmodel_index_isbase = false;
            return KPageWidgetModel::index(row, column, parent);
        } else if (kpagewidgetmodel_index_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            QModelIndex* callback_ret = kpagewidgetmodel_index_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KPageWidgetModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& index) const override {
        if (kpagewidgetmodel_parent_isbase) {
            kpagewidgetmodel_parent_isbase = false;
            return KPageWidgetModel::parent(index);
        } else if (kpagewidgetmodel_parent_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kpagewidgetmodel_parent_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPageWidgetModel::parent(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_rowcount_isbase) {
            kpagewidgetmodel_rowcount_isbase = false;
            return KPageWidgetModel::rowCount(parent);
        } else if (kpagewidgetmodel_rowcount_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            int callback_ret = kpagewidgetmodel_rowcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (kpagewidgetmodel_sibling_isbase) {
            kpagewidgetmodel_sibling_isbase = false;
            return KPageWidgetModel::sibling(row, column, idx);
        } else if (kpagewidgetmodel_sibling_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& idx_ret = idx;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&idx_ret);

            QModelIndex* callback_ret = kpagewidgetmodel_sibling_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KPageWidgetModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_haschildren_isbase) {
            kpagewidgetmodel_haschildren_isbase = false;
            return KPageWidgetModel::hasChildren(parent);
        } else if (kpagewidgetmodel_haschildren_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_haschildren_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (kpagewidgetmodel_headerdata_isbase) {
            kpagewidgetmodel_headerdata_isbase = false;
            return KPageWidgetModel::headerData(section, orientation, role);
        } else if (kpagewidgetmodel_headerdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            int cbval3 = role;

            QVariant* callback_ret = kpagewidgetmodel_headerdata_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KPageWidgetModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (kpagewidgetmodel_setheaderdata_isbase) {
            kpagewidgetmodel_setheaderdata_isbase = false;
            return KPageWidgetModel::setHeaderData(section, orientation, value, role);
        } else if (kpagewidgetmodel_setheaderdata_callback != nullptr) {
            int cbval1 = section;
            int cbval2 = static_cast<int>(orientation);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = role;

            bool callback_ret = kpagewidgetmodel_setheaderdata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KPageWidgetModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (kpagewidgetmodel_itemdata_isbase) {
            kpagewidgetmodel_itemdata_isbase = false;
            return KPageWidgetModel::itemData(index);
        } else if (kpagewidgetmodel_itemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_map /* of int to QVariant* */ callback_ret = kpagewidgetmodel_itemdata_callback(this, cbval1);
            QMap<int, QVariant> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            QVariant** callback_ret_varr = static_cast<QVariant**>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = *(callback_ret_varr[i]);
            }
            return callback_ret_QMap;
        } else {
            return KPageWidgetModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (kpagewidgetmodel_setitemdata_isbase) {
            kpagewidgetmodel_setitemdata_isbase = false;
            return KPageWidgetModel::setItemData(index, roles);
        } else if (kpagewidgetmodel_setitemdata_callback != nullptr) {
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
        } else {
            return KPageWidgetModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (kpagewidgetmodel_clearitemdata_isbase) {
            kpagewidgetmodel_clearitemdata_isbase = false;
            return KPageWidgetModel::clearItemData(index);
        } else if (kpagewidgetmodel_clearitemdata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kpagewidgetmodel_clearitemdata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimeTypes() const override {
        if (kpagewidgetmodel_mimetypes_isbase) {
            kpagewidgetmodel_mimetypes_isbase = false;
            return KPageWidgetModel::mimeTypes();
        } else if (kpagewidgetmodel_mimetypes_callback != nullptr) {
            const char** callback_ret = kpagewidgetmodel_mimetypes_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return KPageWidgetModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QList<QModelIndex>& indexes) const override {
        if (kpagewidgetmodel_mimedata_isbase) {
            kpagewidgetmodel_mimedata_isbase = false;
            return KPageWidgetModel::mimeData(indexes);
        } else if (kpagewidgetmodel_mimedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size() + 1)));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;

            QMimeData* callback_ret = kpagewidgetmodel_mimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (kpagewidgetmodel_candropmimedata_isbase) {
            kpagewidgetmodel_candropmimedata_isbase = false;
            return KPageWidgetModel::canDropMimeData(data, action, row, column, parent);
        } else if (kpagewidgetmodel_candropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_candropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KPageWidgetModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (kpagewidgetmodel_dropmimedata_isbase) {
            kpagewidgetmodel_dropmimedata_isbase = false;
            return KPageWidgetModel::dropMimeData(data, action, row, column, parent);
        } else if (kpagewidgetmodel_dropmimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)data;
            int cbval2 = static_cast<int>(action);
            int cbval3 = row;
            int cbval4 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval5 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_dropmimedata_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KPageWidgetModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (kpagewidgetmodel_supporteddropactions_isbase) {
            kpagewidgetmodel_supporteddropactions_isbase = false;
            return KPageWidgetModel::supportedDropActions();
        } else if (kpagewidgetmodel_supporteddropactions_callback != nullptr) {
            int callback_ret = kpagewidgetmodel_supporteddropactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KPageWidgetModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (kpagewidgetmodel_supporteddragactions_isbase) {
            kpagewidgetmodel_supporteddragactions_isbase = false;
            return KPageWidgetModel::supportedDragActions();
        } else if (kpagewidgetmodel_supporteddragactions_callback != nullptr) {
            int callback_ret = kpagewidgetmodel_supporteddragactions_callback();
            return static_cast<Qt::DropActions>(callback_ret);
        } else {
            return KPageWidgetModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_insertrows_isbase) {
            kpagewidgetmodel_insertrows_isbase = false;
            return KPageWidgetModel::insertRows(row, count, parent);
        } else if (kpagewidgetmodel_insertrows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_insertrows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageWidgetModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_insertcolumns_isbase) {
            kpagewidgetmodel_insertcolumns_isbase = false;
            return KPageWidgetModel::insertColumns(column, count, parent);
        } else if (kpagewidgetmodel_insertcolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_insertcolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageWidgetModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_removerows_isbase) {
            kpagewidgetmodel_removerows_isbase = false;
            return KPageWidgetModel::removeRows(row, count, parent);
        } else if (kpagewidgetmodel_removerows_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_removerows_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageWidgetModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (kpagewidgetmodel_removecolumns_isbase) {
            kpagewidgetmodel_removecolumns_isbase = false;
            return KPageWidgetModel::removeColumns(column, count, parent);
        } else if (kpagewidgetmodel_removecolumns_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = count;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_removecolumns_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPageWidgetModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagewidgetmodel_moverows_isbase) {
            kpagewidgetmodel_moverows_isbase = false;
            return KPageWidgetModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (kpagewidgetmodel_moverows_callback != nullptr) {
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
        } else {
            return KPageWidgetModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (kpagewidgetmodel_movecolumns_isbase) {
            kpagewidgetmodel_movecolumns_isbase = false;
            return KPageWidgetModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (kpagewidgetmodel_movecolumns_callback != nullptr) {
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
        } else {
            return KPageWidgetModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (kpagewidgetmodel_fetchmore_isbase) {
            kpagewidgetmodel_fetchmore_isbase = false;
            KPageWidgetModel::fetchMore(parent);
        } else if (kpagewidgetmodel_fetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            kpagewidgetmodel_fetchmore_callback(this, cbval1);
        } else {
            KPageWidgetModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (kpagewidgetmodel_canfetchmore_isbase) {
            kpagewidgetmodel_canfetchmore_isbase = false;
            return KPageWidgetModel::canFetchMore(parent);
        } else if (kpagewidgetmodel_canfetchmore_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);

            bool callback_ret = kpagewidgetmodel_canfetchmore_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (kpagewidgetmodel_sort_isbase) {
            kpagewidgetmodel_sort_isbase = false;
            KPageWidgetModel::sort(column, order);
        } else if (kpagewidgetmodel_sort_callback != nullptr) {
            int cbval1 = column;
            int cbval2 = static_cast<int>(order);

            kpagewidgetmodel_sort_callback(this, cbval1, cbval2);
        } else {
            KPageWidgetModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (kpagewidgetmodel_buddy_isbase) {
            kpagewidgetmodel_buddy_isbase = false;
            return KPageWidgetModel::buddy(index);
        } else if (kpagewidgetmodel_buddy_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QModelIndex* callback_ret = kpagewidgetmodel_buddy_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPageWidgetModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QModelIndex> match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (kpagewidgetmodel_match_isbase) {
            kpagewidgetmodel_match_isbase = false;
            return KPageWidgetModel::match(start, role, value, hits, flags);
        } else if (kpagewidgetmodel_match_callback != nullptr) {
            const QModelIndex& start_ret = start;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&start_ret);
            int cbval2 = role;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);
            int cbval4 = hits;
            int cbval5 = static_cast<int>(flags);

            QModelIndex** callback_ret = kpagewidgetmodel_match_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KPageWidgetModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (kpagewidgetmodel_span_isbase) {
            kpagewidgetmodel_span_isbase = false;
            return KPageWidgetModel::span(index);
        } else if (kpagewidgetmodel_span_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kpagewidgetmodel_span_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPageWidgetModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (kpagewidgetmodel_rolenames_isbase) {
            kpagewidgetmodel_rolenames_isbase = false;
            return KPageWidgetModel::roleNames();
        } else if (kpagewidgetmodel_rolenames_callback != nullptr) {
            libqt_map /* of int to libqt_string */ callback_ret = kpagewidgetmodel_rolenames_callback();
            QHash<int, QByteArray> callback_ret_QMap;
            callback_ret_QMap.reserve(callback_ret.len);
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QByteArray callback_ret_varr_i_QByteArray(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QMap[static_cast<int>(callback_ret_karr[i])] = callback_ret_varr_i_QByteArray;
            }
            return callback_ret_QMap;
        } else {
            return KPageWidgetModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (kpagewidgetmodel_multidata_isbase) {
            kpagewidgetmodel_multidata_isbase = false;
            KPageWidgetModel::multiData(index, roleDataSpan);
        } else if (kpagewidgetmodel_multidata_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            QModelRoleDataSpan* cbval2 = new QModelRoleDataSpan(roleDataSpan);

            kpagewidgetmodel_multidata_callback(this, cbval1, cbval2);
        } else {
            KPageWidgetModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (kpagewidgetmodel_submit_isbase) {
            kpagewidgetmodel_submit_isbase = false;
            return KPageWidgetModel::submit();
        } else if (kpagewidgetmodel_submit_callback != nullptr) {
            bool callback_ret = kpagewidgetmodel_submit_callback();
            return callback_ret;
        } else {
            return KPageWidgetModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (kpagewidgetmodel_revert_isbase) {
            kpagewidgetmodel_revert_isbase = false;
            KPageWidgetModel::revert();
        } else if (kpagewidgetmodel_revert_callback != nullptr) {
            kpagewidgetmodel_revert_callback();
        } else {
            KPageWidgetModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (kpagewidgetmodel_resetinternaldata_isbase) {
            kpagewidgetmodel_resetinternaldata_isbase = false;
            KPageWidgetModel::resetInternalData();
        } else if (kpagewidgetmodel_resetinternaldata_callback != nullptr) {
            kpagewidgetmodel_resetinternaldata_callback();
        } else {
            KPageWidgetModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpagewidgetmodel_event_isbase) {
            kpagewidgetmodel_event_isbase = false;
            return KPageWidgetModel::event(event);
        } else if (kpagewidgetmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpagewidgetmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpagewidgetmodel_eventfilter_isbase) {
            kpagewidgetmodel_eventfilter_isbase = false;
            return KPageWidgetModel::eventFilter(watched, event);
        } else if (kpagewidgetmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kpagewidgetmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPageWidgetModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpagewidgetmodel_timerevent_isbase) {
            kpagewidgetmodel_timerevent_isbase = false;
            KPageWidgetModel::timerEvent(event);
        } else if (kpagewidgetmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpagewidgetmodel_timerevent_callback(this, cbval1);
        } else {
            KPageWidgetModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpagewidgetmodel_childevent_isbase) {
            kpagewidgetmodel_childevent_isbase = false;
            KPageWidgetModel::childEvent(event);
        } else if (kpagewidgetmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpagewidgetmodel_childevent_callback(this, cbval1);
        } else {
            KPageWidgetModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpagewidgetmodel_customevent_isbase) {
            kpagewidgetmodel_customevent_isbase = false;
            KPageWidgetModel::customEvent(event);
        } else if (kpagewidgetmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpagewidgetmodel_customevent_callback(this, cbval1);
        } else {
            KPageWidgetModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetmodel_connectnotify_isbase) {
            kpagewidgetmodel_connectnotify_isbase = false;
            KPageWidgetModel::connectNotify(signal);
        } else if (kpagewidgetmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagewidgetmodel_connectnotify_callback(this, cbval1);
        } else {
            KPageWidgetModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpagewidgetmodel_disconnectnotify_isbase) {
            kpagewidgetmodel_disconnectnotify_isbase = false;
            KPageWidgetModel::disconnectNotify(signal);
        } else if (kpagewidgetmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpagewidgetmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KPageWidgetModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (kpagewidgetmodel_createindex_isbase) {
            kpagewidgetmodel_createindex_isbase = false;
            return KPageWidgetModel::createIndex(row, column);
        } else if (kpagewidgetmodel_createindex_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            QModelIndex* callback_ret = kpagewidgetmodel_createindex_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KPageWidgetModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QList<QModelIndex>& indexes, QDataStream& stream) const {
        if (kpagewidgetmodel_encodedata_isbase) {
            kpagewidgetmodel_encodedata_isbase = false;
            KPageWidgetModel::encodeData(indexes, stream);
        } else if (kpagewidgetmodel_encodedata_callback != nullptr) {
            const QList<QModelIndex>& indexes_ret = indexes;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size() + 1)));
            for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                indexes_arr[i] = new QModelIndex(indexes_ret[i]);
            }
            libqt_list indexes_out;
            indexes_out.len = indexes_ret.size();
            indexes_out.data = static_cast<void*>(indexes_arr);
            libqt_list /* of QModelIndex* */ cbval1 = indexes_out;
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval2 = &stream_ret;

            kpagewidgetmodel_encodedata_callback(this, cbval1, cbval2);
        } else {
            KPageWidgetModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (kpagewidgetmodel_decodedata_isbase) {
            kpagewidgetmodel_decodedata_isbase = false;
            return KPageWidgetModel::decodeData(row, column, parent, stream);
        } else if (kpagewidgetmodel_decodedata_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&parent_ret);
            QDataStream& stream_ret = stream;
            // Cast returned reference into pointer
            QDataStream* cbval4 = &stream_ret;

            bool callback_ret = kpagewidgetmodel_decodedata_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KPageWidgetModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (kpagewidgetmodel_begininsertrows_isbase) {
            kpagewidgetmodel_begininsertrows_isbase = false;
            KPageWidgetModel::beginInsertRows(parent, first, last);
        } else if (kpagewidgetmodel_begininsertrows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kpagewidgetmodel_begininsertrows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KPageWidgetModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (kpagewidgetmodel_endinsertrows_isbase) {
            kpagewidgetmodel_endinsertrows_isbase = false;
            KPageWidgetModel::endInsertRows();
        } else if (kpagewidgetmodel_endinsertrows_callback != nullptr) {
            kpagewidgetmodel_endinsertrows_callback();
        } else {
            KPageWidgetModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (kpagewidgetmodel_beginremoverows_isbase) {
            kpagewidgetmodel_beginremoverows_isbase = false;
            KPageWidgetModel::beginRemoveRows(parent, first, last);
        } else if (kpagewidgetmodel_beginremoverows_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kpagewidgetmodel_beginremoverows_callback(this, cbval1, cbval2, cbval3);
        } else {
            KPageWidgetModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (kpagewidgetmodel_endremoverows_isbase) {
            kpagewidgetmodel_endremoverows_isbase = false;
            KPageWidgetModel::endRemoveRows();
        } else if (kpagewidgetmodel_endremoverows_callback != nullptr) {
            kpagewidgetmodel_endremoverows_callback();
        } else {
            KPageWidgetModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (kpagewidgetmodel_beginmoverows_isbase) {
            kpagewidgetmodel_beginmoverows_isbase = false;
            return KPageWidgetModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (kpagewidgetmodel_beginmoverows_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationRow;

            bool callback_ret = kpagewidgetmodel_beginmoverows_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KPageWidgetModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (kpagewidgetmodel_endmoverows_isbase) {
            kpagewidgetmodel_endmoverows_isbase = false;
            KPageWidgetModel::endMoveRows();
        } else if (kpagewidgetmodel_endmoverows_callback != nullptr) {
            kpagewidgetmodel_endmoverows_callback();
        } else {
            KPageWidgetModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (kpagewidgetmodel_begininsertcolumns_isbase) {
            kpagewidgetmodel_begininsertcolumns_isbase = false;
            KPageWidgetModel::beginInsertColumns(parent, first, last);
        } else if (kpagewidgetmodel_begininsertcolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kpagewidgetmodel_begininsertcolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KPageWidgetModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (kpagewidgetmodel_endinsertcolumns_isbase) {
            kpagewidgetmodel_endinsertcolumns_isbase = false;
            KPageWidgetModel::endInsertColumns();
        } else if (kpagewidgetmodel_endinsertcolumns_callback != nullptr) {
            kpagewidgetmodel_endinsertcolumns_callback();
        } else {
            KPageWidgetModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (kpagewidgetmodel_beginremovecolumns_isbase) {
            kpagewidgetmodel_beginremovecolumns_isbase = false;
            KPageWidgetModel::beginRemoveColumns(parent, first, last);
        } else if (kpagewidgetmodel_beginremovecolumns_callback != nullptr) {
            const QModelIndex& parent_ret = parent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&parent_ret);
            int cbval2 = first;
            int cbval3 = last;

            kpagewidgetmodel_beginremovecolumns_callback(this, cbval1, cbval2, cbval3);
        } else {
            KPageWidgetModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (kpagewidgetmodel_endremovecolumns_isbase) {
            kpagewidgetmodel_endremovecolumns_isbase = false;
            KPageWidgetModel::endRemoveColumns();
        } else if (kpagewidgetmodel_endremovecolumns_callback != nullptr) {
            kpagewidgetmodel_endremovecolumns_callback();
        } else {
            KPageWidgetModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (kpagewidgetmodel_beginmovecolumns_isbase) {
            kpagewidgetmodel_beginmovecolumns_isbase = false;
            return KPageWidgetModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (kpagewidgetmodel_beginmovecolumns_callback != nullptr) {
            const QModelIndex& sourceParent_ret = sourceParent;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&sourceParent_ret);
            int cbval2 = sourceFirst;
            int cbval3 = sourceLast;
            const QModelIndex& destinationParent_ret = destinationParent;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&destinationParent_ret);
            int cbval5 = destinationColumn;

            bool callback_ret = kpagewidgetmodel_beginmovecolumns_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return callback_ret;
        } else {
            return KPageWidgetModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (kpagewidgetmodel_endmovecolumns_isbase) {
            kpagewidgetmodel_endmovecolumns_isbase = false;
            KPageWidgetModel::endMoveColumns();
        } else if (kpagewidgetmodel_endmovecolumns_callback != nullptr) {
            kpagewidgetmodel_endmovecolumns_callback();
        } else {
            KPageWidgetModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (kpagewidgetmodel_beginresetmodel_isbase) {
            kpagewidgetmodel_beginresetmodel_isbase = false;
            KPageWidgetModel::beginResetModel();
        } else if (kpagewidgetmodel_beginresetmodel_callback != nullptr) {
            kpagewidgetmodel_beginresetmodel_callback();
        } else {
            KPageWidgetModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (kpagewidgetmodel_endresetmodel_isbase) {
            kpagewidgetmodel_endresetmodel_isbase = false;
            KPageWidgetModel::endResetModel();
        } else if (kpagewidgetmodel_endresetmodel_callback != nullptr) {
            kpagewidgetmodel_endresetmodel_callback();
        } else {
            KPageWidgetModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (kpagewidgetmodel_changepersistentindex_isbase) {
            kpagewidgetmodel_changepersistentindex_isbase = false;
            KPageWidgetModel::changePersistentIndex(from, to);
        } else if (kpagewidgetmodel_changepersistentindex_callback != nullptr) {
            const QModelIndex& from_ret = from;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&from_ret);
            const QModelIndex& to_ret = to;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&to_ret);

            kpagewidgetmodel_changepersistentindex_callback(this, cbval1, cbval2);
        } else {
            KPageWidgetModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QList<QModelIndex>& from, const QList<QModelIndex>& to) {
        if (kpagewidgetmodel_changepersistentindexlist_isbase) {
            kpagewidgetmodel_changepersistentindexlist_isbase = false;
            KPageWidgetModel::changePersistentIndexList(from, to);
        } else if (kpagewidgetmodel_changepersistentindexlist_callback != nullptr) {
            const QList<QModelIndex>& from_ret = from;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** from_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (from_ret.size() + 1)));
            for (qsizetype i = 0; i < from_ret.size(); ++i) {
                from_arr[i] = new QModelIndex(from_ret[i]);
            }
            libqt_list from_out;
            from_out.len = from_ret.size();
            from_out.data = static_cast<void*>(from_arr);
            libqt_list /* of QModelIndex* */ cbval1 = from_out;
            const QList<QModelIndex>& to_ret = to;
            // Convert QList<> from C++ memory to manually-managed C memory
            QModelIndex** to_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (to_ret.size() + 1)));
            for (qsizetype i = 0; i < to_ret.size(); ++i) {
                to_arr[i] = new QModelIndex(to_ret[i]);
            }
            libqt_list to_out;
            to_out.len = to_ret.size();
            to_out.data = static_cast<void*>(to_arr);
            libqt_list /* of QModelIndex* */ cbval2 = to_out;

            kpagewidgetmodel_changepersistentindexlist_callback(this, cbval1, cbval2);
        } else {
            KPageWidgetModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QModelIndex> persistentIndexList() const {
        if (kpagewidgetmodel_persistentindexlist_isbase) {
            kpagewidgetmodel_persistentindexlist_isbase = false;
            return KPageWidgetModel::persistentIndexList();
        } else if (kpagewidgetmodel_persistentindexlist_callback != nullptr) {
            QModelIndex** callback_ret = kpagewidgetmodel_persistentindexlist_callback();
            QList<QModelIndex> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QModelIndex** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KPageWidgetModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpagewidgetmodel_sender_isbase) {
            kpagewidgetmodel_sender_isbase = false;
            return KPageWidgetModel::sender();
        } else if (kpagewidgetmodel_sender_callback != nullptr) {
            QObject* callback_ret = kpagewidgetmodel_sender_callback();
            return callback_ret;
        } else {
            return KPageWidgetModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpagewidgetmodel_sendersignalindex_isbase) {
            kpagewidgetmodel_sendersignalindex_isbase = false;
            return KPageWidgetModel::senderSignalIndex();
        } else if (kpagewidgetmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kpagewidgetmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpagewidgetmodel_receivers_isbase) {
            kpagewidgetmodel_receivers_isbase = false;
            return KPageWidgetModel::receivers(signal);
        } else if (kpagewidgetmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpagewidgetmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPageWidgetModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpagewidgetmodel_issignalconnected_isbase) {
            kpagewidgetmodel_issignalconnected_isbase = false;
            return KPageWidgetModel::isSignalConnected(signal);
        } else if (kpagewidgetmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpagewidgetmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPageWidgetModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KPageWidgetModel_ResetInternalData(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseResetInternalData(KPageWidgetModel* self);
    friend void KPageWidgetModel_TimerEvent(KPageWidgetModel* self, QTimerEvent* event);
    friend void KPageWidgetModel_QBaseTimerEvent(KPageWidgetModel* self, QTimerEvent* event);
    friend void KPageWidgetModel_ChildEvent(KPageWidgetModel* self, QChildEvent* event);
    friend void KPageWidgetModel_QBaseChildEvent(KPageWidgetModel* self, QChildEvent* event);
    friend void KPageWidgetModel_CustomEvent(KPageWidgetModel* self, QEvent* event);
    friend void KPageWidgetModel_QBaseCustomEvent(KPageWidgetModel* self, QEvent* event);
    friend void KPageWidgetModel_ConnectNotify(KPageWidgetModel* self, const QMetaMethod* signal);
    friend void KPageWidgetModel_QBaseConnectNotify(KPageWidgetModel* self, const QMetaMethod* signal);
    friend void KPageWidgetModel_DisconnectNotify(KPageWidgetModel* self, const QMetaMethod* signal);
    friend void KPageWidgetModel_QBaseDisconnectNotify(KPageWidgetModel* self, const QMetaMethod* signal);
    friend QModelIndex* KPageWidgetModel_CreateIndex(const KPageWidgetModel* self, int row, int column);
    friend QModelIndex* KPageWidgetModel_QBaseCreateIndex(const KPageWidgetModel* self, int row, int column);
    friend void KPageWidgetModel_EncodeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend void KPageWidgetModel_QBaseEncodeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
    friend bool KPageWidgetModel_DecodeData(KPageWidgetModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend bool KPageWidgetModel_QBaseDecodeData(KPageWidgetModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream);
    friend void KPageWidgetModel_BeginInsertRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_QBaseBeginInsertRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_EndInsertRows(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseEndInsertRows(KPageWidgetModel* self);
    friend void KPageWidgetModel_BeginRemoveRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_QBaseBeginRemoveRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_EndRemoveRows(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseEndRemoveRows(KPageWidgetModel* self);
    friend bool KPageWidgetModel_BeginMoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend bool KPageWidgetModel_QBaseBeginMoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow);
    friend void KPageWidgetModel_EndMoveRows(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseEndMoveRows(KPageWidgetModel* self);
    friend void KPageWidgetModel_BeginInsertColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_QBaseBeginInsertColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_EndInsertColumns(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseEndInsertColumns(KPageWidgetModel* self);
    friend void KPageWidgetModel_BeginRemoveColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_QBaseBeginRemoveColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last);
    friend void KPageWidgetModel_EndRemoveColumns(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseEndRemoveColumns(KPageWidgetModel* self);
    friend bool KPageWidgetModel_BeginMoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend bool KPageWidgetModel_QBaseBeginMoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn);
    friend void KPageWidgetModel_EndMoveColumns(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseEndMoveColumns(KPageWidgetModel* self);
    friend void KPageWidgetModel_BeginResetModel(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseBeginResetModel(KPageWidgetModel* self);
    friend void KPageWidgetModel_EndResetModel(KPageWidgetModel* self);
    friend void KPageWidgetModel_QBaseEndResetModel(KPageWidgetModel* self);
    friend void KPageWidgetModel_ChangePersistentIndex(KPageWidgetModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KPageWidgetModel_QBaseChangePersistentIndex(KPageWidgetModel* self, const QModelIndex* from, const QModelIndex* to);
    friend void KPageWidgetModel_ChangePersistentIndexList(KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend void KPageWidgetModel_QBaseChangePersistentIndexList(KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to);
    friend libqt_list /* of QModelIndex* */ KPageWidgetModel_PersistentIndexList(const KPageWidgetModel* self);
    friend libqt_list /* of QModelIndex* */ KPageWidgetModel_QBasePersistentIndexList(const KPageWidgetModel* self);
    friend QObject* KPageWidgetModel_Sender(const KPageWidgetModel* self);
    friend QObject* KPageWidgetModel_QBaseSender(const KPageWidgetModel* self);
    friend int KPageWidgetModel_SenderSignalIndex(const KPageWidgetModel* self);
    friend int KPageWidgetModel_QBaseSenderSignalIndex(const KPageWidgetModel* self);
    friend int KPageWidgetModel_Receivers(const KPageWidgetModel* self, const char* signal);
    friend int KPageWidgetModel_QBaseReceivers(const KPageWidgetModel* self, const char* signal);
    friend bool KPageWidgetModel_IsSignalConnected(const KPageWidgetModel* self, const QMetaMethod* signal);
    friend bool KPageWidgetModel_QBaseIsSignalConnected(const KPageWidgetModel* self, const QMetaMethod* signal);
};

#endif
