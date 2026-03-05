#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSSCENEEVENT_H
#define SRCC_LIBVIRTUALQGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsSceneEvent so that we can call protected methods
class VirtualQGraphicsSceneEvent final : public QGraphicsSceneEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneEvent_SetAccepted_Callback = void (*)(QGraphicsSceneEvent*, bool);
    using QGraphicsSceneEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneEvent_SetAccepted_Callback qgraphicssceneevent_setaccepted_callback = nullptr;
    QGraphicsSceneEvent_Clone_Callback qgraphicssceneevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicssceneevent_setaccepted_isbase = false;
    mutable bool qgraphicssceneevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneEvent(QEvent::Type typeVal) : QGraphicsSceneEvent(typeVal) {};

    // Callback setters
    inline void setQGraphicsSceneEvent_SetAccepted_Callback(QGraphicsSceneEvent_SetAccepted_Callback cb) { qgraphicssceneevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneEvent_Clone_Callback(QGraphicsSceneEvent_Clone_Callback cb) { qgraphicssceneevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneEvent_SetAccepted_IsBase(bool value) const { qgraphicssceneevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneEvent_Clone_IsBase(bool value) const { qgraphicssceneevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicssceneevent_setaccepted_isbase) {
            qgraphicssceneevent_setaccepted_isbase = false;
            QGraphicsSceneEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicssceneevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicssceneevent_clone_isbase) {
            qgraphicssceneevent_clone_isbase = false;
            return QGraphicsSceneEvent::clone();
        }
        auto clone_cb = qgraphicssceneevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneMouseEvent so that we can call protected methods
class VirtualQGraphicsSceneMouseEvent final : public QGraphicsSceneMouseEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneMouseEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneMouseEvent_SetAccepted_Callback = void (*)(QGraphicsSceneMouseEvent*, bool);
    using QGraphicsSceneMouseEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneMouseEvent_SetAccepted_Callback qgraphicsscenemouseevent_setaccepted_callback = nullptr;
    QGraphicsSceneMouseEvent_Clone_Callback qgraphicsscenemouseevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenemouseevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenemouseevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneMouseEvent() : QGraphicsSceneMouseEvent() {};
    VirtualQGraphicsSceneMouseEvent(QEvent::Type typeVal) : QGraphicsSceneMouseEvent(typeVal) {};

    // Callback setters
    inline void setQGraphicsSceneMouseEvent_SetAccepted_Callback(QGraphicsSceneMouseEvent_SetAccepted_Callback cb) { qgraphicsscenemouseevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneMouseEvent_Clone_Callback(QGraphicsSceneMouseEvent_Clone_Callback cb) { qgraphicsscenemouseevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneMouseEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenemouseevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneMouseEvent_Clone_IsBase(bool value) const { qgraphicsscenemouseevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenemouseevent_setaccepted_isbase) {
            qgraphicsscenemouseevent_setaccepted_isbase = false;
            QGraphicsSceneMouseEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicsscenemouseevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneMouseEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenemouseevent_clone_isbase) {
            qgraphicsscenemouseevent_clone_isbase = false;
            return QGraphicsSceneMouseEvent::clone();
        }
        auto clone_cb = qgraphicsscenemouseevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneMouseEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneWheelEvent so that we can call protected methods
class VirtualQGraphicsSceneWheelEvent final : public QGraphicsSceneWheelEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneWheelEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneWheelEvent_SetAccepted_Callback = void (*)(QGraphicsSceneWheelEvent*, bool);
    using QGraphicsSceneWheelEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneWheelEvent_SetAccepted_Callback qgraphicsscenewheelevent_setaccepted_callback = nullptr;
    QGraphicsSceneWheelEvent_Clone_Callback qgraphicsscenewheelevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenewheelevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenewheelevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneWheelEvent() : QGraphicsSceneWheelEvent() {};
    VirtualQGraphicsSceneWheelEvent(QEvent::Type typeVal) : QGraphicsSceneWheelEvent(typeVal) {};

    // Callback setters
    inline void setQGraphicsSceneWheelEvent_SetAccepted_Callback(QGraphicsSceneWheelEvent_SetAccepted_Callback cb) { qgraphicsscenewheelevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneWheelEvent_Clone_Callback(QGraphicsSceneWheelEvent_Clone_Callback cb) { qgraphicsscenewheelevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneWheelEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenewheelevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneWheelEvent_Clone_IsBase(bool value) const { qgraphicsscenewheelevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenewheelevent_setaccepted_isbase) {
            qgraphicsscenewheelevent_setaccepted_isbase = false;
            QGraphicsSceneWheelEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicsscenewheelevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneWheelEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenewheelevent_clone_isbase) {
            qgraphicsscenewheelevent_clone_isbase = false;
            return QGraphicsSceneWheelEvent::clone();
        }
        auto clone_cb = qgraphicsscenewheelevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneWheelEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneContextMenuEvent so that we can call protected methods
class VirtualQGraphicsSceneContextMenuEvent final : public QGraphicsSceneContextMenuEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneContextMenuEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneContextMenuEvent_SetAccepted_Callback = void (*)(QGraphicsSceneContextMenuEvent*, bool);
    using QGraphicsSceneContextMenuEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneContextMenuEvent_SetAccepted_Callback qgraphicsscenecontextmenuevent_setaccepted_callback = nullptr;
    QGraphicsSceneContextMenuEvent_Clone_Callback qgraphicsscenecontextmenuevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenecontextmenuevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenecontextmenuevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneContextMenuEvent() : QGraphicsSceneContextMenuEvent() {};
    VirtualQGraphicsSceneContextMenuEvent(QEvent::Type typeVal) : QGraphicsSceneContextMenuEvent(typeVal) {};

    // Callback setters
    inline void setQGraphicsSceneContextMenuEvent_SetAccepted_Callback(QGraphicsSceneContextMenuEvent_SetAccepted_Callback cb) { qgraphicsscenecontextmenuevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneContextMenuEvent_Clone_Callback(QGraphicsSceneContextMenuEvent_Clone_Callback cb) { qgraphicsscenecontextmenuevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneContextMenuEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenecontextmenuevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneContextMenuEvent_Clone_IsBase(bool value) const { qgraphicsscenecontextmenuevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenecontextmenuevent_setaccepted_isbase) {
            qgraphicsscenecontextmenuevent_setaccepted_isbase = false;
            QGraphicsSceneContextMenuEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicsscenecontextmenuevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneContextMenuEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenecontextmenuevent_clone_isbase) {
            qgraphicsscenecontextmenuevent_clone_isbase = false;
            return QGraphicsSceneContextMenuEvent::clone();
        }
        auto clone_cb = qgraphicsscenecontextmenuevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneContextMenuEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneHoverEvent so that we can call protected methods
class VirtualQGraphicsSceneHoverEvent final : public QGraphicsSceneHoverEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneHoverEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneHoverEvent_SetAccepted_Callback = void (*)(QGraphicsSceneHoverEvent*, bool);
    using QGraphicsSceneHoverEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneHoverEvent_SetAccepted_Callback qgraphicsscenehoverevent_setaccepted_callback = nullptr;
    QGraphicsSceneHoverEvent_Clone_Callback qgraphicsscenehoverevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenehoverevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenehoverevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneHoverEvent() : QGraphicsSceneHoverEvent() {};
    VirtualQGraphicsSceneHoverEvent(QEvent::Type typeVal) : QGraphicsSceneHoverEvent(typeVal) {};

    // Callback setters
    inline void setQGraphicsSceneHoverEvent_SetAccepted_Callback(QGraphicsSceneHoverEvent_SetAccepted_Callback cb) { qgraphicsscenehoverevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneHoverEvent_Clone_Callback(QGraphicsSceneHoverEvent_Clone_Callback cb) { qgraphicsscenehoverevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneHoverEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenehoverevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneHoverEvent_Clone_IsBase(bool value) const { qgraphicsscenehoverevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenehoverevent_setaccepted_isbase) {
            qgraphicsscenehoverevent_setaccepted_isbase = false;
            QGraphicsSceneHoverEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicsscenehoverevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneHoverEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenehoverevent_clone_isbase) {
            qgraphicsscenehoverevent_clone_isbase = false;
            return QGraphicsSceneHoverEvent::clone();
        }
        auto clone_cb = qgraphicsscenehoverevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneHoverEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneHelpEvent so that we can call protected methods
class VirtualQGraphicsSceneHelpEvent final : public QGraphicsSceneHelpEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneHelpEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneHelpEvent_SetAccepted_Callback = void (*)(QGraphicsSceneHelpEvent*, bool);
    using QGraphicsSceneHelpEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneHelpEvent_SetAccepted_Callback qgraphicsscenehelpevent_setaccepted_callback = nullptr;
    QGraphicsSceneHelpEvent_Clone_Callback qgraphicsscenehelpevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenehelpevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenehelpevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneHelpEvent() : QGraphicsSceneHelpEvent() {};
    VirtualQGraphicsSceneHelpEvent(QEvent::Type typeVal) : QGraphicsSceneHelpEvent(typeVal) {};

    // Callback setters
    inline void setQGraphicsSceneHelpEvent_SetAccepted_Callback(QGraphicsSceneHelpEvent_SetAccepted_Callback cb) { qgraphicsscenehelpevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneHelpEvent_Clone_Callback(QGraphicsSceneHelpEvent_Clone_Callback cb) { qgraphicsscenehelpevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneHelpEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenehelpevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneHelpEvent_Clone_IsBase(bool value) const { qgraphicsscenehelpevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenehelpevent_setaccepted_isbase) {
            qgraphicsscenehelpevent_setaccepted_isbase = false;
            QGraphicsSceneHelpEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicsscenehelpevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneHelpEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenehelpevent_clone_isbase) {
            qgraphicsscenehelpevent_clone_isbase = false;
            return QGraphicsSceneHelpEvent::clone();
        }
        auto clone_cb = qgraphicsscenehelpevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneHelpEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneDragDropEvent so that we can call protected methods
class VirtualQGraphicsSceneDragDropEvent final : public QGraphicsSceneDragDropEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneDragDropEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneDragDropEvent_SetAccepted_Callback = void (*)(QGraphicsSceneDragDropEvent*, bool);
    using QGraphicsSceneDragDropEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneDragDropEvent_SetAccepted_Callback qgraphicsscenedragdropevent_setaccepted_callback = nullptr;
    QGraphicsSceneDragDropEvent_Clone_Callback qgraphicsscenedragdropevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenedragdropevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenedragdropevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneDragDropEvent() : QGraphicsSceneDragDropEvent() {};
    VirtualQGraphicsSceneDragDropEvent(QEvent::Type typeVal) : QGraphicsSceneDragDropEvent(typeVal) {};

    // Callback setters
    inline void setQGraphicsSceneDragDropEvent_SetAccepted_Callback(QGraphicsSceneDragDropEvent_SetAccepted_Callback cb) { qgraphicsscenedragdropevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneDragDropEvent_Clone_Callback(QGraphicsSceneDragDropEvent_Clone_Callback cb) { qgraphicsscenedragdropevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneDragDropEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenedragdropevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneDragDropEvent_Clone_IsBase(bool value) const { qgraphicsscenedragdropevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenedragdropevent_setaccepted_isbase) {
            qgraphicsscenedragdropevent_setaccepted_isbase = false;
            QGraphicsSceneDragDropEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicsscenedragdropevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneDragDropEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenedragdropevent_clone_isbase) {
            qgraphicsscenedragdropevent_clone_isbase = false;
            return QGraphicsSceneDragDropEvent::clone();
        }
        auto clone_cb = qgraphicsscenedragdropevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneDragDropEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneResizeEvent so that we can call protected methods
class VirtualQGraphicsSceneResizeEvent final : public QGraphicsSceneResizeEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneResizeEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneResizeEvent_SetAccepted_Callback = void (*)(QGraphicsSceneResizeEvent*, bool);
    using QGraphicsSceneResizeEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneResizeEvent_SetAccepted_Callback qgraphicssceneresizeevent_setaccepted_callback = nullptr;
    QGraphicsSceneResizeEvent_Clone_Callback qgraphicssceneresizeevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicssceneresizeevent_setaccepted_isbase = false;
    mutable bool qgraphicssceneresizeevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneResizeEvent() : QGraphicsSceneResizeEvent() {};

    // Callback setters
    inline void setQGraphicsSceneResizeEvent_SetAccepted_Callback(QGraphicsSceneResizeEvent_SetAccepted_Callback cb) { qgraphicssceneresizeevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneResizeEvent_Clone_Callback(QGraphicsSceneResizeEvent_Clone_Callback cb) { qgraphicssceneresizeevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneResizeEvent_SetAccepted_IsBase(bool value) const { qgraphicssceneresizeevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneResizeEvent_Clone_IsBase(bool value) const { qgraphicssceneresizeevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicssceneresizeevent_setaccepted_isbase) {
            qgraphicssceneresizeevent_setaccepted_isbase = false;
            QGraphicsSceneResizeEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicssceneresizeevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneResizeEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicssceneresizeevent_clone_isbase) {
            qgraphicssceneresizeevent_clone_isbase = false;
            return QGraphicsSceneResizeEvent::clone();
        }
        auto clone_cb = qgraphicssceneresizeevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneResizeEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneMoveEvent so that we can call protected methods
class VirtualQGraphicsSceneMoveEvent final : public QGraphicsSceneMoveEvent {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSceneMoveEvent = true;

    // Virtual class public types (including callbacks)
    using QGraphicsSceneMoveEvent_SetAccepted_Callback = void (*)(QGraphicsSceneMoveEvent*, bool);
    using QGraphicsSceneMoveEvent_Clone_Callback = QEvent* (*)();

  protected:
    // Instance callback storage
    QGraphicsSceneMoveEvent_SetAccepted_Callback qgraphicsscenemoveevent_setaccepted_callback = nullptr;
    QGraphicsSceneMoveEvent_Clone_Callback qgraphicsscenemoveevent_clone_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscenemoveevent_setaccepted_isbase = false;
    mutable bool qgraphicsscenemoveevent_clone_isbase = false;

  public:
    VirtualQGraphicsSceneMoveEvent() : QGraphicsSceneMoveEvent() {};

    // Callback setters
    inline void setQGraphicsSceneMoveEvent_SetAccepted_Callback(QGraphicsSceneMoveEvent_SetAccepted_Callback cb) { qgraphicsscenemoveevent_setaccepted_callback = cb; }
    inline void setQGraphicsSceneMoveEvent_Clone_Callback(QGraphicsSceneMoveEvent_Clone_Callback cb) { qgraphicsscenemoveevent_clone_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSceneMoveEvent_SetAccepted_IsBase(bool value) const { qgraphicsscenemoveevent_setaccepted_isbase = value; }
    inline void setQGraphicsSceneMoveEvent_Clone_IsBase(bool value) const { qgraphicsscenemoveevent_clone_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenemoveevent_setaccepted_isbase) {
            qgraphicsscenemoveevent_setaccepted_isbase = false;
            QGraphicsSceneMoveEvent::setAccepted(accepted);
            return;
        }
        auto setaccepted_cb = qgraphicsscenemoveevent_setaccepted_callback;
        if (setaccepted_cb) {
            bool cbval1 = accepted;

            setaccepted_cb(this, cbval1);
            return;
        }
        QGraphicsSceneMoveEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenemoveevent_clone_isbase) {
            qgraphicsscenemoveevent_clone_isbase = false;
            return QGraphicsSceneMoveEvent::clone();
        }
        auto clone_cb = qgraphicsscenemoveevent_clone_callback;
        if (clone_cb) {
            QEvent* callback_ret = clone_cb();
            return callback_ret;
        }
        return QGraphicsSceneMoveEvent::clone();
    }
};

#endif
