#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSPROXYWIDGET_H
#define SRCC_LIBVIRTUALQGRAPHICSPROXYWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsProxyWidget so that we can call protected methods
class VirtualQGraphicsProxyWidget final : public QGraphicsProxyWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsProxyWidget = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsProxyWidget_MetaObject_Callback = QMetaObject* (*)();
    using QGraphicsProxyWidget_Metacast_Callback = void* (*)(QGraphicsProxyWidget*, const char*);
    using QGraphicsProxyWidget_Metacall_Callback = int (*)(QGraphicsProxyWidget*, int, int, void**);
    using QGraphicsProxyWidget_SetGeometry_Callback = void (*)(QGraphicsProxyWidget*, QRectF*);
    using QGraphicsProxyWidget_Paint_Callback = void (*)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsProxyWidget_Type_Callback = int (*)();
    using QGraphicsProxyWidget_ItemChange_Callback = QVariant* (*)(QGraphicsProxyWidget*, int, QVariant*);
    using QGraphicsProxyWidget_Event_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_EventFilter_Callback = bool (*)(QGraphicsProxyWidget*, QObject*, QEvent*);
    using QGraphicsProxyWidget_ShowEvent_Callback = void (*)(QGraphicsProxyWidget*, QShowEvent*);
    using QGraphicsProxyWidget_HideEvent_Callback = void (*)(QGraphicsProxyWidget*, QHideEvent*);
    using QGraphicsProxyWidget_ContextMenuEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsProxyWidget_DragEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DragLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DragMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DropEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_HoverEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_HoverLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_HoverMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_GrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_UngrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_MouseMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MousePressEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MouseReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MouseDoubleClickEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_WheelEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneWheelEvent*);
    using QGraphicsProxyWidget_KeyPressEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
    using QGraphicsProxyWidget_KeyReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
    using QGraphicsProxyWidget_FocusInEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
    using QGraphicsProxyWidget_FocusOutEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
    using QGraphicsProxyWidget_FocusNextPrevChild_Callback = bool (*)(QGraphicsProxyWidget*, bool);
    using QGraphicsProxyWidget_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_InputMethodEvent_Callback = void (*)(QGraphicsProxyWidget*, QInputMethodEvent*);
    using QGraphicsProxyWidget_SizeHint_Callback = QSizeF* (*)(const QGraphicsProxyWidget*, int, QSizeF*);
    using QGraphicsProxyWidget_ResizeEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneResizeEvent*);
    using QGraphicsProxyWidget_GetContentsMargins_Callback = void (*)(const QGraphicsProxyWidget*, double*, double*, double*, double*);
    using QGraphicsProxyWidget_PaintWindowFrame_Callback = void (*)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsProxyWidget_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsProxyWidget_Shape_Callback = QPainterPath* (*)();
    using QGraphicsProxyWidget_InitStyleOption_Callback = void (*)(const QGraphicsProxyWidget*, QStyleOption*);
    using QGraphicsProxyWidget_UpdateGeometry_Callback = void (*)();
    using QGraphicsProxyWidget_PropertyChange_Callback = QVariant* (*)(QGraphicsProxyWidget*, const char*, QVariant*);
    using QGraphicsProxyWidget_SceneEvent_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_WindowFrameEvent_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_WindowFrameSectionAt_Callback = int (*)(const QGraphicsProxyWidget*, QPointF*);
    using QGraphicsProxyWidget_ChangeEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_CloseEvent_Callback = void (*)(QGraphicsProxyWidget*, QCloseEvent*);
    using QGraphicsProxyWidget_MoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMoveEvent*);
    using QGraphicsProxyWidget_PolishEvent_Callback = void (*)();
    using QGraphicsProxyWidget_GrabKeyboardEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_UngrabKeyboardEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_TimerEvent_Callback = void (*)(QGraphicsProxyWidget*, QTimerEvent*);
    using QGraphicsProxyWidget_ChildEvent_Callback = void (*)(QGraphicsProxyWidget*, QChildEvent*);
    using QGraphicsProxyWidget_CustomEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_ConnectNotify_Callback = void (*)(QGraphicsProxyWidget*, QMetaMethod*);
    using QGraphicsProxyWidget_DisconnectNotify_Callback = void (*)(QGraphicsProxyWidget*, QMetaMethod*);
    using QGraphicsProxyWidget_Advance_Callback = void (*)(QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_Contains_Callback = bool (*)(const QGraphicsProxyWidget*, QPointF*);
    using QGraphicsProxyWidget_CollidesWithItem_Callback = bool (*)(const QGraphicsProxyWidget*, QGraphicsItem*, int);
    using QGraphicsProxyWidget_CollidesWithPath_Callback = bool (*)(const QGraphicsProxyWidget*, QPainterPath*, int);
    using QGraphicsProxyWidget_IsObscuredBy_Callback = bool (*)(const QGraphicsProxyWidget*, QGraphicsItem*);
    using QGraphicsProxyWidget_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsProxyWidget_SceneEventFilter_Callback = bool (*)(QGraphicsProxyWidget*, QGraphicsItem*, QEvent*);
    using QGraphicsProxyWidget_SupportsExtension_Callback = bool (*)(const QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_SetExtension_Callback = void (*)(QGraphicsProxyWidget*, int, QVariant*);
    using QGraphicsProxyWidget_Extension_Callback = QVariant* (*)(const QGraphicsProxyWidget*, QVariant*);
    using QGraphicsProxyWidget_IsEmpty_Callback = bool (*)();
    using QGraphicsProxyWidget_NewProxyWidget_Callback = QGraphicsProxyWidget* (*)(QGraphicsProxyWidget*, QWidget*);
    using QGraphicsProxyWidget_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsProxyWidget_Sender_Callback = QObject* (*)();
    using QGraphicsProxyWidget_SenderSignalIndex_Callback = int (*)();
    using QGraphicsProxyWidget_Receivers_Callback = int (*)(const QGraphicsProxyWidget*, const char*);
    using QGraphicsProxyWidget_IsSignalConnected_Callback = bool (*)(const QGraphicsProxyWidget*, QMetaMethod*);
    using QGraphicsProxyWidget_AddToIndex_Callback = void (*)();
    using QGraphicsProxyWidget_RemoveFromIndex_Callback = void (*)();
    using QGraphicsProxyWidget_PrepareGeometryChange_Callback = void (*)();
    using QGraphicsProxyWidget_SetGraphicsItem_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsItem*);
    using QGraphicsProxyWidget_SetOwnedByLayout_Callback = void (*)(QGraphicsProxyWidget*, bool);

  protected:
    // Instance callback storage
    QGraphicsProxyWidget_MetaObject_Callback qgraphicsproxywidget_metaobject_callback = nullptr;
    QGraphicsProxyWidget_Metacast_Callback qgraphicsproxywidget_metacast_callback = nullptr;
    QGraphicsProxyWidget_Metacall_Callback qgraphicsproxywidget_metacall_callback = nullptr;
    QGraphicsProxyWidget_SetGeometry_Callback qgraphicsproxywidget_setgeometry_callback = nullptr;
    QGraphicsProxyWidget_Paint_Callback qgraphicsproxywidget_paint_callback = nullptr;
    QGraphicsProxyWidget_Type_Callback qgraphicsproxywidget_type_callback = nullptr;
    QGraphicsProxyWidget_ItemChange_Callback qgraphicsproxywidget_itemchange_callback = nullptr;
    QGraphicsProxyWidget_Event_Callback qgraphicsproxywidget_event_callback = nullptr;
    QGraphicsProxyWidget_EventFilter_Callback qgraphicsproxywidget_eventfilter_callback = nullptr;
    QGraphicsProxyWidget_ShowEvent_Callback qgraphicsproxywidget_showevent_callback = nullptr;
    QGraphicsProxyWidget_HideEvent_Callback qgraphicsproxywidget_hideevent_callback = nullptr;
    QGraphicsProxyWidget_ContextMenuEvent_Callback qgraphicsproxywidget_contextmenuevent_callback = nullptr;
    QGraphicsProxyWidget_DragEnterEvent_Callback qgraphicsproxywidget_dragenterevent_callback = nullptr;
    QGraphicsProxyWidget_DragLeaveEvent_Callback qgraphicsproxywidget_dragleaveevent_callback = nullptr;
    QGraphicsProxyWidget_DragMoveEvent_Callback qgraphicsproxywidget_dragmoveevent_callback = nullptr;
    QGraphicsProxyWidget_DropEvent_Callback qgraphicsproxywidget_dropevent_callback = nullptr;
    QGraphicsProxyWidget_HoverEnterEvent_Callback qgraphicsproxywidget_hoverenterevent_callback = nullptr;
    QGraphicsProxyWidget_HoverLeaveEvent_Callback qgraphicsproxywidget_hoverleaveevent_callback = nullptr;
    QGraphicsProxyWidget_HoverMoveEvent_Callback qgraphicsproxywidget_hovermoveevent_callback = nullptr;
    QGraphicsProxyWidget_GrabMouseEvent_Callback qgraphicsproxywidget_grabmouseevent_callback = nullptr;
    QGraphicsProxyWidget_UngrabMouseEvent_Callback qgraphicsproxywidget_ungrabmouseevent_callback = nullptr;
    QGraphicsProxyWidget_MouseMoveEvent_Callback qgraphicsproxywidget_mousemoveevent_callback = nullptr;
    QGraphicsProxyWidget_MousePressEvent_Callback qgraphicsproxywidget_mousepressevent_callback = nullptr;
    QGraphicsProxyWidget_MouseReleaseEvent_Callback qgraphicsproxywidget_mousereleaseevent_callback = nullptr;
    QGraphicsProxyWidget_MouseDoubleClickEvent_Callback qgraphicsproxywidget_mousedoubleclickevent_callback = nullptr;
    QGraphicsProxyWidget_WheelEvent_Callback qgraphicsproxywidget_wheelevent_callback = nullptr;
    QGraphicsProxyWidget_KeyPressEvent_Callback qgraphicsproxywidget_keypressevent_callback = nullptr;
    QGraphicsProxyWidget_KeyReleaseEvent_Callback qgraphicsproxywidget_keyreleaseevent_callback = nullptr;
    QGraphicsProxyWidget_FocusInEvent_Callback qgraphicsproxywidget_focusinevent_callback = nullptr;
    QGraphicsProxyWidget_FocusOutEvent_Callback qgraphicsproxywidget_focusoutevent_callback = nullptr;
    QGraphicsProxyWidget_FocusNextPrevChild_Callback qgraphicsproxywidget_focusnextprevchild_callback = nullptr;
    QGraphicsProxyWidget_InputMethodQuery_Callback qgraphicsproxywidget_inputmethodquery_callback = nullptr;
    QGraphicsProxyWidget_InputMethodEvent_Callback qgraphicsproxywidget_inputmethodevent_callback = nullptr;
    QGraphicsProxyWidget_SizeHint_Callback qgraphicsproxywidget_sizehint_callback = nullptr;
    QGraphicsProxyWidget_ResizeEvent_Callback qgraphicsproxywidget_resizeevent_callback = nullptr;
    QGraphicsProxyWidget_GetContentsMargins_Callback qgraphicsproxywidget_getcontentsmargins_callback = nullptr;
    QGraphicsProxyWidget_PaintWindowFrame_Callback qgraphicsproxywidget_paintwindowframe_callback = nullptr;
    QGraphicsProxyWidget_BoundingRect_Callback qgraphicsproxywidget_boundingrect_callback = nullptr;
    QGraphicsProxyWidget_Shape_Callback qgraphicsproxywidget_shape_callback = nullptr;
    QGraphicsProxyWidget_InitStyleOption_Callback qgraphicsproxywidget_initstyleoption_callback = nullptr;
    QGraphicsProxyWidget_UpdateGeometry_Callback qgraphicsproxywidget_updategeometry_callback = nullptr;
    QGraphicsProxyWidget_PropertyChange_Callback qgraphicsproxywidget_propertychange_callback = nullptr;
    QGraphicsProxyWidget_SceneEvent_Callback qgraphicsproxywidget_sceneevent_callback = nullptr;
    QGraphicsProxyWidget_WindowFrameEvent_Callback qgraphicsproxywidget_windowframeevent_callback = nullptr;
    QGraphicsProxyWidget_WindowFrameSectionAt_Callback qgraphicsproxywidget_windowframesectionat_callback = nullptr;
    QGraphicsProxyWidget_ChangeEvent_Callback qgraphicsproxywidget_changeevent_callback = nullptr;
    QGraphicsProxyWidget_CloseEvent_Callback qgraphicsproxywidget_closeevent_callback = nullptr;
    QGraphicsProxyWidget_MoveEvent_Callback qgraphicsproxywidget_moveevent_callback = nullptr;
    QGraphicsProxyWidget_PolishEvent_Callback qgraphicsproxywidget_polishevent_callback = nullptr;
    QGraphicsProxyWidget_GrabKeyboardEvent_Callback qgraphicsproxywidget_grabkeyboardevent_callback = nullptr;
    QGraphicsProxyWidget_UngrabKeyboardEvent_Callback qgraphicsproxywidget_ungrabkeyboardevent_callback = nullptr;
    QGraphicsProxyWidget_TimerEvent_Callback qgraphicsproxywidget_timerevent_callback = nullptr;
    QGraphicsProxyWidget_ChildEvent_Callback qgraphicsproxywidget_childevent_callback = nullptr;
    QGraphicsProxyWidget_CustomEvent_Callback qgraphicsproxywidget_customevent_callback = nullptr;
    QGraphicsProxyWidget_ConnectNotify_Callback qgraphicsproxywidget_connectnotify_callback = nullptr;
    QGraphicsProxyWidget_DisconnectNotify_Callback qgraphicsproxywidget_disconnectnotify_callback = nullptr;
    QGraphicsProxyWidget_Advance_Callback qgraphicsproxywidget_advance_callback = nullptr;
    QGraphicsProxyWidget_Contains_Callback qgraphicsproxywidget_contains_callback = nullptr;
    QGraphicsProxyWidget_CollidesWithItem_Callback qgraphicsproxywidget_collideswithitem_callback = nullptr;
    QGraphicsProxyWidget_CollidesWithPath_Callback qgraphicsproxywidget_collideswithpath_callback = nullptr;
    QGraphicsProxyWidget_IsObscuredBy_Callback qgraphicsproxywidget_isobscuredby_callback = nullptr;
    QGraphicsProxyWidget_OpaqueArea_Callback qgraphicsproxywidget_opaquearea_callback = nullptr;
    QGraphicsProxyWidget_SceneEventFilter_Callback qgraphicsproxywidget_sceneeventfilter_callback = nullptr;
    QGraphicsProxyWidget_SupportsExtension_Callback qgraphicsproxywidget_supportsextension_callback = nullptr;
    QGraphicsProxyWidget_SetExtension_Callback qgraphicsproxywidget_setextension_callback = nullptr;
    QGraphicsProxyWidget_Extension_Callback qgraphicsproxywidget_extension_callback = nullptr;
    QGraphicsProxyWidget_IsEmpty_Callback qgraphicsproxywidget_isempty_callback = nullptr;
    QGraphicsProxyWidget_NewProxyWidget_Callback qgraphicsproxywidget_newproxywidget_callback = nullptr;
    QGraphicsProxyWidget_UpdateMicroFocus_Callback qgraphicsproxywidget_updatemicrofocus_callback = nullptr;
    QGraphicsProxyWidget_Sender_Callback qgraphicsproxywidget_sender_callback = nullptr;
    QGraphicsProxyWidget_SenderSignalIndex_Callback qgraphicsproxywidget_sendersignalindex_callback = nullptr;
    QGraphicsProxyWidget_Receivers_Callback qgraphicsproxywidget_receivers_callback = nullptr;
    QGraphicsProxyWidget_IsSignalConnected_Callback qgraphicsproxywidget_issignalconnected_callback = nullptr;
    QGraphicsProxyWidget_AddToIndex_Callback qgraphicsproxywidget_addtoindex_callback = nullptr;
    QGraphicsProxyWidget_RemoveFromIndex_Callback qgraphicsproxywidget_removefromindex_callback = nullptr;
    QGraphicsProxyWidget_PrepareGeometryChange_Callback qgraphicsproxywidget_preparegeometrychange_callback = nullptr;
    QGraphicsProxyWidget_SetGraphicsItem_Callback qgraphicsproxywidget_setgraphicsitem_callback = nullptr;
    QGraphicsProxyWidget_SetOwnedByLayout_Callback qgraphicsproxywidget_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsproxywidget_metaobject_isbase = false;
    mutable bool qgraphicsproxywidget_metacast_isbase = false;
    mutable bool qgraphicsproxywidget_metacall_isbase = false;
    mutable bool qgraphicsproxywidget_setgeometry_isbase = false;
    mutable bool qgraphicsproxywidget_paint_isbase = false;
    mutable bool qgraphicsproxywidget_type_isbase = false;
    mutable bool qgraphicsproxywidget_itemchange_isbase = false;
    mutable bool qgraphicsproxywidget_event_isbase = false;
    mutable bool qgraphicsproxywidget_eventfilter_isbase = false;
    mutable bool qgraphicsproxywidget_showevent_isbase = false;
    mutable bool qgraphicsproxywidget_hideevent_isbase = false;
    mutable bool qgraphicsproxywidget_contextmenuevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragenterevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragleaveevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragmoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_dropevent_isbase = false;
    mutable bool qgraphicsproxywidget_hoverenterevent_isbase = false;
    mutable bool qgraphicsproxywidget_hoverleaveevent_isbase = false;
    mutable bool qgraphicsproxywidget_hovermoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_grabmouseevent_isbase = false;
    mutable bool qgraphicsproxywidget_ungrabmouseevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousemoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousepressevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousereleaseevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsproxywidget_wheelevent_isbase = false;
    mutable bool qgraphicsproxywidget_keypressevent_isbase = false;
    mutable bool qgraphicsproxywidget_keyreleaseevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusinevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusoutevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusnextprevchild_isbase = false;
    mutable bool qgraphicsproxywidget_inputmethodquery_isbase = false;
    mutable bool qgraphicsproxywidget_inputmethodevent_isbase = false;
    mutable bool qgraphicsproxywidget_sizehint_isbase = false;
    mutable bool qgraphicsproxywidget_resizeevent_isbase = false;
    mutable bool qgraphicsproxywidget_getcontentsmargins_isbase = false;
    mutable bool qgraphicsproxywidget_paintwindowframe_isbase = false;
    mutable bool qgraphicsproxywidget_boundingrect_isbase = false;
    mutable bool qgraphicsproxywidget_shape_isbase = false;
    mutable bool qgraphicsproxywidget_initstyleoption_isbase = false;
    mutable bool qgraphicsproxywidget_updategeometry_isbase = false;
    mutable bool qgraphicsproxywidget_propertychange_isbase = false;
    mutable bool qgraphicsproxywidget_sceneevent_isbase = false;
    mutable bool qgraphicsproxywidget_windowframeevent_isbase = false;
    mutable bool qgraphicsproxywidget_windowframesectionat_isbase = false;
    mutable bool qgraphicsproxywidget_changeevent_isbase = false;
    mutable bool qgraphicsproxywidget_closeevent_isbase = false;
    mutable bool qgraphicsproxywidget_moveevent_isbase = false;
    mutable bool qgraphicsproxywidget_polishevent_isbase = false;
    mutable bool qgraphicsproxywidget_grabkeyboardevent_isbase = false;
    mutable bool qgraphicsproxywidget_ungrabkeyboardevent_isbase = false;
    mutable bool qgraphicsproxywidget_timerevent_isbase = false;
    mutable bool qgraphicsproxywidget_childevent_isbase = false;
    mutable bool qgraphicsproxywidget_customevent_isbase = false;
    mutable bool qgraphicsproxywidget_connectnotify_isbase = false;
    mutable bool qgraphicsproxywidget_disconnectnotify_isbase = false;
    mutable bool qgraphicsproxywidget_advance_isbase = false;
    mutable bool qgraphicsproxywidget_contains_isbase = false;
    mutable bool qgraphicsproxywidget_collideswithitem_isbase = false;
    mutable bool qgraphicsproxywidget_collideswithpath_isbase = false;
    mutable bool qgraphicsproxywidget_isobscuredby_isbase = false;
    mutable bool qgraphicsproxywidget_opaquearea_isbase = false;
    mutable bool qgraphicsproxywidget_sceneeventfilter_isbase = false;
    mutable bool qgraphicsproxywidget_supportsextension_isbase = false;
    mutable bool qgraphicsproxywidget_setextension_isbase = false;
    mutable bool qgraphicsproxywidget_extension_isbase = false;
    mutable bool qgraphicsproxywidget_isempty_isbase = false;
    mutable bool qgraphicsproxywidget_newproxywidget_isbase = false;
    mutable bool qgraphicsproxywidget_updatemicrofocus_isbase = false;
    mutable bool qgraphicsproxywidget_sender_isbase = false;
    mutable bool qgraphicsproxywidget_sendersignalindex_isbase = false;
    mutable bool qgraphicsproxywidget_receivers_isbase = false;
    mutable bool qgraphicsproxywidget_issignalconnected_isbase = false;
    mutable bool qgraphicsproxywidget_addtoindex_isbase = false;
    mutable bool qgraphicsproxywidget_removefromindex_isbase = false;
    mutable bool qgraphicsproxywidget_preparegeometrychange_isbase = false;
    mutable bool qgraphicsproxywidget_setgraphicsitem_isbase = false;
    mutable bool qgraphicsproxywidget_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsProxyWidget() : QGraphicsProxyWidget() {};
    VirtualQGraphicsProxyWidget(QGraphicsItem* parent) : QGraphicsProxyWidget(parent) {};
    VirtualQGraphicsProxyWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QGraphicsProxyWidget(parent, wFlags) {};

    // Callback setters
    inline void setQGraphicsProxyWidget_MetaObject_Callback(QGraphicsProxyWidget_MetaObject_Callback cb) { qgraphicsproxywidget_metaobject_callback = cb; }
    inline void setQGraphicsProxyWidget_Metacast_Callback(QGraphicsProxyWidget_Metacast_Callback cb) { qgraphicsproxywidget_metacast_callback = cb; }
    inline void setQGraphicsProxyWidget_Metacall_Callback(QGraphicsProxyWidget_Metacall_Callback cb) { qgraphicsproxywidget_metacall_callback = cb; }
    inline void setQGraphicsProxyWidget_SetGeometry_Callback(QGraphicsProxyWidget_SetGeometry_Callback cb) { qgraphicsproxywidget_setgeometry_callback = cb; }
    inline void setQGraphicsProxyWidget_Paint_Callback(QGraphicsProxyWidget_Paint_Callback cb) { qgraphicsproxywidget_paint_callback = cb; }
    inline void setQGraphicsProxyWidget_Type_Callback(QGraphicsProxyWidget_Type_Callback cb) { qgraphicsproxywidget_type_callback = cb; }
    inline void setQGraphicsProxyWidget_ItemChange_Callback(QGraphicsProxyWidget_ItemChange_Callback cb) { qgraphicsproxywidget_itemchange_callback = cb; }
    inline void setQGraphicsProxyWidget_Event_Callback(QGraphicsProxyWidget_Event_Callback cb) { qgraphicsproxywidget_event_callback = cb; }
    inline void setQGraphicsProxyWidget_EventFilter_Callback(QGraphicsProxyWidget_EventFilter_Callback cb) { qgraphicsproxywidget_eventfilter_callback = cb; }
    inline void setQGraphicsProxyWidget_ShowEvent_Callback(QGraphicsProxyWidget_ShowEvent_Callback cb) { qgraphicsproxywidget_showevent_callback = cb; }
    inline void setQGraphicsProxyWidget_HideEvent_Callback(QGraphicsProxyWidget_HideEvent_Callback cb) { qgraphicsproxywidget_hideevent_callback = cb; }
    inline void setQGraphicsProxyWidget_ContextMenuEvent_Callback(QGraphicsProxyWidget_ContextMenuEvent_Callback cb) { qgraphicsproxywidget_contextmenuevent_callback = cb; }
    inline void setQGraphicsProxyWidget_DragEnterEvent_Callback(QGraphicsProxyWidget_DragEnterEvent_Callback cb) { qgraphicsproxywidget_dragenterevent_callback = cb; }
    inline void setQGraphicsProxyWidget_DragLeaveEvent_Callback(QGraphicsProxyWidget_DragLeaveEvent_Callback cb) { qgraphicsproxywidget_dragleaveevent_callback = cb; }
    inline void setQGraphicsProxyWidget_DragMoveEvent_Callback(QGraphicsProxyWidget_DragMoveEvent_Callback cb) { qgraphicsproxywidget_dragmoveevent_callback = cb; }
    inline void setQGraphicsProxyWidget_DropEvent_Callback(QGraphicsProxyWidget_DropEvent_Callback cb) { qgraphicsproxywidget_dropevent_callback = cb; }
    inline void setQGraphicsProxyWidget_HoverEnterEvent_Callback(QGraphicsProxyWidget_HoverEnterEvent_Callback cb) { qgraphicsproxywidget_hoverenterevent_callback = cb; }
    inline void setQGraphicsProxyWidget_HoverLeaveEvent_Callback(QGraphicsProxyWidget_HoverLeaveEvent_Callback cb) { qgraphicsproxywidget_hoverleaveevent_callback = cb; }
    inline void setQGraphicsProxyWidget_HoverMoveEvent_Callback(QGraphicsProxyWidget_HoverMoveEvent_Callback cb) { qgraphicsproxywidget_hovermoveevent_callback = cb; }
    inline void setQGraphicsProxyWidget_GrabMouseEvent_Callback(QGraphicsProxyWidget_GrabMouseEvent_Callback cb) { qgraphicsproxywidget_grabmouseevent_callback = cb; }
    inline void setQGraphicsProxyWidget_UngrabMouseEvent_Callback(QGraphicsProxyWidget_UngrabMouseEvent_Callback cb) { qgraphicsproxywidget_ungrabmouseevent_callback = cb; }
    inline void setQGraphicsProxyWidget_MouseMoveEvent_Callback(QGraphicsProxyWidget_MouseMoveEvent_Callback cb) { qgraphicsproxywidget_mousemoveevent_callback = cb; }
    inline void setQGraphicsProxyWidget_MousePressEvent_Callback(QGraphicsProxyWidget_MousePressEvent_Callback cb) { qgraphicsproxywidget_mousepressevent_callback = cb; }
    inline void setQGraphicsProxyWidget_MouseReleaseEvent_Callback(QGraphicsProxyWidget_MouseReleaseEvent_Callback cb) { qgraphicsproxywidget_mousereleaseevent_callback = cb; }
    inline void setQGraphicsProxyWidget_MouseDoubleClickEvent_Callback(QGraphicsProxyWidget_MouseDoubleClickEvent_Callback cb) { qgraphicsproxywidget_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsProxyWidget_WheelEvent_Callback(QGraphicsProxyWidget_WheelEvent_Callback cb) { qgraphicsproxywidget_wheelevent_callback = cb; }
    inline void setQGraphicsProxyWidget_KeyPressEvent_Callback(QGraphicsProxyWidget_KeyPressEvent_Callback cb) { qgraphicsproxywidget_keypressevent_callback = cb; }
    inline void setQGraphicsProxyWidget_KeyReleaseEvent_Callback(QGraphicsProxyWidget_KeyReleaseEvent_Callback cb) { qgraphicsproxywidget_keyreleaseevent_callback = cb; }
    inline void setQGraphicsProxyWidget_FocusInEvent_Callback(QGraphicsProxyWidget_FocusInEvent_Callback cb) { qgraphicsproxywidget_focusinevent_callback = cb; }
    inline void setQGraphicsProxyWidget_FocusOutEvent_Callback(QGraphicsProxyWidget_FocusOutEvent_Callback cb) { qgraphicsproxywidget_focusoutevent_callback = cb; }
    inline void setQGraphicsProxyWidget_FocusNextPrevChild_Callback(QGraphicsProxyWidget_FocusNextPrevChild_Callback cb) { qgraphicsproxywidget_focusnextprevchild_callback = cb; }
    inline void setQGraphicsProxyWidget_InputMethodQuery_Callback(QGraphicsProxyWidget_InputMethodQuery_Callback cb) { qgraphicsproxywidget_inputmethodquery_callback = cb; }
    inline void setQGraphicsProxyWidget_InputMethodEvent_Callback(QGraphicsProxyWidget_InputMethodEvent_Callback cb) { qgraphicsproxywidget_inputmethodevent_callback = cb; }
    inline void setQGraphicsProxyWidget_SizeHint_Callback(QGraphicsProxyWidget_SizeHint_Callback cb) { qgraphicsproxywidget_sizehint_callback = cb; }
    inline void setQGraphicsProxyWidget_ResizeEvent_Callback(QGraphicsProxyWidget_ResizeEvent_Callback cb) { qgraphicsproxywidget_resizeevent_callback = cb; }
    inline void setQGraphicsProxyWidget_GetContentsMargins_Callback(QGraphicsProxyWidget_GetContentsMargins_Callback cb) { qgraphicsproxywidget_getcontentsmargins_callback = cb; }
    inline void setQGraphicsProxyWidget_PaintWindowFrame_Callback(QGraphicsProxyWidget_PaintWindowFrame_Callback cb) { qgraphicsproxywidget_paintwindowframe_callback = cb; }
    inline void setQGraphicsProxyWidget_BoundingRect_Callback(QGraphicsProxyWidget_BoundingRect_Callback cb) { qgraphicsproxywidget_boundingrect_callback = cb; }
    inline void setQGraphicsProxyWidget_Shape_Callback(QGraphicsProxyWidget_Shape_Callback cb) { qgraphicsproxywidget_shape_callback = cb; }
    inline void setQGraphicsProxyWidget_InitStyleOption_Callback(QGraphicsProxyWidget_InitStyleOption_Callback cb) { qgraphicsproxywidget_initstyleoption_callback = cb; }
    inline void setQGraphicsProxyWidget_UpdateGeometry_Callback(QGraphicsProxyWidget_UpdateGeometry_Callback cb) { qgraphicsproxywidget_updategeometry_callback = cb; }
    inline void setQGraphicsProxyWidget_PropertyChange_Callback(QGraphicsProxyWidget_PropertyChange_Callback cb) { qgraphicsproxywidget_propertychange_callback = cb; }
    inline void setQGraphicsProxyWidget_SceneEvent_Callback(QGraphicsProxyWidget_SceneEvent_Callback cb) { qgraphicsproxywidget_sceneevent_callback = cb; }
    inline void setQGraphicsProxyWidget_WindowFrameEvent_Callback(QGraphicsProxyWidget_WindowFrameEvent_Callback cb) { qgraphicsproxywidget_windowframeevent_callback = cb; }
    inline void setQGraphicsProxyWidget_WindowFrameSectionAt_Callback(QGraphicsProxyWidget_WindowFrameSectionAt_Callback cb) { qgraphicsproxywidget_windowframesectionat_callback = cb; }
    inline void setQGraphicsProxyWidget_ChangeEvent_Callback(QGraphicsProxyWidget_ChangeEvent_Callback cb) { qgraphicsproxywidget_changeevent_callback = cb; }
    inline void setQGraphicsProxyWidget_CloseEvent_Callback(QGraphicsProxyWidget_CloseEvent_Callback cb) { qgraphicsproxywidget_closeevent_callback = cb; }
    inline void setQGraphicsProxyWidget_MoveEvent_Callback(QGraphicsProxyWidget_MoveEvent_Callback cb) { qgraphicsproxywidget_moveevent_callback = cb; }
    inline void setQGraphicsProxyWidget_PolishEvent_Callback(QGraphicsProxyWidget_PolishEvent_Callback cb) { qgraphicsproxywidget_polishevent_callback = cb; }
    inline void setQGraphicsProxyWidget_GrabKeyboardEvent_Callback(QGraphicsProxyWidget_GrabKeyboardEvent_Callback cb) { qgraphicsproxywidget_grabkeyboardevent_callback = cb; }
    inline void setQGraphicsProxyWidget_UngrabKeyboardEvent_Callback(QGraphicsProxyWidget_UngrabKeyboardEvent_Callback cb) { qgraphicsproxywidget_ungrabkeyboardevent_callback = cb; }
    inline void setQGraphicsProxyWidget_TimerEvent_Callback(QGraphicsProxyWidget_TimerEvent_Callback cb) { qgraphicsproxywidget_timerevent_callback = cb; }
    inline void setQGraphicsProxyWidget_ChildEvent_Callback(QGraphicsProxyWidget_ChildEvent_Callback cb) { qgraphicsproxywidget_childevent_callback = cb; }
    inline void setQGraphicsProxyWidget_CustomEvent_Callback(QGraphicsProxyWidget_CustomEvent_Callback cb) { qgraphicsproxywidget_customevent_callback = cb; }
    inline void setQGraphicsProxyWidget_ConnectNotify_Callback(QGraphicsProxyWidget_ConnectNotify_Callback cb) { qgraphicsproxywidget_connectnotify_callback = cb; }
    inline void setQGraphicsProxyWidget_DisconnectNotify_Callback(QGraphicsProxyWidget_DisconnectNotify_Callback cb) { qgraphicsproxywidget_disconnectnotify_callback = cb; }
    inline void setQGraphicsProxyWidget_Advance_Callback(QGraphicsProxyWidget_Advance_Callback cb) { qgraphicsproxywidget_advance_callback = cb; }
    inline void setQGraphicsProxyWidget_Contains_Callback(QGraphicsProxyWidget_Contains_Callback cb) { qgraphicsproxywidget_contains_callback = cb; }
    inline void setQGraphicsProxyWidget_CollidesWithItem_Callback(QGraphicsProxyWidget_CollidesWithItem_Callback cb) { qgraphicsproxywidget_collideswithitem_callback = cb; }
    inline void setQGraphicsProxyWidget_CollidesWithPath_Callback(QGraphicsProxyWidget_CollidesWithPath_Callback cb) { qgraphicsproxywidget_collideswithpath_callback = cb; }
    inline void setQGraphicsProxyWidget_IsObscuredBy_Callback(QGraphicsProxyWidget_IsObscuredBy_Callback cb) { qgraphicsproxywidget_isobscuredby_callback = cb; }
    inline void setQGraphicsProxyWidget_OpaqueArea_Callback(QGraphicsProxyWidget_OpaqueArea_Callback cb) { qgraphicsproxywidget_opaquearea_callback = cb; }
    inline void setQGraphicsProxyWidget_SceneEventFilter_Callback(QGraphicsProxyWidget_SceneEventFilter_Callback cb) { qgraphicsproxywidget_sceneeventfilter_callback = cb; }
    inline void setQGraphicsProxyWidget_SupportsExtension_Callback(QGraphicsProxyWidget_SupportsExtension_Callback cb) { qgraphicsproxywidget_supportsextension_callback = cb; }
    inline void setQGraphicsProxyWidget_SetExtension_Callback(QGraphicsProxyWidget_SetExtension_Callback cb) { qgraphicsproxywidget_setextension_callback = cb; }
    inline void setQGraphicsProxyWidget_Extension_Callback(QGraphicsProxyWidget_Extension_Callback cb) { qgraphicsproxywidget_extension_callback = cb; }
    inline void setQGraphicsProxyWidget_IsEmpty_Callback(QGraphicsProxyWidget_IsEmpty_Callback cb) { qgraphicsproxywidget_isempty_callback = cb; }
    inline void setQGraphicsProxyWidget_NewProxyWidget_Callback(QGraphicsProxyWidget_NewProxyWidget_Callback cb) { qgraphicsproxywidget_newproxywidget_callback = cb; }
    inline void setQGraphicsProxyWidget_UpdateMicroFocus_Callback(QGraphicsProxyWidget_UpdateMicroFocus_Callback cb) { qgraphicsproxywidget_updatemicrofocus_callback = cb; }
    inline void setQGraphicsProxyWidget_Sender_Callback(QGraphicsProxyWidget_Sender_Callback cb) { qgraphicsproxywidget_sender_callback = cb; }
    inline void setQGraphicsProxyWidget_SenderSignalIndex_Callback(QGraphicsProxyWidget_SenderSignalIndex_Callback cb) { qgraphicsproxywidget_sendersignalindex_callback = cb; }
    inline void setQGraphicsProxyWidget_Receivers_Callback(QGraphicsProxyWidget_Receivers_Callback cb) { qgraphicsproxywidget_receivers_callback = cb; }
    inline void setQGraphicsProxyWidget_IsSignalConnected_Callback(QGraphicsProxyWidget_IsSignalConnected_Callback cb) { qgraphicsproxywidget_issignalconnected_callback = cb; }
    inline void setQGraphicsProxyWidget_AddToIndex_Callback(QGraphicsProxyWidget_AddToIndex_Callback cb) { qgraphicsproxywidget_addtoindex_callback = cb; }
    inline void setQGraphicsProxyWidget_RemoveFromIndex_Callback(QGraphicsProxyWidget_RemoveFromIndex_Callback cb) { qgraphicsproxywidget_removefromindex_callback = cb; }
    inline void setQGraphicsProxyWidget_PrepareGeometryChange_Callback(QGraphicsProxyWidget_PrepareGeometryChange_Callback cb) { qgraphicsproxywidget_preparegeometrychange_callback = cb; }
    inline void setQGraphicsProxyWidget_SetGraphicsItem_Callback(QGraphicsProxyWidget_SetGraphicsItem_Callback cb) { qgraphicsproxywidget_setgraphicsitem_callback = cb; }
    inline void setQGraphicsProxyWidget_SetOwnedByLayout_Callback(QGraphicsProxyWidget_SetOwnedByLayout_Callback cb) { qgraphicsproxywidget_setownedbylayout_callback = cb; }

    // Base flag setters
    inline void setQGraphicsProxyWidget_MetaObject_IsBase(bool value) const { qgraphicsproxywidget_metaobject_isbase = value; }
    inline void setQGraphicsProxyWidget_Metacast_IsBase(bool value) const { qgraphicsproxywidget_metacast_isbase = value; }
    inline void setQGraphicsProxyWidget_Metacall_IsBase(bool value) const { qgraphicsproxywidget_metacall_isbase = value; }
    inline void setQGraphicsProxyWidget_SetGeometry_IsBase(bool value) const { qgraphicsproxywidget_setgeometry_isbase = value; }
    inline void setQGraphicsProxyWidget_Paint_IsBase(bool value) const { qgraphicsproxywidget_paint_isbase = value; }
    inline void setQGraphicsProxyWidget_Type_IsBase(bool value) const { qgraphicsproxywidget_type_isbase = value; }
    inline void setQGraphicsProxyWidget_ItemChange_IsBase(bool value) const { qgraphicsproxywidget_itemchange_isbase = value; }
    inline void setQGraphicsProxyWidget_Event_IsBase(bool value) const { qgraphicsproxywidget_event_isbase = value; }
    inline void setQGraphicsProxyWidget_EventFilter_IsBase(bool value) const { qgraphicsproxywidget_eventfilter_isbase = value; }
    inline void setQGraphicsProxyWidget_ShowEvent_IsBase(bool value) const { qgraphicsproxywidget_showevent_isbase = value; }
    inline void setQGraphicsProxyWidget_HideEvent_IsBase(bool value) const { qgraphicsproxywidget_hideevent_isbase = value; }
    inline void setQGraphicsProxyWidget_ContextMenuEvent_IsBase(bool value) const { qgraphicsproxywidget_contextmenuevent_isbase = value; }
    inline void setQGraphicsProxyWidget_DragEnterEvent_IsBase(bool value) const { qgraphicsproxywidget_dragenterevent_isbase = value; }
    inline void setQGraphicsProxyWidget_DragLeaveEvent_IsBase(bool value) const { qgraphicsproxywidget_dragleaveevent_isbase = value; }
    inline void setQGraphicsProxyWidget_DragMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_dragmoveevent_isbase = value; }
    inline void setQGraphicsProxyWidget_DropEvent_IsBase(bool value) const { qgraphicsproxywidget_dropevent_isbase = value; }
    inline void setQGraphicsProxyWidget_HoverEnterEvent_IsBase(bool value) const { qgraphicsproxywidget_hoverenterevent_isbase = value; }
    inline void setQGraphicsProxyWidget_HoverLeaveEvent_IsBase(bool value) const { qgraphicsproxywidget_hoverleaveevent_isbase = value; }
    inline void setQGraphicsProxyWidget_HoverMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_hovermoveevent_isbase = value; }
    inline void setQGraphicsProxyWidget_GrabMouseEvent_IsBase(bool value) const { qgraphicsproxywidget_grabmouseevent_isbase = value; }
    inline void setQGraphicsProxyWidget_UngrabMouseEvent_IsBase(bool value) const { qgraphicsproxywidget_ungrabmouseevent_isbase = value; }
    inline void setQGraphicsProxyWidget_MouseMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_mousemoveevent_isbase = value; }
    inline void setQGraphicsProxyWidget_MousePressEvent_IsBase(bool value) const { qgraphicsproxywidget_mousepressevent_isbase = value; }
    inline void setQGraphicsProxyWidget_MouseReleaseEvent_IsBase(bool value) const { qgraphicsproxywidget_mousereleaseevent_isbase = value; }
    inline void setQGraphicsProxyWidget_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsproxywidget_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsProxyWidget_WheelEvent_IsBase(bool value) const { qgraphicsproxywidget_wheelevent_isbase = value; }
    inline void setQGraphicsProxyWidget_KeyPressEvent_IsBase(bool value) const { qgraphicsproxywidget_keypressevent_isbase = value; }
    inline void setQGraphicsProxyWidget_KeyReleaseEvent_IsBase(bool value) const { qgraphicsproxywidget_keyreleaseevent_isbase = value; }
    inline void setQGraphicsProxyWidget_FocusInEvent_IsBase(bool value) const { qgraphicsproxywidget_focusinevent_isbase = value; }
    inline void setQGraphicsProxyWidget_FocusOutEvent_IsBase(bool value) const { qgraphicsproxywidget_focusoutevent_isbase = value; }
    inline void setQGraphicsProxyWidget_FocusNextPrevChild_IsBase(bool value) const { qgraphicsproxywidget_focusnextprevchild_isbase = value; }
    inline void setQGraphicsProxyWidget_InputMethodQuery_IsBase(bool value) const { qgraphicsproxywidget_inputmethodquery_isbase = value; }
    inline void setQGraphicsProxyWidget_InputMethodEvent_IsBase(bool value) const { qgraphicsproxywidget_inputmethodevent_isbase = value; }
    inline void setQGraphicsProxyWidget_SizeHint_IsBase(bool value) const { qgraphicsproxywidget_sizehint_isbase = value; }
    inline void setQGraphicsProxyWidget_ResizeEvent_IsBase(bool value) const { qgraphicsproxywidget_resizeevent_isbase = value; }
    inline void setQGraphicsProxyWidget_GetContentsMargins_IsBase(bool value) const { qgraphicsproxywidget_getcontentsmargins_isbase = value; }
    inline void setQGraphicsProxyWidget_PaintWindowFrame_IsBase(bool value) const { qgraphicsproxywidget_paintwindowframe_isbase = value; }
    inline void setQGraphicsProxyWidget_BoundingRect_IsBase(bool value) const { qgraphicsproxywidget_boundingrect_isbase = value; }
    inline void setQGraphicsProxyWidget_Shape_IsBase(bool value) const { qgraphicsproxywidget_shape_isbase = value; }
    inline void setQGraphicsProxyWidget_InitStyleOption_IsBase(bool value) const { qgraphicsproxywidget_initstyleoption_isbase = value; }
    inline void setQGraphicsProxyWidget_UpdateGeometry_IsBase(bool value) const { qgraphicsproxywidget_updategeometry_isbase = value; }
    inline void setQGraphicsProxyWidget_PropertyChange_IsBase(bool value) const { qgraphicsproxywidget_propertychange_isbase = value; }
    inline void setQGraphicsProxyWidget_SceneEvent_IsBase(bool value) const { qgraphicsproxywidget_sceneevent_isbase = value; }
    inline void setQGraphicsProxyWidget_WindowFrameEvent_IsBase(bool value) const { qgraphicsproxywidget_windowframeevent_isbase = value; }
    inline void setQGraphicsProxyWidget_WindowFrameSectionAt_IsBase(bool value) const { qgraphicsproxywidget_windowframesectionat_isbase = value; }
    inline void setQGraphicsProxyWidget_ChangeEvent_IsBase(bool value) const { qgraphicsproxywidget_changeevent_isbase = value; }
    inline void setQGraphicsProxyWidget_CloseEvent_IsBase(bool value) const { qgraphicsproxywidget_closeevent_isbase = value; }
    inline void setQGraphicsProxyWidget_MoveEvent_IsBase(bool value) const { qgraphicsproxywidget_moveevent_isbase = value; }
    inline void setQGraphicsProxyWidget_PolishEvent_IsBase(bool value) const { qgraphicsproxywidget_polishevent_isbase = value; }
    inline void setQGraphicsProxyWidget_GrabKeyboardEvent_IsBase(bool value) const { qgraphicsproxywidget_grabkeyboardevent_isbase = value; }
    inline void setQGraphicsProxyWidget_UngrabKeyboardEvent_IsBase(bool value) const { qgraphicsproxywidget_ungrabkeyboardevent_isbase = value; }
    inline void setQGraphicsProxyWidget_TimerEvent_IsBase(bool value) const { qgraphicsproxywidget_timerevent_isbase = value; }
    inline void setQGraphicsProxyWidget_ChildEvent_IsBase(bool value) const { qgraphicsproxywidget_childevent_isbase = value; }
    inline void setQGraphicsProxyWidget_CustomEvent_IsBase(bool value) const { qgraphicsproxywidget_customevent_isbase = value; }
    inline void setQGraphicsProxyWidget_ConnectNotify_IsBase(bool value) const { qgraphicsproxywidget_connectnotify_isbase = value; }
    inline void setQGraphicsProxyWidget_DisconnectNotify_IsBase(bool value) const { qgraphicsproxywidget_disconnectnotify_isbase = value; }
    inline void setQGraphicsProxyWidget_Advance_IsBase(bool value) const { qgraphicsproxywidget_advance_isbase = value; }
    inline void setQGraphicsProxyWidget_Contains_IsBase(bool value) const { qgraphicsproxywidget_contains_isbase = value; }
    inline void setQGraphicsProxyWidget_CollidesWithItem_IsBase(bool value) const { qgraphicsproxywidget_collideswithitem_isbase = value; }
    inline void setQGraphicsProxyWidget_CollidesWithPath_IsBase(bool value) const { qgraphicsproxywidget_collideswithpath_isbase = value; }
    inline void setQGraphicsProxyWidget_IsObscuredBy_IsBase(bool value) const { qgraphicsproxywidget_isobscuredby_isbase = value; }
    inline void setQGraphicsProxyWidget_OpaqueArea_IsBase(bool value) const { qgraphicsproxywidget_opaquearea_isbase = value; }
    inline void setQGraphicsProxyWidget_SceneEventFilter_IsBase(bool value) const { qgraphicsproxywidget_sceneeventfilter_isbase = value; }
    inline void setQGraphicsProxyWidget_SupportsExtension_IsBase(bool value) const { qgraphicsproxywidget_supportsextension_isbase = value; }
    inline void setQGraphicsProxyWidget_SetExtension_IsBase(bool value) const { qgraphicsproxywidget_setextension_isbase = value; }
    inline void setQGraphicsProxyWidget_Extension_IsBase(bool value) const { qgraphicsproxywidget_extension_isbase = value; }
    inline void setQGraphicsProxyWidget_IsEmpty_IsBase(bool value) const { qgraphicsproxywidget_isempty_isbase = value; }
    inline void setQGraphicsProxyWidget_NewProxyWidget_IsBase(bool value) const { qgraphicsproxywidget_newproxywidget_isbase = value; }
    inline void setQGraphicsProxyWidget_UpdateMicroFocus_IsBase(bool value) const { qgraphicsproxywidget_updatemicrofocus_isbase = value; }
    inline void setQGraphicsProxyWidget_Sender_IsBase(bool value) const { qgraphicsproxywidget_sender_isbase = value; }
    inline void setQGraphicsProxyWidget_SenderSignalIndex_IsBase(bool value) const { qgraphicsproxywidget_sendersignalindex_isbase = value; }
    inline void setQGraphicsProxyWidget_Receivers_IsBase(bool value) const { qgraphicsproxywidget_receivers_isbase = value; }
    inline void setQGraphicsProxyWidget_IsSignalConnected_IsBase(bool value) const { qgraphicsproxywidget_issignalconnected_isbase = value; }
    inline void setQGraphicsProxyWidget_AddToIndex_IsBase(bool value) const { qgraphicsproxywidget_addtoindex_isbase = value; }
    inline void setQGraphicsProxyWidget_RemoveFromIndex_IsBase(bool value) const { qgraphicsproxywidget_removefromindex_isbase = value; }
    inline void setQGraphicsProxyWidget_PrepareGeometryChange_IsBase(bool value) const { qgraphicsproxywidget_preparegeometrychange_isbase = value; }
    inline void setQGraphicsProxyWidget_SetGraphicsItem_IsBase(bool value) const { qgraphicsproxywidget_setgraphicsitem_isbase = value; }
    inline void setQGraphicsProxyWidget_SetOwnedByLayout_IsBase(bool value) const { qgraphicsproxywidget_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qgraphicsproxywidget_metaobject_isbase) {
            qgraphicsproxywidget_metaobject_isbase = false;
            return QGraphicsProxyWidget::metaObject();
        }
        auto metaobject_cb = qgraphicsproxywidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QGraphicsProxyWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qgraphicsproxywidget_metacast_isbase) {
            qgraphicsproxywidget_metacast_isbase = false;
            return QGraphicsProxyWidget::qt_metacast(param1);
        }
        auto metacast_cb = qgraphicsproxywidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsproxywidget_metacall_isbase) {
            qgraphicsproxywidget_metacall_isbase = false;
            return QGraphicsProxyWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qgraphicsproxywidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsProxyWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsproxywidget_setgeometry_isbase) {
            qgraphicsproxywidget_setgeometry_isbase = false;
            QGraphicsProxyWidget::setGeometry(rect);
            return;
        }
        auto setgeometry_cb = qgraphicsproxywidget_setgeometry_callback;
        if (setgeometry_cb) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            setgeometry_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::setGeometry(rect);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paint_isbase) {
            qgraphicsproxywidget_paint_isbase = false;
            QGraphicsProxyWidget::paint(painter, option, widget);
            return;
        }
        auto paint_cb = qgraphicsproxywidget_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paint_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsProxyWidget::paint(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsproxywidget_type_isbase) {
            qgraphicsproxywidget_type_isbase = false;
            return QGraphicsProxyWidget::type();
        }
        auto type_cb = qgraphicsproxywidget_type_callback;
        if (type_cb) {
            int callback_ret = type_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsProxyWidget::type();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsproxywidget_itemchange_isbase) {
            qgraphicsproxywidget_itemchange_isbase = false;
            return QGraphicsProxyWidget::itemChange(change, value);
        }
        auto itemchange_cb = qgraphicsproxywidget_itemchange_callback;
        if (itemchange_cb) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = itemchange_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsProxyWidget::itemChange(change, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsproxywidget_event_isbase) {
            qgraphicsproxywidget_event_isbase = false;
            return QGraphicsProxyWidget::event(event);
        }
        auto event_cb = qgraphicsproxywidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qgraphicsproxywidget_eventfilter_isbase) {
            qgraphicsproxywidget_eventfilter_isbase = false;
            return QGraphicsProxyWidget::eventFilter(object, event);
        }
        auto eventfilter_cb = qgraphicsproxywidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicsproxywidget_showevent_isbase) {
            qgraphicsproxywidget_showevent_isbase = false;
            QGraphicsProxyWidget::showEvent(event);
            return;
        }
        auto showevent_cb = qgraphicsproxywidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicsproxywidget_hideevent_isbase) {
            qgraphicsproxywidget_hideevent_isbase = false;
            QGraphicsProxyWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = qgraphicsproxywidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsproxywidget_contextmenuevent_isbase) {
            qgraphicsproxywidget_contextmenuevent_isbase = false;
            QGraphicsProxyWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qgraphicsproxywidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragenterevent_isbase) {
            qgraphicsproxywidget_dragenterevent_isbase = false;
            QGraphicsProxyWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qgraphicsproxywidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragleaveevent_isbase) {
            qgraphicsproxywidget_dragleaveevent_isbase = false;
            QGraphicsProxyWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qgraphicsproxywidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragmoveevent_isbase) {
            qgraphicsproxywidget_dragmoveevent_isbase = false;
            QGraphicsProxyWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qgraphicsproxywidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dropevent_isbase) {
            qgraphicsproxywidget_dropevent_isbase = false;
            QGraphicsProxyWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = qgraphicsproxywidget_dropevent_callback;
        if (dropevent_cb) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverenterevent_isbase) {
            qgraphicsproxywidget_hoverenterevent_isbase = false;
            QGraphicsProxyWidget::hoverEnterEvent(event);
            return;
        }
        auto hoverenterevent_cb = qgraphicsproxywidget_hoverenterevent_callback;
        if (hoverenterevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverenterevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hoverEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverleaveevent_isbase) {
            qgraphicsproxywidget_hoverleaveevent_isbase = false;
            QGraphicsProxyWidget::hoverLeaveEvent(event);
            return;
        }
        auto hoverleaveevent_cb = qgraphicsproxywidget_hoverleaveevent_callback;
        if (hoverleaveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hoverleaveevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hoverLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hovermoveevent_isbase) {
            qgraphicsproxywidget_hovermoveevent_isbase = false;
            QGraphicsProxyWidget::hoverMoveEvent(event);
            return;
        }
        auto hovermoveevent_cb = qgraphicsproxywidget_hovermoveevent_callback;
        if (hovermoveevent_cb) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            hovermoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::hoverMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabmouseevent_isbase) {
            qgraphicsproxywidget_grabmouseevent_isbase = false;
            QGraphicsProxyWidget::grabMouseEvent(event);
            return;
        }
        auto grabmouseevent_cb = qgraphicsproxywidget_grabmouseevent_callback;
        if (grabmouseevent_cb) {
            QEvent* cbval1 = event;

            grabmouseevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::grabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabmouseevent_isbase) {
            qgraphicsproxywidget_ungrabmouseevent_isbase = false;
            QGraphicsProxyWidget::ungrabMouseEvent(event);
            return;
        }
        auto ungrabmouseevent_cb = qgraphicsproxywidget_ungrabmouseevent_callback;
        if (ungrabmouseevent_cb) {
            QEvent* cbval1 = event;

            ungrabmouseevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::ungrabMouseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousemoveevent_isbase) {
            qgraphicsproxywidget_mousemoveevent_isbase = false;
            QGraphicsProxyWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qgraphicsproxywidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousepressevent_isbase) {
            qgraphicsproxywidget_mousepressevent_isbase = false;
            QGraphicsProxyWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qgraphicsproxywidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousereleaseevent_isbase) {
            qgraphicsproxywidget_mousereleaseevent_isbase = false;
            QGraphicsProxyWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qgraphicsproxywidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousedoubleclickevent_isbase) {
            qgraphicsproxywidget_mousedoubleclickevent_isbase = false;
            QGraphicsProxyWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qgraphicsproxywidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsproxywidget_wheelevent_isbase) {
            qgraphicsproxywidget_wheelevent_isbase = false;
            QGraphicsProxyWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qgraphicsproxywidget_wheelevent_callback;
        if (wheelevent_cb) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keypressevent_isbase) {
            qgraphicsproxywidget_keypressevent_isbase = false;
            QGraphicsProxyWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qgraphicsproxywidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keyreleaseevent_isbase) {
            qgraphicsproxywidget_keyreleaseevent_isbase = false;
            QGraphicsProxyWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qgraphicsproxywidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusinevent_isbase) {
            qgraphicsproxywidget_focusinevent_isbase = false;
            QGraphicsProxyWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qgraphicsproxywidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusoutevent_isbase) {
            qgraphicsproxywidget_focusoutevent_isbase = false;
            QGraphicsProxyWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qgraphicsproxywidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsproxywidget_focusnextprevchild_isbase) {
            qgraphicsproxywidget_focusnextprevchild_isbase = false;
            return QGraphicsProxyWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qgraphicsproxywidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsproxywidget_inputmethodquery_isbase) {
            qgraphicsproxywidget_inputmethodquery_isbase = false;
            return QGraphicsProxyWidget::inputMethodQuery(query);
        }
        auto inputmethodquery_cb = qgraphicsproxywidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsProxyWidget::inputMethodQuery(query);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsproxywidget_inputmethodevent_isbase) {
            qgraphicsproxywidget_inputmethodevent_isbase = false;
            QGraphicsProxyWidget::inputMethodEvent(event);
            return;
        }
        auto inputmethodevent_cb = qgraphicsproxywidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = event;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::inputMethodEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsproxywidget_sizehint_isbase) {
            qgraphicsproxywidget_sizehint_isbase = false;
            return QGraphicsProxyWidget::sizeHint(which, constraint);
        }
        auto sizehint_cb = qgraphicsproxywidget_sizehint_callback;
        if (sizehint_cb) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = sizehint_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QGraphicsProxyWidget::sizeHint(which, constraint);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qgraphicsproxywidget_resizeevent_isbase) {
            qgraphicsproxywidget_resizeevent_isbase = false;
            QGraphicsProxyWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qgraphicsproxywidget_resizeevent_callback;
        if (resizeevent_cb) {
            QGraphicsSceneResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsproxywidget_getcontentsmargins_isbase) {
            qgraphicsproxywidget_getcontentsmargins_isbase = false;
            QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
            return;
        }
        auto getcontentsmargins_cb = qgraphicsproxywidget_getcontentsmargins_callback;
        if (getcontentsmargins_cb) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            getcontentsmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paintwindowframe_isbase) {
            qgraphicsproxywidget_paintwindowframe_isbase = false;
            QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
            return;
        }
        auto paintwindowframe_cb = qgraphicsproxywidget_paintwindowframe_callback;
        if (paintwindowframe_cb) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            paintwindowframe_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsproxywidget_boundingrect_isbase) {
            qgraphicsproxywidget_boundingrect_isbase = false;
            return QGraphicsProxyWidget::boundingRect();
        }
        auto boundingrect_cb = qgraphicsproxywidget_boundingrect_callback;
        if (boundingrect_cb) {
            QRectF* callback_ret = boundingrect_cb();
            return *callback_ret;
        }
        return QGraphicsProxyWidget::boundingRect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsproxywidget_shape_isbase) {
            qgraphicsproxywidget_shape_isbase = false;
            return QGraphicsProxyWidget::shape();
        }
        auto shape_cb = qgraphicsproxywidget_shape_callback;
        if (shape_cb) {
            QPainterPath* callback_ret = shape_cb();
            return *callback_ret;
        }
        return QGraphicsProxyWidget::shape();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qgraphicsproxywidget_initstyleoption_isbase) {
            qgraphicsproxywidget_initstyleoption_isbase = false;
            QGraphicsProxyWidget::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qgraphicsproxywidget_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOption* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsproxywidget_updategeometry_isbase) {
            qgraphicsproxywidget_updategeometry_isbase = false;
            QGraphicsProxyWidget::updateGeometry();
            return;
        }
        auto updategeometry_cb = qgraphicsproxywidget_updategeometry_callback;
        if (updategeometry_cb) {
            updategeometry_cb();
            return;
        }
        QGraphicsProxyWidget::updateGeometry();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qgraphicsproxywidget_propertychange_isbase) {
            qgraphicsproxywidget_propertychange_isbase = false;
            return QGraphicsProxyWidget::propertyChange(propertyName, value);
        }
        auto propertychange_cb = qgraphicsproxywidget_propertychange_callback;
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
        return QGraphicsProxyWidget::propertyChange(propertyName, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsproxywidget_sceneevent_isbase) {
            qgraphicsproxywidget_sceneevent_isbase = false;
            return QGraphicsProxyWidget::sceneEvent(event);
        }
        auto sceneevent_cb = qgraphicsproxywidget_sceneevent_callback;
        if (sceneevent_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = sceneevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::sceneEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qgraphicsproxywidget_windowframeevent_isbase) {
            qgraphicsproxywidget_windowframeevent_isbase = false;
            return QGraphicsProxyWidget::windowFrameEvent(e);
        }
        auto windowframeevent_cb = qgraphicsproxywidget_windowframeevent_callback;
        if (windowframeevent_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = windowframeevent_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::windowFrameEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qgraphicsproxywidget_windowframesectionat_isbase) {
            qgraphicsproxywidget_windowframesectionat_isbase = false;
            return QGraphicsProxyWidget::windowFrameSectionAt(pos);
        }
        auto windowframesectionat_cb = qgraphicsproxywidget_windowframesectionat_callback;
        if (windowframesectionat_cb) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);

            int callback_ret = windowframesectionat_cb(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        }
        return QGraphicsProxyWidget::windowFrameSectionAt(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgraphicsproxywidget_changeevent_isbase) {
            qgraphicsproxywidget_changeevent_isbase = false;
            QGraphicsProxyWidget::changeEvent(event);
            return;
        }
        auto changeevent_cb = qgraphicsproxywidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicsproxywidget_closeevent_isbase) {
            qgraphicsproxywidget_closeevent_isbase = false;
            QGraphicsProxyWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = qgraphicsproxywidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qgraphicsproxywidget_moveevent_isbase) {
            qgraphicsproxywidget_moveevent_isbase = false;
            QGraphicsProxyWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = qgraphicsproxywidget_moveevent_callback;
        if (moveevent_cb) {
            QGraphicsSceneMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qgraphicsproxywidget_polishevent_isbase) {
            qgraphicsproxywidget_polishevent_isbase = false;
            QGraphicsProxyWidget::polishEvent();
            return;
        }
        auto polishevent_cb = qgraphicsproxywidget_polishevent_callback;
        if (polishevent_cb) {
            polishevent_cb();
            return;
        }
        QGraphicsProxyWidget::polishEvent();
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabkeyboardevent_isbase) {
            qgraphicsproxywidget_grabkeyboardevent_isbase = false;
            QGraphicsProxyWidget::grabKeyboardEvent(event);
            return;
        }
        auto grabkeyboardevent_cb = qgraphicsproxywidget_grabkeyboardevent_callback;
        if (grabkeyboardevent_cb) {
            QEvent* cbval1 = event;

            grabkeyboardevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::grabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabkeyboardevent_isbase) {
            qgraphicsproxywidget_ungrabkeyboardevent_isbase = false;
            QGraphicsProxyWidget::ungrabKeyboardEvent(event);
            return;
        }
        auto ungrabkeyboardevent_cb = qgraphicsproxywidget_ungrabkeyboardevent_callback;
        if (ungrabkeyboardevent_cb) {
            QEvent* cbval1 = event;

            ungrabkeyboardevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::ungrabKeyboardEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsproxywidget_timerevent_isbase) {
            qgraphicsproxywidget_timerevent_isbase = false;
            QGraphicsProxyWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = qgraphicsproxywidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsproxywidget_childevent_isbase) {
            qgraphicsproxywidget_childevent_isbase = false;
            QGraphicsProxyWidget::childEvent(event);
            return;
        }
        auto childevent_cb = qgraphicsproxywidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsproxywidget_customevent_isbase) {
            qgraphicsproxywidget_customevent_isbase = false;
            QGraphicsProxyWidget::customEvent(event);
            return;
        }
        auto customevent_cb = qgraphicsproxywidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_connectnotify_isbase) {
            qgraphicsproxywidget_connectnotify_isbase = false;
            QGraphicsProxyWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qgraphicsproxywidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_disconnectnotify_isbase) {
            qgraphicsproxywidget_disconnectnotify_isbase = false;
            QGraphicsProxyWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qgraphicsproxywidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsproxywidget_advance_isbase) {
            qgraphicsproxywidget_advance_isbase = false;
            QGraphicsProxyWidget::advance(phase);
            return;
        }
        auto advance_cb = qgraphicsproxywidget_advance_callback;
        if (advance_cb) {
            int cbval1 = phase;

            advance_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::advance(phase);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsproxywidget_contains_isbase) {
            qgraphicsproxywidget_contains_isbase = false;
            return QGraphicsProxyWidget::contains(point);
        }
        auto contains_cb = qgraphicsproxywidget_contains_callback;
        if (contains_cb) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = contains_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::contains(point);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithitem_isbase) {
            qgraphicsproxywidget_collideswithitem_isbase = false;
            return QGraphicsProxyWidget::collidesWithItem(other, mode);
        }
        auto collideswithitem_cb = qgraphicsproxywidget_collideswithitem_callback;
        if (collideswithitem_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::collidesWithItem(other, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithpath_isbase) {
            qgraphicsproxywidget_collideswithpath_isbase = false;
            return QGraphicsProxyWidget::collidesWithPath(path, mode);
        }
        auto collideswithpath_cb = qgraphicsproxywidget_collideswithpath_callback;
        if (collideswithpath_cb) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = collideswithpath_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::collidesWithPath(path, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsproxywidget_isobscuredby_isbase) {
            qgraphicsproxywidget_isobscuredby_isbase = false;
            return QGraphicsProxyWidget::isObscuredBy(item);
        }
        auto isobscuredby_cb = qgraphicsproxywidget_isobscuredby_callback;
        if (isobscuredby_cb) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = isobscuredby_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::isObscuredBy(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsproxywidget_opaquearea_isbase) {
            qgraphicsproxywidget_opaquearea_isbase = false;
            return QGraphicsProxyWidget::opaqueArea();
        }
        auto opaquearea_cb = qgraphicsproxywidget_opaquearea_callback;
        if (opaquearea_cb) {
            QPainterPath* callback_ret = opaquearea_cb();
            return *callback_ret;
        }
        return QGraphicsProxyWidget::opaqueArea();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsproxywidget_sceneeventfilter_isbase) {
            qgraphicsproxywidget_sceneeventfilter_isbase = false;
            return QGraphicsProxyWidget::sceneEventFilter(watched, event);
        }
        auto sceneeventfilter_cb = qgraphicsproxywidget_sceneeventfilter_callback;
        if (sceneeventfilter_cb) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sceneeventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QGraphicsProxyWidget::sceneEventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsproxywidget_supportsextension_isbase) {
            qgraphicsproxywidget_supportsextension_isbase = false;
            return QGraphicsProxyWidget::supportsExtension(extension);
        }
        auto supportsextension_cb = qgraphicsproxywidget_supportsextension_callback;
        if (supportsextension_cb) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = supportsextension_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::supportsExtension(extension);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsproxywidget_setextension_isbase) {
            qgraphicsproxywidget_setextension_isbase = false;
            QGraphicsProxyWidget::setExtension(extension, variant);
            return;
        }
        auto setextension_cb = qgraphicsproxywidget_setextension_callback;
        if (setextension_cb) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            setextension_cb(this, cbval1, cbval2);
            return;
        }
        QGraphicsProxyWidget::setExtension(extension, variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsproxywidget_extension_isbase) {
            qgraphicsproxywidget_extension_isbase = false;
            return QGraphicsProxyWidget::extension(variant);
        }
        auto extension_cb = qgraphicsproxywidget_extension_callback;
        if (extension_cb) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = extension_cb(this, cbval1);
            return *callback_ret;
        }
        return QGraphicsProxyWidget::extension(variant);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsproxywidget_isempty_isbase) {
            qgraphicsproxywidget_isempty_isbase = false;
            return QGraphicsProxyWidget::isEmpty();
        }
        auto isempty_cb = qgraphicsproxywidget_isempty_callback;
        if (isempty_cb) {
            bool callback_ret = isempty_cb();
            return callback_ret;
        }
        return QGraphicsProxyWidget::isEmpty();
    }

    // Virtual method for C ABI access and custom callback
    QGraphicsProxyWidget* newProxyWidget(const QWidget* param1) {
        if (qgraphicsproxywidget_newproxywidget_isbase) {
            qgraphicsproxywidget_newproxywidget_isbase = false;
            return QGraphicsProxyWidget::newProxyWidget(param1);
        }
        auto newproxywidget_cb = qgraphicsproxywidget_newproxywidget_callback;
        if (newproxywidget_cb) {
            QWidget* cbval1 = (QWidget*)param1;

            QGraphicsProxyWidget* callback_ret = newproxywidget_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::newProxyWidget(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsproxywidget_updatemicrofocus_isbase) {
            qgraphicsproxywidget_updatemicrofocus_isbase = false;
            QGraphicsProxyWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qgraphicsproxywidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QGraphicsProxyWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsproxywidget_sender_isbase) {
            qgraphicsproxywidget_sender_isbase = false;
            return QGraphicsProxyWidget::sender();
        }
        auto sender_cb = qgraphicsproxywidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QGraphicsProxyWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsproxywidget_sendersignalindex_isbase) {
            qgraphicsproxywidget_sendersignalindex_isbase = false;
            return QGraphicsProxyWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = qgraphicsproxywidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QGraphicsProxyWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsproxywidget_receivers_isbase) {
            qgraphicsproxywidget_receivers_isbase = false;
            return QGraphicsProxyWidget::receivers(signal);
        }
        auto receivers_cb = qgraphicsproxywidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QGraphicsProxyWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsproxywidget_issignalconnected_isbase) {
            qgraphicsproxywidget_issignalconnected_isbase = false;
            return QGraphicsProxyWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qgraphicsproxywidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QGraphicsProxyWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsproxywidget_addtoindex_isbase) {
            qgraphicsproxywidget_addtoindex_isbase = false;
            QGraphicsProxyWidget::addToIndex();
            return;
        }
        auto addtoindex_cb = qgraphicsproxywidget_addtoindex_callback;
        if (addtoindex_cb) {
            addtoindex_cb();
            return;
        }
        QGraphicsProxyWidget::addToIndex();
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsproxywidget_removefromindex_isbase) {
            qgraphicsproxywidget_removefromindex_isbase = false;
            QGraphicsProxyWidget::removeFromIndex();
            return;
        }
        auto removefromindex_cb = qgraphicsproxywidget_removefromindex_callback;
        if (removefromindex_cb) {
            removefromindex_cb();
            return;
        }
        QGraphicsProxyWidget::removeFromIndex();
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsproxywidget_preparegeometrychange_isbase) {
            qgraphicsproxywidget_preparegeometrychange_isbase = false;
            QGraphicsProxyWidget::prepareGeometryChange();
            return;
        }
        auto preparegeometrychange_cb = qgraphicsproxywidget_preparegeometrychange_callback;
        if (preparegeometrychange_cb) {
            preparegeometrychange_cb();
            return;
        }
        QGraphicsProxyWidget::prepareGeometryChange();
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicsproxywidget_setgraphicsitem_isbase) {
            qgraphicsproxywidget_setgraphicsitem_isbase = false;
            QGraphicsProxyWidget::setGraphicsItem(item);
            return;
        }
        auto setgraphicsitem_cb = qgraphicsproxywidget_setgraphicsitem_callback;
        if (setgraphicsitem_cb) {
            QGraphicsItem* cbval1 = item;

            setgraphicsitem_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::setGraphicsItem(item);
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicsproxywidget_setownedbylayout_isbase) {
            qgraphicsproxywidget_setownedbylayout_isbase = false;
            QGraphicsProxyWidget::setOwnedByLayout(ownedByLayout);
            return;
        }
        auto setownedbylayout_cb = qgraphicsproxywidget_setownedbylayout_callback;
        if (setownedbylayout_cb) {
            bool cbval1 = ownedByLayout;

            setownedbylayout_cb(this, cbval1);
            return;
        }
        QGraphicsProxyWidget::setOwnedByLayout(ownedByLayout);
    }

    // Friend functions
    friend QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
    friend QVariant* QGraphicsProxyWidget_SuperItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
    friend bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_SuperEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
    friend bool QGraphicsProxyWidget_SuperEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
    friend void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
    friend void QGraphicsProxyWidget_SuperShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
    friend void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
    friend void QGraphicsProxyWidget_SuperHideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
    friend void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsProxyWidget_SuperContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_SuperDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_SuperHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_SuperHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_SuperHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_SuperMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsProxyWidget_SuperWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_SuperKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_SuperKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend void QGraphicsProxyWidget_SuperFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend void QGraphicsProxyWidget_SuperFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
    friend bool QGraphicsProxyWidget_SuperFocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
    friend QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query);
    friend QVariant* QGraphicsProxyWidget_SuperInputMethodQuery(const QGraphicsProxyWidget* self, int query);
    friend void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
    friend void QGraphicsProxyWidget_SuperInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
    friend QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
    friend QSizeF* QGraphicsProxyWidget_SuperSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
    friend void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsProxyWidget_SuperResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsProxyWidget_InitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option);
    friend void QGraphicsProxyWidget_SuperInitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option);
    friend void QGraphicsProxyWidget_UpdateGeometry(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SuperUpdateGeometry(QGraphicsProxyWidget* self);
    friend QVariant* QGraphicsProxyWidget_PropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value);
    friend QVariant* QGraphicsProxyWidget_SuperPropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value);
    friend bool QGraphicsProxyWidget_SceneEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_SuperSceneEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_WindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e);
    friend bool QGraphicsProxyWidget_SuperWindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e);
    friend int QGraphicsProxyWidget_WindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos);
    friend int QGraphicsProxyWidget_SuperWindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos);
    friend void QGraphicsProxyWidget_ChangeEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperChangeEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_CloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event);
    friend void QGraphicsProxyWidget_SuperCloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event);
    friend void QGraphicsProxyWidget_MoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsProxyWidget_SuperMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsProxyWidget_PolishEvent(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SuperPolishEvent(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_GrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperGrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_UngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperUngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_TimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event);
    friend void QGraphicsProxyWidget_SuperTimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event);
    friend void QGraphicsProxyWidget_ChildEvent(QGraphicsProxyWidget* self, QChildEvent* event);
    friend void QGraphicsProxyWidget_SuperChildEvent(QGraphicsProxyWidget* self, QChildEvent* event);
    friend void QGraphicsProxyWidget_CustomEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_SuperCustomEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_ConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_SuperConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_DisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_SuperDisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsProxyWidget_SceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsProxyWidget_SuperSceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsProxyWidget_SupportsExtension(const QGraphicsProxyWidget* self, int extension);
    friend bool QGraphicsProxyWidget_SuperSupportsExtension(const QGraphicsProxyWidget* self, int extension);
    friend void QGraphicsProxyWidget_SetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant);
    friend void QGraphicsProxyWidget_SuperSetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsProxyWidget_Extension(const QGraphicsProxyWidget* self, const QVariant* variant);
    friend QVariant* QGraphicsProxyWidget_SuperExtension(const QGraphicsProxyWidget* self, const QVariant* variant);
    friend QGraphicsProxyWidget* QGraphicsProxyWidget_NewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
    friend QGraphicsProxyWidget* QGraphicsProxyWidget_SuperNewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
    friend void QGraphicsProxyWidget_UpdateMicroFocus(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SuperUpdateMicroFocus(QGraphicsProxyWidget* self);
    friend QObject* QGraphicsProxyWidget_Sender(const QGraphicsProxyWidget* self);
    friend QObject* QGraphicsProxyWidget_SuperSender(const QGraphicsProxyWidget* self);
    friend int QGraphicsProxyWidget_SenderSignalIndex(const QGraphicsProxyWidget* self);
    friend int QGraphicsProxyWidget_SuperSenderSignalIndex(const QGraphicsProxyWidget* self);
    friend int QGraphicsProxyWidget_Receivers(const QGraphicsProxyWidget* self, const char* signal);
    friend int QGraphicsProxyWidget_SuperReceivers(const QGraphicsProxyWidget* self, const char* signal);
    friend bool QGraphicsProxyWidget_IsSignalConnected(const QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsProxyWidget_SuperIsSignalConnected(const QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_AddToIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SuperAddToIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_RemoveFromIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SuperRemoveFromIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_PrepareGeometryChange(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SuperPrepareGeometryChange(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SetGraphicsItem(QGraphicsProxyWidget* self, QGraphicsItem* item);
    friend void QGraphicsProxyWidget_SuperSetGraphicsItem(QGraphicsProxyWidget* self, QGraphicsItem* item);
    friend void QGraphicsProxyWidget_SetOwnedByLayout(QGraphicsProxyWidget* self, bool ownedByLayout);
    friend void QGraphicsProxyWidget_SuperSetOwnedByLayout(QGraphicsProxyWidget* self, bool ownedByLayout);
};

#endif
