#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontAction so that we can call protected methods
class VirtualKFontAction final : public KFontAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKFontAction = true;

    // Virtual class public types (including callbacks)
    using KFontAction_MetaObject_Callback = QMetaObject* (*)();
    using KFontAction_Metacast_Callback = void* (*)(KFontAction*, const char*);
    using KFontAction_Metacall_Callback = int (*)(KFontAction*, int, int, void**);
    using KFontAction_CreateWidget_Callback = QWidget* (*)(KFontAction*, QWidget*);
    using KFontAction_RemoveAction_Callback = QAction* (*)(KFontAction*, QAction*);
    using KFontAction_InsertAction_Callback = void (*)(KFontAction*, QAction*, QAction*);
    using KFontAction_SlotActionTriggered_Callback = void (*)(KFontAction*, QAction*);
    using KFontAction_DeleteWidget_Callback = void (*)(KFontAction*, QWidget*);
    using KFontAction_Event_Callback = bool (*)(KFontAction*, QEvent*);
    using KFontAction_EventFilter_Callback = bool (*)(KFontAction*, QObject*, QEvent*);
    using KFontAction_TimerEvent_Callback = void (*)(KFontAction*, QTimerEvent*);
    using KFontAction_ChildEvent_Callback = void (*)(KFontAction*, QChildEvent*);
    using KFontAction_CustomEvent_Callback = void (*)(KFontAction*, QEvent*);
    using KFontAction_ConnectNotify_Callback = void (*)(KFontAction*, QMetaMethod*);
    using KFontAction_DisconnectNotify_Callback = void (*)(KFontAction*, QMetaMethod*);
    using KFontAction_SlotToggled_Callback = void (*)(KFontAction*, bool);
    using KFontAction_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using KFontAction_Sender_Callback = QObject* (*)();
    using KFontAction_SenderSignalIndex_Callback = int (*)();
    using KFontAction_Receivers_Callback = int (*)(const KFontAction*, const char*);
    using KFontAction_IsSignalConnected_Callback = bool (*)(const KFontAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFontAction_MetaObject_Callback kfontaction_metaobject_callback = nullptr;
    KFontAction_Metacast_Callback kfontaction_metacast_callback = nullptr;
    KFontAction_Metacall_Callback kfontaction_metacall_callback = nullptr;
    KFontAction_CreateWidget_Callback kfontaction_createwidget_callback = nullptr;
    KFontAction_RemoveAction_Callback kfontaction_removeaction_callback = nullptr;
    KFontAction_InsertAction_Callback kfontaction_insertaction_callback = nullptr;
    KFontAction_SlotActionTriggered_Callback kfontaction_slotactiontriggered_callback = nullptr;
    KFontAction_DeleteWidget_Callback kfontaction_deletewidget_callback = nullptr;
    KFontAction_Event_Callback kfontaction_event_callback = nullptr;
    KFontAction_EventFilter_Callback kfontaction_eventfilter_callback = nullptr;
    KFontAction_TimerEvent_Callback kfontaction_timerevent_callback = nullptr;
    KFontAction_ChildEvent_Callback kfontaction_childevent_callback = nullptr;
    KFontAction_CustomEvent_Callback kfontaction_customevent_callback = nullptr;
    KFontAction_ConnectNotify_Callback kfontaction_connectnotify_callback = nullptr;
    KFontAction_DisconnectNotify_Callback kfontaction_disconnectnotify_callback = nullptr;
    KFontAction_SlotToggled_Callback kfontaction_slottoggled_callback = nullptr;
    KFontAction_CreatedWidgets_Callback kfontaction_createdwidgets_callback = nullptr;
    KFontAction_Sender_Callback kfontaction_sender_callback = nullptr;
    KFontAction_SenderSignalIndex_Callback kfontaction_sendersignalindex_callback = nullptr;
    KFontAction_Receivers_Callback kfontaction_receivers_callback = nullptr;
    KFontAction_IsSignalConnected_Callback kfontaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfontaction_metaobject_isbase = false;
    mutable bool kfontaction_metacast_isbase = false;
    mutable bool kfontaction_metacall_isbase = false;
    mutable bool kfontaction_createwidget_isbase = false;
    mutable bool kfontaction_removeaction_isbase = false;
    mutable bool kfontaction_insertaction_isbase = false;
    mutable bool kfontaction_slotactiontriggered_isbase = false;
    mutable bool kfontaction_deletewidget_isbase = false;
    mutable bool kfontaction_event_isbase = false;
    mutable bool kfontaction_eventfilter_isbase = false;
    mutable bool kfontaction_timerevent_isbase = false;
    mutable bool kfontaction_childevent_isbase = false;
    mutable bool kfontaction_customevent_isbase = false;
    mutable bool kfontaction_connectnotify_isbase = false;
    mutable bool kfontaction_disconnectnotify_isbase = false;
    mutable bool kfontaction_slottoggled_isbase = false;
    mutable bool kfontaction_createdwidgets_isbase = false;
    mutable bool kfontaction_sender_isbase = false;
    mutable bool kfontaction_sendersignalindex_isbase = false;
    mutable bool kfontaction_receivers_isbase = false;
    mutable bool kfontaction_issignalconnected_isbase = false;

  public:
    VirtualKFontAction(uint fontListCriteria, QObject* parent) : KFontAction(fontListCriteria, parent) {};
    VirtualKFontAction(QObject* parent) : KFontAction(parent) {};
    VirtualKFontAction(const QString& text, QObject* parent) : KFontAction(text, parent) {};
    VirtualKFontAction(const QIcon& icon, const QString& text, QObject* parent) : KFontAction(icon, text, parent) {};

    // Callback setters
    inline void setKFontAction_MetaObject_Callback(KFontAction_MetaObject_Callback cb) { kfontaction_metaobject_callback = cb; }
    inline void setKFontAction_Metacast_Callback(KFontAction_Metacast_Callback cb) { kfontaction_metacast_callback = cb; }
    inline void setKFontAction_Metacall_Callback(KFontAction_Metacall_Callback cb) { kfontaction_metacall_callback = cb; }
    inline void setKFontAction_CreateWidget_Callback(KFontAction_CreateWidget_Callback cb) { kfontaction_createwidget_callback = cb; }
    inline void setKFontAction_RemoveAction_Callback(KFontAction_RemoveAction_Callback cb) { kfontaction_removeaction_callback = cb; }
    inline void setKFontAction_InsertAction_Callback(KFontAction_InsertAction_Callback cb) { kfontaction_insertaction_callback = cb; }
    inline void setKFontAction_SlotActionTriggered_Callback(KFontAction_SlotActionTriggered_Callback cb) { kfontaction_slotactiontriggered_callback = cb; }
    inline void setKFontAction_DeleteWidget_Callback(KFontAction_DeleteWidget_Callback cb) { kfontaction_deletewidget_callback = cb; }
    inline void setKFontAction_Event_Callback(KFontAction_Event_Callback cb) { kfontaction_event_callback = cb; }
    inline void setKFontAction_EventFilter_Callback(KFontAction_EventFilter_Callback cb) { kfontaction_eventfilter_callback = cb; }
    inline void setKFontAction_TimerEvent_Callback(KFontAction_TimerEvent_Callback cb) { kfontaction_timerevent_callback = cb; }
    inline void setKFontAction_ChildEvent_Callback(KFontAction_ChildEvent_Callback cb) { kfontaction_childevent_callback = cb; }
    inline void setKFontAction_CustomEvent_Callback(KFontAction_CustomEvent_Callback cb) { kfontaction_customevent_callback = cb; }
    inline void setKFontAction_ConnectNotify_Callback(KFontAction_ConnectNotify_Callback cb) { kfontaction_connectnotify_callback = cb; }
    inline void setKFontAction_DisconnectNotify_Callback(KFontAction_DisconnectNotify_Callback cb) { kfontaction_disconnectnotify_callback = cb; }
    inline void setKFontAction_SlotToggled_Callback(KFontAction_SlotToggled_Callback cb) { kfontaction_slottoggled_callback = cb; }
    inline void setKFontAction_CreatedWidgets_Callback(KFontAction_CreatedWidgets_Callback cb) { kfontaction_createdwidgets_callback = cb; }
    inline void setKFontAction_Sender_Callback(KFontAction_Sender_Callback cb) { kfontaction_sender_callback = cb; }
    inline void setKFontAction_SenderSignalIndex_Callback(KFontAction_SenderSignalIndex_Callback cb) { kfontaction_sendersignalindex_callback = cb; }
    inline void setKFontAction_Receivers_Callback(KFontAction_Receivers_Callback cb) { kfontaction_receivers_callback = cb; }
    inline void setKFontAction_IsSignalConnected_Callback(KFontAction_IsSignalConnected_Callback cb) { kfontaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFontAction_MetaObject_IsBase(bool value) const { kfontaction_metaobject_isbase = value; }
    inline void setKFontAction_Metacast_IsBase(bool value) const { kfontaction_metacast_isbase = value; }
    inline void setKFontAction_Metacall_IsBase(bool value) const { kfontaction_metacall_isbase = value; }
    inline void setKFontAction_CreateWidget_IsBase(bool value) const { kfontaction_createwidget_isbase = value; }
    inline void setKFontAction_RemoveAction_IsBase(bool value) const { kfontaction_removeaction_isbase = value; }
    inline void setKFontAction_InsertAction_IsBase(bool value) const { kfontaction_insertaction_isbase = value; }
    inline void setKFontAction_SlotActionTriggered_IsBase(bool value) const { kfontaction_slotactiontriggered_isbase = value; }
    inline void setKFontAction_DeleteWidget_IsBase(bool value) const { kfontaction_deletewidget_isbase = value; }
    inline void setKFontAction_Event_IsBase(bool value) const { kfontaction_event_isbase = value; }
    inline void setKFontAction_EventFilter_IsBase(bool value) const { kfontaction_eventfilter_isbase = value; }
    inline void setKFontAction_TimerEvent_IsBase(bool value) const { kfontaction_timerevent_isbase = value; }
    inline void setKFontAction_ChildEvent_IsBase(bool value) const { kfontaction_childevent_isbase = value; }
    inline void setKFontAction_CustomEvent_IsBase(bool value) const { kfontaction_customevent_isbase = value; }
    inline void setKFontAction_ConnectNotify_IsBase(bool value) const { kfontaction_connectnotify_isbase = value; }
    inline void setKFontAction_DisconnectNotify_IsBase(bool value) const { kfontaction_disconnectnotify_isbase = value; }
    inline void setKFontAction_SlotToggled_IsBase(bool value) const { kfontaction_slottoggled_isbase = value; }
    inline void setKFontAction_CreatedWidgets_IsBase(bool value) const { kfontaction_createdwidgets_isbase = value; }
    inline void setKFontAction_Sender_IsBase(bool value) const { kfontaction_sender_isbase = value; }
    inline void setKFontAction_SenderSignalIndex_IsBase(bool value) const { kfontaction_sendersignalindex_isbase = value; }
    inline void setKFontAction_Receivers_IsBase(bool value) const { kfontaction_receivers_isbase = value; }
    inline void setKFontAction_IsSignalConnected_IsBase(bool value) const { kfontaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontaction_metaobject_isbase) {
            kfontaction_metaobject_isbase = false;
            return KFontAction::metaObject();
        }
        auto metaobject_cb = kfontaction_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFontAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontaction_metacast_isbase) {
            kfontaction_metacast_isbase = false;
            return KFontAction::qt_metacast(param1);
        }
        auto metacast_cb = kfontaction_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFontAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontaction_metacall_isbase) {
            kfontaction_metacall_isbase = false;
            return KFontAction::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfontaction_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kfontaction_createwidget_isbase) {
            kfontaction_createwidget_isbase = false;
            return KFontAction::createWidget(parent);
        }
        auto createwidget_cb = kfontaction_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return KFontAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kfontaction_removeaction_isbase) {
            kfontaction_removeaction_isbase = false;
            return KFontAction::removeAction(action);
        }
        auto removeaction_cb = kfontaction_removeaction_callback;
        if (removeaction_cb) {
            QAction* cbval1 = action;

            QAction* callback_ret = removeaction_cb(this, cbval1);
            return callback_ret;
        }
        return KFontAction::removeAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kfontaction_insertaction_isbase) {
            kfontaction_insertaction_isbase = false;
            KFontAction::insertAction(before, action);
            return;
        }
        auto insertaction_cb = kfontaction_insertaction_callback;
        if (insertaction_cb) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;

            insertaction_cb(this, cbval1, cbval2);
            return;
        }
        KFontAction::insertAction(before, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* action) override {
        if (kfontaction_slotactiontriggered_isbase) {
            kfontaction_slotactiontriggered_isbase = false;
            KFontAction::slotActionTriggered(action);
            return;
        }
        auto slotactiontriggered_cb = kfontaction_slotactiontriggered_callback;
        if (slotactiontriggered_cb) {
            QAction* cbval1 = action;

            slotactiontriggered_cb(this, cbval1);
            return;
        }
        KFontAction::slotActionTriggered(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kfontaction_deletewidget_isbase) {
            kfontaction_deletewidget_isbase = false;
            KFontAction::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = kfontaction_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        KFontAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontaction_event_isbase) {
            kfontaction_event_isbase = false;
            return KFontAction::event(event);
        }
        auto event_cb = kfontaction_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFontAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontaction_eventfilter_isbase) {
            kfontaction_eventfilter_isbase = false;
            return KFontAction::eventFilter(watched, event);
        }
        auto eventfilter_cb = kfontaction_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontaction_timerevent_isbase) {
            kfontaction_timerevent_isbase = false;
            KFontAction::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfontaction_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFontAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontaction_childevent_isbase) {
            kfontaction_childevent_isbase = false;
            KFontAction::childEvent(event);
            return;
        }
        auto childevent_cb = kfontaction_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFontAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontaction_customevent_isbase) {
            kfontaction_customevent_isbase = false;
            KFontAction::customEvent(event);
            return;
        }
        auto customevent_cb = kfontaction_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFontAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontaction_connectnotify_isbase) {
            kfontaction_connectnotify_isbase = false;
            KFontAction::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfontaction_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFontAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontaction_disconnectnotify_isbase) {
            kfontaction_disconnectnotify_isbase = false;
            KFontAction::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfontaction_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFontAction::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void slotToggled(bool param1) {
        if (kfontaction_slottoggled_isbase) {
            kfontaction_slottoggled_isbase = false;
            KFontAction::slotToggled(param1);
            return;
        }
        auto slottoggled_cb = kfontaction_slottoggled_callback;
        if (slottoggled_cb) {
            bool cbval1 = param1;

            slottoggled_cb(this, cbval1);
            return;
        }
        KFontAction::slotToggled(param1);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kfontaction_createdwidgets_isbase) {
            kfontaction_createdwidgets_isbase = false;
            return KFontAction::createdWidgets();
        }
        auto createdwidgets_cb = kfontaction_createdwidgets_callback;
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
        return KFontAction::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfontaction_sender_isbase) {
            kfontaction_sender_isbase = false;
            return KFontAction::sender();
        }
        auto sender_cb = kfontaction_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFontAction::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfontaction_sendersignalindex_isbase) {
            kfontaction_sendersignalindex_isbase = false;
            return KFontAction::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfontaction_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFontAction::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfontaction_receivers_isbase) {
            kfontaction_receivers_isbase = false;
            return KFontAction::receivers(signal);
        }
        auto receivers_cb = kfontaction_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontAction::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfontaction_issignalconnected_isbase) {
            kfontaction_issignalconnected_isbase = false;
            return KFontAction::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfontaction_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFontAction::isSignalConnected(signal);
    }

    // Friend functions
    friend void KFontAction_SlotActionTriggered(KFontAction* self, QAction* action);
    friend void KFontAction_SuperSlotActionTriggered(KFontAction* self, QAction* action);
    friend void KFontAction_DeleteWidget(KFontAction* self, QWidget* widget);
    friend void KFontAction_SuperDeleteWidget(KFontAction* self, QWidget* widget);
    friend bool KFontAction_Event(KFontAction* self, QEvent* event);
    friend bool KFontAction_SuperEvent(KFontAction* self, QEvent* event);
    friend bool KFontAction_EventFilter(KFontAction* self, QObject* watched, QEvent* event);
    friend bool KFontAction_SuperEventFilter(KFontAction* self, QObject* watched, QEvent* event);
    friend void KFontAction_TimerEvent(KFontAction* self, QTimerEvent* event);
    friend void KFontAction_SuperTimerEvent(KFontAction* self, QTimerEvent* event);
    friend void KFontAction_ChildEvent(KFontAction* self, QChildEvent* event);
    friend void KFontAction_SuperChildEvent(KFontAction* self, QChildEvent* event);
    friend void KFontAction_CustomEvent(KFontAction* self, QEvent* event);
    friend void KFontAction_SuperCustomEvent(KFontAction* self, QEvent* event);
    friend void KFontAction_ConnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_SuperConnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_DisconnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_SuperDisconnectNotify(KFontAction* self, const QMetaMethod* signal);
    friend void KFontAction_SlotToggled(KFontAction* self, bool param1);
    friend void KFontAction_SuperSlotToggled(KFontAction* self, bool param1);
    friend libqt_list /* of QWidget* */ KFontAction_CreatedWidgets(const KFontAction* self);
    friend libqt_list /* of QWidget* */ KFontAction_SuperCreatedWidgets(const KFontAction* self);
    friend QObject* KFontAction_Sender(const KFontAction* self);
    friend QObject* KFontAction_SuperSender(const KFontAction* self);
    friend int KFontAction_SenderSignalIndex(const KFontAction* self);
    friend int KFontAction_SuperSenderSignalIndex(const KFontAction* self);
    friend int KFontAction_Receivers(const KFontAction* self, const char* signal);
    friend int KFontAction_SuperReceivers(const KFontAction* self, const char* signal);
    friend bool KFontAction_IsSignalConnected(const KFontAction* self, const QMetaMethod* signal);
    friend bool KFontAction_SuperIsSignalConnected(const KFontAction* self, const QMetaMethod* signal);
};

#endif
