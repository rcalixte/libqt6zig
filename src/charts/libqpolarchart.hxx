#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQPOLARCHART_H
#define SRC_CHARTSC_LIBVIRTUALQPOLARCHART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPolarChart so that we can call protected methods
class VirtualQPolarChart : public QPolarChart {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QPolarChart_Metacall_Callback = int (*)(QPolarChart*, QMetaObject::Call, int, void**);
    using QPolarChart_SetGeometry_Callback = void (*)(QPolarChart*, const QRectF&);
    using QPolarChart_GetContentsMargins_Callback = void (*)(const QPolarChart*, qreal*, qreal*, qreal*, qreal*);
    using QPolarChart_Type_Callback = int (*)();
    using QPolarChart_Paint_Callback = void (*)(QPolarChart*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
    using QPolarChart_PaintWindowFrame_Callback = void (*)(QPolarChart*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
    using QPolarChart_BoundingRect_Callback = QRectF (*)();
    using QPolarChart_Shape_Callback = QPainterPath (*)();
    using QPolarChart_InitStyleOption_Callback = void (*)(const QPolarChart*, QStyleOption*);
    using QPolarChart_SizeHint_Callback = QSizeF (*)(const QPolarChart*, Qt::SizeHint, const QSizeF&);
    using QPolarChart_UpdateGeometry_Callback = void (*)();
    using QPolarChart_ItemChange_Callback = QVariant (*)(QPolarChart*, QGraphicsItem::GraphicsItemChange, const QVariant&);
    using QPolarChart_PropertyChange_Callback = QVariant (*)(QPolarChart*, const QString&, const QVariant&);
    using QPolarChart_SceneEvent_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_WindowFrameEvent_Callback = bool (*)(QPolarChart*, QEvent*);
    using QPolarChart_WindowFrameSectionAt_Callback = Qt::WindowFrameSection (*)(const QPolarChart*, const QPointF&);
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
    using QPolarChart_ConnectNotify_Callback = void (*)(QPolarChart*, const QMetaMethod&);
    using QPolarChart_DisconnectNotify_Callback = void (*)(QPolarChart*, const QMetaMethod&);
    using QPolarChart_Advance_Callback = void (*)(QPolarChart*, int);
    using QPolarChart_Contains_Callback = bool (*)(const QPolarChart*, const QPointF&);
    using QPolarChart_CollidesWithItem_Callback = bool (*)(const QPolarChart*, const QGraphicsItem*, Qt::ItemSelectionMode);
    using QPolarChart_CollidesWithPath_Callback = bool (*)(const QPolarChart*, const QPainterPath&, Qt::ItemSelectionMode);
    using QPolarChart_IsObscuredBy_Callback = bool (*)(const QPolarChart*, const QGraphicsItem*);
    using QPolarChart_OpaqueArea_Callback = QPainterPath (*)();
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
    using QPolarChart_InputMethodQuery_Callback = QVariant (*)(const QPolarChart*, Qt::InputMethodQuery);
    using QPolarChart_SupportsExtension_Callback = bool (*)(const QPolarChart*, int);
    using QPolarChart_SetExtension_Callback = void (*)(QPolarChart*, int, const QVariant&);
    using QPolarChart_Extension_Callback = QVariant (*)(const QPolarChart*, const QVariant&);
    using QPolarChart_IsEmpty_Callback = bool (*)();
    using QPolarChart_UpdateMicroFocus_Callback = void (*)();
    using QPolarChart_Sender_Callback = QObject* (*)();
    using QPolarChart_SenderSignalIndex_Callback = int (*)();
    using QPolarChart_Receivers_Callback = int (*)(const QPolarChart*, const char*);
    using QPolarChart_IsSignalConnected_Callback = bool (*)(const QPolarChart*, const QMetaMethod&);
    using QPolarChart_AddToIndex_Callback = void (*)();
    using QPolarChart_RemoveFromIndex_Callback = void (*)();
    using QPolarChart_PrepareGeometryChange_Callback = void (*)();
    using QPolarChart_SetGraphicsItem_Callback = void (*)(QPolarChart*, QGraphicsItem*);
    using QPolarChart_SetOwnedByLayout_Callback = void (*)(QPolarChart*, bool);

  protected:
    // Instance callback storage
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
    VirtualQPolarChart() : QPolarChart(){};
    VirtualQPolarChart(QGraphicsItem* parent) : QPolarChart(parent){};
    VirtualQPolarChart(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QPolarChart(parent, wFlags){};

    ~VirtualQPolarChart() {
        qpolarchart_metacall_callback = nullptr;
        qpolarchart_setgeometry_callback = nullptr;
        qpolarchart_getcontentsmargins_callback = nullptr;
        qpolarchart_type_callback = nullptr;
        qpolarchart_paint_callback = nullptr;
        qpolarchart_paintwindowframe_callback = nullptr;
        qpolarchart_boundingrect_callback = nullptr;
        qpolarchart_shape_callback = nullptr;
        qpolarchart_initstyleoption_callback = nullptr;
        qpolarchart_sizehint_callback = nullptr;
        qpolarchart_updategeometry_callback = nullptr;
        qpolarchart_itemchange_callback = nullptr;
        qpolarchart_propertychange_callback = nullptr;
        qpolarchart_sceneevent_callback = nullptr;
        qpolarchart_windowframeevent_callback = nullptr;
        qpolarchart_windowframesectionat_callback = nullptr;
        qpolarchart_event_callback = nullptr;
        qpolarchart_changeevent_callback = nullptr;
        qpolarchart_closeevent_callback = nullptr;
        qpolarchart_focusinevent_callback = nullptr;
        qpolarchart_focusnextprevchild_callback = nullptr;
        qpolarchart_focusoutevent_callback = nullptr;
        qpolarchart_hideevent_callback = nullptr;
        qpolarchart_moveevent_callback = nullptr;
        qpolarchart_polishevent_callback = nullptr;
        qpolarchart_resizeevent_callback = nullptr;
        qpolarchart_showevent_callback = nullptr;
        qpolarchart_hovermoveevent_callback = nullptr;
        qpolarchart_hoverleaveevent_callback = nullptr;
        qpolarchart_grabmouseevent_callback = nullptr;
        qpolarchart_ungrabmouseevent_callback = nullptr;
        qpolarchart_grabkeyboardevent_callback = nullptr;
        qpolarchart_ungrabkeyboardevent_callback = nullptr;
        qpolarchart_eventfilter_callback = nullptr;
        qpolarchart_timerevent_callback = nullptr;
        qpolarchart_childevent_callback = nullptr;
        qpolarchart_customevent_callback = nullptr;
        qpolarchart_connectnotify_callback = nullptr;
        qpolarchart_disconnectnotify_callback = nullptr;
        qpolarchart_advance_callback = nullptr;
        qpolarchart_contains_callback = nullptr;
        qpolarchart_collideswithitem_callback = nullptr;
        qpolarchart_collideswithpath_callback = nullptr;
        qpolarchart_isobscuredby_callback = nullptr;
        qpolarchart_opaquearea_callback = nullptr;
        qpolarchart_sceneeventfilter_callback = nullptr;
        qpolarchart_contextmenuevent_callback = nullptr;
        qpolarchart_dragenterevent_callback = nullptr;
        qpolarchart_dragleaveevent_callback = nullptr;
        qpolarchart_dragmoveevent_callback = nullptr;
        qpolarchart_dropevent_callback = nullptr;
        qpolarchart_hoverenterevent_callback = nullptr;
        qpolarchart_keypressevent_callback = nullptr;
        qpolarchart_keyreleaseevent_callback = nullptr;
        qpolarchart_mousepressevent_callback = nullptr;
        qpolarchart_mousemoveevent_callback = nullptr;
        qpolarchart_mousereleaseevent_callback = nullptr;
        qpolarchart_mousedoubleclickevent_callback = nullptr;
        qpolarchart_wheelevent_callback = nullptr;
        qpolarchart_inputmethodevent_callback = nullptr;
        qpolarchart_inputmethodquery_callback = nullptr;
        qpolarchart_supportsextension_callback = nullptr;
        qpolarchart_setextension_callback = nullptr;
        qpolarchart_extension_callback = nullptr;
        qpolarchart_isempty_callback = nullptr;
        qpolarchart_updatemicrofocus_callback = nullptr;
        qpolarchart_sender_callback = nullptr;
        qpolarchart_sendersignalindex_callback = nullptr;
        qpolarchart_receivers_callback = nullptr;
        qpolarchart_issignalconnected_callback = nullptr;
        qpolarchart_addtoindex_callback = nullptr;
        qpolarchart_removefromindex_callback = nullptr;
        qpolarchart_preparegeometrychange_callback = nullptr;
        qpolarchart_setgraphicsitem_callback = nullptr;
        qpolarchart_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    void setQPolarChart_Metacall_Callback(QPolarChart_Metacall_Callback cb) { qpolarchart_metacall_callback = cb; }
    void setQPolarChart_SetGeometry_Callback(QPolarChart_SetGeometry_Callback cb) { qpolarchart_setgeometry_callback = cb; }
    void setQPolarChart_GetContentsMargins_Callback(QPolarChart_GetContentsMargins_Callback cb) { qpolarchart_getcontentsmargins_callback = cb; }
    void setQPolarChart_Type_Callback(QPolarChart_Type_Callback cb) { qpolarchart_type_callback = cb; }
    void setQPolarChart_Paint_Callback(QPolarChart_Paint_Callback cb) { qpolarchart_paint_callback = cb; }
    void setQPolarChart_PaintWindowFrame_Callback(QPolarChart_PaintWindowFrame_Callback cb) { qpolarchart_paintwindowframe_callback = cb; }
    void setQPolarChart_BoundingRect_Callback(QPolarChart_BoundingRect_Callback cb) { qpolarchart_boundingrect_callback = cb; }
    void setQPolarChart_Shape_Callback(QPolarChart_Shape_Callback cb) { qpolarchart_shape_callback = cb; }
    void setQPolarChart_InitStyleOption_Callback(QPolarChart_InitStyleOption_Callback cb) { qpolarchart_initstyleoption_callback = cb; }
    void setQPolarChart_SizeHint_Callback(QPolarChart_SizeHint_Callback cb) { qpolarchart_sizehint_callback = cb; }
    void setQPolarChart_UpdateGeometry_Callback(QPolarChart_UpdateGeometry_Callback cb) { qpolarchart_updategeometry_callback = cb; }
    void setQPolarChart_ItemChange_Callback(QPolarChart_ItemChange_Callback cb) { qpolarchart_itemchange_callback = cb; }
    void setQPolarChart_PropertyChange_Callback(QPolarChart_PropertyChange_Callback cb) { qpolarchart_propertychange_callback = cb; }
    void setQPolarChart_SceneEvent_Callback(QPolarChart_SceneEvent_Callback cb) { qpolarchart_sceneevent_callback = cb; }
    void setQPolarChart_WindowFrameEvent_Callback(QPolarChart_WindowFrameEvent_Callback cb) { qpolarchart_windowframeevent_callback = cb; }
    void setQPolarChart_WindowFrameSectionAt_Callback(QPolarChart_WindowFrameSectionAt_Callback cb) { qpolarchart_windowframesectionat_callback = cb; }
    void setQPolarChart_Event_Callback(QPolarChart_Event_Callback cb) { qpolarchart_event_callback = cb; }
    void setQPolarChart_ChangeEvent_Callback(QPolarChart_ChangeEvent_Callback cb) { qpolarchart_changeevent_callback = cb; }
    void setQPolarChart_CloseEvent_Callback(QPolarChart_CloseEvent_Callback cb) { qpolarchart_closeevent_callback = cb; }
    void setQPolarChart_FocusInEvent_Callback(QPolarChart_FocusInEvent_Callback cb) { qpolarchart_focusinevent_callback = cb; }
    void setQPolarChart_FocusNextPrevChild_Callback(QPolarChart_FocusNextPrevChild_Callback cb) { qpolarchart_focusnextprevchild_callback = cb; }
    void setQPolarChart_FocusOutEvent_Callback(QPolarChart_FocusOutEvent_Callback cb) { qpolarchart_focusoutevent_callback = cb; }
    void setQPolarChart_HideEvent_Callback(QPolarChart_HideEvent_Callback cb) { qpolarchart_hideevent_callback = cb; }
    void setQPolarChart_MoveEvent_Callback(QPolarChart_MoveEvent_Callback cb) { qpolarchart_moveevent_callback = cb; }
    void setQPolarChart_PolishEvent_Callback(QPolarChart_PolishEvent_Callback cb) { qpolarchart_polishevent_callback = cb; }
    void setQPolarChart_ResizeEvent_Callback(QPolarChart_ResizeEvent_Callback cb) { qpolarchart_resizeevent_callback = cb; }
    void setQPolarChart_ShowEvent_Callback(QPolarChart_ShowEvent_Callback cb) { qpolarchart_showevent_callback = cb; }
    void setQPolarChart_HoverMoveEvent_Callback(QPolarChart_HoverMoveEvent_Callback cb) { qpolarchart_hovermoveevent_callback = cb; }
    void setQPolarChart_HoverLeaveEvent_Callback(QPolarChart_HoverLeaveEvent_Callback cb) { qpolarchart_hoverleaveevent_callback = cb; }
    void setQPolarChart_GrabMouseEvent_Callback(QPolarChart_GrabMouseEvent_Callback cb) { qpolarchart_grabmouseevent_callback = cb; }
    void setQPolarChart_UngrabMouseEvent_Callback(QPolarChart_UngrabMouseEvent_Callback cb) { qpolarchart_ungrabmouseevent_callback = cb; }
    void setQPolarChart_GrabKeyboardEvent_Callback(QPolarChart_GrabKeyboardEvent_Callback cb) { qpolarchart_grabkeyboardevent_callback = cb; }
    void setQPolarChart_UngrabKeyboardEvent_Callback(QPolarChart_UngrabKeyboardEvent_Callback cb) { qpolarchart_ungrabkeyboardevent_callback = cb; }
    void setQPolarChart_EventFilter_Callback(QPolarChart_EventFilter_Callback cb) { qpolarchart_eventfilter_callback = cb; }
    void setQPolarChart_TimerEvent_Callback(QPolarChart_TimerEvent_Callback cb) { qpolarchart_timerevent_callback = cb; }
    void setQPolarChart_ChildEvent_Callback(QPolarChart_ChildEvent_Callback cb) { qpolarchart_childevent_callback = cb; }
    void setQPolarChart_CustomEvent_Callback(QPolarChart_CustomEvent_Callback cb) { qpolarchart_customevent_callback = cb; }
    void setQPolarChart_ConnectNotify_Callback(QPolarChart_ConnectNotify_Callback cb) { qpolarchart_connectnotify_callback = cb; }
    void setQPolarChart_DisconnectNotify_Callback(QPolarChart_DisconnectNotify_Callback cb) { qpolarchart_disconnectnotify_callback = cb; }
    void setQPolarChart_Advance_Callback(QPolarChart_Advance_Callback cb) { qpolarchart_advance_callback = cb; }
    void setQPolarChart_Contains_Callback(QPolarChart_Contains_Callback cb) { qpolarchart_contains_callback = cb; }
    void setQPolarChart_CollidesWithItem_Callback(QPolarChart_CollidesWithItem_Callback cb) { qpolarchart_collideswithitem_callback = cb; }
    void setQPolarChart_CollidesWithPath_Callback(QPolarChart_CollidesWithPath_Callback cb) { qpolarchart_collideswithpath_callback = cb; }
    void setQPolarChart_IsObscuredBy_Callback(QPolarChart_IsObscuredBy_Callback cb) { qpolarchart_isobscuredby_callback = cb; }
    void setQPolarChart_OpaqueArea_Callback(QPolarChart_OpaqueArea_Callback cb) { qpolarchart_opaquearea_callback = cb; }
    void setQPolarChart_SceneEventFilter_Callback(QPolarChart_SceneEventFilter_Callback cb) { qpolarchart_sceneeventfilter_callback = cb; }
    void setQPolarChart_ContextMenuEvent_Callback(QPolarChart_ContextMenuEvent_Callback cb) { qpolarchart_contextmenuevent_callback = cb; }
    void setQPolarChart_DragEnterEvent_Callback(QPolarChart_DragEnterEvent_Callback cb) { qpolarchart_dragenterevent_callback = cb; }
    void setQPolarChart_DragLeaveEvent_Callback(QPolarChart_DragLeaveEvent_Callback cb) { qpolarchart_dragleaveevent_callback = cb; }
    void setQPolarChart_DragMoveEvent_Callback(QPolarChart_DragMoveEvent_Callback cb) { qpolarchart_dragmoveevent_callback = cb; }
    void setQPolarChart_DropEvent_Callback(QPolarChart_DropEvent_Callback cb) { qpolarchart_dropevent_callback = cb; }
    void setQPolarChart_HoverEnterEvent_Callback(QPolarChart_HoverEnterEvent_Callback cb) { qpolarchart_hoverenterevent_callback = cb; }
    void setQPolarChart_KeyPressEvent_Callback(QPolarChart_KeyPressEvent_Callback cb) { qpolarchart_keypressevent_callback = cb; }
    void setQPolarChart_KeyReleaseEvent_Callback(QPolarChart_KeyReleaseEvent_Callback cb) { qpolarchart_keyreleaseevent_callback = cb; }
    void setQPolarChart_MousePressEvent_Callback(QPolarChart_MousePressEvent_Callback cb) { qpolarchart_mousepressevent_callback = cb; }
    void setQPolarChart_MouseMoveEvent_Callback(QPolarChart_MouseMoveEvent_Callback cb) { qpolarchart_mousemoveevent_callback = cb; }
    void setQPolarChart_MouseReleaseEvent_Callback(QPolarChart_MouseReleaseEvent_Callback cb) { qpolarchart_mousereleaseevent_callback = cb; }
    void setQPolarChart_MouseDoubleClickEvent_Callback(QPolarChart_MouseDoubleClickEvent_Callback cb) { qpolarchart_mousedoubleclickevent_callback = cb; }
    void setQPolarChart_WheelEvent_Callback(QPolarChart_WheelEvent_Callback cb) { qpolarchart_wheelevent_callback = cb; }
    void setQPolarChart_InputMethodEvent_Callback(QPolarChart_InputMethodEvent_Callback cb) { qpolarchart_inputmethodevent_callback = cb; }
    void setQPolarChart_InputMethodQuery_Callback(QPolarChart_InputMethodQuery_Callback cb) { qpolarchart_inputmethodquery_callback = cb; }
    void setQPolarChart_SupportsExtension_Callback(QPolarChart_SupportsExtension_Callback cb) { qpolarchart_supportsextension_callback = cb; }
    void setQPolarChart_SetExtension_Callback(QPolarChart_SetExtension_Callback cb) { qpolarchart_setextension_callback = cb; }
    void setQPolarChart_Extension_Callback(QPolarChart_Extension_Callback cb) { qpolarchart_extension_callback = cb; }
    void setQPolarChart_IsEmpty_Callback(QPolarChart_IsEmpty_Callback cb) { qpolarchart_isempty_callback = cb; }
    void setQPolarChart_UpdateMicroFocus_Callback(QPolarChart_UpdateMicroFocus_Callback cb) { qpolarchart_updatemicrofocus_callback = cb; }
    void setQPolarChart_Sender_Callback(QPolarChart_Sender_Callback cb) { qpolarchart_sender_callback = cb; }
    void setQPolarChart_SenderSignalIndex_Callback(QPolarChart_SenderSignalIndex_Callback cb) { qpolarchart_sendersignalindex_callback = cb; }
    void setQPolarChart_Receivers_Callback(QPolarChart_Receivers_Callback cb) { qpolarchart_receivers_callback = cb; }
    void setQPolarChart_IsSignalConnected_Callback(QPolarChart_IsSignalConnected_Callback cb) { qpolarchart_issignalconnected_callback = cb; }
    void setQPolarChart_AddToIndex_Callback(QPolarChart_AddToIndex_Callback cb) { qpolarchart_addtoindex_callback = cb; }
    void setQPolarChart_RemoveFromIndex_Callback(QPolarChart_RemoveFromIndex_Callback cb) { qpolarchart_removefromindex_callback = cb; }
    void setQPolarChart_PrepareGeometryChange_Callback(QPolarChart_PrepareGeometryChange_Callback cb) { qpolarchart_preparegeometrychange_callback = cb; }
    void setQPolarChart_SetGraphicsItem_Callback(QPolarChart_SetGraphicsItem_Callback cb) { qpolarchart_setgraphicsitem_callback = cb; }
    void setQPolarChart_SetOwnedByLayout_Callback(QPolarChart_SetOwnedByLayout_Callback cb) { qpolarchart_setownedbylayout_callback = cb; }

    // Base flag setters
    void setQPolarChart_Metacall_IsBase(bool value) const { qpolarchart_metacall_isbase = value; }
    void setQPolarChart_SetGeometry_IsBase(bool value) const { qpolarchart_setgeometry_isbase = value; }
    void setQPolarChart_GetContentsMargins_IsBase(bool value) const { qpolarchart_getcontentsmargins_isbase = value; }
    void setQPolarChart_Type_IsBase(bool value) const { qpolarchart_type_isbase = value; }
    void setQPolarChart_Paint_IsBase(bool value) const { qpolarchart_paint_isbase = value; }
    void setQPolarChart_PaintWindowFrame_IsBase(bool value) const { qpolarchart_paintwindowframe_isbase = value; }
    void setQPolarChart_BoundingRect_IsBase(bool value) const { qpolarchart_boundingrect_isbase = value; }
    void setQPolarChart_Shape_IsBase(bool value) const { qpolarchart_shape_isbase = value; }
    void setQPolarChart_InitStyleOption_IsBase(bool value) const { qpolarchart_initstyleoption_isbase = value; }
    void setQPolarChart_SizeHint_IsBase(bool value) const { qpolarchart_sizehint_isbase = value; }
    void setQPolarChart_UpdateGeometry_IsBase(bool value) const { qpolarchart_updategeometry_isbase = value; }
    void setQPolarChart_ItemChange_IsBase(bool value) const { qpolarchart_itemchange_isbase = value; }
    void setQPolarChart_PropertyChange_IsBase(bool value) const { qpolarchart_propertychange_isbase = value; }
    void setQPolarChart_SceneEvent_IsBase(bool value) const { qpolarchart_sceneevent_isbase = value; }
    void setQPolarChart_WindowFrameEvent_IsBase(bool value) const { qpolarchart_windowframeevent_isbase = value; }
    void setQPolarChart_WindowFrameSectionAt_IsBase(bool value) const { qpolarchart_windowframesectionat_isbase = value; }
    void setQPolarChart_Event_IsBase(bool value) const { qpolarchart_event_isbase = value; }
    void setQPolarChart_ChangeEvent_IsBase(bool value) const { qpolarchart_changeevent_isbase = value; }
    void setQPolarChart_CloseEvent_IsBase(bool value) const { qpolarchart_closeevent_isbase = value; }
    void setQPolarChart_FocusInEvent_IsBase(bool value) const { qpolarchart_focusinevent_isbase = value; }
    void setQPolarChart_FocusNextPrevChild_IsBase(bool value) const { qpolarchart_focusnextprevchild_isbase = value; }
    void setQPolarChart_FocusOutEvent_IsBase(bool value) const { qpolarchart_focusoutevent_isbase = value; }
    void setQPolarChart_HideEvent_IsBase(bool value) const { qpolarchart_hideevent_isbase = value; }
    void setQPolarChart_MoveEvent_IsBase(bool value) const { qpolarchart_moveevent_isbase = value; }
    void setQPolarChart_PolishEvent_IsBase(bool value) const { qpolarchart_polishevent_isbase = value; }
    void setQPolarChart_ResizeEvent_IsBase(bool value) const { qpolarchart_resizeevent_isbase = value; }
    void setQPolarChart_ShowEvent_IsBase(bool value) const { qpolarchart_showevent_isbase = value; }
    void setQPolarChart_HoverMoveEvent_IsBase(bool value) const { qpolarchart_hovermoveevent_isbase = value; }
    void setQPolarChart_HoverLeaveEvent_IsBase(bool value) const { qpolarchart_hoverleaveevent_isbase = value; }
    void setQPolarChart_GrabMouseEvent_IsBase(bool value) const { qpolarchart_grabmouseevent_isbase = value; }
    void setQPolarChart_UngrabMouseEvent_IsBase(bool value) const { qpolarchart_ungrabmouseevent_isbase = value; }
    void setQPolarChart_GrabKeyboardEvent_IsBase(bool value) const { qpolarchart_grabkeyboardevent_isbase = value; }
    void setQPolarChart_UngrabKeyboardEvent_IsBase(bool value) const { qpolarchart_ungrabkeyboardevent_isbase = value; }
    void setQPolarChart_EventFilter_IsBase(bool value) const { qpolarchart_eventfilter_isbase = value; }
    void setQPolarChart_TimerEvent_IsBase(bool value) const { qpolarchart_timerevent_isbase = value; }
    void setQPolarChart_ChildEvent_IsBase(bool value) const { qpolarchart_childevent_isbase = value; }
    void setQPolarChart_CustomEvent_IsBase(bool value) const { qpolarchart_customevent_isbase = value; }
    void setQPolarChart_ConnectNotify_IsBase(bool value) const { qpolarchart_connectnotify_isbase = value; }
    void setQPolarChart_DisconnectNotify_IsBase(bool value) const { qpolarchart_disconnectnotify_isbase = value; }
    void setQPolarChart_Advance_IsBase(bool value) const { qpolarchart_advance_isbase = value; }
    void setQPolarChart_Contains_IsBase(bool value) const { qpolarchart_contains_isbase = value; }
    void setQPolarChart_CollidesWithItem_IsBase(bool value) const { qpolarchart_collideswithitem_isbase = value; }
    void setQPolarChart_CollidesWithPath_IsBase(bool value) const { qpolarchart_collideswithpath_isbase = value; }
    void setQPolarChart_IsObscuredBy_IsBase(bool value) const { qpolarchart_isobscuredby_isbase = value; }
    void setQPolarChart_OpaqueArea_IsBase(bool value) const { qpolarchart_opaquearea_isbase = value; }
    void setQPolarChart_SceneEventFilter_IsBase(bool value) const { qpolarchart_sceneeventfilter_isbase = value; }
    void setQPolarChart_ContextMenuEvent_IsBase(bool value) const { qpolarchart_contextmenuevent_isbase = value; }
    void setQPolarChart_DragEnterEvent_IsBase(bool value) const { qpolarchart_dragenterevent_isbase = value; }
    void setQPolarChart_DragLeaveEvent_IsBase(bool value) const { qpolarchart_dragleaveevent_isbase = value; }
    void setQPolarChart_DragMoveEvent_IsBase(bool value) const { qpolarchart_dragmoveevent_isbase = value; }
    void setQPolarChart_DropEvent_IsBase(bool value) const { qpolarchart_dropevent_isbase = value; }
    void setQPolarChart_HoverEnterEvent_IsBase(bool value) const { qpolarchart_hoverenterevent_isbase = value; }
    void setQPolarChart_KeyPressEvent_IsBase(bool value) const { qpolarchart_keypressevent_isbase = value; }
    void setQPolarChart_KeyReleaseEvent_IsBase(bool value) const { qpolarchart_keyreleaseevent_isbase = value; }
    void setQPolarChart_MousePressEvent_IsBase(bool value) const { qpolarchart_mousepressevent_isbase = value; }
    void setQPolarChart_MouseMoveEvent_IsBase(bool value) const { qpolarchart_mousemoveevent_isbase = value; }
    void setQPolarChart_MouseReleaseEvent_IsBase(bool value) const { qpolarchart_mousereleaseevent_isbase = value; }
    void setQPolarChart_MouseDoubleClickEvent_IsBase(bool value) const { qpolarchart_mousedoubleclickevent_isbase = value; }
    void setQPolarChart_WheelEvent_IsBase(bool value) const { qpolarchart_wheelevent_isbase = value; }
    void setQPolarChart_InputMethodEvent_IsBase(bool value) const { qpolarchart_inputmethodevent_isbase = value; }
    void setQPolarChart_InputMethodQuery_IsBase(bool value) const { qpolarchart_inputmethodquery_isbase = value; }
    void setQPolarChart_SupportsExtension_IsBase(bool value) const { qpolarchart_supportsextension_isbase = value; }
    void setQPolarChart_SetExtension_IsBase(bool value) const { qpolarchart_setextension_isbase = value; }
    void setQPolarChart_Extension_IsBase(bool value) const { qpolarchart_extension_isbase = value; }
    void setQPolarChart_IsEmpty_IsBase(bool value) const { qpolarchart_isempty_isbase = value; }
    void setQPolarChart_UpdateMicroFocus_IsBase(bool value) const { qpolarchart_updatemicrofocus_isbase = value; }
    void setQPolarChart_Sender_IsBase(bool value) const { qpolarchart_sender_isbase = value; }
    void setQPolarChart_SenderSignalIndex_IsBase(bool value) const { qpolarchart_sendersignalindex_isbase = value; }
    void setQPolarChart_Receivers_IsBase(bool value) const { qpolarchart_receivers_isbase = value; }
    void setQPolarChart_IsSignalConnected_IsBase(bool value) const { qpolarchart_issignalconnected_isbase = value; }
    void setQPolarChart_AddToIndex_IsBase(bool value) const { qpolarchart_addtoindex_isbase = value; }
    void setQPolarChart_RemoveFromIndex_IsBase(bool value) const { qpolarchart_removefromindex_isbase = value; }
    void setQPolarChart_PrepareGeometryChange_IsBase(bool value) const { qpolarchart_preparegeometrychange_isbase = value; }
    void setQPolarChart_SetGraphicsItem_IsBase(bool value) const { qpolarchart_setgraphicsitem_isbase = value; }
    void setQPolarChart_SetOwnedByLayout_IsBase(bool value) const { qpolarchart_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpolarchart_metacall_isbase) {
            qpolarchart_metacall_isbase = false;
            return QPolarChart::qt_metacall(param1, param2, param3);
        } else if (qpolarchart_metacall_callback != nullptr) {
            return qpolarchart_metacall_callback(this, param1, param2, param3);
        } else {
            return QPolarChart::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qpolarchart_setgeometry_isbase) {
            qpolarchart_setgeometry_isbase = false;
            QPolarChart::setGeometry(rect);
        } else if (qpolarchart_setgeometry_callback != nullptr) {
            qpolarchart_setgeometry_callback(this, rect);
        } else {
            QPolarChart::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qpolarchart_getcontentsmargins_isbase) {
            qpolarchart_getcontentsmargins_isbase = false;
            QPolarChart::getContentsMargins(left, top, right, bottom);
        } else if (qpolarchart_getcontentsmargins_callback != nullptr) {
            qpolarchart_getcontentsmargins_callback(this, left, top, right, bottom);
        } else {
            QPolarChart::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qpolarchart_type_isbase) {
            qpolarchart_type_isbase = false;
            return QPolarChart::type();
        } else if (qpolarchart_type_callback != nullptr) {
            return qpolarchart_type_callback();
        } else {
            return QPolarChart::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qpolarchart_paint_isbase) {
            qpolarchart_paint_isbase = false;
            QPolarChart::paint(painter, option, widget);
        } else if (qpolarchart_paint_callback != nullptr) {
            qpolarchart_paint_callback(this, painter, option, widget);
        } else {
            QPolarChart::paint(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qpolarchart_paintwindowframe_isbase) {
            qpolarchart_paintwindowframe_isbase = false;
            QPolarChart::paintWindowFrame(painter, option, widget);
        } else if (qpolarchart_paintwindowframe_callback != nullptr) {
            qpolarchart_paintwindowframe_callback(this, painter, option, widget);
        } else {
            QPolarChart::paintWindowFrame(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qpolarchart_boundingrect_isbase) {
            qpolarchart_boundingrect_isbase = false;
            return QPolarChart::boundingRect();
        } else if (qpolarchart_boundingrect_callback != nullptr) {
            return qpolarchart_boundingrect_callback();
        } else {
            return QPolarChart::boundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qpolarchart_shape_isbase) {
            qpolarchart_shape_isbase = false;
            return QPolarChart::shape();
        } else if (qpolarchart_shape_callback != nullptr) {
            return qpolarchart_shape_callback();
        } else {
            return QPolarChart::shape();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qpolarchart_initstyleoption_isbase) {
            qpolarchart_initstyleoption_isbase = false;
            QPolarChart::initStyleOption(option);
        } else if (qpolarchart_initstyleoption_callback != nullptr) {
            qpolarchart_initstyleoption_callback(this, option);
        } else {
            QPolarChart::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qpolarchart_sizehint_isbase) {
            qpolarchart_sizehint_isbase = false;
            return QPolarChart::sizeHint(which, constraint);
        } else if (qpolarchart_sizehint_callback != nullptr) {
            return qpolarchart_sizehint_callback(this, which, constraint);
        } else {
            return QPolarChart::sizeHint(which, constraint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qpolarchart_updategeometry_isbase) {
            qpolarchart_updategeometry_isbase = false;
            QPolarChart::updateGeometry();
        } else if (qpolarchart_updategeometry_callback != nullptr) {
            qpolarchart_updategeometry_callback();
        } else {
            QPolarChart::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qpolarchart_itemchange_isbase) {
            qpolarchart_itemchange_isbase = false;
            return QPolarChart::itemChange(change, value);
        } else if (qpolarchart_itemchange_callback != nullptr) {
            return qpolarchart_itemchange_callback(this, change, value);
        } else {
            return QPolarChart::itemChange(change, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qpolarchart_propertychange_isbase) {
            qpolarchart_propertychange_isbase = false;
            return QPolarChart::propertyChange(propertyName, value);
        } else if (qpolarchart_propertychange_callback != nullptr) {
            return qpolarchart_propertychange_callback(this, propertyName, value);
        } else {
            return QPolarChart::propertyChange(propertyName, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qpolarchart_sceneevent_isbase) {
            qpolarchart_sceneevent_isbase = false;
            return QPolarChart::sceneEvent(event);
        } else if (qpolarchart_sceneevent_callback != nullptr) {
            return qpolarchart_sceneevent_callback(this, event);
        } else {
            return QPolarChart::sceneEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qpolarchart_windowframeevent_isbase) {
            qpolarchart_windowframeevent_isbase = false;
            return QPolarChart::windowFrameEvent(e);
        } else if (qpolarchart_windowframeevent_callback != nullptr) {
            return qpolarchart_windowframeevent_callback(this, e);
        } else {
            return QPolarChart::windowFrameEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qpolarchart_windowframesectionat_isbase) {
            qpolarchart_windowframesectionat_isbase = false;
            return QPolarChart::windowFrameSectionAt(pos);
        } else if (qpolarchart_windowframesectionat_callback != nullptr) {
            return qpolarchart_windowframesectionat_callback(this, pos);
        } else {
            return QPolarChart::windowFrameSectionAt(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpolarchart_event_isbase) {
            qpolarchart_event_isbase = false;
            return QPolarChart::event(event);
        } else if (qpolarchart_event_callback != nullptr) {
            return qpolarchart_event_callback(this, event);
        } else {
            return QPolarChart::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qpolarchart_changeevent_isbase) {
            qpolarchart_changeevent_isbase = false;
            QPolarChart::changeEvent(event);
        } else if (qpolarchart_changeevent_callback != nullptr) {
            qpolarchart_changeevent_callback(this, event);
        } else {
            QPolarChart::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpolarchart_closeevent_isbase) {
            qpolarchart_closeevent_isbase = false;
            QPolarChart::closeEvent(event);
        } else if (qpolarchart_closeevent_callback != nullptr) {
            qpolarchart_closeevent_callback(this, event);
        } else {
            QPolarChart::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpolarchart_focusinevent_isbase) {
            qpolarchart_focusinevent_isbase = false;
            QPolarChart::focusInEvent(event);
        } else if (qpolarchart_focusinevent_callback != nullptr) {
            qpolarchart_focusinevent_callback(this, event);
        } else {
            QPolarChart::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpolarchart_focusnextprevchild_isbase) {
            qpolarchart_focusnextprevchild_isbase = false;
            return QPolarChart::focusNextPrevChild(next);
        } else if (qpolarchart_focusnextprevchild_callback != nullptr) {
            return qpolarchart_focusnextprevchild_callback(this, next);
        } else {
            return QPolarChart::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpolarchart_focusoutevent_isbase) {
            qpolarchart_focusoutevent_isbase = false;
            QPolarChart::focusOutEvent(event);
        } else if (qpolarchart_focusoutevent_callback != nullptr) {
            qpolarchart_focusoutevent_callback(this, event);
        } else {
            QPolarChart::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpolarchart_hideevent_isbase) {
            qpolarchart_hideevent_isbase = false;
            QPolarChart::hideEvent(event);
        } else if (qpolarchart_hideevent_callback != nullptr) {
            qpolarchart_hideevent_callback(this, event);
        } else {
            QPolarChart::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qpolarchart_moveevent_isbase) {
            qpolarchart_moveevent_isbase = false;
            QPolarChart::moveEvent(event);
        } else if (qpolarchart_moveevent_callback != nullptr) {
            qpolarchart_moveevent_callback(this, event);
        } else {
            QPolarChart::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qpolarchart_polishevent_isbase) {
            qpolarchart_polishevent_isbase = false;
            QPolarChart::polishEvent();
        } else if (qpolarchart_polishevent_callback != nullptr) {
            qpolarchart_polishevent_callback();
        } else {
            QPolarChart::polishEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qpolarchart_resizeevent_isbase) {
            qpolarchart_resizeevent_isbase = false;
            QPolarChart::resizeEvent(event);
        } else if (qpolarchart_resizeevent_callback != nullptr) {
            qpolarchart_resizeevent_callback(this, event);
        } else {
            QPolarChart::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpolarchart_showevent_isbase) {
            qpolarchart_showevent_isbase = false;
            QPolarChart::showEvent(event);
        } else if (qpolarchart_showevent_callback != nullptr) {
            qpolarchart_showevent_callback(this, event);
        } else {
            QPolarChart::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hovermoveevent_isbase) {
            qpolarchart_hovermoveevent_isbase = false;
            QPolarChart::hoverMoveEvent(event);
        } else if (qpolarchart_hovermoveevent_callback != nullptr) {
            qpolarchart_hovermoveevent_callback(this, event);
        } else {
            QPolarChart::hoverMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hoverleaveevent_isbase) {
            qpolarchart_hoverleaveevent_isbase = false;
            QPolarChart::hoverLeaveEvent(event);
        } else if (qpolarchart_hoverleaveevent_callback != nullptr) {
            qpolarchart_hoverleaveevent_callback(this, event);
        } else {
            QPolarChart::hoverLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qpolarchart_grabmouseevent_isbase) {
            qpolarchart_grabmouseevent_isbase = false;
            QPolarChart::grabMouseEvent(event);
        } else if (qpolarchart_grabmouseevent_callback != nullptr) {
            qpolarchart_grabmouseevent_callback(this, event);
        } else {
            QPolarChart::grabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qpolarchart_ungrabmouseevent_isbase) {
            qpolarchart_ungrabmouseevent_isbase = false;
            QPolarChart::ungrabMouseEvent(event);
        } else if (qpolarchart_ungrabmouseevent_callback != nullptr) {
            qpolarchart_ungrabmouseevent_callback(this, event);
        } else {
            QPolarChart::ungrabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qpolarchart_grabkeyboardevent_isbase) {
            qpolarchart_grabkeyboardevent_isbase = false;
            QPolarChart::grabKeyboardEvent(event);
        } else if (qpolarchart_grabkeyboardevent_callback != nullptr) {
            qpolarchart_grabkeyboardevent_callback(this, event);
        } else {
            QPolarChart::grabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qpolarchart_ungrabkeyboardevent_isbase) {
            qpolarchart_ungrabkeyboardevent_isbase = false;
            QPolarChart::ungrabKeyboardEvent(event);
        } else if (qpolarchart_ungrabkeyboardevent_callback != nullptr) {
            qpolarchart_ungrabkeyboardevent_callback(this, event);
        } else {
            QPolarChart::ungrabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpolarchart_eventfilter_isbase) {
            qpolarchart_eventfilter_isbase = false;
            return QPolarChart::eventFilter(watched, event);
        } else if (qpolarchart_eventfilter_callback != nullptr) {
            return qpolarchart_eventfilter_callback(this, watched, event);
        } else {
            return QPolarChart::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpolarchart_timerevent_isbase) {
            qpolarchart_timerevent_isbase = false;
            QPolarChart::timerEvent(event);
        } else if (qpolarchart_timerevent_callback != nullptr) {
            qpolarchart_timerevent_callback(this, event);
        } else {
            QPolarChart::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpolarchart_childevent_isbase) {
            qpolarchart_childevent_isbase = false;
            QPolarChart::childEvent(event);
        } else if (qpolarchart_childevent_callback != nullptr) {
            qpolarchart_childevent_callback(this, event);
        } else {
            QPolarChart::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpolarchart_customevent_isbase) {
            qpolarchart_customevent_isbase = false;
            QPolarChart::customEvent(event);
        } else if (qpolarchart_customevent_callback != nullptr) {
            qpolarchart_customevent_callback(this, event);
        } else {
            QPolarChart::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpolarchart_connectnotify_isbase) {
            qpolarchart_connectnotify_isbase = false;
            QPolarChart::connectNotify(signal);
        } else if (qpolarchart_connectnotify_callback != nullptr) {
            qpolarchart_connectnotify_callback(this, signal);
        } else {
            QPolarChart::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpolarchart_disconnectnotify_isbase) {
            qpolarchart_disconnectnotify_isbase = false;
            QPolarChart::disconnectNotify(signal);
        } else if (qpolarchart_disconnectnotify_callback != nullptr) {
            qpolarchart_disconnectnotify_callback(this, signal);
        } else {
            QPolarChart::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qpolarchart_advance_isbase) {
            qpolarchart_advance_isbase = false;
            QPolarChart::advance(phase);
        } else if (qpolarchart_advance_callback != nullptr) {
            qpolarchart_advance_callback(this, phase);
        } else {
            QPolarChart::advance(phase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qpolarchart_contains_isbase) {
            qpolarchart_contains_isbase = false;
            return QPolarChart::contains(point);
        } else if (qpolarchart_contains_callback != nullptr) {
            return qpolarchart_contains_callback(this, point);
        } else {
            return QPolarChart::contains(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qpolarchart_collideswithitem_isbase) {
            qpolarchart_collideswithitem_isbase = false;
            return QPolarChart::collidesWithItem(other, mode);
        } else if (qpolarchart_collideswithitem_callback != nullptr) {
            return qpolarchart_collideswithitem_callback(this, other, mode);
        } else {
            return QPolarChart::collidesWithItem(other, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qpolarchart_collideswithpath_isbase) {
            qpolarchart_collideswithpath_isbase = false;
            return QPolarChart::collidesWithPath(path, mode);
        } else if (qpolarchart_collideswithpath_callback != nullptr) {
            return qpolarchart_collideswithpath_callback(this, path, mode);
        } else {
            return QPolarChart::collidesWithPath(path, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qpolarchart_isobscuredby_isbase) {
            qpolarchart_isobscuredby_isbase = false;
            return QPolarChart::isObscuredBy(item);
        } else if (qpolarchart_isobscuredby_callback != nullptr) {
            return qpolarchart_isobscuredby_callback(this, item);
        } else {
            return QPolarChart::isObscuredBy(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qpolarchart_opaquearea_isbase) {
            qpolarchart_opaquearea_isbase = false;
            return QPolarChart::opaqueArea();
        } else if (qpolarchart_opaquearea_callback != nullptr) {
            return qpolarchart_opaquearea_callback();
        } else {
            return QPolarChart::opaqueArea();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qpolarchart_sceneeventfilter_isbase) {
            qpolarchart_sceneeventfilter_isbase = false;
            return QPolarChart::sceneEventFilter(watched, event);
        } else if (qpolarchart_sceneeventfilter_callback != nullptr) {
            return qpolarchart_sceneeventfilter_callback(this, watched, event);
        } else {
            return QPolarChart::sceneEventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qpolarchart_contextmenuevent_isbase) {
            qpolarchart_contextmenuevent_isbase = false;
            QPolarChart::contextMenuEvent(event);
        } else if (qpolarchart_contextmenuevent_callback != nullptr) {
            qpolarchart_contextmenuevent_callback(this, event);
        } else {
            QPolarChart::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragenterevent_isbase) {
            qpolarchart_dragenterevent_isbase = false;
            QPolarChart::dragEnterEvent(event);
        } else if (qpolarchart_dragenterevent_callback != nullptr) {
            qpolarchart_dragenterevent_callback(this, event);
        } else {
            QPolarChart::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragleaveevent_isbase) {
            qpolarchart_dragleaveevent_isbase = false;
            QPolarChart::dragLeaveEvent(event);
        } else if (qpolarchart_dragleaveevent_callback != nullptr) {
            qpolarchart_dragleaveevent_callback(this, event);
        } else {
            QPolarChart::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dragmoveevent_isbase) {
            qpolarchart_dragmoveevent_isbase = false;
            QPolarChart::dragMoveEvent(event);
        } else if (qpolarchart_dragmoveevent_callback != nullptr) {
            qpolarchart_dragmoveevent_callback(this, event);
        } else {
            QPolarChart::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qpolarchart_dropevent_isbase) {
            qpolarchart_dropevent_isbase = false;
            QPolarChart::dropEvent(event);
        } else if (qpolarchart_dropevent_callback != nullptr) {
            qpolarchart_dropevent_callback(this, event);
        } else {
            QPolarChart::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qpolarchart_hoverenterevent_isbase) {
            qpolarchart_hoverenterevent_isbase = false;
            QPolarChart::hoverEnterEvent(event);
        } else if (qpolarchart_hoverenterevent_callback != nullptr) {
            qpolarchart_hoverenterevent_callback(this, event);
        } else {
            QPolarChart::hoverEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qpolarchart_keypressevent_isbase) {
            qpolarchart_keypressevent_isbase = false;
            QPolarChart::keyPressEvent(event);
        } else if (qpolarchart_keypressevent_callback != nullptr) {
            qpolarchart_keypressevent_callback(this, event);
        } else {
            QPolarChart::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpolarchart_keyreleaseevent_isbase) {
            qpolarchart_keyreleaseevent_isbase = false;
            QPolarChart::keyReleaseEvent(event);
        } else if (qpolarchart_keyreleaseevent_callback != nullptr) {
            qpolarchart_keyreleaseevent_callback(this, event);
        } else {
            QPolarChart::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousepressevent_isbase) {
            qpolarchart_mousepressevent_isbase = false;
            QPolarChart::mousePressEvent(event);
        } else if (qpolarchart_mousepressevent_callback != nullptr) {
            qpolarchart_mousepressevent_callback(this, event);
        } else {
            QPolarChart::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousemoveevent_isbase) {
            qpolarchart_mousemoveevent_isbase = false;
            QPolarChart::mouseMoveEvent(event);
        } else if (qpolarchart_mousemoveevent_callback != nullptr) {
            qpolarchart_mousemoveevent_callback(this, event);
        } else {
            QPolarChart::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousereleaseevent_isbase) {
            qpolarchart_mousereleaseevent_isbase = false;
            QPolarChart::mouseReleaseEvent(event);
        } else if (qpolarchart_mousereleaseevent_callback != nullptr) {
            qpolarchart_mousereleaseevent_callback(this, event);
        } else {
            QPolarChart::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qpolarchart_mousedoubleclickevent_isbase) {
            qpolarchart_mousedoubleclickevent_isbase = false;
            QPolarChart::mouseDoubleClickEvent(event);
        } else if (qpolarchart_mousedoubleclickevent_callback != nullptr) {
            qpolarchart_mousedoubleclickevent_callback(this, event);
        } else {
            QPolarChart::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qpolarchart_wheelevent_isbase) {
            qpolarchart_wheelevent_isbase = false;
            QPolarChart::wheelEvent(event);
        } else if (qpolarchart_wheelevent_callback != nullptr) {
            qpolarchart_wheelevent_callback(this, event);
        } else {
            QPolarChart::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qpolarchart_inputmethodevent_isbase) {
            qpolarchart_inputmethodevent_isbase = false;
            QPolarChart::inputMethodEvent(event);
        } else if (qpolarchart_inputmethodevent_callback != nullptr) {
            qpolarchart_inputmethodevent_callback(this, event);
        } else {
            QPolarChart::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qpolarchart_inputmethodquery_isbase) {
            qpolarchart_inputmethodquery_isbase = false;
            return QPolarChart::inputMethodQuery(query);
        } else if (qpolarchart_inputmethodquery_callback != nullptr) {
            return qpolarchart_inputmethodquery_callback(this, query);
        } else {
            return QPolarChart::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qpolarchart_supportsextension_isbase) {
            qpolarchart_supportsextension_isbase = false;
            return QPolarChart::supportsExtension(extension);
        } else if (qpolarchart_supportsextension_callback != nullptr) {
            return qpolarchart_supportsextension_callback(this, extension);
        } else {
            return QPolarChart::supportsExtension(extension);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qpolarchart_setextension_isbase) {
            qpolarchart_setextension_isbase = false;
            QPolarChart::setExtension(extension, variant);
        } else if (qpolarchart_setextension_callback != nullptr) {
            qpolarchart_setextension_callback(this, extension, variant);
        } else {
            QPolarChart::setExtension(extension, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qpolarchart_extension_isbase) {
            qpolarchart_extension_isbase = false;
            return QPolarChart::extension(variant);
        } else if (qpolarchart_extension_callback != nullptr) {
            return qpolarchart_extension_callback(this, variant);
        } else {
            return QPolarChart::extension(variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qpolarchart_isempty_isbase) {
            qpolarchart_isempty_isbase = false;
            return QPolarChart::isEmpty();
        } else if (qpolarchart_isempty_callback != nullptr) {
            return qpolarchart_isempty_callback();
        } else {
            return QPolarChart::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpolarchart_updatemicrofocus_isbase) {
            qpolarchart_updatemicrofocus_isbase = false;
            QPolarChart::updateMicroFocus();
        } else if (qpolarchart_updatemicrofocus_callback != nullptr) {
            qpolarchart_updatemicrofocus_callback();
        } else {
            QPolarChart::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpolarchart_sender_isbase) {
            qpolarchart_sender_isbase = false;
            return QPolarChart::sender();
        } else if (qpolarchart_sender_callback != nullptr) {
            return qpolarchart_sender_callback();
        } else {
            return QPolarChart::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpolarchart_sendersignalindex_isbase) {
            qpolarchart_sendersignalindex_isbase = false;
            return QPolarChart::senderSignalIndex();
        } else if (qpolarchart_sendersignalindex_callback != nullptr) {
            return qpolarchart_sendersignalindex_callback();
        } else {
            return QPolarChart::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpolarchart_receivers_isbase) {
            qpolarchart_receivers_isbase = false;
            return QPolarChart::receivers(signal);
        } else if (qpolarchart_receivers_callback != nullptr) {
            return qpolarchart_receivers_callback(this, signal);
        } else {
            return QPolarChart::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpolarchart_issignalconnected_isbase) {
            qpolarchart_issignalconnected_isbase = false;
            return QPolarChart::isSignalConnected(signal);
        } else if (qpolarchart_issignalconnected_callback != nullptr) {
            return qpolarchart_issignalconnected_callback(this, signal);
        } else {
            return QPolarChart::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qpolarchart_addtoindex_isbase) {
            qpolarchart_addtoindex_isbase = false;
            QPolarChart::addToIndex();
        } else if (qpolarchart_addtoindex_callback != nullptr) {
            qpolarchart_addtoindex_callback();
        } else {
            QPolarChart::addToIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qpolarchart_removefromindex_isbase) {
            qpolarchart_removefromindex_isbase = false;
            QPolarChart::removeFromIndex();
        } else if (qpolarchart_removefromindex_callback != nullptr) {
            qpolarchart_removefromindex_callback();
        } else {
            QPolarChart::removeFromIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qpolarchart_preparegeometrychange_isbase) {
            qpolarchart_preparegeometrychange_isbase = false;
            QPolarChart::prepareGeometryChange();
        } else if (qpolarchart_preparegeometrychange_callback != nullptr) {
            qpolarchart_preparegeometrychange_callback();
        } else {
            QPolarChart::prepareGeometryChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qpolarchart_setgraphicsitem_isbase) {
            qpolarchart_setgraphicsitem_isbase = false;
            QPolarChart::setGraphicsItem(item);
        } else if (qpolarchart_setgraphicsitem_callback != nullptr) {
            qpolarchart_setgraphicsitem_callback(this, item);
        } else {
            QPolarChart::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qpolarchart_setownedbylayout_isbase) {
            qpolarchart_setownedbylayout_isbase = false;
            QPolarChart::setOwnedByLayout(ownedByLayout);
        } else if (qpolarchart_setownedbylayout_callback != nullptr) {
            qpolarchart_setownedbylayout_callback(this, ownedByLayout);
        } else {
            QPolarChart::setOwnedByLayout(ownedByLayout);
        }
    }
};

#endif
