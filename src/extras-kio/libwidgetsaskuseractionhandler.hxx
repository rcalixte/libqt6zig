#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALWIDGETSASKUSERACTIONHANDLER_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALWIDGETSASKUSERACTIONHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::WidgetsAskUserActionHandler so that we can call protected methods
class VirtualKIOWidgetsAskUserActionHandler final : public KIO::WidgetsAskUserActionHandler {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOWidgetsAskUserActionHandler = true;

    // Virtual class public types (including callbacks)
    using KIO__WidgetsAskUserActionHandler_Metacall_Callback = int (*)(KIO__WidgetsAskUserActionHandler*, int, int, void**);
    using KIO__WidgetsAskUserActionHandler_AskUserRename_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, KJob*, libqt_string, QUrl*, QUrl*, int, unsigned long long, unsigned long long, QDateTime*, QDateTime*, QDateTime*, QDateTime*);
    using KIO__WidgetsAskUserActionHandler_AskUserSkip_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, KJob*, int, libqt_string);
    using KIO__WidgetsAskUserActionHandler_AskUserDelete_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, libqt_list /* of QUrl* */, int, int, QWidget*);
    using KIO__WidgetsAskUserActionHandler_RequestUserMessageBox_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, int, libqt_string, libqt_string, libqt_string, libqt_string, libqt_string, libqt_string, libqt_string, libqt_string, QWidget*);
    using KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, libqt_map /* of libqt_string to QVariant* */, QWidget*);
    using KIO__WidgetsAskUserActionHandler_Event_Callback = bool (*)(KIO__WidgetsAskUserActionHandler*, QEvent*);
    using KIO__WidgetsAskUserActionHandler_EventFilter_Callback = bool (*)(KIO__WidgetsAskUserActionHandler*, QObject*, QEvent*);
    using KIO__WidgetsAskUserActionHandler_TimerEvent_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QTimerEvent*);
    using KIO__WidgetsAskUserActionHandler_ChildEvent_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QChildEvent*);
    using KIO__WidgetsAskUserActionHandler_CustomEvent_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QEvent*);
    using KIO__WidgetsAskUserActionHandler_ConnectNotify_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QMetaMethod*);
    using KIO__WidgetsAskUserActionHandler_DisconnectNotify_Callback = void (*)(KIO__WidgetsAskUserActionHandler*, QMetaMethod*);
    using KIO__WidgetsAskUserActionHandler_Sender_Callback = QObject* (*)();
    using KIO__WidgetsAskUserActionHandler_SenderSignalIndex_Callback = int (*)();
    using KIO__WidgetsAskUserActionHandler_Receivers_Callback = int (*)(const KIO__WidgetsAskUserActionHandler*, const char*);
    using KIO__WidgetsAskUserActionHandler_IsSignalConnected_Callback = bool (*)(const KIO__WidgetsAskUserActionHandler*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KIO__WidgetsAskUserActionHandler_Sender_Callback kio__widgetsaskuseractionhandler_sender_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_SenderSignalIndex_Callback kio__widgetsaskuseractionhandler_sendersignalindex_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_Receivers_Callback kio__widgetsaskuseractionhandler_receivers_callback = nullptr;
    KIO__WidgetsAskUserActionHandler_IsSignalConnected_Callback kio__widgetsaskuseractionhandler_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__widgetsaskuseractionhandler_metacall_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_askuserrename_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_askuserskip_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_askuserdelete_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_requestusermessagebox_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_askignoresslerrors_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_event_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_eventfilter_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_timerevent_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_childevent_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_customevent_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_connectnotify_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_disconnectnotify_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_sender_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_sendersignalindex_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_receivers_isbase = false;
    mutable bool kio__widgetsaskuseractionhandler_issignalconnected_isbase = false;

  public:
    VirtualKIOWidgetsAskUserActionHandler() : KIO::WidgetsAskUserActionHandler() {};
    VirtualKIOWidgetsAskUserActionHandler(QObject* parent) : KIO::WidgetsAskUserActionHandler(parent) {};

    ~VirtualKIOWidgetsAskUserActionHandler() {
        kio__widgetsaskuseractionhandler_metacall_callback = nullptr;
        kio__widgetsaskuseractionhandler_askuserrename_callback = nullptr;
        kio__widgetsaskuseractionhandler_askuserskip_callback = nullptr;
        kio__widgetsaskuseractionhandler_askuserdelete_callback = nullptr;
        kio__widgetsaskuseractionhandler_requestusermessagebox_callback = nullptr;
        kio__widgetsaskuseractionhandler_askignoresslerrors_callback = nullptr;
        kio__widgetsaskuseractionhandler_event_callback = nullptr;
        kio__widgetsaskuseractionhandler_eventfilter_callback = nullptr;
        kio__widgetsaskuseractionhandler_timerevent_callback = nullptr;
        kio__widgetsaskuseractionhandler_childevent_callback = nullptr;
        kio__widgetsaskuseractionhandler_customevent_callback = nullptr;
        kio__widgetsaskuseractionhandler_connectnotify_callback = nullptr;
        kio__widgetsaskuseractionhandler_disconnectnotify_callback = nullptr;
        kio__widgetsaskuseractionhandler_sender_callback = nullptr;
        kio__widgetsaskuseractionhandler_sendersignalindex_callback = nullptr;
        kio__widgetsaskuseractionhandler_receivers_callback = nullptr;
        kio__widgetsaskuseractionhandler_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__WidgetsAskUserActionHandler_Metacall_Callback(KIO__WidgetsAskUserActionHandler_Metacall_Callback cb) { kio__widgetsaskuseractionhandler_metacall_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_AskUserRename_Callback(KIO__WidgetsAskUserActionHandler_AskUserRename_Callback cb) { kio__widgetsaskuseractionhandler_askuserrename_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_AskUserSkip_Callback(KIO__WidgetsAskUserActionHandler_AskUserSkip_Callback cb) { kio__widgetsaskuseractionhandler_askuserskip_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_AskUserDelete_Callback(KIO__WidgetsAskUserActionHandler_AskUserDelete_Callback cb) { kio__widgetsaskuseractionhandler_askuserdelete_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_RequestUserMessageBox_Callback(KIO__WidgetsAskUserActionHandler_RequestUserMessageBox_Callback cb) { kio__widgetsaskuseractionhandler_requestusermessagebox_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_Callback(KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_Callback cb) { kio__widgetsaskuseractionhandler_askignoresslerrors_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_Event_Callback(KIO__WidgetsAskUserActionHandler_Event_Callback cb) { kio__widgetsaskuseractionhandler_event_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_EventFilter_Callback(KIO__WidgetsAskUserActionHandler_EventFilter_Callback cb) { kio__widgetsaskuseractionhandler_eventfilter_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_TimerEvent_Callback(KIO__WidgetsAskUserActionHandler_TimerEvent_Callback cb) { kio__widgetsaskuseractionhandler_timerevent_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_ChildEvent_Callback(KIO__WidgetsAskUserActionHandler_ChildEvent_Callback cb) { kio__widgetsaskuseractionhandler_childevent_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_CustomEvent_Callback(KIO__WidgetsAskUserActionHandler_CustomEvent_Callback cb) { kio__widgetsaskuseractionhandler_customevent_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_ConnectNotify_Callback(KIO__WidgetsAskUserActionHandler_ConnectNotify_Callback cb) { kio__widgetsaskuseractionhandler_connectnotify_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_DisconnectNotify_Callback(KIO__WidgetsAskUserActionHandler_DisconnectNotify_Callback cb) { kio__widgetsaskuseractionhandler_disconnectnotify_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_Sender_Callback(KIO__WidgetsAskUserActionHandler_Sender_Callback cb) { kio__widgetsaskuseractionhandler_sender_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_SenderSignalIndex_Callback(KIO__WidgetsAskUserActionHandler_SenderSignalIndex_Callback cb) { kio__widgetsaskuseractionhandler_sendersignalindex_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_Receivers_Callback(KIO__WidgetsAskUserActionHandler_Receivers_Callback cb) { kio__widgetsaskuseractionhandler_receivers_callback = cb; }
    inline void setKIO__WidgetsAskUserActionHandler_IsSignalConnected_Callback(KIO__WidgetsAskUserActionHandler_IsSignalConnected_Callback cb) { kio__widgetsaskuseractionhandler_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__WidgetsAskUserActionHandler_Metacall_IsBase(bool value) const { kio__widgetsaskuseractionhandler_metacall_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_AskUserRename_IsBase(bool value) const { kio__widgetsaskuseractionhandler_askuserrename_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_AskUserSkip_IsBase(bool value) const { kio__widgetsaskuseractionhandler_askuserskip_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_AskUserDelete_IsBase(bool value) const { kio__widgetsaskuseractionhandler_askuserdelete_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_RequestUserMessageBox_IsBase(bool value) const { kio__widgetsaskuseractionhandler_requestusermessagebox_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors_IsBase(bool value) const { kio__widgetsaskuseractionhandler_askignoresslerrors_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_Event_IsBase(bool value) const { kio__widgetsaskuseractionhandler_event_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_EventFilter_IsBase(bool value) const { kio__widgetsaskuseractionhandler_eventfilter_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_TimerEvent_IsBase(bool value) const { kio__widgetsaskuseractionhandler_timerevent_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_ChildEvent_IsBase(bool value) const { kio__widgetsaskuseractionhandler_childevent_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_CustomEvent_IsBase(bool value) const { kio__widgetsaskuseractionhandler_customevent_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_ConnectNotify_IsBase(bool value) const { kio__widgetsaskuseractionhandler_connectnotify_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_DisconnectNotify_IsBase(bool value) const { kio__widgetsaskuseractionhandler_disconnectnotify_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_Sender_IsBase(bool value) const { kio__widgetsaskuseractionhandler_sender_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_SenderSignalIndex_IsBase(bool value) const { kio__widgetsaskuseractionhandler_sendersignalindex_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_Receivers_IsBase(bool value) const { kio__widgetsaskuseractionhandler_receivers_isbase = value; }
    inline void setKIO__WidgetsAskUserActionHandler_IsSignalConnected_IsBase(bool value) const { kio__widgetsaskuseractionhandler_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__widgetsaskuseractionhandler_metacall_isbase) {
            kio__widgetsaskuseractionhandler_metacall_isbase = false;
            return KIO__WidgetsAskUserActionHandler::qt_metacall(param1, param2, param3);
        } else if (kio__widgetsaskuseractionhandler_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__widgetsaskuseractionhandler_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__WidgetsAskUserActionHandler::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void askUserRename(KJob* job, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest, const QDateTime& mtimeSrc, const QDateTime& mtimeDest) override {
        if (kio__widgetsaskuseractionhandler_askuserrename_isbase) {
            kio__widgetsaskuseractionhandler_askuserrename_isbase = false;
            KIO__WidgetsAskUserActionHandler::askUserRename(job, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest, mtimeSrc, mtimeDest);
        } else if (kio__widgetsaskuseractionhandler_askuserrename_callback != nullptr) {
            KJob* cbval1 = job;
            const QString title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            libqt_string title_str;
            title_str.len = title_b.length();
            title_str.data = static_cast<const char*>(malloc(title_str.len + 1));
            memcpy((void*)title_str.data, title_b.data(), title_str.len);
            ((char*)title_str.data)[title_str.len] = '\0';
            libqt_string cbval2 = title_str;
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
        } else {
            KIO__WidgetsAskUserActionHandler::askUserRename(job, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest, mtimeSrc, mtimeDest);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void askUserSkip(KJob* job, KIO::SkipDialog_Options options, const QString& error_text) override {
        if (kio__widgetsaskuseractionhandler_askuserskip_isbase) {
            kio__widgetsaskuseractionhandler_askuserskip_isbase = false;
            KIO__WidgetsAskUserActionHandler::askUserSkip(job, options, error_text);
        } else if (kio__widgetsaskuseractionhandler_askuserskip_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(options);
            const QString error_text_ret = error_text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray error_text_b = error_text_ret.toUtf8();
            libqt_string error_text_str;
            error_text_str.len = error_text_b.length();
            error_text_str.data = static_cast<const char*>(malloc(error_text_str.len + 1));
            memcpy((void*)error_text_str.data, error_text_b.data(), error_text_str.len);
            ((char*)error_text_str.data)[error_text_str.len] = '\0';
            libqt_string cbval3 = error_text_str;

            kio__widgetsaskuseractionhandler_askuserskip_callback(this, cbval1, cbval2, cbval3);
        } else {
            KIO__WidgetsAskUserActionHandler::askUserSkip(job, options, error_text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void askUserDelete(const QList<QUrl>& urls, KIO::AskUserActionInterface::DeletionType deletionType, KIO::AskUserActionInterface::ConfirmationType confirmationType, QWidget* parent) override {
        if (kio__widgetsaskuseractionhandler_askuserdelete_isbase) {
            kio__widgetsaskuseractionhandler_askuserdelete_isbase = false;
            KIO__WidgetsAskUserActionHandler::askUserDelete(urls, deletionType, confirmationType, parent);
        } else if (kio__widgetsaskuseractionhandler_askuserdelete_callback != nullptr) {
            const QList<QUrl>& urls_ret = urls;
            // Convert QList<> from C++ memory to manually-managed C memory
            QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size() + 1)));
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
        } else {
            KIO__WidgetsAskUserActionHandler::askUserDelete(urls, deletionType, confirmationType, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void requestUserMessageBox(KIO::AskUserActionInterface::MessageDialogType typeVal, const QString& text, const QString& title, const QString& primaryActionText, const QString& secondaryActionText, const QString& primaryActionIconName, const QString& secondaryActionIconName, const QString& dontAskAgainName, const QString& details, QWidget* parent) override {
        if (kio__widgetsaskuseractionhandler_requestusermessagebox_isbase) {
            kio__widgetsaskuseractionhandler_requestusermessagebox_isbase = false;
            KIO__WidgetsAskUserActionHandler::requestUserMessageBox(typeVal, text, title, primaryActionText, secondaryActionText, primaryActionIconName, secondaryActionIconName, dontAskAgainName, details, parent);
        } else if (kio__widgetsaskuseractionhandler_requestusermessagebox_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval2 = text_str;
            const QString title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            libqt_string title_str;
            title_str.len = title_b.length();
            title_str.data = static_cast<const char*>(malloc(title_str.len + 1));
            memcpy((void*)title_str.data, title_b.data(), title_str.len);
            ((char*)title_str.data)[title_str.len] = '\0';
            libqt_string cbval3 = title_str;
            const QString primaryActionText_ret = primaryActionText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray primaryActionText_b = primaryActionText_ret.toUtf8();
            libqt_string primaryActionText_str;
            primaryActionText_str.len = primaryActionText_b.length();
            primaryActionText_str.data = static_cast<const char*>(malloc(primaryActionText_str.len + 1));
            memcpy((void*)primaryActionText_str.data, primaryActionText_b.data(), primaryActionText_str.len);
            ((char*)primaryActionText_str.data)[primaryActionText_str.len] = '\0';
            libqt_string cbval4 = primaryActionText_str;
            const QString secondaryActionText_ret = secondaryActionText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray secondaryActionText_b = secondaryActionText_ret.toUtf8();
            libqt_string secondaryActionText_str;
            secondaryActionText_str.len = secondaryActionText_b.length();
            secondaryActionText_str.data = static_cast<const char*>(malloc(secondaryActionText_str.len + 1));
            memcpy((void*)secondaryActionText_str.data, secondaryActionText_b.data(), secondaryActionText_str.len);
            ((char*)secondaryActionText_str.data)[secondaryActionText_str.len] = '\0';
            libqt_string cbval5 = secondaryActionText_str;
            const QString primaryActionIconName_ret = primaryActionIconName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray primaryActionIconName_b = primaryActionIconName_ret.toUtf8();
            libqt_string primaryActionIconName_str;
            primaryActionIconName_str.len = primaryActionIconName_b.length();
            primaryActionIconName_str.data = static_cast<const char*>(malloc(primaryActionIconName_str.len + 1));
            memcpy((void*)primaryActionIconName_str.data, primaryActionIconName_b.data(), primaryActionIconName_str.len);
            ((char*)primaryActionIconName_str.data)[primaryActionIconName_str.len] = '\0';
            libqt_string cbval6 = primaryActionIconName_str;
            const QString secondaryActionIconName_ret = secondaryActionIconName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray secondaryActionIconName_b = secondaryActionIconName_ret.toUtf8();
            libqt_string secondaryActionIconName_str;
            secondaryActionIconName_str.len = secondaryActionIconName_b.length();
            secondaryActionIconName_str.data = static_cast<const char*>(malloc(secondaryActionIconName_str.len + 1));
            memcpy((void*)secondaryActionIconName_str.data, secondaryActionIconName_b.data(), secondaryActionIconName_str.len);
            ((char*)secondaryActionIconName_str.data)[secondaryActionIconName_str.len] = '\0';
            libqt_string cbval7 = secondaryActionIconName_str;
            const QString dontAskAgainName_ret = dontAskAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dontAskAgainName_b = dontAskAgainName_ret.toUtf8();
            libqt_string dontAskAgainName_str;
            dontAskAgainName_str.len = dontAskAgainName_b.length();
            dontAskAgainName_str.data = static_cast<const char*>(malloc(dontAskAgainName_str.len + 1));
            memcpy((void*)dontAskAgainName_str.data, dontAskAgainName_b.data(), dontAskAgainName_str.len);
            ((char*)dontAskAgainName_str.data)[dontAskAgainName_str.len] = '\0';
            libqt_string cbval8 = dontAskAgainName_str;
            const QString details_ret = details;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray details_b = details_ret.toUtf8();
            libqt_string details_str;
            details_str.len = details_b.length();
            details_str.data = static_cast<const char*>(malloc(details_str.len + 1));
            memcpy((void*)details_str.data, details_b.data(), details_str.len);
            ((char*)details_str.data)[details_str.len] = '\0';
            libqt_string cbval9 = details_str;
            QWidget* cbval10 = parent;

            kio__widgetsaskuseractionhandler_requestusermessagebox_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7, cbval8, cbval9, cbval10);
        } else {
            KIO__WidgetsAskUserActionHandler::requestUserMessageBox(typeVal, text, title, primaryActionText, secondaryActionText, primaryActionIconName, secondaryActionIconName, dontAskAgainName, details, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void askIgnoreSslErrors(const QMap<QString, QVariant>& sslErrorData, QWidget* parent) override {
        if (kio__widgetsaskuseractionhandler_askignoresslerrors_isbase) {
            kio__widgetsaskuseractionhandler_askignoresslerrors_isbase = false;
            KIO__WidgetsAskUserActionHandler::askIgnoreSslErrors(sslErrorData, parent);
        } else if (kio__widgetsaskuseractionhandler_askignoresslerrors_callback != nullptr) {
            const QMap<QString, QVariant>& sslErrorData_ret = sslErrorData;
            // Convert QMap<> from C++ memory to manually-managed C memory
            libqt_string* sslErrorData_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * sslErrorData_ret.size()));
            QVariant** sslErrorData_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * sslErrorData_ret.size()));
            int sslErrorData_ctr = 0;
            for (auto sslErrorData_itr = sslErrorData_ret.keyValueBegin(); sslErrorData_itr != sslErrorData_ret.keyValueEnd(); ++sslErrorData_itr) {
                QString sslErrorData_mapkey_ret = sslErrorData_itr->first;
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
        } else {
            KIO__WidgetsAskUserActionHandler::askIgnoreSslErrors(sslErrorData, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__widgetsaskuseractionhandler_event_isbase) {
            kio__widgetsaskuseractionhandler_event_isbase = false;
            return KIO__WidgetsAskUserActionHandler::event(event);
        } else if (kio__widgetsaskuseractionhandler_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__widgetsaskuseractionhandler_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__WidgetsAskUserActionHandler::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__widgetsaskuseractionhandler_eventfilter_isbase) {
            kio__widgetsaskuseractionhandler_eventfilter_isbase = false;
            return KIO__WidgetsAskUserActionHandler::eventFilter(watched, event);
        } else if (kio__widgetsaskuseractionhandler_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__widgetsaskuseractionhandler_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__WidgetsAskUserActionHandler::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__widgetsaskuseractionhandler_timerevent_isbase) {
            kio__widgetsaskuseractionhandler_timerevent_isbase = false;
            KIO__WidgetsAskUserActionHandler::timerEvent(event);
        } else if (kio__widgetsaskuseractionhandler_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__widgetsaskuseractionhandler_timerevent_callback(this, cbval1);
        } else {
            KIO__WidgetsAskUserActionHandler::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__widgetsaskuseractionhandler_childevent_isbase) {
            kio__widgetsaskuseractionhandler_childevent_isbase = false;
            KIO__WidgetsAskUserActionHandler::childEvent(event);
        } else if (kio__widgetsaskuseractionhandler_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__widgetsaskuseractionhandler_childevent_callback(this, cbval1);
        } else {
            KIO__WidgetsAskUserActionHandler::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__widgetsaskuseractionhandler_customevent_isbase) {
            kio__widgetsaskuseractionhandler_customevent_isbase = false;
            KIO__WidgetsAskUserActionHandler::customEvent(event);
        } else if (kio__widgetsaskuseractionhandler_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__widgetsaskuseractionhandler_customevent_callback(this, cbval1);
        } else {
            KIO__WidgetsAskUserActionHandler::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__widgetsaskuseractionhandler_connectnotify_isbase) {
            kio__widgetsaskuseractionhandler_connectnotify_isbase = false;
            KIO__WidgetsAskUserActionHandler::connectNotify(signal);
        } else if (kio__widgetsaskuseractionhandler_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__widgetsaskuseractionhandler_connectnotify_callback(this, cbval1);
        } else {
            KIO__WidgetsAskUserActionHandler::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__widgetsaskuseractionhandler_disconnectnotify_isbase) {
            kio__widgetsaskuseractionhandler_disconnectnotify_isbase = false;
            KIO__WidgetsAskUserActionHandler::disconnectNotify(signal);
        } else if (kio__widgetsaskuseractionhandler_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__widgetsaskuseractionhandler_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__WidgetsAskUserActionHandler::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__widgetsaskuseractionhandler_sender_isbase) {
            kio__widgetsaskuseractionhandler_sender_isbase = false;
            return KIO__WidgetsAskUserActionHandler::sender();
        } else if (kio__widgetsaskuseractionhandler_sender_callback != nullptr) {
            QObject* callback_ret = kio__widgetsaskuseractionhandler_sender_callback();
            return callback_ret;
        } else {
            return KIO__WidgetsAskUserActionHandler::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__widgetsaskuseractionhandler_sendersignalindex_isbase) {
            kio__widgetsaskuseractionhandler_sendersignalindex_isbase = false;
            return KIO__WidgetsAskUserActionHandler::senderSignalIndex();
        } else if (kio__widgetsaskuseractionhandler_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__widgetsaskuseractionhandler_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__WidgetsAskUserActionHandler::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__widgetsaskuseractionhandler_receivers_isbase) {
            kio__widgetsaskuseractionhandler_receivers_isbase = false;
            return KIO__WidgetsAskUserActionHandler::receivers(signal);
        } else if (kio__widgetsaskuseractionhandler_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__widgetsaskuseractionhandler_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__WidgetsAskUserActionHandler::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__widgetsaskuseractionhandler_issignalconnected_isbase) {
            kio__widgetsaskuseractionhandler_issignalconnected_isbase = false;
            return KIO__WidgetsAskUserActionHandler::isSignalConnected(signal);
        } else if (kio__widgetsaskuseractionhandler_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__widgetsaskuseractionhandler_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__WidgetsAskUserActionHandler::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KIO__WidgetsAskUserActionHandler_TimerEvent(KIO::WidgetsAskUserActionHandler* self, QTimerEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_QBaseTimerEvent(KIO::WidgetsAskUserActionHandler* self, QTimerEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_ChildEvent(KIO::WidgetsAskUserActionHandler* self, QChildEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_QBaseChildEvent(KIO::WidgetsAskUserActionHandler* self, QChildEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_CustomEvent(KIO::WidgetsAskUserActionHandler* self, QEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_QBaseCustomEvent(KIO::WidgetsAskUserActionHandler* self, QEvent* event);
    friend void KIO__WidgetsAskUserActionHandler_ConnectNotify(KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
    friend void KIO__WidgetsAskUserActionHandler_QBaseConnectNotify(KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
    friend void KIO__WidgetsAskUserActionHandler_DisconnectNotify(KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
    friend void KIO__WidgetsAskUserActionHandler_QBaseDisconnectNotify(KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
    friend QObject* KIO__WidgetsAskUserActionHandler_Sender(const KIO::WidgetsAskUserActionHandler* self);
    friend QObject* KIO__WidgetsAskUserActionHandler_QBaseSender(const KIO::WidgetsAskUserActionHandler* self);
    friend int KIO__WidgetsAskUserActionHandler_SenderSignalIndex(const KIO::WidgetsAskUserActionHandler* self);
    friend int KIO__WidgetsAskUserActionHandler_QBaseSenderSignalIndex(const KIO::WidgetsAskUserActionHandler* self);
    friend int KIO__WidgetsAskUserActionHandler_Receivers(const KIO::WidgetsAskUserActionHandler* self, const char* signal);
    friend int KIO__WidgetsAskUserActionHandler_QBaseReceivers(const KIO::WidgetsAskUserActionHandler* self, const char* signal);
    friend bool KIO__WidgetsAskUserActionHandler_IsSignalConnected(const KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
    friend bool KIO__WidgetsAskUserActionHandler_QBaseIsSignalConnected(const KIO::WidgetsAskUserActionHandler* self, const QMetaMethod* signal);
};

#endif
