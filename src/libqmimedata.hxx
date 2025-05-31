#pragma once
#ifndef SRCC_LIBVIRTUALQMIMEDATA_H
#define SRCC_LIBVIRTUALQMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMimeData so that we can call protected methods
class VirtualQMimeData final : public QMimeData {

  public:
    // Virtual class boolean flag
    bool isVirtualQMimeData = true;

    // Virtual class public types (including callbacks)
    using QMimeData_Metacall_Callback = int (*)(QMimeData*, int, int, void**);
    using QMimeData_HasFormat_Callback = bool (*)(const QMimeData*, libqt_string);
    using QMimeData_Formats_Callback = libqt_list /* of libqt_string */ (*)();
    using QMimeData_RetrieveData_Callback = QVariant* (*)(const QMimeData*, libqt_string, QMetaType*);
    using QMimeData_Event_Callback = bool (*)(QMimeData*, QEvent*);
    using QMimeData_EventFilter_Callback = bool (*)(QMimeData*, QObject*, QEvent*);
    using QMimeData_TimerEvent_Callback = void (*)(QMimeData*, QTimerEvent*);
    using QMimeData_ChildEvent_Callback = void (*)(QMimeData*, QChildEvent*);
    using QMimeData_CustomEvent_Callback = void (*)(QMimeData*, QEvent*);
    using QMimeData_ConnectNotify_Callback = void (*)(QMimeData*, QMetaMethod*);
    using QMimeData_DisconnectNotify_Callback = void (*)(QMimeData*, QMetaMethod*);
    using QMimeData_Sender_Callback = QObject* (*)();
    using QMimeData_SenderSignalIndex_Callback = int (*)();
    using QMimeData_Receivers_Callback = int (*)(const QMimeData*, const char*);
    using QMimeData_IsSignalConnected_Callback = bool (*)(const QMimeData*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMimeData_Metacall_Callback qmimedata_metacall_callback = nullptr;
    QMimeData_HasFormat_Callback qmimedata_hasformat_callback = nullptr;
    QMimeData_Formats_Callback qmimedata_formats_callback = nullptr;
    QMimeData_RetrieveData_Callback qmimedata_retrievedata_callback = nullptr;
    QMimeData_Event_Callback qmimedata_event_callback = nullptr;
    QMimeData_EventFilter_Callback qmimedata_eventfilter_callback = nullptr;
    QMimeData_TimerEvent_Callback qmimedata_timerevent_callback = nullptr;
    QMimeData_ChildEvent_Callback qmimedata_childevent_callback = nullptr;
    QMimeData_CustomEvent_Callback qmimedata_customevent_callback = nullptr;
    QMimeData_ConnectNotify_Callback qmimedata_connectnotify_callback = nullptr;
    QMimeData_DisconnectNotify_Callback qmimedata_disconnectnotify_callback = nullptr;
    QMimeData_Sender_Callback qmimedata_sender_callback = nullptr;
    QMimeData_SenderSignalIndex_Callback qmimedata_sendersignalindex_callback = nullptr;
    QMimeData_Receivers_Callback qmimedata_receivers_callback = nullptr;
    QMimeData_IsSignalConnected_Callback qmimedata_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmimedata_metacall_isbase = false;
    mutable bool qmimedata_hasformat_isbase = false;
    mutable bool qmimedata_formats_isbase = false;
    mutable bool qmimedata_retrievedata_isbase = false;
    mutable bool qmimedata_event_isbase = false;
    mutable bool qmimedata_eventfilter_isbase = false;
    mutable bool qmimedata_timerevent_isbase = false;
    mutable bool qmimedata_childevent_isbase = false;
    mutable bool qmimedata_customevent_isbase = false;
    mutable bool qmimedata_connectnotify_isbase = false;
    mutable bool qmimedata_disconnectnotify_isbase = false;
    mutable bool qmimedata_sender_isbase = false;
    mutable bool qmimedata_sendersignalindex_isbase = false;
    mutable bool qmimedata_receivers_isbase = false;
    mutable bool qmimedata_issignalconnected_isbase = false;

  public:
    VirtualQMimeData() : QMimeData(){};

    ~VirtualQMimeData() {
        qmimedata_metacall_callback = nullptr;
        qmimedata_hasformat_callback = nullptr;
        qmimedata_formats_callback = nullptr;
        qmimedata_retrievedata_callback = nullptr;
        qmimedata_event_callback = nullptr;
        qmimedata_eventfilter_callback = nullptr;
        qmimedata_timerevent_callback = nullptr;
        qmimedata_childevent_callback = nullptr;
        qmimedata_customevent_callback = nullptr;
        qmimedata_connectnotify_callback = nullptr;
        qmimedata_disconnectnotify_callback = nullptr;
        qmimedata_sender_callback = nullptr;
        qmimedata_sendersignalindex_callback = nullptr;
        qmimedata_receivers_callback = nullptr;
        qmimedata_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQMimeData_Metacall_Callback(QMimeData_Metacall_Callback cb) { qmimedata_metacall_callback = cb; }
    inline void setQMimeData_HasFormat_Callback(QMimeData_HasFormat_Callback cb) { qmimedata_hasformat_callback = cb; }
    inline void setQMimeData_Formats_Callback(QMimeData_Formats_Callback cb) { qmimedata_formats_callback = cb; }
    inline void setQMimeData_RetrieveData_Callback(QMimeData_RetrieveData_Callback cb) { qmimedata_retrievedata_callback = cb; }
    inline void setQMimeData_Event_Callback(QMimeData_Event_Callback cb) { qmimedata_event_callback = cb; }
    inline void setQMimeData_EventFilter_Callback(QMimeData_EventFilter_Callback cb) { qmimedata_eventfilter_callback = cb; }
    inline void setQMimeData_TimerEvent_Callback(QMimeData_TimerEvent_Callback cb) { qmimedata_timerevent_callback = cb; }
    inline void setQMimeData_ChildEvent_Callback(QMimeData_ChildEvent_Callback cb) { qmimedata_childevent_callback = cb; }
    inline void setQMimeData_CustomEvent_Callback(QMimeData_CustomEvent_Callback cb) { qmimedata_customevent_callback = cb; }
    inline void setQMimeData_ConnectNotify_Callback(QMimeData_ConnectNotify_Callback cb) { qmimedata_connectnotify_callback = cb; }
    inline void setQMimeData_DisconnectNotify_Callback(QMimeData_DisconnectNotify_Callback cb) { qmimedata_disconnectnotify_callback = cb; }
    inline void setQMimeData_Sender_Callback(QMimeData_Sender_Callback cb) { qmimedata_sender_callback = cb; }
    inline void setQMimeData_SenderSignalIndex_Callback(QMimeData_SenderSignalIndex_Callback cb) { qmimedata_sendersignalindex_callback = cb; }
    inline void setQMimeData_Receivers_Callback(QMimeData_Receivers_Callback cb) { qmimedata_receivers_callback = cb; }
    inline void setQMimeData_IsSignalConnected_Callback(QMimeData_IsSignalConnected_Callback cb) { qmimedata_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMimeData_Metacall_IsBase(bool value) const { qmimedata_metacall_isbase = value; }
    inline void setQMimeData_HasFormat_IsBase(bool value) const { qmimedata_hasformat_isbase = value; }
    inline void setQMimeData_Formats_IsBase(bool value) const { qmimedata_formats_isbase = value; }
    inline void setQMimeData_RetrieveData_IsBase(bool value) const { qmimedata_retrievedata_isbase = value; }
    inline void setQMimeData_Event_IsBase(bool value) const { qmimedata_event_isbase = value; }
    inline void setQMimeData_EventFilter_IsBase(bool value) const { qmimedata_eventfilter_isbase = value; }
    inline void setQMimeData_TimerEvent_IsBase(bool value) const { qmimedata_timerevent_isbase = value; }
    inline void setQMimeData_ChildEvent_IsBase(bool value) const { qmimedata_childevent_isbase = value; }
    inline void setQMimeData_CustomEvent_IsBase(bool value) const { qmimedata_customevent_isbase = value; }
    inline void setQMimeData_ConnectNotify_IsBase(bool value) const { qmimedata_connectnotify_isbase = value; }
    inline void setQMimeData_DisconnectNotify_IsBase(bool value) const { qmimedata_disconnectnotify_isbase = value; }
    inline void setQMimeData_Sender_IsBase(bool value) const { qmimedata_sender_isbase = value; }
    inline void setQMimeData_SenderSignalIndex_IsBase(bool value) const { qmimedata_sendersignalindex_isbase = value; }
    inline void setQMimeData_Receivers_IsBase(bool value) const { qmimedata_receivers_isbase = value; }
    inline void setQMimeData_IsSignalConnected_IsBase(bool value) const { qmimedata_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmimedata_metacall_isbase) {
            qmimedata_metacall_isbase = false;
            return QMimeData::qt_metacall(param1, param2, param3);
        } else if (qmimedata_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmimedata_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMimeData::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasFormat(const QString& mimetype) const override {
        if (qmimedata_hasformat_isbase) {
            qmimedata_hasformat_isbase = false;
            return QMimeData::hasFormat(mimetype);
        } else if (qmimedata_hasformat_callback != nullptr) {
            const QString mimetype_ret = mimetype;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray mimetype_b = mimetype_ret.toUtf8();
            libqt_string mimetype_str;
            mimetype_str.len = mimetype_b.length();
            mimetype_str.data = static_cast<char*>(malloc((mimetype_str.len + 1) * sizeof(char)));
            memcpy(mimetype_str.data, mimetype_b.data(), mimetype_str.len);
            mimetype_str.data[mimetype_str.len] = '\0';
            libqt_string cbval1 = mimetype_str;

            bool callback_ret = qmimedata_hasformat_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMimeData::hasFormat(mimetype);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList formats() const override {
        if (qmimedata_formats_isbase) {
            qmimedata_formats_isbase = false;
            return QMimeData::formats();
        } else if (qmimedata_formats_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qmimedata_formats_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QMimeData::formats();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant retrieveData(const QString& mimetype, QMetaType preferredType) const override {
        if (qmimedata_retrievedata_isbase) {
            qmimedata_retrievedata_isbase = false;
            return QMimeData::retrieveData(mimetype, preferredType);
        } else if (qmimedata_retrievedata_callback != nullptr) {
            const QString mimetype_ret = mimetype;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray mimetype_b = mimetype_ret.toUtf8();
            libqt_string mimetype_str;
            mimetype_str.len = mimetype_b.length();
            mimetype_str.data = static_cast<char*>(malloc((mimetype_str.len + 1) * sizeof(char)));
            memcpy(mimetype_str.data, mimetype_b.data(), mimetype_str.len);
            mimetype_str.data[mimetype_str.len] = '\0';
            libqt_string cbval1 = mimetype_str;
            QMetaType* cbval2 = new QMetaType(preferredType);

            QVariant* callback_ret = qmimedata_retrievedata_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QMimeData::retrieveData(mimetype, preferredType);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmimedata_event_isbase) {
            qmimedata_event_isbase = false;
            return QMimeData::event(event);
        } else if (qmimedata_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qmimedata_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMimeData::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmimedata_eventfilter_isbase) {
            qmimedata_eventfilter_isbase = false;
            return QMimeData::eventFilter(watched, event);
        } else if (qmimedata_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qmimedata_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMimeData::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmimedata_timerevent_isbase) {
            qmimedata_timerevent_isbase = false;
            QMimeData::timerEvent(event);
        } else if (qmimedata_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qmimedata_timerevent_callback(this, cbval1);
        } else {
            QMimeData::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmimedata_childevent_isbase) {
            qmimedata_childevent_isbase = false;
            QMimeData::childEvent(event);
        } else if (qmimedata_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qmimedata_childevent_callback(this, cbval1);
        } else {
            QMimeData::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmimedata_customevent_isbase) {
            qmimedata_customevent_isbase = false;
            QMimeData::customEvent(event);
        } else if (qmimedata_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmimedata_customevent_callback(this, cbval1);
        } else {
            QMimeData::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmimedata_connectnotify_isbase) {
            qmimedata_connectnotify_isbase = false;
            QMimeData::connectNotify(signal);
        } else if (qmimedata_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmimedata_connectnotify_callback(this, cbval1);
        } else {
            QMimeData::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmimedata_disconnectnotify_isbase) {
            qmimedata_disconnectnotify_isbase = false;
            QMimeData::disconnectNotify(signal);
        } else if (qmimedata_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmimedata_disconnectnotify_callback(this, cbval1);
        } else {
            QMimeData::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmimedata_sender_isbase) {
            qmimedata_sender_isbase = false;
            return QMimeData::sender();
        } else if (qmimedata_sender_callback != nullptr) {
            QObject* callback_ret = qmimedata_sender_callback();
            return callback_ret;
        } else {
            return QMimeData::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmimedata_sendersignalindex_isbase) {
            qmimedata_sendersignalindex_isbase = false;
            return QMimeData::senderSignalIndex();
        } else if (qmimedata_sendersignalindex_callback != nullptr) {
            int callback_ret = qmimedata_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMimeData::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmimedata_receivers_isbase) {
            qmimedata_receivers_isbase = false;
            return QMimeData::receivers(signal);
        } else if (qmimedata_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmimedata_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMimeData::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmimedata_issignalconnected_isbase) {
            qmimedata_issignalconnected_isbase = false;
            return QMimeData::isSignalConnected(signal);
        } else if (qmimedata_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmimedata_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMimeData::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QVariant* QMimeData_RetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
    friend QVariant* QMimeData_QBaseRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
    friend void QMimeData_TimerEvent(QMimeData* self, QTimerEvent* event);
    friend void QMimeData_QBaseTimerEvent(QMimeData* self, QTimerEvent* event);
    friend void QMimeData_ChildEvent(QMimeData* self, QChildEvent* event);
    friend void QMimeData_QBaseChildEvent(QMimeData* self, QChildEvent* event);
    friend void QMimeData_CustomEvent(QMimeData* self, QEvent* event);
    friend void QMimeData_QBaseCustomEvent(QMimeData* self, QEvent* event);
    friend void QMimeData_ConnectNotify(QMimeData* self, const QMetaMethod* signal);
    friend void QMimeData_QBaseConnectNotify(QMimeData* self, const QMetaMethod* signal);
    friend void QMimeData_DisconnectNotify(QMimeData* self, const QMetaMethod* signal);
    friend void QMimeData_QBaseDisconnectNotify(QMimeData* self, const QMetaMethod* signal);
    friend QObject* QMimeData_Sender(const QMimeData* self);
    friend QObject* QMimeData_QBaseSender(const QMimeData* self);
    friend int QMimeData_SenderSignalIndex(const QMimeData* self);
    friend int QMimeData_QBaseSenderSignalIndex(const QMimeData* self);
    friend int QMimeData_Receivers(const QMimeData* self, const char* signal);
    friend int QMimeData_QBaseReceivers(const QMimeData* self, const char* signal);
    friend bool QMimeData_IsSignalConnected(const QMimeData* self, const QMetaMethod* signal);
    friend bool QMimeData_QBaseIsSignalConnected(const QMimeData* self, const QMetaMethod* signal);
};

#endif
