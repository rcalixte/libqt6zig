#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIABSTRACTAPIS_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIABSTRACTAPIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciAbstractAPIs
class VirtualQsciAbstractAPIs : public QsciAbstractAPIs {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciAbstractAPIs_MetaObject_Callback = QMetaObject* (*)(const QsciAbstractAPIs*);
    using QsciAbstractAPIs_Metacast_Callback = void* (*)(QsciAbstractAPIs*, const char*);
    using QsciAbstractAPIs_Metacall_Callback = int (*)(QsciAbstractAPIs*, int, int, void**);
    using QsciAbstractAPIs_UpdateAutoCompletionList_Callback = void (*)(QsciAbstractAPIs*, const char**, const char**);
    using QsciAbstractAPIs_AutoCompletionSelected_Callback = void (*)(QsciAbstractAPIs*, const char*);
    using QsciAbstractAPIs_CallTips_Callback = const char** (*)(QsciAbstractAPIs*, const char**, int, int, libqt_list /* of int */);
    using QsciAbstractAPIs_Event_Callback = bool (*)(QsciAbstractAPIs*, QEvent*);
    using QsciAbstractAPIs_EventFilter_Callback = bool (*)(QsciAbstractAPIs*, QObject*, QEvent*);
    using QsciAbstractAPIs_TimerEvent_Callback = void (*)(QsciAbstractAPIs*, QTimerEvent*);
    using QsciAbstractAPIs_ChildEvent_Callback = void (*)(QsciAbstractAPIs*, QChildEvent*);
    using QsciAbstractAPIs_CustomEvent_Callback = void (*)(QsciAbstractAPIs*, QEvent*);
    using QsciAbstractAPIs_ConnectNotify_Callback = void (*)(QsciAbstractAPIs*, QMetaMethod*);
    using QsciAbstractAPIs_DisconnectNotify_Callback = void (*)(QsciAbstractAPIs*, QMetaMethod*);
    using QsciAbstractAPIs::isSignalConnected;
    using QsciAbstractAPIs::receivers;
    using QsciAbstractAPIs::sender;
    using QsciAbstractAPIs::senderSignalIndex;

    // Instance callback storage
    QsciAbstractAPIs_MetaObject_Callback qsciabstractapis_metaobject_callback = nullptr;
    QsciAbstractAPIs_Metacast_Callback qsciabstractapis_metacast_callback = nullptr;
    QsciAbstractAPIs_Metacall_Callback qsciabstractapis_metacall_callback = nullptr;
    QsciAbstractAPIs_UpdateAutoCompletionList_Callback qsciabstractapis_updateautocompletionlist_callback = nullptr;
    QsciAbstractAPIs_AutoCompletionSelected_Callback qsciabstractapis_autocompletionselected_callback = nullptr;
    QsciAbstractAPIs_CallTips_Callback qsciabstractapis_calltips_callback = nullptr;
    QsciAbstractAPIs_Event_Callback qsciabstractapis_event_callback = nullptr;
    QsciAbstractAPIs_EventFilter_Callback qsciabstractapis_eventfilter_callback = nullptr;
    QsciAbstractAPIs_TimerEvent_Callback qsciabstractapis_timerevent_callback = nullptr;
    QsciAbstractAPIs_ChildEvent_Callback qsciabstractapis_childevent_callback = nullptr;
    QsciAbstractAPIs_CustomEvent_Callback qsciabstractapis_customevent_callback = nullptr;
    QsciAbstractAPIs_ConnectNotify_Callback qsciabstractapis_connectnotify_callback = nullptr;
    QsciAbstractAPIs_DisconnectNotify_Callback qsciabstractapis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciAbstractAPIs {
        using QsciAbstractAPIs::childEvent;
        using QsciAbstractAPIs::connectNotify;
        using QsciAbstractAPIs::customEvent;
        using QsciAbstractAPIs::disconnectNotify;
        using QsciAbstractAPIs::timerEvent;
    };

    VirtualQsciAbstractAPIs(QsciLexer* lexer) : QsciAbstractAPIs(lexer) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsciabstractapis_metaobject_callback) {
            QMetaObject* callback_ret = qsciabstractapis_metaobject_callback(this);
            return callback_ret;
        }
        return QsciAbstractAPIs::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsciabstractapis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsciabstractapis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciAbstractAPIs::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciabstractapis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsciabstractapis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciAbstractAPIs::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateAutoCompletionList(const QList<QString>& context, QList<QString>& list) override {
        if (qsciabstractapis_updateautocompletionlist_callback) {
            const QList<QString>& context_ret = context;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** context_arr = static_cast<const char**>(malloc(sizeof(const char*) * (context_ret.size() + 1)));
            for (qsizetype i = 0; i < context_ret.size(); ++i) {
                QByteArray context_b = context_ret[i].toUtf8();
                auto context_str_len = context_b.length();
                char* context_str = static_cast<char*>(malloc(context_str_len + 1));
                memcpy(context_str, context_b.data(), context_str_len);
                context_str[context_str_len] = '\0';
                context_arr[i] = context_str;
            }
            // Append sentinel null terminator to the list
            context_arr[context_ret.size()] = nullptr;
            const char** cbval1 = context_arr;
            QList<QString>& list_ret = list;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** list_arr = static_cast<const char**>(malloc(sizeof(const char*) * (list_ret.size() + 1)));
            for (qsizetype i = 0; i < list_ret.size(); ++i) {
                QByteArray list_b = list_ret[i].toUtf8();
                auto list_str_len = list_b.length();
                char* list_str = static_cast<char*>(malloc(list_str_len + 1));
                memcpy(list_str, list_b.data(), list_str_len);
                list_str[list_str_len] = '\0';
                list_arr[i] = list_str;
            }
            // Append sentinel null terminator to the list
            list_arr[list_ret.size()] = nullptr;
            const char** cbval2 = list_arr;
            qsciabstractapis_updateautocompletionlist_callback(this, cbval1, cbval2);
            libqt_free(context_arr);
            libqt_free(list_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciAbstractAPIs::updateAutoCompletionList called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompletionSelected(const QString& selection) override {
        if (qsciabstractapis_autocompletionselected_callback) {
            const auto selection_ret = selection;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray selection_b = selection_ret.toUtf8();
            auto selection_str_len = selection_b.length();
            const char* selection_str = static_cast<const char*>(malloc(selection_str_len + 1));
            memcpy((void*)selection_str, selection_b.data(), selection_str_len);
            ((char*)selection_str)[selection_str_len] = '\0';
            const char* cbval1 = selection_str;
            qsciabstractapis_autocompletionselected_callback(this, cbval1);
            libqt_free(selection_str);
            return;
        }
        QsciAbstractAPIs::autoCompletionSelected(selection);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> callTips(const QList<QString>& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
        if (qsciabstractapis_calltips_callback) {
            const QList<QString>& context_ret = context;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** context_arr = static_cast<const char**>(malloc(sizeof(const char*) * (context_ret.size() + 1)));
            for (qsizetype i = 0; i < context_ret.size(); ++i) {
                QByteArray context_b = context_ret[i].toUtf8();
                auto context_str_len = context_b.length();
                char* context_str = static_cast<char*>(malloc(context_str_len + 1));
                memcpy(context_str, context_b.data(), context_str_len);
                context_str[context_str_len] = '\0';
                context_arr[i] = context_str;
            }
            // Append sentinel null terminator to the list
            context_arr[context_ret.size()] = nullptr;
            const char** cbval1 = context_arr;
            int cbval2 = commas;
            int cbval3 = static_cast<int>(style);
            QList<int>& shifts_ret = shifts;
            // Convert QList<> from C++ memory to manually-managed C memory
            int* shifts_arr = static_cast<int*>(malloc(sizeof(int) * (shifts_ret.size())));
            for (qsizetype i = 0; i < shifts_ret.size(); ++i) {
                shifts_arr[i] = shifts_ret[i];
            }
            libqt_list shifts_out;
            shifts_out.len = shifts_ret.size();
            shifts_out.data = static_cast<void*>(shifts_arr);
            libqt_list /* of int */ cbval4 = shifts_out;
            const char** callback_ret = qsciabstractapis_calltips_callback(this, cbval1, cbval2, cbval3, cbval4);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            libqt_free(context_arr);
            free(shifts_arr);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciAbstractAPIs::callTips called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsciabstractapis_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsciabstractapis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciAbstractAPIs::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsciabstractapis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsciabstractapis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciAbstractAPIs::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciabstractapis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsciabstractapis_timerevent_callback(this, cbval1);
            return;
        }
        QsciAbstractAPIs::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciabstractapis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsciabstractapis_childevent_callback(this, cbval1);
            return;
        }
        QsciAbstractAPIs::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciabstractapis_customevent_callback) {
            QEvent* cbval1 = event;
            qsciabstractapis_customevent_callback(this, cbval1);
            return;
        }
        QsciAbstractAPIs::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciabstractapis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciabstractapis_connectnotify_callback(this, cbval1);
            return;
        }
        QsciAbstractAPIs::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciabstractapis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciabstractapis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciAbstractAPIs::disconnectNotify(signal);
    }

    // Friend functions
    friend void QsciAbstractAPIs_SuperTimerEvent(QsciAbstractAPIs* self, QTimerEvent* event);
    friend void QsciAbstractAPIs_SuperChildEvent(QsciAbstractAPIs* self, QChildEvent* event);
    friend void QsciAbstractAPIs_SuperCustomEvent(QsciAbstractAPIs* self, QEvent* event);
    friend void QsciAbstractAPIs_SuperConnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
    friend void QsciAbstractAPIs_SuperDisconnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
};

#endif
