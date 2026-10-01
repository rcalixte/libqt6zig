#pragma once
#ifndef SQL_LIBQSQLDRIVER_HXX
#define SQL_LIBQSQLDRIVER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSqlDriver
class VirtualQSqlDriver : public QSqlDriver {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSqlDriver_MetaObject_Callback = QMetaObject* (*)(const QSqlDriver*);
    using QSqlDriver_Metacast_Callback = void* (*)(QSqlDriver*, const char*);
    using QSqlDriver_Metacall_Callback = int (*)(QSqlDriver*, int, int, void**);
    using QSqlDriver_IsOpen_Callback = bool (*)(const QSqlDriver*);
    using QSqlDriver_BeginTransaction_Callback = bool (*)(QSqlDriver*);
    using QSqlDriver_CommitTransaction_Callback = bool (*)(QSqlDriver*);
    using QSqlDriver_RollbackTransaction_Callback = bool (*)(QSqlDriver*);
    using QSqlDriver_Tables_Callback = const char** (*)(const QSqlDriver*, int);
    using QSqlDriver_PrimaryIndex_Callback = QSqlIndex* (*)(const QSqlDriver*, const char*);
    using QSqlDriver_Record_Callback = QSqlRecord* (*)(const QSqlDriver*, const char*);
    using QSqlDriver_FormatValue_Callback = const char* (*)(const QSqlDriver*, QSqlField*, bool);
    using QSqlDriver_EscapeIdentifier_Callback = const char* (*)(const QSqlDriver*, const char*, int);
    using QSqlDriver_SqlStatement_Callback = const char* (*)(const QSqlDriver*, int, const char*, QSqlRecord*, bool);
    using QSqlDriver_Handle_Callback = QVariant* (*)(const QSqlDriver*);
    using QSqlDriver_HasFeature_Callback = bool (*)(const QSqlDriver*, int);
    using QSqlDriver_Close_Callback = void (*)(QSqlDriver*);
    using QSqlDriver_CreateResult_Callback = QSqlResult* (*)(const QSqlDriver*);
    using QSqlDriver_Open_Callback = bool (*)(QSqlDriver*, const char*, const char*, const char*, const char*, int, const char*);
    using QSqlDriver_SubscribeToNotification_Callback = bool (*)(QSqlDriver*, const char*);
    using QSqlDriver_UnsubscribeFromNotification_Callback = bool (*)(QSqlDriver*, const char*);
    using QSqlDriver_SubscribedToNotifications_Callback = const char** (*)(const QSqlDriver*);
    using QSqlDriver_IsIdentifierEscaped_Callback = bool (*)(const QSqlDriver*, const char*, int);
    using QSqlDriver_StripDelimiters_Callback = const char* (*)(const QSqlDriver*, const char*, int);
    using QSqlDriver_MaximumIdentifierLength_Callback = int (*)(const QSqlDriver*, int);
    using QSqlDriver_CancelQuery_Callback = bool (*)(QSqlDriver*);
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
    using QSqlDriver::isSignalConnected;
    using QSqlDriver::receivers;
    using QSqlDriver::sender;
    using QSqlDriver::senderSignalIndex;

    // Instance callback storage
    QSqlDriver_MetaObject_Callback qsqldriver_metaobject_callback = nullptr;
    QSqlDriver_Metacast_Callback qsqldriver_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QSqlDriver {
        using QSqlDriver::childEvent;
        using QSqlDriver::connectNotify;
        using QSqlDriver::customEvent;
        using QSqlDriver::disconnectNotify;
        using QSqlDriver::setLastError;
        using QSqlDriver::setOpen;
        using QSqlDriver::setOpenError;
        using QSqlDriver::timerEvent;
    };

    VirtualQSqlDriver() : QSqlDriver() {};
    VirtualQSqlDriver(QObject* parent) : QSqlDriver(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsqldriver_metaobject_callback) {
            QMetaObject* callback_ret = qsqldriver_metaobject_callback(this);
            return callback_ret;
        }
        return QSqlDriver::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsqldriver_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsqldriver_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlDriver::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsqldriver_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsqldriver_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSqlDriver::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isOpen() const override {
        if (qsqldriver_isopen_callback) {
            bool callback_ret = qsqldriver_isopen_callback(this);
            return callback_ret;
        }
        return QSqlDriver::isOpen();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool beginTransaction() override {
        if (qsqldriver_begintransaction_callback) {
            bool callback_ret = qsqldriver_begintransaction_callback(this);
            return callback_ret;
        }
        return QSqlDriver::beginTransaction();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool commitTransaction() override {
        if (qsqldriver_committransaction_callback) {
            bool callback_ret = qsqldriver_committransaction_callback(this);
            return callback_ret;
        }
        return QSqlDriver::commitTransaction();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool rollbackTransaction() override {
        if (qsqldriver_rollbacktransaction_callback) {
            bool callback_ret = qsqldriver_rollbacktransaction_callback(this);
            return callback_ret;
        }
        return QSqlDriver::rollbackTransaction();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> tables(QSql::TableType tableType) const override {
        if (qsqldriver_tables_callback) {
            int cbval1 = static_cast<int>(tableType);
            const char** callback_ret = qsqldriver_tables_callback(this, cbval1);
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
        return QSqlDriver::tables(tableType);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlIndex primaryIndex(const QString& tableName) const override {
        if (qsqldriver_primaryindex_callback) {
            const auto tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            auto tableName_str_len = tableName_b.length();
            const char* tableName_str = static_cast<const char*>(malloc(tableName_str_len + 1));
            memcpy((void*)tableName_str, tableName_b.data(), tableName_str_len);
            ((char*)tableName_str)[tableName_str_len] = '\0';
            const char* cbval1 = tableName_str;
            QSqlIndex* callback_ret = qsqldriver_primaryindex_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(tableName_str);
            return callback_ret_Value;
        }
        return QSqlDriver::primaryIndex(tableName);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlRecord record(const QString& tableName) const override {
        if (qsqldriver_record_callback) {
            const auto tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            auto tableName_str_len = tableName_b.length();
            const char* tableName_str = static_cast<const char*>(malloc(tableName_str_len + 1));
            memcpy((void*)tableName_str, tableName_b.data(), tableName_str_len);
            ((char*)tableName_str)[tableName_str_len] = '\0';
            const char* cbval1 = tableName_str;
            QSqlRecord* callback_ret = qsqldriver_record_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(tableName_str);
            return callback_ret_Value;
        }
        return QSqlDriver::record(tableName);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString formatValue(const QSqlField& field, bool trimStrings) const override {
        if (qsqldriver_formatvalue_callback) {
            const QSqlField& field_ret = field;
            // Cast returned reference into pointer
            QSqlField* cbval1 = const_cast<QSqlField*>(&field_ret);
            bool cbval2 = trimStrings;
            const char* callback_ret = qsqldriver_formatvalue_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QSqlDriver::formatValue(field, trimStrings);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString escapeIdentifier(const QString& identifier, QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_escapeidentifier_callback) {
            const auto identifier_ret = identifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray identifier_b = identifier_ret.toUtf8();
            auto identifier_str_len = identifier_b.length();
            const char* identifier_str = static_cast<const char*>(malloc(identifier_str_len + 1));
            memcpy((void*)identifier_str, identifier_b.data(), identifier_str_len);
            ((char*)identifier_str)[identifier_str_len] = '\0';
            const char* cbval1 = identifier_str;
            int cbval2 = static_cast<int>(typeVal);
            const char* callback_ret = qsqldriver_escapeidentifier_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(identifier_str);
            return callback_ret_QString;
        }
        return QSqlDriver::escapeIdentifier(identifier, typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString sqlStatement(QSqlDriver::StatementType typeVal, const QString& tableName, const QSqlRecord& rec, bool preparedStatement) const override {
        if (qsqldriver_sqlstatement_callback) {
            int cbval1 = static_cast<int>(typeVal);
            const auto tableName_ret = tableName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray tableName_b = tableName_ret.toUtf8();
            auto tableName_str_len = tableName_b.length();
            const char* tableName_str = static_cast<const char*>(malloc(tableName_str_len + 1));
            memcpy((void*)tableName_str, tableName_b.data(), tableName_str_len);
            ((char*)tableName_str)[tableName_str_len] = '\0';
            const char* cbval2 = tableName_str;
            const QSqlRecord& rec_ret = rec;
            // Cast returned reference into pointer
            QSqlRecord* cbval3 = const_cast<QSqlRecord*>(&rec_ret);
            bool cbval4 = preparedStatement;
            const char* callback_ret = qsqldriver_sqlstatement_callback(this, cbval1, cbval2, cbval3, cbval4);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(tableName_str);
            return callback_ret_QString;
        }
        return QSqlDriver::sqlStatement(typeVal, tableName, rec, preparedStatement);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant handle() const override {
        if (qsqldriver_handle_callback) {
            QVariant* callback_ret = qsqldriver_handle_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSqlDriver::handle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasFeature(QSqlDriver::DriverFeature f) const override {
        if (qsqldriver_hasfeature_callback) {
            int cbval1 = static_cast<int>(f);
            bool callback_ret = qsqldriver_hasfeature_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSqlDriver::hasFeature called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qsqldriver_close_callback) {
            qsqldriver_close_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSqlDriver::close called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSqlResult* createResult() const override {
        if (qsqldriver_createresult_callback) {
            QSqlResult* callback_ret = qsqldriver_createresult_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSqlDriver::createResult called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(const QString& db, const QString& user, const QString& password, const QString& host, int port, const QString& connOpts) override {
        if (qsqldriver_open_callback) {
            const auto db_ret = db;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray db_b = db_ret.toUtf8();
            auto db_str_len = db_b.length();
            const char* db_str = static_cast<const char*>(malloc(db_str_len + 1));
            memcpy((void*)db_str, db_b.data(), db_str_len);
            ((char*)db_str)[db_str_len] = '\0';
            const char* cbval1 = db_str;
            const auto user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval2 = user_str;
            const auto password_ret = password;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray password_b = password_ret.toUtf8();
            auto password_str_len = password_b.length();
            const char* password_str = static_cast<const char*>(malloc(password_str_len + 1));
            memcpy((void*)password_str, password_b.data(), password_str_len);
            ((char*)password_str)[password_str_len] = '\0';
            const char* cbval3 = password_str;
            const auto host_ret = host;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray host_b = host_ret.toUtf8();
            auto host_str_len = host_b.length();
            const char* host_str = static_cast<const char*>(malloc(host_str_len + 1));
            memcpy((void*)host_str, host_b.data(), host_str_len);
            ((char*)host_str)[host_str_len] = '\0';
            const char* cbval4 = host_str;
            int cbval5 = port;
            const auto connOpts_ret = connOpts;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray connOpts_b = connOpts_ret.toUtf8();
            auto connOpts_str_len = connOpts_b.length();
            const char* connOpts_str = static_cast<const char*>(malloc(connOpts_str_len + 1));
            memcpy((void*)connOpts_str, connOpts_b.data(), connOpts_str_len);
            ((char*)connOpts_str)[connOpts_str_len] = '\0';
            const char* cbval6 = connOpts_str;
            bool callback_ret = qsqldriver_open_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6);
            libqt_free(db_str);
            libqt_free(user_str);
            libqt_free(password_str);
            libqt_free(host_str);
            libqt_free(connOpts_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSqlDriver::open called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool subscribeToNotification(const QString& name) override {
        if (qsqldriver_subscribetonotification_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            bool callback_ret = qsqldriver_subscribetonotification_callback(this, cbval1);
            libqt_free(name_str);
            return callback_ret;
        }
        return QSqlDriver::subscribeToNotification(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool unsubscribeFromNotification(const QString& name) override {
        if (qsqldriver_unsubscribefromnotification_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            bool callback_ret = qsqldriver_unsubscribefromnotification_callback(this, cbval1);
            libqt_free(name_str);
            return callback_ret;
        }
        return QSqlDriver::unsubscribeFromNotification(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> subscribedToNotifications() const override {
        if (qsqldriver_subscribedtonotifications_callback) {
            const char** callback_ret = qsqldriver_subscribedtonotifications_callback(this);
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
        return QSqlDriver::subscribedToNotifications();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIdentifierEscaped(const QString& identifier, QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_isidentifierescaped_callback) {
            const auto identifier_ret = identifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray identifier_b = identifier_ret.toUtf8();
            auto identifier_str_len = identifier_b.length();
            const char* identifier_str = static_cast<const char*>(malloc(identifier_str_len + 1));
            memcpy((void*)identifier_str, identifier_b.data(), identifier_str_len);
            ((char*)identifier_str)[identifier_str_len] = '\0';
            const char* cbval1 = identifier_str;
            int cbval2 = static_cast<int>(typeVal);
            bool callback_ret = qsqldriver_isidentifierescaped_callback(this, cbval1, cbval2);
            libqt_free(identifier_str);
            return callback_ret;
        }
        return QSqlDriver::isIdentifierEscaped(identifier, typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString stripDelimiters(const QString& identifier, QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_stripdelimiters_callback) {
            const auto identifier_ret = identifier;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray identifier_b = identifier_ret.toUtf8();
            auto identifier_str_len = identifier_b.length();
            const char* identifier_str = static_cast<const char*>(malloc(identifier_str_len + 1));
            memcpy((void*)identifier_str, identifier_b.data(), identifier_str_len);
            ((char*)identifier_str)[identifier_str_len] = '\0';
            const char* cbval1 = identifier_str;
            int cbval2 = static_cast<int>(typeVal);
            const char* callback_ret = qsqldriver_stripdelimiters_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(identifier_str);
            return callback_ret_QString;
        }
        return QSqlDriver::stripDelimiters(identifier, typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual int maximumIdentifierLength(QSqlDriver::IdentifierType typeVal) const override {
        if (qsqldriver_maximumidentifierlength_callback) {
            int cbval1 = static_cast<int>(typeVal);
            int callback_ret = qsqldriver_maximumidentifierlength_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSqlDriver::maximumIdentifierLength(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool cancelQuery() override {
        if (qsqldriver_cancelquery_callback) {
            bool callback_ret = qsqldriver_cancelquery_callback(this);
            return callback_ret;
        }
        return QSqlDriver::cancelQuery();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOpen(bool o) override {
        if (qsqldriver_setopen_callback) {
            bool cbval1 = o;
            qsqldriver_setopen_callback(this, cbval1);
            return;
        }
        QSqlDriver::setOpen(o);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOpenError(bool e) override {
        if (qsqldriver_setopenerror_callback) {
            bool cbval1 = e;
            qsqldriver_setopenerror_callback(this, cbval1);
            return;
        }
        QSqlDriver::setOpenError(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLastError(const QSqlError& e) override {
        if (qsqldriver_setlasterror_callback) {
            const QSqlError& e_ret = e;
            // Cast returned reference into pointer
            QSqlError* cbval1 = const_cast<QSqlError*>(&e_ret);
            qsqldriver_setlasterror_callback(this, cbval1);
            return;
        }
        QSqlDriver::setLastError(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsqldriver_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsqldriver_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSqlDriver::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsqldriver_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsqldriver_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSqlDriver::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsqldriver_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsqldriver_timerevent_callback(this, cbval1);
            return;
        }
        QSqlDriver::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsqldriver_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsqldriver_childevent_callback(this, cbval1);
            return;
        }
        QSqlDriver::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsqldriver_customevent_callback) {
            QEvent* cbval1 = event;
            qsqldriver_customevent_callback(this, cbval1);
            return;
        }
        QSqlDriver::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsqldriver_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqldriver_connectnotify_callback(this, cbval1);
            return;
        }
        QSqlDriver::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsqldriver_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsqldriver_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSqlDriver::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSqlDriver_SuperSetOpen(QSqlDriver* self, bool o);
    friend void QSqlDriver_SuperSetOpenError(QSqlDriver* self, bool e);
    friend void QSqlDriver_SuperSetLastError(QSqlDriver* self, const QSqlError* e);
    friend void QSqlDriver_SuperTimerEvent(QSqlDriver* self, QTimerEvent* event);
    friend void QSqlDriver_SuperChildEvent(QSqlDriver* self, QChildEvent* event);
    friend void QSqlDriver_SuperCustomEvent(QSqlDriver* self, QEvent* event);
    friend void QSqlDriver_SuperConnectNotify(QSqlDriver* self, const QMetaMethod* signal);
    friend void QSqlDriver_SuperDisconnectNotify(QSqlDriver* self, const QMetaMethod* signal);
};

#endif
