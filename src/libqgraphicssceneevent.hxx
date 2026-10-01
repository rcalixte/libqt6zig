#pragma once
#ifndef LIBQGRAPHICSSCENEEVENT_HXX
#define LIBQGRAPHICSSCENEEVENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsSceneEvent
class VirtualQGraphicsSceneEvent final : public QGraphicsSceneEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneEvent_SetAccepted_Callback = void (*)(QGraphicsSceneEvent*, bool);
    using QGraphicsSceneEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneEvent*);

    // Instance callback storage
    QGraphicsSceneEvent_SetAccepted_Callback qgraphicssceneevent_setaccepted_callback = nullptr;
    QGraphicsSceneEvent_Clone_Callback qgraphicssceneevent_clone_callback = nullptr;

    VirtualQGraphicsSceneEvent(QEvent::Type typeVal) : QGraphicsSceneEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicssceneevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicssceneevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicssceneevent_clone_callback) {
            QEvent* callback_ret = qgraphicssceneevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneMouseEvent
class VirtualQGraphicsSceneMouseEvent final : public QGraphicsSceneMouseEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneMouseEvent_SetAccepted_Callback = void (*)(QGraphicsSceneMouseEvent*, bool);
    using QGraphicsSceneMouseEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneMouseEvent*);

    // Instance callback storage
    QGraphicsSceneMouseEvent_SetAccepted_Callback qgraphicsscenemouseevent_setaccepted_callback = nullptr;
    QGraphicsSceneMouseEvent_Clone_Callback qgraphicsscenemouseevent_clone_callback = nullptr;

    VirtualQGraphicsSceneMouseEvent() : QGraphicsSceneMouseEvent() {};
    VirtualQGraphicsSceneMouseEvent(QEvent::Type typeVal) : QGraphicsSceneMouseEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenemouseevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicsscenemouseevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneMouseEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenemouseevent_clone_callback) {
            QEvent* callback_ret = qgraphicsscenemouseevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneMouseEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneWheelEvent
class VirtualQGraphicsSceneWheelEvent final : public QGraphicsSceneWheelEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneWheelEvent_SetAccepted_Callback = void (*)(QGraphicsSceneWheelEvent*, bool);
    using QGraphicsSceneWheelEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneWheelEvent*);

    // Instance callback storage
    QGraphicsSceneWheelEvent_SetAccepted_Callback qgraphicsscenewheelevent_setaccepted_callback = nullptr;
    QGraphicsSceneWheelEvent_Clone_Callback qgraphicsscenewheelevent_clone_callback = nullptr;

    VirtualQGraphicsSceneWheelEvent() : QGraphicsSceneWheelEvent() {};
    VirtualQGraphicsSceneWheelEvent(QEvent::Type typeVal) : QGraphicsSceneWheelEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenewheelevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicsscenewheelevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneWheelEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenewheelevent_clone_callback) {
            QEvent* callback_ret = qgraphicsscenewheelevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneWheelEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneContextMenuEvent
class VirtualQGraphicsSceneContextMenuEvent final : public QGraphicsSceneContextMenuEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneContextMenuEvent_SetAccepted_Callback = void (*)(QGraphicsSceneContextMenuEvent*, bool);
    using QGraphicsSceneContextMenuEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneContextMenuEvent*);

    // Instance callback storage
    QGraphicsSceneContextMenuEvent_SetAccepted_Callback qgraphicsscenecontextmenuevent_setaccepted_callback = nullptr;
    QGraphicsSceneContextMenuEvent_Clone_Callback qgraphicsscenecontextmenuevent_clone_callback = nullptr;

    VirtualQGraphicsSceneContextMenuEvent() : QGraphicsSceneContextMenuEvent() {};
    VirtualQGraphicsSceneContextMenuEvent(QEvent::Type typeVal) : QGraphicsSceneContextMenuEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenecontextmenuevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicsscenecontextmenuevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneContextMenuEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenecontextmenuevent_clone_callback) {
            QEvent* callback_ret = qgraphicsscenecontextmenuevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneContextMenuEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneHoverEvent
class VirtualQGraphicsSceneHoverEvent final : public QGraphicsSceneHoverEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneHoverEvent_SetAccepted_Callback = void (*)(QGraphicsSceneHoverEvent*, bool);
    using QGraphicsSceneHoverEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneHoverEvent*);

    // Instance callback storage
    QGraphicsSceneHoverEvent_SetAccepted_Callback qgraphicsscenehoverevent_setaccepted_callback = nullptr;
    QGraphicsSceneHoverEvent_Clone_Callback qgraphicsscenehoverevent_clone_callback = nullptr;

    VirtualQGraphicsSceneHoverEvent() : QGraphicsSceneHoverEvent() {};
    VirtualQGraphicsSceneHoverEvent(QEvent::Type typeVal) : QGraphicsSceneHoverEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenehoverevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicsscenehoverevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneHoverEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenehoverevent_clone_callback) {
            QEvent* callback_ret = qgraphicsscenehoverevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneHoverEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneHelpEvent
class VirtualQGraphicsSceneHelpEvent final : public QGraphicsSceneHelpEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneHelpEvent_SetAccepted_Callback = void (*)(QGraphicsSceneHelpEvent*, bool);
    using QGraphicsSceneHelpEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneHelpEvent*);

    // Instance callback storage
    QGraphicsSceneHelpEvent_SetAccepted_Callback qgraphicsscenehelpevent_setaccepted_callback = nullptr;
    QGraphicsSceneHelpEvent_Clone_Callback qgraphicsscenehelpevent_clone_callback = nullptr;

    VirtualQGraphicsSceneHelpEvent() : QGraphicsSceneHelpEvent() {};
    VirtualQGraphicsSceneHelpEvent(QEvent::Type typeVal) : QGraphicsSceneHelpEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenehelpevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicsscenehelpevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneHelpEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenehelpevent_clone_callback) {
            QEvent* callback_ret = qgraphicsscenehelpevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneHelpEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneDragDropEvent
class VirtualQGraphicsSceneDragDropEvent final : public QGraphicsSceneDragDropEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneDragDropEvent_SetAccepted_Callback = void (*)(QGraphicsSceneDragDropEvent*, bool);
    using QGraphicsSceneDragDropEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneDragDropEvent*);

    // Instance callback storage
    QGraphicsSceneDragDropEvent_SetAccepted_Callback qgraphicsscenedragdropevent_setaccepted_callback = nullptr;
    QGraphicsSceneDragDropEvent_Clone_Callback qgraphicsscenedragdropevent_clone_callback = nullptr;

    VirtualQGraphicsSceneDragDropEvent() : QGraphicsSceneDragDropEvent() {};
    VirtualQGraphicsSceneDragDropEvent(QEvent::Type typeVal) : QGraphicsSceneDragDropEvent(typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenedragdropevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicsscenedragdropevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneDragDropEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenedragdropevent_clone_callback) {
            QEvent* callback_ret = qgraphicsscenedragdropevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneDragDropEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneResizeEvent
class VirtualQGraphicsSceneResizeEvent final : public QGraphicsSceneResizeEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneResizeEvent_SetAccepted_Callback = void (*)(QGraphicsSceneResizeEvent*, bool);
    using QGraphicsSceneResizeEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneResizeEvent*);

    // Instance callback storage
    QGraphicsSceneResizeEvent_SetAccepted_Callback qgraphicssceneresizeevent_setaccepted_callback = nullptr;
    QGraphicsSceneResizeEvent_Clone_Callback qgraphicssceneresizeevent_clone_callback = nullptr;

    VirtualQGraphicsSceneResizeEvent() : QGraphicsSceneResizeEvent() {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicssceneresizeevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicssceneresizeevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneResizeEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicssceneresizeevent_clone_callback) {
            QEvent* callback_ret = qgraphicssceneresizeevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneResizeEvent::clone();
    }
};

// This class is a subclass of QGraphicsSceneMoveEvent
class VirtualQGraphicsSceneMoveEvent final : public QGraphicsSceneMoveEvent {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsSceneMoveEvent_SetAccepted_Callback = void (*)(QGraphicsSceneMoveEvent*, bool);
    using QGraphicsSceneMoveEvent_Clone_Callback = QEvent* (*)(const QGraphicsSceneMoveEvent*);

    // Instance callback storage
    QGraphicsSceneMoveEvent_SetAccepted_Callback qgraphicsscenemoveevent_setaccepted_callback = nullptr;
    QGraphicsSceneMoveEvent_Clone_Callback qgraphicsscenemoveevent_clone_callback = nullptr;

    VirtualQGraphicsSceneMoveEvent() : QGraphicsSceneMoveEvent() {};

    // Virtual method for C ABI access and custom callback
    virtual void setAccepted(bool accepted) override {
        if (qgraphicsscenemoveevent_setaccepted_callback) {
            bool cbval1 = accepted;
            qgraphicsscenemoveevent_setaccepted_callback(this, cbval1);
            return;
        }
        QGraphicsSceneMoveEvent::setAccepted(accepted);
    }

    // Virtual method for C ABI access and custom callback
    virtual QEvent* clone() const override {
        if (qgraphicsscenemoveevent_clone_callback) {
            QEvent* callback_ret = qgraphicsscenemoveevent_clone_callback(this);
            return callback_ret;
        }
        return QGraphicsSceneMoveEvent::clone();
    }
};

#endif
