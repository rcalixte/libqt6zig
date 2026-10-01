#pragma once
#ifndef QUICK_LIBQQUICKFRAMEBUFFEROBJECT_HXX
#define QUICK_LIBQQUICKFRAMEBUFFEROBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickFramebufferObject
class VirtualQQuickFramebufferObject : public QQuickFramebufferObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickFramebufferObject_MetaObject_Callback = QMetaObject* (*)(const QQuickFramebufferObject*);
    using QQuickFramebufferObject_Metacast_Callback = void* (*)(QQuickFramebufferObject*, const char*);
    using QQuickFramebufferObject_Metacall_Callback = int (*)(QQuickFramebufferObject*, int, int, void**);
    using QQuickFramebufferObject_CreateRenderer_Callback = QQuickFramebufferObject__Renderer* (*)(const QQuickFramebufferObject*);
    using QQuickFramebufferObject_IsTextureProvider_Callback = bool (*)(const QQuickFramebufferObject*);
    using QQuickFramebufferObject_TextureProvider_Callback = QSGTextureProvider* (*)(const QQuickFramebufferObject*);
    using QQuickFramebufferObject_ReleaseResources_Callback = void (*)(QQuickFramebufferObject*);
    using QQuickFramebufferObject_GeometryChange_Callback = void (*)(QQuickFramebufferObject*, QRectF*, QRectF*);
    using QQuickFramebufferObject_UpdatePaintNode_Callback = QSGNode* (*)(QQuickFramebufferObject*, QSGNode*, QQuickItem__UpdatePaintNodeData*);
    using QQuickFramebufferObject_BoundingRect_Callback = QRectF* (*)(const QQuickFramebufferObject*);
    using QQuickFramebufferObject_ClipRect_Callback = QRectF* (*)(const QQuickFramebufferObject*);
    using QQuickFramebufferObject_Contains_Callback = bool (*)(const QQuickFramebufferObject*, QPointF*);
    using QQuickFramebufferObject_InputMethodQuery_Callback = QVariant* (*)(const QQuickFramebufferObject*, int);
    using QQuickFramebufferObject_Event_Callback = bool (*)(QQuickFramebufferObject*, QEvent*);
    using QQuickFramebufferObject_ItemChange_Callback = void (*)(QQuickFramebufferObject*, int, QQuickItem__ItemChangeData*);
    using QQuickFramebufferObject_ClassBegin_Callback = void (*)(QQuickFramebufferObject*);
    using QQuickFramebufferObject_ComponentComplete_Callback = void (*)(QQuickFramebufferObject*);
    using QQuickFramebufferObject_KeyPressEvent_Callback = void (*)(QQuickFramebufferObject*, QKeyEvent*);
    using QQuickFramebufferObject_KeyReleaseEvent_Callback = void (*)(QQuickFramebufferObject*, QKeyEvent*);
    using QQuickFramebufferObject_InputMethodEvent_Callback = void (*)(QQuickFramebufferObject*, QInputMethodEvent*);
    using QQuickFramebufferObject_FocusInEvent_Callback = void (*)(QQuickFramebufferObject*, QFocusEvent*);
    using QQuickFramebufferObject_FocusOutEvent_Callback = void (*)(QQuickFramebufferObject*, QFocusEvent*);
    using QQuickFramebufferObject_MousePressEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseMoveEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseReleaseEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseDoubleClickEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseUngrabEvent_Callback = void (*)(QQuickFramebufferObject*);
    using QQuickFramebufferObject_TouchUngrabEvent_Callback = void (*)(QQuickFramebufferObject*);
    using QQuickFramebufferObject_WheelEvent_Callback = void (*)(QQuickFramebufferObject*, QWheelEvent*);
    using QQuickFramebufferObject_TouchEvent_Callback = void (*)(QQuickFramebufferObject*, QTouchEvent*);
    using QQuickFramebufferObject_HoverEnterEvent_Callback = void (*)(QQuickFramebufferObject*, QHoverEvent*);
    using QQuickFramebufferObject_HoverMoveEvent_Callback = void (*)(QQuickFramebufferObject*, QHoverEvent*);
    using QQuickFramebufferObject_HoverLeaveEvent_Callback = void (*)(QQuickFramebufferObject*, QHoverEvent*);
    using QQuickFramebufferObject_DragEnterEvent_Callback = void (*)(QQuickFramebufferObject*, QDragEnterEvent*);
    using QQuickFramebufferObject_DragMoveEvent_Callback = void (*)(QQuickFramebufferObject*, QDragMoveEvent*);
    using QQuickFramebufferObject_DragLeaveEvent_Callback = void (*)(QQuickFramebufferObject*, QDragLeaveEvent*);
    using QQuickFramebufferObject_DropEvent_Callback = void (*)(QQuickFramebufferObject*, QDropEvent*);
    using QQuickFramebufferObject_ChildMouseEventFilter_Callback = bool (*)(QQuickFramebufferObject*, QQuickItem*, QEvent*);
    using QQuickFramebufferObject_UpdatePolish_Callback = void (*)(QQuickFramebufferObject*);
    using QQuickFramebufferObject_EventFilter_Callback = bool (*)(QQuickFramebufferObject*, QObject*, QEvent*);
    using QQuickFramebufferObject_TimerEvent_Callback = void (*)(QQuickFramebufferObject*, QTimerEvent*);
    using QQuickFramebufferObject_ChildEvent_Callback = void (*)(QQuickFramebufferObject*, QChildEvent*);
    using QQuickFramebufferObject_CustomEvent_Callback = void (*)(QQuickFramebufferObject*, QEvent*);
    using QQuickFramebufferObject_ConnectNotify_Callback = void (*)(QQuickFramebufferObject*, QMetaMethod*);
    using QQuickFramebufferObject_DisconnectNotify_Callback = void (*)(QQuickFramebufferObject*, QMetaMethod*);
    using QQuickFramebufferObject::heightValid;
    using QQuickFramebufferObject::isComponentComplete;
    using QQuickFramebufferObject::isSignalConnected;
    using QQuickFramebufferObject::receivers;
    using QQuickFramebufferObject::sender;
    using QQuickFramebufferObject::senderSignalIndex;
    using QQuickFramebufferObject::setImplicitSize;
    using QQuickFramebufferObject::updateInputMethod;
    using QQuickFramebufferObject::widthValid;

    // Instance callback storage
    QQuickFramebufferObject_MetaObject_Callback qquickframebufferobject_metaobject_callback = nullptr;
    QQuickFramebufferObject_Metacast_Callback qquickframebufferobject_metacast_callback = nullptr;
    QQuickFramebufferObject_Metacall_Callback qquickframebufferobject_metacall_callback = nullptr;
    QQuickFramebufferObject_CreateRenderer_Callback qquickframebufferobject_createrenderer_callback = nullptr;
    QQuickFramebufferObject_IsTextureProvider_Callback qquickframebufferobject_istextureprovider_callback = nullptr;
    QQuickFramebufferObject_TextureProvider_Callback qquickframebufferobject_textureprovider_callback = nullptr;
    QQuickFramebufferObject_ReleaseResources_Callback qquickframebufferobject_releaseresources_callback = nullptr;
    QQuickFramebufferObject_GeometryChange_Callback qquickframebufferobject_geometrychange_callback = nullptr;
    QQuickFramebufferObject_UpdatePaintNode_Callback qquickframebufferobject_updatepaintnode_callback = nullptr;
    QQuickFramebufferObject_BoundingRect_Callback qquickframebufferobject_boundingrect_callback = nullptr;
    QQuickFramebufferObject_ClipRect_Callback qquickframebufferobject_cliprect_callback = nullptr;
    QQuickFramebufferObject_Contains_Callback qquickframebufferobject_contains_callback = nullptr;
    QQuickFramebufferObject_InputMethodQuery_Callback qquickframebufferobject_inputmethodquery_callback = nullptr;
    QQuickFramebufferObject_Event_Callback qquickframebufferobject_event_callback = nullptr;
    QQuickFramebufferObject_ItemChange_Callback qquickframebufferobject_itemchange_callback = nullptr;
    QQuickFramebufferObject_ClassBegin_Callback qquickframebufferobject_classbegin_callback = nullptr;
    QQuickFramebufferObject_ComponentComplete_Callback qquickframebufferobject_componentcomplete_callback = nullptr;
    QQuickFramebufferObject_KeyPressEvent_Callback qquickframebufferobject_keypressevent_callback = nullptr;
    QQuickFramebufferObject_KeyReleaseEvent_Callback qquickframebufferobject_keyreleaseevent_callback = nullptr;
    QQuickFramebufferObject_InputMethodEvent_Callback qquickframebufferobject_inputmethodevent_callback = nullptr;
    QQuickFramebufferObject_FocusInEvent_Callback qquickframebufferobject_focusinevent_callback = nullptr;
    QQuickFramebufferObject_FocusOutEvent_Callback qquickframebufferobject_focusoutevent_callback = nullptr;
    QQuickFramebufferObject_MousePressEvent_Callback qquickframebufferobject_mousepressevent_callback = nullptr;
    QQuickFramebufferObject_MouseMoveEvent_Callback qquickframebufferobject_mousemoveevent_callback = nullptr;
    QQuickFramebufferObject_MouseReleaseEvent_Callback qquickframebufferobject_mousereleaseevent_callback = nullptr;
    QQuickFramebufferObject_MouseDoubleClickEvent_Callback qquickframebufferobject_mousedoubleclickevent_callback = nullptr;
    QQuickFramebufferObject_MouseUngrabEvent_Callback qquickframebufferobject_mouseungrabevent_callback = nullptr;
    QQuickFramebufferObject_TouchUngrabEvent_Callback qquickframebufferobject_touchungrabevent_callback = nullptr;
    QQuickFramebufferObject_WheelEvent_Callback qquickframebufferobject_wheelevent_callback = nullptr;
    QQuickFramebufferObject_TouchEvent_Callback qquickframebufferobject_touchevent_callback = nullptr;
    QQuickFramebufferObject_HoverEnterEvent_Callback qquickframebufferobject_hoverenterevent_callback = nullptr;
    QQuickFramebufferObject_HoverMoveEvent_Callback qquickframebufferobject_hovermoveevent_callback = nullptr;
    QQuickFramebufferObject_HoverLeaveEvent_Callback qquickframebufferobject_hoverleaveevent_callback = nullptr;
    QQuickFramebufferObject_DragEnterEvent_Callback qquickframebufferobject_dragenterevent_callback = nullptr;
    QQuickFramebufferObject_DragMoveEvent_Callback qquickframebufferobject_dragmoveevent_callback = nullptr;
    QQuickFramebufferObject_DragLeaveEvent_Callback qquickframebufferobject_dragleaveevent_callback = nullptr;
    QQuickFramebufferObject_DropEvent_Callback qquickframebufferobject_dropevent_callback = nullptr;
    QQuickFramebufferObject_ChildMouseEventFilter_Callback qquickframebufferobject_childmouseeventfilter_callback = nullptr;
    QQuickFramebufferObject_UpdatePolish_Callback qquickframebufferobject_updatepolish_callback = nullptr;
    QQuickFramebufferObject_EventFilter_Callback qquickframebufferobject_eventfilter_callback = nullptr;
    QQuickFramebufferObject_TimerEvent_Callback qquickframebufferobject_timerevent_callback = nullptr;
    QQuickFramebufferObject_ChildEvent_Callback qquickframebufferobject_childevent_callback = nullptr;
    QQuickFramebufferObject_CustomEvent_Callback qquickframebufferobject_customevent_callback = nullptr;
    QQuickFramebufferObject_ConnectNotify_Callback qquickframebufferobject_connectnotify_callback = nullptr;
    QQuickFramebufferObject_DisconnectNotify_Callback qquickframebufferobject_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickFramebufferObject {
        using QQuickFramebufferObject::childEvent;
        using QQuickFramebufferObject::childMouseEventFilter;
        using QQuickFramebufferObject::classBegin;
        using QQuickFramebufferObject::componentComplete;
        using QQuickFramebufferObject::connectNotify;
        using QQuickFramebufferObject::customEvent;
        using QQuickFramebufferObject::disconnectNotify;
        using QQuickFramebufferObject::dragEnterEvent;
        using QQuickFramebufferObject::dragLeaveEvent;
        using QQuickFramebufferObject::dragMoveEvent;
        using QQuickFramebufferObject::dropEvent;
        using QQuickFramebufferObject::event;
        using QQuickFramebufferObject::focusInEvent;
        using QQuickFramebufferObject::focusOutEvent;
        using QQuickFramebufferObject::geometryChange;
        using QQuickFramebufferObject::hoverEnterEvent;
        using QQuickFramebufferObject::hoverLeaveEvent;
        using QQuickFramebufferObject::hoverMoveEvent;
        using QQuickFramebufferObject::inputMethodEvent;
        using QQuickFramebufferObject::itemChange;
        using QQuickFramebufferObject::keyPressEvent;
        using QQuickFramebufferObject::keyReleaseEvent;
        using QQuickFramebufferObject::mouseDoubleClickEvent;
        using QQuickFramebufferObject::mouseMoveEvent;
        using QQuickFramebufferObject::mousePressEvent;
        using QQuickFramebufferObject::mouseReleaseEvent;
        using QQuickFramebufferObject::mouseUngrabEvent;
        using QQuickFramebufferObject::timerEvent;
        using QQuickFramebufferObject::touchEvent;
        using QQuickFramebufferObject::touchUngrabEvent;
        using QQuickFramebufferObject::updatePaintNode;
        using QQuickFramebufferObject::updatePolish;
        using QQuickFramebufferObject::wheelEvent;
    };

    VirtualQQuickFramebufferObject() : QQuickFramebufferObject() {};
    VirtualQQuickFramebufferObject(QQuickItem* parent) : QQuickFramebufferObject(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickframebufferobject_metaobject_callback) {
            QMetaObject* callback_ret = qquickframebufferobject_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickFramebufferObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickframebufferobject_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickframebufferobject_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickFramebufferObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickframebufferobject_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickframebufferobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickFramebufferObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickFramebufferObject::Renderer* createRenderer() const override {
        if (qquickframebufferobject_createrenderer_callback) {
            QQuickFramebufferObject__Renderer* callback_ret = qquickframebufferobject_createrenderer_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickFramebufferObject::createRenderer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickframebufferobject_istextureprovider_callback) {
            bool callback_ret = qquickframebufferobject_istextureprovider_callback(this);
            return callback_ret;
        }
        return QQuickFramebufferObject::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickframebufferobject_textureprovider_callback) {
            QSGTextureProvider* callback_ret = qquickframebufferobject_textureprovider_callback(this);
            return callback_ret;
        }
        return QQuickFramebufferObject::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickframebufferobject_releaseresources_callback) {
            qquickframebufferobject_releaseresources_callback(this);
            return;
        }
        QQuickFramebufferObject::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickframebufferobject_geometrychange_callback) {
            const QRectF& newGeometry_ret = newGeometry;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&newGeometry_ret);
            const QRectF& oldGeometry_ret = oldGeometry;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&oldGeometry_ret);
            qquickframebufferobject_geometrychange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickFramebufferObject::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickframebufferobject_updatepaintnode_callback) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = qquickframebufferobject_updatepaintnode_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickFramebufferObject::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickframebufferobject_boundingrect_callback) {
            QRectF* callback_ret = qquickframebufferobject_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickFramebufferObject::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickframebufferobject_cliprect_callback) {
            QRectF* callback_ret = qquickframebufferobject_cliprect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickFramebufferObject::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickframebufferobject_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qquickframebufferobject_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickFramebufferObject::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickframebufferobject_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qquickframebufferobject_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickFramebufferObject::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickframebufferobject_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qquickframebufferobject_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickFramebufferObject::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickframebufferobject_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            qquickframebufferobject_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickFramebufferObject::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickframebufferobject_classbegin_callback) {
            qquickframebufferobject_classbegin_callback(this);
            return;
        }
        QQuickFramebufferObject::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickframebufferobject_componentcomplete_callback) {
            qquickframebufferobject_componentcomplete_callback(this);
            return;
        }
        QQuickFramebufferObject::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickframebufferobject_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickframebufferobject_keypressevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickframebufferobject_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickframebufferobject_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickframebufferobject_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qquickframebufferobject_inputmethodevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickframebufferobject_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickframebufferobject_focusinevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickframebufferobject_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickframebufferobject_focusoutevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickframebufferobject_mousepressevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickframebufferobject_mousemoveevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickframebufferobject_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickframebufferobject_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickframebufferobject_mouseungrabevent_callback) {
            qquickframebufferobject_mouseungrabevent_callback(this);
            return;
        }
        QQuickFramebufferObject::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickframebufferobject_touchungrabevent_callback) {
            qquickframebufferobject_touchungrabevent_callback(this);
            return;
        }
        QQuickFramebufferObject::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickframebufferobject_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qquickframebufferobject_wheelevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickframebufferobject_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            qquickframebufferobject_touchevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickframebufferobject_hoverenterevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickframebufferobject_hoverenterevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickframebufferobject_hovermoveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickframebufferobject_hovermoveevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickframebufferobject_hoverleaveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickframebufferobject_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickframebufferobject_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qquickframebufferobject_dragenterevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickframebufferobject_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qquickframebufferobject_dragmoveevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickframebufferobject_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qquickframebufferobject_dragleaveevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickframebufferobject_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qquickframebufferobject_dropevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickframebufferobject_childmouseeventfilter_callback) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qquickframebufferobject_childmouseeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickFramebufferObject::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickframebufferobject_updatepolish_callback) {
            qquickframebufferobject_updatepolish_callback(this);
            return;
        }
        QQuickFramebufferObject::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickframebufferobject_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickframebufferobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickFramebufferObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickframebufferobject_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickframebufferobject_timerevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickframebufferobject_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickframebufferobject_childevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickframebufferobject_customevent_callback) {
            QEvent* cbval1 = event;
            qquickframebufferobject_customevent_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickframebufferobject_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickframebufferobject_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickframebufferobject_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickframebufferobject_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickFramebufferObject::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickFramebufferObject_SuperGeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend QSGNode* QQuickFramebufferObject_SuperUpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend bool QQuickFramebufferObject_SuperEvent(QQuickFramebufferObject* self, QEvent* param1);
    friend void QQuickFramebufferObject_SuperItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickFramebufferObject_SuperClassBegin(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperComponentComplete(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperKeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event);
    friend void QQuickFramebufferObject_SuperKeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event);
    friend void QQuickFramebufferObject_SuperInputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1);
    friend void QQuickFramebufferObject_SuperFocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
    friend void QQuickFramebufferObject_SuperFocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
    friend void QQuickFramebufferObject_SuperMousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMouseUngrabEvent(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperTouchUngrabEvent(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperWheelEvent(QQuickFramebufferObject* self, QWheelEvent* event);
    friend void QQuickFramebufferObject_SuperTouchEvent(QQuickFramebufferObject* self, QTouchEvent* event);
    friend void QQuickFramebufferObject_SuperHoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_SuperHoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_SuperHoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_SuperDragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1);
    friend void QQuickFramebufferObject_SuperDragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1);
    friend void QQuickFramebufferObject_SuperDragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1);
    friend void QQuickFramebufferObject_SuperDropEvent(QQuickFramebufferObject* self, QDropEvent* param1);
    friend bool QQuickFramebufferObject_SuperChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2);
    friend void QQuickFramebufferObject_SuperUpdatePolish(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperTimerEvent(QQuickFramebufferObject* self, QTimerEvent* event);
    friend void QQuickFramebufferObject_SuperChildEvent(QQuickFramebufferObject* self, QChildEvent* event);
    friend void QQuickFramebufferObject_SuperCustomEvent(QQuickFramebufferObject* self, QEvent* event);
    friend void QQuickFramebufferObject_SuperConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
    friend void QQuickFramebufferObject_SuperDisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
};

#endif
