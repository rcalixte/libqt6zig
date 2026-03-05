#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPOLARCHART_H
#define SRC_RESTRICTED_EXTRAS_CHARTSC_LIBVIRTUALQPOLARCHART_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPolarChart so that we can call protected methods
class VirtualQPolarChart final : public QPolarChart {

  public:
    // Virtual class boolean flag
    bool isVirtualQPolarChart = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QPolarChart_MetaObject_Callback = QMetaObject* (*)();
    using QPolarChart_Metacast_Callback = void* (*)(QPolarChart*, const char*);
    using QPolarChart_Metacall_Callback = int (*)(QPolarChart*, int, int, void**);
    using QPolarChart_SetGeometry_Callback = void (*)(QPolarChart*, QRectF*);
    using QPolarChart_GetContentsMargins_Callback = void (*)(const QPolarChart*, double*, double*, double*, double*);
    using QPolarChart_Type_Callback = int (*)();
    using QPolarChart_Paint_Callback = void (*)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QPolarChart_PaintWindowFrame_Callback = void (*)(QPolarChart*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QPolarChart_BoundingRect_Callback = QRectF* (*)();
    using QPolarChart_Shape_Callback = QPainterPath* (*)();
    using QPolarChart_InitStyleOption_Callback = void (*)(const QPolarChart*, QStyleOption*);
    using QPolarChart_SizeHint_Callback = QSizeF* (*)(const QPolarChart*, int, QSizeF*);
    using QPolarChart_UpdateGeometry_Callback = void (*)();
    using QPolarChart_ItemChange_Callback = QVariant* (*)(QPolarChart*, int, QVariant*);
    using QPolarChart_PropertyChange_Callback = QVariant* (*)(QPolarChart*, const char*, QVariant*);
    using QPolarChart_SceneEvent_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_WindowFrameEvent_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_WindowFrameSectionAt_Callback = int (*)(const QPolarChart*, QPointF*);
    using QPolarChart_Event_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_ChangeEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_CloseEvent_Callback = void (*)(QPolarChart*, QCloseEvent*);
    using QPolarChart_FocusInEvent_Callback = void (*)(QPolarChart*, QFocusEvent*);
    using QPolarChart_FocusNextPrevChild_Callback = bool (*)(QPolarChart*, bool);
    using QPolarChart_FocusOutEvent_Callback = void (*)(QPolarChart*, QFocusEvent*);
    using QPolarChart_HideEvent_Callback = void (*)(QPolarChart*, QHideEvent*);
    using QPolarChart_MoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMoveEvent*);
    using QPolarChart_PolishEvent_Callback = void (*)();
    using QPolarChart_ResizeEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneResizeEvent*);
    using QPolarChart_ShowEvent_Callback = void (*)(QPolarChart*, QShowEvent*);
    using QPolarChart_HoverMoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneHoverEvent*);
    using QPolarChart_HoverLeaveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneHoverEvent*);
    using QPolarChart_GrabMouseEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_UngrabMouseEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_GrabKeyboardEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_UngrabKeyboardEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_EventFilter_Callback = bool (*)(QPolarChart*, QObject*, QEvent*);
    using QPolarChart_TimerEvent_Callback = void (*)(QPolarChart*, QTimerEvent*);
    using QPolarChart_ChildEvent_Callback = void (*)(QPolarChart*, QChildEvent*);
    using QPolarChart_CustomEvent_Callback = void (*)(QPolarChart*, QEvent*);
    using QPolarChart_ConnectNotify_Callback = void (*)(QPolarChart*, QMetaMethod*);
    using QPolarChart_DisconnectNotify_Callback = void (*)(QPolarChart*, QMetaMethod*);
    using QPolarChart_Advance_Callback = void (*)(QPolarChart*, int);
    using QPolarChart_Contains_Callback = bool (*)(const QPolarChart*, QPointF*);
    using QPolarChart_CollidesWithItem_Callback = bool (*)(const QPolarChart*, QGraphicsItem*, int);
    using QPolarChart_CollidesWithPath_Callback = bool (*)(const QPolarChart*, QPainterPath*, int);
    using QPolarChart_IsObscuredBy_Callback = bool (*)(const QPolarChart*, QGraphicsItem*);
    using QPolarChart_OpaqueArea_Callback = QPainterPath* (*)();
    using QPolarChart_SceneEventFilter_Callback = bool (*)(QPolarChart*, QGraphicsItem*, QEvent*);
    using QPolarChart_ContextMenuEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneContextMenuEvent*);
    using QPolarChart_DragEnterEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_DragLeaveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_DragMoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_DropEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneDragDropEvent*);
    using QPolarChart_HoverEnterEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneHoverEvent*);
    using QPolarChart_KeyPressEvent_Callback = void (*)(QPolarChart*, QKeyEvent*);
    using QPolarChart_KeyReleaseEvent_Callback = void (*)(QPolarChart*, QKeyEvent*);
    using QPolarChart_MousePressEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_MouseMoveEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_MouseReleaseEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_MouseDoubleClickEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneMouseEvent*);
    using QPolarChart_WheelEvent_Callback = void (*)(QPolarChart*, QGraphicsSceneWheelEvent*);
    using QPolarChart_InputMethodEvent_Callback = void (*)(QPolarChart*, QInputMethodEvent*);
    using QPolarChart_InputMethodQuery_Callback = QVariant* (*)(const QPolarChart*, int);
    using QPolarChart_SupportsExtension_Callback = bool (*)(const QPolarChart*, int);
    using QPolarChart_SetExtension_Callback = void (*)(QPolarChart*, int, QVariant*);
    using QPolarChart_Extension_Callback = QVariant* (*)(const QPolarChart*, QVariant*);
    using QPolarChart_IsEmpty_Callback = bool (*)();
    using QPolarChart_UpdateMicroFocus_Callback = void (*)();
    using QPolarChart_Sender_Callback = QObject* (*)();
    using QPolarChart_SenderSignalIndex_Callback = int (*)();
    using QPolarChart_Receivers_Callback = int (*)(const QPolarChart*, const char*);
    using QPolarChart_IsSignalConnected_Callback = bool (*)(const QPolarChart*, QMetaMethod*);
    using QPolarChart_AddToIndex_Callback = void (*)();
    using QPolarChart_RemoveFromIndex_Callback = void (*)();
    using QPolarChart_PrepareGeometryChange_Callback = void (*)();
    using QPolarChart_SetGraphicsItem_Callback = void (*)(QPolarChart*, QGraphicsItem*);
    using QPolarChart_SetOwnedByLayout_Callback = void (*)(QPolarChart*, bool);

  protected:
    // Instance callback storage
    QPolarChart_MetaObject_Callback qpolarchart_metaobject_callback = nullptr;
    QPolarChart_Metacast_Callback qpolarchart_metacast_callback = nullptr;
    QPolarChart_Metacall_Callback qpolarchart_metacall_callback = nullptr;
    QPolarChart_SetGeometry_Callback qpolarchart_setgeometry_callback = nullptr;
    QPolarChart_GetContentsMargins_Callback qpolarchart_getcontentsmargins_callback = nullptr;
    QPolarChart_Type_Callback qpolarchart_type_callback = nullptr;
    QPolarChart_Paint_Callback qpolarchart_paint_callback = nullptr;
    QPolarChart_PaintWindowFrame_Callback qpolarchart_paintwindowframe_callback = nullptr;
    QPolarChart_BoundingRect_Callback qpolarchart_boundingrect_callback = nullptr;
    QPolarChart_Shape_Callback qpolarchart_shape_callback = nullptr;
    QPolarChart_InitStyleOption_Callback qpolarchart_initstyleoption_callback = nullptr;
    QPolarChart_SizeHint_Callback qpolarchart_sizehint_callback = nullptr;
    QPolarChart_UpdateGeometry_Callback qpolarchart_updategeometry_callback = nullptr;
    QPolarChart_ItemChange_Callback qpolarchart_itemchange_callback = nullptr;
    QPolarChart_PropertyChange_Callback qpolarchart_propertychange_callback = nullptr;
    QPolarChart_SceneEvent_Callback qpolarchart_sceneevent_callback = nullptr;
    QPolarChart_WindowFrameEvent_Callback qpolarchart_windowframeevent_callback = nullptr;
    QPolarChart_WindowFrameSectionAt_Callback qpolarchart_windowframesectionat_callback = nullptr;
    QPolarChart_Event_Callback qpolarchart_event_callback = nullptr;
    QPolarChart_ChangeEvent_Callback qpolarchart_changeevent_callback = nullptr;
    QPolarChart_CloseEvent_Callback qpolarchart_closeevent_callback = nullptr;
    QPolarChart_FocusInEvent_Callback qpolarchart_focusinevent_callback = nullptr;
    QPolarChart_FocusNextPrevChild_Callback qpolarchart_focusnextprevchild_callback = nullptr;
    QPolarChart_FocusOutEvent_Callback qpolarchart_focusoutevent_callback = nullptr;
    QPolarChart_HideEvent_Callback qpolarchart_hideevent_callback = nullptr;
    QPolarChart_MoveEvent_Callback qpolarchart_moveevent_callback = nullptr;
    QPolarChart_PolishEvent_Callback qpolarchart_polishevent_callback = nullptr;
    QPolarChart_ResizeEvent_Callback qpolarchart_resizeevent_callback = nullptr;
    QPolarChart_ShowEvent_Callback qpolarchart_showevent_callback = nullptr;
    QPolarChart_HoverMoveEvent_Callback qpolarchart_hovermoveevent_callback = nullptr;
    QPolarChart_HoverLeaveEvent_Callback qpolarchart_hoverleaveevent_callback = nullptr;
    QPolarChart_GrabMouseEvent_Callback qpolarchart_grabmouseevent_callback = nullptr;
    QPolarChart_UngrabMouseEvent_Callback qpolarchart_ungrabmouseevent_callback = nullptr;
    QPolarChart_GrabKeyboardEvent_Callback qpolarchart_grabkeyboardevent_callback = nullptr;
    QPolarChart_UngrabKeyboardEvent_Callback qpolarchart_ungrabkeyboardevent_callback = nullptr;
    QPolarChart_EventFilter_Callback qpolarchart_eventfilter_callback = nullptr;
    QPolarChart_TimerEvent_Callback qpolarchart_timerevent_callback = nullptr;
    QPolarChart_ChildEvent_Callback qpolarchart_childevent_callback = nullptr;
    QPolarChart_CustomEvent_Callback qpolarchart_customevent_callback = nullptr;
    QPolarChart_ConnectNotify_Callback qpolarchart_connectnotify_callback = nullptr;
    QPolarChart_DisconnectNotify_Callback qpolarchart_disconnectnotify_callback = nullptr;
    QPolarChart_Advance_Callback qpolarchart_advance_callback = nullptr;
    QPolarChart_Contains_Callback qpolarchart_contains_callback = nullptr;
    QPolarChart_CollidesWithItem_Callback qpolarchart_collideswithitem_callback = nullptr;
    QPolarChart_CollidesWithPath_Callback qpolarchart_collideswithpath_callback = nullptr;
    QPolarChart_IsObscuredBy_Callback qpolarchart_isobscuredby_callback = nullptr;
    QPolarChart_OpaqueArea_Callback qpolarchart_opaquearea_callback = nullptr;
    QPolarChart_SceneEventFilter_Callback qpolarchart_sceneeventfilter_callback = nullptr;
    QPolarChart_ContextMenuEvent_Callback qpolarchart_contextmenuevent_callback = nullptr;
    QPolarChart_DragEnterEvent_Callback qpolarchart_dragenterevent_callback = nullptr;
    QPolarChart_DragLeaveEvent_Callback qpolarchart_dragleaveevent_callback = nullptr;
    QPolarChart_DragMoveEvent_Callback qpolarchart_dragmoveevent_callback = nullptr;
    QPolarChart_DropEvent_Callback qpolarchart_dropevent_callback = nullptr;
    QPolarChart_HoverEnterEvent_Callback qpolarchart_hoverenterevent_callback = nullptr;
    QPolarChart_KeyPressEvent_Callback qpolarchart_keypressevent_callback = nullptr;
    QPolarChart_KeyReleaseEvent_Callback qpolarchart_keyreleaseevent_callback = nullptr;
    QPolarChart_MousePressEvent_Callback qpolarchart_mousepressevent_callback = nullptr;
    QPolarChart_MouseMoveEvent_Callback qpolarchart_mousemoveevent_callback = nullptr;
    QPolarChart_MouseReleaseEvent_Callback qpolarchart_mousereleaseevent_callback = nullptr;
    QPolarChart_MouseDoubleClickEvent_Callback qpolarchart_mousedoubleclickevent_callback = nullptr;
    QPolarChart_WheelEvent_Callback qpolarchart_wheelevent_callback = nullptr;
    QPolarChart_InputMethodEvent_Callback qpolarchart_inputmethodevent_callback = nullptr;
    QPolarChart_InputMethodQuery_Callback qpolarchart_inputmethodquery_callback = nullptr;
    QPolarChart_SupportsExtension_Callback qpolarchart_supportsextension_callback = nullptr;
    QPolarChart_SetExtension_Callback qpolarchart_setextension_callback = nullptr;
    QPolarChart_Extension_Callback qpolarchart_extension_callback = nullptr;
    QPolarChart_IsEmpty_Callback qpolarchart_isempty_callback = nullptr;
    QPolarChart_UpdateMicroFocus_Callback qpolarchart_updatemicrofocus_callback = nullptr;
    QPolarChart_Sender_Callback qpolarchart_sender_callback = nullptr;
    QPolarChart_SenderSignalIndex_Callback qpolarchart_sendersignalindex_callback = nullptr;
    QPolarChart_Receivers_Callback qpolarchart_receivers_callback = nullptr;
    QPolarChart_IsSignalConnected_Callback qpolarchart_issignalconnected_callback = nullptr;
    QPolarChart_AddToIndex_Callback qpolarchart_addtoindex_callback = nullptr;
    QPolarChart_RemoveFromIndex_Callback qpolarchart_removefromindex_callback = nullptr;
    QPolarChart_PrepareGeometryChange_Callback qpolarchart_preparegeometrychange_callback = nullptr;
    QPolarChart_SetGraphicsItem_Callback qpolarchart_setgraphicsitem_callback = nullptr;
    QPolarChart_SetOwnedByLayout_Callback qpolarchart_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qpolarchart_metaobject_isbase = false;
    mutable bool qpolarchart_metacast_isbase = false;
    mutable bool qpolarchart_metacall_isbase = false;
    mutable bool qpolarchart_setgeometry_isbase = false;
    mutable bool qpolarchart_getcontentsmargins_isbase = false;
    mutable bool qpolarchart_type_isbase = false;
    mutable bool qpolarchart_paint_isbase = false;
    mutable bool qpolarchart_paintwindowframe_isbase = false;
    mutable bool qpolarchart_boundingrect_isbase = false;
    mutable bool qpolarchart_shape_isbase = false;
    mutable bool qpolarchart_initstyleoption_isbase = false;
    mutable bool qpolarchart_sizehint_isbase = false;
    mutable bool qpolarchart_updategeometry_isbase = false;
    mutable bool qpolarchart_itemchange_isbase = false;
    mutable bool qpolarchart_propertychange_isbase = false;
    mutable bool qpolarchart_sceneevent_isbase = false;
    mutable bool qpolarchart_windowframeevent_isbase = false;
    mutable bool qpolarchart_windowframesectionat_isbase = false;
    mutable bool qpolarchart_event_isbase = false;
    mutable bool qpolarchart_changeevent_isbase = false;
    mutable bool qpolarchart_closeevent_isbase = false;
    mutable bool qpolarchart_focusinevent_isbase = false;
    mutable bool qpolarchart_focusnextprevchild_isbase = false;
    mutable bool qpolarchart_focusoutevent_isbase = false;
    mutable bool qpolarchart_hideevent_isbase = false;
    mutable bool qpolarchart_moveevent_isbase = false;
    mutable bool qpolarchart_polishevent_isbase = false;
    mutable bool qpolarchart_resizeevent_isbase = false;
    mutable bool qpolarchart_showevent_isbase = false;
    mutable bool qpolarchart_hovermoveevent_isbase = false;
    mutable bool qpolarchart_hoverleaveevent_isbase = false;
    mutable bool qpolarchart_grabmouseevent_isbase = false;
    mutable bool qpolarchart_ungrabmouseevent_isbase = false;
    mutable bool qpolarchart_grabkeyboardevent_isbase = false;
    mutable bool qpolarchart_ungrabkeyboardevent_isbase = false;
    mutable bool qpolarchart_eventfilter_isbase = false;
    mutable bool qpolarchart_timerevent_isbase = false;
    mutable bool qpolarchart_childevent_isbase = false;
    mutable bool qpolarchart_customevent_isbase = false;
    mutable bool qpolarchart_connectnotify_isbase = false;
    mutable bool qpolarchart_disconnectnotify_isbase = false;
    mutable bool qpolarchart_advance_isbase = false;
    mutable bool qpolarchart_contains_isbase = false;
    mutable bool qpolarchart_collideswithitem_isbase = false;
    mutable bool qpolarchart_collideswithpath_isbase = false;
    mutable bool qpolarchart_isobscuredby_isbase = false;
    mutable bool qpolarchart_opaquearea_isbase = false;
    mutable bool qpolarchart_sceneeventfilter_isbase = false;
    mutable bool qpolarchart_contextmenuevent_isbase = false;
    mutable bool qpolarchart_dragenterevent_isbase = false;
    mutable bool qpolarchart_dragleaveevent_isbase = false;
    mutable bool qpolarchart_dragmoveevent_isbase = false;
    mutable bool qpolarchart_dropevent_isbase = false;
    mutable bool qpolarchart_hoverenterevent_isbase = false;
    mutable bool qpolarchart_keypressevent_isbase = false;
    mutable bool qpolarchart_keyreleaseevent_isbase = false;
    mutable bool qpolarchart_mousepressevent_isbase = false;
    mutable bool qpolarchart_mousemoveevent_isbase = false;
    mutable bool qpolarchart_mousereleaseevent_isbase = false;
    mutable bool qpolarchart_mousedoubleclickevent_isbase = false;
    mutable bool qpolarchart_wheelevent_isbase = false;
    mutable bool qpolarchart_inputmethodevent_isbase = false;
    mutable bool qpolarchart_inputmethodquery_isbase = false;
    mutable bool qpolarchart_supportsextension_isbase = false;
    mutable bool qpolarchart_setextension_isbase = false;
    mutable bool qpolarchart_extension_isbase = false;
    mutable bool qpolarchart_isempty_isbase = false;
    mutable bool qpolarchart_updatemicrofocus_isbase = false;
    mutable bool qpolarchart_sender_isbase = false;
    mutable bool qpolarchart_sendersignalindex_isbase = false;
    mutable bool qpolarchart_receivers_isbase = false;
    mutable bool qpolarchart_issignalconnected_isbase = false;
    mutable bool qpolarchart_addtoindex_isbase = false;
    mutable bool qpolarchart_removefromindex_isbase = false;
    mutable bool qpolarchart_preparegeometrychange_isbase = false;
    mutable bool qpolarchart_setgraphicsitem_isbase = false;
    mutable bool qpolarchart_setownedbylayout_isbase = false;

  public:
    VirtualQPolarChart() : QPolarChart() {};
    VirtualQPolarChart(QGraphicsItem* parent) : QPolarChart(parent) {};
    VirtualQPolarChart(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QPolarChart(parent, wFlags) {};

    // Callback setters
    inline void setQPolarChart_MetaObject_Callback(QPolarChart_MetaObject_Callback cb) { qpolarchart_metaobject_callback = cb; }
    inline void setQPolarChart_Metacast_Callback(QPolarChart_Metacast_Callback cb) { qpolarchart_metacast_callback = cb; }
    inline void setQPolarChart_Metacall_Callback(QPolarChart_Metacall_Callback cb) { qpolarchart_metacall_callback = cb; }
    inline void setQPolarChart_SetGeometry_Callback(QPolarChart_SetGeometry_Callback cb) { qpolarchart_setgeometry_callback = cb; }
    inline void setQPolarChart_GetContentsMargins_Callback(QPolarChart_GetContentsMargins_Callback cb) { qpolarchart_getcontentsmargins_callback = cb; }
    inline void setQPolarChart_Type_Callback(QPolarChart_Type_Callback cb) { qpolarchart_type_callback = cb; }
    inline void setQPolarChart_Paint_Callback(QPolarChart_Paint_Callback cb) { qpolarchart_paint_callback = cb; }
    inline void setQPolarChart_PaintWindowFrame_Callback(QPolarChart_PaintWindowFrame_Callback cb) { qpolarchart_paintwindowframe_callback = cb; }
    inline void setQPolarChart_BoundingRect_Callback(QPolarChart_BoundingRect_Callback cb) { qpolarchart_boundingrect_callback = cb; }
    inline void setQPolarChart_Shape_Callback(QPolarChart_Shape_Callback cb) { qpolarchart_shape_callback = cb; }
    inline void setQPolarChart_InitStyleOption_Callback(QPolarChart_InitStyleOption_Callback cb) { qpolarchart_initstyleoption_callback = cb; }
    inline void setQPolarChart_SizeHint_Callback(QPolarChart_SizeHint_Callback cb) { qpolarchart_sizehint_callback = cb; }
    inline void setQPolarChart_UpdateGeometry_Callback(QPolarChart_UpdateGeometry_Callback cb) { qpolarchart_updategeometry_callback = cb; }
    inline void setQPolarChart_ItemChange_Callback(QPolarChart_ItemChange_Callback cb) { qpolarchart_itemchange_callback = cb; }
    inline void setQPolarChart_PropertyChange_Callback(QPolarChart_PropertyChange_Callback cb) { qpolarchart_propertychange_callback = cb; }
    inline void setQPolarChart_SceneEvent_Callback(QPolarChart_SceneEvent_Callback cb) { qpolarchart_sceneevent_callback = cb; }
    inline void setQPolarChart_WindowFrameEvent_Callback(QPolarChart_WindowFrameEvent_Callback cb) { qpolarchart_windowframeevent_callback = cb; }
    inline void setQPolarChart_WindowFrameSectionAt_Callback(QPolarChart_WindowFrameSectionAt_Callback cb) { qpolarchart_windowframesectionat_callback = cb; }
    inline void setQPolarChart_Event_Callback(QPolarChart_Event_Callback cb) { qpolarchart_event_callback = cb; }
    inline void setQPolarChart_ChangeEvent_Callback(QPolarChart_ChangeEvent_Callback cb) { qpolarchart_changeevent_callback = cb; }
    inline void setQPolarChart_CloseEvent_Callback(QPolarChart_CloseEvent_Callback cb) { qpolarchart_closeevent_callback = cb; }
    inline void setQPolarChart_FocusInEvent_Callback(QPolarChart_FocusInEvent_Callback cb) { qpolarchart_focusinevent_callback = cb; }
    inline void setQPolarChart_FocusNextPrevChild_Callback(QPolarChart_FocusNextPrevChild_Callback cb) { qpolarchart_focusnextprevchild_callback = cb; }
    inline void setQPolarChart_FocusOutEvent_Callback(QPolarChart_FocusOutEvent_Callback cb) { qpolarchart_focusoutevent_callback = cb; }
    inline void setQPolarChart_HideEvent_Callback(QPolarChart_HideEvent_Callback cb) { qpolarchart_hideevent_callback = cb; }
    inline void setQPolarChart_MoveEvent_Callback(QPolarChart_MoveEvent_Callback cb) { qpolarchart_moveevent_callback = cb; }
    inline void setQPolarChart_PolishEvent_Callback(QPolarChart_PolishEvent_Callback cb) { qpolarchart_polishevent_callback = cb; }
    inline void setQPolarChart_ResizeEvent_Callback(QPolarChart_ResizeEvent_Callback cb) { qpolarchart_resizeevent_callback = cb; }
    inline void setQPolarChart_ShowEvent_Callback(QPolarChart_ShowEvent_Callback cb) { qpolarchart_showevent_callback = cb; }
    inline void setQPolarChart_HoverMoveEvent_Callback(QPolarChart_HoverMoveEvent_Callback cb) { qpolarchart_hovermoveevent_callback = cb; }
    inline void setQPolarChart_HoverLeaveEvent_Callback(QPolarChart_HoverLeaveEvent_Callback cb) { qpolarchart_hoverleaveevent_callback = cb; }
    inline void setQPolarChart_GrabMouseEvent_Callback(QPolarChart_GrabMouseEvent_Callback cb) { qpolarchart_grabmouseevent_callback = cb; }
    inline void setQPolarChart_UngrabMouseEvent_Callback(QPolarChart_UngrabMouseEvent_Callback cb) { qpolarchart_ungrabmouseevent_callback = cb; }
    inline void setQPolarChart_GrabKeyboardEvent_Callback(QPolarChart_GrabKeyboardEvent_Callback cb) { qpolarchart_grabkeyboardevent_callback = cb; }
    inline void setQPolarChart_UngrabKeyboardEvent_Callback(QPolarChart_UngrabKeyboardEvent_Callback cb) { qpolarchart_ungrabkeyboardevent_callback = cb; }
    inline void setQPolarChart_EventFilter_Callback(QPolarChart_EventFilter_Callback cb) { qpolarchart_eventfilter_callback = cb; }
    inline void setQPolarChart_TimerEvent_Callback(QPolarChart_TimerEvent_Callback cb) { qpolarchart_timerevent_callback = cb; }
    inline void setQPolarChart_ChildEvent_Callback(QPolarChart_ChildEvent_Callback cb) { qpolarchart_childevent_callback = cb; }
    inline void setQPolarChart_CustomEvent_Callback(QPolarChart_CustomEvent_Callback cb) { qpolarchart_customevent_callback = cb; }
    inline void setQPolarChart_ConnectNotify_Callback(QPolarChart_ConnectNotify_Callback cb) { qpolarchart_connectnotify_callback = cb; }
    inline void setQPolarChart_DisconnectNotify_Callback(QPolarChart_DisconnectNotify_Callback cb) { qpolarchart_disconnectnotify_callback = cb; }
    inline void setQPolarChart_Advance_Callback(QPolarChart_Advance_Callback cb) { qpolarchart_advance_callback = cb; }
    inline void setQPolarChart_Contains_Callback(QPolarChart_Contains_Callback cb) { qpolarchart_contains_callback = cb; }
    inline void setQPolarChart_CollidesWithItem_Callback(QPolarChart_CollidesWithItem_Callback cb) { qpolarchart_collideswithitem_callback = cb; }
    inline void setQPolarChart_CollidesWithPath_Callback(QPolarChart_CollidesWithPath_Callback cb) { qpolarchart_collideswithpath_callback = cb; }
    inline void setQPolarChart_IsObscuredBy_Callback(QPolarChart_IsObscuredBy_Callback cb) { qpolarchart_isobscuredby_callback = cb; }
    inline void setQPolarChart_OpaqueArea_Callback(QPolarChart_OpaqueArea_Callback cb) { qpolarchart_opaquearea_callback = cb; }
    inline void setQPolarChart_SceneEventFilter_Callback(QPolarChart_SceneEventFilter_Callback cb) { qpolarchart_sceneeventfilter_callback = cb; }
    inline void setQPolarChart_ContextMenuEvent_Callback(QPolarChart_ContextMenuEvent_Callback cb) { qpolarchart_contextmenuevent_callback = cb; }
    inline void setQPolarChart_DragEnterEvent_Callback(QPolarChart_DragEnterEvent_Callback cb) { qpolarchart_dragenterevent_callback = cb; }
    inline void setQPolarChart_DragLeaveEvent_Callback(QPolarChart_DragLeaveEvent_Callback cb) { qpolarchart_dragleaveevent_callback = cb; }
    inline void setQPolarChart_DragMoveEvent_Callback(QPolarChart_DragMoveEvent_Callback cb) { qpolarchart_dragmoveevent_callback = cb; }
    inline void setQPolarChart_DropEvent_Callback(QPolarChart_DropEvent_Callback cb) { qpolarchart_dropevent_callback = cb; }
    inline void setQPolarChart_HoverEnterEvent_Callback(QPolarChart_HoverEnterEvent_Callback cb) { qpolarchart_hoverenterevent_callback = cb; }
    inline void setQPolarChart_KeyPressEvent_Callback(QPolarChart_KeyPressEvent_Callback cb) { qpolarchart_keypressevent_callback = cb; }
    inline void setQPolarChart_KeyReleaseEvent_Callback(QPolarChart_KeyReleaseEvent_Callback cb) { qpolarchart_keyreleaseevent_callback = cb; }
    inline void setQPolarChart_MousePressEvent_Callback(QPolarChart_MousePressEvent_Callback cb) { qpolarchart_mousepressevent_callback = cb; }
    inline void setQPolarChart_MouseMoveEvent_Callback(QPolarChart_MouseMoveEvent_Callback cb) { qpolarchart_mousemoveevent_callback = cb; }
    inline void setQPolarChart_MouseReleaseEvent_Callback(QPolarChart_MouseReleaseEvent_Callback cb) { qpolarchart_mousereleaseevent_callback = cb; }
    inline void setQPolarChart_MouseDoubleClickEvent_Callback(QPolarChart_MouseDoubleClickEvent_Callback cb) { qpolarchart_mousedoubleclickevent_callback = cb; }
    inline void setQPolarChart_WheelEvent_Callback(QPolarChart_WheelEvent_Callback cb) { qpolarchart_wheelevent_callback = cb; }
    inline void setQPolarChart_InputMethodEvent_Callback(QPolarChart_InputMethodEvent_Callback cb) { qpolarchart_inputmethodevent_callback = cb; }
    inline void setQPolarChart_InputMethodQuery_Callback(QPolarChart_InputMethodQuery_Callback cb) { qpolarchart_inputmethodquery_callback = cb; }
    inline void setQPolarChart_SupportsExtension_Callback(QPolarChart_SupportsExtension_Callback cb) { qpolarchart_supportsextension_callback = cb; }
    inline void setQPolarChart_SetExtension_Callback(QPolarChart_SetExtension_Callback cb) { qpolarchart_setextension_callback = cb; }
    inline void setQPolarChart_Extension_Callback(QPolarChart_Extension_Callback cb) { qpolarchart_extension_callback = cb; }
    inline void setQPolarChart_IsEmpty_Callback(QPolarChart_IsEmpty_Callback cb) { qpolarchart_isempty_callback = cb; }
    inline void setQPolarChart_UpdateMicroFocus_Callback(QPolarChart_UpdateMicroFocus_Callback cb) { qpolarchart_updatemicrofocus_callback = cb; }
    inline void setQPolarChart_Sender_Callback(QPolarChart_Sender_Callback cb) { qpolarchart_sender_callback = cb; }
    inline void setQPolarChart_SenderSignalIndex_Callback(QPolarChart_SenderSignalIndex_Callback cb) { qpolarchart_sendersignalindex_callback = cb; }
    inline void setQPolarChart_Receivers_Callback(QPolarChart_Receivers_Callback cb) { qpolarchart_receivers_callback = cb; }
    inline void setQPolarChart_IsSignalConnected_Callback(QPolarChart_IsSignalConnected_Callback cb) { qpolarchart_issignalconnected_callback = cb; }
    inline void setQPolarChart_AddToIndex_Callback(QPolarChart_AddToIndex_Callback cb) { qpolarchart_addtoindex_callback = cb; }
    inline void setQPolarChart_RemoveFromIndex_Callback(QPolarChart_RemoveFromIndex_Callback cb) { qpolarchart_removefromindex_callback = cb; }
    inline void setQPolarChart_PrepareGeometryChange_Callback(QPolarChart_PrepareGeometryChange_Callback cb) { qpolarchart_preparegeometrychange_callback = cb; }
    inline void setQPolarChart_SetGraphicsItem_Callback(QPolarChart_SetGraphicsItem_Callback cb) { qpolarchart_setgraphicsitem_callback = cb; }
    inline void setQPolarChart_SetOwnedByLayout_Callback(QPolarChart_SetOwnedByLayout_Callback cb) { qpolarchart_setownedbylayout_callback = cb; }

    // Base flag setters
    inline void setQPolarChart_MetaObject_IsBase(bool value) const { qpolarchart_metaobject_isbase = value; }
    inline void setQPolarChart_Metacast_IsBase(bool value) const { qpolarchart_metacast_isbase = value; }
    inline void setQPolarChart_Metacall_IsBase(bool value) const { qpolarchart_metacall_isbase = value; }
    inline void setQPolarChart_SetGeometry_IsBase(bool value) const { qpolarchart_setgeometry_isbase = value; }
    inline void setQPolarChart_GetContentsMargins_IsBase(bool value) const { qpolarchart_getcontentsmargins_isbase = value; }
    inline void setQPolarChart_Type_IsBase(bool value) const { qpolarchart_type_isbase = value; }
    inline void setQPolarChart_Paint_IsBase(bool value) const { qpolarchart_paint_isbase = value; }
    inline void setQPolarChart_PaintWindowFrame_IsBase(bool value) const { qpolarchart_paintwindowframe_isbase = value; }
    inline void setQPolarChart_BoundingRect_IsBase(bool value) const { qpolarchart_boundingrect_isbase = value; }
    inline void setQPolarChart_Shape_IsBase(bool value) const { qpolarchart_shape_isbase = value; }
    inline void setQPolarChart_InitStyleOption_IsBase(bool value) const { qpolarchart_initstyleoption_isbase = value; }
    inline void setQPolarChart_SizeHint_IsBase(bool value) const { qpolarchart_sizehint_isbase = value; }
    inline void setQPolarChart_UpdateGeometry_IsBase(bool value) const { qpolarchart_updategeometry_isbase = value; }
    inline void setQPolarChart_ItemChange_IsBase(bool value) const { qpolarchart_itemchange_isbase = value; }
    inline void setQPolarChart_PropertyChange_IsBase(bool value) const { qpolarchart_propertychange_isbase = value; }
    inline void setQPolarChart_SceneEvent_IsBase(bool value) const { qpolarchart_sceneevent_isbase = value; }
    inline void setQPolarChart_WindowFrameEvent_IsBase(bool value) const { qpolarchart_windowframeevent_isbase = value; }
    inline void setQPolarChart_WindowFrameSectionAt_IsBase(bool value) const { qpolarchart_windowframesectionat_isbase = value; }
    inline void setQPolarChart_Event_IsBase(bool value) const { qpolarchart_event_isbase = value; }
    inline void setQPolarChart_ChangeEvent_IsBase(bool value) const { qpolarchart_changeevent_isbase = value; }
    inline void setQPolarChart_CloseEvent_IsBase(bool value) const { qpolarchart_closeevent_isbase = value; }
    inline void setQPolarChart_FocusInEvent_IsBase(bool value) const { qpolarchart_focusinevent_isbase = value; }
    inline void setQPolarChart_FocusNextPrevChild_IsBase(bool value) const { qpolarchart_focusnextprevchild_isbase = value; }
    inline void setQPolarChart_FocusOutEvent_IsBase(bool value) const { qpolarchart_focusoutevent_isbase = value; }
    inline void setQPolarChart_HideEvent_IsBase(bool value) const { qpolarchart_hideevent_isbase = value; }
    inline void setQPolarChart_MoveEvent_IsBase(bool value) const { qpolarchart_moveevent_isbase = value; }
    inline void setQPolarChart_PolishEvent_IsBase(bool value) const { qpolarchart_polishevent_isbase = value; }
    inline void setQPolarChart_ResizeEvent_IsBase(bool value) const { qpolarchart_resizeevent_isbase = value; }
    inline void setQPolarChart_ShowEvent_IsBase(bool value) const { qpolarchart_showevent_isbase = value; }
    inline void setQPolarChart_HoverMoveEvent_IsBase(bool value) const { qpolarchart_hovermoveevent_isbase = value; }
    inline void setQPolarChart_HoverLeaveEvent_IsBase(bool value) const { qpolarchart_hoverleaveevent_isbase = value; }
    inline void setQPolarChart_GrabMouseEvent_IsBase(bool value) const { qpolarchart_grabmouseevent_isbase = value; }
    inline void setQPolarChart_UngrabMouseEvent_IsBase(bool value) const { qpolarchart_ungrabmouseevent_isbase = value; }
    inline void setQPolarChart_GrabKeyboardEvent_IsBase(bool value) const { qpolarchart_grabkeyboardevent_isbase = value; }
    inline void setQPolarChart_UngrabKeyboardEvent_IsBase(bool value) const { qpolarchart_ungrabkeyboardevent_isbase = value; }
    inline void setQPolarChart_EventFilter_IsBase(bool value) const { qpolarchart_eventfilter_isbase = value; }
    inline void setQPolarChart_TimerEvent_IsBase(bool value) const { qpolarchart_timerevent_isbase = value; }
    inline void setQPolarChart_ChildEvent_IsBase(bool value) const { qpolarchart_childevent_isbase = value; }
    inline void setQPolarChart_CustomEvent_IsBase(bool value) const { qpolarchart_customevent_isbase = value; }
    inline void setQPolarChart_ConnectNotify_IsBase(bool value) const { qpolarchart_connectnotify_isbase = value; }
    inline void setQPolarChart_DisconnectNotify_IsBase(bool value) const { qpolarchart_disconnectnotify_isbase = value; }
    inline void setQPolarChart_Advance_IsBase(bool value) const { qpolarchart_advance_isbase = value; }
    inline void setQPolarChart_Contains_IsBase(bool value) const { qpolarchart_contains_isbase = value; }
    inline void setQPolarChart_CollidesWithItem_IsBase(bool value) const { qpolarchart_collideswithitem_isbase = value; }
    inline void setQPolarChart_CollidesWithPath_IsBase(bool value) const { qpolarchart_collideswithpath_isbase = value; }
    inline void setQPolarChart_IsObscuredBy_IsBase(bool value) const { qpolarchart_isobscuredby_isbase = value; }
    inline void setQPolarChart_OpaqueArea_IsBase(bool value) const { qpolarchart_opaquearea_isbase = value; }
    inline void setQPolarChart_SceneEventFilter_IsBase(bool value) const { qpolarchart_sceneeventfilter_isbase = value; }
    inline void setQPolarChart_ContextMenuEvent_IsBase(bool value) const { qpolarchart_contextmenuevent_isbase = value; }
    inline void setQPolarChart_DragEnterEvent_IsBase(bool value) const { qpolarchart_dragenterevent_isbase = value; }
    inline void setQPolarChart_DragLeaveEvent_IsBase(bool value) const { qpolarchart_dragleaveevent_isbase = value; }
    inline void setQPolarChart_DragMoveEvent_IsBase(bool value) const { qpolarchart_dragmoveevent_isbase = value; }
    inline void setQPolarChart_DropEvent_IsBase(bool value) const { qpolarchart_dropevent_isbase = value; }
    inline void setQPolarChart_HoverEnterEvent_IsBase(bool value) const { qpolarchart_hoverenterevent_isbase = value; }
    inline void setQPolarChart_KeyPressEvent_IsBase(bool value) const { qpolarchart_keypressevent_isbase = value; }
    inline void setQPolarChart_KeyReleaseEvent_IsBase(bool value) const { qpolarchart_keyreleaseevent_isbase = value; }
    inline void setQPolarChart_MousePressEvent_IsBase(bool value) const { qpolarchart_mousepressevent_isbase = value; }
    inline void setQPolarChart_MouseMoveEvent_IsBase(bool value) const { qpolarchart_mousemoveevent_isbase = value; }
    inline void setQPolarChart_MouseReleaseEvent_IsBase(bool value) const { qpolarchart_mousereleaseevent_isbase = value; }
    inline void setQPolarChart_MouseDoubleClickEvent_IsBase(bool value) const { qpolarchart_mousedoubleclickevent_isbase = value; }
    inline void setQPolarChart_WheelEvent_IsBase(bool value) const { qpolarchart_wheelevent_isbase = value; }
    inline void setQPolarChart_InputMethodEvent_IsBase(bool value) const { qpolarchart_inputmethodevent_isbase = value; }
    inline void setQPolarChart_InputMethodQuery_IsBase(bool value) const { qpolarchart_inputmethodquery_isbase = value; }
    inline void setQPolarChart_SupportsExtension_IsBase(bool value) const { qpolarchart_supportsextension_isbase = value; }
    inline void setQPolarChart_SetExtension_IsBase(bool value) const { qpolarchart_setextension_isbase = value; }
    inline void setQPolarChart_Extension_IsBase(bool value) const { qpolarchart_extension_isbase = value; }
    inline void setQPolarChart_IsEmpty_IsBase(bool value) const { qpolarchart_isempty_isbase = value; }
    inline void setQPolarChart_UpdateMicroFocus_IsBase(bool value) const { qpolarchart_updatemicrofocus_isbase = value; }
    inline void setQPolarChart_Sender_IsBase(bool value) const { qpolarchart_sender_isbase = value; }
    inline void setQPolarChart_SenderSignalIndex_IsBase(bool value) const { qpolarchart_sendersignalindex_isbase = value; }
    inline void setQPolarChart_Receivers_IsBase(bool value) const { qpolarchart_receivers_isbase = value; }
    inline void setQPolarChart_IsSignalConnected_IsBase(bool value) const { qpolarchart_issignalconnected_isbase = value; }
    inline void setQPolarChart_AddToIndex_IsBase(bool value) const { qpolarchart_addtoindex_isbase = value; }
    inline void setQPolarChart_RemoveFromIndex_IsBase(bool value) const { qpolarchart_removefromindex_isbase = value; }
    inline void setQPolarChart_PrepareGeometryChange_IsBase(bool value) const { qpolarchart_preparegeometrychange_isbase = value; }
    inline void setQPolarChart_SetGraphicsItem_IsBase(bool value) const { qpolarchart_setgraphicsitem_isbase = value; }
    inline void setQPolarChart_SetOwnedByLayout_IsBase(bool value) const { qpolarchart_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpolarchart_metaobject_isbase) {
            qpolarchart_metaobject_isbase = false;
            return QPolarChart::metaObject();
        }
        auto metaobject_cb = qpolarchart_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPolarChart::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpolarchart_metacast_isbase) {
            qpolarchart_metacast_isbase = false;
            return QPolarChart::qt_metacast(param1);
        }
        auto metacast_cb = qpolarchart_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpolarchart_metacall_isbase) {
            qpolarchart_metacall_isbase = false;
            return QPolarChart::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qpolarchart_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPolarChart::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qpolarchart_setgeometry_isbase) {
            qpolarchart_setgeometry_isbase = false;
            QPolarChart::setGeometry(rect);
            return;
        }
        auto setgeometry_cb = qpolarchart_setgeometry_callback;
        if (setgeometry_cb) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            setgeometry_cb(this, cbval1);
            return;
        }
        QPolarChart::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qpolarchart_getcontentsmargins_isbase) {
            qpolarchart_getcontentsmargins_isbase = false;
            QPolarChart::getContentsMargins(left, top, right, bottom);
            return;
        }
        auto getcontentsmargins_cb = qpolarchart_getcontentsmargins_callback;
        if (getcontentsmargins_cb) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            getcontentsmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QPolarChart::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qpolarchart_type_isbase) {
            qpolarchart_type_isbase = false;
            return QPolarChart::type();
        }
        auto type_cb = qpolarchart_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QPolarChart::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qpolarchart_paint_isbase) {
            qpolarchart_paint_isbase = false;
            QPolarChart::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qpolarchart_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPolarChart::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qpolarchart_paintwindowframe_isbase) {
            qpolarchart_paintwindowframe_isbase = false;
            QPolarChart::paintWindowFrame(painter, option, widget);
            return;
        }
        auto paintwindowframe_cb = qpolarchart_paintwindowframe_callback;
        if (paintwindowframe_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paintwindowframe_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPolarChart::paintWindowFrame(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qpolarchart_boundingrect_isbase) {
            qpolarchart_boundingrect_isbase = false;
            return QPolarChart::boundingRect();
        }
        auto boundingrect_cb = qpolarchart_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QPolarChart::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qpolarchart_shape_isbase) {
            qpolarchart_shape_isbase = false;
            return QPolarChart::shape();
        }
        auto shape_cb = qpolarchart_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QPolarChart::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qpolarchart_initstyleoption_isbase) {
            qpolarchart_initstyleoption_isbase = false;
            QPolarChart::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qpolarchart_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOption* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QPolarChart::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qpolarchart_sizehint_isbase) {
            qpolarchart_sizehint_isbase = false;
            return QPolarChart::sizeHint(which, constraint);
        }
        auto sizehint_cb = qpolarchart_sizehint_callback;
        if (sizehint_cb) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = sizehint_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QPolarChart::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qpolarchart_updategeometry_isbase) {
            qpolarchart_updategeometry_isbase = false;
            QPolarChart::updateGeometry();
            return;
        }
        auto updategeometry_cb = qpolarchart_updategeometry_callback;
        if (updategeometry_cb) {
            updategeometry_cb();
            return;
        }
        QPolarChart::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qpolarchart_itemchange_isbase) {
            qpolarchart_itemchange_isbase = false;
            return QPolarChart::itemChange(change, value);
        }
        auto itemchange_cb = qpolarchart_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QPolarChart::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qpolarchart_propertychange_isbase) {
            qpolarchart_propertychange_isbase = false;
            return QPolarChart::propertyChange(propertyName, value);
        }
        auto propertychange_cb = qpolarchart_propertychange_callback;
        if (propertychange_cb) {
            const QString propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            auto propertyName_str_len = propertyName_b.length();
            const char* propertyName_str = static_cast<const char*>(malloc(propertyName_str_len + 1));
            memcpy((void*)propertyName_str, propertyName_b.data(), propertyName_str_len);
            ((char*)propertyName_str)[propertyName_str_len] = '\0';
            const char* cbval1 = propertyName_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = propertychange_cb(this, cbval1, cbval2);
            libqt_free(propertyName_str);
            return *callback_ret;
        }
        return QPolarChart::propertyChange(propertyName, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qpolarchart_sceneevent_isbase) {
            qpolarchart_sceneevent_isbase = false;
            return QPolarChart::sceneEvent(event);
        }
        auto sceneevent_cb = qpolarchart_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qpolarchart_windowframeevent_isbase) {
            qpolarchart_windowframeevent_isbase = false;
            return QPolarChart::windowFrameEvent(e);
        }
        auto windowframeevent_cb = qpolarchart_windowframeevent_callback;
        if (windowframeevent_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = windowframeevent_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::windowFrameEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qpolarchart_windowframesectionat_isbase) {
            qpolarchart_windowframesectionat_isbase = false;
            return QPolarChart::windowFrameSectionAt(pos);
        }
        auto windowframesectionat_cb = qpolarchart_windowframesectionat_callback;
        if (windowframesectionat_cb) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);

            int callback_ret = windowframesectionat_cb(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        }
        return QPolarChart::windowFrameSectionAt(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpolarchart_event_isbase) {
            qpolarchart_event_isbase = false;
            return QPolarChart::event(event);
        }
        auto event_cb = qpolarchart_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qpolarchart_changeevent_isbase) {
            qpolarchart_changeevent_isbase = false;
            QPolarChart::changeEvent(event);
            return;
        }
        auto changeevent_cb = qpolarchart_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QPolarChart::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpolarchart_closeevent_isbase) {
            qpolarchart_closeevent_isbase = false;
            QPolarChart::closeEvent(event);
            return;
        }
        auto closeevent_cb = qpolarchart_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QPolarChart::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpolarchart_focusinevent_isbase) {
            qpolarchart_focusinevent_isbase = false;
            QPolarChart::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qpolarchart_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QPolarChart::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpolarchart_focusnextprevchild_isbase) {
            qpolarchart_focusnextprevchild_isbase = false;
            return QPolarChart::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qpolarchart_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpolarchart_focusoutevent_isbase) {
            qpolarchart_focusoutevent_isbase = false;
            QPolarChart::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qpolarchart_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QPolarChart::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpolarchart_hideevent_isbase) {
            qpolarchart_hideevent_isbase = false;
            QPolarChart::hideEvent(event);
            return;
        }
        auto hideevent_cb = qpolarchart_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QPolarChart::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qpolarchart_moveevent_isbase) {
            qpolarchart_moveevent_isbase = false;
            QPolarChart::moveEvent(event);
            return;
        }
        auto moveevent_cb = qpolarchart_moveevent_callback;
        if (moveevent_cb) {
            QGraphicsSceneMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QPolarChart::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qpolarchart_polishevent_isbase) {
            qpolarchart_polishevent_isbase = false;
            QPolarChart::polishEvent();
            return;
        }
        auto polishevent_cb = qpolarchart_polishevent_callback;
        if (polishevent_cb) {
            polishevent_cb();
            return;
        }
        QPolarChart::polishEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qpolarchart_resizeevent_isbase) {
            qpolarchart_resizeevent_isbase = false;
            QPolarChart::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qpolarchart_resizeevent_callback;
        if (resizeevent_cb) {
            QGraphicsSceneResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QPolarChart::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpolarchart_showevent_isbase) {
            qpolarchart_showevent_isbase = false;
            QPolarChart::showEvent(event);
            return;
        }
        auto showevent_cb = qpolarchart_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QPolarChart::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hovermoveevent_isbase) {
            qpolarchart_hovermoveevent_isbase = false;
            QPolarChart::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qpolarchart_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QPolarChart::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hoverleaveevent_isbase) {
            qpolarchart_hoverleaveevent_isbase = false;
            QPolarChart::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qpolarchart_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QPolarChart::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qpolarchart_grabmouseevent_isbase) {
            qpolarchart_grabmouseevent_isbase = false;
            QPolarChart::grabMouseEvent(event);
            return;
        }
        auto grabmouseevent_cb = qpolarchart_grabmouseevent_callback;
        if (grabmouseevent_cb) {
            QEvent* cbval1 = event;

            grabmouseevent_cb(this, cbval1);
            return;
        }
        QPolarChart::grabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qpolarchart_ungrabmouseevent_isbase) {
            qpolarchart_ungrabmouseevent_isbase = false;
            QPolarChart::ungrabMouseEvent(event);
            return;
        }
        auto ungrabmouseevent_cb = qpolarchart_ungrabmouseevent_callback;
        if (ungrabmouseevent_cb) {
            QEvent* cbval1 = event;

            ungrabmouseevent_cb(this, cbval1);
            return;
        }
        QPolarChart::ungrabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qpolarchart_grabkeyboardevent_isbase) {
            qpolarchart_grabkeyboardevent_isbase = false;
            QPolarChart::grabKeyboardEvent(event);
            return;
        }
        auto grabkeyboardevent_cb = qpolarchart_grabkeyboardevent_callback;
        if (grabkeyboardevent_cb) {
            QEvent* cbval1 = event;

            grabkeyboardevent_cb(this, cbval1);
            return;
        }
        QPolarChart::grabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qpolarchart_ungrabkeyboardevent_isbase) {
            qpolarchart_ungrabkeyboardevent_isbase = false;
            QPolarChart::ungrabKeyboardEvent(event);
            return;
        }
        auto ungrabkeyboardevent_cb = qpolarchart_ungrabkeyboardevent_callback;
        if (ungrabkeyboardevent_cb) {
            QEvent* cbval1 = event;

            ungrabkeyboardevent_cb(this, cbval1);
            return;
        }
        QPolarChart::ungrabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpolarchart_eventfilter_isbase) {
            qpolarchart_eventfilter_isbase = false;
            return QPolarChart::eventFilter(watched, event);
        }
        auto eventfilter_cb = qpolarchart_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpolarchart_timerevent_isbase) {
            qpolarchart_timerevent_isbase = false;
            QPolarChart::timerEvent(event);
            return;
        }
        auto timerevent_cb = qpolarchart_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QPolarChart::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpolarchart_childevent_isbase) {
            qpolarchart_childevent_isbase = false;
            QPolarChart::childEvent(event);
            return;
        }
        auto childevent_cb = qpolarchart_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPolarChart::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpolarchart_customevent_isbase) {
            qpolarchart_customevent_isbase = false;
            QPolarChart::customEvent(event);
            return;
        }
        auto customevent_cb = qpolarchart_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPolarChart::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpolarchart_connectnotify_isbase) {
            qpolarchart_connectnotify_isbase = false;
            QPolarChart::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qpolarchart_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPolarChart::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpolarchart_disconnectnotify_isbase) {
            qpolarchart_disconnectnotify_isbase = false;
            QPolarChart::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qpolarchart_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPolarChart::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qpolarchart_advance_isbase) {
            qpolarchart_advance_isbase = false;
            QPolarChart::advance(phase);
            return;
        }
        auto advance_cb = qpolarchart_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QPolarChart::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qpolarchart_contains_isbase) {
            qpolarchart_contains_isbase = false;
            return QPolarChart::contains(point);
        }
        auto contains_cb = qpolarchart_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qpolarchart_collideswithitem_isbase) {
            qpolarchart_collideswithitem_isbase = false;
            return QPolarChart::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qpolarchart_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qpolarchart_collideswithpath_isbase) {
            qpolarchart_collideswithpath_isbase = false;
            return QPolarChart::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qpolarchart_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qpolarchart_isobscuredby_isbase) {
            qpolarchart_isobscuredby_isbase = false;
            return QPolarChart::isObscuredBy(item);
        }
        auto isobscuredby_cb = qpolarchart_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qpolarchart_opaquearea_isbase) {
            qpolarchart_opaquearea_isbase = false;
            return QPolarChart::opaqueArea();
        }
        auto opaquearea_cb = qpolarchart_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QPolarChart::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qpolarchart_sceneeventfilter_isbase) {
            qpolarchart_sceneeventfilter_isbase = false;
            return QPolarChart::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qpolarchart_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPolarChart::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qpolarchart_contextmenuevent_isbase) {
            qpolarchart_contextmenuevent_isbase = false;
            QPolarChart::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qpolarchart_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QPolarChart::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragenterevent_isbase) {
            qpolarchart_dragenterevent_isbase = false;
            QPolarChart::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qpolarchart_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QPolarChart::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragleaveevent_isbase) {
            qpolarchart_dragleaveevent_isbase = false;
            QPolarChart::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qpolarchart_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QPolarChart::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragmoveevent_isbase) {
            qpolarchart_dragmoveevent_isbase = false;
            QPolarChart::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qpolarchart_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QPolarChart::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dropevent_isbase) {
            qpolarchart_dropevent_isbase = false;
            QPolarChart::dropEvent(event);
            return;
        }
        auto dropevent_cb = qpolarchart_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QPolarChart::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hoverenterevent_isbase) {
            qpolarchart_hoverenterevent_isbase = false;
            QPolarChart::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qpolarchart_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QPolarChart::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qpolarchart_keypressevent_isbase) {
            qpolarchart_keypressevent_isbase = false;
            QPolarChart::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qpolarchart_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QPolarChart::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpolarchart_keyreleaseevent_isbase) {
            qpolarchart_keyreleaseevent_isbase = false;
            QPolarChart::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qpolarchart_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QPolarChart::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousepressevent_isbase) {
            qpolarchart_mousepressevent_isbase = false;
            QPolarChart::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qpolarchart_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QPolarChart::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousemoveevent_isbase) {
            qpolarchart_mousemoveevent_isbase = false;
            QPolarChart::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qpolarchart_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QPolarChart::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousereleaseevent_isbase) {
            qpolarchart_mousereleaseevent_isbase = false;
            QPolarChart::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qpolarchart_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QPolarChart::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousedoubleclickevent_isbase) {
            qpolarchart_mousedoubleclickevent_isbase = false;
            QPolarChart::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qpolarchart_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QPolarChart::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qpolarchart_wheelevent_isbase) {
            qpolarchart_wheelevent_isbase = false;
            QPolarChart::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qpolarchart_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QPolarChart::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qpolarchart_inputmethodevent_isbase) {
            qpolarchart_inputmethodevent_isbase = false;
            QPolarChart::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qpolarchart_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QPolarChart::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qpolarchart_inputmethodquery_isbase) {
            qpolarchart_inputmethodquery_isbase = false;
            return QPolarChart::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qpolarchart_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QPolarChart::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qpolarchart_supportsextension_isbase) {
            qpolarchart_supportsextension_isbase = false;
            return QPolarChart::supportsExtension(extension);
        }
        auto supportsextension_cb = qpolarchart_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qpolarchart_setextension_isbase) {
            qpolarchart_setextension_isbase = false;
            QPolarChart::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qpolarchart_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QPolarChart::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qpolarchart_extension_isbase) {
            qpolarchart_extension_isbase = false;
            return QPolarChart::extension(variant);
        }
        auto extension_cb = qpolarchart_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QPolarChart::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qpolarchart_isempty_isbase) {
            qpolarchart_isempty_isbase = false;
            return QPolarChart::isEmpty();
        }
        auto isempty_cb = qpolarchart_isempty_callback;
        if (isempty_cb) {
            bool callback_ret = isempty_cb();
            return callback_ret;
        }
        return QPolarChart::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpolarchart_updatemicrofocus_isbase) {
            qpolarchart_updatemicrofocus_isbase = false;
            QPolarChart::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qpolarchart_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QPolarChart::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpolarchart_sender_isbase) {
            qpolarchart_sender_isbase = false;
            return QPolarChart::sender();
        }
        auto sender_cb = qpolarchart_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPolarChart::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpolarchart_sendersignalindex_isbase) {
            qpolarchart_sendersignalindex_isbase = false;
            return QPolarChart::senderSignalIndex();
        }
        auto sendersignalindex_cb = qpolarchart_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPolarChart::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpolarchart_receivers_isbase) {
            qpolarchart_receivers_isbase = false;
            return QPolarChart::receivers(signal);
        }
        auto receivers_cb = qpolarchart_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPolarChart::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpolarchart_issignalconnected_isbase) {
            qpolarchart_issignalconnected_isbase = false;
            return QPolarChart::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qpolarchart_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPolarChart::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qpolarchart_addtoindex_isbase) {
            qpolarchart_addtoindex_isbase = false;
            QPolarChart::addToIndex();
            return;
        }
        auto addtoindex_cb = qpolarchart_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QPolarChart::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qpolarchart_removefromindex_isbase) {
            qpolarchart_removefromindex_isbase = false;
            QPolarChart::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qpolarchart_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QPolarChart::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qpolarchart_preparegeometrychange_isbase) {
            qpolarchart_preparegeometrychange_isbase = false;
            QPolarChart::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qpolarchart_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QPolarChart::prepareGeometryChange();
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qpolarchart_setgraphicsitem_isbase) {
            qpolarchart_setgraphicsitem_isbase = false;
            QPolarChart::setGraphicsItem(item);
            return;
        }
        auto setgraphicsitem_cb = qpolarchart_setgraphicsitem_callback;
        if (setgraphicsitem_cb) {
            QGraphicsItem* cbval1 = item;

            setgraphicsitem_cb(this, cbval1);
            return;
        }
        QPolarChart::setGraphicsItem(item);
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qpolarchart_setownedbylayout_isbase) {
            qpolarchart_setownedbylayout_isbase = false;
            QPolarChart::setOwnedByLayout(ownedByLayout);
            return;
        }
        auto setownedbylayout_cb = qpolarchart_setownedbylayout_callback;
        if (setownedbylayout_cb) {
            bool cbval1 = ownedByLayout;

            setownedbylayout_cb(this, cbval1);
            return;
        }
        QPolarChart::setOwnedByLayout(ownedByLayout);
    }

    // Friend functions
    friend void QPolarChart_InitStyleOption(const QPolarChart* self, QStyleOption* option);
    friend void QPolarChart_SuperInitStyleOption(const QPolarChart* self, QStyleOption* option);
    friend QSizeF* QPolarChart_SizeHint(const QPolarChart* self, int which, const QSizeF* constraint);
    friend QSizeF* QPolarChart_SuperSizeHint(const QPolarChart* self, int which, const QSizeF* constraint);
    friend void QPolarChart_UpdateGeometry(QPolarChart* self);
    friend void QPolarChart_SuperUpdateGeometry(QPolarChart* self);
    friend QVariant* QPolarChart_ItemChange(QPolarChart* self, int change, const QVariant* value);
    friend QVariant* QPolarChart_SuperItemChange(QPolarChart* self, int change, const QVariant* value);
    friend QVariant* QPolarChart_PropertyChange(QPolarChart* self, const libqt_string propertyName, const QVariant* value);
    friend QVariant* QPolarChart_SuperPropertyChange(QPolarChart* self, const libqt_string propertyName, const QVariant* value);
    friend bool QPolarChart_SceneEvent(QPolarChart* self, QEvent* event);
    friend bool QPolarChart_SuperSceneEvent(QPolarChart* self, QEvent* event);
    friend bool QPolarChart_WindowFrameEvent(QPolarChart* self, QEvent* e);
    friend bool QPolarChart_SuperWindowFrameEvent(QPolarChart* self, QEvent* e);
    friend int QPolarChart_WindowFrameSectionAt(const QPolarChart* self, const QPointF* pos);
    friend int QPolarChart_SuperWindowFrameSectionAt(const QPolarChart* self, const QPointF* pos);
    friend bool QPolarChart_Event(QPolarChart* self, QEvent* event);
    friend bool QPolarChart_SuperEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_ChangeEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperChangeEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_CloseEvent(QPolarChart* self, QCloseEvent* event);
    friend void QPolarChart_SuperCloseEvent(QPolarChart* self, QCloseEvent* event);
    friend void QPolarChart_FocusInEvent(QPolarChart* self, QFocusEvent* event);
    friend void QPolarChart_SuperFocusInEvent(QPolarChart* self, QFocusEvent* event);
    friend bool QPolarChart_FocusNextPrevChild(QPolarChart* self, bool next);
    friend bool QPolarChart_SuperFocusNextPrevChild(QPolarChart* self, bool next);
    friend void QPolarChart_FocusOutEvent(QPolarChart* self, QFocusEvent* event);
    friend void QPolarChart_SuperFocusOutEvent(QPolarChart* self, QFocusEvent* event);
    friend void QPolarChart_HideEvent(QPolarChart* self, QHideEvent* event);
    friend void QPolarChart_SuperHideEvent(QPolarChart* self, QHideEvent* event);
    friend void QPolarChart_MoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event);
    friend void QPolarChart_SuperMoveEvent(QPolarChart* self, QGraphicsSceneMoveEvent* event);
    friend void QPolarChart_PolishEvent(QPolarChart* self);
    friend void QPolarChart_SuperPolishEvent(QPolarChart* self);
    friend void QPolarChart_ResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event);
    friend void QPolarChart_SuperResizeEvent(QPolarChart* self, QGraphicsSceneResizeEvent* event);
    friend void QPolarChart_ShowEvent(QPolarChart* self, QShowEvent* event);
    friend void QPolarChart_SuperShowEvent(QPolarChart* self, QShowEvent* event);
    friend void QPolarChart_HoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_SuperHoverMoveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_HoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_SuperHoverLeaveEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_GrabMouseEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperGrabMouseEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_UngrabMouseEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperUngrabMouseEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_GrabKeyboardEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperGrabKeyboardEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_UngrabKeyboardEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperUngrabKeyboardEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_TimerEvent(QPolarChart* self, QTimerEvent* event);
    friend void QPolarChart_SuperTimerEvent(QPolarChart* self, QTimerEvent* event);
    friend void QPolarChart_ChildEvent(QPolarChart* self, QChildEvent* event);
    friend void QPolarChart_SuperChildEvent(QPolarChart* self, QChildEvent* event);
    friend void QPolarChart_CustomEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_SuperCustomEvent(QPolarChart* self, QEvent* event);
    friend void QPolarChart_ConnectNotify(QPolarChart* self, const QMetaMethod* signal);
    friend void QPolarChart_SuperConnectNotify(QPolarChart* self, const QMetaMethod* signal);
    friend void QPolarChart_DisconnectNotify(QPolarChart* self, const QMetaMethod* signal);
    friend void QPolarChart_SuperDisconnectNotify(QPolarChart* self, const QMetaMethod* signal);
    friend bool QPolarChart_SceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event);
    friend bool QPolarChart_SuperSceneEventFilter(QPolarChart* self, QGraphicsItem* watched, QEvent* event);
    friend void QPolarChart_ContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event);
    friend void QPolarChart_SuperContextMenuEvent(QPolarChart* self, QGraphicsSceneContextMenuEvent* event);
    friend void QPolarChart_DragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperDragEnterEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_DragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperDragLeaveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_DragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperDragMoveEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_DropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_SuperDropEvent(QPolarChart* self, QGraphicsSceneDragDropEvent* event);
    friend void QPolarChart_HoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_SuperHoverEnterEvent(QPolarChart* self, QGraphicsSceneHoverEvent* event);
    friend void QPolarChart_KeyPressEvent(QPolarChart* self, QKeyEvent* event);
    friend void QPolarChart_SuperKeyPressEvent(QPolarChart* self, QKeyEvent* event);
    friend void QPolarChart_KeyReleaseEvent(QPolarChart* self, QKeyEvent* event);
    friend void QPolarChart_SuperKeyReleaseEvent(QPolarChart* self, QKeyEvent* event);
    friend void QPolarChart_MousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperMousePressEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_MouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperMouseMoveEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_MouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperMouseReleaseEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_MouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_SuperMouseDoubleClickEvent(QPolarChart* self, QGraphicsSceneMouseEvent* event);
    friend void QPolarChart_WheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event);
    friend void QPolarChart_SuperWheelEvent(QPolarChart* self, QGraphicsSceneWheelEvent* event);
    friend void QPolarChart_InputMethodEvent(QPolarChart* self, QInputMethodEvent* event);
    friend void QPolarChart_SuperInputMethodEvent(QPolarChart* self, QInputMethodEvent* event);
    friend QVariant* QPolarChart_InputMethodQuery(const QPolarChart* self, int query);
    friend QVariant* QPolarChart_SuperInputMethodQuery(const QPolarChart* self, int query);
    friend bool QPolarChart_SupportsExtension(const QPolarChart* self, int extension);
    friend bool QPolarChart_SuperSupportsExtension(const QPolarChart* self, int extension);
    friend void QPolarChart_SetExtension(QPolarChart* self, int extension, const QVariant* variant);
    friend void QPolarChart_SuperSetExtension(QPolarChart* self, int extension, const QVariant* variant);
    friend QVariant* QPolarChart_Extension(const QPolarChart* self, const QVariant* variant);
    friend QVariant* QPolarChart_SuperExtension(const QPolarChart* self, const QVariant* variant);
    friend void QPolarChart_UpdateMicroFocus(QPolarChart* self);
    friend void QPolarChart_SuperUpdateMicroFocus(QPolarChart* self);
    friend QObject* QPolarChart_Sender(const QPolarChart* self);
    friend QObject* QPolarChart_SuperSender(const QPolarChart* self);
    friend int QPolarChart_SenderSignalIndex(const QPolarChart* self);
    friend int QPolarChart_SuperSenderSignalIndex(const QPolarChart* self);
    friend int QPolarChart_Receivers(const QPolarChart* self, const char* signal);
    friend int QPolarChart_SuperReceivers(const QPolarChart* self, const char* signal);
    friend bool QPolarChart_IsSignalConnected(const QPolarChart* self, const QMetaMethod* signal);
    friend bool QPolarChart_SuperIsSignalConnected(const QPolarChart* self, const QMetaMethod* signal);
    friend void QPolarChart_AddToIndex(QPolarChart* self);
    friend void QPolarChart_SuperAddToIndex(QPolarChart* self);
    friend void QPolarChart_RemoveFromIndex(QPolarChart* self);
    friend void QPolarChart_SuperRemoveFromIndex(QPolarChart* self);
    friend void QPolarChart_PrepareGeometryChange(QPolarChart* self);
    friend void QPolarChart_SuperPrepareGeometryChange(QPolarChart* self);
    friend void QPolarChart_SetGraphicsItem(QPolarChart* self, QGraphicsItem* item);
    friend void QPolarChart_SuperSetGraphicsItem(QPolarChart* self, QGraphicsItem* item);
    friend void QPolarChart_SetOwnedByLayout(QPolarChart* self, bool ownedByLayout);
    friend void QPolarChart_SuperSetOwnedByLayout(QPolarChart* self, bool ownedByLayout);
};

#endif
