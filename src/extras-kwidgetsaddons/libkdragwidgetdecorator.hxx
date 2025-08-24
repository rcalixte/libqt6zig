#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDRAGWIDGETDECORATOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDRAGWIDGETDECORATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDragWidgetDecoratorBase so that we can call protected methods
class VirtualKDragWidgetDecoratorBase final : public KDragWidgetDecoratorBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKDragWidgetDecoratorBase = true;

    // Virtual class public types (including callbacks)
    using KDragWidgetDecoratorBase_Metacall_Callback = int (*)(KDragWidgetDecoratorBase*, int, int, void**);
    using KDragWidgetDecoratorBase_DragObject_Callback = QDrag* (*)();
    using KDragWidgetDecoratorBase_EventFilter_Callback = bool (*)(KDragWidgetDecoratorBase*, QObject*, QEvent*);
    using KDragWidgetDecoratorBase_StartDrag_Callback = void (*)();
    using KDragWidgetDecoratorBase_Event_Callback = bool (*)(KDragWidgetDecoratorBase*, QEvent*);
    using KDragWidgetDecoratorBase_TimerEvent_Callback = void (*)(KDragWidgetDecoratorBase*, QTimerEvent*);
    using KDragWidgetDecoratorBase_ChildEvent_Callback = void (*)(KDragWidgetDecoratorBase*, QChildEvent*);
    using KDragWidgetDecoratorBase_CustomEvent_Callback = void (*)(KDragWidgetDecoratorBase*, QEvent*);
    using KDragWidgetDecoratorBase_ConnectNotify_Callback = void (*)(KDragWidgetDecoratorBase*, QMetaMethod*);
    using KDragWidgetDecoratorBase_DisconnectNotify_Callback = void (*)(KDragWidgetDecoratorBase*, QMetaMethod*);
    using KDragWidgetDecoratorBase_DecoratedWidget_Callback = QWidget* (*)();
    using KDragWidgetDecoratorBase_Sender_Callback = QObject* (*)();
    using KDragWidgetDecoratorBase_SenderSignalIndex_Callback = int (*)();
    using KDragWidgetDecoratorBase_Receivers_Callback = int (*)(const KDragWidgetDecoratorBase*, const char*);
    using KDragWidgetDecoratorBase_IsSignalConnected_Callback = bool (*)(const KDragWidgetDecoratorBase*, QMetaMethod*);

  protected:
    // Instance callback storage
    KDragWidgetDecoratorBase_Metacall_Callback kdragwidgetdecoratorbase_metacall_callback = nullptr;
    KDragWidgetDecoratorBase_DragObject_Callback kdragwidgetdecoratorbase_dragobject_callback = nullptr;
    KDragWidgetDecoratorBase_EventFilter_Callback kdragwidgetdecoratorbase_eventfilter_callback = nullptr;
    KDragWidgetDecoratorBase_StartDrag_Callback kdragwidgetdecoratorbase_startdrag_callback = nullptr;
    KDragWidgetDecoratorBase_Event_Callback kdragwidgetdecoratorbase_event_callback = nullptr;
    KDragWidgetDecoratorBase_TimerEvent_Callback kdragwidgetdecoratorbase_timerevent_callback = nullptr;
    KDragWidgetDecoratorBase_ChildEvent_Callback kdragwidgetdecoratorbase_childevent_callback = nullptr;
    KDragWidgetDecoratorBase_CustomEvent_Callback kdragwidgetdecoratorbase_customevent_callback = nullptr;
    KDragWidgetDecoratorBase_ConnectNotify_Callback kdragwidgetdecoratorbase_connectnotify_callback = nullptr;
    KDragWidgetDecoratorBase_DisconnectNotify_Callback kdragwidgetdecoratorbase_disconnectnotify_callback = nullptr;
    KDragWidgetDecoratorBase_DecoratedWidget_Callback kdragwidgetdecoratorbase_decoratedwidget_callback = nullptr;
    KDragWidgetDecoratorBase_Sender_Callback kdragwidgetdecoratorbase_sender_callback = nullptr;
    KDragWidgetDecoratorBase_SenderSignalIndex_Callback kdragwidgetdecoratorbase_sendersignalindex_callback = nullptr;
    KDragWidgetDecoratorBase_Receivers_Callback kdragwidgetdecoratorbase_receivers_callback = nullptr;
    KDragWidgetDecoratorBase_IsSignalConnected_Callback kdragwidgetdecoratorbase_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kdragwidgetdecoratorbase_metacall_isbase = false;
    mutable bool kdragwidgetdecoratorbase_dragobject_isbase = false;
    mutable bool kdragwidgetdecoratorbase_eventfilter_isbase = false;
    mutable bool kdragwidgetdecoratorbase_startdrag_isbase = false;
    mutable bool kdragwidgetdecoratorbase_event_isbase = false;
    mutable bool kdragwidgetdecoratorbase_timerevent_isbase = false;
    mutable bool kdragwidgetdecoratorbase_childevent_isbase = false;
    mutable bool kdragwidgetdecoratorbase_customevent_isbase = false;
    mutable bool kdragwidgetdecoratorbase_connectnotify_isbase = false;
    mutable bool kdragwidgetdecoratorbase_disconnectnotify_isbase = false;
    mutable bool kdragwidgetdecoratorbase_decoratedwidget_isbase = false;
    mutable bool kdragwidgetdecoratorbase_sender_isbase = false;
    mutable bool kdragwidgetdecoratorbase_sendersignalindex_isbase = false;
    mutable bool kdragwidgetdecoratorbase_receivers_isbase = false;
    mutable bool kdragwidgetdecoratorbase_issignalconnected_isbase = false;

  public:
    VirtualKDragWidgetDecoratorBase(QWidget* parent) : KDragWidgetDecoratorBase(parent) {};
    VirtualKDragWidgetDecoratorBase() : KDragWidgetDecoratorBase() {};

    ~VirtualKDragWidgetDecoratorBase() {
        kdragwidgetdecoratorbase_metacall_callback = nullptr;
        kdragwidgetdecoratorbase_dragobject_callback = nullptr;
        kdragwidgetdecoratorbase_eventfilter_callback = nullptr;
        kdragwidgetdecoratorbase_startdrag_callback = nullptr;
        kdragwidgetdecoratorbase_event_callback = nullptr;
        kdragwidgetdecoratorbase_timerevent_callback = nullptr;
        kdragwidgetdecoratorbase_childevent_callback = nullptr;
        kdragwidgetdecoratorbase_customevent_callback = nullptr;
        kdragwidgetdecoratorbase_connectnotify_callback = nullptr;
        kdragwidgetdecoratorbase_disconnectnotify_callback = nullptr;
        kdragwidgetdecoratorbase_decoratedwidget_callback = nullptr;
        kdragwidgetdecoratorbase_sender_callback = nullptr;
        kdragwidgetdecoratorbase_sendersignalindex_callback = nullptr;
        kdragwidgetdecoratorbase_receivers_callback = nullptr;
        kdragwidgetdecoratorbase_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKDragWidgetDecoratorBase_Metacall_Callback(KDragWidgetDecoratorBase_Metacall_Callback cb) { kdragwidgetdecoratorbase_metacall_callback = cb; }
    inline void setKDragWidgetDecoratorBase_DragObject_Callback(KDragWidgetDecoratorBase_DragObject_Callback cb) { kdragwidgetdecoratorbase_dragobject_callback = cb; }
    inline void setKDragWidgetDecoratorBase_EventFilter_Callback(KDragWidgetDecoratorBase_EventFilter_Callback cb) { kdragwidgetdecoratorbase_eventfilter_callback = cb; }
    inline void setKDragWidgetDecoratorBase_StartDrag_Callback(KDragWidgetDecoratorBase_StartDrag_Callback cb) { kdragwidgetdecoratorbase_startdrag_callback = cb; }
    inline void setKDragWidgetDecoratorBase_Event_Callback(KDragWidgetDecoratorBase_Event_Callback cb) { kdragwidgetdecoratorbase_event_callback = cb; }
    inline void setKDragWidgetDecoratorBase_TimerEvent_Callback(KDragWidgetDecoratorBase_TimerEvent_Callback cb) { kdragwidgetdecoratorbase_timerevent_callback = cb; }
    inline void setKDragWidgetDecoratorBase_ChildEvent_Callback(KDragWidgetDecoratorBase_ChildEvent_Callback cb) { kdragwidgetdecoratorbase_childevent_callback = cb; }
    inline void setKDragWidgetDecoratorBase_CustomEvent_Callback(KDragWidgetDecoratorBase_CustomEvent_Callback cb) { kdragwidgetdecoratorbase_customevent_callback = cb; }
    inline void setKDragWidgetDecoratorBase_ConnectNotify_Callback(KDragWidgetDecoratorBase_ConnectNotify_Callback cb) { kdragwidgetdecoratorbase_connectnotify_callback = cb; }
    inline void setKDragWidgetDecoratorBase_DisconnectNotify_Callback(KDragWidgetDecoratorBase_DisconnectNotify_Callback cb) { kdragwidgetdecoratorbase_disconnectnotify_callback = cb; }
    inline void setKDragWidgetDecoratorBase_DecoratedWidget_Callback(KDragWidgetDecoratorBase_DecoratedWidget_Callback cb) { kdragwidgetdecoratorbase_decoratedwidget_callback = cb; }
    inline void setKDragWidgetDecoratorBase_Sender_Callback(KDragWidgetDecoratorBase_Sender_Callback cb) { kdragwidgetdecoratorbase_sender_callback = cb; }
    inline void setKDragWidgetDecoratorBase_SenderSignalIndex_Callback(KDragWidgetDecoratorBase_SenderSignalIndex_Callback cb) { kdragwidgetdecoratorbase_sendersignalindex_callback = cb; }
    inline void setKDragWidgetDecoratorBase_Receivers_Callback(KDragWidgetDecoratorBase_Receivers_Callback cb) { kdragwidgetdecoratorbase_receivers_callback = cb; }
    inline void setKDragWidgetDecoratorBase_IsSignalConnected_Callback(KDragWidgetDecoratorBase_IsSignalConnected_Callback cb) { kdragwidgetdecoratorbase_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKDragWidgetDecoratorBase_Metacall_IsBase(bool value) const { kdragwidgetdecoratorbase_metacall_isbase = value; }
    inline void setKDragWidgetDecoratorBase_DragObject_IsBase(bool value) const { kdragwidgetdecoratorbase_dragobject_isbase = value; }
    inline void setKDragWidgetDecoratorBase_EventFilter_IsBase(bool value) const { kdragwidgetdecoratorbase_eventfilter_isbase = value; }
    inline void setKDragWidgetDecoratorBase_StartDrag_IsBase(bool value) const { kdragwidgetdecoratorbase_startdrag_isbase = value; }
    inline void setKDragWidgetDecoratorBase_Event_IsBase(bool value) const { kdragwidgetdecoratorbase_event_isbase = value; }
    inline void setKDragWidgetDecoratorBase_TimerEvent_IsBase(bool value) const { kdragwidgetdecoratorbase_timerevent_isbase = value; }
    inline void setKDragWidgetDecoratorBase_ChildEvent_IsBase(bool value) const { kdragwidgetdecoratorbase_childevent_isbase = value; }
    inline void setKDragWidgetDecoratorBase_CustomEvent_IsBase(bool value) const { kdragwidgetdecoratorbase_customevent_isbase = value; }
    inline void setKDragWidgetDecoratorBase_ConnectNotify_IsBase(bool value) const { kdragwidgetdecoratorbase_connectnotify_isbase = value; }
    inline void setKDragWidgetDecoratorBase_DisconnectNotify_IsBase(bool value) const { kdragwidgetdecoratorbase_disconnectnotify_isbase = value; }
    inline void setKDragWidgetDecoratorBase_DecoratedWidget_IsBase(bool value) const { kdragwidgetdecoratorbase_decoratedwidget_isbase = value; }
    inline void setKDragWidgetDecoratorBase_Sender_IsBase(bool value) const { kdragwidgetdecoratorbase_sender_isbase = value; }
    inline void setKDragWidgetDecoratorBase_SenderSignalIndex_IsBase(bool value) const { kdragwidgetdecoratorbase_sendersignalindex_isbase = value; }
    inline void setKDragWidgetDecoratorBase_Receivers_IsBase(bool value) const { kdragwidgetdecoratorbase_receivers_isbase = value; }
    inline void setKDragWidgetDecoratorBase_IsSignalConnected_IsBase(bool value) const { kdragwidgetdecoratorbase_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdragwidgetdecoratorbase_metacall_isbase) {
            kdragwidgetdecoratorbase_metacall_isbase = false;
            return KDragWidgetDecoratorBase::qt_metacall(param1, param2, param3);
        } else if (kdragwidgetdecoratorbase_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdragwidgetdecoratorbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDragWidgetDecoratorBase::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDrag* dragObject() override {
        if (kdragwidgetdecoratorbase_dragobject_isbase) {
            kdragwidgetdecoratorbase_dragobject_isbase = false;
            return KDragWidgetDecoratorBase::dragObject();
        } else if (kdragwidgetdecoratorbase_dragobject_callback != nullptr) {
            QDrag* callback_ret = kdragwidgetdecoratorbase_dragobject_callback();
            return callback_ret;
        } else {
            return KDragWidgetDecoratorBase::dragObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdragwidgetdecoratorbase_eventfilter_isbase) {
            kdragwidgetdecoratorbase_eventfilter_isbase = false;
            return KDragWidgetDecoratorBase::eventFilter(watched, event);
        } else if (kdragwidgetdecoratorbase_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdragwidgetdecoratorbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDragWidgetDecoratorBase::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag() override {
        if (kdragwidgetdecoratorbase_startdrag_isbase) {
            kdragwidgetdecoratorbase_startdrag_isbase = false;
            KDragWidgetDecoratorBase::startDrag();
        } else if (kdragwidgetdecoratorbase_startdrag_callback != nullptr) {
            kdragwidgetdecoratorbase_startdrag_callback();
        } else {
            KDragWidgetDecoratorBase::startDrag();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdragwidgetdecoratorbase_event_isbase) {
            kdragwidgetdecoratorbase_event_isbase = false;
            return KDragWidgetDecoratorBase::event(event);
        } else if (kdragwidgetdecoratorbase_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdragwidgetdecoratorbase_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDragWidgetDecoratorBase::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdragwidgetdecoratorbase_timerevent_isbase) {
            kdragwidgetdecoratorbase_timerevent_isbase = false;
            KDragWidgetDecoratorBase::timerEvent(event);
        } else if (kdragwidgetdecoratorbase_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdragwidgetdecoratorbase_timerevent_callback(this, cbval1);
        } else {
            KDragWidgetDecoratorBase::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdragwidgetdecoratorbase_childevent_isbase) {
            kdragwidgetdecoratorbase_childevent_isbase = false;
            KDragWidgetDecoratorBase::childEvent(event);
        } else if (kdragwidgetdecoratorbase_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdragwidgetdecoratorbase_childevent_callback(this, cbval1);
        } else {
            KDragWidgetDecoratorBase::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdragwidgetdecoratorbase_customevent_isbase) {
            kdragwidgetdecoratorbase_customevent_isbase = false;
            KDragWidgetDecoratorBase::customEvent(event);
        } else if (kdragwidgetdecoratorbase_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdragwidgetdecoratorbase_customevent_callback(this, cbval1);
        } else {
            KDragWidgetDecoratorBase::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdragwidgetdecoratorbase_connectnotify_isbase) {
            kdragwidgetdecoratorbase_connectnotify_isbase = false;
            KDragWidgetDecoratorBase::connectNotify(signal);
        } else if (kdragwidgetdecoratorbase_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdragwidgetdecoratorbase_connectnotify_callback(this, cbval1);
        } else {
            KDragWidgetDecoratorBase::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdragwidgetdecoratorbase_disconnectnotify_isbase) {
            kdragwidgetdecoratorbase_disconnectnotify_isbase = false;
            KDragWidgetDecoratorBase::disconnectNotify(signal);
        } else if (kdragwidgetdecoratorbase_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdragwidgetdecoratorbase_disconnectnotify_callback(this, cbval1);
        } else {
            KDragWidgetDecoratorBase::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QWidget* decoratedWidget() const {
        if (kdragwidgetdecoratorbase_decoratedwidget_isbase) {
            kdragwidgetdecoratorbase_decoratedwidget_isbase = false;
            return KDragWidgetDecoratorBase::decoratedWidget();
        } else if (kdragwidgetdecoratorbase_decoratedwidget_callback != nullptr) {
            QWidget* callback_ret = kdragwidgetdecoratorbase_decoratedwidget_callback();
            return callback_ret;
        } else {
            return KDragWidgetDecoratorBase::decoratedWidget();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdragwidgetdecoratorbase_sender_isbase) {
            kdragwidgetdecoratorbase_sender_isbase = false;
            return KDragWidgetDecoratorBase::sender();
        } else if (kdragwidgetdecoratorbase_sender_callback != nullptr) {
            QObject* callback_ret = kdragwidgetdecoratorbase_sender_callback();
            return callback_ret;
        } else {
            return KDragWidgetDecoratorBase::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdragwidgetdecoratorbase_sendersignalindex_isbase) {
            kdragwidgetdecoratorbase_sendersignalindex_isbase = false;
            return KDragWidgetDecoratorBase::senderSignalIndex();
        } else if (kdragwidgetdecoratorbase_sendersignalindex_callback != nullptr) {
            int callback_ret = kdragwidgetdecoratorbase_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDragWidgetDecoratorBase::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdragwidgetdecoratorbase_receivers_isbase) {
            kdragwidgetdecoratorbase_receivers_isbase = false;
            return KDragWidgetDecoratorBase::receivers(signal);
        } else if (kdragwidgetdecoratorbase_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdragwidgetdecoratorbase_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDragWidgetDecoratorBase::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdragwidgetdecoratorbase_issignalconnected_isbase) {
            kdragwidgetdecoratorbase_issignalconnected_isbase = false;
            return KDragWidgetDecoratorBase::isSignalConnected(signal);
        } else if (kdragwidgetdecoratorbase_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdragwidgetdecoratorbase_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDragWidgetDecoratorBase::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend QDrag* KDragWidgetDecoratorBase_DragObject(KDragWidgetDecoratorBase* self);
    friend QDrag* KDragWidgetDecoratorBase_QBaseDragObject(KDragWidgetDecoratorBase* self);
    friend bool KDragWidgetDecoratorBase_EventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event);
    friend bool KDragWidgetDecoratorBase_QBaseEventFilter(KDragWidgetDecoratorBase* self, QObject* watched, QEvent* event);
    friend void KDragWidgetDecoratorBase_StartDrag(KDragWidgetDecoratorBase* self);
    friend void KDragWidgetDecoratorBase_QBaseStartDrag(KDragWidgetDecoratorBase* self);
    friend void KDragWidgetDecoratorBase_TimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event);
    friend void KDragWidgetDecoratorBase_QBaseTimerEvent(KDragWidgetDecoratorBase* self, QTimerEvent* event);
    friend void KDragWidgetDecoratorBase_ChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event);
    friend void KDragWidgetDecoratorBase_QBaseChildEvent(KDragWidgetDecoratorBase* self, QChildEvent* event);
    friend void KDragWidgetDecoratorBase_CustomEvent(KDragWidgetDecoratorBase* self, QEvent* event);
    friend void KDragWidgetDecoratorBase_QBaseCustomEvent(KDragWidgetDecoratorBase* self, QEvent* event);
    friend void KDragWidgetDecoratorBase_ConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
    friend void KDragWidgetDecoratorBase_QBaseConnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
    friend void KDragWidgetDecoratorBase_DisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
    friend void KDragWidgetDecoratorBase_QBaseDisconnectNotify(KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
    friend QWidget* KDragWidgetDecoratorBase_DecoratedWidget(const KDragWidgetDecoratorBase* self);
    friend QWidget* KDragWidgetDecoratorBase_QBaseDecoratedWidget(const KDragWidgetDecoratorBase* self);
    friend QObject* KDragWidgetDecoratorBase_Sender(const KDragWidgetDecoratorBase* self);
    friend QObject* KDragWidgetDecoratorBase_QBaseSender(const KDragWidgetDecoratorBase* self);
    friend int KDragWidgetDecoratorBase_SenderSignalIndex(const KDragWidgetDecoratorBase* self);
    friend int KDragWidgetDecoratorBase_QBaseSenderSignalIndex(const KDragWidgetDecoratorBase* self);
    friend int KDragWidgetDecoratorBase_Receivers(const KDragWidgetDecoratorBase* self, const char* signal);
    friend int KDragWidgetDecoratorBase_QBaseReceivers(const KDragWidgetDecoratorBase* self, const char* signal);
    friend bool KDragWidgetDecoratorBase_IsSignalConnected(const KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
    friend bool KDragWidgetDecoratorBase_QBaseIsSignalConnected(const KDragWidgetDecoratorBase* self, const QMetaMethod* signal);
};

#endif
