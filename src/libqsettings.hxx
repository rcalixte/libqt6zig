#pragma once
#ifndef LIBQSETTINGS_HXX
#define LIBQSETTINGS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSettings
class VirtualQSettings final : public QSettings {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSettings_MetaObject_Callback = QMetaObject* (*)(const QSettings*);
    using QSettings_Metacast_Callback = void* (*)(QSettings*, const char*);
    using QSettings_Metacall_Callback = int (*)(QSettings*, int, int, void**);
    using QSettings_Event_Callback = bool (*)(QSettings*, QEvent*);
    using QSettings_EventFilter_Callback = bool (*)(QSettings*, QObject*, QEvent*);
    using QSettings_TimerEvent_Callback = void (*)(QSettings*, QTimerEvent*);
    using QSettings_ChildEvent_Callback = void (*)(QSettings*, QChildEvent*);
    using QSettings_CustomEvent_Callback = void (*)(QSettings*, QEvent*);
    using QSettings_ConnectNotify_Callback = void (*)(QSettings*, QMetaMethod*);
    using QSettings_DisconnectNotify_Callback = void (*)(QSettings*, QMetaMethod*);
    using QSettings::isSignalConnected;
    using QSettings::receivers;
    using QSettings::sender;
    using QSettings::senderSignalIndex;

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

    // Access struct
    struct Base : QSettings {
        using QSettings::childEvent;
        using QSettings::connectNotify;
        using QSettings::customEvent;
        using QSettings::disconnectNotify;
        using QSettings::event;
        using QSettings::timerEvent;
    };

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

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsettings_metaobject_callback) {
            QMetaObject* callback_ret = qsettings_metaobject_callback(this);
            return callback_ret;
        }
        return QSettings::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsettings_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsettings_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSettings::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsettings_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsettings_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSettings::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsettings_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsettings_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSettings::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsettings_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsettings_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSettings::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsettings_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsettings_timerevent_callback(this, cbval1);
            return;
        }
        QSettings::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsettings_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsettings_childevent_callback(this, cbval1);
            return;
        }
        QSettings::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsettings_customevent_callback) {
            QEvent* cbval1 = event;
            qsettings_customevent_callback(this, cbval1);
            return;
        }
        QSettings::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsettings_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsettings_connectnotify_callback(this, cbval1);
            return;
        }
        QSettings::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsettings_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsettings_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSettings::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QSettings_SuperEvent(QSettings* self, QEvent* event);
    friend void QSettings_SuperTimerEvent(QSettings* self, QTimerEvent* event);
    friend void QSettings_SuperChildEvent(QSettings* self, QChildEvent* event);
    friend void QSettings_SuperCustomEvent(QSettings* self, QEvent* event);
    friend void QSettings_SuperConnectNotify(QSettings* self, const QMetaMethod* signal);
    friend void QSettings_SuperDisconnectNotify(QSettings* self, const QMetaMethod* signal);
};

#endif
