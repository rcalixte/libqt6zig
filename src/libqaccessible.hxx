#pragma once
#ifndef LIBQACCESSIBLE_HXX
#define LIBQACCESSIBLE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleEvent
class VirtualQAccessibleEvent final : public QAccessibleEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleEvent*);

    // Instance callback storage
    QAccessibleEvent_AccessibleInterface_Callback qaccessibleevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleEvent(QObject* obj, QAccessible::Event typ) : QAccessibleEvent(obj, typ) {};
    VirtualQAccessibleEvent(QAccessibleInterface* iface, QAccessible::Event typ) : QAccessibleEvent(iface, typ) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibleevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibleevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleStateChangeEvent
class VirtualQAccessibleStateChangeEvent final : public QAccessibleStateChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleStateChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleStateChangeEvent*);

    // Instance callback storage
    QAccessibleStateChangeEvent_AccessibleInterface_Callback qaccessiblestatechangeevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleStateChangeEvent(QObject* obj, QAccessible::State state) : QAccessibleStateChangeEvent(obj, state) {};
    VirtualQAccessibleStateChangeEvent(QAccessibleInterface* iface, QAccessible::State state) : QAccessibleStateChangeEvent(iface, state) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessiblestatechangeevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessiblestatechangeevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleStateChangeEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleTextCursorEvent
class VirtualQAccessibleTextCursorEvent final : public QAccessibleTextCursorEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleTextCursorEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleTextCursorEvent*);

    // Instance callback storage
    QAccessibleTextCursorEvent_AccessibleInterface_Callback qaccessibletextcursorevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleTextCursorEvent(QObject* obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos) {};
    VirtualQAccessibleTextCursorEvent(QAccessibleInterface* iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextcursorevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibletextcursorevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleTextCursorEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleTextSelectionEvent
class VirtualQAccessibleTextSelectionEvent final : public QAccessibleTextSelectionEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleTextSelectionEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleTextSelectionEvent*);

    // Instance callback storage
    QAccessibleTextSelectionEvent_AccessibleInterface_Callback qaccessibletextselectionevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleTextSelectionEvent(QObject* obj, int start, int end) : QAccessibleTextSelectionEvent(obj, start, end) {};
    VirtualQAccessibleTextSelectionEvent(QAccessibleInterface* iface, int start, int end) : QAccessibleTextSelectionEvent(iface, start, end) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextselectionevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibletextselectionevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleTextSelectionEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleTextInsertEvent
class VirtualQAccessibleTextInsertEvent final : public QAccessibleTextInsertEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleTextInsertEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleTextInsertEvent*);

    // Instance callback storage
    QAccessibleTextInsertEvent_AccessibleInterface_Callback qaccessibletextinsertevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleTextInsertEvent(QObject* obj, int position, const QString& text) : QAccessibleTextInsertEvent(obj, position, text) {};
    VirtualQAccessibleTextInsertEvent(QAccessibleInterface* iface, int position, const QString& text) : QAccessibleTextInsertEvent(iface, position, text) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextinsertevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibletextinsertevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleTextInsertEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleTextRemoveEvent
class VirtualQAccessibleTextRemoveEvent final : public QAccessibleTextRemoveEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleTextRemoveEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleTextRemoveEvent*);

    // Instance callback storage
    QAccessibleTextRemoveEvent_AccessibleInterface_Callback qaccessibletextremoveevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleTextRemoveEvent(QObject* obj, int position, const QString& text) : QAccessibleTextRemoveEvent(obj, position, text) {};
    VirtualQAccessibleTextRemoveEvent(QAccessibleInterface* iface, int position, const QString& text) : QAccessibleTextRemoveEvent(iface, position, text) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextremoveevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibletextremoveevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleTextRemoveEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleTextUpdateEvent
class VirtualQAccessibleTextUpdateEvent final : public QAccessibleTextUpdateEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleTextUpdateEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleTextUpdateEvent*);

    // Instance callback storage
    QAccessibleTextUpdateEvent_AccessibleInterface_Callback qaccessibletextupdateevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleTextUpdateEvent(QObject* obj, int position, const QString& oldText, const QString& text) : QAccessibleTextUpdateEvent(obj, position, oldText, text) {};
    VirtualQAccessibleTextUpdateEvent(QAccessibleInterface* iface, int position, const QString& oldText, const QString& text) : QAccessibleTextUpdateEvent(iface, position, oldText, text) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextupdateevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibletextupdateevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleTextUpdateEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleValueChangeEvent
class VirtualQAccessibleValueChangeEvent final : public QAccessibleValueChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleValueChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleValueChangeEvent*);

    // Instance callback storage
    QAccessibleValueChangeEvent_AccessibleInterface_Callback qaccessiblevaluechangeevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleValueChangeEvent(QObject* obj, const QVariant& val) : QAccessibleValueChangeEvent(obj, val) {};
    VirtualQAccessibleValueChangeEvent(QAccessibleInterface* iface, const QVariant& val) : QAccessibleValueChangeEvent(iface, val) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessiblevaluechangeevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessiblevaluechangeevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleValueChangeEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleTableModelChangeEvent
class VirtualQAccessibleTableModelChangeEvent final : public QAccessibleTableModelChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleTableModelChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleTableModelChangeEvent*);

    // Instance callback storage
    QAccessibleTableModelChangeEvent_AccessibleInterface_Callback qaccessibletablemodelchangeevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleTableModelChangeEvent(QObject* obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(obj, changeType) {};
    VirtualQAccessibleTableModelChangeEvent(QAccessibleInterface* iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(iface, changeType) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletablemodelchangeevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibletablemodelchangeevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleTableModelChangeEvent::accessibleInterface();
    }
};

// This class is a subclass of QAccessibleAnnouncementEvent
class VirtualQAccessibleAnnouncementEvent final : public QAccessibleAnnouncementEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleAnnouncementEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)(const QAccessibleAnnouncementEvent*);

    // Instance callback storage
    QAccessibleAnnouncementEvent_AccessibleInterface_Callback qaccessibleannouncementevent_accessibleinterface_callback = nullptr;

    VirtualQAccessibleAnnouncementEvent(QObject* object, const QString& message) : QAccessibleAnnouncementEvent(object, message) {};
    VirtualQAccessibleAnnouncementEvent(QAccessibleInterface* iface, const QString& message) : QAccessibleAnnouncementEvent(iface, message) {};

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibleannouncementevent_accessibleinterface_callback) {
            QAccessibleInterface* callback_ret = qaccessibleannouncementevent_accessibleinterface_callback(this);
            return callback_ret;
        }
        return QAccessibleAnnouncementEvent::accessibleInterface();
    }
};

#endif
