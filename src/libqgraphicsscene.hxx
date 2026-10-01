#pragma once
#ifndef LIBQGRAPHICSSCENE_HXX
#define LIBQGRAPHICSSCENE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsScene
class VirtualQGraphicsScene final : public QGraphicsScene {
  public:
    // Virtual class public types (including callbacks and access types)
    using QGraphicsScene_MetaObject_Callback = QMetaObject* (*)(const QGraphicsScene*);
    using QGraphicsScene_Metacast_Callback = void* (*)(QGraphicsScene*, const char*);
    using QGraphicsScene_Metacall_Callback = int (*)(QGraphicsScene*, int, int, void**);
    using QGraphicsScene_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsScene*, int);
    using QGraphicsScene_Event_Callback = bool (*)(QGraphicsScene*, QEvent*);
    using QGraphicsScene_EventFilter_Callback = bool (*)(QGraphicsScene*, QObject*, QEvent*);
    using QGraphicsScene_ContextMenuEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsScene_DragEnterEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_DragMoveEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_DragLeaveEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_DropEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_FocusInEvent_Callback = void (*)(QGraphicsScene*, QFocusEvent*);
    using QGraphicsScene_FocusOutEvent_Callback = void (*)(QGraphicsScene*, QFocusEvent*);
    using QGraphicsScene_HelpEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneHelpEvent*);
    using QGraphicsScene_KeyPressEvent_Callback = void (*)(QGraphicsScene*, QKeyEvent*);
    using QGraphicsScene_KeyReleaseEvent_Callback = void (*)(QGraphicsScene*, QKeyEvent*);
    using QGraphicsScene_MousePressEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_MouseMoveEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_MouseReleaseEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_MouseDoubleClickEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_WheelEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneWheelEvent*);
    using QGraphicsScene_InputMethodEvent_Callback = void (*)(QGraphicsScene*, QInputMethodEvent*);
    using QGraphicsScene_DrawBackground_Callback = void (*)(QGraphicsScene*, QPainter*, QRectF*);
    using QGraphicsScene_DrawForeground_Callback = void (*)(QGraphicsScene*, QPainter*, QRectF*);
    using QGraphicsScene_DrawItems_Callback = void (*)(QGraphicsScene*, QPainter*, int, QGraphicsItem**, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsScene_FocusNextPrevChild_Callback = bool (*)(QGraphicsScene*, bool);
    using QGraphicsScene_TimerEvent_Callback = void (*)(QGraphicsScene*, QTimerEvent*);
    using QGraphicsScene_ChildEvent_Callback = void (*)(QGraphicsScene*, QChildEvent*);
    using QGraphicsScene_CustomEvent_Callback = void (*)(QGraphicsScene*, QEvent*);
    using QGraphicsScene_ConnectNotify_Callback = void (*)(QGraphicsScene*, QMetaMethod*);
    using QGraphicsScene_DisconnectNotify_Callback = void (*)(QGraphicsScene*, QMetaMethod*);
    using QGraphicsScene::isSignalConnected;
    using QGraphicsScene::receivers;
    using QGraphicsScene::sender;
    using QGraphicsScene::senderSignalIndex;

    // Instance callback storage
    QGraphicsScene_MetaObject_Callback qgraphicsscene_metaobject_callback = nullptr;
    QGraphicsScene_Metacast_Callback qgraphicsscene_metacast_callback = nullptr;
    QGraphicsScene_Metacall_Callback qgraphicsscene_metacall_callback = nullptr;
    QGraphicsScene_InputMethodQuery_Callback qgraphicsscene_inputmethodquery_callback = nullptr;
    QGraphicsScene_Event_Callback qgraphicsscene_event_callback = nullptr;
    QGraphicsScene_EventFilter_Callback qgraphicsscene_eventfilter_callback = nullptr;
    QGraphicsScene_ContextMenuEvent_Callback qgraphicsscene_contextmenuevent_callback = nullptr;
    QGraphicsScene_DragEnterEvent_Callback qgraphicsscene_dragenterevent_callback = nullptr;
    QGraphicsScene_DragMoveEvent_Callback qgraphicsscene_dragmoveevent_callback = nullptr;
    QGraphicsScene_DragLeaveEvent_Callback qgraphicsscene_dragleaveevent_callback = nullptr;
    QGraphicsScene_DropEvent_Callback qgraphicsscene_dropevent_callback = nullptr;
    QGraphicsScene_FocusInEvent_Callback qgraphicsscene_focusinevent_callback = nullptr;
    QGraphicsScene_FocusOutEvent_Callback qgraphicsscene_focusoutevent_callback = nullptr;
    QGraphicsScene_HelpEvent_Callback qgraphicsscene_helpevent_callback = nullptr;
    QGraphicsScene_KeyPressEvent_Callback qgraphicsscene_keypressevent_callback = nullptr;
    QGraphicsScene_KeyReleaseEvent_Callback qgraphicsscene_keyreleaseevent_callback = nullptr;
    QGraphicsScene_MousePressEvent_Callback qgraphicsscene_mousepressevent_callback = nullptr;
    QGraphicsScene_MouseMoveEvent_Callback qgraphicsscene_mousemoveevent_callback = nullptr;
    QGraphicsScene_MouseReleaseEvent_Callback qgraphicsscene_mousereleaseevent_callback = nullptr;
    QGraphicsScene_MouseDoubleClickEvent_Callback qgraphicsscene_mousedoubleclickevent_callback = nullptr;
    QGraphicsScene_WheelEvent_Callback qgraphicsscene_wheelevent_callback = nullptr;
    QGraphicsScene_InputMethodEvent_Callback qgraphicsscene_inputmethodevent_callback = nullptr;
    QGraphicsScene_DrawBackground_Callback qgraphicsscene_drawbackground_callback = nullptr;
    QGraphicsScene_DrawForeground_Callback qgraphicsscene_drawforeground_callback = nullptr;
    QGraphicsScene_DrawItems_Callback qgraphicsscene_drawitems_callback = nullptr;
    QGraphicsScene_FocusNextPrevChild_Callback qgraphicsscene_focusnextprevchild_callback = nullptr;
    QGraphicsScene_TimerEvent_Callback qgraphicsscene_timerevent_callback = nullptr;
    QGraphicsScene_ChildEvent_Callback qgraphicsscene_childevent_callback = nullptr;
    QGraphicsScene_CustomEvent_Callback qgraphicsscene_customevent_callback = nullptr;
    QGraphicsScene_ConnectNotify_Callback qgraphicsscene_connectnotify_callback = nullptr;
    QGraphicsScene_DisconnectNotify_Callback qgraphicsscene_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QGraphicsScene {
        using QGraphicsScene::childEvent;
        using QGraphicsScene::connectNotify;
        using QGraphicsScene::contextMenuEvent;
        using QGraphicsScene::customEvent;
        using QGraphicsScene::disconnectNotify;
        using QGraphicsScene::dragEnterEvent;
        using QGraphicsScene::dragLeaveEvent;
        using QGraphicsScene::dragMoveEvent;
        using QGraphicsScene::drawBackground;
        using QGraphicsScene::drawForeground;
        using QGraphicsScene::drawItems;
        using QGraphicsScene::dropEvent;
        using QGraphicsScene::event;
        using QGraphicsScene::eventFilter;
        using QGraphicsScene::focusInEvent;
        using QGraphicsScene::focusNextPrevChild;
        using QGraphicsScene::focusOutEvent;
        using QGraphicsScene::helpEvent;
        using QGraphicsScene::inputMethodEvent;
        using QGraphicsScene::keyPressEvent;
        using QGraphicsScene::keyReleaseEvent;
        using QGraphicsScene::mouseDoubleClickEvent;
        using QGraphicsScene::mouseMoveEvent;
        using QGraphicsScene::mousePressEvent;
        using QGraphicsScene::mouseReleaseEvent;
        using QGraphicsScene::timerEvent;
        using QGraphicsScene::wheelEvent;
    };

    VirtualQGraphicsScene() : QGraphicsScene() {};
    VirtualQGraphicsScene(const QRectF& sceneRect) : QGraphicsScene(sceneRect) {};
    VirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height) : QGraphicsScene(x, y, width, height) {};
    VirtualQGraphicsScene(QObject* parent) : QGraphicsScene(parent) {};
    VirtualQGraphicsScene(const QRectF& sceneRect, QObject* parent) : QGraphicsScene(sceneRect, parent) {};
    VirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height, QObject* parent) : QGraphicsScene(x, y, width, height, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsscene_metaobject_callback) {
            QMetaObject* callback_ret = qgraphicsscene_metaobject_callback(this);
            return callback_ret;
        }
        return QGraphicsScene::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsscene_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qgraphicsscene_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsScene::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsscene_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qgraphicsscene_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsScene::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsscene_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qgraphicsscene_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QGraphicsScene::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsscene_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qgraphicsscene_event_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsScene::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsscene_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qgraphicsscene_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsScene::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsscene_contextmenuevent_callback) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;
            qgraphicsscene_contextmenuevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dragenterevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsscene_dragenterevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dragmoveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsscene_dragmoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dragleaveevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsscene_dragleaveevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dropevent_callback) {
            QGraphicsSceneDragDropEvent* cbval1 = event;
            qgraphicsscene_dropevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsscene_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsscene_focusinevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsscene_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qgraphicsscene_focusoutevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void helpEvent(QGraphicsSceneHelpEvent* event) override {
        if (qgraphicsscene_helpevent_callback) {
            QGraphicsSceneHelpEvent* cbval1 = event;
            qgraphicsscene_helpevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::helpEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsscene_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsscene_keypressevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsscene_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qgraphicsscene_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousepressevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsscene_mousepressevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousemoveevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsscene_mousemoveevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousereleaseevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsscene_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousedoubleclickevent_callback) {
            QGraphicsSceneMouseEvent* cbval1 = event;
            qgraphicsscene_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsscene_wheelevent_callback) {
            QGraphicsSceneWheelEvent* cbval1 = event;
            qgraphicsscene_wheelevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsscene_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = event;
            qgraphicsscene_inputmethodevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsscene_drawbackground_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            qgraphicsscene_drawbackground_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsScene::drawBackground(painter, rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsscene_drawforeground_callback) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            qgraphicsscene_drawforeground_callback(this, cbval1, cbval2);
            return;
        }
        QGraphicsScene::drawForeground(painter, rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItems(QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget) override {
        if (qgraphicsscene_drawitems_callback) {
            QPainter* cbval1 = painter;
            int cbval2 = numItems;
            QGraphicsItem** cbval3 = items;
            QStyleOptionGraphicsItem* cbval4 = (QStyleOptionGraphicsItem*)options;
            QWidget* cbval5 = widget;
            qgraphicsscene_drawitems_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return;
        }
        QGraphicsScene::drawItems(painter, numItems, items, options, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsscene_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qgraphicsscene_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QGraphicsScene::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsscene_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qgraphicsscene_timerevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsscene_childevent_callback) {
            QChildEvent* cbval1 = event;
            qgraphicsscene_childevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsscene_customevent_callback) {
            QEvent* cbval1 = event;
            qgraphicsscene_customevent_callback(this, cbval1);
            return;
        }
        QGraphicsScene::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscene_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsscene_connectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsScene::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscene_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qgraphicsscene_disconnectnotify_callback(this, cbval1);
            return;
        }
        QGraphicsScene::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QGraphicsScene_SuperEvent(QGraphicsScene* self, QEvent* event);
    friend bool QGraphicsScene_SuperEventFilter(QGraphicsScene* self, QObject* watched, QEvent* event);
    friend void QGraphicsScene_SuperContextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsScene_SuperDragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsScene_SuperDragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsScene_SuperDragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsScene_SuperDropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsScene_SuperFocusInEvent(QGraphicsScene* self, QFocusEvent* event);
    friend void QGraphicsScene_SuperFocusOutEvent(QGraphicsScene* self, QFocusEvent* event);
    friend void QGraphicsScene_SuperHelpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event);
    friend void QGraphicsScene_SuperKeyPressEvent(QGraphicsScene* self, QKeyEvent* event);
    friend void QGraphicsScene_SuperKeyReleaseEvent(QGraphicsScene* self, QKeyEvent* event);
    friend void QGraphicsScene_SuperMousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsScene_SuperMouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsScene_SuperMouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsScene_SuperMouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsScene_SuperWheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsScene_SuperInputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event);
    friend void QGraphicsScene_SuperDrawBackground(QGraphicsScene* self, QPainter* painter, const QRectF* rect);
    friend void QGraphicsScene_SuperDrawForeground(QGraphicsScene* self, QPainter* painter, const QRectF* rect);
    friend void QGraphicsScene_SuperDrawItems(QGraphicsScene* self, QPainter* painter, int numItems, QGraphicsItem** items, const QStyleOptionGraphicsItem* options, QWidget* widget);
    friend bool QGraphicsScene_SuperFocusNextPrevChild(QGraphicsScene* self, bool next);
    friend void QGraphicsScene_SuperTimerEvent(QGraphicsScene* self, QTimerEvent* event);
    friend void QGraphicsScene_SuperChildEvent(QGraphicsScene* self, QChildEvent* event);
    friend void QGraphicsScene_SuperCustomEvent(QGraphicsScene* self, QEvent* event);
    friend void QGraphicsScene_SuperConnectNotify(QGraphicsScene* self, const QMetaMethod* signal);
    friend void QGraphicsScene_SuperDisconnectNotify(QGraphicsScene* self, const QMetaMethod* signal);
};

#endif
