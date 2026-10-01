#pragma once
#ifndef LIBQCOMPLETER_HXX
#define LIBQCOMPLETER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCompleter
class VirtualQCompleter final : public QCompleter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCompleter_MetaObject_Callback = QMetaObject* (*)(const QCompleter*);
    using QCompleter_Metacast_Callback = void* (*)(QCompleter*, const char*);
    using QCompleter_Metacall_Callback = int (*)(QCompleter*, int, int, void**);
    using QCompleter_PathFromIndex_Callback = const char* (*)(const QCompleter*, QModelIndex*);
    using QCompleter_SplitPath_Callback = const char** (*)(const QCompleter*, const char*);
    using QCompleter_EventFilter_Callback = bool (*)(QCompleter*, QObject*, QEvent*);
    using QCompleter_Event_Callback = bool (*)(QCompleter*, QEvent*);
    using QCompleter_TimerEvent_Callback = void (*)(QCompleter*, QTimerEvent*);
    using QCompleter_ChildEvent_Callback = void (*)(QCompleter*, QChildEvent*);
    using QCompleter_CustomEvent_Callback = void (*)(QCompleter*, QEvent*);
    using QCompleter_ConnectNotify_Callback = void (*)(QCompleter*, QMetaMethod*);
    using QCompleter_DisconnectNotify_Callback = void (*)(QCompleter*, QMetaMethod*);
    using QCompleter::isSignalConnected;
    using QCompleter::receivers;
    using QCompleter::sender;
    using QCompleter::senderSignalIndex;

    // Instance callback storage
    QCompleter_MetaObject_Callback qcompleter_metaobject_callback = nullptr;
    QCompleter_Metacast_Callback qcompleter_metacast_callback = nullptr;
    QCompleter_Metacall_Callback qcompleter_metacall_callback = nullptr;
    QCompleter_PathFromIndex_Callback qcompleter_pathfromindex_callback = nullptr;
    QCompleter_SplitPath_Callback qcompleter_splitpath_callback = nullptr;
    QCompleter_EventFilter_Callback qcompleter_eventfilter_callback = nullptr;
    QCompleter_Event_Callback qcompleter_event_callback = nullptr;
    QCompleter_TimerEvent_Callback qcompleter_timerevent_callback = nullptr;
    QCompleter_ChildEvent_Callback qcompleter_childevent_callback = nullptr;
    QCompleter_CustomEvent_Callback qcompleter_customevent_callback = nullptr;
    QCompleter_ConnectNotify_Callback qcompleter_connectnotify_callback = nullptr;
    QCompleter_DisconnectNotify_Callback qcompleter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCompleter {
        using QCompleter::childEvent;
        using QCompleter::connectNotify;
        using QCompleter::customEvent;
        using QCompleter::disconnectNotify;
        using QCompleter::event;
        using QCompleter::eventFilter;
        using QCompleter::timerEvent;
    };

    VirtualQCompleter() : QCompleter() {};
    VirtualQCompleter(QAbstractItemModel* model) : QCompleter(model) {};
    VirtualQCompleter(const QList<QString>& completions) : QCompleter(completions) {};
    VirtualQCompleter(QObject* parent) : QCompleter(parent) {};
    VirtualQCompleter(QAbstractItemModel* model, QObject* parent) : QCompleter(model, parent) {};
    VirtualQCompleter(const QList<QString>& completions, QObject* parent) : QCompleter(completions, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcompleter_metaobject_callback) {
            QMetaObject* callback_ret = qcompleter_metaobject_callback(this);
            return callback_ret;
        }
        return QCompleter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcompleter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcompleter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCompleter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcompleter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcompleter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCompleter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString pathFromIndex(const QModelIndex& index) const override {
        if (qcompleter_pathfromindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const char* callback_ret = qcompleter_pathfromindex_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QCompleter::pathFromIndex(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> splitPath(const QString& path) const override {
        if (qcompleter_splitpath_callback) {
            const auto path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;
            const char** callback_ret = qcompleter_splitpath_callback(this, cbval1);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            libqt_free(path_str);
            return callback_ret_QList;
        }
        return QCompleter::splitPath(path);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (qcompleter_eventfilter_callback) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;
            bool callback_ret = qcompleter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCompleter::eventFilter(o, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qcompleter_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qcompleter_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCompleter::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcompleter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcompleter_timerevent_callback(this, cbval1);
            return;
        }
        QCompleter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcompleter_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcompleter_childevent_callback(this, cbval1);
            return;
        }
        QCompleter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcompleter_customevent_callback) {
            QEvent* cbval1 = event;
            qcompleter_customevent_callback(this, cbval1);
            return;
        }
        QCompleter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcompleter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcompleter_connectnotify_callback(this, cbval1);
            return;
        }
        QCompleter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcompleter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcompleter_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCompleter::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QCompleter_SuperEventFilter(QCompleter* self, QObject* o, QEvent* e);
    friend bool QCompleter_SuperEvent(QCompleter* self, QEvent* param1);
    friend void QCompleter_SuperTimerEvent(QCompleter* self, QTimerEvent* event);
    friend void QCompleter_SuperChildEvent(QCompleter* self, QChildEvent* event);
    friend void QCompleter_SuperCustomEvent(QCompleter* self, QEvent* event);
    friend void QCompleter_SuperConnectNotify(QCompleter* self, const QMetaMethod* signal);
    friend void QCompleter_SuperDisconnectNotify(QCompleter* self, const QMetaMethod* signal);
};

#endif
