#pragma once
#ifndef SRC_SQLC_LIBVIRTUALQSQLDRIVER_H
#define SRC_SQLC_LIBVIRTUALQSQLDRIVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlDriver so that we can call protected methods
class VirtualQSqlDriver final : public QSqlDriver {

  public:
    // Virtual class boolean flag
    bool isVirtualQSqlDriver = true;

    // Virtual class public types (including callbacks)
    using QSqlDriver_Metacall_Callback = int (*)(QSqlDriver*, int, int, void**);
    using QSqlDriver_IsOpen_Callback = bool (*)();
    using QSqlDriver_BeginTransaction_Callback = bool (*)();
    using QSqlDriver_CommitTransaction_Callback = bool (*)();
    using QSqlDriver_RollbackTransaction_Callback = bool (*)();
    using QSqlDriver_Tables_Callback = libqt_list /* of libqt_string */ (*)(const QSqlDriver*, int);
    using QSqlDriver_PrimaryIndex_Callback = QSqlIndex* (*)(const QSqlDriver*, libqt_string);
    using QSqlDriver_Record_Callback = QSqlRecord* (*)(const QSqlDriver*, libqt_string);
    using QSqlDriver_FormatValue_Callback = libqt_string (*)(const QSqlDriver*, QSqlField*, bool);
    using QSqlDriver_EscapeIdentifier_Callback = libqt_string (*)(const QSqlDriver*, libqt_string, int);
    using QSqlDriver_SqlStatement_Callback = libqt_string (*)(const QSqlDriver*, int, libqt_string, QSqlRecord*, bool);
    using QSqlDriver_Handle_Callback = QVariant* (*)();
    using QSqlDriver_HasFeature_Callback = bool (*)(const QSqlDriver*, int);
    using QSqlDriver_Close_Callback = void (*)();
    using QSqlDriver_CreateResult_Callback = QSqlResult* (*)();
    using QSqlDriver_Open_Callback = bool (*)(QSqlDriver*, libqt_string, libqt_string, libqt_string, libqt_string, int, libqt_string);
    using QSqlDriver_SubscribeToNotification_Callback = bool (*)(QSqlDriver*, libqt_string);
    using QSqlDriver_UnsubscribeFromNotification_Callback = bool (*)(QSqlDriver*, libqt_string);
    using QSqlDriver_SubscribedToNotifications_Callback = libqt_list /* of libqt_string */ (*)();
    using QSqlDriver_IsIdentifierEscaped_Callback = bool (*)(const QSqlDriver*, libqt_string, int);
    using QSqlDriver_StripDelimiters_Callback = libqt_string (*)(const QSqlDriver*, libqt_string, int);
    using QSqlDriver_MaximumIdentifierLength_Callback = int (*)(const QSqlDriver*, int);
    using QSqlDriver_CancelQuery_Callback = bool (*)();
    using QSqlDriver_SetOpen_Callback = void (*)(QSqlDriver*, bool);
    using QSqlDriver_SetOpenError_Callback = void (*)(QSqlDriver*, bool);
    using QSqlDriver_SetLastError_Callback = void (*)(QSqlDriver*, QSqlError*);
    using QSqlDriver_Event_Callback = bool (*)(QSqlDriver*, QEvent*);
    using QSqlDriver_EventFilter_Callback = bool (*)(QSqlDriver*, QObject*, QEvent*);
    using QSqlDriver_TimerEvent_Callback = void (*)(QSqlDriver*, QTimerEvent*);
    using QSqlDriver_ChildEvent_Callback = void (*)(QSqlDriver*, QChildEvent*);
    using QSqlDriver_CustomEvent_Callback = void (*)(QSqlDriver*, QEvent*);
    using QSqlDriver_ConnectNotify_Callback = void (*)(QSqlDriver*, QMetaMethod*);
    using QSqlDriver_DisconnectNotify_Callback = void (*)(QSqlDriver*, QMetaMethod*);
    using QSqlDriver_Sender_Callback = QObject* (*)();
    using QSqlDriver_SenderSignalIndex_Callback = int (*)();
    using QSqlDriver_Receivers_Callback = int (*)(const QSqlDriver*, const char*);
    using QSqlDriver_IsSignalConnected_Callback = bool (*)(const QSqlDriver*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSqlDriver_Metacall_Callback qsqldriver_metacall_callback = nullptr;
    QSqlDriver_IsOpen_Callback qsqldriver_isopen_callback = nullptr;
    QSqlDriver_BeginTransaction_Callback qsqldriver_begintransaction_callback = nullptr;
    QSqlDriver_CommitTransaction_Callback qsqldriver_committransaction_callback = nullptr;
    QSqlDriver_RollbackTransaction_Callback qsqldriver_rollbacktransaction_callback = nullptr;
    QSqlDriver_Tables_Callback qsqldriver_tables_callback = nullptr;
    QSqlDriver_PrimaryIndex_Callback qsqldriver_primaryindex_callback = nullptr;
    QSqlDriver_Record_Callback qsqldriver_record_callback = nullptr;
    QSqlDriver_FormatValue_Callback qsqldriver_formatvalue_callback = nullptr;
    QSqlDriver_EscapeIdentifier_Callback qsqldriver_escapeidentifier_callback = nullptr;
    QSqlDriver_SqlStatement_Callback qsqldriver_sqlstatement_callback = nullptr;
    QSqlDriver_Handle_Callback qsqldriver_handle_callback = nullptr;
    QSqlDriver_HasFeature_Callback qsqldriver_hasfeature_callback = nullptr;
    QSqlDriver_Close_Callback qsqldriver_close_callback = nullptr;
    QSqlDriver_CreateResult_Callback qsqldriver_createresult_callback = nullptr;
    QSqlDriver_Open_Callback qsqldriver_open_callback = nullptr;
    QSqlDriver_SubscribeToNotification_Callback qsqldriver_subscribetonotification_callback = nullptr;
    QSqlDriver_UnsubscribeFromNotification_Callback qsqldriver_unsubscribefromnotification_callback = nullptr;
    QSqlDriver_SubscribedToNotifications_Callback qsqldriver_subscribedtonotifications_callback = nullptr;
    QSqlDriver_IsIdentifierEscaped_Callback qsqldriver_isidentifierescaped_callback = nullptr;
    QSqlDriver_StripDelimiters_Callback qsqldriver_stripdelimiters_callback = nullptr;
    QSqlDriver_MaximumIdentifierLength_Callback qsqldriver_maximumidentifierlength_callback = nullptr;
    QSqlDriver_CancelQuery_Callback qsqldriver_cancelquery_callback = nullptr;
    QSqlDriver_SetOpen_Callback qsqldriver_setopen_callback = nullptr;
    QSqlDriver_SetOpenError_Callback qsqldriver_setopenerror_callback = nullptr;
    QSqlDriver_SetLastError_Callback qsqldriver_setlasterror_callback = nullptr;
    QSqlDriver_Event_Callback qsqldriver_event_callback = nullptr;
    QSqlDriver_EventFilter_Callback qsqldriver_eventfilter_callback = nullptr;
    QSqlDriver_TimerEvent_Callback qsqldriver_timerevent_callback = nullptr;
    QSqlDriver_ChildEvent_Callback qsqldriver_childevent_callback = nullptr;
    QSqlDriver_CustomEvent_Callback qsqldriver_customevent_callback = nullptr;
    QSqlDriver_ConnectNotify_Callback qsqldriver_connectnotify_callback = nullptr;
    QSqlDriver_DisconnectNotify_Callback qsqldriver_disconnectnotify_callback = nullptr;
    QSqlDriver_Sender_Callback qsqldriver_sender_callback = nullptr;
    QSqlDriver_SenderSignalIndex_Callback qsqldriver_sendersignalindex_callback = nullptr;
    QSqlDriver_Receivers_Callback qsqldriver_receivers_callback = nullptr;
    QSqlDriver_IsSignalConnected_Callback qsqldriver_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsqldriver_metacall_isbase = false;
    mutable bool qsqldriver_isopen_isbase = false;
    mutable bool qsqldriver_begintransaction_isbase = false;
    mutable bool qsqldriver_committransaction_isbase = false;
    mutable bool qsqldriver_rollbacktransaction_isbase = false;
    mutable bool qsqldriver_tables_isbase = false;
    mutable bool qsqldriver_primaryindex_isbase = false;
    mutable bool qsqldriver_record_isbase = false;
    mutable bool qsqldriver_formatvalue_isbase = false;
    mutable bool qsqldriver_escapeidentifier_isbase = false;
    mutable bool qsqldriver_sqlstatement_isbase = false;
    mutable bool qsqldriver_handle_isbase = false;
    mutable bool qsqldriver_hasfeature_isbase = false;
    mutable bool qsqldriver_close_isbase = false;
    mutable bool qsqldriver_createresult_isbase = false;
    mutable bool qsqldriver_open_isbase = false;
    mutable bool qsqldriver_subscribetonotification_isbase = false;
    mutable bool qsqldriver_unsubscribefromnotification_isbase = false;
    mutable bool qsqldriver_subscribedtonotifications_isbase = false;
    mutable bool qsqldriver_isidentifierescaped_isbase = false;
    mutable bool qsqldriver_stripdelimiters_isbase = false;
    mutable bool qsqldriver_maximumidentifierlength_isbase = false;
    mutable bool qsqldriver_cancelquery_isbase = false;
    mutable bool qsqldriver_setopen_isbase = false;
    mutable bool qsqldriver_setopenerror_isbase = false;
    mutable bool qsqldriver_setlasterror_isbase = false;
    mutable bool qsqldriver_event_isbase = false;
    mutable bool qsqldriver_eventfilter_isbase = false;
    mutable bool qsqldriver_timerevent_isbase = false;
    mutable bool qsqldriver_childevent_isbase = false;
    mutable bool qsqldriver_customevent_isbase = false;
    mutable bool qsqldriver_connectnotify_isbase = false;
    mutable bool qsqldriver_disconnectnotify_isbase = false;
    mutable bool qsqldriver_sender_isbase = false;
    mutable bool qsqldriver_sendersignalindex_isbase = false;
    mutable bool qsqldriver_receivers_isbase = false;
    mutable bool qsqldriver_issignalconnected_isbase = false;

  public:
    VirtualQSqlDriver() : QSqlDriver() {};
    VirtualQSqlDriver(QObject* parent) : QSqlDriver(parent) {};

    ~VirtualQSqlDriver() {
        qsqldriver_metacall_callback = nullptr;
        qsqldriver_isopen_callback = nullptr;
        qsqldriver_begintransaction_callback = nullptr;
        qsqldriver_committransaction_callback = nullptr;
        qsqldriver_rollbacktransaction_callback = nullptr;
        qsqldriver_tables_callback = nullptr;
        qsqldriver_primaryindex_callback = nullptr;
        qsqldriver_record_callback = nullptr;
        qsqldriver_formatvalue_callback = nullptr;
        qsqldriver_escapeidentifier_callback = nullptr;
        qsqldriver_sqlstatement_callback = nullptr;
        qsqldriver_handle_callback = nullptr;
        qsqldriver_hasfeature_callback = nullptr;
        qsqldriver_close_callback = nullptr;
        qsqldriver_createresult_callback = nullptr;
        qsqldriver_open_callback = nullptr;
        qsqldriver_subscribetonotification_callback = nullptr;
        qsqldriver_unsubscribefromnotification_callback = nullptr;
        qsqldriver_subscribedtonotifications_callback = nullptr;
        qsqldriver_isidentifierescaped_callback = nullptr;
        qsqldriver_stripdelimiters_callback = nullptr;
        qsqldriver_maximumidentifierlength_callback = nullptr;
        qsqldriver_cancelquery_callback = nullptr;
        qsqldriver_setopen_callback = nullptr;
        qsqldriver_setopenerror_callback = nullptr;
        qsqldriver_setlasterror_callback = nullptr;
        qsqldriver_event_callback = nullptr;
        qsqldriver_eventfilter_callback = nullptr;
        qsqldriver_timerevent_callback = nullptr;
        qsqldriver_childevent_callback = nullptr;
        qsqldriver_customevent_callback = nullptr;
        qsqldriver_connectnotify_callback = nullptr;
        qsqldriver_disconnectnotify_callback = nullptr;
        qsqldriver_sender_callback = nullptr;
        qsqldriver_sendersignalindex_callback = nullptr;
        qsqldriver_receivers_callback = nullptr;
        qsqldriver_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSqlDriver_Metacall_Callback(QSqlDriver_Metacall_Callback cb) { qsqldriver_metacall_callback = cb; }
    inline void setQSqlDriver_IsOpen_Callback(QSqlDriver_IsOpen_Callback cb) { qsqldriver_isopen_callback = cb; }
    inline void setQSqlDriver_BeginTransaction_Callback(QSqlDriver_BeginTransaction_Callback cb) { qsqldriver_begintransaction_callback = cb; }
    inline void setQSqlDriver_CommitTransaction_Callback(QSqlDriver_CommitTransaction_Callback cb) { qsqldriver_committransaction_callback = cb; }
    inline void setQSqlDriver_RollbackTransaction_Callback(QSqlDriver_RollbackTransaction_Callback cb) { qsqldriver_rollbacktransaction_callback = cb; }
    inline void setQSqlDriver_Tables_Callback(QSqlDriver_Tables_Callback cb) { qsqldriver_tables_callback = cb; }
    inline void setQSqlDriver_PrimaryIndex_Callback(QSqlDriver_PrimaryIndex_Callback cb) { qsqldriver_primaryindex_callback = cb; }
    inline void setQSqlDriver_Record_Callback(QSqlDriver_Record_Callback cb) { qsqldriver_record_callback = cb; }
    inline void setQSqlDriver_FormatValue_Callback(QSqlDriver_FormatValue_Callback cb) { qsqldriver_formatvalue_callback = cb; }
    inline void setQSqlDriver_EscapeIdentifier_Callback(QSqlDriver_EscapeIdentifier_Callback cb) { qsqldriver_escapeidentifier_callback = cb; }
    inline void setQSqlDriver_SqlStatement_Callback(QSqlDriver_SqlStatement_Callback cb) { qsqldriver_sqlstatement_callback = cb; }
    inline void setQSqlDriver_Handle_Callback(QSqlDriver_Handle_Callback cb) { qsqldriver_handle_callback = cb; }
    inline void setQSqlDriver_HasFeature_Callback(QSqlDriver_HasFeature_Callback cb) { qsqldriver_hasfeature_callback = cb; }
    inline void setQSqlDriver_Close_Callback(QSqlDriver_Close_Callback cb) { qsqldriver_close_callback = cb; }
    inline void setQSqlDriver_CreateResult_Callback(QSqlDriver_CreateResult_Callback cb) { qsqldriver_createresult_callback = cb; }
    inline void setQSqlDriver_Open_Callback(QSqlDriver_Open_Callback cb) { qsqldriver_open_callback = cb; }
    inline void setQSqlDriver_SubscribeToNotification_Callback(QSqlDriver_SubscribeToNotification_Callback cb) { qsqldriver_subscribetonotification_callback = cb; }
    inline void setQSqlDriver_UnsubscribeFromNotification_Callback(QSqlDriver_UnsubscribeFromNotification_Callback cb) { qsqldriver_unsubscribefromnotification_callback = cb; }
    inline void setQSqlDriver_SubscribedToNotifications_Callback(QSqlDriver_SubscribedToNotifications_Callback cb) { qsqldriver_subscribedtonotifications_callback = cb; }
    inline void setQSqlDriver_IsIdentifierEscaped_Callback(QSqlDriver_IsIdentifierEscaped_Callback cb) { qsqldriver_isidentifierescaped_callback = cb; }
    inline void setQSqlDriver_StripDelimiters_Callback(QSqlDriver_StripDelimiters_Callback cb) { qsqldriver_stripdelimiters_callback = cb; }
    inline void setQSqlDriver_MaximumIdentifierLength_Callback(QSqlDriver_MaximumIdentifierLength_Callback cb) { qsqldriver_maximumidentifierlength_callback = cb; }
    inline void setQSqlDriver_CancelQuery_Callback(QSqlDriver_CancelQuery_Callback cb) { qsqldriver_cancelquery_callback = cb; }
    inline void setQSqlDriver_SetOpen_Callback(QSqlDriver_SetOpen_Callback cb) { qsqldriver_setopen_callback = cb; }
    inline void setQSqlDriver_SetOpenError_Callback(QSqlDriver_SetOpenError_Callback cb) { qsqldriver_setopenerror_callback = cb; }
    inline void setQSqlDriver_SetLastError_Callback(QSqlDriver_SetLastError_Callback cb) { qsqldriver_setlasterror_callback = cb; }
    inline void setQSqlDriver_Event_Callback(QSqlDriver_Event_Callback cb) { qsqldriver_event_callback = cb; }
    inline void setQSqlDriver_EventFilter_Callback(QSqlDriver_EventFilter_Callback cb) { qsqldriver_eventfilter_callback = cb; }
    inline void setQSqlDriver_TimerEvent_Callback(QSqlDriver_TimerEvent_Callback cb) { qsqldriver_timerevent_callback = cb; }
    inline void setQSqlDriver_ChildEvent_Callback(QSqlDriver_ChildEvent_Callback cb) { qsqldriver_childevent_callback = cb; }
    inline void setQSqlDriver_CustomEvent_Callback(QSqlDriver_CustomEvent_Callback cb) { qsqldriver_customevent_callback = cb; }
    inline void setQSqlDriver_ConnectNotify_Callback(QSqlDriver_ConnectNotify_Callback cb) { qsqldriver_connectnotify_callback = cb; }
    inline void setQSqlDriver_DisconnectNotify_Callback(QSqlDriver_DisconnectNotify_Callback cb) { qsqldriver_disconnectnotify_callback = cb; }
    inline void setQSqlDriver_Sender_Callback(QSqlDriver_Sender_Callback cb) { qsqldriver_sender_callback = cb; }
    inline void setQSqlDriver_SenderSignalIndex_Callback(QSqlDriver_SenderSignalIndex_Callback cb) { qsqldriver_sendersignalindex_callback = cb; }
    inline void setQSqlDriver_Receivers_Callback(QSqlDriver_Receivers_Callback cb) { qsqldriver_receivers_callback = cb; }
    inline void setQSqlDriver_IsSignalConnected_Callback(QSqlDriver_IsSignalConnected_Callback cb) { qsqldriver_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSqlDriver_Metacall_IsBase(bool value) const { qsqldriver_metacall_isbase = value; }
    inline void setQSqlDriver_IsOpen_IsBase(bool value) const { qsqldriver_isopen_isbase = value; }
    inline void setQSqlDriver_BeginTransaction_IsBase(bool value) const { qsqldriver_begintransaction_isbase = value; }
    inline void setQSqlDriver_CommitTransaction_IsBase(bool value) const { qsqldriver_committransaction_isbase = value; }
    inline void setQSqlDriver_RollbackTransaction_IsBase(bool value) const { qsqldriver_rollbacktransaction_isbase = value; }
    inline void setQSqlDriver_Tables_IsBase(bool value) const { qsqldriver_tables_isbase = value; }
    inline void setQSqlDriver_PrimaryIndex_IsBase(bool value) const { qsqldriver_primaryindex_isbase = value; }
    inline void setQSqlDriver_Record_IsBase(bool value) const { qsqldriver_record_isbase = value; }
    inline void setQSqlDriver_FormatValue_IsBase(bool value) const { qsqldriver_formatvalue_isbase = value; }
    inline void setQSqlDriver_EscapeIdentifier_IsBase(bool value) const { qsqldriver_escapeidentifier_isbase = value; }
    inline void setQSqlDriver_SqlStatement_IsBase(bool value) const { qsqldriver_sqlstatement_isbase = value; }
    inline void setQSqlDriver_Handle_IsBase(bool value) const { qsqldriver_handle_isbase = value; }
    inline void setQSqlDriver_HasFeature_IsBase(bool value) const { qsqldriver_hasfeature_isbase = value; }
    inline void setQSqlDriver_Close_IsBase(bool value) const { qsqldriver_close_isbase = value; }
    inline void setQSqlDriver_CreateResult_IsBase(bool value) const { qsqldriver_createresult_isbase = value; }
    inline void setQSqlDriver_Open_IsBase(bool value) const { qsqldriver_open_isbase = value; }
    inline void setQSqlDriver_SubscribeToNotification_IsBase(bool value) const { qsqldriver_subscribetonotification_isbase = value; }
    inline void setQSqlDriver_UnsubscribeFromNotification_IsBase(bool value) const { qsqldriver_unsubscribefromnotification_isbase = value; }
    inline void setQSqlDriver_SubscribedToNotifications_IsBase(bool value) const { qsqldriver_subscribedtonotifications_isbase = value; }
    inline void setQSqlDriver_IsIdentifierEscaped_IsBase(bool value) const { qsqldriver_isidentifierescaped_isbase = value; }
    inline void setQSqlDriver_StripDelimiters_IsBase(bool value) const { qsqldriver_stripdelimiters_isbase = value; }
    inline void setQSqlDriver_MaximumIdentifierLength_IsBase(bool value) const { qsqldriver_maximumidentifierlength_isbase = value; }
    inline void setQSqlDriver_CancelQuery_IsBase(bool value) const { qsqldriver_cancelquery_isbase = value; }
    inline void setQSqlDriver_SetOpen_IsBase(bool value) const { qsqldriver_setopen_isbase = value; }
    inline void setQSqlDriver_SetOpenError_IsBase(bool value) const { qsqldriver_setopenerror_isbase = value; }
    inline void setQSqlDriver_SetLastError_IsBase(bool value) const { qsqldriver_setlasterror_isbase = value; }
    inline void setQSqlDriver_Event_IsBase(bool value) const { qsqldriver_event_isbase = value; }
    inline void setQSqlDriver_EventFilter_IsBase(bool value) const { qsqldriver_eventfilter_isbase = value; }
    inline void setQSqlDriver_TimerEvent_IsBase(bool value) const { qsqldriver_timerevent_isbase = value; }
    inline void setQSqlDriver_ChildEvent_IsBase(bool value) const { qsqldriver_childevent_isbase = value; }
    inline void setQSqlDriver_CustomEvent_IsBase(bool value) const { qsqldriver_customevent_isbase = value; }
    inline void setQSqlDriver_ConnectNotify_IsBase(bool value) const { qsqldriver_connectnotify_isbase = value; }
    inline void setQSqlDriver_DisconnectNotify_IsBase(bool value) const { qsqldriver_disconnectnotify_isbase = value; }
    inline void setQSqlDriver_Sender_IsBase(bool value) const { qsqldriver_sender_isbase = value; }
    inline void setQSqlDriver_SenderSignalIndex_IsBase(bool value) const { qsqldriver_sendersignalindex_isbase = value; }
    inline void setQSqlDriver_Receivers_IsBase(bool value) const { qsqldriver_receivers_isbase = value; }
    inline void setQSqlDriver_IsSignalConnected_IsBase(bool value) const { qsqldriver_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqldriver_metacall_isbase) {
            qsqldriver_metacall_isbase = false;
            return QSqlDriver::qt_metacall(param1, param2, param3);
        } else if (qsqldriver_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsqldriver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlDriver::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isOpen() const override {
        if (qsqldriver_isopen_isbase) {
            qsqldriver_isopen_isbase = false;
            return QSqlDriver::isOpen();
        } else if (qsqldriver_isopen_callback != nullptr) {
            bool callback_ret = qsqldriver_isopen_callback();
            return callback_ret;
        } else {
            return QSqlDriver::isOpen();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool beginTransaction() override {
        if (qsqldriver_begintransaction_isbase) {
            qsqldriver_begintransaction_isbase = false;
            return QSqlDriver::beginTransaction();
        } else if (qsqldriver_begintransaction_callback != nullptr) {
            bool callback_ret = qsqldriver_begintransaction_callback();
            return callback_ret;
        } else {
            return QSqlDriver::beginTransaction();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool commitTransaction() override {
        if (qsqldriver_committransaction_isbase) {
            qsqldriver_committransaction_isbase = false;
            return QSqlDriver::commitTransaction();
        } else if (qsqldriver_committransaction_callback != nullptr) {
            bool callback_ret = qsqldriver_committransaction_callback();
            return callback_ret;
        } else {
            return QSqlDriver::commitTransaction();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool rollbackTransaction() override {
        if (qsqldriver_rollbacktransaction_isbase) {
            qsqldriver_rollbacktransaction_isbase = false;
            return QSqlDriver::rollbackTransaction();
        } else if (qsqldriver_rollbacktransaction_callback != nullptr) {
            bool callback_ret = qsqldriver_rollbacktransaction_callback();
            return callback_ret;
        } else {
            return QSqlDriver::rollbackTransaction();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> tables(QSql::TableType tableType) const override {
        if (qsqldriver_tables_isbase) {
            qsqldriver_tables_isbase = false;
            return QSqlDriver::tables(tableType);
        } else if (qsqldriver_tables_callback != nullptr) {
            int cbval1 = static_cast<int>(tableType);

            libqt_list /* of libqt_string */ callback_ret = qsqldriver_tables_callback(this, cbval1);
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QSqlDriver::tables(tableType);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlIndex primaryIndex(const QString& tableName) const override {
        if (qsqldriver_primaryindex_isbase) {
            qsqldriver_primaryindex_isbase = false;
            return QSqlDriver::primaryIndex(tableName);
        } else if (qsqldriver_primaryindex_callback != nullptr) {
            const QString tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            libqt_string tableName_str;
            tableName_str.len = tableName_b.length();
            tableName_str.data = static_cast<const char*>(malloc(tableName_str.len + 1));
            memcpy((void*)tableName_str.data, tableName_b.data(), tableName_str.len);
            ((char*)tableName_str.data)[tableName_str.len] = '\0';
            libqt_string cbval1 = tableName_str;

            QSqlIndex* callback_ret = qsqldriver_primaryindex_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlDriver::primaryIndex(tableName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlRecord record(const QString& tableName) const override {
        if (qsqldriver_record_isbase) {
            qsqldriver_record_isbase = false;
            return QSqlDriver::record(tableName);
        } else if (qsqldriver_record_callback != nullptr) {
            const QString tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            libqt_string tableName_str;
            tableName_str.len = tableName_b.length();
            tableName_str.data = static_cast<const char*>(malloc(tableName_str.len + 1));
            memcpy((void*)tableName_str.data, tableName_b.data(), tableName_str.len);
            ((char*)tableName_str.data)[tableName_str.len] = '\0';
            libqt_string cbval1 = tableName_str;

            QSqlRecord* callback_ret = qsqldriver_record_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSqlDriver::record(tableName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString formatValue(const QSqlField& field, bool trimStrings) const override {
        if (qsqldriver_formatvalue_isbase) {
            qsqldriver_formatvalue_isbase = false;
            return QSqlDriver::formatValue(field, trimStrings);
        } else if (qsqldriver_formatvalue_callback != nullptr) {
            const QSqlField& field_ret = field;
            // Cast returned reference into pointer
            QSqlField* cbval1 = const_cast<QSqlField*>(&field_ret);
            bool cbval2 = trimStrings;

            libqt_string callback_ret = qsqldriver_formatvalue_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QSqlDriver::formatValue(field, trimStrings);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString escapeIdentifier(const QString& identifier, QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_escapeidentifier_isbase) {
            qsqldriver_escapeidentifier_isbase = false;
            return QSqlDriver::escapeIdentifier(identifier, typeVal);
        } else if (qsqldriver_escapeidentifier_callback != nullptr) {
            const QString identifier_ret = identifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray identifier_b = identifier_ret.toUtf8();
            libqt_string identifier_str;
            identifier_str.len = identifier_b.length();
            identifier_str.data = static_cast<const char*>(malloc(identifier_str.len + 1));
            memcpy((void*)identifier_str.data, identifier_b.data(), identifier_str.len);
            ((char*)identifier_str.data)[identifier_str.len] = '\0';
            libqt_string cbval1 = identifier_str;
            int cbval2 = static_cast<int>(typeVal);

            libqt_string callback_ret = qsqldriver_escapeidentifier_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QSqlDriver::escapeIdentifier(identifier, typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString sqlStatement(QSqlDriver::StatementType typeVal, const QString& tableName, const QSqlRecord& rec, bool preparedStatement) const override {
        if (qsqldriver_sqlstatement_isbase) {
            qsqldriver_sqlstatement_isbase = false;
            return QSqlDriver::sqlStatement(typeVal, tableName, rec, preparedStatement);
        } else if (qsqldriver_sqlstatement_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);
            const QString tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            libqt_string tableName_str;
            tableName_str.len = tableName_b.length();
            tableName_str.data = static_cast<const char*>(malloc(tableName_str.len + 1));
            memcpy((void*)tableName_str.data, tableName_b.data(), tableName_str.len);
            ((char*)tableName_str.data)[tableName_str.len] = '\0';
            libqt_string cbval2 = tableName_str;
            const QSqlRecord& rec_ret = rec;
            // Cast returned reference into pointer
            QSqlRecord* cbval3 = const_cast<QSqlRecord*>(&rec_ret);
            bool cbval4 = preparedStatement;

            libqt_string callback_ret = qsqldriver_sqlstatement_callback(this, cbval1, cbval2, cbval3, cbval4);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QSqlDriver::sqlStatement(typeVal, tableName, rec, preparedStatement);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant handle() const override {
        if (qsqldriver_handle_isbase) {
            qsqldriver_handle_isbase = false;
            return QSqlDriver::handle();
        } else if (qsqldriver_handle_callback != nullptr) {
            QVariant* callback_ret = qsqldriver_handle_callback();
            return *callback_ret;
        } else {
            return QSqlDriver::handle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasFeature(QSqlDriver::DriverFeature f) const override {
        if (qsqldriver_hasfeature_callback != nullptr) {
            int cbval1 = static_cast<int>(f);

            bool callback_ret = qsqldriver_hasfeature_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qsqldriver_close_callback != nullptr) {
            qsqldriver_close_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlResult* createResult() const override {
        if (qsqldriver_createresult_callback != nullptr) {
            QSqlResult* callback_ret = qsqldriver_createresult_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(const QString& db, const QString& user, const QString& password, const QString& host, int port, const QString& connOpts) override {
        if (qsqldriver_open_callback != nullptr) {
            const QString db_ret = db;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray db_b = db_ret.toUtf8();
            libqt_string db_str;
            db_str.len = db_b.length();
            db_str.data = static_cast<const char*>(malloc(db_str.len + 1));
            memcpy((void*)db_str.data, db_b.data(), db_str.len);
            ((char*)db_str.data)[db_str.len] = '\0';
            libqt_string cbval1 = db_str;
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            libqt_string user_str;
            user_str.len = user_b.length();
            user_str.data = static_cast<const char*>(malloc(user_str.len + 1));
            memcpy((void*)user_str.data, user_b.data(), user_str.len);
            ((char*)user_str.data)[user_str.len] = '\0';
            libqt_string cbval2 = user_str;
            const QString password_ret = password;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray password_b = password_ret.toUtf8();
            libqt_string password_str;
            password_str.len = password_b.length();
            password_str.data = static_cast<const char*>(malloc(password_str.len + 1));
            memcpy((void*)password_str.data, password_b.data(), password_str.len);
            ((char*)password_str.data)[password_str.len] = '\0';
            libqt_string cbval3 = password_str;
            const QString host_ret = host;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray host_b = host_ret.toUtf8();
            libqt_string host_str;
            host_str.len = host_b.length();
            host_str.data = static_cast<const char*>(malloc(host_str.len + 1));
            memcpy((void*)host_str.data, host_b.data(), host_str.len);
            ((char*)host_str.data)[host_str.len] = '\0';
            libqt_string cbval4 = host_str;
            int cbval5 = port;
            const QString connOpts_ret = connOpts;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray connOpts_b = connOpts_ret.toUtf8();
            libqt_string connOpts_str;
            connOpts_str.len = connOpts_b.length();
            connOpts_str.data = static_cast<const char*>(malloc(connOpts_str.len + 1));
            memcpy((void*)connOpts_str.data, connOpts_b.data(), connOpts_str.len);
            ((char*)connOpts_str.data)[connOpts_str.len] = '\0';
            libqt_string cbval6 = connOpts_str;

            bool callback_ret = qsqldriver_open_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool subscribeToNotification(const QString& name) override {
        if (qsqldriver_subscribetonotification_isbase) {
            qsqldriver_subscribetonotification_isbase = false;
            return QSqlDriver::subscribeToNotification(name);
        } else if (qsqldriver_subscribetonotification_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            bool callback_ret = qsqldriver_subscribetonotification_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlDriver::subscribeToNotification(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool unsubscribeFromNotification(const QString& name) override {
        if (qsqldriver_unsubscribefromnotification_isbase) {
            qsqldriver_unsubscribefromnotification_isbase = false;
            return QSqlDriver::unsubscribeFromNotification(name);
        } else if (qsqldriver_unsubscribefromnotification_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            bool callback_ret = qsqldriver_unsubscribefromnotification_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlDriver::unsubscribeFromNotification(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> subscribedToNotifications() const override {
        if (qsqldriver_subscribedtonotifications_isbase) {
            qsqldriver_subscribedtonotifications_isbase = false;
            return QSqlDriver::subscribedToNotifications();
        } else if (qsqldriver_subscribedtonotifications_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qsqldriver_subscribedtonotifications_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QSqlDriver::subscribedToNotifications();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIdentifierEscaped(const QString& identifier, QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_isidentifierescaped_isbase) {
            qsqldriver_isidentifierescaped_isbase = false;
            return QSqlDriver::isIdentifierEscaped(identifier, typeVal);
        } else if (qsqldriver_isidentifierescaped_callback != nullptr) {
            const QString identifier_ret = identifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray identifier_b = identifier_ret.toUtf8();
            libqt_string identifier_str;
            identifier_str.len = identifier_b.length();
            identifier_str.data = static_cast<const char*>(malloc(identifier_str.len + 1));
            memcpy((void*)identifier_str.data, identifier_b.data(), identifier_str.len);
            ((char*)identifier_str.data)[identifier_str.len] = '\0';
            libqt_string cbval1 = identifier_str;
            int cbval2 = static_cast<int>(typeVal);

            bool callback_ret = qsqldriver_isidentifierescaped_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlDriver::isIdentifierEscaped(identifier, typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString stripDelimiters(const QString& identifier, QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_stripdelimiters_isbase) {
            qsqldriver_stripdelimiters_isbase = false;
            return QSqlDriver::stripDelimiters(identifier, typeVal);
        } else if (qsqldriver_stripdelimiters_callback != nullptr) {
            const QString identifier_ret = identifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray identifier_b = identifier_ret.toUtf8();
            libqt_string identifier_str;
            identifier_str.len = identifier_b.length();
            identifier_str.data = static_cast<const char*>(malloc(identifier_str.len + 1));
            memcpy((void*)identifier_str.data, identifier_b.data(), identifier_str.len);
            ((char*)identifier_str.data)[identifier_str.len] = '\0';
            libqt_string cbval1 = identifier_str;
            int cbval2 = static_cast<int>(typeVal);

            libqt_string callback_ret = qsqldriver_stripdelimiters_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QSqlDriver::stripDelimiters(identifier, typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int maximumIdentifierLength(QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_maximumidentifierlength_isbase) {
            qsqldriver_maximumidentifierlength_isbase = false;
            return QSqlDriver::maximumIdentifierLength(typeVal);
        } else if (qsqldriver_maximumidentifierlength_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);

            int callback_ret = qsqldriver_maximumidentifierlength_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlDriver::maximumIdentifierLength(typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool cancelQuery() override {
        if (qsqldriver_cancelquery_isbase) {
            qsqldriver_cancelquery_isbase = false;
            return QSqlDriver::cancelQuery();
        } else if (qsqldriver_cancelquery_callback != nullptr) {
            bool callback_ret = qsqldriver_cancelquery_callback();
            return callback_ret;
        } else {
            return QSqlDriver::cancelQuery();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOpen(bool o) override {
        if (qsqldriver_setopen_isbase) {
            qsqldriver_setopen_isbase = false;
            QSqlDriver::setOpen(o);
        } else if (qsqldriver_setopen_callback != nullptr) {
            bool cbval1 = o;

            qsqldriver_setopen_callback(this, cbval1);
        } else {
            QSqlDriver::setOpen(o);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOpenError(bool e) override {
        if (qsqldriver_setopenerror_isbase) {
            qsqldriver_setopenerror_isbase = false;
            QSqlDriver::setOpenError(e);
        } else if (qsqldriver_setopenerror_callback != nullptr) {
            bool cbval1 = e;

            qsqldriver_setopenerror_callback(this, cbval1);
        } else {
            QSqlDriver::setOpenError(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLastError(const QSqlError& e) override {
        if (qsqldriver_setlasterror_isbase) {
            qsqldriver_setlasterror_isbase = false;
            QSqlDriver::setLastError(e);
        } else if (qsqldriver_setlasterror_callback != nullptr) {
            const QSqlError& e_ret = e;
            // Cast returned reference into pointer
            QSqlError* cbval1 = const_cast<QSqlError*>(&e_ret);

            qsqldriver_setlasterror_callback(this, cbval1);
        } else {
            QSqlDriver::setLastError(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqldriver_event_isbase) {
            qsqldriver_event_isbase = false;
            return QSqlDriver::event(event);
        } else if (qsqldriver_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsqldriver_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlDriver::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqldriver_eventfilter_isbase) {
            qsqldriver_eventfilter_isbase = false;
            return QSqlDriver::eventFilter(watched, event);
        } else if (qsqldriver_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsqldriver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSqlDriver::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqldriver_timerevent_isbase) {
            qsqldriver_timerevent_isbase = false;
            QSqlDriver::timerEvent(event);
        } else if (qsqldriver_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsqldriver_timerevent_callback(this, cbval1);
        } else {
            QSqlDriver::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqldriver_childevent_isbase) {
            qsqldriver_childevent_isbase = false;
            QSqlDriver::childEvent(event);
        } else if (qsqldriver_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsqldriver_childevent_callback(this, cbval1);
        } else {
            QSqlDriver::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqldriver_customevent_isbase) {
            qsqldriver_customevent_isbase = false;
            QSqlDriver::customEvent(event);
        } else if (qsqldriver_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsqldriver_customevent_callback(this, cbval1);
        } else {
            QSqlDriver::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqldriver_connectnotify_isbase) {
            qsqldriver_connectnotify_isbase = false;
            QSqlDriver::connectNotify(signal);
        } else if (qsqldriver_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqldriver_connectnotify_callback(this, cbval1);
        } else {
            QSqlDriver::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqldriver_disconnectnotify_isbase) {
            qsqldriver_disconnectnotify_isbase = false;
            QSqlDriver::disconnectNotify(signal);
        } else if (qsqldriver_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsqldriver_disconnectnotify_callback(this, cbval1);
        } else {
            QSqlDriver::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsqldriver_sender_isbase) {
            qsqldriver_sender_isbase = false;
            return QSqlDriver::sender();
        } else if (qsqldriver_sender_callback != nullptr) {
            QObject* callback_ret = qsqldriver_sender_callback();
            return callback_ret;
        } else {
            return QSqlDriver::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsqldriver_sendersignalindex_isbase) {
            qsqldriver_sendersignalindex_isbase = false;
            return QSqlDriver::senderSignalIndex();
        } else if (qsqldriver_sendersignalindex_callback != nullptr) {
            int callback_ret = qsqldriver_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSqlDriver::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsqldriver_receivers_isbase) {
            qsqldriver_receivers_isbase = false;
            return QSqlDriver::receivers(signal);
        } else if (qsqldriver_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsqldriver_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSqlDriver::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsqldriver_issignalconnected_isbase) {
            qsqldriver_issignalconnected_isbase = false;
            return QSqlDriver::isSignalConnected(signal);
        } else if (qsqldriver_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsqldriver_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSqlDriver::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSqlDriver_SetOpen(QSqlDriver* self, bool o);
    friend void QSqlDriver_QBaseSetOpen(QSqlDriver* self, bool o);
    friend void QSqlDriver_SetOpenError(QSqlDriver* self, bool e);
    friend void QSqlDriver_QBaseSetOpenError(QSqlDriver* self, bool e);
    friend void QSqlDriver_SetLastError(QSqlDriver* self, const QSqlError* e);
    friend void QSqlDriver_QBaseSetLastError(QSqlDriver* self, const QSqlError* e);
    friend void QSqlDriver_TimerEvent(QSqlDriver* self, QTimerEvent* event);
    friend void QSqlDriver_QBaseTimerEvent(QSqlDriver* self, QTimerEvent* event);
    friend void QSqlDriver_ChildEvent(QSqlDriver* self, QChildEvent* event);
    friend void QSqlDriver_QBaseChildEvent(QSqlDriver* self, QChildEvent* event);
    friend void QSqlDriver_CustomEvent(QSqlDriver* self, QEvent* event);
    friend void QSqlDriver_QBaseCustomEvent(QSqlDriver* self, QEvent* event);
    friend void QSqlDriver_ConnectNotify(QSqlDriver* self, const QMetaMethod* signal);
    friend void QSqlDriver_QBaseConnectNotify(QSqlDriver* self, const QMetaMethod* signal);
    friend void QSqlDriver_DisconnectNotify(QSqlDriver* self, const QMetaMethod* signal);
    friend void QSqlDriver_QBaseDisconnectNotify(QSqlDriver* self, const QMetaMethod* signal);
    friend QObject* QSqlDriver_Sender(const QSqlDriver* self);
    friend QObject* QSqlDriver_QBaseSender(const QSqlDriver* self);
    friend int QSqlDriver_SenderSignalIndex(const QSqlDriver* self);
    friend int QSqlDriver_QBaseSenderSignalIndex(const QSqlDriver* self);
    friend int QSqlDriver_Receivers(const QSqlDriver* self, const char* signal);
    friend int QSqlDriver_QBaseReceivers(const QSqlDriver* self, const char* signal);
    friend bool QSqlDriver_IsSignalConnected(const QSqlDriver* self, const QMetaMethod* signal);
    friend bool QSqlDriver_QBaseIsSignalConnected(const QSqlDriver* self, const QMetaMethod* signal);
};

#endif
