#pragma once
#ifndef EXTRAS_KIO_LIBWIDGETSASKUSERACTIONHANDLER_HXX
#define EXTRAS_KIO_LIBWIDGETSASKUSERACTIONHANDLER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::WidgetsAskUserActionHandler
class VirtualKIOWidgetsAskUserActionHandler final : public KIO::WidgetsAskUserActionHandler {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIO__WidgetsAskUserActionHandler_MetaObject_Callback = QMetaObject* (*)(const KIO__WidgetsAskUserActionHandler*);
    using KIO__WidgetsAskUserActionHandler_Metacast_Callback = void* (*)(KIO__WidgetsAskUserActionHandler*, const char*);
    using KIO__WidgetsAskUserActionHandler_Metacall_Callback = int (*)(KIO__WidgetsAskUserActionHandler*, int, int, void**);
    using KIO__WidgetsAskUserActionHandler_AskUserRename_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, KJob*, const char*, QUrl*, QUrl*, int, unsigned long long, unsigned long long, QDateTime*, QDateTime*, QDateTime*, QDateTime*);
    using KIO__WidgetsAskUserActionHandler_AskUserSkip_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, KJob*, int, const char*);
    using KIO__WidgetsAskUserActionHandler_AskUserDelete_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, libqt_list /* of QUrl* */, int, int, QWidget*);
    using KIO__WidgetsAskUserActionHandler_RequestUserMessageBox_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, int, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, QWidget*);
    using KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, libqt_map /* of libqt_string to QVariant* */, QWidget*);
    using KIO__WidgetsAskUserActionHandler_Event_Callback = bool (*)(KIO__WidgetsAskUserActionHandler*, QEvent*);
    using KIO__WidgetsAskUserActionHandler_EventFilter_Callback = bool (*)(KIO__WidgetsAskUserActionHandler*, QObject*, QEvent*);
    using KIO__WidgetsAskUserActionHandler_TimerEvent_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QTimerEvent*);
    using KIO__WidgetsAskUserActionHandler_ChildEvent_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QChildEvent*);
    using KIO__WidgetsAskUserActionHandler_CustomEvent_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QEvent*);
    using KIO__WidgetsAskUserActionHandler_ConnectNotify_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QMetaMethod*);
    using KIO__WidgetsAskUserActionHandler_DisconnectNotify_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QMetaMethod*);
    using KIO::WidgetsAskUserActionHandler::isSignalConnected;
    using KIO::WidgetsAskUserActionHandler::receivers;
    using KIO::WidgetsAskUserActionHandler::sender;
    using KIO::WidgetsAskUserActionHandler::senderSignalIndex;

    // Instance callback storage
    KIO__WidgetsAskUserActionHandler_MetaObject_Callback kio__widgetsaskuseractionhandler_metaobject_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_Metacast_Callback kio__widgetsaskuseractionhandler_metacast_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_Metacall_Callback kio__widgetsaskuseractionhandler_metacall_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_AskUserRename_Callback kio__widgetsaskuseractionhandler_askuserrename_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_AskUserSkip_Callback kio__widgetsaskuseractionhandler_askuserskip_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_AskUserDelete_Callback kio__widgetsaskuseractionhandler_askuserdelete_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_RequestUserMessageBox_Callback kio__widgetsaskuseractionhandler_requestusermessagebox_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_Callback kio__widgetsaskuseractionhandler_askignoresslerrors_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_Event_Callback kio__widgetsaskuseractionhandler_event_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_EventFilter_Callback kio__widgetsaskuseractionhandler_eventfilter_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_TimerEvent_Callback kio__widgetsaskuseractionhandler_timerevent_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_ChildEvent_Callback kio__widgetsaskuseractionhandler_childevent_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_CustomEvent_Callback kio__widgetsaskuseractionhandler_customevent_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_ConnectNotify_Callback kio__widgetsaskuseractionhandler_connectnotify_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_DisconnectNotify_Callback kio__widgetsaskuseractionhandler_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KIO::WidgetsAskUserActionHandler {
        using KIO::WidgetsAskUserActionHandler::childEvent;
        using KIO::WidgetsAskUserActionHandler::connectNotify;
        using KIO::WidgetsAskUserActionHandler::customEvent;
        using KIO::WidgetsAskUserActionHandler::disconnectNotify;
        using KIO::WidgetsAskUserActionHandler::timerEvent;
    };

    VirtualKIOWidgetsAskUserActionHandler() : KIO::WidgetsAskUserActionHandler() {};
    VirtualKIOWidgetsAskUserActionHandler(QObject* parent) : KIO::WidgetsAskUserActionHandler(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kio__widgetsaskuseractionhandler_metaobject_callback) {
            QMetaObject* callback_ret = kio__widgetsaskuseractionhandler_metaobject_callback(this);
            return callback_ret;
        }
        return KIO__WidgetsAskUserActionHandler::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__widgetsaskuseractionhandler_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kio__widgetsaskuseractionhandler_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__WidgetsAskUserActionHandler::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__widgetsaskuseractionhandler_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kio__widgetsaskuseractionhandler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__WidgetsAskUserActionHandler::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void askUserRename(KJob* job, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest, const QDateTime& mtimeSrc, const QDateTime& mtimeDest) override {
        if (kio__widgetsaskuseractionhandler_askuserrename_callback) {
            KJob* cbval1 = job;
            const auto title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            auto title_str_len = title_b.length();
            const char* title_str = static_cast<const char*>(malloc(title_str_len + 1));
            memcpy((void*)title_str, title_b.data(), title_str_len);
            ((char*)title_str)[title_str_len] = '\0';
            const char* cbval2 = title_str;
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval3 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval4 = const_cast<QUrl*>(&dest_ret);
            int cbval5 = static_cast<int>(options);
            unsigned long long cbval6 = static_cast<unsigned long long>(sizeSrc);
            unsigned long long cbval7 = static_cast<unsigned long long>(sizeDest);
            const QDateTime& ctimeSrc_ret = ctimeSrc;
            // Cast returned reference into pointer
            QDateTime* cbval8 = const_cast<QDateTime*>(&ctimeSrc_ret);
            const QDateTime& ctimeDest_ret = ctimeDest;
            // Cast returned reference into pointer
            QDateTime* cbval9 = const_cast<QDateTime*>(&ctimeDest_ret);
            const QDateTime& mtimeSrc_ret = mtimeSrc;
            // Cast returned reference into pointer
            QDateTime* cbval10 = const_cast<QDateTime*>(&mtimeSrc_ret);
            const QDateTime& mtimeDest_ret = mtimeDest;
            // Cast returned reference into pointer
            QDateTime* cbval11 = const_cast<QDateTime*>(&mtimeDest_ret);
            kio__widgetsaskuseractionhandler_askuserrename_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8, cbval9, cbval10, cbval11);
            libqt_free(title_str);
            return;
        }
        KIO__WidgetsAskUserActionHandler::askUserRename(job, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest, mtimeSrc, mtimeDest);
    }

    // Virtual method for C ABI access and custom callback
    virtual void askUserSkip(KJob* job, KIO::SkipDialog_Options options, const QString& error_text) override {
        if (kio__widgetsaskuseractionhandler_askuserskip_callback) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(options);
            const auto error_text_ret = error_text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray error_text_b = error_text_ret.toUtf8();
            auto error_text_str_len = error_text_b.length();
            const char* error_text_str = static_cast<const char*>(malloc(error_text_str_len + 1));
            memcpy((void*)error_text_str, error_text_b.data(), error_text_str_len);
            ((char*)error_text_str)[error_text_str_len] = '\0';
            const char* cbval3 = error_text_str;
            kio__widgetsaskuseractionhandler_askuserskip_callback(this, cbval1, cbval2, cbval3);
            libqt_free(error_text_str);
            return;
        }
        KIO__WidgetsAskUserActionHandler::askUserSkip(job, options, error_text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void askUserDelete(const QList<QUrl>& urls, KIO::AskUserActionInterface::DeletionType deletionType, KIO::AskUserActionInterface::ConfirmationType confirmationType, QWidget* parent) override {
        if (kio__widgetsaskuseractionhandler_askuserdelete_callback) {
            const QList<QUrl>& urls_ret = urls;
            // Convert QList<> from C++ memory to manually-managed C memory
            QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size())));
            for (qsizetype i = 0; i < urls_ret.size(); ++i) {
                urls_arr[i] = new QUrl(urls_ret[i]);
            }
            libqt_list urls_out;
            urls_out.len = urls_ret.size();
            urls_out.data = static_cast<void*>(urls_arr);
            libqt_list /* of QUrl* */ cbval1 = urls_out;
            int cbval2 = static_cast<int>(deletionType);
            int cbval3 = static_cast<int>(confirmationType);
            QWidget* cbval4 = parent;
            kio__widgetsaskuseractionhandler_askuserdelete_callback(this, cbval1, cbval2, cbval3, cbval4);
            free(urls_arr);
            return;
        }
        KIO__WidgetsAskUserActionHandler::askUserDelete(urls, deletionType, confirmationType, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUserMessageBox(KIO::AskUserActionInterface::MessageDialogType typeVal, const QString& text, const QString& title, const QString& primaryActionText, const QString& secondaryActionText, const QString& primaryActionIconName, const QString& secondaryActionIconName, const QString& dontAskAgainName, const QString& details, QWidget* parent) override {
        if (kio__widgetsaskuseractionhandler_requestusermessagebox_callback) {
            int cbval1 = static_cast<int>(typeVal);
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval2 = text_str;
            const auto title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            auto title_str_len = title_b.length();
            const char* title_str = static_cast<const char*>(malloc(title_str_len + 1));
            memcpy((void*)title_str, title_b.data(), title_str_len);
            ((char*)title_str)[title_str_len] = '\0';
            const char* cbval3 = title_str;
            const auto primaryActionText_ret = primaryActionText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray primaryActionText_b = primaryActionText_ret.toUtf8();
            auto primaryActionText_str_len = primaryActionText_b.length();
            const char* primaryActionText_str = static_cast<const char*>(malloc(primaryActionText_str_len + 1));
            memcpy((void*)primaryActionText_str, primaryActionText_b.data(), primaryActionText_str_len);
            ((char*)primaryActionText_str)[primaryActionText_str_len] = '\0';
            const char* cbval4 = primaryActionText_str;
            const auto secondaryActionText_ret = secondaryActionText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray secondaryActionText_b = secondaryActionText_ret.toUtf8();
            auto secondaryActionText_str_len = secondaryActionText_b.length();
            const char* secondaryActionText_str = static_cast<const char*>(malloc(secondaryActionText_str_len + 1));
            memcpy((void*)secondaryActionText_str, secondaryActionText_b.data(), secondaryActionText_str_len);
            ((char*)secondaryActionText_str)[secondaryActionText_str_len] = '\0';
            const char* cbval5 = secondaryActionText_str;
            const auto primaryActionIconName_ret = primaryActionIconName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray primaryActionIconName_b = primaryActionIconName_ret.toUtf8();
            auto primaryActionIconName_str_len = primaryActionIconName_b.length();
            const char* primaryActionIconName_str = static_cast<const char*>(malloc(primaryActionIconName_str_len + 1));
            memcpy((void*)primaryActionIconName_str, primaryActionIconName_b.data(), primaryActionIconName_str_len);
            ((char*)primaryActionIconName_str)[primaryActionIconName_str_len] = '\0';
            const char* cbval6 = primaryActionIconName_str;
            const auto secondaryActionIconName_ret = secondaryActionIconName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray secondaryActionIconName_b = secondaryActionIconName_ret.toUtf8();
            auto secondaryActionIconName_str_len = secondaryActionIconName_b.length();
            const char* secondaryActionIconName_str = static_cast<const char*>(malloc(secondaryActionIconName_str_len + 1));
            memcpy((void*)secondaryActionIconName_str, secondaryActionIconName_b.data(), secondaryActionIconName_str_len);
            ((char*)secondaryActionIconName_str)[secondaryActionIconName_str_len] = '\0';
            const char* cbval7 = secondaryActionIconName_str;
            const auto dontAskAgainName_ret = dontAskAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dontAskAgainName_b = dontAskAgainName_ret.toUtf8();
            auto dontAskAgainName_str_len = dontAskAgainName_b.length();
            const char* dontAskAgainName_str = static_cast<const char*>(malloc(dontAskAgainName_str_len + 1));
            memcpy((void*)dontAskAgainName_str, dontAskAgainName_b.data(), dontAskAgainName_str_len);
            ((char*)dontAskAgainName_str)[dontAskAgainName_str_len] = '\0';
            const char* cbval8 = dontAskAgainName_str;
            const auto details_ret = details;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray details_b = details_ret.toUtf8();
            auto details_str_len = details_b.length();
            const char* details_str = static_cast<const char*>(malloc(details_str_len + 1));
            memcpy((void*)details_str, details_b.data(), details_str_len);
            ((char*)details_str)[details_str_len] = '\0';
            const char* cbval9 = details_str;
            QWidget* cbval10 = parent;
            kio__widgetsaskuseractionhandler_requestusermessagebox_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8, cbval9, cbval10);
            libqt_free(text_str);
            libqt_free(title_str);
            libqt_free(primaryActionText_str);
            libqt_free(secondaryActionText_str);
            libqt_free(primaryActionIconName_str);
            libqt_free(secondaryActionIconName_str);
            libqt_free(dontAskAgainName_str);
            libqt_free(details_str);
            return;
        }
        KIO__WidgetsAskUserActionHandler::requestUserMessageBox(typeVal, text, title, primaryActionText, secondaryActionText, primaryActionIconName, secondaryActionIconName, dontAskAgainName, details, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void askIgnoreSslErrors(const QMap<QString, QVariant>& sslErrorData, QWidget* parent) override {
        if (kio__widgetsaskuseractionhandler_askignoresslerrors_callback) {
            const QMap<QString, QVariant>& sslErrorData_ret = sslErrorData;
            // Convert QMap<> from C++ memory to manually-managed C memory
            libqt_string* sslErrorData_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * sslErrorData_ret.size()));
            QVariant** sslErrorData_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * sslErrorData_ret.size()));
            int sslErrorData_ctr = 0;
            for (auto sslErrorData_itr = sslErrorData_ret.keyValueBegin(); sslErrorData_itr != sslErrorData_ret.keyValueEnd(); ++sslErrorData_itr) {
                auto sslErrorData_mapkey_ret = sslErrorData_itr->first;
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray sslErrorData_mapkey_b = sslErrorData_mapkey_ret.toUtf8();
                libqt_string sslErrorData_mapkey_str;
                sslErrorData_mapkey_str.len = sslErrorData_mapkey_b.length();
                sslErrorData_mapkey_str.data = static_cast<const char*>(malloc(sslErrorData_mapkey_str.len + 1));
                memcpy((void*)sslErrorData_mapkey_str.data, sslErrorData_mapkey_b.data(), sslErrorData_mapkey_str.len);
                ((char*)sslErrorData_mapkey_str.data)[sslErrorData_mapkey_str.len] = '\0';
                sslErrorData_karr[sslErrorData_ctr] = sslErrorData_mapkey_str;
                sslErrorData_varr[sslErrorData_ctr] = new QVariant(sslErrorData_itr->second);
                sslErrorData_ctr++;
            }
            libqt_map sslErrorData_out;
            sslErrorData_out.len = sslErrorData_ret.size();
            sslErrorData_out.keys = static_cast<void*>(sslErrorData_karr);
            sslErrorData_out.values = static_cast<void*>(sslErrorData_varr);
            libqt_map /* of libqt_string to QVariant* */ cbval1 = sslErrorData_out;
            QWidget* cbval2 = parent;
            kio__widgetsaskuseractionhandler_askignoresslerrors_callback(this, cbval1, cbval2);
            return;
        }
        KIO__WidgetsAskUserActionHandler::askIgnoreSslErrors(sslErrorData, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__widgetsaskuseractionhandler_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kio__widgetsaskuseractionhandler_event_callback(this, cbval1);
            return callback_ret;
        }
        return KIO__WidgetsAskUserActionHandler::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__widgetsaskuseractionhandler_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kio__widgetsaskuseractionhandler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__WidgetsAskUserActionHandler::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__widgetsaskuseractionhandler_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kio__widgetsaskuseractionhandler_timerevent_callback(this, cbval1);
            return;
        }
        KIO__WidgetsAskUserActionHandler::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__widgetsaskuseractionhandler_childevent_callback) {
            QChildEvent* cbval1 = event;
            kio__widgetsaskuseractionhandler_childevent_callback(this, cbval1);
            return;
        }
        KIO__WidgetsAskUserActionHandler::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__widgetsaskuseractionhandler_customevent_callback) {
            QEvent* cbval1 = event;
            kio__widgetsaskuseractionhandler_customevent_callback(this, cbval1);
            return;
        }
        KIO__WidgetsAskUserActionHandler::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__widgetsaskuseractionhandler_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__widgetsaskuseractionhandler_connectnotify_callback(this, cbval1);
            return;
        }
        KIO__WidgetsAskUserActionHandler::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__widgetsaskuseractionhandler_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kio__widgetsaskuseractionhandler_disconnectnotify_callback(this, cbval1);
            return;
        }
        KIO__WidgetsAskUserActionHandler::disconnectNotify(signal);
    }

    // Friend functions
    friend void KIO__WidgetsAskUserActionHandler_SuperTimerEvent(KIO::WidgetsAskUserActionHandler* self, QTimerEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_SuperChildEvent(KIO::WidgetsAskUserActionHandler* self, QChildEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_SuperCustomEvent(KIO::WidgetsAskUserActionHandler* self, QEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_SuperConnectNotify(KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
    friend void KIO__WidgetsAskUserActionHandler_SuperDisconnectNotify(KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
};

#endif
