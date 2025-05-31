#pragma once
#ifndef SRCC_LIBVIRTUALQCOMPLETER_H
#define SRCC_LIBVIRTUALQCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCompleter so that we can call protected methods
class VirtualQCompleter final : public QCompleter {

  public:
    // Virtual class boolean flag
    bool isVirtualQCompleter = true;

    // Virtual class public types (including callbacks)
    using QCompleter_Metacall_Callback = int (*)(QCompleter*, int, int, void**);
    using QCompleter_PathFromIndex_Callback = libqt_string (*)(const QCompleter*, QModelIndex*);
    using QCompleter_SplitPath_Callback = libqt_list /* of libqt_string */ (*)(const QCompleter*, libqt_string);
    using QCompleter_EventFilter_Callback = bool (*)(QCompleter*, QObject*, QEvent*);
    using QCompleter_Event_Callback = bool (*)(QCompleter*, QEvent*);
    using QCompleter_TimerEvent_Callback = void (*)(QCompleter*, QTimerEvent*);
    using QCompleter_ChildEvent_Callback = void (*)(QCompleter*, QChildEvent*);
    using QCompleter_CustomEvent_Callback = void (*)(QCompleter*, QEvent*);
    using QCompleter_ConnectNotify_Callback = void (*)(QCompleter*, QMetaMethod*);
    using QCompleter_DisconnectNotify_Callback = void (*)(QCompleter*, QMetaMethod*);
    using QCompleter_Sender_Callback = QObject* (*)();
    using QCompleter_SenderSignalIndex_Callback = int (*)();
    using QCompleter_Receivers_Callback = int (*)(const QCompleter*, const char*);
    using QCompleter_IsSignalConnected_Callback = bool (*)(const QCompleter*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    QCompleter_Sender_Callback qcompleter_sender_callback = nullptr;
    QCompleter_SenderSignalIndex_Callback qcompleter_sendersignalindex_callback = nullptr;
    QCompleter_Receivers_Callback qcompleter_receivers_callback = nullptr;
    QCompleter_IsSignalConnected_Callback qcompleter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcompleter_metacall_isbase = false;
    mutable bool qcompleter_pathfromindex_isbase = false;
    mutable bool qcompleter_splitpath_isbase = false;
    mutable bool qcompleter_eventfilter_isbase = false;
    mutable bool qcompleter_event_isbase = false;
    mutable bool qcompleter_timerevent_isbase = false;
    mutable bool qcompleter_childevent_isbase = false;
    mutable bool qcompleter_customevent_isbase = false;
    mutable bool qcompleter_connectnotify_isbase = false;
    mutable bool qcompleter_disconnectnotify_isbase = false;
    mutable bool qcompleter_sender_isbase = false;
    mutable bool qcompleter_sendersignalindex_isbase = false;
    mutable bool qcompleter_receivers_isbase = false;
    mutable bool qcompleter_issignalconnected_isbase = false;

  public:
    VirtualQCompleter() : QCompleter(){};
    VirtualQCompleter(QAbstractItemModel* model) : QCompleter(model){};
    VirtualQCompleter(const QStringList& completions) : QCompleter(completions){};
    VirtualQCompleter(QObject* parent) : QCompleter(parent){};
    VirtualQCompleter(QAbstractItemModel* model, QObject* parent) : QCompleter(model, parent){};
    VirtualQCompleter(const QStringList& completions, QObject* parent) : QCompleter(completions, parent){};

    ~VirtualQCompleter() {
        qcompleter_metacall_callback = nullptr;
        qcompleter_pathfromindex_callback = nullptr;
        qcompleter_splitpath_callback = nullptr;
        qcompleter_eventfilter_callback = nullptr;
        qcompleter_event_callback = nullptr;
        qcompleter_timerevent_callback = nullptr;
        qcompleter_childevent_callback = nullptr;
        qcompleter_customevent_callback = nullptr;
        qcompleter_connectnotify_callback = nullptr;
        qcompleter_disconnectnotify_callback = nullptr;
        qcompleter_sender_callback = nullptr;
        qcompleter_sendersignalindex_callback = nullptr;
        qcompleter_receivers_callback = nullptr;
        qcompleter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQCompleter_Metacall_Callback(QCompleter_Metacall_Callback cb) { qcompleter_metacall_callback = cb; }
    inline void setQCompleter_PathFromIndex_Callback(QCompleter_PathFromIndex_Callback cb) { qcompleter_pathfromindex_callback = cb; }
    inline void setQCompleter_SplitPath_Callback(QCompleter_SplitPath_Callback cb) { qcompleter_splitpath_callback = cb; }
    inline void setQCompleter_EventFilter_Callback(QCompleter_EventFilter_Callback cb) { qcompleter_eventfilter_callback = cb; }
    inline void setQCompleter_Event_Callback(QCompleter_Event_Callback cb) { qcompleter_event_callback = cb; }
    inline void setQCompleter_TimerEvent_Callback(QCompleter_TimerEvent_Callback cb) { qcompleter_timerevent_callback = cb; }
    inline void setQCompleter_ChildEvent_Callback(QCompleter_ChildEvent_Callback cb) { qcompleter_childevent_callback = cb; }
    inline void setQCompleter_CustomEvent_Callback(QCompleter_CustomEvent_Callback cb) { qcompleter_customevent_callback = cb; }
    inline void setQCompleter_ConnectNotify_Callback(QCompleter_ConnectNotify_Callback cb) { qcompleter_connectnotify_callback = cb; }
    inline void setQCompleter_DisconnectNotify_Callback(QCompleter_DisconnectNotify_Callback cb) { qcompleter_disconnectnotify_callback = cb; }
    inline void setQCompleter_Sender_Callback(QCompleter_Sender_Callback cb) { qcompleter_sender_callback = cb; }
    inline void setQCompleter_SenderSignalIndex_Callback(QCompleter_SenderSignalIndex_Callback cb) { qcompleter_sendersignalindex_callback = cb; }
    inline void setQCompleter_Receivers_Callback(QCompleter_Receivers_Callback cb) { qcompleter_receivers_callback = cb; }
    inline void setQCompleter_IsSignalConnected_Callback(QCompleter_IsSignalConnected_Callback cb) { qcompleter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQCompleter_Metacall_IsBase(bool value) const { qcompleter_metacall_isbase = value; }
    inline void setQCompleter_PathFromIndex_IsBase(bool value) const { qcompleter_pathfromindex_isbase = value; }
    inline void setQCompleter_SplitPath_IsBase(bool value) const { qcompleter_splitpath_isbase = value; }
    inline void setQCompleter_EventFilter_IsBase(bool value) const { qcompleter_eventfilter_isbase = value; }
    inline void setQCompleter_Event_IsBase(bool value) const { qcompleter_event_isbase = value; }
    inline void setQCompleter_TimerEvent_IsBase(bool value) const { qcompleter_timerevent_isbase = value; }
    inline void setQCompleter_ChildEvent_IsBase(bool value) const { qcompleter_childevent_isbase = value; }
    inline void setQCompleter_CustomEvent_IsBase(bool value) const { qcompleter_customevent_isbase = value; }
    inline void setQCompleter_ConnectNotify_IsBase(bool value) const { qcompleter_connectnotify_isbase = value; }
    inline void setQCompleter_DisconnectNotify_IsBase(bool value) const { qcompleter_disconnectnotify_isbase = value; }
    inline void setQCompleter_Sender_IsBase(bool value) const { qcompleter_sender_isbase = value; }
    inline void setQCompleter_SenderSignalIndex_IsBase(bool value) const { qcompleter_sendersignalindex_isbase = value; }
    inline void setQCompleter_Receivers_IsBase(bool value) const { qcompleter_receivers_isbase = value; }
    inline void setQCompleter_IsSignalConnected_IsBase(bool value) const { qcompleter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcompleter_metacall_isbase) {
            qcompleter_metacall_isbase = false;
            return QCompleter::qt_metacall(param1, param2, param3);
        } else if (qcompleter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcompleter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCompleter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString pathFromIndex(const QModelIndex& index) const override {
        if (qcompleter_pathfromindex_isbase) {
            qcompleter_pathfromindex_isbase = false;
            return QCompleter::pathFromIndex(index);
        } else if (qcompleter_pathfromindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);

            libqt_string callback_ret = qcompleter_pathfromindex_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QCompleter::pathFromIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList splitPath(const QString& path) const override {
        if (qcompleter_splitpath_isbase) {
            qcompleter_splitpath_isbase = false;
            return QCompleter::splitPath(path);
        } else if (qcompleter_splitpath_callback != nullptr) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            libqt_string path_str;
            path_str.len = path_b.length();
            path_str.data = static_cast<char*>(malloc((path_str.len + 1) * sizeof(char)));
            memcpy(path_str.data, path_b.data(), path_str.len);
            path_str.data[path_str.len] = '\0';
            libqt_string cbval1 = path_str;

            libqt_list /* of libqt_string */ callback_ret = qcompleter_splitpath_callback(this, cbval1);
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QCompleter::splitPath(path);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (qcompleter_eventfilter_isbase) {
            qcompleter_eventfilter_isbase = false;
            return QCompleter::eventFilter(o, e);
        } else if (qcompleter_eventfilter_callback != nullptr) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;

            bool callback_ret = qcompleter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCompleter::eventFilter(o, e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qcompleter_event_isbase) {
            qcompleter_event_isbase = false;
            return QCompleter::event(param1);
        } else if (qcompleter_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qcompleter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCompleter::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcompleter_timerevent_isbase) {
            qcompleter_timerevent_isbase = false;
            QCompleter::timerEvent(event);
        } else if (qcompleter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qcompleter_timerevent_callback(this, cbval1);
        } else {
            QCompleter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcompleter_childevent_isbase) {
            qcompleter_childevent_isbase = false;
            QCompleter::childEvent(event);
        } else if (qcompleter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcompleter_childevent_callback(this, cbval1);
        } else {
            QCompleter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcompleter_customevent_isbase) {
            qcompleter_customevent_isbase = false;
            QCompleter::customEvent(event);
        } else if (qcompleter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcompleter_customevent_callback(this, cbval1);
        } else {
            QCompleter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcompleter_connectnotify_isbase) {
            qcompleter_connectnotify_isbase = false;
            QCompleter::connectNotify(signal);
        } else if (qcompleter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcompleter_connectnotify_callback(this, cbval1);
        } else {
            QCompleter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcompleter_disconnectnotify_isbase) {
            qcompleter_disconnectnotify_isbase = false;
            QCompleter::disconnectNotify(signal);
        } else if (qcompleter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcompleter_disconnectnotify_callback(this, cbval1);
        } else {
            QCompleter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcompleter_sender_isbase) {
            qcompleter_sender_isbase = false;
            return QCompleter::sender();
        } else if (qcompleter_sender_callback != nullptr) {
            QObject* callback_ret = qcompleter_sender_callback();
            return callback_ret;
        } else {
            return QCompleter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcompleter_sendersignalindex_isbase) {
            qcompleter_sendersignalindex_isbase = false;
            return QCompleter::senderSignalIndex();
        } else if (qcompleter_sendersignalindex_callback != nullptr) {
            int callback_ret = qcompleter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCompleter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcompleter_receivers_isbase) {
            qcompleter_receivers_isbase = false;
            return QCompleter::receivers(signal);
        } else if (qcompleter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcompleter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCompleter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcompleter_issignalconnected_isbase) {
            qcompleter_issignalconnected_isbase = false;
            return QCompleter::isSignalConnected(signal);
        } else if (qcompleter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcompleter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCompleter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QCompleter_EventFilter(QCompleter* self, QObject* o, QEvent* e);
    friend bool QCompleter_QBaseEventFilter(QCompleter* self, QObject* o, QEvent* e);
    friend bool QCompleter_Event(QCompleter* self, QEvent* param1);
    friend bool QCompleter_QBaseEvent(QCompleter* self, QEvent* param1);
    friend void QCompleter_TimerEvent(QCompleter* self, QTimerEvent* event);
    friend void QCompleter_QBaseTimerEvent(QCompleter* self, QTimerEvent* event);
    friend void QCompleter_ChildEvent(QCompleter* self, QChildEvent* event);
    friend void QCompleter_QBaseChildEvent(QCompleter* self, QChildEvent* event);
    friend void QCompleter_CustomEvent(QCompleter* self, QEvent* event);
    friend void QCompleter_QBaseCustomEvent(QCompleter* self, QEvent* event);
    friend void QCompleter_ConnectNotify(QCompleter* self, const QMetaMethod* signal);
    friend void QCompleter_QBaseConnectNotify(QCompleter* self, const QMetaMethod* signal);
    friend void QCompleter_DisconnectNotify(QCompleter* self, const QMetaMethod* signal);
    friend void QCompleter_QBaseDisconnectNotify(QCompleter* self, const QMetaMethod* signal);
    friend QObject* QCompleter_Sender(const QCompleter* self);
    friend QObject* QCompleter_QBaseSender(const QCompleter* self);
    friend int QCompleter_SenderSignalIndex(const QCompleter* self);
    friend int QCompleter_QBaseSenderSignalIndex(const QCompleter* self);
    friend int QCompleter_Receivers(const QCompleter* self, const char* signal);
    friend int QCompleter_QBaseReceivers(const QCompleter* self, const char* signal);
    friend bool QCompleter_IsSignalConnected(const QCompleter* self, const QMetaMethod* signal);
    friend bool QCompleter_QBaseIsSignalConnected(const QCompleter* self, const QMetaMethod* signal);
};

#endif
