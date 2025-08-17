#pragma once
#ifndef SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEPAGE_H
#define SRC_WEBENGINEC_LIBVIRTUALQWEBENGINEPAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEnginePage so that we can call protected methods
class VirtualQWebEnginePage final : public QWebEnginePage {

  public:
    // Virtual class boolean flag
    bool isVirtualQWebEnginePage = true;

    // Virtual class public types (including callbacks)
    using QWebEnginePage_Metacall_Callback = int (*)(QWebEnginePage*, int, int, void**);
    using QWebEnginePage_TriggerAction_Callback = void (*)(QWebEnginePage*, int, bool);
    using QWebEnginePage_Event_Callback = bool (*)(QWebEnginePage*, QEvent*);
    using QWebEnginePage_CreateWindow_Callback = QWebEnginePage* (*)(QWebEnginePage*, int);
    using QWebEnginePage_ChooseFiles_Callback = libqt_list /* of libqt_string */ (*)(QWebEnginePage*, int, libqt_list /* of libqt_string */, libqt_list /* of libqt_string */);
    using QWebEnginePage_JavaScriptAlert_Callback = void (*)(QWebEnginePage*, QUrl*, libqt_string);
    using QWebEnginePage_JavaScriptConfirm_Callback = bool (*)(QWebEnginePage*, QUrl*, libqt_string);
    using QWebEnginePage_JavaScriptConsoleMessage_Callback = void (*)(QWebEnginePage*, int, libqt_string, int, libqt_string);
    using QWebEnginePage_AcceptNavigationRequest_Callback = bool (*)(QWebEnginePage*, QUrl*, int, bool);
    using QWebEnginePage_EventFilter_Callback = bool (*)(QWebEnginePage*, QObject*, QEvent*);
    using QWebEnginePage_TimerEvent_Callback = void (*)(QWebEnginePage*, QTimerEvent*);
    using QWebEnginePage_ChildEvent_Callback = void (*)(QWebEnginePage*, QChildEvent*);
    using QWebEnginePage_CustomEvent_Callback = void (*)(QWebEnginePage*, QEvent*);
    using QWebEnginePage_ConnectNotify_Callback = void (*)(QWebEnginePage*, QMetaMethod*);
    using QWebEnginePage_DisconnectNotify_Callback = void (*)(QWebEnginePage*, QMetaMethod*);
    using QWebEnginePage_Sender_Callback = QObject* (*)();
    using QWebEnginePage_SenderSignalIndex_Callback = int (*)();
    using QWebEnginePage_Receivers_Callback = int (*)(const QWebEnginePage*, const char*);
    using QWebEnginePage_IsSignalConnected_Callback = bool (*)(const QWebEnginePage*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWebEnginePage_Metacall_Callback qwebenginepage_metacall_callback = nullptr;
    QWebEnginePage_TriggerAction_Callback qwebenginepage_triggeraction_callback = nullptr;
    QWebEnginePage_Event_Callback qwebenginepage_event_callback = nullptr;
    QWebEnginePage_CreateWindow_Callback qwebenginepage_createwindow_callback = nullptr;
    QWebEnginePage_ChooseFiles_Callback qwebenginepage_choosefiles_callback = nullptr;
    QWebEnginePage_JavaScriptAlert_Callback qwebenginepage_javascriptalert_callback = nullptr;
    QWebEnginePage_JavaScriptConfirm_Callback qwebenginepage_javascriptconfirm_callback = nullptr;
    QWebEnginePage_JavaScriptConsoleMessage_Callback qwebenginepage_javascriptconsolemessage_callback = nullptr;
    QWebEnginePage_AcceptNavigationRequest_Callback qwebenginepage_acceptnavigationrequest_callback = nullptr;
    QWebEnginePage_EventFilter_Callback qwebenginepage_eventfilter_callback = nullptr;
    QWebEnginePage_TimerEvent_Callback qwebenginepage_timerevent_callback = nullptr;
    QWebEnginePage_ChildEvent_Callback qwebenginepage_childevent_callback = nullptr;
    QWebEnginePage_CustomEvent_Callback qwebenginepage_customevent_callback = nullptr;
    QWebEnginePage_ConnectNotify_Callback qwebenginepage_connectnotify_callback = nullptr;
    QWebEnginePage_DisconnectNotify_Callback qwebenginepage_disconnectnotify_callback = nullptr;
    QWebEnginePage_Sender_Callback qwebenginepage_sender_callback = nullptr;
    QWebEnginePage_SenderSignalIndex_Callback qwebenginepage_sendersignalindex_callback = nullptr;
    QWebEnginePage_Receivers_Callback qwebenginepage_receivers_callback = nullptr;
    QWebEnginePage_IsSignalConnected_Callback qwebenginepage_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwebenginepage_metacall_isbase = false;
    mutable bool qwebenginepage_triggeraction_isbase = false;
    mutable bool qwebenginepage_event_isbase = false;
    mutable bool qwebenginepage_createwindow_isbase = false;
    mutable bool qwebenginepage_choosefiles_isbase = false;
    mutable bool qwebenginepage_javascriptalert_isbase = false;
    mutable bool qwebenginepage_javascriptconfirm_isbase = false;
    mutable bool qwebenginepage_javascriptconsolemessage_isbase = false;
    mutable bool qwebenginepage_acceptnavigationrequest_isbase = false;
    mutable bool qwebenginepage_eventfilter_isbase = false;
    mutable bool qwebenginepage_timerevent_isbase = false;
    mutable bool qwebenginepage_childevent_isbase = false;
    mutable bool qwebenginepage_customevent_isbase = false;
    mutable bool qwebenginepage_connectnotify_isbase = false;
    mutable bool qwebenginepage_disconnectnotify_isbase = false;
    mutable bool qwebenginepage_sender_isbase = false;
    mutable bool qwebenginepage_sendersignalindex_isbase = false;
    mutable bool qwebenginepage_receivers_isbase = false;
    mutable bool qwebenginepage_issignalconnected_isbase = false;

  public:
    VirtualQWebEnginePage() : QWebEnginePage() {};
    VirtualQWebEnginePage(QWebEngineProfile* profile) : QWebEnginePage(profile) {};
    VirtualQWebEnginePage(QObject* parent) : QWebEnginePage(parent) {};
    VirtualQWebEnginePage(QWebEngineProfile* profile, QObject* parent) : QWebEnginePage(profile, parent) {};

    ~VirtualQWebEnginePage() {
        qwebenginepage_metacall_callback = nullptr;
        qwebenginepage_triggeraction_callback = nullptr;
        qwebenginepage_event_callback = nullptr;
        qwebenginepage_createwindow_callback = nullptr;
        qwebenginepage_choosefiles_callback = nullptr;
        qwebenginepage_javascriptalert_callback = nullptr;
        qwebenginepage_javascriptconfirm_callback = nullptr;
        qwebenginepage_javascriptconsolemessage_callback = nullptr;
        qwebenginepage_acceptnavigationrequest_callback = nullptr;
        qwebenginepage_eventfilter_callback = nullptr;
        qwebenginepage_timerevent_callback = nullptr;
        qwebenginepage_childevent_callback = nullptr;
        qwebenginepage_customevent_callback = nullptr;
        qwebenginepage_connectnotify_callback = nullptr;
        qwebenginepage_disconnectnotify_callback = nullptr;
        qwebenginepage_sender_callback = nullptr;
        qwebenginepage_sendersignalindex_callback = nullptr;
        qwebenginepage_receivers_callback = nullptr;
        qwebenginepage_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQWebEnginePage_Metacall_Callback(QWebEnginePage_Metacall_Callback cb) { qwebenginepage_metacall_callback = cb; }
    inline void setQWebEnginePage_TriggerAction_Callback(QWebEnginePage_TriggerAction_Callback cb) { qwebenginepage_triggeraction_callback = cb; }
    inline void setQWebEnginePage_Event_Callback(QWebEnginePage_Event_Callback cb) { qwebenginepage_event_callback = cb; }
    inline void setQWebEnginePage_CreateWindow_Callback(QWebEnginePage_CreateWindow_Callback cb) { qwebenginepage_createwindow_callback = cb; }
    inline void setQWebEnginePage_ChooseFiles_Callback(QWebEnginePage_ChooseFiles_Callback cb) { qwebenginepage_choosefiles_callback = cb; }
    inline void setQWebEnginePage_JavaScriptAlert_Callback(QWebEnginePage_JavaScriptAlert_Callback cb) { qwebenginepage_javascriptalert_callback = cb; }
    inline void setQWebEnginePage_JavaScriptConfirm_Callback(QWebEnginePage_JavaScriptConfirm_Callback cb) { qwebenginepage_javascriptconfirm_callback = cb; }
    inline void setQWebEnginePage_JavaScriptConsoleMessage_Callback(QWebEnginePage_JavaScriptConsoleMessage_Callback cb) { qwebenginepage_javascriptconsolemessage_callback = cb; }
    inline void setQWebEnginePage_AcceptNavigationRequest_Callback(QWebEnginePage_AcceptNavigationRequest_Callback cb) { qwebenginepage_acceptnavigationrequest_callback = cb; }
    inline void setQWebEnginePage_EventFilter_Callback(QWebEnginePage_EventFilter_Callback cb) { qwebenginepage_eventfilter_callback = cb; }
    inline void setQWebEnginePage_TimerEvent_Callback(QWebEnginePage_TimerEvent_Callback cb) { qwebenginepage_timerevent_callback = cb; }
    inline void setQWebEnginePage_ChildEvent_Callback(QWebEnginePage_ChildEvent_Callback cb) { qwebenginepage_childevent_callback = cb; }
    inline void setQWebEnginePage_CustomEvent_Callback(QWebEnginePage_CustomEvent_Callback cb) { qwebenginepage_customevent_callback = cb; }
    inline void setQWebEnginePage_ConnectNotify_Callback(QWebEnginePage_ConnectNotify_Callback cb) { qwebenginepage_connectnotify_callback = cb; }
    inline void setQWebEnginePage_DisconnectNotify_Callback(QWebEnginePage_DisconnectNotify_Callback cb) { qwebenginepage_disconnectnotify_callback = cb; }
    inline void setQWebEnginePage_Sender_Callback(QWebEnginePage_Sender_Callback cb) { qwebenginepage_sender_callback = cb; }
    inline void setQWebEnginePage_SenderSignalIndex_Callback(QWebEnginePage_SenderSignalIndex_Callback cb) { qwebenginepage_sendersignalindex_callback = cb; }
    inline void setQWebEnginePage_Receivers_Callback(QWebEnginePage_Receivers_Callback cb) { qwebenginepage_receivers_callback = cb; }
    inline void setQWebEnginePage_IsSignalConnected_Callback(QWebEnginePage_IsSignalConnected_Callback cb) { qwebenginepage_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWebEnginePage_Metacall_IsBase(bool value) const { qwebenginepage_metacall_isbase = value; }
    inline void setQWebEnginePage_TriggerAction_IsBase(bool value) const { qwebenginepage_triggeraction_isbase = value; }
    inline void setQWebEnginePage_Event_IsBase(bool value) const { qwebenginepage_event_isbase = value; }
    inline void setQWebEnginePage_CreateWindow_IsBase(bool value) const { qwebenginepage_createwindow_isbase = value; }
    inline void setQWebEnginePage_ChooseFiles_IsBase(bool value) const { qwebenginepage_choosefiles_isbase = value; }
    inline void setQWebEnginePage_JavaScriptAlert_IsBase(bool value) const { qwebenginepage_javascriptalert_isbase = value; }
    inline void setQWebEnginePage_JavaScriptConfirm_IsBase(bool value) const { qwebenginepage_javascriptconfirm_isbase = value; }
    inline void setQWebEnginePage_JavaScriptConsoleMessage_IsBase(bool value) const { qwebenginepage_javascriptconsolemessage_isbase = value; }
    inline void setQWebEnginePage_AcceptNavigationRequest_IsBase(bool value) const { qwebenginepage_acceptnavigationrequest_isbase = value; }
    inline void setQWebEnginePage_EventFilter_IsBase(bool value) const { qwebenginepage_eventfilter_isbase = value; }
    inline void setQWebEnginePage_TimerEvent_IsBase(bool value) const { qwebenginepage_timerevent_isbase = value; }
    inline void setQWebEnginePage_ChildEvent_IsBase(bool value) const { qwebenginepage_childevent_isbase = value; }
    inline void setQWebEnginePage_CustomEvent_IsBase(bool value) const { qwebenginepage_customevent_isbase = value; }
    inline void setQWebEnginePage_ConnectNotify_IsBase(bool value) const { qwebenginepage_connectnotify_isbase = value; }
    inline void setQWebEnginePage_DisconnectNotify_IsBase(bool value) const { qwebenginepage_disconnectnotify_isbase = value; }
    inline void setQWebEnginePage_Sender_IsBase(bool value) const { qwebenginepage_sender_isbase = value; }
    inline void setQWebEnginePage_SenderSignalIndex_IsBase(bool value) const { qwebenginepage_sendersignalindex_isbase = value; }
    inline void setQWebEnginePage_Receivers_IsBase(bool value) const { qwebenginepage_receivers_isbase = value; }
    inline void setQWebEnginePage_IsSignalConnected_IsBase(bool value) const { qwebenginepage_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebenginepage_metacall_isbase) {
            qwebenginepage_metacall_isbase = false;
            return QWebEnginePage::qt_metacall(param1, param2, param3);
        } else if (qwebenginepage_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qwebenginepage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QWebEnginePage::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void triggerAction(QWebEnginePage::WebAction action, bool checked) override {
        if (qwebenginepage_triggeraction_isbase) {
            qwebenginepage_triggeraction_isbase = false;
            QWebEnginePage::triggerAction(action, checked);
        } else if (qwebenginepage_triggeraction_callback != nullptr) {
            int cbval1 = static_cast<int>(action);
            bool cbval2 = checked;

            qwebenginepage_triggeraction_callback(this, cbval1, cbval2);
        } else {
            QWebEnginePage::triggerAction(action, checked);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwebenginepage_event_isbase) {
            qwebenginepage_event_isbase = false;
            return QWebEnginePage::event(param1);
        } else if (qwebenginepage_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qwebenginepage_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWebEnginePage::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWebEnginePage* createWindow(QWebEnginePage::WebWindowType typeVal) override {
        if (qwebenginepage_createwindow_isbase) {
            qwebenginepage_createwindow_isbase = false;
            return QWebEnginePage::createWindow(typeVal);
        } else if (qwebenginepage_createwindow_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);

            QWebEnginePage* callback_ret = qwebenginepage_createwindow_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWebEnginePage::createWindow(typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> chooseFiles(QWebEnginePage::FileSelectionMode mode, const QList<QString>& oldFiles, const QList<QString>& acceptedMimeTypes) override {
        if (qwebenginepage_choosefiles_isbase) {
            qwebenginepage_choosefiles_isbase = false;
            return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes);
        } else if (qwebenginepage_choosefiles_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);
            const QList<QString>& oldFiles_ret = oldFiles;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* oldFiles_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * oldFiles_ret.size()));
            for (qsizetype i = 0; i < oldFiles_ret.size(); ++i) {
                QString oldFiles_lv_ret = oldFiles_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray oldFiles_lv_b = oldFiles_lv_ret.toUtf8();
                libqt_string oldFiles_lv_str;
                oldFiles_lv_str.len = oldFiles_lv_b.length();
                oldFiles_lv_str.data = static_cast<const char*>(malloc(oldFiles_lv_str.len + 1));
                memcpy((void*)oldFiles_lv_str.data, oldFiles_lv_b.data(), oldFiles_lv_str.len);
                ((char*)oldFiles_lv_str.data)[oldFiles_lv_str.len] = '\0';
                oldFiles_arr[i] = oldFiles_lv_str;
            }
            libqt_list oldFiles_out;
            oldFiles_out.len = oldFiles_ret.size();
            oldFiles_out.data = static_cast<void*>(oldFiles_arr);
            libqt_list /* of libqt_string */ cbval2 = oldFiles_out;
            const QList<QString>& acceptedMimeTypes_ret = acceptedMimeTypes;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* acceptedMimeTypes_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * acceptedMimeTypes_ret.size()));
            for (qsizetype i = 0; i < acceptedMimeTypes_ret.size(); ++i) {
                QString acceptedMimeTypes_lv_ret = acceptedMimeTypes_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray acceptedMimeTypes_lv_b = acceptedMimeTypes_lv_ret.toUtf8();
                libqt_string acceptedMimeTypes_lv_str;
                acceptedMimeTypes_lv_str.len = acceptedMimeTypes_lv_b.length();
                acceptedMimeTypes_lv_str.data = static_cast<const char*>(malloc(acceptedMimeTypes_lv_str.len + 1));
                memcpy((void*)acceptedMimeTypes_lv_str.data, acceptedMimeTypes_lv_b.data(), acceptedMimeTypes_lv_str.len);
                ((char*)acceptedMimeTypes_lv_str.data)[acceptedMimeTypes_lv_str.len] = '\0';
                acceptedMimeTypes_arr[i] = acceptedMimeTypes_lv_str;
            }
            libqt_list acceptedMimeTypes_out;
            acceptedMimeTypes_out.len = acceptedMimeTypes_ret.size();
            acceptedMimeTypes_out.data = static_cast<void*>(acceptedMimeTypes_arr);
            libqt_list /* of libqt_string */ cbval3 = acceptedMimeTypes_out;

            libqt_list /* of libqt_string */ callback_ret = qwebenginepage_choosefiles_callback(this, cbval1, cbval2, cbval3);
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void javaScriptAlert(const QUrl& securityOrigin, const QString& msg) override {
        if (qwebenginepage_javascriptalert_isbase) {
            qwebenginepage_javascriptalert_isbase = false;
            QWebEnginePage::javaScriptAlert(securityOrigin, msg);
        } else if (qwebenginepage_javascriptalert_callback != nullptr) {
            const QUrl& securityOrigin_ret = securityOrigin;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&securityOrigin_ret);
            const QString msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            libqt_string msg_str;
            msg_str.len = msg_b.length();
            msg_str.data = static_cast<const char*>(malloc(msg_str.len + 1));
            memcpy((void*)msg_str.data, msg_b.data(), msg_str.len);
            ((char*)msg_str.data)[msg_str.len] = '\0';
            libqt_string cbval2 = msg_str;

            qwebenginepage_javascriptalert_callback(this, cbval1, cbval2);
        } else {
            QWebEnginePage::javaScriptAlert(securityOrigin, msg);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool javaScriptConfirm(const QUrl& securityOrigin, const QString& msg) override {
        if (qwebenginepage_javascriptconfirm_isbase) {
            qwebenginepage_javascriptconfirm_isbase = false;
            return QWebEnginePage::javaScriptConfirm(securityOrigin, msg);
        } else if (qwebenginepage_javascriptconfirm_callback != nullptr) {
            const QUrl& securityOrigin_ret = securityOrigin;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&securityOrigin_ret);
            const QString msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            libqt_string msg_str;
            msg_str.len = msg_b.length();
            msg_str.data = static_cast<const char*>(malloc(msg_str.len + 1));
            memcpy((void*)msg_str.data, msg_b.data(), msg_str.len);
            ((char*)msg_str.data)[msg_str.len] = '\0';
            libqt_string cbval2 = msg_str;

            bool callback_ret = qwebenginepage_javascriptconfirm_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QWebEnginePage::javaScriptConfirm(securityOrigin, msg);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString& message, int lineNumber, const QString& sourceID) override {
        if (qwebenginepage_javascriptconsolemessage_isbase) {
            qwebenginepage_javascriptconsolemessage_isbase = false;
            QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID);
        } else if (qwebenginepage_javascriptconsolemessage_callback != nullptr) {
            int cbval1 = static_cast<int>(level);
            const QString message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            libqt_string message_str;
            message_str.len = message_b.length();
            message_str.data = static_cast<const char*>(malloc(message_str.len + 1));
            memcpy((void*)message_str.data, message_b.data(), message_str.len);
            ((char*)message_str.data)[message_str.len] = '\0';
            libqt_string cbval2 = message_str;
            int cbval3 = lineNumber;
            const QString sourceID_ret = sourceID;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray sourceID_b = sourceID_ret.toUtf8();
            libqt_string sourceID_str;
            sourceID_str.len = sourceID_b.length();
            sourceID_str.data = static_cast<const char*>(malloc(sourceID_str.len + 1));
            memcpy((void*)sourceID_str.data, sourceID_b.data(), sourceID_str.len);
            ((char*)sourceID_str.data)[sourceID_str.len] = '\0';
            libqt_string cbval4 = sourceID_str;

            qwebenginepage_javascriptconsolemessage_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool acceptNavigationRequest(const QUrl& url, QWebEnginePage::NavigationType typeVal, bool isMainFrame) override {
        if (qwebenginepage_acceptnavigationrequest_isbase) {
            qwebenginepage_acceptnavigationrequest_isbase = false;
            return QWebEnginePage::acceptNavigationRequest(url, typeVal, isMainFrame);
        } else if (qwebenginepage_acceptnavigationrequest_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = static_cast<int>(typeVal);
            bool cbval3 = isMainFrame;

            bool callback_ret = qwebenginepage_acceptnavigationrequest_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QWebEnginePage::acceptNavigationRequest(url, typeVal, isMainFrame);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebenginepage_eventfilter_isbase) {
            qwebenginepage_eventfilter_isbase = false;
            return QWebEnginePage::eventFilter(watched, event);
        } else if (qwebenginepage_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qwebenginepage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QWebEnginePage::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebenginepage_timerevent_isbase) {
            qwebenginepage_timerevent_isbase = false;
            QWebEnginePage::timerEvent(event);
        } else if (qwebenginepage_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qwebenginepage_timerevent_callback(this, cbval1);
        } else {
            QWebEnginePage::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebenginepage_childevent_isbase) {
            qwebenginepage_childevent_isbase = false;
            QWebEnginePage::childEvent(event);
        } else if (qwebenginepage_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qwebenginepage_childevent_callback(this, cbval1);
        } else {
            QWebEnginePage::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebenginepage_customevent_isbase) {
            qwebenginepage_customevent_isbase = false;
            QWebEnginePage::customEvent(event);
        } else if (qwebenginepage_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qwebenginepage_customevent_callback(this, cbval1);
        } else {
            QWebEnginePage::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebenginepage_connectnotify_isbase) {
            qwebenginepage_connectnotify_isbase = false;
            QWebEnginePage::connectNotify(signal);
        } else if (qwebenginepage_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwebenginepage_connectnotify_callback(this, cbval1);
        } else {
            QWebEnginePage::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebenginepage_disconnectnotify_isbase) {
            qwebenginepage_disconnectnotify_isbase = false;
            QWebEnginePage::disconnectNotify(signal);
        } else if (qwebenginepage_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qwebenginepage_disconnectnotify_callback(this, cbval1);
        } else {
            QWebEnginePage::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwebenginepage_sender_isbase) {
            qwebenginepage_sender_isbase = false;
            return QWebEnginePage::sender();
        } else if (qwebenginepage_sender_callback != nullptr) {
            QObject* callback_ret = qwebenginepage_sender_callback();
            return callback_ret;
        } else {
            return QWebEnginePage::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwebenginepage_sendersignalindex_isbase) {
            qwebenginepage_sendersignalindex_isbase = false;
            return QWebEnginePage::senderSignalIndex();
        } else if (qwebenginepage_sendersignalindex_callback != nullptr) {
            int callback_ret = qwebenginepage_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QWebEnginePage::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwebenginepage_receivers_isbase) {
            qwebenginepage_receivers_isbase = false;
            return QWebEnginePage::receivers(signal);
        } else if (qwebenginepage_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qwebenginepage_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QWebEnginePage::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwebenginepage_issignalconnected_isbase) {
            qwebenginepage_issignalconnected_isbase = false;
            return QWebEnginePage::isSignalConnected(signal);
        } else if (qwebenginepage_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qwebenginepage_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QWebEnginePage::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QWebEnginePage* QWebEnginePage_CreateWindow(QWebEnginePage* self, int typeVal);
    friend QWebEnginePage* QWebEnginePage_QBaseCreateWindow(QWebEnginePage* self, int typeVal);
    friend libqt_list /* of libqt_string */ QWebEnginePage_ChooseFiles(QWebEnginePage* self, int mode, const libqt_list /* of libqt_string */ oldFiles, const libqt_list /* of libqt_string */ acceptedMimeTypes);
    friend libqt_list /* of libqt_string */ QWebEnginePage_QBaseChooseFiles(QWebEnginePage* self, int mode, const libqt_list /* of libqt_string */ oldFiles, const libqt_list /* of libqt_string */ acceptedMimeTypes);
    friend void QWebEnginePage_JavaScriptAlert(QWebEnginePage* self, const QUrl* securityOrigin, const libqt_string msg);
    friend void QWebEnginePage_QBaseJavaScriptAlert(QWebEnginePage* self, const QUrl* securityOrigin, const libqt_string msg);
    friend bool QWebEnginePage_JavaScriptConfirm(QWebEnginePage* self, const QUrl* securityOrigin, const libqt_string msg);
    friend bool QWebEnginePage_QBaseJavaScriptConfirm(QWebEnginePage* self, const QUrl* securityOrigin, const libqt_string msg);
    friend void QWebEnginePage_JavaScriptConsoleMessage(QWebEnginePage* self, int level, const libqt_string message, int lineNumber, const libqt_string sourceID);
    friend void QWebEnginePage_QBaseJavaScriptConsoleMessage(QWebEnginePage* self, int level, const libqt_string message, int lineNumber, const libqt_string sourceID);
    friend bool QWebEnginePage_AcceptNavigationRequest(QWebEnginePage* self, const QUrl* url, int typeVal, bool isMainFrame);
    friend bool QWebEnginePage_QBaseAcceptNavigationRequest(QWebEnginePage* self, const QUrl* url, int typeVal, bool isMainFrame);
    friend void QWebEnginePage_TimerEvent(QWebEnginePage* self, QTimerEvent* event);
    friend void QWebEnginePage_QBaseTimerEvent(QWebEnginePage* self, QTimerEvent* event);
    friend void QWebEnginePage_ChildEvent(QWebEnginePage* self, QChildEvent* event);
    friend void QWebEnginePage_QBaseChildEvent(QWebEnginePage* self, QChildEvent* event);
    friend void QWebEnginePage_CustomEvent(QWebEnginePage* self, QEvent* event);
    friend void QWebEnginePage_QBaseCustomEvent(QWebEnginePage* self, QEvent* event);
    friend void QWebEnginePage_ConnectNotify(QWebEnginePage* self, const QMetaMethod* signal);
    friend void QWebEnginePage_QBaseConnectNotify(QWebEnginePage* self, const QMetaMethod* signal);
    friend void QWebEnginePage_DisconnectNotify(QWebEnginePage* self, const QMetaMethod* signal);
    friend void QWebEnginePage_QBaseDisconnectNotify(QWebEnginePage* self, const QMetaMethod* signal);
    friend QObject* QWebEnginePage_Sender(const QWebEnginePage* self);
    friend QObject* QWebEnginePage_QBaseSender(const QWebEnginePage* self);
    friend int QWebEnginePage_SenderSignalIndex(const QWebEnginePage* self);
    friend int QWebEnginePage_QBaseSenderSignalIndex(const QWebEnginePage* self);
    friend int QWebEnginePage_Receivers(const QWebEnginePage* self, const char* signal);
    friend int QWebEnginePage_QBaseReceivers(const QWebEnginePage* self, const char* signal);
    friend bool QWebEnginePage_IsSignalConnected(const QWebEnginePage* self, const QMetaMethod* signal);
    friend bool QWebEnginePage_QBaseIsSignalConnected(const QWebEnginePage* self, const QMetaMethod* signal);
};

#endif
