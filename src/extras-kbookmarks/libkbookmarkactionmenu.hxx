#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKACTIONMENU_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkActionMenu so that we can call protected methods
class VirtualKBookmarkActionMenu final : public KBookmarkActionMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkActionMenu = true;

    // Virtual class public types (including callbacks)
    using KBookmarkActionMenu_MetaObject_Callback = QMetaObject* (*)();
    using KBookmarkActionMenu_Metacast_Callback = void* (*)(KBookmarkActionMenu*, const char*);
    using KBookmarkActionMenu_Metacall_Callback = int (*)(KBookmarkActionMenu*, int, int, void**);
    using KBookmarkActionMenu_CreateWidget_Callback = QWidget* (*)(KBookmarkActionMenu*, QWidget*);
    using KBookmarkActionMenu_Event_Callback = bool (*)(KBookmarkActionMenu*, QEvent*);
    using KBookmarkActionMenu_EventFilter_Callback = bool (*)(KBookmarkActionMenu*, QObject*, QEvent*);
    using KBookmarkActionMenu_DeleteWidget_Callback = void (*)(KBookmarkActionMenu*, QWidget*);
    using KBookmarkActionMenu_TimerEvent_Callback = void (*)(KBookmarkActionMenu*, QTimerEvent*);
    using KBookmarkActionMenu_ChildEvent_Callback = void (*)(KBookmarkActionMenu*, QChildEvent*);
    using KBookmarkActionMenu_CustomEvent_Callback = void (*)(KBookmarkActionMenu*, QEvent*);
    using KBookmarkActionMenu_ConnectNotify_Callback = void (*)(KBookmarkActionMenu*, QMetaMethod*);
    using KBookmarkActionMenu_DisconnectNotify_Callback = void (*)(KBookmarkActionMenu*, QMetaMethod*);
    using KBookmarkActionMenu_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using KBookmarkActionMenu_Sender_Callback = QObject* (*)();
    using KBookmarkActionMenu_SenderSignalIndex_Callback = int (*)();
    using KBookmarkActionMenu_Receivers_Callback = int (*)(const KBookmarkActionMenu*, const char*);
    using KBookmarkActionMenu_IsSignalConnected_Callback = bool (*)(const KBookmarkActionMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KBookmarkActionMenu_MetaObject_Callback kbookmarkactionmenu_metaobject_callback = nullptr;
    KBookmarkActionMenu_Metacast_Callback kbookmarkactionmenu_metacast_callback = nullptr;
    KBookmarkActionMenu_Metacall_Callback kbookmarkactionmenu_metacall_callback = nullptr;
    KBookmarkActionMenu_CreateWidget_Callback kbookmarkactionmenu_createwidget_callback = nullptr;
    KBookmarkActionMenu_Event_Callback kbookmarkactionmenu_event_callback = nullptr;
    KBookmarkActionMenu_EventFilter_Callback kbookmarkactionmenu_eventfilter_callback = nullptr;
    KBookmarkActionMenu_DeleteWidget_Callback kbookmarkactionmenu_deletewidget_callback = nullptr;
    KBookmarkActionMenu_TimerEvent_Callback kbookmarkactionmenu_timerevent_callback = nullptr;
    KBookmarkActionMenu_ChildEvent_Callback kbookmarkactionmenu_childevent_callback = nullptr;
    KBookmarkActionMenu_CustomEvent_Callback kbookmarkactionmenu_customevent_callback = nullptr;
    KBookmarkActionMenu_ConnectNotify_Callback kbookmarkactionmenu_connectnotify_callback = nullptr;
    KBookmarkActionMenu_DisconnectNotify_Callback kbookmarkactionmenu_disconnectnotify_callback = nullptr;
    KBookmarkActionMenu_CreatedWidgets_Callback kbookmarkactionmenu_createdwidgets_callback = nullptr;
    KBookmarkActionMenu_Sender_Callback kbookmarkactionmenu_sender_callback = nullptr;
    KBookmarkActionMenu_SenderSignalIndex_Callback kbookmarkactionmenu_sendersignalindex_callback = nullptr;
    KBookmarkActionMenu_Receivers_Callback kbookmarkactionmenu_receivers_callback = nullptr;
    KBookmarkActionMenu_IsSignalConnected_Callback kbookmarkactionmenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkactionmenu_metaobject_isbase = false;
    mutable bool kbookmarkactionmenu_metacast_isbase = false;
    mutable bool kbookmarkactionmenu_metacall_isbase = false;
    mutable bool kbookmarkactionmenu_createwidget_isbase = false;
    mutable bool kbookmarkactionmenu_event_isbase = false;
    mutable bool kbookmarkactionmenu_eventfilter_isbase = false;
    mutable bool kbookmarkactionmenu_deletewidget_isbase = false;
    mutable bool kbookmarkactionmenu_timerevent_isbase = false;
    mutable bool kbookmarkactionmenu_childevent_isbase = false;
    mutable bool kbookmarkactionmenu_customevent_isbase = false;
    mutable bool kbookmarkactionmenu_connectnotify_isbase = false;
    mutable bool kbookmarkactionmenu_disconnectnotify_isbase = false;
    mutable bool kbookmarkactionmenu_createdwidgets_isbase = false;
    mutable bool kbookmarkactionmenu_sender_isbase = false;
    mutable bool kbookmarkactionmenu_sendersignalindex_isbase = false;
    mutable bool kbookmarkactionmenu_receivers_isbase = false;
    mutable bool kbookmarkactionmenu_issignalconnected_isbase = false;

  public:
    VirtualKBookmarkActionMenu(const KBookmark& bm, QObject* parent) : KBookmarkActionMenu(bm, parent) {};
    VirtualKBookmarkActionMenu(const KBookmark& bm, const QString& text, QObject* parent) : KBookmarkActionMenu(bm, text, parent) {};

    // Callback setters
    inline void setKBookmarkActionMenu_MetaObject_Callback(KBookmarkActionMenu_MetaObject_Callback cb) { kbookmarkactionmenu_metaobject_callback = cb; }
    inline void setKBookmarkActionMenu_Metacast_Callback(KBookmarkActionMenu_Metacast_Callback cb) { kbookmarkactionmenu_metacast_callback = cb; }
    inline void setKBookmarkActionMenu_Metacall_Callback(KBookmarkActionMenu_Metacall_Callback cb) { kbookmarkactionmenu_metacall_callback = cb; }
    inline void setKBookmarkActionMenu_CreateWidget_Callback(KBookmarkActionMenu_CreateWidget_Callback cb) { kbookmarkactionmenu_createwidget_callback = cb; }
    inline void setKBookmarkActionMenu_Event_Callback(KBookmarkActionMenu_Event_Callback cb) { kbookmarkactionmenu_event_callback = cb; }
    inline void setKBookmarkActionMenu_EventFilter_Callback(KBookmarkActionMenu_EventFilter_Callback cb) { kbookmarkactionmenu_eventfilter_callback = cb; }
    inline void setKBookmarkActionMenu_DeleteWidget_Callback(KBookmarkActionMenu_DeleteWidget_Callback cb) { kbookmarkactionmenu_deletewidget_callback = cb; }
    inline void setKBookmarkActionMenu_TimerEvent_Callback(KBookmarkActionMenu_TimerEvent_Callback cb) { kbookmarkactionmenu_timerevent_callback = cb; }
    inline void setKBookmarkActionMenu_ChildEvent_Callback(KBookmarkActionMenu_ChildEvent_Callback cb) { kbookmarkactionmenu_childevent_callback = cb; }
    inline void setKBookmarkActionMenu_CustomEvent_Callback(KBookmarkActionMenu_CustomEvent_Callback cb) { kbookmarkactionmenu_customevent_callback = cb; }
    inline void setKBookmarkActionMenu_ConnectNotify_Callback(KBookmarkActionMenu_ConnectNotify_Callback cb) { kbookmarkactionmenu_connectnotify_callback = cb; }
    inline void setKBookmarkActionMenu_DisconnectNotify_Callback(KBookmarkActionMenu_DisconnectNotify_Callback cb) { kbookmarkactionmenu_disconnectnotify_callback = cb; }
    inline void setKBookmarkActionMenu_CreatedWidgets_Callback(KBookmarkActionMenu_CreatedWidgets_Callback cb) { kbookmarkactionmenu_createdwidgets_callback = cb; }
    inline void setKBookmarkActionMenu_Sender_Callback(KBookmarkActionMenu_Sender_Callback cb) { kbookmarkactionmenu_sender_callback = cb; }
    inline void setKBookmarkActionMenu_SenderSignalIndex_Callback(KBookmarkActionMenu_SenderSignalIndex_Callback cb) { kbookmarkactionmenu_sendersignalindex_callback = cb; }
    inline void setKBookmarkActionMenu_Receivers_Callback(KBookmarkActionMenu_Receivers_Callback cb) { kbookmarkactionmenu_receivers_callback = cb; }
    inline void setKBookmarkActionMenu_IsSignalConnected_Callback(KBookmarkActionMenu_IsSignalConnected_Callback cb) { kbookmarkactionmenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKBookmarkActionMenu_MetaObject_IsBase(bool value) const { kbookmarkactionmenu_metaobject_isbase = value; }
    inline void setKBookmarkActionMenu_Metacast_IsBase(bool value) const { kbookmarkactionmenu_metacast_isbase = value; }
    inline void setKBookmarkActionMenu_Metacall_IsBase(bool value) const { kbookmarkactionmenu_metacall_isbase = value; }
    inline void setKBookmarkActionMenu_CreateWidget_IsBase(bool value) const { kbookmarkactionmenu_createwidget_isbase = value; }
    inline void setKBookmarkActionMenu_Event_IsBase(bool value) const { kbookmarkactionmenu_event_isbase = value; }
    inline void setKBookmarkActionMenu_EventFilter_IsBase(bool value) const { kbookmarkactionmenu_eventfilter_isbase = value; }
    inline void setKBookmarkActionMenu_DeleteWidget_IsBase(bool value) const { kbookmarkactionmenu_deletewidget_isbase = value; }
    inline void setKBookmarkActionMenu_TimerEvent_IsBase(bool value) const { kbookmarkactionmenu_timerevent_isbase = value; }
    inline void setKBookmarkActionMenu_ChildEvent_IsBase(bool value) const { kbookmarkactionmenu_childevent_isbase = value; }
    inline void setKBookmarkActionMenu_CustomEvent_IsBase(bool value) const { kbookmarkactionmenu_customevent_isbase = value; }
    inline void setKBookmarkActionMenu_ConnectNotify_IsBase(bool value) const { kbookmarkactionmenu_connectnotify_isbase = value; }
    inline void setKBookmarkActionMenu_DisconnectNotify_IsBase(bool value) const { kbookmarkactionmenu_disconnectnotify_isbase = value; }
    inline void setKBookmarkActionMenu_CreatedWidgets_IsBase(bool value) const { kbookmarkactionmenu_createdwidgets_isbase = value; }
    inline void setKBookmarkActionMenu_Sender_IsBase(bool value) const { kbookmarkactionmenu_sender_isbase = value; }
    inline void setKBookmarkActionMenu_SenderSignalIndex_IsBase(bool value) const { kbookmarkactionmenu_sendersignalindex_isbase = value; }
    inline void setKBookmarkActionMenu_Receivers_IsBase(bool value) const { kbookmarkactionmenu_receivers_isbase = value; }
    inline void setKBookmarkActionMenu_IsSignalConnected_IsBase(bool value) const { kbookmarkactionmenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbookmarkactionmenu_metaobject_isbase) {
            kbookmarkactionmenu_metaobject_isbase = false;
            return KBookmarkActionMenu::metaObject();
        }
        auto metaobject_cb = kbookmarkactionmenu_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KBookmarkActionMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbookmarkactionmenu_metacast_isbase) {
            kbookmarkactionmenu_metacast_isbase = false;
            return KBookmarkActionMenu::qt_metacast(param1);
        }
        auto metacast_cb = kbookmarkactionmenu_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkActionMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkactionmenu_metacall_isbase) {
            kbookmarkactionmenu_metacall_isbase = false;
            return KBookmarkActionMenu::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kbookmarkactionmenu_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkActionMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kbookmarkactionmenu_createwidget_isbase) {
            kbookmarkactionmenu_createwidget_isbase = false;
            return KBookmarkActionMenu::createWidget(parent);
        }
        auto createwidget_cb = kbookmarkactionmenu_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkActionMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kbookmarkactionmenu_event_isbase) {
            kbookmarkactionmenu_event_isbase = false;
            return KBookmarkActionMenu::event(param1);
        }
        auto event_cb = kbookmarkactionmenu_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkActionMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kbookmarkactionmenu_eventfilter_isbase) {
            kbookmarkactionmenu_eventfilter_isbase = false;
            return KBookmarkActionMenu::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kbookmarkactionmenu_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBookmarkActionMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kbookmarkactionmenu_deletewidget_isbase) {
            kbookmarkactionmenu_deletewidget_isbase = false;
            KBookmarkActionMenu::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = kbookmarkactionmenu_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        KBookmarkActionMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbookmarkactionmenu_timerevent_isbase) {
            kbookmarkactionmenu_timerevent_isbase = false;
            KBookmarkActionMenu::timerEvent(event);
            return;
        }
        auto timerevent_cb = kbookmarkactionmenu_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KBookmarkActionMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkactionmenu_childevent_isbase) {
            kbookmarkactionmenu_childevent_isbase = false;
            KBookmarkActionMenu::childEvent(event);
            return;
        }
        auto childevent_cb = kbookmarkactionmenu_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KBookmarkActionMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkactionmenu_customevent_isbase) {
            kbookmarkactionmenu_customevent_isbase = false;
            KBookmarkActionMenu::customEvent(event);
            return;
        }
        auto customevent_cb = kbookmarkactionmenu_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KBookmarkActionMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkactionmenu_connectnotify_isbase) {
            kbookmarkactionmenu_connectnotify_isbase = false;
            KBookmarkActionMenu::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kbookmarkactionmenu_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KBookmarkActionMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkactionmenu_disconnectnotify_isbase) {
            kbookmarkactionmenu_disconnectnotify_isbase = false;
            KBookmarkActionMenu::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kbookmarkactionmenu_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KBookmarkActionMenu::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kbookmarkactionmenu_createdwidgets_isbase) {
            kbookmarkactionmenu_createdwidgets_isbase = false;
            return KBookmarkActionMenu::createdWidgets();
        }
        auto createdwidgets_cb = kbookmarkactionmenu_createdwidgets_callback;
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
        return KBookmarkActionMenu::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbookmarkactionmenu_sender_isbase) {
            kbookmarkactionmenu_sender_isbase = false;
            return KBookmarkActionMenu::sender();
        }
        auto sender_cb = kbookmarkactionmenu_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KBookmarkActionMenu::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbookmarkactionmenu_sendersignalindex_isbase) {
            kbookmarkactionmenu_sendersignalindex_isbase = false;
            return KBookmarkActionMenu::senderSignalIndex();
        }
        auto sendersignalindex_cb = kbookmarkactionmenu_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KBookmarkActionMenu::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbookmarkactionmenu_receivers_isbase) {
            kbookmarkactionmenu_receivers_isbase = false;
            return KBookmarkActionMenu::receivers(signal);
        }
        auto receivers_cb = kbookmarkactionmenu_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KBookmarkActionMenu::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbookmarkactionmenu_issignalconnected_isbase) {
            kbookmarkactionmenu_issignalconnected_isbase = false;
            return KBookmarkActionMenu::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kbookmarkactionmenu_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KBookmarkActionMenu::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KBookmarkActionMenu_Event(KBookmarkActionMenu* self, QEvent* param1);
    friend bool KBookmarkActionMenu_SuperEvent(KBookmarkActionMenu* self, QEvent* param1);
    friend bool KBookmarkActionMenu_EventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
    friend bool KBookmarkActionMenu_SuperEventFilter(KBookmarkActionMenu* self, QObject* param1, QEvent* param2);
    friend void KBookmarkActionMenu_DeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
    friend void KBookmarkActionMenu_SuperDeleteWidget(KBookmarkActionMenu* self, QWidget* widget);
    friend void KBookmarkActionMenu_TimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
    friend void KBookmarkActionMenu_SuperTimerEvent(KBookmarkActionMenu* self, QTimerEvent* event);
    friend void KBookmarkActionMenu_ChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
    friend void KBookmarkActionMenu_SuperChildEvent(KBookmarkActionMenu* self, QChildEvent* event);
    friend void KBookmarkActionMenu_CustomEvent(KBookmarkActionMenu* self, QEvent* event);
    friend void KBookmarkActionMenu_SuperCustomEvent(KBookmarkActionMenu* self, QEvent* event);
    friend void KBookmarkActionMenu_ConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend void KBookmarkActionMenu_SuperConnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend void KBookmarkActionMenu_DisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend void KBookmarkActionMenu_SuperDisconnectNotify(KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KBookmarkActionMenu_CreatedWidgets(const KBookmarkActionMenu* self);
    friend libqt_list /* of QWidget* */ KBookmarkActionMenu_SuperCreatedWidgets(const KBookmarkActionMenu* self);
    friend QObject* KBookmarkActionMenu_Sender(const KBookmarkActionMenu* self);
    friend QObject* KBookmarkActionMenu_SuperSender(const KBookmarkActionMenu* self);
    friend int KBookmarkActionMenu_SenderSignalIndex(const KBookmarkActionMenu* self);
    friend int KBookmarkActionMenu_SuperSenderSignalIndex(const KBookmarkActionMenu* self);
    friend int KBookmarkActionMenu_Receivers(const KBookmarkActionMenu* self, const char* signal);
    friend int KBookmarkActionMenu_SuperReceivers(const KBookmarkActionMenu* self, const char* signal);
    friend bool KBookmarkActionMenu_IsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
    friend bool KBookmarkActionMenu_SuperIsSignalConnected(const KBookmarkActionMenu* self, const QMetaMethod* signal);
};

#endif
