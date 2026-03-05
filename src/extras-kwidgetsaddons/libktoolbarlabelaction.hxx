#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARLABELACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTOOLBARLABELACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBarLabelAction so that we can call protected methods
class VirtualKToolBarLabelAction final : public KToolBarLabelAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKToolBarLabelAction = true;

    // Virtual class public types (including callbacks)
    using KToolBarLabelAction_MetaObject_Callback = QMetaObject* (*)();
    using KToolBarLabelAction_Metacast_Callback = void* (*)(KToolBarLabelAction*, const char*);
    using KToolBarLabelAction_Metacall_Callback = int (*)(KToolBarLabelAction*, int, int, void**);
    using KToolBarLabelAction_CreateWidget_Callback = QWidget* (*)(KToolBarLabelAction*, QWidget*);
    using KToolBarLabelAction_Event_Callback = bool (*)(KToolBarLabelAction*, QEvent*);
    using KToolBarLabelAction_EventFilter_Callback = bool (*)(KToolBarLabelAction*, QObject*, QEvent*);
    using KToolBarLabelAction_DeleteWidget_Callback = void (*)(KToolBarLabelAction*, QWidget*);
    using KToolBarLabelAction_TimerEvent_Callback = void (*)(KToolBarLabelAction*, QTimerEvent*);
    using KToolBarLabelAction_ChildEvent_Callback = void (*)(KToolBarLabelAction*, QChildEvent*);
    using KToolBarLabelAction_CustomEvent_Callback = void (*)(KToolBarLabelAction*, QEvent*);
    using KToolBarLabelAction_ConnectNotify_Callback = void (*)(KToolBarLabelAction*, QMetaMethod*);
    using KToolBarLabelAction_DisconnectNotify_Callback = void (*)(KToolBarLabelAction*, QMetaMethod*);
    using KToolBarLabelAction_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using KToolBarLabelAction_Sender_Callback = QObject* (*)();
    using KToolBarLabelAction_SenderSignalIndex_Callback = int (*)();
    using KToolBarLabelAction_Receivers_Callback = int (*)(const KToolBarLabelAction*, const char*);
    using KToolBarLabelAction_IsSignalConnected_Callback = bool (*)(const KToolBarLabelAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KToolBarLabelAction_MetaObject_Callback ktoolbarlabelaction_metaobject_callback = nullptr;
    KToolBarLabelAction_Metacast_Callback ktoolbarlabelaction_metacast_callback = nullptr;
    KToolBarLabelAction_Metacall_Callback ktoolbarlabelaction_metacall_callback = nullptr;
    KToolBarLabelAction_CreateWidget_Callback ktoolbarlabelaction_createwidget_callback = nullptr;
    KToolBarLabelAction_Event_Callback ktoolbarlabelaction_event_callback = nullptr;
    KToolBarLabelAction_EventFilter_Callback ktoolbarlabelaction_eventfilter_callback = nullptr;
    KToolBarLabelAction_DeleteWidget_Callback ktoolbarlabelaction_deletewidget_callback = nullptr;
    KToolBarLabelAction_TimerEvent_Callback ktoolbarlabelaction_timerevent_callback = nullptr;
    KToolBarLabelAction_ChildEvent_Callback ktoolbarlabelaction_childevent_callback = nullptr;
    KToolBarLabelAction_CustomEvent_Callback ktoolbarlabelaction_customevent_callback = nullptr;
    KToolBarLabelAction_ConnectNotify_Callback ktoolbarlabelaction_connectnotify_callback = nullptr;
    KToolBarLabelAction_DisconnectNotify_Callback ktoolbarlabelaction_disconnectnotify_callback = nullptr;
    KToolBarLabelAction_CreatedWidgets_Callback ktoolbarlabelaction_createdwidgets_callback = nullptr;
    KToolBarLabelAction_Sender_Callback ktoolbarlabelaction_sender_callback = nullptr;
    KToolBarLabelAction_SenderSignalIndex_Callback ktoolbarlabelaction_sendersignalindex_callback = nullptr;
    KToolBarLabelAction_Receivers_Callback ktoolbarlabelaction_receivers_callback = nullptr;
    KToolBarLabelAction_IsSignalConnected_Callback ktoolbarlabelaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktoolbarlabelaction_metaobject_isbase = false;
    mutable bool ktoolbarlabelaction_metacast_isbase = false;
    mutable bool ktoolbarlabelaction_metacall_isbase = false;
    mutable bool ktoolbarlabelaction_createwidget_isbase = false;
    mutable bool ktoolbarlabelaction_event_isbase = false;
    mutable bool ktoolbarlabelaction_eventfilter_isbase = false;
    mutable bool ktoolbarlabelaction_deletewidget_isbase = false;
    mutable bool ktoolbarlabelaction_timerevent_isbase = false;
    mutable bool ktoolbarlabelaction_childevent_isbase = false;
    mutable bool ktoolbarlabelaction_customevent_isbase = false;
    mutable bool ktoolbarlabelaction_connectnotify_isbase = false;
    mutable bool ktoolbarlabelaction_disconnectnotify_isbase = false;
    mutable bool ktoolbarlabelaction_createdwidgets_isbase = false;
    mutable bool ktoolbarlabelaction_sender_isbase = false;
    mutable bool ktoolbarlabelaction_sendersignalindex_isbase = false;
    mutable bool ktoolbarlabelaction_receivers_isbase = false;
    mutable bool ktoolbarlabelaction_issignalconnected_isbase = false;

  public:
    VirtualKToolBarLabelAction(const QString& text, QObject* parent) : KToolBarLabelAction(text, parent) {};
    VirtualKToolBarLabelAction(QAction* buddy, const QString& text, QObject* parent) : KToolBarLabelAction(buddy, text, parent) {};

    // Callback setters
    inline void setKToolBarLabelAction_MetaObject_Callback(KToolBarLabelAction_MetaObject_Callback cb) { ktoolbarlabelaction_metaobject_callback = cb; }
    inline void setKToolBarLabelAction_Metacast_Callback(KToolBarLabelAction_Metacast_Callback cb) { ktoolbarlabelaction_metacast_callback = cb; }
    inline void setKToolBarLabelAction_Metacall_Callback(KToolBarLabelAction_Metacall_Callback cb) { ktoolbarlabelaction_metacall_callback = cb; }
    inline void setKToolBarLabelAction_CreateWidget_Callback(KToolBarLabelAction_CreateWidget_Callback cb) { ktoolbarlabelaction_createwidget_callback = cb; }
    inline void setKToolBarLabelAction_Event_Callback(KToolBarLabelAction_Event_Callback cb) { ktoolbarlabelaction_event_callback = cb; }
    inline void setKToolBarLabelAction_EventFilter_Callback(KToolBarLabelAction_EventFilter_Callback cb) { ktoolbarlabelaction_eventfilter_callback = cb; }
    inline void setKToolBarLabelAction_DeleteWidget_Callback(KToolBarLabelAction_DeleteWidget_Callback cb) { ktoolbarlabelaction_deletewidget_callback = cb; }
    inline void setKToolBarLabelAction_TimerEvent_Callback(KToolBarLabelAction_TimerEvent_Callback cb) { ktoolbarlabelaction_timerevent_callback = cb; }
    inline void setKToolBarLabelAction_ChildEvent_Callback(KToolBarLabelAction_ChildEvent_Callback cb) { ktoolbarlabelaction_childevent_callback = cb; }
    inline void setKToolBarLabelAction_CustomEvent_Callback(KToolBarLabelAction_CustomEvent_Callback cb) { ktoolbarlabelaction_customevent_callback = cb; }
    inline void setKToolBarLabelAction_ConnectNotify_Callback(KToolBarLabelAction_ConnectNotify_Callback cb) { ktoolbarlabelaction_connectnotify_callback = cb; }
    inline void setKToolBarLabelAction_DisconnectNotify_Callback(KToolBarLabelAction_DisconnectNotify_Callback cb) { ktoolbarlabelaction_disconnectnotify_callback = cb; }
    inline void setKToolBarLabelAction_CreatedWidgets_Callback(KToolBarLabelAction_CreatedWidgets_Callback cb) { ktoolbarlabelaction_createdwidgets_callback = cb; }
    inline void setKToolBarLabelAction_Sender_Callback(KToolBarLabelAction_Sender_Callback cb) { ktoolbarlabelaction_sender_callback = cb; }
    inline void setKToolBarLabelAction_SenderSignalIndex_Callback(KToolBarLabelAction_SenderSignalIndex_Callback cb) { ktoolbarlabelaction_sendersignalindex_callback = cb; }
    inline void setKToolBarLabelAction_Receivers_Callback(KToolBarLabelAction_Receivers_Callback cb) { ktoolbarlabelaction_receivers_callback = cb; }
    inline void setKToolBarLabelAction_IsSignalConnected_Callback(KToolBarLabelAction_IsSignalConnected_Callback cb) { ktoolbarlabelaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKToolBarLabelAction_MetaObject_IsBase(bool value) const { ktoolbarlabelaction_metaobject_isbase = value; }
    inline void setKToolBarLabelAction_Metacast_IsBase(bool value) const { ktoolbarlabelaction_metacast_isbase = value; }
    inline void setKToolBarLabelAction_Metacall_IsBase(bool value) const { ktoolbarlabelaction_metacall_isbase = value; }
    inline void setKToolBarLabelAction_CreateWidget_IsBase(bool value) const { ktoolbarlabelaction_createwidget_isbase = value; }
    inline void setKToolBarLabelAction_Event_IsBase(bool value) const { ktoolbarlabelaction_event_isbase = value; }
    inline void setKToolBarLabelAction_EventFilter_IsBase(bool value) const { ktoolbarlabelaction_eventfilter_isbase = value; }
    inline void setKToolBarLabelAction_DeleteWidget_IsBase(bool value) const { ktoolbarlabelaction_deletewidget_isbase = value; }
    inline void setKToolBarLabelAction_TimerEvent_IsBase(bool value) const { ktoolbarlabelaction_timerevent_isbase = value; }
    inline void setKToolBarLabelAction_ChildEvent_IsBase(bool value) const { ktoolbarlabelaction_childevent_isbase = value; }
    inline void setKToolBarLabelAction_CustomEvent_IsBase(bool value) const { ktoolbarlabelaction_customevent_isbase = value; }
    inline void setKToolBarLabelAction_ConnectNotify_IsBase(bool value) const { ktoolbarlabelaction_connectnotify_isbase = value; }
    inline void setKToolBarLabelAction_DisconnectNotify_IsBase(bool value) const { ktoolbarlabelaction_disconnectnotify_isbase = value; }
    inline void setKToolBarLabelAction_CreatedWidgets_IsBase(bool value) const { ktoolbarlabelaction_createdwidgets_isbase = value; }
    inline void setKToolBarLabelAction_Sender_IsBase(bool value) const { ktoolbarlabelaction_sender_isbase = value; }
    inline void setKToolBarLabelAction_SenderSignalIndex_IsBase(bool value) const { ktoolbarlabelaction_sendersignalindex_isbase = value; }
    inline void setKToolBarLabelAction_Receivers_IsBase(bool value) const { ktoolbarlabelaction_receivers_isbase = value; }
    inline void setKToolBarLabelAction_IsSignalConnected_IsBase(bool value) const { ktoolbarlabelaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktoolbarlabelaction_metaobject_isbase) {
            ktoolbarlabelaction_metaobject_isbase = false;
            return KToolBarLabelAction::metaObject();
        }
        auto metaobject_cb = ktoolbarlabelaction_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KToolBarLabelAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktoolbarlabelaction_metacast_isbase) {
            ktoolbarlabelaction_metacast_isbase = false;
            return KToolBarLabelAction::qt_metacast(param1);
        }
        auto metacast_cb = ktoolbarlabelaction_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KToolBarLabelAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbarlabelaction_metacall_isbase) {
            ktoolbarlabelaction_metacall_isbase = false;
            return KToolBarLabelAction::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktoolbarlabelaction_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KToolBarLabelAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (ktoolbarlabelaction_createwidget_isbase) {
            ktoolbarlabelaction_createwidget_isbase = false;
            return KToolBarLabelAction::createWidget(parent);
        }
        auto createwidget_cb = ktoolbarlabelaction_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return KToolBarLabelAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktoolbarlabelaction_event_isbase) {
            ktoolbarlabelaction_event_isbase = false;
            return KToolBarLabelAction::event(param1);
        }
        auto event_cb = ktoolbarlabelaction_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KToolBarLabelAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoolbarlabelaction_eventfilter_isbase) {
            ktoolbarlabelaction_eventfilter_isbase = false;
            return KToolBarLabelAction::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktoolbarlabelaction_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KToolBarLabelAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (ktoolbarlabelaction_deletewidget_isbase) {
            ktoolbarlabelaction_deletewidget_isbase = false;
            KToolBarLabelAction::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = ktoolbarlabelaction_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        KToolBarLabelAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbarlabelaction_timerevent_isbase) {
            ktoolbarlabelaction_timerevent_isbase = false;
            KToolBarLabelAction::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktoolbarlabelaction_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KToolBarLabelAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbarlabelaction_childevent_isbase) {
            ktoolbarlabelaction_childevent_isbase = false;
            KToolBarLabelAction::childEvent(event);
            return;
        }
        auto childevent_cb = ktoolbarlabelaction_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KToolBarLabelAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbarlabelaction_customevent_isbase) {
            ktoolbarlabelaction_customevent_isbase = false;
            KToolBarLabelAction::customEvent(event);
            return;
        }
        auto customevent_cb = ktoolbarlabelaction_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KToolBarLabelAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbarlabelaction_connectnotify_isbase) {
            ktoolbarlabelaction_connectnotify_isbase = false;
            KToolBarLabelAction::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktoolbarlabelaction_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KToolBarLabelAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbarlabelaction_disconnectnotify_isbase) {
            ktoolbarlabelaction_disconnectnotify_isbase = false;
            KToolBarLabelAction::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktoolbarlabelaction_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KToolBarLabelAction::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (ktoolbarlabelaction_createdwidgets_isbase) {
            ktoolbarlabelaction_createdwidgets_isbase = false;
            return KToolBarLabelAction::createdWidgets();
        }
        auto createdwidgets_cb = ktoolbarlabelaction_createdwidgets_callback;
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
        return KToolBarLabelAction::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktoolbarlabelaction_sender_isbase) {
            ktoolbarlabelaction_sender_isbase = false;
            return KToolBarLabelAction::sender();
        }
        auto sender_cb = ktoolbarlabelaction_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KToolBarLabelAction::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktoolbarlabelaction_sendersignalindex_isbase) {
            ktoolbarlabelaction_sendersignalindex_isbase = false;
            return KToolBarLabelAction::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktoolbarlabelaction_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KToolBarLabelAction::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktoolbarlabelaction_receivers_isbase) {
            ktoolbarlabelaction_receivers_isbase = false;
            return KToolBarLabelAction::receivers(signal);
        }
        auto receivers_cb = ktoolbarlabelaction_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KToolBarLabelAction::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktoolbarlabelaction_issignalconnected_isbase) {
            ktoolbarlabelaction_issignalconnected_isbase = false;
            return KToolBarLabelAction::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktoolbarlabelaction_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KToolBarLabelAction::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KToolBarLabelAction_Event(KToolBarLabelAction* self, QEvent* param1);
    friend bool KToolBarLabelAction_SuperEvent(KToolBarLabelAction* self, QEvent* param1);
    friend bool KToolBarLabelAction_EventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
    friend bool KToolBarLabelAction_SuperEventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event);
    friend void KToolBarLabelAction_DeleteWidget(KToolBarLabelAction* self, QWidget* widget);
    friend void KToolBarLabelAction_SuperDeleteWidget(KToolBarLabelAction* self, QWidget* widget);
    friend void KToolBarLabelAction_TimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
    friend void KToolBarLabelAction_SuperTimerEvent(KToolBarLabelAction* self, QTimerEvent* event);
    friend void KToolBarLabelAction_ChildEvent(KToolBarLabelAction* self, QChildEvent* event);
    friend void KToolBarLabelAction_SuperChildEvent(KToolBarLabelAction* self, QChildEvent* event);
    friend void KToolBarLabelAction_CustomEvent(KToolBarLabelAction* self, QEvent* event);
    friend void KToolBarLabelAction_SuperCustomEvent(KToolBarLabelAction* self, QEvent* event);
    friend void KToolBarLabelAction_ConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend void KToolBarLabelAction_SuperConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend void KToolBarLabelAction_DisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend void KToolBarLabelAction_SuperDisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ KToolBarLabelAction_CreatedWidgets(const KToolBarLabelAction* self);
    friend libqt_list /* of QWidget* */ KToolBarLabelAction_SuperCreatedWidgets(const KToolBarLabelAction* self);
    friend QObject* KToolBarLabelAction_Sender(const KToolBarLabelAction* self);
    friend QObject* KToolBarLabelAction_SuperSender(const KToolBarLabelAction* self);
    friend int KToolBarLabelAction_SenderSignalIndex(const KToolBarLabelAction* self);
    friend int KToolBarLabelAction_SuperSenderSignalIndex(const KToolBarLabelAction* self);
    friend int KToolBarLabelAction_Receivers(const KToolBarLabelAction* self, const char* signal);
    friend int KToolBarLabelAction_SuperReceivers(const KToolBarLabelAction* self, const char* signal);
    friend bool KToolBarLabelAction_IsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
    friend bool KToolBarLabelAction_SuperIsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal);
};

#endif
