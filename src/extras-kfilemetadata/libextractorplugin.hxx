#pragma once
#ifndef EXTRAS_KFILEMETADATA_LIBEXTRACTORPLUGIN_HXX
#define EXTRAS_KFILEMETADATA_LIBEXTRACTORPLUGIN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileMetaData::ExtractorPlugin
class VirtualKFileMetaDataExtractorPlugin : public KFileMetaData::ExtractorPlugin {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFileMetaData__ExtractorPlugin_MetaObject_Callback = QMetaObject* (*)(const KFileMetaData__ExtractorPlugin*);
    using KFileMetaData__ExtractorPlugin_Metacast_Callback = void* (*)(KFileMetaData__ExtractorPlugin*, const char*);
    using KFileMetaData__ExtractorPlugin_Metacall_Callback = int (*)(KFileMetaData__ExtractorPlugin*, int, int, void**);
    using KFileMetaData__ExtractorPlugin_Mimetypes_Callback = const char** (*)(const KFileMetaData__ExtractorPlugin*);
    using KFileMetaData__ExtractorPlugin_Extract_Callback = void (*)(KFileMetaData__ExtractorPlugin*, KFileMetaData__ExtractionResult*);
    using KFileMetaData__ExtractorPlugin_Event_Callback = bool (*)(KFileMetaData__ExtractorPlugin*, QEvent*);
    using KFileMetaData__ExtractorPlugin_EventFilter_Callback = bool (*)(KFileMetaData__ExtractorPlugin*, QObject*, QEvent*);
    using KFileMetaData__ExtractorPlugin_TimerEvent_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QTimerEvent*);
    using KFileMetaData__ExtractorPlugin_ChildEvent_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QChildEvent*);
    using KFileMetaData__ExtractorPlugin_CustomEvent_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QEvent*);
    using KFileMetaData__ExtractorPlugin_ConnectNotify_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QMetaMethod*);
    using KFileMetaData__ExtractorPlugin_DisconnectNotify_Callback = void (*)(KFileMetaData__ExtractorPlugin*, QMetaMethod*);
    using KFileMetaData::ExtractorPlugin::getSupportedMimeType;
    using KFileMetaData::ExtractorPlugin::isSignalConnected;
    using KFileMetaData::ExtractorPlugin::receivers;
    using KFileMetaData::ExtractorPlugin::sender;
    using KFileMetaData::ExtractorPlugin::senderSignalIndex;

    // Instance callback storage
    KFileMetaData__ExtractorPlugin_MetaObject_Callback kfilemetadata__extractorplugin_metaobject_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Metacast_Callback kfilemetadata__extractorplugin_metacast_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Metacall_Callback kfilemetadata__extractorplugin_metacall_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Mimetypes_Callback kfilemetadata__extractorplugin_mimetypes_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Extract_Callback kfilemetadata__extractorplugin_extract_callback = nullptr;
    KFileMetaData__ExtractorPlugin_Event_Callback kfilemetadata__extractorplugin_event_callback = nullptr;
    KFileMetaData__ExtractorPlugin_EventFilter_Callback kfilemetadata__extractorplugin_eventfilter_callback = nullptr;
    KFileMetaData__ExtractorPlugin_TimerEvent_Callback kfilemetadata__extractorplugin_timerevent_callback = nullptr;
    KFileMetaData__ExtractorPlugin_ChildEvent_Callback kfilemetadata__extractorplugin_childevent_callback = nullptr;
    KFileMetaData__ExtractorPlugin_CustomEvent_Callback kfilemetadata__extractorplugin_customevent_callback = nullptr;
    KFileMetaData__ExtractorPlugin_ConnectNotify_Callback kfilemetadata__extractorplugin_connectnotify_callback = nullptr;
    KFileMetaData__ExtractorPlugin_DisconnectNotify_Callback kfilemetadata__extractorplugin_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFileMetaData::ExtractorPlugin {
        using KFileMetaData::ExtractorPlugin::childEvent;
        using KFileMetaData::ExtractorPlugin::connectNotify;
        using KFileMetaData::ExtractorPlugin::customEvent;
        using KFileMetaData::ExtractorPlugin::disconnectNotify;
        using KFileMetaData::ExtractorPlugin::timerEvent;
    };

    VirtualKFileMetaDataExtractorPlugin(QObject* parent) : KFileMetaData::ExtractorPlugin(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfilemetadata__extractorplugin_metaobject_callback) {
            QMetaObject* callback_ret = kfilemetadata__extractorplugin_metaobject_callback(this);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfilemetadata__extractorplugin_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfilemetadata__extractorplugin_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilemetadata__extractorplugin_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfilemetadata__extractorplugin_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFileMetaData__ExtractorPlugin::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> mimetypes() const override {
        if (kfilemetadata__extractorplugin_mimetypes_callback) {
            const char** callback_ret = kfilemetadata__extractorplugin_mimetypes_callback(this);
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
        qFatal("Error: Pure virtual method KFileMetaData::ExtractorPlugin::mimetypes called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void extract(KFileMetaData::ExtractionResult* result) override {
        if (kfilemetadata__extractorplugin_extract_callback) {
            KFileMetaData__ExtractionResult* cbval1 = result;
            kfilemetadata__extractorplugin_extract_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFileMetaData::ExtractorPlugin::extract called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilemetadata__extractorplugin_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfilemetadata__extractorplugin_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfilemetadata__extractorplugin_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfilemetadata__extractorplugin_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFileMetaData__ExtractorPlugin::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilemetadata__extractorplugin_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfilemetadata__extractorplugin_timerevent_callback(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilemetadata__extractorplugin_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfilemetadata__extractorplugin_childevent_callback(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilemetadata__extractorplugin_customevent_callback) {
            QEvent* cbval1 = event;
            kfilemetadata__extractorplugin_customevent_callback(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__extractorplugin_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilemetadata__extractorplugin_connectnotify_callback(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilemetadata__extractorplugin_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfilemetadata__extractorplugin_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFileMetaData__ExtractorPlugin::disconnectNotify(signal);
    }

    // Friend functions
    friend void KFileMetaData__ExtractorPlugin_SuperTimerEvent(KFileMetaData::ExtractorPlugin* self, QTimerEvent* event);
    friend void KFileMetaData__ExtractorPlugin_SuperChildEvent(KFileMetaData::ExtractorPlugin* self, QChildEvent* event);
    friend void KFileMetaData__ExtractorPlugin_SuperCustomEvent(KFileMetaData::ExtractorPlugin* self, QEvent* event);
    friend void KFileMetaData__ExtractorPlugin_SuperConnectNotify(KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
    friend void KFileMetaData__ExtractorPlugin_SuperDisconnectNotify(KFileMetaData::ExtractorPlugin* self, const QMetaMethod* signal);
};

#endif
