#pragma once
#ifndef QUICK_LIBQQUICKPAINTEDITEM_HXX
#define QUICK_LIBQQUICKPAINTEDITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickPaintedItem
class VirtualQQuickPaintedItem : public QQuickPaintedItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickPaintedItem_MetaObject_Callback = QMetaObject* (*)(const QQuickPaintedItem*);
    using QQuickPaintedItem_Metacast_Callback = void* (*)(QQuickPaintedItem*, const char*);
    using QQuickPaintedItem_Metacall_Callback = int (*)(QQuickPaintedItem*, int, int, void**);
    using QQuickPaintedItem_Paint_Callback = void (*)(QQuickPaintedItem*, QPainter*);
    using QQuickPaintedItem_IsTextureProvider_Callback = bool (*)(const QQuickPaintedItem*);
    using QQuickPaintedItem_TextureProvider_Callback = QSGTextureProvider* (*)(const QQuickPaintedItem*);
    using QQuickPaintedItem_UpdatePaintNode_Callback = QSGNode* (*)(QQuickPaintedItem*, QSGNode*, QQuickItem__UpdatePaintNodeData*);
    using QQuickPaintedItem_ReleaseResources_Callback = void (*)(QQuickPaintedItem*);
    using QQuickPaintedItem_ItemChange_Callback = void (*)(QQuickPaintedItem*, int, QQuickItem__ItemChangeData*);
    using QQuickPaintedItem_BoundingRect_Callback = QRectF* (*)(const QQuickPaintedItem*);
    using QQuickPaintedItem_ClipRect_Callback = QRectF* (*)(const QQuickPaintedItem*);
    using QQuickPaintedItem_Contains_Callback = bool (*)(const QQuickPaintedItem*, QPointF*);
    using QQuickPaintedItem_InputMethodQuery_Callback = QVariant* (*)(const QQuickPaintedItem*, int);
    using QQuickPaintedItem_Event_Callback = bool (*)(QQuickPaintedItem*, QEvent*);
    using QQuickPaintedItem_GeometryChange_Callback = void (*)(QQuickPaintedItem*, QRectF*, QRectF*);
    using QQuickPaintedItem_ClassBegin_Callback = void (*)(QQuickPaintedItem*);
    using QQuickPaintedItem_ComponentComplete_Callback = void (*)(QQuickPaintedItem*);
    using QQuickPaintedItem_KeyPressEvent_Callback = void (*)(QQuickPaintedItem*, QKeyEvent*);
    using QQuickPaintedItem_KeyReleaseEvent_Callback = void (*)(QQuickPaintedItem*, QKeyEvent*);
    using QQuickPaintedItem_InputMethodEvent_Callback = void (*)(QQuickPaintedItem*, QInputMethodEvent*);
    using QQuickPaintedItem_FocusInEvent_Callback = void (*)(QQuickPaintedItem*, QFocusEvent*);
    using QQuickPaintedItem_FocusOutEvent_Callback = void (*)(QQuickPaintedItem*, QFocusEvent*);
    using QQuickPaintedItem_MousePressEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseMoveEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseReleaseEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseDoubleClickEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseUngrabEvent_Callback = void (*)(QQuickPaintedItem*);
    using QQuickPaintedItem_TouchUngrabEvent_Callback = void (*)(QQuickPaintedItem*);
    using QQuickPaintedItem_WheelEvent_Callback = void (*)(QQuickPaintedItem*, QWheelEvent*);
    using QQuickPaintedItem_TouchEvent_Callback = void (*)(QQuickPaintedItem*, QTouchEvent*);
    using QQuickPaintedItem_HoverEnterEvent_Callback = void (*)(QQuickPaintedItem*, QHoverEvent*);
    using QQuickPaintedItem_HoverMoveEvent_Callback = void (*)(QQuickPaintedItem*, QHoverEvent*);
    using QQuickPaintedItem_HoverLeaveEvent_Callback = void (*)(QQuickPaintedItem*, QHoverEvent*);
    using QQuickPaintedItem_DragEnterEvent_Callback = void (*)(QQuickPaintedItem*, QDragEnterEvent*);
    using QQuickPaintedItem_DragMoveEvent_Callback = void (*)(QQuickPaintedItem*, QDragMoveEvent*);
    using QQuickPaintedItem_DragLeaveEvent_Callback = void (*)(QQuickPaintedItem*, QDragLeaveEvent*);
    using QQuickPaintedItem_DropEvent_Callback = void (*)(QQuickPaintedItem*, QDropEvent*);
    using QQuickPaintedItem_ChildMouseEventFilter_Callback = bool (*)(QQuickPaintedItem*, QQuickItem*, QEvent*);
    using QQuickPaintedItem_UpdatePolish_Callback = void (*)(QQuickPaintedItem*);
    using QQuickPaintedItem_EventFilter_Callback = bool (*)(QQuickPaintedItem*, QObject*, QEvent*);
    using QQuickPaintedItem_TimerEvent_Callback = void (*)(QQuickPaintedItem*, QTimerEvent*);
    using QQuickPaintedItem_ChildEvent_Callback = void (*)(QQuickPaintedItem*, QChildEvent*);
    using QQuickPaintedItem_CustomEvent_Callback = void (*)(QQuickPaintedItem*, QEvent*);
    using QQuickPaintedItem_ConnectNotify_Callback = void (*)(QQuickPaintedItem*, QMetaMethod*);
    using QQuickPaintedItem_DisconnectNotify_Callback = void (*)(QQuickPaintedItem*, QMetaMethod*);
    using QQuickPaintedItem::heightValid;
    using QQuickPaintedItem::isComponentComplete;
    using QQuickPaintedItem::isSignalConnected;
    using QQuickPaintedItem::receivers;
    using QQuickPaintedItem::sender;
    using QQuickPaintedItem::senderSignalIndex;
    using QQuickPaintedItem::setImplicitSize;
    using QQuickPaintedItem::updateInputMethod;
    using QQuickPaintedItem::widthValid;

    // Instance callback storage
    QQuickPaintedItem_MetaObject_Callback qquickpainteditem_metaobject_callback = nullptr;
    QQuickPaintedItem_Metacast_Callback qquickpainteditem_metacast_callback = nullptr;
    QQuickPaintedItem_Metacall_Callback qquickpainteditem_metacall_callback = nullptr;
    QQuickPaintedItem_Paint_Callback qquickpainteditem_paint_callback = nullptr;
    QQuickPaintedItem_IsTextureProvider_Callback qquickpainteditem_istextureprovider_callback = nullptr;
    QQuickPaintedItem_TextureProvider_Callback qquickpainteditem_textureprovider_callback = nullptr;
    QQuickPaintedItem_UpdatePaintNode_Callback qquickpainteditem_updatepaintnode_callback = nullptr;
    QQuickPaintedItem_ReleaseResources_Callback qquickpainteditem_releaseresources_callback = nullptr;
    QQuickPaintedItem_ItemChange_Callback qquickpainteditem_itemchange_callback = nullptr;
    QQuickPaintedItem_BoundingRect_Callback qquickpainteditem_boundingrect_callback = nullptr;
    QQuickPaintedItem_ClipRect_Callback qquickpainteditem_cliprect_callback = nullptr;
    QQuickPaintedItem_Contains_Callback qquickpainteditem_contains_callback = nullptr;
    QQuickPaintedItem_InputMethodQuery_Callback qquickpainteditem_inputmethodquery_callback = nullptr;
    QQuickPaintedItem_Event_Callback qquickpainteditem_event_callback = nullptr;
    QQuickPaintedItem_GeometryChange_Callback qquickpainteditem_geometrychange_callback = nullptr;
    QQuickPaintedItem_ClassBegin_Callback qquickpainteditem_classbegin_callback = nullptr;
    QQuickPaintedItem_ComponentComplete_Callback qquickpainteditem_componentcomplete_callback = nullptr;
    QQuickPaintedItem_KeyPressEvent_Callback qquickpainteditem_keypressevent_callback = nullptr;
    QQuickPaintedItem_KeyReleaseEvent_Callback qquickpainteditem_keyreleaseevent_callback = nullptr;
    QQuickPaintedItem_InputMethodEvent_Callback qquickpainteditem_inputmethodevent_callback = nullptr;
    QQuickPaintedItem_FocusInEvent_Callback qquickpainteditem_focusinevent_callback = nullptr;
    QQuickPaintedItem_FocusOutEvent_Callback qquickpainteditem_focusoutevent_callback = nullptr;
    QQuickPaintedItem_MousePressEvent_Callback qquickpainteditem_mousepressevent_callback = nullptr;
    QQuickPaintedItem_MouseMoveEvent_Callback qquickpainteditem_mousemoveevent_callback = nullptr;
    QQuickPaintedItem_MouseReleaseEvent_Callback qquickpainteditem_mousereleaseevent_callback = nullptr;
    QQuickPaintedItem_MouseDoubleClickEvent_Callback qquickpainteditem_mousedoubleclickevent_callback = nullptr;
    QQuickPaintedItem_MouseUngrabEvent_Callback qquickpainteditem_mouseungrabevent_callback = nullptr;
    QQuickPaintedItem_TouchUngrabEvent_Callback qquickpainteditem_touchungrabevent_callback = nullptr;
    QQuickPaintedItem_WheelEvent_Callback qquickpainteditem_wheelevent_callback = nullptr;
    QQuickPaintedItem_TouchEvent_Callback qquickpainteditem_touchevent_callback = nullptr;
    QQuickPaintedItem_HoverEnterEvent_Callback qquickpainteditem_hoverenterevent_callback = nullptr;
    QQuickPaintedItem_HoverMoveEvent_Callback qquickpainteditem_hovermoveevent_callback = nullptr;
    QQuickPaintedItem_HoverLeaveEvent_Callback qquickpainteditem_hoverleaveevent_callback = nullptr;
    QQuickPaintedItem_DragEnterEvent_Callback qquickpainteditem_dragenterevent_callback = nullptr;
    QQuickPaintedItem_DragMoveEvent_Callback qquickpainteditem_dragmoveevent_callback = nullptr;
    QQuickPaintedItem_DragLeaveEvent_Callback qquickpainteditem_dragleaveevent_callback = nullptr;
    QQuickPaintedItem_DropEvent_Callback qquickpainteditem_dropevent_callback = nullptr;
    QQuickPaintedItem_ChildMouseEventFilter_Callback qquickpainteditem_childmouseeventfilter_callback = nullptr;
    QQuickPaintedItem_UpdatePolish_Callback qquickpainteditem_updatepolish_callback = nullptr;
    QQuickPaintedItem_EventFilter_Callback qquickpainteditem_eventfilter_callback = nullptr;
    QQuickPaintedItem_TimerEvent_Callback qquickpainteditem_timerevent_callback = nullptr;
    QQuickPaintedItem_ChildEvent_Callback qquickpainteditem_childevent_callback = nullptr;
    QQuickPaintedItem_CustomEvent_Callback qquickpainteditem_customevent_callback = nullptr;
    QQuickPaintedItem_ConnectNotify_Callback qquickpainteditem_connectnotify_callback = nullptr;
    QQuickPaintedItem_DisconnectNotify_Callback qquickpainteditem_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickPaintedItem {
        using QQuickPaintedItem::childEvent;
        using QQuickPaintedItem::childMouseEventFilter;
        using QQuickPaintedItem::classBegin;
        using QQuickPaintedItem::componentComplete;
        using QQuickPaintedItem::connectNotify;
        using QQuickPaintedItem::customEvent;
        using QQuickPaintedItem::disconnectNotify;
        using QQuickPaintedItem::dragEnterEvent;
        using QQuickPaintedItem::dragLeaveEvent;
        using QQuickPaintedItem::dragMoveEvent;
        using QQuickPaintedItem::dropEvent;
        using QQuickPaintedItem::event;
        using QQuickPaintedItem::focusInEvent;
        using QQuickPaintedItem::focusOutEvent;
        using QQuickPaintedItem::geometryChange;
        using QQuickPaintedItem::hoverEnterEvent;
        using QQuickPaintedItem::hoverLeaveEvent;
        using QQuickPaintedItem::hoverMoveEvent;
        using QQuickPaintedItem::inputMethodEvent;
        using QQuickPaintedItem::itemChange;
        using QQuickPaintedItem::keyPressEvent;
        using QQuickPaintedItem::keyReleaseEvent;
        using QQuickPaintedItem::mouseDoubleClickEvent;
        using QQuickPaintedItem::mouseMoveEvent;
        using QQuickPaintedItem::mousePressEvent;
        using QQuickPaintedItem::mouseReleaseEvent;
        using QQuickPaintedItem::mouseUngrabEvent;
        using QQuickPaintedItem::releaseResources;
        using QQuickPaintedItem::timerEvent;
        using QQuickPaintedItem::touchEvent;
        using QQuickPaintedItem::touchUngrabEvent;
        using QQuickPaintedItem::updatePaintNode;
        using QQuickPaintedItem::updatePolish;
        using QQuickPaintedItem::wheelEvent;
    };

    VirtualQQuickPaintedItem() : QQuickPaintedItem() {};
    VirtualQQuickPaintedItem(QQuickItem* parent) : QQuickPaintedItem(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickpainteditem_metaobject_callback) {
            QMetaObject* callback_ret = qquickpainteditem_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickPaintedItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickpainteditem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickpainteditem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickPaintedItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickpainteditem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickpainteditem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickPaintedItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter) override {
        if (qquickpainteditem_paint_callback) {
            QPainter* cbval1 = painter;
            qquickpainteditem_paint_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickPaintedItem::paint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickpainteditem_istextureprovider_callback) {
            bool callback_ret = qquickpainteditem_istextureprovider_callback(this);
            return callback_ret;
        }
        return QQuickPaintedItem::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickpainteditem_textureprovider_callback) {
            QSGTextureProvider* callback_ret = qquickpainteditem_textureprovider_callback(this);
            return callback_ret;
        }
        return QQuickPaintedItem::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickpainteditem_updatepaintnode_callback) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = qquickpainteditem_updatepaintnode_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickPaintedItem::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickpainteditem_releaseresources_callback) {
            qquickpainteditem_releaseresources_callback(this);
            return;
        }
        QQuickPaintedItem::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickpainteditem_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            qquickpainteditem_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickPaintedItem::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickpainteditem_boundingrect_callback) {
            QRectF* callback_ret = qquickpainteditem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickPaintedItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickpainteditem_cliprect_callback) {
            QRectF* callback_ret = qquickpainteditem_cliprect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickPaintedItem::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickpainteditem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qquickpainteditem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickPaintedItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickpainteditem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qquickpainteditem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickPaintedItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickpainteditem_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qquickpainteditem_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickPaintedItem::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickpainteditem_geometrychange_callback) {
            const QRectF& newGeometry_ret = newGeometry;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&newGeometry_ret);
            const QRectF& oldGeometry_ret = oldGeometry;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&oldGeometry_ret);
            qquickpainteditem_geometrychange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickPaintedItem::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickpainteditem_classbegin_callback) {
            qquickpainteditem_classbegin_callback(this);
            return;
        }
        QQuickPaintedItem::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickpainteditem_componentcomplete_callback) {
            qquickpainteditem_componentcomplete_callback(this);
            return;
        }
        QQuickPaintedItem::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickpainteditem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickpainteditem_keypressevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickpainteditem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickpainteditem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickpainteditem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qquickpainteditem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickpainteditem_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickpainteditem_focusinevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickpainteditem_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickpainteditem_focusoutevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickpainteditem_mousepressevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickpainteditem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickpainteditem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickpainteditem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickpainteditem_mouseungrabevent_callback) {
            qquickpainteditem_mouseungrabevent_callback(this);
            return;
        }
        QQuickPaintedItem::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickpainteditem_touchungrabevent_callback) {
            qquickpainteditem_touchungrabevent_callback(this);
            return;
        }
        QQuickPaintedItem::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickpainteditem_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qquickpainteditem_wheelevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickpainteditem_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            qquickpainteditem_touchevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickpainteditem_hoverenterevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickpainteditem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickpainteditem_hovermoveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickpainteditem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickpainteditem_hoverleaveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickpainteditem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickpainteditem_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qquickpainteditem_dragenterevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickpainteditem_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qquickpainteditem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickpainteditem_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qquickpainteditem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickpainteditem_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qquickpainteditem_dropevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickpainteditem_childmouseeventfilter_callback) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qquickpainteditem_childmouseeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickPaintedItem::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickpainteditem_updatepolish_callback) {
            qquickpainteditem_updatepolish_callback(this);
            return;
        }
        QQuickPaintedItem::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickpainteditem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickpainteditem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickPaintedItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickpainteditem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickpainteditem_timerevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickpainteditem_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickpainteditem_childevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickpainteditem_customevent_callback) {
            QEvent* cbval1 = event;
            qquickpainteditem_customevent_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickpainteditem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickpainteditem_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickpainteditem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickpainteditem_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickPaintedItem::disconnectNotify(signal);
    }

    // Friend functions
    friend QSGNode* QQuickPaintedItem_SuperUpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend void QQuickPaintedItem_SuperReleaseResources(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend bool QQuickPaintedItem_SuperEvent(QQuickPaintedItem* self, QEvent* param1);
    friend void QQuickPaintedItem_SuperGeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickPaintedItem_SuperClassBegin(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperComponentComplete(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperKeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event);
    friend void QQuickPaintedItem_SuperKeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event);
    friend void QQuickPaintedItem_SuperInputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1);
    friend void QQuickPaintedItem_SuperFocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1);
    friend void QQuickPaintedItem_SuperFocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1);
    friend void QQuickPaintedItem_SuperMousePressEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMouseUngrabEvent(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperTouchUngrabEvent(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperWheelEvent(QQuickPaintedItem* self, QWheelEvent* event);
    friend void QQuickPaintedItem_SuperTouchEvent(QQuickPaintedItem* self, QTouchEvent* event);
    friend void QQuickPaintedItem_SuperHoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_SuperHoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_SuperHoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_SuperDragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1);
    friend void QQuickPaintedItem_SuperDragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1);
    friend void QQuickPaintedItem_SuperDragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1);
    friend void QQuickPaintedItem_SuperDropEvent(QQuickPaintedItem* self, QDropEvent* param1);
    friend bool QQuickPaintedItem_SuperChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2);
    friend void QQuickPaintedItem_SuperUpdatePolish(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperTimerEvent(QQuickPaintedItem* self, QTimerEvent* event);
    friend void QQuickPaintedItem_SuperChildEvent(QQuickPaintedItem* self, QChildEvent* event);
    friend void QQuickPaintedItem_SuperCustomEvent(QQuickPaintedItem* self, QEvent* event);
    friend void QQuickPaintedItem_SuperConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
    friend void QQuickPaintedItem_SuperDisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
};

#endif
