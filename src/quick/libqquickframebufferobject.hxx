#pragma once
#ifndef QUICK_LIBQQUICKFRAMEBUFFEROBJECT_HXX
#define QUICK_LIBQQUICKFRAMEBUFFEROBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickFramebufferObject so that we can call protected methods
class VirtualQQuickFramebufferObject : public QQuickFramebufferObject {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickFramebufferObject = true;

    // Virtual class public types (including callbacks)
    using QQuickFramebufferObject_MetaObject_Callback = QMetaObject* (*)();
    using QQuickFramebufferObject_Metacast_Callback = void* (*)(QQuickFramebufferObject*, const char*);
    using QQuickFramebufferObject_Metacall_Callback = int (*)(QQuickFramebufferObject*, int, int, void**);
    using QQuickFramebufferObject_CreateRenderer_Callback = QQuickFramebufferObject__Renderer* (*)();
    using QQuickFramebufferObject_IsTextureProvider_Callback = bool (*)();
    using QQuickFramebufferObject_TextureProvider_Callback = QSGTextureProvider* (*)();
    using QQuickFramebufferObject_ReleaseResources_Callback = void (*)();
    using QQuickFramebufferObject_GeometryChange_Callback = void (*)(QQuickFramebufferObject*, QRectF*, QRectF*);
    using QQuickFramebufferObject_UpdatePaintNode_Callback = QSGNode* (*)(QQuickFramebufferObject*, QSGNode*, QQuickItem__UpdatePaintNodeData*);
    using QQuickFramebufferObject_BoundingRect_Callback = QRectF* (*)();
    using QQuickFramebufferObject_ClipRect_Callback = QRectF* (*)();
    using QQuickFramebufferObject_Contains_Callback = bool (*)(const QQuickFramebufferObject*, QPointF*);
    using QQuickFramebufferObject_InputMethodQuery_Callback = QVariant* (*)(const QQuickFramebufferObject*, int);
    using QQuickFramebufferObject_Event_Callback = bool (*)(QQuickFramebufferObject*, QEvent*);
    using QQuickFramebufferObject_ItemChange_Callback = void (*)(QQuickFramebufferObject*, int, QQuickItem__ItemChangeData*);
    using QQuickFramebufferObject_ClassBegin_Callback = void (*)();
    using QQuickFramebufferObject_ComponentComplete_Callback = void (*)();
    using QQuickFramebufferObject_KeyPressEvent_Callback = void (*)(QQuickFramebufferObject*, QKeyEvent*);
    using QQuickFramebufferObject_KeyReleaseEvent_Callback = void (*)(QQuickFramebufferObject*, QKeyEvent*);
    using QQuickFramebufferObject_InputMethodEvent_Callback = void (*)(QQuickFramebufferObject*, QInputMethodEvent*);
    using QQuickFramebufferObject_FocusInEvent_Callback = void (*)(QQuickFramebufferObject*, QFocusEvent*);
    using QQuickFramebufferObject_FocusOutEvent_Callback = void (*)(QQuickFramebufferObject*, QFocusEvent*);
    using QQuickFramebufferObject_MousePressEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseMoveEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseReleaseEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseDoubleClickEvent_Callback = void (*)(QQuickFramebufferObject*, QMouseEvent*);
    using QQuickFramebufferObject_MouseUngrabEvent_Callback = void (*)();
    using QQuickFramebufferObject_TouchUngrabEvent_Callback = void (*)();
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
    using QQuickFramebufferObject_UpdatePolish_Callback = void (*)();
    using QQuickFramebufferObject_EventFilter_Callback = bool (*)(QQuickFramebufferObject*, QObject*, QEvent*);
    using QQuickFramebufferObject_TimerEvent_Callback = void (*)(QQuickFramebufferObject*, QTimerEvent*);
    using QQuickFramebufferObject_ChildEvent_Callback = void (*)(QQuickFramebufferObject*, QChildEvent*);
    using QQuickFramebufferObject_CustomEvent_Callback = void (*)(QQuickFramebufferObject*, QEvent*);
    using QQuickFramebufferObject_ConnectNotify_Callback = void (*)(QQuickFramebufferObject*, QMetaMethod*);
    using QQuickFramebufferObject_DisconnectNotify_Callback = void (*)(QQuickFramebufferObject*, QMetaMethod*);
    using QQuickFramebufferObject_IsComponentComplete_Callback = bool (*)();
    using QQuickFramebufferObject_UpdateInputMethod_Callback = void (*)();
    using QQuickFramebufferObject_WidthValid_Callback = bool (*)();
    using QQuickFramebufferObject_HeightValid_Callback = bool (*)();
    using QQuickFramebufferObject_SetImplicitSize_Callback = void (*)(QQuickFramebufferObject*, double, double);
    using QQuickFramebufferObject_Sender_Callback = QObject* (*)();
    using QQuickFramebufferObject_SenderSignalIndex_Callback = int (*)();
    using QQuickFramebufferObject_Receivers_Callback = int (*)(const QQuickFramebufferObject*, const char*);
    using QQuickFramebufferObject_IsSignalConnected_Callback = bool (*)(const QQuickFramebufferObject*, QMetaMethod*);

  protected:
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
    QQuickFramebufferObject_IsComponentComplete_Callback qquickframebufferobject_iscomponentcomplete_callback = nullptr;
    QQuickFramebufferObject_UpdateInputMethod_Callback qquickframebufferobject_updateinputmethod_callback = nullptr;
    QQuickFramebufferObject_WidthValid_Callback qquickframebufferobject_widthvalid_callback = nullptr;
    QQuickFramebufferObject_HeightValid_Callback qquickframebufferobject_heightvalid_callback = nullptr;
    QQuickFramebufferObject_SetImplicitSize_Callback qquickframebufferobject_setimplicitsize_callback = nullptr;
    QQuickFramebufferObject_Sender_Callback qquickframebufferobject_sender_callback = nullptr;
    QQuickFramebufferObject_SenderSignalIndex_Callback qquickframebufferobject_sendersignalindex_callback = nullptr;
    QQuickFramebufferObject_Receivers_Callback qquickframebufferobject_receivers_callback = nullptr;
    QQuickFramebufferObject_IsSignalConnected_Callback qquickframebufferobject_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickframebufferobject_metaobject_isbase = false;
    mutable bool qquickframebufferobject_metacast_isbase = false;
    mutable bool qquickframebufferobject_metacall_isbase = false;
    mutable bool qquickframebufferobject_createrenderer_isbase = false;
    mutable bool qquickframebufferobject_istextureprovider_isbase = false;
    mutable bool qquickframebufferobject_textureprovider_isbase = false;
    mutable bool qquickframebufferobject_releaseresources_isbase = false;
    mutable bool qquickframebufferobject_geometrychange_isbase = false;
    mutable bool qquickframebufferobject_updatepaintnode_isbase = false;
    mutable bool qquickframebufferobject_boundingrect_isbase = false;
    mutable bool qquickframebufferobject_cliprect_isbase = false;
    mutable bool qquickframebufferobject_contains_isbase = false;
    mutable bool qquickframebufferobject_inputmethodquery_isbase = false;
    mutable bool qquickframebufferobject_event_isbase = false;
    mutable bool qquickframebufferobject_itemchange_isbase = false;
    mutable bool qquickframebufferobject_classbegin_isbase = false;
    mutable bool qquickframebufferobject_componentcomplete_isbase = false;
    mutable bool qquickframebufferobject_keypressevent_isbase = false;
    mutable bool qquickframebufferobject_keyreleaseevent_isbase = false;
    mutable bool qquickframebufferobject_inputmethodevent_isbase = false;
    mutable bool qquickframebufferobject_focusinevent_isbase = false;
    mutable bool qquickframebufferobject_focusoutevent_isbase = false;
    mutable bool qquickframebufferobject_mousepressevent_isbase = false;
    mutable bool qquickframebufferobject_mousemoveevent_isbase = false;
    mutable bool qquickframebufferobject_mousereleaseevent_isbase = false;
    mutable bool qquickframebufferobject_mousedoubleclickevent_isbase = false;
    mutable bool qquickframebufferobject_mouseungrabevent_isbase = false;
    mutable bool qquickframebufferobject_touchungrabevent_isbase = false;
    mutable bool qquickframebufferobject_wheelevent_isbase = false;
    mutable bool qquickframebufferobject_touchevent_isbase = false;
    mutable bool qquickframebufferobject_hoverenterevent_isbase = false;
    mutable bool qquickframebufferobject_hovermoveevent_isbase = false;
    mutable bool qquickframebufferobject_hoverleaveevent_isbase = false;
    mutable bool qquickframebufferobject_dragenterevent_isbase = false;
    mutable bool qquickframebufferobject_dragmoveevent_isbase = false;
    mutable bool qquickframebufferobject_dragleaveevent_isbase = false;
    mutable bool qquickframebufferobject_dropevent_isbase = false;
    mutable bool qquickframebufferobject_childmouseeventfilter_isbase = false;
    mutable bool qquickframebufferobject_updatepolish_isbase = false;
    mutable bool qquickframebufferobject_eventfilter_isbase = false;
    mutable bool qquickframebufferobject_timerevent_isbase = false;
    mutable bool qquickframebufferobject_childevent_isbase = false;
    mutable bool qquickframebufferobject_customevent_isbase = false;
    mutable bool qquickframebufferobject_connectnotify_isbase = false;
    mutable bool qquickframebufferobject_disconnectnotify_isbase = false;
    mutable bool qquickframebufferobject_iscomponentcomplete_isbase = false;
    mutable bool qquickframebufferobject_updateinputmethod_isbase = false;
    mutable bool qquickframebufferobject_widthvalid_isbase = false;
    mutable bool qquickframebufferobject_heightvalid_isbase = false;
    mutable bool qquickframebufferobject_setimplicitsize_isbase = false;
    mutable bool qquickframebufferobject_sender_isbase = false;
    mutable bool qquickframebufferobject_sendersignalindex_isbase = false;
    mutable bool qquickframebufferobject_receivers_isbase = false;
    mutable bool qquickframebufferobject_issignalconnected_isbase = false;

  public:
    VirtualQQuickFramebufferObject() : QQuickFramebufferObject() {};
    VirtualQQuickFramebufferObject(QQuickItem* parent) : QQuickFramebufferObject(parent) {};

    // Callback setters
    inline void setQQuickFramebufferObject_MetaObject_Callback(QQuickFramebufferObject_MetaObject_Callback cb) { qquickframebufferobject_metaobject_callback = cb; }
    inline void setQQuickFramebufferObject_Metacast_Callback(QQuickFramebufferObject_Metacast_Callback cb) { qquickframebufferobject_metacast_callback = cb; }
    inline void setQQuickFramebufferObject_Metacall_Callback(QQuickFramebufferObject_Metacall_Callback cb) { qquickframebufferobject_metacall_callback = cb; }
    inline void setQQuickFramebufferObject_CreateRenderer_Callback(QQuickFramebufferObject_CreateRenderer_Callback cb) { qquickframebufferobject_createrenderer_callback = cb; }
    inline void setQQuickFramebufferObject_IsTextureProvider_Callback(QQuickFramebufferObject_IsTextureProvider_Callback cb) { qquickframebufferobject_istextureprovider_callback = cb; }
    inline void setQQuickFramebufferObject_TextureProvider_Callback(QQuickFramebufferObject_TextureProvider_Callback cb) { qquickframebufferobject_textureprovider_callback = cb; }
    inline void setQQuickFramebufferObject_ReleaseResources_Callback(QQuickFramebufferObject_ReleaseResources_Callback cb) { qquickframebufferobject_releaseresources_callback = cb; }
    inline void setQQuickFramebufferObject_GeometryChange_Callback(QQuickFramebufferObject_GeometryChange_Callback cb) { qquickframebufferobject_geometrychange_callback = cb; }
    inline void setQQuickFramebufferObject_UpdatePaintNode_Callback(QQuickFramebufferObject_UpdatePaintNode_Callback cb) { qquickframebufferobject_updatepaintnode_callback = cb; }
    inline void setQQuickFramebufferObject_BoundingRect_Callback(QQuickFramebufferObject_BoundingRect_Callback cb) { qquickframebufferobject_boundingrect_callback = cb; }
    inline void setQQuickFramebufferObject_ClipRect_Callback(QQuickFramebufferObject_ClipRect_Callback cb) { qquickframebufferobject_cliprect_callback = cb; }
    inline void setQQuickFramebufferObject_Contains_Callback(QQuickFramebufferObject_Contains_Callback cb) { qquickframebufferobject_contains_callback = cb; }
    inline void setQQuickFramebufferObject_InputMethodQuery_Callback(QQuickFramebufferObject_InputMethodQuery_Callback cb) { qquickframebufferobject_inputmethodquery_callback = cb; }
    inline void setQQuickFramebufferObject_Event_Callback(QQuickFramebufferObject_Event_Callback cb) { qquickframebufferobject_event_callback = cb; }
    inline void setQQuickFramebufferObject_ItemChange_Callback(QQuickFramebufferObject_ItemChange_Callback cb) { qquickframebufferobject_itemchange_callback = cb; }
    inline void setQQuickFramebufferObject_ClassBegin_Callback(QQuickFramebufferObject_ClassBegin_Callback cb) { qquickframebufferobject_classbegin_callback = cb; }
    inline void setQQuickFramebufferObject_ComponentComplete_Callback(QQuickFramebufferObject_ComponentComplete_Callback cb) { qquickframebufferobject_componentcomplete_callback = cb; }
    inline void setQQuickFramebufferObject_KeyPressEvent_Callback(QQuickFramebufferObject_KeyPressEvent_Callback cb) { qquickframebufferobject_keypressevent_callback = cb; }
    inline void setQQuickFramebufferObject_KeyReleaseEvent_Callback(QQuickFramebufferObject_KeyReleaseEvent_Callback cb) { qquickframebufferobject_keyreleaseevent_callback = cb; }
    inline void setQQuickFramebufferObject_InputMethodEvent_Callback(QQuickFramebufferObject_InputMethodEvent_Callback cb) { qquickframebufferobject_inputmethodevent_callback = cb; }
    inline void setQQuickFramebufferObject_FocusInEvent_Callback(QQuickFramebufferObject_FocusInEvent_Callback cb) { qquickframebufferobject_focusinevent_callback = cb; }
    inline void setQQuickFramebufferObject_FocusOutEvent_Callback(QQuickFramebufferObject_FocusOutEvent_Callback cb) { qquickframebufferobject_focusoutevent_callback = cb; }
    inline void setQQuickFramebufferObject_MousePressEvent_Callback(QQuickFramebufferObject_MousePressEvent_Callback cb) { qquickframebufferobject_mousepressevent_callback = cb; }
    inline void setQQuickFramebufferObject_MouseMoveEvent_Callback(QQuickFramebufferObject_MouseMoveEvent_Callback cb) { qquickframebufferobject_mousemoveevent_callback = cb; }
    inline void setQQuickFramebufferObject_MouseReleaseEvent_Callback(QQuickFramebufferObject_MouseReleaseEvent_Callback cb) { qquickframebufferobject_mousereleaseevent_callback = cb; }
    inline void setQQuickFramebufferObject_MouseDoubleClickEvent_Callback(QQuickFramebufferObject_MouseDoubleClickEvent_Callback cb) { qquickframebufferobject_mousedoubleclickevent_callback = cb; }
    inline void setQQuickFramebufferObject_MouseUngrabEvent_Callback(QQuickFramebufferObject_MouseUngrabEvent_Callback cb) { qquickframebufferobject_mouseungrabevent_callback = cb; }
    inline void setQQuickFramebufferObject_TouchUngrabEvent_Callback(QQuickFramebufferObject_TouchUngrabEvent_Callback cb) { qquickframebufferobject_touchungrabevent_callback = cb; }
    inline void setQQuickFramebufferObject_WheelEvent_Callback(QQuickFramebufferObject_WheelEvent_Callback cb) { qquickframebufferobject_wheelevent_callback = cb; }
    inline void setQQuickFramebufferObject_TouchEvent_Callback(QQuickFramebufferObject_TouchEvent_Callback cb) { qquickframebufferobject_touchevent_callback = cb; }
    inline void setQQuickFramebufferObject_HoverEnterEvent_Callback(QQuickFramebufferObject_HoverEnterEvent_Callback cb) { qquickframebufferobject_hoverenterevent_callback = cb; }
    inline void setQQuickFramebufferObject_HoverMoveEvent_Callback(QQuickFramebufferObject_HoverMoveEvent_Callback cb) { qquickframebufferobject_hovermoveevent_callback = cb; }
    inline void setQQuickFramebufferObject_HoverLeaveEvent_Callback(QQuickFramebufferObject_HoverLeaveEvent_Callback cb) { qquickframebufferobject_hoverleaveevent_callback = cb; }
    inline void setQQuickFramebufferObject_DragEnterEvent_Callback(QQuickFramebufferObject_DragEnterEvent_Callback cb) { qquickframebufferobject_dragenterevent_callback = cb; }
    inline void setQQuickFramebufferObject_DragMoveEvent_Callback(QQuickFramebufferObject_DragMoveEvent_Callback cb) { qquickframebufferobject_dragmoveevent_callback = cb; }
    inline void setQQuickFramebufferObject_DragLeaveEvent_Callback(QQuickFramebufferObject_DragLeaveEvent_Callback cb) { qquickframebufferobject_dragleaveevent_callback = cb; }
    inline void setQQuickFramebufferObject_DropEvent_Callback(QQuickFramebufferObject_DropEvent_Callback cb) { qquickframebufferobject_dropevent_callback = cb; }
    inline void setQQuickFramebufferObject_ChildMouseEventFilter_Callback(QQuickFramebufferObject_ChildMouseEventFilter_Callback cb) { qquickframebufferobject_childmouseeventfilter_callback = cb; }
    inline void setQQuickFramebufferObject_UpdatePolish_Callback(QQuickFramebufferObject_UpdatePolish_Callback cb) { qquickframebufferobject_updatepolish_callback = cb; }
    inline void setQQuickFramebufferObject_EventFilter_Callback(QQuickFramebufferObject_EventFilter_Callback cb) { qquickframebufferobject_eventfilter_callback = cb; }
    inline void setQQuickFramebufferObject_TimerEvent_Callback(QQuickFramebufferObject_TimerEvent_Callback cb) { qquickframebufferobject_timerevent_callback = cb; }
    inline void setQQuickFramebufferObject_ChildEvent_Callback(QQuickFramebufferObject_ChildEvent_Callback cb) { qquickframebufferobject_childevent_callback = cb; }
    inline void setQQuickFramebufferObject_CustomEvent_Callback(QQuickFramebufferObject_CustomEvent_Callback cb) { qquickframebufferobject_customevent_callback = cb; }
    inline void setQQuickFramebufferObject_ConnectNotify_Callback(QQuickFramebufferObject_ConnectNotify_Callback cb) { qquickframebufferobject_connectnotify_callback = cb; }
    inline void setQQuickFramebufferObject_DisconnectNotify_Callback(QQuickFramebufferObject_DisconnectNotify_Callback cb) { qquickframebufferobject_disconnectnotify_callback = cb; }
    inline void setQQuickFramebufferObject_IsComponentComplete_Callback(QQuickFramebufferObject_IsComponentComplete_Callback cb) { qquickframebufferobject_iscomponentcomplete_callback = cb; }
    inline void setQQuickFramebufferObject_UpdateInputMethod_Callback(QQuickFramebufferObject_UpdateInputMethod_Callback cb) { qquickframebufferobject_updateinputmethod_callback = cb; }
    inline void setQQuickFramebufferObject_WidthValid_Callback(QQuickFramebufferObject_WidthValid_Callback cb) { qquickframebufferobject_widthvalid_callback = cb; }
    inline void setQQuickFramebufferObject_HeightValid_Callback(QQuickFramebufferObject_HeightValid_Callback cb) { qquickframebufferobject_heightvalid_callback = cb; }
    inline void setQQuickFramebufferObject_SetImplicitSize_Callback(QQuickFramebufferObject_SetImplicitSize_Callback cb) { qquickframebufferobject_setimplicitsize_callback = cb; }
    inline void setQQuickFramebufferObject_Sender_Callback(QQuickFramebufferObject_Sender_Callback cb) { qquickframebufferobject_sender_callback = cb; }
    inline void setQQuickFramebufferObject_SenderSignalIndex_Callback(QQuickFramebufferObject_SenderSignalIndex_Callback cb) { qquickframebufferobject_sendersignalindex_callback = cb; }
    inline void setQQuickFramebufferObject_Receivers_Callback(QQuickFramebufferObject_Receivers_Callback cb) { qquickframebufferobject_receivers_callback = cb; }
    inline void setQQuickFramebufferObject_IsSignalConnected_Callback(QQuickFramebufferObject_IsSignalConnected_Callback cb) { qquickframebufferobject_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickFramebufferObject_MetaObject_IsBase(bool value) const { qquickframebufferobject_metaobject_isbase = value; }
    inline void setQQuickFramebufferObject_Metacast_IsBase(bool value) const { qquickframebufferobject_metacast_isbase = value; }
    inline void setQQuickFramebufferObject_Metacall_IsBase(bool value) const { qquickframebufferobject_metacall_isbase = value; }
    inline void setQQuickFramebufferObject_CreateRenderer_IsBase(bool value) const { qquickframebufferobject_createrenderer_isbase = value; }
    inline void setQQuickFramebufferObject_IsTextureProvider_IsBase(bool value) const { qquickframebufferobject_istextureprovider_isbase = value; }
    inline void setQQuickFramebufferObject_TextureProvider_IsBase(bool value) const { qquickframebufferobject_textureprovider_isbase = value; }
    inline void setQQuickFramebufferObject_ReleaseResources_IsBase(bool value) const { qquickframebufferobject_releaseresources_isbase = value; }
    inline void setQQuickFramebufferObject_GeometryChange_IsBase(bool value) const { qquickframebufferobject_geometrychange_isbase = value; }
    inline void setQQuickFramebufferObject_UpdatePaintNode_IsBase(bool value) const { qquickframebufferobject_updatepaintnode_isbase = value; }
    inline void setQQuickFramebufferObject_BoundingRect_IsBase(bool value) const { qquickframebufferobject_boundingrect_isbase = value; }
    inline void setQQuickFramebufferObject_ClipRect_IsBase(bool value) const { qquickframebufferobject_cliprect_isbase = value; }
    inline void setQQuickFramebufferObject_Contains_IsBase(bool value) const { qquickframebufferobject_contains_isbase = value; }
    inline void setQQuickFramebufferObject_InputMethodQuery_IsBase(bool value) const { qquickframebufferobject_inputmethodquery_isbase = value; }
    inline void setQQuickFramebufferObject_Event_IsBase(bool value) const { qquickframebufferobject_event_isbase = value; }
    inline void setQQuickFramebufferObject_ItemChange_IsBase(bool value) const { qquickframebufferobject_itemchange_isbase = value; }
    inline void setQQuickFramebufferObject_ClassBegin_IsBase(bool value) const { qquickframebufferobject_classbegin_isbase = value; }
    inline void setQQuickFramebufferObject_ComponentComplete_IsBase(bool value) const { qquickframebufferobject_componentcomplete_isbase = value; }
    inline void setQQuickFramebufferObject_KeyPressEvent_IsBase(bool value) const { qquickframebufferobject_keypressevent_isbase = value; }
    inline void setQQuickFramebufferObject_KeyReleaseEvent_IsBase(bool value) const { qquickframebufferobject_keyreleaseevent_isbase = value; }
    inline void setQQuickFramebufferObject_InputMethodEvent_IsBase(bool value) const { qquickframebufferobject_inputmethodevent_isbase = value; }
    inline void setQQuickFramebufferObject_FocusInEvent_IsBase(bool value) const { qquickframebufferobject_focusinevent_isbase = value; }
    inline void setQQuickFramebufferObject_FocusOutEvent_IsBase(bool value) const { qquickframebufferobject_focusoutevent_isbase = value; }
    inline void setQQuickFramebufferObject_MousePressEvent_IsBase(bool value) const { qquickframebufferobject_mousepressevent_isbase = value; }
    inline void setQQuickFramebufferObject_MouseMoveEvent_IsBase(bool value) const { qquickframebufferobject_mousemoveevent_isbase = value; }
    inline void setQQuickFramebufferObject_MouseReleaseEvent_IsBase(bool value) const { qquickframebufferobject_mousereleaseevent_isbase = value; }
    inline void setQQuickFramebufferObject_MouseDoubleClickEvent_IsBase(bool value) const { qquickframebufferobject_mousedoubleclickevent_isbase = value; }
    inline void setQQuickFramebufferObject_MouseUngrabEvent_IsBase(bool value) const { qquickframebufferobject_mouseungrabevent_isbase = value; }
    inline void setQQuickFramebufferObject_TouchUngrabEvent_IsBase(bool value) const { qquickframebufferobject_touchungrabevent_isbase = value; }
    inline void setQQuickFramebufferObject_WheelEvent_IsBase(bool value) const { qquickframebufferobject_wheelevent_isbase = value; }
    inline void setQQuickFramebufferObject_TouchEvent_IsBase(bool value) const { qquickframebufferobject_touchevent_isbase = value; }
    inline void setQQuickFramebufferObject_HoverEnterEvent_IsBase(bool value) const { qquickframebufferobject_hoverenterevent_isbase = value; }
    inline void setQQuickFramebufferObject_HoverMoveEvent_IsBase(bool value) const { qquickframebufferobject_hovermoveevent_isbase = value; }
    inline void setQQuickFramebufferObject_HoverLeaveEvent_IsBase(bool value) const { qquickframebufferobject_hoverleaveevent_isbase = value; }
    inline void setQQuickFramebufferObject_DragEnterEvent_IsBase(bool value) const { qquickframebufferobject_dragenterevent_isbase = value; }
    inline void setQQuickFramebufferObject_DragMoveEvent_IsBase(bool value) const { qquickframebufferobject_dragmoveevent_isbase = value; }
    inline void setQQuickFramebufferObject_DragLeaveEvent_IsBase(bool value) const { qquickframebufferobject_dragleaveevent_isbase = value; }
    inline void setQQuickFramebufferObject_DropEvent_IsBase(bool value) const { qquickframebufferobject_dropevent_isbase = value; }
    inline void setQQuickFramebufferObject_ChildMouseEventFilter_IsBase(bool value) const { qquickframebufferobject_childmouseeventfilter_isbase = value; }
    inline void setQQuickFramebufferObject_UpdatePolish_IsBase(bool value) const { qquickframebufferobject_updatepolish_isbase = value; }
    inline void setQQuickFramebufferObject_EventFilter_IsBase(bool value) const { qquickframebufferobject_eventfilter_isbase = value; }
    inline void setQQuickFramebufferObject_TimerEvent_IsBase(bool value) const { qquickframebufferobject_timerevent_isbase = value; }
    inline void setQQuickFramebufferObject_ChildEvent_IsBase(bool value) const { qquickframebufferobject_childevent_isbase = value; }
    inline void setQQuickFramebufferObject_CustomEvent_IsBase(bool value) const { qquickframebufferobject_customevent_isbase = value; }
    inline void setQQuickFramebufferObject_ConnectNotify_IsBase(bool value) const { qquickframebufferobject_connectnotify_isbase = value; }
    inline void setQQuickFramebufferObject_DisconnectNotify_IsBase(bool value) const { qquickframebufferobject_disconnectnotify_isbase = value; }
    inline void setQQuickFramebufferObject_IsComponentComplete_IsBase(bool value) const { qquickframebufferobject_iscomponentcomplete_isbase = value; }
    inline void setQQuickFramebufferObject_UpdateInputMethod_IsBase(bool value) const { qquickframebufferobject_updateinputmethod_isbase = value; }
    inline void setQQuickFramebufferObject_WidthValid_IsBase(bool value) const { qquickframebufferobject_widthvalid_isbase = value; }
    inline void setQQuickFramebufferObject_HeightValid_IsBase(bool value) const { qquickframebufferobject_heightvalid_isbase = value; }
    inline void setQQuickFramebufferObject_SetImplicitSize_IsBase(bool value) const { qquickframebufferobject_setimplicitsize_isbase = value; }
    inline void setQQuickFramebufferObject_Sender_IsBase(bool value) const { qquickframebufferobject_sender_isbase = value; }
    inline void setQQuickFramebufferObject_SenderSignalIndex_IsBase(bool value) const { qquickframebufferobject_sendersignalindex_isbase = value; }
    inline void setQQuickFramebufferObject_Receivers_IsBase(bool value) const { qquickframebufferobject_receivers_isbase = value; }
    inline void setQQuickFramebufferObject_IsSignalConnected_IsBase(bool value) const { qquickframebufferobject_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickframebufferobject_metaobject_isbase) {
            qquickframebufferobject_metaobject_isbase = false;
            return QQuickFramebufferObject::metaObject();
        }
        auto metaobject_cb = qquickframebufferobject_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickFramebufferObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickframebufferobject_metacast_isbase) {
            qquickframebufferobject_metacast_isbase = false;
            return QQuickFramebufferObject::qt_metacast(param1);
        }
        auto metacast_cb = qquickframebufferobject_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickFramebufferObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickframebufferobject_metacall_isbase) {
            qquickframebufferobject_metacall_isbase = false;
            return QQuickFramebufferObject::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickframebufferobject_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickFramebufferObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickFramebufferObject::Renderer* createRenderer() const override {
        auto createrenderer_cb = qquickframebufferobject_createrenderer_callback;
        if (createrenderer_cb) {
            QQuickFramebufferObject__Renderer* callback_ret = createrenderer_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickframebufferobject_istextureprovider_isbase) {
            qquickframebufferobject_istextureprovider_isbase = false;
            return QQuickFramebufferObject::isTextureProvider();
        }
        auto istextureprovider_cb = qquickframebufferobject_istextureprovider_callback;
        if (istextureprovider_cb) {
            bool callback_ret = istextureprovider_cb();
            return callback_ret;
        }
        return QQuickFramebufferObject::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickframebufferobject_textureprovider_isbase) {
            qquickframebufferobject_textureprovider_isbase = false;
            return QQuickFramebufferObject::textureProvider();
        }
        auto textureprovider_cb = qquickframebufferobject_textureprovider_callback;
        if (textureprovider_cb) {
            QSGTextureProvider* callback_ret = textureprovider_cb();
            return callback_ret;
        }
        return QQuickFramebufferObject::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickframebufferobject_releaseresources_isbase) {
            qquickframebufferobject_releaseresources_isbase = false;
            QQuickFramebufferObject::releaseResources();
            return;
        }
        auto releaseresources_cb = qquickframebufferobject_releaseresources_callback;
        if (releaseresources_cb) {
            releaseresources_cb();
            return;
        }
        QQuickFramebufferObject::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickframebufferobject_geometrychange_isbase) {
            qquickframebufferobject_geometrychange_isbase = false;
            QQuickFramebufferObject::geometryChange(newGeometry, oldGeometry);
            return;
        }
        auto geometrychange_cb = qquickframebufferobject_geometrychange_callback;
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
        QQuickFramebufferObject::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickframebufferobject_updatepaintnode_isbase) {
            qquickframebufferobject_updatepaintnode_isbase = false;
            return QQuickFramebufferObject::updatePaintNode(param1, param2);
        }
        auto updatepaintnode_cb = qquickframebufferobject_updatepaintnode_callback;
        if (updatepaintnode_cb) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = updatepaintnode_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickFramebufferObject::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickframebufferobject_boundingrect_isbase) {
            qquickframebufferobject_boundingrect_isbase = false;
            return QQuickFramebufferObject::boundingRect();
        }
        auto boundingrect_cb = qquickframebufferobject_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickFramebufferObject::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickframebufferobject_cliprect_isbase) {
            qquickframebufferobject_cliprect_isbase = false;
            return QQuickFramebufferObject::clipRect();
        }
        auto cliprect_cb = qquickframebufferobject_cliprect_callback;
        if (cliprect_cb) {
            QRectF* callback_ret = cliprect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickFramebufferObject::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickframebufferobject_contains_isbase) {
            qquickframebufferobject_contains_isbase = false;
            return QQuickFramebufferObject::contains(point);
        }
        auto contains_cb = qquickframebufferobject_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickFramebufferObject::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickframebufferobject_inputmethodquery_isbase) {
            qquickframebufferobject_inputmethodquery_isbase = false;
            return QQuickFramebufferObject::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qquickframebufferobject_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickFramebufferObject::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickframebufferobject_event_isbase) {
            qquickframebufferobject_event_isbase = false;
            return QQuickFramebufferObject::event(param1);
        }
        auto event_cb = qquickframebufferobject_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickFramebufferObject::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickframebufferobject_itemchange_isbase) {
            qquickframebufferobject_itemchange_isbase = false;
            QQuickFramebufferObject::itemChange(param1, param2);
            return;
        }
        auto itemchange_cb = qquickframebufferobject_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            itemchange_cb(this, cbval1, cbval2);
            return;
        }
        QQuickFramebufferObject::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickframebufferobject_classbegin_isbase) {
            qquickframebufferobject_classbegin_isbase = false;
            QQuickFramebufferObject::classBegin();
            return;
        }
        auto classbegin_cb = qquickframebufferobject_classbegin_callback;
        if (classbegin_cb) {
            classbegin_cb();
            return;
        }
        QQuickFramebufferObject::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickframebufferobject_componentcomplete_isbase) {
            qquickframebufferobject_componentcomplete_isbase = false;
            QQuickFramebufferObject::componentComplete();
            return;
        }
        auto componentcomplete_cb = qquickframebufferobject_componentcomplete_callback;
        if (componentcomplete_cb) {
            componentcomplete_cb();
            return;
        }
        QQuickFramebufferObject::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickframebufferobject_keypressevent_isbase) {
            qquickframebufferobject_keypressevent_isbase = false;
            QQuickFramebufferObject::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qquickframebufferobject_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickframebufferobject_keyreleaseevent_isbase) {
            qquickframebufferobject_keyreleaseevent_isbase = false;
            QQuickFramebufferObject::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qquickframebufferobject_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickframebufferobject_inputmethodevent_isbase) {
            qquickframebufferobject_inputmethodevent_isbase = false;
            QQuickFramebufferObject::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qquickframebufferobject_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickframebufferobject_focusinevent_isbase) {
            qquickframebufferobject_focusinevent_isbase = false;
            QQuickFramebufferObject::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qquickframebufferobject_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusinevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickframebufferobject_focusoutevent_isbase) {
            qquickframebufferobject_focusoutevent_isbase = false;
            QQuickFramebufferObject::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qquickframebufferobject_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusoutevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousepressevent_isbase) {
            qquickframebufferobject_mousepressevent_isbase = false;
            QQuickFramebufferObject::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qquickframebufferobject_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousemoveevent_isbase) {
            qquickframebufferobject_mousemoveevent_isbase = false;
            QQuickFramebufferObject::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qquickframebufferobject_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousereleaseevent_isbase) {
            qquickframebufferobject_mousereleaseevent_isbase = false;
            QQuickFramebufferObject::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qquickframebufferobject_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickframebufferobject_mousedoubleclickevent_isbase) {
            qquickframebufferobject_mousedoubleclickevent_isbase = false;
            QQuickFramebufferObject::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qquickframebufferobject_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickframebufferobject_mouseungrabevent_isbase) {
            qquickframebufferobject_mouseungrabevent_isbase = false;
            QQuickFramebufferObject::mouseUngrabEvent();
            return;
        }
        auto mouseungrabevent_cb = qquickframebufferobject_mouseungrabevent_callback;
        if (mouseungrabevent_cb) {
            mouseungrabevent_cb();
            return;
        }
        QQuickFramebufferObject::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickframebufferobject_touchungrabevent_isbase) {
            qquickframebufferobject_touchungrabevent_isbase = false;
            QQuickFramebufferObject::touchUngrabEvent();
            return;
        }
        auto touchungrabevent_cb = qquickframebufferobject_touchungrabevent_callback;
        if (touchungrabevent_cb) {
            touchungrabevent_cb();
            return;
        }
        QQuickFramebufferObject::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickframebufferobject_wheelevent_isbase) {
            qquickframebufferobject_wheelevent_isbase = false;
            QQuickFramebufferObject::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qquickframebufferobject_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickframebufferobject_touchevent_isbase) {
            qquickframebufferobject_touchevent_isbase = false;
            QQuickFramebufferObject::touchEvent(event);
            return;
        }
        auto touchevent_cb = qquickframebufferobject_touchevent_callback;
        if (touchevent_cb) {
            QTouchEvent* cbval1 = event;
            touchevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickframebufferobject_hoverenterevent_isbase) {
            qquickframebufferobject_hoverenterevent_isbase = false;
            QQuickFramebufferObject::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qquickframebufferobject_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverenterevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickframebufferobject_hovermoveevent_isbase) {
            qquickframebufferobject_hovermoveevent_isbase = false;
            QQuickFramebufferObject::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qquickframebufferobject_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QHoverEvent* cbval1 = event;
            hovermoveevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickframebufferobject_hoverleaveevent_isbase) {
            qquickframebufferobject_hoverleaveevent_isbase = false;
            QQuickFramebufferObject::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qquickframebufferobject_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickframebufferobject_dragenterevent_isbase) {
            qquickframebufferobject_dragenterevent_isbase = false;
            QQuickFramebufferObject::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = qquickframebufferobject_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;
            dragenterevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickframebufferobject_dragmoveevent_isbase) {
            qquickframebufferobject_dragmoveevent_isbase = false;
            QQuickFramebufferObject::dragMoveEvent(param1);
            return;
        }
        auto dragmoveevent_cb = qquickframebufferobject_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = param1;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickframebufferobject_dragleaveevent_isbase) {
            qquickframebufferobject_dragleaveevent_isbase = false;
            QQuickFramebufferObject::dragLeaveEvent(param1);
            return;
        }
        auto dragleaveevent_cb = qquickframebufferobject_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = param1;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickframebufferobject_dropevent_isbase) {
            qquickframebufferobject_dropevent_isbase = false;
            QQuickFramebufferObject::dropEvent(param1);
            return;
        }
        auto dropevent_cb = qquickframebufferobject_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;
            dropevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickframebufferobject_childmouseeventfilter_isbase) {
            qquickframebufferobject_childmouseeventfilter_isbase = false;
            return QQuickFramebufferObject::childMouseEventFilter(param1, param2);
        }
        auto childmouseeventfilter_cb = qquickframebufferobject_childmouseeventfilter_callback;
        if (childmouseeventfilter_cb) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = childmouseeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickFramebufferObject::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickframebufferobject_updatepolish_isbase) {
            qquickframebufferobject_updatepolish_isbase = false;
            QQuickFramebufferObject::updatePolish();
            return;
        }
        auto updatepolish_cb = qquickframebufferobject_updatepolish_callback;
        if (updatepolish_cb) {
            updatepolish_cb();
            return;
        }
        QQuickFramebufferObject::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickframebufferobject_eventfilter_isbase) {
            qquickframebufferobject_eventfilter_isbase = false;
            return QQuickFramebufferObject::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickframebufferobject_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickFramebufferObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickframebufferobject_timerevent_isbase) {
            qquickframebufferobject_timerevent_isbase = false;
            QQuickFramebufferObject::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickframebufferobject_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickframebufferobject_childevent_isbase) {
            qquickframebufferobject_childevent_isbase = false;
            QQuickFramebufferObject::childEvent(event);
            return;
        }
        auto childevent_cb = qquickframebufferobject_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickframebufferobject_customevent_isbase) {
            qquickframebufferobject_customevent_isbase = false;
            QQuickFramebufferObject::customEvent(event);
            return;
        }
        auto customevent_cb = qquickframebufferobject_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickframebufferobject_connectnotify_isbase) {
            qquickframebufferobject_connectnotify_isbase = false;
            QQuickFramebufferObject::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickframebufferobject_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickframebufferobject_disconnectnotify_isbase) {
            qquickframebufferobject_disconnectnotify_isbase = false;
            QQuickFramebufferObject::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickframebufferobject_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickFramebufferObject::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isComponentComplete() const {
        if (qquickframebufferobject_iscomponentcomplete_isbase) {
            qquickframebufferobject_iscomponentcomplete_isbase = false;
            return QQuickFramebufferObject::isComponentComplete();
        }
        auto iscomponentcomplete_cb = qquickframebufferobject_iscomponentcomplete_callback;
        if (iscomponentcomplete_cb) {
            bool callback_ret = iscomponentcomplete_cb();
            return callback_ret;
        }
        return QQuickFramebufferObject::isComponentComplete();
    }

    // Virtual method for C ABI access and custom callback
    void updateInputMethod() {
        if (qquickframebufferobject_updateinputmethod_isbase) {
            qquickframebufferobject_updateinputmethod_isbase = false;
            QQuickFramebufferObject::updateInputMethod();
            return;
        }
        auto updateinputmethod_cb = qquickframebufferobject_updateinputmethod_callback;
        if (updateinputmethod_cb) {
            updateinputmethod_cb();
            return;
        }
        QQuickFramebufferObject::updateInputMethod();
    }

    // Virtual method for C ABI access and custom callback
    bool widthValid() const {
        if (qquickframebufferobject_widthvalid_isbase) {
            qquickframebufferobject_widthvalid_isbase = false;
            return QQuickFramebufferObject::widthValid();
        }
        auto widthvalid_cb = qquickframebufferobject_widthvalid_callback;
        if (widthvalid_cb) {
            bool callback_ret = widthvalid_cb();
            return callback_ret;
        }
        return QQuickFramebufferObject::widthValid();
    }

    // Virtual method for C ABI access and custom callback
    bool heightValid() const {
        if (qquickframebufferobject_heightvalid_isbase) {
            qquickframebufferobject_heightvalid_isbase = false;
            return QQuickFramebufferObject::heightValid();
        }
        auto heightvalid_cb = qquickframebufferobject_heightvalid_callback;
        if (heightvalid_cb) {
            bool callback_ret = heightvalid_cb();
            return callback_ret;
        }
        return QQuickFramebufferObject::heightValid();
    }

    // Virtual method for C ABI access and custom callback
    void setImplicitSize(qreal param1, qreal param2) {
        if (qquickframebufferobject_setimplicitsize_isbase) {
            qquickframebufferobject_setimplicitsize_isbase = false;
            QQuickFramebufferObject::setImplicitSize(param1, param2);
            return;
        }
        auto setimplicitsize_cb = qquickframebufferobject_setimplicitsize_callback;
        if (setimplicitsize_cb) {
            double cbval1 = static_cast<double>(param1);
            double cbval2 = static_cast<double>(param2);
            setimplicitsize_cb(this, cbval1, cbval2);
            return;
        }
        QQuickFramebufferObject::setImplicitSize(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickframebufferobject_sender_isbase) {
            qquickframebufferobject_sender_isbase = false;
            return QQuickFramebufferObject::sender();
        }
        auto sender_cb = qquickframebufferobject_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickFramebufferObject::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickframebufferobject_sendersignalindex_isbase) {
            qquickframebufferobject_sendersignalindex_isbase = false;
            return QQuickFramebufferObject::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickframebufferobject_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickFramebufferObject::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickframebufferobject_receivers_isbase) {
            qquickframebufferobject_receivers_isbase = false;
            return QQuickFramebufferObject::receivers(signal);
        }
        auto receivers_cb = qquickframebufferobject_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickFramebufferObject::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickframebufferobject_issignalconnected_isbase) {
            qquickframebufferobject_issignalconnected_isbase = false;
            return QQuickFramebufferObject::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickframebufferobject_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickFramebufferObject::isSignalConnected(signal);
    }

    // Friend functions
    friend void QQuickFramebufferObject_GeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickFramebufferObject_SuperGeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend QSGNode* QQuickFramebufferObject_UpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend QSGNode* QQuickFramebufferObject_SuperUpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend bool QQuickFramebufferObject_Event(QQuickFramebufferObject* self, QEvent* param1);
    friend bool QQuickFramebufferObject_SuperEvent(QQuickFramebufferObject* self, QEvent* param1);
    friend void QQuickFramebufferObject_ItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickFramebufferObject_SuperItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickFramebufferObject_ClassBegin(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperClassBegin(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_ComponentComplete(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperComponentComplete(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_KeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event);
    friend void QQuickFramebufferObject_SuperKeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event);
    friend void QQuickFramebufferObject_KeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event);
    friend void QQuickFramebufferObject_SuperKeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event);
    friend void QQuickFramebufferObject_InputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1);
    friend void QQuickFramebufferObject_SuperInputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1);
    friend void QQuickFramebufferObject_FocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
    friend void QQuickFramebufferObject_SuperFocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
    friend void QQuickFramebufferObject_FocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
    friend void QQuickFramebufferObject_SuperFocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1);
    friend void QQuickFramebufferObject_MousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_MouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_MouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_MouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_SuperMouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event);
    friend void QQuickFramebufferObject_MouseUngrabEvent(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperMouseUngrabEvent(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_TouchUngrabEvent(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperTouchUngrabEvent(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_WheelEvent(QQuickFramebufferObject* self, QWheelEvent* event);
    friend void QQuickFramebufferObject_SuperWheelEvent(QQuickFramebufferObject* self, QWheelEvent* event);
    friend void QQuickFramebufferObject_TouchEvent(QQuickFramebufferObject* self, QTouchEvent* event);
    friend void QQuickFramebufferObject_SuperTouchEvent(QQuickFramebufferObject* self, QTouchEvent* event);
    friend void QQuickFramebufferObject_HoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_SuperHoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_HoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_SuperHoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_HoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_SuperHoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event);
    friend void QQuickFramebufferObject_DragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1);
    friend void QQuickFramebufferObject_SuperDragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1);
    friend void QQuickFramebufferObject_DragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1);
    friend void QQuickFramebufferObject_SuperDragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1);
    friend void QQuickFramebufferObject_DragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1);
    friend void QQuickFramebufferObject_SuperDragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1);
    friend void QQuickFramebufferObject_DropEvent(QQuickFramebufferObject* self, QDropEvent* param1);
    friend void QQuickFramebufferObject_SuperDropEvent(QQuickFramebufferObject* self, QDropEvent* param1);
    friend bool QQuickFramebufferObject_ChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2);
    friend bool QQuickFramebufferObject_SuperChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2);
    friend void QQuickFramebufferObject_UpdatePolish(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperUpdatePolish(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_TimerEvent(QQuickFramebufferObject* self, QTimerEvent* event);
    friend void QQuickFramebufferObject_SuperTimerEvent(QQuickFramebufferObject* self, QTimerEvent* event);
    friend void QQuickFramebufferObject_ChildEvent(QQuickFramebufferObject* self, QChildEvent* event);
    friend void QQuickFramebufferObject_SuperChildEvent(QQuickFramebufferObject* self, QChildEvent* event);
    friend void QQuickFramebufferObject_CustomEvent(QQuickFramebufferObject* self, QEvent* event);
    friend void QQuickFramebufferObject_SuperCustomEvent(QQuickFramebufferObject* self, QEvent* event);
    friend void QQuickFramebufferObject_ConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
    friend void QQuickFramebufferObject_SuperConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
    friend void QQuickFramebufferObject_DisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
    friend void QQuickFramebufferObject_SuperDisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal);
    friend bool QQuickFramebufferObject_IsComponentComplete(const QQuickFramebufferObject* self);
    friend bool QQuickFramebufferObject_SuperIsComponentComplete(const QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_UpdateInputMethod(QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SuperUpdateInputMethod(QQuickFramebufferObject* self);
    friend bool QQuickFramebufferObject_WidthValid(const QQuickFramebufferObject* self);
    friend bool QQuickFramebufferObject_SuperWidthValid(const QQuickFramebufferObject* self);
    friend bool QQuickFramebufferObject_HeightValid(const QQuickFramebufferObject* self);
    friend bool QQuickFramebufferObject_SuperHeightValid(const QQuickFramebufferObject* self);
    friend void QQuickFramebufferObject_SetImplicitSize(QQuickFramebufferObject* self, double param1, double param2);
    friend void QQuickFramebufferObject_SuperSetImplicitSize(QQuickFramebufferObject* self, double param1, double param2);
    friend QObject* QQuickFramebufferObject_Sender(const QQuickFramebufferObject* self);
    friend QObject* QQuickFramebufferObject_SuperSender(const QQuickFramebufferObject* self);
    friend int QQuickFramebufferObject_SenderSignalIndex(const QQuickFramebufferObject* self);
    friend int QQuickFramebufferObject_SuperSenderSignalIndex(const QQuickFramebufferObject* self);
    friend int QQuickFramebufferObject_Receivers(const QQuickFramebufferObject* self, const char* signal);
    friend int QQuickFramebufferObject_SuperReceivers(const QQuickFramebufferObject* self, const char* signal);
    friend bool QQuickFramebufferObject_IsSignalConnected(const QQuickFramebufferObject* self, const QMetaMethod* signal);
    friend bool QQuickFramebufferObject_SuperIsSignalConnected(const QQuickFramebufferObject* self, const QMetaMethod* signal);
};

#endif
