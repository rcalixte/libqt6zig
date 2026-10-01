#pragma once
#ifndef LIBQCOREEVENT_HXX
#define LIBQCOREEVENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QEvent
class VirtualQEvent final : public QEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QEvent_SetAccepted_Callback = void (*)(QEvent*, bool);
    using QEvent_Clone_Callback = QEvent* (*)(const QEvent*);

    // Instance callback storage
    QEvent_SetAccepted_Callback qevent_setaccepted_callback = nullptr;
    QEvent_Clone_Callback qevent_clone_callback = nullptr;

    VirtualQEvent(QEvent::Type typeVal) : QEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qevent_setaccepted_callback(this, cbval1);
            return;
        }
        QEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qevent_clone_callback) {
            QEvent* callback_ret = qevent_clone_callback(this);
            return callback_ret;
        }
        return QEvent::clone();
    }
};

// This class is a subclass of QTimerEvent
class VirtualQTimerEvent final : public QTimerEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTimerEvent_Clone_Callback = QTimerEvent* (*)(const QTimerEvent*);
    using QTimerEvent_SetAccepted_Callback = void (*)(QTimerEvent*, bool);

    // Instance callback storage
    QTimerEvent_Clone_Callback qtimerevent_clone_callback = nullptr;
    QTimerEvent_SetAccepted_Callback qtimerevent_setaccepted_callback = nullptr;

    VirtualQTimerEvent(int timerId) : QTimerEvent(timerId) {};
    VirtualQTimerEvent(Qt::TimerId timerId) : QTimerEvent(timerId) {};

    // Virtual method for C ABI access and custom callback
    virtual QTimerEvent* clone() const override {
        if (qtimerevent_clone_callback) {
            QTimerEvent* callback_ret = qtimerevent_clone_callback(this);
            return callback_ret;
        }
        return QTimerEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qtimerevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qtimerevent_setaccepted_callback(this, cbval1);
            return;
        }
        QTimerEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QChildEvent
class VirtualQChildEvent final : public QChildEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QChildEvent_Clone_Callback = QChildEvent* (*)(const QChildEvent*);
    using QChildEvent_SetAccepted_Callback = void (*)(QChildEvent*, bool);

    // Instance callback storage
    QChildEvent_Clone_Callback qchildevent_clone_callback = nullptr;
    QChildEvent_SetAccepted_Callback qchildevent_setaccepted_callback = nullptr;

    VirtualQChildEvent(QEvent::Type typeVal, QObject* child) : QChildEvent(typeVal, child) {};

    // Virtual method for C ABI access and custom callback
    virtual QChildEvent* clone() const override {
        if (qchildevent_clone_callback) {
            QChildEvent* callback_ret = qchildevent_clone_callback(this);
            return callback_ret;
        }
        return QChildEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qchildevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qchildevent_setaccepted_callback(this, cbval1);
            return;
        }
        QChildEvent::setAccepted(accepted);
    }
};

// This class is a subclass of QDynamicPropertyChangeEvent
class VirtualQDynamicPropertyChangeEvent final : public QDynamicPropertyChangeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDynamicPropertyChangeEvent_Clone_Callback = QDynamicPropertyChangeEvent* (*)(const QDynamicPropertyChangeEvent*);
    using QDynamicPropertyChangeEvent_SetAccepted_Callback = void (*)(QDynamicPropertyChangeEvent*, bool);

    // Instance callback storage
    QDynamicPropertyChangeEvent_Clone_Callback qdynamicpropertychangeevent_clone_callback = nullptr;
    QDynamicPropertyChangeEvent_SetAccepted_Callback qdynamicpropertychangeevent_setaccepted_callback = nullptr;

    VirtualQDynamicPropertyChangeEvent(const QByteArray& name) : QDynamicPropertyChangeEvent(name) {};

    // Virtual method for C ABI access and custom callback
    virtual QDynamicPropertyChangeEvent* clone() const override {
        if (qdynamicpropertychangeevent_clone_callback) {
            QDynamicPropertyChangeEvent* callback_ret = qdynamicpropertychangeevent_clone_callback(this);
            return callback_ret;
        }
        return QDynamicPropertyChangeEvent::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qdynamicpropertychangeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qdynamicpropertychangeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QDynamicPropertyChangeEvent::setAccepted(accepted);
    }
};

#endif
