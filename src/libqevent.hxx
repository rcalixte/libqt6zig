#pragma once
#ifndef LIBQEVENT_HXX
#define LIBQEVENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputEvent
class VirtualQInputEvent final : public QInputEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QInputEvent_Clone_Callback = QInputEvent* (*)(const QInputEvent*);
    using QInputEvent_SetTimestamp_Callback = void (*)(QInputEvent*, unsigned long long);
    using QInputEvent_SetAccepted_Callback = void (*)(QInputEvent*, bool);

    // Instance callback storage
    QInputEvent_Clone_Callback qinputevent_clone_callback = nullptr;
    QInputEvent_SetTimestamp_Callback qinputevent_settimestamp_callback = nullptr;
    QInputEvent_SetAccepted_Callback qinputevent_setaccepted_callback = nullptr;

    VirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev) : QInputEvent(typeVal, m_dev) {};
    VirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev, Qt::KeyboardModifiers modifiers) : QInputEvent(typeVal, m_dev, modifiers) {};

    // Virtual method for C ABI access and custom callback
    virtual QInputEvent* clone() const override {
        if (qinputevent_clone_callback) {
            QInputEvent* callback_ret = qinputevent_clone_callback(this);
            return callback_ret;
        }
        return QInputEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qinputevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qinputevent_settimestamp_callback(this, cbval1);
            return;
        }
        QInputEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qinputevent_setaccepted_callback(this, cbval1);
            return;
        }
        QInputEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QPointerEvent
class VirtualQPointerEvent final : public QPointerEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPointerEvent_Clone_Callback = QPointerEvent* (*)(const QPointerEvent*);
    using QPointerEvent_SetTimestamp_Callback = void (*)(QPointerEvent*, unsigned long long);
    using QPointerEvent_IsBeginEvent_Callback = bool (*)(const QPointerEvent*);
    using QPointerEvent_IsUpdateEvent_Callback = bool (*)(const QPointerEvent*);
    using QPointerEvent_IsEndEvent_Callback = bool (*)(const QPointerEvent*);
    using QPointerEvent_SetAccepted_Callback = void (*)(QPointerEvent*, bool);

    // Instance callback storage
    QPointerEvent_Clone_Callback qpointerevent_clone_callback = nullptr;
    QPointerEvent_SetTimestamp_Callback qpointerevent_settimestamp_callback = nullptr;
    QPointerEvent_IsBeginEvent_Callback qpointerevent_isbeginevent_callback = nullptr;
    QPointerEvent_IsUpdateEvent_Callback qpointerevent_isupdateevent_callback = nullptr;
    QPointerEvent_IsEndEvent_Callback qpointerevent_isendevent_callback = nullptr;
    QPointerEvent_SetAccepted_Callback qpointerevent_setaccepted_callback = nullptr;

    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev) : QPointerEvent(typeVal, dev) {};
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers) : QPointerEvent(typeVal, dev, modifiers) {};
    VirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& points) : QPointerEvent(typeVal, dev, modifiers, points) {};

    // Virtual method for C ABI access and custom callback
    virtual QPointerEvent* clone() const override {
        if (qpointerevent_clone_callback) {
            QPointerEvent* callback_ret = qpointerevent_clone_callback(this);
            return callback_ret;
        }
        return QPointerEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qpointerevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qpointerevent_settimestamp_callback(this, cbval1);
            return;
        }
        QPointerEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qpointerevent_isbeginevent_callback) {
            bool callback_ret = qpointerevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QPointerEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qpointerevent_isupdateevent_callback) {
            bool callback_ret = qpointerevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QPointerEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qpointerevent_isendevent_callback) {
            bool callback_ret = qpointerevent_isendevent_callback(this);
            return callback_ret;
        }
        return QPointerEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qpointerevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qpointerevent_setaccepted_callback(this, cbval1);
            return;
        }
        QPointerEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QEnterEvent
class VirtualQEnterEvent final : public QEnterEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QEnterEvent_Clone_Callback = QEnterEvent* (*)(const QEnterEvent*);
    using QEnterEvent_IsBeginEvent_Callback = bool (*)(const QEnterEvent*);
    using QEnterEvent_IsUpdateEvent_Callback = bool (*)(const QEnterEvent*);
    using QEnterEvent_IsEndEvent_Callback = bool (*)(const QEnterEvent*);
    using QEnterEvent_SetTimestamp_Callback = void (*)(QEnterEvent*, unsigned long long);
    using QEnterEvent_SetAccepted_Callback = void (*)(QEnterEvent*, bool);

    // Instance callback storage
    QEnterEvent_Clone_Callback qenterevent_clone_callback = nullptr;
    QEnterEvent_IsBeginEvent_Callback qenterevent_isbeginevent_callback = nullptr;
    QEnterEvent_IsUpdateEvent_Callback qenterevent_isupdateevent_callback = nullptr;
    QEnterEvent_IsEndEvent_Callback qenterevent_isendevent_callback = nullptr;
    QEnterEvent_SetTimestamp_Callback qenterevent_settimestamp_callback = nullptr;
    QEnterEvent_SetAccepted_Callback qenterevent_setaccepted_callback = nullptr;

    VirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos) : QEnterEvent(localPos, scenePos, globalPos) {};
    VirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, const QPointingDevice* device) : QEnterEvent(localPos, scenePos, globalPos, device) {};

    // Virtual method for C ABI access and custom callback
    virtual QEnterEvent* clone() const override {
        if (qenterevent_clone_callback) {
            QEnterEvent* callback_ret = qenterevent_clone_callback(this);
            return callback_ret;
        }
        return QEnterEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qenterevent_isbeginevent_callback) {
            bool callback_ret = qenterevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QEnterEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qenterevent_isupdateevent_callback) {
            bool callback_ret = qenterevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QEnterEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qenterevent_isendevent_callback) {
            bool callback_ret = qenterevent_isendevent_callback(this);
            return callback_ret;
        }
        return QEnterEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qenterevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qenterevent_settimestamp_callback(this, cbval1);
            return;
        }
        QEnterEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qenterevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qenterevent_setaccepted_callback(this, cbval1);
            return;
        }
        QEnterEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QMouseEvent
class VirtualQMouseEvent final : public QMouseEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMouseEvent_Clone_Callback = QMouseEvent* (*)(const QMouseEvent*);
    using QMouseEvent_IsBeginEvent_Callback = bool (*)(const QMouseEvent*);
    using QMouseEvent_IsUpdateEvent_Callback = bool (*)(const QMouseEvent*);
    using QMouseEvent_IsEndEvent_Callback = bool (*)(const QMouseEvent*);
    using QMouseEvent_SetTimestamp_Callback = void (*)(QMouseEvent*, unsigned long long);
    using QMouseEvent_SetAccepted_Callback = void (*)(QMouseEvent*, bool);

    // Instance callback storage
    QMouseEvent_Clone_Callback qmouseevent_clone_callback = nullptr;
    QMouseEvent_IsBeginEvent_Callback qmouseevent_isbeginevent_callback = nullptr;
    QMouseEvent_IsUpdateEvent_Callback qmouseevent_isupdateevent_callback = nullptr;
    QMouseEvent_IsEndEvent_Callback qmouseevent_isendevent_callback = nullptr;
    QMouseEvent_SetTimestamp_Callback qmouseevent_settimestamp_callback = nullptr;
    QMouseEvent_SetAccepted_Callback qmouseevent_setaccepted_callback = nullptr;

    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, button, buttons, modifiers) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, button, buttons, modifiers, device) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers, device) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, device) {};
    VirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source, const QPointingDevice* device) : QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source, device) {};

    // Virtual method for C ABI access and custom callback
    virtual QMouseEvent* clone() const override {
        if (qmouseevent_clone_callback) {
            QMouseEvent* callback_ret = qmouseevent_clone_callback(this);
            return callback_ret;
        }
        return QMouseEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qmouseevent_isbeginevent_callback) {
            bool callback_ret = qmouseevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QMouseEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qmouseevent_isupdateevent_callback) {
            bool callback_ret = qmouseevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QMouseEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qmouseevent_isendevent_callback) {
            bool callback_ret = qmouseevent_isendevent_callback(this);
            return callback_ret;
        }
        return QMouseEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qmouseevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qmouseevent_settimestamp_callback(this, cbval1);
            return;
        }
        QMouseEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qmouseevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qmouseevent_setaccepted_callback(this, cbval1);
            return;
        }
        QMouseEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QHoverEvent
class VirtualQHoverEvent final : public QHoverEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHoverEvent_Clone_Callback = QHoverEvent* (*)(const QHoverEvent*);
    using QHoverEvent_IsUpdateEvent_Callback = bool (*)(const QHoverEvent*);
    using QHoverEvent_IsBeginEvent_Callback = bool (*)(const QHoverEvent*);
    using QHoverEvent_IsEndEvent_Callback = bool (*)(const QHoverEvent*);
    using QHoverEvent_SetTimestamp_Callback = void (*)(QHoverEvent*, unsigned long long);
    using QHoverEvent_SetAccepted_Callback = void (*)(QHoverEvent*, bool);

    // Instance callback storage
    QHoverEvent_Clone_Callback qhoverevent_clone_callback = nullptr;
    QHoverEvent_IsUpdateEvent_Callback qhoverevent_isupdateevent_callback = nullptr;
    QHoverEvent_IsBeginEvent_Callback qhoverevent_isbeginevent_callback = nullptr;
    QHoverEvent_IsEndEvent_Callback qhoverevent_isendevent_callback = nullptr;
    QHoverEvent_SetTimestamp_Callback qhoverevent_settimestamp_callback = nullptr;
    QHoverEvent_SetAccepted_Callback qhoverevent_setaccepted_callback = nullptr;

    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos) : QHoverEvent(typeVal, scenePos, globalPos, oldPos) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos) : QHoverEvent(typeVal, pos, oldPos) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers) : QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers, device) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers) : QHoverEvent(typeVal, pos, oldPos, modifiers) {};
    VirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device) : QHoverEvent(typeVal, pos, oldPos, modifiers, device) {};

    // Virtual method for C ABI access and custom callback
    virtual QHoverEvent* clone() const override {
        if (qhoverevent_clone_callback) {
            QHoverEvent* callback_ret = qhoverevent_clone_callback(this);
            return callback_ret;
        }
        return QHoverEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qhoverevent_isupdateevent_callback) {
            bool callback_ret = qhoverevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QHoverEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qhoverevent_isbeginevent_callback) {
            bool callback_ret = qhoverevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QHoverEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qhoverevent_isendevent_callback) {
            bool callback_ret = qhoverevent_isendevent_callback(this);
            return callback_ret;
        }
        return QHoverEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qhoverevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qhoverevent_settimestamp_callback(this, cbval1);
            return;
        }
        QHoverEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhoverevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qhoverevent_setaccepted_callback(this, cbval1);
            return;
        }
        QHoverEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QWheelEvent
class VirtualQWheelEvent final : public QWheelEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWheelEvent_Clone_Callback = QWheelEvent* (*)(const QWheelEvent*);
    using QWheelEvent_IsBeginEvent_Callback = bool (*)(const QWheelEvent*);
    using QWheelEvent_IsUpdateEvent_Callback = bool (*)(const QWheelEvent*);
    using QWheelEvent_IsEndEvent_Callback = bool (*)(const QWheelEvent*);
    using QWheelEvent_SetTimestamp_Callback = void (*)(QWheelEvent*, unsigned long long);
    using QWheelEvent_SetAccepted_Callback = void (*)(QWheelEvent*, bool);

    // Instance callback storage
    QWheelEvent_Clone_Callback qwheelevent_clone_callback = nullptr;
    QWheelEvent_IsBeginEvent_Callback qwheelevent_isbeginevent_callback = nullptr;
    QWheelEvent_IsUpdateEvent_Callback qwheelevent_isupdateevent_callback = nullptr;
    QWheelEvent_IsEndEvent_Callback qwheelevent_isendevent_callback = nullptr;
    QWheelEvent_SetTimestamp_Callback qwheelevent_settimestamp_callback = nullptr;
    QWheelEvent_SetAccepted_Callback qwheelevent_setaccepted_callback = nullptr;

    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted) {};
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source) {};
    VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice* device) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source, device) {};

    // Virtual method for C ABI access and custom callback
    virtual QWheelEvent* clone() const override {
        if (qwheelevent_clone_callback) {
            QWheelEvent* callback_ret = qwheelevent_clone_callback(this);
            return callback_ret;
        }
        return QWheelEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qwheelevent_isbeginevent_callback) {
            bool callback_ret = qwheelevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QWheelEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qwheelevent_isupdateevent_callback) {
            bool callback_ret = qwheelevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QWheelEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qwheelevent_isendevent_callback) {
            bool callback_ret = qwheelevent_isendevent_callback(this);
            return callback_ret;
        }
        return QWheelEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qwheelevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qwheelevent_settimestamp_callback(this, cbval1);
            return;
        }
        QWheelEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwheelevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qwheelevent_setaccepted_callback(this, cbval1);
            return;
        }
        QWheelEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QTabletEvent
class VirtualQTabletEvent final : public QTabletEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTabletEvent_Clone_Callback = QTabletEvent* (*)(const QTabletEvent*);
    using QTabletEvent_IsBeginEvent_Callback = bool (*)(const QTabletEvent*);
    using QTabletEvent_IsUpdateEvent_Callback = bool (*)(const QTabletEvent*);
    using QTabletEvent_IsEndEvent_Callback = bool (*)(const QTabletEvent*);
    using QTabletEvent_SetTimestamp_Callback = void (*)(QTabletEvent*, unsigned long long);
    using QTabletEvent_SetAccepted_Callback = void (*)(QTabletEvent*, bool);

    // Instance callback storage
    QTabletEvent_Clone_Callback qtabletevent_clone_callback = nullptr;
    QTabletEvent_IsBeginEvent_Callback qtabletevent_isbeginevent_callback = nullptr;
    QTabletEvent_IsUpdateEvent_Callback qtabletevent_isupdateevent_callback = nullptr;
    QTabletEvent_IsEndEvent_Callback qtabletevent_isendevent_callback = nullptr;
    QTabletEvent_SetTimestamp_Callback qtabletevent_settimestamp_callback = nullptr;
    QTabletEvent_SetAccepted_Callback qtabletevent_setaccepted_callback = nullptr;

    VirtualQTabletEvent(QEvent::Type t, const QPointingDevice* device, const QPointF& pos, const QPointF& globalPos, qreal pressure, float xTilt, float yTilt, float tangentialPressure, qreal rotation, float z, Qt::KeyboardModifiers keyState, Qt::MouseButton button, Qt::MouseButtons buttons) : QTabletEvent(t, device, pos, globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons) {};

    // Virtual method for C ABI access and custom callback
    virtual QTabletEvent* clone() const override {
        if (qtabletevent_clone_callback) {
            QTabletEvent* callback_ret = qtabletevent_clone_callback(this);
            return callback_ret;
        }
        return QTabletEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qtabletevent_isbeginevent_callback) {
            bool callback_ret = qtabletevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QTabletEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qtabletevent_isupdateevent_callback) {
            bool callback_ret = qtabletevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QTabletEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qtabletevent_isendevent_callback) {
            bool callback_ret = qtabletevent_isendevent_callback(this);
            return callback_ret;
        }
        return QTabletEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qtabletevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qtabletevent_settimestamp_callback(this, cbval1);
            return;
        }
        QTabletEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtabletevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qtabletevent_setaccepted_callback(this, cbval1);
            return;
        }
        QTabletEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QNativeGestureEvent
class VirtualQNativeGestureEvent final : public QNativeGestureEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNativeGestureEvent_Clone_Callback = QNativeGestureEvent* (*)(const QNativeGestureEvent*);
    using QNativeGestureEvent_IsBeginEvent_Callback = bool (*)(const QNativeGestureEvent*);
    using QNativeGestureEvent_IsUpdateEvent_Callback = bool (*)(const QNativeGestureEvent*);
    using QNativeGestureEvent_IsEndEvent_Callback = bool (*)(const QNativeGestureEvent*);
    using QNativeGestureEvent_SetTimestamp_Callback = void (*)(QNativeGestureEvent*, unsigned long long);
    using QNativeGestureEvent_SetAccepted_Callback = void (*)(QNativeGestureEvent*, bool);

    // Instance callback storage
    QNativeGestureEvent_Clone_Callback qnativegestureevent_clone_callback = nullptr;
    QNativeGestureEvent_IsBeginEvent_Callback qnativegestureevent_isbeginevent_callback = nullptr;
    QNativeGestureEvent_IsUpdateEvent_Callback qnativegestureevent_isupdateevent_callback = nullptr;
    QNativeGestureEvent_IsEndEvent_Callback qnativegestureevent_isendevent_callback = nullptr;
    QNativeGestureEvent_SetTimestamp_Callback qnativegestureevent_settimestamp_callback = nullptr;
    QNativeGestureEvent_SetAccepted_Callback qnativegestureevent_setaccepted_callback = nullptr;

    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, quint64 sequenceId, quint64 intArgument) : QNativeGestureEvent(typeVal, dev, localPos, scenePos, globalPos, value, sequenceId, intArgument) {};
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta) : QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta) {};
    VirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta, quint64 sequenceId) : QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta, sequenceId) {};

    // Virtual method for C ABI access and custom callback
    virtual QNativeGestureEvent* clone() const override {
        if (qnativegestureevent_clone_callback) {
            QNativeGestureEvent* callback_ret = qnativegestureevent_clone_callback(this);
            return callback_ret;
        }
        return QNativeGestureEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qnativegestureevent_isbeginevent_callback) {
            bool callback_ret = qnativegestureevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QNativeGestureEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qnativegestureevent_isupdateevent_callback) {
            bool callback_ret = qnativegestureevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QNativeGestureEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qnativegestureevent_isendevent_callback) {
            bool callback_ret = qnativegestureevent_isendevent_callback(this);
            return callback_ret;
        }
        return QNativeGestureEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qnativegestureevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qnativegestureevent_settimestamp_callback(this, cbval1);
            return;
        }
        QNativeGestureEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qnativegestureevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qnativegestureevent_setaccepted_callback(this, cbval1);
            return;
        }
        QNativeGestureEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QKeyEvent
class VirtualQKeyEvent final : public QKeyEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QKeyEvent_Clone_Callback = QKeyEvent* (*)(const QKeyEvent*);
    using QKeyEvent_SetTimestamp_Callback = void (*)(QKeyEvent*, unsigned long long);
    using QKeyEvent_SetAccepted_Callback = void (*)(QKeyEvent*, bool);

    // Instance callback storage
    QKeyEvent_Clone_Callback qkeyevent_clone_callback = nullptr;
    QKeyEvent_SetTimestamp_Callback qkeyevent_settimestamp_callback = nullptr;
    QKeyEvent_SetAccepted_Callback qkeyevent_setaccepted_callback = nullptr;

    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers) : QKeyEvent(typeVal, key, modifiers) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text) : QKeyEvent(typeVal, key, modifiers, text) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep) : QKeyEvent(typeVal, key, modifiers, text, autorep) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep, quint16 count) : QKeyEvent(typeVal, key, modifiers, text, autorep, count) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count) {};
    VirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count, const QInputDevice* device) : QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count, device) {};

    // Virtual method for C ABI access and custom callback
    virtual QKeyEvent* clone() const override {
        if (qkeyevent_clone_callback) {
            QKeyEvent* callback_ret = qkeyevent_clone_callback(this);
            return callback_ret;
        }
        return QKeyEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qkeyevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qkeyevent_settimestamp_callback(this, cbval1);
            return;
        }
        QKeyEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qkeyevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qkeyevent_setaccepted_callback(this, cbval1);
            return;
        }
        QKeyEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QFocusEvent
class VirtualQFocusEvent final : public QFocusEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFocusEvent_Clone_Callback = QFocusEvent* (*)(const QFocusEvent*);
    using QFocusEvent_SetAccepted_Callback = void (*)(QFocusEvent*, bool);

    // Instance callback storage
    QFocusEvent_Clone_Callback qfocusevent_clone_callback = nullptr;
    QFocusEvent_SetAccepted_Callback qfocusevent_setaccepted_callback = nullptr;

    VirtualQFocusEvent(QEvent::Type typeVal) : QFocusEvent(typeVal) {};
    VirtualQFocusEvent(QEvent::Type typeVal, Qt::FocusReason reason) : QFocusEvent(typeVal, reason) {};

    // Virtual method for C ABI access and custom callback
    virtual QFocusEvent* clone() const override {
        if (qfocusevent_clone_callback) {
            QFocusEvent* callback_ret = qfocusevent_clone_callback(this);
            return callback_ret;
        }
        return QFocusEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qfocusevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qfocusevent_setaccepted_callback(this, cbval1);
            return;
        }
        QFocusEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QPaintEvent
class VirtualQPaintEvent final : public QPaintEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPaintEvent_Clone_Callback = QPaintEvent* (*)(const QPaintEvent*);
    using QPaintEvent_SetAccepted_Callback = void (*)(QPaintEvent*, bool);

    // Instance callback storage
    QPaintEvent_Clone_Callback qpaintevent_clone_callback = nullptr;
    QPaintEvent_SetAccepted_Callback qpaintevent_setaccepted_callback = nullptr;

    VirtualQPaintEvent(const QRegion& paintRegion) : QPaintEvent(paintRegion) {};
    VirtualQPaintEvent(const QRect& paintRect) : QPaintEvent(paintRect) {};

    // Virtual method for C ABI access and custom callback
    virtual QPaintEvent* clone() const override {
        if (qpaintevent_clone_callback) {
            QPaintEvent* callback_ret = qpaintevent_clone_callback(this);
            return callback_ret;
        }
        return QPaintEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qpaintevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qpaintevent_setaccepted_callback(this, cbval1);
            return;
        }
        QPaintEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QMoveEvent
class VirtualQMoveEvent final : public QMoveEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMoveEvent_Clone_Callback = QMoveEvent* (*)(const QMoveEvent*);
    using QMoveEvent_SetAccepted_Callback = void (*)(QMoveEvent*, bool);

    // Instance callback storage
    QMoveEvent_Clone_Callback qmoveevent_clone_callback = nullptr;
    QMoveEvent_SetAccepted_Callback qmoveevent_setaccepted_callback = nullptr;

    VirtualQMoveEvent(const QPoint& pos, const QPoint& oldPos) : QMoveEvent(pos, oldPos) {};

    // Virtual method for C ABI access and custom callback
    virtual QMoveEvent* clone() const override {
        if (qmoveevent_clone_callback) {
            QMoveEvent* callback_ret = qmoveevent_clone_callback(this);
            return callback_ret;
        }
        return QMoveEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qmoveevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qmoveevent_setaccepted_callback(this, cbval1);
            return;
        }
        QMoveEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QExposeEvent
class VirtualQExposeEvent final : public QExposeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QExposeEvent_Clone_Callback = QExposeEvent* (*)(const QExposeEvent*);
    using QExposeEvent_SetAccepted_Callback = void (*)(QExposeEvent*, bool);

    // Instance callback storage
    QExposeEvent_Clone_Callback qexposeevent_clone_callback = nullptr;
    QExposeEvent_SetAccepted_Callback qexposeevent_setaccepted_callback = nullptr;

    VirtualQExposeEvent(const QRegion& m_region) : QExposeEvent(m_region) {};

    // Virtual method for C ABI access and custom callback
    virtual QExposeEvent* clone() const override {
        if (qexposeevent_clone_callback) {
            QExposeEvent* callback_ret = qexposeevent_clone_callback(this);
            return callback_ret;
        }
        return QExposeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qexposeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qexposeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QExposeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QPlatformSurfaceEvent
class VirtualQPlatformSurfaceEvent final : public QPlatformSurfaceEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlatformSurfaceEvent_Clone_Callback = QPlatformSurfaceEvent* (*)(const QPlatformSurfaceEvent*);
    using QPlatformSurfaceEvent_SetAccepted_Callback = void (*)(QPlatformSurfaceEvent*, bool);

    // Instance callback storage
    QPlatformSurfaceEvent_Clone_Callback qplatformsurfaceevent_clone_callback = nullptr;
    QPlatformSurfaceEvent_SetAccepted_Callback qplatformsurfaceevent_setaccepted_callback = nullptr;

    VirtualQPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType) : QPlatformSurfaceEvent(surfaceEventType) {};

    // Virtual method for C ABI access and custom callback
    virtual QPlatformSurfaceEvent* clone() const override {
        if (qplatformsurfaceevent_clone_callback) {
            QPlatformSurfaceEvent* callback_ret = qplatformsurfaceevent_clone_callback(this);
            return callback_ret;
        }
        return QPlatformSurfaceEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qplatformsurfaceevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qplatformsurfaceevent_setaccepted_callback(this, cbval1);
            return;
        }
        QPlatformSurfaceEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QResizeEvent
class VirtualQResizeEvent final : public QResizeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QResizeEvent_Clone_Callback = QResizeEvent* (*)(const QResizeEvent*);
    using QResizeEvent_SetAccepted_Callback = void (*)(QResizeEvent*, bool);

    // Instance callback storage
    QResizeEvent_Clone_Callback qresizeevent_clone_callback = nullptr;
    QResizeEvent_SetAccepted_Callback qresizeevent_setaccepted_callback = nullptr;

    VirtualQResizeEvent(const QSize& size, const QSize& oldSize) : QResizeEvent(size, oldSize) {};

    // Virtual method for C ABI access and custom callback
    virtual QResizeEvent* clone() const override {
        if (qresizeevent_clone_callback) {
            QResizeEvent* callback_ret = qresizeevent_clone_callback(this);
            return callback_ret;
        }
        return QResizeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qresizeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qresizeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QResizeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QCloseEvent
class VirtualQCloseEvent final : public QCloseEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCloseEvent_Clone_Callback = QCloseEvent* (*)(const QCloseEvent*);
    using QCloseEvent_SetAccepted_Callback = void (*)(QCloseEvent*, bool);

    // Instance callback storage
    QCloseEvent_Clone_Callback qcloseevent_clone_callback = nullptr;
    QCloseEvent_SetAccepted_Callback qcloseevent_setaccepted_callback = nullptr;

    VirtualQCloseEvent() : QCloseEvent() {};

    // Virtual method for C ABI access and custom callback
    virtual QCloseEvent* clone() const override {
        if (qcloseevent_clone_callback) {
            QCloseEvent* callback_ret = qcloseevent_clone_callback(this);
            return callback_ret;
        }
        return QCloseEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qcloseevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qcloseevent_setaccepted_callback(this, cbval1);
            return;
        }
        QCloseEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QIconDragEvent
class VirtualQIconDragEvent final : public QIconDragEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QIconDragEvent_Clone_Callback = QIconDragEvent* (*)(const QIconDragEvent*);
    using QIconDragEvent_SetAccepted_Callback = void (*)(QIconDragEvent*, bool);

    // Instance callback storage
    QIconDragEvent_Clone_Callback qicondragevent_clone_callback = nullptr;
    QIconDragEvent_SetAccepted_Callback qicondragevent_setaccepted_callback = nullptr;

    VirtualQIconDragEvent() : QIconDragEvent() {};

    // Virtual method for C ABI access and custom callback
    virtual QIconDragEvent* clone() const override {
        if (qicondragevent_clone_callback) {
            QIconDragEvent* callback_ret = qicondragevent_clone_callback(this);
            return callback_ret;
        }
        return QIconDragEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qicondragevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qicondragevent_setaccepted_callback(this, cbval1);
            return;
        }
        QIconDragEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QShowEvent
class VirtualQShowEvent final : public QShowEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QShowEvent_Clone_Callback = QShowEvent* (*)(const QShowEvent*);
    using QShowEvent_SetAccepted_Callback = void (*)(QShowEvent*, bool);

    // Instance callback storage
    QShowEvent_Clone_Callback qshowevent_clone_callback = nullptr;
    QShowEvent_SetAccepted_Callback qshowevent_setaccepted_callback = nullptr;

    VirtualQShowEvent() : QShowEvent() {};

    // Virtual method for C ABI access and custom callback
    virtual QShowEvent* clone() const override {
        if (qshowevent_clone_callback) {
            QShowEvent* callback_ret = qshowevent_clone_callback(this);
            return callback_ret;
        }
        return QShowEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qshowevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qshowevent_setaccepted_callback(this, cbval1);
            return;
        }
        QShowEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QHideEvent
class VirtualQHideEvent final : public QHideEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHideEvent_Clone_Callback = QHideEvent* (*)(const QHideEvent*);
    using QHideEvent_SetAccepted_Callback = void (*)(QHideEvent*, bool);

    // Instance callback storage
    QHideEvent_Clone_Callback qhideevent_clone_callback = nullptr;
    QHideEvent_SetAccepted_Callback qhideevent_setaccepted_callback = nullptr;

    VirtualQHideEvent() : QHideEvent() {};

    // Virtual method for C ABI access and custom callback
    virtual QHideEvent* clone() const override {
        if (qhideevent_clone_callback) {
            QHideEvent* callback_ret = qhideevent_clone_callback(this);
            return callback_ret;
        }
        return QHideEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhideevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qhideevent_setaccepted_callback(this, cbval1);
            return;
        }
        QHideEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QContextMenuEvent
class VirtualQContextMenuEvent final : public QContextMenuEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QContextMenuEvent_Clone_Callback = QContextMenuEvent* (*)(const QContextMenuEvent*);
    using QContextMenuEvent_SetTimestamp_Callback = void (*)(QContextMenuEvent*, unsigned long long);
    using QContextMenuEvent_SetAccepted_Callback = void (*)(QContextMenuEvent*, bool);

    // Instance callback storage
    QContextMenuEvent_Clone_Callback qcontextmenuevent_clone_callback = nullptr;
    QContextMenuEvent_SetTimestamp_Callback qcontextmenuevent_settimestamp_callback = nullptr;
    QContextMenuEvent_SetAccepted_Callback qcontextmenuevent_setaccepted_callback = nullptr;

    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos) : QContextMenuEvent(reason, pos, globalPos) {};
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos) : QContextMenuEvent(reason, pos) {};
    VirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos, Qt::KeyboardModifiers modifiers) : QContextMenuEvent(reason, pos, globalPos, modifiers) {};

    // Virtual method for C ABI access and custom callback
    virtual QContextMenuEvent* clone() const override {
        if (qcontextmenuevent_clone_callback) {
            QContextMenuEvent* callback_ret = qcontextmenuevent_clone_callback(this);
            return callback_ret;
        }
        return QContextMenuEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qcontextmenuevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qcontextmenuevent_settimestamp_callback(this, cbval1);
            return;
        }
        QContextMenuEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qcontextmenuevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qcontextmenuevent_setaccepted_callback(this, cbval1);
            return;
        }
        QContextMenuEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QInputMethodEvent
class VirtualQInputMethodEvent final : public QInputMethodEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QInputMethodEvent_Clone_Callback = QInputMethodEvent* (*)(const QInputMethodEvent*);
    using QInputMethodEvent_SetAccepted_Callback = void (*)(QInputMethodEvent*, bool);

    // Instance callback storage
    QInputMethodEvent_Clone_Callback qinputmethodevent_clone_callback = nullptr;
    QInputMethodEvent_SetAccepted_Callback qinputmethodevent_setaccepted_callback = nullptr;

    VirtualQInputMethodEvent() : QInputMethodEvent() {};
    VirtualQInputMethodEvent(const QString& preeditText, const QList<QInputMethodEvent::Attribute>& attributes) : QInputMethodEvent(preeditText, attributes) {};

    // Virtual method for C ABI access and custom callback
    virtual QInputMethodEvent* clone() const override {
        if (qinputmethodevent_clone_callback) {
            QInputMethodEvent* callback_ret = qinputmethodevent_clone_callback(this);
            return callback_ret;
        }
        return QInputMethodEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputmethodevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qinputmethodevent_setaccepted_callback(this, cbval1);
            return;
        }
        QInputMethodEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QInputMethodQueryEvent
class VirtualQInputMethodQueryEvent final : public QInputMethodQueryEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QInputMethodQueryEvent_Clone_Callback = QInputMethodQueryEvent* (*)(const QInputMethodQueryEvent*);
    using QInputMethodQueryEvent_SetAccepted_Callback = void (*)(QInputMethodQueryEvent*, bool);

    // Instance callback storage
    QInputMethodQueryEvent_Clone_Callback qinputmethodqueryevent_clone_callback = nullptr;
    QInputMethodQueryEvent_SetAccepted_Callback qinputmethodqueryevent_setaccepted_callback = nullptr;

    VirtualQInputMethodQueryEvent(Qt::InputMethodQueries queries) : QInputMethodQueryEvent(queries) {};

    // Virtual method for C ABI access and custom callback
    virtual QInputMethodQueryEvent* clone() const override {
        if (qinputmethodqueryevent_clone_callback) {
            QInputMethodQueryEvent* callback_ret = qinputmethodqueryevent_clone_callback(this);
            return callback_ret;
        }
        return QInputMethodQueryEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qinputmethodqueryevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qinputmethodqueryevent_setaccepted_callback(this, cbval1);
            return;
        }
        QInputMethodQueryEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDropEvent
class VirtualQDropEvent final : public QDropEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDropEvent_Clone_Callback = QDropEvent* (*)(const QDropEvent*);
    using QDropEvent_SetAccepted_Callback = void (*)(QDropEvent*, bool);

    // Instance callback storage
    QDropEvent_Clone_Callback qdropevent_clone_callback = nullptr;
    QDropEvent_SetAccepted_Callback qdropevent_setaccepted_callback = nullptr;

    VirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDropEvent(pos, actions, data, buttons, modifiers) {};
    VirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal) : QDropEvent(pos, actions, data, buttons, modifiers, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual QDropEvent* clone() const override {
        if (qdropevent_clone_callback) {
            QDropEvent* callback_ret = qdropevent_clone_callback(this);
            return callback_ret;
        }
        return QDropEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdropevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qdropevent_setaccepted_callback(this, cbval1);
            return;
        }
        QDropEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDragMoveEvent
class VirtualQDragMoveEvent final : public QDragMoveEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDragMoveEvent_Clone_Callback = QDragMoveEvent* (*)(const QDragMoveEvent*);
    using QDragMoveEvent_SetAccepted_Callback = void (*)(QDragMoveEvent*, bool);

    // Instance callback storage
    QDragMoveEvent_Clone_Callback qdragmoveevent_clone_callback = nullptr;
    QDragMoveEvent_SetAccepted_Callback qdragmoveevent_setaccepted_callback = nullptr;

    VirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDragMoveEvent(pos, actions, data, buttons, modifiers) {};
    VirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal) : QDragMoveEvent(pos, actions, data, buttons, modifiers, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual QDragMoveEvent* clone() const override {
        if (qdragmoveevent_clone_callback) {
            QDragMoveEvent* callback_ret = qdragmoveevent_clone_callback(this);
            return callback_ret;
        }
        return QDragMoveEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragmoveevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qdragmoveevent_setaccepted_callback(this, cbval1);
            return;
        }
        QDragMoveEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDragEnterEvent
class VirtualQDragEnterEvent final : public QDragEnterEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDragEnterEvent_Clone_Callback = QDragEnterEvent* (*)(const QDragEnterEvent*);
    using QDragEnterEvent_SetAccepted_Callback = void (*)(QDragEnterEvent*, bool);

    // Instance callback storage
    QDragEnterEvent_Clone_Callback qdragenterevent_clone_callback = nullptr;
    QDragEnterEvent_SetAccepted_Callback qdragenterevent_setaccepted_callback = nullptr;

    VirtualQDragEnterEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers) : QDragEnterEvent(pos, actions, data, buttons, modifiers) {};

    // Virtual method for C ABI access and custom callback
    virtual QDragEnterEvent* clone() const override {
        if (qdragenterevent_clone_callback) {
            QDragEnterEvent* callback_ret = qdragenterevent_clone_callback(this);
            return callback_ret;
        }
        return QDragEnterEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragenterevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qdragenterevent_setaccepted_callback(this, cbval1);
            return;
        }
        QDragEnterEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDragLeaveEvent
class VirtualQDragLeaveEvent final : public QDragLeaveEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDragLeaveEvent_Clone_Callback = QDragLeaveEvent* (*)(const QDragLeaveEvent*);
    using QDragLeaveEvent_SetAccepted_Callback = void (*)(QDragLeaveEvent*, bool);

    // Instance callback storage
    QDragLeaveEvent_Clone_Callback qdragleaveevent_clone_callback = nullptr;
    QDragLeaveEvent_SetAccepted_Callback qdragleaveevent_setaccepted_callback = nullptr;

    VirtualQDragLeaveEvent() : QDragLeaveEvent() {};

    // Virtual method for C ABI access and custom callback
    virtual QDragLeaveEvent* clone() const override {
        if (qdragleaveevent_clone_callback) {
            QDragLeaveEvent* callback_ret = qdragleaveevent_clone_callback(this);
            return callback_ret;
        }
        return QDragLeaveEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdragleaveevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qdragleaveevent_setaccepted_callback(this, cbval1);
            return;
        }
        QDragLeaveEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QHelpEvent
class VirtualQHelpEvent final : public QHelpEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QHelpEvent_Clone_Callback = QHelpEvent* (*)(const QHelpEvent*);
    using QHelpEvent_SetAccepted_Callback = void (*)(QHelpEvent*, bool);

    // Instance callback storage
    QHelpEvent_Clone_Callback qhelpevent_clone_callback = nullptr;
    QHelpEvent_SetAccepted_Callback qhelpevent_setaccepted_callback = nullptr;

    VirtualQHelpEvent(QEvent::Type typeVal, const QPoint& pos, const QPoint& globalPos) : QHelpEvent(typeVal, pos, globalPos) {};

    // Virtual method for C ABI access and custom callback
    virtual QHelpEvent* clone() const override {
        if (qhelpevent_clone_callback) {
            QHelpEvent* callback_ret = qhelpevent_clone_callback(this);
            return callback_ret;
        }
        return QHelpEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qhelpevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qhelpevent_setaccepted_callback(this, cbval1);
            return;
        }
        QHelpEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QStatusTipEvent
class VirtualQStatusTipEvent final : public QStatusTipEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStatusTipEvent_Clone_Callback = QStatusTipEvent* (*)(const QStatusTipEvent*);
    using QStatusTipEvent_SetAccepted_Callback = void (*)(QStatusTipEvent*, bool);

    // Instance callback storage
    QStatusTipEvent_Clone_Callback qstatustipevent_clone_callback = nullptr;
    QStatusTipEvent_SetAccepted_Callback qstatustipevent_setaccepted_callback = nullptr;

    VirtualQStatusTipEvent(const QString& tip) : QStatusTipEvent(tip) {};

    // Virtual method for C ABI access and custom callback
    virtual QStatusTipEvent* clone() const override {
        if (qstatustipevent_clone_callback) {
            QStatusTipEvent* callback_ret = qstatustipevent_clone_callback(this);
            return callback_ret;
        }
        return QStatusTipEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qstatustipevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qstatustipevent_setaccepted_callback(this, cbval1);
            return;
        }
        QStatusTipEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QWhatsThisClickedEvent
class VirtualQWhatsThisClickedEvent final : public QWhatsThisClickedEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWhatsThisClickedEvent_Clone_Callback = QWhatsThisClickedEvent* (*)(const QWhatsThisClickedEvent*);
    using QWhatsThisClickedEvent_SetAccepted_Callback = void (*)(QWhatsThisClickedEvent*, bool);

    // Instance callback storage
    QWhatsThisClickedEvent_Clone_Callback qwhatsthisclickedevent_clone_callback = nullptr;
    QWhatsThisClickedEvent_SetAccepted_Callback qwhatsthisclickedevent_setaccepted_callback = nullptr;

    VirtualQWhatsThisClickedEvent(const QString& href) : QWhatsThisClickedEvent(href) {};

    // Virtual method for C ABI access and custom callback
    virtual QWhatsThisClickedEvent* clone() const override {
        if (qwhatsthisclickedevent_clone_callback) {
            QWhatsThisClickedEvent* callback_ret = qwhatsthisclickedevent_clone_callback(this);
            return callback_ret;
        }
        return QWhatsThisClickedEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwhatsthisclickedevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qwhatsthisclickedevent_setaccepted_callback(this, cbval1);
            return;
        }
        QWhatsThisClickedEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QActionEvent
class VirtualQActionEvent final : public QActionEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QActionEvent_Clone_Callback = QActionEvent* (*)(const QActionEvent*);
    using QActionEvent_SetAccepted_Callback = void (*)(QActionEvent*, bool);

    // Instance callback storage
    QActionEvent_Clone_Callback qactionevent_clone_callback = nullptr;
    QActionEvent_SetAccepted_Callback qactionevent_setaccepted_callback = nullptr;

    VirtualQActionEvent(int typeVal, QAction* action) : QActionEvent(typeVal, action) {};
    VirtualQActionEvent(int typeVal, QAction* action, QAction* before) : QActionEvent(typeVal, action, before) {};

    // Virtual method for C ABI access and custom callback
    virtual QActionEvent* clone() const override {
        if (qactionevent_clone_callback) {
            QActionEvent* callback_ret = qactionevent_clone_callback(this);
            return callback_ret;
        }
        return QActionEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qactionevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qactionevent_setaccepted_callback(this, cbval1);
            return;
        }
        QActionEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QFileOpenEvent
class VirtualQFileOpenEvent final : public QFileOpenEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFileOpenEvent_Clone_Callback = QFileOpenEvent* (*)(const QFileOpenEvent*);
    using QFileOpenEvent_SetAccepted_Callback = void (*)(QFileOpenEvent*, bool);

    // Instance callback storage
    QFileOpenEvent_Clone_Callback qfileopenevent_clone_callback = nullptr;
    QFileOpenEvent_SetAccepted_Callback qfileopenevent_setaccepted_callback = nullptr;

    VirtualQFileOpenEvent(const QString& file) : QFileOpenEvent(file) {};
    VirtualQFileOpenEvent(const QUrl& url) : QFileOpenEvent(url) {};

    // Virtual method for C ABI access and custom callback
    virtual QFileOpenEvent* clone() const override {
        if (qfileopenevent_clone_callback) {
            QFileOpenEvent* callback_ret = qfileopenevent_clone_callback(this);
            return callback_ret;
        }
        return QFileOpenEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qfileopenevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qfileopenevent_setaccepted_callback(this, cbval1);
            return;
        }
        QFileOpenEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QToolBarChangeEvent
class VirtualQToolBarChangeEvent final : public QToolBarChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QToolBarChangeEvent_Clone_Callback = QToolBarChangeEvent* (*)(const QToolBarChangeEvent*);
    using QToolBarChangeEvent_SetAccepted_Callback = void (*)(QToolBarChangeEvent*, bool);

    // Instance callback storage
    QToolBarChangeEvent_Clone_Callback qtoolbarchangeevent_clone_callback = nullptr;
    QToolBarChangeEvent_SetAccepted_Callback qtoolbarchangeevent_setaccepted_callback = nullptr;

    VirtualQToolBarChangeEvent(bool t) : QToolBarChangeEvent(t) {};

    // Virtual method for C ABI access and custom callback
    virtual QToolBarChangeEvent* clone() const override {
        if (qtoolbarchangeevent_clone_callback) {
            QToolBarChangeEvent* callback_ret = qtoolbarchangeevent_clone_callback(this);
            return callback_ret;
        }
        return QToolBarChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtoolbarchangeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qtoolbarchangeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QToolBarChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QShortcutEvent
class VirtualQShortcutEvent final : public QShortcutEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QShortcutEvent_Clone_Callback = QShortcutEvent* (*)(const QShortcutEvent*);
    using QShortcutEvent_SetAccepted_Callback = void (*)(QShortcutEvent*, bool);

    // Instance callback storage
    QShortcutEvent_Clone_Callback qshortcutevent_clone_callback = nullptr;
    QShortcutEvent_SetAccepted_Callback qshortcutevent_setaccepted_callback = nullptr;

    VirtualQShortcutEvent(const QKeySequence& key, int id) : QShortcutEvent(key, id) {};
    VirtualQShortcutEvent(const QKeySequence& key) : QShortcutEvent(key) {};
    VirtualQShortcutEvent(const QKeySequence& key, int id, bool ambiguous) : QShortcutEvent(key, id, ambiguous) {};
    VirtualQShortcutEvent(const QKeySequence& key, const QShortcut* shortcut) : QShortcutEvent(key, shortcut) {};
    VirtualQShortcutEvent(const QKeySequence& key, const QShortcut* shortcut, bool ambiguous) : QShortcutEvent(key, shortcut, ambiguous) {};

    // Virtual method for C ABI access and custom callback
    virtual QShortcutEvent* clone() const override {
        if (qshortcutevent_clone_callback) {
            QShortcutEvent* callback_ret = qshortcutevent_clone_callback(this);
            return callback_ret;
        }
        return QShortcutEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qshortcutevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qshortcutevent_setaccepted_callback(this, cbval1);
            return;
        }
        QShortcutEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QWindowStateChangeEvent
class VirtualQWindowStateChangeEvent final : public QWindowStateChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWindowStateChangeEvent_Clone_Callback = QWindowStateChangeEvent* (*)(const QWindowStateChangeEvent*);
    using QWindowStateChangeEvent_SetAccepted_Callback = void (*)(QWindowStateChangeEvent*, bool);

    // Instance callback storage
    QWindowStateChangeEvent_Clone_Callback qwindowstatechangeevent_clone_callback = nullptr;
    QWindowStateChangeEvent_SetAccepted_Callback qwindowstatechangeevent_setaccepted_callback = nullptr;

    VirtualQWindowStateChangeEvent(Qt::WindowStates oldState) : QWindowStateChangeEvent(oldState) {};
    VirtualQWindowStateChangeEvent(Qt::WindowStates oldState, bool isOverride) : QWindowStateChangeEvent(oldState, isOverride) {};

    // Virtual method for C ABI access and custom callback
    virtual QWindowStateChangeEvent* clone() const override {
        if (qwindowstatechangeevent_clone_callback) {
            QWindowStateChangeEvent* callback_ret = qwindowstatechangeevent_clone_callback(this);
            return callback_ret;
        }
        return QWindowStateChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qwindowstatechangeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qwindowstatechangeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QWindowStateChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QTouchEvent
class VirtualQTouchEvent final : public QTouchEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTouchEvent_Clone_Callback = QTouchEvent* (*)(const QTouchEvent*);
    using QTouchEvent_IsBeginEvent_Callback = bool (*)(const QTouchEvent*);
    using QTouchEvent_IsUpdateEvent_Callback = bool (*)(const QTouchEvent*);
    using QTouchEvent_IsEndEvent_Callback = bool (*)(const QTouchEvent*);
    using QTouchEvent_SetTimestamp_Callback = void (*)(QTouchEvent*, unsigned long long);
    using QTouchEvent_SetAccepted_Callback = void (*)(QTouchEvent*, bool);

    // Instance callback storage
    QTouchEvent_Clone_Callback qtouchevent_clone_callback = nullptr;
    QTouchEvent_IsBeginEvent_Callback qtouchevent_isbeginevent_callback = nullptr;
    QTouchEvent_IsUpdateEvent_Callback qtouchevent_isupdateevent_callback = nullptr;
    QTouchEvent_IsEndEvent_Callback qtouchevent_isendevent_callback = nullptr;
    QTouchEvent_SetTimestamp_Callback qtouchevent_settimestamp_callback = nullptr;
    QTouchEvent_SetAccepted_Callback qtouchevent_setaccepted_callback = nullptr;

    VirtualQTouchEvent(QEvent::Type eventType) : QTouchEvent(eventType) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates) : QTouchEvent(eventType, device, modifiers, touchPointStates) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device) : QTouchEvent(eventType, device) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers) : QTouchEvent(eventType, device, modifiers) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& touchPoints) : QTouchEvent(eventType, device, modifiers, touchPoints) {};
    VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates, const QList<QEventPoint>& touchPoints) : QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints) {};

    // Virtual method for C ABI access and custom callback
    virtual QTouchEvent* clone() const override {
        if (qtouchevent_clone_callback) {
            QTouchEvent* callback_ret = qtouchevent_clone_callback(this);
            return callback_ret;
        }
        return QTouchEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBeginEvent() const override {
        if (qtouchevent_isbeginevent_callback) {
            bool callback_ret = qtouchevent_isbeginevent_callback(this);
            return callback_ret;
        }
        return QTouchEvent::isBeginEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isUpdateEvent() const override {
        if (qtouchevent_isupdateevent_callback) {
            bool callback_ret = qtouchevent_isupdateevent_callback(this);
            return callback_ret;
        }
        return QTouchEvent::isUpdateEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEndEvent() const override {
        if (qtouchevent_isendevent_callback) {
            bool callback_ret = qtouchevent_isendevent_callback(this);
            return callback_ret;
        }
        return QTouchEvent::isEndEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTimestamp(quint64 timestamp) override {
        if (qtouchevent_settimestamp_callback) {
            unsigned long long cbval1 = static_cast<unsigned long long>(timestamp);
            qtouchevent_settimestamp_callback(this, cbval1);
            return;
        }
        QTouchEvent::setTimestamp(timestamp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtouchevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qtouchevent_setaccepted_callback(this, cbval1);
            return;
        }
        QTouchEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QScrollPrepareEvent
class VirtualQScrollPrepareEvent final : public QScrollPrepareEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScrollPrepareEvent_Clone_Callback = QScrollPrepareEvent* (*)(const QScrollPrepareEvent*);
    using QScrollPrepareEvent_SetAccepted_Callback = void (*)(QScrollPrepareEvent*, bool);

    // Instance callback storage
    QScrollPrepareEvent_Clone_Callback qscrollprepareevent_clone_callback = nullptr;
    QScrollPrepareEvent_SetAccepted_Callback qscrollprepareevent_setaccepted_callback = nullptr;

    VirtualQScrollPrepareEvent(const QPointF& startPos) : QScrollPrepareEvent(startPos) {};

    // Virtual method for C ABI access and custom callback
    virtual QScrollPrepareEvent* clone() const override {
        if (qscrollprepareevent_clone_callback) {
            QScrollPrepareEvent* callback_ret = qscrollprepareevent_clone_callback(this);
            return callback_ret;
        }
        return QScrollPrepareEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscrollprepareevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qscrollprepareevent_setaccepted_callback(this, cbval1);
            return;
        }
        QScrollPrepareEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QScrollEvent
class VirtualQScrollEvent final : public QScrollEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScrollEvent_Clone_Callback = QScrollEvent* (*)(const QScrollEvent*);
    using QScrollEvent_SetAccepted_Callback = void (*)(QScrollEvent*, bool);

    // Instance callback storage
    QScrollEvent_Clone_Callback qscrollevent_clone_callback = nullptr;
    QScrollEvent_SetAccepted_Callback qscrollevent_setaccepted_callback = nullptr;

    VirtualQScrollEvent(const QPointF& contentPos, const QPointF& overshoot, QScrollEvent::ScrollState scrollState) : QScrollEvent(contentPos, overshoot, scrollState) {};

    // Virtual method for C ABI access and custom callback
    virtual QScrollEvent* clone() const override {
        if (qscrollevent_clone_callback) {
            QScrollEvent* callback_ret = qscrollevent_clone_callback(this);
            return callback_ret;
        }
        return QScrollEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscrollevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qscrollevent_setaccepted_callback(this, cbval1);
            return;
        }
        QScrollEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QScreenOrientationChangeEvent
class VirtualQScreenOrientationChangeEvent final : public QScreenOrientationChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScreenOrientationChangeEvent_Clone_Callback = QScreenOrientationChangeEvent* (*)(const QScreenOrientationChangeEvent*);
    using QScreenOrientationChangeEvent_SetAccepted_Callback = void (*)(QScreenOrientationChangeEvent*, bool);

    // Instance callback storage
    QScreenOrientationChangeEvent_Clone_Callback qscreenorientationchangeevent_clone_callback = nullptr;
    QScreenOrientationChangeEvent_SetAccepted_Callback qscreenorientationchangeevent_setaccepted_callback = nullptr;

    VirtualQScreenOrientationChangeEvent(QScreen* screen, Qt::ScreenOrientation orientation) : QScreenOrientationChangeEvent(screen, orientation) {};

    // Virtual method for C ABI access and custom callback
    virtual QScreenOrientationChangeEvent* clone() const override {
        if (qscreenorientationchangeevent_clone_callback) {
            QScreenOrientationChangeEvent* callback_ret = qscreenorientationchangeevent_clone_callback(this);
            return callback_ret;
        }
        return QScreenOrientationChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qscreenorientationchangeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qscreenorientationchangeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QScreenOrientationChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QApplicationStateChangeEvent
class VirtualQApplicationStateChangeEvent final : public QApplicationStateChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QApplicationStateChangeEvent_Clone_Callback = QApplicationStateChangeEvent* (*)(const QApplicationStateChangeEvent*);
    using QApplicationStateChangeEvent_SetAccepted_Callback = void (*)(QApplicationStateChangeEvent*, bool);

    // Instance callback storage
    QApplicationStateChangeEvent_Clone_Callback qapplicationstatechangeevent_clone_callback = nullptr;
    QApplicationStateChangeEvent_SetAccepted_Callback qapplicationstatechangeevent_setaccepted_callback = nullptr;

    VirtualQApplicationStateChangeEvent(Qt::ApplicationState state) : QApplicationStateChangeEvent(state) {};

    // Virtual method for C ABI access and custom callback
    virtual QApplicationStateChangeEvent* clone() const override {
        if (qapplicationstatechangeevent_clone_callback) {
            QApplicationStateChangeEvent* callback_ret = qapplicationstatechangeevent_clone_callback(this);
            return callback_ret;
        }
        return QApplicationStateChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qapplicationstatechangeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qapplicationstatechangeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QApplicationStateChangeEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QChildWindowEvent
class VirtualQChildWindowEvent final : public QChildWindowEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QChildWindowEvent_Clone_Callback = QChildWindowEvent* (*)(const QChildWindowEvent*);
    using QChildWindowEvent_SetAccepted_Callback = void (*)(QChildWindowEvent*, bool);

    // Instance callback storage
    QChildWindowEvent_Clone_Callback qchildwindowevent_clone_callback = nullptr;
    QChildWindowEvent_SetAccepted_Callback qchildwindowevent_setaccepted_callback = nullptr;

    VirtualQChildWindowEvent(QEvent::Type typeVal, QWindow* childWindow) : QChildWindowEvent(typeVal, childWindow) {};

    // Virtual method for C ABI access and custom callback
    virtual QChildWindowEvent* clone() const override {
        if (qchildwindowevent_clone_callback) {
            QChildWindowEvent* callback_ret = qchildwindowevent_clone_callback(this);
            return callback_ret;
        }
        return QChildWindowEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qchildwindowevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qchildwindowevent_setaccepted_callback(this, cbval1);
            return;
        }
        QChildWindowEvent::setAccepted(accepted);
    }
};

#endif
