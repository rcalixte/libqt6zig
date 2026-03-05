#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCODECACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKCODECACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCodecAction so that we can call protected methods
class VirtualKCodecAction final : public KCodecAction {

  public:
    // Virtual class boolean flag
    bool isVirtualKCodecAction = true;

    // Virtual class public types (including callbacks)
    using KCodecAction_MetaObject_Callback = QMetaObject* (*)();
    using KCodecAction_Metacast_Callback = void* (*)(KCodecAction*, const char*);
    using KCodecAction_Metacall_Callback = int (*)(KCodecAction*, int, int, void**);
    using KCodecAction_SlotActionTriggered_Callback = void (*)(KCodecAction*, QAction*);
    using KCodecAction_RemoveAction_Callback = QAction* (*)(KCodecAction*, QAction*);
    using KCodecAction_InsertAction_Callback = void (*)(KCodecAction*, QAction*, QAction*);
    using KCodecAction_CreateWidget_Callback = QWidget* (*)(KCodecAction*, QWidget*);
    using KCodecAction_DeleteWidget_Callback = void (*)(KCodecAction*, QWidget*);
    using KCodecAction_Event_Callback = bool (*)(KCodecAction*, QEvent*);
    using KCodecAction_EventFilter_Callback = bool (*)(KCodecAction*, QObject*, QEvent*);
    using KCodecAction_TimerEvent_Callback = void (*)(KCodecAction*, QTimerEvent*);
    using KCodecAction_ChildEvent_Callback = void (*)(KCodecAction*, QChildEvent*);
    using KCodecAction_CustomEvent_Callback = void (*)(KCodecAction*, QEvent*);
    using KCodecAction_ConnectNotify_Callback = void (*)(KCodecAction*, QMetaMethod*);
    using KCodecAction_DisconnectNotify_Callback = void (*)(KCodecAction*, QMetaMethod*);
    using KCodecAction_SlotToggled_Callback = void (*)(KCodecAction*, bool);
    using KCodecAction_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using KCodecAction_Sender_Callback = QObject* (*)();
    using KCodecAction_SenderSignalIndex_Callback = int (*)();
    using KCodecAction_Receivers_Callback = int (*)(const KCodecAction*, const char*);
    using KCodecAction_IsSignalConnected_Callback = bool (*)(const KCodecAction*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCodecAction_MetaObject_Callback kcodecaction_metaobject_callback = nullptr;
    KCodecAction_Metacast_Callback kcodecaction_metacast_callback = nullptr;
    KCodecAction_Metacall_Callback kcodecaction_metacall_callback = nullptr;
    KCodecAction_SlotActionTriggered_Callback kcodecaction_slotactiontriggered_callback = nullptr;
    KCodecAction_RemoveAction_Callback kcodecaction_removeaction_callback = nullptr;
    KCodecAction_InsertAction_Callback kcodecaction_insertaction_callback = nullptr;
    KCodecAction_CreateWidget_Callback kcodecaction_createwidget_callback = nullptr;
    KCodecAction_DeleteWidget_Callback kcodecaction_deletewidget_callback = nullptr;
    KCodecAction_Event_Callback kcodecaction_event_callback = nullptr;
    KCodecAction_EventFilter_Callback kcodecaction_eventfilter_callback = nullptr;
    KCodecAction_TimerEvent_Callback kcodecaction_timerevent_callback = nullptr;
    KCodecAction_ChildEvent_Callback kcodecaction_childevent_callback = nullptr;
    KCodecAction_CustomEvent_Callback kcodecaction_customevent_callback = nullptr;
    KCodecAction_ConnectNotify_Callback kcodecaction_connectnotify_callback = nullptr;
    KCodecAction_DisconnectNotify_Callback kcodecaction_disconnectnotify_callback = nullptr;
    KCodecAction_SlotToggled_Callback kcodecaction_slottoggled_callback = nullptr;
    KCodecAction_CreatedWidgets_Callback kcodecaction_createdwidgets_callback = nullptr;
    KCodecAction_Sender_Callback kcodecaction_sender_callback = nullptr;
    KCodecAction_SenderSignalIndex_Callback kcodecaction_sendersignalindex_callback = nullptr;
    KCodecAction_Receivers_Callback kcodecaction_receivers_callback = nullptr;
    KCodecAction_IsSignalConnected_Callback kcodecaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcodecaction_metaobject_isbase = false;
    mutable bool kcodecaction_metacast_isbase = false;
    mutable bool kcodecaction_metacall_isbase = false;
    mutable bool kcodecaction_slotactiontriggered_isbase = false;
    mutable bool kcodecaction_removeaction_isbase = false;
    mutable bool kcodecaction_insertaction_isbase = false;
    mutable bool kcodecaction_createwidget_isbase = false;
    mutable bool kcodecaction_deletewidget_isbase = false;
    mutable bool kcodecaction_event_isbase = false;
    mutable bool kcodecaction_eventfilter_isbase = false;
    mutable bool kcodecaction_timerevent_isbase = false;
    mutable bool kcodecaction_childevent_isbase = false;
    mutable bool kcodecaction_customevent_isbase = false;
    mutable bool kcodecaction_connectnotify_isbase = false;
    mutable bool kcodecaction_disconnectnotify_isbase = false;
    mutable bool kcodecaction_slottoggled_isbase = false;
    mutable bool kcodecaction_createdwidgets_isbase = false;
    mutable bool kcodecaction_sender_isbase = false;
    mutable bool kcodecaction_sendersignalindex_isbase = false;
    mutable bool kcodecaction_receivers_isbase = false;
    mutable bool kcodecaction_issignalconnected_isbase = false;

  public:
    VirtualKCodecAction(QObject* parent) : KCodecAction(parent) {};
    VirtualKCodecAction(const QString& text, QObject* parent) : KCodecAction(text, parent) {};
    VirtualKCodecAction(const QIcon& icon, const QString& text, QObject* parent) : KCodecAction(icon, text, parent) {};
    VirtualKCodecAction(QObject* parent, bool showAutoOptions) : KCodecAction(parent, showAutoOptions) {};
    VirtualKCodecAction(const QString& text, QObject* parent, bool showAutoOptions) : KCodecAction(text, parent, showAutoOptions) {};
    VirtualKCodecAction(const QIcon& icon, const QString& text, QObject* parent, bool showAutoOptions) : KCodecAction(icon, text, parent, showAutoOptions) {};

    // Callback setters
    inline void setKCodecAction_MetaObject_Callback(KCodecAction_MetaObject_Callback cb) { kcodecaction_metaobject_callback = cb; }
    inline void setKCodecAction_Metacast_Callback(KCodecAction_Metacast_Callback cb) { kcodecaction_metacast_callback = cb; }
    inline void setKCodecAction_Metacall_Callback(KCodecAction_Metacall_Callback cb) { kcodecaction_metacall_callback = cb; }
    inline void setKCodecAction_SlotActionTriggered_Callback(KCodecAction_SlotActionTriggered_Callback cb) { kcodecaction_slotactiontriggered_callback = cb; }
    inline void setKCodecAction_RemoveAction_Callback(KCodecAction_RemoveAction_Callback cb) { kcodecaction_removeaction_callback = cb; }
    inline void setKCodecAction_InsertAction_Callback(KCodecAction_InsertAction_Callback cb) { kcodecaction_insertaction_callback = cb; }
    inline void setKCodecAction_CreateWidget_Callback(KCodecAction_CreateWidget_Callback cb) { kcodecaction_createwidget_callback = cb; }
    inline void setKCodecAction_DeleteWidget_Callback(KCodecAction_DeleteWidget_Callback cb) { kcodecaction_deletewidget_callback = cb; }
    inline void setKCodecAction_Event_Callback(KCodecAction_Event_Callback cb) { kcodecaction_event_callback = cb; }
    inline void setKCodecAction_EventFilter_Callback(KCodecAction_EventFilter_Callback cb) { kcodecaction_eventfilter_callback = cb; }
    inline void setKCodecAction_TimerEvent_Callback(KCodecAction_TimerEvent_Callback cb) { kcodecaction_timerevent_callback = cb; }
    inline void setKCodecAction_ChildEvent_Callback(KCodecAction_ChildEvent_Callback cb) { kcodecaction_childevent_callback = cb; }
    inline void setKCodecAction_CustomEvent_Callback(KCodecAction_CustomEvent_Callback cb) { kcodecaction_customevent_callback = cb; }
    inline void setKCodecAction_ConnectNotify_Callback(KCodecAction_ConnectNotify_Callback cb) { kcodecaction_connectnotify_callback = cb; }
    inline void setKCodecAction_DisconnectNotify_Callback(KCodecAction_DisconnectNotify_Callback cb) { kcodecaction_disconnectnotify_callback = cb; }
    inline void setKCodecAction_SlotToggled_Callback(KCodecAction_SlotToggled_Callback cb) { kcodecaction_slottoggled_callback = cb; }
    inline void setKCodecAction_CreatedWidgets_Callback(KCodecAction_CreatedWidgets_Callback cb) { kcodecaction_createdwidgets_callback = cb; }
    inline void setKCodecAction_Sender_Callback(KCodecAction_Sender_Callback cb) { kcodecaction_sender_callback = cb; }
    inline void setKCodecAction_SenderSignalIndex_Callback(KCodecAction_SenderSignalIndex_Callback cb) { kcodecaction_sendersignalindex_callback = cb; }
    inline void setKCodecAction_Receivers_Callback(KCodecAction_Receivers_Callback cb) { kcodecaction_receivers_callback = cb; }
    inline void setKCodecAction_IsSignalConnected_Callback(KCodecAction_IsSignalConnected_Callback cb) { kcodecaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCodecAction_MetaObject_IsBase(bool value) const { kcodecaction_metaobject_isbase = value; }
    inline void setKCodecAction_Metacast_IsBase(bool value) const { kcodecaction_metacast_isbase = value; }
    inline void setKCodecAction_Metacall_IsBase(bool value) const { kcodecaction_metacall_isbase = value; }
    inline void setKCodecAction_SlotActionTriggered_IsBase(bool value) const { kcodecaction_slotactiontriggered_isbase = value; }
    inline void setKCodecAction_RemoveAction_IsBase(bool value) const { kcodecaction_removeaction_isbase = value; }
    inline void setKCodecAction_InsertAction_IsBase(bool value) const { kcodecaction_insertaction_isbase = value; }
    inline void setKCodecAction_CreateWidget_IsBase(bool value) const { kcodecaction_createwidget_isbase = value; }
    inline void setKCodecAction_DeleteWidget_IsBase(bool value) const { kcodecaction_deletewidget_isbase = value; }
    inline void setKCodecAction_Event_IsBase(bool value) const { kcodecaction_event_isbase = value; }
    inline void setKCodecAction_EventFilter_IsBase(bool value) const { kcodecaction_eventfilter_isbase = value; }
    inline void setKCodecAction_TimerEvent_IsBase(bool value) const { kcodecaction_timerevent_isbase = value; }
    inline void setKCodecAction_ChildEvent_IsBase(bool value) const { kcodecaction_childevent_isbase = value; }
    inline void setKCodecAction_CustomEvent_IsBase(bool value) const { kcodecaction_customevent_isbase = value; }
    inline void setKCodecAction_ConnectNotify_IsBase(bool value) const { kcodecaction_connectnotify_isbase = value; }
    inline void setKCodecAction_DisconnectNotify_IsBase(bool value) const { kcodecaction_disconnectnotify_isbase = value; }
    inline void setKCodecAction_SlotToggled_IsBase(bool value) const { kcodecaction_slottoggled_isbase = value; }
    inline void setKCodecAction_CreatedWidgets_IsBase(bool value) const { kcodecaction_createdwidgets_isbase = value; }
    inline void setKCodecAction_Sender_IsBase(bool value) const { kcodecaction_sender_isbase = value; }
    inline void setKCodecAction_SenderSignalIndex_IsBase(bool value) const { kcodecaction_sendersignalindex_isbase = value; }
    inline void setKCodecAction_Receivers_IsBase(bool value) const { kcodecaction_receivers_isbase = value; }
    inline void setKCodecAction_IsSignalConnected_IsBase(bool value) const { kcodecaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcodecaction_metaobject_isbase) {
            kcodecaction_metaobject_isbase = false;
            return KCodecAction::metaObject();
        }
        auto metaobject_cb = kcodecaction_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KCodecAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcodecaction_metacast_isbase) {
            kcodecaction_metacast_isbase = false;
            return KCodecAction::qt_metacast(param1);
        }
        auto metacast_cb = kcodecaction_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcodecaction_metacall_isbase) {
            kcodecaction_metacall_isbase = false;
            return KCodecAction::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcodecaction_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCodecAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotActionTriggered(QAction* param1) override {
        if (kcodecaction_slotactiontriggered_isbase) {
            kcodecaction_slotactiontriggered_isbase = false;
            KCodecAction::slotActionTriggered(param1);
            return;
        }
        auto slotactiontriggered_cb = kcodecaction_slotactiontriggered_callback;
        if (slotactiontriggered_cb) {
            QAction* cbval1 = param1;

            slotactiontriggered_cb(this, cbval1);
            return;
        }
        KCodecAction::slotActionTriggered(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* removeAction(QAction* action) override {
        if (kcodecaction_removeaction_isbase) {
            kcodecaction_removeaction_isbase = false;
            return KCodecAction::removeAction(action);
        }
        auto removeaction_cb = kcodecaction_removeaction_callback;
        if (removeaction_cb) {
            QAction* cbval1 = action;

            QAction* callback_ret = removeaction_cb(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::removeAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertAction(QAction* before, QAction* action) override {
        if (kcodecaction_insertaction_isbase) {
            kcodecaction_insertaction_isbase = false;
            KCodecAction::insertAction(before, action);
            return;
        }
        auto insertaction_cb = kcodecaction_insertaction_callback;
        if (insertaction_cb) {
            QAction* cbval1 = before;
            QAction* cbval2 = action;

            insertaction_cb(this, cbval1, cbval2);
            return;
        }
        KCodecAction::insertAction(before, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (kcodecaction_createwidget_isbase) {
            kcodecaction_createwidget_isbase = false;
            return KCodecAction::createWidget(parent);
        }
        auto createwidget_cb = kcodecaction_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (kcodecaction_deletewidget_isbase) {
            kcodecaction_deletewidget_isbase = false;
            KCodecAction::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = kcodecaction_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        KCodecAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcodecaction_event_isbase) {
            kcodecaction_event_isbase = false;
            return KCodecAction::event(event);
        }
        auto event_cb = kcodecaction_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcodecaction_eventfilter_isbase) {
            kcodecaction_eventfilter_isbase = false;
            return KCodecAction::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcodecaction_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCodecAction::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcodecaction_timerevent_isbase) {
            kcodecaction_timerevent_isbase = false;
            KCodecAction::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcodecaction_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KCodecAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcodecaction_childevent_isbase) {
            kcodecaction_childevent_isbase = false;
            KCodecAction::childEvent(event);
            return;
        }
        auto childevent_cb = kcodecaction_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KCodecAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcodecaction_customevent_isbase) {
            kcodecaction_customevent_isbase = false;
            KCodecAction::customEvent(event);
            return;
        }
        auto customevent_cb = kcodecaction_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KCodecAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcodecaction_connectnotify_isbase) {
            kcodecaction_connectnotify_isbase = false;
            KCodecAction::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcodecaction_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KCodecAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcodecaction_disconnectnotify_isbase) {
            kcodecaction_disconnectnotify_isbase = false;
            KCodecAction::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcodecaction_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KCodecAction::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void slotToggled(bool param1) {
        if (kcodecaction_slottoggled_isbase) {
            kcodecaction_slottoggled_isbase = false;
            KCodecAction::slotToggled(param1);
            return;
        }
        auto slottoggled_cb = kcodecaction_slottoggled_callback;
        if (slottoggled_cb) {
            bool cbval1 = param1;

            slottoggled_cb(this, cbval1);
            return;
        }
        KCodecAction::slotToggled(param1);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (kcodecaction_createdwidgets_isbase) {
            kcodecaction_createdwidgets_isbase = false;
            return KCodecAction::createdWidgets();
        }
        auto createdwidgets_cb = kcodecaction_createdwidgets_callback;
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
        return KCodecAction::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcodecaction_sender_isbase) {
            kcodecaction_sender_isbase = false;
            return KCodecAction::sender();
        }
        auto sender_cb = kcodecaction_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KCodecAction::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcodecaction_sendersignalindex_isbase) {
            kcodecaction_sendersignalindex_isbase = false;
            return KCodecAction::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcodecaction_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KCodecAction::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcodecaction_receivers_isbase) {
            kcodecaction_receivers_isbase = false;
            return KCodecAction::receivers(signal);
        }
        auto receivers_cb = kcodecaction_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCodecAction::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcodecaction_issignalconnected_isbase) {
            kcodecaction_issignalconnected_isbase = false;
            return KCodecAction::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcodecaction_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KCodecAction::isSignalConnected(signal);
    }

    // Friend functions
    friend void KCodecAction_SlotActionTriggered(KCodecAction* self, QAction* param1);
    friend void KCodecAction_SuperSlotActionTriggered(KCodecAction* self, QAction* param1);
    friend QWidget* KCodecAction_CreateWidget(KCodecAction* self, QWidget* parent);
    friend QWidget* KCodecAction_SuperCreateWidget(KCodecAction* self, QWidget* parent);
    friend void KCodecAction_DeleteWidget(KCodecAction* self, QWidget* widget);
    friend void KCodecAction_SuperDeleteWidget(KCodecAction* self, QWidget* widget);
    friend bool KCodecAction_Event(KCodecAction* self, QEvent* event);
    friend bool KCodecAction_SuperEvent(KCodecAction* self, QEvent* event);
    friend bool KCodecAction_EventFilter(KCodecAction* self, QObject* watched, QEvent* event);
    friend bool KCodecAction_SuperEventFilter(KCodecAction* self, QObject* watched, QEvent* event);
    friend void KCodecAction_TimerEvent(KCodecAction* self, QTimerEvent* event);
    friend void KCodecAction_SuperTimerEvent(KCodecAction* self, QTimerEvent* event);
    friend void KCodecAction_ChildEvent(KCodecAction* self, QChildEvent* event);
    friend void KCodecAction_SuperChildEvent(KCodecAction* self, QChildEvent* event);
    friend void KCodecAction_CustomEvent(KCodecAction* self, QEvent* event);
    friend void KCodecAction_SuperCustomEvent(KCodecAction* self, QEvent* event);
    friend void KCodecAction_ConnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_SuperConnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_DisconnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_SuperDisconnectNotify(KCodecAction* self, const QMetaMethod* signal);
    friend void KCodecAction_SlotToggled(KCodecAction* self, bool param1);
    friend void KCodecAction_SuperSlotToggled(KCodecAction* self, bool param1);
    friend libqt_list /* of QWidget* */ KCodecAction_CreatedWidgets(const KCodecAction* self);
    friend libqt_list /* of QWidget* */ KCodecAction_SuperCreatedWidgets(const KCodecAction* self);
    friend QObject* KCodecAction_Sender(const KCodecAction* self);
    friend QObject* KCodecAction_SuperSender(const KCodecAction* self);
    friend int KCodecAction_SenderSignalIndex(const KCodecAction* self);
    friend int KCodecAction_SuperSenderSignalIndex(const KCodecAction* self);
    friend int KCodecAction_Receivers(const KCodecAction* self, const char* signal);
    friend int KCodecAction_SuperReceivers(const KCodecAction* self, const char* signal);
    friend bool KCodecAction_IsSignalConnected(const KCodecAction* self, const QMetaMethod* signal);
    friend bool KCodecAction_SuperIsSignalConnected(const KCodecAction* self, const QMetaMethod* signal);
};

#endif
