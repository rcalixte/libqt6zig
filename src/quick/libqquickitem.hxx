#pragma once
#ifndef QUICK_LIBQQUICKITEM_HXX
#define QUICK_LIBQQUICKITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickTransform
class VirtualQQuickTransform : public QQuickTransform {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickTransform_MetaObject_Callback = QMetaObject* (*)(const QQuickTransform*);
    using QQuickTransform_Metacast_Callback = void* (*)(QQuickTransform*, const char*);
    using QQuickTransform_Metacall_Callback = int (*)(QQuickTransform*, int, int, void**);
    using QQuickTransform_ApplyTo_Callback = void (*)(const QQuickTransform*, QMatrix4x4*);
    using QQuickTransform_Event_Callback = bool (*)(QQuickTransform*, QEvent*);
    using QQuickTransform_EventFilter_Callback = bool (*)(QQuickTransform*, QObject*, QEvent*);
    using QQuickTransform_TimerEvent_Callback = void (*)(QQuickTransform*, QTimerEvent*);
    using QQuickTransform_ChildEvent_Callback = void (*)(QQuickTransform*, QChildEvent*);
    using QQuickTransform_CustomEvent_Callback = void (*)(QQuickTransform*, QEvent*);
    using QQuickTransform_ConnectNotify_Callback = void (*)(QQuickTransform*, QMetaMethod*);
    using QQuickTransform_DisconnectNotify_Callback = void (*)(QQuickTransform*, QMetaMethod*);
    using QQuickTransform::isSignalConnected;
    using QQuickTransform::receivers;
    using QQuickTransform::sender;
    using QQuickTransform::senderSignalIndex;
    using QQuickTransform::update;

    // Instance callback storage
    QQuickTransform_MetaObject_Callback qquicktransform_metaobject_callback = nullptr;
    QQuickTransform_Metacast_Callback qquicktransform_metacast_callback = nullptr;
    QQuickTransform_Metacall_Callback qquicktransform_metacall_callback = nullptr;
    QQuickTransform_ApplyTo_Callback qquicktransform_applyto_callback = nullptr;
    QQuickTransform_Event_Callback qquicktransform_event_callback = nullptr;
    QQuickTransform_EventFilter_Callback qquicktransform_eventfilter_callback = nullptr;
    QQuickTransform_TimerEvent_Callback qquicktransform_timerevent_callback = nullptr;
    QQuickTransform_ChildEvent_Callback qquicktransform_childevent_callback = nullptr;
    QQuickTransform_CustomEvent_Callback qquicktransform_customevent_callback = nullptr;
    QQuickTransform_ConnectNotify_Callback qquicktransform_connectnotify_callback = nullptr;
    QQuickTransform_DisconnectNotify_Callback qquicktransform_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickTransform {
        using QQuickTransform::childEvent;
        using QQuickTransform::connectNotify;
        using QQuickTransform::customEvent;
        using QQuickTransform::disconnectNotify;
        using QQuickTransform::timerEvent;
    };

    VirtualQQuickTransform() : QQuickTransform() {};
    VirtualQQuickTransform(QObject* parent) : QQuickTransform(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquicktransform_metaobject_callback) {
            QMetaObject* callback_ret = qquicktransform_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickTransform::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquicktransform_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquicktransform_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickTransform::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquicktransform_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquicktransform_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickTransform::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        if (qquicktransform_applyto_callback) {
            QMatrix4x4* cbval1 = matrix;
            qquicktransform_applyto_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQuickTransform::applyTo called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquicktransform_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qquicktransform_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickTransform::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquicktransform_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquicktransform_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickTransform::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquicktransform_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquicktransform_timerevent_callback(this, cbval1);
            return;
        }
        QQuickTransform::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquicktransform_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquicktransform_childevent_callback(this, cbval1);
            return;
        }
        QQuickTransform::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquicktransform_customevent_callback) {
            QEvent* cbval1 = event;
            qquicktransform_customevent_callback(this, cbval1);
            return;
        }
        QQuickTransform::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquicktransform_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquicktransform_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickTransform::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquicktransform_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquicktransform_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickTransform::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickTransform_SuperTimerEvent(QQuickTransform* self, QTimerEvent* event);
    friend void QQuickTransform_SuperChildEvent(QQuickTransform* self, QChildEvent* event);
    friend void QQuickTransform_SuperCustomEvent(QQuickTransform* self, QEvent* event);
    friend void QQuickTransform_SuperConnectNotify(QQuickTransform* self, const QMetaMethod* signal);
    friend void QQuickTransform_SuperDisconnectNotify(QQuickTransform* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickItem
class VirtualQQuickItem final : public QQuickItem {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickItem_MetaObject_Callback = QMetaObject* (*)(const QQuickItem*);
    using QQuickItem_Metacast_Callback = void* (*)(QQuickItem*, const char*);
    using QQuickItem_Metacall_Callback = int (*)(QQuickItem*, int, int, void**);
    using QQuickItem_BoundingRect_Callback = QRectF* (*)(const QQuickItem*);
    using QQuickItem_ClipRect_Callback = QRectF* (*)(const QQuickItem*);
    using QQuickItem_Contains_Callback = bool (*)(const QQuickItem*, QPointF*);
    using QQuickItem_InputMethodQuery_Callback = QVariant* (*)(const QQuickItem*, int);
    using QQuickItem_IsTextureProvider_Callback = bool (*)(const QQuickItem*);
    using QQuickItem_TextureProvider_Callback = QSGTextureProvider* (*)(const QQuickItem*);
    using QQuickItem_Event_Callback = bool (*)(QQuickItem*, QEvent*);
    using QQuickItem_ItemChange_Callback = void (*)(QQuickItem*, int, QQuickItem__ItemChangeData*);
    using QQuickItem_GeometryChange_Callback = void (*)(QQuickItem*, QRectF*, QRectF*);
    using QQuickItem_ClassBegin_Callback = void (*)(QQuickItem*);
    using QQuickItem_ComponentComplete_Callback = void (*)(QQuickItem*);
    using QQuickItem_KeyPressEvent_Callback = void (*)(QQuickItem*, QKeyEvent*);
    using QQuickItem_KeyReleaseEvent_Callback = void (*)(QQuickItem*, QKeyEvent*);
    using QQuickItem_InputMethodEvent_Callback = void (*)(QQuickItem*, QInputMethodEvent*);
    using QQuickItem_FocusInEvent_Callback = void (*)(QQuickItem*, QFocusEvent*);
    using QQuickItem_FocusOutEvent_Callback = void (*)(QQuickItem*, QFocusEvent*);
    using QQuickItem_MousePressEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseMoveEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseReleaseEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseDoubleClickEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseUngrabEvent_Callback = void (*)(QQuickItem*);
    using QQuickItem_TouchUngrabEvent_Callback = void (*)(QQuickItem*);
    using QQuickItem_WheelEvent_Callback = void (*)(QQuickItem*, QWheelEvent*);
    using QQuickItem_TouchEvent_Callback = void (*)(QQuickItem*, QTouchEvent*);
    using QQuickItem_HoverEnterEvent_Callback = void (*)(QQuickItem*, QHoverEvent*);
    using QQuickItem_HoverMoveEvent_Callback = void (*)(QQuickItem*, QHoverEvent*);
    using QQuickItem_HoverLeaveEvent_Callback = void (*)(QQuickItem*, QHoverEvent*);
    using QQuickItem_DragEnterEvent_Callback = void (*)(QQuickItem*, QDragEnterEvent*);
    using QQuickItem_DragMoveEvent_Callback = void (*)(QQuickItem*, QDragMoveEvent*);
    using QQuickItem_DragLeaveEvent_Callback = void (*)(QQuickItem*, QDragLeaveEvent*);
    using QQuickItem_DropEvent_Callback = void (*)(QQuickItem*, QDropEvent*);
    using QQuickItem_ChildMouseEventFilter_Callback = bool (*)(QQuickItem*, QQuickItem*, QEvent*);
    using QQuickItem_UpdatePaintNode_Callback = QSGNode* (*)(QQuickItem*, QSGNode*, QQuickItem__UpdatePaintNodeData*);
    using QQuickItem_ReleaseResources_Callback = void (*)(QQuickItem*);
    using QQuickItem_UpdatePolish_Callback = void (*)(QQuickItem*);
    using QQuickItem_EventFilter_Callback = bool (*)(QQuickItem*, QObject*, QEvent*);
    using QQuickItem_TimerEvent_Callback = void (*)(QQuickItem*, QTimerEvent*);
    using QQuickItem_ChildEvent_Callback = void (*)(QQuickItem*, QChildEvent*);
    using QQuickItem_CustomEvent_Callback = void (*)(QQuickItem*, QEvent*);
    using QQuickItem_ConnectNotify_Callback = void (*)(QQuickItem*, QMetaMethod*);
    using QQuickItem_DisconnectNotify_Callback = void (*)(QQuickItem*, QMetaMethod*);
    using QQuickItem::heightValid;
    using QQuickItem::isComponentComplete;
    using QQuickItem::isSignalConnected;
    using QQuickItem::receivers;
    using QQuickItem::sender;
    using QQuickItem::senderSignalIndex;
    using QQuickItem::setImplicitSize;
    using QQuickItem::updateInputMethod;
    using QQuickItem::widthValid;

    // Instance callback storage
    QQuickItem_MetaObject_Callback qquickitem_metaobject_callback = nullptr;
    QQuickItem_Metacast_Callback qquickitem_metacast_callback = nullptr;
    QQuickItem_Metacall_Callback qquickitem_metacall_callback = nullptr;
    QQuickItem_BoundingRect_Callback qquickitem_boundingrect_callback = nullptr;
    QQuickItem_ClipRect_Callback qquickitem_cliprect_callback = nullptr;
    QQuickItem_Contains_Callback qquickitem_contains_callback = nullptr;
    QQuickItem_InputMethodQuery_Callback qquickitem_inputmethodquery_callback = nullptr;
    QQuickItem_IsTextureProvider_Callback qquickitem_istextureprovider_callback = nullptr;
    QQuickItem_TextureProvider_Callback qquickitem_textureprovider_callback = nullptr;
    QQuickItem_Event_Callback qquickitem_event_callback = nullptr;
    QQuickItem_ItemChange_Callback qquickitem_itemchange_callback = nullptr;
    QQuickItem_GeometryChange_Callback qquickitem_geometrychange_callback = nullptr;
    QQuickItem_ClassBegin_Callback qquickitem_classbegin_callback = nullptr;
    QQuickItem_ComponentComplete_Callback qquickitem_componentcomplete_callback = nullptr;
    QQuickItem_KeyPressEvent_Callback qquickitem_keypressevent_callback = nullptr;
    QQuickItem_KeyReleaseEvent_Callback qquickitem_keyreleaseevent_callback = nullptr;
    QQuickItem_InputMethodEvent_Callback qquickitem_inputmethodevent_callback = nullptr;
    QQuickItem_FocusInEvent_Callback qquickitem_focusinevent_callback = nullptr;
    QQuickItem_FocusOutEvent_Callback qquickitem_focusoutevent_callback = nullptr;
    QQuickItem_MousePressEvent_Callback qquickitem_mousepressevent_callback = nullptr;
    QQuickItem_MouseMoveEvent_Callback qquickitem_mousemoveevent_callback = nullptr;
    QQuickItem_MouseReleaseEvent_Callback qquickitem_mousereleaseevent_callback = nullptr;
    QQuickItem_MouseDoubleClickEvent_Callback qquickitem_mousedoubleclickevent_callback = nullptr;
    QQuickItem_MouseUngrabEvent_Callback qquickitem_mouseungrabevent_callback = nullptr;
    QQuickItem_TouchUngrabEvent_Callback qquickitem_touchungrabevent_callback = nullptr;
    QQuickItem_WheelEvent_Callback qquickitem_wheelevent_callback = nullptr;
    QQuickItem_TouchEvent_Callback qquickitem_touchevent_callback = nullptr;
    QQuickItem_HoverEnterEvent_Callback qquickitem_hoverenterevent_callback = nullptr;
    QQuickItem_HoverMoveEvent_Callback qquickitem_hovermoveevent_callback = nullptr;
    QQuickItem_HoverLeaveEvent_Callback qquickitem_hoverleaveevent_callback = nullptr;
    QQuickItem_DragEnterEvent_Callback qquickitem_dragenterevent_callback = nullptr;
    QQuickItem_DragMoveEvent_Callback qquickitem_dragmoveevent_callback = nullptr;
    QQuickItem_DragLeaveEvent_Callback qquickitem_dragleaveevent_callback = nullptr;
    QQuickItem_DropEvent_Callback qquickitem_dropevent_callback = nullptr;
    QQuickItem_ChildMouseEventFilter_Callback qquickitem_childmouseeventfilter_callback = nullptr;
    QQuickItem_UpdatePaintNode_Callback qquickitem_updatepaintnode_callback = nullptr;
    QQuickItem_ReleaseResources_Callback qquickitem_releaseresources_callback = nullptr;
    QQuickItem_UpdatePolish_Callback qquickitem_updatepolish_callback = nullptr;
    QQuickItem_EventFilter_Callback qquickitem_eventfilter_callback = nullptr;
    QQuickItem_TimerEvent_Callback qquickitem_timerevent_callback = nullptr;
    QQuickItem_ChildEvent_Callback qquickitem_childevent_callback = nullptr;
    QQuickItem_CustomEvent_Callback qquickitem_customevent_callback = nullptr;
    QQuickItem_ConnectNotify_Callback qquickitem_connectnotify_callback = nullptr;
    QQuickItem_DisconnectNotify_Callback qquickitem_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickItem {
        using QQuickItem::childEvent;
        using QQuickItem::childMouseEventFilter;
        using QQuickItem::classBegin;
        using QQuickItem::componentComplete;
        using QQuickItem::connectNotify;
        using QQuickItem::customEvent;
        using QQuickItem::disconnectNotify;
        using QQuickItem::dragEnterEvent;
        using QQuickItem::dragLeaveEvent;
        using QQuickItem::dragMoveEvent;
        using QQuickItem::dropEvent;
        using QQuickItem::event;
        using QQuickItem::focusInEvent;
        using QQuickItem::focusOutEvent;
        using QQuickItem::geometryChange;
        using QQuickItem::hoverEnterEvent;
        using QQuickItem::hoverLeaveEvent;
        using QQuickItem::hoverMoveEvent;
        using QQuickItem::inputMethodEvent;
        using QQuickItem::itemChange;
        using QQuickItem::keyPressEvent;
        using QQuickItem::keyReleaseEvent;
        using QQuickItem::mouseDoubleClickEvent;
        using QQuickItem::mouseMoveEvent;
        using QQuickItem::mousePressEvent;
        using QQuickItem::mouseReleaseEvent;
        using QQuickItem::mouseUngrabEvent;
        using QQuickItem::releaseResources;
        using QQuickItem::timerEvent;
        using QQuickItem::touchEvent;
        using QQuickItem::touchUngrabEvent;
        using QQuickItem::updatePaintNode;
        using QQuickItem::updatePolish;
        using QQuickItem::wheelEvent;
    };

    VirtualQQuickItem() : QQuickItem() {};
    VirtualQQuickItem(QQuickItem* parent) : QQuickItem(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickitem_metaobject_callback) {
            QMetaObject* callback_ret = qquickitem_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickitem_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickitem_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickitem_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickitem_boundingrect_callback) {
            QRectF* callback_ret = qquickitem_boundingrect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickitem_cliprect_callback) {
            QRectF* callback_ret = qquickitem_cliprect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickItem::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickitem_contains_callback) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = qquickitem_contains_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickitem_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = qquickitem_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickitem_istextureprovider_callback) {
            bool callback_ret = qquickitem_istextureprovider_callback(this);
            return callback_ret;
        }
        return QQuickItem::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickitem_textureprovider_callback) {
            QSGTextureProvider* callback_ret = qquickitem_textureprovider_callback(this);
            return callback_ret;
        }
        return QQuickItem::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickitem_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qquickitem_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickItem::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickitem_itemchange_callback) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            qquickitem_itemchange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickItem::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickitem_geometrychange_callback) {
            const QRectF& newGeometry_ret = newGeometry;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&newGeometry_ret);
            const QRectF& oldGeometry_ret = oldGeometry;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&oldGeometry_ret);
            qquickitem_geometrychange_callback(this, cbval1, cbval2);
            return;
        }
        QQuickItem::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickitem_classbegin_callback) {
            qquickitem_classbegin_callback(this);
            return;
        }
        QQuickItem::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickitem_componentcomplete_callback) {
            qquickitem_componentcomplete_callback(this);
            return;
        }
        QQuickItem::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickitem_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickitem_keypressevent_callback(this, cbval1);
            return;
        }
        QQuickItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickitem_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qquickitem_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QQuickItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickitem_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qquickitem_inputmethodevent_callback(this, cbval1);
            return;
        }
        QQuickItem::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickitem_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickitem_focusinevent_callback(this, cbval1);
            return;
        }
        QQuickItem::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickitem_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qquickitem_focusoutevent_callback(this, cbval1);
            return;
        }
        QQuickItem::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickitem_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickitem_mousepressevent_callback(this, cbval1);
            return;
        }
        QQuickItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickitem_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickitem_mousemoveevent_callback(this, cbval1);
            return;
        }
        QQuickItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickitem_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickitem_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QQuickItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickitem_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qquickitem_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QQuickItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickitem_mouseungrabevent_callback) {
            qquickitem_mouseungrabevent_callback(this);
            return;
        }
        QQuickItem::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickitem_touchungrabevent_callback) {
            qquickitem_touchungrabevent_callback(this);
            return;
        }
        QQuickItem::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickitem_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qquickitem_wheelevent_callback(this, cbval1);
            return;
        }
        QQuickItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickitem_touchevent_callback) {
            QTouchEvent* cbval1 = event;
            qquickitem_touchevent_callback(this, cbval1);
            return;
        }
        QQuickItem::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickitem_hoverenterevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickitem_hoverenterevent_callback(this, cbval1);
            return;
        }
        QQuickItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickitem_hovermoveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickitem_hovermoveevent_callback(this, cbval1);
            return;
        }
        QQuickItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickitem_hoverleaveevent_callback) {
            QHoverEvent* cbval1 = event;
            qquickitem_hoverleaveevent_callback(this, cbval1);
            return;
        }
        QQuickItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickitem_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qquickitem_dragenterevent_callback(this, cbval1);
            return;
        }
        QQuickItem::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickitem_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qquickitem_dragmoveevent_callback(this, cbval1);
            return;
        }
        QQuickItem::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickitem_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qquickitem_dragleaveevent_callback(this, cbval1);
            return;
        }
        QQuickItem::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickitem_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qquickitem_dropevent_callback(this, cbval1);
            return;
        }
        QQuickItem::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickitem_childmouseeventfilter_callback) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qquickitem_childmouseeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickItem::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickitem_updatepaintnode_callback) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = qquickitem_updatepaintnode_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickItem::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickitem_releaseresources_callback) {
            qquickitem_releaseresources_callback(this);
            return;
        }
        QQuickItem::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickitem_updatepolish_callback) {
            qquickitem_updatepolish_callback(this);
            return;
        }
        QQuickItem::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickitem_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickitem_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qquickitem_timerevent_callback(this, cbval1);
            return;
        }
        QQuickItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickitem_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickitem_childevent_callback(this, cbval1);
            return;
        }
        QQuickItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickitem_customevent_callback) {
            QEvent* cbval1 = event;
            qquickitem_customevent_callback(this, cbval1);
            return;
        }
        QQuickItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickitem_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickitem_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickitem_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickitem_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickItem::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QQuickItem_SuperEvent(QQuickItem* self, QEvent* param1);
    friend void QQuickItem_SuperItemChange(QQuickItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickItem_SuperGeometryChange(QQuickItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickItem_SuperClassBegin(QQuickItem* self);
    friend void QQuickItem_SuperComponentComplete(QQuickItem* self);
    friend void QQuickItem_SuperKeyPressEvent(QQuickItem* self, QKeyEvent* event);
    friend void QQuickItem_SuperKeyReleaseEvent(QQuickItem* self, QKeyEvent* event);
    friend void QQuickItem_SuperInputMethodEvent(QQuickItem* self, QInputMethodEvent* param1);
    friend void QQuickItem_SuperFocusInEvent(QQuickItem* self, QFocusEvent* param1);
    friend void QQuickItem_SuperFocusOutEvent(QQuickItem* self, QFocusEvent* param1);
    friend void QQuickItem_SuperMousePressEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMouseMoveEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMouseReleaseEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMouseDoubleClickEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMouseUngrabEvent(QQuickItem* self);
    friend void QQuickItem_SuperTouchUngrabEvent(QQuickItem* self);
    friend void QQuickItem_SuperWheelEvent(QQuickItem* self, QWheelEvent* event);
    friend void QQuickItem_SuperTouchEvent(QQuickItem* self, QTouchEvent* event);
    friend void QQuickItem_SuperHoverEnterEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_SuperHoverMoveEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_SuperHoverLeaveEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_SuperDragEnterEvent(QQuickItem* self, QDragEnterEvent* param1);
    friend void QQuickItem_SuperDragMoveEvent(QQuickItem* self, QDragMoveEvent* param1);
    friend void QQuickItem_SuperDragLeaveEvent(QQuickItem* self, QDragLeaveEvent* param1);
    friend void QQuickItem_SuperDropEvent(QQuickItem* self, QDropEvent* param1);
    friend bool QQuickItem_SuperChildMouseEventFilter(QQuickItem* self, QQuickItem* param1, QEvent* param2);
    friend QSGNode* QQuickItem_SuperUpdatePaintNode(QQuickItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend void QQuickItem_SuperReleaseResources(QQuickItem* self);
    friend void QQuickItem_SuperUpdatePolish(QQuickItem* self);
    friend void QQuickItem_SuperTimerEvent(QQuickItem* self, QTimerEvent* event);
    friend void QQuickItem_SuperChildEvent(QQuickItem* self, QChildEvent* event);
    friend void QQuickItem_SuperCustomEvent(QQuickItem* self, QEvent* event);
    friend void QQuickItem_SuperConnectNotify(QQuickItem* self, const QMetaMethod* signal);
    friend void QQuickItem_SuperDisconnectNotify(QQuickItem* self, const QMetaMethod* signal);
};

#endif
