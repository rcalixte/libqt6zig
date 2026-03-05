#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONMENU_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KActionMenu so that we can call protected methods
class VirtualKActionMenu final : public KActionMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKActionMenu = true;

    // Virtual class public types (including callbacks)
    using KActionMenu_MetaObject_Callback = QMetaObject* (*)();
    using KActionMenu_Metacast_Callback = void* (*)(KActionMenu*, const char*);
    using KActionMenu_Metacall_Callback = int (*)(KActionMenu*, int, int, void**);
    using KActionMenu_CreateWidget_Callback = QWidget* (*)(KActionMenu*, QWidget*);
    using KActionMenu_Event_Callback = bool (*)(KActionMenu*, QEvent*);
    using KActionMenu_EventFilter_Callback = bool (*)(KActionMenu*, QObject*, QEvent*);
    using KActionMenu_DeleteWidget_Callback = void (*)(KActionMenu*, QWidget*);
    using KActionMenu_TimerEvent_Callback = void (*)(KActionMenu*, QTimerEvent*);
    using KActionMenu_ChildEvent_Callback = void (*)(KActionMenu*, QChildEvent*);
    using KActionMenu_CustomEvent_Callback = void (*)(KActionMenu*, QEvent*);
    using KActionMenu_ConnectNotify_Callback = void (*)(KActionMenu*, QMetaMethod*);
    using KActionMenu_DisconnectNotify_Callback = void (*)(KActionMenu*, QMetaMethod*);
    using KActionMenu_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using KActionMenu_Sender_Callback = QObject* (*)();
    using KActionMenu_SenderSignalIndex_Callback = int (*)();
    using KActionMenu_Receivers_Callback = int (*)(const KActionMenu*, const char*);
    using KActionMenu_IsSignalConnected_Callback = bool (*)(const KActionMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KActionMenu_MetaObject_Callback kactionmenu_metaobject_callback = nullptr;
    KActionMenu_Metacast_Callback kactionmenu_metacast_callback = nullptr;
    KActionMenu_Metacall_Callback kactionmenu_metacall_callback = nullptr;
    KActionMenu_CreateWidget_Callback kactionmenu_createwidget_callback = nullptr;
    KActionMenu_Event_Callback kactionmenu_event_callback = nullptr;
    KActionMenu_EventFilter_Callback kactionmenu_eventfilter_callback = nullptr;
    KActionMenu_DeleteWidget_Callback kactionmenu_deletewidget_callback = nullptr;
    KActionMenu_TimerEvent_Callback kactionmenu_timerevent_callback = nullptr;
    KActionMenu_ChildEvent_Callback kactionmenu_childevent_callback = nullptr;
    KActionMenu_CustomEvent_Callback kactionmenu_customevent_callback = nullptr;
    KActionMenu_ConnectNotify_Callback kactionmenu_connectnotify_callback = nullptr;
    KActionMenu_DisconnectNotify_Callback kactionmenu_disconnectnotify_callback = nullptr;
    KActionMenu_CreatedWidgets_Callback kactionmenu_createdwidgets_callback = nullptr;
    KActionMenu_Sender_Callback kactionmenu_sender_callback = nullptr;
    KActionMenu_SenderSignalIndex_Callback kactionmenu_sendersignalindex_callback = nullptr;
    KActionMenu_Receivers_Callback kactionmenu_receivers_callback = nullptr;
    KActionMenu_IsSignalConnected_Callback kactionmenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kactionmenu_metaobject_isbase = false;
    mutable bool kactionmenu_metacast_isbase = false;
    mutable bool kactionmenu_metacall_isbase = false;
    mutable bool kactionmenu_createwidget_isbase = false;
    mutable bool kactionmenu_event_isbase = false;
    mutable bool kactionmenu_eventfilter_isbase = false;
    mutable bool kactionmenu_deletewidget_isbase = false;
    mutable bool kactionmenu_timerevent_isbase = false;
    mutable bool kactionmenu_childevent_isbase = false;
    mutable bool kactionmenu_customevent_isbase = false;
    mutable bool kactionmenu_connectnotify_isbase = false;
    mutable bool kactionmenu_disconnectnotify_isbase = false;
    mutable bool kactionmenu_createdwidgets_isbase = false;
    mutable bool kactionmenu_sender_isbase = false;
    mutable bool kactionmenu_sendersignalindex_isbase = false;
    mutable bool kactionmenu_receivers_isbase = false;
    mutable bool kactionmenu_issignalconnected_isbase = false;

  public:
    VirtualKActionMenu(QObject* parent) : KActionMenu(parent) {};
    VirtualKActionMenu(const QString& text, QObject* parent) : KActionMenu(text, parent) {};
    VirtualKActionMenu(const QIcon& icon, const QString& text, QObject* parent) : KActionMenu(icon, text, parent) {};

    // Callback setters
    inline void setKActionMenu_MetaObject_Callback(KActionMenu_MetaObject_Callback cb) { kactionmenu_metaobject_callback = cb; }
    inline void setKActionMenu_Metacast_Callback(KActionMenu_Metacast_Callback cb) { kactionmenu_metacast_callback = cb; }
    inline void setKActionMenu_Metacall_Callback(KActionMenu_Metacall_Callback cb) { kactionmenu_metacall_callback = cb; }
    inline void setKActionMenu_CreateWidget_Callback(KActionMenu_CreateWidget_Callback cb) { kactionmenu_createwidget_callback = cb; }
    inline void setKActionMenu_Event_Callback(KActionMenu_Event_Callback cb) { kactionmenu_event_callback = cb; }
    inline void setKActionMenu_EventFilter_Callback(KActionMenu_EventFilter_Callback cb) { kactionmenu_eventfilter_callback = cb; }
    inline void setKActionMenu_DeleteWidget_Callback(KActionMenu_DeleteWidget_Callback cb) { kactionmenu_deletewidget_callback = cb; }
    inline void setKActionMenu_TimerEvent_Callback(KActionMenu_TimerEvent_Callback cb) { kactionmenu_timerevent_callback = cb; }
    inline void setKActionMenu_ChildEvent_Callback(KActionMenu_ChildEvent_Callback cb) { kactionmenu_childevent_callback = cb; }
    inline void setKActionMenu_CustomEvent_Callback(KActionMenu_CustomEvent_Callback cb) { kactionmenu_customevent_callback = cb; }
    inline void setKActionMenu_ConnectNotify_Callback(KActionMenu_ConnectNotify_Callback cb) { kactionmenu_connectnotify_callback = cb; }
    inline void setKActionMenu_DisconnectNotify_Callback(KActionMenu_DisconnectNotify_Callback cb) { kactionmenu_disconnectnotify_callback = cb; }
    inline void setKActionMenu_CreatedWidgets_Callback(KActionMenu_CreatedWidgets_Callback cb) { kactionmenu_createdwidgets_callback = cb; }
    inline void setKActionMenu_Sender_Callback(KActionMenu_Sender_Callback cb) { kactionmenu_sender_callback = cb; }
    inline void setKActionMenu_SenderSignalIndex_Callback(KActionMenu_SenderSignalIndex_Callback cb) { kactionmenu_sendersignalindex_callback = cb; }
    inline void setKActionMenu_Receivers_Callback(KActionMenu_Receivers_Callback cb) { kactionmenu_receivers_callback = cb; }
    inline void setKActionMenu_IsSignalConnected_Callback(KActionMenu_IsSignalConnected_Callback cb) { kactionmenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKActionMenu_MetaObject_IsBase(bool value) const { kactionmenu_metaobject_isbase = value; }
    inline void setKActionMenu_Metacast_IsBase(bool value) const { kactionmenu_metacast_isbase = value; }
    inline void setKActionMenu_Metacall_IsBase(bool value) const { kactionmenu_metacall_isbase = value; }
    inline void setKActionMenu_CreateWidget_IsBase(bool value) const { kactionmenu_createwidget_isbase = value; }
    inline void setKActionMenu_Event_IsBase(bool value) const { kactionmenu_event_isbase = value; }
    inline void setKActionMenu_EventFilter_IsBase(bool value) const { kactionmenu_eventfilter_isbase = value; }
    inline void setKActionMenu_DeleteWidget_IsBase(bool value) const { kactionmenu_deletewidget_isbase = value; }
    inline void setKActionMenu_TimerEvent_IsBase(bool value) const { kactionmenu_timerevent_isbase = value; }
    inline void setKActionMenu_ChildEvent_IsBase(bool value) const { kactionmenu_childevent_isbase = value; }
    inline void setKActionMenu_CustomEvent_IsBase(bool value) const { kactionmenu_customevent_isbase = value; }
    inline void setKActionMenu_ConnectNotify_IsBase(bool value) const { kactionmenu_connectnotify_isbase = value; }
    inline void setKActionMenu_DisconnectNotify_IsBase(bool value) const { kactionmenu_disconnectnotify_isbase = value; }
    inline void setKActionMenu_CreatedWidgets_IsBase(bool value) const { kactionmenu_createdwidgets_isbase = value; }
    inline void setKActionMenu_Sender_IsBase(bool value) const { kactionmenu_sender_isbase = value; }
    inline void setKActionMenu_SenderSignalIndex_IsBase(bool value) const { kactionmenu_sendersignalindex_isbase = value; }
    inline void setKActionMenu_Receivers_IsBase(bool value) const { kactionmenu_receivers_isbase = value; }
    inline void setKActionMenu_IsSignalConnected_IsBase(bool value) const { kactionmenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kactionmenu_metaobject_isbase) {
            kactionmenu_metaobject_isbase = false;
            return KActionMenu::metaObject();
        }
        auto metaobject_cb = kactionmenu_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KActionMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kactionmenu_metacast_isbase) {
            kactionmenu_metacast_isbase = false;
            return KActionMenu::qt_metacast(param1);
        }
        auto metacast_cb = kactionmenu_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KActionMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kactionmenu_metacall_isbase) {
            kactionmenu_metacall_isbase = false;
            return KActionMenu::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kactionmenu_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KActionMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kactionmenu_createwidget_isbase) {
            kactionmenu_createwidget_isbase = false;
            return KActionMenu::createWidget(parent);
        }
        auto createwidget_cb = kactionmenu_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return KActionMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kactionmenu_event_isbase) {
            kactionmenu_event_isbase = false;
            return KActionMenu::event(param1);
        }
        auto event_cb = kactionmenu_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KActionMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kactionmenu_eventfilter_isbase) {
            kactionmenu_eventfilter_isbase = false;
            return KActionMenu::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kactionmenu_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KActionMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kactionmenu_deletewidget_isbase) {
            kactionmenu_deletewidget_isbase = false;
            KActionMenu::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = kactionmenu_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        KActionMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kactionmenu_timerevent_isbase) {
            kactionmenu_timerevent_isbase = false;
            KActionMenu::timerEvent(event);
            return;
        }
        auto timerevent_cb = kactionmenu_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KActionMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kactionmenu_childevent_isbase) {
            kactionmenu_childevent_isbase = false;
            KActionMenu::childEvent(event);
            return;
        }
        auto childevent_cb = kactionmenu_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KActionMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kactionmenu_customevent_isbase) {
            kactionmenu_customevent_isbase = false;
            KActionMenu::customEvent(event);
            return;
        }
        auto customevent_cb = kactionmenu_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KActionMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kactionmenu_connectnotify_isbase) {
            kactionmenu_connectnotify_isbase = false;
            KActionMenu::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kactionmenu_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KActionMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kactionmenu_disconnectnotify_isbase) {
            kactionmenu_disconnectnotify_isbase = false;
            KActionMenu::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kactionmenu_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KActionMenu::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kactionmenu_createdwidgets_isbase) {
            kactionmenu_createdwidgets_isbase = false;
            return KActionMenu::createdWidgets();
        }
        auto createdwidgets_cb = kactionmenu_createdwidgets_callback;
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
        return KActionMenu::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kactionmenu_sender_isbase) {
            kactionmenu_sender_isbase = false;
            return KActionMenu::sender();
        }
        auto sender_cb = kactionmenu_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KActionMenu::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kactionmenu_sendersignalindex_isbase) {
            kactionmenu_sendersignalindex_isbase = false;
            return KActionMenu::senderSignalIndex();
        }
        auto sendersignalindex_cb = kactionmenu_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KActionMenu::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kactionmenu_receivers_isbase) {
            kactionmenu_receivers_isbase = false;
            return KActionMenu::receivers(signal);
        }
        auto receivers_cb = kactionmenu_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KActionMenu::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kactionmenu_issignalconnected_isbase) {
            kactionmenu_issignalconnected_isbase = false;
            return KActionMenu::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kactionmenu_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KActionMenu::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KActionMenu_Event(KActionMenu* self, QEvent* param1);
    friend bool KActionMenu_SuperEvent(KActionMenu* self, QEvent* param1);
    friend bool KActionMenu_EventFilter(KActionMenu* self, QObject* param1, QEvent* param2);
    friend bool KActionMenu_SuperEventFilter(KActionMenu* self, QObject* param1, QEvent* param2);
    friend void KActionMenu_DeleteWidget(KActionMenu* self, QWidget* widget);
    friend void KActionMenu_SuperDeleteWidget(KActionMenu* self, QWidget* widget);
    friend void KActionMenu_TimerEvent(KActionMenu* self, QTimerEvent* event);
    friend void KActionMenu_SuperTimerEvent(KActionMenu* self, QTimerEvent* event);
    friend void KActionMenu_ChildEvent(KActionMenu* self, QChildEvent* event);
    friend void KActionMenu_SuperChildEvent(KActionMenu* self, QChildEvent* event);
    friend void KActionMenu_CustomEvent(KActionMenu* self, QEvent* event);
    friend void KActionMenu_SuperCustomEvent(KActionMenu* self, QEvent* event);
    friend void KActionMenu_ConnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend void KActionMenu_SuperConnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend void KActionMenu_DisconnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend void KActionMenu_SuperDisconnectNotify(KActionMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KActionMenu_CreatedWidgets(const KActionMenu* self);
    friend libqt_list /* of QWidget* */ KActionMenu_SuperCreatedWidgets(const KActionMenu* self);
    friend QObject* KActionMenu_Sender(const KActionMenu* self);
    friend QObject* KActionMenu_SuperSender(const KActionMenu* self);
    friend int KActionMenu_SenderSignalIndex(const KActionMenu* self);
    friend int KActionMenu_SuperSenderSignalIndex(const KActionMenu* self);
    friend int KActionMenu_Receivers(const KActionMenu* self, const char* signal);
    friend int KActionMenu_SuperReceivers(const KActionMenu* self, const char* signal);
    friend bool KActionMenu_IsSignalConnected(const KActionMenu* self, const QMetaMethod* signal);
    friend bool KActionMenu_SuperIsSignalConnected(const KActionMenu* self, const QMetaMethod* signal);
};

#endif
