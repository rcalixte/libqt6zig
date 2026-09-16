#pragma once
#ifndef QUICK_LIBQQUICKITEM_HXX
#define QUICK_LIBQQUICKITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickTransform so that we can call protected methods
class VirtualQQuickTransform : public QQuickTransform {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickTransform = true;

    // Virtual class public types (including callbacks)
    using QQuickTransform_MetaObject_Callback = QMetaObject* (*)();
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
    using QQuickTransform_Update_Callback = void (*)();
    using QQuickTransform_Sender_Callback = QObject* (*)();
    using QQuickTransform_SenderSignalIndex_Callback = int (*)();
    using QQuickTransform_Receivers_Callback = int (*)(const QQuickTransform*, const char*);
    using QQuickTransform_IsSignalConnected_Callback = bool (*)(const QQuickTransform*, QMetaMethod*);

  protected:
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
    QQuickTransform_Update_Callback qquicktransform_update_callback = nullptr;
    QQuickTransform_Sender_Callback qquicktransform_sender_callback = nullptr;
    QQuickTransform_SenderSignalIndex_Callback qquicktransform_sendersignalindex_callback = nullptr;
    QQuickTransform_Receivers_Callback qquicktransform_receivers_callback = nullptr;
    QQuickTransform_IsSignalConnected_Callback qquicktransform_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquicktransform_metaobject_isbase = false;
    mutable bool qquicktransform_metacast_isbase = false;
    mutable bool qquicktransform_metacall_isbase = false;
    mutable bool qquicktransform_applyto_isbase = false;
    mutable bool qquicktransform_event_isbase = false;
    mutable bool qquicktransform_eventfilter_isbase = false;
    mutable bool qquicktransform_timerevent_isbase = false;
    mutable bool qquicktransform_childevent_isbase = false;
    mutable bool qquicktransform_customevent_isbase = false;
    mutable bool qquicktransform_connectnotify_isbase = false;
    mutable bool qquicktransform_disconnectnotify_isbase = false;
    mutable bool qquicktransform_update_isbase = false;
    mutable bool qquicktransform_sender_isbase = false;
    mutable bool qquicktransform_sendersignalindex_isbase = false;
    mutable bool qquicktransform_receivers_isbase = false;
    mutable bool qquicktransform_issignalconnected_isbase = false;

  public:
    VirtualQQuickTransform() : QQuickTransform() {};
    VirtualQQuickTransform(QObject* parent) : QQuickTransform(parent) {};

    // Callback setters
    inline void setQQuickTransform_MetaObject_Callback(QQuickTransform_MetaObject_Callback cb) { qquicktransform_metaobject_callback = cb; }
    inline void setQQuickTransform_Metacast_Callback(QQuickTransform_Metacast_Callback cb) { qquicktransform_metacast_callback = cb; }
    inline void setQQuickTransform_Metacall_Callback(QQuickTransform_Metacall_Callback cb) { qquicktransform_metacall_callback = cb; }
    inline void setQQuickTransform_ApplyTo_Callback(QQuickTransform_ApplyTo_Callback cb) { qquicktransform_applyto_callback = cb; }
    inline void setQQuickTransform_Event_Callback(QQuickTransform_Event_Callback cb) { qquicktransform_event_callback = cb; }
    inline void setQQuickTransform_EventFilter_Callback(QQuickTransform_EventFilter_Callback cb) { qquicktransform_eventfilter_callback = cb; }
    inline void setQQuickTransform_TimerEvent_Callback(QQuickTransform_TimerEvent_Callback cb) { qquicktransform_timerevent_callback = cb; }
    inline void setQQuickTransform_ChildEvent_Callback(QQuickTransform_ChildEvent_Callback cb) { qquicktransform_childevent_callback = cb; }
    inline void setQQuickTransform_CustomEvent_Callback(QQuickTransform_CustomEvent_Callback cb) { qquicktransform_customevent_callback = cb; }
    inline void setQQuickTransform_ConnectNotify_Callback(QQuickTransform_ConnectNotify_Callback cb) { qquicktransform_connectnotify_callback = cb; }
    inline void setQQuickTransform_DisconnectNotify_Callback(QQuickTransform_DisconnectNotify_Callback cb) { qquicktransform_disconnectnotify_callback = cb; }
    inline void setQQuickTransform_Update_Callback(QQuickTransform_Update_Callback cb) { qquicktransform_update_callback = cb; }
    inline void setQQuickTransform_Sender_Callback(QQuickTransform_Sender_Callback cb) { qquicktransform_sender_callback = cb; }
    inline void setQQuickTransform_SenderSignalIndex_Callback(QQuickTransform_SenderSignalIndex_Callback cb) { qquicktransform_sendersignalindex_callback = cb; }
    inline void setQQuickTransform_Receivers_Callback(QQuickTransform_Receivers_Callback cb) { qquicktransform_receivers_callback = cb; }
    inline void setQQuickTransform_IsSignalConnected_Callback(QQuickTransform_IsSignalConnected_Callback cb) { qquicktransform_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickTransform_MetaObject_IsBase(bool value) const { qquicktransform_metaobject_isbase = value; }
    inline void setQQuickTransform_Metacast_IsBase(bool value) const { qquicktransform_metacast_isbase = value; }
    inline void setQQuickTransform_Metacall_IsBase(bool value) const { qquicktransform_metacall_isbase = value; }
    inline void setQQuickTransform_ApplyTo_IsBase(bool value) const { qquicktransform_applyto_isbase = value; }
    inline void setQQuickTransform_Event_IsBase(bool value) const { qquicktransform_event_isbase = value; }
    inline void setQQuickTransform_EventFilter_IsBase(bool value) const { qquicktransform_eventfilter_isbase = value; }
    inline void setQQuickTransform_TimerEvent_IsBase(bool value) const { qquicktransform_timerevent_isbase = value; }
    inline void setQQuickTransform_ChildEvent_IsBase(bool value) const { qquicktransform_childevent_isbase = value; }
    inline void setQQuickTransform_CustomEvent_IsBase(bool value) const { qquicktransform_customevent_isbase = value; }
    inline void setQQuickTransform_ConnectNotify_IsBase(bool value) const { qquicktransform_connectnotify_isbase = value; }
    inline void setQQuickTransform_DisconnectNotify_IsBase(bool value) const { qquicktransform_disconnectnotify_isbase = value; }
    inline void setQQuickTransform_Update_IsBase(bool value) const { qquicktransform_update_isbase = value; }
    inline void setQQuickTransform_Sender_IsBase(bool value) const { qquicktransform_sender_isbase = value; }
    inline void setQQuickTransform_SenderSignalIndex_IsBase(bool value) const { qquicktransform_sendersignalindex_isbase = value; }
    inline void setQQuickTransform_Receivers_IsBase(bool value) const { qquicktransform_receivers_isbase = value; }
    inline void setQQuickTransform_IsSignalConnected_IsBase(bool value) const { qquicktransform_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquicktransform_metaobject_isbase) {
            qquicktransform_metaobject_isbase = false;
            return QQuickTransform::metaObject();
        }
        auto metaobject_cb = qquicktransform_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickTransform::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquicktransform_metacast_isbase) {
            qquicktransform_metacast_isbase = false;
            return QQuickTransform::qt_metacast(param1);
        }
        auto metacast_cb = qquicktransform_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTransform::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquicktransform_metacall_isbase) {
            qquicktransform_metacall_isbase = false;
            return QQuickTransform::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquicktransform_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickTransform::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyTo(QMatrix4x4* matrix) const override {
        auto applyto_cb = qquicktransform_applyto_callback;
        if (applyto_cb) {
            QMatrix4x4* cbval1 = matrix;
            applyto_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qquicktransform_event_isbase) {
            qquicktransform_event_isbase = false;
            return QQuickTransform::event(event);
        }
        auto event_cb = qquicktransform_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTransform::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquicktransform_eventfilter_isbase) {
            qquicktransform_eventfilter_isbase = false;
            return QQuickTransform::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquicktransform_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickTransform::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquicktransform_timerevent_isbase) {
            qquicktransform_timerevent_isbase = false;
            QQuickTransform::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquicktransform_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickTransform::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquicktransform_childevent_isbase) {
            qquicktransform_childevent_isbase = false;
            QQuickTransform::childEvent(event);
            return;
        }
        auto childevent_cb = qquicktransform_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickTransform::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquicktransform_customevent_isbase) {
            qquicktransform_customevent_isbase = false;
            QQuickTransform::customEvent(event);
            return;
        }
        auto customevent_cb = qquicktransform_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickTransform::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquicktransform_connectnotify_isbase) {
            qquicktransform_connectnotify_isbase = false;
            QQuickTransform::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquicktransform_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickTransform::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquicktransform_disconnectnotify_isbase) {
            qquicktransform_disconnectnotify_isbase = false;
            QQuickTransform::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquicktransform_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickTransform::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void update() {
        if (qquicktransform_update_isbase) {
            qquicktransform_update_isbase = false;
            QQuickTransform::update();
            return;
        }
        auto update_cb = qquicktransform_update_callback;
        if (update_cb) {
            update_cb();
            return;
        }
        QQuickTransform::update();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquicktransform_sender_isbase) {
            qquicktransform_sender_isbase = false;
            return QQuickTransform::sender();
        }
        auto sender_cb = qquicktransform_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickTransform::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquicktransform_sendersignalindex_isbase) {
            qquicktransform_sendersignalindex_isbase = false;
            return QQuickTransform::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquicktransform_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickTransform::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquicktransform_receivers_isbase) {
            qquicktransform_receivers_isbase = false;
            return QQuickTransform::receivers(signal);
        }
        auto receivers_cb = qquicktransform_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickTransform::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquicktransform_issignalconnected_isbase) {
            qquicktransform_issignalconnected_isbase = false;
            return QQuickTransform::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquicktransform_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickTransform::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickTransform_TimerEvent(QQuickTransform* self, QTimerEvent* event);
    friend void QQuickTransform_SuperTimerEvent(QQuickTransform* self, QTimerEvent* event);
    friend void QQuickTransform_ChildEvent(QQuickTransform* self, QChildEvent* event);
    friend void QQuickTransform_SuperChildEvent(QQuickTransform* self, QChildEvent* event);
    friend void QQuickTransform_CustomEvent(QQuickTransform* self, QEvent* event);
    friend void QQuickTransform_SuperCustomEvent(QQuickTransform* self, QEvent* event);
    friend void QQuickTransform_ConnectNotify(QQuickTransform* self, const QMetaMethod* signal);
    friend void QQuickTransform_SuperConnectNotify(QQuickTransform* self, const QMetaMethod* signal);
    friend void QQuickTransform_DisconnectNotify(QQuickTransform* self, const QMetaMethod* signal);
    friend void QQuickTransform_SuperDisconnectNotify(QQuickTransform* self, const QMetaMethod* signal);
    friend void QQuickTransform_Update(QQuickTransform* self);
    friend void QQuickTransform_SuperUpdate(QQuickTransform* self);
    friend QObject* QQuickTransform_Sender(const QQuickTransform* self);
    friend QObject* QQuickTransform_SuperSender(const QQuickTransform* self);
    friend int QQuickTransform_SenderSignalIndex(const QQuickTransform* self);
    friend int QQuickTransform_SuperSenderSignalIndex(const QQuickTransform* self);
    friend int QQuickTransform_Receivers(const QQuickTransform* self, const char* signal);
    friend int QQuickTransform_SuperReceivers(const QQuickTransform* self, const char* signal);
    friend bool QQuickTransform_IsSignalConnected(const QQuickTransform* self, const QMetaMethod* signal);
    friend bool QQuickTransform_SuperIsSignalConnected(const QQuickTransform* self, const QMetaMethod* signal);
};

// This class is a subclass of QQuickItem so that we can call protected methods
class VirtualQQuickItem final : public QQuickItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickItem = true;

    // Virtual class public types (including callbacks)
    using QQuickItem_MetaObject_Callback = QMetaObject* (*)();
    using QQuickItem_Metacast_Callback = void* (*)(QQuickItem*, const char*);
    using QQuickItem_Metacall_Callback = int (*)(QQuickItem*, int, int, void**);
    using QQuickItem_BoundingRect_Callback = QRectF* (*)();
    using QQuickItem_ClipRect_Callback = QRectF* (*)();
    using QQuickItem_Contains_Callback = bool (*)(const QQuickItem*, QPointF*);
    using QQuickItem_InputMethodQuery_Callback = QVariant* (*)(const QQuickItem*, int);
    using QQuickItem_IsTextureProvider_Callback = bool (*)();
    using QQuickItem_TextureProvider_Callback = QSGTextureProvider* (*)();
    using QQuickItem_Event_Callback = bool (*)(QQuickItem*, QEvent*);
    using QQuickItem_ItemChange_Callback = void (*)(QQuickItem*, int, QQuickItem__ItemChangeData*);
    using QQuickItem_GeometryChange_Callback = void (*)(QQuickItem*, QRectF*, QRectF*);
    using QQuickItem_ClassBegin_Callback = void (*)();
    using QQuickItem_ComponentComplete_Callback = void (*)();
    using QQuickItem_KeyPressEvent_Callback = void (*)(QQuickItem*, QKeyEvent*);
    using QQuickItem_KeyReleaseEvent_Callback = void (*)(QQuickItem*, QKeyEvent*);
    using QQuickItem_InputMethodEvent_Callback = void (*)(QQuickItem*, QInputMethodEvent*);
    using QQuickItem_FocusInEvent_Callback = void (*)(QQuickItem*, QFocusEvent*);
    using QQuickItem_FocusOutEvent_Callback = void (*)(QQuickItem*, QFocusEvent*);
    using QQuickItem_MousePressEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseMoveEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseReleaseEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseDoubleClickEvent_Callback = void (*)(QQuickItem*, QMouseEvent*);
    using QQuickItem_MouseUngrabEvent_Callback = void (*)();
    using QQuickItem_TouchUngrabEvent_Callback = void (*)();
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
    using QQuickItem_ReleaseResources_Callback = void (*)();
    using QQuickItem_UpdatePolish_Callback = void (*)();
    using QQuickItem_EventFilter_Callback = bool (*)(QQuickItem*, QObject*, QEvent*);
    using QQuickItem_TimerEvent_Callback = void (*)(QQuickItem*, QTimerEvent*);
    using QQuickItem_ChildEvent_Callback = void (*)(QQuickItem*, QChildEvent*);
    using QQuickItem_CustomEvent_Callback = void (*)(QQuickItem*, QEvent*);
    using QQuickItem_ConnectNotify_Callback = void (*)(QQuickItem*, QMetaMethod*);
    using QQuickItem_DisconnectNotify_Callback = void (*)(QQuickItem*, QMetaMethod*);
    using QQuickItem_IsComponentComplete_Callback = bool (*)();
    using QQuickItem_UpdateInputMethod_Callback = void (*)();
    using QQuickItem_WidthValid_Callback = bool (*)();
    using QQuickItem_HeightValid_Callback = bool (*)();
    using QQuickItem_SetImplicitSize_Callback = void (*)(QQuickItem*, double, double);
    using QQuickItem_UpdateInputMethod1_Callback = void (*)(QQuickItem*, int);
    using QQuickItem_Sender_Callback = QObject* (*)();
    using QQuickItem_SenderSignalIndex_Callback = int (*)();
    using QQuickItem_Receivers_Callback = int (*)(const QQuickItem*, const char*);
    using QQuickItem_IsSignalConnected_Callback = bool (*)(const QQuickItem*, QMetaMethod*);

  protected:
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
    QQuickItem_IsComponentComplete_Callback qquickitem_iscomponentcomplete_callback = nullptr;
    QQuickItem_UpdateInputMethod_Callback qquickitem_updateinputmethod_callback = nullptr;
    QQuickItem_WidthValid_Callback qquickitem_widthvalid_callback = nullptr;
    QQuickItem_HeightValid_Callback qquickitem_heightvalid_callback = nullptr;
    QQuickItem_SetImplicitSize_Callback qquickitem_setimplicitsize_callback = nullptr;
    QQuickItem_UpdateInputMethod1_Callback qquickitem_updateinputmethod1_callback = nullptr;
    QQuickItem_Sender_Callback qquickitem_sender_callback = nullptr;
    QQuickItem_SenderSignalIndex_Callback qquickitem_sendersignalindex_callback = nullptr;
    QQuickItem_Receivers_Callback qquickitem_receivers_callback = nullptr;
    QQuickItem_IsSignalConnected_Callback qquickitem_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickitem_metaobject_isbase = false;
    mutable bool qquickitem_metacast_isbase = false;
    mutable bool qquickitem_metacall_isbase = false;
    mutable bool qquickitem_boundingrect_isbase = false;
    mutable bool qquickitem_cliprect_isbase = false;
    mutable bool qquickitem_contains_isbase = false;
    mutable bool qquickitem_inputmethodquery_isbase = false;
    mutable bool qquickitem_istextureprovider_isbase = false;
    mutable bool qquickitem_textureprovider_isbase = false;
    mutable bool qquickitem_event_isbase = false;
    mutable bool qquickitem_itemchange_isbase = false;
    mutable bool qquickitem_geometrychange_isbase = false;
    mutable bool qquickitem_classbegin_isbase = false;
    mutable bool qquickitem_componentcomplete_isbase = false;
    mutable bool qquickitem_keypressevent_isbase = false;
    mutable bool qquickitem_keyreleaseevent_isbase = false;
    mutable bool qquickitem_inputmethodevent_isbase = false;
    mutable bool qquickitem_focusinevent_isbase = false;
    mutable bool qquickitem_focusoutevent_isbase = false;
    mutable bool qquickitem_mousepressevent_isbase = false;
    mutable bool qquickitem_mousemoveevent_isbase = false;
    mutable bool qquickitem_mousereleaseevent_isbase = false;
    mutable bool qquickitem_mousedoubleclickevent_isbase = false;
    mutable bool qquickitem_mouseungrabevent_isbase = false;
    mutable bool qquickitem_touchungrabevent_isbase = false;
    mutable bool qquickitem_wheelevent_isbase = false;
    mutable bool qquickitem_touchevent_isbase = false;
    mutable bool qquickitem_hoverenterevent_isbase = false;
    mutable bool qquickitem_hovermoveevent_isbase = false;
    mutable bool qquickitem_hoverleaveevent_isbase = false;
    mutable bool qquickitem_dragenterevent_isbase = false;
    mutable bool qquickitem_dragmoveevent_isbase = false;
    mutable bool qquickitem_dragleaveevent_isbase = false;
    mutable bool qquickitem_dropevent_isbase = false;
    mutable bool qquickitem_childmouseeventfilter_isbase = false;
    mutable bool qquickitem_updatepaintnode_isbase = false;
    mutable bool qquickitem_releaseresources_isbase = false;
    mutable bool qquickitem_updatepolish_isbase = false;
    mutable bool qquickitem_eventfilter_isbase = false;
    mutable bool qquickitem_timerevent_isbase = false;
    mutable bool qquickitem_childevent_isbase = false;
    mutable bool qquickitem_customevent_isbase = false;
    mutable bool qquickitem_connectnotify_isbase = false;
    mutable bool qquickitem_disconnectnotify_isbase = false;
    mutable bool qquickitem_iscomponentcomplete_isbase = false;
    mutable bool qquickitem_updateinputmethod_isbase = false;
    mutable bool qquickitem_widthvalid_isbase = false;
    mutable bool qquickitem_heightvalid_isbase = false;
    mutable bool qquickitem_setimplicitsize_isbase = false;
    mutable bool qquickitem_updateinputmethod1_isbase = false;
    mutable bool qquickitem_sender_isbase = false;
    mutable bool qquickitem_sendersignalindex_isbase = false;
    mutable bool qquickitem_receivers_isbase = false;
    mutable bool qquickitem_issignalconnected_isbase = false;

  public:
    VirtualQQuickItem() : QQuickItem() {};
    VirtualQQuickItem(QQuickItem* parent) : QQuickItem(parent) {};

    // Callback setters
    inline void setQQuickItem_MetaObject_Callback(QQuickItem_MetaObject_Callback cb) { qquickitem_metaobject_callback = cb; }
    inline void setQQuickItem_Metacast_Callback(QQuickItem_Metacast_Callback cb) { qquickitem_metacast_callback = cb; }
    inline void setQQuickItem_Metacall_Callback(QQuickItem_Metacall_Callback cb) { qquickitem_metacall_callback = cb; }
    inline void setQQuickItem_BoundingRect_Callback(QQuickItem_BoundingRect_Callback cb) { qquickitem_boundingrect_callback = cb; }
    inline void setQQuickItem_ClipRect_Callback(QQuickItem_ClipRect_Callback cb) { qquickitem_cliprect_callback = cb; }
    inline void setQQuickItem_Contains_Callback(QQuickItem_Contains_Callback cb) { qquickitem_contains_callback = cb; }
    inline void setQQuickItem_InputMethodQuery_Callback(QQuickItem_InputMethodQuery_Callback cb) { qquickitem_inputmethodquery_callback = cb; }
    inline void setQQuickItem_IsTextureProvider_Callback(QQuickItem_IsTextureProvider_Callback cb) { qquickitem_istextureprovider_callback = cb; }
    inline void setQQuickItem_TextureProvider_Callback(QQuickItem_TextureProvider_Callback cb) { qquickitem_textureprovider_callback = cb; }
    inline void setQQuickItem_Event_Callback(QQuickItem_Event_Callback cb) { qquickitem_event_callback = cb; }
    inline void setQQuickItem_ItemChange_Callback(QQuickItem_ItemChange_Callback cb) { qquickitem_itemchange_callback = cb; }
    inline void setQQuickItem_GeometryChange_Callback(QQuickItem_GeometryChange_Callback cb) { qquickitem_geometrychange_callback = cb; }
    inline void setQQuickItem_ClassBegin_Callback(QQuickItem_ClassBegin_Callback cb) { qquickitem_classbegin_callback = cb; }
    inline void setQQuickItem_ComponentComplete_Callback(QQuickItem_ComponentComplete_Callback cb) { qquickitem_componentcomplete_callback = cb; }
    inline void setQQuickItem_KeyPressEvent_Callback(QQuickItem_KeyPressEvent_Callback cb) { qquickitem_keypressevent_callback = cb; }
    inline void setQQuickItem_KeyReleaseEvent_Callback(QQuickItem_KeyReleaseEvent_Callback cb) { qquickitem_keyreleaseevent_callback = cb; }
    inline void setQQuickItem_InputMethodEvent_Callback(QQuickItem_InputMethodEvent_Callback cb) { qquickitem_inputmethodevent_callback = cb; }
    inline void setQQuickItem_FocusInEvent_Callback(QQuickItem_FocusInEvent_Callback cb) { qquickitem_focusinevent_callback = cb; }
    inline void setQQuickItem_FocusOutEvent_Callback(QQuickItem_FocusOutEvent_Callback cb) { qquickitem_focusoutevent_callback = cb; }
    inline void setQQuickItem_MousePressEvent_Callback(QQuickItem_MousePressEvent_Callback cb) { qquickitem_mousepressevent_callback = cb; }
    inline void setQQuickItem_MouseMoveEvent_Callback(QQuickItem_MouseMoveEvent_Callback cb) { qquickitem_mousemoveevent_callback = cb; }
    inline void setQQuickItem_MouseReleaseEvent_Callback(QQuickItem_MouseReleaseEvent_Callback cb) { qquickitem_mousereleaseevent_callback = cb; }
    inline void setQQuickItem_MouseDoubleClickEvent_Callback(QQuickItem_MouseDoubleClickEvent_Callback cb) { qquickitem_mousedoubleclickevent_callback = cb; }
    inline void setQQuickItem_MouseUngrabEvent_Callback(QQuickItem_MouseUngrabEvent_Callback cb) { qquickitem_mouseungrabevent_callback = cb; }
    inline void setQQuickItem_TouchUngrabEvent_Callback(QQuickItem_TouchUngrabEvent_Callback cb) { qquickitem_touchungrabevent_callback = cb; }
    inline void setQQuickItem_WheelEvent_Callback(QQuickItem_WheelEvent_Callback cb) { qquickitem_wheelevent_callback = cb; }
    inline void setQQuickItem_TouchEvent_Callback(QQuickItem_TouchEvent_Callback cb) { qquickitem_touchevent_callback = cb; }
    inline void setQQuickItem_HoverEnterEvent_Callback(QQuickItem_HoverEnterEvent_Callback cb) { qquickitem_hoverenterevent_callback = cb; }
    inline void setQQuickItem_HoverMoveEvent_Callback(QQuickItem_HoverMoveEvent_Callback cb) { qquickitem_hovermoveevent_callback = cb; }
    inline void setQQuickItem_HoverLeaveEvent_Callback(QQuickItem_HoverLeaveEvent_Callback cb) { qquickitem_hoverleaveevent_callback = cb; }
    inline void setQQuickItem_DragEnterEvent_Callback(QQuickItem_DragEnterEvent_Callback cb) { qquickitem_dragenterevent_callback = cb; }
    inline void setQQuickItem_DragMoveEvent_Callback(QQuickItem_DragMoveEvent_Callback cb) { qquickitem_dragmoveevent_callback = cb; }
    inline void setQQuickItem_DragLeaveEvent_Callback(QQuickItem_DragLeaveEvent_Callback cb) { qquickitem_dragleaveevent_callback = cb; }
    inline void setQQuickItem_DropEvent_Callback(QQuickItem_DropEvent_Callback cb) { qquickitem_dropevent_callback = cb; }
    inline void setQQuickItem_ChildMouseEventFilter_Callback(QQuickItem_ChildMouseEventFilter_Callback cb) { qquickitem_childmouseeventfilter_callback = cb; }
    inline void setQQuickItem_UpdatePaintNode_Callback(QQuickItem_UpdatePaintNode_Callback cb) { qquickitem_updatepaintnode_callback = cb; }
    inline void setQQuickItem_ReleaseResources_Callback(QQuickItem_ReleaseResources_Callback cb) { qquickitem_releaseresources_callback = cb; }
    inline void setQQuickItem_UpdatePolish_Callback(QQuickItem_UpdatePolish_Callback cb) { qquickitem_updatepolish_callback = cb; }
    inline void setQQuickItem_EventFilter_Callback(QQuickItem_EventFilter_Callback cb) { qquickitem_eventfilter_callback = cb; }
    inline void setQQuickItem_TimerEvent_Callback(QQuickItem_TimerEvent_Callback cb) { qquickitem_timerevent_callback = cb; }
    inline void setQQuickItem_ChildEvent_Callback(QQuickItem_ChildEvent_Callback cb) { qquickitem_childevent_callback = cb; }
    inline void setQQuickItem_CustomEvent_Callback(QQuickItem_CustomEvent_Callback cb) { qquickitem_customevent_callback = cb; }
    inline void setQQuickItem_ConnectNotify_Callback(QQuickItem_ConnectNotify_Callback cb) { qquickitem_connectnotify_callback = cb; }
    inline void setQQuickItem_DisconnectNotify_Callback(QQuickItem_DisconnectNotify_Callback cb) { qquickitem_disconnectnotify_callback = cb; }
    inline void setQQuickItem_IsComponentComplete_Callback(QQuickItem_IsComponentComplete_Callback cb) { qquickitem_iscomponentcomplete_callback = cb; }
    inline void setQQuickItem_UpdateInputMethod_Callback(QQuickItem_UpdateInputMethod_Callback cb) { qquickitem_updateinputmethod_callback = cb; }
    inline void setQQuickItem_WidthValid_Callback(QQuickItem_WidthValid_Callback cb) { qquickitem_widthvalid_callback = cb; }
    inline void setQQuickItem_HeightValid_Callback(QQuickItem_HeightValid_Callback cb) { qquickitem_heightvalid_callback = cb; }
    inline void setQQuickItem_SetImplicitSize_Callback(QQuickItem_SetImplicitSize_Callback cb) { qquickitem_setimplicitsize_callback = cb; }
    inline void setQQuickItem_UpdateInputMethod1_Callback(QQuickItem_UpdateInputMethod1_Callback cb) { qquickitem_updateinputmethod1_callback = cb; }
    inline void setQQuickItem_Sender_Callback(QQuickItem_Sender_Callback cb) { qquickitem_sender_callback = cb; }
    inline void setQQuickItem_SenderSignalIndex_Callback(QQuickItem_SenderSignalIndex_Callback cb) { qquickitem_sendersignalindex_callback = cb; }
    inline void setQQuickItem_Receivers_Callback(QQuickItem_Receivers_Callback cb) { qquickitem_receivers_callback = cb; }
    inline void setQQuickItem_IsSignalConnected_Callback(QQuickItem_IsSignalConnected_Callback cb) { qquickitem_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickItem_MetaObject_IsBase(bool value) const { qquickitem_metaobject_isbase = value; }
    inline void setQQuickItem_Metacast_IsBase(bool value) const { qquickitem_metacast_isbase = value; }
    inline void setQQuickItem_Metacall_IsBase(bool value) const { qquickitem_metacall_isbase = value; }
    inline void setQQuickItem_BoundingRect_IsBase(bool value) const { qquickitem_boundingrect_isbase = value; }
    inline void setQQuickItem_ClipRect_IsBase(bool value) const { qquickitem_cliprect_isbase = value; }
    inline void setQQuickItem_Contains_IsBase(bool value) const { qquickitem_contains_isbase = value; }
    inline void setQQuickItem_InputMethodQuery_IsBase(bool value) const { qquickitem_inputmethodquery_isbase = value; }
    inline void setQQuickItem_IsTextureProvider_IsBase(bool value) const { qquickitem_istextureprovider_isbase = value; }
    inline void setQQuickItem_TextureProvider_IsBase(bool value) const { qquickitem_textureprovider_isbase = value; }
    inline void setQQuickItem_Event_IsBase(bool value) const { qquickitem_event_isbase = value; }
    inline void setQQuickItem_ItemChange_IsBase(bool value) const { qquickitem_itemchange_isbase = value; }
    inline void setQQuickItem_GeometryChange_IsBase(bool value) const { qquickitem_geometrychange_isbase = value; }
    inline void setQQuickItem_ClassBegin_IsBase(bool value) const { qquickitem_classbegin_isbase = value; }
    inline void setQQuickItem_ComponentComplete_IsBase(bool value) const { qquickitem_componentcomplete_isbase = value; }
    inline void setQQuickItem_KeyPressEvent_IsBase(bool value) const { qquickitem_keypressevent_isbase = value; }
    inline void setQQuickItem_KeyReleaseEvent_IsBase(bool value) const { qquickitem_keyreleaseevent_isbase = value; }
    inline void setQQuickItem_InputMethodEvent_IsBase(bool value) const { qquickitem_inputmethodevent_isbase = value; }
    inline void setQQuickItem_FocusInEvent_IsBase(bool value) const { qquickitem_focusinevent_isbase = value; }
    inline void setQQuickItem_FocusOutEvent_IsBase(bool value) const { qquickitem_focusoutevent_isbase = value; }
    inline void setQQuickItem_MousePressEvent_IsBase(bool value) const { qquickitem_mousepressevent_isbase = value; }
    inline void setQQuickItem_MouseMoveEvent_IsBase(bool value) const { qquickitem_mousemoveevent_isbase = value; }
    inline void setQQuickItem_MouseReleaseEvent_IsBase(bool value) const { qquickitem_mousereleaseevent_isbase = value; }
    inline void setQQuickItem_MouseDoubleClickEvent_IsBase(bool value) const { qquickitem_mousedoubleclickevent_isbase = value; }
    inline void setQQuickItem_MouseUngrabEvent_IsBase(bool value) const { qquickitem_mouseungrabevent_isbase = value; }
    inline void setQQuickItem_TouchUngrabEvent_IsBase(bool value) const { qquickitem_touchungrabevent_isbase = value; }
    inline void setQQuickItem_WheelEvent_IsBase(bool value) const { qquickitem_wheelevent_isbase = value; }
    inline void setQQuickItem_TouchEvent_IsBase(bool value) const { qquickitem_touchevent_isbase = value; }
    inline void setQQuickItem_HoverEnterEvent_IsBase(bool value) const { qquickitem_hoverenterevent_isbase = value; }
    inline void setQQuickItem_HoverMoveEvent_IsBase(bool value) const { qquickitem_hovermoveevent_isbase = value; }
    inline void setQQuickItem_HoverLeaveEvent_IsBase(bool value) const { qquickitem_hoverleaveevent_isbase = value; }
    inline void setQQuickItem_DragEnterEvent_IsBase(bool value) const { qquickitem_dragenterevent_isbase = value; }
    inline void setQQuickItem_DragMoveEvent_IsBase(bool value) const { qquickitem_dragmoveevent_isbase = value; }
    inline void setQQuickItem_DragLeaveEvent_IsBase(bool value) const { qquickitem_dragleaveevent_isbase = value; }
    inline void setQQuickItem_DropEvent_IsBase(bool value) const { qquickitem_dropevent_isbase = value; }
    inline void setQQuickItem_ChildMouseEventFilter_IsBase(bool value) const { qquickitem_childmouseeventfilter_isbase = value; }
    inline void setQQuickItem_UpdatePaintNode_IsBase(bool value) const { qquickitem_updatepaintnode_isbase = value; }
    inline void setQQuickItem_ReleaseResources_IsBase(bool value) const { qquickitem_releaseresources_isbase = value; }
    inline void setQQuickItem_UpdatePolish_IsBase(bool value) const { qquickitem_updatepolish_isbase = value; }
    inline void setQQuickItem_EventFilter_IsBase(bool value) const { qquickitem_eventfilter_isbase = value; }
    inline void setQQuickItem_TimerEvent_IsBase(bool value) const { qquickitem_timerevent_isbase = value; }
    inline void setQQuickItem_ChildEvent_IsBase(bool value) const { qquickitem_childevent_isbase = value; }
    inline void setQQuickItem_CustomEvent_IsBase(bool value) const { qquickitem_customevent_isbase = value; }
    inline void setQQuickItem_ConnectNotify_IsBase(bool value) const { qquickitem_connectnotify_isbase = value; }
    inline void setQQuickItem_DisconnectNotify_IsBase(bool value) const { qquickitem_disconnectnotify_isbase = value; }
    inline void setQQuickItem_IsComponentComplete_IsBase(bool value) const { qquickitem_iscomponentcomplete_isbase = value; }
    inline void setQQuickItem_UpdateInputMethod_IsBase(bool value) const { qquickitem_updateinputmethod_isbase = value; }
    inline void setQQuickItem_WidthValid_IsBase(bool value) const { qquickitem_widthvalid_isbase = value; }
    inline void setQQuickItem_HeightValid_IsBase(bool value) const { qquickitem_heightvalid_isbase = value; }
    inline void setQQuickItem_SetImplicitSize_IsBase(bool value) const { qquickitem_setimplicitsize_isbase = value; }
    inline void setQQuickItem_UpdateInputMethod1_IsBase(bool value) const { qquickitem_updateinputmethod1_isbase = value; }
    inline void setQQuickItem_Sender_IsBase(bool value) const { qquickitem_sender_isbase = value; }
    inline void setQQuickItem_SenderSignalIndex_IsBase(bool value) const { qquickitem_sendersignalindex_isbase = value; }
    inline void setQQuickItem_Receivers_IsBase(bool value) const { qquickitem_receivers_isbase = value; }
    inline void setQQuickItem_IsSignalConnected_IsBase(bool value) const { qquickitem_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickitem_metaobject_isbase) {
            qquickitem_metaobject_isbase = false;
            return QQuickItem::metaObject();
        }
        auto metaobject_cb = qquickitem_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickitem_metacast_isbase) {
            qquickitem_metacast_isbase = false;
            return QQuickItem::qt_metacast(param1);
        }
        auto metacast_cb = qquickitem_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickitem_metacall_isbase) {
            qquickitem_metacall_isbase = false;
            return QQuickItem::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickitem_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickitem_boundingrect_isbase) {
            qquickitem_boundingrect_isbase = false;
            return QQuickItem::boundingRect();
        }
        auto boundingrect_cb = qquickitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickitem_cliprect_isbase) {
            qquickitem_cliprect_isbase = false;
            return QQuickItem::clipRect();
        }
        auto cliprect_cb = qquickitem_cliprect_callback;
        if (cliprect_cb) {
            QRectF* callback_ret = cliprect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickItem::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickitem_contains_isbase) {
            qquickitem_contains_isbase = false;
            return QQuickItem::contains(point);
        }
        auto contains_cb = qquickitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickitem_inputmethodquery_isbase) {
            qquickitem_inputmethodquery_isbase = false;
            return QQuickItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qquickitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickitem_istextureprovider_isbase) {
            qquickitem_istextureprovider_isbase = false;
            return QQuickItem::isTextureProvider();
        }
        auto istextureprovider_cb = qquickitem_istextureprovider_callback;
        if (istextureprovider_cb) {
            bool callback_ret = istextureprovider_cb();
            return callback_ret;
        }
        return QQuickItem::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickitem_textureprovider_isbase) {
            qquickitem_textureprovider_isbase = false;
            return QQuickItem::textureProvider();
        }
        auto textureprovider_cb = qquickitem_textureprovider_callback;
        if (textureprovider_cb) {
            QSGTextureProvider* callback_ret = textureprovider_cb();
            return callback_ret;
        }
        return QQuickItem::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickitem_event_isbase) {
            qquickitem_event_isbase = false;
            return QQuickItem::event(param1);
        }
        auto event_cb = qquickitem_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickItem::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickitem_itemchange_isbase) {
            qquickitem_itemchange_isbase = false;
            QQuickItem::itemChange(param1, param2);
            return;
        }
        auto itemchange_cb = qquickitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            itemchange_cb(this, cbval1, cbval2);
            return;
        }
        QQuickItem::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickitem_geometrychange_isbase) {
            qquickitem_geometrychange_isbase = false;
            QQuickItem::geometryChange(newGeometry, oldGeometry);
            return;
        }
        auto geometrychange_cb = qquickitem_geometrychange_callback;
        if (geometrychange_cb) {
            const QRectF& newGeometry_ret = newGeometry;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&newGeometry_ret);
            const QRectF& oldGeometry_ret = oldGeometry;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&oldGeometry_ret);
            geometrychange_cb(this, cbval1, cbval2);
            return;
        }
        QQuickItem::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickitem_classbegin_isbase) {
            qquickitem_classbegin_isbase = false;
            QQuickItem::classBegin();
            return;
        }
        auto classbegin_cb = qquickitem_classbegin_callback;
        if (classbegin_cb) {
            classbegin_cb();
            return;
        }
        QQuickItem::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickitem_componentcomplete_isbase) {
            qquickitem_componentcomplete_isbase = false;
            QQuickItem::componentComplete();
            return;
        }
        auto componentcomplete_cb = qquickitem_componentcomplete_callback;
        if (componentcomplete_cb) {
            componentcomplete_cb();
            return;
        }
        QQuickItem::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickitem_keypressevent_isbase) {
            qquickitem_keypressevent_isbase = false;
            QQuickItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qquickitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        QQuickItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickitem_keyreleaseevent_isbase) {
            qquickitem_keyreleaseevent_isbase = false;
            QQuickItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qquickitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QQuickItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickitem_inputmethodevent_isbase) {
            qquickitem_inputmethodevent_isbase = false;
            QQuickItem::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qquickitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        QQuickItem::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickitem_focusinevent_isbase) {
            qquickitem_focusinevent_isbase = false;
            QQuickItem::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qquickitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusinevent_cb(this, cbval1);
            return;
        }
        QQuickItem::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickitem_focusoutevent_isbase) {
            qquickitem_focusoutevent_isbase = false;
            QQuickItem::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qquickitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusoutevent_cb(this, cbval1);
            return;
        }
        QQuickItem::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickitem_mousepressevent_isbase) {
            qquickitem_mousepressevent_isbase = false;
            QQuickItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qquickitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        QQuickItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickitem_mousemoveevent_isbase) {
            qquickitem_mousemoveevent_isbase = false;
            QQuickItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qquickitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        QQuickItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickitem_mousereleaseevent_isbase) {
            qquickitem_mousereleaseevent_isbase = false;
            QQuickItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qquickitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QQuickItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickitem_mousedoubleclickevent_isbase) {
            qquickitem_mousedoubleclickevent_isbase = false;
            QQuickItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qquickitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QQuickItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickitem_mouseungrabevent_isbase) {
            qquickitem_mouseungrabevent_isbase = false;
            QQuickItem::mouseUngrabEvent();
            return;
        }
        auto mouseungrabevent_cb = qquickitem_mouseungrabevent_callback;
        if (mouseungrabevent_cb) {
            mouseungrabevent_cb();
            return;
        }
        QQuickItem::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickitem_touchungrabevent_isbase) {
            qquickitem_touchungrabevent_isbase = false;
            QQuickItem::touchUngrabEvent();
            return;
        }
        auto touchungrabevent_cb = qquickitem_touchungrabevent_callback;
        if (touchungrabevent_cb) {
            touchungrabevent_cb();
            return;
        }
        QQuickItem::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickitem_wheelevent_isbase) {
            qquickitem_wheelevent_isbase = false;
            QQuickItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qquickitem_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        QQuickItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickitem_touchevent_isbase) {
            qquickitem_touchevent_isbase = false;
            QQuickItem::touchEvent(event);
            return;
        }
        auto touchevent_cb = qquickitem_touchevent_callback;
        if (touchevent_cb) {
            QTouchEvent* cbval1 = event;
            touchevent_cb(this, cbval1);
            return;
        }
        QQuickItem::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickitem_hoverenterevent_isbase) {
            qquickitem_hoverenterevent_isbase = false;
            QQuickItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qquickitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverenterevent_cb(this, cbval1);
            return;
        }
        QQuickItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickitem_hovermoveevent_isbase) {
            qquickitem_hovermoveevent_isbase = false;
            QQuickItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qquickitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QHoverEvent* cbval1 = event;
            hovermoveevent_cb(this, cbval1);
            return;
        }
        QQuickItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickitem_hoverleaveevent_isbase) {
            qquickitem_hoverleaveevent_isbase = false;
            QQuickItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qquickitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QQuickItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickitem_dragenterevent_isbase) {
            qquickitem_dragenterevent_isbase = false;
            QQuickItem::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = qquickitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;
            dragenterevent_cb(this, cbval1);
            return;
        }
        QQuickItem::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickitem_dragmoveevent_isbase) {
            qquickitem_dragmoveevent_isbase = false;
            QQuickItem::dragMoveEvent(param1);
            return;
        }
        auto dragmoveevent_cb = qquickitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = param1;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        QQuickItem::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickitem_dragleaveevent_isbase) {
            qquickitem_dragleaveevent_isbase = false;
            QQuickItem::dragLeaveEvent(param1);
            return;
        }
        auto dragleaveevent_cb = qquickitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = param1;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        QQuickItem::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickitem_dropevent_isbase) {
            qquickitem_dropevent_isbase = false;
            QQuickItem::dropEvent(param1);
            return;
        }
        auto dropevent_cb = qquickitem_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;
            dropevent_cb(this, cbval1);
            return;
        }
        QQuickItem::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickitem_childmouseeventfilter_isbase) {
            qquickitem_childmouseeventfilter_isbase = false;
            return QQuickItem::childMouseEventFilter(param1, param2);
        }
        auto childmouseeventfilter_cb = qquickitem_childmouseeventfilter_callback;
        if (childmouseeventfilter_cb) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = childmouseeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickItem::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickitem_updatepaintnode_isbase) {
            qquickitem_updatepaintnode_isbase = false;
            return QQuickItem::updatePaintNode(param1, param2);
        }
        auto updatepaintnode_cb = qquickitem_updatepaintnode_callback;
        if (updatepaintnode_cb) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = updatepaintnode_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickItem::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickitem_releaseresources_isbase) {
            qquickitem_releaseresources_isbase = false;
            QQuickItem::releaseResources();
            return;
        }
        auto releaseresources_cb = qquickitem_releaseresources_callback;
        if (releaseresources_cb) {
            releaseresources_cb();
            return;
        }
        QQuickItem::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickitem_updatepolish_isbase) {
            qquickitem_updatepolish_isbase = false;
            QQuickItem::updatePolish();
            return;
        }
        auto updatepolish_cb = qquickitem_updatepolish_callback;
        if (updatepolish_cb) {
            updatepolish_cb();
            return;
        }
        QQuickItem::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickitem_eventfilter_isbase) {
            qquickitem_eventfilter_isbase = false;
            return QQuickItem::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickitem_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickitem_timerevent_isbase) {
            qquickitem_timerevent_isbase = false;
            QQuickItem::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickitem_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickitem_childevent_isbase) {
            qquickitem_childevent_isbase = false;
            QQuickItem::childEvent(event);
            return;
        }
        auto childevent_cb = qquickitem_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickitem_customevent_isbase) {
            qquickitem_customevent_isbase = false;
            QQuickItem::customEvent(event);
            return;
        }
        auto customevent_cb = qquickitem_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickitem_connectnotify_isbase) {
            qquickitem_connectnotify_isbase = false;
            QQuickItem::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickitem_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickitem_disconnectnotify_isbase) {
            qquickitem_disconnectnotify_isbase = false;
            QQuickItem::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickitem_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isComponentComplete() const {
        if (qquickitem_iscomponentcomplete_isbase) {
            qquickitem_iscomponentcomplete_isbase = false;
            return QQuickItem::isComponentComplete();
        }
        auto iscomponentcomplete_cb = qquickitem_iscomponentcomplete_callback;
        if (iscomponentcomplete_cb) {
            bool callback_ret = iscomponentcomplete_cb();
            return callback_ret;
        }
        return QQuickItem::isComponentComplete();
    }

    // Virtual method for C ABI access and custom callback
    void updateInputMethod() {
        if (qquickitem_updateinputmethod_isbase) {
            qquickitem_updateinputmethod_isbase = false;
            QQuickItem::updateInputMethod();
            return;
        }
        auto updateinputmethod_cb = qquickitem_updateinputmethod_callback;
        if (updateinputmethod_cb) {
            updateinputmethod_cb();
            return;
        }
        QQuickItem::updateInputMethod();
    }

    // Virtual method for C ABI access and custom callback
    bool widthValid() const {
        if (qquickitem_widthvalid_isbase) {
            qquickitem_widthvalid_isbase = false;
            return QQuickItem::widthValid();
        }
        auto widthvalid_cb = qquickitem_widthvalid_callback;
        if (widthvalid_cb) {
            bool callback_ret = widthvalid_cb();
            return callback_ret;
        }
        return QQuickItem::widthValid();
    }

    // Virtual method for C ABI access and custom callback
    bool heightValid() const {
        if (qquickitem_heightvalid_isbase) {
            qquickitem_heightvalid_isbase = false;
            return QQuickItem::heightValid();
        }
        auto heightvalid_cb = qquickitem_heightvalid_callback;
        if (heightvalid_cb) {
            bool callback_ret = heightvalid_cb();
            return callback_ret;
        }
        return QQuickItem::heightValid();
    }

    // Virtual method for C ABI access and custom callback
    void setImplicitSize(qreal param1, qreal param2) {
        if (qquickitem_setimplicitsize_isbase) {
            qquickitem_setimplicitsize_isbase = false;
            QQuickItem::setImplicitSize(param1, param2);
            return;
        }
        auto setimplicitsize_cb = qquickitem_setimplicitsize_callback;
        if (setimplicitsize_cb) {
            double cbval1 = static_cast<double>(param1);
            double cbval2 = static_cast<double>(param2);
            setimplicitsize_cb(this, cbval1, cbval2);
            return;
        }
        QQuickItem::setImplicitSize(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    void updateInputMethod(Qt::InputMethodQueries queries) {
        if (qquickitem_updateinputmethod1_isbase) {
            qquickitem_updateinputmethod1_isbase = false;
            QQuickItem::updateInputMethod(queries);
            return;
        }
        auto updateinputmethod1_cb = qquickitem_updateinputmethod1_callback;
        if (updateinputmethod1_cb) {
            int cbval1 = static_cast<int>(queries);
            updateinputmethod1_cb(this, cbval1);
            return;
        }
        QQuickItem::updateInputMethod(queries);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickitem_sender_isbase) {
            qquickitem_sender_isbase = false;
            return QQuickItem::sender();
        }
        auto sender_cb = qquickitem_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickItem::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickitem_sendersignalindex_isbase) {
            qquickitem_sendersignalindex_isbase = false;
            return QQuickItem::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickitem_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickItem::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickitem_receivers_isbase) {
            qquickitem_receivers_isbase = false;
            return QQuickItem::receivers(signal);
        }
        auto receivers_cb = qquickitem_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickItem::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickitem_issignalconnected_isbase) {
            qquickitem_issignalconnected_isbase = false;
            return QQuickItem::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickitem_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickItem::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QQuickItem_Event(QQuickItem* self, QEvent* param1);
    friend bool QQuickItem_SuperEvent(QQuickItem* self, QEvent* param1);
    friend void QQuickItem_ItemChange(QQuickItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickItem_SuperItemChange(QQuickItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickItem_GeometryChange(QQuickItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickItem_SuperGeometryChange(QQuickItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickItem_ClassBegin(QQuickItem* self);
    friend void QQuickItem_SuperClassBegin(QQuickItem* self);
    friend void QQuickItem_ComponentComplete(QQuickItem* self);
    friend void QQuickItem_SuperComponentComplete(QQuickItem* self);
    friend void QQuickItem_KeyPressEvent(QQuickItem* self, QKeyEvent* event);
    friend void QQuickItem_SuperKeyPressEvent(QQuickItem* self, QKeyEvent* event);
    friend void QQuickItem_KeyReleaseEvent(QQuickItem* self, QKeyEvent* event);
    friend void QQuickItem_SuperKeyReleaseEvent(QQuickItem* self, QKeyEvent* event);
    friend void QQuickItem_InputMethodEvent(QQuickItem* self, QInputMethodEvent* param1);
    friend void QQuickItem_SuperInputMethodEvent(QQuickItem* self, QInputMethodEvent* param1);
    friend void QQuickItem_FocusInEvent(QQuickItem* self, QFocusEvent* param1);
    friend void QQuickItem_SuperFocusInEvent(QQuickItem* self, QFocusEvent* param1);
    friend void QQuickItem_FocusOutEvent(QQuickItem* self, QFocusEvent* param1);
    friend void QQuickItem_SuperFocusOutEvent(QQuickItem* self, QFocusEvent* param1);
    friend void QQuickItem_MousePressEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMousePressEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_MouseMoveEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMouseMoveEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_MouseReleaseEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMouseReleaseEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_MouseDoubleClickEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_SuperMouseDoubleClickEvent(QQuickItem* self, QMouseEvent* event);
    friend void QQuickItem_MouseUngrabEvent(QQuickItem* self);
    friend void QQuickItem_SuperMouseUngrabEvent(QQuickItem* self);
    friend void QQuickItem_TouchUngrabEvent(QQuickItem* self);
    friend void QQuickItem_SuperTouchUngrabEvent(QQuickItem* self);
    friend void QQuickItem_WheelEvent(QQuickItem* self, QWheelEvent* event);
    friend void QQuickItem_SuperWheelEvent(QQuickItem* self, QWheelEvent* event);
    friend void QQuickItem_TouchEvent(QQuickItem* self, QTouchEvent* event);
    friend void QQuickItem_SuperTouchEvent(QQuickItem* self, QTouchEvent* event);
    friend void QQuickItem_HoverEnterEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_SuperHoverEnterEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_HoverMoveEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_SuperHoverMoveEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_HoverLeaveEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_SuperHoverLeaveEvent(QQuickItem* self, QHoverEvent* event);
    friend void QQuickItem_DragEnterEvent(QQuickItem* self, QDragEnterEvent* param1);
    friend void QQuickItem_SuperDragEnterEvent(QQuickItem* self, QDragEnterEvent* param1);
    friend void QQuickItem_DragMoveEvent(QQuickItem* self, QDragMoveEvent* param1);
    friend void QQuickItem_SuperDragMoveEvent(QQuickItem* self, QDragMoveEvent* param1);
    friend void QQuickItem_DragLeaveEvent(QQuickItem* self, QDragLeaveEvent* param1);
    friend void QQuickItem_SuperDragLeaveEvent(QQuickItem* self, QDragLeaveEvent* param1);
    friend void QQuickItem_DropEvent(QQuickItem* self, QDropEvent* param1);
    friend void QQuickItem_SuperDropEvent(QQuickItem* self, QDropEvent* param1);
    friend bool QQuickItem_ChildMouseEventFilter(QQuickItem* self, QQuickItem* param1, QEvent* param2);
    friend bool QQuickItem_SuperChildMouseEventFilter(QQuickItem* self, QQuickItem* param1, QEvent* param2);
    friend QSGNode* QQuickItem_UpdatePaintNode(QQuickItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend QSGNode* QQuickItem_SuperUpdatePaintNode(QQuickItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend void QQuickItem_ReleaseResources(QQuickItem* self);
    friend void QQuickItem_SuperReleaseResources(QQuickItem* self);
    friend void QQuickItem_UpdatePolish(QQuickItem* self);
    friend void QQuickItem_SuperUpdatePolish(QQuickItem* self);
    friend void QQuickItem_TimerEvent(QQuickItem* self, QTimerEvent* event);
    friend void QQuickItem_SuperTimerEvent(QQuickItem* self, QTimerEvent* event);
    friend void QQuickItem_ChildEvent(QQuickItem* self, QChildEvent* event);
    friend void QQuickItem_SuperChildEvent(QQuickItem* self, QChildEvent* event);
    friend void QQuickItem_CustomEvent(QQuickItem* self, QEvent* event);
    friend void QQuickItem_SuperCustomEvent(QQuickItem* self, QEvent* event);
    friend void QQuickItem_ConnectNotify(QQuickItem* self, const QMetaMethod* signal);
    friend void QQuickItem_SuperConnectNotify(QQuickItem* self, const QMetaMethod* signal);
    friend void QQuickItem_DisconnectNotify(QQuickItem* self, const QMetaMethod* signal);
    friend void QQuickItem_SuperDisconnectNotify(QQuickItem* self, const QMetaMethod* signal);
    friend bool QQuickItem_IsComponentComplete(const QQuickItem* self);
    friend bool QQuickItem_SuperIsComponentComplete(const QQuickItem* self);
    friend void QQuickItem_UpdateInputMethod(QQuickItem* self);
    friend void QQuickItem_SuperUpdateInputMethod(QQuickItem* self);
    friend bool QQuickItem_WidthValid(const QQuickItem* self);
    friend bool QQuickItem_SuperWidthValid(const QQuickItem* self);
    friend bool QQuickItem_HeightValid(const QQuickItem* self);
    friend bool QQuickItem_SuperHeightValid(const QQuickItem* self);
    friend void QQuickItem_SetImplicitSize(QQuickItem* self, double param1, double param2);
    friend void QQuickItem_SuperSetImplicitSize(QQuickItem* self, double param1, double param2);
    friend void QQuickItem_UpdateInputMethod1(QQuickItem* self, int queries);
    friend void QQuickItem_SuperUpdateInputMethod1(QQuickItem* self, int queries);
    friend QObject* QQuickItem_Sender(const QQuickItem* self);
    friend QObject* QQuickItem_SuperSender(const QQuickItem* self);
    friend int QQuickItem_SenderSignalIndex(const QQuickItem* self);
    friend int QQuickItem_SuperSenderSignalIndex(const QQuickItem* self);
    friend int QQuickItem_Receivers(const QQuickItem* self, const char* signal);
    friend int QQuickItem_SuperReceivers(const QQuickItem* self, const char* signal);
    friend bool QQuickItem_IsSignalConnected(const QQuickItem* self, const QMetaMethod* signal);
    friend bool QQuickItem_SuperIsSignalConnected(const QQuickItem* self, const QMetaMethod* signal);
};

#endif
