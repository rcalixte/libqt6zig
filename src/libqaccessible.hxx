#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLE_H
#define SRCC_LIBVIRTUALQACCESSIBLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleEvent so that we can call protected methods
class VirtualQAccessibleEvent final : public QAccessibleEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleEvent_AccessibleInterface_Callback qaccessibleevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleEvent(QObject* obj, QAccessible::Event typ) : QAccessibleEvent(obj, typ) {};
    VirtualQAccessibleEvent(QAccessibleInterface* iface, QAccessible::Event typ) : QAccessibleEvent(iface, typ) {};

    ~VirtualQAccessibleEvent() {
        qaccessibleevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleEvent_AccessibleInterface_Callback(QAccessibleEvent_AccessibleInterface_Callback cb) { qaccessibleevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleEvent_AccessibleInterface_IsBase(bool value) const { qaccessibleevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibleevent_accessibleinterface_isbase) {
            qaccessibleevent_accessibleinterface_isbase = false;
            return QAccessibleEvent::accessibleInterface();
        } else if (qaccessibleevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibleevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleStateChangeEvent so that we can call protected methods
class VirtualQAccessibleStateChangeEvent final : public QAccessibleStateChangeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleStateChangeEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleStateChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleStateChangeEvent_AccessibleInterface_Callback qaccessiblestatechangeevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessiblestatechangeevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleStateChangeEvent(QObject* obj, QAccessible::State state) : QAccessibleStateChangeEvent(obj, state) {};
    VirtualQAccessibleStateChangeEvent(QAccessibleInterface* iface, QAccessible::State state) : QAccessibleStateChangeEvent(iface, state) {};

    ~VirtualQAccessibleStateChangeEvent() {
        qaccessiblestatechangeevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleStateChangeEvent_AccessibleInterface_Callback(QAccessibleStateChangeEvent_AccessibleInterface_Callback cb) { qaccessiblestatechangeevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleStateChangeEvent_AccessibleInterface_IsBase(bool value) const { qaccessiblestatechangeevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessiblestatechangeevent_accessibleinterface_isbase) {
            qaccessiblestatechangeevent_accessibleinterface_isbase = false;
            return QAccessibleStateChangeEvent::accessibleInterface();
        } else if (qaccessiblestatechangeevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessiblestatechangeevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleStateChangeEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextCursorEvent so that we can call protected methods
class VirtualQAccessibleTextCursorEvent final : public QAccessibleTextCursorEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleTextCursorEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleTextCursorEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextCursorEvent_AccessibleInterface_Callback qaccessibletextcursorevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextcursorevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextCursorEvent(QObject* obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos) {};
    VirtualQAccessibleTextCursorEvent(QAccessibleInterface* iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos) {};

    ~VirtualQAccessibleTextCursorEvent() {
        qaccessibletextcursorevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleTextCursorEvent_AccessibleInterface_Callback(QAccessibleTextCursorEvent_AccessibleInterface_Callback cb) { qaccessibletextcursorevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleTextCursorEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextcursorevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextcursorevent_accessibleinterface_isbase) {
            qaccessibletextcursorevent_accessibleinterface_isbase = false;
            return QAccessibleTextCursorEvent::accessibleInterface();
        } else if (qaccessibletextcursorevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibletextcursorevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleTextCursorEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextSelectionEvent so that we can call protected methods
class VirtualQAccessibleTextSelectionEvent final : public QAccessibleTextSelectionEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleTextSelectionEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleTextSelectionEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextSelectionEvent_AccessibleInterface_Callback qaccessibletextselectionevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextselectionevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextSelectionEvent(QObject* obj, int start, int end) : QAccessibleTextSelectionEvent(obj, start, end) {};
    VirtualQAccessibleTextSelectionEvent(QAccessibleInterface* iface, int start, int end) : QAccessibleTextSelectionEvent(iface, start, end) {};

    ~VirtualQAccessibleTextSelectionEvent() {
        qaccessibletextselectionevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleTextSelectionEvent_AccessibleInterface_Callback(QAccessibleTextSelectionEvent_AccessibleInterface_Callback cb) { qaccessibletextselectionevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleTextSelectionEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextselectionevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextselectionevent_accessibleinterface_isbase) {
            qaccessibletextselectionevent_accessibleinterface_isbase = false;
            return QAccessibleTextSelectionEvent::accessibleInterface();
        } else if (qaccessibletextselectionevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibletextselectionevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleTextSelectionEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextInsertEvent so that we can call protected methods
class VirtualQAccessibleTextInsertEvent final : public QAccessibleTextInsertEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleTextInsertEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleTextInsertEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextInsertEvent_AccessibleInterface_Callback qaccessibletextinsertevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextinsertevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextInsertEvent(QObject* obj, int position, const QString& text) : QAccessibleTextInsertEvent(obj, position, text) {};
    VirtualQAccessibleTextInsertEvent(QAccessibleInterface* iface, int position, const QString& text) : QAccessibleTextInsertEvent(iface, position, text) {};

    ~VirtualQAccessibleTextInsertEvent() {
        qaccessibletextinsertevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleTextInsertEvent_AccessibleInterface_Callback(QAccessibleTextInsertEvent_AccessibleInterface_Callback cb) { qaccessibletextinsertevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleTextInsertEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextinsertevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextinsertevent_accessibleinterface_isbase) {
            qaccessibletextinsertevent_accessibleinterface_isbase = false;
            return QAccessibleTextInsertEvent::accessibleInterface();
        } else if (qaccessibletextinsertevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibletextinsertevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleTextInsertEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextRemoveEvent so that we can call protected methods
class VirtualQAccessibleTextRemoveEvent final : public QAccessibleTextRemoveEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleTextRemoveEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleTextRemoveEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextRemoveEvent_AccessibleInterface_Callback qaccessibletextremoveevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextremoveevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextRemoveEvent(QObject* obj, int position, const QString& text) : QAccessibleTextRemoveEvent(obj, position, text) {};
    VirtualQAccessibleTextRemoveEvent(QAccessibleInterface* iface, int position, const QString& text) : QAccessibleTextRemoveEvent(iface, position, text) {};

    ~VirtualQAccessibleTextRemoveEvent() {
        qaccessibletextremoveevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleTextRemoveEvent_AccessibleInterface_Callback(QAccessibleTextRemoveEvent_AccessibleInterface_Callback cb) { qaccessibletextremoveevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleTextRemoveEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextremoveevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextremoveevent_accessibleinterface_isbase) {
            qaccessibletextremoveevent_accessibleinterface_isbase = false;
            return QAccessibleTextRemoveEvent::accessibleInterface();
        } else if (qaccessibletextremoveevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibletextremoveevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleTextRemoveEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTextUpdateEvent so that we can call protected methods
class VirtualQAccessibleTextUpdateEvent final : public QAccessibleTextUpdateEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleTextUpdateEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleTextUpdateEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTextUpdateEvent_AccessibleInterface_Callback qaccessibletextupdateevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletextupdateevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTextUpdateEvent(QObject* obj, int position, const QString& oldText, const QString& text) : QAccessibleTextUpdateEvent(obj, position, oldText, text) {};
    VirtualQAccessibleTextUpdateEvent(QAccessibleInterface* iface, int position, const QString& oldText, const QString& text) : QAccessibleTextUpdateEvent(iface, position, oldText, text) {};

    ~VirtualQAccessibleTextUpdateEvent() {
        qaccessibletextupdateevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleTextUpdateEvent_AccessibleInterface_Callback(QAccessibleTextUpdateEvent_AccessibleInterface_Callback cb) { qaccessibletextupdateevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleTextUpdateEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletextupdateevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletextupdateevent_accessibleinterface_isbase) {
            qaccessibletextupdateevent_accessibleinterface_isbase = false;
            return QAccessibleTextUpdateEvent::accessibleInterface();
        } else if (qaccessibletextupdateevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibletextupdateevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleTextUpdateEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleValueChangeEvent so that we can call protected methods
class VirtualQAccessibleValueChangeEvent final : public QAccessibleValueChangeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleValueChangeEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleValueChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleValueChangeEvent_AccessibleInterface_Callback qaccessiblevaluechangeevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessiblevaluechangeevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleValueChangeEvent(QObject* obj, const QVariant& val) : QAccessibleValueChangeEvent(obj, val) {};
    VirtualQAccessibleValueChangeEvent(QAccessibleInterface* iface, const QVariant& val) : QAccessibleValueChangeEvent(iface, val) {};

    ~VirtualQAccessibleValueChangeEvent() {
        qaccessiblevaluechangeevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleValueChangeEvent_AccessibleInterface_Callback(QAccessibleValueChangeEvent_AccessibleInterface_Callback cb) { qaccessiblevaluechangeevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleValueChangeEvent_AccessibleInterface_IsBase(bool value) const { qaccessiblevaluechangeevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessiblevaluechangeevent_accessibleinterface_isbase) {
            qaccessiblevaluechangeevent_accessibleinterface_isbase = false;
            return QAccessibleValueChangeEvent::accessibleInterface();
        } else if (qaccessiblevaluechangeevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessiblevaluechangeevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleValueChangeEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleTableModelChangeEvent so that we can call protected methods
class VirtualQAccessibleTableModelChangeEvent final : public QAccessibleTableModelChangeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleTableModelChangeEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleTableModelChangeEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleTableModelChangeEvent_AccessibleInterface_Callback qaccessibletablemodelchangeevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibletablemodelchangeevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleTableModelChangeEvent(QObject* obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(obj, changeType) {};
    VirtualQAccessibleTableModelChangeEvent(QAccessibleInterface* iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType) : QAccessibleTableModelChangeEvent(iface, changeType) {};

    ~VirtualQAccessibleTableModelChangeEvent() {
        qaccessibletablemodelchangeevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleTableModelChangeEvent_AccessibleInterface_Callback(QAccessibleTableModelChangeEvent_AccessibleInterface_Callback cb) { qaccessibletablemodelchangeevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleTableModelChangeEvent_AccessibleInterface_IsBase(bool value) const { qaccessibletablemodelchangeevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibletablemodelchangeevent_accessibleinterface_isbase) {
            qaccessibletablemodelchangeevent_accessibleinterface_isbase = false;
            return QAccessibleTableModelChangeEvent::accessibleInterface();
        } else if (qaccessibletablemodelchangeevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibletablemodelchangeevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleTableModelChangeEvent::accessibleInterface();
        }
    }
};

// This class is a subclass of QAccessibleAnnouncementEvent so that we can call protected methods
class VirtualQAccessibleAnnouncementEvent final : public QAccessibleAnnouncementEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleAnnouncementEvent = true;

    // Virtual class public types (including callbacks)
    using QAccessibleAnnouncementEvent_AccessibleInterface_Callback = QAccessibleInterface* (*)();

  protected:
    // Instance callback storage
    QAccessibleAnnouncementEvent_AccessibleInterface_Callback qaccessibleannouncementevent_accessibleinterface_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleannouncementevent_accessibleinterface_isbase = false;

  public:
    VirtualQAccessibleAnnouncementEvent(QObject* object, const QString& message) : QAccessibleAnnouncementEvent(object, message) {};
    VirtualQAccessibleAnnouncementEvent(QAccessibleInterface* iface, const QString& message) : QAccessibleAnnouncementEvent(iface, message) {};

    ~VirtualQAccessibleAnnouncementEvent() {
        qaccessibleannouncementevent_accessibleinterface_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleAnnouncementEvent_AccessibleInterface_Callback(QAccessibleAnnouncementEvent_AccessibleInterface_Callback cb) { qaccessibleannouncementevent_accessibleinterface_callback = cb; }

    // Base flag setters
    inline void setQAccessibleAnnouncementEvent_AccessibleInterface_IsBase(bool value) const { qaccessibleannouncementevent_accessibleinterface_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* accessibleInterface() const override {
        if (qaccessibleannouncementevent_accessibleinterface_isbase) {
            qaccessibleannouncementevent_accessibleinterface_isbase = false;
            return QAccessibleAnnouncementEvent::accessibleInterface();
        } else if (qaccessibleannouncementevent_accessibleinterface_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibleannouncementevent_accessibleinterface_callback();
            return callback_ret;
        } else {
            return QAccessibleAnnouncementEvent::accessibleInterface();
        }
    }
};

#endif
