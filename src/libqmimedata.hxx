#pragma once
#ifndef LIBQMIMEDATA_HXX
#define LIBQMIMEDATA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMimeData
class VirtualQMimeData final : public QMimeData {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMimeData_MetaObject_Callback = QMetaObject* (*)(const QMimeData*);
    using QMimeData_Metacast_Callback = void* (*)(QMimeData*, const char*);
    using QMimeData_Metacall_Callback = int (*)(QMimeData*, int, int, void**);
    using QMimeData_HasFormat_Callback = bool (*)(const QMimeData*, const char*);
    using QMimeData_Formats_Callback = const char** (*)(const QMimeData*);
    using QMimeData_RetrieveData_Callback = QVariant* (*)(const QMimeData*, const char*, QMetaType*);
    using QMimeData_Event_Callback = bool (*)(QMimeData*, QEvent*);
    using QMimeData_EventFilter_Callback = bool (*)(QMimeData*, QObject*, QEvent*);
    using QMimeData_TimerEvent_Callback = void (*)(QMimeData*, QTimerEvent*);
    using QMimeData_ChildEvent_Callback = void (*)(QMimeData*, QChildEvent*);
    using QMimeData_CustomEvent_Callback = void (*)(QMimeData*, QEvent*);
    using QMimeData_ConnectNotify_Callback = void (*)(QMimeData*, QMetaMethod*);
    using QMimeData_DisconnectNotify_Callback = void (*)(QMimeData*, QMetaMethod*);
    using QMimeData::isSignalConnected;
    using QMimeData::receivers;
    using QMimeData::sender;
    using QMimeData::senderSignalIndex;

    // Instance callback storage
    QMimeData_MetaObject_Callback qmimedata_metaobject_callback = nullptr;
    QMimeData_Metacast_Callback qmimedata_metacast_callback = nullptr;
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

    // Access struct
    struct Base : QMimeData {
        using QMimeData::childEvent;
        using QMimeData::connectNotify;
        using QMimeData::customEvent;
        using QMimeData::disconnectNotify;
        using QMimeData::retrieveData;
        using QMimeData::timerEvent;
    };

    VirtualQMimeData() : QMimeData() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmimedata_metaobject_callback) {
            QMetaObject* callback_ret = qmimedata_metaobject_callback(this);
            return callback_ret;
        }
        return QMimeData::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmimedata_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmimedata_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMimeData::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmimedata_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmimedata_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMimeData::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasFormat(const QString& mimetype) const override {
        if (qmimedata_hasformat_callback) {
            const auto mimetype_ret = mimetype;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray mimetype_b = mimetype_ret.toUtf8();
            auto mimetype_str_len = mimetype_b.length();
            const char* mimetype_str = static_cast<const char*>(malloc(mimetype_str_len + 1));
            memcpy((void*)mimetype_str, mimetype_b.data(), mimetype_str_len);
            ((char*)mimetype_str)[mimetype_str_len] = '\0';
            const char* cbval1 = mimetype_str;
            bool callback_ret = qmimedata_hasformat_callback(this, cbval1);
            libqt_free(mimetype_str);
            return callback_ret;
        }
        return QMimeData::hasFormat(mimetype);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> formats() const override {
        if (qmimedata_formats_callback) {
            const char** callback_ret = qmimedata_formats_callback(this);
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
        return QMimeData::formats();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant retrieveData(const QString& mimetype, QMetaType preferredType) const override {
        if (qmimedata_retrievedata_callback) {
            const auto mimetype_ret = mimetype;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray mimetype_b = mimetype_ret.toUtf8();
            auto mimetype_str_len = mimetype_b.length();
            const char* mimetype_str = static_cast<const char*>(malloc(mimetype_str_len + 1));
            memcpy((void*)mimetype_str, mimetype_b.data(), mimetype_str_len);
            ((char*)mimetype_str)[mimetype_str_len] = '\0';
            const char* cbval1 = mimetype_str;
            QMetaType* cbval2 = new QMetaType(preferredType);
            QVariant* callback_ret = qmimedata_retrievedata_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(mimetype_str);
            return callback_ret_Value;
        }
        return QMimeData::retrieveData(mimetype, preferredType);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmimedata_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmimedata_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMimeData::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmimedata_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmimedata_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMimeData::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmimedata_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmimedata_timerevent_callback(this, cbval1);
            return;
        }
        QMimeData::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmimedata_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmimedata_childevent_callback(this, cbval1);
            return;
        }
        QMimeData::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmimedata_customevent_callback) {
            QEvent* cbval1 = event;
            qmimedata_customevent_callback(this, cbval1);
            return;
        }
        QMimeData::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmimedata_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmimedata_connectnotify_callback(this, cbval1);
            return;
        }
        QMimeData::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmimedata_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmimedata_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMimeData::disconnectNotify(signal);
    }

    // Friend functions
    friend QVariant* QMimeData_SuperRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
    friend void QMimeData_SuperTimerEvent(QMimeData* self, QTimerEvent* event);
    friend void QMimeData_SuperChildEvent(QMimeData* self, QChildEvent* event);
    friend void QMimeData_SuperCustomEvent(QMimeData* self, QEvent* event);
    friend void QMimeData_SuperConnectNotify(QMimeData* self, const QMetaMethod* signal);
    friend void QMimeData_SuperDisconnectNotify(QMimeData* self, const QMetaMethod* signal);
};

#endif
