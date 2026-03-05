#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSWIDGET_H
#define SRCC_LIBVIRTUALQGRAPHICSWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsWidget so that we can call protected methods
class VirtualQGraphicsWidget final : public QGraphicsWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsWidget = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsWidget_MetaObject_Callback = QMetaObject* (*)();
    using QGraphicsWidget_Metacast_Callback = void* (*)(QGraphicsWidget*, const char*);
    using QGraphicsWidget_Metacall_Callback = int (*)(QGraphicsWidget*, int, int, void**);
    using QGraphicsWidget_SetGeometry_Callback = void (*)(QGraphicsWidget*, QRectF*);
    using QGraphicsWidget_GetContentsMargins_Callback = void (*)(const QGraphicsWidget*, double*, double*, double*, double*);
    using QGraphicsWidget_Type_Callback = int (*)();
    using QGraphicsWidget_Paint_Callback = void (*)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsWidget_PaintWindowFrame_Callback = void (*)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsWidget_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsWidget_Shape_Callback = QPainterPath* (*)();
    using QGraphicsWidget_InitStyleOption_Callback = void (*)(const QGraphicsWidget*, QStyleOption*);
    using QGraphicsWidget_SizeHint_Callback = QSizeF* (*)(const QGraphicsWidget*, int, QSizeF*);
    using QGraphicsWidget_UpdateGeometry_Callback = void (*)();
    using QGraphicsWidget_ItemChange_Callback = QVariant* (*)(QGraphicsWidget*, int, QVariant*);
    using QGraphicsWidget_PropertyChange_Callback = QVariant* (*)(QGraphicsWidget*, const char*, QVariant*);
    using QGraphicsWidget_SceneEvent_Callback = bool (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_WindowFrameEvent_Callback = bool (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_WindowFrameSectionAt_Callback = int (*)(const QGraphicsWidget*, QPointF*);
    using QGraphicsWidget_Event_Callback = bool (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_ChangeEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_CloseEvent_Callback = void (*)(QGraphicsWidget*, QCloseEvent*);
    using QGraphicsWidget_FocusInEvent_Callback = void (*)(QGraphicsWidget*, QFocusEvent*);
    using QGraphicsWidget_FocusNextPrevChild_Callback = bool (*)(QGraphicsWidget*, bool);
    using QGraphicsWidget_FocusOutEvent_Callback = void (*)(QGraphicsWidget*, QFocusEvent*);
    using QGraphicsWidget_HideEvent_Callback = void (*)(QGraphicsWidget*, QHideEvent*);
    using QGraphicsWidget_MoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMoveEvent*);
    using QGraphicsWidget_PolishEvent_Callback = void (*)();
    using QGraphicsWidget_ResizeEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneResizeEvent*);
    using QGraphicsWidget_ShowEvent_Callback = void (*)(QGraphicsWidget*, QShowEvent*);
    using QGraphicsWidget_HoverMoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsWidget_HoverLeaveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsWidget_GrabMouseEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_UngrabMouseEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_GrabKeyboardEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_UngrabKeyboardEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_EventFilter_Callback = bool (*)(QGraphicsWidget*, QObject*, QEvent*);
    using QGraphicsWidget_TimerEvent_Callback = void (*)(QGraphicsWidget*, QTimerEvent*);
    using QGraphicsWidget_ChildEvent_Callback = void (*)(QGraphicsWidget*, QChildEvent*);
    using QGraphicsWidget_CustomEvent_Callback = void (*)(QGraphicsWidget*, QEvent*);
    using QGraphicsWidget_ConnectNotify_Callback = void (*)(QGraphicsWidget*, QMetaMethod*);
    using QGraphicsWidget_DisconnectNotify_Callback = void (*)(QGraphicsWidget*, QMetaMethod*);
    using QGraphicsWidget_Advance_Callback = void (*)(QGraphicsWidget*, int);
    using QGraphicsWidget_Contains_Callback = bool (*)(const QGraphicsWidget*, QPointF*);
    using QGraphicsWidget_CollidesWithItem_Callback = bool (*)(const QGraphicsWidget*, QGraphicsItem*, int);
    using QGraphicsWidget_CollidesWithPath_Callback = bool (*)(const QGraphicsWidget*, QPainterPath*, int);
    using QGraphicsWidget_IsObscuredBy_Callback = bool (*)(const QGraphicsWidget*, QGraphicsItem*);
    using QGraphicsWidget_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsWidget_SceneEventFilter_Callback = bool (*)(QGraphicsWidget*, QGraphicsItem*, QEvent*);
    using QGraphicsWidget_ContextMenuEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsWidget_DragEnterEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_DragLeaveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_DragMoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_DropEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsWidget_HoverEnterEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsWidget_KeyPressEvent_Callback = void (*)(QGraphicsWidget*, QKeyEvent*);
    using QGraphicsWidget_KeyReleaseEvent_Callback = void (*)(QGraphicsWidget*, QKeyEvent*);
    using QGraphicsWidget_MousePressEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_MouseMoveEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_MouseReleaseEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_MouseDoubleClickEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsWidget_WheelEvent_Callback = void (*)(QGraphicsWidget*, QGraphicsSceneWheelEvent*);
    using QGraphicsWidget_InputMethodEvent_Callback = void (*)(QGraphicsWidget*, QInputMethodEvent*);
    using QGraphicsWidget_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsWidget*, int);
    using QGraphicsWidget_SupportsExtension_Callback = bool (*)(const QGraphicsWidget*, int);
    using QGraphicsWidget_SetExtension_Callback = void (*)(QGraphicsWidget*, int, QVariant*);
    using QGraphicsWidget_Extension_Callback = QVariant* (*)(const QGraphicsWidget*, QVariant*);
    using QGraphicsWidget_IsEmpty_Callback = bool (*)();
    using QGraphicsWidget_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsWidget_Sender_Callback = QObject* (*)();
    using QGraphicsWidget_SenderSignalIndex_Callback = int (*)();
    using QGraphicsWidget_Receivers_Callback = int (*)(const QGraphicsWidget*, const char*);
    using QGraphicsWidget_IsSignalConnected_Callback = bool (*)(const QGraphicsWidget*, QMetaMethod*);
    using QGraphicsWidget_AddToIndex_Callback = void (*)();
    using QGraphicsWidget_RemoveFromIndex_Callback = void (*)();
    using QGraphicsWidget_PrepareGeometryChange_Callback = void (*)();
    using QGraphicsWidget_SetGraphicsItem_Callback = void (*)(QGraphicsWidget*, QGraphicsItem*);
    using QGraphicsWidget_SetOwnedByLayout_Callback = void (*)(QGraphicsWidget*, bool);

  protected:
    // Instance callback storage
    QGraphicsWidget_MetaObject_Callback qgraphicswidget_metaobject_callback = nullptr;
    QGraphicsWidget_Metacast_Callback qgraphicswidget_metacast_callback = nullptr;
    QGraphicsWidget_Metacall_Callback qgraphicswidget_metacall_callback = nullptr;
    QGraphicsWidget_SetGeometry_Callback qgraphicswidget_setgeometry_callback = nullptr;
    QGraphicsWidget_GetContentsMargins_Callback qgraphicswidget_getcontentsmargins_callback = nullptr;
    QGraphicsWidget_Type_Callback qgraphicswidget_type_callback = nullptr;
    QGraphicsWidget_Paint_Callback qgraphicswidget_paint_callback = nullptr;
    QGraphicsWidget_PaintWindowFrame_Callback qgraphicswidget_paintwindowframe_callback = nullptr;
    QGraphicsWidget_BoundingRect_Callback qgraphicswidget_boundingrect_callback = nullptr;
    QGraphicsWidget_Shape_Callback qgraphicswidget_shape_callback = nullptr;
    QGraphicsWidget_InitStyleOption_Callback qgraphicswidget_initstyleoption_callback = nullptr;
    QGraphicsWidget_SizeHint_Callback qgraphicswidget_sizehint_callback = nullptr;
    QGraphicsWidget_UpdateGeometry_Callback qgraphicswidget_updategeometry_callback = nullptr;
    QGraphicsWidget_ItemChange_Callback qgraphicswidget_itemchange_callback = nullptr;
    QGraphicsWidget_PropertyChange_Callback qgraphicswidget_propertychange_callback = nullptr;
    QGraphicsWidget_SceneEvent_Callback qgraphicswidget_sceneevent_callback = nullptr;
    QGraphicsWidget_WindowFrameEvent_Callback qgraphicswidget_windowframeevent_callback = nullptr;
    QGraphicsWidget_WindowFrameSectionAt_Callback qgraphicswidget_windowframesectionat_callback = nullptr;
    QGraphicsWidget_Event_Callback qgraphicswidget_event_callback = nullptr;
    QGraphicsWidget_ChangeEvent_Callback qgraphicswidget_changeevent_callback = nullptr;
    QGraphicsWidget_CloseEvent_Callback qgraphicswidget_closeevent_callback = nullptr;
    QGraphicsWidget_FocusInEvent_Callback qgraphicswidget_focusinevent_callback = nullptr;
    QGraphicsWidget_FocusNextPrevChild_Callback qgraphicswidget_focusnextprevchild_callback = nullptr;
    QGraphicsWidget_FocusOutEvent_Callback qgraphicswidget_focusoutevent_callback = nullptr;
    QGraphicsWidget_HideEvent_Callback qgraphicswidget_hideevent_callback = nullptr;
    QGraphicsWidget_MoveEvent_Callback qgraphicswidget_moveevent_callback = nullptr;
    QGraphicsWidget_PolishEvent_Callback qgraphicswidget_polishevent_callback = nullptr;
    QGraphicsWidget_ResizeEvent_Callback qgraphicswidget_resizeevent_callback = nullptr;
    QGraphicsWidget_ShowEvent_Callback qgraphicswidget_showevent_callback = nullptr;
    QGraphicsWidget_HoverMoveEvent_Callback qgraphicswidget_hovermoveevent_callback = nullptr;
    QGraphicsWidget_HoverLeaveEvent_Callback qgraphicswidget_hoverleaveevent_callback = nullptr;
    QGraphicsWidget_GrabMouseEvent_Callback qgraphicswidget_grabmouseevent_callback = nullptr;
    QGraphicsWidget_UngrabMouseEvent_Callback qgraphicswidget_ungrabmouseevent_callback = nullptr;
    QGraphicsWidget_GrabKeyboardEvent_Callback qgraphicswidget_grabkeyboardevent_callback = nullptr;
    QGraphicsWidget_UngrabKeyboardEvent_Callback qgraphicswidget_ungrabkeyboardevent_callback = nullptr;
    QGraphicsWidget_EventFilter_Callback qgraphicswidget_eventfilter_callback = nullptr;
    QGraphicsWidget_TimerEvent_Callback qgraphicswidget_timerevent_callback = nullptr;
    QGraphicsWidget_ChildEvent_Callback qgraphicswidget_childevent_callback = nullptr;
    QGraphicsWidget_CustomEvent_Callback qgraphicswidget_customevent_callback = nullptr;
    QGraphicsWidget_ConnectNotify_Callback qgraphicswidget_connectnotify_callback = nullptr;
    QGraphicsWidget_DisconnectNotify_Callback qgraphicswidget_disconnectnotify_callback = nullptr;
    QGraphicsWidget_Advance_Callback qgraphicswidget_advance_callback = nullptr;
    QGraphicsWidget_Contains_Callback qgraphicswidget_contains_callback = nullptr;
    QGraphicsWidget_CollidesWithItem_Callback qgraphicswidget_collideswithitem_callback = nullptr;
    QGraphicsWidget_CollidesWithPath_Callback qgraphicswidget_collideswithpath_callback = nullptr;
    QGraphicsWidget_IsObscuredBy_Callback qgraphicswidget_isobscuredby_callback = nullptr;
    QGraphicsWidget_OpaqueArea_Callback qgraphicswidget_opaquearea_callback = nullptr;
    QGraphicsWidget_SceneEventFilter_Callback qgraphicswidget_sceneeventfilter_callback = nullptr;
    QGraphicsWidget_ContextMenuEvent_Callback qgraphicswidget_contextmenuevent_callback = nullptr;
    QGraphicsWidget_DragEnterEvent_Callback qgraphicswidget_dragenterevent_callback = nullptr;
    QGraphicsWidget_DragLeaveEvent_Callback qgraphicswidget_dragleaveevent_callback = nullptr;
    QGraphicsWidget_DragMoveEvent_Callback qgraphicswidget_dragmoveevent_callback = nullptr;
    QGraphicsWidget_DropEvent_Callback qgraphicswidget_dropevent_callback = nullptr;
    QGraphicsWidget_HoverEnterEvent_Callback qgraphicswidget_hoverenterevent_callback = nullptr;
    QGraphicsWidget_KeyPressEvent_Callback qgraphicswidget_keypressevent_callback = nullptr;
    QGraphicsWidget_KeyReleaseEvent_Callback qgraphicswidget_keyreleaseevent_callback = nullptr;
    QGraphicsWidget_MousePressEvent_Callback qgraphicswidget_mousepressevent_callback = nullptr;
    QGraphicsWidget_MouseMoveEvent_Callback qgraphicswidget_mousemoveevent_callback = nullptr;
    QGraphicsWidget_MouseReleaseEvent_Callback qgraphicswidget_mousereleaseevent_callback = nullptr;
    QGraphicsWidget_MouseDoubleClickEvent_Callback qgraphicswidget_mousedoubleclickevent_callback = nullptr;
    QGraphicsWidget_WheelEvent_Callback qgraphicswidget_wheelevent_callback = nullptr;
    QGraphicsWidget_InputMethodEvent_Callback qgraphicswidget_inputmethodevent_callback = nullptr;
    QGraphicsWidget_InputMethodQuery_Callback qgraphicswidget_inputmethodquery_callback = nullptr;
    QGraphicsWidget_SupportsExtension_Callback qgraphicswidget_supportsextension_callback = nullptr;
    QGraphicsWidget_SetExtension_Callback qgraphicswidget_setextension_callback = nullptr;
    QGraphicsWidget_Extension_Callback qgraphicswidget_extension_callback = nullptr;
    QGraphicsWidget_IsEmpty_Callback qgraphicswidget_isempty_callback = nullptr;
    QGraphicsWidget_UpdateMicroFocus_Callback qgraphicswidget_updatemicrofocus_callback = nullptr;
    QGraphicsWidget_Sender_Callback qgraphicswidget_sender_callback = nullptr;
    QGraphicsWidget_SenderSignalIndex_Callback qgraphicswidget_sendersignalindex_callback = nullptr;
    QGraphicsWidget_Receivers_Callback qgraphicswidget_receivers_callback = nullptr;
    QGraphicsWidget_IsSignalConnected_Callback qgraphicswidget_issignalconnected_callback = nullptr;
    QGraphicsWidget_AddToIndex_Callback qgraphicswidget_addtoindex_callback = nullptr;
    QGraphicsWidget_RemoveFromIndex_Callback qgraphicswidget_removefromindex_callback = nullptr;
    QGraphicsWidget_PrepareGeometryChange_Callback qgraphicswidget_preparegeometrychange_callback = nullptr;
    QGraphicsWidget_SetGraphicsItem_Callback qgraphicswidget_setgraphicsitem_callback = nullptr;
    QGraphicsWidget_SetOwnedByLayout_Callback qgraphicswidget_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicswidget_metaobject_isbase = false;
    mutable bool qgraphicswidget_metacast_isbase = false;
    mutable bool qgraphicswidget_metacall_isbase = false;
    mutable bool qgraphicswidget_setgeometry_isbase = false;
    mutable bool qgraphicswidget_getcontentsmargins_isbase = false;
    mutable bool qgraphicswidget_type_isbase = false;
    mutable bool qgraphicswidget_paint_isbase = false;
    mutable bool qgraphicswidget_paintwindowframe_isbase = false;
    mutable bool qgraphicswidget_boundingrect_isbase = false;
    mutable bool qgraphicswidget_shape_isbase = false;
    mutable bool qgraphicswidget_initstyleoption_isbase = false;
    mutable bool qgraphicswidget_sizehint_isbase = false;
    mutable bool qgraphicswidget_updategeometry_isbase = false;
    mutable bool qgraphicswidget_itemchange_isbase = false;
    mutable bool qgraphicswidget_propertychange_isbase = false;
    mutable bool qgraphicswidget_sceneevent_isbase = false;
    mutable bool qgraphicswidget_windowframeevent_isbase = false;
    mutable bool qgraphicswidget_windowframesectionat_isbase = false;
    mutable bool qgraphicswidget_event_isbase = false;
    mutable bool qgraphicswidget_changeevent_isbase = false;
    mutable bool qgraphicswidget_closeevent_isbase = false;
    mutable bool qgraphicswidget_focusinevent_isbase = false;
    mutable bool qgraphicswidget_focusnextprevchild_isbase = false;
    mutable bool qgraphicswidget_focusoutevent_isbase = false;
    mutable bool qgraphicswidget_hideevent_isbase = false;
    mutable bool qgraphicswidget_moveevent_isbase = false;
    mutable bool qgraphicswidget_polishevent_isbase = false;
    mutable bool qgraphicswidget_resizeevent_isbase = false;
    mutable bool qgraphicswidget_showevent_isbase = false;
    mutable bool qgraphicswidget_hovermoveevent_isbase = false;
    mutable bool qgraphicswidget_hoverleaveevent_isbase = false;
    mutable bool qgraphicswidget_grabmouseevent_isbase = false;
    mutable bool qgraphicswidget_ungrabmouseevent_isbase = false;
    mutable bool qgraphicswidget_grabkeyboardevent_isbase = false;
    mutable bool qgraphicswidget_ungrabkeyboardevent_isbase = false;
    mutable bool qgraphicswidget_eventfilter_isbase = false;
    mutable bool qgraphicswidget_timerevent_isbase = false;
    mutable bool qgraphicswidget_childevent_isbase = false;
    mutable bool qgraphicswidget_customevent_isbase = false;
    mutable bool qgraphicswidget_connectnotify_isbase = false;
    mutable bool qgraphicswidget_disconnectnotify_isbase = false;
    mutable bool qgraphicswidget_advance_isbase = false;
    mutable bool qgraphicswidget_contains_isbase = false;
    mutable bool qgraphicswidget_collideswithitem_isbase = false;
    mutable bool qgraphicswidget_collideswithpath_isbase = false;
    mutable bool qgraphicswidget_isobscuredby_isbase = false;
    mutable bool qgraphicswidget_opaquearea_isbase = false;
    mutable bool qgraphicswidget_sceneeventfilter_isbase = false;
    mutable bool qgraphicswidget_contextmenuevent_isbase = false;
    mutable bool qgraphicswidget_dragenterevent_isbase = false;
    mutable bool qgraphicswidget_dragleaveevent_isbase = false;
    mutable bool qgraphicswidget_dragmoveevent_isbase = false;
    mutable bool qgraphicswidget_dropevent_isbase = false;
    mutable bool qgraphicswidget_hoverenterevent_isbase = false;
    mutable bool qgraphicswidget_keypressevent_isbase = false;
    mutable bool qgraphicswidget_keyreleaseevent_isbase = false;
    mutable bool qgraphicswidget_mousepressevent_isbase = false;
    mutable bool qgraphicswidget_mousemoveevent_isbase = false;
    mutable bool qgraphicswidget_mousereleaseevent_isbase = false;
    mutable bool qgraphicswidget_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicswidget_wheelevent_isbase = false;
    mutable bool qgraphicswidget_inputmethodevent_isbase = false;
    mutable bool qgraphicswidget_inputmethodquery_isbase = false;
    mutable bool qgraphicswidget_supportsextension_isbase = false;
    mutable bool qgraphicswidget_setextension_isbase = false;
    mutable bool qgraphicswidget_extension_isbase = false;
    mutable bool qgraphicswidget_isempty_isbase = false;
    mutable bool qgraphicswidget_updatemicrofocus_isbase = false;
    mutable bool qgraphicswidget_sender_isbase = false;
    mutable bool qgraphicswidget_sendersignalindex_isbase = false;
    mutable bool qgraphicswidget_receivers_isbase = false;
    mutable bool qgraphicswidget_issignalconnected_isbase = false;
    mutable bool qgraphicswidget_addtoindex_isbase = false;
    mutable bool qgraphicswidget_removefromindex_isbase = false;
    mutable bool qgraphicswidget_preparegeometrychange_isbase = false;
    mutable bool qgraphicswidget_setgraphicsitem_isbase = false;
    mutable bool qgraphicswidget_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsWidget() : QGraphicsWidget() {};
    VirtualQGraphicsWidget(QGraphicsItem* parent) : QGraphicsWidget(parent) {};
    VirtualQGraphicsWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QGraphicsWidget(parent, wFlags) {};

    // Callback setters
    inline void setQGraphicsWidget_MetaObject_Callback(QGraphicsWidget_MetaObject_Callback cb) { qgraphicswidget_metaobject_callback = cb; }
    inline void setQGraphicsWidget_Metacast_Callback(QGraphicsWidget_Metacast_Callback cb) { qgraphicswidget_metacast_callback = cb; }
    inline void setQGraphicsWidget_Metacall_Callback(QGraphicsWidget_Metacall_Callback cb) { qgraphicswidget_metacall_callback = cb; }
    inline void setQGraphicsWidget_SetGeometry_Callback(QGraphicsWidget_SetGeometry_Callback cb) { qgraphicswidget_setgeometry_callback = cb; }
    inline void setQGraphicsWidget_GetContentsMargins_Callback(QGraphicsWidget_GetContentsMargins_Callback cb) { qgraphicswidget_getcontentsmargins_callback = cb; }
    inline void setQGraphicsWidget_Type_Callback(QGraphicsWidget_Type_Callback cb) { qgraphicswidget_type_callback = cb; }
    inline void setQGraphicsWidget_Paint_Callback(QGraphicsWidget_Paint_Callback cb) { qgraphicswidget_paint_callback = cb; }
    inline void setQGraphicsWidget_PaintWindowFrame_Callback(QGraphicsWidget_PaintWindowFrame_Callback cb) { qgraphicswidget_paintwindowframe_callback = cb; }
    inline void setQGraphicsWidget_BoundingRect_Callback(QGraphicsWidget_BoundingRect_Callback cb) { qgraphicswidget_boundingrect_callback = cb; }
    inline void setQGraphicsWidget_Shape_Callback(QGraphicsWidget_Shape_Callback cb) { qgraphicswidget_shape_callback = cb; }
    inline void setQGraphicsWidget_InitStyleOption_Callback(QGraphicsWidget_InitStyleOption_Callback cb) { qgraphicswidget_initstyleoption_callback = cb; }
    inline void setQGraphicsWidget_SizeHint_Callback(QGraphicsWidget_SizeHint_Callback cb) { qgraphicswidget_sizehint_callback = cb; }
    inline void setQGraphicsWidget_UpdateGeometry_Callback(QGraphicsWidget_UpdateGeometry_Callback cb) { qgraphicswidget_updategeometry_callback = cb; }
    inline void setQGraphicsWidget_ItemChange_Callback(QGraphicsWidget_ItemChange_Callback cb) { qgraphicswidget_itemchange_callback = cb; }
    inline void setQGraphicsWidget_PropertyChange_Callback(QGraphicsWidget_PropertyChange_Callback cb) { qgraphicswidget_propertychange_callback = cb; }
    inline void setQGraphicsWidget_SceneEvent_Callback(QGraphicsWidget_SceneEvent_Callback cb) { qgraphicswidget_sceneevent_callback = cb; }
    inline void setQGraphicsWidget_WindowFrameEvent_Callback(QGraphicsWidget_WindowFrameEvent_Callback cb) { qgraphicswidget_windowframeevent_callback = cb; }
    inline void setQGraphicsWidget_WindowFrameSectionAt_Callback(QGraphicsWidget_WindowFrameSectionAt_Callback cb) { qgraphicswidget_windowframesectionat_callback = cb; }
    inline void setQGraphicsWidget_Event_Callback(QGraphicsWidget_Event_Callback cb) { qgraphicswidget_event_callback = cb; }
    inline void setQGraphicsWidget_ChangeEvent_Callback(QGraphicsWidget_ChangeEvent_Callback cb) { qgraphicswidget_changeevent_callback = cb; }
    inline void setQGraphicsWidget_CloseEvent_Callback(QGraphicsWidget_CloseEvent_Callback cb) { qgraphicswidget_closeevent_callback = cb; }
    inline void setQGraphicsWidget_FocusInEvent_Callback(QGraphicsWidget_FocusInEvent_Callback cb) { qgraphicswidget_focusinevent_callback = cb; }
    inline void setQGraphicsWidget_FocusNextPrevChild_Callback(QGraphicsWidget_FocusNextPrevChild_Callback cb) { qgraphicswidget_focusnextprevchild_callback = cb; }
    inline void setQGraphicsWidget_FocusOutEvent_Callback(QGraphicsWidget_FocusOutEvent_Callback cb) { qgraphicswidget_focusoutevent_callback = cb; }
    inline void setQGraphicsWidget_HideEvent_Callback(QGraphicsWidget_HideEvent_Callback cb) { qgraphicswidget_hideevent_callback = cb; }
    inline void setQGraphicsWidget_MoveEvent_Callback(QGraphicsWidget_MoveEvent_Callback cb) { qgraphicswidget_moveevent_callback = cb; }
    inline void setQGraphicsWidget_PolishEvent_Callback(QGraphicsWidget_PolishEvent_Callback cb) { qgraphicswidget_polishevent_callback = cb; }
    inline void setQGraphicsWidget_ResizeEvent_Callback(QGraphicsWidget_ResizeEvent_Callback cb) { qgraphicswidget_resizeevent_callback = cb; }
    inline void setQGraphicsWidget_ShowEvent_Callback(QGraphicsWidget_ShowEvent_Callback cb) { qgraphicswidget_showevent_callback = cb; }
    inline void setQGraphicsWidget_HoverMoveEvent_Callback(QGraphicsWidget_HoverMoveEvent_Callback cb) { qgraphicswidget_hovermoveevent_callback = cb; }
    inline void setQGraphicsWidget_HoverLeaveEvent_Callback(QGraphicsWidget_HoverLeaveEvent_Callback cb) { qgraphicswidget_hoverleaveevent_callback = cb; }
    inline void setQGraphicsWidget_GrabMouseEvent_Callback(QGraphicsWidget_GrabMouseEvent_Callback cb) { qgraphicswidget_grabmouseevent_callback = cb; }
    inline void setQGraphicsWidget_UngrabMouseEvent_Callback(QGraphicsWidget_UngrabMouseEvent_Callback cb) { qgraphicswidget_ungrabmouseevent_callback = cb; }
    inline void setQGraphicsWidget_GrabKeyboardEvent_Callback(QGraphicsWidget_GrabKeyboardEvent_Callback cb) { qgraphicswidget_grabkeyboardevent_callback = cb; }
    inline void setQGraphicsWidget_UngrabKeyboardEvent_Callback(QGraphicsWidget_UngrabKeyboardEvent_Callback cb) { qgraphicswidget_ungrabkeyboardevent_callback = cb; }
    inline void setQGraphicsWidget_EventFilter_Callback(QGraphicsWidget_EventFilter_Callback cb) { qgraphicswidget_eventfilter_callback = cb; }
    inline void setQGraphicsWidget_TimerEvent_Callback(QGraphicsWidget_TimerEvent_Callback cb) { qgraphicswidget_timerevent_callback = cb; }
    inline void setQGraphicsWidget_ChildEvent_Callback(QGraphicsWidget_ChildEvent_Callback cb) { qgraphicswidget_childevent_callback = cb; }
    inline void setQGraphicsWidget_CustomEvent_Callback(QGraphicsWidget_CustomEvent_Callback cb) { qgraphicswidget_customevent_callback = cb; }
    inline void setQGraphicsWidget_ConnectNotify_Callback(QGraphicsWidget_ConnectNotify_Callback cb) { qgraphicswidget_connectnotify_callback = cb; }
    inline void setQGraphicsWidget_DisconnectNotify_Callback(QGraphicsWidget_DisconnectNotify_Callback cb) { qgraphicswidget_disconnectnotify_callback = cb; }
    inline void setQGraphicsWidget_Advance_Callback(QGraphicsWidget_Advance_Callback cb) { qgraphicswidget_advance_callback = cb; }
    inline void setQGraphicsWidget_Contains_Callback(QGraphicsWidget_Contains_Callback cb) { qgraphicswidget_contains_callback = cb; }
    inline void setQGraphicsWidget_CollidesWithItem_Callback(QGraphicsWidget_CollidesWithItem_Callback cb) { qgraphicswidget_collideswithitem_callback = cb; }
    inline void setQGraphicsWidget_CollidesWithPath_Callback(QGraphicsWidget_CollidesWithPath_Callback cb) { qgraphicswidget_collideswithpath_callback = cb; }
    inline void setQGraphicsWidget_IsObscuredBy_Callback(QGraphicsWidget_IsObscuredBy_Callback cb) { qgraphicswidget_isobscuredby_callback = cb; }
    inline void setQGraphicsWidget_OpaqueArea_Callback(QGraphicsWidget_OpaqueArea_Callback cb) { qgraphicswidget_opaquearea_callback = cb; }
    inline void setQGraphicsWidget_SceneEventFilter_Callback(QGraphicsWidget_SceneEventFilter_Callback cb) { qgraphicswidget_sceneeventfilter_callback = cb; }
    inline void setQGraphicsWidget_ContextMenuEvent_Callback(QGraphicsWidget_ContextMenuEvent_Callback cb) { qgraphicswidget_contextmenuevent_callback = cb; }
    inline void setQGraphicsWidget_DragEnterEvent_Callback(QGraphicsWidget_DragEnterEvent_Callback cb) { qgraphicswidget_dragenterevent_callback = cb; }
    inline void setQGraphicsWidget_DragLeaveEvent_Callback(QGraphicsWidget_DragLeaveEvent_Callback cb) { qgraphicswidget_dragleaveevent_callback = cb; }
    inline void setQGraphicsWidget_DragMoveEvent_Callback(QGraphicsWidget_DragMoveEvent_Callback cb) { qgraphicswidget_dragmoveevent_callback = cb; }
    inline void setQGraphicsWidget_DropEvent_Callback(QGraphicsWidget_DropEvent_Callback cb) { qgraphicswidget_dropevent_callback = cb; }
    inline void setQGraphicsWidget_HoverEnterEvent_Callback(QGraphicsWidget_HoverEnterEvent_Callback cb) { qgraphicswidget_hoverenterevent_callback = cb; }
    inline void setQGraphicsWidget_KeyPressEvent_Callback(QGraphicsWidget_KeyPressEvent_Callback cb) { qgraphicswidget_keypressevent_callback = cb; }
    inline void setQGraphicsWidget_KeyReleaseEvent_Callback(QGraphicsWidget_KeyReleaseEvent_Callback cb) { qgraphicswidget_keyreleaseevent_callback = cb; }
    inline void setQGraphicsWidget_MousePressEvent_Callback(QGraphicsWidget_MousePressEvent_Callback cb) { qgraphicswidget_mousepressevent_callback = cb; }
    inline void setQGraphicsWidget_MouseMoveEvent_Callback(QGraphicsWidget_MouseMoveEvent_Callback cb) { qgraphicswidget_mousemoveevent_callback = cb; }
    inline void setQGraphicsWidget_MouseReleaseEvent_Callback(QGraphicsWidget_MouseReleaseEvent_Callback cb) { qgraphicswidget_mousereleaseevent_callback = cb; }
    inline void setQGraphicsWidget_MouseDoubleClickEvent_Callback(QGraphicsWidget_MouseDoubleClickEvent_Callback cb) { qgraphicswidget_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsWidget_WheelEvent_Callback(QGraphicsWidget_WheelEvent_Callback cb) { qgraphicswidget_wheelevent_callback = cb; }
    inline void setQGraphicsWidget_InputMethodEvent_Callback(QGraphicsWidget_InputMethodEvent_Callback cb) { qgraphicswidget_inputmethodevent_callback = cb; }
    inline void setQGraphicsWidget_InputMethodQuery_Callback(QGraphicsWidget_InputMethodQuery_Callback cb) { qgraphicswidget_inputmethodquery_callback = cb; }
    inline void setQGraphicsWidget_SupportsExtension_Callback(QGraphicsWidget_SupportsExtension_Callback cb) { qgraphicswidget_supportsextension_callback = cb; }
    inline void setQGraphicsWidget_SetExtension_Callback(QGraphicsWidget_SetExtension_Callback cb) { qgraphicswidget_setextension_callback = cb; }
    inline void setQGraphicsWidget_Extension_Callback(QGraphicsWidget_Extension_Callback cb) { qgraphicswidget_extension_callback = cb; }
    inline void setQGraphicsWidget_IsEmpty_Callback(QGraphicsWidget_IsEmpty_Callback cb) { qgraphicswidget_isempty_callback = cb; }
    inline void setQGraphicsWidget_UpdateMicroFocus_Callback(QGraphicsWidget_UpdateMicroFocus_Callback cb) { qgraphicswidget_updatemicrofocus_callback = cb; }
    inline void setQGraphicsWidget_Sender_Callback(QGraphicsWidget_Sender_Callback cb) { qgraphicswidget_sender_callback = cb; }
    inline void setQGraphicsWidget_SenderSignalIndex_Callback(QGraphicsWidget_SenderSignalIndex_Callback cb) { qgraphicswidget_sendersignalindex_callback = cb; }
    inline void setQGraphicsWidget_Receivers_Callback(QGraphicsWidget_Receivers_Callback cb) { qgraphicswidget_receivers_callback = cb; }
    inline void setQGraphicsWidget_IsSignalConnected_Callback(QGraphicsWidget_IsSignalConnected_Callback cb) { qgraphicswidget_issignalconnected_callback = cb; }
    inline void setQGraphicsWidget_AddToIndex_Callback(QGraphicsWidget_AddToIndex_Callback cb) { qgraphicswidget_addtoindex_callback = cb; }
    inline void setQGraphicsWidget_RemoveFromIndex_Callback(QGraphicsWidget_RemoveFromIndex_Callback cb) { qgraphicswidget_removefromindex_callback = cb; }
    inline void setQGraphicsWidget_PrepareGeometryChange_Callback(QGraphicsWidget_PrepareGeometryChange_Callback cb) { qgraphicswidget_preparegeometrychange_callback = cb; }
    inline void setQGraphicsWidget_SetGraphicsItem_Callback(QGraphicsWidget_SetGraphicsItem_Callback cb) { qgraphicswidget_setgraphicsitem_callback = cb; }
    inline void setQGraphicsWidget_SetOwnedByLayout_Callback(QGraphicsWidget_SetOwnedByLayout_Callback cb) { qgraphicswidget_setownedbylayout_callback = cb; }

    // Base flag setters
    inline void setQGraphicsWidget_MetaObject_IsBase(bool value) const { qgraphicswidget_metaobject_isbase = value; }
    inline void setQGraphicsWidget_Metacast_IsBase(bool value) const { qgraphicswidget_metacast_isbase = value; }
    inline void setQGraphicsWidget_Metacall_IsBase(bool value) const { qgraphicswidget_metacall_isbase = value; }
    inline void setQGraphicsWidget_SetGeometry_IsBase(bool value) const { qgraphicswidget_setgeometry_isbase = value; }
    inline void setQGraphicsWidget_GetContentsMargins_IsBase(bool value) const { qgraphicswidget_getcontentsmargins_isbase = value; }
    inline void setQGraphicsWidget_Type_IsBase(bool value) const { qgraphicswidget_type_isbase = value; }
    inline void setQGraphicsWidget_Paint_IsBase(bool value) const { qgraphicswidget_paint_isbase = value; }
    inline void setQGraphicsWidget_PaintWindowFrame_IsBase(bool value) const { qgraphicswidget_paintwindowframe_isbase = value; }
    inline void setQGraphicsWidget_BoundingRect_IsBase(bool value) const { qgraphicswidget_boundingrect_isbase = value; }
    inline void setQGraphicsWidget_Shape_IsBase(bool value) const { qgraphicswidget_shape_isbase = value; }
    inline void setQGraphicsWidget_InitStyleOption_IsBase(bool value) const { qgraphicswidget_initstyleoption_isbase = value; }
    inline void setQGraphicsWidget_SizeHint_IsBase(bool value) const { qgraphicswidget_sizehint_isbase = value; }
    inline void setQGraphicsWidget_UpdateGeometry_IsBase(bool value) const { qgraphicswidget_updategeometry_isbase = value; }
    inline void setQGraphicsWidget_ItemChange_IsBase(bool value) const { qgraphicswidget_itemchange_isbase = value; }
    inline void setQGraphicsWidget_PropertyChange_IsBase(bool value) const { qgraphicswidget_propertychange_isbase = value; }
    inline void setQGraphicsWidget_SceneEvent_IsBase(bool value) const { qgraphicswidget_sceneevent_isbase = value; }
    inline void setQGraphicsWidget_WindowFrameEvent_IsBase(bool value) const { qgraphicswidget_windowframeevent_isbase = value; }
    inline void setQGraphicsWidget_WindowFrameSectionAt_IsBase(bool value) const { qgraphicswidget_windowframesectionat_isbase = value; }
    inline void setQGraphicsWidget_Event_IsBase(bool value) const { qgraphicswidget_event_isbase = value; }
    inline void setQGraphicsWidget_ChangeEvent_IsBase(bool value) const { qgraphicswidget_changeevent_isbase = value; }
    inline void setQGraphicsWidget_CloseEvent_IsBase(bool value) const { qgraphicswidget_closeevent_isbase = value; }
    inline void setQGraphicsWidget_FocusInEvent_IsBase(bool value) const { qgraphicswidget_focusinevent_isbase = value; }
    inline void setQGraphicsWidget_FocusNextPrevChild_IsBase(bool value) const { qgraphicswidget_focusnextprevchild_isbase = value; }
    inline void setQGraphicsWidget_FocusOutEvent_IsBase(bool value) const { qgraphicswidget_focusoutevent_isbase = value; }
    inline void setQGraphicsWidget_HideEvent_IsBase(bool value) const { qgraphicswidget_hideevent_isbase = value; }
    inline void setQGraphicsWidget_MoveEvent_IsBase(bool value) const { qgraphicswidget_moveevent_isbase = value; }
    inline void setQGraphicsWidget_PolishEvent_IsBase(bool value) const { qgraphicswidget_polishevent_isbase = value; }
    inline void setQGraphicsWidget_ResizeEvent_IsBase(bool value) const { qgraphicswidget_resizeevent_isbase = value; }
    inline void setQGraphicsWidget_ShowEvent_IsBase(bool value) const { qgraphicswidget_showevent_isbase = value; }
    inline void setQGraphicsWidget_HoverMoveEvent_IsBase(bool value) const { qgraphicswidget_hovermoveevent_isbase = value; }
    inline void setQGraphicsWidget_HoverLeaveEvent_IsBase(bool value) const { qgraphicswidget_hoverleaveevent_isbase = value; }
    inline void setQGraphicsWidget_GrabMouseEvent_IsBase(bool value) const { qgraphicswidget_grabmouseevent_isbase = value; }
    inline void setQGraphicsWidget_UngrabMouseEvent_IsBase(bool value) const { qgraphicswidget_ungrabmouseevent_isbase = value; }
    inline void setQGraphicsWidget_GrabKeyboardEvent_IsBase(bool value) const { qgraphicswidget_grabkeyboardevent_isbase = value; }
    inline void setQGraphicsWidget_UngrabKeyboardEvent_IsBase(bool value) const { qgraphicswidget_ungrabkeyboardevent_isbase = value; }
    inline void setQGraphicsWidget_EventFilter_IsBase(bool value) const { qgraphicswidget_eventfilter_isbase = value; }
    inline void setQGraphicsWidget_TimerEvent_IsBase(bool value) const { qgraphicswidget_timerevent_isbase = value; }
    inline void setQGraphicsWidget_ChildEvent_IsBase(bool value) const { qgraphicswidget_childevent_isbase = value; }
    inline void setQGraphicsWidget_CustomEvent_IsBase(bool value) const { qgraphicswidget_customevent_isbase = value; }
    inline void setQGraphicsWidget_ConnectNotify_IsBase(bool value) const { qgraphicswidget_connectnotify_isbase = value; }
    inline void setQGraphicsWidget_DisconnectNotify_IsBase(bool value) const { qgraphicswidget_disconnectnotify_isbase = value; }
    inline void setQGraphicsWidget_Advance_IsBase(bool value) const { qgraphicswidget_advance_isbase = value; }
    inline void setQGraphicsWidget_Contains_IsBase(bool value) const { qgraphicswidget_contains_isbase = value; }
    inline void setQGraphicsWidget_CollidesWithItem_IsBase(bool value) const { qgraphicswidget_collideswithitem_isbase = value; }
    inline void setQGraphicsWidget_CollidesWithPath_IsBase(bool value) const { qgraphicswidget_collideswithpath_isbase = value; }
    inline void setQGraphicsWidget_IsObscuredBy_IsBase(bool value) const { qgraphicswidget_isobscuredby_isbase = value; }
    inline void setQGraphicsWidget_OpaqueArea_IsBase(bool value) const { qgraphicswidget_opaquearea_isbase = value; }
    inline void setQGraphicsWidget_SceneEventFilter_IsBase(bool value) const { qgraphicswidget_sceneeventfilter_isbase = value; }
    inline void setQGraphicsWidget_ContextMenuEvent_IsBase(bool value) const { qgraphicswidget_contextmenuevent_isbase = value; }
    inline void setQGraphicsWidget_DragEnterEvent_IsBase(bool value) const { qgraphicswidget_dragenterevent_isbase = value; }
    inline void setQGraphicsWidget_DragLeaveEvent_IsBase(bool value) const { qgraphicswidget_dragleaveevent_isbase = value; }
    inline void setQGraphicsWidget_DragMoveEvent_IsBase(bool value) const { qgraphicswidget_dragmoveevent_isbase = value; }
    inline void setQGraphicsWidget_DropEvent_IsBase(bool value) const { qgraphicswidget_dropevent_isbase = value; }
    inline void setQGraphicsWidget_HoverEnterEvent_IsBase(bool value) const { qgraphicswidget_hoverenterevent_isbase = value; }
    inline void setQGraphicsWidget_KeyPressEvent_IsBase(bool value) const { qgraphicswidget_keypressevent_isbase = value; }
    inline void setQGraphicsWidget_KeyReleaseEvent_IsBase(bool value) const { qgraphicswidget_keyreleaseevent_isbase = value; }
    inline void setQGraphicsWidget_MousePressEvent_IsBase(bool value) const { qgraphicswidget_mousepressevent_isbase = value; }
    inline void setQGraphicsWidget_MouseMoveEvent_IsBase(bool value) const { qgraphicswidget_mousemoveevent_isbase = value; }
    inline void setQGraphicsWidget_MouseReleaseEvent_IsBase(bool value) const { qgraphicswidget_mousereleaseevent_isbase = value; }
    inline void setQGraphicsWidget_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicswidget_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsWidget_WheelEvent_IsBase(bool value) const { qgraphicswidget_wheelevent_isbase = value; }
    inline void setQGraphicsWidget_InputMethodEvent_IsBase(bool value) const { qgraphicswidget_inputmethodevent_isbase = value; }
    inline void setQGraphicsWidget_InputMethodQuery_IsBase(bool value) const { qgraphicswidget_inputmethodquery_isbase = value; }
    inline void setQGraphicsWidget_SupportsExtension_IsBase(bool value) const { qgraphicswidget_supportsextension_isbase = value; }
    inline void setQGraphicsWidget_SetExtension_IsBase(bool value) const { qgraphicswidget_setextension_isbase = value; }
    inline void setQGraphicsWidget_Extension_IsBase(bool value) const { qgraphicswidget_extension_isbase = value; }
    inline void setQGraphicsWidget_IsEmpty_IsBase(bool value) const { qgraphicswidget_isempty_isbase = value; }
    inline void setQGraphicsWidget_UpdateMicroFocus_IsBase(bool value) const { qgraphicswidget_updatemicrofocus_isbase = value; }
    inline void setQGraphicsWidget_Sender_IsBase(bool value) const { qgraphicswidget_sender_isbase = value; }
    inline void setQGraphicsWidget_SenderSignalIndex_IsBase(bool value) const { qgraphicswidget_sendersignalindex_isbase = value; }
    inline void setQGraphicsWidget_Receivers_IsBase(bool value) const { qgraphicswidget_receivers_isbase = value; }
    inline void setQGraphicsWidget_IsSignalConnected_IsBase(bool value) const { qgraphicswidget_issignalconnected_isbase = value; }
    inline void setQGraphicsWidget_AddToIndex_IsBase(bool value) const { qgraphicswidget_addtoindex_isbase = value; }
    inline void setQGraphicsWidget_RemoveFromIndex_IsBase(bool value) const { qgraphicswidget_removefromindex_isbase = value; }
    inline void setQGraphicsWidget_PrepareGeometryChange_IsBase(bool value) const { qgraphicswidget_preparegeometrychange_isbase = value; }
    inline void setQGraphicsWidget_SetGraphicsItem_IsBase(bool value) const { qgraphicswidget_setgraphicsitem_isbase = value; }
    inline void setQGraphicsWidget_SetOwnedByLayout_IsBase(bool value) const { qgraphicswidget_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicswidget_metaobject_isbase) {
            qgraphicswidget_metaobject_isbase = false;
            return QGraphicsWidget::metaObject();
        }
        auto metaobject_cb = qgraphicswidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGraphicsWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicswidget_metacast_isbase) {
            qgraphicswidget_metacast_isbase = false;
            return QGraphicsWidget::qt_metacast(param1);
        }
        auto metacast_cb = qgraphicswidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicswidget_metacall_isbase) {
            qgraphicswidget_metacall_isbase = false;
            return QGraphicsWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgraphicswidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicswidget_setgeometry_isbase) {
            qgraphicswidget_setgeometry_isbase = false;
            QGraphicsWidget::setGeometry(rect);
            return;
        }
        auto setgeometry_cb = qgraphicswidget_setgeometry_callback;
        if (setgeometry_cb) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            setgeometry_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicswidget_getcontentsmargins_isbase) {
            qgraphicswidget_getcontentsmargins_isbase = false;
            QGraphicsWidget::getContentsMargins(left, top, right, bottom);
            return;
        }
        auto getcontentsmargins_cb = qgraphicswidget_getcontentsmargins_callback;
        if (getcontentsmargins_cb) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            getcontentsmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsWidget::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicswidget_type_isbase) {
            qgraphicswidget_type_isbase = false;
            return QGraphicsWidget::type();
        }
        auto type_cb = qgraphicswidget_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsWidget::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicswidget_paint_isbase) {
            qgraphicswidget_paint_isbase = false;
            QGraphicsWidget::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicswidget_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsWidget::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicswidget_paintwindowframe_isbase) {
            qgraphicswidget_paintwindowframe_isbase = false;
            QGraphicsWidget::paintWindowFrame(painter, option, widget);
            return;
        }
        auto paintwindowframe_cb = qgraphicswidget_paintwindowframe_callback;
        if (paintwindowframe_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paintwindowframe_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsWidget::paintWindowFrame(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicswidget_boundingrect_isbase) {
            qgraphicswidget_boundingrect_isbase = false;
            return QGraphicsWidget::boundingRect();
        }
        auto boundingrect_cb = qgraphicswidget_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsWidget::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicswidget_shape_isbase) {
            qgraphicswidget_shape_isbase = false;
            return QGraphicsWidget::shape();
        }
        auto shape_cb = qgraphicswidget_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsWidget::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qgraphicswidget_initstyleoption_isbase) {
            qgraphicswidget_initstyleoption_isbase = false;
            QGraphicsWidget::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qgraphicswidget_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOption* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicswidget_sizehint_isbase) {
            qgraphicswidget_sizehint_isbase = false;
            return QGraphicsWidget::sizeHint(which, constraint);
        }
        auto sizehint_cb = qgraphicswidget_sizehint_callback;
        if (sizehint_cb) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = sizehint_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsWidget::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicswidget_updategeometry_isbase) {
            qgraphicswidget_updategeometry_isbase = false;
            QGraphicsWidget::updateGeometry();
            return;
        }
        auto updategeometry_cb = qgraphicswidget_updategeometry_callback;
        if (updategeometry_cb) {
            updategeometry_cb();
            return;
        }
        QGraphicsWidget::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicswidget_itemchange_isbase) {
            qgraphicswidget_itemchange_isbase = false;
            return QGraphicsWidget::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicswidget_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsWidget::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qgraphicswidget_propertychange_isbase) {
            qgraphicswidget_propertychange_isbase = false;
            return QGraphicsWidget::propertyChange(propertyName, value);
        }
        auto propertychange_cb = qgraphicswidget_propertychange_callback;
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
        return QGraphicsWidget::propertyChange(propertyName, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicswidget_sceneevent_isbase) {
            qgraphicswidget_sceneevent_isbase = false;
            return QGraphicsWidget::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicswidget_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qgraphicswidget_windowframeevent_isbase) {
            qgraphicswidget_windowframeevent_isbase = false;
            return QGraphicsWidget::windowFrameEvent(e);
        }
        auto windowframeevent_cb = qgraphicswidget_windowframeevent_callback;
        if (windowframeevent_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = windowframeevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::windowFrameEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qgraphicswidget_windowframesectionat_isbase) {
            qgraphicswidget_windowframesectionat_isbase = false;
            return QGraphicsWidget::windowFrameSectionAt(pos);
        }
        auto windowframesectionat_cb = qgraphicswidget_windowframesectionat_callback;
        if (windowframesectionat_cb) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);

            int callback_ret = windowframesectionat_cb(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        }
        return QGraphicsWidget::windowFrameSectionAt(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicswidget_event_isbase) {
            qgraphicswidget_event_isbase = false;
            return QGraphicsWidget::event(event);
        }
        auto event_cb = qgraphicswidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgraphicswidget_changeevent_isbase) {
            qgraphicswidget_changeevent_isbase = false;
            QGraphicsWidget::changeEvent(event);
            return;
        }
        auto changeevent_cb = qgraphicswidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicswidget_closeevent_isbase) {
            qgraphicswidget_closeevent_isbase = false;
            QGraphicsWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = qgraphicswidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicswidget_focusinevent_isbase) {
            qgraphicswidget_focusinevent_isbase = false;
            QGraphicsWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicswidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicswidget_focusnextprevchild_isbase) {
            qgraphicswidget_focusnextprevchild_isbase = false;
            return QGraphicsWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qgraphicswidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicswidget_focusoutevent_isbase) {
            qgraphicswidget_focusoutevent_isbase = false;
            QGraphicsWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicswidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicswidget_hideevent_isbase) {
            qgraphicswidget_hideevent_isbase = false;
            QGraphicsWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = qgraphicswidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qgraphicswidget_moveevent_isbase) {
            qgraphicswidget_moveevent_isbase = false;
            QGraphicsWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = qgraphicswidget_moveevent_callback;
        if (moveevent_cb) {
            QGraphicsSceneMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qgraphicswidget_polishevent_isbase) {
            qgraphicswidget_polishevent_isbase = false;
            QGraphicsWidget::polishEvent();
            return;
        }
        auto polishevent_cb = qgraphicswidget_polishevent_callback;
        if (polishevent_cb) {
            polishevent_cb();
            return;
        }
        QGraphicsWidget::polishEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qgraphicswidget_resizeevent_isbase) {
            qgraphicswidget_resizeevent_isbase = false;
            QGraphicsWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qgraphicswidget_resizeevent_callback;
        if (resizeevent_cb) {
            QGraphicsSceneResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicswidget_showevent_isbase) {
            qgraphicswidget_showevent_isbase = false;
            QGraphicsWidget::showEvent(event);
            return;
        }
        auto showevent_cb = qgraphicswidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicswidget_hovermoveevent_isbase) {
            qgraphicswidget_hovermoveevent_isbase = false;
            QGraphicsWidget::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicswidget_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicswidget_hoverleaveevent_isbase) {
            qgraphicswidget_hoverleaveevent_isbase = false;
            QGraphicsWidget::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicswidget_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qgraphicswidget_grabmouseevent_isbase) {
            qgraphicswidget_grabmouseevent_isbase = false;
            QGraphicsWidget::grabMouseEvent(event);
            return;
        }
        auto grabmouseevent_cb = qgraphicswidget_grabmouseevent_callback;
        if (grabmouseevent_cb) {
            QEvent* cbval1 = event;

            grabmouseevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::grabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qgraphicswidget_ungrabmouseevent_isbase) {
            qgraphicswidget_ungrabmouseevent_isbase = false;
            QGraphicsWidget::ungrabMouseEvent(event);
            return;
        }
        auto ungrabmouseevent_cb = qgraphicswidget_ungrabmouseevent_callback;
        if (ungrabmouseevent_cb) {
            QEvent* cbval1 = event;

            ungrabmouseevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::ungrabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qgraphicswidget_grabkeyboardevent_isbase) {
            qgraphicswidget_grabkeyboardevent_isbase = false;
            QGraphicsWidget::grabKeyboardEvent(event);
            return;
        }
        auto grabkeyboardevent_cb = qgraphicswidget_grabkeyboardevent_callback;
        if (grabkeyboardevent_cb) {
            QEvent* cbval1 = event;

            grabkeyboardevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::grabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qgraphicswidget_ungrabkeyboardevent_isbase) {
            qgraphicswidget_ungrabkeyboardevent_isbase = false;
            QGraphicsWidget::ungrabKeyboardEvent(event);
            return;
        }
        auto ungrabkeyboardevent_cb = qgraphicswidget_ungrabkeyboardevent_callback;
        if (ungrabkeyboardevent_cb) {
            QEvent* cbval1 = event;

            ungrabkeyboardevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::ungrabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicswidget_eventfilter_isbase) {
            qgraphicswidget_eventfilter_isbase = false;
            return QGraphicsWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = qgraphicswidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicswidget_timerevent_isbase) {
            qgraphicswidget_timerevent_isbase = false;
            QGraphicsWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgraphicswidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicswidget_childevent_isbase) {
            qgraphicswidget_childevent_isbase = false;
            QGraphicsWidget::childEvent(event);
            return;
        }
        auto childevent_cb = qgraphicswidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicswidget_customevent_isbase) {
            qgraphicswidget_customevent_isbase = false;
            QGraphicsWidget::customEvent(event);
            return;
        }
        auto customevent_cb = qgraphicswidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicswidget_connectnotify_isbase) {
            qgraphicswidget_connectnotify_isbase = false;
            QGraphicsWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgraphicswidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicswidget_disconnectnotify_isbase) {
            qgraphicswidget_disconnectnotify_isbase = false;
            QGraphicsWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgraphicswidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicswidget_advance_isbase) {
            qgraphicswidget_advance_isbase = false;
            QGraphicsWidget::advance(phase);
            return;
        }
        auto advance_cb = qgraphicswidget_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicswidget_contains_isbase) {
            qgraphicswidget_contains_isbase = false;
            return QGraphicsWidget::contains(point);
        }
        auto contains_cb = qgraphicswidget_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicswidget_collideswithitem_isbase) {
            qgraphicswidget_collideswithitem_isbase = false;
            return QGraphicsWidget::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicswidget_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicswidget_collideswithpath_isbase) {
            qgraphicswidget_collideswithpath_isbase = false;
            return QGraphicsWidget::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicswidget_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicswidget_isobscuredby_isbase) {
            qgraphicswidget_isobscuredby_isbase = false;
            return QGraphicsWidget::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicswidget_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicswidget_opaquearea_isbase) {
            qgraphicswidget_opaquearea_isbase = false;
            return QGraphicsWidget::opaqueArea();
        }
        auto opaquearea_cb = qgraphicswidget_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsWidget::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicswidget_sceneeventfilter_isbase) {
            qgraphicswidget_sceneeventfilter_isbase = false;
            return QGraphicsWidget::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicswidget_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsWidget::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicswidget_contextmenuevent_isbase) {
            qgraphicswidget_contextmenuevent_isbase = false;
            QGraphicsWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicswidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dragenterevent_isbase) {
            qgraphicswidget_dragenterevent_isbase = false;
            QGraphicsWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicswidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dragleaveevent_isbase) {
            qgraphicswidget_dragleaveevent_isbase = false;
            QGraphicsWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicswidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dragmoveevent_isbase) {
            qgraphicswidget_dragmoveevent_isbase = false;
            QGraphicsWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicswidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicswidget_dropevent_isbase) {
            qgraphicswidget_dropevent_isbase = false;
            QGraphicsWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicswidget_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicswidget_hoverenterevent_isbase) {
            qgraphicswidget_hoverenterevent_isbase = false;
            QGraphicsWidget::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicswidget_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicswidget_keypressevent_isbase) {
            qgraphicswidget_keypressevent_isbase = false;
            QGraphicsWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicswidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicswidget_keyreleaseevent_isbase) {
            qgraphicswidget_keyreleaseevent_isbase = false;
            QGraphicsWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicswidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousepressevent_isbase) {
            qgraphicswidget_mousepressevent_isbase = false;
            QGraphicsWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicswidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousemoveevent_isbase) {
            qgraphicswidget_mousemoveevent_isbase = false;
            QGraphicsWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicswidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousereleaseevent_isbase) {
            qgraphicswidget_mousereleaseevent_isbase = false;
            QGraphicsWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicswidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicswidget_mousedoubleclickevent_isbase) {
            qgraphicswidget_mousedoubleclickevent_isbase = false;
            QGraphicsWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicswidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicswidget_wheelevent_isbase) {
            qgraphicswidget_wheelevent_isbase = false;
            QGraphicsWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicswidget_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicswidget_inputmethodevent_isbase) {
            qgraphicswidget_inputmethodevent_isbase = false;
            QGraphicsWidget::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicswidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicswidget_inputmethodquery_isbase) {
            qgraphicswidget_inputmethodquery_isbase = false;
            return QGraphicsWidget::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicswidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicswidget_supportsextension_isbase) {
            qgraphicswidget_supportsextension_isbase = false;
            return QGraphicsWidget::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicswidget_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicswidget_setextension_isbase) {
            qgraphicswidget_setextension_isbase = false;
            QGraphicsWidget::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicswidget_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsWidget::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicswidget_extension_isbase) {
            qgraphicswidget_extension_isbase = false;
            return QGraphicsWidget::extension(variant);
        }
        auto extension_cb = qgraphicswidget_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsWidget::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicswidget_isempty_isbase) {
            qgraphicswidget_isempty_isbase = false;
            return QGraphicsWidget::isEmpty();
        }
        auto isempty_cb = qgraphicswidget_isempty_callback;
        if (isempty_cb) {
            bool callback_ret = isempty_cb();
            return callback_ret;
        }
        return QGraphicsWidget::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicswidget_updatemicrofocus_isbase) {
            qgraphicswidget_updatemicrofocus_isbase = false;
            QGraphicsWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicswidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicswidget_sender_isbase) {
            qgraphicswidget_sender_isbase = false;
            return QGraphicsWidget::sender();
        }
        auto sender_cb = qgraphicswidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGraphicsWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicswidget_sendersignalindex_isbase) {
            qgraphicswidget_sendersignalindex_isbase = false;
            return QGraphicsWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgraphicswidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicswidget_receivers_isbase) {
            qgraphicswidget_receivers_isbase = false;
            return QGraphicsWidget::receivers(signal);
        }
        auto receivers_cb = qgraphicswidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicswidget_issignalconnected_isbase) {
            qgraphicswidget_issignalconnected_isbase = false;
            return QGraphicsWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgraphicswidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicswidget_addtoindex_isbase) {
            qgraphicswidget_addtoindex_isbase = false;
            QGraphicsWidget::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicswidget_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsWidget::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicswidget_removefromindex_isbase) {
            qgraphicswidget_removefromindex_isbase = false;
            QGraphicsWidget::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicswidget_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsWidget::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicswidget_preparegeometrychange_isbase) {
            qgraphicswidget_preparegeometrychange_isbase = false;
            QGraphicsWidget::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicswidget_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsWidget::prepareGeometryChange();
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicswidget_setgraphicsitem_isbase) {
            qgraphicswidget_setgraphicsitem_isbase = false;
            QGraphicsWidget::setGraphicsItem(item);
            return;
        }
        auto setgraphicsitem_cb = qgraphicswidget_setgraphicsitem_callback;
        if (setgraphicsitem_cb) {
            QGraphicsItem* cbval1 = item;

            setgraphicsitem_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::setGraphicsItem(item);
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicswidget_setownedbylayout_isbase) {
            qgraphicswidget_setownedbylayout_isbase = false;
            QGraphicsWidget::setOwnedByLayout(ownedByLayout);
            return;
        }
        auto setownedbylayout_cb = qgraphicswidget_setownedbylayout_callback;
        if (setownedbylayout_cb) {
            bool cbval1 = ownedByLayout;

            setownedbylayout_cb(this, cbval1);
            return;
        }
        QGraphicsWidget::setOwnedByLayout(ownedByLayout);
    }

    // Friend functions
    friend void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
    friend void QGraphicsWidget_SuperInitStyleOption(const QGraphicsWidget* self, QStyleOption* option);
    friend QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint);
    friend QSizeF* QGraphicsWidget_SuperSizeHint(const QGraphicsWidget* self, int which, const QSizeF* constraint);
    friend void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self);
    friend void QGraphicsWidget_SuperUpdateGeometry(QGraphicsWidget* self);
    friend QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, const QVariant* value);
    friend QVariant* QGraphicsWidget_SuperItemChange(QGraphicsWidget* self, int change, const QVariant* value);
    friend QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value);
    friend QVariant* QGraphicsWidget_SuperPropertyChange(QGraphicsWidget* self, const libqt_string propertyName, const QVariant* value);
    friend bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event);
    friend bool QGraphicsWidget_SuperSceneEvent(QGraphicsWidget* self, QEvent* event);
    friend bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e);
    friend bool QGraphicsWidget_SuperWindowFrameEvent(QGraphicsWidget* self, QEvent* e);
    friend int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos);
    friend int QGraphicsWidget_SuperWindowFrameSectionAt(const QGraphicsWidget* self, const QPointF* pos);
    friend bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event);
    friend bool QGraphicsWidget_SuperEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperChangeEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event);
    friend void QGraphicsWidget_SuperCloseEvent(QGraphicsWidget* self, QCloseEvent* event);
    friend void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
    friend void QGraphicsWidget_SuperFocusInEvent(QGraphicsWidget* self, QFocusEvent* event);
    friend bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next);
    friend bool QGraphicsWidget_SuperFocusNextPrevChild(QGraphicsWidget* self, bool next);
    friend void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
    friend void QGraphicsWidget_SuperFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
    friend void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event);
    friend void QGraphicsWidget_SuperHideEvent(QGraphicsWidget* self, QHideEvent* event);
    friend void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsWidget_SuperMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsWidget_PolishEvent(QGraphicsWidget* self);
    friend void QGraphicsWidget_SuperPolishEvent(QGraphicsWidget* self);
    friend void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsWidget_SuperResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event);
    friend void QGraphicsWidget_SuperShowEvent(QGraphicsWidget* self, QShowEvent* event);
    friend void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_SuperHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_SuperHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperGrabMouseEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperUngrabMouseEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_TimerEvent(QGraphicsWidget* self, QTimerEvent* event);
    friend void QGraphicsWidget_SuperTimerEvent(QGraphicsWidget* self, QTimerEvent* event);
    friend void QGraphicsWidget_ChildEvent(QGraphicsWidget* self, QChildEvent* event);
    friend void QGraphicsWidget_SuperChildEvent(QGraphicsWidget* self, QChildEvent* event);
    friend void QGraphicsWidget_CustomEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_SuperCustomEvent(QGraphicsWidget* self, QEvent* event);
    friend void QGraphicsWidget_ConnectNotify(QGraphicsWidget* self, const QMetaMethod* signal);
    friend void QGraphicsWidget_SuperConnectNotify(QGraphicsWidget* self, const QMetaMethod* signal);
    friend void QGraphicsWidget_DisconnectNotify(QGraphicsWidget* self, const QMetaMethod* signal);
    friend void QGraphicsWidget_SuperDisconnectNotify(QGraphicsWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsWidget_SceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsWidget_SuperSceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event);
    friend void QGraphicsWidget_ContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsWidget_SuperContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsWidget_DragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperDragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_DragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperDragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_DragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperDragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_DropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_SuperDropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsWidget_HoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_SuperHoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsWidget_KeyPressEvent(QGraphicsWidget* self, QKeyEvent* event);
    friend void QGraphicsWidget_SuperKeyPressEvent(QGraphicsWidget* self, QKeyEvent* event);
    friend void QGraphicsWidget_KeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event);
    friend void QGraphicsWidget_SuperKeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event);
    friend void QGraphicsWidget_MousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperMousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_MouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperMouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_MouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperMouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_MouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_SuperMouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsWidget_WheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsWidget_SuperWheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsWidget_InputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event);
    friend void QGraphicsWidget_SuperInputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsWidget_InputMethodQuery(const QGraphicsWidget* self, int query);
    friend QVariant* QGraphicsWidget_SuperInputMethodQuery(const QGraphicsWidget* self, int query);
    friend bool QGraphicsWidget_SupportsExtension(const QGraphicsWidget* self, int extension);
    friend bool QGraphicsWidget_SuperSupportsExtension(const QGraphicsWidget* self, int extension);
    friend void QGraphicsWidget_SetExtension(QGraphicsWidget* self, int extension, const QVariant* variant);
    friend void QGraphicsWidget_SuperSetExtension(QGraphicsWidget* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsWidget_Extension(const QGraphicsWidget* self, const QVariant* variant);
    friend QVariant* QGraphicsWidget_SuperExtension(const QGraphicsWidget* self, const QVariant* variant);
    friend void QGraphicsWidget_UpdateMicroFocus(QGraphicsWidget* self);
    friend void QGraphicsWidget_SuperUpdateMicroFocus(QGraphicsWidget* self);
    friend QObject* QGraphicsWidget_Sender(const QGraphicsWidget* self);
    friend QObject* QGraphicsWidget_SuperSender(const QGraphicsWidget* self);
    friend int QGraphicsWidget_SenderSignalIndex(const QGraphicsWidget* self);
    friend int QGraphicsWidget_SuperSenderSignalIndex(const QGraphicsWidget* self);
    friend int QGraphicsWidget_Receivers(const QGraphicsWidget* self, const char* signal);
    friend int QGraphicsWidget_SuperReceivers(const QGraphicsWidget* self, const char* signal);
    friend bool QGraphicsWidget_IsSignalConnected(const QGraphicsWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsWidget_SuperIsSignalConnected(const QGraphicsWidget* self, const QMetaMethod* signal);
    friend void QGraphicsWidget_AddToIndex(QGraphicsWidget* self);
    friend void QGraphicsWidget_SuperAddToIndex(QGraphicsWidget* self);
    friend void QGraphicsWidget_RemoveFromIndex(QGraphicsWidget* self);
    friend void QGraphicsWidget_SuperRemoveFromIndex(QGraphicsWidget* self);
    friend void QGraphicsWidget_PrepareGeometryChange(QGraphicsWidget* self);
    friend void QGraphicsWidget_SuperPrepareGeometryChange(QGraphicsWidget* self);
    friend void QGraphicsWidget_SetGraphicsItem(QGraphicsWidget* self, QGraphicsItem* item);
    friend void QGraphicsWidget_SuperSetGraphicsItem(QGraphicsWidget* self, QGraphicsItem* item);
    friend void QGraphicsWidget_SetOwnedByLayout(QGraphicsWidget* self, bool ownedByLayout);
    friend void QGraphicsWidget_SuperSetOwnedByLayout(QGraphicsWidget* self, bool ownedByLayout);
};

#endif
