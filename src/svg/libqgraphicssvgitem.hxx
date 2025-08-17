#pragma once
#ifndef SRC_SVGC_LIBVIRTUALQGRAPHICSSVGITEM_H
#define SRC_SVGC_LIBVIRTUALQGRAPHICSSVGITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGraphicsSvgItem so that we can call protected methods
class VirtualQGraphicsSvgItem final : public QGraphicsSvgItem {

  public:
    // Virtual class boolean flag
    bool isVirtualQGraphicsSvgItem = true;

    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsSvgItem_Metacall_Callback = int (*)(QGraphicsSvgItem*, int, int, void**);
    using QGraphicsSvgItem_BoundingRect_Callback = QRectF* (*)();
    using QGraphicsSvgItem_Paint_Callback = void (*)(QGraphicsSvgItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsSvgItem_Type_Callback = int (*)();
    using QGraphicsSvgItem_Event_Callback = bool (*)(QGraphicsSvgItem*, QEvent*);
    using QGraphicsSvgItem_EventFilter_Callback = bool (*)(QGraphicsSvgItem*, QObject*, QEvent*);
    using QGraphicsSvgItem_TimerEvent_Callback = void (*)(QGraphicsSvgItem*, QTimerEvent*);
    using QGraphicsSvgItem_ChildEvent_Callback = void (*)(QGraphicsSvgItem*, QChildEvent*);
    using QGraphicsSvgItem_CustomEvent_Callback = void (*)(QGraphicsSvgItem*, QEvent*);
    using QGraphicsSvgItem_ConnectNotify_Callback = void (*)(QGraphicsSvgItem*, QMetaMethod*);
    using QGraphicsSvgItem_DisconnectNotify_Callback = void (*)(QGraphicsSvgItem*, QMetaMethod*);
    using QGraphicsSvgItem_Advance_Callback = void (*)(QGraphicsSvgItem*, int);
    using QGraphicsSvgItem_Shape_Callback = QPainterPath* (*)();
    using QGraphicsSvgItem_Contains_Callback = bool (*)(const QGraphicsSvgItem*, QPointF*);
    using QGraphicsSvgItem_CollidesWithItem_Callback = bool (*)(const QGraphicsSvgItem*, QGraphicsItem*, int);
    using QGraphicsSvgItem_CollidesWithPath_Callback = bool (*)(const QGraphicsSvgItem*, QPainterPath*, int);
    using QGraphicsSvgItem_IsObscuredBy_Callback = bool (*)(const QGraphicsSvgItem*, QGraphicsItem*);
    using QGraphicsSvgItem_OpaqueArea_Callback = QPainterPath* (*)();
    using QGraphicsSvgItem_SceneEventFilter_Callback = bool (*)(QGraphicsSvgItem*, QGraphicsItem*, QEvent*);
    using QGraphicsSvgItem_SceneEvent_Callback = bool (*)(QGraphicsSvgItem*, QEvent*);
    using QGraphicsSvgItem_ContextMenuEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsSvgItem_DragEnterEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_DragLeaveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_DragMoveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_DropEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsSvgItem_FocusInEvent_Callback = void (*)(QGraphicsSvgItem*, QFocusEvent*);
    using QGraphicsSvgItem_FocusOutEvent_Callback = void (*)(QGraphicsSvgItem*, QFocusEvent*);
    using QGraphicsSvgItem_HoverEnterEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSvgItem_HoverMoveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSvgItem_HoverLeaveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsSvgItem_KeyPressEvent_Callback = void (*)(QGraphicsSvgItem*, QKeyEvent*);
    using QGraphicsSvgItem_KeyReleaseEvent_Callback = void (*)(QGraphicsSvgItem*, QKeyEvent*);
    using QGraphicsSvgItem_MousePressEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_MouseMoveEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_MouseReleaseEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsSvgItem_WheelEvent_Callback = void (*)(QGraphicsSvgItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsSvgItem_InputMethodEvent_Callback = void (*)(QGraphicsSvgItem*, QInputMethodEvent*);
    using QGraphicsSvgItem_InputMethodQuery_Callback = QVariant* (*)(const QGraphicsSvgItem*, int);
    using QGraphicsSvgItem_ItemChange_Callback = QVariant* (*)(QGraphicsSvgItem*, int, QVariant*);
    using QGraphicsSvgItem_SupportsExtension_Callback = bool (*)(const QGraphicsSvgItem*, int);
    using QGraphicsSvgItem_SetExtension_Callback = void (*)(QGraphicsSvgItem*, int, QVariant*);
    using QGraphicsSvgItem_Extension_Callback = QVariant* (*)(const QGraphicsSvgItem*, QVariant*);
    using QGraphicsSvgItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsSvgItem_Sender_Callback = QObject* (*)();
    using QGraphicsSvgItem_SenderSignalIndex_Callback = int (*)();
    using QGraphicsSvgItem_Receivers_Callback = int (*)(const QGraphicsSvgItem*, const char*);
    using QGraphicsSvgItem_IsSignalConnected_Callback = bool (*)(const QGraphicsSvgItem*, QMetaMethod*);
    using QGraphicsSvgItem_AddToIndex_Callback = void (*)();
    using QGraphicsSvgItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsSvgItem_PrepareGeometryChange_Callback = void (*)();

  protected:
    // Instance callback storage
    QGraphicsSvgItem_Metacall_Callback qgraphicssvgitem_metacall_callback = nullptr;
    QGraphicsSvgItem_BoundingRect_Callback qgraphicssvgitem_boundingrect_callback = nullptr;
    QGraphicsSvgItem_Paint_Callback qgraphicssvgitem_paint_callback = nullptr;
    QGraphicsSvgItem_Type_Callback qgraphicssvgitem_type_callback = nullptr;
    QGraphicsSvgItem_Event_Callback qgraphicssvgitem_event_callback = nullptr;
    QGraphicsSvgItem_EventFilter_Callback qgraphicssvgitem_eventfilter_callback = nullptr;
    QGraphicsSvgItem_TimerEvent_Callback qgraphicssvgitem_timerevent_callback = nullptr;
    QGraphicsSvgItem_ChildEvent_Callback qgraphicssvgitem_childevent_callback = nullptr;
    QGraphicsSvgItem_CustomEvent_Callback qgraphicssvgitem_customevent_callback = nullptr;
    QGraphicsSvgItem_ConnectNotify_Callback qgraphicssvgitem_connectnotify_callback = nullptr;
    QGraphicsSvgItem_DisconnectNotify_Callback qgraphicssvgitem_disconnectnotify_callback = nullptr;
    QGraphicsSvgItem_Advance_Callback qgraphicssvgitem_advance_callback = nullptr;
    QGraphicsSvgItem_Shape_Callback qgraphicssvgitem_shape_callback = nullptr;
    QGraphicsSvgItem_Contains_Callback qgraphicssvgitem_contains_callback = nullptr;
    QGraphicsSvgItem_CollidesWithItem_Callback qgraphicssvgitem_collideswithitem_callback = nullptr;
    QGraphicsSvgItem_CollidesWithPath_Callback qgraphicssvgitem_collideswithpath_callback = nullptr;
    QGraphicsSvgItem_IsObscuredBy_Callback qgraphicssvgitem_isobscuredby_callback = nullptr;
    QGraphicsSvgItem_OpaqueArea_Callback qgraphicssvgitem_opaquearea_callback = nullptr;
    QGraphicsSvgItem_SceneEventFilter_Callback qgraphicssvgitem_sceneeventfilter_callback = nullptr;
    QGraphicsSvgItem_SceneEvent_Callback qgraphicssvgitem_sceneevent_callback = nullptr;
    QGraphicsSvgItem_ContextMenuEvent_Callback qgraphicssvgitem_contextmenuevent_callback = nullptr;
    QGraphicsSvgItem_DragEnterEvent_Callback qgraphicssvgitem_dragenterevent_callback = nullptr;
    QGraphicsSvgItem_DragLeaveEvent_Callback qgraphicssvgitem_dragleaveevent_callback = nullptr;
    QGraphicsSvgItem_DragMoveEvent_Callback qgraphicssvgitem_dragmoveevent_callback = nullptr;
    QGraphicsSvgItem_DropEvent_Callback qgraphicssvgitem_dropevent_callback = nullptr;
    QGraphicsSvgItem_FocusInEvent_Callback qgraphicssvgitem_focusinevent_callback = nullptr;
    QGraphicsSvgItem_FocusOutEvent_Callback qgraphicssvgitem_focusoutevent_callback = nullptr;
    QGraphicsSvgItem_HoverEnterEvent_Callback qgraphicssvgitem_hoverenterevent_callback = nullptr;
    QGraphicsSvgItem_HoverMoveEvent_Callback qgraphicssvgitem_hovermoveevent_callback = nullptr;
    QGraphicsSvgItem_HoverLeaveEvent_Callback qgraphicssvgitem_hoverleaveevent_callback = nullptr;
    QGraphicsSvgItem_KeyPressEvent_Callback qgraphicssvgitem_keypressevent_callback = nullptr;
    QGraphicsSvgItem_KeyReleaseEvent_Callback qgraphicssvgitem_keyreleaseevent_callback = nullptr;
    QGraphicsSvgItem_MousePressEvent_Callback qgraphicssvgitem_mousepressevent_callback = nullptr;
    QGraphicsSvgItem_MouseMoveEvent_Callback qgraphicssvgitem_mousemoveevent_callback = nullptr;
    QGraphicsSvgItem_MouseReleaseEvent_Callback qgraphicssvgitem_mousereleaseevent_callback = nullptr;
    QGraphicsSvgItem_MouseDoubleClickEvent_Callback qgraphicssvgitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsSvgItem_WheelEvent_Callback qgraphicssvgitem_wheelevent_callback = nullptr;
    QGraphicsSvgItem_InputMethodEvent_Callback qgraphicssvgitem_inputmethodevent_callback = nullptr;
    QGraphicsSvgItem_InputMethodQuery_Callback qgraphicssvgitem_inputmethodquery_callback = nullptr;
    QGraphicsSvgItem_ItemChange_Callback qgraphicssvgitem_itemchange_callback = nullptr;
    QGraphicsSvgItem_SupportsExtension_Callback qgraphicssvgitem_supportsextension_callback = nullptr;
    QGraphicsSvgItem_SetExtension_Callback qgraphicssvgitem_setextension_callback = nullptr;
    QGraphicsSvgItem_Extension_Callback qgraphicssvgitem_extension_callback = nullptr;
    QGraphicsSvgItem_UpdateMicroFocus_Callback qgraphicssvgitem_updatemicrofocus_callback = nullptr;
    QGraphicsSvgItem_Sender_Callback qgraphicssvgitem_sender_callback = nullptr;
    QGraphicsSvgItem_SenderSignalIndex_Callback qgraphicssvgitem_sendersignalindex_callback = nullptr;
    QGraphicsSvgItem_Receivers_Callback qgraphicssvgitem_receivers_callback = nullptr;
    QGraphicsSvgItem_IsSignalConnected_Callback qgraphicssvgitem_issignalconnected_callback = nullptr;
    QGraphicsSvgItem_AddToIndex_Callback qgraphicssvgitem_addtoindex_callback = nullptr;
    QGraphicsSvgItem_RemoveFromIndex_Callback qgraphicssvgitem_removefromindex_callback = nullptr;
    QGraphicsSvgItem_PrepareGeometryChange_Callback qgraphicssvgitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicssvgitem_metacall_isbase = false;
    mutable bool qgraphicssvgitem_boundingrect_isbase = false;
    mutable bool qgraphicssvgitem_paint_isbase = false;
    mutable bool qgraphicssvgitem_type_isbase = false;
    mutable bool qgraphicssvgitem_event_isbase = false;
    mutable bool qgraphicssvgitem_eventfilter_isbase = false;
    mutable bool qgraphicssvgitem_timerevent_isbase = false;
    mutable bool qgraphicssvgitem_childevent_isbase = false;
    mutable bool qgraphicssvgitem_customevent_isbase = false;
    mutable bool qgraphicssvgitem_connectnotify_isbase = false;
    mutable bool qgraphicssvgitem_disconnectnotify_isbase = false;
    mutable bool qgraphicssvgitem_advance_isbase = false;
    mutable bool qgraphicssvgitem_shape_isbase = false;
    mutable bool qgraphicssvgitem_contains_isbase = false;
    mutable bool qgraphicssvgitem_collideswithitem_isbase = false;
    mutable bool qgraphicssvgitem_collideswithpath_isbase = false;
    mutable bool qgraphicssvgitem_isobscuredby_isbase = false;
    mutable bool qgraphicssvgitem_opaquearea_isbase = false;
    mutable bool qgraphicssvgitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicssvgitem_sceneevent_isbase = false;
    mutable bool qgraphicssvgitem_contextmenuevent_isbase = false;
    mutable bool qgraphicssvgitem_dragenterevent_isbase = false;
    mutable bool qgraphicssvgitem_dragleaveevent_isbase = false;
    mutable bool qgraphicssvgitem_dragmoveevent_isbase = false;
    mutable bool qgraphicssvgitem_dropevent_isbase = false;
    mutable bool qgraphicssvgitem_focusinevent_isbase = false;
    mutable bool qgraphicssvgitem_focusoutevent_isbase = false;
    mutable bool qgraphicssvgitem_hoverenterevent_isbase = false;
    mutable bool qgraphicssvgitem_hovermoveevent_isbase = false;
    mutable bool qgraphicssvgitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicssvgitem_keypressevent_isbase = false;
    mutable bool qgraphicssvgitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicssvgitem_mousepressevent_isbase = false;
    mutable bool qgraphicssvgitem_mousemoveevent_isbase = false;
    mutable bool qgraphicssvgitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicssvgitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicssvgitem_wheelevent_isbase = false;
    mutable bool qgraphicssvgitem_inputmethodevent_isbase = false;
    mutable bool qgraphicssvgitem_inputmethodquery_isbase = false;
    mutable bool qgraphicssvgitem_itemchange_isbase = false;
    mutable bool qgraphicssvgitem_supportsextension_isbase = false;
    mutable bool qgraphicssvgitem_setextension_isbase = false;
    mutable bool qgraphicssvgitem_extension_isbase = false;
    mutable bool qgraphicssvgitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicssvgitem_sender_isbase = false;
    mutable bool qgraphicssvgitem_sendersignalindex_isbase = false;
    mutable bool qgraphicssvgitem_receivers_isbase = false;
    mutable bool qgraphicssvgitem_issignalconnected_isbase = false;
    mutable bool qgraphicssvgitem_addtoindex_isbase = false;
    mutable bool qgraphicssvgitem_removefromindex_isbase = false;
    mutable bool qgraphicssvgitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsSvgItem() : QGraphicsSvgItem() {};
    VirtualQGraphicsSvgItem(const QString& fileName) : QGraphicsSvgItem(fileName) {};
    VirtualQGraphicsSvgItem(QGraphicsItem* parentItem) : QGraphicsSvgItem(parentItem) {};
    VirtualQGraphicsSvgItem(const QString& fileName, QGraphicsItem* parentItem) : QGraphicsSvgItem(fileName, parentItem) {};

    ~VirtualQGraphicsSvgItem() {
        qgraphicssvgitem_metacall_callback = nullptr;
        qgraphicssvgitem_boundingrect_callback = nullptr;
        qgraphicssvgitem_paint_callback = nullptr;
        qgraphicssvgitem_type_callback = nullptr;
        qgraphicssvgitem_event_callback = nullptr;
        qgraphicssvgitem_eventfilter_callback = nullptr;
        qgraphicssvgitem_timerevent_callback = nullptr;
        qgraphicssvgitem_childevent_callback = nullptr;
        qgraphicssvgitem_customevent_callback = nullptr;
        qgraphicssvgitem_connectnotify_callback = nullptr;
        qgraphicssvgitem_disconnectnotify_callback = nullptr;
        qgraphicssvgitem_advance_callback = nullptr;
        qgraphicssvgitem_shape_callback = nullptr;
        qgraphicssvgitem_contains_callback = nullptr;
        qgraphicssvgitem_collideswithitem_callback = nullptr;
        qgraphicssvgitem_collideswithpath_callback = nullptr;
        qgraphicssvgitem_isobscuredby_callback = nullptr;
        qgraphicssvgitem_opaquearea_callback = nullptr;
        qgraphicssvgitem_sceneeventfilter_callback = nullptr;
        qgraphicssvgitem_sceneevent_callback = nullptr;
        qgraphicssvgitem_contextmenuevent_callback = nullptr;
        qgraphicssvgitem_dragenterevent_callback = nullptr;
        qgraphicssvgitem_dragleaveevent_callback = nullptr;
        qgraphicssvgitem_dragmoveevent_callback = nullptr;
        qgraphicssvgitem_dropevent_callback = nullptr;
        qgraphicssvgitem_focusinevent_callback = nullptr;
        qgraphicssvgitem_focusoutevent_callback = nullptr;
        qgraphicssvgitem_hoverenterevent_callback = nullptr;
        qgraphicssvgitem_hovermoveevent_callback = nullptr;
        qgraphicssvgitem_hoverleaveevent_callback = nullptr;
        qgraphicssvgitem_keypressevent_callback = nullptr;
        qgraphicssvgitem_keyreleaseevent_callback = nullptr;
        qgraphicssvgitem_mousepressevent_callback = nullptr;
        qgraphicssvgitem_mousemoveevent_callback = nullptr;
        qgraphicssvgitem_mousereleaseevent_callback = nullptr;
        qgraphicssvgitem_mousedoubleclickevent_callback = nullptr;
        qgraphicssvgitem_wheelevent_callback = nullptr;
        qgraphicssvgitem_inputmethodevent_callback = nullptr;
        qgraphicssvgitem_inputmethodquery_callback = nullptr;
        qgraphicssvgitem_itemchange_callback = nullptr;
        qgraphicssvgitem_supportsextension_callback = nullptr;
        qgraphicssvgitem_setextension_callback = nullptr;
        qgraphicssvgitem_extension_callback = nullptr;
        qgraphicssvgitem_updatemicrofocus_callback = nullptr;
        qgraphicssvgitem_sender_callback = nullptr;
        qgraphicssvgitem_sendersignalindex_callback = nullptr;
        qgraphicssvgitem_receivers_callback = nullptr;
        qgraphicssvgitem_issignalconnected_callback = nullptr;
        qgraphicssvgitem_addtoindex_callback = nullptr;
        qgraphicssvgitem_removefromindex_callback = nullptr;
        qgraphicssvgitem_preparegeometrychange_callback = nullptr;
    }

    // Callback setters
    inline void setQGraphicsSvgItem_Metacall_Callback(QGraphicsSvgItem_Metacall_Callback cb) { qgraphicssvgitem_metacall_callback = cb; }
    inline void setQGraphicsSvgItem_BoundingRect_Callback(QGraphicsSvgItem_BoundingRect_Callback cb) { qgraphicssvgitem_boundingrect_callback = cb; }
    inline void setQGraphicsSvgItem_Paint_Callback(QGraphicsSvgItem_Paint_Callback cb) { qgraphicssvgitem_paint_callback = cb; }
    inline void setQGraphicsSvgItem_Type_Callback(QGraphicsSvgItem_Type_Callback cb) { qgraphicssvgitem_type_callback = cb; }
    inline void setQGraphicsSvgItem_Event_Callback(QGraphicsSvgItem_Event_Callback cb) { qgraphicssvgitem_event_callback = cb; }
    inline void setQGraphicsSvgItem_EventFilter_Callback(QGraphicsSvgItem_EventFilter_Callback cb) { qgraphicssvgitem_eventfilter_callback = cb; }
    inline void setQGraphicsSvgItem_TimerEvent_Callback(QGraphicsSvgItem_TimerEvent_Callback cb) { qgraphicssvgitem_timerevent_callback = cb; }
    inline void setQGraphicsSvgItem_ChildEvent_Callback(QGraphicsSvgItem_ChildEvent_Callback cb) { qgraphicssvgitem_childevent_callback = cb; }
    inline void setQGraphicsSvgItem_CustomEvent_Callback(QGraphicsSvgItem_CustomEvent_Callback cb) { qgraphicssvgitem_customevent_callback = cb; }
    inline void setQGraphicsSvgItem_ConnectNotify_Callback(QGraphicsSvgItem_ConnectNotify_Callback cb) { qgraphicssvgitem_connectnotify_callback = cb; }
    inline void setQGraphicsSvgItem_DisconnectNotify_Callback(QGraphicsSvgItem_DisconnectNotify_Callback cb) { qgraphicssvgitem_disconnectnotify_callback = cb; }
    inline void setQGraphicsSvgItem_Advance_Callback(QGraphicsSvgItem_Advance_Callback cb) { qgraphicssvgitem_advance_callback = cb; }
    inline void setQGraphicsSvgItem_Shape_Callback(QGraphicsSvgItem_Shape_Callback cb) { qgraphicssvgitem_shape_callback = cb; }
    inline void setQGraphicsSvgItem_Contains_Callback(QGraphicsSvgItem_Contains_Callback cb) { qgraphicssvgitem_contains_callback = cb; }
    inline void setQGraphicsSvgItem_CollidesWithItem_Callback(QGraphicsSvgItem_CollidesWithItem_Callback cb) { qgraphicssvgitem_collideswithitem_callback = cb; }
    inline void setQGraphicsSvgItem_CollidesWithPath_Callback(QGraphicsSvgItem_CollidesWithPath_Callback cb) { qgraphicssvgitem_collideswithpath_callback = cb; }
    inline void setQGraphicsSvgItem_IsObscuredBy_Callback(QGraphicsSvgItem_IsObscuredBy_Callback cb) { qgraphicssvgitem_isobscuredby_callback = cb; }
    inline void setQGraphicsSvgItem_OpaqueArea_Callback(QGraphicsSvgItem_OpaqueArea_Callback cb) { qgraphicssvgitem_opaquearea_callback = cb; }
    inline void setQGraphicsSvgItem_SceneEventFilter_Callback(QGraphicsSvgItem_SceneEventFilter_Callback cb) { qgraphicssvgitem_sceneeventfilter_callback = cb; }
    inline void setQGraphicsSvgItem_SceneEvent_Callback(QGraphicsSvgItem_SceneEvent_Callback cb) { qgraphicssvgitem_sceneevent_callback = cb; }
    inline void setQGraphicsSvgItem_ContextMenuEvent_Callback(QGraphicsSvgItem_ContextMenuEvent_Callback cb) { qgraphicssvgitem_contextmenuevent_callback = cb; }
    inline void setQGraphicsSvgItem_DragEnterEvent_Callback(QGraphicsSvgItem_DragEnterEvent_Callback cb) { qgraphicssvgitem_dragenterevent_callback = cb; }
    inline void setQGraphicsSvgItem_DragLeaveEvent_Callback(QGraphicsSvgItem_DragLeaveEvent_Callback cb) { qgraphicssvgitem_dragleaveevent_callback = cb; }
    inline void setQGraphicsSvgItem_DragMoveEvent_Callback(QGraphicsSvgItem_DragMoveEvent_Callback cb) { qgraphicssvgitem_dragmoveevent_callback = cb; }
    inline void setQGraphicsSvgItem_DropEvent_Callback(QGraphicsSvgItem_DropEvent_Callback cb) { qgraphicssvgitem_dropevent_callback = cb; }
    inline void setQGraphicsSvgItem_FocusInEvent_Callback(QGraphicsSvgItem_FocusInEvent_Callback cb) { qgraphicssvgitem_focusinevent_callback = cb; }
    inline void setQGraphicsSvgItem_FocusOutEvent_Callback(QGraphicsSvgItem_FocusOutEvent_Callback cb) { qgraphicssvgitem_focusoutevent_callback = cb; }
    inline void setQGraphicsSvgItem_HoverEnterEvent_Callback(QGraphicsSvgItem_HoverEnterEvent_Callback cb) { qgraphicssvgitem_hoverenterevent_callback = cb; }
    inline void setQGraphicsSvgItem_HoverMoveEvent_Callback(QGraphicsSvgItem_HoverMoveEvent_Callback cb) { qgraphicssvgitem_hovermoveevent_callback = cb; }
    inline void setQGraphicsSvgItem_HoverLeaveEvent_Callback(QGraphicsSvgItem_HoverLeaveEvent_Callback cb) { qgraphicssvgitem_hoverleaveevent_callback = cb; }
    inline void setQGraphicsSvgItem_KeyPressEvent_Callback(QGraphicsSvgItem_KeyPressEvent_Callback cb) { qgraphicssvgitem_keypressevent_callback = cb; }
    inline void setQGraphicsSvgItem_KeyReleaseEvent_Callback(QGraphicsSvgItem_KeyReleaseEvent_Callback cb) { qgraphicssvgitem_keyreleaseevent_callback = cb; }
    inline void setQGraphicsSvgItem_MousePressEvent_Callback(QGraphicsSvgItem_MousePressEvent_Callback cb) { qgraphicssvgitem_mousepressevent_callback = cb; }
    inline void setQGraphicsSvgItem_MouseMoveEvent_Callback(QGraphicsSvgItem_MouseMoveEvent_Callback cb) { qgraphicssvgitem_mousemoveevent_callback = cb; }
    inline void setQGraphicsSvgItem_MouseReleaseEvent_Callback(QGraphicsSvgItem_MouseReleaseEvent_Callback cb) { qgraphicssvgitem_mousereleaseevent_callback = cb; }
    inline void setQGraphicsSvgItem_MouseDoubleClickEvent_Callback(QGraphicsSvgItem_MouseDoubleClickEvent_Callback cb) { qgraphicssvgitem_mousedoubleclickevent_callback = cb; }
    inline void setQGraphicsSvgItem_WheelEvent_Callback(QGraphicsSvgItem_WheelEvent_Callback cb) { qgraphicssvgitem_wheelevent_callback = cb; }
    inline void setQGraphicsSvgItem_InputMethodEvent_Callback(QGraphicsSvgItem_InputMethodEvent_Callback cb) { qgraphicssvgitem_inputmethodevent_callback = cb; }
    inline void setQGraphicsSvgItem_InputMethodQuery_Callback(QGraphicsSvgItem_InputMethodQuery_Callback cb) { qgraphicssvgitem_inputmethodquery_callback = cb; }
    inline void setQGraphicsSvgItem_ItemChange_Callback(QGraphicsSvgItem_ItemChange_Callback cb) { qgraphicssvgitem_itemchange_callback = cb; }
    inline void setQGraphicsSvgItem_SupportsExtension_Callback(QGraphicsSvgItem_SupportsExtension_Callback cb) { qgraphicssvgitem_supportsextension_callback = cb; }
    inline void setQGraphicsSvgItem_SetExtension_Callback(QGraphicsSvgItem_SetExtension_Callback cb) { qgraphicssvgitem_setextension_callback = cb; }
    inline void setQGraphicsSvgItem_Extension_Callback(QGraphicsSvgItem_Extension_Callback cb) { qgraphicssvgitem_extension_callback = cb; }
    inline void setQGraphicsSvgItem_UpdateMicroFocus_Callback(QGraphicsSvgItem_UpdateMicroFocus_Callback cb) { qgraphicssvgitem_updatemicrofocus_callback = cb; }
    inline void setQGraphicsSvgItem_Sender_Callback(QGraphicsSvgItem_Sender_Callback cb) { qgraphicssvgitem_sender_callback = cb; }
    inline void setQGraphicsSvgItem_SenderSignalIndex_Callback(QGraphicsSvgItem_SenderSignalIndex_Callback cb) { qgraphicssvgitem_sendersignalindex_callback = cb; }
    inline void setQGraphicsSvgItem_Receivers_Callback(QGraphicsSvgItem_Receivers_Callback cb) { qgraphicssvgitem_receivers_callback = cb; }
    inline void setQGraphicsSvgItem_IsSignalConnected_Callback(QGraphicsSvgItem_IsSignalConnected_Callback cb) { qgraphicssvgitem_issignalconnected_callback = cb; }
    inline void setQGraphicsSvgItem_AddToIndex_Callback(QGraphicsSvgItem_AddToIndex_Callback cb) { qgraphicssvgitem_addtoindex_callback = cb; }
    inline void setQGraphicsSvgItem_RemoveFromIndex_Callback(QGraphicsSvgItem_RemoveFromIndex_Callback cb) { qgraphicssvgitem_removefromindex_callback = cb; }
    inline void setQGraphicsSvgItem_PrepareGeometryChange_Callback(QGraphicsSvgItem_PrepareGeometryChange_Callback cb) { qgraphicssvgitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    inline void setQGraphicsSvgItem_Metacall_IsBase(bool value) const { qgraphicssvgitem_metacall_isbase = value; }
    inline void setQGraphicsSvgItem_BoundingRect_IsBase(bool value) const { qgraphicssvgitem_boundingrect_isbase = value; }
    inline void setQGraphicsSvgItem_Paint_IsBase(bool value) const { qgraphicssvgitem_paint_isbase = value; }
    inline void setQGraphicsSvgItem_Type_IsBase(bool value) const { qgraphicssvgitem_type_isbase = value; }
    inline void setQGraphicsSvgItem_Event_IsBase(bool value) const { qgraphicssvgitem_event_isbase = value; }
    inline void setQGraphicsSvgItem_EventFilter_IsBase(bool value) const { qgraphicssvgitem_eventfilter_isbase = value; }
    inline void setQGraphicsSvgItem_TimerEvent_IsBase(bool value) const { qgraphicssvgitem_timerevent_isbase = value; }
    inline void setQGraphicsSvgItem_ChildEvent_IsBase(bool value) const { qgraphicssvgitem_childevent_isbase = value; }
    inline void setQGraphicsSvgItem_CustomEvent_IsBase(bool value) const { qgraphicssvgitem_customevent_isbase = value; }
    inline void setQGraphicsSvgItem_ConnectNotify_IsBase(bool value) const { qgraphicssvgitem_connectnotify_isbase = value; }
    inline void setQGraphicsSvgItem_DisconnectNotify_IsBase(bool value) const { qgraphicssvgitem_disconnectnotify_isbase = value; }
    inline void setQGraphicsSvgItem_Advance_IsBase(bool value) const { qgraphicssvgitem_advance_isbase = value; }
    inline void setQGraphicsSvgItem_Shape_IsBase(bool value) const { qgraphicssvgitem_shape_isbase = value; }
    inline void setQGraphicsSvgItem_Contains_IsBase(bool value) const { qgraphicssvgitem_contains_isbase = value; }
    inline void setQGraphicsSvgItem_CollidesWithItem_IsBase(bool value) const { qgraphicssvgitem_collideswithitem_isbase = value; }
    inline void setQGraphicsSvgItem_CollidesWithPath_IsBase(bool value) const { qgraphicssvgitem_collideswithpath_isbase = value; }
    inline void setQGraphicsSvgItem_IsObscuredBy_IsBase(bool value) const { qgraphicssvgitem_isobscuredby_isbase = value; }
    inline void setQGraphicsSvgItem_OpaqueArea_IsBase(bool value) const { qgraphicssvgitem_opaquearea_isbase = value; }
    inline void setQGraphicsSvgItem_SceneEventFilter_IsBase(bool value) const { qgraphicssvgitem_sceneeventfilter_isbase = value; }
    inline void setQGraphicsSvgItem_SceneEvent_IsBase(bool value) const { qgraphicssvgitem_sceneevent_isbase = value; }
    inline void setQGraphicsSvgItem_ContextMenuEvent_IsBase(bool value) const { qgraphicssvgitem_contextmenuevent_isbase = value; }
    inline void setQGraphicsSvgItem_DragEnterEvent_IsBase(bool value) const { qgraphicssvgitem_dragenterevent_isbase = value; }
    inline void setQGraphicsSvgItem_DragLeaveEvent_IsBase(bool value) const { qgraphicssvgitem_dragleaveevent_isbase = value; }
    inline void setQGraphicsSvgItem_DragMoveEvent_IsBase(bool value) const { qgraphicssvgitem_dragmoveevent_isbase = value; }
    inline void setQGraphicsSvgItem_DropEvent_IsBase(bool value) const { qgraphicssvgitem_dropevent_isbase = value; }
    inline void setQGraphicsSvgItem_FocusInEvent_IsBase(bool value) const { qgraphicssvgitem_focusinevent_isbase = value; }
    inline void setQGraphicsSvgItem_FocusOutEvent_IsBase(bool value) const { qgraphicssvgitem_focusoutevent_isbase = value; }
    inline void setQGraphicsSvgItem_HoverEnterEvent_IsBase(bool value) const { qgraphicssvgitem_hoverenterevent_isbase = value; }
    inline void setQGraphicsSvgItem_HoverMoveEvent_IsBase(bool value) const { qgraphicssvgitem_hovermoveevent_isbase = value; }
    inline void setQGraphicsSvgItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicssvgitem_hoverleaveevent_isbase = value; }
    inline void setQGraphicsSvgItem_KeyPressEvent_IsBase(bool value) const { qgraphicssvgitem_keypressevent_isbase = value; }
    inline void setQGraphicsSvgItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicssvgitem_keyreleaseevent_isbase = value; }
    inline void setQGraphicsSvgItem_MousePressEvent_IsBase(bool value) const { qgraphicssvgitem_mousepressevent_isbase = value; }
    inline void setQGraphicsSvgItem_MouseMoveEvent_IsBase(bool value) const { qgraphicssvgitem_mousemoveevent_isbase = value; }
    inline void setQGraphicsSvgItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicssvgitem_mousereleaseevent_isbase = value; }
    inline void setQGraphicsSvgItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicssvgitem_mousedoubleclickevent_isbase = value; }
    inline void setQGraphicsSvgItem_WheelEvent_IsBase(bool value) const { qgraphicssvgitem_wheelevent_isbase = value; }
    inline void setQGraphicsSvgItem_InputMethodEvent_IsBase(bool value) const { qgraphicssvgitem_inputmethodevent_isbase = value; }
    inline void setQGraphicsSvgItem_InputMethodQuery_IsBase(bool value) const { qgraphicssvgitem_inputmethodquery_isbase = value; }
    inline void setQGraphicsSvgItem_ItemChange_IsBase(bool value) const { qgraphicssvgitem_itemchange_isbase = value; }
    inline void setQGraphicsSvgItem_SupportsExtension_IsBase(bool value) const { qgraphicssvgitem_supportsextension_isbase = value; }
    inline void setQGraphicsSvgItem_SetExtension_IsBase(bool value) const { qgraphicssvgitem_setextension_isbase = value; }
    inline void setQGraphicsSvgItem_Extension_IsBase(bool value) const { qgraphicssvgitem_extension_isbase = value; }
    inline void setQGraphicsSvgItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicssvgitem_updatemicrofocus_isbase = value; }
    inline void setQGraphicsSvgItem_Sender_IsBase(bool value) const { qgraphicssvgitem_sender_isbase = value; }
    inline void setQGraphicsSvgItem_SenderSignalIndex_IsBase(bool value) const { qgraphicssvgitem_sendersignalindex_isbase = value; }
    inline void setQGraphicsSvgItem_Receivers_IsBase(bool value) const { qgraphicssvgitem_receivers_isbase = value; }
    inline void setQGraphicsSvgItem_IsSignalConnected_IsBase(bool value) const { qgraphicssvgitem_issignalconnected_isbase = value; }
    inline void setQGraphicsSvgItem_AddToIndex_IsBase(bool value) const { qgraphicssvgitem_addtoindex_isbase = value; }
    inline void setQGraphicsSvgItem_RemoveFromIndex_IsBase(bool value) const { qgraphicssvgitem_removefromindex_isbase = value; }
    inline void setQGraphicsSvgItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicssvgitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicssvgitem_metacall_isbase) {
            qgraphicssvgitem_metacall_isbase = false;
            return QGraphicsSvgItem::qt_metacall(param1, param2, param3);
        } else if (qgraphicssvgitem_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qgraphicssvgitem_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsSvgItem::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicssvgitem_boundingrect_isbase) {
            qgraphicssvgitem_boundingrect_isbase = false;
            return QGraphicsSvgItem::boundingRect();
        } else if (qgraphicssvgitem_boundingrect_callback != nullptr) {
            QRectF* callback_ret = qgraphicssvgitem_boundingrect_callback();
            return *callback_ret;
        } else {
            return QGraphicsSvgItem::boundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicssvgitem_paint_isbase) {
            qgraphicssvgitem_paint_isbase = false;
            QGraphicsSvgItem::paint(painter, option, widget);
        } else if (qgraphicssvgitem_paint_callback != nullptr) {
            QPainter* cbval1 = painter;
            QStyleOptionGraphicsItem* cbval2 = (QStyleOptionGraphicsItem*)option;
            QWidget* cbval3 = widget;

            qgraphicssvgitem_paint_callback(this, cbval1, cbval2, cbval3);
        } else {
            QGraphicsSvgItem::paint(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicssvgitem_type_isbase) {
            qgraphicssvgitem_type_isbase = false;
            return QGraphicsSvgItem::type();
        } else if (qgraphicssvgitem_type_callback != nullptr) {
            int callback_ret = qgraphicssvgitem_type_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsSvgItem::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicssvgitem_event_isbase) {
            qgraphicssvgitem_event_isbase = false;
            return QGraphicsSvgItem::event(ev);
        } else if (qgraphicssvgitem_event_callback != nullptr) {
            QEvent* cbval1 = ev;

            bool callback_ret = qgraphicssvgitem_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::event(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicssvgitem_eventfilter_isbase) {
            qgraphicssvgitem_eventfilter_isbase = false;
            return QGraphicsSvgItem::eventFilter(watched, event);
        } else if (qgraphicssvgitem_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicssvgitem_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicssvgitem_timerevent_isbase) {
            qgraphicssvgitem_timerevent_isbase = false;
            QGraphicsSvgItem::timerEvent(event);
        } else if (qgraphicssvgitem_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qgraphicssvgitem_timerevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicssvgitem_childevent_isbase) {
            qgraphicssvgitem_childevent_isbase = false;
            QGraphicsSvgItem::childEvent(event);
        } else if (qgraphicssvgitem_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qgraphicssvgitem_childevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicssvgitem_customevent_isbase) {
            qgraphicssvgitem_customevent_isbase = false;
            QGraphicsSvgItem::customEvent(event);
        } else if (qgraphicssvgitem_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qgraphicssvgitem_customevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicssvgitem_connectnotify_isbase) {
            qgraphicssvgitem_connectnotify_isbase = false;
            QGraphicsSvgItem::connectNotify(signal);
        } else if (qgraphicssvgitem_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicssvgitem_connectnotify_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicssvgitem_disconnectnotify_isbase) {
            qgraphicssvgitem_disconnectnotify_isbase = false;
            QGraphicsSvgItem::disconnectNotify(signal);
        } else if (qgraphicssvgitem_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qgraphicssvgitem_disconnectnotify_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicssvgitem_advance_isbase) {
            qgraphicssvgitem_advance_isbase = false;
            QGraphicsSvgItem::advance(phase);
        } else if (qgraphicssvgitem_advance_callback != nullptr) {
            int cbval1 = phase;

            qgraphicssvgitem_advance_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::advance(phase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicssvgitem_shape_isbase) {
            qgraphicssvgitem_shape_isbase = false;
            return QGraphicsSvgItem::shape();
        } else if (qgraphicssvgitem_shape_callback != nullptr) {
            QPainterPath* callback_ret = qgraphicssvgitem_shape_callback();
            return *callback_ret;
        } else {
            return QGraphicsSvgItem::shape();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicssvgitem_contains_isbase) {
            qgraphicssvgitem_contains_isbase = false;
            return QGraphicsSvgItem::contains(point);
        } else if (qgraphicssvgitem_contains_callback != nullptr) {
            const QPointF& point_ret = point;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&point_ret);

            bool callback_ret = qgraphicssvgitem_contains_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::contains(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssvgitem_collideswithitem_isbase) {
            qgraphicssvgitem_collideswithitem_isbase = false;
            return QGraphicsSvgItem::collidesWithItem(other, mode);
        } else if (qgraphicssvgitem_collideswithitem_callback != nullptr) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)other;
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = qgraphicssvgitem_collideswithitem_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::collidesWithItem(other, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicssvgitem_collideswithpath_isbase) {
            qgraphicssvgitem_collideswithpath_isbase = false;
            return QGraphicsSvgItem::collidesWithPath(path, mode);
        } else if (qgraphicssvgitem_collideswithpath_callback != nullptr) {
            const QPainterPath& path_ret = path;
            // Cast returned reference into pointer
            QPainterPath* cbval1 = const_cast<QPainterPath*>(&path_ret);
            int cbval2 = static_cast<int>(mode);

            bool callback_ret = qgraphicssvgitem_collideswithpath_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::collidesWithPath(path, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicssvgitem_isobscuredby_isbase) {
            qgraphicssvgitem_isobscuredby_isbase = false;
            return QGraphicsSvgItem::isObscuredBy(item);
        } else if (qgraphicssvgitem_isobscuredby_callback != nullptr) {
            QGraphicsItem* cbval1 = (QGraphicsItem*)item;

            bool callback_ret = qgraphicssvgitem_isobscuredby_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::isObscuredBy(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicssvgitem_opaquearea_isbase) {
            qgraphicssvgitem_opaquearea_isbase = false;
            return QGraphicsSvgItem::opaqueArea();
        } else if (qgraphicssvgitem_opaquearea_callback != nullptr) {
            QPainterPath* callback_ret = qgraphicssvgitem_opaquearea_callback();
            return *callback_ret;
        } else {
            return QGraphicsSvgItem::opaqueArea();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicssvgitem_sceneeventfilter_isbase) {
            qgraphicssvgitem_sceneeventfilter_isbase = false;
            return QGraphicsSvgItem::sceneEventFilter(watched, event);
        } else if (qgraphicssvgitem_sceneeventfilter_callback != nullptr) {
            QGraphicsItem* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qgraphicssvgitem_sceneeventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::sceneEventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicssvgitem_sceneevent_isbase) {
            qgraphicssvgitem_sceneevent_isbase = false;
            return QGraphicsSvgItem::sceneEvent(event);
        } else if (qgraphicssvgitem_sceneevent_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qgraphicssvgitem_sceneevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::sceneEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicssvgitem_contextmenuevent_isbase) {
            qgraphicssvgitem_contextmenuevent_isbase = false;
            QGraphicsSvgItem::contextMenuEvent(event);
        } else if (qgraphicssvgitem_contextmenuevent_callback != nullptr) {
            QGraphicsSceneContextMenuEvent* cbval1 = event;

            qgraphicssvgitem_contextmenuevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dragenterevent_isbase) {
            qgraphicssvgitem_dragenterevent_isbase = false;
            QGraphicsSvgItem::dragEnterEvent(event);
        } else if (qgraphicssvgitem_dragenterevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicssvgitem_dragenterevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dragleaveevent_isbase) {
            qgraphicssvgitem_dragleaveevent_isbase = false;
            QGraphicsSvgItem::dragLeaveEvent(event);
        } else if (qgraphicssvgitem_dragleaveevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicssvgitem_dragleaveevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dragmoveevent_isbase) {
            qgraphicssvgitem_dragmoveevent_isbase = false;
            QGraphicsSvgItem::dragMoveEvent(event);
        } else if (qgraphicssvgitem_dragmoveevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicssvgitem_dragmoveevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicssvgitem_dropevent_isbase) {
            qgraphicssvgitem_dropevent_isbase = false;
            QGraphicsSvgItem::dropEvent(event);
        } else if (qgraphicssvgitem_dropevent_callback != nullptr) {
            QGraphicsSceneDragDropEvent* cbval1 = event;

            qgraphicssvgitem_dropevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicssvgitem_focusinevent_isbase) {
            qgraphicssvgitem_focusinevent_isbase = false;
            QGraphicsSvgItem::focusInEvent(event);
        } else if (qgraphicssvgitem_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qgraphicssvgitem_focusinevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicssvgitem_focusoutevent_isbase) {
            qgraphicssvgitem_focusoutevent_isbase = false;
            QGraphicsSvgItem::focusOutEvent(event);
        } else if (qgraphicssvgitem_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qgraphicssvgitem_focusoutevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssvgitem_hoverenterevent_isbase) {
            qgraphicssvgitem_hoverenterevent_isbase = false;
            QGraphicsSvgItem::hoverEnterEvent(event);
        } else if (qgraphicssvgitem_hoverenterevent_callback != nullptr) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            qgraphicssvgitem_hoverenterevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::hoverEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssvgitem_hovermoveevent_isbase) {
            qgraphicssvgitem_hovermoveevent_isbase = false;
            QGraphicsSvgItem::hoverMoveEvent(event);
        } else if (qgraphicssvgitem_hovermoveevent_callback != nullptr) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            qgraphicssvgitem_hovermoveevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::hoverMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicssvgitem_hoverleaveevent_isbase) {
            qgraphicssvgitem_hoverleaveevent_isbase = false;
            QGraphicsSvgItem::hoverLeaveEvent(event);
        } else if (qgraphicssvgitem_hoverleaveevent_callback != nullptr) {
            QGraphicsSceneHoverEvent* cbval1 = event;

            qgraphicssvgitem_hoverleaveevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::hoverLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicssvgitem_keypressevent_isbase) {
            qgraphicssvgitem_keypressevent_isbase = false;
            QGraphicsSvgItem::keyPressEvent(event);
        } else if (qgraphicssvgitem_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qgraphicssvgitem_keypressevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicssvgitem_keyreleaseevent_isbase) {
            qgraphicssvgitem_keyreleaseevent_isbase = false;
            QGraphicsSvgItem::keyReleaseEvent(event);
        } else if (qgraphicssvgitem_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qgraphicssvgitem_keyreleaseevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousepressevent_isbase) {
            qgraphicssvgitem_mousepressevent_isbase = false;
            QGraphicsSvgItem::mousePressEvent(event);
        } else if (qgraphicssvgitem_mousepressevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicssvgitem_mousepressevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousemoveevent_isbase) {
            qgraphicssvgitem_mousemoveevent_isbase = false;
            QGraphicsSvgItem::mouseMoveEvent(event);
        } else if (qgraphicssvgitem_mousemoveevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicssvgitem_mousemoveevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousereleaseevent_isbase) {
            qgraphicssvgitem_mousereleaseevent_isbase = false;
            QGraphicsSvgItem::mouseReleaseEvent(event);
        } else if (qgraphicssvgitem_mousereleaseevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicssvgitem_mousereleaseevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicssvgitem_mousedoubleclickevent_isbase) {
            qgraphicssvgitem_mousedoubleclickevent_isbase = false;
            QGraphicsSvgItem::mouseDoubleClickEvent(event);
        } else if (qgraphicssvgitem_mousedoubleclickevent_callback != nullptr) {
            QGraphicsSceneMouseEvent* cbval1 = event;

            qgraphicssvgitem_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicssvgitem_wheelevent_isbase) {
            qgraphicssvgitem_wheelevent_isbase = false;
            QGraphicsSvgItem::wheelEvent(event);
        } else if (qgraphicssvgitem_wheelevent_callback != nullptr) {
            QGraphicsSceneWheelEvent* cbval1 = event;

            qgraphicssvgitem_wheelevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicssvgitem_inputmethodevent_isbase) {
            qgraphicssvgitem_inputmethodevent_isbase = false;
            QGraphicsSvgItem::inputMethodEvent(event);
        } else if (qgraphicssvgitem_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = event;

            qgraphicssvgitem_inputmethodevent_callback(this, cbval1);
        } else {
            QGraphicsSvgItem::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicssvgitem_inputmethodquery_isbase) {
            qgraphicssvgitem_inputmethodquery_isbase = false;
            return QGraphicsSvgItem::inputMethodQuery(query);
        } else if (qgraphicssvgitem_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(query);

            QVariant* callback_ret = qgraphicssvgitem_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QGraphicsSvgItem::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicssvgitem_itemchange_isbase) {
            qgraphicssvgitem_itemchange_isbase = false;
            return QGraphicsSvgItem::itemChange(change, value);
        } else if (qgraphicssvgitem_itemchange_callback != nullptr) {
            int cbval1 = static_cast<int>(change);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            QVariant* callback_ret = qgraphicssvgitem_itemchange_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QGraphicsSvgItem::itemChange(change, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicssvgitem_supportsextension_isbase) {
            qgraphicssvgitem_supportsextension_isbase = false;
            return QGraphicsSvgItem::supportsExtension(extension);
        } else if (qgraphicssvgitem_supportsextension_callback != nullptr) {
            int cbval1 = static_cast<int>(extension);

            bool callback_ret = qgraphicssvgitem_supportsextension_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::supportsExtension(extension);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicssvgitem_setextension_isbase) {
            qgraphicssvgitem_setextension_isbase = false;
            QGraphicsSvgItem::setExtension(extension, variant);
        } else if (qgraphicssvgitem_setextension_callback != nullptr) {
            int cbval1 = static_cast<int>(extension);
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&variant_ret);

            qgraphicssvgitem_setextension_callback(this, cbval1, cbval2);
        } else {
            QGraphicsSvgItem::setExtension(extension, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicssvgitem_extension_isbase) {
            qgraphicssvgitem_extension_isbase = false;
            return QGraphicsSvgItem::extension(variant);
        } else if (qgraphicssvgitem_extension_callback != nullptr) {
            const QVariant& variant_ret = variant;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&variant_ret);

            QVariant* callback_ret = qgraphicssvgitem_extension_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QGraphicsSvgItem::extension(variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicssvgitem_updatemicrofocus_isbase) {
            qgraphicssvgitem_updatemicrofocus_isbase = false;
            QGraphicsSvgItem::updateMicroFocus();
        } else if (qgraphicssvgitem_updatemicrofocus_callback != nullptr) {
            qgraphicssvgitem_updatemicrofocus_callback();
        } else {
            QGraphicsSvgItem::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicssvgitem_sender_isbase) {
            qgraphicssvgitem_sender_isbase = false;
            return QGraphicsSvgItem::sender();
        } else if (qgraphicssvgitem_sender_callback != nullptr) {
            QObject* callback_ret = qgraphicssvgitem_sender_callback();
            return callback_ret;
        } else {
            return QGraphicsSvgItem::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicssvgitem_sendersignalindex_isbase) {
            qgraphicssvgitem_sendersignalindex_isbase = false;
            return QGraphicsSvgItem::senderSignalIndex();
        } else if (qgraphicssvgitem_sendersignalindex_callback != nullptr) {
            int callback_ret = qgraphicssvgitem_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsSvgItem::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicssvgitem_receivers_isbase) {
            qgraphicssvgitem_receivers_isbase = false;
            return QGraphicsSvgItem::receivers(signal);
        } else if (qgraphicssvgitem_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qgraphicssvgitem_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QGraphicsSvgItem::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicssvgitem_issignalconnected_isbase) {
            qgraphicssvgitem_issignalconnected_isbase = false;
            return QGraphicsSvgItem::isSignalConnected(signal);
        } else if (qgraphicssvgitem_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qgraphicssvgitem_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QGraphicsSvgItem::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicssvgitem_addtoindex_isbase) {
            qgraphicssvgitem_addtoindex_isbase = false;
            QGraphicsSvgItem::addToIndex();
        } else if (qgraphicssvgitem_addtoindex_callback != nullptr) {
            qgraphicssvgitem_addtoindex_callback();
        } else {
            QGraphicsSvgItem::addToIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicssvgitem_removefromindex_isbase) {
            qgraphicssvgitem_removefromindex_isbase = false;
            QGraphicsSvgItem::removeFromIndex();
        } else if (qgraphicssvgitem_removefromindex_callback != nullptr) {
            qgraphicssvgitem_removefromindex_callback();
        } else {
            QGraphicsSvgItem::removeFromIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicssvgitem_preparegeometrychange_isbase) {
            qgraphicssvgitem_preparegeometrychange_isbase = false;
            QGraphicsSvgItem::prepareGeometryChange();
        } else if (qgraphicssvgitem_preparegeometrychange_callback != nullptr) {
            qgraphicssvgitem_preparegeometrychange_callback();
        } else {
            QGraphicsSvgItem::prepareGeometryChange();
        }
    }

    // Friend functions
    friend bool QGraphicsSvgItem_Event(QGraphicsSvgItem* self, QEvent* ev);
    friend bool QGraphicsSvgItem_QBaseEvent(QGraphicsSvgItem* self, QEvent* ev);
    friend void QGraphicsSvgItem_TimerEvent(QGraphicsSvgItem* self, QTimerEvent* event);
    friend void QGraphicsSvgItem_QBaseTimerEvent(QGraphicsSvgItem* self, QTimerEvent* event);
    friend void QGraphicsSvgItem_ChildEvent(QGraphicsSvgItem* self, QChildEvent* event);
    friend void QGraphicsSvgItem_QBaseChildEvent(QGraphicsSvgItem* self, QChildEvent* event);
    friend void QGraphicsSvgItem_CustomEvent(QGraphicsSvgItem* self, QEvent* event);
    friend void QGraphicsSvgItem_QBaseCustomEvent(QGraphicsSvgItem* self, QEvent* event);
    friend void QGraphicsSvgItem_ConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend void QGraphicsSvgItem_QBaseConnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend void QGraphicsSvgItem_DisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend void QGraphicsSvgItem_QBaseDisconnectNotify(QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend bool QGraphicsSvgItem_SceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsSvgItem_QBaseSceneEventFilter(QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event);
    friend bool QGraphicsSvgItem_SceneEvent(QGraphicsSvgItem* self, QEvent* event);
    friend bool QGraphicsSvgItem_QBaseSceneEvent(QGraphicsSvgItem* self, QEvent* event);
    friend void QGraphicsSvgItem_ContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsSvgItem_QBaseContextMenuEvent(QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event);
    friend void QGraphicsSvgItem_DragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_QBaseDragEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_DragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_QBaseDragLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_DragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_QBaseDragMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_DropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_QBaseDropEvent(QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event);
    friend void QGraphicsSvgItem_FocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event);
    friend void QGraphicsSvgItem_QBaseFocusInEvent(QGraphicsSvgItem* self, QFocusEvent* event);
    friend void QGraphicsSvgItem_FocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event);
    friend void QGraphicsSvgItem_QBaseFocusOutEvent(QGraphicsSvgItem* self, QFocusEvent* event);
    friend void QGraphicsSvgItem_HoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_QBaseHoverEnterEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_HoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_QBaseHoverMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_HoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_QBaseHoverLeaveEvent(QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event);
    friend void QGraphicsSvgItem_KeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event);
    friend void QGraphicsSvgItem_QBaseKeyPressEvent(QGraphicsSvgItem* self, QKeyEvent* event);
    friend void QGraphicsSvgItem_KeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event);
    friend void QGraphicsSvgItem_QBaseKeyReleaseEvent(QGraphicsSvgItem* self, QKeyEvent* event);
    friend void QGraphicsSvgItem_MousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_QBaseMousePressEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_MouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_QBaseMouseMoveEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_MouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_QBaseMouseReleaseEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_MouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_QBaseMouseDoubleClickEvent(QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event);
    friend void QGraphicsSvgItem_WheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsSvgItem_QBaseWheelEvent(QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event);
    friend void QGraphicsSvgItem_InputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event);
    friend void QGraphicsSvgItem_QBaseInputMethodEvent(QGraphicsSvgItem* self, QInputMethodEvent* event);
    friend QVariant* QGraphicsSvgItem_InputMethodQuery(const QGraphicsSvgItem* self, int query);
    friend QVariant* QGraphicsSvgItem_QBaseInputMethodQuery(const QGraphicsSvgItem* self, int query);
    friend QVariant* QGraphicsSvgItem_ItemChange(QGraphicsSvgItem* self, int change, const QVariant* value);
    friend QVariant* QGraphicsSvgItem_QBaseItemChange(QGraphicsSvgItem* self, int change, const QVariant* value);
    friend bool QGraphicsSvgItem_SupportsExtension(const QGraphicsSvgItem* self, int extension);
    friend bool QGraphicsSvgItem_QBaseSupportsExtension(const QGraphicsSvgItem* self, int extension);
    friend void QGraphicsSvgItem_SetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant);
    friend void QGraphicsSvgItem_QBaseSetExtension(QGraphicsSvgItem* self, int extension, const QVariant* variant);
    friend QVariant* QGraphicsSvgItem_Extension(const QGraphicsSvgItem* self, const QVariant* variant);
    friend QVariant* QGraphicsSvgItem_QBaseExtension(const QGraphicsSvgItem* self, const QVariant* variant);
    friend void QGraphicsSvgItem_UpdateMicroFocus(QGraphicsSvgItem* self);
    friend void QGraphicsSvgItem_QBaseUpdateMicroFocus(QGraphicsSvgItem* self);
    friend QObject* QGraphicsSvgItem_Sender(const QGraphicsSvgItem* self);
    friend QObject* QGraphicsSvgItem_QBaseSender(const QGraphicsSvgItem* self);
    friend int QGraphicsSvgItem_SenderSignalIndex(const QGraphicsSvgItem* self);
    friend int QGraphicsSvgItem_QBaseSenderSignalIndex(const QGraphicsSvgItem* self);
    friend int QGraphicsSvgItem_Receivers(const QGraphicsSvgItem* self, const char* signal);
    friend int QGraphicsSvgItem_QBaseReceivers(const QGraphicsSvgItem* self, const char* signal);
    friend bool QGraphicsSvgItem_IsSignalConnected(const QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend bool QGraphicsSvgItem_QBaseIsSignalConnected(const QGraphicsSvgItem* self, const QMetaMethod* signal);
    friend void QGraphicsSvgItem_AddToIndex(QGraphicsSvgItem* self);
    friend void QGraphicsSvgItem_QBaseAddToIndex(QGraphicsSvgItem* self);
    friend void QGraphicsSvgItem_RemoveFromIndex(QGraphicsSvgItem* self);
    friend void QGraphicsSvgItem_QBaseRemoveFromIndex(QGraphicsSvgItem* self);
    friend void QGraphicsSvgItem_PrepareGeometryChange(QGraphicsSvgItem* self);
    friend void QGraphicsSvgItem_QBasePrepareGeometryChange(QGraphicsSvgItem* self);
};

#endif
