#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKNEWFILEMENU_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKNEWFILEMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewFileMenu so that we can call protected methods
class VirtualKNewFileMenu final : public KNewFileMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKNewFileMenu = true;

    // Virtual class public types (including callbacks)
    using KNewFileMenu_MetaObject_Callback = QMetaObject* (*)();
    using KNewFileMenu_Metacast_Callback = void* (*)(KNewFileMenu*, const char*);
    using KNewFileMenu_Metacall_Callback = int (*)(KNewFileMenu*, int, int, void**);
    using KNewFileMenu_SlotResult_Callback = void (*)(KNewFileMenu*, KJob*);
    using KNewFileMenu_CreateWidget_Callback = QWidget* (*)(KNewFileMenu*, QWidget*);
    using KNewFileMenu_Event_Callback = bool (*)(KNewFileMenu*, QEvent*);
    using KNewFileMenu_EventFilter_Callback = bool (*)(KNewFileMenu*, QObject*, QEvent*);
    using KNewFileMenu_DeleteWidget_Callback = void (*)(KNewFileMenu*, QWidget*);
    using KNewFileMenu_TimerEvent_Callback = void (*)(KNewFileMenu*, QTimerEvent*);
    using KNewFileMenu_ChildEvent_Callback = void (*)(KNewFileMenu*, QChildEvent*);
    using KNewFileMenu_CustomEvent_Callback = void (*)(KNewFileMenu*, QEvent*);
    using KNewFileMenu_ConnectNotify_Callback = void (*)(KNewFileMenu*, QMetaMethod*);
    using KNewFileMenu_DisconnectNotify_Callback = void (*)(KNewFileMenu*, QMetaMethod*);
    using KNewFileMenu_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using KNewFileMenu_Sender_Callback = QObject* (*)();
    using KNewFileMenu_SenderSignalIndex_Callback = int (*)();
    using KNewFileMenu_Receivers_Callback = int (*)(const KNewFileMenu*, const char*);
    using KNewFileMenu_IsSignalConnected_Callback = bool (*)(const KNewFileMenu*, QMetaMethod*);

  protected:
    // Instance callback storage
    KNewFileMenu_MetaObject_Callback knewfilemenu_metaobject_callback = nullptr;
    KNewFileMenu_Metacast_Callback knewfilemenu_metacast_callback = nullptr;
    KNewFileMenu_Metacall_Callback knewfilemenu_metacall_callback = nullptr;
    KNewFileMenu_SlotResult_Callback knewfilemenu_slotresult_callback = nullptr;
    KNewFileMenu_CreateWidget_Callback knewfilemenu_createwidget_callback = nullptr;
    KNewFileMenu_Event_Callback knewfilemenu_event_callback = nullptr;
    KNewFileMenu_EventFilter_Callback knewfilemenu_eventfilter_callback = nullptr;
    KNewFileMenu_DeleteWidget_Callback knewfilemenu_deletewidget_callback = nullptr;
    KNewFileMenu_TimerEvent_Callback knewfilemenu_timerevent_callback = nullptr;
    KNewFileMenu_ChildEvent_Callback knewfilemenu_childevent_callback = nullptr;
    KNewFileMenu_CustomEvent_Callback knewfilemenu_customevent_callback = nullptr;
    KNewFileMenu_ConnectNotify_Callback knewfilemenu_connectnotify_callback = nullptr;
    KNewFileMenu_DisconnectNotify_Callback knewfilemenu_disconnectnotify_callback = nullptr;
    KNewFileMenu_CreatedWidgets_Callback knewfilemenu_createdwidgets_callback = nullptr;
    KNewFileMenu_Sender_Callback knewfilemenu_sender_callback = nullptr;
    KNewFileMenu_SenderSignalIndex_Callback knewfilemenu_sendersignalindex_callback = nullptr;
    KNewFileMenu_Receivers_Callback knewfilemenu_receivers_callback = nullptr;
    KNewFileMenu_IsSignalConnected_Callback knewfilemenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knewfilemenu_metaobject_isbase = false;
    mutable bool knewfilemenu_metacast_isbase = false;
    mutable bool knewfilemenu_metacall_isbase = false;
    mutable bool knewfilemenu_slotresult_isbase = false;
    mutable bool knewfilemenu_createwidget_isbase = false;
    mutable bool knewfilemenu_event_isbase = false;
    mutable bool knewfilemenu_eventfilter_isbase = false;
    mutable bool knewfilemenu_deletewidget_isbase = false;
    mutable bool knewfilemenu_timerevent_isbase = false;
    mutable bool knewfilemenu_childevent_isbase = false;
    mutable bool knewfilemenu_customevent_isbase = false;
    mutable bool knewfilemenu_connectnotify_isbase = false;
    mutable bool knewfilemenu_disconnectnotify_isbase = false;
    mutable bool knewfilemenu_createdwidgets_isbase = false;
    mutable bool knewfilemenu_sender_isbase = false;
    mutable bool knewfilemenu_sendersignalindex_isbase = false;
    mutable bool knewfilemenu_receivers_isbase = false;
    mutable bool knewfilemenu_issignalconnected_isbase = false;

  public:
    VirtualKNewFileMenu(QObject* parent) : KNewFileMenu(parent) {};

    // Callback setters
    inline void setKNewFileMenu_MetaObject_Callback(KNewFileMenu_MetaObject_Callback cb) { knewfilemenu_metaobject_callback = cb; }
    inline void setKNewFileMenu_Metacast_Callback(KNewFileMenu_Metacast_Callback cb) { knewfilemenu_metacast_callback = cb; }
    inline void setKNewFileMenu_Metacall_Callback(KNewFileMenu_Metacall_Callback cb) { knewfilemenu_metacall_callback = cb; }
    inline void setKNewFileMenu_SlotResult_Callback(KNewFileMenu_SlotResult_Callback cb) { knewfilemenu_slotresult_callback = cb; }
    inline void setKNewFileMenu_CreateWidget_Callback(KNewFileMenu_CreateWidget_Callback cb) { knewfilemenu_createwidget_callback = cb; }
    inline void setKNewFileMenu_Event_Callback(KNewFileMenu_Event_Callback cb) { knewfilemenu_event_callback = cb; }
    inline void setKNewFileMenu_EventFilter_Callback(KNewFileMenu_EventFilter_Callback cb) { knewfilemenu_eventfilter_callback = cb; }
    inline void setKNewFileMenu_DeleteWidget_Callback(KNewFileMenu_DeleteWidget_Callback cb) { knewfilemenu_deletewidget_callback = cb; }
    inline void setKNewFileMenu_TimerEvent_Callback(KNewFileMenu_TimerEvent_Callback cb) { knewfilemenu_timerevent_callback = cb; }
    inline void setKNewFileMenu_ChildEvent_Callback(KNewFileMenu_ChildEvent_Callback cb) { knewfilemenu_childevent_callback = cb; }
    inline void setKNewFileMenu_CustomEvent_Callback(KNewFileMenu_CustomEvent_Callback cb) { knewfilemenu_customevent_callback = cb; }
    inline void setKNewFileMenu_ConnectNotify_Callback(KNewFileMenu_ConnectNotify_Callback cb) { knewfilemenu_connectnotify_callback = cb; }
    inline void setKNewFileMenu_DisconnectNotify_Callback(KNewFileMenu_DisconnectNotify_Callback cb) { knewfilemenu_disconnectnotify_callback = cb; }
    inline void setKNewFileMenu_CreatedWidgets_Callback(KNewFileMenu_CreatedWidgets_Callback cb) { knewfilemenu_createdwidgets_callback = cb; }
    inline void setKNewFileMenu_Sender_Callback(KNewFileMenu_Sender_Callback cb) { knewfilemenu_sender_callback = cb; }
    inline void setKNewFileMenu_SenderSignalIndex_Callback(KNewFileMenu_SenderSignalIndex_Callback cb) { knewfilemenu_sendersignalindex_callback = cb; }
    inline void setKNewFileMenu_Receivers_Callback(KNewFileMenu_Receivers_Callback cb) { knewfilemenu_receivers_callback = cb; }
    inline void setKNewFileMenu_IsSignalConnected_Callback(KNewFileMenu_IsSignalConnected_Callback cb) { knewfilemenu_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNewFileMenu_MetaObject_IsBase(bool value) const { knewfilemenu_metaobject_isbase = value; }
    inline void setKNewFileMenu_Metacast_IsBase(bool value) const { knewfilemenu_metacast_isbase = value; }
    inline void setKNewFileMenu_Metacall_IsBase(bool value) const { knewfilemenu_metacall_isbase = value; }
    inline void setKNewFileMenu_SlotResult_IsBase(bool value) const { knewfilemenu_slotresult_isbase = value; }
    inline void setKNewFileMenu_CreateWidget_IsBase(bool value) const { knewfilemenu_createwidget_isbase = value; }
    inline void setKNewFileMenu_Event_IsBase(bool value) const { knewfilemenu_event_isbase = value; }
    inline void setKNewFileMenu_EventFilter_IsBase(bool value) const { knewfilemenu_eventfilter_isbase = value; }
    inline void setKNewFileMenu_DeleteWidget_IsBase(bool value) const { knewfilemenu_deletewidget_isbase = value; }
    inline void setKNewFileMenu_TimerEvent_IsBase(bool value) const { knewfilemenu_timerevent_isbase = value; }
    inline void setKNewFileMenu_ChildEvent_IsBase(bool value) const { knewfilemenu_childevent_isbase = value; }
    inline void setKNewFileMenu_CustomEvent_IsBase(bool value) const { knewfilemenu_customevent_isbase = value; }
    inline void setKNewFileMenu_ConnectNotify_IsBase(bool value) const { knewfilemenu_connectnotify_isbase = value; }
    inline void setKNewFileMenu_DisconnectNotify_IsBase(bool value) const { knewfilemenu_disconnectnotify_isbase = value; }
    inline void setKNewFileMenu_CreatedWidgets_IsBase(bool value) const { knewfilemenu_createdwidgets_isbase = value; }
    inline void setKNewFileMenu_Sender_IsBase(bool value) const { knewfilemenu_sender_isbase = value; }
    inline void setKNewFileMenu_SenderSignalIndex_IsBase(bool value) const { knewfilemenu_sendersignalindex_isbase = value; }
    inline void setKNewFileMenu_Receivers_IsBase(bool value) const { knewfilemenu_receivers_isbase = value; }
    inline void setKNewFileMenu_IsSignalConnected_IsBase(bool value) const { knewfilemenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knewfilemenu_metaobject_isbase) {
            knewfilemenu_metaobject_isbase = false;
            return KNewFileMenu::metaObject();
        }
        auto metaobject_cb = knewfilemenu_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNewFileMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knewfilemenu_metacast_isbase) {
            knewfilemenu_metacast_isbase = false;
            return KNewFileMenu::qt_metacast(param1);
        }
        auto metacast_cb = knewfilemenu_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNewFileMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewfilemenu_metacall_isbase) {
            knewfilemenu_metacall_isbase = false;
            return KNewFileMenu::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knewfilemenu_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNewFileMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResult(KJob* job) override {
        if (knewfilemenu_slotresult_isbase) {
            knewfilemenu_slotresult_isbase = false;
            KNewFileMenu::slotResult(job);
            return;
        }
        auto slotresult_cb = knewfilemenu_slotresult_callback;
        if (slotresult_cb) {
            KJob* cbval1 = job;

            slotresult_cb(this, cbval1);
            return;
        }
        KNewFileMenu::slotResult(job);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (knewfilemenu_createwidget_isbase) {
            knewfilemenu_createwidget_isbase = false;
            return KNewFileMenu::createWidget(parent);
        }
        auto createwidget_cb = knewfilemenu_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return KNewFileMenu::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (knewfilemenu_event_isbase) {
            knewfilemenu_event_isbase = false;
            return KNewFileMenu::event(param1);
        }
        auto event_cb = knewfilemenu_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNewFileMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knewfilemenu_eventfilter_isbase) {
            knewfilemenu_eventfilter_isbase = false;
            return KNewFileMenu::eventFilter(param1, param2);
        }
        auto eventfilter_cb = knewfilemenu_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNewFileMenu::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (knewfilemenu_deletewidget_isbase) {
            knewfilemenu_deletewidget_isbase = false;
            KNewFileMenu::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = knewfilemenu_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        KNewFileMenu::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewfilemenu_timerevent_isbase) {
            knewfilemenu_timerevent_isbase = false;
            KNewFileMenu::timerEvent(event);
            return;
        }
        auto timerevent_cb = knewfilemenu_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNewFileMenu::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewfilemenu_childevent_isbase) {
            knewfilemenu_childevent_isbase = false;
            KNewFileMenu::childEvent(event);
            return;
        }
        auto childevent_cb = knewfilemenu_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNewFileMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewfilemenu_customevent_isbase) {
            knewfilemenu_customevent_isbase = false;
            KNewFileMenu::customEvent(event);
            return;
        }
        auto customevent_cb = knewfilemenu_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNewFileMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewfilemenu_connectnotify_isbase) {
            knewfilemenu_connectnotify_isbase = false;
            KNewFileMenu::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knewfilemenu_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNewFileMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewfilemenu_disconnectnotify_isbase) {
            knewfilemenu_disconnectnotify_isbase = false;
            KNewFileMenu::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knewfilemenu_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNewFileMenu::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (knewfilemenu_createdwidgets_isbase) {
            knewfilemenu_createdwidgets_isbase = false;
            return KNewFileMenu::createdWidgets();
        }
        auto createdwidgets_cb = knewfilemenu_createdwidgets_callback;
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
        return KNewFileMenu::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knewfilemenu_sender_isbase) {
            knewfilemenu_sender_isbase = false;
            return KNewFileMenu::sender();
        }
        auto sender_cb = knewfilemenu_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNewFileMenu::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knewfilemenu_sendersignalindex_isbase) {
            knewfilemenu_sendersignalindex_isbase = false;
            return KNewFileMenu::senderSignalIndex();
        }
        auto sendersignalindex_cb = knewfilemenu_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNewFileMenu::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knewfilemenu_receivers_isbase) {
            knewfilemenu_receivers_isbase = false;
            return KNewFileMenu::receivers(signal);
        }
        auto receivers_cb = knewfilemenu_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewFileMenu::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knewfilemenu_issignalconnected_isbase) {
            knewfilemenu_issignalconnected_isbase = false;
            return KNewFileMenu::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knewfilemenu_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNewFileMenu::isSignalConnected(signal);
    }

    // Friend functions
    friend void KNewFileMenu_SlotResult(KNewFileMenu* self, KJob* job);
    friend void KNewFileMenu_SuperSlotResult(KNewFileMenu* self, KJob* job);
    friend bool KNewFileMenu_Event(KNewFileMenu* self, QEvent* param1);
    friend bool KNewFileMenu_SuperEvent(KNewFileMenu* self, QEvent* param1);
    friend bool KNewFileMenu_EventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2);
    friend bool KNewFileMenu_SuperEventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2);
    friend void KNewFileMenu_DeleteWidget(KNewFileMenu* self, QWidget* widget);
    friend void KNewFileMenu_SuperDeleteWidget(KNewFileMenu* self, QWidget* widget);
    friend void KNewFileMenu_TimerEvent(KNewFileMenu* self, QTimerEvent* event);
    friend void KNewFileMenu_SuperTimerEvent(KNewFileMenu* self, QTimerEvent* event);
    friend void KNewFileMenu_ChildEvent(KNewFileMenu* self, QChildEvent* event);
    friend void KNewFileMenu_SuperChildEvent(KNewFileMenu* self, QChildEvent* event);
    friend void KNewFileMenu_CustomEvent(KNewFileMenu* self, QEvent* event);
    friend void KNewFileMenu_SuperCustomEvent(KNewFileMenu* self, QEvent* event);
    friend void KNewFileMenu_ConnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend void KNewFileMenu_SuperConnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend void KNewFileMenu_DisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend void KNewFileMenu_SuperDisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KNewFileMenu_CreatedWidgets(const KNewFileMenu* self);
    friend libqt_list /* of QWidget* */ KNewFileMenu_SuperCreatedWidgets(const KNewFileMenu* self);
    friend QObject* KNewFileMenu_Sender(const KNewFileMenu* self);
    friend QObject* KNewFileMenu_SuperSender(const KNewFileMenu* self);
    friend int KNewFileMenu_SenderSignalIndex(const KNewFileMenu* self);
    friend int KNewFileMenu_SuperSenderSignalIndex(const KNewFileMenu* self);
    friend int KNewFileMenu_Receivers(const KNewFileMenu* self, const char* signal);
    friend int KNewFileMenu_SuperReceivers(const KNewFileMenu* self, const char* signal);
    friend bool KNewFileMenu_IsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal);
    friend bool KNewFileMenu_SuperIsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal);
};

#endif
