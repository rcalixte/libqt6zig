#pragma once
#ifndef UITOOLS_LIBQUILOADER_HXX
#define UITOOLS_LIBQUILOADER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QUiLoader
class VirtualQUiLoader final : public QUiLoader {
  public:
    // Virtual class public types (including callbacks and access types)
    using QUiLoader_MetaObject_Callback = QMetaObject* (*)(const QUiLoader*);
    using QUiLoader_Metacast_Callback = void* (*)(QUiLoader*, const char*);
    using QUiLoader_Metacall_Callback = int (*)(QUiLoader*, int, int, void**);
    using QUiLoader_CreateWidget_Callback = QWidget* (*)(QUiLoader*, const char*, QWidget*, const char*);
    using QUiLoader_CreateLayout_Callback = QLayout* (*)(QUiLoader*, const char*, QObject*, const char*);
    using QUiLoader_CreateActionGroup_Callback = QActionGroup* (*)(QUiLoader*, QObject*, const char*);
    using QUiLoader_CreateAction_Callback = QAction* (*)(QUiLoader*, QObject*, const char*);
    using QUiLoader_Event_Callback = bool (*)(QUiLoader*, QEvent*);
    using QUiLoader_EventFilter_Callback = bool (*)(QUiLoader*, QObject*, QEvent*);
    using QUiLoader_TimerEvent_Callback = void (*)(QUiLoader*, QTimerEvent*);
    using QUiLoader_ChildEvent_Callback = void (*)(QUiLoader*, QChildEvent*);
    using QUiLoader_CustomEvent_Callback = void (*)(QUiLoader*, QEvent*);
    using QUiLoader_ConnectNotify_Callback = void (*)(QUiLoader*, QMetaMethod*);
    using QUiLoader_DisconnectNotify_Callback = void (*)(QUiLoader*, QMetaMethod*);
    using QUiLoader::isSignalConnected;
    using QUiLoader::receivers;
    using QUiLoader::sender;
    using QUiLoader::senderSignalIndex;

    // Instance callback storage
    QUiLoader_MetaObject_Callback quiloader_metaobject_callback = nullptr;
    QUiLoader_Metacast_Callback quiloader_metacast_callback = nullptr;
    QUiLoader_Metacall_Callback quiloader_metacall_callback = nullptr;
    QUiLoader_CreateWidget_Callback quiloader_createwidget_callback = nullptr;
    QUiLoader_CreateLayout_Callback quiloader_createlayout_callback = nullptr;
    QUiLoader_CreateActionGroup_Callback quiloader_createactiongroup_callback = nullptr;
    QUiLoader_CreateAction_Callback quiloader_createaction_callback = nullptr;
    QUiLoader_Event_Callback quiloader_event_callback = nullptr;
    QUiLoader_EventFilter_Callback quiloader_eventfilter_callback = nullptr;
    QUiLoader_TimerEvent_Callback quiloader_timerevent_callback = nullptr;
    QUiLoader_ChildEvent_Callback quiloader_childevent_callback = nullptr;
    QUiLoader_CustomEvent_Callback quiloader_customevent_callback = nullptr;
    QUiLoader_ConnectNotify_Callback quiloader_connectnotify_callback = nullptr;
    QUiLoader_DisconnectNotify_Callback quiloader_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QUiLoader {
        using QUiLoader::childEvent;
        using QUiLoader::connectNotify;
        using QUiLoader::customEvent;
        using QUiLoader::disconnectNotify;
        using QUiLoader::timerEvent;
    };

    VirtualQUiLoader() : QUiLoader() {};
    VirtualQUiLoader(QObject* parent) : QUiLoader(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (quiloader_metaobject_callback) {
            QMetaObject* callback_ret = quiloader_metaobject_callback(this);
            return callback_ret;
        }
        return QUiLoader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (quiloader_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = quiloader_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QUiLoader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (quiloader_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = quiloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QUiLoader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& className, QWidget* parent, const QString& name) override {
        if (quiloader_createwidget_callback) {
            const auto className_ret = className;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray className_b = className_ret.toUtf8();
            auto className_str_len = className_b.length();
            const char* className_str = static_cast<const char*>(malloc(className_str_len + 1));
            memcpy((void*)className_str, className_b.data(), className_str_len);
            ((char*)className_str)[className_str_len] = '\0';
            const char* cbval1 = className_str;
            QWidget* cbval2 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval3 = name_str;
            QWidget* callback_ret = quiloader_createwidget_callback(this, cbval1, cbval2, cbval3);
            libqt_free(className_str);
            libqt_free(name_str);
            return callback_ret;
        }
        return QUiLoader::createWidget(className, parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(const QString& className, QObject* parent, const QString& name) override {
        if (quiloader_createlayout_callback) {
            const auto className_ret = className;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray className_b = className_ret.toUtf8();
            auto className_str_len = className_b.length();
            const char* className_str = static_cast<const char*>(malloc(className_str_len + 1));
            memcpy((void*)className_str, className_b.data(), className_str_len);
            ((char*)className_str)[className_str_len] = '\0';
            const char* cbval1 = className_str;
            QObject* cbval2 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval3 = name_str;
            QLayout* callback_ret = quiloader_createlayout_callback(this, cbval1, cbval2, cbval3);
            libqt_free(className_str);
            libqt_free(name_str);
            return callback_ret;
        }
        return QUiLoader::createLayout(className, parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
        if (quiloader_createactiongroup_callback) {
            QObject* cbval1 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            QActionGroup* callback_ret = quiloader_createactiongroup_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QUiLoader::createActionGroup(parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createAction(QObject* parent, const QString& name) override {
        if (quiloader_createaction_callback) {
            QObject* cbval1 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            QAction* callback_ret = quiloader_createaction_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QUiLoader::createAction(parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (quiloader_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = quiloader_event_callback(this, cbval1);
            return callback_ret;
        }
        return QUiLoader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (quiloader_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = quiloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QUiLoader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (quiloader_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            quiloader_timerevent_callback(this, cbval1);
            return;
        }
        QUiLoader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (quiloader_childevent_callback) {
            QChildEvent* cbval1 = event;
            quiloader_childevent_callback(this, cbval1);
            return;
        }
        QUiLoader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (quiloader_customevent_callback) {
            QEvent* cbval1 = event;
            quiloader_customevent_callback(this, cbval1);
            return;
        }
        QUiLoader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (quiloader_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            quiloader_connectnotify_callback(this, cbval1);
            return;
        }
        QUiLoader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (quiloader_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            quiloader_disconnectnotify_callback(this, cbval1);
            return;
        }
        QUiLoader::disconnectNotify(signal);
    }

    // Friend functions
    friend void QUiLoader_SuperTimerEvent(QUiLoader* self, QTimerEvent* event);
    friend void QUiLoader_SuperChildEvent(QUiLoader* self, QChildEvent* event);
    friend void QUiLoader_SuperCustomEvent(QUiLoader* self, QEvent* event);
    friend void QUiLoader_SuperConnectNotify(QUiLoader* self, const QMetaMethod* signal);
    friend void QUiLoader_SuperDisconnectNotify(QUiLoader* self, const QMetaMethod* signal);
};

#endif
