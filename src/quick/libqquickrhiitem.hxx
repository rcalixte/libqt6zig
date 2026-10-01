#pragma once
#ifndef QUICK_LIBQQUICKRHIITEM_HXX
#define QUICK_LIBQQUICKRHIITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickRhiItem
class VirtualQQuickRhiItem : public QQuickRhiItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickRhiItem_MetaObject_Callback = QMetaObject* (*)(const QQuickRhiItem*);
    using QQuickRhiItem_Metacast_Callback = void* (*)(QQuickRhiItem*, const char*);
    using QQuickRhiItem_Metacall_Callback = int (*)(QQuickRhiItem*, int, int, void**);
    using QQuickRhiItem_IsTextureProvider_Callback = bool (*)(const QQuickRhiItem*);
    using QQuickRhiItem_TextureProvider_Callback = QSGTextureProvider* (*)(const QQuickRhiItem*);
    using QQuickRhiItem_CreateRenderer_Callback = QQuickRhiItemRenderer* (*)(QQuickRhiItem*);
    using QQuickRhiItem_UpdatePaintNode_Callback = QSGNode* (*)(QQuickRhiItem*, QSGNode*, QQuickItem__UpdatePaintNodeData*);
    using QQuickRhiItem_Event_Callback = bool (*)(QQuickRhiItem*, QEvent*);
    using QQuickRhiItem_GeometryChange_Callback = void (*)(QQuickRhiItem*, QRectF*, QRectF*);
    using QQuickRhiItem_ReleaseResources_Callback = void (*)(QQuickRhiItem*);
    using QQuickRhiItem_BoundingRect_Callback = QRectF* (*)(const QQuickRhiItem*);
    using QQuickRhiItem_ClipRect_Callback = QRectF* (*)(const QQuickRhiItem*);
    using QQuickRhiItem_Contains_Callback = bool (*)(const QQuickRhiItem*, QPointF*);
    using QQuickRhiItem_InputMethodQuery_Callback = QVariant* (*)(const QQuickRhiItem*, int);
    using QQuickRhiItem_ItemChange_Callback = void (*)(QQuickRhiItem*, int, QQuickItem__ItemChangeData*);
    using QQuickRhiItem_ClassBegin_Callback = void (*)(QQuickRhiItem*);
    using QQuickRhiItem_ComponentComplete_Callback = void (*)(QQuickRhiItem*);
    using QQuickRhiItem_KeyPressEvent_Callback = void (*)(QQuickRhiItem*, QKeyEvent*);
    using QQuickRhiItem_KeyReleaseEvent_Callback = void (*)(QQuickRhiItem*, QKeyEvent*);
    using QQuickRhiItem_InputMethodEvent_Callback = void (*)(QQuickRhiItem*, QInputMethodEvent*);
    using QQuickRhiItem_FocusInEvent_Callback = void (*)(QQuickRhiItem*, QFocusEvent*);
    using QQuickRhiItem_FocusOutEvent_Callback = void (*)(QQuickRhiItem*, QFocusEvent*);
    using QQuickRhiItem_MousePressEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseMoveEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseReleaseEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseDoubleClickEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseUngrabEvent_Callback = void (*)(QQuickRhiItem*);
    using QQuickRhiItem_TouchUngrabEvent_Callback = void (*)(QQuickRhiItem*);
    using QQuickRhiItem_WheelEvent_Callback = void (*)(QQuickRhiItem*, QWheelEvent*);
    using QQuickRhiItem_TouchEvent_Callback = void (*)(QQuickRhiItem*, QTouchEvent*);
    using QQuickRhiItem_HoverEnterEvent_Callback = void (*)(QQuickRhiItem*, QHoverEvent*);
    using QQuickRhiItem_HoverMoveEvent_Callback = void (*)(QQuickRhiItem*, QHoverEvent*);
    using QQuickRhiItem_HoverLeaveEvent_Callback = void (*)(QQuickRhiItem*, QHoverEvent*);
    using QQuickRhiItem_DragEnterEvent_Callback = void (*)(QQuickRhiItem*, QDragEnterEvent*);
    using QQuickRhiItem_DragMoveEvent_Callback = void (*)(QQuickRhiItem*, QDragMoveEvent*);
    using QQuickRhiItem_DragLeaveEvent_Callback = void (*)(QQuickRhiItem*, QDragLeaveEvent*);
    using QQuickRhiItem_DropEvent_Callback = void (*)(QQuickRhiItem*, QDropEvent*);
    using QQuickRhiItem_ChildMouseEventFilter_Callback = bool (*)(QQuickRhiItem*, QQuickItem*, QEvent*);
    using QQuickRhiItem_UpdatePolish_Callback = void (*)(QQuickRhiItem*);
    using QQuickRhiItem_EventFilter_Callback = bool (*)(QQuickRhiItem*, QObject*, QEvent*);
    using QQuickRhiItem_TimerEvent_Callback = void (*)(QQuickRhiItem*, QTimerEvent*);
    using QQuickRhiItem_ChildEvent_Callback = void (*)(QQuickRhiItem*, QChildEvent*);
    using QQuickRhiItem_CustomEvent_Callback = void (*)(QQuickRhiItem*, QEvent*);
    using QQuickRhiItem_ConnectNotify_Callback = void (*)(QQuickRhiItem*, QMetaMethod*);
    using QQuickRhiItem_DisconnectNotify_Callback = void (*)(QQuickRhiItem*, QMetaMethod*);
    using QQuickRhiItem::heightValid;
    using QQuickRhiItem::isAutoRenderTargetEnabled;
    using QQuickRhiItem::isComponentComplete;
    using QQuickRhiItem::isSignalConnected;
    using QQuickRhiItem::receivers;
    using QQuickRhiItem::sender;
    using QQuickRhiItem::senderSignalIndex;
    using QQuickRhiItem::setAutoRenderTarget;
    using QQuickRhiItem::setImplicitSize;
    using QQuickRhiItem::updateInputMethod;
    using QQuickRhiItem::widthValid;

    // Instance callback storage
    QQuickRhiItem_MetaObject_Callback qquickrhiitem_metaobject_callback = nullptr;
    QQuickRhiItem_Metacast_Callback qquickrhiitem_metacast_callback = nullptr;
    QQuickRhiItem_Metacall_Callback qquickrhiitem_metacall_callback = nullptr;
    QQuickRhiItem_IsTextureProvider_Callback qquickrhiitem_istextureprovider_callback = nullptr;
    QQuickRhiItem_TextureProvider_Callback qquickrhiitem_textureprovider_callback = nullptr;
    QQuickRhiItem_CreateRenderer_Callback qquickrhiitem_createrenderer_callback = nullptr;
    QQuickRhiItem_UpdatePaintNode_Callback qquickrhiitem_updatepaintnode_callback = nullptr;
    QQuickRhiItem_Event_Callback qquickrhiitem_event_callback = nullptr;
    QQuickRhiItem_GeometryChange_Callback qquickrhiitem_geometrychange_callback = nullptr;
    QQuickRhiItem_ReleaseResources_Callback qquickrhiitem_releaseresources_callback = nullptr;
    QQuickRhiItem_BoundingRect_Callback qquickrhiitem_boundingrect_callback = nullptr;
    QQuickRhiItem_ClipRect_Callback qquickrhiitem_cliprect_callback = nullptr;
    QQuickRhiItem_Contains_Callback qquickrhiitem_contains_callback = nullptr;
    QQuickRhiItem_InputMethodQuery_Callback qquickrhiitem_inputmethodquery_callback = nullptr;
    QQuickRhiItem_ItemChange_Callback qquickrhiitem_itemchange_callback = nullptr;
    QQuickRhiItem_ClassBegin_Callback qquickrhiitem_classbegin_callback = nullptr;
    QQuickRhiItem_ComponentComplete_Callback qquickrhiitem_componentcomplete_callback = nullptr;
    QQuickRhiItem_KeyPressEvent_Callback qquickrhiitem_keypressevent_callback = nullptr;
    QQuickRhiItem_KeyReleaseEvent_Callback qquickrhiitem_keyreleaseevent_callback = nullptr;
    QQuickRhiItem_InputMethodEvent_Callback qquickrhiitem_inputmethodevent_callback = nullptr;
    QQuickRhiItem_FocusInEvent_Callback qquickrhiitem_focusinevent_callback = nullptr;
    QQuickRhiItem_FocusOutEvent_Callback qquickrhiitem_focusoutevent_callback = nullptr;
    QQuickRhiItem_MousePressEvent_Callback qquickrhiitem_mousepressevent_callback = nullptr;
    QQuickRhiItem_MouseMoveEvent_Callback qquickrhiitem_mousemoveevent_callback = nullptr;
    QQuickRhiItem_MouseReleaseEvent_Callback qquickrhiitem_mousereleaseevent_callback = nullptr;
    QQuickRhiItem_MouseDoubleClickEvent_Callback qquickrhiitem_mousedoubleclickevent_callback = nullptr;
    QQuickRhiItem_MouseUngrabEvent_Callback qquickrhiitem_mouseungrabevent_callback = nullptr;
    QQuickRhiItem_TouchUngrabEvent_Callback qquickrhiitem_touchungrabevent_callback = nullptr;
    QQuickRhiItem_WheelEvent_Callback qquickrhiitem_wheelevent_callback = nullptr;
    QQuickRhiItem_TouchEvent_Callback qquickrhiitem_touchevent_callback = nullptr;
    QQuickRhiItem_HoverEnterEvent_Callback qquickrhiitem_hoverenterevent_callback = nullptr;
    QQuickRhiItem_HoverMoveEvent_Callback qquickrhiitem_hovermoveevent_callback = nullptr;
    QQuickRhiItem_HoverLeaveEvent_Callback qquickrhiitem_hoverleaveevent_callback = nullptr;
    QQuickRhiItem_DragEnterEvent_Callback qquickrhiitem_dragenterevent_callback = nullptr;
    QQuickRhiItem_DragMoveEvent_Callback qquickrhiitem_dragmoveevent_callback = nullptr;
    QQuickRhiItem_DragLeaveEvent_Callback qquickrhiitem_dragleaveevent_callback = nullptr;
    QQuickRhiItem_DropEvent_Callback qquickrhiitem_dropevent_callback = nullptr;
    QQuickRhiItem_ChildMouseEventFilter_Callback qquickrhiitem_childmouseeventfilter_callback = nullptr;
    QQuickRhiItem_UpdatePolish_Callback qquickrhiitem_updatepolish_callback = nullptr;
    QQuickRhiItem_EventFilter_Callback qquickrhiitem_eventfilter_callback = nullptr;
    QQuickRhiItem_TimerEvent_Callback qquickrhiitem_timerevent_callback = nullptr;
    QQuickRhiItem_ChildEvent_Callback qquickrhiitem_childevent_callback = nullptr;
    QQuickRhiItem_CustomEvent_Callback qquickrhiitem_customevent_callback = nullptr;
    QQuickRhiItem_ConnectNotify_Callback qquickrhiitem_connectnotify_callback = nullptr;
    QQuickRhiItem_DisconnectNotify_Callback qquickrhiitem_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickRhiItem {
        using QQuickRhiItem::childEvent;
        using QQuickRhiItem::childMouseEventFilter;
        using QQuickRhiItem::classBegin;
        using QQuickRhiItem::componentComplete;
        using QQuickRhiItem::connectNotify;
        using QQuickRhiItem::createRenderer;
        using QQuickRhiItem::customEvent;
        using QQuickRhiItem::disconnectNotify;
        using QQuickRhiItem::dragEnterEvent;
        using QQuickRhiItem::dragLeaveEvent;
        using QQuickRhiItem::dragMoveEvent;
        using QQuickRhiItem::dropEvent;
        using QQuickRhiItem::event;
        using QQuickRhiItem::focusInEvent;
        using QQuickRhiItem::focusOutEvent;
        using QQuickRhiItem::geometryChange;
        using QQuickRhiItem::hoverEnterEvent;
        using QQuickRhiItem::hoverLeaveEvent;
        using QQuickRhiItem::hoverMoveEvent;
        using QQuickRhiItem::inputMethodEvent;
        using QQuickRhiItem::itemChange;
        using QQuickRhiItem::keyPressEvent;
        using QQuickRhiItem::keyReleaseEvent;
        using QQuickRhiItem::mouseDoubleClickEvent;
        using QQuickRhiItem::mouseMoveEvent;
        using QQuickRhiItem::mousePressEvent;
        using QQuickRhiItem::mouseReleaseEvent;
        using QQuickRhiItem::mouseUngrabEvent;
        using QQuickRhiItem::releaseResources;
        using QQuickRhiItem::timerEvent;
        using QQuickRhiItem::touchEvent;
        using QQuickRhiItem::touchUngrabEvent;
        using QQuickRhiItem::updatePaintNode;
        using QQuickRhiItem::updatePolish;
        using QQuickRhiItem::wheelEvent;
    };

    VirtualQQuickRhiItem() : QQuickRhiItem() {};
    VirtualQQuickRhiItem(QQuickItem* parent) : QQuickRhiItem(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickrhiitem_metaobject_callback) {
            QMetaObject* callback_ret = qquickrhiitem_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickRhiItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickrhiitem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickrhiitem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickRhiItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickrhiitem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickrhiitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickRhiItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickrhiitem_istextureprovider_callback) {
            bool callback_ret = qquickrhiitem_istextureprovider_callback(this);
            return callback_ret;
        }
        return QQuickRhiItem::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickrhiitem_textureprovider_callback) {
            QSGTextureProvider* callback_ret = qquickrhiitem_textureprovider_callback(this);
            return callback_ret;
        }
        return QQuickRhiItem::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickRhiItemRenderer* createRenderer() override {
        if (qquickrhiitem_createrenderer_callback) {
            QQuickRhiItemRenderer* callback_ret = qquickrhiitem_createrenderer_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickRhiItem::createRenderer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickrhiitem_updatepaintnode_callback) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = qquickrhiitem_updatepaintnode_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRhiItem::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickrhiitem_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qquickrhiitem_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickRhiItem::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickrhiitem_geometrychange_callback) {
            const QRectF& newGeometry_ret = newGeometry;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&newGeometry_ret);
            const QRectF& oldGeometry_ret = oldGeometry;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&oldGeometry_ret);
            qquickrhiitem_geometrychange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickRhiItem::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickrhiitem_releaseresources_callback) {
            qquickrhiitem_releaseresources_callback(this);
            return;
        }
        QQuickRhiItem::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickrhiitem_boundingrect_callback) {
            QRectF* callback_ret = qquickrhiitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickRhiItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickrhiitem_cliprect_callback) {
            QRectF* callback_ret = qquickrhiitem_cliprect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickRhiItem::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickrhiitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qquickrhiitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickRhiItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickrhiitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qquickrhiitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickRhiItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickrhiitem_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            qquickrhiitem_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickRhiItem::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickrhiitem_classbegin_callback) {
            qquickrhiitem_classbegin_callback(this);
            return;
        }
        QQuickRhiItem::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickrhiitem_componentcomplete_callback) {
            qquickrhiitem_componentcomplete_callback(this);
            return;
        }
        QQuickRhiItem::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickrhiitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickrhiitem_keypressevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickrhiitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickrhiitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickrhiitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qquickrhiitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickrhiitem_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickrhiitem_focusinevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickrhiitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickrhiitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickrhiitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickrhiitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickrhiitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickrhiitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickrhiitem_mouseungrabevent_callback) {
            qquickrhiitem_mouseungrabevent_callback(this);
            return;
        }
        QQuickRhiItem::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickrhiitem_touchungrabevent_callback) {
            qquickrhiitem_touchungrabevent_callback(this);
            return;
        }
        QQuickRhiItem::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickrhiitem_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qquickrhiitem_wheelevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickrhiitem_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            qquickrhiitem_touchevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickrhiitem_hoverenterevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickrhiitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickrhiitem_hovermoveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickrhiitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickrhiitem_hoverleaveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickrhiitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickrhiitem_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qquickrhiitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickrhiitem_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qquickrhiitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickrhiitem_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qquickrhiitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickrhiitem_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qquickrhiitem_dropevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickrhiitem_childmouseeventfilter_callback) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qquickrhiitem_childmouseeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRhiItem::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickrhiitem_updatepolish_callback) {
            qquickrhiitem_updatepolish_callback(this);
            return;
        }
        QQuickRhiItem::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickrhiitem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickrhiitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRhiItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickrhiitem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickrhiitem_timerevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickrhiitem_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickrhiitem_childevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickrhiitem_customevent_callback) {
            QEvent* cbval1 = event;
            qquickrhiitem_customevent_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickrhiitem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickrhiitem_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickrhiitem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickrhiitem_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickRhiItem::disconnectNotify(signal);
    }

    // Friend functions
    friend QSGNode* QQuickRhiItem_SuperUpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend bool QQuickRhiItem_SuperEvent(QQuickRhiItem* self, QEvent* param1);
    friend void QQuickRhiItem_SuperGeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickRhiItem_SuperReleaseResources(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickRhiItem_SuperClassBegin(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperComponentComplete(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperKeyPressEvent(QQuickRhiItem* self, QKeyEvent* event);
    friend void QQuickRhiItem_SuperKeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event);
    friend void QQuickRhiItem_SuperInputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1);
    friend void QQuickRhiItem_SuperFocusInEvent(QQuickRhiItem* self, QFocusEvent* param1);
    friend void QQuickRhiItem_SuperFocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1);
    friend void QQuickRhiItem_SuperMousePressEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMouseUngrabEvent(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperTouchUngrabEvent(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperWheelEvent(QQuickRhiItem* self, QWheelEvent* event);
    friend void QQuickRhiItem_SuperTouchEvent(QQuickRhiItem* self, QTouchEvent* event);
    friend void QQuickRhiItem_SuperHoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_SuperHoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_SuperHoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_SuperDragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1);
    friend void QQuickRhiItem_SuperDragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1);
    friend void QQuickRhiItem_SuperDragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1);
    friend void QQuickRhiItem_SuperDropEvent(QQuickRhiItem* self, QDropEvent* param1);
    friend bool QQuickRhiItem_SuperChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2);
    friend void QQuickRhiItem_SuperUpdatePolish(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperTimerEvent(QQuickRhiItem* self, QTimerEvent* event);
    friend void QQuickRhiItem_SuperChildEvent(QQuickRhiItem* self, QChildEvent* event);
    friend void QQuickRhiItem_SuperCustomEvent(QQuickRhiItem* self, QEvent* event);
    friend void QQuickRhiItem_SuperConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
    friend void QQuickRhiItem_SuperDisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
};

#endif
