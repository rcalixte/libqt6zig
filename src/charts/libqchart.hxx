#pragma once
#ifndef SRC_CHARTSC_LIBVIRTUALQCHART_H
#define SRC_CHARTSC_LIBVIRTUALQCHART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QChart so that we can call protected methods
class VirtualQChart : public QChart {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QChart_Metacall_Callback = int (*)(QChart*, QMetaObject::Call, int, void**);
    using QChart_SetGeometry_Callback = void (*)(QChart*, const QRectF&);
    using QChart_GetContentsMargins_Callback = void (*)(const QChart*, qreal*, qreal*, qreal*, qreal*);
    using QChart_Type_Callback = int (*)();
    using QChart_Paint_Callback = void (*)(QChart*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
    using QChart_PaintWindowFrame_Callback = void (*)(QChart*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
    using QChart_BoundingRect_Callback = QRectF (*)();
    using QChart_Shape_Callback = QPainterPath (*)();
    using QChart_InitStyleOption_Callback = void (*)(const QChart*, QStyleOption*);
    using QChart_SizeHint_Callback = QSizeF (*)(const QChart*, Qt::SizeHint, const QSizeF&);
    using QChart_UpdateGeometry_Callback = void (*)();
    using QChart_ItemChange_Callback = QVariant (*)(QChart*, QGraphicsItem::GraphicsItemChange, const QVariant&);
    using QChart_PropertyChange_Callback = QVariant (*)(QChart*, const QString&, const QVariant&);
    using QChart_SceneEvent_Callback = bool (*)(QChart*, QEvent*);
    using QChart_WindowFrameEvent_Callback = bool (*)(QChart*, QEvent*);
    using QChart_WindowFrameSectionAt_Callback = Qt::WindowFrameSection (*)(const QChart*, const QPointF&);
    using QChart_Event_Callback = bool (*)(QChart*, QEvent*);
    using QChart_ChangeEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_CloseEvent_Callback = void (*)(QChart*, QCloseEvent*);
    using QChart_FocusInEvent_Callback = void (*)(QChart*, QFocusEvent*);
    using QChart_FocusNextPrevChild_Callback = bool (*)(QChart*, bool);
    using QChart_FocusOutEvent_Callback = void (*)(QChart*, QFocusEvent*);
    using QChart_HideEvent_Callback = void (*)(QChart*, QHideEvent*);
    using QChart_MoveEvent_Callback = void (*)(QChart*, QGraphicsSceneMoveEvent*);
    using QChart_PolishEvent_Callback = void (*)();
    using QChart_ResizeEvent_Callback = void (*)(QChart*, QGraphicsSceneResizeEvent*);
    using QChart_ShowEvent_Callback = void (*)(QChart*, QShowEvent*);
    using QChart_HoverMoveEvent_Callback = void (*)(QChart*, QGraphicsSceneHoverEvent*);
    using QChart_HoverLeaveEvent_Callback = void (*)(QChart*, QGraphicsSceneHoverEvent*);
    using QChart_GrabMouseEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_UngrabMouseEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_GrabKeyboardEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_UngrabKeyboardEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_EventFilter_Callback = bool (*)(QChart*, QObject*, QEvent*);
    using QChart_TimerEvent_Callback = void (*)(QChart*, QTimerEvent*);
    using QChart_ChildEvent_Callback = void (*)(QChart*, QChildEvent*);
    using QChart_CustomEvent_Callback = void (*)(QChart*, QEvent*);
    using QChart_ConnectNotify_Callback = void (*)(QChart*, const QMetaMethod&);
    using QChart_DisconnectNotify_Callback = void (*)(QChart*, const QMetaMethod&);
    using QChart_Advance_Callback = void (*)(QChart*, int);
    using QChart_Contains_Callback = bool (*)(const QChart*, const QPointF&);
    using QChart_CollidesWithItem_Callback = bool (*)(const QChart*, const QGraphicsItem*, Qt::ItemSelectionMode);
    using QChart_CollidesWithPath_Callback = bool (*)(const QChart*, const QPainterPath&, Qt::ItemSelectionMode);
    using QChart_IsObscuredBy_Callback = bool (*)(const QChart*, const QGraphicsItem*);
    using QChart_OpaqueArea_Callback = QPainterPath (*)();
    using QChart_SceneEventFilter_Callback = bool (*)(QChart*, QGraphicsItem*, QEvent*);
    using QChart_ContextMenuEvent_Callback = void (*)(QChart*, QGraphicsSceneContextMenuEvent*);
    using QChart_DragEnterEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_DragLeaveEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_DragMoveEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_DropEvent_Callback = void (*)(QChart*, QGraphicsSceneDragDropEvent*);
    using QChart_HoverEnterEvent_Callback = void (*)(QChart*, QGraphicsSceneHoverEvent*);
    using QChart_KeyPressEvent_Callback = void (*)(QChart*, QKeyEvent*);
    using QChart_KeyReleaseEvent_Callback = void (*)(QChart*, QKeyEvent*);
    using QChart_MousePressEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_MouseMoveEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_MouseReleaseEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_MouseDoubleClickEvent_Callback = void (*)(QChart*, QGraphicsSceneMouseEvent*);
    using QChart_WheelEvent_Callback = void (*)(QChart*, QGraphicsSceneWheelEvent*);
    using QChart_InputMethodEvent_Callback = void (*)(QChart*, QInputMethodEvent*);
    using QChart_InputMethodQuery_Callback = QVariant (*)(const QChart*, Qt::InputMethodQuery);
    using QChart_SupportsExtension_Callback = bool (*)(const QChart*, int);
    using QChart_SetExtension_Callback = void (*)(QChart*, int, const QVariant&);
    using QChart_Extension_Callback = QVariant (*)(const QChart*, const QVariant&);
    using QChart_IsEmpty_Callback = bool (*)();
    using QChart_UpdateMicroFocus_Callback = void (*)();
    using QChart_Sender_Callback = QObject* (*)();
    using QChart_SenderSignalIndex_Callback = int (*)();
    using QChart_Receivers_Callback = int (*)(const QChart*, const char*);
    using QChart_IsSignalConnected_Callback = bool (*)(const QChart*, const QMetaMethod&);
    using QChart_AddToIndex_Callback = void (*)();
    using QChart_RemoveFromIndex_Callback = void (*)();
    using QChart_PrepareGeometryChange_Callback = void (*)();
    using QChart_SetGraphicsItem_Callback = void (*)(QChart*, QGraphicsItem*);
    using QChart_SetOwnedByLayout_Callback = void (*)(QChart*, bool);

  protected:
    // Instance callback storage
    QChart_Metacall_Callback qchart_metacall_callback = nullptr;
    QChart_SetGeometry_Callback qchart_setgeometry_callback = nullptr;
    QChart_GetContentsMargins_Callback qchart_getcontentsmargins_callback = nullptr;
    QChart_Type_Callback qchart_type_callback = nullptr;
    QChart_Paint_Callback qchart_paint_callback = nullptr;
    QChart_PaintWindowFrame_Callback qchart_paintwindowframe_callback = nullptr;
    QChart_BoundingRect_Callback qchart_boundingrect_callback = nullptr;
    QChart_Shape_Callback qchart_shape_callback = nullptr;
    QChart_InitStyleOption_Callback qchart_initstyleoption_callback = nullptr;
    QChart_SizeHint_Callback qchart_sizehint_callback = nullptr;
    QChart_UpdateGeometry_Callback qchart_updategeometry_callback = nullptr;
    QChart_ItemChange_Callback qchart_itemchange_callback = nullptr;
    QChart_PropertyChange_Callback qchart_propertychange_callback = nullptr;
    QChart_SceneEvent_Callback qchart_sceneevent_callback = nullptr;
    QChart_WindowFrameEvent_Callback qchart_windowframeevent_callback = nullptr;
    QChart_WindowFrameSectionAt_Callback qchart_windowframesectionat_callback = nullptr;
    QChart_Event_Callback qchart_event_callback = nullptr;
    QChart_ChangeEvent_Callback qchart_changeevent_callback = nullptr;
    QChart_CloseEvent_Callback qchart_closeevent_callback = nullptr;
    QChart_FocusInEvent_Callback qchart_focusinevent_callback = nullptr;
    QChart_FocusNextPrevChild_Callback qchart_focusnextprevchild_callback = nullptr;
    QChart_FocusOutEvent_Callback qchart_focusoutevent_callback = nullptr;
    QChart_HideEvent_Callback qchart_hideevent_callback = nullptr;
    QChart_MoveEvent_Callback qchart_moveevent_callback = nullptr;
    QChart_PolishEvent_Callback qchart_polishevent_callback = nullptr;
    QChart_ResizeEvent_Callback qchart_resizeevent_callback = nullptr;
    QChart_ShowEvent_Callback qchart_showevent_callback = nullptr;
    QChart_HoverMoveEvent_Callback qchart_hovermoveevent_callback = nullptr;
    QChart_HoverLeaveEvent_Callback qchart_hoverleaveevent_callback = nullptr;
    QChart_GrabMouseEvent_Callback qchart_grabmouseevent_callback = nullptr;
    QChart_UngrabMouseEvent_Callback qchart_ungrabmouseevent_callback = nullptr;
    QChart_GrabKeyboardEvent_Callback qchart_grabkeyboardevent_callback = nullptr;
    QChart_UngrabKeyboardEvent_Callback qchart_ungrabkeyboardevent_callback = nullptr;
    QChart_EventFilter_Callback qchart_eventfilter_callback = nullptr;
    QChart_TimerEvent_Callback qchart_timerevent_callback = nullptr;
    QChart_ChildEvent_Callback qchart_childevent_callback = nullptr;
    QChart_CustomEvent_Callback qchart_customevent_callback = nullptr;
    QChart_ConnectNotify_Callback qchart_connectnotify_callback = nullptr;
    QChart_DisconnectNotify_Callback qchart_disconnectnotify_callback = nullptr;
    QChart_Advance_Callback qchart_advance_callback = nullptr;
    QChart_Contains_Callback qchart_contains_callback = nullptr;
    QChart_CollidesWithItem_Callback qchart_collideswithitem_callback = nullptr;
    QChart_CollidesWithPath_Callback qchart_collideswithpath_callback = nullptr;
    QChart_IsObscuredBy_Callback qchart_isobscuredby_callback = nullptr;
    QChart_OpaqueArea_Callback qchart_opaquearea_callback = nullptr;
    QChart_SceneEventFilter_Callback qchart_sceneeventfilter_callback = nullptr;
    QChart_ContextMenuEvent_Callback qchart_contextmenuevent_callback = nullptr;
    QChart_DragEnterEvent_Callback qchart_dragenterevent_callback = nullptr;
    QChart_DragLeaveEvent_Callback qchart_dragleaveevent_callback = nullptr;
    QChart_DragMoveEvent_Callback qchart_dragmoveevent_callback = nullptr;
    QChart_DropEvent_Callback qchart_dropevent_callback = nullptr;
    QChart_HoverEnterEvent_Callback qchart_hoverenterevent_callback = nullptr;
    QChart_KeyPressEvent_Callback qchart_keypressevent_callback = nullptr;
    QChart_KeyReleaseEvent_Callback qchart_keyreleaseevent_callback = nullptr;
    QChart_MousePressEvent_Callback qchart_mousepressevent_callback = nullptr;
    QChart_MouseMoveEvent_Callback qchart_mousemoveevent_callback = nullptr;
    QChart_MouseReleaseEvent_Callback qchart_mousereleaseevent_callback = nullptr;
    QChart_MouseDoubleClickEvent_Callback qchart_mousedoubleclickevent_callback = nullptr;
    QChart_WheelEvent_Callback qchart_wheelevent_callback = nullptr;
    QChart_InputMethodEvent_Callback qchart_inputmethodevent_callback = nullptr;
    QChart_InputMethodQuery_Callback qchart_inputmethodquery_callback = nullptr;
    QChart_SupportsExtension_Callback qchart_supportsextension_callback = nullptr;
    QChart_SetExtension_Callback qchart_setextension_callback = nullptr;
    QChart_Extension_Callback qchart_extension_callback = nullptr;
    QChart_IsEmpty_Callback qchart_isempty_callback = nullptr;
    QChart_UpdateMicroFocus_Callback qchart_updatemicrofocus_callback = nullptr;
    QChart_Sender_Callback qchart_sender_callback = nullptr;
    QChart_SenderSignalIndex_Callback qchart_sendersignalindex_callback = nullptr;
    QChart_Receivers_Callback qchart_receivers_callback = nullptr;
    QChart_IsSignalConnected_Callback qchart_issignalconnected_callback = nullptr;
    QChart_AddToIndex_Callback qchart_addtoindex_callback = nullptr;
    QChart_RemoveFromIndex_Callback qchart_removefromindex_callback = nullptr;
    QChart_PrepareGeometryChange_Callback qchart_preparegeometrychange_callback = nullptr;
    QChart_SetGraphicsItem_Callback qchart_setgraphicsitem_callback = nullptr;
    QChart_SetOwnedByLayout_Callback qchart_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qchart_metacall_isbase = false;
    mutable bool qchart_setgeometry_isbase = false;
    mutable bool qchart_getcontentsmargins_isbase = false;
    mutable bool qchart_type_isbase = false;
    mutable bool qchart_paint_isbase = false;
    mutable bool qchart_paintwindowframe_isbase = false;
    mutable bool qchart_boundingrect_isbase = false;
    mutable bool qchart_shape_isbase = false;
    mutable bool qchart_initstyleoption_isbase = false;
    mutable bool qchart_sizehint_isbase = false;
    mutable bool qchart_updategeometry_isbase = false;
    mutable bool qchart_itemchange_isbase = false;
    mutable bool qchart_propertychange_isbase = false;
    mutable bool qchart_sceneevent_isbase = false;
    mutable bool qchart_windowframeevent_isbase = false;
    mutable bool qchart_windowframesectionat_isbase = false;
    mutable bool qchart_event_isbase = false;
    mutable bool qchart_changeevent_isbase = false;
    mutable bool qchart_closeevent_isbase = false;
    mutable bool qchart_focusinevent_isbase = false;
    mutable bool qchart_focusnextprevchild_isbase = false;
    mutable bool qchart_focusoutevent_isbase = false;
    mutable bool qchart_hideevent_isbase = false;
    mutable bool qchart_moveevent_isbase = false;
    mutable bool qchart_polishevent_isbase = false;
    mutable bool qchart_resizeevent_isbase = false;
    mutable bool qchart_showevent_isbase = false;
    mutable bool qchart_hovermoveevent_isbase = false;
    mutable bool qchart_hoverleaveevent_isbase = false;
    mutable bool qchart_grabmouseevent_isbase = false;
    mutable bool qchart_ungrabmouseevent_isbase = false;
    mutable bool qchart_grabkeyboardevent_isbase = false;
    mutable bool qchart_ungrabkeyboardevent_isbase = false;
    mutable bool qchart_eventfilter_isbase = false;
    mutable bool qchart_timerevent_isbase = false;
    mutable bool qchart_childevent_isbase = false;
    mutable bool qchart_customevent_isbase = false;
    mutable bool qchart_connectnotify_isbase = false;
    mutable bool qchart_disconnectnotify_isbase = false;
    mutable bool qchart_advance_isbase = false;
    mutable bool qchart_contains_isbase = false;
    mutable bool qchart_collideswithitem_isbase = false;
    mutable bool qchart_collideswithpath_isbase = false;
    mutable bool qchart_isobscuredby_isbase = false;
    mutable bool qchart_opaquearea_isbase = false;
    mutable bool qchart_sceneeventfilter_isbase = false;
    mutable bool qchart_contextmenuevent_isbase = false;
    mutable bool qchart_dragenterevent_isbase = false;
    mutable bool qchart_dragleaveevent_isbase = false;
    mutable bool qchart_dragmoveevent_isbase = false;
    mutable bool qchart_dropevent_isbase = false;
    mutable bool qchart_hoverenterevent_isbase = false;
    mutable bool qchart_keypressevent_isbase = false;
    mutable bool qchart_keyreleaseevent_isbase = false;
    mutable bool qchart_mousepressevent_isbase = false;
    mutable bool qchart_mousemoveevent_isbase = false;
    mutable bool qchart_mousereleaseevent_isbase = false;
    mutable bool qchart_mousedoubleclickevent_isbase = false;
    mutable bool qchart_wheelevent_isbase = false;
    mutable bool qchart_inputmethodevent_isbase = false;
    mutable bool qchart_inputmethodquery_isbase = false;
    mutable bool qchart_supportsextension_isbase = false;
    mutable bool qchart_setextension_isbase = false;
    mutable bool qchart_extension_isbase = false;
    mutable bool qchart_isempty_isbase = false;
    mutable bool qchart_updatemicrofocus_isbase = false;
    mutable bool qchart_sender_isbase = false;
    mutable bool qchart_sendersignalindex_isbase = false;
    mutable bool qchart_receivers_isbase = false;
    mutable bool qchart_issignalconnected_isbase = false;
    mutable bool qchart_addtoindex_isbase = false;
    mutable bool qchart_removefromindex_isbase = false;
    mutable bool qchart_preparegeometrychange_isbase = false;
    mutable bool qchart_setgraphicsitem_isbase = false;
    mutable bool qchart_setownedbylayout_isbase = false;

  public:
    VirtualQChart() : QChart(){};
    VirtualQChart(QGraphicsItem* parent) : QChart(parent){};
    VirtualQChart(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QChart(parent, wFlags){};

    ~VirtualQChart() {
        qchart_metacall_callback = nullptr;
        qchart_setgeometry_callback = nullptr;
        qchart_getcontentsmargins_callback = nullptr;
        qchart_type_callback = nullptr;
        qchart_paint_callback = nullptr;
        qchart_paintwindowframe_callback = nullptr;
        qchart_boundingrect_callback = nullptr;
        qchart_shape_callback = nullptr;
        qchart_initstyleoption_callback = nullptr;
        qchart_sizehint_callback = nullptr;
        qchart_updategeometry_callback = nullptr;
        qchart_itemchange_callback = nullptr;
        qchart_propertychange_callback = nullptr;
        qchart_sceneevent_callback = nullptr;
        qchart_windowframeevent_callback = nullptr;
        qchart_windowframesectionat_callback = nullptr;
        qchart_event_callback = nullptr;
        qchart_changeevent_callback = nullptr;
        qchart_closeevent_callback = nullptr;
        qchart_focusinevent_callback = nullptr;
        qchart_focusnextprevchild_callback = nullptr;
        qchart_focusoutevent_callback = nullptr;
        qchart_hideevent_callback = nullptr;
        qchart_moveevent_callback = nullptr;
        qchart_polishevent_callback = nullptr;
        qchart_resizeevent_callback = nullptr;
        qchart_showevent_callback = nullptr;
        qchart_hovermoveevent_callback = nullptr;
        qchart_hoverleaveevent_callback = nullptr;
        qchart_grabmouseevent_callback = nullptr;
        qchart_ungrabmouseevent_callback = nullptr;
        qchart_grabkeyboardevent_callback = nullptr;
        qchart_ungrabkeyboardevent_callback = nullptr;
        qchart_eventfilter_callback = nullptr;
        qchart_timerevent_callback = nullptr;
        qchart_childevent_callback = nullptr;
        qchart_customevent_callback = nullptr;
        qchart_connectnotify_callback = nullptr;
        qchart_disconnectnotify_callback = nullptr;
        qchart_advance_callback = nullptr;
        qchart_contains_callback = nullptr;
        qchart_collideswithitem_callback = nullptr;
        qchart_collideswithpath_callback = nullptr;
        qchart_isobscuredby_callback = nullptr;
        qchart_opaquearea_callback = nullptr;
        qchart_sceneeventfilter_callback = nullptr;
        qchart_contextmenuevent_callback = nullptr;
        qchart_dragenterevent_callback = nullptr;
        qchart_dragleaveevent_callback = nullptr;
        qchart_dragmoveevent_callback = nullptr;
        qchart_dropevent_callback = nullptr;
        qchart_hoverenterevent_callback = nullptr;
        qchart_keypressevent_callback = nullptr;
        qchart_keyreleaseevent_callback = nullptr;
        qchart_mousepressevent_callback = nullptr;
        qchart_mousemoveevent_callback = nullptr;
        qchart_mousereleaseevent_callback = nullptr;
        qchart_mousedoubleclickevent_callback = nullptr;
        qchart_wheelevent_callback = nullptr;
        qchart_inputmethodevent_callback = nullptr;
        qchart_inputmethodquery_callback = nullptr;
        qchart_supportsextension_callback = nullptr;
        qchart_setextension_callback = nullptr;
        qchart_extension_callback = nullptr;
        qchart_isempty_callback = nullptr;
        qchart_updatemicrofocus_callback = nullptr;
        qchart_sender_callback = nullptr;
        qchart_sendersignalindex_callback = nullptr;
        qchart_receivers_callback = nullptr;
        qchart_issignalconnected_callback = nullptr;
        qchart_addtoindex_callback = nullptr;
        qchart_removefromindex_callback = nullptr;
        qchart_preparegeometrychange_callback = nullptr;
        qchart_setgraphicsitem_callback = nullptr;
        qchart_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    void setQChart_Metacall_Callback(QChart_Metacall_Callback cb) { qchart_metacall_callback = cb; }
    void setQChart_SetGeometry_Callback(QChart_SetGeometry_Callback cb) { qchart_setgeometry_callback = cb; }
    void setQChart_GetContentsMargins_Callback(QChart_GetContentsMargins_Callback cb) { qchart_getcontentsmargins_callback = cb; }
    void setQChart_Type_Callback(QChart_Type_Callback cb) { qchart_type_callback = cb; }
    void setQChart_Paint_Callback(QChart_Paint_Callback cb) { qchart_paint_callback = cb; }
    void setQChart_PaintWindowFrame_Callback(QChart_PaintWindowFrame_Callback cb) { qchart_paintwindowframe_callback = cb; }
    void setQChart_BoundingRect_Callback(QChart_BoundingRect_Callback cb) { qchart_boundingrect_callback = cb; }
    void setQChart_Shape_Callback(QChart_Shape_Callback cb) { qchart_shape_callback = cb; }
    void setQChart_InitStyleOption_Callback(QChart_InitStyleOption_Callback cb) { qchart_initstyleoption_callback = cb; }
    void setQChart_SizeHint_Callback(QChart_SizeHint_Callback cb) { qchart_sizehint_callback = cb; }
    void setQChart_UpdateGeometry_Callback(QChart_UpdateGeometry_Callback cb) { qchart_updategeometry_callback = cb; }
    void setQChart_ItemChange_Callback(QChart_ItemChange_Callback cb) { qchart_itemchange_callback = cb; }
    void setQChart_PropertyChange_Callback(QChart_PropertyChange_Callback cb) { qchart_propertychange_callback = cb; }
    void setQChart_SceneEvent_Callback(QChart_SceneEvent_Callback cb) { qchart_sceneevent_callback = cb; }
    void setQChart_WindowFrameEvent_Callback(QChart_WindowFrameEvent_Callback cb) { qchart_windowframeevent_callback = cb; }
    void setQChart_WindowFrameSectionAt_Callback(QChart_WindowFrameSectionAt_Callback cb) { qchart_windowframesectionat_callback = cb; }
    void setQChart_Event_Callback(QChart_Event_Callback cb) { qchart_event_callback = cb; }
    void setQChart_ChangeEvent_Callback(QChart_ChangeEvent_Callback cb) { qchart_changeevent_callback = cb; }
    void setQChart_CloseEvent_Callback(QChart_CloseEvent_Callback cb) { qchart_closeevent_callback = cb; }
    void setQChart_FocusInEvent_Callback(QChart_FocusInEvent_Callback cb) { qchart_focusinevent_callback = cb; }
    void setQChart_FocusNextPrevChild_Callback(QChart_FocusNextPrevChild_Callback cb) { qchart_focusnextprevchild_callback = cb; }
    void setQChart_FocusOutEvent_Callback(QChart_FocusOutEvent_Callback cb) { qchart_focusoutevent_callback = cb; }
    void setQChart_HideEvent_Callback(QChart_HideEvent_Callback cb) { qchart_hideevent_callback = cb; }
    void setQChart_MoveEvent_Callback(QChart_MoveEvent_Callback cb) { qchart_moveevent_callback = cb; }
    void setQChart_PolishEvent_Callback(QChart_PolishEvent_Callback cb) { qchart_polishevent_callback = cb; }
    void setQChart_ResizeEvent_Callback(QChart_ResizeEvent_Callback cb) { qchart_resizeevent_callback = cb; }
    void setQChart_ShowEvent_Callback(QChart_ShowEvent_Callback cb) { qchart_showevent_callback = cb; }
    void setQChart_HoverMoveEvent_Callback(QChart_HoverMoveEvent_Callback cb) { qchart_hovermoveevent_callback = cb; }
    void setQChart_HoverLeaveEvent_Callback(QChart_HoverLeaveEvent_Callback cb) { qchart_hoverleaveevent_callback = cb; }
    void setQChart_GrabMouseEvent_Callback(QChart_GrabMouseEvent_Callback cb) { qchart_grabmouseevent_callback = cb; }
    void setQChart_UngrabMouseEvent_Callback(QChart_UngrabMouseEvent_Callback cb) { qchart_ungrabmouseevent_callback = cb; }
    void setQChart_GrabKeyboardEvent_Callback(QChart_GrabKeyboardEvent_Callback cb) { qchart_grabkeyboardevent_callback = cb; }
    void setQChart_UngrabKeyboardEvent_Callback(QChart_UngrabKeyboardEvent_Callback cb) { qchart_ungrabkeyboardevent_callback = cb; }
    void setQChart_EventFilter_Callback(QChart_EventFilter_Callback cb) { qchart_eventfilter_callback = cb; }
    void setQChart_TimerEvent_Callback(QChart_TimerEvent_Callback cb) { qchart_timerevent_callback = cb; }
    void setQChart_ChildEvent_Callback(QChart_ChildEvent_Callback cb) { qchart_childevent_callback = cb; }
    void setQChart_CustomEvent_Callback(QChart_CustomEvent_Callback cb) { qchart_customevent_callback = cb; }
    void setQChart_ConnectNotify_Callback(QChart_ConnectNotify_Callback cb) { qchart_connectnotify_callback = cb; }
    void setQChart_DisconnectNotify_Callback(QChart_DisconnectNotify_Callback cb) { qchart_disconnectnotify_callback = cb; }
    void setQChart_Advance_Callback(QChart_Advance_Callback cb) { qchart_advance_callback = cb; }
    void setQChart_Contains_Callback(QChart_Contains_Callback cb) { qchart_contains_callback = cb; }
    void setQChart_CollidesWithItem_Callback(QChart_CollidesWithItem_Callback cb) { qchart_collideswithitem_callback = cb; }
    void setQChart_CollidesWithPath_Callback(QChart_CollidesWithPath_Callback cb) { qchart_collideswithpath_callback = cb; }
    void setQChart_IsObscuredBy_Callback(QChart_IsObscuredBy_Callback cb) { qchart_isobscuredby_callback = cb; }
    void setQChart_OpaqueArea_Callback(QChart_OpaqueArea_Callback cb) { qchart_opaquearea_callback = cb; }
    void setQChart_SceneEventFilter_Callback(QChart_SceneEventFilter_Callback cb) { qchart_sceneeventfilter_callback = cb; }
    void setQChart_ContextMenuEvent_Callback(QChart_ContextMenuEvent_Callback cb) { qchart_contextmenuevent_callback = cb; }
    void setQChart_DragEnterEvent_Callback(QChart_DragEnterEvent_Callback cb) { qchart_dragenterevent_callback = cb; }
    void setQChart_DragLeaveEvent_Callback(QChart_DragLeaveEvent_Callback cb) { qchart_dragleaveevent_callback = cb; }
    void setQChart_DragMoveEvent_Callback(QChart_DragMoveEvent_Callback cb) { qchart_dragmoveevent_callback = cb; }
    void setQChart_DropEvent_Callback(QChart_DropEvent_Callback cb) { qchart_dropevent_callback = cb; }
    void setQChart_HoverEnterEvent_Callback(QChart_HoverEnterEvent_Callback cb) { qchart_hoverenterevent_callback = cb; }
    void setQChart_KeyPressEvent_Callback(QChart_KeyPressEvent_Callback cb) { qchart_keypressevent_callback = cb; }
    void setQChart_KeyReleaseEvent_Callback(QChart_KeyReleaseEvent_Callback cb) { qchart_keyreleaseevent_callback = cb; }
    void setQChart_MousePressEvent_Callback(QChart_MousePressEvent_Callback cb) { qchart_mousepressevent_callback = cb; }
    void setQChart_MouseMoveEvent_Callback(QChart_MouseMoveEvent_Callback cb) { qchart_mousemoveevent_callback = cb; }
    void setQChart_MouseReleaseEvent_Callback(QChart_MouseReleaseEvent_Callback cb) { qchart_mousereleaseevent_callback = cb; }
    void setQChart_MouseDoubleClickEvent_Callback(QChart_MouseDoubleClickEvent_Callback cb) { qchart_mousedoubleclickevent_callback = cb; }
    void setQChart_WheelEvent_Callback(QChart_WheelEvent_Callback cb) { qchart_wheelevent_callback = cb; }
    void setQChart_InputMethodEvent_Callback(QChart_InputMethodEvent_Callback cb) { qchart_inputmethodevent_callback = cb; }
    void setQChart_InputMethodQuery_Callback(QChart_InputMethodQuery_Callback cb) { qchart_inputmethodquery_callback = cb; }
    void setQChart_SupportsExtension_Callback(QChart_SupportsExtension_Callback cb) { qchart_supportsextension_callback = cb; }
    void setQChart_SetExtension_Callback(QChart_SetExtension_Callback cb) { qchart_setextension_callback = cb; }
    void setQChart_Extension_Callback(QChart_Extension_Callback cb) { qchart_extension_callback = cb; }
    void setQChart_IsEmpty_Callback(QChart_IsEmpty_Callback cb) { qchart_isempty_callback = cb; }
    void setQChart_UpdateMicroFocus_Callback(QChart_UpdateMicroFocus_Callback cb) { qchart_updatemicrofocus_callback = cb; }
    void setQChart_Sender_Callback(QChart_Sender_Callback cb) { qchart_sender_callback = cb; }
    void setQChart_SenderSignalIndex_Callback(QChart_SenderSignalIndex_Callback cb) { qchart_sendersignalindex_callback = cb; }
    void setQChart_Receivers_Callback(QChart_Receivers_Callback cb) { qchart_receivers_callback = cb; }
    void setQChart_IsSignalConnected_Callback(QChart_IsSignalConnected_Callback cb) { qchart_issignalconnected_callback = cb; }
    void setQChart_AddToIndex_Callback(QChart_AddToIndex_Callback cb) { qchart_addtoindex_callback = cb; }
    void setQChart_RemoveFromIndex_Callback(QChart_RemoveFromIndex_Callback cb) { qchart_removefromindex_callback = cb; }
    void setQChart_PrepareGeometryChange_Callback(QChart_PrepareGeometryChange_Callback cb) { qchart_preparegeometrychange_callback = cb; }
    void setQChart_SetGraphicsItem_Callback(QChart_SetGraphicsItem_Callback cb) { qchart_setgraphicsitem_callback = cb; }
    void setQChart_SetOwnedByLayout_Callback(QChart_SetOwnedByLayout_Callback cb) { qchart_setownedbylayout_callback = cb; }

    // Base flag setters
    void setQChart_Metacall_IsBase(bool value) const { qchart_metacall_isbase = value; }
    void setQChart_SetGeometry_IsBase(bool value) const { qchart_setgeometry_isbase = value; }
    void setQChart_GetContentsMargins_IsBase(bool value) const { qchart_getcontentsmargins_isbase = value; }
    void setQChart_Type_IsBase(bool value) const { qchart_type_isbase = value; }
    void setQChart_Paint_IsBase(bool value) const { qchart_paint_isbase = value; }
    void setQChart_PaintWindowFrame_IsBase(bool value) const { qchart_paintwindowframe_isbase = value; }
    void setQChart_BoundingRect_IsBase(bool value) const { qchart_boundingrect_isbase = value; }
    void setQChart_Shape_IsBase(bool value) const { qchart_shape_isbase = value; }
    void setQChart_InitStyleOption_IsBase(bool value) const { qchart_initstyleoption_isbase = value; }
    void setQChart_SizeHint_IsBase(bool value) const { qchart_sizehint_isbase = value; }
    void setQChart_UpdateGeometry_IsBase(bool value) const { qchart_updategeometry_isbase = value; }
    void setQChart_ItemChange_IsBase(bool value) const { qchart_itemchange_isbase = value; }
    void setQChart_PropertyChange_IsBase(bool value) const { qchart_propertychange_isbase = value; }
    void setQChart_SceneEvent_IsBase(bool value) const { qchart_sceneevent_isbase = value; }
    void setQChart_WindowFrameEvent_IsBase(bool value) const { qchart_windowframeevent_isbase = value; }
    void setQChart_WindowFrameSectionAt_IsBase(bool value) const { qchart_windowframesectionat_isbase = value; }
    void setQChart_Event_IsBase(bool value) const { qchart_event_isbase = value; }
    void setQChart_ChangeEvent_IsBase(bool value) const { qchart_changeevent_isbase = value; }
    void setQChart_CloseEvent_IsBase(bool value) const { qchart_closeevent_isbase = value; }
    void setQChart_FocusInEvent_IsBase(bool value) const { qchart_focusinevent_isbase = value; }
    void setQChart_FocusNextPrevChild_IsBase(bool value) const { qchart_focusnextprevchild_isbase = value; }
    void setQChart_FocusOutEvent_IsBase(bool value) const { qchart_focusoutevent_isbase = value; }
    void setQChart_HideEvent_IsBase(bool value) const { qchart_hideevent_isbase = value; }
    void setQChart_MoveEvent_IsBase(bool value) const { qchart_moveevent_isbase = value; }
    void setQChart_PolishEvent_IsBase(bool value) const { qchart_polishevent_isbase = value; }
    void setQChart_ResizeEvent_IsBase(bool value) const { qchart_resizeevent_isbase = value; }
    void setQChart_ShowEvent_IsBase(bool value) const { qchart_showevent_isbase = value; }
    void setQChart_HoverMoveEvent_IsBase(bool value) const { qchart_hovermoveevent_isbase = value; }
    void setQChart_HoverLeaveEvent_IsBase(bool value) const { qchart_hoverleaveevent_isbase = value; }
    void setQChart_GrabMouseEvent_IsBase(bool value) const { qchart_grabmouseevent_isbase = value; }
    void setQChart_UngrabMouseEvent_IsBase(bool value) const { qchart_ungrabmouseevent_isbase = value; }
    void setQChart_GrabKeyboardEvent_IsBase(bool value) const { qchart_grabkeyboardevent_isbase = value; }
    void setQChart_UngrabKeyboardEvent_IsBase(bool value) const { qchart_ungrabkeyboardevent_isbase = value; }
    void setQChart_EventFilter_IsBase(bool value) const { qchart_eventfilter_isbase = value; }
    void setQChart_TimerEvent_IsBase(bool value) const { qchart_timerevent_isbase = value; }
    void setQChart_ChildEvent_IsBase(bool value) const { qchart_childevent_isbase = value; }
    void setQChart_CustomEvent_IsBase(bool value) const { qchart_customevent_isbase = value; }
    void setQChart_ConnectNotify_IsBase(bool value) const { qchart_connectnotify_isbase = value; }
    void setQChart_DisconnectNotify_IsBase(bool value) const { qchart_disconnectnotify_isbase = value; }
    void setQChart_Advance_IsBase(bool value) const { qchart_advance_isbase = value; }
    void setQChart_Contains_IsBase(bool value) const { qchart_contains_isbase = value; }
    void setQChart_CollidesWithItem_IsBase(bool value) const { qchart_collideswithitem_isbase = value; }
    void setQChart_CollidesWithPath_IsBase(bool value) const { qchart_collideswithpath_isbase = value; }
    void setQChart_IsObscuredBy_IsBase(bool value) const { qchart_isobscuredby_isbase = value; }
    void setQChart_OpaqueArea_IsBase(bool value) const { qchart_opaquearea_isbase = value; }
    void setQChart_SceneEventFilter_IsBase(bool value) const { qchart_sceneeventfilter_isbase = value; }
    void setQChart_ContextMenuEvent_IsBase(bool value) const { qchart_contextmenuevent_isbase = value; }
    void setQChart_DragEnterEvent_IsBase(bool value) const { qchart_dragenterevent_isbase = value; }
    void setQChart_DragLeaveEvent_IsBase(bool value) const { qchart_dragleaveevent_isbase = value; }
    void setQChart_DragMoveEvent_IsBase(bool value) const { qchart_dragmoveevent_isbase = value; }
    void setQChart_DropEvent_IsBase(bool value) const { qchart_dropevent_isbase = value; }
    void setQChart_HoverEnterEvent_IsBase(bool value) const { qchart_hoverenterevent_isbase = value; }
    void setQChart_KeyPressEvent_IsBase(bool value) const { qchart_keypressevent_isbase = value; }
    void setQChart_KeyReleaseEvent_IsBase(bool value) const { qchart_keyreleaseevent_isbase = value; }
    void setQChart_MousePressEvent_IsBase(bool value) const { qchart_mousepressevent_isbase = value; }
    void setQChart_MouseMoveEvent_IsBase(bool value) const { qchart_mousemoveevent_isbase = value; }
    void setQChart_MouseReleaseEvent_IsBase(bool value) const { qchart_mousereleaseevent_isbase = value; }
    void setQChart_MouseDoubleClickEvent_IsBase(bool value) const { qchart_mousedoubleclickevent_isbase = value; }
    void setQChart_WheelEvent_IsBase(bool value) const { qchart_wheelevent_isbase = value; }
    void setQChart_InputMethodEvent_IsBase(bool value) const { qchart_inputmethodevent_isbase = value; }
    void setQChart_InputMethodQuery_IsBase(bool value) const { qchart_inputmethodquery_isbase = value; }
    void setQChart_SupportsExtension_IsBase(bool value) const { qchart_supportsextension_isbase = value; }
    void setQChart_SetExtension_IsBase(bool value) const { qchart_setextension_isbase = value; }
    void setQChart_Extension_IsBase(bool value) const { qchart_extension_isbase = value; }
    void setQChart_IsEmpty_IsBase(bool value) const { qchart_isempty_isbase = value; }
    void setQChart_UpdateMicroFocus_IsBase(bool value) const { qchart_updatemicrofocus_isbase = value; }
    void setQChart_Sender_IsBase(bool value) const { qchart_sender_isbase = value; }
    void setQChart_SenderSignalIndex_IsBase(bool value) const { qchart_sendersignalindex_isbase = value; }
    void setQChart_Receivers_IsBase(bool value) const { qchart_receivers_isbase = value; }
    void setQChart_IsSignalConnected_IsBase(bool value) const { qchart_issignalconnected_isbase = value; }
    void setQChart_AddToIndex_IsBase(bool value) const { qchart_addtoindex_isbase = value; }
    void setQChart_RemoveFromIndex_IsBase(bool value) const { qchart_removefromindex_isbase = value; }
    void setQChart_PrepareGeometryChange_IsBase(bool value) const { qchart_preparegeometrychange_isbase = value; }
    void setQChart_SetGraphicsItem_IsBase(bool value) const { qchart_setgraphicsitem_isbase = value; }
    void setQChart_SetOwnedByLayout_IsBase(bool value) const { qchart_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qchart_metacall_isbase) {
            qchart_metacall_isbase = false;
            return QChart::qt_metacall(param1, param2, param3);
        } else if (qchart_metacall_callback != nullptr) {
            return qchart_metacall_callback(this, param1, param2, param3);
        } else {
            return QChart::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qchart_setgeometry_isbase) {
            qchart_setgeometry_isbase = false;
            QChart::setGeometry(rect);
        } else if (qchart_setgeometry_callback != nullptr) {
            qchart_setgeometry_callback(this, rect);
        } else {
            QChart::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qchart_getcontentsmargins_isbase) {
            qchart_getcontentsmargins_isbase = false;
            QChart::getContentsMargins(left, top, right, bottom);
        } else if (qchart_getcontentsmargins_callback != nullptr) {
            qchart_getcontentsmargins_callback(this, left, top, right, bottom);
        } else {
            QChart::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qchart_type_isbase) {
            qchart_type_isbase = false;
            return QChart::type();
        } else if (qchart_type_callback != nullptr) {
            return qchart_type_callback();
        } else {
            return QChart::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qchart_paint_isbase) {
            qchart_paint_isbase = false;
            QChart::paint(painter, option, widget);
        } else if (qchart_paint_callback != nullptr) {
            qchart_paint_callback(this, painter, option, widget);
        } else {
            QChart::paint(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qchart_paintwindowframe_isbase) {
            qchart_paintwindowframe_isbase = false;
            QChart::paintWindowFrame(painter, option, widget);
        } else if (qchart_paintwindowframe_callback != nullptr) {
            qchart_paintwindowframe_callback(this, painter, option, widget);
        } else {
            QChart::paintWindowFrame(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qchart_boundingrect_isbase) {
            qchart_boundingrect_isbase = false;
            return QChart::boundingRect();
        } else if (qchart_boundingrect_callback != nullptr) {
            return qchart_boundingrect_callback();
        } else {
            return QChart::boundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qchart_shape_isbase) {
            qchart_shape_isbase = false;
            return QChart::shape();
        } else if (qchart_shape_callback != nullptr) {
            return qchart_shape_callback();
        } else {
            return QChart::shape();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qchart_initstyleoption_isbase) {
            qchart_initstyleoption_isbase = false;
            QChart::initStyleOption(option);
        } else if (qchart_initstyleoption_callback != nullptr) {
            qchart_initstyleoption_callback(this, option);
        } else {
            QChart::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qchart_sizehint_isbase) {
            qchart_sizehint_isbase = false;
            return QChart::sizeHint(which, constraint);
        } else if (qchart_sizehint_callback != nullptr) {
            return qchart_sizehint_callback(this, which, constraint);
        } else {
            return QChart::sizeHint(which, constraint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qchart_updategeometry_isbase) {
            qchart_updategeometry_isbase = false;
            QChart::updateGeometry();
        } else if (qchart_updategeometry_callback != nullptr) {
            qchart_updategeometry_callback();
        } else {
            QChart::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qchart_itemchange_isbase) {
            qchart_itemchange_isbase = false;
            return QChart::itemChange(change, value);
        } else if (qchart_itemchange_callback != nullptr) {
            return qchart_itemchange_callback(this, change, value);
        } else {
            return QChart::itemChange(change, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qchart_propertychange_isbase) {
            qchart_propertychange_isbase = false;
            return QChart::propertyChange(propertyName, value);
        } else if (qchart_propertychange_callback != nullptr) {
            return qchart_propertychange_callback(this, propertyName, value);
        } else {
            return QChart::propertyChange(propertyName, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qchart_sceneevent_isbase) {
            qchart_sceneevent_isbase = false;
            return QChart::sceneEvent(event);
        } else if (qchart_sceneevent_callback != nullptr) {
            return qchart_sceneevent_callback(this, event);
        } else {
            return QChart::sceneEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qchart_windowframeevent_isbase) {
            qchart_windowframeevent_isbase = false;
            return QChart::windowFrameEvent(e);
        } else if (qchart_windowframeevent_callback != nullptr) {
            return qchart_windowframeevent_callback(this, e);
        } else {
            return QChart::windowFrameEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qchart_windowframesectionat_isbase) {
            qchart_windowframesectionat_isbase = false;
            return QChart::windowFrameSectionAt(pos);
        } else if (qchart_windowframesectionat_callback != nullptr) {
            return qchart_windowframesectionat_callback(this, pos);
        } else {
            return QChart::windowFrameSectionAt(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qchart_event_isbase) {
            qchart_event_isbase = false;
            return QChart::event(event);
        } else if (qchart_event_callback != nullptr) {
            return qchart_event_callback(this, event);
        } else {
            return QChart::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qchart_changeevent_isbase) {
            qchart_changeevent_isbase = false;
            QChart::changeEvent(event);
        } else if (qchart_changeevent_callback != nullptr) {
            qchart_changeevent_callback(this, event);
        } else {
            QChart::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qchart_closeevent_isbase) {
            qchart_closeevent_isbase = false;
            QChart::closeEvent(event);
        } else if (qchart_closeevent_callback != nullptr) {
            qchart_closeevent_callback(this, event);
        } else {
            QChart::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qchart_focusinevent_isbase) {
            qchart_focusinevent_isbase = false;
            QChart::focusInEvent(event);
        } else if (qchart_focusinevent_callback != nullptr) {
            qchart_focusinevent_callback(this, event);
        } else {
            QChart::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qchart_focusnextprevchild_isbase) {
            qchart_focusnextprevchild_isbase = false;
            return QChart::focusNextPrevChild(next);
        } else if (qchart_focusnextprevchild_callback != nullptr) {
            return qchart_focusnextprevchild_callback(this, next);
        } else {
            return QChart::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qchart_focusoutevent_isbase) {
            qchart_focusoutevent_isbase = false;
            QChart::focusOutEvent(event);
        } else if (qchart_focusoutevent_callback != nullptr) {
            qchart_focusoutevent_callback(this, event);
        } else {
            QChart::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qchart_hideevent_isbase) {
            qchart_hideevent_isbase = false;
            QChart::hideEvent(event);
        } else if (qchart_hideevent_callback != nullptr) {
            qchart_hideevent_callback(this, event);
        } else {
            QChart::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qchart_moveevent_isbase) {
            qchart_moveevent_isbase = false;
            QChart::moveEvent(event);
        } else if (qchart_moveevent_callback != nullptr) {
            qchart_moveevent_callback(this, event);
        } else {
            QChart::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qchart_polishevent_isbase) {
            qchart_polishevent_isbase = false;
            QChart::polishEvent();
        } else if (qchart_polishevent_callback != nullptr) {
            qchart_polishevent_callback();
        } else {
            QChart::polishEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qchart_resizeevent_isbase) {
            qchart_resizeevent_isbase = false;
            QChart::resizeEvent(event);
        } else if (qchart_resizeevent_callback != nullptr) {
            qchart_resizeevent_callback(this, event);
        } else {
            QChart::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qchart_showevent_isbase) {
            qchart_showevent_isbase = false;
            QChart::showEvent(event);
        } else if (qchart_showevent_callback != nullptr) {
            qchart_showevent_callback(this, event);
        } else {
            QChart::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qchart_hovermoveevent_isbase) {
            qchart_hovermoveevent_isbase = false;
            QChart::hoverMoveEvent(event);
        } else if (qchart_hovermoveevent_callback != nullptr) {
            qchart_hovermoveevent_callback(this, event);
        } else {
            QChart::hoverMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qchart_hoverleaveevent_isbase) {
            qchart_hoverleaveevent_isbase = false;
            QChart::hoverLeaveEvent(event);
        } else if (qchart_hoverleaveevent_callback != nullptr) {
            qchart_hoverleaveevent_callback(this, event);
        } else {
            QChart::hoverLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qchart_grabmouseevent_isbase) {
            qchart_grabmouseevent_isbase = false;
            QChart::grabMouseEvent(event);
        } else if (qchart_grabmouseevent_callback != nullptr) {
            qchart_grabmouseevent_callback(this, event);
        } else {
            QChart::grabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qchart_ungrabmouseevent_isbase) {
            qchart_ungrabmouseevent_isbase = false;
            QChart::ungrabMouseEvent(event);
        } else if (qchart_ungrabmouseevent_callback != nullptr) {
            qchart_ungrabmouseevent_callback(this, event);
        } else {
            QChart::ungrabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qchart_grabkeyboardevent_isbase) {
            qchart_grabkeyboardevent_isbase = false;
            QChart::grabKeyboardEvent(event);
        } else if (qchart_grabkeyboardevent_callback != nullptr) {
            qchart_grabkeyboardevent_callback(this, event);
        } else {
            QChart::grabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qchart_ungrabkeyboardevent_isbase) {
            qchart_ungrabkeyboardevent_isbase = false;
            QChart::ungrabKeyboardEvent(event);
        } else if (qchart_ungrabkeyboardevent_callback != nullptr) {
            qchart_ungrabkeyboardevent_callback(this, event);
        } else {
            QChart::ungrabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qchart_eventfilter_isbase) {
            qchart_eventfilter_isbase = false;
            return QChart::eventFilter(watched, event);
        } else if (qchart_eventfilter_callback != nullptr) {
            return qchart_eventfilter_callback(this, watched, event);
        } else {
            return QChart::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qchart_timerevent_isbase) {
            qchart_timerevent_isbase = false;
            QChart::timerEvent(event);
        } else if (qchart_timerevent_callback != nullptr) {
            qchart_timerevent_callback(this, event);
        } else {
            QChart::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qchart_childevent_isbase) {
            qchart_childevent_isbase = false;
            QChart::childEvent(event);
        } else if (qchart_childevent_callback != nullptr) {
            qchart_childevent_callback(this, event);
        } else {
            QChart::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qchart_customevent_isbase) {
            qchart_customevent_isbase = false;
            QChart::customEvent(event);
        } else if (qchart_customevent_callback != nullptr) {
            qchart_customevent_callback(this, event);
        } else {
            QChart::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qchart_connectnotify_isbase) {
            qchart_connectnotify_isbase = false;
            QChart::connectNotify(signal);
        } else if (qchart_connectnotify_callback != nullptr) {
            qchart_connectnotify_callback(this, signal);
        } else {
            QChart::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qchart_disconnectnotify_isbase) {
            qchart_disconnectnotify_isbase = false;
            QChart::disconnectNotify(signal);
        } else if (qchart_disconnectnotify_callback != nullptr) {
            qchart_disconnectnotify_callback(this, signal);
        } else {
            QChart::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qchart_advance_isbase) {
            qchart_advance_isbase = false;
            QChart::advance(phase);
        } else if (qchart_advance_callback != nullptr) {
            qchart_advance_callback(this, phase);
        } else {
            QChart::advance(phase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qchart_contains_isbase) {
            qchart_contains_isbase = false;
            return QChart::contains(point);
        } else if (qchart_contains_callback != nullptr) {
            return qchart_contains_callback(this, point);
        } else {
            return QChart::contains(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qchart_collideswithitem_isbase) {
            qchart_collideswithitem_isbase = false;
            return QChart::collidesWithItem(other, mode);
        } else if (qchart_collideswithitem_callback != nullptr) {
            return qchart_collideswithitem_callback(this, other, mode);
        } else {
            return QChart::collidesWithItem(other, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qchart_collideswithpath_isbase) {
            qchart_collideswithpath_isbase = false;
            return QChart::collidesWithPath(path, mode);
        } else if (qchart_collideswithpath_callback != nullptr) {
            return qchart_collideswithpath_callback(this, path, mode);
        } else {
            return QChart::collidesWithPath(path, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qchart_isobscuredby_isbase) {
            qchart_isobscuredby_isbase = false;
            return QChart::isObscuredBy(item);
        } else if (qchart_isobscuredby_callback != nullptr) {
            return qchart_isobscuredby_callback(this, item);
        } else {
            return QChart::isObscuredBy(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qchart_opaquearea_isbase) {
            qchart_opaquearea_isbase = false;
            return QChart::opaqueArea();
        } else if (qchart_opaquearea_callback != nullptr) {
            return qchart_opaquearea_callback();
        } else {
            return QChart::opaqueArea();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qchart_sceneeventfilter_isbase) {
            qchart_sceneeventfilter_isbase = false;
            return QChart::sceneEventFilter(watched, event);
        } else if (qchart_sceneeventfilter_callback != nullptr) {
            return qchart_sceneeventfilter_callback(this, watched, event);
        } else {
            return QChart::sceneEventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qchart_contextmenuevent_isbase) {
            qchart_contextmenuevent_isbase = false;
            QChart::contextMenuEvent(event);
        } else if (qchart_contextmenuevent_callback != nullptr) {
            qchart_contextmenuevent_callback(this, event);
        } else {
            QChart::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dragenterevent_isbase) {
            qchart_dragenterevent_isbase = false;
            QChart::dragEnterEvent(event);
        } else if (qchart_dragenterevent_callback != nullptr) {
            qchart_dragenterevent_callback(this, event);
        } else {
            QChart::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dragleaveevent_isbase) {
            qchart_dragleaveevent_isbase = false;
            QChart::dragLeaveEvent(event);
        } else if (qchart_dragleaveevent_callback != nullptr) {
            qchart_dragleaveevent_callback(this, event);
        } else {
            QChart::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dragmoveevent_isbase) {
            qchart_dragmoveevent_isbase = false;
            QChart::dragMoveEvent(event);
        } else if (qchart_dragmoveevent_callback != nullptr) {
            qchart_dragmoveevent_callback(this, event);
        } else {
            QChart::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qchart_dropevent_isbase) {
            qchart_dropevent_isbase = false;
            QChart::dropEvent(event);
        } else if (qchart_dropevent_callback != nullptr) {
            qchart_dropevent_callback(this, event);
        } else {
            QChart::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qchart_hoverenterevent_isbase) {
            qchart_hoverenterevent_isbase = false;
            QChart::hoverEnterEvent(event);
        } else if (qchart_hoverenterevent_callback != nullptr) {
            qchart_hoverenterevent_callback(this, event);
        } else {
            QChart::hoverEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qchart_keypressevent_isbase) {
            qchart_keypressevent_isbase = false;
            QChart::keyPressEvent(event);
        } else if (qchart_keypressevent_callback != nullptr) {
            qchart_keypressevent_callback(this, event);
        } else {
            QChart::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qchart_keyreleaseevent_isbase) {
            qchart_keyreleaseevent_isbase = false;
            QChart::keyReleaseEvent(event);
        } else if (qchart_keyreleaseevent_callback != nullptr) {
            qchart_keyreleaseevent_callback(this, event);
        } else {
            QChart::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousepressevent_isbase) {
            qchart_mousepressevent_isbase = false;
            QChart::mousePressEvent(event);
        } else if (qchart_mousepressevent_callback != nullptr) {
            qchart_mousepressevent_callback(this, event);
        } else {
            QChart::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousemoveevent_isbase) {
            qchart_mousemoveevent_isbase = false;
            QChart::mouseMoveEvent(event);
        } else if (qchart_mousemoveevent_callback != nullptr) {
            qchart_mousemoveevent_callback(this, event);
        } else {
            QChart::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousereleaseevent_isbase) {
            qchart_mousereleaseevent_isbase = false;
            QChart::mouseReleaseEvent(event);
        } else if (qchart_mousereleaseevent_callback != nullptr) {
            qchart_mousereleaseevent_callback(this, event);
        } else {
            QChart::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qchart_mousedoubleclickevent_isbase) {
            qchart_mousedoubleclickevent_isbase = false;
            QChart::mouseDoubleClickEvent(event);
        } else if (qchart_mousedoubleclickevent_callback != nullptr) {
            qchart_mousedoubleclickevent_callback(this, event);
        } else {
            QChart::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qchart_wheelevent_isbase) {
            qchart_wheelevent_isbase = false;
            QChart::wheelEvent(event);
        } else if (qchart_wheelevent_callback != nullptr) {
            qchart_wheelevent_callback(this, event);
        } else {
            QChart::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qchart_inputmethodevent_isbase) {
            qchart_inputmethodevent_isbase = false;
            QChart::inputMethodEvent(event);
        } else if (qchart_inputmethodevent_callback != nullptr) {
            qchart_inputmethodevent_callback(this, event);
        } else {
            QChart::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qchart_inputmethodquery_isbase) {
            qchart_inputmethodquery_isbase = false;
            return QChart::inputMethodQuery(query);
        } else if (qchart_inputmethodquery_callback != nullptr) {
            return qchart_inputmethodquery_callback(this, query);
        } else {
            return QChart::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qchart_supportsextension_isbase) {
            qchart_supportsextension_isbase = false;
            return QChart::supportsExtension(extension);
        } else if (qchart_supportsextension_callback != nullptr) {
            return qchart_supportsextension_callback(this, extension);
        } else {
            return QChart::supportsExtension(extension);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qchart_setextension_isbase) {
            qchart_setextension_isbase = false;
            QChart::setExtension(extension, variant);
        } else if (qchart_setextension_callback != nullptr) {
            qchart_setextension_callback(this, extension, variant);
        } else {
            QChart::setExtension(extension, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qchart_extension_isbase) {
            qchart_extension_isbase = false;
            return QChart::extension(variant);
        } else if (qchart_extension_callback != nullptr) {
            return qchart_extension_callback(this, variant);
        } else {
            return QChart::extension(variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qchart_isempty_isbase) {
            qchart_isempty_isbase = false;
            return QChart::isEmpty();
        } else if (qchart_isempty_callback != nullptr) {
            return qchart_isempty_callback();
        } else {
            return QChart::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qchart_updatemicrofocus_isbase) {
            qchart_updatemicrofocus_isbase = false;
            QChart::updateMicroFocus();
        } else if (qchart_updatemicrofocus_callback != nullptr) {
            qchart_updatemicrofocus_callback();
        } else {
            QChart::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qchart_sender_isbase) {
            qchart_sender_isbase = false;
            return QChart::sender();
        } else if (qchart_sender_callback != nullptr) {
            return qchart_sender_callback();
        } else {
            return QChart::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qchart_sendersignalindex_isbase) {
            qchart_sendersignalindex_isbase = false;
            return QChart::senderSignalIndex();
        } else if (qchart_sendersignalindex_callback != nullptr) {
            return qchart_sendersignalindex_callback();
        } else {
            return QChart::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qchart_receivers_isbase) {
            qchart_receivers_isbase = false;
            return QChart::receivers(signal);
        } else if (qchart_receivers_callback != nullptr) {
            return qchart_receivers_callback(this, signal);
        } else {
            return QChart::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qchart_issignalconnected_isbase) {
            qchart_issignalconnected_isbase = false;
            return QChart::isSignalConnected(signal);
        } else if (qchart_issignalconnected_callback != nullptr) {
            return qchart_issignalconnected_callback(this, signal);
        } else {
            return QChart::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qchart_addtoindex_isbase) {
            qchart_addtoindex_isbase = false;
            QChart::addToIndex();
        } else if (qchart_addtoindex_callback != nullptr) {
            qchart_addtoindex_callback();
        } else {
            QChart::addToIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qchart_removefromindex_isbase) {
            qchart_removefromindex_isbase = false;
            QChart::removeFromIndex();
        } else if (qchart_removefromindex_callback != nullptr) {
            qchart_removefromindex_callback();
        } else {
            QChart::removeFromIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qchart_preparegeometrychange_isbase) {
            qchart_preparegeometrychange_isbase = false;
            QChart::prepareGeometryChange();
        } else if (qchart_preparegeometrychange_callback != nullptr) {
            qchart_preparegeometrychange_callback();
        } else {
            QChart::prepareGeometryChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qchart_setgraphicsitem_isbase) {
            qchart_setgraphicsitem_isbase = false;
            QChart::setGraphicsItem(item);
        } else if (qchart_setgraphicsitem_callback != nullptr) {
            qchart_setgraphicsitem_callback(this, item);
        } else {
            QChart::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qchart_setownedbylayout_isbase) {
            qchart_setownedbylayout_isbase = false;
            QChart::setOwnedByLayout(ownedByLayout);
        } else if (qchart_setownedbylayout_callback != nullptr) {
            qchart_setownedbylayout_callback(this, ownedByLayout);
        } else {
            QChart::setOwnedByLayout(ownedByLayout);
        }
    }
};

#endif
