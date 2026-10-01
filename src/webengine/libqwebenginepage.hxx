#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEPAGE_HXX
#define WEBENGINE_LIBQWEBENGINEPAGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWebEnginePage
class VirtualQWebEnginePage final : public QWebEnginePage {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWebEnginePage_MetaObject_Callback = QMetaObject* (*)(const QWebEnginePage*);
    using QWebEnginePage_Metacast_Callback = void* (*)(QWebEnginePage*, const char*);
    using QWebEnginePage_Metacall_Callback = int (*)(QWebEnginePage*, int, int, void**);
    using QWebEnginePage_TriggerAction_Callback = void (*)(QWebEnginePage*, int, bool);
    using QWebEnginePage_Event_Callback = bool (*)(QWebEnginePage*, QEvent*);
    using QWebEnginePage_CreateWindow_Callback = QWebEnginePage* (*)(QWebEnginePage*, int);
    using QWebEnginePage_ChooseFiles_Callback = const char** (*)(QWebEnginePage*, int, const char**, const char**);
    using QWebEnginePage_JavaScriptAlert_Callback = void (*)(QWebEnginePage*, QUrl*, const char*);
    using QWebEnginePage_JavaScriptConfirm_Callback = bool (*)(QWebEnginePage*, QUrl*, const char*);
    using QWebEnginePage_JavaScriptConsoleMessage_Callback = void (*)(QWebEnginePage*, int, const char*, int, const char*);
    using QWebEnginePage_AcceptNavigationRequest_Callback = bool (*)(QWebEnginePage*, QUrl*, int, bool);
    using QWebEnginePage_EventFilter_Callback = bool (*)(QWebEnginePage*, QObject*, QEvent*);
    using QWebEnginePage_TimerEvent_Callback = void (*)(QWebEnginePage*, QTimerEvent*);
    using QWebEnginePage_ChildEvent_Callback = void (*)(QWebEnginePage*, QChildEvent*);
    using QWebEnginePage_CustomEvent_Callback = void (*)(QWebEnginePage*, QEvent*);
    using QWebEnginePage_ConnectNotify_Callback = void (*)(QWebEnginePage*, QMetaMethod*);
    using QWebEnginePage_DisconnectNotify_Callback = void (*)(QWebEnginePage*, QMetaMethod*);
    using QWebEnginePage::isSignalConnected;
    using QWebEnginePage::receivers;
    using QWebEnginePage::sender;
    using QWebEnginePage::senderSignalIndex;

    // Instance callback storage
    QWebEnginePage_MetaObject_Callback qwebenginepage_metaobject_callback = nullptr;
    QWebEnginePage_Metacast_Callback qwebenginepage_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QWebEnginePage {
        using QWebEnginePage::acceptNavigationRequest;
        using QWebEnginePage::childEvent;
        using QWebEnginePage::chooseFiles;
        using QWebEnginePage::connectNotify;
        using QWebEnginePage::createWindow;
        using QWebEnginePage::customEvent;
        using QWebEnginePage::disconnectNotify;
        using QWebEnginePage::javaScriptAlert;
        using QWebEnginePage::javaScriptConfirm;
        using QWebEnginePage::javaScriptConsoleMessage;
        using QWebEnginePage::timerEvent;
    };

    VirtualQWebEnginePage() : QWebEnginePage() {};
    VirtualQWebEnginePage(QWebEngineProfile* profile) : QWebEnginePage(profile) {};
    VirtualQWebEnginePage(QObject* parent) : QWebEnginePage(parent) {};
    VirtualQWebEnginePage(QWebEngineProfile* profile, QObject* parent) : QWebEnginePage(profile, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwebenginepage_metaobject_callback) {
            QMetaObject* callback_ret = qwebenginepage_metaobject_callback(this);
            return callback_ret;
        }
        return QWebEnginePage::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwebenginepage_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwebenginepage_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEnginePage::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwebenginepage_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwebenginepage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWebEnginePage::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void triggerAction(QWebEnginePage::WebAction action, bool checked) override {
        if (qwebenginepage_triggeraction_callback) {
            int cbval1 = static_cast<int>(action);
            bool cbval2 = checked;
            qwebenginepage_triggeraction_callback(this, cbval1, cbval2);
            return;
        }
        QWebEnginePage::triggerAction(action, checked);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qwebenginepage_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qwebenginepage_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEnginePage::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWebEnginePage* createWindow(QWebEnginePage::WebWindowType typeVal) override {
        if (qwebenginepage_createwindow_callback) {
            int cbval1 = static_cast<int>(typeVal);
            QWebEnginePage* callback_ret = qwebenginepage_createwindow_callback(this, cbval1);
            return callback_ret;
        }
        return QWebEnginePage::createWindow(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> chooseFiles(QWebEnginePage::FileSelectionMode mode, const QList<QString>& oldFiles, const QList<QString>& acceptedMimeTypes) override {
        if (qwebenginepage_choosefiles_callback) {
            int cbval1 = static_cast<int>(mode);
            const QList<QString>& oldFiles_ret = oldFiles;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** oldFiles_arr = static_cast<const char**>(malloc(sizeof(const char*) * (oldFiles_ret.size() + 1)));
            for (qsizetype i = 0; i < oldFiles_ret.size(); ++i) {
                QByteArray oldFiles_b = oldFiles_ret[i].toUtf8();
                auto oldFiles_str_len = oldFiles_b.length();
                char* oldFiles_str = static_cast<char*>(malloc(oldFiles_str_len + 1));
                memcpy(oldFiles_str, oldFiles_b.data(), oldFiles_str_len);
                oldFiles_str[oldFiles_str_len] = '\0';
                oldFiles_arr[i] = oldFiles_str;
            }
            // Append sentinel null terminator to the list
            oldFiles_arr[oldFiles_ret.size()] = nullptr;
            const char** cbval2 = oldFiles_arr;
            const QList<QString>& acceptedMimeTypes_ret = acceptedMimeTypes;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** acceptedMimeTypes_arr = static_cast<const char**>(malloc(sizeof(const char*) * (acceptedMimeTypes_ret.size() + 1)));
            for (qsizetype i = 0; i < acceptedMimeTypes_ret.size(); ++i) {
                QByteArray acceptedMimeTypes_b = acceptedMimeTypes_ret[i].toUtf8();
                auto acceptedMimeTypes_str_len = acceptedMimeTypes_b.length();
                char* acceptedMimeTypes_str = static_cast<char*>(malloc(acceptedMimeTypes_str_len + 1));
                memcpy(acceptedMimeTypes_str, acceptedMimeTypes_b.data(), acceptedMimeTypes_str_len);
                acceptedMimeTypes_str[acceptedMimeTypes_str_len] = '\0';
                acceptedMimeTypes_arr[i] = acceptedMimeTypes_str;
            }
            // Append sentinel null terminator to the list
            acceptedMimeTypes_arr[acceptedMimeTypes_ret.size()] = nullptr;
            const char** cbval3 = acceptedMimeTypes_arr;
            const char** callback_ret = qwebenginepage_choosefiles_callback(this, cbval1, cbval2, cbval3);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            libqt_free(oldFiles_arr);
            libqt_free(acceptedMimeTypes_arr);
            return callback_ret_QList;
        }
        return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes);
    }

    // Virtual method for C ABI access and custom callback
    virtual void javaScriptAlert(const QUrl& securityOrigin, const QString& msg) override {
        if (qwebenginepage_javascriptalert_callback) {
            const QUrl& securityOrigin_ret = securityOrigin;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&securityOrigin_ret);
            const auto msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            auto msg_str_len = msg_b.length();
            const char* msg_str = static_cast<const char*>(malloc(msg_str_len + 1));
            memcpy((void*)msg_str, msg_b.data(), msg_str_len);
            ((char*)msg_str)[msg_str_len] = '\0';
            const char* cbval2 = msg_str;
            qwebenginepage_javascriptalert_callback(this, cbval1, cbval2);
            libqt_free(msg_str);
            return;
        }
        QWebEnginePage::javaScriptAlert(securityOrigin, msg);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool javaScriptConfirm(const QUrl& securityOrigin, const QString& msg) override {
        if (qwebenginepage_javascriptconfirm_callback) {
            const QUrl& securityOrigin_ret = securityOrigin;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&securityOrigin_ret);
            const auto msg_ret = msg;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray msg_b = msg_ret.toUtf8();
            auto msg_str_len = msg_b.length();
            const char* msg_str = static_cast<const char*>(malloc(msg_str_len + 1));
            memcpy((void*)msg_str, msg_b.data(), msg_str_len);
            ((char*)msg_str)[msg_str_len] = '\0';
            const char* cbval2 = msg_str;
            bool callback_ret = qwebenginepage_javascriptconfirm_callback(this, cbval1, cbval2);
            libqt_free(msg_str);
            return callback_ret;
        }
        return QWebEnginePage::javaScriptConfirm(securityOrigin, msg);
    }

    // Virtual method for C ABI access and custom callback
    virtual void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString& message, int lineNumber, const QString& sourceID) override {
        if (qwebenginepage_javascriptconsolemessage_callback) {
            int cbval1 = static_cast<int>(level);
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            int cbval3 = lineNumber;
            const auto sourceID_ret = sourceID;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray sourceID_b = sourceID_ret.toUtf8();
            auto sourceID_str_len = sourceID_b.length();
            const char* sourceID_str = static_cast<const char*>(malloc(sourceID_str_len + 1));
            memcpy((void*)sourceID_str, sourceID_b.data(), sourceID_str_len);
            ((char*)sourceID_str)[sourceID_str_len] = '\0';
            const char* cbval4 = sourceID_str;
            qwebenginepage_javascriptconsolemessage_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(message_str);
            libqt_free(sourceID_str);
            return;
        }
        QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool acceptNavigationRequest(const QUrl& url, QWebEnginePage::NavigationType typeVal, bool isMainFrame) override {
        if (qwebenginepage_acceptnavigationrequest_callback) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = static_cast<int>(typeVal);
            bool cbval3 = isMainFrame;
            bool callback_ret = qwebenginepage_acceptnavigationrequest_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QWebEnginePage::acceptNavigationRequest(url, typeVal, isMainFrame);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwebenginepage_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwebenginepage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWebEnginePage::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwebenginepage_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwebenginepage_timerevent_callback(this, cbval1);
            return;
        }
        QWebEnginePage::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwebenginepage_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwebenginepage_childevent_callback(this, cbval1);
            return;
        }
        QWebEnginePage::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwebenginepage_customevent_callback) {
            QEvent* cbval1 = event;
            qwebenginepage_customevent_callback(this, cbval1);
            return;
        }
        QWebEnginePage::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwebenginepage_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebenginepage_connectnotify_callback(this, cbval1);
            return;
        }
        QWebEnginePage::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwebenginepage_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwebenginepage_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWebEnginePage::disconnectNotify(signal);
    }

    // Friend functions
    friend QWebEnginePage* QWebEnginePage_SuperCreateWindow(QWebEnginePage* self, int typeVal);
    friend libqt_list /* of libqt_string */ QWebEnginePage_SuperChooseFiles(QWebEnginePage* self, int mode, const libqt_list /* of libqt_string */ oldFiles, const libqt_list /* of libqt_string */ acceptedMimeTypes);
    friend void QWebEnginePage_SuperJavaScriptAlert(QWebEnginePage* self, const QUrl* securityOrigin, const libqt_string msg);
    friend bool QWebEnginePage_SuperJavaScriptConfirm(QWebEnginePage* self, const QUrl* securityOrigin, const libqt_string msg);
    friend void QWebEnginePage_SuperJavaScriptConsoleMessage(QWebEnginePage* self, int level, const libqt_string message, int lineNumber, const libqt_string sourceID);
    friend bool QWebEnginePage_SuperAcceptNavigationRequest(QWebEnginePage* self, const QUrl* url, int typeVal, bool isMainFrame);
    friend void QWebEnginePage_SuperTimerEvent(QWebEnginePage* self, QTimerEvent* event);
    friend void QWebEnginePage_SuperChildEvent(QWebEnginePage* self, QChildEvent* event);
    friend void QWebEnginePage_SuperCustomEvent(QWebEnginePage* self, QEvent* event);
    friend void QWebEnginePage_SuperConnectNotify(QWebEnginePage* self, const QMetaMethod* signal);
    friend void QWebEnginePage_SuperDisconnectNotify(QWebEnginePage* self, const QMetaMethod* signal);
};

#endif
