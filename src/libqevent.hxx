#pragma once
#ifndef SRCC_LIBVIRTUALQEVENT_H
#define SRCC_LIBVIRTUALQEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputEvent so that we can call protected methods
class VirtualQInputEvent final : public QInputEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQInputEvent = true;

    // Virtual class public types (including callbacks)
    using QInputEvent_Clone_Callback = QInputEvent* (*)();
    using QInputEvent_SetTimestamp_Callback = void (*)(QInputEvent*, unsigned long long);
    using QInputEvent_SetAccepted_Callback = void (*)(QInputEvent*, bool);

  protected:
    // Instance callback storage
    QInputEvent_Clone_Callback qinputevent_clone_callback = nullptr;
    QInputEvent_SetTimestamp_Callback qinputevent_settimestamp_callback = nullptr;
    QInputEvent_SetAccepted_Callback qinputevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qinputevent_clone_isbase = false;
    mutable bool qinputevent_settimestamp_isbase = false;
    mutable bool qinputevent_setaccepted_isbase = false;

  public:
    VirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev) : QInputEvent(typeVal, m_dev) {};
    VirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev, Qt::KeyboardModifiers modifiers) : QInputEvent(typeVal, m_dev, modifiers) {};

    // Callback setters
    inline void setQInputEvent_Clone_Callback(QInputEvent_Clone_Callback cb) { qinputevent_clone_callback = cb; }
    inline void setQInputEvent_SetTimestamp_Callback(QInputEvent_SetTimestamp_Callback cb) { qinputevent_settimestamp_callback = cb; }
    inline void setQInputEvent_SetAccepted_Callback(QInputEvent_SetAccepted_Callback cb) { qinputevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQInputEvent_Clone_IsBase(bool value) const { qinputevent_clone_isbase = value; }
    inline void setQInputEvent_SetTimestamp_IsBase(bool value) const { qinputevent_settimestamp_isbase = value; }
    inline void setQInputEvent_SetAccepted_IsBase(bool value) const { qinputevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QInputEvent* clone() const override {
        if (qinputevent_clone_isbase) {
            qinputevent_clone_isbase = false;
            return QInputEvent::clone();
        }
        auto clone_cb = qinputevent_clone_callback;
        if (clone_cb) {
            QInputEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QInputEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qinputevent_settimestamp_isbase) {
            qinputevent_settimestamp_isbase = false;
            QInputEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qinputevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QInputEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputevent_setaccepted_isbase) {
            qinputevent_setaccepted_isbase = false;
            QInputEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qinputevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QInputEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QPointerEvent so that we can call protected methods
class VirtualQPointerEvent final : public QPointerEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQPointerEvent = true;

    // Virtual class public types (including callbacks)
    using QPointerEvent_Clone_Callback = QPointerEvent* (*)();
    using QPointerEvent_SetTimestamp_Callback = void (*)(QPointerEvent*, unsigned long long);
    using QPointerEvent_IsBeginEvent_Callback = bool (*)();
    using QPointerEvent_IsUpdateEvent_Callback = bool (*)();
    using QPointerEvent_IsEndEvent_Callback = bool (*)();
    using QPointerEvent_SetAccepted_Callback = void (*)(QPointerEvent*, bool);

  protected:
    // Instance callback storage
    QPointerEvent_Clone_Callback qpointerevent_clone_callback = nullptr;
    QPointerEvent_SetTimestamp_Callback qpointerevent_settimestamp_callback = nullptr;
    QPointerEvent_IsBeginEvent_Callback qpointerevent_isbeginevent_callback = nullptr;
    QPointerEvent_IsUpdateEvent_Callback qpointerevent_isupdateevent_callback = nullptr;
    QPointerEvent_IsEndEvent_Callback qpointerevent_isendevent_callback = nullptr;
    QPointerEvent_SetAccepted_Callback qpointerevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qpointerevent_clone_isbase = false;
    mutable bool qpointerevent_settimestamp_isbase = false;
    mutable bool qpointerevent_isbeginevent_isbase = false;
    mutable bool qpointerevent_isupdateevent_isbase = false;
    mutable bool qpointerevent_isendevent_isbase = false;
    mutable bool qpointerevent_setaccepted_isbase = false;

  public:
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev) : QPointerEvent(typeVal, dev) {};
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers) : QPointerEvent(typeVal, dev, modifiers) {};
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& points) : QPointerEvent(typeVal, dev, modifiers, points) {};

    // Callback setters
    inline void setQPointerEvent_Clone_Callback(QPointerEvent_Clone_Callback cb) { qpointerevent_clone_callback = cb; }
    inline void setQPointerEvent_SetTimestamp_Callback(QPointerEvent_SetTimestamp_Callback cb) { qpointerevent_settimestamp_callback = cb; }
    inline void setQPointerEvent_IsBeginEvent_Callback(QPointerEvent_IsBeginEvent_Callback cb) { qpointerevent_isbeginevent_callback = cb; }
    inline void setQPointerEvent_IsUpdateEvent_Callback(QPointerEvent_IsUpdateEvent_Callback cb) { qpointerevent_isupdateevent_callback = cb; }
    inline void setQPointerEvent_IsEndEvent_Callback(QPointerEvent_IsEndEvent_Callback cb) { qpointerevent_isendevent_callback = cb; }
    inline void setQPointerEvent_SetAccepted_Callback(QPointerEvent_SetAccepted_Callback cb) { qpointerevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQPointerEvent_Clone_IsBase(bool value) const { qpointerevent_clone_isbase = value; }
    inline void setQPointerEvent_SetTimestamp_IsBase(bool value) const { qpointerevent_settimestamp_isbase = value; }
    inline void setQPointerEvent_IsBeginEvent_IsBase(bool value) const { qpointerevent_isbeginevent_isbase = value; }
    inline void setQPointerEvent_IsUpdateEvent_IsBase(bool value) const { qpointerevent_isupdateevent_isbase = value; }
    inline void setQPointerEvent_IsEndEvent_IsBase(bool value) const { qpointerevent_isendevent_isbase = value; }
    inline void setQPointerEvent_SetAccepted_IsBase(bool value) const { qpointerevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPointerEvent* clone() const override {
        if (qpointerevent_clone_isbase) {
            qpointerevent_clone_isbase = false;
            return QPointerEvent::clone();
        }
        auto clone_cb = qpointerevent_clone_callback;
        if (clone_cb) {
            QPointerEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QPointerEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qpointerevent_settimestamp_isbase) {
            qpointerevent_settimestamp_isbase = false;
            QPointerEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qpointerevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QPointerEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qpointerevent_isbeginevent_isbase) {
            qpointerevent_isbeginevent_isbase = false;
            return QPointerEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qpointerevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QPointerEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qpointerevent_isupdateevent_isbase) {
            qpointerevent_isupdateevent_isbase = false;
            return QPointerEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qpointerevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QPointerEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qpointerevent_isendevent_isbase) {
            qpointerevent_isendevent_isbase = false;
            return QPointerEvent::isEndEvent();
        }
        auto isendevent_cb = qpointerevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QPointerEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qpointerevent_setaccepted_isbase) {
            qpointerevent_setaccepted_isbase = false;
            QPointerEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qpointerevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QPointerEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QEnterEvent so that we can call protected methods
class VirtualQEnterEvent final : public QEnterEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQEnterEvent = true;

    // Virtual class public types (including callbacks)
    using QEnterEvent_Clone_Callback = QEnterEvent* (*)();
    using QEnterEvent_IsBeginEvent_Callback = bool (*)();
    using QEnterEvent_IsUpdateEvent_Callback = bool (*)();
    using QEnterEvent_IsEndEvent_Callback = bool (*)();
    using QEnterEvent_SetTimestamp_Callback = void (*)(QEnterEvent*, unsigned long long);
    using QEnterEvent_SetAccepted_Callback = void (*)(QEnterEvent*, bool);

  protected:
    // Instance callback storage
    QEnterEvent_Clone_Callback qenterevent_clone_callback = nullptr;
    QEnterEvent_IsBeginEvent_Callback qenterevent_isbeginevent_callback = nullptr;
    QEnterEvent_IsUpdateEvent_Callback qenterevent_isupdateevent_callback = nullptr;
    QEnterEvent_IsEndEvent_Callback qenterevent_isendevent_callback = nullptr;
    QEnterEvent_SetTimestamp_Callback qenterevent_settimestamp_callback = nullptr;
    QEnterEvent_SetAccepted_Callback qenterevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qenterevent_clone_isbase = false;
    mutable bool qenterevent_isbeginevent_isbase = false;
    mutable bool qenterevent_isupdateevent_isbase = false;
    mutable bool qenterevent_isendevent_isbase = false;
    mutable bool qenterevent_settimestamp_isbase = false;
    mutable bool qenterevent_setaccepted_isbase = false;

  public:
    VirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos) : QEnterEvent(localPos, scenePos, globalPos) {};
    VirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, const QPointingDevice* device) : QEnterEvent(localPos, scenePos, globalPos, device) {};

    // Callback setters
    inline void setQEnterEvent_Clone_Callback(QEnterEvent_Clone_Callback cb) { qenterevent_clone_callback = cb; }
    inline void setQEnterEvent_IsBeginEvent_Callback(QEnterEvent_IsBeginEvent_Callback cb) { qenterevent_isbeginevent_callback = cb; }
    inline void setQEnterEvent_IsUpdateEvent_Callback(QEnterEvent_IsUpdateEvent_Callback cb) { qenterevent_isupdateevent_callback = cb; }
    inline void setQEnterEvent_IsEndEvent_Callback(QEnterEvent_IsEndEvent_Callback cb) { qenterevent_isendevent_callback = cb; }
    inline void setQEnterEvent_SetTimestamp_Callback(QEnterEvent_SetTimestamp_Callback cb) { qenterevent_settimestamp_callback = cb; }
    inline void setQEnterEvent_SetAccepted_Callback(QEnterEvent_SetAccepted_Callback cb) { qenterevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQEnterEvent_Clone_IsBase(bool value) const { qenterevent_clone_isbase = value; }
    inline void setQEnterEvent_IsBeginEvent_IsBase(bool value) const { qenterevent_isbeginevent_isbase = value; }
    inline void setQEnterEvent_IsUpdateEvent_IsBase(bool value) const { qenterevent_isupdateevent_isbase = value; }
    inline void setQEnterEvent_IsEndEvent_IsBase(bool value) const { qenterevent_isendevent_isbase = value; }
    inline void setQEnterEvent_SetTimestamp_IsBase(bool value) const { qenterevent_settimestamp_isbase = value; }
    inline void setQEnterEvent_SetAccepted_IsBase(bool value) const { qenterevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QEnterEvent* clone() const override {
        if (qenterevent_clone_isbase) {
            qenterevent_clone_isbase = false;
            return QEnterEvent::clone();
        }
        auto clone_cb = qenterevent_clone_callback;
        if (clone_cb) {
            QEnterEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QEnterEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qenterevent_isbeginevent_isbase) {
            qenterevent_isbeginevent_isbase = false;
            return QEnterEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qenterevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QEnterEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qenterevent_isupdateevent_isbase) {
            qenterevent_isupdateevent_isbase = false;
            return QEnterEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qenterevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QEnterEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qenterevent_isendevent_isbase) {
            qenterevent_isendevent_isbase = false;
            return QEnterEvent::isEndEvent();
        }
        auto isendevent_cb = qenterevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QEnterEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qenterevent_settimestamp_isbase) {
            qenterevent_settimestamp_isbase = false;
            QEnterEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qenterevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QEnterEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qenterevent_setaccepted_isbase) {
            qenterevent_setaccepted_isbase = false;
            QEnterEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qenterevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QEnterEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QMouseEvent so that we can call protected methods
class VirtualQMouseEvent final : public QMouseEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQMouseEvent = true;

    // Virtual class public types (including callbacks)
    using QMouseEvent_Clone_Callback = QMouseEvent* (*)();
    using QMouseEvent_IsBeginEvent_Callback = bool (*)();
    using QMouseEvent_IsUpdateEvent_Callback = bool (*)();
    using QMouseEvent_IsEndEvent_Callback = bool (*)();
    using QMouseEvent_SetTimestamp_Callback = void (*)(QMouseEvent*, unsigned long long);
    using QMouseEvent_SetAccepted_Callback = void (*)(QMouseEvent*, bool);

  protected:
    // Instance callback storage
    QMouseEvent_Clone_Callback qmouseevent_clone_callback = nullptr;
    QMouseEvent_IsBeginEvent_Callback qmouseevent_isbeginevent_callback = nullptr;
    QMouseEvent_IsUpdateEvent_Callback qmouseevent_isupdateevent_callback = nullptr;
    QMouseEvent_IsEndEvent_Callback qmouseevent_isendevent_callback = nullptr;
    QMouseEvent_SetTimestamp_Callback qmouseevent_settimestamp_callback = nullptr;
    QMouseEvent_SetAccepted_Callback qmouseevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qmouseevent_clone_isbase = false;
    mutable bool qmouseevent_isbeginevent_isbase = false;
    mutable bool qmouseevent_isupdateevent_isbase = false;
    mutable bool qmouseevent_isendevent_isbase = false;
    mutable bool qmouseevent_settimestamp_isbase = false;
    mutable bool qmouseevent_setaccepted_isbase = false;

  public:
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, button, buttons, modifiers) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, button, buttons, modifiers, device) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers, device) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, device) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source, device) {};

    // Callback setters
    inline void setQMouseEvent_Clone_Callback(QMouseEvent_Clone_Callback cb) { qmouseevent_clone_callback = cb; }
    inline void setQMouseEvent_IsBeginEvent_Callback(QMouseEvent_IsBeginEvent_Callback cb) { qmouseevent_isbeginevent_callback = cb; }
    inline void setQMouseEvent_IsUpdateEvent_Callback(QMouseEvent_IsUpdateEvent_Callback cb) { qmouseevent_isupdateevent_callback = cb; }
    inline void setQMouseEvent_IsEndEvent_Callback(QMouseEvent_IsEndEvent_Callback cb) { qmouseevent_isendevent_callback = cb; }
    inline void setQMouseEvent_SetTimestamp_Callback(QMouseEvent_SetTimestamp_Callback cb) { qmouseevent_settimestamp_callback = cb; }
    inline void setQMouseEvent_SetAccepted_Callback(QMouseEvent_SetAccepted_Callback cb) { qmouseevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQMouseEvent_Clone_IsBase(bool value) const { qmouseevent_clone_isbase = value; }
    inline void setQMouseEvent_IsBeginEvent_IsBase(bool value) const { qmouseevent_isbeginevent_isbase = value; }
    inline void setQMouseEvent_IsUpdateEvent_IsBase(bool value) const { qmouseevent_isupdateevent_isbase = value; }
    inline void setQMouseEvent_IsEndEvent_IsBase(bool value) const { qmouseevent_isendevent_isbase = value; }
    inline void setQMouseEvent_SetTimestamp_IsBase(bool value) const { qmouseevent_settimestamp_isbase = value; }
    inline void setQMouseEvent_SetAccepted_IsBase(bool value) const { qmouseevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QMouseEvent* clone() const override {
        if (qmouseevent_clone_isbase) {
            qmouseevent_clone_isbase = false;
            return QMouseEvent::clone();
        }
        auto clone_cb = qmouseevent_clone_callback;
        if (clone_cb) {
            QMouseEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QMouseEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qmouseevent_isbeginevent_isbase) {
            qmouseevent_isbeginevent_isbase = false;
            return QMouseEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qmouseevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QMouseEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qmouseevent_isupdateevent_isbase) {
            qmouseevent_isupdateevent_isbase = false;
            return QMouseEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qmouseevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QMouseEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qmouseevent_isendevent_isbase) {
            qmouseevent_isendevent_isbase = false;
            return QMouseEvent::isEndEvent();
        }
        auto isendevent_cb = qmouseevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QMouseEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qmouseevent_settimestamp_isbase) {
            qmouseevent_settimestamp_isbase = false;
            QMouseEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qmouseevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QMouseEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qmouseevent_setaccepted_isbase) {
            qmouseevent_setaccepted_isbase = false;
            QMouseEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qmouseevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QMouseEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QHoverEvent so that we can call protected methods
class VirtualQHoverEvent final : public QHoverEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQHoverEvent = true;

    // Virtual class public types (including callbacks)
    using QHoverEvent_Clone_Callback = QHoverEvent* (*)();
    using QHoverEvent_IsUpdateEvent_Callback = bool (*)();
    using QHoverEvent_IsBeginEvent_Callback = bool (*)();
    using QHoverEvent_IsEndEvent_Callback = bool (*)();
    using QHoverEvent_SetTimestamp_Callback = void (*)(QHoverEvent*, unsigned long long);
    using QHoverEvent_SetAccepted_Callback = void (*)(QHoverEvent*, bool);

  protected:
    // Instance callback storage
    QHoverEvent_Clone_Callback qhoverevent_clone_callback = nullptr;
    QHoverEvent_IsUpdateEvent_Callback qhoverevent_isupdateevent_callback = nullptr;
    QHoverEvent_IsBeginEvent_Callback qhoverevent_isbeginevent_callback = nullptr;
    QHoverEvent_IsEndEvent_Callback qhoverevent_isendevent_callback = nullptr;
    QHoverEvent_SetTimestamp_Callback qhoverevent_settimestamp_callback = nullptr;
    QHoverEvent_SetAccepted_Callback qhoverevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qhoverevent_clone_isbase = false;
    mutable bool qhoverevent_isupdateevent_isbase = false;
    mutable bool qhoverevent_isbeginevent_isbase = false;
    mutable bool qhoverevent_isendevent_isbase = false;
    mutable bool qhoverevent_settimestamp_isbase = false;
    mutable bool qhoverevent_setaccepted_isbase = false;

  public:
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos) : QHoverEvent(typeVal, scenePos, globalPos, oldPos) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos) : QHoverEvent(typeVal, pos, oldPos) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers) : QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers, device) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers) : QHoverEvent(typeVal, pos, oldPos, modifiers) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QHoverEvent(typeVal, pos, oldPos, modifiers, device) {};

    // Callback setters
    inline void setQHoverEvent_Clone_Callback(QHoverEvent_Clone_Callback cb) { qhoverevent_clone_callback = cb; }
    inline void setQHoverEvent_IsUpdateEvent_Callback(QHoverEvent_IsUpdateEvent_Callback cb) { qhoverevent_isupdateevent_callback = cb; }
    inline void setQHoverEvent_IsBeginEvent_Callback(QHoverEvent_IsBeginEvent_Callback cb) { qhoverevent_isbeginevent_callback = cb; }
    inline void setQHoverEvent_IsEndEvent_Callback(QHoverEvent_IsEndEvent_Callback cb) { qhoverevent_isendevent_callback = cb; }
    inline void setQHoverEvent_SetTimestamp_Callback(QHoverEvent_SetTimestamp_Callback cb) { qhoverevent_settimestamp_callback = cb; }
    inline void setQHoverEvent_SetAccepted_Callback(QHoverEvent_SetAccepted_Callback cb) { qhoverevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQHoverEvent_Clone_IsBase(bool value) const { qhoverevent_clone_isbase = value; }
    inline void setQHoverEvent_IsUpdateEvent_IsBase(bool value) const { qhoverevent_isupdateevent_isbase = value; }
    inline void setQHoverEvent_IsBeginEvent_IsBase(bool value) const { qhoverevent_isbeginevent_isbase = value; }
    inline void setQHoverEvent_IsEndEvent_IsBase(bool value) const { qhoverevent_isendevent_isbase = value; }
    inline void setQHoverEvent_SetTimestamp_IsBase(bool value) const { qhoverevent_settimestamp_isbase = value; }
    inline void setQHoverEvent_SetAccepted_IsBase(bool value) const { qhoverevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QHoverEvent* clone() const override {
        if (qhoverevent_clone_isbase) {
            qhoverevent_clone_isbase = false;
            return QHoverEvent::clone();
        }
        auto clone_cb = qhoverevent_clone_callback;
        if (clone_cb) {
            QHoverEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QHoverEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qhoverevent_isupdateevent_isbase) {
            qhoverevent_isupdateevent_isbase = false;
            return QHoverEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qhoverevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QHoverEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qhoverevent_isbeginevent_isbase) {
            qhoverevent_isbeginevent_isbase = false;
            return QHoverEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qhoverevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QHoverEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qhoverevent_isendevent_isbase) {
            qhoverevent_isendevent_isbase = false;
            return QHoverEvent::isEndEvent();
        }
        auto isendevent_cb = qhoverevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QHoverEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qhoverevent_settimestamp_isbase) {
            qhoverevent_settimestamp_isbase = false;
            QHoverEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qhoverevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QHoverEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhoverevent_setaccepted_isbase) {
            qhoverevent_setaccepted_isbase = false;
            QHoverEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qhoverevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QHoverEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QWheelEvent so that we can call protected methods
class VirtualQWheelEvent final : public QWheelEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQWheelEvent = true;

    // Virtual class public types (including callbacks)
    using QWheelEvent_Clone_Callback = QWheelEvent* (*)();
    using QWheelEvent_IsBeginEvent_Callback = bool (*)();
    using QWheelEvent_IsUpdateEvent_Callback = bool (*)();
    using QWheelEvent_IsEndEvent_Callback = bool (*)();
    using QWheelEvent_SetTimestamp_Callback = void (*)(QWheelEvent*, unsigned long long);
    using QWheelEvent_SetAccepted_Callback = void (*)(QWheelEvent*, bool);

  protected:
    // Instance callback storage
    QWheelEvent_Clone_Callback qwheelevent_clone_callback = nullptr;
    QWheelEvent_IsBeginEvent_Callback qwheelevent_isbeginevent_callback = nullptr;
    QWheelEvent_IsUpdateEvent_Callback qwheelevent_isupdateevent_callback = nullptr;
    QWheelEvent_IsEndEvent_Callback qwheelevent_isendevent_callback = nullptr;
    QWheelEvent_SetTimestamp_Callback qwheelevent_settimestamp_callback = nullptr;
    QWheelEvent_SetAccepted_Callback qwheelevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qwheelevent_clone_isbase = false;
    mutable bool qwheelevent_isbeginevent_isbase = false;
    mutable bool qwheelevent_isupdateevent_isbase = false;
    mutable bool qwheelevent_isendevent_isbase = false;
    mutable bool qwheelevent_settimestamp_isbase = false;
    mutable bool qwheelevent_setaccepted_isbase = false;

  public:
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted) {};
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source) {};
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice* device) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source, device) {};

    // Callback setters
    inline void setQWheelEvent_Clone_Callback(QWheelEvent_Clone_Callback cb) { qwheelevent_clone_callback = cb; }
    inline void setQWheelEvent_IsBeginEvent_Callback(QWheelEvent_IsBeginEvent_Callback cb) { qwheelevent_isbeginevent_callback = cb; }
    inline void setQWheelEvent_IsUpdateEvent_Callback(QWheelEvent_IsUpdateEvent_Callback cb) { qwheelevent_isupdateevent_callback = cb; }
    inline void setQWheelEvent_IsEndEvent_Callback(QWheelEvent_IsEndEvent_Callback cb) { qwheelevent_isendevent_callback = cb; }
    inline void setQWheelEvent_SetTimestamp_Callback(QWheelEvent_SetTimestamp_Callback cb) { qwheelevent_settimestamp_callback = cb; }
    inline void setQWheelEvent_SetAccepted_Callback(QWheelEvent_SetAccepted_Callback cb) { qwheelevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQWheelEvent_Clone_IsBase(bool value) const { qwheelevent_clone_isbase = value; }
    inline void setQWheelEvent_IsBeginEvent_IsBase(bool value) const { qwheelevent_isbeginevent_isbase = value; }
    inline void setQWheelEvent_IsUpdateEvent_IsBase(bool value) const { qwheelevent_isupdateevent_isbase = value; }
    inline void setQWheelEvent_IsEndEvent_IsBase(bool value) const { qwheelevent_isendevent_isbase = value; }
    inline void setQWheelEvent_SetTimestamp_IsBase(bool value) const { qwheelevent_settimestamp_isbase = value; }
    inline void setQWheelEvent_SetAccepted_IsBase(bool value) const { qwheelevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWheelEvent* clone() const override {
        if (qwheelevent_clone_isbase) {
            qwheelevent_clone_isbase = false;
            return QWheelEvent::clone();
        }
        auto clone_cb = qwheelevent_clone_callback;
        if (clone_cb) {
            QWheelEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QWheelEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qwheelevent_isbeginevent_isbase) {
            qwheelevent_isbeginevent_isbase = false;
            return QWheelEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qwheelevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QWheelEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qwheelevent_isupdateevent_isbase) {
            qwheelevent_isupdateevent_isbase = false;
            return QWheelEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qwheelevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QWheelEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qwheelevent_isendevent_isbase) {
            qwheelevent_isendevent_isbase = false;
            return QWheelEvent::isEndEvent();
        }
        auto isendevent_cb = qwheelevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QWheelEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qwheelevent_settimestamp_isbase) {
            qwheelevent_settimestamp_isbase = false;
            QWheelEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qwheelevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QWheelEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwheelevent_setaccepted_isbase) {
            qwheelevent_setaccepted_isbase = false;
            QWheelEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qwheelevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QWheelEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QTabletEvent so that we can call protected methods
class VirtualQTabletEvent final : public QTabletEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQTabletEvent = true;

    // Virtual class public types (including callbacks)
    using QTabletEvent_Clone_Callback = QTabletEvent* (*)();
    using QTabletEvent_IsBeginEvent_Callback = bool (*)();
    using QTabletEvent_IsUpdateEvent_Callback = bool (*)();
    using QTabletEvent_IsEndEvent_Callback = bool (*)();
    using QTabletEvent_SetTimestamp_Callback = void (*)(QTabletEvent*, unsigned long long);
    using QTabletEvent_SetAccepted_Callback = void (*)(QTabletEvent*, bool);

  protected:
    // Instance callback storage
    QTabletEvent_Clone_Callback qtabletevent_clone_callback = nullptr;
    QTabletEvent_IsBeginEvent_Callback qtabletevent_isbeginevent_callback = nullptr;
    QTabletEvent_IsUpdateEvent_Callback qtabletevent_isupdateevent_callback = nullptr;
    QTabletEvent_IsEndEvent_Callback qtabletevent_isendevent_callback = nullptr;
    QTabletEvent_SetTimestamp_Callback qtabletevent_settimestamp_callback = nullptr;
    QTabletEvent_SetAccepted_Callback qtabletevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qtabletevent_clone_isbase = false;
    mutable bool qtabletevent_isbeginevent_isbase = false;
    mutable bool qtabletevent_isupdateevent_isbase = false;
    mutable bool qtabletevent_isendevent_isbase = false;
    mutable bool qtabletevent_settimestamp_isbase = false;
    mutable bool qtabletevent_setaccepted_isbase = false;

  public:
    VirtualQTabletEvent(QEvent::Type t, const QPointingDevice* device, const QPointF& pos, const QPointF& globalPos, qreal pressure, float xTilt, float yTilt, float tangentialPressure, qreal rotation, float z, Qt::KeyboardModifiers keyState, Qt::MouseButton button, Qt::MouseButtons buttons) : QTabletEvent(t, device, pos, globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons) {};

    // Callback setters
    inline void setQTabletEvent_Clone_Callback(QTabletEvent_Clone_Callback cb) { qtabletevent_clone_callback = cb; }
    inline void setQTabletEvent_IsBeginEvent_Callback(QTabletEvent_IsBeginEvent_Callback cb) { qtabletevent_isbeginevent_callback = cb; }
    inline void setQTabletEvent_IsUpdateEvent_Callback(QTabletEvent_IsUpdateEvent_Callback cb) { qtabletevent_isupdateevent_callback = cb; }
    inline void setQTabletEvent_IsEndEvent_Callback(QTabletEvent_IsEndEvent_Callback cb) { qtabletevent_isendevent_callback = cb; }
    inline void setQTabletEvent_SetTimestamp_Callback(QTabletEvent_SetTimestamp_Callback cb) { qtabletevent_settimestamp_callback = cb; }
    inline void setQTabletEvent_SetAccepted_Callback(QTabletEvent_SetAccepted_Callback cb) { qtabletevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQTabletEvent_Clone_IsBase(bool value) const { qtabletevent_clone_isbase = value; }
    inline void setQTabletEvent_IsBeginEvent_IsBase(bool value) const { qtabletevent_isbeginevent_isbase = value; }
    inline void setQTabletEvent_IsUpdateEvent_IsBase(bool value) const { qtabletevent_isupdateevent_isbase = value; }
    inline void setQTabletEvent_IsEndEvent_IsBase(bool value) const { qtabletevent_isendevent_isbase = value; }
    inline void setQTabletEvent_SetTimestamp_IsBase(bool value) const { qtabletevent_settimestamp_isbase = value; }
    inline void setQTabletEvent_SetAccepted_IsBase(bool value) const { qtabletevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTabletEvent* clone() const override {
        if (qtabletevent_clone_isbase) {
            qtabletevent_clone_isbase = false;
            return QTabletEvent::clone();
        }
        auto clone_cb = qtabletevent_clone_callback;
        if (clone_cb) {
            QTabletEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QTabletEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qtabletevent_isbeginevent_isbase) {
            qtabletevent_isbeginevent_isbase = false;
            return QTabletEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qtabletevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QTabletEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qtabletevent_isupdateevent_isbase) {
            qtabletevent_isupdateevent_isbase = false;
            return QTabletEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qtabletevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QTabletEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qtabletevent_isendevent_isbase) {
            qtabletevent_isendevent_isbase = false;
            return QTabletEvent::isEndEvent();
        }
        auto isendevent_cb = qtabletevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QTabletEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qtabletevent_settimestamp_isbase) {
            qtabletevent_settimestamp_isbase = false;
            QTabletEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qtabletevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QTabletEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtabletevent_setaccepted_isbase) {
            qtabletevent_setaccepted_isbase = false;
            QTabletEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qtabletevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QTabletEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QNativeGestureEvent so that we can call protected methods
class VirtualQNativeGestureEvent final : public QNativeGestureEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQNativeGestureEvent = true;

    // Virtual class public types (including callbacks)
    using QNativeGestureEvent_Clone_Callback = QNativeGestureEvent* (*)();
    using QNativeGestureEvent_IsBeginEvent_Callback = bool (*)();
    using QNativeGestureEvent_IsUpdateEvent_Callback = bool (*)();
    using QNativeGestureEvent_IsEndEvent_Callback = bool (*)();
    using QNativeGestureEvent_SetTimestamp_Callback = void (*)(QNativeGestureEvent*, unsigned long long);
    using QNativeGestureEvent_SetAccepted_Callback = void (*)(QNativeGestureEvent*, bool);

  protected:
    // Instance callback storage
    QNativeGestureEvent_Clone_Callback qnativegestureevent_clone_callback = nullptr;
    QNativeGestureEvent_IsBeginEvent_Callback qnativegestureevent_isbeginevent_callback = nullptr;
    QNativeGestureEvent_IsUpdateEvent_Callback qnativegestureevent_isupdateevent_callback = nullptr;
    QNativeGestureEvent_IsEndEvent_Callback qnativegestureevent_isendevent_callback = nullptr;
    QNativeGestureEvent_SetTimestamp_Callback qnativegestureevent_settimestamp_callback = nullptr;
    QNativeGestureEvent_SetAccepted_Callback qnativegestureevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qnativegestureevent_clone_isbase = false;
    mutable bool qnativegestureevent_isbeginevent_isbase = false;
    mutable bool qnativegestureevent_isupdateevent_isbase = false;
    mutable bool qnativegestureevent_isendevent_isbase = false;
    mutable bool qnativegestureevent_settimestamp_isbase = false;
    mutable bool qnativegestureevent_setaccepted_isbase = false;

  public:
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, quint64 sequenceId, quint64 intArgument) : QNativeGestureEvent(typeVal, dev, localPos, scenePos, globalPos, value, sequenceId, intArgument) {};
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta) : QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta) {};
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta, quint64 sequenceId) : QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta, sequenceId) {};

    // Callback setters
    inline void setQNativeGestureEvent_Clone_Callback(QNativeGestureEvent_Clone_Callback cb) { qnativegestureevent_clone_callback = cb; }
    inline void setQNativeGestureEvent_IsBeginEvent_Callback(QNativeGestureEvent_IsBeginEvent_Callback cb) { qnativegestureevent_isbeginevent_callback = cb; }
    inline void setQNativeGestureEvent_IsUpdateEvent_Callback(QNativeGestureEvent_IsUpdateEvent_Callback cb) { qnativegestureevent_isupdateevent_callback = cb; }
    inline void setQNativeGestureEvent_IsEndEvent_Callback(QNativeGestureEvent_IsEndEvent_Callback cb) { qnativegestureevent_isendevent_callback = cb; }
    inline void setQNativeGestureEvent_SetTimestamp_Callback(QNativeGestureEvent_SetTimestamp_Callback cb) { qnativegestureevent_settimestamp_callback = cb; }
    inline void setQNativeGestureEvent_SetAccepted_Callback(QNativeGestureEvent_SetAccepted_Callback cb) { qnativegestureevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQNativeGestureEvent_Clone_IsBase(bool value) const { qnativegestureevent_clone_isbase = value; }
    inline void setQNativeGestureEvent_IsBeginEvent_IsBase(bool value) const { qnativegestureevent_isbeginevent_isbase = value; }
    inline void setQNativeGestureEvent_IsUpdateEvent_IsBase(bool value) const { qnativegestureevent_isupdateevent_isbase = value; }
    inline void setQNativeGestureEvent_IsEndEvent_IsBase(bool value) const { qnativegestureevent_isendevent_isbase = value; }
    inline void setQNativeGestureEvent_SetTimestamp_IsBase(bool value) const { qnativegestureevent_settimestamp_isbase = value; }
    inline void setQNativeGestureEvent_SetAccepted_IsBase(bool value) const { qnativegestureevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QNativeGestureEvent* clone() const override {
        if (qnativegestureevent_clone_isbase) {
            qnativegestureevent_clone_isbase = false;
            return QNativeGestureEvent::clone();
        }
        auto clone_cb = qnativegestureevent_clone_callback;
        if (clone_cb) {
            QNativeGestureEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QNativeGestureEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qnativegestureevent_isbeginevent_isbase) {
            qnativegestureevent_isbeginevent_isbase = false;
            return QNativeGestureEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qnativegestureevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QNativeGestureEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qnativegestureevent_isupdateevent_isbase) {
            qnativegestureevent_isupdateevent_isbase = false;
            return QNativeGestureEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qnativegestureevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QNativeGestureEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qnativegestureevent_isendevent_isbase) {
            qnativegestureevent_isendevent_isbase = false;
            return QNativeGestureEvent::isEndEvent();
        }
        auto isendevent_cb = qnativegestureevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QNativeGestureEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qnativegestureevent_settimestamp_isbase) {
            qnativegestureevent_settimestamp_isbase = false;
            QNativeGestureEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qnativegestureevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QNativeGestureEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qnativegestureevent_setaccepted_isbase) {
            qnativegestureevent_setaccepted_isbase = false;
            QNativeGestureEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qnativegestureevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QNativeGestureEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QKeyEvent so that we can call protected methods
class VirtualQKeyEvent final : public QKeyEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQKeyEvent = true;

    // Virtual class public types (including callbacks)
    using QKeyEvent_Clone_Callback = QKeyEvent* (*)();
    using QKeyEvent_SetTimestamp_Callback = void (*)(QKeyEvent*, unsigned long long);
    using QKeyEvent_SetAccepted_Callback = void (*)(QKeyEvent*, bool);

  protected:
    // Instance callback storage
    QKeyEvent_Clone_Callback qkeyevent_clone_callback = nullptr;
    QKeyEvent_SetTimestamp_Callback qkeyevent_settimestamp_callback = nullptr;
    QKeyEvent_SetAccepted_Callback qkeyevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qkeyevent_clone_isbase = false;
    mutable bool qkeyevent_settimestamp_isbase = false;
    mutable bool qkeyevent_setaccepted_isbase = false;

  public:
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers) : QKeyEvent(typeVal, key, modifiers) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text) : QKeyEvent(typeVal, key, modifiers, text) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep) : QKeyEvent(typeVal, key, modifiers, text, autorep) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep, quint16 count) : QKeyEvent(typeVal, key, modifiers, text, autorep, count) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count, const QInputDevice* device) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count, device) {};

    // Callback setters
    inline void setQKeyEvent_Clone_Callback(QKeyEvent_Clone_Callback cb) { qkeyevent_clone_callback = cb; }
    inline void setQKeyEvent_SetTimestamp_Callback(QKeyEvent_SetTimestamp_Callback cb) { qkeyevent_settimestamp_callback = cb; }
    inline void setQKeyEvent_SetAccepted_Callback(QKeyEvent_SetAccepted_Callback cb) { qkeyevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQKeyEvent_Clone_IsBase(bool value) const { qkeyevent_clone_isbase = value; }
    inline void setQKeyEvent_SetTimestamp_IsBase(bool value) const { qkeyevent_settimestamp_isbase = value; }
    inline void setQKeyEvent_SetAccepted_IsBase(bool value) const { qkeyevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QKeyEvent* clone() const override {
        if (qkeyevent_clone_isbase) {
            qkeyevent_clone_isbase = false;
            return QKeyEvent::clone();
        }
        auto clone_cb = qkeyevent_clone_callback;
        if (clone_cb) {
            QKeyEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QKeyEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qkeyevent_settimestamp_isbase) {
            qkeyevent_settimestamp_isbase = false;
            QKeyEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qkeyevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QKeyEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qkeyevent_setaccepted_isbase) {
            qkeyevent_setaccepted_isbase = false;
            QKeyEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qkeyevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QKeyEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QFocusEvent so that we can call protected methods
class VirtualQFocusEvent final : public QFocusEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQFocusEvent = true;

    // Virtual class public types (including callbacks)
    using QFocusEvent_Clone_Callback = QFocusEvent* (*)();
    using QFocusEvent_SetAccepted_Callback = void (*)(QFocusEvent*, bool);

  protected:
    // Instance callback storage
    QFocusEvent_Clone_Callback qfocusevent_clone_callback = nullptr;
    QFocusEvent_SetAccepted_Callback qfocusevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qfocusevent_clone_isbase = false;
    mutable bool qfocusevent_setaccepted_isbase = false;

  public:
    VirtualQFocusEvent(QEvent::Type typeVal) : QFocusEvent(typeVal) {};
    VirtualQFocusEvent(QEvent::Type typeVal, Qt::FocusReason reason) : QFocusEvent(typeVal, reason) {};

    // Callback setters
    inline void setQFocusEvent_Clone_Callback(QFocusEvent_Clone_Callback cb) { qfocusevent_clone_callback = cb; }
    inline void setQFocusEvent_SetAccepted_Callback(QFocusEvent_SetAccepted_Callback cb) { qfocusevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQFocusEvent_Clone_IsBase(bool value) const { qfocusevent_clone_isbase = value; }
    inline void setQFocusEvent_SetAccepted_IsBase(bool value) const { qfocusevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QFocusEvent* clone() const override {
        if (qfocusevent_clone_isbase) {
            qfocusevent_clone_isbase = false;
            return QFocusEvent::clone();
        }
        auto clone_cb = qfocusevent_clone_callback;
        if (clone_cb) {
            QFocusEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QFocusEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qfocusevent_setaccepted_isbase) {
            qfocusevent_setaccepted_isbase = false;
            QFocusEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qfocusevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QFocusEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QPaintEvent so that we can call protected methods
class VirtualQPaintEvent final : public QPaintEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQPaintEvent = true;

    // Virtual class public types (including callbacks)
    using QPaintEvent_Clone_Callback = QPaintEvent* (*)();
    using QPaintEvent_SetAccepted_Callback = void (*)(QPaintEvent*, bool);

  protected:
    // Instance callback storage
    QPaintEvent_Clone_Callback qpaintevent_clone_callback = nullptr;
    QPaintEvent_SetAccepted_Callback qpaintevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qpaintevent_clone_isbase = false;
    mutable bool qpaintevent_setaccepted_isbase = false;

  public:
    VirtualQPaintEvent(const QRegion& paintRegion) : QPaintEvent(paintRegion) {};
    VirtualQPaintEvent(const QRect& paintRect) : QPaintEvent(paintRect) {};

    // Callback setters
    inline void setQPaintEvent_Clone_Callback(QPaintEvent_Clone_Callback cb) { qpaintevent_clone_callback = cb; }
    inline void setQPaintEvent_SetAccepted_Callback(QPaintEvent_SetAccepted_Callback cb) { qpaintevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQPaintEvent_Clone_IsBase(bool value) const { qpaintevent_clone_isbase = value; }
    inline void setQPaintEvent_SetAccepted_IsBase(bool value) const { qpaintevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEvent* clone() const override {
        if (qpaintevent_clone_isbase) {
            qpaintevent_clone_isbase = false;
            return QPaintEvent::clone();
        }
        auto clone_cb = qpaintevent_clone_callback;
        if (clone_cb) {
            QPaintEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QPaintEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qpaintevent_setaccepted_isbase) {
            qpaintevent_setaccepted_isbase = false;
            QPaintEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qpaintevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QPaintEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QMoveEvent so that we can call protected methods
class VirtualQMoveEvent final : public QMoveEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQMoveEvent = true;

    // Virtual class public types (including callbacks)
    using QMoveEvent_Clone_Callback = QMoveEvent* (*)();
    using QMoveEvent_SetAccepted_Callback = void (*)(QMoveEvent*, bool);

  protected:
    // Instance callback storage
    QMoveEvent_Clone_Callback qmoveevent_clone_callback = nullptr;
    QMoveEvent_SetAccepted_Callback qmoveevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qmoveevent_clone_isbase = false;
    mutable bool qmoveevent_setaccepted_isbase = false;

  public:
    VirtualQMoveEvent(const QPoint& pos, const QPoint& oldPos) : QMoveEvent(pos, oldPos) {};

    // Callback setters
    inline void setQMoveEvent_Clone_Callback(QMoveEvent_Clone_Callback cb) { qmoveevent_clone_callback = cb; }
    inline void setQMoveEvent_SetAccepted_Callback(QMoveEvent_SetAccepted_Callback cb) { qmoveevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQMoveEvent_Clone_IsBase(bool value) const { qmoveevent_clone_isbase = value; }
    inline void setQMoveEvent_SetAccepted_IsBase(bool value) const { qmoveevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QMoveEvent* clone() const override {
        if (qmoveevent_clone_isbase) {
            qmoveevent_clone_isbase = false;
            return QMoveEvent::clone();
        }
        auto clone_cb = qmoveevent_clone_callback;
        if (clone_cb) {
            QMoveEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QMoveEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qmoveevent_setaccepted_isbase) {
            qmoveevent_setaccepted_isbase = false;
            QMoveEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qmoveevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QMoveEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QExposeEvent so that we can call protected methods
class VirtualQExposeEvent final : public QExposeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQExposeEvent = true;

    // Virtual class public types (including callbacks)
    using QExposeEvent_Clone_Callback = QExposeEvent* (*)();
    using QExposeEvent_SetAccepted_Callback = void (*)(QExposeEvent*, bool);

  protected:
    // Instance callback storage
    QExposeEvent_Clone_Callback qexposeevent_clone_callback = nullptr;
    QExposeEvent_SetAccepted_Callback qexposeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qexposeevent_clone_isbase = false;
    mutable bool qexposeevent_setaccepted_isbase = false;

  public:
    VirtualQExposeEvent(const QRegion& m_region) : QExposeEvent(m_region) {};

    // Callback setters
    inline void setQExposeEvent_Clone_Callback(QExposeEvent_Clone_Callback cb) { qexposeevent_clone_callback = cb; }
    inline void setQExposeEvent_SetAccepted_Callback(QExposeEvent_SetAccepted_Callback cb) { qexposeevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQExposeEvent_Clone_IsBase(bool value) const { qexposeevent_clone_isbase = value; }
    inline void setQExposeEvent_SetAccepted_IsBase(bool value) const { qexposeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QExposeEvent* clone() const override {
        if (qexposeevent_clone_isbase) {
            qexposeevent_clone_isbase = false;
            return QExposeEvent::clone();
        }
        auto clone_cb = qexposeevent_clone_callback;
        if (clone_cb) {
            QExposeEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QExposeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qexposeevent_setaccepted_isbase) {
            qexposeevent_setaccepted_isbase = false;
            QExposeEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qexposeevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QExposeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QPlatformSurfaceEvent so that we can call protected methods
class VirtualQPlatformSurfaceEvent final : public QPlatformSurfaceEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlatformSurfaceEvent = true;

    // Virtual class public types (including callbacks)
    using QPlatformSurfaceEvent_Clone_Callback = QPlatformSurfaceEvent* (*)();
    using QPlatformSurfaceEvent_SetAccepted_Callback = void (*)(QPlatformSurfaceEvent*, bool);

  protected:
    // Instance callback storage
    QPlatformSurfaceEvent_Clone_Callback qplatformsurfaceevent_clone_callback = nullptr;
    QPlatformSurfaceEvent_SetAccepted_Callback qplatformsurfaceevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qplatformsurfaceevent_clone_isbase = false;
    mutable bool qplatformsurfaceevent_setaccepted_isbase = false;

  public:
    VirtualQPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) : QPlatformSurfaceEvent(surfaceEventType) {};

    // Callback setters
    inline void setQPlatformSurfaceEvent_Clone_Callback(QPlatformSurfaceEvent_Clone_Callback cb) { qplatformsurfaceevent_clone_callback = cb; }
    inline void setQPlatformSurfaceEvent_SetAccepted_Callback(QPlatformSurfaceEvent_SetAccepted_Callback cb) { qplatformsurfaceevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQPlatformSurfaceEvent_Clone_IsBase(bool value) const { qplatformsurfaceevent_clone_isbase = value; }
    inline void setQPlatformSurfaceEvent_SetAccepted_IsBase(bool value) const { qplatformsurfaceevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPlatformSurfaceEvent* clone() const override {
        if (qplatformsurfaceevent_clone_isbase) {
            qplatformsurfaceevent_clone_isbase = false;
            return QPlatformSurfaceEvent::clone();
        }
        auto clone_cb = qplatformsurfaceevent_clone_callback;
        if (clone_cb) {
            QPlatformSurfaceEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QPlatformSurfaceEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qplatformsurfaceevent_setaccepted_isbase) {
            qplatformsurfaceevent_setaccepted_isbase = false;
            QPlatformSurfaceEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qplatformsurfaceevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QPlatformSurfaceEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QResizeEvent so that we can call protected methods
class VirtualQResizeEvent final : public QResizeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQResizeEvent = true;

    // Virtual class public types (including callbacks)
    using QResizeEvent_Clone_Callback = QResizeEvent* (*)();
    using QResizeEvent_SetAccepted_Callback = void (*)(QResizeEvent*, bool);

  protected:
    // Instance callback storage
    QResizeEvent_Clone_Callback qresizeevent_clone_callback = nullptr;
    QResizeEvent_SetAccepted_Callback qresizeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qresizeevent_clone_isbase = false;
    mutable bool qresizeevent_setaccepted_isbase = false;

  public:
    VirtualQResizeEvent(const QSize& size, const QSize& oldSize) : QResizeEvent(size, oldSize) {};

    // Callback setters
    inline void setQResizeEvent_Clone_Callback(QResizeEvent_Clone_Callback cb) { qresizeevent_clone_callback = cb; }
    inline void setQResizeEvent_SetAccepted_Callback(QResizeEvent_SetAccepted_Callback cb) { qresizeevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQResizeEvent_Clone_IsBase(bool value) const { qresizeevent_clone_isbase = value; }
    inline void setQResizeEvent_SetAccepted_IsBase(bool value) const { qresizeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QResizeEvent* clone() const override {
        if (qresizeevent_clone_isbase) {
            qresizeevent_clone_isbase = false;
            return QResizeEvent::clone();
        }
        auto clone_cb = qresizeevent_clone_callback;
        if (clone_cb) {
            QResizeEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QResizeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qresizeevent_setaccepted_isbase) {
            qresizeevent_setaccepted_isbase = false;
            QResizeEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qresizeevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QResizeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QCloseEvent so that we can call protected methods
class VirtualQCloseEvent final : public QCloseEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQCloseEvent = true;

    // Virtual class public types (including callbacks)
    using QCloseEvent_Clone_Callback = QCloseEvent* (*)();
    using QCloseEvent_SetAccepted_Callback = void (*)(QCloseEvent*, bool);

  protected:
    // Instance callback storage
    QCloseEvent_Clone_Callback qcloseevent_clone_callback = nullptr;
    QCloseEvent_SetAccepted_Callback qcloseevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qcloseevent_clone_isbase = false;
    mutable bool qcloseevent_setaccepted_isbase = false;

  public:
    VirtualQCloseEvent() : QCloseEvent() {};

    // Callback setters
    inline void setQCloseEvent_Clone_Callback(QCloseEvent_Clone_Callback cb) { qcloseevent_clone_callback = cb; }
    inline void setQCloseEvent_SetAccepted_Callback(QCloseEvent_SetAccepted_Callback cb) { qcloseevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQCloseEvent_Clone_IsBase(bool value) const { qcloseevent_clone_isbase = value; }
    inline void setQCloseEvent_SetAccepted_IsBase(bool value) const { qcloseevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QCloseEvent* clone() const override {
        if (qcloseevent_clone_isbase) {
            qcloseevent_clone_isbase = false;
            return QCloseEvent::clone();
        }
        auto clone_cb = qcloseevent_clone_callback;
        if (clone_cb) {
            QCloseEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QCloseEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qcloseevent_setaccepted_isbase) {
            qcloseevent_setaccepted_isbase = false;
            QCloseEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qcloseevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QCloseEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QIconDragEvent so that we can call protected methods
class VirtualQIconDragEvent final : public QIconDragEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQIconDragEvent = true;

    // Virtual class public types (including callbacks)
    using QIconDragEvent_Clone_Callback = QIconDragEvent* (*)();
    using QIconDragEvent_SetAccepted_Callback = void (*)(QIconDragEvent*, bool);

  protected:
    // Instance callback storage
    QIconDragEvent_Clone_Callback qicondragevent_clone_callback = nullptr;
    QIconDragEvent_SetAccepted_Callback qicondragevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qicondragevent_clone_isbase = false;
    mutable bool qicondragevent_setaccepted_isbase = false;

  public:
    VirtualQIconDragEvent() : QIconDragEvent() {};

    // Callback setters
    inline void setQIconDragEvent_Clone_Callback(QIconDragEvent_Clone_Callback cb) { qicondragevent_clone_callback = cb; }
    inline void setQIconDragEvent_SetAccepted_Callback(QIconDragEvent_SetAccepted_Callback cb) { qicondragevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQIconDragEvent_Clone_IsBase(bool value) const { qicondragevent_clone_isbase = value; }
    inline void setQIconDragEvent_SetAccepted_IsBase(bool value) const { qicondragevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QIconDragEvent* clone() const override {
        if (qicondragevent_clone_isbase) {
            qicondragevent_clone_isbase = false;
            return QIconDragEvent::clone();
        }
        auto clone_cb = qicondragevent_clone_callback;
        if (clone_cb) {
            QIconDragEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QIconDragEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qicondragevent_setaccepted_isbase) {
            qicondragevent_setaccepted_isbase = false;
            QIconDragEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qicondragevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QIconDragEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QShowEvent so that we can call protected methods
class VirtualQShowEvent final : public QShowEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQShowEvent = true;

    // Virtual class public types (including callbacks)
    using QShowEvent_Clone_Callback = QShowEvent* (*)();
    using QShowEvent_SetAccepted_Callback = void (*)(QShowEvent*, bool);

  protected:
    // Instance callback storage
    QShowEvent_Clone_Callback qshowevent_clone_callback = nullptr;
    QShowEvent_SetAccepted_Callback qshowevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qshowevent_clone_isbase = false;
    mutable bool qshowevent_setaccepted_isbase = false;

  public:
    VirtualQShowEvent() : QShowEvent() {};

    // Callback setters
    inline void setQShowEvent_Clone_Callback(QShowEvent_Clone_Callback cb) { qshowevent_clone_callback = cb; }
    inline void setQShowEvent_SetAccepted_Callback(QShowEvent_SetAccepted_Callback cb) { qshowevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQShowEvent_Clone_IsBase(bool value) const { qshowevent_clone_isbase = value; }
    inline void setQShowEvent_SetAccepted_IsBase(bool value) const { qshowevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QShowEvent* clone() const override {
        if (qshowevent_clone_isbase) {
            qshowevent_clone_isbase = false;
            return QShowEvent::clone();
        }
        auto clone_cb = qshowevent_clone_callback;
        if (clone_cb) {
            QShowEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QShowEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qshowevent_setaccepted_isbase) {
            qshowevent_setaccepted_isbase = false;
            QShowEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qshowevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QShowEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QHideEvent so that we can call protected methods
class VirtualQHideEvent final : public QHideEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQHideEvent = true;

    // Virtual class public types (including callbacks)
    using QHideEvent_Clone_Callback = QHideEvent* (*)();
    using QHideEvent_SetAccepted_Callback = void (*)(QHideEvent*, bool);

  protected:
    // Instance callback storage
    QHideEvent_Clone_Callback qhideevent_clone_callback = nullptr;
    QHideEvent_SetAccepted_Callback qhideevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qhideevent_clone_isbase = false;
    mutable bool qhideevent_setaccepted_isbase = false;

  public:
    VirtualQHideEvent() : QHideEvent() {};

    // Callback setters
    inline void setQHideEvent_Clone_Callback(QHideEvent_Clone_Callback cb) { qhideevent_clone_callback = cb; }
    inline void setQHideEvent_SetAccepted_Callback(QHideEvent_SetAccepted_Callback cb) { qhideevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQHideEvent_Clone_IsBase(bool value) const { qhideevent_clone_isbase = value; }
    inline void setQHideEvent_SetAccepted_IsBase(bool value) const { qhideevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QHideEvent* clone() const override {
        if (qhideevent_clone_isbase) {
            qhideevent_clone_isbase = false;
            return QHideEvent::clone();
        }
        auto clone_cb = qhideevent_clone_callback;
        if (clone_cb) {
            QHideEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QHideEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhideevent_setaccepted_isbase) {
            qhideevent_setaccepted_isbase = false;
            QHideEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qhideevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QHideEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QContextMenuEvent so that we can call protected methods
class VirtualQContextMenuEvent final : public QContextMenuEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQContextMenuEvent = true;

    // Virtual class public types (including callbacks)
    using QContextMenuEvent_Clone_Callback = QContextMenuEvent* (*)();
    using QContextMenuEvent_SetTimestamp_Callback = void (*)(QContextMenuEvent*, unsigned long long);
    using QContextMenuEvent_SetAccepted_Callback = void (*)(QContextMenuEvent*, bool);

  protected:
    // Instance callback storage
    QContextMenuEvent_Clone_Callback qcontextmenuevent_clone_callback = nullptr;
    QContextMenuEvent_SetTimestamp_Callback qcontextmenuevent_settimestamp_callback = nullptr;
    QContextMenuEvent_SetAccepted_Callback qcontextmenuevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qcontextmenuevent_clone_isbase = false;
    mutable bool qcontextmenuevent_settimestamp_isbase = false;
    mutable bool qcontextmenuevent_setaccepted_isbase = false;

  public:
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos) : QContextMenuEvent(reason, pos, globalPos) {};
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos) : QContextMenuEvent(reason, pos) {};
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos, Qt::KeyboardModifiers modifiers) : QContextMenuEvent(reason, pos, globalPos, modifiers) {};

    // Callback setters
    inline void setQContextMenuEvent_Clone_Callback(QContextMenuEvent_Clone_Callback cb) { qcontextmenuevent_clone_callback = cb; }
    inline void setQContextMenuEvent_SetTimestamp_Callback(QContextMenuEvent_SetTimestamp_Callback cb) { qcontextmenuevent_settimestamp_callback = cb; }
    inline void setQContextMenuEvent_SetAccepted_Callback(QContextMenuEvent_SetAccepted_Callback cb) { qcontextmenuevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQContextMenuEvent_Clone_IsBase(bool value) const { qcontextmenuevent_clone_isbase = value; }
    inline void setQContextMenuEvent_SetTimestamp_IsBase(bool value) const { qcontextmenuevent_settimestamp_isbase = value; }
    inline void setQContextMenuEvent_SetAccepted_IsBase(bool value) const { qcontextmenuevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QContextMenuEvent* clone() const override {
        if (qcontextmenuevent_clone_isbase) {
            qcontextmenuevent_clone_isbase = false;
            return QContextMenuEvent::clone();
        }
        auto clone_cb = qcontextmenuevent_clone_callback;
        if (clone_cb) {
            QContextMenuEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QContextMenuEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qcontextmenuevent_settimestamp_isbase) {
            qcontextmenuevent_settimestamp_isbase = false;
            QContextMenuEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qcontextmenuevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QContextMenuEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qcontextmenuevent_setaccepted_isbase) {
            qcontextmenuevent_setaccepted_isbase = false;
            QContextMenuEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qcontextmenuevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QContextMenuEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QInputMethodEvent so that we can call protected methods
class VirtualQInputMethodEvent final : public QInputMethodEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQInputMethodEvent = true;

    // Virtual class public types (including callbacks)
    using QInputMethodEvent_Clone_Callback = QInputMethodEvent* (*)();
    using QInputMethodEvent_SetAccepted_Callback = void (*)(QInputMethodEvent*, bool);

  protected:
    // Instance callback storage
    QInputMethodEvent_Clone_Callback qinputmethodevent_clone_callback = nullptr;
    QInputMethodEvent_SetAccepted_Callback qinputmethodevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qinputmethodevent_clone_isbase = false;
    mutable bool qinputmethodevent_setaccepted_isbase = false;

  public:
    VirtualQInputMethodEvent() : QInputMethodEvent() {};
    VirtualQInputMethodEvent(const QString& preeditText, const QList<QInputMethodEvent::Attribute>& attributes) : QInputMethodEvent(preeditText, attributes) {};

    // Callback setters
    inline void setQInputMethodEvent_Clone_Callback(QInputMethodEvent_Clone_Callback cb) { qinputmethodevent_clone_callback = cb; }
    inline void setQInputMethodEvent_SetAccepted_Callback(QInputMethodEvent_SetAccepted_Callback cb) { qinputmethodevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQInputMethodEvent_Clone_IsBase(bool value) const { qinputmethodevent_clone_isbase = value; }
    inline void setQInputMethodEvent_SetAccepted_IsBase(bool value) const { qinputmethodevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QInputMethodEvent* clone() const override {
        if (qinputmethodevent_clone_isbase) {
            qinputmethodevent_clone_isbase = false;
            return QInputMethodEvent::clone();
        }
        auto clone_cb = qinputmethodevent_clone_callback;
        if (clone_cb) {
            QInputMethodEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QInputMethodEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputmethodevent_setaccepted_isbase) {
            qinputmethodevent_setaccepted_isbase = false;
            QInputMethodEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qinputmethodevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QInputMethodEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QInputMethodQueryEvent so that we can call protected methods
class VirtualQInputMethodQueryEvent final : public QInputMethodQueryEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQInputMethodQueryEvent = true;

    // Virtual class public types (including callbacks)
    using QInputMethodQueryEvent_Clone_Callback = QInputMethodQueryEvent* (*)();
    using QInputMethodQueryEvent_SetAccepted_Callback = void (*)(QInputMethodQueryEvent*, bool);

  protected:
    // Instance callback storage
    QInputMethodQueryEvent_Clone_Callback qinputmethodqueryevent_clone_callback = nullptr;
    QInputMethodQueryEvent_SetAccepted_Callback qinputmethodqueryevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qinputmethodqueryevent_clone_isbase = false;
    mutable bool qinputmethodqueryevent_setaccepted_isbase = false;

  public:
    VirtualQInputMethodQueryEvent(Qt::InputMethodQueries queries) : QInputMethodQueryEvent(queries) {};

    // Callback setters
    inline void setQInputMethodQueryEvent_Clone_Callback(QInputMethodQueryEvent_Clone_Callback cb) { qinputmethodqueryevent_clone_callback = cb; }
    inline void setQInputMethodQueryEvent_SetAccepted_Callback(QInputMethodQueryEvent_SetAccepted_Callback cb) { qinputmethodqueryevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQInputMethodQueryEvent_Clone_IsBase(bool value) const { qinputmethodqueryevent_clone_isbase = value; }
    inline void setQInputMethodQueryEvent_SetAccepted_IsBase(bool value) const { qinputmethodqueryevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QInputMethodQueryEvent* clone() const override {
        if (qinputmethodqueryevent_clone_isbase) {
            qinputmethodqueryevent_clone_isbase = false;
            return QInputMethodQueryEvent::clone();
        }
        auto clone_cb = qinputmethodqueryevent_clone_callback;
        if (clone_cb) {
            QInputMethodQueryEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QInputMethodQueryEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputmethodqueryevent_setaccepted_isbase) {
            qinputmethodqueryevent_setaccepted_isbase = false;
            QInputMethodQueryEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qinputmethodqueryevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QInputMethodQueryEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDropEvent so that we can call protected methods
class VirtualQDropEvent final : public QDropEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQDropEvent = true;

    // Virtual class public types (including callbacks)
    using QDropEvent_Clone_Callback = QDropEvent* (*)();
    using QDropEvent_SetAccepted_Callback = void (*)(QDropEvent*, bool);

  protected:
    // Instance callback storage
    QDropEvent_Clone_Callback qdropevent_clone_callback = nullptr;
    QDropEvent_SetAccepted_Callback qdropevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdropevent_clone_isbase = false;
    mutable bool qdropevent_setaccepted_isbase = false;

  public:
    VirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDropEvent(pos, actions, data, buttons, modifiers) {};
    VirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal) : QDropEvent(pos, actions, data, buttons, modifiers, typeVal) {};

    // Callback setters
    inline void setQDropEvent_Clone_Callback(QDropEvent_Clone_Callback cb) { qdropevent_clone_callback = cb; }
    inline void setQDropEvent_SetAccepted_Callback(QDropEvent_SetAccepted_Callback cb) { qdropevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQDropEvent_Clone_IsBase(bool value) const { qdropevent_clone_isbase = value; }
    inline void setQDropEvent_SetAccepted_IsBase(bool value) const { qdropevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDropEvent* clone() const override {
        if (qdropevent_clone_isbase) {
            qdropevent_clone_isbase = false;
            return QDropEvent::clone();
        }
        auto clone_cb = qdropevent_clone_callback;
        if (clone_cb) {
            QDropEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QDropEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdropevent_setaccepted_isbase) {
            qdropevent_setaccepted_isbase = false;
            QDropEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qdropevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QDropEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDragMoveEvent so that we can call protected methods
class VirtualQDragMoveEvent final : public QDragMoveEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQDragMoveEvent = true;

    // Virtual class public types (including callbacks)
    using QDragMoveEvent_Clone_Callback = QDragMoveEvent* (*)();
    using QDragMoveEvent_SetAccepted_Callback = void (*)(QDragMoveEvent*, bool);

  protected:
    // Instance callback storage
    QDragMoveEvent_Clone_Callback qdragmoveevent_clone_callback = nullptr;
    QDragMoveEvent_SetAccepted_Callback qdragmoveevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdragmoveevent_clone_isbase = false;
    mutable bool qdragmoveevent_setaccepted_isbase = false;

  public:
    VirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDragMoveEvent(pos, actions, data, buttons, modifiers) {};
    VirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal) : QDragMoveEvent(pos, actions, data, buttons, modifiers, typeVal) {};

    // Callback setters
    inline void setQDragMoveEvent_Clone_Callback(QDragMoveEvent_Clone_Callback cb) { qdragmoveevent_clone_callback = cb; }
    inline void setQDragMoveEvent_SetAccepted_Callback(QDragMoveEvent_SetAccepted_Callback cb) { qdragmoveevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQDragMoveEvent_Clone_IsBase(bool value) const { qdragmoveevent_clone_isbase = value; }
    inline void setQDragMoveEvent_SetAccepted_IsBase(bool value) const { qdragmoveevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDragMoveEvent* clone() const override {
        if (qdragmoveevent_clone_isbase) {
            qdragmoveevent_clone_isbase = false;
            return QDragMoveEvent::clone();
        }
        auto clone_cb = qdragmoveevent_clone_callback;
        if (clone_cb) {
            QDragMoveEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QDragMoveEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragmoveevent_setaccepted_isbase) {
            qdragmoveevent_setaccepted_isbase = false;
            QDragMoveEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qdragmoveevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QDragMoveEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDragEnterEvent so that we can call protected methods
class VirtualQDragEnterEvent final : public QDragEnterEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQDragEnterEvent = true;

    // Virtual class public types (including callbacks)
    using QDragEnterEvent_Clone_Callback = QDragEnterEvent* (*)();
    using QDragEnterEvent_SetAccepted_Callback = void (*)(QDragEnterEvent*, bool);

  protected:
    // Instance callback storage
    QDragEnterEvent_Clone_Callback qdragenterevent_clone_callback = nullptr;
    QDragEnterEvent_SetAccepted_Callback qdragenterevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdragenterevent_clone_isbase = false;
    mutable bool qdragenterevent_setaccepted_isbase = false;

  public:
    VirtualQDragEnterEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDragEnterEvent(pos, actions, data, buttons, modifiers) {};

    // Callback setters
    inline void setQDragEnterEvent_Clone_Callback(QDragEnterEvent_Clone_Callback cb) { qdragenterevent_clone_callback = cb; }
    inline void setQDragEnterEvent_SetAccepted_Callback(QDragEnterEvent_SetAccepted_Callback cb) { qdragenterevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQDragEnterEvent_Clone_IsBase(bool value) const { qdragenterevent_clone_isbase = value; }
    inline void setQDragEnterEvent_SetAccepted_IsBase(bool value) const { qdragenterevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDragEnterEvent* clone() const override {
        if (qdragenterevent_clone_isbase) {
            qdragenterevent_clone_isbase = false;
            return QDragEnterEvent::clone();
        }
        auto clone_cb = qdragenterevent_clone_callback;
        if (clone_cb) {
            QDragEnterEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QDragEnterEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragenterevent_setaccepted_isbase) {
            qdragenterevent_setaccepted_isbase = false;
            QDragEnterEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qdragenterevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QDragEnterEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDragLeaveEvent so that we can call protected methods
class VirtualQDragLeaveEvent final : public QDragLeaveEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQDragLeaveEvent = true;

    // Virtual class public types (including callbacks)
    using QDragLeaveEvent_Clone_Callback = QDragLeaveEvent* (*)();
    using QDragLeaveEvent_SetAccepted_Callback = void (*)(QDragLeaveEvent*, bool);

  protected:
    // Instance callback storage
    QDragLeaveEvent_Clone_Callback qdragleaveevent_clone_callback = nullptr;
    QDragLeaveEvent_SetAccepted_Callback qdragleaveevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qdragleaveevent_clone_isbase = false;
    mutable bool qdragleaveevent_setaccepted_isbase = false;

  public:
    VirtualQDragLeaveEvent() : QDragLeaveEvent() {};

    // Callback setters
    inline void setQDragLeaveEvent_Clone_Callback(QDragLeaveEvent_Clone_Callback cb) { qdragleaveevent_clone_callback = cb; }
    inline void setQDragLeaveEvent_SetAccepted_Callback(QDragLeaveEvent_SetAccepted_Callback cb) { qdragleaveevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQDragLeaveEvent_Clone_IsBase(bool value) const { qdragleaveevent_clone_isbase = value; }
    inline void setQDragLeaveEvent_SetAccepted_IsBase(bool value) const { qdragleaveevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QDragLeaveEvent* clone() const override {
        if (qdragleaveevent_clone_isbase) {
            qdragleaveevent_clone_isbase = false;
            return QDragLeaveEvent::clone();
        }
        auto clone_cb = qdragleaveevent_clone_callback;
        if (clone_cb) {
            QDragLeaveEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QDragLeaveEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragleaveevent_setaccepted_isbase) {
            qdragleaveevent_setaccepted_isbase = false;
            QDragLeaveEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qdragleaveevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QDragLeaveEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QHelpEvent so that we can call protected methods
class VirtualQHelpEvent final : public QHelpEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQHelpEvent = true;

    // Virtual class public types (including callbacks)
    using QHelpEvent_Clone_Callback = QHelpEvent* (*)();
    using QHelpEvent_SetAccepted_Callback = void (*)(QHelpEvent*, bool);

  protected:
    // Instance callback storage
    QHelpEvent_Clone_Callback qhelpevent_clone_callback = nullptr;
    QHelpEvent_SetAccepted_Callback qhelpevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qhelpevent_clone_isbase = false;
    mutable bool qhelpevent_setaccepted_isbase = false;

  public:
    VirtualQHelpEvent(QEvent::Type typeVal, const QPoint& pos, const QPoint& globalPos) : QHelpEvent(typeVal, pos, globalPos) {};

    // Callback setters
    inline void setQHelpEvent_Clone_Callback(QHelpEvent_Clone_Callback cb) { qhelpevent_clone_callback = cb; }
    inline void setQHelpEvent_SetAccepted_Callback(QHelpEvent_SetAccepted_Callback cb) { qhelpevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQHelpEvent_Clone_IsBase(bool value) const { qhelpevent_clone_isbase = value; }
    inline void setQHelpEvent_SetAccepted_IsBase(bool value) const { qhelpevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QHelpEvent* clone() const override {
        if (qhelpevent_clone_isbase) {
            qhelpevent_clone_isbase = false;
            return QHelpEvent::clone();
        }
        auto clone_cb = qhelpevent_clone_callback;
        if (clone_cb) {
            QHelpEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QHelpEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhelpevent_setaccepted_isbase) {
            qhelpevent_setaccepted_isbase = false;
            QHelpEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qhelpevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QHelpEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QStatusTipEvent so that we can call protected methods
class VirtualQStatusTipEvent final : public QStatusTipEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQStatusTipEvent = true;

    // Virtual class public types (including callbacks)
    using QStatusTipEvent_Clone_Callback = QStatusTipEvent* (*)();
    using QStatusTipEvent_SetAccepted_Callback = void (*)(QStatusTipEvent*, bool);

  protected:
    // Instance callback storage
    QStatusTipEvent_Clone_Callback qstatustipevent_clone_callback = nullptr;
    QStatusTipEvent_SetAccepted_Callback qstatustipevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qstatustipevent_clone_isbase = false;
    mutable bool qstatustipevent_setaccepted_isbase = false;

  public:
    VirtualQStatusTipEvent(const QString& tip) : QStatusTipEvent(tip) {};

    // Callback setters
    inline void setQStatusTipEvent_Clone_Callback(QStatusTipEvent_Clone_Callback cb) { qstatustipevent_clone_callback = cb; }
    inline void setQStatusTipEvent_SetAccepted_Callback(QStatusTipEvent_SetAccepted_Callback cb) { qstatustipevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQStatusTipEvent_Clone_IsBase(bool value) const { qstatustipevent_clone_isbase = value; }
    inline void setQStatusTipEvent_SetAccepted_IsBase(bool value) const { qstatustipevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QStatusTipEvent* clone() const override {
        if (qstatustipevent_clone_isbase) {
            qstatustipevent_clone_isbase = false;
            return QStatusTipEvent::clone();
        }
        auto clone_cb = qstatustipevent_clone_callback;
        if (clone_cb) {
            QStatusTipEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QStatusTipEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qstatustipevent_setaccepted_isbase) {
            qstatustipevent_setaccepted_isbase = false;
            QStatusTipEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qstatustipevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QStatusTipEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QWhatsThisClickedEvent so that we can call protected methods
class VirtualQWhatsThisClickedEvent final : public QWhatsThisClickedEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQWhatsThisClickedEvent = true;

    // Virtual class public types (including callbacks)
    using QWhatsThisClickedEvent_Clone_Callback = QWhatsThisClickedEvent* (*)();
    using QWhatsThisClickedEvent_SetAccepted_Callback = void (*)(QWhatsThisClickedEvent*, bool);

  protected:
    // Instance callback storage
    QWhatsThisClickedEvent_Clone_Callback qwhatsthisclickedevent_clone_callback = nullptr;
    QWhatsThisClickedEvent_SetAccepted_Callback qwhatsthisclickedevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qwhatsthisclickedevent_clone_isbase = false;
    mutable bool qwhatsthisclickedevent_setaccepted_isbase = false;

  public:
    VirtualQWhatsThisClickedEvent(const QString& href) : QWhatsThisClickedEvent(href) {};

    // Callback setters
    inline void setQWhatsThisClickedEvent_Clone_Callback(QWhatsThisClickedEvent_Clone_Callback cb) { qwhatsthisclickedevent_clone_callback = cb; }
    inline void setQWhatsThisClickedEvent_SetAccepted_Callback(QWhatsThisClickedEvent_SetAccepted_Callback cb) { qwhatsthisclickedevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQWhatsThisClickedEvent_Clone_IsBase(bool value) const { qwhatsthisclickedevent_clone_isbase = value; }
    inline void setQWhatsThisClickedEvent_SetAccepted_IsBase(bool value) const { qwhatsthisclickedevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWhatsThisClickedEvent* clone() const override {
        if (qwhatsthisclickedevent_clone_isbase) {
            qwhatsthisclickedevent_clone_isbase = false;
            return QWhatsThisClickedEvent::clone();
        }
        auto clone_cb = qwhatsthisclickedevent_clone_callback;
        if (clone_cb) {
            QWhatsThisClickedEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QWhatsThisClickedEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwhatsthisclickedevent_setaccepted_isbase) {
            qwhatsthisclickedevent_setaccepted_isbase = false;
            QWhatsThisClickedEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qwhatsthisclickedevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QWhatsThisClickedEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QActionEvent so that we can call protected methods
class VirtualQActionEvent final : public QActionEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQActionEvent = true;

    // Virtual class public types (including callbacks)
    using QActionEvent_Clone_Callback = QActionEvent* (*)();
    using QActionEvent_SetAccepted_Callback = void (*)(QActionEvent*, bool);

  protected:
    // Instance callback storage
    QActionEvent_Clone_Callback qactionevent_clone_callback = nullptr;
    QActionEvent_SetAccepted_Callback qactionevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qactionevent_clone_isbase = false;
    mutable bool qactionevent_setaccepted_isbase = false;

  public:
    VirtualQActionEvent(int typeVal, QAction* action) : QActionEvent(typeVal, action) {};
    VirtualQActionEvent(int typeVal, QAction* action, QAction* before) : QActionEvent(typeVal, action, before) {};

    // Callback setters
    inline void setQActionEvent_Clone_Callback(QActionEvent_Clone_Callback cb) { qactionevent_clone_callback = cb; }
    inline void setQActionEvent_SetAccepted_Callback(QActionEvent_SetAccepted_Callback cb) { qactionevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQActionEvent_Clone_IsBase(bool value) const { qactionevent_clone_isbase = value; }
    inline void setQActionEvent_SetAccepted_IsBase(bool value) const { qactionevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QActionEvent* clone() const override {
        if (qactionevent_clone_isbase) {
            qactionevent_clone_isbase = false;
            return QActionEvent::clone();
        }
        auto clone_cb = qactionevent_clone_callback;
        if (clone_cb) {
            QActionEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QActionEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qactionevent_setaccepted_isbase) {
            qactionevent_setaccepted_isbase = false;
            QActionEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qactionevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QActionEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QFileOpenEvent so that we can call protected methods
class VirtualQFileOpenEvent final : public QFileOpenEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQFileOpenEvent = true;

    // Virtual class public types (including callbacks)
    using QFileOpenEvent_Clone_Callback = QFileOpenEvent* (*)();
    using QFileOpenEvent_SetAccepted_Callback = void (*)(QFileOpenEvent*, bool);

  protected:
    // Instance callback storage
    QFileOpenEvent_Clone_Callback qfileopenevent_clone_callback = nullptr;
    QFileOpenEvent_SetAccepted_Callback qfileopenevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qfileopenevent_clone_isbase = false;
    mutable bool qfileopenevent_setaccepted_isbase = false;

  public:
    VirtualQFileOpenEvent(const QString& file) : QFileOpenEvent(file) {};
    VirtualQFileOpenEvent(const QUrl& url) : QFileOpenEvent(url) {};

    // Callback setters
    inline void setQFileOpenEvent_Clone_Callback(QFileOpenEvent_Clone_Callback cb) { qfileopenevent_clone_callback = cb; }
    inline void setQFileOpenEvent_SetAccepted_Callback(QFileOpenEvent_SetAccepted_Callback cb) { qfileopenevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQFileOpenEvent_Clone_IsBase(bool value) const { qfileopenevent_clone_isbase = value; }
    inline void setQFileOpenEvent_SetAccepted_IsBase(bool value) const { qfileopenevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QFileOpenEvent* clone() const override {
        if (qfileopenevent_clone_isbase) {
            qfileopenevent_clone_isbase = false;
            return QFileOpenEvent::clone();
        }
        auto clone_cb = qfileopenevent_clone_callback;
        if (clone_cb) {
            QFileOpenEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QFileOpenEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qfileopenevent_setaccepted_isbase) {
            qfileopenevent_setaccepted_isbase = false;
            QFileOpenEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qfileopenevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QFileOpenEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QToolBarChangeEvent so that we can call protected methods
class VirtualQToolBarChangeEvent final : public QToolBarChangeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQToolBarChangeEvent = true;

    // Virtual class public types (including callbacks)
    using QToolBarChangeEvent_Clone_Callback = QToolBarChangeEvent* (*)();
    using QToolBarChangeEvent_SetAccepted_Callback = void (*)(QToolBarChangeEvent*, bool);

  protected:
    // Instance callback storage
    QToolBarChangeEvent_Clone_Callback qtoolbarchangeevent_clone_callback = nullptr;
    QToolBarChangeEvent_SetAccepted_Callback qtoolbarchangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qtoolbarchangeevent_clone_isbase = false;
    mutable bool qtoolbarchangeevent_setaccepted_isbase = false;

  public:
    VirtualQToolBarChangeEvent(bool t) : QToolBarChangeEvent(t) {};

    // Callback setters
    inline void setQToolBarChangeEvent_Clone_Callback(QToolBarChangeEvent_Clone_Callback cb) { qtoolbarchangeevent_clone_callback = cb; }
    inline void setQToolBarChangeEvent_SetAccepted_Callback(QToolBarChangeEvent_SetAccepted_Callback cb) { qtoolbarchangeevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQToolBarChangeEvent_Clone_IsBase(bool value) const { qtoolbarchangeevent_clone_isbase = value; }
    inline void setQToolBarChangeEvent_SetAccepted_IsBase(bool value) const { qtoolbarchangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QToolBarChangeEvent* clone() const override {
        if (qtoolbarchangeevent_clone_isbase) {
            qtoolbarchangeevent_clone_isbase = false;
            return QToolBarChangeEvent::clone();
        }
        auto clone_cb = qtoolbarchangeevent_clone_callback;
        if (clone_cb) {
            QToolBarChangeEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QToolBarChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtoolbarchangeevent_setaccepted_isbase) {
            qtoolbarchangeevent_setaccepted_isbase = false;
            QToolBarChangeEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qtoolbarchangeevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QToolBarChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QShortcutEvent so that we can call protected methods
class VirtualQShortcutEvent final : public QShortcutEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQShortcutEvent = true;

    // Virtual class public types (including callbacks)
    using QShortcutEvent_Clone_Callback = QShortcutEvent* (*)();
    using QShortcutEvent_SetAccepted_Callback = void (*)(QShortcutEvent*, bool);

  protected:
    // Instance callback storage
    QShortcutEvent_Clone_Callback qshortcutevent_clone_callback = nullptr;
    QShortcutEvent_SetAccepted_Callback qshortcutevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qshortcutevent_clone_isbase = false;
    mutable bool qshortcutevent_setaccepted_isbase = false;

  public:
    VirtualQShortcutEvent(const QKeySequence& key, int id) : QShortcutEvent(key, id) {};
    VirtualQShortcutEvent(const QKeySequence& key) : QShortcutEvent(key) {};
    VirtualQShortcutEvent(const QKeySequence& key, int id, bool ambiguous) : QShortcutEvent(key, id, ambiguous) {};
    VirtualQShortcutEvent(const QKeySequence& key, const QShortcut* shortcut) : QShortcutEvent(key, shortcut) {};
    VirtualQShortcutEvent(const QKeySequence& key, const QShortcut* shortcut, bool ambiguous) : QShortcutEvent(key, shortcut, ambiguous) {};

    // Callback setters
    inline void setQShortcutEvent_Clone_Callback(QShortcutEvent_Clone_Callback cb) { qshortcutevent_clone_callback = cb; }
    inline void setQShortcutEvent_SetAccepted_Callback(QShortcutEvent_SetAccepted_Callback cb) { qshortcutevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQShortcutEvent_Clone_IsBase(bool value) const { qshortcutevent_clone_isbase = value; }
    inline void setQShortcutEvent_SetAccepted_IsBase(bool value) const { qshortcutevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QShortcutEvent* clone() const override {
        if (qshortcutevent_clone_isbase) {
            qshortcutevent_clone_isbase = false;
            return QShortcutEvent::clone();
        }
        auto clone_cb = qshortcutevent_clone_callback;
        if (clone_cb) {
            QShortcutEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QShortcutEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qshortcutevent_setaccepted_isbase) {
            qshortcutevent_setaccepted_isbase = false;
            QShortcutEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qshortcutevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QShortcutEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QWindowStateChangeEvent so that we can call protected methods
class VirtualQWindowStateChangeEvent final : public QWindowStateChangeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQWindowStateChangeEvent = true;

    // Virtual class public types (including callbacks)
    using QWindowStateChangeEvent_Clone_Callback = QWindowStateChangeEvent* (*)();
    using QWindowStateChangeEvent_SetAccepted_Callback = void (*)(QWindowStateChangeEvent*, bool);

  protected:
    // Instance callback storage
    QWindowStateChangeEvent_Clone_Callback qwindowstatechangeevent_clone_callback = nullptr;
    QWindowStateChangeEvent_SetAccepted_Callback qwindowstatechangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qwindowstatechangeevent_clone_isbase = false;
    mutable bool qwindowstatechangeevent_setaccepted_isbase = false;

  public:
    VirtualQWindowStateChangeEvent(Qt::WindowStates oldState) : QWindowStateChangeEvent(oldState) {};
    VirtualQWindowStateChangeEvent(Qt::WindowStates oldState, bool isOverride) : QWindowStateChangeEvent(oldState, isOverride) {};

    // Callback setters
    inline void setQWindowStateChangeEvent_Clone_Callback(QWindowStateChangeEvent_Clone_Callback cb) { qwindowstatechangeevent_clone_callback = cb; }
    inline void setQWindowStateChangeEvent_SetAccepted_Callback(QWindowStateChangeEvent_SetAccepted_Callback cb) { qwindowstatechangeevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQWindowStateChangeEvent_Clone_IsBase(bool value) const { qwindowstatechangeevent_clone_isbase = value; }
    inline void setQWindowStateChangeEvent_SetAccepted_IsBase(bool value) const { qwindowstatechangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWindowStateChangeEvent* clone() const override {
        if (qwindowstatechangeevent_clone_isbase) {
            qwindowstatechangeevent_clone_isbase = false;
            return QWindowStateChangeEvent::clone();
        }
        auto clone_cb = qwindowstatechangeevent_clone_callback;
        if (clone_cb) {
            QWindowStateChangeEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QWindowStateChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwindowstatechangeevent_setaccepted_isbase) {
            qwindowstatechangeevent_setaccepted_isbase = false;
            QWindowStateChangeEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qwindowstatechangeevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QWindowStateChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QTouchEvent so that we can call protected methods
class VirtualQTouchEvent final : public QTouchEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQTouchEvent = true;

    // Virtual class public types (including callbacks)
    using QTouchEvent_Clone_Callback = QTouchEvent* (*)();
    using QTouchEvent_IsBeginEvent_Callback = bool (*)();
    using QTouchEvent_IsUpdateEvent_Callback = bool (*)();
    using QTouchEvent_IsEndEvent_Callback = bool (*)();
    using QTouchEvent_SetTimestamp_Callback = void (*)(QTouchEvent*, unsigned long long);
    using QTouchEvent_SetAccepted_Callback = void (*)(QTouchEvent*, bool);

  protected:
    // Instance callback storage
    QTouchEvent_Clone_Callback qtouchevent_clone_callback = nullptr;
    QTouchEvent_IsBeginEvent_Callback qtouchevent_isbeginevent_callback = nullptr;
    QTouchEvent_IsUpdateEvent_Callback qtouchevent_isupdateevent_callback = nullptr;
    QTouchEvent_IsEndEvent_Callback qtouchevent_isendevent_callback = nullptr;
    QTouchEvent_SetTimestamp_Callback qtouchevent_settimestamp_callback = nullptr;
    QTouchEvent_SetAccepted_Callback qtouchevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qtouchevent_clone_isbase = false;
    mutable bool qtouchevent_isbeginevent_isbase = false;
    mutable bool qtouchevent_isupdateevent_isbase = false;
    mutable bool qtouchevent_isendevent_isbase = false;
    mutable bool qtouchevent_settimestamp_isbase = false;
    mutable bool qtouchevent_setaccepted_isbase = false;

  public:
    VirtualQTouchEvent(QEvent::Type eventType) : QTouchEvent(eventType) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates) : QTouchEvent(eventType, device, modifiers, touchPointStates) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device) : QTouchEvent(eventType, device) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers) : QTouchEvent(eventType, device, modifiers) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& touchPoints) : QTouchEvent(eventType, device, modifiers, touchPoints) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates, const QList<QEventPoint>& touchPoints) : QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints) {};

    // Callback setters
    inline void setQTouchEvent_Clone_Callback(QTouchEvent_Clone_Callback cb) { qtouchevent_clone_callback = cb; }
    inline void setQTouchEvent_IsBeginEvent_Callback(QTouchEvent_IsBeginEvent_Callback cb) { qtouchevent_isbeginevent_callback = cb; }
    inline void setQTouchEvent_IsUpdateEvent_Callback(QTouchEvent_IsUpdateEvent_Callback cb) { qtouchevent_isupdateevent_callback = cb; }
    inline void setQTouchEvent_IsEndEvent_Callback(QTouchEvent_IsEndEvent_Callback cb) { qtouchevent_isendevent_callback = cb; }
    inline void setQTouchEvent_SetTimestamp_Callback(QTouchEvent_SetTimestamp_Callback cb) { qtouchevent_settimestamp_callback = cb; }
    inline void setQTouchEvent_SetAccepted_Callback(QTouchEvent_SetAccepted_Callback cb) { qtouchevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQTouchEvent_Clone_IsBase(bool value) const { qtouchevent_clone_isbase = value; }
    inline void setQTouchEvent_IsBeginEvent_IsBase(bool value) const { qtouchevent_isbeginevent_isbase = value; }
    inline void setQTouchEvent_IsUpdateEvent_IsBase(bool value) const { qtouchevent_isupdateevent_isbase = value; }
    inline void setQTouchEvent_IsEndEvent_IsBase(bool value) const { qtouchevent_isendevent_isbase = value; }
    inline void setQTouchEvent_SetTimestamp_IsBase(bool value) const { qtouchevent_settimestamp_isbase = value; }
    inline void setQTouchEvent_SetAccepted_IsBase(bool value) const { qtouchevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QTouchEvent* clone() const override {
        if (qtouchevent_clone_isbase) {
            qtouchevent_clone_isbase = false;
            return QTouchEvent::clone();
        }
        auto clone_cb = qtouchevent_clone_callback;
        if (clone_cb) {
            QTouchEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QTouchEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qtouchevent_isbeginevent_isbase) {
            qtouchevent_isbeginevent_isbase = false;
            return QTouchEvent::isBeginEvent();
        }
        auto isbeginevent_cb = qtouchevent_isbeginevent_callback;
        if (isbeginevent_cb) {
            bool callback_ret = isbeginevent_cb();
            return callback_ret;
        }
        return QTouchEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qtouchevent_isupdateevent_isbase) {
            qtouchevent_isupdateevent_isbase = false;
            return QTouchEvent::isUpdateEvent();
        }
        auto isupdateevent_cb = qtouchevent_isupdateevent_callback;
        if (isupdateevent_cb) {
            bool callback_ret = isupdateevent_cb();
            return callback_ret;
        }
        return QTouchEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qtouchevent_isendevent_isbase) {
            qtouchevent_isendevent_isbase = false;
            return QTouchEvent::isEndEvent();
        }
        auto isendevent_cb = qtouchevent_isendevent_callback;
        if (isendevent_cb) {
            bool callback_ret = isendevent_cb();
            return callback_ret;
        }
        return QTouchEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qtouchevent_settimestamp_isbase) {
            qtouchevent_settimestamp_isbase = false;
            QTouchEvent::setTimestamp(timestamp);
            return;
        }
        auto settimestamp_cb = qtouchevent_settimestamp_callback;
        if (settimestamp_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);

            settimestamp_cb(this, cbval1);
            return;
        }
        QTouchEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtouchevent_setaccepted_isbase) {
            qtouchevent_setaccepted_isbase = false;
            QTouchEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qtouchevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QTouchEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QScrollPrepareEvent so that we can call protected methods
class VirtualQScrollPrepareEvent final : public QScrollPrepareEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQScrollPrepareEvent = true;

    // Virtual class public types (including callbacks)
    using QScrollPrepareEvent_Clone_Callback = QScrollPrepareEvent* (*)();
    using QScrollPrepareEvent_SetAccepted_Callback = void (*)(QScrollPrepareEvent*, bool);

  protected:
    // Instance callback storage
    QScrollPrepareEvent_Clone_Callback qscrollprepareevent_clone_callback = nullptr;
    QScrollPrepareEvent_SetAccepted_Callback qscrollprepareevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qscrollprepareevent_clone_isbase = false;
    mutable bool qscrollprepareevent_setaccepted_isbase = false;

  public:
    VirtualQScrollPrepareEvent(const QPointF& startPos) : QScrollPrepareEvent(startPos) {};

    // Callback setters
    inline void setQScrollPrepareEvent_Clone_Callback(QScrollPrepareEvent_Clone_Callback cb) { qscrollprepareevent_clone_callback = cb; }
    inline void setQScrollPrepareEvent_SetAccepted_Callback(QScrollPrepareEvent_SetAccepted_Callback cb) { qscrollprepareevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQScrollPrepareEvent_Clone_IsBase(bool value) const { qscrollprepareevent_clone_isbase = value; }
    inline void setQScrollPrepareEvent_SetAccepted_IsBase(bool value) const { qscrollprepareevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QScrollPrepareEvent* clone() const override {
        if (qscrollprepareevent_clone_isbase) {
            qscrollprepareevent_clone_isbase = false;
            return QScrollPrepareEvent::clone();
        }
        auto clone_cb = qscrollprepareevent_clone_callback;
        if (clone_cb) {
            QScrollPrepareEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QScrollPrepareEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscrollprepareevent_setaccepted_isbase) {
            qscrollprepareevent_setaccepted_isbase = false;
            QScrollPrepareEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qscrollprepareevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QScrollPrepareEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QScrollEvent so that we can call protected methods
class VirtualQScrollEvent final : public QScrollEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQScrollEvent = true;

    // Virtual class public types (including callbacks)
    using QScrollEvent_Clone_Callback = QScrollEvent* (*)();
    using QScrollEvent_SetAccepted_Callback = void (*)(QScrollEvent*, bool);

  protected:
    // Instance callback storage
    QScrollEvent_Clone_Callback qscrollevent_clone_callback = nullptr;
    QScrollEvent_SetAccepted_Callback qscrollevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qscrollevent_clone_isbase = false;
    mutable bool qscrollevent_setaccepted_isbase = false;

  public:
    VirtualQScrollEvent(const QPointF& contentPos, const QPointF& overshoot, QScrollEvent::ScrollState scrollState) : QScrollEvent(contentPos, overshoot, scrollState) {};

    // Callback setters
    inline void setQScrollEvent_Clone_Callback(QScrollEvent_Clone_Callback cb) { qscrollevent_clone_callback = cb; }
    inline void setQScrollEvent_SetAccepted_Callback(QScrollEvent_SetAccepted_Callback cb) { qscrollevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQScrollEvent_Clone_IsBase(bool value) const { qscrollevent_clone_isbase = value; }
    inline void setQScrollEvent_SetAccepted_IsBase(bool value) const { qscrollevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QScrollEvent* clone() const override {
        if (qscrollevent_clone_isbase) {
            qscrollevent_clone_isbase = false;
            return QScrollEvent::clone();
        }
        auto clone_cb = qscrollevent_clone_callback;
        if (clone_cb) {
            QScrollEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QScrollEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscrollevent_setaccepted_isbase) {
            qscrollevent_setaccepted_isbase = false;
            QScrollEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qscrollevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QScrollEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QScreenOrientationChangeEvent so that we can call protected methods
class VirtualQScreenOrientationChangeEvent final : public QScreenOrientationChangeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQScreenOrientationChangeEvent = true;

    // Virtual class public types (including callbacks)
    using QScreenOrientationChangeEvent_Clone_Callback = QScreenOrientationChangeEvent* (*)();
    using QScreenOrientationChangeEvent_SetAccepted_Callback = void (*)(QScreenOrientationChangeEvent*, bool);

  protected:
    // Instance callback storage
    QScreenOrientationChangeEvent_Clone_Callback qscreenorientationchangeevent_clone_callback = nullptr;
    QScreenOrientationChangeEvent_SetAccepted_Callback qscreenorientationchangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qscreenorientationchangeevent_clone_isbase = false;
    mutable bool qscreenorientationchangeevent_setaccepted_isbase = false;

  public:
    VirtualQScreenOrientationChangeEvent(QScreen* screen, Qt::ScreenOrientation orientation) : QScreenOrientationChangeEvent(screen, orientation) {};

    // Callback setters
    inline void setQScreenOrientationChangeEvent_Clone_Callback(QScreenOrientationChangeEvent_Clone_Callback cb) { qscreenorientationchangeevent_clone_callback = cb; }
    inline void setQScreenOrientationChangeEvent_SetAccepted_Callback(QScreenOrientationChangeEvent_SetAccepted_Callback cb) { qscreenorientationchangeevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQScreenOrientationChangeEvent_Clone_IsBase(bool value) const { qscreenorientationchangeevent_clone_isbase = value; }
    inline void setQScreenOrientationChangeEvent_SetAccepted_IsBase(bool value) const { qscreenorientationchangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QScreenOrientationChangeEvent* clone() const override {
        if (qscreenorientationchangeevent_clone_isbase) {
            qscreenorientationchangeevent_clone_isbase = false;
            return QScreenOrientationChangeEvent::clone();
        }
        auto clone_cb = qscreenorientationchangeevent_clone_callback;
        if (clone_cb) {
            QScreenOrientationChangeEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QScreenOrientationChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscreenorientationchangeevent_setaccepted_isbase) {
            qscreenorientationchangeevent_setaccepted_isbase = false;
            QScreenOrientationChangeEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qscreenorientationchangeevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QScreenOrientationChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QApplicationStateChangeEvent so that we can call protected methods
class VirtualQApplicationStateChangeEvent final : public QApplicationStateChangeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQApplicationStateChangeEvent = true;

    // Virtual class public types (including callbacks)
    using QApplicationStateChangeEvent_Clone_Callback = QApplicationStateChangeEvent* (*)();
    using QApplicationStateChangeEvent_SetAccepted_Callback = void (*)(QApplicationStateChangeEvent*, bool);

  protected:
    // Instance callback storage
    QApplicationStateChangeEvent_Clone_Callback qapplicationstatechangeevent_clone_callback = nullptr;
    QApplicationStateChangeEvent_SetAccepted_Callback qapplicationstatechangeevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qapplicationstatechangeevent_clone_isbase = false;
    mutable bool qapplicationstatechangeevent_setaccepted_isbase = false;

  public:
    VirtualQApplicationStateChangeEvent(Qt::ApplicationState state) : QApplicationStateChangeEvent(state) {};

    // Callback setters
    inline void setQApplicationStateChangeEvent_Clone_Callback(QApplicationStateChangeEvent_Clone_Callback cb) { qapplicationstatechangeevent_clone_callback = cb; }
    inline void setQApplicationStateChangeEvent_SetAccepted_Callback(QApplicationStateChangeEvent_SetAccepted_Callback cb) { qapplicationstatechangeevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQApplicationStateChangeEvent_Clone_IsBase(bool value) const { qapplicationstatechangeevent_clone_isbase = value; }
    inline void setQApplicationStateChangeEvent_SetAccepted_IsBase(bool value) const { qapplicationstatechangeevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QApplicationStateChangeEvent* clone() const override {
        if (qapplicationstatechangeevent_clone_isbase) {
            qapplicationstatechangeevent_clone_isbase = false;
            return QApplicationStateChangeEvent::clone();
        }
        auto clone_cb = qapplicationstatechangeevent_clone_callback;
        if (clone_cb) {
            QApplicationStateChangeEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QApplicationStateChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qapplicationstatechangeevent_setaccepted_isbase) {
            qapplicationstatechangeevent_setaccepted_isbase = false;
            QApplicationStateChangeEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qapplicationstatechangeevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QApplicationStateChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QChildWindowEvent so that we can call protected methods
class VirtualQChildWindowEvent final : public QChildWindowEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQChildWindowEvent = true;

    // Virtual class public types (including callbacks)
    using QChildWindowEvent_Clone_Callback = QChildWindowEvent* (*)();
    using QChildWindowEvent_SetAccepted_Callback = void (*)(QChildWindowEvent*, bool);

  protected:
    // Instance callback storage
    QChildWindowEvent_Clone_Callback qchildwindowevent_clone_callback = nullptr;
    QChildWindowEvent_SetAccepted_Callback qchildwindowevent_setaccepted_callback = nullptr;

    // Instance base flags
    mutable bool qchildwindowevent_clone_isbase = false;
    mutable bool qchildwindowevent_setaccepted_isbase = false;

  public:
    VirtualQChildWindowEvent(QEvent::Type typeVal, QWindow* childWindow) : QChildWindowEvent(typeVal, childWindow) {};

    // Callback setters
    inline void setQChildWindowEvent_Clone_Callback(QChildWindowEvent_Clone_Callback cb) { qchildwindowevent_clone_callback = cb; }
    inline void setQChildWindowEvent_SetAccepted_Callback(QChildWindowEvent_SetAccepted_Callback cb) { qchildwindowevent_setaccepted_callback = cb; }

    // Base flag setters
    inline void setQChildWindowEvent_Clone_IsBase(bool value) const { qchildwindowevent_clone_isbase = value; }
    inline void setQChildWindowEvent_SetAccepted_IsBase(bool value) const { qchildwindowevent_setaccepted_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QChildWindowEvent* clone() const override {
        if (qchildwindowevent_clone_isbase) {
            qchildwindowevent_clone_isbase = false;
            return QChildWindowEvent::clone();
        }
        auto clone_cb = qchildwindowevent_clone_callback;
        if (clone_cb) {
            QChildWindowEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QChildWindowEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qchildwindowevent_setaccepted_isbase) {
            qchildwindowevent_setaccepted_isbase = false;
            QChildWindowEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qchildwindowevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QChildWindowEvent::setAccepted(accepted);
    }
};

#endif
