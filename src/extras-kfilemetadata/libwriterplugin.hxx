#pragma once
#ifndef EXTRAS_KFILEMETADATA_LIBWRITERPLUGIN_HXX
#define EXTRAS_KFILEMETADATA_LIBWRITERPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::WriterPlugin
class VirtualKFileMetaDataWriterPlugin : public KFileMetaData::WriterPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileMetaData__WriterPlugin_MetaObject_Callback = QMetaObject* (*)(const KFileMetaData__WriterPlugin*);
    using KFileMetaData__WriterPlugin_Metacast_Callback = void* (*)(KFileMetaData__WriterPlugin*, const char*);
    using KFileMetaData__WriterPlugin_Metacall_Callback = int (*)(KFileMetaData__WriterPlugin*, int, int, void**);
    using KFileMetaData__WriterPlugin_WriteMimetypes_Callback = const char** (*)(const KFileMetaData__WriterPlugin*);
    using KFileMetaData__WriterPlugin_Write_Callback = void (*)(KFileMetaData__WriterPlugin*, KFileMetaData__WriteData*);
    using KFileMetaData__WriterPlugin_Event_Callback = bool (*)(KFileMetaData__WriterPlugin*, QEvent*);
    using KFileMetaData__WriterPlugin_EventFilter_Callback = bool (*)(KFileMetaData__WriterPlugin*, QObject*, QEvent*);
    using KFileMetaData__WriterPlugin_TimerEvent_Callback = void (*)(KFileMetaData__WriterPlugin*, QTimerEvent*);
    using KFileMetaData__WriterPlugin_ChildEvent_Callback = void (*)(KFileMetaData__WriterPlugin*, QChildEvent*);
    using KFileMetaData__WriterPlugin_CustomEvent_Callback = void (*)(KFileMetaData__WriterPlugin*, QEvent*);
    using KFileMetaData__WriterPlugin_ConnectNotify_Callback = void (*)(KFileMetaData__WriterPlugin*, QMetaMethod*);
    using KFileMetaData__WriterPlugin_DisconnectNotify_Callback = void (*)(KFileMetaData__WriterPlugin*, QMetaMethod*);
    using KFileMetaData::WriterPlugin::isSignalConnected;
    using KFileMetaData::WriterPlugin::receivers;
    using KFileMetaData::WriterPlugin::sender;
    using KFileMetaData::WriterPlugin::senderSignalIndex;

    // Instance callback storage
    KFileMetaData__WriterPlugin_MetaObject_Callback kfilemetadata__writerplugin_metaobject_callback = nullptr;
    KFileMetaData__WriterPlugin_Metacast_Callback kfilemetadata__writerplugin_metacast_callback = nullptr;
    KFileMetaData__WriterPlugin_Metacall_Callback kfilemetadata__writerplugin_metacall_callback = nullptr;
    KFileMetaData__WriterPlugin_WriteMimetypes_Callback kfilemetadata__writerplugin_writemimetypes_callback = nullptr;
    KFileMetaData__WriterPlugin_Write_Callback kfilemetadata__writerplugin_write_callback = nullptr;
    KFileMetaData__WriterPlugin_Event_Callback kfilemetadata__writerplugin_event_callback = nullptr;
    KFileMetaData__WriterPlugin_EventFilter_Callback kfilemetadata__writerplugin_eventfilter_callback = nullptr;
    KFileMetaData__WriterPlugin_TimerEvent_Callback kfilemetadata__writerplugin_timerevent_callback = nullptr;
    KFileMetaData__WriterPlugin_ChildEvent_Callback kfilemetadata__writerplugin_childevent_callback = nullptr;
    KFileMetaData__WriterPlugin_CustomEvent_Callback kfilemetadata__writerplugin_customevent_callback = nullptr;
    KFileMetaData__WriterPlugin_ConnectNotify_Callback kfilemetadata__writerplugin_connectnotify_callback = nullptr;
    KFileMetaData__WriterPlugin_DisconnectNotify_Callback kfilemetadata__writerplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFileMetaData::WriterPlugin {
        using KFileMetaData::WriterPlugin::childEvent;
        using KFileMetaData::WriterPlugin::connectNotify;
        using KFileMetaData::WriterPlugin::customEvent;
        using KFileMetaData::WriterPlugin::disconnectNotify;
        using KFileMetaData::WriterPlugin::timerEvent;
    };

    VirtualKFileMetaDataWriterPlugin(QObject* parent) : KFileMetaData::WriterPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilemetadata__writerplugin_metaobject_callback) {
            QMetaObject* callback_ret = kfilemetadata__writerplugin_metaobject_callback(this);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilemetadata__writerplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfilemetadata__writerplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilemetadata__writerplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfilemetadata__writerplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__WriterPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> writeMimetypes() const override {
        if (kfilemetadata__writerplugin_writemimetypes_callback) {
            const char** callback_ret = kfilemetadata__writerplugin_writemimetypes_callback(this);
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
        // Pure virtual method
        qFatal("Error: Pure virtual method KFileMetaData::WriterPlugin::writeMimetypes called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void write(const KFileMetaData::WriteData& data) override {
        if (kfilemetadata__writerplugin_write_callback) {
            const KFileMetaData::WriteData& data_ret = data;
            // Cast returned reference into pointer
            KFileMetaData__WriteData* cbval1 = const_cast<KFileMetaData::WriteData*>(&data_ret);
            kfilemetadata__writerplugin_write_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFileMetaData::WriterPlugin::write called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilemetadata__writerplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfilemetadata__writerplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilemetadata__writerplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfilemetadata__writerplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileMetaData__WriterPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilemetadata__writerplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfilemetadata__writerplugin_timerevent_callback(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilemetadata__writerplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfilemetadata__writerplugin_childevent_callback(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilemetadata__writerplugin_customevent_callback) {
            QEvent* cbval1 = event;
            kfilemetadata__writerplugin_customevent_callback(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__writerplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilemetadata__writerplugin_connectnotify_callback(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__writerplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilemetadata__writerplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileMetaData__WriterPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFileMetaData__WriterPlugin_SuperTimerEvent(KFileMetaData::WriterPlugin* self, QTimerEvent* event);
    friend void KFileMetaData__WriterPlugin_SuperChildEvent(KFileMetaData::WriterPlugin* self, QChildEvent* event);
    friend void KFileMetaData__WriterPlugin_SuperCustomEvent(KFileMetaData::WriterPlugin* self, QEvent* event);
    friend void KFileMetaData__WriterPlugin_SuperConnectNotify(KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__WriterPlugin_SuperDisconnectNotify(KFileMetaData::WriterPlugin* self, const QMetaMethod* signal);
};

#endif
