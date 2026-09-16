#pragma once
#ifndef QUICK_LIBQQUICKRHIITEM_HXX
#define QUICK_LIBQQUICKRHIITEM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickRhiItem so that we can call protected methods
class VirtualQQuickRhiItem : public QQuickRhiItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQQuickRhiItem = true;

    // Virtual class public types (including callbacks)
    using QQuickRhiItem_MetaObject_Callback = QMetaObject* (*)();
    using QQuickRhiItem_Metacast_Callback = void* (*)(QQuickRhiItem*, const char*);
    using QQuickRhiItem_Metacall_Callback = int (*)(QQuickRhiItem*, int, int, void**);
    using QQuickRhiItem_IsTextureProvider_Callback = bool (*)();
    using QQuickRhiItem_TextureProvider_Callback = QSGTextureProvider* (*)();
    using QQuickRhiItem_CreateRenderer_Callback = QQuickRhiItemRenderer* (*)();
    using QQuickRhiItem_UpdatePaintNode_Callback = QSGNode* (*)(QQuickRhiItem*, QSGNode*, QQuickItem__UpdatePaintNodeData*);
    using QQuickRhiItem_Event_Callback = bool (*)(QQuickRhiItem*, QEvent*);
    using QQuickRhiItem_GeometryChange_Callback = void (*)(QQuickRhiItem*, QRectF*, QRectF*);
    using QQuickRhiItem_ReleaseResources_Callback = void (*)();
    using QQuickRhiItem_BoundingRect_Callback = QRectF* (*)();
    using QQuickRhiItem_ClipRect_Callback = QRectF* (*)();
    using QQuickRhiItem_Contains_Callback = bool (*)(const QQuickRhiItem*, QPointF*);
    using QQuickRhiItem_InputMethodQuery_Callback = QVariant* (*)(const QQuickRhiItem*, int);
    using QQuickRhiItem_ItemChange_Callback = void (*)(QQuickRhiItem*, int, QQuickItem__ItemChangeData*);
    using QQuickRhiItem_ClassBegin_Callback = void (*)();
    using QQuickRhiItem_ComponentComplete_Callback = void (*)();
    using QQuickRhiItem_KeyPressEvent_Callback = void (*)(QQuickRhiItem*, QKeyEvent*);
    using QQuickRhiItem_KeyReleaseEvent_Callback = void (*)(QQuickRhiItem*, QKeyEvent*);
    using QQuickRhiItem_InputMethodEvent_Callback = void (*)(QQuickRhiItem*, QInputMethodEvent*);
    using QQuickRhiItem_FocusInEvent_Callback = void (*)(QQuickRhiItem*, QFocusEvent*);
    using QQuickRhiItem_FocusOutEvent_Callback = void (*)(QQuickRhiItem*, QFocusEvent*);
    using QQuickRhiItem_MousePressEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseMoveEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseReleaseEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseDoubleClickEvent_Callback = void (*)(QQuickRhiItem*, QMouseEvent*);
    using QQuickRhiItem_MouseUngrabEvent_Callback = void (*)();
    using QQuickRhiItem_TouchUngrabEvent_Callback = void (*)();
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
    using QQuickRhiItem_UpdatePolish_Callback = void (*)();
    using QQuickRhiItem_EventFilter_Callback = bool (*)(QQuickRhiItem*, QObject*, QEvent*);
    using QQuickRhiItem_TimerEvent_Callback = void (*)(QQuickRhiItem*, QTimerEvent*);
    using QQuickRhiItem_ChildEvent_Callback = void (*)(QQuickRhiItem*, QChildEvent*);
    using QQuickRhiItem_CustomEvent_Callback = void (*)(QQuickRhiItem*, QEvent*);
    using QQuickRhiItem_ConnectNotify_Callback = void (*)(QQuickRhiItem*, QMetaMethod*);
    using QQuickRhiItem_DisconnectNotify_Callback = void (*)(QQuickRhiItem*, QMetaMethod*);
    using QQuickRhiItem_IsAutoRenderTargetEnabled_Callback = bool (*)();
    using QQuickRhiItem_SetAutoRenderTarget_Callback = void (*)(QQuickRhiItem*, bool);
    using QQuickRhiItem_IsComponentComplete_Callback = bool (*)();
    using QQuickRhiItem_UpdateInputMethod_Callback = void (*)();
    using QQuickRhiItem_WidthValid_Callback = bool (*)();
    using QQuickRhiItem_HeightValid_Callback = bool (*)();
    using QQuickRhiItem_SetImplicitSize_Callback = void (*)(QQuickRhiItem*, double, double);
    using QQuickRhiItem_Sender_Callback = QObject* (*)();
    using QQuickRhiItem_SenderSignalIndex_Callback = int (*)();
    using QQuickRhiItem_Receivers_Callback = int (*)(const QQuickRhiItem*, const char*);
    using QQuickRhiItem_IsSignalConnected_Callback = bool (*)(const QQuickRhiItem*, QMetaMethod*);

  protected:
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
    QQuickRhiItem_IsAutoRenderTargetEnabled_Callback qquickrhiitem_isautorendertargetenabled_callback = nullptr;
    QQuickRhiItem_SetAutoRenderTarget_Callback qquickrhiitem_setautorendertarget_callback = nullptr;
    QQuickRhiItem_IsComponentComplete_Callback qquickrhiitem_iscomponentcomplete_callback = nullptr;
    QQuickRhiItem_UpdateInputMethod_Callback qquickrhiitem_updateinputmethod_callback = nullptr;
    QQuickRhiItem_WidthValid_Callback qquickrhiitem_widthvalid_callback = nullptr;
    QQuickRhiItem_HeightValid_Callback qquickrhiitem_heightvalid_callback = nullptr;
    QQuickRhiItem_SetImplicitSize_Callback qquickrhiitem_setimplicitsize_callback = nullptr;
    QQuickRhiItem_Sender_Callback qquickrhiitem_sender_callback = nullptr;
    QQuickRhiItem_SenderSignalIndex_Callback qquickrhiitem_sendersignalindex_callback = nullptr;
    QQuickRhiItem_Receivers_Callback qquickrhiitem_receivers_callback = nullptr;
    QQuickRhiItem_IsSignalConnected_Callback qquickrhiitem_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qquickrhiitem_metaobject_isbase = false;
    mutable bool qquickrhiitem_metacast_isbase = false;
    mutable bool qquickrhiitem_metacall_isbase = false;
    mutable bool qquickrhiitem_istextureprovider_isbase = false;
    mutable bool qquickrhiitem_textureprovider_isbase = false;
    mutable bool qquickrhiitem_createrenderer_isbase = false;
    mutable bool qquickrhiitem_updatepaintnode_isbase = false;
    mutable bool qquickrhiitem_event_isbase = false;
    mutable bool qquickrhiitem_geometrychange_isbase = false;
    mutable bool qquickrhiitem_releaseresources_isbase = false;
    mutable bool qquickrhiitem_boundingrect_isbase = false;
    mutable bool qquickrhiitem_cliprect_isbase = false;
    mutable bool qquickrhiitem_contains_isbase = false;
    mutable bool qquickrhiitem_inputmethodquery_isbase = false;
    mutable bool qquickrhiitem_itemchange_isbase = false;
    mutable bool qquickrhiitem_classbegin_isbase = false;
    mutable bool qquickrhiitem_componentcomplete_isbase = false;
    mutable bool qquickrhiitem_keypressevent_isbase = false;
    mutable bool qquickrhiitem_keyreleaseevent_isbase = false;
    mutable bool qquickrhiitem_inputmethodevent_isbase = false;
    mutable bool qquickrhiitem_focusinevent_isbase = false;
    mutable bool qquickrhiitem_focusoutevent_isbase = false;
    mutable bool qquickrhiitem_mousepressevent_isbase = false;
    mutable bool qquickrhiitem_mousemoveevent_isbase = false;
    mutable bool qquickrhiitem_mousereleaseevent_isbase = false;
    mutable bool qquickrhiitem_mousedoubleclickevent_isbase = false;
    mutable bool qquickrhiitem_mouseungrabevent_isbase = false;
    mutable bool qquickrhiitem_touchungrabevent_isbase = false;
    mutable bool qquickrhiitem_wheelevent_isbase = false;
    mutable bool qquickrhiitem_touchevent_isbase = false;
    mutable bool qquickrhiitem_hoverenterevent_isbase = false;
    mutable bool qquickrhiitem_hovermoveevent_isbase = false;
    mutable bool qquickrhiitem_hoverleaveevent_isbase = false;
    mutable bool qquickrhiitem_dragenterevent_isbase = false;
    mutable bool qquickrhiitem_dragmoveevent_isbase = false;
    mutable bool qquickrhiitem_dragleaveevent_isbase = false;
    mutable bool qquickrhiitem_dropevent_isbase = false;
    mutable bool qquickrhiitem_childmouseeventfilter_isbase = false;
    mutable bool qquickrhiitem_updatepolish_isbase = false;
    mutable bool qquickrhiitem_eventfilter_isbase = false;
    mutable bool qquickrhiitem_timerevent_isbase = false;
    mutable bool qquickrhiitem_childevent_isbase = false;
    mutable bool qquickrhiitem_customevent_isbase = false;
    mutable bool qquickrhiitem_connectnotify_isbase = false;
    mutable bool qquickrhiitem_disconnectnotify_isbase = false;
    mutable bool qquickrhiitem_isautorendertargetenabled_isbase = false;
    mutable bool qquickrhiitem_setautorendertarget_isbase = false;
    mutable bool qquickrhiitem_iscomponentcomplete_isbase = false;
    mutable bool qquickrhiitem_updateinputmethod_isbase = false;
    mutable bool qquickrhiitem_widthvalid_isbase = false;
    mutable bool qquickrhiitem_heightvalid_isbase = false;
    mutable bool qquickrhiitem_setimplicitsize_isbase = false;
    mutable bool qquickrhiitem_sender_isbase = false;
    mutable bool qquickrhiitem_sendersignalindex_isbase = false;
    mutable bool qquickrhiitem_receivers_isbase = false;
    mutable bool qquickrhiitem_issignalconnected_isbase = false;

  public:
    VirtualQQuickRhiItem() : QQuickRhiItem() {};
    VirtualQQuickRhiItem(QQuickItem* parent) : QQuickRhiItem(parent) {};

    // Callback setters
    inline void setQQuickRhiItem_MetaObject_Callback(QQuickRhiItem_MetaObject_Callback cb) { qquickrhiitem_metaobject_callback = cb; }
    inline void setQQuickRhiItem_Metacast_Callback(QQuickRhiItem_Metacast_Callback cb) { qquickrhiitem_metacast_callback = cb; }
    inline void setQQuickRhiItem_Metacall_Callback(QQuickRhiItem_Metacall_Callback cb) { qquickrhiitem_metacall_callback = cb; }
    inline void setQQuickRhiItem_IsTextureProvider_Callback(QQuickRhiItem_IsTextureProvider_Callback cb) { qquickrhiitem_istextureprovider_callback = cb; }
    inline void setQQuickRhiItem_TextureProvider_Callback(QQuickRhiItem_TextureProvider_Callback cb) { qquickrhiitem_textureprovider_callback = cb; }
    inline void setQQuickRhiItem_CreateRenderer_Callback(QQuickRhiItem_CreateRenderer_Callback cb) { qquickrhiitem_createrenderer_callback = cb; }
    inline void setQQuickRhiItem_UpdatePaintNode_Callback(QQuickRhiItem_UpdatePaintNode_Callback cb) { qquickrhiitem_updatepaintnode_callback = cb; }
    inline void setQQuickRhiItem_Event_Callback(QQuickRhiItem_Event_Callback cb) { qquickrhiitem_event_callback = cb; }
    inline void setQQuickRhiItem_GeometryChange_Callback(QQuickRhiItem_GeometryChange_Callback cb) { qquickrhiitem_geometrychange_callback = cb; }
    inline void setQQuickRhiItem_ReleaseResources_Callback(QQuickRhiItem_ReleaseResources_Callback cb) { qquickrhiitem_releaseresources_callback = cb; }
    inline void setQQuickRhiItem_BoundingRect_Callback(QQuickRhiItem_BoundingRect_Callback cb) { qquickrhiitem_boundingrect_callback = cb; }
    inline void setQQuickRhiItem_ClipRect_Callback(QQuickRhiItem_ClipRect_Callback cb) { qquickrhiitem_cliprect_callback = cb; }
    inline void setQQuickRhiItem_Contains_Callback(QQuickRhiItem_Contains_Callback cb) { qquickrhiitem_contains_callback = cb; }
    inline void setQQuickRhiItem_InputMethodQuery_Callback(QQuickRhiItem_InputMethodQuery_Callback cb) { qquickrhiitem_inputmethodquery_callback = cb; }
    inline void setQQuickRhiItem_ItemChange_Callback(QQuickRhiItem_ItemChange_Callback cb) { qquickrhiitem_itemchange_callback = cb; }
    inline void setQQuickRhiItem_ClassBegin_Callback(QQuickRhiItem_ClassBegin_Callback cb) { qquickrhiitem_classbegin_callback = cb; }
    inline void setQQuickRhiItem_ComponentComplete_Callback(QQuickRhiItem_ComponentComplete_Callback cb) { qquickrhiitem_componentcomplete_callback = cb; }
    inline void setQQuickRhiItem_KeyPressEvent_Callback(QQuickRhiItem_KeyPressEvent_Callback cb) { qquickrhiitem_keypressevent_callback = cb; }
    inline void setQQuickRhiItem_KeyReleaseEvent_Callback(QQuickRhiItem_KeyReleaseEvent_Callback cb) { qquickrhiitem_keyreleaseevent_callback = cb; }
    inline void setQQuickRhiItem_InputMethodEvent_Callback(QQuickRhiItem_InputMethodEvent_Callback cb) { qquickrhiitem_inputmethodevent_callback = cb; }
    inline void setQQuickRhiItem_FocusInEvent_Callback(QQuickRhiItem_FocusInEvent_Callback cb) { qquickrhiitem_focusinevent_callback = cb; }
    inline void setQQuickRhiItem_FocusOutEvent_Callback(QQuickRhiItem_FocusOutEvent_Callback cb) { qquickrhiitem_focusoutevent_callback = cb; }
    inline void setQQuickRhiItem_MousePressEvent_Callback(QQuickRhiItem_MousePressEvent_Callback cb) { qquickrhiitem_mousepressevent_callback = cb; }
    inline void setQQuickRhiItem_MouseMoveEvent_Callback(QQuickRhiItem_MouseMoveEvent_Callback cb) { qquickrhiitem_mousemoveevent_callback = cb; }
    inline void setQQuickRhiItem_MouseReleaseEvent_Callback(QQuickRhiItem_MouseReleaseEvent_Callback cb) { qquickrhiitem_mousereleaseevent_callback = cb; }
    inline void setQQuickRhiItem_MouseDoubleClickEvent_Callback(QQuickRhiItem_MouseDoubleClickEvent_Callback cb) { qquickrhiitem_mousedoubleclickevent_callback = cb; }
    inline void setQQuickRhiItem_MouseUngrabEvent_Callback(QQuickRhiItem_MouseUngrabEvent_Callback cb) { qquickrhiitem_mouseungrabevent_callback = cb; }
    inline void setQQuickRhiItem_TouchUngrabEvent_Callback(QQuickRhiItem_TouchUngrabEvent_Callback cb) { qquickrhiitem_touchungrabevent_callback = cb; }
    inline void setQQuickRhiItem_WheelEvent_Callback(QQuickRhiItem_WheelEvent_Callback cb) { qquickrhiitem_wheelevent_callback = cb; }
    inline void setQQuickRhiItem_TouchEvent_Callback(QQuickRhiItem_TouchEvent_Callback cb) { qquickrhiitem_touchevent_callback = cb; }
    inline void setQQuickRhiItem_HoverEnterEvent_Callback(QQuickRhiItem_HoverEnterEvent_Callback cb) { qquickrhiitem_hoverenterevent_callback = cb; }
    inline void setQQuickRhiItem_HoverMoveEvent_Callback(QQuickRhiItem_HoverMoveEvent_Callback cb) { qquickrhiitem_hovermoveevent_callback = cb; }
    inline void setQQuickRhiItem_HoverLeaveEvent_Callback(QQuickRhiItem_HoverLeaveEvent_Callback cb) { qquickrhiitem_hoverleaveevent_callback = cb; }
    inline void setQQuickRhiItem_DragEnterEvent_Callback(QQuickRhiItem_DragEnterEvent_Callback cb) { qquickrhiitem_dragenterevent_callback = cb; }
    inline void setQQuickRhiItem_DragMoveEvent_Callback(QQuickRhiItem_DragMoveEvent_Callback cb) { qquickrhiitem_dragmoveevent_callback = cb; }
    inline void setQQuickRhiItem_DragLeaveEvent_Callback(QQuickRhiItem_DragLeaveEvent_Callback cb) { qquickrhiitem_dragleaveevent_callback = cb; }
    inline void setQQuickRhiItem_DropEvent_Callback(QQuickRhiItem_DropEvent_Callback cb) { qquickrhiitem_dropevent_callback = cb; }
    inline void setQQuickRhiItem_ChildMouseEventFilter_Callback(QQuickRhiItem_ChildMouseEventFilter_Callback cb) { qquickrhiitem_childmouseeventfilter_callback = cb; }
    inline void setQQuickRhiItem_UpdatePolish_Callback(QQuickRhiItem_UpdatePolish_Callback cb) { qquickrhiitem_updatepolish_callback = cb; }
    inline void setQQuickRhiItem_EventFilter_Callback(QQuickRhiItem_EventFilter_Callback cb) { qquickrhiitem_eventfilter_callback = cb; }
    inline void setQQuickRhiItem_TimerEvent_Callback(QQuickRhiItem_TimerEvent_Callback cb) { qquickrhiitem_timerevent_callback = cb; }
    inline void setQQuickRhiItem_ChildEvent_Callback(QQuickRhiItem_ChildEvent_Callback cb) { qquickrhiitem_childevent_callback = cb; }
    inline void setQQuickRhiItem_CustomEvent_Callback(QQuickRhiItem_CustomEvent_Callback cb) { qquickrhiitem_customevent_callback = cb; }
    inline void setQQuickRhiItem_ConnectNotify_Callback(QQuickRhiItem_ConnectNotify_Callback cb) { qquickrhiitem_connectnotify_callback = cb; }
    inline void setQQuickRhiItem_DisconnectNotify_Callback(QQuickRhiItem_DisconnectNotify_Callback cb) { qquickrhiitem_disconnectnotify_callback = cb; }
    inline void setQQuickRhiItem_IsAutoRenderTargetEnabled_Callback(QQuickRhiItem_IsAutoRenderTargetEnabled_Callback cb) { qquickrhiitem_isautorendertargetenabled_callback = cb; }
    inline void setQQuickRhiItem_SetAutoRenderTarget_Callback(QQuickRhiItem_SetAutoRenderTarget_Callback cb) { qquickrhiitem_setautorendertarget_callback = cb; }
    inline void setQQuickRhiItem_IsComponentComplete_Callback(QQuickRhiItem_IsComponentComplete_Callback cb) { qquickrhiitem_iscomponentcomplete_callback = cb; }
    inline void setQQuickRhiItem_UpdateInputMethod_Callback(QQuickRhiItem_UpdateInputMethod_Callback cb) { qquickrhiitem_updateinputmethod_callback = cb; }
    inline void setQQuickRhiItem_WidthValid_Callback(QQuickRhiItem_WidthValid_Callback cb) { qquickrhiitem_widthvalid_callback = cb; }
    inline void setQQuickRhiItem_HeightValid_Callback(QQuickRhiItem_HeightValid_Callback cb) { qquickrhiitem_heightvalid_callback = cb; }
    inline void setQQuickRhiItem_SetImplicitSize_Callback(QQuickRhiItem_SetImplicitSize_Callback cb) { qquickrhiitem_setimplicitsize_callback = cb; }
    inline void setQQuickRhiItem_Sender_Callback(QQuickRhiItem_Sender_Callback cb) { qquickrhiitem_sender_callback = cb; }
    inline void setQQuickRhiItem_SenderSignalIndex_Callback(QQuickRhiItem_SenderSignalIndex_Callback cb) { qquickrhiitem_sendersignalindex_callback = cb; }
    inline void setQQuickRhiItem_Receivers_Callback(QQuickRhiItem_Receivers_Callback cb) { qquickrhiitem_receivers_callback = cb; }
    inline void setQQuickRhiItem_IsSignalConnected_Callback(QQuickRhiItem_IsSignalConnected_Callback cb) { qquickrhiitem_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQQuickRhiItem_MetaObject_IsBase(bool value) const { qquickrhiitem_metaobject_isbase = value; }
    inline void setQQuickRhiItem_Metacast_IsBase(bool value) const { qquickrhiitem_metacast_isbase = value; }
    inline void setQQuickRhiItem_Metacall_IsBase(bool value) const { qquickrhiitem_metacall_isbase = value; }
    inline void setQQuickRhiItem_IsTextureProvider_IsBase(bool value) const { qquickrhiitem_istextureprovider_isbase = value; }
    inline void setQQuickRhiItem_TextureProvider_IsBase(bool value) const { qquickrhiitem_textureprovider_isbase = value; }
    inline void setQQuickRhiItem_CreateRenderer_IsBase(bool value) const { qquickrhiitem_createrenderer_isbase = value; }
    inline void setQQuickRhiItem_UpdatePaintNode_IsBase(bool value) const { qquickrhiitem_updatepaintnode_isbase = value; }
    inline void setQQuickRhiItem_Event_IsBase(bool value) const { qquickrhiitem_event_isbase = value; }
    inline void setQQuickRhiItem_GeometryChange_IsBase(bool value) const { qquickrhiitem_geometrychange_isbase = value; }
    inline void setQQuickRhiItem_ReleaseResources_IsBase(bool value) const { qquickrhiitem_releaseresources_isbase = value; }
    inline void setQQuickRhiItem_BoundingRect_IsBase(bool value) const { qquickrhiitem_boundingrect_isbase = value; }
    inline void setQQuickRhiItem_ClipRect_IsBase(bool value) const { qquickrhiitem_cliprect_isbase = value; }
    inline void setQQuickRhiItem_Contains_IsBase(bool value) const { qquickrhiitem_contains_isbase = value; }
    inline void setQQuickRhiItem_InputMethodQuery_IsBase(bool value) const { qquickrhiitem_inputmethodquery_isbase = value; }
    inline void setQQuickRhiItem_ItemChange_IsBase(bool value) const { qquickrhiitem_itemchange_isbase = value; }
    inline void setQQuickRhiItem_ClassBegin_IsBase(bool value) const { qquickrhiitem_classbegin_isbase = value; }
    inline void setQQuickRhiItem_ComponentComplete_IsBase(bool value) const { qquickrhiitem_componentcomplete_isbase = value; }
    inline void setQQuickRhiItem_KeyPressEvent_IsBase(bool value) const { qquickrhiitem_keypressevent_isbase = value; }
    inline void setQQuickRhiItem_KeyReleaseEvent_IsBase(bool value) const { qquickrhiitem_keyreleaseevent_isbase = value; }
    inline void setQQuickRhiItem_InputMethodEvent_IsBase(bool value) const { qquickrhiitem_inputmethodevent_isbase = value; }
    inline void setQQuickRhiItem_FocusInEvent_IsBase(bool value) const { qquickrhiitem_focusinevent_isbase = value; }
    inline void setQQuickRhiItem_FocusOutEvent_IsBase(bool value) const { qquickrhiitem_focusoutevent_isbase = value; }
    inline void setQQuickRhiItem_MousePressEvent_IsBase(bool value) const { qquickrhiitem_mousepressevent_isbase = value; }
    inline void setQQuickRhiItem_MouseMoveEvent_IsBase(bool value) const { qquickrhiitem_mousemoveevent_isbase = value; }
    inline void setQQuickRhiItem_MouseReleaseEvent_IsBase(bool value) const { qquickrhiitem_mousereleaseevent_isbase = value; }
    inline void setQQuickRhiItem_MouseDoubleClickEvent_IsBase(bool value) const { qquickrhiitem_mousedoubleclickevent_isbase = value; }
    inline void setQQuickRhiItem_MouseUngrabEvent_IsBase(bool value) const { qquickrhiitem_mouseungrabevent_isbase = value; }
    inline void setQQuickRhiItem_TouchUngrabEvent_IsBase(bool value) const { qquickrhiitem_touchungrabevent_isbase = value; }
    inline void setQQuickRhiItem_WheelEvent_IsBase(bool value) const { qquickrhiitem_wheelevent_isbase = value; }
    inline void setQQuickRhiItem_TouchEvent_IsBase(bool value) const { qquickrhiitem_touchevent_isbase = value; }
    inline void setQQuickRhiItem_HoverEnterEvent_IsBase(bool value) const { qquickrhiitem_hoverenterevent_isbase = value; }
    inline void setQQuickRhiItem_HoverMoveEvent_IsBase(bool value) const { qquickrhiitem_hovermoveevent_isbase = value; }
    inline void setQQuickRhiItem_HoverLeaveEvent_IsBase(bool value) const { qquickrhiitem_hoverleaveevent_isbase = value; }
    inline void setQQuickRhiItem_DragEnterEvent_IsBase(bool value) const { qquickrhiitem_dragenterevent_isbase = value; }
    inline void setQQuickRhiItem_DragMoveEvent_IsBase(bool value) const { qquickrhiitem_dragmoveevent_isbase = value; }
    inline void setQQuickRhiItem_DragLeaveEvent_IsBase(bool value) const { qquickrhiitem_dragleaveevent_isbase = value; }
    inline void setQQuickRhiItem_DropEvent_IsBase(bool value) const { qquickrhiitem_dropevent_isbase = value; }
    inline void setQQuickRhiItem_ChildMouseEventFilter_IsBase(bool value) const { qquickrhiitem_childmouseeventfilter_isbase = value; }
    inline void setQQuickRhiItem_UpdatePolish_IsBase(bool value) const { qquickrhiitem_updatepolish_isbase = value; }
    inline void setQQuickRhiItem_EventFilter_IsBase(bool value) const { qquickrhiitem_eventfilter_isbase = value; }
    inline void setQQuickRhiItem_TimerEvent_IsBase(bool value) const { qquickrhiitem_timerevent_isbase = value; }
    inline void setQQuickRhiItem_ChildEvent_IsBase(bool value) const { qquickrhiitem_childevent_isbase = value; }
    inline void setQQuickRhiItem_CustomEvent_IsBase(bool value) const { qquickrhiitem_customevent_isbase = value; }
    inline void setQQuickRhiItem_ConnectNotify_IsBase(bool value) const { qquickrhiitem_connectnotify_isbase = value; }
    inline void setQQuickRhiItem_DisconnectNotify_IsBase(bool value) const { qquickrhiitem_disconnectnotify_isbase = value; }
    inline void setQQuickRhiItem_IsAutoRenderTargetEnabled_IsBase(bool value) const { qquickrhiitem_isautorendertargetenabled_isbase = value; }
    inline void setQQuickRhiItem_SetAutoRenderTarget_IsBase(bool value) const { qquickrhiitem_setautorendertarget_isbase = value; }
    inline void setQQuickRhiItem_IsComponentComplete_IsBase(bool value) const { qquickrhiitem_iscomponentcomplete_isbase = value; }
    inline void setQQuickRhiItem_UpdateInputMethod_IsBase(bool value) const { qquickrhiitem_updateinputmethod_isbase = value; }
    inline void setQQuickRhiItem_WidthValid_IsBase(bool value) const { qquickrhiitem_widthvalid_isbase = value; }
    inline void setQQuickRhiItem_HeightValid_IsBase(bool value) const { qquickrhiitem_heightvalid_isbase = value; }
    inline void setQQuickRhiItem_SetImplicitSize_IsBase(bool value) const { qquickrhiitem_setimplicitsize_isbase = value; }
    inline void setQQuickRhiItem_Sender_IsBase(bool value) const { qquickrhiitem_sender_isbase = value; }
    inline void setQQuickRhiItem_SenderSignalIndex_IsBase(bool value) const { qquickrhiitem_sendersignalindex_isbase = value; }
    inline void setQQuickRhiItem_Receivers_IsBase(bool value) const { qquickrhiitem_receivers_isbase = value; }
    inline void setQQuickRhiItem_IsSignalConnected_IsBase(bool value) const { qquickrhiitem_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickrhiitem_metaobject_isbase) {
            qquickrhiitem_metaobject_isbase = false;
            return QQuickRhiItem::metaObject();
        }
        auto metaobject_cb = qquickrhiitem_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QQuickRhiItem::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickrhiitem_metacast_isbase) {
            qquickrhiitem_metacast_isbase = false;
            return QQuickRhiItem::qt_metacast(param1);
        }
        auto metacast_cb = qquickrhiitem_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRhiItem::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickrhiitem_metacall_isbase) {
            qquickrhiitem_metacall_isbase = false;
            return QQuickRhiItem::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qquickrhiitem_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickRhiItem::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTextureProvider() const override {
        if (qquickrhiitem_istextureprovider_isbase) {
            qquickrhiitem_istextureprovider_isbase = false;
            return QQuickRhiItem::isTextureProvider();
        }
        auto istextureprovider_cb = qquickrhiitem_istextureprovider_callback;
        if (istextureprovider_cb) {
            bool callback_ret = istextureprovider_cb();
            return callback_ret;
        }
        return QQuickRhiItem::isTextureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGTextureProvider* textureProvider() const override {
        if (qquickrhiitem_textureprovider_isbase) {
            qquickrhiitem_textureprovider_isbase = false;
            return QQuickRhiItem::textureProvider();
        }
        auto textureprovider_cb = qquickrhiitem_textureprovider_callback;
        if (textureprovider_cb) {
            QSGTextureProvider* callback_ret = textureprovider_cb();
            return callback_ret;
        }
        return QQuickRhiItem::textureProvider();
    }

    // Virtual method for C ABI access and custom callback
    virtual QQuickRhiItemRenderer* createRenderer() override {
        auto createrenderer_cb = qquickrhiitem_createrenderer_callback;
        if (createrenderer_cb) {
            QQuickRhiItemRenderer* callback_ret = createrenderer_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QSGNode* updatePaintNode(QSGNode* param1, QQuickItem::UpdatePaintNodeData* param2) override {
        if (qquickrhiitem_updatepaintnode_isbase) {
            qquickrhiitem_updatepaintnode_isbase = false;
            return QQuickRhiItem::updatePaintNode(param1, param2);
        }
        auto updatepaintnode_cb = qquickrhiitem_updatepaintnode_callback;
        if (updatepaintnode_cb) {
            QSGNode* cbval1 = param1;
            QQuickItem__UpdatePaintNodeData* cbval2 = param2;
            QSGNode* callback_ret = updatepaintnode_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRhiItem::updatePaintNode(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickrhiitem_event_isbase) {
            qquickrhiitem_event_isbase = false;
            return QQuickRhiItem::event(param1);
        }
        auto event_cb = qquickrhiitem_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRhiItem::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void geometryChange(const QRectF& newGeometry, const QRectF& oldGeometry) override {
        if (qquickrhiitem_geometrychange_isbase) {
            qquickrhiitem_geometrychange_isbase = false;
            QQuickRhiItem::geometryChange(newGeometry, oldGeometry);
            return;
        }
        auto geometrychange_cb = qquickrhiitem_geometrychange_callback;
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
        QQuickRhiItem::geometryChange(newGeometry, oldGeometry);
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseResources() override {
        if (qquickrhiitem_releaseresources_isbase) {
            qquickrhiitem_releaseresources_isbase = false;
            QQuickRhiItem::releaseResources();
            return;
        }
        auto releaseresources_cb = qquickrhiitem_releaseresources_callback;
        if (releaseresources_cb) {
            releaseresources_cb();
            return;
        }
        QQuickRhiItem::releaseResources();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qquickrhiitem_boundingrect_isbase) {
            qquickrhiitem_boundingrect_isbase = false;
            return QQuickRhiItem::boundingRect();
        }
        auto boundingrect_cb = qquickrhiitem_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickRhiItem::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF clipRect() const override {
        if (qquickrhiitem_cliprect_isbase) {
            qquickrhiitem_cliprect_isbase = false;
            return QQuickRhiItem::clipRect();
        }
        auto cliprect_cb = qquickrhiitem_cliprect_callback;
        if (cliprect_cb) {
            QRectF* callback_ret = cliprect_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickRhiItem::clipRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qquickrhiitem_contains_isbase) {
            qquickrhiitem_contains_isbase = false;
            return QQuickRhiItem::contains(point);
        }
        auto contains_cb = qquickrhiitem_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);
            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRhiItem::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qquickrhiitem_inputmethodquery_isbase) {
            qquickrhiitem_inputmethodquery_isbase = false;
            return QQuickRhiItem::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qquickrhiitem_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);
            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickRhiItem::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemChange(QQuickItem::ItemChange param1, const QQuickItem::ItemChangeData& param2) override {
        if (qquickrhiitem_itemchange_isbase) {
            qquickrhiitem_itemchange_isbase = false;
            QQuickRhiItem::itemChange(param1, param2);
            return;
        }
        auto itemchange_cb = qquickrhiitem_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(param1);
            const QQuickItem::ItemChangeData& param2_ret = param2;
            // Cast returned reference into pointer
            QQuickItem__ItemChangeData* cbval2 = const_cast<QQuickItem::ItemChangeData*>(&param2_ret);
            itemchange_cb(this, cbval1, cbval2);
            return;
        }
        QQuickRhiItem::itemChange(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qquickrhiitem_classbegin_isbase) {
            qquickrhiitem_classbegin_isbase = false;
            QQuickRhiItem::classBegin();
            return;
        }
        auto classbegin_cb = qquickrhiitem_classbegin_callback;
        if (classbegin_cb) {
            classbegin_cb();
            return;
        }
        QQuickRhiItem::classBegin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qquickrhiitem_componentcomplete_isbase) {
            qquickrhiitem_componentcomplete_isbase = false;
            QQuickRhiItem::componentComplete();
            return;
        }
        auto componentcomplete_cb = qquickrhiitem_componentcomplete_callback;
        if (componentcomplete_cb) {
            componentcomplete_cb();
            return;
        }
        QQuickRhiItem::componentComplete();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qquickrhiitem_keypressevent_isbase) {
            qquickrhiitem_keypressevent_isbase = false;
            QQuickRhiItem::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qquickrhiitem_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;
            keypressevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qquickrhiitem_keyreleaseevent_isbase) {
            qquickrhiitem_keyreleaseevent_isbase = false;
            QQuickRhiItem::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qquickrhiitem_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;
            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickrhiitem_inputmethodevent_isbase) {
            qquickrhiitem_inputmethodevent_isbase = false;
            QQuickRhiItem::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qquickrhiitem_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;
            inputmethodevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qquickrhiitem_focusinevent_isbase) {
            qquickrhiitem_focusinevent_isbase = false;
            QQuickRhiItem::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = qquickrhiitem_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusinevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qquickrhiitem_focusoutevent_isbase) {
            qquickrhiitem_focusoutevent_isbase = false;
            QQuickRhiItem::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qquickrhiitem_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;
            focusoutevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousepressevent_isbase) {
            qquickrhiitem_mousepressevent_isbase = false;
            QQuickRhiItem::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qquickrhiitem_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;
            mousepressevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousemoveevent_isbase) {
            qquickrhiitem_mousemoveevent_isbase = false;
            QQuickRhiItem::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qquickrhiitem_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;
            mousemoveevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousereleaseevent_isbase) {
            qquickrhiitem_mousereleaseevent_isbase = false;
            QQuickRhiItem::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qquickrhiitem_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;
            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qquickrhiitem_mousedoubleclickevent_isbase) {
            qquickrhiitem_mousedoubleclickevent_isbase = false;
            QQuickRhiItem::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qquickrhiitem_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;
            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseUngrabEvent() override {
        if (qquickrhiitem_mouseungrabevent_isbase) {
            qquickrhiitem_mouseungrabevent_isbase = false;
            QQuickRhiItem::mouseUngrabEvent();
            return;
        }
        auto mouseungrabevent_cb = qquickrhiitem_mouseungrabevent_callback;
        if (mouseungrabevent_cb) {
            mouseungrabevent_cb();
            return;
        }
        QQuickRhiItem::mouseUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchUngrabEvent() override {
        if (qquickrhiitem_touchungrabevent_isbase) {
            qquickrhiitem_touchungrabevent_isbase = false;
            QQuickRhiItem::touchUngrabEvent();
            return;
        }
        auto touchungrabevent_cb = qquickrhiitem_touchungrabevent_callback;
        if (touchungrabevent_cb) {
            touchungrabevent_cb();
            return;
        }
        QQuickRhiItem::touchUngrabEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qquickrhiitem_wheelevent_isbase) {
            qquickrhiitem_wheelevent_isbase = false;
            QQuickRhiItem::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qquickrhiitem_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;
            wheelevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void touchEvent(QTouchEvent* event) override {
        if (qquickrhiitem_touchevent_isbase) {
            qquickrhiitem_touchevent_isbase = false;
            QQuickRhiItem::touchEvent(event);
            return;
        }
        auto touchevent_cb = qquickrhiitem_touchevent_callback;
        if (touchevent_cb) {
            QTouchEvent* cbval1 = event;
            touchevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::touchEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QHoverEvent* event) override {
        if (qquickrhiitem_hoverenterevent_isbase) {
            qquickrhiitem_hoverenterevent_isbase = false;
            QQuickRhiItem::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qquickrhiitem_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverenterevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QHoverEvent* event) override {
        if (qquickrhiitem_hovermoveevent_isbase) {
            qquickrhiitem_hovermoveevent_isbase = false;
            QQuickRhiItem::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qquickrhiitem_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QHoverEvent* cbval1 = event;
            hovermoveevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QHoverEvent* event) override {
        if (qquickrhiitem_hoverleaveevent_isbase) {
            qquickrhiitem_hoverleaveevent_isbase = false;
            QQuickRhiItem::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qquickrhiitem_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QHoverEvent* cbval1 = event;
            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickrhiitem_dragenterevent_isbase) {
            qquickrhiitem_dragenterevent_isbase = false;
            QQuickRhiItem::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = qquickrhiitem_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;
            dragenterevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickrhiitem_dragmoveevent_isbase) {
            qquickrhiitem_dragmoveevent_isbase = false;
            QQuickRhiItem::dragMoveEvent(param1);
            return;
        }
        auto dragmoveevent_cb = qquickrhiitem_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = param1;
            dragmoveevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickrhiitem_dragleaveevent_isbase) {
            qquickrhiitem_dragleaveevent_isbase = false;
            QQuickRhiItem::dragLeaveEvent(param1);
            return;
        }
        auto dragleaveevent_cb = qquickrhiitem_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = param1;
            dragleaveevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickrhiitem_dropevent_isbase) {
            qquickrhiitem_dropevent_isbase = false;
            QQuickRhiItem::dropEvent(param1);
            return;
        }
        auto dropevent_cb = qquickrhiitem_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;
            dropevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool childMouseEventFilter(QQuickItem* param1, QEvent* param2) override {
        if (qquickrhiitem_childmouseeventfilter_isbase) {
            qquickrhiitem_childmouseeventfilter_isbase = false;
            return QQuickRhiItem::childMouseEventFilter(param1, param2);
        }
        auto childmouseeventfilter_cb = qquickrhiitem_childmouseeventfilter_callback;
        if (childmouseeventfilter_cb) {
            QQuickItem* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = childmouseeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRhiItem::childMouseEventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updatePolish() override {
        if (qquickrhiitem_updatepolish_isbase) {
            qquickrhiitem_updatepolish_isbase = false;
            QQuickRhiItem::updatePolish();
            return;
        }
        auto updatepolish_cb = qquickrhiitem_updatepolish_callback;
        if (updatepolish_cb) {
            updatepolish_cb();
            return;
        }
        QQuickRhiItem::updatePolish();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickrhiitem_eventfilter_isbase) {
            qquickrhiitem_eventfilter_isbase = false;
            return QQuickRhiItem::eventFilter(watched, event);
        }
        auto eventfilter_cb = qquickrhiitem_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickRhiItem::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qquickrhiitem_timerevent_isbase) {
            qquickrhiitem_timerevent_isbase = false;
            QQuickRhiItem::timerEvent(event);
            return;
        }
        auto timerevent_cb = qquickrhiitem_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickrhiitem_childevent_isbase) {
            qquickrhiitem_childevent_isbase = false;
            QQuickRhiItem::childEvent(event);
            return;
        }
        auto childevent_cb = qquickrhiitem_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickrhiitem_customevent_isbase) {
            qquickrhiitem_customevent_isbase = false;
            QQuickRhiItem::customEvent(event);
            return;
        }
        auto customevent_cb = qquickrhiitem_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickrhiitem_connectnotify_isbase) {
            qquickrhiitem_connectnotify_isbase = false;
            QQuickRhiItem::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qquickrhiitem_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickrhiitem_disconnectnotify_isbase) {
            qquickrhiitem_disconnectnotify_isbase = false;
            QQuickRhiItem::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qquickrhiitem_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isAutoRenderTargetEnabled() const {
        if (qquickrhiitem_isautorendertargetenabled_isbase) {
            qquickrhiitem_isautorendertargetenabled_isbase = false;
            return QQuickRhiItem::isAutoRenderTargetEnabled();
        }
        auto isautorendertargetenabled_cb = qquickrhiitem_isautorendertargetenabled_callback;
        if (isautorendertargetenabled_cb) {
            bool callback_ret = isautorendertargetenabled_cb();
            return callback_ret;
        }
        return QQuickRhiItem::isAutoRenderTargetEnabled();
    }

    // Virtual method for C ABI access and custom callback
    void setAutoRenderTarget(bool enabled) {
        if (qquickrhiitem_setautorendertarget_isbase) {
            qquickrhiitem_setautorendertarget_isbase = false;
            QQuickRhiItem::setAutoRenderTarget(enabled);
            return;
        }
        auto setautorendertarget_cb = qquickrhiitem_setautorendertarget_callback;
        if (setautorendertarget_cb) {
            bool cbval1 = enabled;
            setautorendertarget_cb(this, cbval1);
            return;
        }
        QQuickRhiItem::setAutoRenderTarget(enabled);
    }

    // Virtual method for C ABI access and custom callback
    bool isComponentComplete() const {
        if (qquickrhiitem_iscomponentcomplete_isbase) {
            qquickrhiitem_iscomponentcomplete_isbase = false;
            return QQuickRhiItem::isComponentComplete();
        }
        auto iscomponentcomplete_cb = qquickrhiitem_iscomponentcomplete_callback;
        if (iscomponentcomplete_cb) {
            bool callback_ret = iscomponentcomplete_cb();
            return callback_ret;
        }
        return QQuickRhiItem::isComponentComplete();
    }

    // Virtual method for C ABI access and custom callback
    void updateInputMethod() {
        if (qquickrhiitem_updateinputmethod_isbase) {
            qquickrhiitem_updateinputmethod_isbase = false;
            QQuickRhiItem::updateInputMethod();
            return;
        }
        auto updateinputmethod_cb = qquickrhiitem_updateinputmethod_callback;
        if (updateinputmethod_cb) {
            updateinputmethod_cb();
            return;
        }
        QQuickRhiItem::updateInputMethod();
    }

    // Virtual method for C ABI access and custom callback
    bool widthValid() const {
        if (qquickrhiitem_widthvalid_isbase) {
            qquickrhiitem_widthvalid_isbase = false;
            return QQuickRhiItem::widthValid();
        }
        auto widthvalid_cb = qquickrhiitem_widthvalid_callback;
        if (widthvalid_cb) {
            bool callback_ret = widthvalid_cb();
            return callback_ret;
        }
        return QQuickRhiItem::widthValid();
    }

    // Virtual method for C ABI access and custom callback
    bool heightValid() const {
        if (qquickrhiitem_heightvalid_isbase) {
            qquickrhiitem_heightvalid_isbase = false;
            return QQuickRhiItem::heightValid();
        }
        auto heightvalid_cb = qquickrhiitem_heightvalid_callback;
        if (heightvalid_cb) {
            bool callback_ret = heightvalid_cb();
            return callback_ret;
        }
        return QQuickRhiItem::heightValid();
    }

    // Virtual method for C ABI access and custom callback
    void setImplicitSize(qreal param1, qreal param2) {
        if (qquickrhiitem_setimplicitsize_isbase) {
            qquickrhiitem_setimplicitsize_isbase = false;
            QQuickRhiItem::setImplicitSize(param1, param2);
            return;
        }
        auto setimplicitsize_cb = qquickrhiitem_setimplicitsize_callback;
        if (setimplicitsize_cb) {
            double cbval1 = static_cast<double>(param1);
            double cbval2 = static_cast<double>(param2);
            setimplicitsize_cb(this, cbval1, cbval2);
            return;
        }
        QQuickRhiItem::setImplicitSize(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qquickrhiitem_sender_isbase) {
            qquickrhiitem_sender_isbase = false;
            return QQuickRhiItem::sender();
        }
        auto sender_cb = qquickrhiitem_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QQuickRhiItem::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qquickrhiitem_sendersignalindex_isbase) {
            qquickrhiitem_sendersignalindex_isbase = false;
            return QQuickRhiItem::senderSignalIndex();
        }
        auto sendersignalindex_cb = qquickrhiitem_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QQuickRhiItem::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qquickrhiitem_receivers_isbase) {
            qquickrhiitem_receivers_isbase = false;
            return QQuickRhiItem::receivers(signal);
        }
        auto receivers_cb = qquickrhiitem_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickRhiItem::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qquickrhiitem_issignalconnected_isbase) {
            qquickrhiitem_issignalconnected_isbase = false;
            return QQuickRhiItem::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qquickrhiitem_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QQuickRhiItem::isSignalConnected(signal);
    }

    // Friend functions
    friend QQuickRhiItemRenderer* QQuickRhiItem_CreateRenderer(QQuickRhiItem* self);
    friend QQuickRhiItemRenderer* QQuickRhiItem_SuperCreateRenderer(QQuickRhiItem* self);
    friend QSGNode* QQuickRhiItem_UpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend QSGNode* QQuickRhiItem_SuperUpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2);
    friend bool QQuickRhiItem_Event(QQuickRhiItem* self, QEvent* param1);
    friend bool QQuickRhiItem_SuperEvent(QQuickRhiItem* self, QEvent* param1);
    friend void QQuickRhiItem_GeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickRhiItem_SuperGeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry);
    friend void QQuickRhiItem_ReleaseResources(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperReleaseResources(QQuickRhiItem* self);
    friend void QQuickRhiItem_ItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickRhiItem_SuperItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2);
    friend void QQuickRhiItem_ClassBegin(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperClassBegin(QQuickRhiItem* self);
    friend void QQuickRhiItem_ComponentComplete(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperComponentComplete(QQuickRhiItem* self);
    friend void QQuickRhiItem_KeyPressEvent(QQuickRhiItem* self, QKeyEvent* event);
    friend void QQuickRhiItem_SuperKeyPressEvent(QQuickRhiItem* self, QKeyEvent* event);
    friend void QQuickRhiItem_KeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event);
    friend void QQuickRhiItem_SuperKeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event);
    friend void QQuickRhiItem_InputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1);
    friend void QQuickRhiItem_SuperInputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1);
    friend void QQuickRhiItem_FocusInEvent(QQuickRhiItem* self, QFocusEvent* param1);
    friend void QQuickRhiItem_SuperFocusInEvent(QQuickRhiItem* self, QFocusEvent* param1);
    friend void QQuickRhiItem_FocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1);
    friend void QQuickRhiItem_SuperFocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1);
    friend void QQuickRhiItem_MousePressEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMousePressEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_MouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_MouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_MouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_SuperMouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event);
    friend void QQuickRhiItem_MouseUngrabEvent(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperMouseUngrabEvent(QQuickRhiItem* self);
    friend void QQuickRhiItem_TouchUngrabEvent(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperTouchUngrabEvent(QQuickRhiItem* self);
    friend void QQuickRhiItem_WheelEvent(QQuickRhiItem* self, QWheelEvent* event);
    friend void QQuickRhiItem_SuperWheelEvent(QQuickRhiItem* self, QWheelEvent* event);
    friend void QQuickRhiItem_TouchEvent(QQuickRhiItem* self, QTouchEvent* event);
    friend void QQuickRhiItem_SuperTouchEvent(QQuickRhiItem* self, QTouchEvent* event);
    friend void QQuickRhiItem_HoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_SuperHoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_HoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_SuperHoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_HoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_SuperHoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event);
    friend void QQuickRhiItem_DragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1);
    friend void QQuickRhiItem_SuperDragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1);
    friend void QQuickRhiItem_DragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1);
    friend void QQuickRhiItem_SuperDragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1);
    friend void QQuickRhiItem_DragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1);
    friend void QQuickRhiItem_SuperDragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1);
    friend void QQuickRhiItem_DropEvent(QQuickRhiItem* self, QDropEvent* param1);
    friend void QQuickRhiItem_SuperDropEvent(QQuickRhiItem* self, QDropEvent* param1);
    friend bool QQuickRhiItem_ChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2);
    friend bool QQuickRhiItem_SuperChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2);
    friend void QQuickRhiItem_UpdatePolish(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperUpdatePolish(QQuickRhiItem* self);
    friend void QQuickRhiItem_TimerEvent(QQuickRhiItem* self, QTimerEvent* event);
    friend void QQuickRhiItem_SuperTimerEvent(QQuickRhiItem* self, QTimerEvent* event);
    friend void QQuickRhiItem_ChildEvent(QQuickRhiItem* self, QChildEvent* event);
    friend void QQuickRhiItem_SuperChildEvent(QQuickRhiItem* self, QChildEvent* event);
    friend void QQuickRhiItem_CustomEvent(QQuickRhiItem* self, QEvent* event);
    friend void QQuickRhiItem_SuperCustomEvent(QQuickRhiItem* self, QEvent* event);
    friend void QQuickRhiItem_ConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
    friend void QQuickRhiItem_SuperConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
    friend void QQuickRhiItem_DisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
    friend void QQuickRhiItem_SuperDisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal);
    friend bool QQuickRhiItem_IsAutoRenderTargetEnabled(const QQuickRhiItem* self);
    friend bool QQuickRhiItem_SuperIsAutoRenderTargetEnabled(const QQuickRhiItem* self);
    friend void QQuickRhiItem_SetAutoRenderTarget(QQuickRhiItem* self, bool enabled);
    friend void QQuickRhiItem_SuperSetAutoRenderTarget(QQuickRhiItem* self, bool enabled);
    friend bool QQuickRhiItem_IsComponentComplete(const QQuickRhiItem* self);
    friend bool QQuickRhiItem_SuperIsComponentComplete(const QQuickRhiItem* self);
    friend void QQuickRhiItem_UpdateInputMethod(QQuickRhiItem* self);
    friend void QQuickRhiItem_SuperUpdateInputMethod(QQuickRhiItem* self);
    friend bool QQuickRhiItem_WidthValid(const QQuickRhiItem* self);
    friend bool QQuickRhiItem_SuperWidthValid(const QQuickRhiItem* self);
    friend bool QQuickRhiItem_HeightValid(const QQuickRhiItem* self);
    friend bool QQuickRhiItem_SuperHeightValid(const QQuickRhiItem* self);
    friend void QQuickRhiItem_SetImplicitSize(QQuickRhiItem* self, double param1, double param2);
    friend void QQuickRhiItem_SuperSetImplicitSize(QQuickRhiItem* self, double param1, double param2);
    friend QObject* QQuickRhiItem_Sender(const QQuickRhiItem* self);
    friend QObject* QQuickRhiItem_SuperSender(const QQuickRhiItem* self);
    friend int QQuickRhiItem_SenderSignalIndex(const QQuickRhiItem* self);
    friend int QQuickRhiItem_SuperSenderSignalIndex(const QQuickRhiItem* self);
    friend int QQuickRhiItem_Receivers(const QQuickRhiItem* self, const char* signal);
    friend int QQuickRhiItem_SuperReceivers(const QQuickRhiItem* self, const char* signal);
    friend bool QQuickRhiItem_IsSignalConnected(const QQuickRhiItem* self, const QMetaMethod* signal);
    friend bool QQuickRhiItem_SuperIsSignalConnected(const QQuickRhiItem* self, const QMetaMethod* signal);
};

#endif
