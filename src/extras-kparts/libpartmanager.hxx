#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBVIRTUALPARTMANAGER_H
#define SRC_EXTRAS_KPARTSC_LIBVIRTUALPARTMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::PartManager so that we can call protected methods
class VirtualKPartsPartManager final : public KParts::PartManager {

  public:
    // Virtual class boolean flag
    bool isVirtualKPartsPartManager = true;

    // Virtual class public types (including callbacks)
    using KParts__PartManager_Metacall_Callback = int (*)(KParts__PartManager*, int, int, void**);
    using KParts__PartManager_EventFilter_Callback = bool (*)(KParts__PartManager*, QObject*, QEvent*);
    using KParts__PartManager_AddPart_Callback = void (*)(KParts__PartManager*, KParts__Part*, bool);
    using KParts__PartManager_RemovePart_Callback = void (*)(KParts__PartManager*, KParts__Part*);
    using KParts__PartManager_ReplacePart_Callback = void (*)(KParts__PartManager*, KParts__Part*, KParts__Part*, bool);
    using KParts__PartManager_SetActivePart_Callback = void (*)(KParts__PartManager*, KParts__Part*, QWidget*);
    using KParts__PartManager_ActivePart_Callback = KParts__Part* (*)();
    using KParts__PartManager_ActiveWidget_Callback = QWidget* (*)();
    using KParts__PartManager_Event_Callback = bool (*)(KParts__PartManager*, QEvent*);
    using KParts__PartManager_TimerEvent_Callback = void (*)(KParts__PartManager*, QTimerEvent*);
    using KParts__PartManager_ChildEvent_Callback = void (*)(KParts__PartManager*, QChildEvent*);
    using KParts__PartManager_CustomEvent_Callback = void (*)(KParts__PartManager*, QEvent*);
    using KParts__PartManager_ConnectNotify_Callback = void (*)(KParts__PartManager*, QMetaMethod*);
    using KParts__PartManager_DisconnectNotify_Callback = void (*)(KParts__PartManager*, QMetaMethod*);
    using KParts__PartManager_SetIgnoreExplictFocusRequests_Callback = void (*)(KParts__PartManager*, bool);
    using KParts__PartManager_SlotObjectDestroyed_Callback = void (*)();
    using KParts__PartManager_SlotWidgetDestroyed_Callback = void (*)();
    using KParts__PartManager_SlotManagedTopLevelWidgetDestroyed_Callback = void (*)();
    using KParts__PartManager_Sender_Callback = QObject* (*)();
    using KParts__PartManager_SenderSignalIndex_Callback = int (*)();
    using KParts__PartManager_Receivers_Callback = int (*)(const KParts__PartManager*, const char*);
    using KParts__PartManager_IsSignalConnected_Callback = bool (*)(const KParts__PartManager*, QMetaMethod*);

  protected:
    // Instance callback storage
    KParts__PartManager_Metacall_Callback kparts__partmanager_metacall_callback = nullptr;
    KParts__PartManager_EventFilter_Callback kparts__partmanager_eventfilter_callback = nullptr;
    KParts__PartManager_AddPart_Callback kparts__partmanager_addpart_callback = nullptr;
    KParts__PartManager_RemovePart_Callback kparts__partmanager_removepart_callback = nullptr;
    KParts__PartManager_ReplacePart_Callback kparts__partmanager_replacepart_callback = nullptr;
    KParts__PartManager_SetActivePart_Callback kparts__partmanager_setactivepart_callback = nullptr;
    KParts__PartManager_ActivePart_Callback kparts__partmanager_activepart_callback = nullptr;
    KParts__PartManager_ActiveWidget_Callback kparts__partmanager_activewidget_callback = nullptr;
    KParts__PartManager_Event_Callback kparts__partmanager_event_callback = nullptr;
    KParts__PartManager_TimerEvent_Callback kparts__partmanager_timerevent_callback = nullptr;
    KParts__PartManager_ChildEvent_Callback kparts__partmanager_childevent_callback = nullptr;
    KParts__PartManager_CustomEvent_Callback kparts__partmanager_customevent_callback = nullptr;
    KParts__PartManager_ConnectNotify_Callback kparts__partmanager_connectnotify_callback = nullptr;
    KParts__PartManager_DisconnectNotify_Callback kparts__partmanager_disconnectnotify_callback = nullptr;
    KParts__PartManager_SetIgnoreExplictFocusRequests_Callback kparts__partmanager_setignoreexplictfocusrequests_callback = nullptr;
    KParts__PartManager_SlotObjectDestroyed_Callback kparts__partmanager_slotobjectdestroyed_callback = nullptr;
    KParts__PartManager_SlotWidgetDestroyed_Callback kparts__partmanager_slotwidgetdestroyed_callback = nullptr;
    KParts__PartManager_SlotManagedTopLevelWidgetDestroyed_Callback kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_callback = nullptr;
    KParts__PartManager_Sender_Callback kparts__partmanager_sender_callback = nullptr;
    KParts__PartManager_SenderSignalIndex_Callback kparts__partmanager_sendersignalindex_callback = nullptr;
    KParts__PartManager_Receivers_Callback kparts__partmanager_receivers_callback = nullptr;
    KParts__PartManager_IsSignalConnected_Callback kparts__partmanager_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kparts__partmanager_metacall_isbase = false;
    mutable bool kparts__partmanager_eventfilter_isbase = false;
    mutable bool kparts__partmanager_addpart_isbase = false;
    mutable bool kparts__partmanager_removepart_isbase = false;
    mutable bool kparts__partmanager_replacepart_isbase = false;
    mutable bool kparts__partmanager_setactivepart_isbase = false;
    mutable bool kparts__partmanager_activepart_isbase = false;
    mutable bool kparts__partmanager_activewidget_isbase = false;
    mutable bool kparts__partmanager_event_isbase = false;
    mutable bool kparts__partmanager_timerevent_isbase = false;
    mutable bool kparts__partmanager_childevent_isbase = false;
    mutable bool kparts__partmanager_customevent_isbase = false;
    mutable bool kparts__partmanager_connectnotify_isbase = false;
    mutable bool kparts__partmanager_disconnectnotify_isbase = false;
    mutable bool kparts__partmanager_setignoreexplictfocusrequests_isbase = false;
    mutable bool kparts__partmanager_slotobjectdestroyed_isbase = false;
    mutable bool kparts__partmanager_slotwidgetdestroyed_isbase = false;
    mutable bool kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_isbase = false;
    mutable bool kparts__partmanager_sender_isbase = false;
    mutable bool kparts__partmanager_sendersignalindex_isbase = false;
    mutable bool kparts__partmanager_receivers_isbase = false;
    mutable bool kparts__partmanager_issignalconnected_isbase = false;

  public:
    VirtualKPartsPartManager(QWidget* parent) : KParts::PartManager(parent) {};
    VirtualKPartsPartManager(QWidget* topLevel, QObject* parent) : KParts::PartManager(topLevel, parent) {};

    ~VirtualKPartsPartManager() {
        kparts__partmanager_metacall_callback = nullptr;
        kparts__partmanager_eventfilter_callback = nullptr;
        kparts__partmanager_addpart_callback = nullptr;
        kparts__partmanager_removepart_callback = nullptr;
        kparts__partmanager_replacepart_callback = nullptr;
        kparts__partmanager_setactivepart_callback = nullptr;
        kparts__partmanager_activepart_callback = nullptr;
        kparts__partmanager_activewidget_callback = nullptr;
        kparts__partmanager_event_callback = nullptr;
        kparts__partmanager_timerevent_callback = nullptr;
        kparts__partmanager_childevent_callback = nullptr;
        kparts__partmanager_customevent_callback = nullptr;
        kparts__partmanager_connectnotify_callback = nullptr;
        kparts__partmanager_disconnectnotify_callback = nullptr;
        kparts__partmanager_setignoreexplictfocusrequests_callback = nullptr;
        kparts__partmanager_slotobjectdestroyed_callback = nullptr;
        kparts__partmanager_slotwidgetdestroyed_callback = nullptr;
        kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_callback = nullptr;
        kparts__partmanager_sender_callback = nullptr;
        kparts__partmanager_sendersignalindex_callback = nullptr;
        kparts__partmanager_receivers_callback = nullptr;
        kparts__partmanager_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKParts__PartManager_Metacall_Callback(KParts__PartManager_Metacall_Callback cb) { kparts__partmanager_metacall_callback = cb; }
    inline void setKParts__PartManager_EventFilter_Callback(KParts__PartManager_EventFilter_Callback cb) { kparts__partmanager_eventfilter_callback = cb; }
    inline void setKParts__PartManager_AddPart_Callback(KParts__PartManager_AddPart_Callback cb) { kparts__partmanager_addpart_callback = cb; }
    inline void setKParts__PartManager_RemovePart_Callback(KParts__PartManager_RemovePart_Callback cb) { kparts__partmanager_removepart_callback = cb; }
    inline void setKParts__PartManager_ReplacePart_Callback(KParts__PartManager_ReplacePart_Callback cb) { kparts__partmanager_replacepart_callback = cb; }
    inline void setKParts__PartManager_SetActivePart_Callback(KParts__PartManager_SetActivePart_Callback cb) { kparts__partmanager_setactivepart_callback = cb; }
    inline void setKParts__PartManager_ActivePart_Callback(KParts__PartManager_ActivePart_Callback cb) { kparts__partmanager_activepart_callback = cb; }
    inline void setKParts__PartManager_ActiveWidget_Callback(KParts__PartManager_ActiveWidget_Callback cb) { kparts__partmanager_activewidget_callback = cb; }
    inline void setKParts__PartManager_Event_Callback(KParts__PartManager_Event_Callback cb) { kparts__partmanager_event_callback = cb; }
    inline void setKParts__PartManager_TimerEvent_Callback(KParts__PartManager_TimerEvent_Callback cb) { kparts__partmanager_timerevent_callback = cb; }
    inline void setKParts__PartManager_ChildEvent_Callback(KParts__PartManager_ChildEvent_Callback cb) { kparts__partmanager_childevent_callback = cb; }
    inline void setKParts__PartManager_CustomEvent_Callback(KParts__PartManager_CustomEvent_Callback cb) { kparts__partmanager_customevent_callback = cb; }
    inline void setKParts__PartManager_ConnectNotify_Callback(KParts__PartManager_ConnectNotify_Callback cb) { kparts__partmanager_connectnotify_callback = cb; }
    inline void setKParts__PartManager_DisconnectNotify_Callback(KParts__PartManager_DisconnectNotify_Callback cb) { kparts__partmanager_disconnectnotify_callback = cb; }
    inline void setKParts__PartManager_SetIgnoreExplictFocusRequests_Callback(KParts__PartManager_SetIgnoreExplictFocusRequests_Callback cb) { kparts__partmanager_setignoreexplictfocusrequests_callback = cb; }
    inline void setKParts__PartManager_SlotObjectDestroyed_Callback(KParts__PartManager_SlotObjectDestroyed_Callback cb) { kparts__partmanager_slotobjectdestroyed_callback = cb; }
    inline void setKParts__PartManager_SlotWidgetDestroyed_Callback(KParts__PartManager_SlotWidgetDestroyed_Callback cb) { kparts__partmanager_slotwidgetdestroyed_callback = cb; }
    inline void setKParts__PartManager_SlotManagedTopLevelWidgetDestroyed_Callback(KParts__PartManager_SlotManagedTopLevelWidgetDestroyed_Callback cb) { kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_callback = cb; }
    inline void setKParts__PartManager_Sender_Callback(KParts__PartManager_Sender_Callback cb) { kparts__partmanager_sender_callback = cb; }
    inline void setKParts__PartManager_SenderSignalIndex_Callback(KParts__PartManager_SenderSignalIndex_Callback cb) { kparts__partmanager_sendersignalindex_callback = cb; }
    inline void setKParts__PartManager_Receivers_Callback(KParts__PartManager_Receivers_Callback cb) { kparts__partmanager_receivers_callback = cb; }
    inline void setKParts__PartManager_IsSignalConnected_Callback(KParts__PartManager_IsSignalConnected_Callback cb) { kparts__partmanager_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKParts__PartManager_Metacall_IsBase(bool value) const { kparts__partmanager_metacall_isbase = value; }
    inline void setKParts__PartManager_EventFilter_IsBase(bool value) const { kparts__partmanager_eventfilter_isbase = value; }
    inline void setKParts__PartManager_AddPart_IsBase(bool value) const { kparts__partmanager_addpart_isbase = value; }
    inline void setKParts__PartManager_RemovePart_IsBase(bool value) const { kparts__partmanager_removepart_isbase = value; }
    inline void setKParts__PartManager_ReplacePart_IsBase(bool value) const { kparts__partmanager_replacepart_isbase = value; }
    inline void setKParts__PartManager_SetActivePart_IsBase(bool value) const { kparts__partmanager_setactivepart_isbase = value; }
    inline void setKParts__PartManager_ActivePart_IsBase(bool value) const { kparts__partmanager_activepart_isbase = value; }
    inline void setKParts__PartManager_ActiveWidget_IsBase(bool value) const { kparts__partmanager_activewidget_isbase = value; }
    inline void setKParts__PartManager_Event_IsBase(bool value) const { kparts__partmanager_event_isbase = value; }
    inline void setKParts__PartManager_TimerEvent_IsBase(bool value) const { kparts__partmanager_timerevent_isbase = value; }
    inline void setKParts__PartManager_ChildEvent_IsBase(bool value) const { kparts__partmanager_childevent_isbase = value; }
    inline void setKParts__PartManager_CustomEvent_IsBase(bool value) const { kparts__partmanager_customevent_isbase = value; }
    inline void setKParts__PartManager_ConnectNotify_IsBase(bool value) const { kparts__partmanager_connectnotify_isbase = value; }
    inline void setKParts__PartManager_DisconnectNotify_IsBase(bool value) const { kparts__partmanager_disconnectnotify_isbase = value; }
    inline void setKParts__PartManager_SetIgnoreExplictFocusRequests_IsBase(bool value) const { kparts__partmanager_setignoreexplictfocusrequests_isbase = value; }
    inline void setKParts__PartManager_SlotObjectDestroyed_IsBase(bool value) const { kparts__partmanager_slotobjectdestroyed_isbase = value; }
    inline void setKParts__PartManager_SlotWidgetDestroyed_IsBase(bool value) const { kparts__partmanager_slotwidgetdestroyed_isbase = value; }
    inline void setKParts__PartManager_SlotManagedTopLevelWidgetDestroyed_IsBase(bool value) const { kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_isbase = value; }
    inline void setKParts__PartManager_Sender_IsBase(bool value) const { kparts__partmanager_sender_isbase = value; }
    inline void setKParts__PartManager_SenderSignalIndex_IsBase(bool value) const { kparts__partmanager_sendersignalindex_isbase = value; }
    inline void setKParts__PartManager_Receivers_IsBase(bool value) const { kparts__partmanager_receivers_isbase = value; }
    inline void setKParts__PartManager_IsSignalConnected_IsBase(bool value) const { kparts__partmanager_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__partmanager_metacall_isbase) {
            kparts__partmanager_metacall_isbase = false;
            return KParts__PartManager::qt_metacall(param1, param2, param3);
        } else if (kparts__partmanager_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kparts__partmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__PartManager::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kparts__partmanager_eventfilter_isbase) {
            kparts__partmanager_eventfilter_isbase = false;
            return KParts__PartManager::eventFilter(obj, ev);
        } else if (kparts__partmanager_eventfilter_callback != nullptr) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;

            bool callback_ret = kparts__partmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KParts__PartManager::eventFilter(obj, ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPart(KParts::Part* part, bool setActive) override {
        if (kparts__partmanager_addpart_isbase) {
            kparts__partmanager_addpart_isbase = false;
            KParts__PartManager::addPart(part, setActive);
        } else if (kparts__partmanager_addpart_callback != nullptr) {
            KParts__Part* cbval1 = part;
            bool cbval2 = setActive;

            kparts__partmanager_addpart_callback(this, cbval1, cbval2);
        } else {
            KParts__PartManager::addPart(part, setActive);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removePart(KParts::Part* part) override {
        if (kparts__partmanager_removepart_isbase) {
            kparts__partmanager_removepart_isbase = false;
            KParts__PartManager::removePart(part);
        } else if (kparts__partmanager_removepart_callback != nullptr) {
            KParts__Part* cbval1 = part;

            kparts__partmanager_removepart_callback(this, cbval1);
        } else {
            KParts__PartManager::removePart(part);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void replacePart(KParts::Part* oldPart, KParts::Part* newPart, bool setActive) override {
        if (kparts__partmanager_replacepart_isbase) {
            kparts__partmanager_replacepart_isbase = false;
            KParts__PartManager::replacePart(oldPart, newPart, setActive);
        } else if (kparts__partmanager_replacepart_callback != nullptr) {
            KParts__Part* cbval1 = oldPart;
            KParts__Part* cbval2 = newPart;
            bool cbval3 = setActive;

            kparts__partmanager_replacepart_callback(this, cbval1, cbval2, cbval3);
        } else {
            KParts__PartManager::replacePart(oldPart, newPart, setActive);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setActivePart(KParts::Part* part, QWidget* widget) override {
        if (kparts__partmanager_setactivepart_isbase) {
            kparts__partmanager_setactivepart_isbase = false;
            KParts__PartManager::setActivePart(part, widget);
        } else if (kparts__partmanager_setactivepart_callback != nullptr) {
            KParts__Part* cbval1 = part;
            QWidget* cbval2 = widget;

            kparts__partmanager_setactivepart_callback(this, cbval1, cbval2);
        } else {
            KParts__PartManager::setActivePart(part, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* activePart() const override {
        if (kparts__partmanager_activepart_isbase) {
            kparts__partmanager_activepart_isbase = false;
            return KParts__PartManager::activePart();
        } else if (kparts__partmanager_activepart_callback != nullptr) {
            KParts__Part* callback_ret = kparts__partmanager_activepart_callback();
            return callback_ret;
        } else {
            return KParts__PartManager::activePart();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* activeWidget() const override {
        if (kparts__partmanager_activewidget_isbase) {
            kparts__partmanager_activewidget_isbase = false;
            return KParts__PartManager::activeWidget();
        } else if (kparts__partmanager_activewidget_callback != nullptr) {
            QWidget* callback_ret = kparts__partmanager_activewidget_callback();
            return callback_ret;
        } else {
            return KParts__PartManager::activeWidget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__partmanager_event_isbase) {
            kparts__partmanager_event_isbase = false;
            return KParts__PartManager::event(event);
        } else if (kparts__partmanager_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kparts__partmanager_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__PartManager::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__partmanager_timerevent_isbase) {
            kparts__partmanager_timerevent_isbase = false;
            KParts__PartManager::timerEvent(event);
        } else if (kparts__partmanager_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kparts__partmanager_timerevent_callback(this, cbval1);
        } else {
            KParts__PartManager::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__partmanager_childevent_isbase) {
            kparts__partmanager_childevent_isbase = false;
            KParts__PartManager::childEvent(event);
        } else if (kparts__partmanager_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kparts__partmanager_childevent_callback(this, cbval1);
        } else {
            KParts__PartManager::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__partmanager_customevent_isbase) {
            kparts__partmanager_customevent_isbase = false;
            KParts__PartManager::customEvent(event);
        } else if (kparts__partmanager_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kparts__partmanager_customevent_callback(this, cbval1);
        } else {
            KParts__PartManager::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__partmanager_connectnotify_isbase) {
            kparts__partmanager_connectnotify_isbase = false;
            KParts__PartManager::connectNotify(signal);
        } else if (kparts__partmanager_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__partmanager_connectnotify_callback(this, cbval1);
        } else {
            KParts__PartManager::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__partmanager_disconnectnotify_isbase) {
            kparts__partmanager_disconnectnotify_isbase = false;
            KParts__PartManager::disconnectNotify(signal);
        } else if (kparts__partmanager_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kparts__partmanager_disconnectnotify_callback(this, cbval1);
        } else {
            KParts__PartManager::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setIgnoreExplictFocusRequests(bool ignoreExplictFocusRequests) {
        if (kparts__partmanager_setignoreexplictfocusrequests_isbase) {
            kparts__partmanager_setignoreexplictfocusrequests_isbase = false;
            KParts__PartManager::setIgnoreExplictFocusRequests(ignoreExplictFocusRequests);
        } else if (kparts__partmanager_setignoreexplictfocusrequests_callback != nullptr) {
            bool cbval1 = ignoreExplictFocusRequests;

            kparts__partmanager_setignoreexplictfocusrequests_callback(this, cbval1);
        } else {
            KParts__PartManager::setIgnoreExplictFocusRequests(ignoreExplictFocusRequests);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotObjectDestroyed() {
        if (kparts__partmanager_slotobjectdestroyed_isbase) {
            kparts__partmanager_slotobjectdestroyed_isbase = false;
            KParts__PartManager::slotObjectDestroyed();
        } else if (kparts__partmanager_slotobjectdestroyed_callback != nullptr) {
            kparts__partmanager_slotobjectdestroyed_callback();
        } else {
            KParts__PartManager::slotObjectDestroyed();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotWidgetDestroyed() {
        if (kparts__partmanager_slotwidgetdestroyed_isbase) {
            kparts__partmanager_slotwidgetdestroyed_isbase = false;
            KParts__PartManager::slotWidgetDestroyed();
        } else if (kparts__partmanager_slotwidgetdestroyed_callback != nullptr) {
            kparts__partmanager_slotwidgetdestroyed_callback();
        } else {
            KParts__PartManager::slotWidgetDestroyed();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotManagedTopLevelWidgetDestroyed() {
        if (kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_isbase) {
            kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_isbase = false;
            KParts__PartManager::slotManagedTopLevelWidgetDestroyed();
        } else if (kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_callback != nullptr) {
            kparts__partmanager_slotmanagedtoplevelwidgetdestroyed_callback();
        } else {
            KParts__PartManager::slotManagedTopLevelWidgetDestroyed();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kparts__partmanager_sender_isbase) {
            kparts__partmanager_sender_isbase = false;
            return KParts__PartManager::sender();
        } else if (kparts__partmanager_sender_callback != nullptr) {
            QObject* callback_ret = kparts__partmanager_sender_callback();
            return callback_ret;
        } else {
            return KParts__PartManager::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kparts__partmanager_sendersignalindex_isbase) {
            kparts__partmanager_sendersignalindex_isbase = false;
            return KParts__PartManager::senderSignalIndex();
        } else if (kparts__partmanager_sendersignalindex_callback != nullptr) {
            int callback_ret = kparts__partmanager_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KParts__PartManager::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kparts__partmanager_receivers_isbase) {
            kparts__partmanager_receivers_isbase = false;
            return KParts__PartManager::receivers(signal);
        } else if (kparts__partmanager_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kparts__partmanager_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KParts__PartManager::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kparts__partmanager_issignalconnected_isbase) {
            kparts__partmanager_issignalconnected_isbase = false;
            return KParts__PartManager::isSignalConnected(signal);
        } else if (kparts__partmanager_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kparts__partmanager_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KParts__PartManager::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KParts__PartManager_TimerEvent(KParts::PartManager* self, QTimerEvent* event);
    friend void KParts__PartManager_QBaseTimerEvent(KParts::PartManager* self, QTimerEvent* event);
    friend void KParts__PartManager_ChildEvent(KParts::PartManager* self, QChildEvent* event);
    friend void KParts__PartManager_QBaseChildEvent(KParts::PartManager* self, QChildEvent* event);
    friend void KParts__PartManager_CustomEvent(KParts::PartManager* self, QEvent* event);
    friend void KParts__PartManager_QBaseCustomEvent(KParts::PartManager* self, QEvent* event);
    friend void KParts__PartManager_ConnectNotify(KParts::PartManager* self, const QMetaMethod* signal);
    friend void KParts__PartManager_QBaseConnectNotify(KParts::PartManager* self, const QMetaMethod* signal);
    friend void KParts__PartManager_DisconnectNotify(KParts::PartManager* self, const QMetaMethod* signal);
    friend void KParts__PartManager_QBaseDisconnectNotify(KParts::PartManager* self, const QMetaMethod* signal);
    friend void KParts__PartManager_SetIgnoreExplictFocusRequests(KParts::PartManager* self, bool ignoreExplictFocusRequests);
    friend void KParts__PartManager_QBaseSetIgnoreExplictFocusRequests(KParts::PartManager* self, bool ignoreExplictFocusRequests);
    friend void KParts__PartManager_SlotObjectDestroyed(KParts::PartManager* self);
    friend void KParts__PartManager_QBaseSlotObjectDestroyed(KParts::PartManager* self);
    friend void KParts__PartManager_SlotWidgetDestroyed(KParts::PartManager* self);
    friend void KParts__PartManager_QBaseSlotWidgetDestroyed(KParts::PartManager* self);
    friend void KParts__PartManager_SlotManagedTopLevelWidgetDestroyed(KParts::PartManager* self);
    friend void KParts__PartManager_QBaseSlotManagedTopLevelWidgetDestroyed(KParts::PartManager* self);
    friend QObject* KParts__PartManager_Sender(const KParts::PartManager* self);
    friend QObject* KParts__PartManager_QBaseSender(const KParts::PartManager* self);
    friend int KParts__PartManager_SenderSignalIndex(const KParts::PartManager* self);
    friend int KParts__PartManager_QBaseSenderSignalIndex(const KParts::PartManager* self);
    friend int KParts__PartManager_Receivers(const KParts::PartManager* self, const char* signal);
    friend int KParts__PartManager_QBaseReceivers(const KParts::PartManager* self, const char* signal);
    friend bool KParts__PartManager_IsSignalConnected(const KParts::PartManager* self, const QMetaMethod* signal);
    friend bool KParts__PartManager_QBaseIsSignalConnected(const KParts::PartManager* self, const QMetaMethod* signal);
};

#endif
