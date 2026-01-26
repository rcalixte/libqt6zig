#pragma once
#ifndef SRC_UITOOLSC_LIBVIRTUALQUILOADER_H
#define SRC_UITOOLSC_LIBVIRTUALQUILOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QUiLoader so that we can call protected methods
class VirtualQUiLoader final : public QUiLoader {

  public:
    // Virtual class boolean flag
    bool isVirtualQUiLoader = true;

    // Virtual class public types (including callbacks)
    using QUiLoader_MetaObject_Callback = QMetaObject* (*)();
    using QUiLoader_Metacast_Callback = void* (*)(QUiLoader*, const char*);
    using QUiLoader_Metacall_Callback = int (*)(QUiLoader*, int, int, void**);
    using QUiLoader_CreateWidget_Callback = QWidget* (*)(QUiLoader*, libqt_string, QWidget*, libqt_string);
    using QUiLoader_CreateLayout_Callback = QLayout* (*)(QUiLoader*, libqt_string, QObject*, libqt_string);
    using QUiLoader_CreateActionGroup_Callback = QActionGroup* (*)(QUiLoader*, QObject*, libqt_string);
    using QUiLoader_CreateAction_Callback = QAction* (*)(QUiLoader*, QObject*, libqt_string);
    using QUiLoader_Event_Callback = bool (*)(QUiLoader*, QEvent*);
    using QUiLoader_EventFilter_Callback = bool (*)(QUiLoader*, QObject*, QEvent*);
    using QUiLoader_TimerEvent_Callback = void (*)(QUiLoader*, QTimerEvent*);
    using QUiLoader_ChildEvent_Callback = void (*)(QUiLoader*, QChildEvent*);
    using QUiLoader_CustomEvent_Callback = void (*)(QUiLoader*, QEvent*);
    using QUiLoader_ConnectNotify_Callback = void (*)(QUiLoader*, QMetaMethod*);
    using QUiLoader_DisconnectNotify_Callback = void (*)(QUiLoader*, QMetaMethod*);
    using QUiLoader_Sender_Callback = QObject* (*)();
    using QUiLoader_SenderSignalIndex_Callback = int (*)();
    using QUiLoader_Receivers_Callback = int (*)(const QUiLoader*, const char*);
    using QUiLoader_IsSignalConnected_Callback = bool (*)(const QUiLoader*, QMetaMethod*);

  protected:
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
    QUiLoader_Sender_Callback quiloader_sender_callback = nullptr;
    QUiLoader_SenderSignalIndex_Callback quiloader_sendersignalindex_callback = nullptr;
    QUiLoader_Receivers_Callback quiloader_receivers_callback = nullptr;
    QUiLoader_IsSignalConnected_Callback quiloader_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool quiloader_metaobject_isbase = false;
    mutable bool quiloader_metacast_isbase = false;
    mutable bool quiloader_metacall_isbase = false;
    mutable bool quiloader_createwidget_isbase = false;
    mutable bool quiloader_createlayout_isbase = false;
    mutable bool quiloader_createactiongroup_isbase = false;
    mutable bool quiloader_createaction_isbase = false;
    mutable bool quiloader_event_isbase = false;
    mutable bool quiloader_eventfilter_isbase = false;
    mutable bool quiloader_timerevent_isbase = false;
    mutable bool quiloader_childevent_isbase = false;
    mutable bool quiloader_customevent_isbase = false;
    mutable bool quiloader_connectnotify_isbase = false;
    mutable bool quiloader_disconnectnotify_isbase = false;
    mutable bool quiloader_sender_isbase = false;
    mutable bool quiloader_sendersignalindex_isbase = false;
    mutable bool quiloader_receivers_isbase = false;
    mutable bool quiloader_issignalconnected_isbase = false;

  public:
    VirtualQUiLoader() : QUiLoader() {};
    VirtualQUiLoader(QObject* parent) : QUiLoader(parent) {};

    ~VirtualQUiLoader() {
        quiloader_metaobject_callback = nullptr;
        quiloader_metacast_callback = nullptr;
        quiloader_metacall_callback = nullptr;
        quiloader_createwidget_callback = nullptr;
        quiloader_createlayout_callback = nullptr;
        quiloader_createactiongroup_callback = nullptr;
        quiloader_createaction_callback = nullptr;
        quiloader_event_callback = nullptr;
        quiloader_eventfilter_callback = nullptr;
        quiloader_timerevent_callback = nullptr;
        quiloader_childevent_callback = nullptr;
        quiloader_customevent_callback = nullptr;
        quiloader_connectnotify_callback = nullptr;
        quiloader_disconnectnotify_callback = nullptr;
        quiloader_sender_callback = nullptr;
        quiloader_sendersignalindex_callback = nullptr;
        quiloader_receivers_callback = nullptr;
        quiloader_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQUiLoader_MetaObject_Callback(QUiLoader_MetaObject_Callback cb) { quiloader_metaobject_callback = cb; }
    inline void setQUiLoader_Metacast_Callback(QUiLoader_Metacast_Callback cb) { quiloader_metacast_callback = cb; }
    inline void setQUiLoader_Metacall_Callback(QUiLoader_Metacall_Callback cb) { quiloader_metacall_callback = cb; }
    inline void setQUiLoader_CreateWidget_Callback(QUiLoader_CreateWidget_Callback cb) { quiloader_createwidget_callback = cb; }
    inline void setQUiLoader_CreateLayout_Callback(QUiLoader_CreateLayout_Callback cb) { quiloader_createlayout_callback = cb; }
    inline void setQUiLoader_CreateActionGroup_Callback(QUiLoader_CreateActionGroup_Callback cb) { quiloader_createactiongroup_callback = cb; }
    inline void setQUiLoader_CreateAction_Callback(QUiLoader_CreateAction_Callback cb) { quiloader_createaction_callback = cb; }
    inline void setQUiLoader_Event_Callback(QUiLoader_Event_Callback cb) { quiloader_event_callback = cb; }
    inline void setQUiLoader_EventFilter_Callback(QUiLoader_EventFilter_Callback cb) { quiloader_eventfilter_callback = cb; }
    inline void setQUiLoader_TimerEvent_Callback(QUiLoader_TimerEvent_Callback cb) { quiloader_timerevent_callback = cb; }
    inline void setQUiLoader_ChildEvent_Callback(QUiLoader_ChildEvent_Callback cb) { quiloader_childevent_callback = cb; }
    inline void setQUiLoader_CustomEvent_Callback(QUiLoader_CustomEvent_Callback cb) { quiloader_customevent_callback = cb; }
    inline void setQUiLoader_ConnectNotify_Callback(QUiLoader_ConnectNotify_Callback cb) { quiloader_connectnotify_callback = cb; }
    inline void setQUiLoader_DisconnectNotify_Callback(QUiLoader_DisconnectNotify_Callback cb) { quiloader_disconnectnotify_callback = cb; }
    inline void setQUiLoader_Sender_Callback(QUiLoader_Sender_Callback cb) { quiloader_sender_callback = cb; }
    inline void setQUiLoader_SenderSignalIndex_Callback(QUiLoader_SenderSignalIndex_Callback cb) { quiloader_sendersignalindex_callback = cb; }
    inline void setQUiLoader_Receivers_Callback(QUiLoader_Receivers_Callback cb) { quiloader_receivers_callback = cb; }
    inline void setQUiLoader_IsSignalConnected_Callback(QUiLoader_IsSignalConnected_Callback cb) { quiloader_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQUiLoader_MetaObject_IsBase(bool value) const { quiloader_metaobject_isbase = value; }
    inline void setQUiLoader_Metacast_IsBase(bool value) const { quiloader_metacast_isbase = value; }
    inline void setQUiLoader_Metacall_IsBase(bool value) const { quiloader_metacall_isbase = value; }
    inline void setQUiLoader_CreateWidget_IsBase(bool value) const { quiloader_createwidget_isbase = value; }
    inline void setQUiLoader_CreateLayout_IsBase(bool value) const { quiloader_createlayout_isbase = value; }
    inline void setQUiLoader_CreateActionGroup_IsBase(bool value) const { quiloader_createactiongroup_isbase = value; }
    inline void setQUiLoader_CreateAction_IsBase(bool value) const { quiloader_createaction_isbase = value; }
    inline void setQUiLoader_Event_IsBase(bool value) const { quiloader_event_isbase = value; }
    inline void setQUiLoader_EventFilter_IsBase(bool value) const { quiloader_eventfilter_isbase = value; }
    inline void setQUiLoader_TimerEvent_IsBase(bool value) const { quiloader_timerevent_isbase = value; }
    inline void setQUiLoader_ChildEvent_IsBase(bool value) const { quiloader_childevent_isbase = value; }
    inline void setQUiLoader_CustomEvent_IsBase(bool value) const { quiloader_customevent_isbase = value; }
    inline void setQUiLoader_ConnectNotify_IsBase(bool value) const { quiloader_connectnotify_isbase = value; }
    inline void setQUiLoader_DisconnectNotify_IsBase(bool value) const { quiloader_disconnectnotify_isbase = value; }
    inline void setQUiLoader_Sender_IsBase(bool value) const { quiloader_sender_isbase = value; }
    inline void setQUiLoader_SenderSignalIndex_IsBase(bool value) const { quiloader_sendersignalindex_isbase = value; }
    inline void setQUiLoader_Receivers_IsBase(bool value) const { quiloader_receivers_isbase = value; }
    inline void setQUiLoader_IsSignalConnected_IsBase(bool value) const { quiloader_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (quiloader_metaobject_isbase) {
            quiloader_metaobject_isbase = false;
            return QUiLoader::metaObject();
        } else if (quiloader_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = quiloader_metaobject_callback();
            return callback_ret;
        } else {
            return QUiLoader::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (quiloader_metacast_isbase) {
            quiloader_metacast_isbase = false;
            return QUiLoader::qt_metacast(param1);
        } else if (quiloader_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = quiloader_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUiLoader::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (quiloader_metacall_isbase) {
            quiloader_metacall_isbase = false;
            return QUiLoader::qt_metacall(param1, param2, param3);
        } else if (quiloader_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = quiloader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QUiLoader::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& className, QWidget* parent, const QString& name) override {
        if (quiloader_createwidget_isbase) {
            quiloader_createwidget_isbase = false;
            return QUiLoader::createWidget(className, parent, name);
        } else if (quiloader_createwidget_callback != nullptr) {
            const QString className_ret = className;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray className_b = className_ret.toUtf8();
            libqt_string className_str;
            className_str.len = className_b.length();
            className_str.data = static_cast<const char*>(malloc(className_str.len + 1));
            memcpy((void*)className_str.data, className_b.data(), className_str.len);
            ((char*)className_str.data)[className_str.len] = '\0';
            libqt_string cbval1 = className_str;
            QWidget* cbval2 = parent;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval3 = name_str;

            QWidget* callback_ret = quiloader_createwidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QUiLoader::createWidget(className, parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(const QString& className, QObject* parent, const QString& name) override {
        if (quiloader_createlayout_isbase) {
            quiloader_createlayout_isbase = false;
            return QUiLoader::createLayout(className, parent, name);
        } else if (quiloader_createlayout_callback != nullptr) {
            const QString className_ret = className;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray className_b = className_ret.toUtf8();
            libqt_string className_str;
            className_str.len = className_b.length();
            className_str.data = static_cast<const char*>(malloc(className_str.len + 1));
            memcpy((void*)className_str.data, className_b.data(), className_str.len);
            ((char*)className_str.data)[className_str.len] = '\0';
            libqt_string cbval1 = className_str;
            QObject* cbval2 = parent;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval3 = name_str;

            QLayout* callback_ret = quiloader_createlayout_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QUiLoader::createLayout(className, parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
        if (quiloader_createactiongroup_isbase) {
            quiloader_createactiongroup_isbase = false;
            return QUiLoader::createActionGroup(parent, name);
        } else if (quiloader_createactiongroup_callback != nullptr) {
            QObject* cbval1 = parent;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval2 = name_str;

            QActionGroup* callback_ret = quiloader_createactiongroup_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QUiLoader::createActionGroup(parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createAction(QObject* parent, const QString& name) override {
        if (quiloader_createaction_isbase) {
            quiloader_createaction_isbase = false;
            return QUiLoader::createAction(parent, name);
        } else if (quiloader_createaction_callback != nullptr) {
            QObject* cbval1 = parent;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval2 = name_str;

            QAction* callback_ret = quiloader_createaction_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QUiLoader::createAction(parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (quiloader_event_isbase) {
            quiloader_event_isbase = false;
            return QUiLoader::event(event);
        } else if (quiloader_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = quiloader_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUiLoader::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (quiloader_eventfilter_isbase) {
            quiloader_eventfilter_isbase = false;
            return QUiLoader::eventFilter(watched, event);
        } else if (quiloader_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = quiloader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QUiLoader::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (quiloader_timerevent_isbase) {
            quiloader_timerevent_isbase = false;
            QUiLoader::timerEvent(event);
        } else if (quiloader_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            quiloader_timerevent_callback(this, cbval1);
        } else {
            QUiLoader::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (quiloader_childevent_isbase) {
            quiloader_childevent_isbase = false;
            QUiLoader::childEvent(event);
        } else if (quiloader_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            quiloader_childevent_callback(this, cbval1);
        } else {
            QUiLoader::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (quiloader_customevent_isbase) {
            quiloader_customevent_isbase = false;
            QUiLoader::customEvent(event);
        } else if (quiloader_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            quiloader_customevent_callback(this, cbval1);
        } else {
            QUiLoader::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (quiloader_connectnotify_isbase) {
            quiloader_connectnotify_isbase = false;
            QUiLoader::connectNotify(signal);
        } else if (quiloader_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            quiloader_connectnotify_callback(this, cbval1);
        } else {
            QUiLoader::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (quiloader_disconnectnotify_isbase) {
            quiloader_disconnectnotify_isbase = false;
            QUiLoader::disconnectNotify(signal);
        } else if (quiloader_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            quiloader_disconnectnotify_callback(this, cbval1);
        } else {
            QUiLoader::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (quiloader_sender_isbase) {
            quiloader_sender_isbase = false;
            return QUiLoader::sender();
        } else if (quiloader_sender_callback != nullptr) {
            QObject* callback_ret = quiloader_sender_callback();
            return callback_ret;
        } else {
            return QUiLoader::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (quiloader_sendersignalindex_isbase) {
            quiloader_sendersignalindex_isbase = false;
            return QUiLoader::senderSignalIndex();
        } else if (quiloader_sendersignalindex_callback != nullptr) {
            int callback_ret = quiloader_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QUiLoader::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (quiloader_receivers_isbase) {
            quiloader_receivers_isbase = false;
            return QUiLoader::receivers(signal);
        } else if (quiloader_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = quiloader_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUiLoader::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (quiloader_issignalconnected_isbase) {
            quiloader_issignalconnected_isbase = false;
            return QUiLoader::isSignalConnected(signal);
        } else if (quiloader_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = quiloader_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUiLoader::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QUiLoader_TimerEvent(QUiLoader* self, QTimerEvent* event);
    friend void QUiLoader_QBaseTimerEvent(QUiLoader* self, QTimerEvent* event);
    friend void QUiLoader_ChildEvent(QUiLoader* self, QChildEvent* event);
    friend void QUiLoader_QBaseChildEvent(QUiLoader* self, QChildEvent* event);
    friend void QUiLoader_CustomEvent(QUiLoader* self, QEvent* event);
    friend void QUiLoader_QBaseCustomEvent(QUiLoader* self, QEvent* event);
    friend void QUiLoader_ConnectNotify(QUiLoader* self, const QMetaMethod* signal);
    friend void QUiLoader_QBaseConnectNotify(QUiLoader* self, const QMetaMethod* signal);
    friend void QUiLoader_DisconnectNotify(QUiLoader* self, const QMetaMethod* signal);
    friend void QUiLoader_QBaseDisconnectNotify(QUiLoader* self, const QMetaMethod* signal);
    friend QObject* QUiLoader_Sender(const QUiLoader* self);
    friend QObject* QUiLoader_QBaseSender(const QUiLoader* self);
    friend int QUiLoader_SenderSignalIndex(const QUiLoader* self);
    friend int QUiLoader_QBaseSenderSignalIndex(const QUiLoader* self);
    friend int QUiLoader_Receivers(const QUiLoader* self, const char* signal);
    friend int QUiLoader_QBaseReceivers(const QUiLoader* self, const char* signal);
    friend bool QUiLoader_IsSignalConnected(const QUiLoader* self, const QMetaMethod* signal);
    friend bool QUiLoader_QBaseIsSignalConnected(const QUiLoader* self, const QMetaMethod* signal);
};

#endif
