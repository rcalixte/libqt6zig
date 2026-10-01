#pragma once
#ifndef EXTRAS_KPARTS_LIBPARTMANAGER_HXX
#define EXTRAS_KPARTS_LIBPARTMANAGER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KParts::PartManager
class VirtualKPartsPartManager final : public KParts::PartManager {
  public:
    // Virtual class public types (including callbacks and access types)
    using KParts__PartManager_MetaObject_Callback = QMetaObject* (*)(const KParts__PartManager*);
    using KParts__PartManager_Metacast_Callback = void* (*)(KParts__PartManager*, const char*);
    using KParts__PartManager_Metacall_Callback = int (*)(KParts__PartManager*, int, int, void**);
    using KParts__PartManager_EventFilter_Callback = bool (*)(KParts__PartManager*, QObject*, QEvent*);
    using KParts__PartManager_AddPart_Callback = void (*)(KParts__PartManager*, KParts__Part*, bool);
    using KParts__PartManager_RemovePart_Callback = void (*)(KParts__PartManager*, KParts__Part*);
    using KParts__PartManager_ReplacePart_Callback = void (*)(KParts__PartManager*, KParts__Part*, KParts__Part*, bool);
    using KParts__PartManager_SetActivePart_Callback = void (*)(KParts__PartManager*, KParts__Part*, QWidget*);
    using KParts__PartManager_ActivePart_Callback = KParts__Part* (*)(const KParts__PartManager*);
    using KParts__PartManager_ActiveWidget_Callback = QWidget* (*)(const KParts__PartManager*);
    using KParts__PartManager_Event_Callback = bool (*)(KParts__PartManager*, QEvent*);
    using KParts__PartManager_TimerEvent_Callback = void (*)(KParts__PartManager*, QTimerEvent*);
    using KParts__PartManager_ChildEvent_Callback = void (*)(KParts__PartManager*, QChildEvent*);
    using KParts__PartManager_CustomEvent_Callback = void (*)(KParts__PartManager*, QEvent*);
    using KParts__PartManager_ConnectNotify_Callback = void (*)(KParts__PartManager*, QMetaMethod*);
    using KParts__PartManager_DisconnectNotify_Callback = void (*)(KParts__PartManager*, QMetaMethod*);
    using KParts::PartManager::isSignalConnected;
    using KParts::PartManager::receivers;
    using KParts::PartManager::sender;
    using KParts::PartManager::senderSignalIndex;
    using KParts::PartManager::setIgnoreExplictFocusRequests;
    using KParts::PartManager::slotManagedTopLevelWidgetDestroyed;
    using KParts::PartManager::slotObjectDestroyed;
    using KParts::PartManager::slotWidgetDestroyed;

    // Instance callback storage
    KParts__PartManager_MetaObject_Callback kparts__partmanager_metaobject_callback = nullptr;
    KParts__PartManager_Metacast_Callback kparts__partmanager_metacast_callback = nullptr;
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

    // Access struct
    struct Base : KParts::PartManager {
        using KParts::PartManager::childEvent;
        using KParts::PartManager::connectNotify;
        using KParts::PartManager::customEvent;
        using KParts::PartManager::disconnectNotify;
        using KParts::PartManager::timerEvent;
    };

    VirtualKPartsPartManager(QWidget* parent) : KParts::PartManager(parent) {};
    VirtualKPartsPartManager(QWidget* topLevel, QObject* parent) : KParts::PartManager(topLevel, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kparts__partmanager_metaobject_callback) {
            QMetaObject* callback_ret = kparts__partmanager_metaobject_callback(this);
            return callback_ret;
        }
        return KParts__PartManager::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kparts__partmanager_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kparts__partmanager_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__PartManager::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kparts__partmanager_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kparts__partmanager_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KParts__PartManager::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kparts__partmanager_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;
            bool callback_ret = kparts__partmanager_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KParts__PartManager::eventFilter(obj, ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPart(KParts::Part* part, bool setActive) override {
        if (kparts__partmanager_addpart_callback) {
            KParts__Part* cbval1 = part;
            bool cbval2 = setActive;
            kparts__partmanager_addpart_callback(this, cbval1, cbval2);
            return;
        }
        KParts__PartManager::addPart(part, setActive);
    }

    // Virtual method for C ABI access and custom callback
    virtual void removePart(KParts::Part* part) override {
        if (kparts__partmanager_removepart_callback) {
            KParts__Part* cbval1 = part;
            kparts__partmanager_removepart_callback(this, cbval1);
            return;
        }
        KParts__PartManager::removePart(part);
    }

    // Virtual method for C ABI access and custom callback
    virtual void replacePart(KParts::Part* oldPart, KParts::Part* newPart, bool setActive) override {
        if (kparts__partmanager_replacepart_callback) {
            KParts__Part* cbval1 = oldPart;
            KParts__Part* cbval2 = newPart;
            bool cbval3 = setActive;
            kparts__partmanager_replacepart_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KParts__PartManager::replacePart(oldPart, newPart, setActive);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setActivePart(KParts::Part* part, QWidget* widget) override {
        if (kparts__partmanager_setactivepart_callback) {
            KParts__Part* cbval1 = part;
            QWidget* cbval2 = widget;
            kparts__partmanager_setactivepart_callback(this, cbval1, cbval2);
            return;
        }
        KParts__PartManager::setActivePart(part, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual KParts::Part* activePart() const override {
        if (kparts__partmanager_activepart_callback) {
            KParts__Part* callback_ret = kparts__partmanager_activepart_callback(this);
            return callback_ret;
        }
        return KParts__PartManager::activePart();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* activeWidget() const override {
        if (kparts__partmanager_activewidget_callback) {
            QWidget* callback_ret = kparts__partmanager_activewidget_callback(this);
            return callback_ret;
        }
        return KParts__PartManager::activeWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kparts__partmanager_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kparts__partmanager_event_callback(this, cbval1);
            return callback_ret;
        }
        return KParts__PartManager::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kparts__partmanager_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kparts__partmanager_timerevent_callback(this, cbval1);
            return;
        }
        KParts__PartManager::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kparts__partmanager_childevent_callback) {
            QChildEvent* cbval1 = event;
            kparts__partmanager_childevent_callback(this, cbval1);
            return;
        }
        KParts__PartManager::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kparts__partmanager_customevent_callback) {
            QEvent* cbval1 = event;
            kparts__partmanager_customevent_callback(this, cbval1);
            return;
        }
        KParts__PartManager::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kparts__partmanager_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__partmanager_connectnotify_callback(this, cbval1);
            return;
        }
        KParts__PartManager::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kparts__partmanager_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kparts__partmanager_disconnectnotify_callback(this, cbval1);
            return;
        }
        KParts__PartManager::disconnectNotify(signal);
    }

    // Friend functions
    friend void KParts__PartManager_SuperTimerEvent(KParts::PartManager* self, QTimerEvent* event);
    friend void KParts__PartManager_SuperChildEvent(KParts::PartManager* self, QChildEvent* event);
    friend void KParts__PartManager_SuperCustomEvent(KParts::PartManager* self, QEvent* event);
    friend void KParts__PartManager_SuperConnectNotify(KParts::PartManager* self, const QMetaMethod* signal);
    friend void KParts__PartManager_SuperDisconnectNotify(KParts::PartManager* self, const QMetaMethod* signal);
};

#endif
