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
    using QGraphicsProxyWidget_PropertyChange_Callback = QVariant* (*)(QGraphicsProxyWidget*, libqt_string, QVariant*);
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

    ~VirtualQGraphicsProxyWidget() {
        qgraphicsproxywidget_metacall_callback = nullptr;
        qgraphicsproxywidget_setgeometry_callback = nullptr;
        qgraphicsproxywidget_paint_callback = nullptr;
        qgraphicsproxywidget_type_callback = nullptr;
        qgraphicsproxywidget_itemchange_callback = nullptr;
        qgraphicsproxywidget_event_callback = nullptr;
        qgraphicsproxywidget_eventfilter_callback = nullptr;
        qgraphicsproxywidget_showevent_callback = nullptr;
        qgraphicsproxywidget_hideevent_callback = nullptr;
        qgraphicsproxywidget_contextmenuevent_callback = nullptr;
        qgraphicsproxywidget_dragenterevent_callback = nullptr;
        qgraphicsproxywidget_dragleaveevent_callback = nullptr;
        qgraphicsproxywidget_dragmoveevent_callback = nullptr;
        qgraphicsproxywidget_dropevent_callback = nullptr;
        qgraphicsproxywidget_hoverenterevent_callback = nullptr;
        qgraphicsproxywidget_hoverleaveevent_callback = nullptr;
        qgraphicsproxywidget_hovermoveevent_callback = nullptr;
        qgraphicsproxywidget_grabmouseevent_callback = nullptr;
        qgraphicsproxywidget_ungrabmouseevent_callback = nullptr;
        qgraphicsproxywidget_mousemoveevent_callback = nullptr;
        qgraphicsproxywidget_mousepressevent_callback = nullptr;
        qgraphicsproxywidget_mousereleaseevent_callback = nullptr;
        qgraphicsproxywidget_mousedoubleclickevent_callback = nullptr;
        qgraphicsproxywidget_wheelevent_callback = nullptr;
        qgraphicsproxywidget_keypressevent_callback = nullptr;
        qgraphicsproxywidget_keyreleaseevent_callback = nullptr;
        qgraphicsproxywidget_focusinevent_callback = nullptr;
        qgraphicsproxywidget_focusoutevent_callback = nullptr;
        qgraphicsproxywidget_focusnextprevchild_callback = nullptr;
        qgraphicsproxywidget_inputmethodquery_callback = nullptr;
        qgraphicsproxywidget_inputmethodevent_callback = nullptr;
        qgraphicsproxywidget_sizehint_callback = nullptr;
        qgraphicsproxywidget_resizeevent_callback = nullptr;
        qgraphicsproxywidget_getcontentsmargins_callback = nullptr;
        qgraphicsproxywidget_paintwindowframe_callback = nullptr;
        qgraphicsproxywidget_boundingrect_callback = nullptr;
        qgraphicsproxywidget_shape_callback = nullptr;
        qgraphicsproxywidget_initstyleoption_callback = nullptr;
        qgraphicsproxywidget_updategeometry_callback = nullptr;
        qgraphicsproxywidget_propertychange_callback = nullptr;
        qgraphicsproxywidget_sceneevent_callback = nullptr;
        qgraphicsproxywidget_windowframeevent_callback = nullptr;
        qgraphicsproxywidget_windowframesectionat_callback = nullptr;
        qgraphicsproxywidget_changeevent_callback = nullptr;
        qgraphicsproxywidget_closeevent_callback = nullptr;
        qgraphicsproxywidget_moveevent_callback = nullptr;
        qgraphicsproxywidget_polishevent_callback = nullptr;
        qgraphicsproxywidget_grabkeyboardevent_callback = nullptr;
        qgraphicsproxywidget_ungrabkeyboardevent_callback = nullptr;
        qgraphicsproxywidget_timerevent_callback = nullptr;
        qgraphicsproxywidget_childevent_callback = nullptr;
        qgraphicsproxywidget_customevent_callback = nullptr;
        qgraphicsproxywidget_connectnotify_callback = nullptr;
        qgraphicsproxywidget_disconnectnotify_callback = nullptr;
        qgraphicsproxywidget_advance_callback = nullptr;
        qgraphicsproxywidget_contains_callback = nullptr;
        qgraphicsproxywidget_collideswithitem_callback = nullptr;
        qgraphicsproxywidget_collideswithpath_callback = nullptr;
        qgraphicsproxywidget_isobscuredby_callback = nullptr;
        qgraphicsproxywidget_opaquearea_callback = nullptr;
        qgraphicsproxywidget_sceneeventfilter_callback = nullptr;
        qgraphicsproxywidget_supportsextension_callback = nullptr;
        qgraphicsproxywidget_setextension_callback = nullptr;
        qgraphicsproxywidget_extension_callback = nullptr;
        qgraphicsproxywidget_isempty_callback = nullptr;
        qgraphicsproxywidget_newproxywidget_callback = nullptr;
        qgraphicsproxywidget_updatemicrofocus_callback = nullptr;
        qgraphicsproxywidget_sender_callback = nullptr;
        qgraphicsproxywidget_sendersignalindex_callback = nullptr;
        qgraphicsproxywidget_receivers_callback = nullptr;
        qgraphicsproxywidget_issignalconnected_callback = nullptr;
        qgraphicsproxywidget_addtoindex_callback = nullptr;
        qgraphicsproxywidget_removefromindex_callback = nullptr;
        qgraphicsproxywidget_preparegeometrychange_callback = nullptr;
        qgraphicsproxywidget_setgraphicsitem_callback = nullptr;
        qgraphicsproxywidget_setownedbylayout_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsproxywidget_metacall_isbase) {
            qgraphicsproxywidget_metacall_isbase = false;
            return QGraphicsProxyWidget::qt_metacall(param1, param2, param3);
        } else if (qgraphicsproxywidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgraphicsproxywidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsProxyWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsproxywidget_setgeometry_isbase) {
            qgraphicsproxywidget_setgeometry_isbase = false;
            QGraphicsProxyWidget::setGeometry(rect);
        } else if (qgraphicsproxywidget_setgeometry_callback != nullptr) {
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval1 = const_cast<QRectF*>(&rect_ret);

            qgraphicsproxywidget_setgeometry_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paint_isbase) {
            qgraphicsproxywidget_paint_isbase = false;
            QGraphicsProxyWidget::paint(painter, option, widget);
        } else if (qgraphicsproxywidget_paint_callback != nullptr) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            qgraphicsproxywidget_paint_callback(this, cbval1, cbval2, cbval3);
        } else {
            QGraphicsProxyWidget::paint(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsproxywidget_type_isbase) {
            qgraphicsproxywidget_type_isbase = false;
            return QGraphicsProxyWidget::type();
        } else if (qgraphicsproxywidget_type_callback != nullptr) {
            int callback_ret = qgraphicsproxywidget_type_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsProxyWidget::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsproxywidget_itemchange_isbase) {
            qgraphicsproxywidget_itemchange_isbase = false;
            return QGraphicsProxyWidget::itemChange(change, value);
        } else if (qgraphicsproxywidget_itemchange_callback != nullptr) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = qgraphicsproxywidget_itemchange_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::itemChange(change, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsproxywidget_event_isbase) {
            qgraphicsproxywidget_event_isbase = false;
            return QGraphicsProxyWidget::event(event);
        } else if (qgraphicsproxywidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgraphicsproxywidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qgraphicsproxywidget_eventfilter_isbase) {
            qgraphicsproxywidget_eventfilter_isbase = false;
            return QGraphicsProxyWidget::eventFilter(object, event);
        } else if (qgraphicsproxywidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicsproxywidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicsproxywidget_showevent_isbase) {
            qgraphicsproxywidget_showevent_isbase = false;
            QGraphicsProxyWidget::showEvent(event);
        } else if (qgraphicsproxywidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qgraphicsproxywidget_showevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicsproxywidget_hideevent_isbase) {
            qgraphicsproxywidget_hideevent_isbase = false;
            QGraphicsProxyWidget::hideEvent(event);
        } else if (qgraphicsproxywidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qgraphicsproxywidget_hideevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsproxywidget_contextmenuevent_isbase) {
            qgraphicsproxywidget_contextmenuevent_isbase = false;
            QGraphicsProxyWidget::contextMenuEvent(event);
        } else if (qgraphicsproxywidget_contextmenuevent_callback != nullptr) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            qgraphicsproxywidget_contextmenuevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragenterevent_isbase) {
            qgraphicsproxywidget_dragenterevent_isbase = false;
            QGraphicsProxyWidget::dragEnterEvent(event);
        } else if (qgraphicsproxywidget_dragenterevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicsproxywidget_dragenterevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragleaveevent_isbase) {
            qgraphicsproxywidget_dragleaveevent_isbase = false;
            QGraphicsProxyWidget::dragLeaveEvent(event);
        } else if (qgraphicsproxywidget_dragleaveevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicsproxywidget_dragleaveevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragmoveevent_isbase) {
            qgraphicsproxywidget_dragmoveevent_isbase = false;
            QGraphicsProxyWidget::dragMoveEvent(event);
        } else if (qgraphicsproxywidget_dragmoveevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicsproxywidget_dragmoveevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dropevent_isbase) {
            qgraphicsproxywidget_dropevent_isbase = false;
            QGraphicsProxyWidget::dropEvent(event);
        } else if (qgraphicsproxywidget_dropevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicsproxywidget_dropevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverenterevent_isbase) {
            qgraphicsproxywidget_hoverenterevent_isbase = false;
            QGraphicsProxyWidget::hoverEnterEvent(event);
        } else if (qgraphicsproxywidget_hoverenterevent_callback != nullptr) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            qgraphicsproxywidget_hoverenterevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::hoverEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverleaveevent_isbase) {
            qgraphicsproxywidget_hoverleaveevent_isbase = false;
            QGraphicsProxyWidget::hoverLeaveEvent(event);
        } else if (qgraphicsproxywidget_hoverleaveevent_callback != nullptr) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            qgraphicsproxywidget_hoverleaveevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::hoverLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hovermoveevent_isbase) {
            qgraphicsproxywidget_hovermoveevent_isbase = false;
            QGraphicsProxyWidget::hoverMoveEvent(event);
        } else if (qgraphicsproxywidget_hovermoveevent_callback != nullptr) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            qgraphicsproxywidget_hovermoveevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::hoverMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabmouseevent_isbase) {
            qgraphicsproxywidget_grabmouseevent_isbase = false;
            QGraphicsProxyWidget::grabMouseEvent(event);
        } else if (qgraphicsproxywidget_grabmouseevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsproxywidget_grabmouseevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::grabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabmouseevent_isbase) {
            qgraphicsproxywidget_ungrabmouseevent_isbase = false;
            QGraphicsProxyWidget::ungrabMouseEvent(event);
        } else if (qgraphicsproxywidget_ungrabmouseevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsproxywidget_ungrabmouseevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::ungrabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousemoveevent_isbase) {
            qgraphicsproxywidget_mousemoveevent_isbase = false;
            QGraphicsProxyWidget::mouseMoveEvent(event);
        } else if (qgraphicsproxywidget_mousemoveevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicsproxywidget_mousemoveevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousepressevent_isbase) {
            qgraphicsproxywidget_mousepressevent_isbase = false;
            QGraphicsProxyWidget::mousePressEvent(event);
        } else if (qgraphicsproxywidget_mousepressevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicsproxywidget_mousepressevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousereleaseevent_isbase) {
            qgraphicsproxywidget_mousereleaseevent_isbase = false;
            QGraphicsProxyWidget::mouseReleaseEvent(event);
        } else if (qgraphicsproxywidget_mousereleaseevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicsproxywidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousedoubleclickevent_isbase) {
            qgraphicsproxywidget_mousedoubleclickevent_isbase = false;
            QGraphicsProxyWidget::mouseDoubleClickEvent(event);
        } else if (qgraphicsproxywidget_mousedoubleclickevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicsproxywidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsproxywidget_wheelevent_isbase) {
            qgraphicsproxywidget_wheelevent_isbase = false;
            QGraphicsProxyWidget::wheelEvent(event);
        } else if (qgraphicsproxywidget_wheelevent_callback != nullptr) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            qgraphicsproxywidget_wheelevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keypressevent_isbase) {
            qgraphicsproxywidget_keypressevent_isbase = false;
            QGraphicsProxyWidget::keyPressEvent(event);
        } else if (qgraphicsproxywidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qgraphicsproxywidget_keypressevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keyreleaseevent_isbase) {
            qgraphicsproxywidget_keyreleaseevent_isbase = false;
            QGraphicsProxyWidget::keyReleaseEvent(event);
        } else if (qgraphicsproxywidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qgraphicsproxywidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusinevent_isbase) {
            qgraphicsproxywidget_focusinevent_isbase = false;
            QGraphicsProxyWidget::focusInEvent(event);
        } else if (qgraphicsproxywidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qgraphicsproxywidget_focusinevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusoutevent_isbase) {
            qgraphicsproxywidget_focusoutevent_isbase = false;
            QGraphicsProxyWidget::focusOutEvent(event);
        } else if (qgraphicsproxywidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qgraphicsproxywidget_focusoutevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsproxywidget_focusnextprevchild_isbase) {
            qgraphicsproxywidget_focusnextprevchild_isbase = false;
            return QGraphicsProxyWidget::focusNextPrevChild(next);
        } else if (qgraphicsproxywidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qgraphicsproxywidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsproxywidget_inputmethodquery_isbase) {
            qgraphicsproxywidget_inputmethodquery_isbase = false;
            return QGraphicsProxyWidget::inputMethodQuery(query);
        } else if (qgraphicsproxywidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qgraphicsproxywidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsproxywidget_inputmethodevent_isbase) {
            qgraphicsproxywidget_inputmethodevent_isbase = false;
            QGraphicsProxyWidget::inputMethodEvent(event);
        } else if (qgraphicsproxywidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qgraphicsproxywidget_inputmethodevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsproxywidget_sizehint_isbase) {
            qgraphicsproxywidget_sizehint_isbase = false;
            return QGraphicsProxyWidget::sizeHint(which, constraint);
        } else if (qgraphicsproxywidget_sizehint_callback != nullptr) {
            int cbval1 = static_cast<int>(which);
            const QSizeF& constraint_ret = constraint;
            // Cast returned reference into pointer
            QSizeF* cbval2 = const_cast<QSizeF*>(&constraint_ret);

            QSizeF* callback_ret = qgraphicsproxywidget_sizehint_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::sizeHint(which, constraint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qgraphicsproxywidget_resizeevent_isbase) {
            qgraphicsproxywidget_resizeevent_isbase = false;
            QGraphicsProxyWidget::resizeEvent(event);
        } else if (qgraphicsproxywidget_resizeevent_callback != nullptr) {
            QGraphicsSceneResizeEvent* cbval1 = event;

            qgraphicsproxywidget_resizeevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsproxywidget_getcontentsmargins_isbase) {
            qgraphicsproxywidget_getcontentsmargins_isbase = false;
            QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicsproxywidget_getcontentsmargins_callback != nullptr) {
            double* cbval1 = static_cast<double*>(left);
            double* cbval2 = static_cast<double*>(top);
            double* cbval3 = static_cast<double*>(right);
            double* cbval4 = static_cast<double*>(bottom);

            qgraphicsproxywidget_getcontentsmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paintwindowframe_isbase) {
            qgraphicsproxywidget_paintwindowframe_isbase = false;
            QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
        } else if (qgraphicsproxywidget_paintwindowframe_callback != nullptr) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            qgraphicsproxywidget_paintwindowframe_callback(this, cbval1, cbval2, cbval3);
        } else {
            QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsproxywidget_boundingrect_isbase) {
            qgraphicsproxywidget_boundingrect_isbase = false;
            return QGraphicsProxyWidget::boundingRect();
        } else if (qgraphicsproxywidget_boundingrect_callback != nullptr) {
            QRectF* callback_ret = qgraphicsproxywidget_boundingrect_callback();
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::boundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsproxywidget_shape_isbase) {
            qgraphicsproxywidget_shape_isbase = false;
            return QGraphicsProxyWidget::shape();
        } else if (qgraphicsproxywidget_shape_callback != nullptr) {
            QPainterPath* callback_ret = qgraphicsproxywidget_shape_callback();
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::shape();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qgraphicsproxywidget_initstyleoption_isbase) {
            qgraphicsproxywidget_initstyleoption_isbase = false;
            QGraphicsProxyWidget::initStyleOption(option);
        } else if (qgraphicsproxywidget_initstyleoption_callback != nullptr) {
            QStyleOption* cbval1 = option;

            qgraphicsproxywidget_initstyleoption_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsproxywidget_updategeometry_isbase) {
            qgraphicsproxywidget_updategeometry_isbase = false;
            QGraphicsProxyWidget::updateGeometry();
        } else if (qgraphicsproxywidget_updategeometry_callback != nullptr) {
            qgraphicsproxywidget_updategeometry_callback();
        } else {
            QGraphicsProxyWidget::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qgraphicsproxywidget_propertychange_isbase) {
            qgraphicsproxywidget_propertychange_isbase = false;
            return QGraphicsProxyWidget::propertyChange(propertyName, value);
        } else if (qgraphicsproxywidget_propertychange_callback != nullptr) {
            const QString propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            libqt_string propertyName_str;
            propertyName_str.len = propertyName_b.length();
            propertyName_str.data = static_cast<const char*>(malloc(propertyName_str.len + 1));
            memcpy((void*)propertyName_str.data, propertyName_b.data(), propertyName_str.len);
            ((char*)propertyName_str.data)[propertyName_str.len] = '\0';
            libqt_string cbval1 = propertyName_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = qgraphicsproxywidget_propertychange_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::propertyChange(propertyName, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsproxywidget_sceneevent_isbase) {
            qgraphicsproxywidget_sceneevent_isbase = false;
            return QGraphicsProxyWidget::sceneEvent(event);
        } else if (qgraphicsproxywidget_sceneevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgraphicsproxywidget_sceneevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::sceneEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qgraphicsproxywidget_windowframeevent_isbase) {
            qgraphicsproxywidget_windowframeevent_isbase = false;
            return QGraphicsProxyWidget::windowFrameEvent(e);
        } else if (qgraphicsproxywidget_windowframeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qgraphicsproxywidget_windowframeevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::windowFrameEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qgraphicsproxywidget_windowframesectionat_isbase) {
            qgraphicsproxywidget_windowframesectionat_isbase = false;
            return QGraphicsProxyWidget::windowFrameSectionAt(pos);
        } else if (qgraphicsproxywidget_windowframesectionat_callback != nullptr) {
            const QPointF& pos_ret = pos;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&pos_ret);

            int callback_ret = qgraphicsproxywidget_windowframesectionat_callback(this, cbval1);
            return static_cast<Qt::WindowFrameSection>(callback_ret);
        } else {
            return QGraphicsProxyWidget::windowFrameSectionAt(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgraphicsproxywidget_changeevent_isbase) {
            qgraphicsproxywidget_changeevent_isbase = false;
            QGraphicsProxyWidget::changeEvent(event);
        } else if (qgraphicsproxywidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsproxywidget_changeevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicsproxywidget_closeevent_isbase) {
            qgraphicsproxywidget_closeevent_isbase = false;
            QGraphicsProxyWidget::closeEvent(event);
        } else if (qgraphicsproxywidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qgraphicsproxywidget_closeevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qgraphicsproxywidget_moveevent_isbase) {
            qgraphicsproxywidget_moveevent_isbase = false;
            QGraphicsProxyWidget::moveEvent(event);
        } else if (qgraphicsproxywidget_moveevent_callback != nullptr) {
            QGraphicsSceneMoveEvent* cbval1 = event;

            qgraphicsproxywidget_moveevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qgraphicsproxywidget_polishevent_isbase) {
            qgraphicsproxywidget_polishevent_isbase = false;
            QGraphicsProxyWidget::polishEvent();
        } else if (qgraphicsproxywidget_polishevent_callback != nullptr) {
            qgraphicsproxywidget_polishevent_callback();
        } else {
            QGraphicsProxyWidget::polishEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabkeyboardevent_isbase) {
            qgraphicsproxywidget_grabkeyboardevent_isbase = false;
            QGraphicsProxyWidget::grabKeyboardEvent(event);
        } else if (qgraphicsproxywidget_grabkeyboardevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsproxywidget_grabkeyboardevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::grabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabkeyboardevent_isbase) {
            qgraphicsproxywidget_ungrabkeyboardevent_isbase = false;
            QGraphicsProxyWidget::ungrabKeyboardEvent(event);
        } else if (qgraphicsproxywidget_ungrabkeyboardevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsproxywidget_ungrabkeyboardevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::ungrabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsproxywidget_timerevent_isbase) {
            qgraphicsproxywidget_timerevent_isbase = false;
            QGraphicsProxyWidget::timerEvent(event);
        } else if (qgraphicsproxywidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgraphicsproxywidget_timerevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsproxywidget_childevent_isbase) {
            qgraphicsproxywidget_childevent_isbase = false;
            QGraphicsProxyWidget::childEvent(event);
        } else if (qgraphicsproxywidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgraphicsproxywidget_childevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsproxywidget_customevent_isbase) {
            qgraphicsproxywidget_customevent_isbase = false;
            QGraphicsProxyWidget::customEvent(event);
        } else if (qgraphicsproxywidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicsproxywidget_customevent_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_connectnotify_isbase) {
            qgraphicsproxywidget_connectnotify_isbase = false;
            QGraphicsProxyWidget::connectNotify(signal);
        } else if (qgraphicsproxywidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsproxywidget_connectnotify_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_disconnectnotify_isbase) {
            qgraphicsproxywidget_disconnectnotify_isbase = false;
            QGraphicsProxyWidget::disconnectNotify(signal);
        } else if (qgraphicsproxywidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicsproxywidget_disconnectnotify_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsproxywidget_advance_isbase) {
            qgraphicsproxywidget_advance_isbase = false;
            QGraphicsProxyWidget::advance(phase);
        } else if (qgraphicsproxywidget_advance_callback != nullptr) {
            int cbval1 = phase;

            qgraphicsproxywidget_advance_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::advance(phase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsproxywidget_contains_isbase) {
            qgraphicsproxywidget_contains_isbase = false;
            return QGraphicsProxyWidget::contains(point);
        } else if (qgraphicsproxywidget_contains_callback != nullptr) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = qgraphicsproxywidget_contains_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::contains(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithitem_isbase) {
            qgraphicsproxywidget_collideswithitem_isbase = false;
            return QGraphicsProxyWidget::collidesWithItem(other, mode);
        } else if (qgraphicsproxywidget_collideswithitem_callback != nullptr) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = qgraphicsproxywidget_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::collidesWithItem(other, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithpath_isbase) {
            qgraphicsproxywidget_collideswithpath_isbase = false;
            return QGraphicsProxyWidget::collidesWithPath(path, mode);
        } else if (qgraphicsproxywidget_collideswithpath_callback != nullptr) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = qgraphicsproxywidget_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::collidesWithPath(path, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsproxywidget_isobscuredby_isbase) {
            qgraphicsproxywidget_isobscuredby_isbase = false;
            return QGraphicsProxyWidget::isObscuredBy(item);
        } else if (qgraphicsproxywidget_isobscuredby_callback != nullptr) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = qgraphicsproxywidget_isobscuredby_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::isObscuredBy(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsproxywidget_opaquearea_isbase) {
            qgraphicsproxywidget_opaquearea_isbase = false;
            return QGraphicsProxyWidget::opaqueArea();
        } else if (qgraphicsproxywidget_opaquearea_callback != nullptr) {
            QPainterPath* callback_ret = qgraphicsproxywidget_opaquearea_callback();
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::opaqueArea();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsproxywidget_sceneeventfilter_isbase) {
            qgraphicsproxywidget_sceneeventfilter_isbase = false;
            return QGraphicsProxyWidget::sceneEventFilter(watched, event);
        } else if (qgraphicsproxywidget_sceneeventfilter_callback != nullptr) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicsproxywidget_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::sceneEventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsproxywidget_supportsextension_isbase) {
            qgraphicsproxywidget_supportsextension_isbase = false;
            return QGraphicsProxyWidget::supportsExtension(extension);
        } else if (qgraphicsproxywidget_supportsextension_callback != nullptr) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = qgraphicsproxywidget_supportsextension_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::supportsExtension(extension);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsproxywidget_setextension_isbase) {
            qgraphicsproxywidget_setextension_isbase = false;
            QGraphicsProxyWidget::setExtension(extension, variant);
        } else if (qgraphicsproxywidget_setextension_callback != nullptr) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            qgraphicsproxywidget_setextension_callback(this, cbval1, cbval2);
        } else {
            QGraphicsProxyWidget::setExtension(extension, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsproxywidget_extension_isbase) {
            qgraphicsproxywidget_extension_isbase = false;
            return QGraphicsProxyWidget::extension(variant);
        } else if (qgraphicsproxywidget_extension_callback != nullptr) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = qgraphicsproxywidget_extension_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QGraphicsProxyWidget::extension(variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsproxywidget_isempty_isbase) {
            qgraphicsproxywidget_isempty_isbase = false;
            return QGraphicsProxyWidget::isEmpty();
        } else if (qgraphicsproxywidget_isempty_callback != nullptr) {
            bool callback_ret = qgraphicsproxywidget_isempty_callback();
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    QGraphicsProxyWidget* newProxyWidget(const QWidget* param1) {
        if (qgraphicsproxywidget_newproxywidget_isbase) {
            qgraphicsproxywidget_newproxywidget_isbase = false;
            return QGraphicsProxyWidget::newProxyWidget(param1);
        } else if (qgraphicsproxywidget_newproxywidget_callback != nullptr) {
            QWidget* cbval1 = (QWidget*)param1;

            QGraphicsProxyWidget* callback_ret = qgraphicsproxywidget_newproxywidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::newProxyWidget(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsproxywidget_updatemicrofocus_isbase) {
            qgraphicsproxywidget_updatemicrofocus_isbase = false;
            QGraphicsProxyWidget::updateMicroFocus();
        } else if (qgraphicsproxywidget_updatemicrofocus_callback != nullptr) {
            qgraphicsproxywidget_updatemicrofocus_callback();
        } else {
            QGraphicsProxyWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsproxywidget_sender_isbase) {
            qgraphicsproxywidget_sender_isbase = false;
            return QGraphicsProxyWidget::sender();
        } else if (qgraphicsproxywidget_sender_callback != nullptr) {
            QObject* callback_ret = qgraphicsproxywidget_sender_callback();
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsproxywidget_sendersignalindex_isbase) {
            qgraphicsproxywidget_sendersignalindex_isbase = false;
            return QGraphicsProxyWidget::senderSignalIndex();
        } else if (qgraphicsproxywidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qgraphicsproxywidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsProxyWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsproxywidget_receivers_isbase) {
            qgraphicsproxywidget_receivers_isbase = false;
            return QGraphicsProxyWidget::receivers(signal);
        } else if (qgraphicsproxywidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgraphicsproxywidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsProxyWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsproxywidget_issignalconnected_isbase) {
            qgraphicsproxywidget_issignalconnected_isbase = false;
            return QGraphicsProxyWidget::isSignalConnected(signal);
        } else if (qgraphicsproxywidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgraphicsproxywidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsProxyWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsproxywidget_addtoindex_isbase) {
            qgraphicsproxywidget_addtoindex_isbase = false;
            QGraphicsProxyWidget::addToIndex();
        } else if (qgraphicsproxywidget_addtoindex_callback != nullptr) {
            qgraphicsproxywidget_addtoindex_callback();
        } else {
            QGraphicsProxyWidget::addToIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsproxywidget_removefromindex_isbase) {
            qgraphicsproxywidget_removefromindex_isbase = false;
            QGraphicsProxyWidget::removeFromIndex();
        } else if (qgraphicsproxywidget_removefromindex_callback != nullptr) {
            qgraphicsproxywidget_removefromindex_callback();
        } else {
            QGraphicsProxyWidget::removeFromIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsproxywidget_preparegeometrychange_isbase) {
            qgraphicsproxywidget_preparegeometrychange_isbase = false;
            QGraphicsProxyWidget::prepareGeometryChange();
        } else if (qgraphicsproxywidget_preparegeometrychange_callback != nullptr) {
            qgraphicsproxywidget_preparegeometrychange_callback();
        } else {
            QGraphicsProxyWidget::prepareGeometryChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicsproxywidget_setgraphicsitem_isbase) {
            qgraphicsproxywidget_setgraphicsitem_isbase = false;
            QGraphicsProxyWidget::setGraphicsItem(item);
        } else if (qgraphicsproxywidget_setgraphicsitem_callback != nullptr) {
            QGraphicsItem* cbval1 = item;

            qgraphicsproxywidget_setgraphicsitem_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicsproxywidget_setownedbylayout_isbase) {
            qgraphicsproxywidget_setownedbylayout_isbase = false;
            QGraphicsProxyWidget::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicsproxywidget_setownedbylayout_callback != nullptr) {
            bool cbval1 = ownedByLayout;

            qgraphicsproxywidget_setownedbylayout_callback(this, cbval1);
        } else {
            QGraphicsProxyWidget::setOwnedByLayout(ownedByLayout);
        }
    }

    // Friend functions
    friend QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
    friend QVariant* QGraphicsProxyWidget_QBaseItemChange(QGraphicsProxyWidget* self, int change, const QVariant* value);
    friend bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_QBaseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
    friend bool QGraphicsProxyWidget_QBaseEventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
    friend void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
    friend void QGraphicsProxyWidget_QBaseShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
    friend void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
    friend void QGraphicsProxyWidget_QBaseHideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
    friend void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsProxyWidget_QBaseContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_QBaseDragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_QBaseDragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_QBaseDragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_QBaseDropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_QBaseHoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_QBaseHoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_QBaseHoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_QBaseGrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_QBaseUngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_QBaseMouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_QBaseMousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_QBaseMouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_QBaseMouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsProxyWidget_QBaseWheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_QBaseKeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_QBaseKeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
    friend void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend void QGraphicsProxyWidget_QBaseFocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend void QGraphicsProxyWidget_QBaseFocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
    friend bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
    friend bool QGraphicsProxyWidget_QBaseFocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
    friend QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query);
    friend QVariant* QGraphicsProxyWidget_QBaseInputMethodQuery(const QGraphicsProxyWidget* self, int query);
    friend void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
    friend void QGraphicsProxyWidget_QBaseInputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
    friend QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
    friend QSizeF* QGraphicsProxyWidget_QBaseSizeHint(const QGraphicsProxyWidget* self, int which, const QSizeF* constraint);
    friend void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsProxyWidget_QBaseResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
    friend void QGraphicsProxyWidget_InitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option);
    friend void QGraphicsProxyWidget_QBaseInitStyleOption(const QGraphicsProxyWidget* self, QStyleOption* option);
    friend void QGraphicsProxyWidget_UpdateGeometry(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_QBaseUpdateGeometry(QGraphicsProxyWidget* self);
    friend QVariant* QGraphicsProxyWidget_PropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value);
    friend QVariant* QGraphicsProxyWidget_QBasePropertyChange(QGraphicsProxyWidget* self, const libqt_string propertyName, const QVariant* value);
    friend bool QGraphicsProxyWidget_SceneEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_QBaseSceneEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend bool QGraphicsProxyWidget_WindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e);
    friend bool QGraphicsProxyWidget_QBaseWindowFrameEvent(QGraphicsProxyWidget* self, QEvent* e);
    friend int QGraphicsProxyWidget_WindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos);
    friend int QGraphicsProxyWidget_QBaseWindowFrameSectionAt(const QGraphicsProxyWidget* self, const QPointF* pos);
    friend void QGraphicsProxyWidget_ChangeEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_QBaseChangeEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_CloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event);
    friend void QGraphicsProxyWidget_QBaseCloseEvent(QGraphicsProxyWidget* self, QCloseEvent* event);
    friend void QGraphicsProxyWidget_MoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsProxyWidget_QBaseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event);
    friend void QGraphicsProxyWidget_PolishEvent(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_QBasePolishEvent(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_GrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_QBaseGrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_UngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_QBaseUngrabKeyboardEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_TimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event);
    friend void QGraphicsProxyWidget_QBaseTimerEvent(QGraphicsProxyWidget* self, QTimerEvent* event);
    friend void QGraphicsProxyWidget_ChildEvent(QGraphicsProxyWidget* self, QChildEvent* event);
    friend void QGraphicsProxyWidget_QBaseChildEvent(QGraphicsProxyWidget* self, QChildEvent* event);
    friend void QGraphicsProxyWidget_CustomEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_QBaseCustomEvent(QGraphicsProxyWidget* self, QEvent* event);
    friend void QGraphicsProxyWidget_ConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_QBaseConnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_DisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_QBaseDisconnectNotify(QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsProxyWidget_SceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsProxyWidget_QBaseSceneEventFilter(QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsProxyWidget_SupportsExtension(const QGraphicsProxyWidget* self, int extension);
    friend bool QGraphicsProxyWidget_QBaseSupportsExtension(const QGraphicsProxyWidget* self, int extension);
    friend void QGraphicsProxyWidget_SetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant);
    friend void QGraphicsProxyWidget_QBaseSetExtension(QGraphicsProxyWidget* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsProxyWidget_Extension(const QGraphicsProxyWidget* self, const QVariant* variant);
    friend QVariant* QGraphicsProxyWidget_QBaseExtension(const QGraphicsProxyWidget* self, const QVariant* variant);
    friend QGraphicsProxyWidget* QGraphicsProxyWidget_NewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
    friend QGraphicsProxyWidget* QGraphicsProxyWidget_QBaseNewProxyWidget(QGraphicsProxyWidget* self, const QWidget* param1);
    friend void QGraphicsProxyWidget_UpdateMicroFocus(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_QBaseUpdateMicroFocus(QGraphicsProxyWidget* self);
    friend QObject* QGraphicsProxyWidget_Sender(const QGraphicsProxyWidget* self);
    friend QObject* QGraphicsProxyWidget_QBaseSender(const QGraphicsProxyWidget* self);
    friend int QGraphicsProxyWidget_SenderSignalIndex(const QGraphicsProxyWidget* self);
    friend int QGraphicsProxyWidget_QBaseSenderSignalIndex(const QGraphicsProxyWidget* self);
    friend int QGraphicsProxyWidget_Receivers(const QGraphicsProxyWidget* self, const char* signal);
    friend int QGraphicsProxyWidget_QBaseReceivers(const QGraphicsProxyWidget* self, const char* signal);
    friend bool QGraphicsProxyWidget_IsSignalConnected(const QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend bool QGraphicsProxyWidget_QBaseIsSignalConnected(const QGraphicsProxyWidget* self, const QMetaMethod* signal);
    friend void QGraphicsProxyWidget_AddToIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_QBaseAddToIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_RemoveFromIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_QBaseRemoveFromIndex(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_PrepareGeometryChange(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_QBasePrepareGeometryChange(QGraphicsProxyWidget* self);
    friend void QGraphicsProxyWidget_SetGraphicsItem(QGraphicsProxyWidget* self, QGraphicsItem* item);
    friend void QGraphicsProxyWidget_QBaseSetGraphicsItem(QGraphicsProxyWidget* self, QGraphicsItem* item);
    friend void QGraphicsProxyWidget_SetOwnedByLayout(QGraphicsProxyWidget* self, bool ownedByLayout);
    friend void QGraphicsProxyWidget_QBaseSetOwnedByLayout(QGraphicsProxyWidget* self, bool ownedByLayout);
};

#endif
