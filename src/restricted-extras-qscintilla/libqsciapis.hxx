#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIAPIS_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIAPIS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciAPIs
class VirtualQsciAPIs final : public QsciAPIs {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciAPIs_MetaObject_Callback = QMetaObject* (*)(const QsciAPIs*);
    using QsciAPIs_Metacast_Callback = void* (*)(QsciAPIs*, const char*);
    using QsciAPIs_Metacall_Callback = int (*)(QsciAPIs*, int, int, void**);
    using QsciAPIs_UpdateAutoCompletionList_Callback = void (*)(QsciAPIs*, const char**, const char**);
    using QsciAPIs_AutoCompletionSelected_Callback = void (*)(QsciAPIs*, const char*);
    using QsciAPIs_CallTips_Callback = const char** (*)(QsciAPIs*, const char**, int, int, libqt_list /* of int */);
    using QsciAPIs_Event_Callback = bool (*)(QsciAPIs*, QEvent*);
    using QsciAPIs_EventFilter_Callback = bool (*)(QsciAPIs*, QObject*, QEvent*);
    using QsciAPIs_TimerEvent_Callback = void (*)(QsciAPIs*, QTimerEvent*);
    using QsciAPIs_ChildEvent_Callback = void (*)(QsciAPIs*, QChildEvent*);
    using QsciAPIs_CustomEvent_Callback = void (*)(QsciAPIs*, QEvent*);
    using QsciAPIs_ConnectNotify_Callback = void (*)(QsciAPIs*, QMetaMethod*);
    using QsciAPIs_DisconnectNotify_Callback = void (*)(QsciAPIs*, QMetaMethod*);
    using QsciAPIs::isSignalConnected;
    using QsciAPIs::receivers;
    using QsciAPIs::sender;
    using QsciAPIs::senderSignalIndex;

    // Instance callback storage
    QsciAPIs_MetaObject_Callback qsciapis_metaobject_callback = nullptr;
    QsciAPIs_Metacast_Callback qsciapis_metacast_callback = nullptr;
    QsciAPIs_Metacall_Callback qsciapis_metacall_callback = nullptr;
    QsciAPIs_UpdateAutoCompletionList_Callback qsciapis_updateautocompletionlist_callback = nullptr;
    QsciAPIs_AutoCompletionSelected_Callback qsciapis_autocompletionselected_callback = nullptr;
    QsciAPIs_CallTips_Callback qsciapis_calltips_callback = nullptr;
    QsciAPIs_Event_Callback qsciapis_event_callback = nullptr;
    QsciAPIs_EventFilter_Callback qsciapis_eventfilter_callback = nullptr;
    QsciAPIs_TimerEvent_Callback qsciapis_timerevent_callback = nullptr;
    QsciAPIs_ChildEvent_Callback qsciapis_childevent_callback = nullptr;
    QsciAPIs_CustomEvent_Callback qsciapis_customevent_callback = nullptr;
    QsciAPIs_ConnectNotify_Callback qsciapis_connectnotify_callback = nullptr;
    QsciAPIs_DisconnectNotify_Callback qsciapis_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciAPIs {
        using QsciAPIs::childEvent;
        using QsciAPIs::connectNotify;
        using QsciAPIs::customEvent;
        using QsciAPIs::disconnectNotify;
        using QsciAPIs::timerEvent;
    };

    VirtualQsciAPIs(QsciLexer* lexer) : QsciAPIs(lexer) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsciapis_metaobject_callback) {
            QMetaObject* callback_ret = qsciapis_metaobject_callback(this);
            return callback_ret;
        }
        return QsciAPIs::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsciapis_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsciapis_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciAPIs::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciapis_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsciapis_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciAPIs::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateAutoCompletionList(const QList<QString>& context, QList<QString>& list) override {
        if (qsciapis_updateautocompletionlist_callback) {
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
            qsciapis_updateautocompletionlist_callback(this, cbval1, cbval2);
            libqt_free(context_arr);
            libqt_free(list_arr);
            return;
        }
        QsciAPIs::updateAutoCompletionList(context, list);
    }

    // Virtual method for C ABI access and custom callback
    virtual void autoCompletionSelected(const QString& sel) override {
        if (qsciapis_autocompletionselected_callback) {
            const auto sel_ret = sel;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray sel_b = sel_ret.toUtf8();
            auto sel_str_len = sel_b.length();
            const char* sel_str = static_cast<const char*>(malloc(sel_str_len + 1));
            memcpy((void*)sel_str, sel_b.data(), sel_str_len);
            ((char*)sel_str)[sel_str_len] = '\0';
            const char* cbval1 = sel_str;
            qsciapis_autocompletionselected_callback(this, cbval1);
            libqt_free(sel_str);
            return;
        }
        QsciAPIs::autoCompletionSelected(sel);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> callTips(const QList<QString>& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
        if (qsciapis_calltips_callback) {
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
            const char** callback_ret = qsciapis_calltips_callback(this, cbval1, cbval2, cbval3, cbval4);
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
        return QsciAPIs::callTips(context, commas, style, shifts);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsciapis_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qsciapis_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciAPIs::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsciapis_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsciapis_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciAPIs::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciapis_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsciapis_timerevent_callback(this, cbval1);
            return;
        }
        QsciAPIs::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciapis_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsciapis_childevent_callback(this, cbval1);
            return;
        }
        QsciAPIs::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciapis_customevent_callback) {
            QEvent* cbval1 = event;
            qsciapis_customevent_callback(this, cbval1);
            return;
        }
        QsciAPIs::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciapis_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciapis_connectnotify_callback(this, cbval1);
            return;
        }
        QsciAPIs::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciapis_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsciapis_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciAPIs::disconnectNotify(signal);
    }

    // Friend functions
    friend void QsciAPIs_SuperTimerEvent(QsciAPIs* self, QTimerEvent* event);
    friend void QsciAPIs_SuperChildEvent(QsciAPIs* self, QChildEvent* event);
    friend void QsciAPIs_SuperCustomEvent(QsciAPIs* self, QEvent* event);
    friend void QsciAPIs_SuperConnectNotify(QsciAPIs* self, const QMetaMethod* signal);
    friend void QsciAPIs_SuperDisconnectNotify(QsciAPIs* self, const QMetaMethod* signal);
};

#endif
