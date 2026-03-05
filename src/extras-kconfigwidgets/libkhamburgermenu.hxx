#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKHAMBURGERMENU_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKHAMBURGERMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KHamburgerMenu so that we can call protected methods
class VirtualKHamburgerMenu final : public KHamburgerMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKHamburgerMenu = true;

    // Virtual class public types (including callbacks)
    using KHamburgerMenu_MetaObject_Callback = QMetaObject* (*)();
    using KHamburgerMenu_Metacast_Callback = void* (*)(KHamburgerMenu*, const char*);
    using KHamburgerMenu_Metacall_Callback = int (*)(KHamburgerMenu*, int, int, void**);
    using KHamburgerMenu_CreateWidget_Callback = QWidget* (*)(KHamburgerMenu*, QWidget*);
    using KHamburgerMenu_Event_Callback = bool (*)(KHamburgerMenu*, QEvent*);
    using KHamburgerMenu_EventFilter_Callback = bool (*)(KHamburgerMenu*, QObject*, QEvent*);
    using KHamburgerMenu_DeleteWidget_Callback = void (*)(KHamburgerMenu*, QWidget*);
    using KHamburgerMenu_TimerEvent_Callback = void (*)(KHamburgerMenu*, QTimerEvent*);
    using KHamburgerMenu_ChildEvent_Callback = void (*)(KHamburgerMenu*, QChildEvent*);
    using KHamburgerMenu_CustomEvent_Callback = void (*)(KHamburgerMenu*, QEvent*);
    using KHamburgerMenu_ConnectNotify_Callback = void (*)(KHamburgerMenu*, QMetaMethod*);
    using KHamburgerMenu_DisconnectNotify_Callback = void (*)(KHamburgerMenu*, QMetaMethod*);
    using KHamburgerMenu_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using KHamburgerMenu_Sender_Callback = QObject* (*)();
    using KHamburgerMenu_SenderSignalIndex_Callback = int (*)();
    using KHamburgerMenu_Receivers_Callback = int (*)(const KHamburgerMenu*, const char*);
    using KHamburgerMenu_IsSignalConnected_Callback = bool (*)(const KHamburgerMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KHamburgerMenu_MetaObject_Callback khamburgermenu_metaobject_callback = nullptr;
    KHamburgerMenu_Metacast_Callback khamburgermenu_metacast_callback = nullptr;
    KHamburgerMenu_Metacall_Callback khamburgermenu_metacall_callback = nullptr;
    KHamburgerMenu_CreateWidget_Callback khamburgermenu_createwidget_callback = nullptr;
    KHamburgerMenu_Event_Callback khamburgermenu_event_callback = nullptr;
    KHamburgerMenu_EventFilter_Callback khamburgermenu_eventfilter_callback = nullptr;
    KHamburgerMenu_DeleteWidget_Callback khamburgermenu_deletewidget_callback = nullptr;
    KHamburgerMenu_TimerEvent_Callback khamburgermenu_timerevent_callback = nullptr;
    KHamburgerMenu_ChildEvent_Callback khamburgermenu_childevent_callback = nullptr;
    KHamburgerMenu_CustomEvent_Callback khamburgermenu_customevent_callback = nullptr;
    KHamburgerMenu_ConnectNotify_Callback khamburgermenu_connectnotify_callback = nullptr;
    KHamburgerMenu_DisconnectNotify_Callback khamburgermenu_disconnectnotify_callback = nullptr;
    KHamburgerMenu_CreatedWidgets_Callback khamburgermenu_createdwidgets_callback = nullptr;
    KHamburgerMenu_Sender_Callback khamburgermenu_sender_callback = nullptr;
    KHamburgerMenu_SenderSignalIndex_Callback khamburgermenu_sendersignalindex_callback = nullptr;
    KHamburgerMenu_Receivers_Callback khamburgermenu_receivers_callback = nullptr;
    KHamburgerMenu_IsSignalConnected_Callback khamburgermenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool khamburgermenu_metaobject_isbase = false;
    mutable bool khamburgermenu_metacast_isbase = false;
    mutable bool khamburgermenu_metacall_isbase = false;
    mutable bool khamburgermenu_createwidget_isbase = false;
    mutable bool khamburgermenu_event_isbase = false;
    mutable bool khamburgermenu_eventfilter_isbase = false;
    mutable bool khamburgermenu_deletewidget_isbase = false;
    mutable bool khamburgermenu_timerevent_isbase = false;
    mutable bool khamburgermenu_childevent_isbase = false;
    mutable bool khamburgermenu_customevent_isbase = false;
    mutable bool khamburgermenu_connectnotify_isbase = false;
    mutable bool khamburgermenu_disconnectnotify_isbase = false;
    mutable bool khamburgermenu_createdwidgets_isbase = false;
    mutable bool khamburgermenu_sender_isbase = false;
    mutable bool khamburgermenu_sendersignalindex_isbase = false;
    mutable bool khamburgermenu_receivers_isbase = false;
    mutable bool khamburgermenu_issignalconnected_isbase = false;

  public:
    VirtualKHamburgerMenu(QObject* parent) : KHamburgerMenu(parent) {};

    // Callback setters
    inline void setKHamburgerMenu_MetaObject_Callback(KHamburgerMenu_MetaObject_Callback cb) { khamburgermenu_metaobject_callback = cb; }
    inline void setKHamburgerMenu_Metacast_Callback(KHamburgerMenu_Metacast_Callback cb) { khamburgermenu_metacast_callback = cb; }
    inline void setKHamburgerMenu_Metacall_Callback(KHamburgerMenu_Metacall_Callback cb) { khamburgermenu_metacall_callback = cb; }
    inline void setKHamburgerMenu_CreateWidget_Callback(KHamburgerMenu_CreateWidget_Callback cb) { khamburgermenu_createwidget_callback = cb; }
    inline void setKHamburgerMenu_Event_Callback(KHamburgerMenu_Event_Callback cb) { khamburgermenu_event_callback = cb; }
    inline void setKHamburgerMenu_EventFilter_Callback(KHamburgerMenu_EventFilter_Callback cb) { khamburgermenu_eventfilter_callback = cb; }
    inline void setKHamburgerMenu_DeleteWidget_Callback(KHamburgerMenu_DeleteWidget_Callback cb) { khamburgermenu_deletewidget_callback = cb; }
    inline void setKHamburgerMenu_TimerEvent_Callback(KHamburgerMenu_TimerEvent_Callback cb) { khamburgermenu_timerevent_callback = cb; }
    inline void setKHamburgerMenu_ChildEvent_Callback(KHamburgerMenu_ChildEvent_Callback cb) { khamburgermenu_childevent_callback = cb; }
    inline void setKHamburgerMenu_CustomEvent_Callback(KHamburgerMenu_CustomEvent_Callback cb) { khamburgermenu_customevent_callback = cb; }
    inline void setKHamburgerMenu_ConnectNotify_Callback(KHamburgerMenu_ConnectNotify_Callback cb) { khamburgermenu_connectnotify_callback = cb; }
    inline void setKHamburgerMenu_DisconnectNotify_Callback(KHamburgerMenu_DisconnectNotify_Callback cb) { khamburgermenu_disconnectnotify_callback = cb; }
    inline void setKHamburgerMenu_CreatedWidgets_Callback(KHamburgerMenu_CreatedWidgets_Callback cb) { khamburgermenu_createdwidgets_callback = cb; }
    inline void setKHamburgerMenu_Sender_Callback(KHamburgerMenu_Sender_Callback cb) { khamburgermenu_sender_callback = cb; }
    inline void setKHamburgerMenu_SenderSignalIndex_Callback(KHamburgerMenu_SenderSignalIndex_Callback cb) { khamburgermenu_sendersignalindex_callback = cb; }
    inline void setKHamburgerMenu_Receivers_Callback(KHamburgerMenu_Receivers_Callback cb) { khamburgermenu_receivers_callback = cb; }
    inline void setKHamburgerMenu_IsSignalConnected_Callback(KHamburgerMenu_IsSignalConnected_Callback cb) { khamburgermenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKHamburgerMenu_MetaObject_IsBase(bool value) const { khamburgermenu_metaobject_isbase = value; }
    inline void setKHamburgerMenu_Metacast_IsBase(bool value) const { khamburgermenu_metacast_isbase = value; }
    inline void setKHamburgerMenu_Metacall_IsBase(bool value) const { khamburgermenu_metacall_isbase = value; }
    inline void setKHamburgerMenu_CreateWidget_IsBase(bool value) const { khamburgermenu_createwidget_isbase = value; }
    inline void setKHamburgerMenu_Event_IsBase(bool value) const { khamburgermenu_event_isbase = value; }
    inline void setKHamburgerMenu_EventFilter_IsBase(bool value) const { khamburgermenu_eventfilter_isbase = value; }
    inline void setKHamburgerMenu_DeleteWidget_IsBase(bool value) const { khamburgermenu_deletewidget_isbase = value; }
    inline void setKHamburgerMenu_TimerEvent_IsBase(bool value) const { khamburgermenu_timerevent_isbase = value; }
    inline void setKHamburgerMenu_ChildEvent_IsBase(bool value) const { khamburgermenu_childevent_isbase = value; }
    inline void setKHamburgerMenu_CustomEvent_IsBase(bool value) const { khamburgermenu_customevent_isbase = value; }
    inline void setKHamburgerMenu_ConnectNotify_IsBase(bool value) const { khamburgermenu_connectnotify_isbase = value; }
    inline void setKHamburgerMenu_DisconnectNotify_IsBase(bool value) const { khamburgermenu_disconnectnotify_isbase = value; }
    inline void setKHamburgerMenu_CreatedWidgets_IsBase(bool value) const { khamburgermenu_createdwidgets_isbase = value; }
    inline void setKHamburgerMenu_Sender_IsBase(bool value) const { khamburgermenu_sender_isbase = value; }
    inline void setKHamburgerMenu_SenderSignalIndex_IsBase(bool value) const { khamburgermenu_sendersignalindex_isbase = value; }
    inline void setKHamburgerMenu_Receivers_IsBase(bool value) const { khamburgermenu_receivers_isbase = value; }
    inline void setKHamburgerMenu_IsSignalConnected_IsBase(bool value) const { khamburgermenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (khamburgermenu_metaobject_isbase) {
            khamburgermenu_metaobject_isbase = false;
            return KHamburgerMenu::metaObject();
        }
        auto metaobject_cb = khamburgermenu_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KHamburgerMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (khamburgermenu_metacast_isbase) {
            khamburgermenu_metacast_isbase = false;
            return KHamburgerMenu::qt_metacast(param1);
        }
        auto metacast_cb = khamburgermenu_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KHamburgerMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (khamburgermenu_metacall_isbase) {
            khamburgermenu_metacall_isbase = false;
            return KHamburgerMenu::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = khamburgermenu_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KHamburgerMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (khamburgermenu_createwidget_isbase) {
            khamburgermenu_createwidget_isbase = false;
            return KHamburgerMenu::createWidget(parent);
        }
        auto createwidget_cb = khamburgermenu_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return KHamburgerMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (khamburgermenu_event_isbase) {
            khamburgermenu_event_isbase = false;
            return KHamburgerMenu::event(param1);
        }
        auto event_cb = khamburgermenu_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KHamburgerMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (khamburgermenu_eventfilter_isbase) {
            khamburgermenu_eventfilter_isbase = false;
            return KHamburgerMenu::eventFilter(param1, param2);
        }
        auto eventfilter_cb = khamburgermenu_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KHamburgerMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (khamburgermenu_deletewidget_isbase) {
            khamburgermenu_deletewidget_isbase = false;
            KHamburgerMenu::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = khamburgermenu_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        KHamburgerMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (khamburgermenu_timerevent_isbase) {
            khamburgermenu_timerevent_isbase = false;
            KHamburgerMenu::timerEvent(event);
            return;
        }
        auto timerevent_cb = khamburgermenu_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KHamburgerMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (khamburgermenu_childevent_isbase) {
            khamburgermenu_childevent_isbase = false;
            KHamburgerMenu::childEvent(event);
            return;
        }
        auto childevent_cb = khamburgermenu_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KHamburgerMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (khamburgermenu_customevent_isbase) {
            khamburgermenu_customevent_isbase = false;
            KHamburgerMenu::customEvent(event);
            return;
        }
        auto customevent_cb = khamburgermenu_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KHamburgerMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (khamburgermenu_connectnotify_isbase) {
            khamburgermenu_connectnotify_isbase = false;
            KHamburgerMenu::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = khamburgermenu_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KHamburgerMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (khamburgermenu_disconnectnotify_isbase) {
            khamburgermenu_disconnectnotify_isbase = false;
            KHamburgerMenu::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = khamburgermenu_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KHamburgerMenu::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (khamburgermenu_createdwidgets_isbase) {
            khamburgermenu_createdwidgets_isbase = false;
            return KHamburgerMenu::createdWidgets();
        }
        auto createdwidgets_cb = khamburgermenu_createdwidgets_callback;
        if (createdwidgets_cb) {
            libqt_list /* of QWidget* */ callback_ret = createdwidgets_cb();
            QList<QWidget*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QWidget** callback_ret_arr = static_cast<QWidget**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KHamburgerMenu::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (khamburgermenu_sender_isbase) {
            khamburgermenu_sender_isbase = false;
            return KHamburgerMenu::sender();
        }
        auto sender_cb = khamburgermenu_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KHamburgerMenu::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (khamburgermenu_sendersignalindex_isbase) {
            khamburgermenu_sendersignalindex_isbase = false;
            return KHamburgerMenu::senderSignalIndex();
        }
        auto sendersignalindex_cb = khamburgermenu_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KHamburgerMenu::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (khamburgermenu_receivers_isbase) {
            khamburgermenu_receivers_isbase = false;
            return KHamburgerMenu::receivers(signal);
        }
        auto receivers_cb = khamburgermenu_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KHamburgerMenu::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (khamburgermenu_issignalconnected_isbase) {
            khamburgermenu_issignalconnected_isbase = false;
            return KHamburgerMenu::isSignalConnected(signal);
        }
        auto issignalconnected_cb = khamburgermenu_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KHamburgerMenu::isSignalConnected(signal);
    }

    // Friend functions
    friend QWidget* KHamburgerMenu_CreateWidget(KHamburgerMenu* self, QWidget* parent);
    friend QWidget* KHamburgerMenu_SuperCreateWidget(KHamburgerMenu* self, QWidget* parent);
    friend bool KHamburgerMenu_Event(KHamburgerMenu* self, QEvent* param1);
    friend bool KHamburgerMenu_SuperEvent(KHamburgerMenu* self, QEvent* param1);
    friend bool KHamburgerMenu_EventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2);
    friend bool KHamburgerMenu_SuperEventFilter(KHamburgerMenu* self, QObject* param1, QEvent* param2);
    friend void KHamburgerMenu_DeleteWidget(KHamburgerMenu* self, QWidget* widget);
    friend void KHamburgerMenu_SuperDeleteWidget(KHamburgerMenu* self, QWidget* widget);
    friend void KHamburgerMenu_TimerEvent(KHamburgerMenu* self, QTimerEvent* event);
    friend void KHamburgerMenu_SuperTimerEvent(KHamburgerMenu* self, QTimerEvent* event);
    friend void KHamburgerMenu_ChildEvent(KHamburgerMenu* self, QChildEvent* event);
    friend void KHamburgerMenu_SuperChildEvent(KHamburgerMenu* self, QChildEvent* event);
    friend void KHamburgerMenu_CustomEvent(KHamburgerMenu* self, QEvent* event);
    friend void KHamburgerMenu_SuperCustomEvent(KHamburgerMenu* self, QEvent* event);
    friend void KHamburgerMenu_ConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend void KHamburgerMenu_SuperConnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend void KHamburgerMenu_DisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend void KHamburgerMenu_SuperDisconnectNotify(KHamburgerMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KHamburgerMenu_CreatedWidgets(const KHamburgerMenu* self);
    friend libqt_list /* of QWidget* */ KHamburgerMenu_SuperCreatedWidgets(const KHamburgerMenu* self);
    friend QObject* KHamburgerMenu_Sender(const KHamburgerMenu* self);
    friend QObject* KHamburgerMenu_SuperSender(const KHamburgerMenu* self);
    friend int KHamburgerMenu_SenderSignalIndex(const KHamburgerMenu* self);
    friend int KHamburgerMenu_SuperSenderSignalIndex(const KHamburgerMenu* self);
    friend int KHamburgerMenu_Receivers(const KHamburgerMenu* self, const char* signal);
    friend int KHamburgerMenu_SuperReceivers(const KHamburgerMenu* self, const char* signal);
    friend bool KHamburgerMenu_IsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal);
    friend bool KHamburgerMenu_SuperIsSignalConnected(const KHamburgerMenu* self, const QMetaMethod* signal);
};

#endif
