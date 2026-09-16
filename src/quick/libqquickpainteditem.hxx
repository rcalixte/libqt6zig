#pragma once
#ifndef QUICK_LIBQQUICKPAINTEDITEM_HXX
#define QUICK_LIBQQUICKPAINTEDITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickPaintedItem so that we can call protected methods
class VirtualQQuickPaintedItem : public QQuickPaintedItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickPaintedItem = true;

    // Virtual class public types (including callbacks)
    using QQuickPaintedItem_MetaObject_Callback = QMetaObject* (*)();
    using QQuickPaintedItem_Metacast_Callback = void* (*)(QQuickPaintedItem*, const char*);
    using QQuickPaintedItem_Metacall_Callback = int (*)(QQuickPaintedItem*, int, int, void**);
    using QQuickPaintedItem_Paint_Callback = void (*)(QQuickPaintedItem*, QPainter*);
    using QQuickPaintedItem_IsTextureProvider_Callback = bool (*)();
    using QQuickPaintedItem_TextureProvider_Callback = QSGTextureProvider* (*)();
    using QQuickPaintedItem_UpdatePaintNode_Callback = QSGNode* (*)(QQuickPaintedItem*, QSGNode*, QQuickItem__UpdatePaintNodeData*);
    using QQuickPaintedItem_ReleaseResources_Callback = void (*)();
    using QQuickPaintedItem_ItemChange_Callback = void (*)(QQuickPaintedItem*, int, QQuickItem__ItemChangeData*);
    using QQuickPaintedItem_BoundingRect_Callback = QRectF* (*)();
    using QQuickPaintedItem_ClipRect_Callback = QRectF* (*)();
    using QQuickPaintedItem_Contains_Callback = bool (*)(const QQuickPaintedItem*, QPointF*);
    using QQuickPaintedItem_InputMethodQuery_Callback = QVariant* (*)(const QQuickPaintedItem*, int);
    using QQuickPaintedItem_Event_Callback = bool (*)(QQuickPaintedItem*, QEvent*);
    using QQuickPaintedItem_GeometryChange_Callback = void (*)(QQuickPaintedItem*, QRectF*, QRectF*);
    using QQuickPaintedItem_ClassBegin_Callback = void (*)();
    using QQuickPaintedItem_ComponentComplete_Callback = void (*)();
    using QQuickPaintedItem_KeyPressEvent_Callback = void (*)(QQuickPaintedItem*, QKeyEvent*);
    using QQuickPaintedItem_KeyReleaseEvent_Callback = void (*)(QQuickPaintedItem*, QKeyEvent*);
    using QQuickPaintedItem_InputMethodEvent_Callback = void (*)(QQuickPaintedItem*, QInputMethodEvent*);
    using QQuickPaintedItem_FocusInEvent_Callback = void (*)(QQuickPaintedItem*, QFocusEvent*);
    using QQuickPaintedItem_FocusOutEvent_Callback = void (*)(QQuickPaintedItem*, QFocusEvent*);
    using QQuickPaintedItem_MousePressEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseMoveEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseReleaseEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseDoubleClickEvent_Callback = void (*)(QQuickPaintedItem*, QMouseEvent*);
    using QQuickPaintedItem_MouseUngrabEvent_Callback = void (*)();
    using QQuickPaintedItem_TouchUngrabEvent_Callback = void (*)();
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
    using QQuickPaintedItem_UpdatePolish_Callback = void (*)();
    using QQuickPaintedItem_EventFilter_Callback = bool (*)(QQuickPaintedItem*, QObject*, QEvent*);
    using QQuickPaintedItem_TimerEvent_Callback = void (*)(QQuickPaintedItem*, QTimerEvent*);
    using QQuickPaintedItem_ChildEvent_Callback = void (*)(QQuickPaintedItem*, QChildEvent*);
    using QQuickPaintedItem_CustomEvent_Callback = void (*)(QQuickPaintedItem*, QEvent*);
    using QQuickPaintedItem_ConnectNotify_Callback = void (*)(QQuickPaintedItem*, QMetaMethod*);
    using QQuickPaintedItem_DisconnectNotify_Callback = void (*)(QQuickPaintedItem*, QMetaMethod*);
    using QQuickPaintedItem_IsComponentComplete_Callback = bool (*)();
    using QQuickPaintedItem_UpdateInputMethod_Callback = void (*)();
    using QQuickPaintedItem_WidthValid_Callback = bool (*)();
    using QQuickPaintedItem_HeightValid_Callback = bool (*)();
    using QQuickPaintedItem_SetImplicitSize_Callback = void (*)(QQuickPaintedItem*, double, double);
    using QQuickPaintedItem_Sender_Callback = QObject* (*)();
    using QQuickPaintedItem_SenderSignalIndex_Callback = int (*)();
    using QQuickPaintedItem_Receivers_Callback = int (*)(const QQuickPaintedItem*, const char*);
    using QQuickPaintedItem_IsSignalConnected_Callback = bool (*)(const QQuickPaintedItem*, QMetaMethod*);

  protected:
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
    QQuickPaintedItem_IsComponentComplete_Callback qquickpainteditem_iscomponentcomplete_callback = nullptr;
    QQuickPaintedItem_UpdateInputMethod_Callback qquickpainteditem_updateinputmethod_callback = nullptr;
    QQuickPaintedItem_WidthValid_Callback qquickpainteditem_widthvalid_callback = nullptr;
    QQuickPaintedItem_HeightValid_Callback qquickpainteditem_heightvalid_callback = nullptr;
    QQuickPaintedItem_SetImplicitSize_Callback qquickpainteditem_setimplicitsize_callback = nullptr;
    QQuickPaintedItem_Sender_Callback qquickpainteditem_sender_callback = nullptr;
    QQuickPaintedItem_SenderSignalIndex_Callback qquickpainteditem_sendersignalindex_callback = nullptr;
    QQuickPaintedItem_Receivers_Callback qquickpainteditem_receivers_callback = nullptr;
    QQuickPaintedItem_IsSignalConnected_Callback qquickpainteditem_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickpainteditem_metaobject_isbase = false;
    mutable bool qquickpainteditem_metacast_isbase = false;
    mutable bool qquickpainteditem_metacall_isbase = false;
    mutable bool qquickpainteditem_paint_isbase = false;
    mutable bool qquickpainteditem_istextureprovider_isbase = false;
    mutable bool qquickpainteditem_textureprovider_isbase = false;
    mutable bool qquickpainteditem_updatepaintnode_isbase = false;
    mutable bool qquickpainteditem_releaseresources_isbase = false;
    mutable bool qquickpainteditem_itemchange_isbase = false;
    mutable bool qquickpainteditem_boundingrect_isbase = false;
    mutable bool qquickpainteditem_cliprect_isbase = false;
    mutable bool qquickpainteditem_contains_isbase = false;
    mutable bool qquickpainteditem_inputmethodquery_isbase = false;
    mutable bool qquickpainteditem_event_isbase = false;
    mutable bool qquickpainteditem_geometrychange_isbase = false;
    mutable bool qquickpainteditem_classbegin_isbase = false;
    mutable bool qquickpainteditem_componentcomplete_isbase = false;
    mutable bool qquickpainteditem_keypressevent_isbase = false;
    mutable bool qquickpainteditem_keyreleaseevent_isbase = false;
    mutable bool qquickpainteditem_inputmethodevent_isbase = false;
    mutable bool qquickpainteditem_focusinevent_isbase = false;
    mutable bool qquickpainteditem_focusoutevent_isbase = false;
    mutable bool qquickpainteditem_mousepressevent_isbase = false;
    mutable bool qquickpainteditem_mousemoveevent_isbase = false;
    mutable bool qquickpainteditem_mousereleaseevent_isbase = false;
    mutable bool qquickpainteditem_mousedoubleclickevent_isbase = false;
    mutable bool qquickpainteditem_mouseungrabevent_isbase = false;
    mutable bool qquickpainteditem_touchungrabevent_isbase = false;
    mutable bool qquickpainteditem_wheelevent_isbase = false;
    mutable bool qquickpainteditem_touchevent_isbase = false;
    mutable bool qquickpainteditem_hoverenterevent_isbase = false;
    mutable bool qquickpainteditem_hovermoveevent_isbase = false;
    mutable bool qquickpainteditem_hoverleaveevent_isbase = false;
    mutable bool qquickpainteditem_dragenterevent_isbase = false;
    mutable bool qquickpainteditem_dragmoveevent_isbase = false;
    mutable bool qquickpainteditem_dragleaveevent_isbase = false;
    mutable bool qquickpainteditem_dropevent_isbase = false;
    mutable bool qquickpainteditem_childmouseeventfilter_isbase = false;
    mutable bool qquickpainteditem_updatepolish_isbase = false;
    mutable bool qquickpainteditem_eventfilter_isbase = false;
    mutable bool qquickpainteditem_timerevent_isbase = false;
    mutable bool qquickpainteditem_childevent_isbase = false;
    mutable bool qquickpainteditem_customevent_isbase = false;
    mutable bool qquickpainteditem_connectnotify_isbase = false;
    mutable bool qquickpainteditem_disconnectnotify_isbase = false;
    mutable bool qquickpainteditem_iscomponentcomplete_isbase = false;
    mutable bool qquickpainteditem_updateinputmethod_isbase = false;
    mutable bool qquickpainteditem_widthvalid_isbase = false;
    mutable bool qquickpainteditem_heightvalid_isbase = false;
    mutable bool qquickpainteditem_setimplicitsize_isbase = false;
    mutable bool qquickpainteditem_sender_isbase = false;
    mutable bool qquickpainteditem_sendersignalindex_isbase = false;
    mutable bool qquickpainteditem_receivers_isbase = false;
    mutable bool qquickpainteditem_issignalconnected_isbase = false;

  public:
    VirtualQQuickPaintedItem() : QQuickPaintedItem() {};
    VirtualQQuickPaintedItem(QQuickItem* parent) : QQuickPaintedItem(parent) {};

    // Callback setters
    inline void setQQuickPaintedItem_MetaObject_Callback(QQuickPaintedItem_MetaObject_Callback cb) { qquickpainteditem_metaobject_callback = cb; }
    inline void setQQuickPaintedItem_Metacast_Callback(QQuickPaintedItem_Metacast_Callback cb) { qquickpainteditem_metacast_callback = cb; }
    inline void setQQuickPaintedItem_Metacall_Callback(QQuickPaintedItem_Metacall_Callback cb) { qquickpainteditem_metacall_callback = cb; }
    inline void setQQuickPaintedItem_Paint_Callback(QQuickPaintedItem_Paint_Callback cb) { qquickpainteditem_paint_callback = cb; }
    inline void setQQuickPaintedItem_IsTextureProvider_Callback(QQuickPaintedItem_IsTextureProvider_Callback cb) { qquickpainteditem_istextureprovider_callback = cb; }
    inline void setQQuickPaintedItem_TextureProvider_Callback(QQuickPaintedItem_TextureProvider_Callback cb) { qquickpainteditem_textureprovider_callback = cb; }
    inline void setQQuickPaintedItem_UpdatePaintNode_Callback(QQuickPaintedItem_UpdatePaintNode_Callback cb) { qquickpainteditem_updatepaintnode_callback = cb; }
    inline void setQQuickPaintedItem_ReleaseResources_Callback(QQuickPaintedItem_ReleaseResources_Callback cb) { qquickpainteditem_releaseresources_callback = cb; }
    inline void setQQuickPaintedItem_ItemChange_Callback(QQuickPaintedItem_ItemChange_Callback cb) { qquickpainteditem_itemchange_callback = cb; }
    inline void setQQuickPaintedItem_BoundingRect_Callback(QQuickPaintedItem_BoundingRect_Callback cb) { qquickpainteditem_boundingrect_callback = cb; }
    inline void setQQuickPaintedItem_ClipRect_Callback(QQuickPaintedItem_ClipRect_Callback cb) { qquickpainteditem_cliprect_callback = cb; }
    inline void setQQuickPaintedItem_Contains_Callback(QQuickPaintedItem_Contains_Callback cb) { qquickpainteditem_contains_callback = cb; }
    inline void setQQuickPaintedItem_InputMethodQuery_Callback(QQuickPaintedItem_InputMethodQuery_Callback cb) { qquickpainteditem_inputmethodquery_callback = cb; }
    inline void setQQuickPaintedItem_Event_Callback(QQuickPaintedItem_Event_Callback cb) { qquickpainteditem_event_callback = cb; }
    inline void setQQuickPaintedItem_GeometryChange_Callback(QQuickPaintedItem_GeometryChange_Callback cb) { qquickpainteditem_geometrychange_callback = cb; }
    inline void setQQuickPaintedItem_ClassBegin_Callback(QQuickPaintedItem_ClassBegin_Callback cb) { qquickpainteditem_classbegin_callback = cb; }
    inline void setQQuickPaintedItem_ComponentComplete_Callback(QQuickPaintedItem_ComponentComplete_Callback cb) { qquickpainteditem_componentcomplete_callback = cb; }
    inline void setQQuickPaintedItem_KeyPressEvent_Callback(QQuickPaintedItem_KeyPressEvent_Callback cb) { qquickpainteditem_keypressevent_callback = cb; }
    inline void setQQuickPaintedItem_KeyReleaseEvent_Callback(QQuickPaintedItem_KeyReleaseEvent_Callback cb) { qquickpainteditem_keyreleaseevent_callback = cb; }
    inline void setQQuickPaintedItem_InputMethodEvent_Callback(QQuickPaintedItem_InputMethodEvent_Callback cb) { qquickpainteditem_inputmethodevent_callback = cb; }
    inline void setQQuickPaintedItem_FocusInEvent_Callback(QQuickPaintedItem_FocusInEvent_Callback cb) { qquickpainteditem_focusinevent_callback = cb; }
    inline void setQQuickPaintedItem_FocusOutEvent_Callback(QQuickPaintedItem_FocusOutEvent_Callback cb) { qquickpainteditem_focusoutevent_callback = cb; }
    inline void setQQuickPaintedItem_MousePressEvent_Callback(QQuickPaintedItem_MousePressEvent_Callback cb) { qquickpainteditem_mousepressevent_callback = cb; }
    inline void setQQuickPaintedItem_MouseMoveEvent_Callback(QQuickPaintedItem_MouseMoveEvent_Callback cb) { qquickpainteditem_mousemoveevent_callback = cb; }
    inline void setQQuickPaintedItem_MouseReleaseEvent_Callback(QQuickPaintedItem_MouseReleaseEvent_Callback cb) { qquickpainteditem_mousereleaseevent_callback = cb; }
    inline void setQQuickPaintedItem_MouseDoubleClickEvent_Callback(QQuickPaintedItem_MouseDoubleClickEvent_Callback cb) { qquickpainteditem_mousedoubleclickevent_callback = cb; }
    inline void setQQuickPaintedItem_MouseUngrabEvent_Callback(QQuickPaintedItem_MouseUngrabEvent_Callback cb) { qquickpainteditem_mouseungrabevent_callback = cb; }
    inline void setQQuickPaintedItem_TouchUngrabEvent_Callback(QQuickPaintedItem_TouchUngrabEvent_Callback cb) { qquickpainteditem_touchungrabevent_callback = cb; }
    inline void setQQuickPaintedItem_WheelEvent_Callback(QQuickPaintedItem_WheelEvent_Callback cb) { qquickpainteditem_wheelevent_callback = cb; }
    inline void setQQuickPaintedItem_TouchEvent_Callback(QQuickPaintedItem_TouchEvent_Callback cb) { qquickpainteditem_touchevent_callback = cb; }
    inline void setQQuickPaintedItem_HoverEnterEvent_Callback(QQuickPaintedItem_HoverEnterEvent_Callback cb) { qquickpainteditem_hoverenterevent_callback = cb; }
    inline void setQQuickPaintedItem_HoverMoveEvent_Callback(QQuickPaintedItem_HoverMoveEvent_Callback cb) { qquickpainteditem_hovermoveevent_callback = cb; }
    inline void setQQuickPaintedItem_HoverLeaveEvent_Callback(QQuickPaintedItem_HoverLeaveEvent_Callback cb) { qquickpainteditem_hoverleaveevent_callback = cb; }
    inline void setQQuickPaintedItem_DragEnterEvent_Callback(QQuickPaintedItem_DragEnterEvent_Callback cb) { qquickpainteditem_dragenterevent_callback = cb; }
    inline void setQQuickPaintedItem_DragMoveEvent_Callback(QQuickPaintedItem_DragMoveEvent_Callback cb) { qquickpainteditem_dragmoveevent_callback = cb; }
    inline void setQQuickPaintedItem_DragLeaveEvent_Callback(QQuickPaintedItem_DragLeaveEvent_Callback cb) { qquickpainteditem_dragleaveevent_callback = cb; }
    inline void setQQuickPaintedItem_DropEvent_Callback(QQuickPaintedItem_DropEvent_Callback cb) { qquickpainteditem_dropevent_callback = cb; }
    inline void setQQuickPaintedItem_ChildMouseEventFilter_Callback(QQuickPaintedItem_ChildMouseEventFilter_Callback cb) { qquickpainteditem_childmouseeventfilter_callback = cb; }
    inline void setQQuickPaintedItem_UpdatePolish_Callback(QQuickPaintedItem_UpdatePolish_Callback cb) { qquickpainteditem_updatepolish_callback = cb; }
    inline void setQQuickPaintedItem_EventFilter_Callback(QQuickPaintedItem_EventFilter_Callback cb) { qquickpainteditem_eventfilter_callback = cb; }
    inline void setQQuickPaintedItem_TimerEvent_Callback(QQuickPaintedItem_TimerEvent_Callback cb) { qquickpainteditem_timerevent_callback = cb; }
    inline void setQQuickPaintedItem_ChildEvent_Callback(QQuickPaintedItem_ChildEvent_Callback cb) { qquickpainteditem_childevent_callback = cb; }
    inline void setQQuickPaintedItem_CustomEvent_Callback(QQuickPaintedItem_CustomEvent_Callback cb) { qquickpainteditem_customevent_callback = cb; }
    inline void setQQuickPaintedItem_ConnectNotify_Callback(QQuickPaintedItem_ConnectNotify_Callback cb) { qquickpainteditem_connectnotify_callback = cb; }
    inline void setQQuickPaintedItem_DisconnectNotify_Callback(QQuickPaintedItem_DisconnectNotify_Callback cb) { qquickpainteditem_disconnectnotify_callback = cb; }
    inline void setQQuickPaintedItem_IsComponentComplete_Callback(QQuickPaintedItem_IsComponentComplete_Callback cb) { qquickpainteditem_iscomponentcomplete_callback = cb; }
    inline void setQQuickPaintedItem_UpdateInputMethod_Callback(QQuickPaintedItem_UpdateInputMethod_Callback cb) { qquickpainteditem_updateinputmethod_callback = cb; }
    inline void setQQuickPaintedItem_WidthValid_Callback(QQuickPaintedItem_WidthValid_Callback cb) { qquickpainteditem_widthvalid_callback = cb; }
    inline void setQQuickPaintedItem_HeightValid_Callback(QQuickPaintedItem_HeightValid_Callback cb) { qquickpainteditem_heightvalid_callback = cb; }
    inline void setQQuickPaintedItem_SetImplicitSize_Callback(QQuickPaintedItem_SetImplicitSize_Callback cb) { qquickpainteditem_setimplicitsize_callback = cb; }
    inline void setQQuickPaintedItem_Sender_Callback(QQuickPaintedItem_Sender_Callback cb) { qquickpainteditem_sender_callback = cb; }
    inline void setQQuickPaintedItem_SenderSignalIndex_Callback(QQuickPaintedItem_SenderSignalIndex_Callback cb) { qquickpainteditem_sendersignalindex_callback = cb; }
    inline void setQQuickPaintedItem_Receivers_Callback(QQuickPaintedItem_Receivers_Callback cb) { qquickpainteditem_receivers_callback = cb; }
    inline void setQQuickPaintedItem_IsSignalConnected_Callback(QQuickPaintedItem_IsSignalConnected_Callback cb) { qquickpainteditem_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickPaintedItem_MetaObject_IsBase(bool value) const { qquickpainteditem_metaobject_isbase = value; }
    inline void setQQuickPaintedItem_Metacast_IsBase(bool value) const { qquickpainteditem_metacast_isbase = value; }
    inline void setQQuickPaintedItem_Metacall_IsBase(bool value) const { qquickpainteditem_metacall_isbase = value; }
    inline void setQQuickPaintedItem_Paint_IsBase(bool value) const { qquickpainteditem_paint_isbase = value; }
    inline void setQQuickPaintedItem_IsTextureProvider_IsBase(bool value) const { qquickpainteditem_istextureprovider_isbase = value; }
    inline void setQQuickPaintedItem_TextureProvider_IsBase(bool value) const { qquickpainteditem_textureprovider_isbase = value; }
    inline void setQQuickPaintedItem_UpdatePaintNode_IsBase(bool value) const { qquickpainteditem_updatepaintnode_isbase = value; }
    inline void setQQuickPaintedItem_ReleaseResources_IsBase(bool value) const { qquickpainteditem_releaseresources_isbase = value; }
    inline void setQQuickPaintedItem_ItemChange_IsBase(bool value) const { qquickpainteditem_itemchange_isbase = value; }
    inline void setQQuickPaintedItem_BoundingRect_IsBase(bool value) const { qquickpainteditem_boundingrect_isbase = value; }
    inline void setQQuickPaintedItem_ClipRect_IsBase(bool value) const { qquickpainteditem_cliprect_isbase = value; }
    inline void setQQuickPaintedItem_Contains_IsBase(bool value) const { qquickpainteditem_contains_isbase = value; }
    inline void setQQuickPaintedItem_InputMethodQuery_IsBase(bool value) const { qquickpainteditem_inputmethodquery_isbase = value; }
    inline void setQQuickPaintedItem_Event_IsBase(bool value) const { qquickpainteditem_event_isbase = value; }
    inline void setQQuickPaintedItem_GeometryChange_IsBase(bool value) const { qquickpainteditem_geometrychange_isbase = value; }
    inline void setQQuickPaintedItem_ClassBegin_IsBase(bool value) const { qquickpainteditem_classbegin_isbase = value; }
    inline void setQQuickPaintedItem_ComponentComplete_IsBase(bool value) const { qquickpainteditem_componentcomplete_isbase = value; }
    inline void setQQuickPaintedItem_KeyPressEvent_IsBase(bool value) const { qquickpainteditem_keypressevent_isbase = value; }
    inline void setQQuickPaintedItem_KeyReleaseEvent_IsBase(bool value) const { qquickpainteditem_keyreleaseevent_isbase = value; }
    inline void setQQuickPaintedItem_InputMethodEvent_IsBase(bool value) const { qquickpainteditem_inputmethodevent_isbase = value; }
    inline void setQQuickPaintedItem_FocusInEvent_IsBase(bool value) const { qquickpainteditem_focusinevent_isbase = value; }
    inline void setQQuickPaintedItem_FocusOutEvent_IsBase(bool value) const { qquickpainteditem_focusoutevent_isbase = value; }
    inline void setQQuickPaintedItem_MousePressEvent_IsBase(bool value) const { qquickpainteditem_mousepressevent_isbase = value; }
    inline void setQQuickPaintedItem_MouseMoveEvent_IsBase(bool value) const { qquickpainteditem_mousemoveevent_isbase = value; }
    inline void setQQuickPaintedItem_MouseReleaseEvent_IsBase(bool value) const { qquickpainteditem_mousereleaseevent_isbase = value; }
    inline void setQQuickPaintedItem_MouseDoubleClickEvent_IsBase(bool value) const { qquickpainteditem_mousedoubleclickevent_isbase = value; }
    inline void setQQuickPaintedItem_MouseUngrabEvent_IsBase(bool value) const { qquickpainteditem_mouseungrabevent_isbase = value; }
    inline void setQQuickPaintedItem_TouchUngrabEvent_IsBase(bool value) const { qquickpainteditem_touchungrabevent_isbase = value; }
    inline void setQQuickPaintedItem_WheelEvent_IsBase(bool value) const { qquickpainteditem_wheelevent_isbase = value; }
    inline void setQQuickPaintedItem_TouchEvent_IsBase(bool value) const { qquickpainteditem_touchevent_isbase = value; }
    inline void setQQuickPaintedItem_HoverEnterEvent_IsBase(bool value) const { qquickpainteditem_hoverenterevent_isbase = value; }
    inline void setQQuickPaintedItem_HoverMoveEvent_IsBase(bool value) const { qquickpainteditem_hovermoveevent_isbase = value; }
    inline void setQQuickPaintedItem_HoverLeaveEvent_IsBase(bool value) const { qquickpainteditem_hoverleaveevent_isbase = value; }
    inline void setQQuickPaintedItem_DragEnterEvent_IsBase(bool value) const { qquickpainteditem_dragenterevent_isbase = value; }
    inline void setQQuickPaintedItem_DragMoveEvent_IsBase(bool value) const { qquickpainteditem_dragmoveevent_isbase = value; }
    inline void setQQuickPaintedItem_DragLeaveEvent_IsBase(bool value) const { qquickpainteditem_dragleaveevent_isbase = value; }
    inline void setQQuickPaintedItem_DropEvent_IsBase(bool value) const { qquickpainteditem_dropevent_isbase = value; }
    inline void setQQuickPaintedItem_ChildMouseEventFilter_IsBase(bool value) const { qquickpainteditem_childmouseeventfilter_isbase = value; }
    inline void setQQuickPaintedItem_UpdatePolish_IsBase(bool value) const { qquickpainteditem_updatepolish_isbase = value; }
    inline void setQQuickPaintedItem_EventFilter_IsBase(bool value) const { qquickpainteditem_eventfilter_isbase = value; }
    inline void setQQuickPaintedItem_TimerEvent_IsBase(bool value) const { qquickpainteditem_timerevent_isbase = value; }
    inline void setQQuickPaintedItem_ChildEvent_IsBase(bool value) const { qquickpainteditem_childevent_isbase = value; }
    inline void setQQuickPaintedItem_CustomEvent_IsBase(bool value) const { qquickpainteditem_customevent_isbase = value; }
    inline void setQQuickPaintedItem_ConnectNotify_IsBase(bool value) const { qquickpainteditem_connectnotify_isbase = value; }
    inline void setQQuickPaintedItem_DisconnectNotify_IsBase(bool value) const { qquickpainteditem_disconnectnotify_isbase = value; }
    inline void setQQuickPaintedItem_IsComponentComplete_IsBase(bool value) const { qquickpainteditem_iscomponentcomplete_isbase = value; }
    inline void setQQuickPaintedItem_UpdateInputMethod_IsBase(bool value) const { qquickpainteditem_updateinputmethod_isbase = value; }
    inline void setQQuickPaintedItem_WidthValid_IsBase(bool value) const { qquickpainteditem_widthvalid_isbase = value; }
    inline void setQQuickPaintedItem_HeightValid_IsBase(bool value) const { qquickpainteditem_heightvalid_isbase = value; }
    inline void setQQuickPaintedItem_SetImplicitSize_IsBase(bool value) const { qquickpainteditem_setimplicitsize_isbase = value; }
    inline void setQQuickPaintedItem_Sender_IsBase(bool value) const { qquickpainteditem_sender_isbase = value; }
    inline void setQQuickPaintedItem_SenderSignalIndex_IsBase(bool value) const { qquickpainteditem_sendersignalindex_isbase = value; }
    inline void setQQuickPaintedItem_Receivers_IsBase(bool value) const { qquickpainteditem_receivers_isbase = value; }
    inline void setQQuickPaintedItem_IsSignalConnected_IsBase(bool value) const { qquickpainteditem_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickpainteditem_metaobject_isbase) {
            qquickpainteditem_metaobject_isbase = false;
            return QQuickPaintedItem::metaObject();
        }
        auto metaobject_cb = qquickpainteditem_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickPaintedItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickpainteditem_metacast_isbase) {
            qquickpainteditem_metacast_isbase = false;
            return QQuickPaintedItem::qt_metacast(param1);
        }
        auto metacast_cb = qquickpainteditem_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickPaintedItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickpainteditem_metacall_isbase) {
            qquickpainteditem_metacall_isbase = false;
            return QQuickPaintedItem::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickpainteditem_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickPaintedItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter) override {
        auto paint_cb = qquickpainteditem_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            paint_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickpainteditem_istextureprovider_isbase) {
            qquickpainteditem_istextureprovider_isbase = false;
            return QQuickPaintedItem::isTextureProvider();
        }
        auto istextureprovider_cb = qquickpainteditem_istextureprovider_callback;
        if (istextureprovider_cb) {
            bool callback_ret = istextureprovider_cb();
            return callback_ret;
        }
        return QQuickPaintedItem::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickpainteditem_textureprovider_isbase) {
            qquickpainteditem_textureprovider_isbase = false;
            return QQuickPaintedItem::textureProvider();
        }
        auto textureprovider_cb = qquickpainteditem_textureprovider_callback;
        if (textureprovider_cb) {
            QSGTextureProvider* callback_ret = textureprovider_cb();
            return callback_ret;
        }
        return QQuickPaintedItem::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickpainteditem_updatepaintnode_isbase) {
            qquickpainteditem_updatepaintnode_isbase = false;
            return QQuickPaintedItem::updatePaintNode(param1, param2);
        }
        auto updatepaintnode_cb = qquickpainteditem_updatepaintnode_callback;
        if (updatepaintnode_cb) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = updatepaintnode_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickPaintedItem::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickpainteditem_releaseresources_isbase) {
            qquickpainteditem_releaseresources_isbase = false;
            QQuickPaintedItem::releaseResources();
            return;
        }
        auto releaseresources_cb = qquickpainteditem_releaseresources_callback;
        if (releaseresources_cb) {
            releaseresources_cb();
            return;
        }
        QQuickPaintedItem::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickpainteditem_itemchange_isbase) {
            qquickpainteditem_itemchange_isbase = false;
            QQuickPaintedItem::itemChange(param1, param2);
            return;
        }
        auto itemchange_cb = qquickpainteditem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            itemchange_cb(this, cbval1, cbval2);
            return;
        }
        QQuickPaintedItem::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickpainteditem_boundingrect_isbase) {
            qquickpainteditem_boundingrect_isbase = false;
            return QQuickPaintedItem::boundingRect();
        }
        auto boundingrect_cb = qquickpainteditem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickPaintedItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickpainteditem_cliprect_isbase) {
            qquickpainteditem_cliprect_isbase = false;
            return QQuickPaintedItem::clipRect();
        }
        auto cliprect_cb = qquickpainteditem_cliprect_callback;
        if (cliprect_cb) {
            QRectF* callback_ret = cliprect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickPaintedItem::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickpainteditem_contains_isbase) {
            qquickpainteditem_contains_isbase = false;
            return QQuickPaintedItem::contains(point);
        }
        auto contains_cb = qquickpainteditem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickPaintedItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickpainteditem_inputmethodquery_isbase) {
            qquickpainteditem_inputmethodquery_isbase = false;
            return QQuickPaintedItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qquickpainteditem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickPaintedItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickpainteditem_event_isbase) {
            qquickpainteditem_event_isbase = false;
            return QQuickPaintedItem::event(param1);
        }
        auto event_cb = qquickpainteditem_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickPaintedItem::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickpainteditem_geometrychange_isbase) {
            qquickpainteditem_geometrychange_isbase = false;
            QQuickPaintedItem::geometryChange(newGeometry, oldGeometry);
            return;
        }
        auto geometrychange_cb = qquickpainteditem_geometrychange_callback;
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
        QQuickPaintedItem::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickpainteditem_classbegin_isbase) {
            qquickpainteditem_classbegin_isbase = false;
            QQuickPaintedItem::classBegin();
            return;
        }
        auto classbegin_cb = qquickpainteditem_classbegin_callback;
        if (classbegin_cb) {
            classbegin_cb();
            return;
        }
        QQuickPaintedItem::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickpainteditem_componentcomplete_isbase) {
            qquickpainteditem_componentcomplete_isbase = false;
            QQuickPaintedItem::componentComplete();
            return;
        }
        auto componentcomplete_cb = qquickpainteditem_componentcomplete_callback;
        if (componentcomplete_cb) {
            componentcomplete_cb();
            return;
        }
        QQuickPaintedItem::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickpainteditem_keypressevent_isbase) {
            qquickpainteditem_keypressevent_isbase = false;
            QQuickPaintedItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qquickpainteditem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickpainteditem_keyreleaseevent_isbase) {
            qquickpainteditem_keyreleaseevent_isbase = false;
            QQuickPaintedItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qquickpainteditem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickpainteditem_inputmethodevent_isbase) {
            qquickpainteditem_inputmethodevent_isbase = false;
            QQuickPaintedItem::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qquickpainteditem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickpainteditem_focusinevent_isbase) {
            qquickpainteditem_focusinevent_isbase = false;
            QQuickPaintedItem::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qquickpainteditem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusinevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickpainteditem_focusoutevent_isbase) {
            qquickpainteditem_focusoutevent_isbase = false;
            QQuickPaintedItem::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qquickpainteditem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusoutevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousepressevent_isbase) {
            qquickpainteditem_mousepressevent_isbase = false;
            QQuickPaintedItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qquickpainteditem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousemoveevent_isbase) {
            qquickpainteditem_mousemoveevent_isbase = false;
            QQuickPaintedItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qquickpainteditem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousereleaseevent_isbase) {
            qquickpainteditem_mousereleaseevent_isbase = false;
            QQuickPaintedItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qquickpainteditem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickpainteditem_mousedoubleclickevent_isbase) {
            qquickpainteditem_mousedoubleclickevent_isbase = false;
            QQuickPaintedItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qquickpainteditem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickpainteditem_mouseungrabevent_isbase) {
            qquickpainteditem_mouseungrabevent_isbase = false;
            QQuickPaintedItem::mouseUngrabEvent();
            return;
        }
        auto mouseungrabevent_cb = qquickpainteditem_mouseungrabevent_callback;
        if (mouseungrabevent_cb) {
            mouseungrabevent_cb();
            return;
        }
        QQuickPaintedItem::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickpainteditem_touchungrabevent_isbase) {
            qquickpainteditem_touchungrabevent_isbase = false;
            QQuickPaintedItem::touchUngrabEvent();
            return;
        }
        auto touchungrabevent_cb = qquickpainteditem_touchungrabevent_callback;
        if (touchungrabevent_cb) {
            touchungrabevent_cb();
            return;
        }
        QQuickPaintedItem::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickpainteditem_wheelevent_isbase) {
            qquickpainteditem_wheelevent_isbase = false;
            QQuickPaintedItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qquickpainteditem_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickpainteditem_touchevent_isbase) {
            qquickpainteditem_touchevent_isbase = false;
            QQuickPaintedItem::touchEvent(event);
            return;
        }
        auto touchevent_cb = qquickpainteditem_touchevent_callback;
        if (touchevent_cb) {
            QTouchEvent* cbval1 = event;
            touchevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickpainteditem_hoverenterevent_isbase) {
            qquickpainteditem_hoverenterevent_isbase = false;
            QQuickPaintedItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qquickpainteditem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverenterevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickpainteditem_hovermoveevent_isbase) {
            qquickpainteditem_hovermoveevent_isbase = false;
            QQuickPaintedItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qquickpainteditem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QHoverEvent* cbval1 = event;
            hovermoveevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickpainteditem_hoverleaveevent_isbase) {
            qquickpainteditem_hoverleaveevent_isbase = false;
            QQuickPaintedItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qquickpainteditem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickpainteditem_dragenterevent_isbase) {
            qquickpainteditem_dragenterevent_isbase = false;
            QQuickPaintedItem::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = qquickpainteditem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;
            dragenterevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickpainteditem_dragmoveevent_isbase) {
            qquickpainteditem_dragmoveevent_isbase = false;
            QQuickPaintedItem::dragMoveEvent(param1);
            return;
        }
        auto dragmoveevent_cb = qquickpainteditem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = param1;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickpainteditem_dragleaveevent_isbase) {
            qquickpainteditem_dragleaveevent_isbase = false;
            QQuickPaintedItem::dragLeaveEvent(param1);
            return;
        }
        auto dragleaveevent_cb = qquickpainteditem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = param1;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickpainteditem_dropevent_isbase) {
            qquickpainteditem_dropevent_isbase = false;
            QQuickPaintedItem::dropEvent(param1);
            return;
        }
        auto dropevent_cb = qquickpainteditem_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;
            dropevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickpainteditem_childmouseeventfilter_isbase) {
            qquickpainteditem_childmouseeventfilter_isbase = false;
            return QQuickPaintedItem::childMouseEventFilter(param1, param2);
        }
        auto childmouseeventfilter_cb = qquickpainteditem_childmouseeventfilter_callback;
        if (childmouseeventfilter_cb) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = childmouseeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickPaintedItem::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickpainteditem_updatepolish_isbase) {
            qquickpainteditem_updatepolish_isbase = false;
            QQuickPaintedItem::updatePolish();
            return;
        }
        auto updatepolish_cb = qquickpainteditem_updatepolish_callback;
        if (updatepolish_cb) {
            updatepolish_cb();
            return;
        }
        QQuickPaintedItem::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickpainteditem_eventfilter_isbase) {
            qquickpainteditem_eventfilter_isbase = false;
            return QQuickPaintedItem::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickpainteditem_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickPaintedItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickpainteditem_timerevent_isbase) {
            qquickpainteditem_timerevent_isbase = false;
            QQuickPaintedItem::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickpainteditem_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickpainteditem_childevent_isbase) {
            qquickpainteditem_childevent_isbase = false;
            QQuickPaintedItem::childEvent(event);
            return;
        }
        auto childevent_cb = qquickpainteditem_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickpainteditem_customevent_isbase) {
            qquickpainteditem_customevent_isbase = false;
            QQuickPaintedItem::customEvent(event);
            return;
        }
        auto customevent_cb = qquickpainteditem_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickpainteditem_connectnotify_isbase) {
            qquickpainteditem_connectnotify_isbase = false;
            QQuickPaintedItem::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickpainteditem_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickpainteditem_disconnectnotify_isbase) {
            qquickpainteditem_disconnectnotify_isbase = false;
            QQuickPaintedItem::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickpainteditem_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickPaintedItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isComponentComplete() const {
        if (qquickpainteditem_iscomponentcomplete_isbase) {
            qquickpainteditem_iscomponentcomplete_isbase = false;
            return QQuickPaintedItem::isComponentComplete();
        }
        auto iscomponentcomplete_cb = qquickpainteditem_iscomponentcomplete_callback;
        if (iscomponentcomplete_cb) {
            bool callback_ret = iscomponentcomplete_cb();
            return callback_ret;
        }
        return QQuickPaintedItem::isComponentComplete();
    }

    // Virtual method for C ABI access and custom callback
    void updateInputMethod() {
        if (qquickpainteditem_updateinputmethod_isbase) {
            qquickpainteditem_updateinputmethod_isbase = false;
            QQuickPaintedItem::updateInputMethod();
            return;
        }
        auto updateinputmethod_cb = qquickpainteditem_updateinputmethod_callback;
        if (updateinputmethod_cb) {
            updateinputmethod_cb();
            return;
        }
        QQuickPaintedItem::updateInputMethod();
    }

    // Virtual method for C ABI access and custom callback
    bool widthValid() const {
        if (qquickpainteditem_widthvalid_isbase) {
            qquickpainteditem_widthvalid_isbase = false;
            return QQuickPaintedItem::widthValid();
        }
        auto widthvalid_cb = qquickpainteditem_widthvalid_callback;
        if (widthvalid_cb) {
            bool callback_ret = widthvalid_cb();
            return callback_ret;
        }
        return QQuickPaintedItem::widthValid();
    }

    // Virtual method for C ABI access and custom callback
    bool heightValid() const {
        if (qquickpainteditem_heightvalid_isbase) {
            qquickpainteditem_heightvalid_isbase = false;
            return QQuickPaintedItem::heightValid();
        }
        auto heightvalid_cb = qquickpainteditem_heightvalid_callback;
        if (heightvalid_cb) {
            bool callback_ret = heightvalid_cb();
            return callback_ret;
        }
        return QQuickPaintedItem::heightValid();
    }

    // Virtual method for C ABI access and custom callback
    void setImplicitSize(qreal param1, qreal param2) {
        if (qquickpainteditem_setimplicitsize_isbase) {
            qquickpainteditem_setimplicitsize_isbase = false;
            QQuickPaintedItem::setImplicitSize(param1, param2);
            return;
        }
        auto setimplicitsize_cb = qquickpainteditem_setimplicitsize_callback;
        if (setimplicitsize_cb) {
            double cbval1 = static_cast<double>(param1);
            double cbval2 = static_cast<double>(param2);
            setimplicitsize_cb(this, cbval1, cbval2);
            return;
        }
        QQuickPaintedItem::setImplicitSize(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickpainteditem_sender_isbase) {
            qquickpainteditem_sender_isbase = false;
            return QQuickPaintedItem::sender();
        }
        auto sender_cb = qquickpainteditem_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickPaintedItem::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickpainteditem_sendersignalindex_isbase) {
            qquickpainteditem_sendersignalindex_isbase = false;
            return QQuickPaintedItem::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickpainteditem_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickPaintedItem::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickpainteditem_receivers_isbase) {
            qquickpainteditem_receivers_isbase = false;
            return QQuickPaintedItem::receivers(signal);
        }
        auto receivers_cb = qquickpainteditem_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickPaintedItem::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickpainteditem_issignalconnected_isbase) {
            qquickpainteditem_issignalconnected_isbase = false;
            return QQuickPaintedItem::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickpainteditem_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickPaintedItem::isSignalConnected(signal);
    }

    // Friend functions
    friend QSGNode* QQuickPaintedItem_UpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend QSGNode* QQuickPaintedItem_SuperUpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend void QQuickPaintedItem_ReleaseResources(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperReleaseResources(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_ItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickPaintedItem_SuperItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend bool QQuickPaintedItem_Event(QQuickPaintedItem* self, QEvent* param1);
    friend bool QQuickPaintedItem_SuperEvent(QQuickPaintedItem* self, QEvent* param1);
    friend void QQuickPaintedItem_GeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickPaintedItem_SuperGeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickPaintedItem_ClassBegin(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperClassBegin(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_ComponentComplete(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperComponentComplete(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_KeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event);
    friend void QQuickPaintedItem_SuperKeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event);
    friend void QQuickPaintedItem_KeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event);
    friend void QQuickPaintedItem_SuperKeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event);
    friend void QQuickPaintedItem_InputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1);
    friend void QQuickPaintedItem_SuperInputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1);
    friend void QQuickPaintedItem_FocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1);
    friend void QQuickPaintedItem_SuperFocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1);
    friend void QQuickPaintedItem_FocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1);
    friend void QQuickPaintedItem_SuperFocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1);
    friend void QQuickPaintedItem_MousePressEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMousePressEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_MouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_MouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_MouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_SuperMouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event);
    friend void QQuickPaintedItem_MouseUngrabEvent(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperMouseUngrabEvent(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_TouchUngrabEvent(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperTouchUngrabEvent(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_WheelEvent(QQuickPaintedItem* self, QWheelEvent* event);
    friend void QQuickPaintedItem_SuperWheelEvent(QQuickPaintedItem* self, QWheelEvent* event);
    friend void QQuickPaintedItem_TouchEvent(QQuickPaintedItem* self, QTouchEvent* event);
    friend void QQuickPaintedItem_SuperTouchEvent(QQuickPaintedItem* self, QTouchEvent* event);
    friend void QQuickPaintedItem_HoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_SuperHoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_HoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_SuperHoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_HoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_SuperHoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event);
    friend void QQuickPaintedItem_DragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1);
    friend void QQuickPaintedItem_SuperDragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1);
    friend void QQuickPaintedItem_DragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1);
    friend void QQuickPaintedItem_SuperDragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1);
    friend void QQuickPaintedItem_DragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1);
    friend void QQuickPaintedItem_SuperDragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1);
    friend void QQuickPaintedItem_DropEvent(QQuickPaintedItem* self, QDropEvent* param1);
    friend void QQuickPaintedItem_SuperDropEvent(QQuickPaintedItem* self, QDropEvent* param1);
    friend bool QQuickPaintedItem_ChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2);
    friend bool QQuickPaintedItem_SuperChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2);
    friend void QQuickPaintedItem_UpdatePolish(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperUpdatePolish(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_TimerEvent(QQuickPaintedItem* self, QTimerEvent* event);
    friend void QQuickPaintedItem_SuperTimerEvent(QQuickPaintedItem* self, QTimerEvent* event);
    friend void QQuickPaintedItem_ChildEvent(QQuickPaintedItem* self, QChildEvent* event);
    friend void QQuickPaintedItem_SuperChildEvent(QQuickPaintedItem* self, QChildEvent* event);
    friend void QQuickPaintedItem_CustomEvent(QQuickPaintedItem* self, QEvent* event);
    friend void QQuickPaintedItem_SuperCustomEvent(QQuickPaintedItem* self, QEvent* event);
    friend void QQuickPaintedItem_ConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
    friend void QQuickPaintedItem_SuperConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
    friend void QQuickPaintedItem_DisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
    friend void QQuickPaintedItem_SuperDisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal);
    friend bool QQuickPaintedItem_IsComponentComplete(const QQuickPaintedItem* self);
    friend bool QQuickPaintedItem_SuperIsComponentComplete(const QQuickPaintedItem* self);
    friend void QQuickPaintedItem_UpdateInputMethod(QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SuperUpdateInputMethod(QQuickPaintedItem* self);
    friend bool QQuickPaintedItem_WidthValid(const QQuickPaintedItem* self);
    friend bool QQuickPaintedItem_SuperWidthValid(const QQuickPaintedItem* self);
    friend bool QQuickPaintedItem_HeightValid(const QQuickPaintedItem* self);
    friend bool QQuickPaintedItem_SuperHeightValid(const QQuickPaintedItem* self);
    friend void QQuickPaintedItem_SetImplicitSize(QQuickPaintedItem* self, double param1, double param2);
    friend void QQuickPaintedItem_SuperSetImplicitSize(QQuickPaintedItem* self, double param1, double param2);
    friend QObject* QQuickPaintedItem_Sender(const QQuickPaintedItem* self);
    friend QObject* QQuickPaintedItem_SuperSender(const QQuickPaintedItem* self);
    friend int QQuickPaintedItem_SenderSignalIndex(const QQuickPaintedItem* self);
    friend int QQuickPaintedItem_SuperSenderSignalIndex(const QQuickPaintedItem* self);
    friend int QQuickPaintedItem_Receivers(const QQuickPaintedItem* self, const char* signal);
    friend int QQuickPaintedItem_SuperReceivers(const QQuickPaintedItem* self, const char* signal);
    friend bool QQuickPaintedItem_IsSignalConnected(const QQuickPaintedItem* self, const QMetaMethod* signal);
    friend bool QQuickPaintedItem_SuperIsSignalConnected(const QQuickPaintedItem* self, const QMetaMethod* signal);
};

#endif
