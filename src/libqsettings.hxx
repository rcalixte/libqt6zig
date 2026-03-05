#pragma once
#ifndef SRCC_LIBVIRTUALQSETTINGS_H
#define SRCC_LIBVIRTUALQSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSettings so that we can call protected methods
class VirtualQSettings final : public QSettings {

  public:
    // Virtual class boolean flag
    bool isVirtualQSettings = true;

    // Virtual class public types (including callbacks)
    using QSettings_MetaObject_Callback = QMetaObject* (*)();
    using QSettings_Metacast_Callback = void* (*)(QSettings*, const char*);
    using QSettings_Metacall_Callback = int (*)(QSettings*, int, int, void**);
    using QSettings_Event_Callback = bool (*)(QSettings*, QEvent*);
    using QSettings_EventFilter_Callback = bool (*)(QSettings*, QObject*, QEvent*);
    using QSettings_TimerEvent_Callback = void (*)(QSettings*, QTimerEvent*);
    using QSettings_ChildEvent_Callback = void (*)(QSettings*, QChildEvent*);
    using QSettings_CustomEvent_Callback = void (*)(QSettings*, QEvent*);
    using QSettings_ConnectNotify_Callback = void (*)(QSettings*, QMetaMethod*);
    using QSettings_DisconnectNotify_Callback = void (*)(QSettings*, QMetaMethod*);
    using QSettings_Sender_Callback = QObject* (*)();
    using QSettings_SenderSignalIndex_Callback = int (*)();
    using QSettings_Receivers_Callback = int (*)(const QSettings*, const char*);
    using QSettings_IsSignalConnected_Callback = bool (*)(const QSettings*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSettings_MetaObject_Callback qsettings_metaobject_callback = nullptr;
    QSettings_Metacast_Callback qsettings_metacast_callback = nullptr;
    QSettings_Metacall_Callback qsettings_metacall_callback = nullptr;
    QSettings_Event_Callback qsettings_event_callback = nullptr;
    QSettings_EventFilter_Callback qsettings_eventfilter_callback = nullptr;
    QSettings_TimerEvent_Callback qsettings_timerevent_callback = nullptr;
    QSettings_ChildEvent_Callback qsettings_childevent_callback = nullptr;
    QSettings_CustomEvent_Callback qsettings_customevent_callback = nullptr;
    QSettings_ConnectNotify_Callback qsettings_connectnotify_callback = nullptr;
    QSettings_DisconnectNotify_Callback qsettings_disconnectnotify_callback = nullptr;
    QSettings_Sender_Callback qsettings_sender_callback = nullptr;
    QSettings_SenderSignalIndex_Callback qsettings_sendersignalindex_callback = nullptr;
    QSettings_Receivers_Callback qsettings_receivers_callback = nullptr;
    QSettings_IsSignalConnected_Callback qsettings_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsettings_metaobject_isbase = false;
    mutable bool qsettings_metacast_isbase = false;
    mutable bool qsettings_metacall_isbase = false;
    mutable bool qsettings_event_isbase = false;
    mutable bool qsettings_eventfilter_isbase = false;
    mutable bool qsettings_timerevent_isbase = false;
    mutable bool qsettings_childevent_isbase = false;
    mutable bool qsettings_customevent_isbase = false;
    mutable bool qsettings_connectnotify_isbase = false;
    mutable bool qsettings_disconnectnotify_isbase = false;
    mutable bool qsettings_sender_isbase = false;
    mutable bool qsettings_sendersignalindex_isbase = false;
    mutable bool qsettings_receivers_isbase = false;
    mutable bool qsettings_issignalconnected_isbase = false;

  public:
    VirtualQSettings(const QString& organization) : QSettings(organization) {};
    VirtualQSettings(QSettings::Scope scope, const QString& organization) : QSettings(scope, organization) {};
    VirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization) : QSettings(format, scope, organization) {};
    VirtualQSettings(const QString& fileName, QSettings::Format format) : QSettings(fileName, format) {};
    VirtualQSettings() : QSettings() {};
    VirtualQSettings(QSettings::Scope scope) : QSettings(scope) {};
    VirtualQSettings(const QString& organization, const QString& application) : QSettings(organization, application) {};
    VirtualQSettings(const QString& organization, const QString& application, QObject* parent) : QSettings(organization, application, parent) {};
    VirtualQSettings(QSettings::Scope scope, const QString& organization, const QString& application) : QSettings(scope, organization, application) {};
    VirtualQSettings(QSettings::Scope scope, const QString& organization, const QString& application, QObject* parent) : QSettings(scope, organization, application, parent) {};
    VirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization, const QString& application) : QSettings(format, scope, organization, application) {};
    VirtualQSettings(QSettings::Format format, QSettings::Scope scope, const QString& organization, const QString& application, QObject* parent) : QSettings(format, scope, organization, application, parent) {};
    VirtualQSettings(const QString& fileName, QSettings::Format format, QObject* parent) : QSettings(fileName, format, parent) {};
    VirtualQSettings(QObject* parent) : QSettings(parent) {};
    VirtualQSettings(QSettings::Scope scope, QObject* parent) : QSettings(scope, parent) {};

    // Callback setters
    inline void setQSettings_MetaObject_Callback(QSettings_MetaObject_Callback cb) { qsettings_metaobject_callback = cb; }
    inline void setQSettings_Metacast_Callback(QSettings_Metacast_Callback cb) { qsettings_metacast_callback = cb; }
    inline void setQSettings_Metacall_Callback(QSettings_Metacall_Callback cb) { qsettings_metacall_callback = cb; }
    inline void setQSettings_Event_Callback(QSettings_Event_Callback cb) { qsettings_event_callback = cb; }
    inline void setQSettings_EventFilter_Callback(QSettings_EventFilter_Callback cb) { qsettings_eventfilter_callback = cb; }
    inline void setQSettings_TimerEvent_Callback(QSettings_TimerEvent_Callback cb) { qsettings_timerevent_callback = cb; }
    inline void setQSettings_ChildEvent_Callback(QSettings_ChildEvent_Callback cb) { qsettings_childevent_callback = cb; }
    inline void setQSettings_CustomEvent_Callback(QSettings_CustomEvent_Callback cb) { qsettings_customevent_callback = cb; }
    inline void setQSettings_ConnectNotify_Callback(QSettings_ConnectNotify_Callback cb) { qsettings_connectnotify_callback = cb; }
    inline void setQSettings_DisconnectNotify_Callback(QSettings_DisconnectNotify_Callback cb) { qsettings_disconnectnotify_callback = cb; }
    inline void setQSettings_Sender_Callback(QSettings_Sender_Callback cb) { qsettings_sender_callback = cb; }
    inline void setQSettings_SenderSignalIndex_Callback(QSettings_SenderSignalIndex_Callback cb) { qsettings_sendersignalindex_callback = cb; }
    inline void setQSettings_Receivers_Callback(QSettings_Receivers_Callback cb) { qsettings_receivers_callback = cb; }
    inline void setQSettings_IsSignalConnected_Callback(QSettings_IsSignalConnected_Callback cb) { qsettings_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSettings_MetaObject_IsBase(bool value) const { qsettings_metaobject_isbase = value; }
    inline void setQSettings_Metacast_IsBase(bool value) const { qsettings_metacast_isbase = value; }
    inline void setQSettings_Metacall_IsBase(bool value) const { qsettings_metacall_isbase = value; }
    inline void setQSettings_Event_IsBase(bool value) const { qsettings_event_isbase = value; }
    inline void setQSettings_EventFilter_IsBase(bool value) const { qsettings_eventfilter_isbase = value; }
    inline void setQSettings_TimerEvent_IsBase(bool value) const { qsettings_timerevent_isbase = value; }
    inline void setQSettings_ChildEvent_IsBase(bool value) const { qsettings_childevent_isbase = value; }
    inline void setQSettings_CustomEvent_IsBase(bool value) const { qsettings_customevent_isbase = value; }
    inline void setQSettings_ConnectNotify_IsBase(bool value) const { qsettings_connectnotify_isbase = value; }
    inline void setQSettings_DisconnectNotify_IsBase(bool value) const { qsettings_disconnectnotify_isbase = value; }
    inline void setQSettings_Sender_IsBase(bool value) const { qsettings_sender_isbase = value; }
    inline void setQSettings_SenderSignalIndex_IsBase(bool value) const { qsettings_sendersignalindex_isbase = value; }
    inline void setQSettings_Receivers_IsBase(bool value) const { qsettings_receivers_isbase = value; }
    inline void setQSettings_IsSignalConnected_IsBase(bool value) const { qsettings_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsettings_metaobject_isbase) {
            qsettings_metaobject_isbase = false;
            return QSettings::metaObject();
        }
        auto metaobject_cb = qsettings_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QSettings::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsettings_metacast_isbase) {
            qsettings_metacast_isbase = false;
            return QSettings::qt_metacast(param1);
        }
        auto metacast_cb = qsettings_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QSettings::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsettings_metacall_isbase) {
            qsettings_metacall_isbase = false;
            return QSettings::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qsettings_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSettings::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsettings_event_isbase) {
            qsettings_event_isbase = false;
            return QSettings::event(event);
        }
        auto event_cb = qsettings_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QSettings::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsettings_eventfilter_isbase) {
            qsettings_eventfilter_isbase = false;
            return QSettings::eventFilter(watched, event);
        }
        auto eventfilter_cb = qsettings_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSettings::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsettings_timerevent_isbase) {
            qsettings_timerevent_isbase = false;
            QSettings::timerEvent(event);
            return;
        }
        auto timerevent_cb = qsettings_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QSettings::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsettings_childevent_isbase) {
            qsettings_childevent_isbase = false;
            QSettings::childEvent(event);
            return;
        }
        auto childevent_cb = qsettings_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QSettings::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsettings_customevent_isbase) {
            qsettings_customevent_isbase = false;
            QSettings::customEvent(event);
            return;
        }
        auto customevent_cb = qsettings_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QSettings::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsettings_connectnotify_isbase) {
            qsettings_connectnotify_isbase = false;
            QSettings::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qsettings_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QSettings::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsettings_disconnectnotify_isbase) {
            qsettings_disconnectnotify_isbase = false;
            QSettings::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qsettings_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QSettings::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsettings_sender_isbase) {
            qsettings_sender_isbase = false;
            return QSettings::sender();
        }
        auto sender_cb = qsettings_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QSettings::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsettings_sendersignalindex_isbase) {
            qsettings_sendersignalindex_isbase = false;
            return QSettings::senderSignalIndex();
        }
        auto sendersignalindex_cb = qsettings_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QSettings::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsettings_receivers_isbase) {
            qsettings_receivers_isbase = false;
            return QSettings::receivers(signal);
        }
        auto receivers_cb = qsettings_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSettings::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsettings_issignalconnected_isbase) {
            qsettings_issignalconnected_isbase = false;
            return QSettings::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qsettings_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QSettings::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QSettings_Event(QSettings* self, QEvent* event);
    friend bool QSettings_SuperEvent(QSettings* self, QEvent* event);
    friend void QSettings_TimerEvent(QSettings* self, QTimerEvent* event);
    friend void QSettings_SuperTimerEvent(QSettings* self, QTimerEvent* event);
    friend void QSettings_ChildEvent(QSettings* self, QChildEvent* event);
    friend void QSettings_SuperChildEvent(QSettings* self, QChildEvent* event);
    friend void QSettings_CustomEvent(QSettings* self, QEvent* event);
    friend void QSettings_SuperCustomEvent(QSettings* self, QEvent* event);
    friend void QSettings_ConnectNotify(QSettings* self, const QMetaMethod* signal);
    friend void QSettings_SuperConnectNotify(QSettings* self, const QMetaMethod* signal);
    friend void QSettings_DisconnectNotify(QSettings* self, const QMetaMethod* signal);
    friend void QSettings_SuperDisconnectNotify(QSettings* self, const QMetaMethod* signal);
    friend QObject* QSettings_Sender(const QSettings* self);
    friend QObject* QSettings_SuperSender(const QSettings* self);
    friend int QSettings_SenderSignalIndex(const QSettings* self);
    friend int QSettings_SuperSenderSignalIndex(const QSettings* self);
    friend int QSettings_Receivers(const QSettings* self, const char* signal);
    friend int QSettings_SuperReceivers(const QSettings* self, const char* signal);
    friend bool QSettings_IsSignalConnected(const QSettings* self, const QMetaMethod* signal);
    friend bool QSettings_SuperIsSignalConnected(const QSettings* self, const QMetaMethod* signal);
};

#endif
