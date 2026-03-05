#pragma once
#ifndef SRCC_LIBVIRTUALQPLAINTEXTEDIT_H
#define SRCC_LIBVIRTUALQPLAINTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPlainTextEdit so that we can call protected methods
class VirtualQPlainTextEdit final : public QPlainTextEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlainTextEdit = true;

    // Virtual class public types (including callbacks)
    using QPlainTextEdit_MetaObject_Callback = QMetaObject* (*)();
    using QPlainTextEdit_Metacast_Callback = void* (*)(QPlainTextEdit*, const char*);
    using QPlainTextEdit_Metacall_Callback = int (*)(QPlainTextEdit*, int, int, void**);
    using QPlainTextEdit_LoadResource_Callback = QVariant* (*)(QPlainTextEdit*, int, QUrl*);
    using QPlainTextEdit_InputMethodQuery_Callback = QVariant* (*)(const QPlainTextEdit*, int);
    using QPlainTextEdit_Event_Callback = bool (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_TimerEvent_Callback = void (*)(QPlainTextEdit*, QTimerEvent*);
    using QPlainTextEdit_KeyPressEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
    using QPlainTextEdit_KeyReleaseEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
    using QPlainTextEdit_ResizeEvent_Callback = void (*)(QPlainTextEdit*, QResizeEvent*);
    using QPlainTextEdit_PaintEvent_Callback = void (*)(QPlainTextEdit*, QPaintEvent*);
    using QPlainTextEdit_MousePressEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseMoveEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseReleaseEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseDoubleClickEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_FocusNextPrevChild_Callback = bool (*)(QPlainTextEdit*, bool);
    using QPlainTextEdit_ContextMenuEvent_Callback = void (*)(QPlainTextEdit*, QContextMenuEvent*);
    using QPlainTextEdit_DragEnterEvent_Callback = void (*)(QPlainTextEdit*, QDragEnterEvent*);
    using QPlainTextEdit_DragLeaveEvent_Callback = void (*)(QPlainTextEdit*, QDragLeaveEvent*);
    using QPlainTextEdit_DragMoveEvent_Callback = void (*)(QPlainTextEdit*, QDragMoveEvent*);
    using QPlainTextEdit_DropEvent_Callback = void (*)(QPlainTextEdit*, QDropEvent*);
    using QPlainTextEdit_FocusInEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
    using QPlainTextEdit_FocusOutEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
    using QPlainTextEdit_ShowEvent_Callback = void (*)(QPlainTextEdit*, QShowEvent*);
    using QPlainTextEdit_ChangeEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_WheelEvent_Callback = void (*)(QPlainTextEdit*, QWheelEvent*);
    using QPlainTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using QPlainTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QPlainTextEdit*, QMimeData*);
    using QPlainTextEdit_InsertFromMimeData_Callback = void (*)(QPlainTextEdit*, QMimeData*);
    using QPlainTextEdit_InputMethodEvent_Callback = void (*)(QPlainTextEdit*, QInputMethodEvent*);
    using QPlainTextEdit_ScrollContentsBy_Callback = void (*)(QPlainTextEdit*, int, int);
    using QPlainTextEdit_DoSetTextCursor_Callback = void (*)(QPlainTextEdit*, QTextCursor*);
    using QPlainTextEdit_MinimumSizeHint_Callback = QSize* (*)();
    using QPlainTextEdit_SizeHint_Callback = QSize* (*)();
    using QPlainTextEdit_SetupViewport_Callback = void (*)(QPlainTextEdit*, QWidget*);
    using QPlainTextEdit_EventFilter_Callback = bool (*)(QPlainTextEdit*, QObject*, QEvent*);
    using QPlainTextEdit_ViewportEvent_Callback = bool (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_ViewportSizeHint_Callback = QSize* (*)();
    using QPlainTextEdit_InitStyleOption_Callback = void (*)(const QPlainTextEdit*, QStyleOptionFrame*);
    using QPlainTextEdit_DevType_Callback = int (*)();
    using QPlainTextEdit_SetVisible_Callback = void (*)(QPlainTextEdit*, bool);
    using QPlainTextEdit_HeightForWidth_Callback = int (*)(const QPlainTextEdit*, int);
    using QPlainTextEdit_HasHeightForWidth_Callback = bool (*)();
    using QPlainTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QPlainTextEdit_EnterEvent_Callback = void (*)(QPlainTextEdit*, QEnterEvent*);
    using QPlainTextEdit_LeaveEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_MoveEvent_Callback = void (*)(QPlainTextEdit*, QMoveEvent*);
    using QPlainTextEdit_CloseEvent_Callback = void (*)(QPlainTextEdit*, QCloseEvent*);
    using QPlainTextEdit_TabletEvent_Callback = void (*)(QPlainTextEdit*, QTabletEvent*);
    using QPlainTextEdit_ActionEvent_Callback = void (*)(QPlainTextEdit*, QActionEvent*);
    using QPlainTextEdit_HideEvent_Callback = void (*)(QPlainTextEdit*, QHideEvent*);
    using QPlainTextEdit_NativeEvent_Callback = bool (*)(QPlainTextEdit*, libqt_string, void*, intptr_t*);
    using QPlainTextEdit_Metric_Callback = int (*)(const QPlainTextEdit*, int);
    using QPlainTextEdit_InitPainter_Callback = void (*)(const QPlainTextEdit*, QPainter*);
    using QPlainTextEdit_Redirected_Callback = QPaintDevice* (*)(const QPlainTextEdit*, QPoint*);
    using QPlainTextEdit_SharedPainter_Callback = QPainter* (*)();
    using QPlainTextEdit_ChildEvent_Callback = void (*)(QPlainTextEdit*, QChildEvent*);
    using QPlainTextEdit_CustomEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_ConnectNotify_Callback = void (*)(QPlainTextEdit*, QMetaMethod*);
    using QPlainTextEdit_DisconnectNotify_Callback = void (*)(QPlainTextEdit*, QMetaMethod*);
    using QPlainTextEdit_FirstVisibleBlock_Callback = QTextBlock* (*)();
    using QPlainTextEdit_ContentOffset_Callback = QPointF* (*)();
    using QPlainTextEdit_BlockBoundingRect_Callback = QRectF* (*)(const QPlainTextEdit*, QTextBlock*);
    using QPlainTextEdit_BlockBoundingGeometry_Callback = QRectF* (*)(const QPlainTextEdit*, QTextBlock*);
    using QPlainTextEdit_GetPaintContext_Callback = QAbstractTextDocumentLayout__PaintContext* (*)();
    using QPlainTextEdit_ZoomInF_Callback = void (*)(QPlainTextEdit*, float);
    using QPlainTextEdit_SetViewportMargins_Callback = void (*)(QPlainTextEdit*, int, int, int, int);
    using QPlainTextEdit_ViewportMargins_Callback = QMargins* (*)();
    using QPlainTextEdit_DrawFrame_Callback = void (*)(QPlainTextEdit*, QPainter*);
    using QPlainTextEdit_UpdateMicroFocus_Callback = void (*)();
    using QPlainTextEdit_Create_Callback = void (*)();
    using QPlainTextEdit_Destroy_Callback = void (*)();
    using QPlainTextEdit_FocusNextChild_Callback = bool (*)();
    using QPlainTextEdit_FocusPreviousChild_Callback = bool (*)();
    using QPlainTextEdit_Sender_Callback = QObject* (*)();
    using QPlainTextEdit_SenderSignalIndex_Callback = int (*)();
    using QPlainTextEdit_Receivers_Callback = int (*)(const QPlainTextEdit*, const char*);
    using QPlainTextEdit_IsSignalConnected_Callback = bool (*)(const QPlainTextEdit*, QMetaMethod*);
    using QPlainTextEdit_GetDecodedMetricF_Callback = double (*)(const QPlainTextEdit*, int, int);

  protected:
    // Instance callback storage
    QPlainTextEdit_MetaObject_Callback qplaintextedit_metaobject_callback = nullptr;
    QPlainTextEdit_Metacast_Callback qplaintextedit_metacast_callback = nullptr;
    QPlainTextEdit_Metacall_Callback qplaintextedit_metacall_callback = nullptr;
    QPlainTextEdit_LoadResource_Callback qplaintextedit_loadresource_callback = nullptr;
    QPlainTextEdit_InputMethodQuery_Callback qplaintextedit_inputmethodquery_callback = nullptr;
    QPlainTextEdit_Event_Callback qplaintextedit_event_callback = nullptr;
    QPlainTextEdit_TimerEvent_Callback qplaintextedit_timerevent_callback = nullptr;
    QPlainTextEdit_KeyPressEvent_Callback qplaintextedit_keypressevent_callback = nullptr;
    QPlainTextEdit_KeyReleaseEvent_Callback qplaintextedit_keyreleaseevent_callback = nullptr;
    QPlainTextEdit_ResizeEvent_Callback qplaintextedit_resizeevent_callback = nullptr;
    QPlainTextEdit_PaintEvent_Callback qplaintextedit_paintevent_callback = nullptr;
    QPlainTextEdit_MousePressEvent_Callback qplaintextedit_mousepressevent_callback = nullptr;
    QPlainTextEdit_MouseMoveEvent_Callback qplaintextedit_mousemoveevent_callback = nullptr;
    QPlainTextEdit_MouseReleaseEvent_Callback qplaintextedit_mousereleaseevent_callback = nullptr;
    QPlainTextEdit_MouseDoubleClickEvent_Callback qplaintextedit_mousedoubleclickevent_callback = nullptr;
    QPlainTextEdit_FocusNextPrevChild_Callback qplaintextedit_focusnextprevchild_callback = nullptr;
    QPlainTextEdit_ContextMenuEvent_Callback qplaintextedit_contextmenuevent_callback = nullptr;
    QPlainTextEdit_DragEnterEvent_Callback qplaintextedit_dragenterevent_callback = nullptr;
    QPlainTextEdit_DragLeaveEvent_Callback qplaintextedit_dragleaveevent_callback = nullptr;
    QPlainTextEdit_DragMoveEvent_Callback qplaintextedit_dragmoveevent_callback = nullptr;
    QPlainTextEdit_DropEvent_Callback qplaintextedit_dropevent_callback = nullptr;
    QPlainTextEdit_FocusInEvent_Callback qplaintextedit_focusinevent_callback = nullptr;
    QPlainTextEdit_FocusOutEvent_Callback qplaintextedit_focusoutevent_callback = nullptr;
    QPlainTextEdit_ShowEvent_Callback qplaintextedit_showevent_callback = nullptr;
    QPlainTextEdit_ChangeEvent_Callback qplaintextedit_changeevent_callback = nullptr;
    QPlainTextEdit_WheelEvent_Callback qplaintextedit_wheelevent_callback = nullptr;
    QPlainTextEdit_CreateMimeDataFromSelection_Callback qplaintextedit_createmimedatafromselection_callback = nullptr;
    QPlainTextEdit_CanInsertFromMimeData_Callback qplaintextedit_caninsertfrommimedata_callback = nullptr;
    QPlainTextEdit_InsertFromMimeData_Callback qplaintextedit_insertfrommimedata_callback = nullptr;
    QPlainTextEdit_InputMethodEvent_Callback qplaintextedit_inputmethodevent_callback = nullptr;
    QPlainTextEdit_ScrollContentsBy_Callback qplaintextedit_scrollcontentsby_callback = nullptr;
    QPlainTextEdit_DoSetTextCursor_Callback qplaintextedit_dosettextcursor_callback = nullptr;
    QPlainTextEdit_MinimumSizeHint_Callback qplaintextedit_minimumsizehint_callback = nullptr;
    QPlainTextEdit_SizeHint_Callback qplaintextedit_sizehint_callback = nullptr;
    QPlainTextEdit_SetupViewport_Callback qplaintextedit_setupviewport_callback = nullptr;
    QPlainTextEdit_EventFilter_Callback qplaintextedit_eventfilter_callback = nullptr;
    QPlainTextEdit_ViewportEvent_Callback qplaintextedit_viewportevent_callback = nullptr;
    QPlainTextEdit_ViewportSizeHint_Callback qplaintextedit_viewportsizehint_callback = nullptr;
    QPlainTextEdit_InitStyleOption_Callback qplaintextedit_initstyleoption_callback = nullptr;
    QPlainTextEdit_DevType_Callback qplaintextedit_devtype_callback = nullptr;
    QPlainTextEdit_SetVisible_Callback qplaintextedit_setvisible_callback = nullptr;
    QPlainTextEdit_HeightForWidth_Callback qplaintextedit_heightforwidth_callback = nullptr;
    QPlainTextEdit_HasHeightForWidth_Callback qplaintextedit_hasheightforwidth_callback = nullptr;
    QPlainTextEdit_PaintEngine_Callback qplaintextedit_paintengine_callback = nullptr;
    QPlainTextEdit_EnterEvent_Callback qplaintextedit_enterevent_callback = nullptr;
    QPlainTextEdit_LeaveEvent_Callback qplaintextedit_leaveevent_callback = nullptr;
    QPlainTextEdit_MoveEvent_Callback qplaintextedit_moveevent_callback = nullptr;
    QPlainTextEdit_CloseEvent_Callback qplaintextedit_closeevent_callback = nullptr;
    QPlainTextEdit_TabletEvent_Callback qplaintextedit_tabletevent_callback = nullptr;
    QPlainTextEdit_ActionEvent_Callback qplaintextedit_actionevent_callback = nullptr;
    QPlainTextEdit_HideEvent_Callback qplaintextedit_hideevent_callback = nullptr;
    QPlainTextEdit_NativeEvent_Callback qplaintextedit_nativeevent_callback = nullptr;
    QPlainTextEdit_Metric_Callback qplaintextedit_metric_callback = nullptr;
    QPlainTextEdit_InitPainter_Callback qplaintextedit_initpainter_callback = nullptr;
    QPlainTextEdit_Redirected_Callback qplaintextedit_redirected_callback = nullptr;
    QPlainTextEdit_SharedPainter_Callback qplaintextedit_sharedpainter_callback = nullptr;
    QPlainTextEdit_ChildEvent_Callback qplaintextedit_childevent_callback = nullptr;
    QPlainTextEdit_CustomEvent_Callback qplaintextedit_customevent_callback = nullptr;
    QPlainTextEdit_ConnectNotify_Callback qplaintextedit_connectnotify_callback = nullptr;
    QPlainTextEdit_DisconnectNotify_Callback qplaintextedit_disconnectnotify_callback = nullptr;
    QPlainTextEdit_FirstVisibleBlock_Callback qplaintextedit_firstvisibleblock_callback = nullptr;
    QPlainTextEdit_ContentOffset_Callback qplaintextedit_contentoffset_callback = nullptr;
    QPlainTextEdit_BlockBoundingRect_Callback qplaintextedit_blockboundingrect_callback = nullptr;
    QPlainTextEdit_BlockBoundingGeometry_Callback qplaintextedit_blockboundinggeometry_callback = nullptr;
    QPlainTextEdit_GetPaintContext_Callback qplaintextedit_getpaintcontext_callback = nullptr;
    QPlainTextEdit_ZoomInF_Callback qplaintextedit_zoominf_callback = nullptr;
    QPlainTextEdit_SetViewportMargins_Callback qplaintextedit_setviewportmargins_callback = nullptr;
    QPlainTextEdit_ViewportMargins_Callback qplaintextedit_viewportmargins_callback = nullptr;
    QPlainTextEdit_DrawFrame_Callback qplaintextedit_drawframe_callback = nullptr;
    QPlainTextEdit_UpdateMicroFocus_Callback qplaintextedit_updatemicrofocus_callback = nullptr;
    QPlainTextEdit_Create_Callback qplaintextedit_create_callback = nullptr;
    QPlainTextEdit_Destroy_Callback qplaintextedit_destroy_callback = nullptr;
    QPlainTextEdit_FocusNextChild_Callback qplaintextedit_focusnextchild_callback = nullptr;
    QPlainTextEdit_FocusPreviousChild_Callback qplaintextedit_focuspreviouschild_callback = nullptr;
    QPlainTextEdit_Sender_Callback qplaintextedit_sender_callback = nullptr;
    QPlainTextEdit_SenderSignalIndex_Callback qplaintextedit_sendersignalindex_callback = nullptr;
    QPlainTextEdit_Receivers_Callback qplaintextedit_receivers_callback = nullptr;
    QPlainTextEdit_IsSignalConnected_Callback qplaintextedit_issignalconnected_callback = nullptr;
    QPlainTextEdit_GetDecodedMetricF_Callback qplaintextedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qplaintextedit_metaobject_isbase = false;
    mutable bool qplaintextedit_metacast_isbase = false;
    mutable bool qplaintextedit_metacall_isbase = false;
    mutable bool qplaintextedit_loadresource_isbase = false;
    mutable bool qplaintextedit_inputmethodquery_isbase = false;
    mutable bool qplaintextedit_event_isbase = false;
    mutable bool qplaintextedit_timerevent_isbase = false;
    mutable bool qplaintextedit_keypressevent_isbase = false;
    mutable bool qplaintextedit_keyreleaseevent_isbase = false;
    mutable bool qplaintextedit_resizeevent_isbase = false;
    mutable bool qplaintextedit_paintevent_isbase = false;
    mutable bool qplaintextedit_mousepressevent_isbase = false;
    mutable bool qplaintextedit_mousemoveevent_isbase = false;
    mutable bool qplaintextedit_mousereleaseevent_isbase = false;
    mutable bool qplaintextedit_mousedoubleclickevent_isbase = false;
    mutable bool qplaintextedit_focusnextprevchild_isbase = false;
    mutable bool qplaintextedit_contextmenuevent_isbase = false;
    mutable bool qplaintextedit_dragenterevent_isbase = false;
    mutable bool qplaintextedit_dragleaveevent_isbase = false;
    mutable bool qplaintextedit_dragmoveevent_isbase = false;
    mutable bool qplaintextedit_dropevent_isbase = false;
    mutable bool qplaintextedit_focusinevent_isbase = false;
    mutable bool qplaintextedit_focusoutevent_isbase = false;
    mutable bool qplaintextedit_showevent_isbase = false;
    mutable bool qplaintextedit_changeevent_isbase = false;
    mutable bool qplaintextedit_wheelevent_isbase = false;
    mutable bool qplaintextedit_createmimedatafromselection_isbase = false;
    mutable bool qplaintextedit_caninsertfrommimedata_isbase = false;
    mutable bool qplaintextedit_insertfrommimedata_isbase = false;
    mutable bool qplaintextedit_inputmethodevent_isbase = false;
    mutable bool qplaintextedit_scrollcontentsby_isbase = false;
    mutable bool qplaintextedit_dosettextcursor_isbase = false;
    mutable bool qplaintextedit_minimumsizehint_isbase = false;
    mutable bool qplaintextedit_sizehint_isbase = false;
    mutable bool qplaintextedit_setupviewport_isbase = false;
    mutable bool qplaintextedit_eventfilter_isbase = false;
    mutable bool qplaintextedit_viewportevent_isbase = false;
    mutable bool qplaintextedit_viewportsizehint_isbase = false;
    mutable bool qplaintextedit_initstyleoption_isbase = false;
    mutable bool qplaintextedit_devtype_isbase = false;
    mutable bool qplaintextedit_setvisible_isbase = false;
    mutable bool qplaintextedit_heightforwidth_isbase = false;
    mutable bool qplaintextedit_hasheightforwidth_isbase = false;
    mutable bool qplaintextedit_paintengine_isbase = false;
    mutable bool qplaintextedit_enterevent_isbase = false;
    mutable bool qplaintextedit_leaveevent_isbase = false;
    mutable bool qplaintextedit_moveevent_isbase = false;
    mutable bool qplaintextedit_closeevent_isbase = false;
    mutable bool qplaintextedit_tabletevent_isbase = false;
    mutable bool qplaintextedit_actionevent_isbase = false;
    mutable bool qplaintextedit_hideevent_isbase = false;
    mutable bool qplaintextedit_nativeevent_isbase = false;
    mutable bool qplaintextedit_metric_isbase = false;
    mutable bool qplaintextedit_initpainter_isbase = false;
    mutable bool qplaintextedit_redirected_isbase = false;
    mutable bool qplaintextedit_sharedpainter_isbase = false;
    mutable bool qplaintextedit_childevent_isbase = false;
    mutable bool qplaintextedit_customevent_isbase = false;
    mutable bool qplaintextedit_connectnotify_isbase = false;
    mutable bool qplaintextedit_disconnectnotify_isbase = false;
    mutable bool qplaintextedit_firstvisibleblock_isbase = false;
    mutable bool qplaintextedit_contentoffset_isbase = false;
    mutable bool qplaintextedit_blockboundingrect_isbase = false;
    mutable bool qplaintextedit_blockboundinggeometry_isbase = false;
    mutable bool qplaintextedit_getpaintcontext_isbase = false;
    mutable bool qplaintextedit_zoominf_isbase = false;
    mutable bool qplaintextedit_setviewportmargins_isbase = false;
    mutable bool qplaintextedit_viewportmargins_isbase = false;
    mutable bool qplaintextedit_drawframe_isbase = false;
    mutable bool qplaintextedit_updatemicrofocus_isbase = false;
    mutable bool qplaintextedit_create_isbase = false;
    mutable bool qplaintextedit_destroy_isbase = false;
    mutable bool qplaintextedit_focusnextchild_isbase = false;
    mutable bool qplaintextedit_focuspreviouschild_isbase = false;
    mutable bool qplaintextedit_sender_isbase = false;
    mutable bool qplaintextedit_sendersignalindex_isbase = false;
    mutable bool qplaintextedit_receivers_isbase = false;
    mutable bool qplaintextedit_issignalconnected_isbase = false;
    mutable bool qplaintextedit_getdecodedmetricf_isbase = false;

  public:
    VirtualQPlainTextEdit(QWidget* parent) : QPlainTextEdit(parent) {};
    VirtualQPlainTextEdit() : QPlainTextEdit() {};
    VirtualQPlainTextEdit(const QString& text) : QPlainTextEdit(text) {};
    VirtualQPlainTextEdit(const QString& text, QWidget* parent) : QPlainTextEdit(text, parent) {};

    // Callback setters
    inline void setQPlainTextEdit_MetaObject_Callback(QPlainTextEdit_MetaObject_Callback cb) { qplaintextedit_metaobject_callback = cb; }
    inline void setQPlainTextEdit_Metacast_Callback(QPlainTextEdit_Metacast_Callback cb) { qplaintextedit_metacast_callback = cb; }
    inline void setQPlainTextEdit_Metacall_Callback(QPlainTextEdit_Metacall_Callback cb) { qplaintextedit_metacall_callback = cb; }
    inline void setQPlainTextEdit_LoadResource_Callback(QPlainTextEdit_LoadResource_Callback cb) { qplaintextedit_loadresource_callback = cb; }
    inline void setQPlainTextEdit_InputMethodQuery_Callback(QPlainTextEdit_InputMethodQuery_Callback cb) { qplaintextedit_inputmethodquery_callback = cb; }
    inline void setQPlainTextEdit_Event_Callback(QPlainTextEdit_Event_Callback cb) { qplaintextedit_event_callback = cb; }
    inline void setQPlainTextEdit_TimerEvent_Callback(QPlainTextEdit_TimerEvent_Callback cb) { qplaintextedit_timerevent_callback = cb; }
    inline void setQPlainTextEdit_KeyPressEvent_Callback(QPlainTextEdit_KeyPressEvent_Callback cb) { qplaintextedit_keypressevent_callback = cb; }
    inline void setQPlainTextEdit_KeyReleaseEvent_Callback(QPlainTextEdit_KeyReleaseEvent_Callback cb) { qplaintextedit_keyreleaseevent_callback = cb; }
    inline void setQPlainTextEdit_ResizeEvent_Callback(QPlainTextEdit_ResizeEvent_Callback cb) { qplaintextedit_resizeevent_callback = cb; }
    inline void setQPlainTextEdit_PaintEvent_Callback(QPlainTextEdit_PaintEvent_Callback cb) { qplaintextedit_paintevent_callback = cb; }
    inline void setQPlainTextEdit_MousePressEvent_Callback(QPlainTextEdit_MousePressEvent_Callback cb) { qplaintextedit_mousepressevent_callback = cb; }
    inline void setQPlainTextEdit_MouseMoveEvent_Callback(QPlainTextEdit_MouseMoveEvent_Callback cb) { qplaintextedit_mousemoveevent_callback = cb; }
    inline void setQPlainTextEdit_MouseReleaseEvent_Callback(QPlainTextEdit_MouseReleaseEvent_Callback cb) { qplaintextedit_mousereleaseevent_callback = cb; }
    inline void setQPlainTextEdit_MouseDoubleClickEvent_Callback(QPlainTextEdit_MouseDoubleClickEvent_Callback cb) { qplaintextedit_mousedoubleclickevent_callback = cb; }
    inline void setQPlainTextEdit_FocusNextPrevChild_Callback(QPlainTextEdit_FocusNextPrevChild_Callback cb) { qplaintextedit_focusnextprevchild_callback = cb; }
    inline void setQPlainTextEdit_ContextMenuEvent_Callback(QPlainTextEdit_ContextMenuEvent_Callback cb) { qplaintextedit_contextmenuevent_callback = cb; }
    inline void setQPlainTextEdit_DragEnterEvent_Callback(QPlainTextEdit_DragEnterEvent_Callback cb) { qplaintextedit_dragenterevent_callback = cb; }
    inline void setQPlainTextEdit_DragLeaveEvent_Callback(QPlainTextEdit_DragLeaveEvent_Callback cb) { qplaintextedit_dragleaveevent_callback = cb; }
    inline void setQPlainTextEdit_DragMoveEvent_Callback(QPlainTextEdit_DragMoveEvent_Callback cb) { qplaintextedit_dragmoveevent_callback = cb; }
    inline void setQPlainTextEdit_DropEvent_Callback(QPlainTextEdit_DropEvent_Callback cb) { qplaintextedit_dropevent_callback = cb; }
    inline void setQPlainTextEdit_FocusInEvent_Callback(QPlainTextEdit_FocusInEvent_Callback cb) { qplaintextedit_focusinevent_callback = cb; }
    inline void setQPlainTextEdit_FocusOutEvent_Callback(QPlainTextEdit_FocusOutEvent_Callback cb) { qplaintextedit_focusoutevent_callback = cb; }
    inline void setQPlainTextEdit_ShowEvent_Callback(QPlainTextEdit_ShowEvent_Callback cb) { qplaintextedit_showevent_callback = cb; }
    inline void setQPlainTextEdit_ChangeEvent_Callback(QPlainTextEdit_ChangeEvent_Callback cb) { qplaintextedit_changeevent_callback = cb; }
    inline void setQPlainTextEdit_WheelEvent_Callback(QPlainTextEdit_WheelEvent_Callback cb) { qplaintextedit_wheelevent_callback = cb; }
    inline void setQPlainTextEdit_CreateMimeDataFromSelection_Callback(QPlainTextEdit_CreateMimeDataFromSelection_Callback cb) { qplaintextedit_createmimedatafromselection_callback = cb; }
    inline void setQPlainTextEdit_CanInsertFromMimeData_Callback(QPlainTextEdit_CanInsertFromMimeData_Callback cb) { qplaintextedit_caninsertfrommimedata_callback = cb; }
    inline void setQPlainTextEdit_InsertFromMimeData_Callback(QPlainTextEdit_InsertFromMimeData_Callback cb) { qplaintextedit_insertfrommimedata_callback = cb; }
    inline void setQPlainTextEdit_InputMethodEvent_Callback(QPlainTextEdit_InputMethodEvent_Callback cb) { qplaintextedit_inputmethodevent_callback = cb; }
    inline void setQPlainTextEdit_ScrollContentsBy_Callback(QPlainTextEdit_ScrollContentsBy_Callback cb) { qplaintextedit_scrollcontentsby_callback = cb; }
    inline void setQPlainTextEdit_DoSetTextCursor_Callback(QPlainTextEdit_DoSetTextCursor_Callback cb) { qplaintextedit_dosettextcursor_callback = cb; }
    inline void setQPlainTextEdit_MinimumSizeHint_Callback(QPlainTextEdit_MinimumSizeHint_Callback cb) { qplaintextedit_minimumsizehint_callback = cb; }
    inline void setQPlainTextEdit_SizeHint_Callback(QPlainTextEdit_SizeHint_Callback cb) { qplaintextedit_sizehint_callback = cb; }
    inline void setQPlainTextEdit_SetupViewport_Callback(QPlainTextEdit_SetupViewport_Callback cb) { qplaintextedit_setupviewport_callback = cb; }
    inline void setQPlainTextEdit_EventFilter_Callback(QPlainTextEdit_EventFilter_Callback cb) { qplaintextedit_eventfilter_callback = cb; }
    inline void setQPlainTextEdit_ViewportEvent_Callback(QPlainTextEdit_ViewportEvent_Callback cb) { qplaintextedit_viewportevent_callback = cb; }
    inline void setQPlainTextEdit_ViewportSizeHint_Callback(QPlainTextEdit_ViewportSizeHint_Callback cb) { qplaintextedit_viewportsizehint_callback = cb; }
    inline void setQPlainTextEdit_InitStyleOption_Callback(QPlainTextEdit_InitStyleOption_Callback cb) { qplaintextedit_initstyleoption_callback = cb; }
    inline void setQPlainTextEdit_DevType_Callback(QPlainTextEdit_DevType_Callback cb) { qplaintextedit_devtype_callback = cb; }
    inline void setQPlainTextEdit_SetVisible_Callback(QPlainTextEdit_SetVisible_Callback cb) { qplaintextedit_setvisible_callback = cb; }
    inline void setQPlainTextEdit_HeightForWidth_Callback(QPlainTextEdit_HeightForWidth_Callback cb) { qplaintextedit_heightforwidth_callback = cb; }
    inline void setQPlainTextEdit_HasHeightForWidth_Callback(QPlainTextEdit_HasHeightForWidth_Callback cb) { qplaintextedit_hasheightforwidth_callback = cb; }
    inline void setQPlainTextEdit_PaintEngine_Callback(QPlainTextEdit_PaintEngine_Callback cb) { qplaintextedit_paintengine_callback = cb; }
    inline void setQPlainTextEdit_EnterEvent_Callback(QPlainTextEdit_EnterEvent_Callback cb) { qplaintextedit_enterevent_callback = cb; }
    inline void setQPlainTextEdit_LeaveEvent_Callback(QPlainTextEdit_LeaveEvent_Callback cb) { qplaintextedit_leaveevent_callback = cb; }
    inline void setQPlainTextEdit_MoveEvent_Callback(QPlainTextEdit_MoveEvent_Callback cb) { qplaintextedit_moveevent_callback = cb; }
    inline void setQPlainTextEdit_CloseEvent_Callback(QPlainTextEdit_CloseEvent_Callback cb) { qplaintextedit_closeevent_callback = cb; }
    inline void setQPlainTextEdit_TabletEvent_Callback(QPlainTextEdit_TabletEvent_Callback cb) { qplaintextedit_tabletevent_callback = cb; }
    inline void setQPlainTextEdit_ActionEvent_Callback(QPlainTextEdit_ActionEvent_Callback cb) { qplaintextedit_actionevent_callback = cb; }
    inline void setQPlainTextEdit_HideEvent_Callback(QPlainTextEdit_HideEvent_Callback cb) { qplaintextedit_hideevent_callback = cb; }
    inline void setQPlainTextEdit_NativeEvent_Callback(QPlainTextEdit_NativeEvent_Callback cb) { qplaintextedit_nativeevent_callback = cb; }
    inline void setQPlainTextEdit_Metric_Callback(QPlainTextEdit_Metric_Callback cb) { qplaintextedit_metric_callback = cb; }
    inline void setQPlainTextEdit_InitPainter_Callback(QPlainTextEdit_InitPainter_Callback cb) { qplaintextedit_initpainter_callback = cb; }
    inline void setQPlainTextEdit_Redirected_Callback(QPlainTextEdit_Redirected_Callback cb) { qplaintextedit_redirected_callback = cb; }
    inline void setQPlainTextEdit_SharedPainter_Callback(QPlainTextEdit_SharedPainter_Callback cb) { qplaintextedit_sharedpainter_callback = cb; }
    inline void setQPlainTextEdit_ChildEvent_Callback(QPlainTextEdit_ChildEvent_Callback cb) { qplaintextedit_childevent_callback = cb; }
    inline void setQPlainTextEdit_CustomEvent_Callback(QPlainTextEdit_CustomEvent_Callback cb) { qplaintextedit_customevent_callback = cb; }
    inline void setQPlainTextEdit_ConnectNotify_Callback(QPlainTextEdit_ConnectNotify_Callback cb) { qplaintextedit_connectnotify_callback = cb; }
    inline void setQPlainTextEdit_DisconnectNotify_Callback(QPlainTextEdit_DisconnectNotify_Callback cb) { qplaintextedit_disconnectnotify_callback = cb; }
    inline void setQPlainTextEdit_FirstVisibleBlock_Callback(QPlainTextEdit_FirstVisibleBlock_Callback cb) { qplaintextedit_firstvisibleblock_callback = cb; }
    inline void setQPlainTextEdit_ContentOffset_Callback(QPlainTextEdit_ContentOffset_Callback cb) { qplaintextedit_contentoffset_callback = cb; }
    inline void setQPlainTextEdit_BlockBoundingRect_Callback(QPlainTextEdit_BlockBoundingRect_Callback cb) { qplaintextedit_blockboundingrect_callback = cb; }
    inline void setQPlainTextEdit_BlockBoundingGeometry_Callback(QPlainTextEdit_BlockBoundingGeometry_Callback cb) { qplaintextedit_blockboundinggeometry_callback = cb; }
    inline void setQPlainTextEdit_GetPaintContext_Callback(QPlainTextEdit_GetPaintContext_Callback cb) { qplaintextedit_getpaintcontext_callback = cb; }
    inline void setQPlainTextEdit_ZoomInF_Callback(QPlainTextEdit_ZoomInF_Callback cb) { qplaintextedit_zoominf_callback = cb; }
    inline void setQPlainTextEdit_SetViewportMargins_Callback(QPlainTextEdit_SetViewportMargins_Callback cb) { qplaintextedit_setviewportmargins_callback = cb; }
    inline void setQPlainTextEdit_ViewportMargins_Callback(QPlainTextEdit_ViewportMargins_Callback cb) { qplaintextedit_viewportmargins_callback = cb; }
    inline void setQPlainTextEdit_DrawFrame_Callback(QPlainTextEdit_DrawFrame_Callback cb) { qplaintextedit_drawframe_callback = cb; }
    inline void setQPlainTextEdit_UpdateMicroFocus_Callback(QPlainTextEdit_UpdateMicroFocus_Callback cb) { qplaintextedit_updatemicrofocus_callback = cb; }
    inline void setQPlainTextEdit_Create_Callback(QPlainTextEdit_Create_Callback cb) { qplaintextedit_create_callback = cb; }
    inline void setQPlainTextEdit_Destroy_Callback(QPlainTextEdit_Destroy_Callback cb) { qplaintextedit_destroy_callback = cb; }
    inline void setQPlainTextEdit_FocusNextChild_Callback(QPlainTextEdit_FocusNextChild_Callback cb) { qplaintextedit_focusnextchild_callback = cb; }
    inline void setQPlainTextEdit_FocusPreviousChild_Callback(QPlainTextEdit_FocusPreviousChild_Callback cb) { qplaintextedit_focuspreviouschild_callback = cb; }
    inline void setQPlainTextEdit_Sender_Callback(QPlainTextEdit_Sender_Callback cb) { qplaintextedit_sender_callback = cb; }
    inline void setQPlainTextEdit_SenderSignalIndex_Callback(QPlainTextEdit_SenderSignalIndex_Callback cb) { qplaintextedit_sendersignalindex_callback = cb; }
    inline void setQPlainTextEdit_Receivers_Callback(QPlainTextEdit_Receivers_Callback cb) { qplaintextedit_receivers_callback = cb; }
    inline void setQPlainTextEdit_IsSignalConnected_Callback(QPlainTextEdit_IsSignalConnected_Callback cb) { qplaintextedit_issignalconnected_callback = cb; }
    inline void setQPlainTextEdit_GetDecodedMetricF_Callback(QPlainTextEdit_GetDecodedMetricF_Callback cb) { qplaintextedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPlainTextEdit_MetaObject_IsBase(bool value) const { qplaintextedit_metaobject_isbase = value; }
    inline void setQPlainTextEdit_Metacast_IsBase(bool value) const { qplaintextedit_metacast_isbase = value; }
    inline void setQPlainTextEdit_Metacall_IsBase(bool value) const { qplaintextedit_metacall_isbase = value; }
    inline void setQPlainTextEdit_LoadResource_IsBase(bool value) const { qplaintextedit_loadresource_isbase = value; }
    inline void setQPlainTextEdit_InputMethodQuery_IsBase(bool value) const { qplaintextedit_inputmethodquery_isbase = value; }
    inline void setQPlainTextEdit_Event_IsBase(bool value) const { qplaintextedit_event_isbase = value; }
    inline void setQPlainTextEdit_TimerEvent_IsBase(bool value) const { qplaintextedit_timerevent_isbase = value; }
    inline void setQPlainTextEdit_KeyPressEvent_IsBase(bool value) const { qplaintextedit_keypressevent_isbase = value; }
    inline void setQPlainTextEdit_KeyReleaseEvent_IsBase(bool value) const { qplaintextedit_keyreleaseevent_isbase = value; }
    inline void setQPlainTextEdit_ResizeEvent_IsBase(bool value) const { qplaintextedit_resizeevent_isbase = value; }
    inline void setQPlainTextEdit_PaintEvent_IsBase(bool value) const { qplaintextedit_paintevent_isbase = value; }
    inline void setQPlainTextEdit_MousePressEvent_IsBase(bool value) const { qplaintextedit_mousepressevent_isbase = value; }
    inline void setQPlainTextEdit_MouseMoveEvent_IsBase(bool value) const { qplaintextedit_mousemoveevent_isbase = value; }
    inline void setQPlainTextEdit_MouseReleaseEvent_IsBase(bool value) const { qplaintextedit_mousereleaseevent_isbase = value; }
    inline void setQPlainTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { qplaintextedit_mousedoubleclickevent_isbase = value; }
    inline void setQPlainTextEdit_FocusNextPrevChild_IsBase(bool value) const { qplaintextedit_focusnextprevchild_isbase = value; }
    inline void setQPlainTextEdit_ContextMenuEvent_IsBase(bool value) const { qplaintextedit_contextmenuevent_isbase = value; }
    inline void setQPlainTextEdit_DragEnterEvent_IsBase(bool value) const { qplaintextedit_dragenterevent_isbase = value; }
    inline void setQPlainTextEdit_DragLeaveEvent_IsBase(bool value) const { qplaintextedit_dragleaveevent_isbase = value; }
    inline void setQPlainTextEdit_DragMoveEvent_IsBase(bool value) const { qplaintextedit_dragmoveevent_isbase = value; }
    inline void setQPlainTextEdit_DropEvent_IsBase(bool value) const { qplaintextedit_dropevent_isbase = value; }
    inline void setQPlainTextEdit_FocusInEvent_IsBase(bool value) const { qplaintextedit_focusinevent_isbase = value; }
    inline void setQPlainTextEdit_FocusOutEvent_IsBase(bool value) const { qplaintextedit_focusoutevent_isbase = value; }
    inline void setQPlainTextEdit_ShowEvent_IsBase(bool value) const { qplaintextedit_showevent_isbase = value; }
    inline void setQPlainTextEdit_ChangeEvent_IsBase(bool value) const { qplaintextedit_changeevent_isbase = value; }
    inline void setQPlainTextEdit_WheelEvent_IsBase(bool value) const { qplaintextedit_wheelevent_isbase = value; }
    inline void setQPlainTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { qplaintextedit_createmimedatafromselection_isbase = value; }
    inline void setQPlainTextEdit_CanInsertFromMimeData_IsBase(bool value) const { qplaintextedit_caninsertfrommimedata_isbase = value; }
    inline void setQPlainTextEdit_InsertFromMimeData_IsBase(bool value) const { qplaintextedit_insertfrommimedata_isbase = value; }
    inline void setQPlainTextEdit_InputMethodEvent_IsBase(bool value) const { qplaintextedit_inputmethodevent_isbase = value; }
    inline void setQPlainTextEdit_ScrollContentsBy_IsBase(bool value) const { qplaintextedit_scrollcontentsby_isbase = value; }
    inline void setQPlainTextEdit_DoSetTextCursor_IsBase(bool value) const { qplaintextedit_dosettextcursor_isbase = value; }
    inline void setQPlainTextEdit_MinimumSizeHint_IsBase(bool value) const { qplaintextedit_minimumsizehint_isbase = value; }
    inline void setQPlainTextEdit_SizeHint_IsBase(bool value) const { qplaintextedit_sizehint_isbase = value; }
    inline void setQPlainTextEdit_SetupViewport_IsBase(bool value) const { qplaintextedit_setupviewport_isbase = value; }
    inline void setQPlainTextEdit_EventFilter_IsBase(bool value) const { qplaintextedit_eventfilter_isbase = value; }
    inline void setQPlainTextEdit_ViewportEvent_IsBase(bool value) const { qplaintextedit_viewportevent_isbase = value; }
    inline void setQPlainTextEdit_ViewportSizeHint_IsBase(bool value) const { qplaintextedit_viewportsizehint_isbase = value; }
    inline void setQPlainTextEdit_InitStyleOption_IsBase(bool value) const { qplaintextedit_initstyleoption_isbase = value; }
    inline void setQPlainTextEdit_DevType_IsBase(bool value) const { qplaintextedit_devtype_isbase = value; }
    inline void setQPlainTextEdit_SetVisible_IsBase(bool value) const { qplaintextedit_setvisible_isbase = value; }
    inline void setQPlainTextEdit_HeightForWidth_IsBase(bool value) const { qplaintextedit_heightforwidth_isbase = value; }
    inline void setQPlainTextEdit_HasHeightForWidth_IsBase(bool value) const { qplaintextedit_hasheightforwidth_isbase = value; }
    inline void setQPlainTextEdit_PaintEngine_IsBase(bool value) const { qplaintextedit_paintengine_isbase = value; }
    inline void setQPlainTextEdit_EnterEvent_IsBase(bool value) const { qplaintextedit_enterevent_isbase = value; }
    inline void setQPlainTextEdit_LeaveEvent_IsBase(bool value) const { qplaintextedit_leaveevent_isbase = value; }
    inline void setQPlainTextEdit_MoveEvent_IsBase(bool value) const { qplaintextedit_moveevent_isbase = value; }
    inline void setQPlainTextEdit_CloseEvent_IsBase(bool value) const { qplaintextedit_closeevent_isbase = value; }
    inline void setQPlainTextEdit_TabletEvent_IsBase(bool value) const { qplaintextedit_tabletevent_isbase = value; }
    inline void setQPlainTextEdit_ActionEvent_IsBase(bool value) const { qplaintextedit_actionevent_isbase = value; }
    inline void setQPlainTextEdit_HideEvent_IsBase(bool value) const { qplaintextedit_hideevent_isbase = value; }
    inline void setQPlainTextEdit_NativeEvent_IsBase(bool value) const { qplaintextedit_nativeevent_isbase = value; }
    inline void setQPlainTextEdit_Metric_IsBase(bool value) const { qplaintextedit_metric_isbase = value; }
    inline void setQPlainTextEdit_InitPainter_IsBase(bool value) const { qplaintextedit_initpainter_isbase = value; }
    inline void setQPlainTextEdit_Redirected_IsBase(bool value) const { qplaintextedit_redirected_isbase = value; }
    inline void setQPlainTextEdit_SharedPainter_IsBase(bool value) const { qplaintextedit_sharedpainter_isbase = value; }
    inline void setQPlainTextEdit_ChildEvent_IsBase(bool value) const { qplaintextedit_childevent_isbase = value; }
    inline void setQPlainTextEdit_CustomEvent_IsBase(bool value) const { qplaintextedit_customevent_isbase = value; }
    inline void setQPlainTextEdit_ConnectNotify_IsBase(bool value) const { qplaintextedit_connectnotify_isbase = value; }
    inline void setQPlainTextEdit_DisconnectNotify_IsBase(bool value) const { qplaintextedit_disconnectnotify_isbase = value; }
    inline void setQPlainTextEdit_FirstVisibleBlock_IsBase(bool value) const { qplaintextedit_firstvisibleblock_isbase = value; }
    inline void setQPlainTextEdit_ContentOffset_IsBase(bool value) const { qplaintextedit_contentoffset_isbase = value; }
    inline void setQPlainTextEdit_BlockBoundingRect_IsBase(bool value) const { qplaintextedit_blockboundingrect_isbase = value; }
    inline void setQPlainTextEdit_BlockBoundingGeometry_IsBase(bool value) const { qplaintextedit_blockboundinggeometry_isbase = value; }
    inline void setQPlainTextEdit_GetPaintContext_IsBase(bool value) const { qplaintextedit_getpaintcontext_isbase = value; }
    inline void setQPlainTextEdit_ZoomInF_IsBase(bool value) const { qplaintextedit_zoominf_isbase = value; }
    inline void setQPlainTextEdit_SetViewportMargins_IsBase(bool value) const { qplaintextedit_setviewportmargins_isbase = value; }
    inline void setQPlainTextEdit_ViewportMargins_IsBase(bool value) const { qplaintextedit_viewportmargins_isbase = value; }
    inline void setQPlainTextEdit_DrawFrame_IsBase(bool value) const { qplaintextedit_drawframe_isbase = value; }
    inline void setQPlainTextEdit_UpdateMicroFocus_IsBase(bool value) const { qplaintextedit_updatemicrofocus_isbase = value; }
    inline void setQPlainTextEdit_Create_IsBase(bool value) const { qplaintextedit_create_isbase = value; }
    inline void setQPlainTextEdit_Destroy_IsBase(bool value) const { qplaintextedit_destroy_isbase = value; }
    inline void setQPlainTextEdit_FocusNextChild_IsBase(bool value) const { qplaintextedit_focusnextchild_isbase = value; }
    inline void setQPlainTextEdit_FocusPreviousChild_IsBase(bool value) const { qplaintextedit_focuspreviouschild_isbase = value; }
    inline void setQPlainTextEdit_Sender_IsBase(bool value) const { qplaintextedit_sender_isbase = value; }
    inline void setQPlainTextEdit_SenderSignalIndex_IsBase(bool value) const { qplaintextedit_sendersignalindex_isbase = value; }
    inline void setQPlainTextEdit_Receivers_IsBase(bool value) const { qplaintextedit_receivers_isbase = value; }
    inline void setQPlainTextEdit_IsSignalConnected_IsBase(bool value) const { qplaintextedit_issignalconnected_isbase = value; }
    inline void setQPlainTextEdit_GetDecodedMetricF_IsBase(bool value) const { qplaintextedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplaintextedit_metaobject_isbase) {
            qplaintextedit_metaobject_isbase = false;
            return QPlainTextEdit::metaObject();
        }
        auto metaobject_cb = qplaintextedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPlainTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplaintextedit_metacast_isbase) {
            qplaintextedit_metacast_isbase = false;
            return QPlainTextEdit::qt_metacast(param1);
        }
        auto metacast_cb = qplaintextedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaintextedit_metacall_isbase) {
            qplaintextedit_metacall_isbase = false;
            return QPlainTextEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qplaintextedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qplaintextedit_loadresource_isbase) {
            qplaintextedit_loadresource_isbase = false;
            return QPlainTextEdit::loadResource(typeVal, name);
        }
        auto loadresource_cb = qplaintextedit_loadresource_callback;
        if (loadresource_cb) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = loadresource_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QPlainTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qplaintextedit_inputmethodquery_isbase) {
            qplaintextedit_inputmethodquery_isbase = false;
            return QPlainTextEdit::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = qplaintextedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QPlainTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qplaintextedit_event_isbase) {
            qplaintextedit_event_isbase = false;
            return QPlainTextEdit::event(e);
        }
        auto event_cb = qplaintextedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qplaintextedit_timerevent_isbase) {
            qplaintextedit_timerevent_isbase = false;
            QPlainTextEdit::timerEvent(e);
            return;
        }
        auto timerevent_cb = qplaintextedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qplaintextedit_keypressevent_isbase) {
            qplaintextedit_keypressevent_isbase = false;
            QPlainTextEdit::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = qplaintextedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qplaintextedit_keyreleaseevent_isbase) {
            qplaintextedit_keyreleaseevent_isbase = false;
            QPlainTextEdit::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = qplaintextedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qplaintextedit_resizeevent_isbase) {
            qplaintextedit_resizeevent_isbase = false;
            QPlainTextEdit::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = qplaintextedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qplaintextedit_paintevent_isbase) {
            qplaintextedit_paintevent_isbase = false;
            QPlainTextEdit::paintEvent(e);
            return;
        }
        auto paintevent_cb = qplaintextedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousepressevent_isbase) {
            qplaintextedit_mousepressevent_isbase = false;
            QPlainTextEdit::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = qplaintextedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousemoveevent_isbase) {
            qplaintextedit_mousemoveevent_isbase = false;
            QPlainTextEdit::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = qplaintextedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousereleaseevent_isbase) {
            qplaintextedit_mousereleaseevent_isbase = false;
            QPlainTextEdit::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qplaintextedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousedoubleclickevent_isbase) {
            qplaintextedit_mousedoubleclickevent_isbase = false;
            QPlainTextEdit::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = qplaintextedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qplaintextedit_focusnextprevchild_isbase) {
            qplaintextedit_focusnextprevchild_isbase = false;
            return QPlainTextEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qplaintextedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qplaintextedit_contextmenuevent_isbase) {
            qplaintextedit_contextmenuevent_isbase = false;
            QPlainTextEdit::contextMenuEvent(e);
            return;
        }
        auto contextmenuevent_cb = qplaintextedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = e;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qplaintextedit_dragenterevent_isbase) {
            qplaintextedit_dragenterevent_isbase = false;
            QPlainTextEdit::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = qplaintextedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qplaintextedit_dragleaveevent_isbase) {
            qplaintextedit_dragleaveevent_isbase = false;
            QPlainTextEdit::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = qplaintextedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qplaintextedit_dragmoveevent_isbase) {
            qplaintextedit_dragmoveevent_isbase = false;
            QPlainTextEdit::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = qplaintextedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qplaintextedit_dropevent_isbase) {
            qplaintextedit_dropevent_isbase = false;
            QPlainTextEdit::dropEvent(e);
            return;
        }
        auto dropevent_cb = qplaintextedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;

            dropevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qplaintextedit_focusinevent_isbase) {
            qplaintextedit_focusinevent_isbase = false;
            QPlainTextEdit::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = qplaintextedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qplaintextedit_focusoutevent_isbase) {
            qplaintextedit_focusoutevent_isbase = false;
            QPlainTextEdit::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = qplaintextedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qplaintextedit_showevent_isbase) {
            qplaintextedit_showevent_isbase = false;
            QPlainTextEdit::showEvent(param1);
            return;
        }
        auto showevent_cb = qplaintextedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qplaintextedit_changeevent_isbase) {
            qplaintextedit_changeevent_isbase = false;
            QPlainTextEdit::changeEvent(e);
            return;
        }
        auto changeevent_cb = qplaintextedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qplaintextedit_wheelevent_isbase) {
            qplaintextedit_wheelevent_isbase = false;
            QPlainTextEdit::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qplaintextedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qplaintextedit_createmimedatafromselection_isbase) {
            qplaintextedit_createmimedatafromselection_isbase = false;
            return QPlainTextEdit::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = qplaintextedit_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return QPlainTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qplaintextedit_caninsertfrommimedata_isbase) {
            qplaintextedit_caninsertfrommimedata_isbase = false;
            return QPlainTextEdit::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = qplaintextedit_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qplaintextedit_insertfrommimedata_isbase) {
            qplaintextedit_insertfrommimedata_isbase = false;
            QPlainTextEdit::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = qplaintextedit_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            insertfrommimedata_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qplaintextedit_inputmethodevent_isbase) {
            qplaintextedit_inputmethodevent_isbase = false;
            QPlainTextEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qplaintextedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qplaintextedit_scrollcontentsby_isbase) {
            qplaintextedit_scrollcontentsby_isbase = false;
            QPlainTextEdit::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qplaintextedit_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QPlainTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qplaintextedit_dosettextcursor_isbase) {
            qplaintextedit_dosettextcursor_isbase = false;
            QPlainTextEdit::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = qplaintextedit_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            dosettextcursor_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qplaintextedit_minimumsizehint_isbase) {
            qplaintextedit_minimumsizehint_isbase = false;
            return QPlainTextEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = qplaintextedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QPlainTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qplaintextedit_sizehint_isbase) {
            qplaintextedit_sizehint_isbase = false;
            return QPlainTextEdit::sizeHint();
        }
        auto sizehint_cb = qplaintextedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QPlainTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qplaintextedit_setupviewport_isbase) {
            qplaintextedit_setupviewport_isbase = false;
            QPlainTextEdit::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qplaintextedit_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qplaintextedit_eventfilter_isbase) {
            qplaintextedit_eventfilter_isbase = false;
            return QPlainTextEdit::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qplaintextedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlainTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qplaintextedit_viewportevent_isbase) {
            qplaintextedit_viewportevent_isbase = false;
            return QPlainTextEdit::viewportEvent(param1);
        }
        auto viewportevent_cb = qplaintextedit_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qplaintextedit_viewportsizehint_isbase) {
            qplaintextedit_viewportsizehint_isbase = false;
            return QPlainTextEdit::viewportSizeHint();
        }
        auto viewportsizehint_cb = qplaintextedit_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QPlainTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qplaintextedit_initstyleoption_isbase) {
            qplaintextedit_initstyleoption_isbase = false;
            QPlainTextEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qplaintextedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qplaintextedit_devtype_isbase) {
            qplaintextedit_devtype_isbase = false;
            return QPlainTextEdit::devType();
        }
        auto devtype_cb = qplaintextedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qplaintextedit_setvisible_isbase) {
            qplaintextedit_setvisible_isbase = false;
            QPlainTextEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = qplaintextedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qplaintextedit_heightforwidth_isbase) {
            qplaintextedit_heightforwidth_isbase = false;
            return QPlainTextEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = qplaintextedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qplaintextedit_hasheightforwidth_isbase) {
            qplaintextedit_hasheightforwidth_isbase = false;
            return QPlainTextEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qplaintextedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QPlainTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qplaintextedit_paintengine_isbase) {
            qplaintextedit_paintengine_isbase = false;
            return QPlainTextEdit::paintEngine();
        }
        auto paintengine_cb = qplaintextedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QPlainTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qplaintextedit_enterevent_isbase) {
            qplaintextedit_enterevent_isbase = false;
            QPlainTextEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = qplaintextedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qplaintextedit_leaveevent_isbase) {
            qplaintextedit_leaveevent_isbase = false;
            QPlainTextEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qplaintextedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qplaintextedit_moveevent_isbase) {
            qplaintextedit_moveevent_isbase = false;
            QPlainTextEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = qplaintextedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qplaintextedit_closeevent_isbase) {
            qplaintextedit_closeevent_isbase = false;
            QPlainTextEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = qplaintextedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qplaintextedit_tabletevent_isbase) {
            qplaintextedit_tabletevent_isbase = false;
            QPlainTextEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qplaintextedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qplaintextedit_actionevent_isbase) {
            qplaintextedit_actionevent_isbase = false;
            QPlainTextEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = qplaintextedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qplaintextedit_hideevent_isbase) {
            qplaintextedit_hideevent_isbase = false;
            QPlainTextEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = qplaintextedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qplaintextedit_nativeevent_isbase) {
            qplaintextedit_nativeevent_isbase = false;
            return QPlainTextEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qplaintextedit_nativeevent_callback;
        if (nativeevent_cb) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = nativeevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPlainTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qplaintextedit_metric_isbase) {
            qplaintextedit_metric_isbase = false;
            return QPlainTextEdit::metric(param1);
        }
        auto metric_cb = qplaintextedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qplaintextedit_initpainter_isbase) {
            qplaintextedit_initpainter_isbase = false;
            QPlainTextEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = qplaintextedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qplaintextedit_redirected_isbase) {
            qplaintextedit_redirected_isbase = false;
            return QPlainTextEdit::redirected(offset);
        }
        auto redirected_cb = qplaintextedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qplaintextedit_sharedpainter_isbase) {
            qplaintextedit_sharedpainter_isbase = false;
            return QPlainTextEdit::sharedPainter();
        }
        auto sharedpainter_cb = qplaintextedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QPlainTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaintextedit_childevent_isbase) {
            qplaintextedit_childevent_isbase = false;
            QPlainTextEdit::childEvent(event);
            return;
        }
        auto childevent_cb = qplaintextedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaintextedit_customevent_isbase) {
            qplaintextedit_customevent_isbase = false;
            QPlainTextEdit::customEvent(event);
            return;
        }
        auto customevent_cb = qplaintextedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaintextedit_connectnotify_isbase) {
            qplaintextedit_connectnotify_isbase = false;
            QPlainTextEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qplaintextedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaintextedit_disconnectnotify_isbase) {
            qplaintextedit_disconnectnotify_isbase = false;
            QPlainTextEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qplaintextedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock firstVisibleBlock() const {
        if (qplaintextedit_firstvisibleblock_isbase) {
            qplaintextedit_firstvisibleblock_isbase = false;
            return QPlainTextEdit::firstVisibleBlock();
        }
        auto firstvisibleblock_cb = qplaintextedit_firstvisibleblock_callback;
        if (firstvisibleblock_cb) {
            QTextBlock* callback_ret = firstvisibleblock_cb();
            return *callback_ret;
        }
        return QPlainTextEdit::firstVisibleBlock();
    }

    // Virtual method for C ABI access and custom callback
    QPointF contentOffset() const {
        if (qplaintextedit_contentoffset_isbase) {
            qplaintextedit_contentoffset_isbase = false;
            return QPlainTextEdit::contentOffset();
        }
        auto contentoffset_cb = qplaintextedit_contentoffset_callback;
        if (contentoffset_cb) {
            QPointF* callback_ret = contentoffset_cb();
            return *callback_ret;
        }
        return QPlainTextEdit::contentOffset();
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingRect(const QTextBlock& block) const {
        if (qplaintextedit_blockboundingrect_isbase) {
            qplaintextedit_blockboundingrect_isbase = false;
            return QPlainTextEdit::blockBoundingRect(block);
        }
        auto blockboundingrect_cb = qplaintextedit_blockboundingrect_callback;
        if (blockboundingrect_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            QRectF* callback_ret = blockboundingrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QPlainTextEdit::blockBoundingRect(block);
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingGeometry(const QTextBlock& block) const {
        if (qplaintextedit_blockboundinggeometry_isbase) {
            qplaintextedit_blockboundinggeometry_isbase = false;
            return QPlainTextEdit::blockBoundingGeometry(block);
        }
        auto blockboundinggeometry_cb = qplaintextedit_blockboundinggeometry_callback;
        if (blockboundinggeometry_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            QRectF* callback_ret = blockboundinggeometry_cb(this, cbval1);
            return *callback_ret;
        }
        return QPlainTextEdit::blockBoundingGeometry(block);
    }

    // Virtual method for C ABI access and custom callback
    QAbstractTextDocumentLayout::PaintContext getPaintContext() const {
        if (qplaintextedit_getpaintcontext_isbase) {
            qplaintextedit_getpaintcontext_isbase = false;
            return QPlainTextEdit::getPaintContext();
        }
        auto getpaintcontext_cb = qplaintextedit_getpaintcontext_callback;
        if (getpaintcontext_cb) {
            QAbstractTextDocumentLayout__PaintContext* callback_ret = getpaintcontext_cb();
            return *callback_ret;
        }
        return QPlainTextEdit::getPaintContext();
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (qplaintextedit_zoominf_isbase) {
            qplaintextedit_zoominf_isbase = false;
            QPlainTextEdit::zoomInF(range);
            return;
        }
        auto zoominf_cb = qplaintextedit_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;

            zoominf_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qplaintextedit_setviewportmargins_isbase) {
            qplaintextedit_setviewportmargins_isbase = false;
            QPlainTextEdit::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qplaintextedit_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QPlainTextEdit::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qplaintextedit_viewportmargins_isbase) {
            qplaintextedit_viewportmargins_isbase = false;
            return QPlainTextEdit::viewportMargins();
        }
        auto viewportmargins_cb = qplaintextedit_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QPlainTextEdit::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qplaintextedit_drawframe_isbase) {
            qplaintextedit_drawframe_isbase = false;
            QPlainTextEdit::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qplaintextedit_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QPlainTextEdit::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qplaintextedit_updatemicrofocus_isbase) {
            qplaintextedit_updatemicrofocus_isbase = false;
            QPlainTextEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qplaintextedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QPlainTextEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qplaintextedit_create_isbase) {
            qplaintextedit_create_isbase = false;
            QPlainTextEdit::create();
            return;
        }
        auto create_cb = qplaintextedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QPlainTextEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qplaintextedit_destroy_isbase) {
            qplaintextedit_destroy_isbase = false;
            QPlainTextEdit::destroy();
            return;
        }
        auto destroy_cb = qplaintextedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QPlainTextEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qplaintextedit_focusnextchild_isbase) {
            qplaintextedit_focusnextchild_isbase = false;
            return QPlainTextEdit::focusNextChild();
        }
        auto focusnextchild_cb = qplaintextedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QPlainTextEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qplaintextedit_focuspreviouschild_isbase) {
            qplaintextedit_focuspreviouschild_isbase = false;
            return QPlainTextEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qplaintextedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QPlainTextEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplaintextedit_sender_isbase) {
            qplaintextedit_sender_isbase = false;
            return QPlainTextEdit::sender();
        }
        auto sender_cb = qplaintextedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPlainTextEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplaintextedit_sendersignalindex_isbase) {
            qplaintextedit_sendersignalindex_isbase = false;
            return QPlainTextEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = qplaintextedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplaintextedit_receivers_isbase) {
            qplaintextedit_receivers_isbase = false;
            return QPlainTextEdit::receivers(signal);
        }
        auto receivers_cb = qplaintextedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplaintextedit_issignalconnected_isbase) {
            qplaintextedit_issignalconnected_isbase = false;
            return QPlainTextEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qplaintextedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qplaintextedit_getdecodedmetricf_isbase) {
            qplaintextedit_getdecodedmetricf_isbase = false;
            return QPlainTextEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qplaintextedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QPlainTextEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QPlainTextEdit_Event(QPlainTextEdit* self, QEvent* e);
    friend bool QPlainTextEdit_SuperEvent(QPlainTextEdit* self, QEvent* e);
    friend void QPlainTextEdit_TimerEvent(QPlainTextEdit* self, QTimerEvent* e);
    friend void QPlainTextEdit_SuperTimerEvent(QPlainTextEdit* self, QTimerEvent* e);
    friend void QPlainTextEdit_KeyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
    friend void QPlainTextEdit_SuperKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
    friend void QPlainTextEdit_KeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
    friend void QPlainTextEdit_SuperKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
    friend void QPlainTextEdit_ResizeEvent(QPlainTextEdit* self, QResizeEvent* e);
    friend void QPlainTextEdit_SuperResizeEvent(QPlainTextEdit* self, QResizeEvent* e);
    friend void QPlainTextEdit_PaintEvent(QPlainTextEdit* self, QPaintEvent* e);
    friend void QPlainTextEdit_SuperPaintEvent(QPlainTextEdit* self, QPaintEvent* e);
    friend void QPlainTextEdit_MousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_SuperMousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_MouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_SuperMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_MouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_SuperMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_MouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend void QPlainTextEdit_SuperMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
    friend bool QPlainTextEdit_FocusNextPrevChild(QPlainTextEdit* self, bool next);
    friend bool QPlainTextEdit_SuperFocusNextPrevChild(QPlainTextEdit* self, bool next);
    friend void QPlainTextEdit_ContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
    friend void QPlainTextEdit_SuperContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
    friend void QPlainTextEdit_DragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
    friend void QPlainTextEdit_SuperDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
    friend void QPlainTextEdit_DragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
    friend void QPlainTextEdit_SuperDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
    friend void QPlainTextEdit_DragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
    friend void QPlainTextEdit_SuperDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
    friend void QPlainTextEdit_DropEvent(QPlainTextEdit* self, QDropEvent* e);
    friend void QPlainTextEdit_SuperDropEvent(QPlainTextEdit* self, QDropEvent* e);
    friend void QPlainTextEdit_FocusInEvent(QPlainTextEdit* self, QFocusEvent* e);
    friend void QPlainTextEdit_SuperFocusInEvent(QPlainTextEdit* self, QFocusEvent* e);
    friend void QPlainTextEdit_FocusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
    friend void QPlainTextEdit_SuperFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
    friend void QPlainTextEdit_ShowEvent(QPlainTextEdit* self, QShowEvent* param1);
    friend void QPlainTextEdit_SuperShowEvent(QPlainTextEdit* self, QShowEvent* param1);
    friend void QPlainTextEdit_ChangeEvent(QPlainTextEdit* self, QEvent* e);
    friend void QPlainTextEdit_SuperChangeEvent(QPlainTextEdit* self, QEvent* e);
    friend void QPlainTextEdit_WheelEvent(QPlainTextEdit* self, QWheelEvent* e);
    friend void QPlainTextEdit_SuperWheelEvent(QPlainTextEdit* self, QWheelEvent* e);
    friend QMimeData* QPlainTextEdit_CreateMimeDataFromSelection(const QPlainTextEdit* self);
    friend QMimeData* QPlainTextEdit_SuperCreateMimeDataFromSelection(const QPlainTextEdit* self);
    friend bool QPlainTextEdit_CanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source);
    friend bool QPlainTextEdit_SuperCanInsertFromMimeData(const QPlainTextEdit* self, const QMimeData* source);
    friend void QPlainTextEdit_InsertFromMimeData(QPlainTextEdit* self, const QMimeData* source);
    friend void QPlainTextEdit_SuperInsertFromMimeData(QPlainTextEdit* self, const QMimeData* source);
    friend void QPlainTextEdit_InputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
    friend void QPlainTextEdit_SuperInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
    friend void QPlainTextEdit_ScrollContentsBy(QPlainTextEdit* self, int dx, int dy);
    friend void QPlainTextEdit_SuperScrollContentsBy(QPlainTextEdit* self, int dx, int dy);
    friend void QPlainTextEdit_DoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor);
    friend void QPlainTextEdit_SuperDoSetTextCursor(QPlainTextEdit* self, const QTextCursor* cursor);
    friend bool QPlainTextEdit_EventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2);
    friend bool QPlainTextEdit_SuperEventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2);
    friend bool QPlainTextEdit_ViewportEvent(QPlainTextEdit* self, QEvent* param1);
    friend bool QPlainTextEdit_SuperViewportEvent(QPlainTextEdit* self, QEvent* param1);
    friend QSize* QPlainTextEdit_ViewportSizeHint(const QPlainTextEdit* self);
    friend QSize* QPlainTextEdit_SuperViewportSizeHint(const QPlainTextEdit* self);
    friend void QPlainTextEdit_InitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option);
    friend void QPlainTextEdit_SuperInitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option);
    friend void QPlainTextEdit_EnterEvent(QPlainTextEdit* self, QEnterEvent* event);
    friend void QPlainTextEdit_SuperEnterEvent(QPlainTextEdit* self, QEnterEvent* event);
    friend void QPlainTextEdit_LeaveEvent(QPlainTextEdit* self, QEvent* event);
    friend void QPlainTextEdit_SuperLeaveEvent(QPlainTextEdit* self, QEvent* event);
    friend void QPlainTextEdit_MoveEvent(QPlainTextEdit* self, QMoveEvent* event);
    friend void QPlainTextEdit_SuperMoveEvent(QPlainTextEdit* self, QMoveEvent* event);
    friend void QPlainTextEdit_CloseEvent(QPlainTextEdit* self, QCloseEvent* event);
    friend void QPlainTextEdit_SuperCloseEvent(QPlainTextEdit* self, QCloseEvent* event);
    friend void QPlainTextEdit_TabletEvent(QPlainTextEdit* self, QTabletEvent* event);
    friend void QPlainTextEdit_SuperTabletEvent(QPlainTextEdit* self, QTabletEvent* event);
    friend void QPlainTextEdit_ActionEvent(QPlainTextEdit* self, QActionEvent* event);
    friend void QPlainTextEdit_SuperActionEvent(QPlainTextEdit* self, QActionEvent* event);
    friend void QPlainTextEdit_HideEvent(QPlainTextEdit* self, QHideEvent* event);
    friend void QPlainTextEdit_SuperHideEvent(QPlainTextEdit* self, QHideEvent* event);
    friend bool QPlainTextEdit_NativeEvent(QPlainTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QPlainTextEdit_SuperNativeEvent(QPlainTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QPlainTextEdit_Metric(const QPlainTextEdit* self, int param1);
    friend int QPlainTextEdit_SuperMetric(const QPlainTextEdit* self, int param1);
    friend void QPlainTextEdit_InitPainter(const QPlainTextEdit* self, QPainter* painter);
    friend void QPlainTextEdit_SuperInitPainter(const QPlainTextEdit* self, QPainter* painter);
    friend QPaintDevice* QPlainTextEdit_Redirected(const QPlainTextEdit* self, QPoint* offset);
    friend QPaintDevice* QPlainTextEdit_SuperRedirected(const QPlainTextEdit* self, QPoint* offset);
    friend QPainter* QPlainTextEdit_SharedPainter(const QPlainTextEdit* self);
    friend QPainter* QPlainTextEdit_SuperSharedPainter(const QPlainTextEdit* self);
    friend void QPlainTextEdit_ChildEvent(QPlainTextEdit* self, QChildEvent* event);
    friend void QPlainTextEdit_SuperChildEvent(QPlainTextEdit* self, QChildEvent* event);
    friend void QPlainTextEdit_CustomEvent(QPlainTextEdit* self, QEvent* event);
    friend void QPlainTextEdit_SuperCustomEvent(QPlainTextEdit* self, QEvent* event);
    friend void QPlainTextEdit_ConnectNotify(QPlainTextEdit* self, const QMetaMethod* signal);
    friend void QPlainTextEdit_SuperConnectNotify(QPlainTextEdit* self, const QMetaMethod* signal);
    friend void QPlainTextEdit_DisconnectNotify(QPlainTextEdit* self, const QMetaMethod* signal);
    friend void QPlainTextEdit_SuperDisconnectNotify(QPlainTextEdit* self, const QMetaMethod* signal);
    friend QTextBlock* QPlainTextEdit_FirstVisibleBlock(const QPlainTextEdit* self);
    friend QTextBlock* QPlainTextEdit_SuperFirstVisibleBlock(const QPlainTextEdit* self);
    friend QPointF* QPlainTextEdit_ContentOffset(const QPlainTextEdit* self);
    friend QPointF* QPlainTextEdit_SuperContentOffset(const QPlainTextEdit* self);
    friend QRectF* QPlainTextEdit_BlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block);
    friend QRectF* QPlainTextEdit_SuperBlockBoundingRect(const QPlainTextEdit* self, const QTextBlock* block);
    friend QRectF* QPlainTextEdit_BlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block);
    friend QRectF* QPlainTextEdit_SuperBlockBoundingGeometry(const QPlainTextEdit* self, const QTextBlock* block);
    friend QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_GetPaintContext(const QPlainTextEdit* self);
    friend QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_SuperGetPaintContext(const QPlainTextEdit* self);
    friend void QPlainTextEdit_ZoomInF(QPlainTextEdit* self, float range);
    friend void QPlainTextEdit_SuperZoomInF(QPlainTextEdit* self, float range);
    friend void QPlainTextEdit_SetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom);
    friend void QPlainTextEdit_SuperSetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom);
    friend QMargins* QPlainTextEdit_ViewportMargins(const QPlainTextEdit* self);
    friend QMargins* QPlainTextEdit_SuperViewportMargins(const QPlainTextEdit* self);
    friend void QPlainTextEdit_DrawFrame(QPlainTextEdit* self, QPainter* param1);
    friend void QPlainTextEdit_SuperDrawFrame(QPlainTextEdit* self, QPainter* param1);
    friend void QPlainTextEdit_UpdateMicroFocus(QPlainTextEdit* self);
    friend void QPlainTextEdit_SuperUpdateMicroFocus(QPlainTextEdit* self);
    friend void QPlainTextEdit_Create(QPlainTextEdit* self);
    friend void QPlainTextEdit_SuperCreate(QPlainTextEdit* self);
    friend void QPlainTextEdit_Destroy(QPlainTextEdit* self);
    friend void QPlainTextEdit_SuperDestroy(QPlainTextEdit* self);
    friend bool QPlainTextEdit_FocusNextChild(QPlainTextEdit* self);
    friend bool QPlainTextEdit_SuperFocusNextChild(QPlainTextEdit* self);
    friend bool QPlainTextEdit_FocusPreviousChild(QPlainTextEdit* self);
    friend bool QPlainTextEdit_SuperFocusPreviousChild(QPlainTextEdit* self);
    friend QObject* QPlainTextEdit_Sender(const QPlainTextEdit* self);
    friend QObject* QPlainTextEdit_SuperSender(const QPlainTextEdit* self);
    friend int QPlainTextEdit_SenderSignalIndex(const QPlainTextEdit* self);
    friend int QPlainTextEdit_SuperSenderSignalIndex(const QPlainTextEdit* self);
    friend int QPlainTextEdit_Receivers(const QPlainTextEdit* self, const char* signal);
    friend int QPlainTextEdit_SuperReceivers(const QPlainTextEdit* self, const char* signal);
    friend bool QPlainTextEdit_IsSignalConnected(const QPlainTextEdit* self, const QMetaMethod* signal);
    friend bool QPlainTextEdit_SuperIsSignalConnected(const QPlainTextEdit* self, const QMetaMethod* signal);
    friend double QPlainTextEdit_GetDecodedMetricF(const QPlainTextEdit* self, int metricA, int metricB);
    friend double QPlainTextEdit_SuperGetDecodedMetricF(const QPlainTextEdit* self, int metricA, int metricB);
};

// This class is a subclass of QPlainTextDocumentLayout so that we can call protected methods
class VirtualQPlainTextDocumentLayout final : public QPlainTextDocumentLayout {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlainTextDocumentLayout = true;

    // Virtual class public types (including callbacks)
    using QPlainTextDocumentLayout_MetaObject_Callback = QMetaObject* (*)();
    using QPlainTextDocumentLayout_Metacast_Callback = void* (*)(QPlainTextDocumentLayout*, const char*);
    using QPlainTextDocumentLayout_Metacall_Callback = int (*)(QPlainTextDocumentLayout*, int, int, void**);
    using QPlainTextDocumentLayout_Draw_Callback = void (*)(QPlainTextDocumentLayout*, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
    using QPlainTextDocumentLayout_HitTest_Callback = int (*)(const QPlainTextDocumentLayout*, QPointF*, int);
    using QPlainTextDocumentLayout_PageCount_Callback = int (*)();
    using QPlainTextDocumentLayout_DocumentSize_Callback = QSizeF* (*)();
    using QPlainTextDocumentLayout_FrameBoundingRect_Callback = QRectF* (*)(const QPlainTextDocumentLayout*, QTextFrame*);
    using QPlainTextDocumentLayout_BlockBoundingRect_Callback = QRectF* (*)(const QPlainTextDocumentLayout*, QTextBlock*);
    using QPlainTextDocumentLayout_DocumentChanged_Callback = void (*)(QPlainTextDocumentLayout*, int, int, int);
    using QPlainTextDocumentLayout_ResizeInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*);
    using QPlainTextDocumentLayout_PositionInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*);
    using QPlainTextDocumentLayout_DrawInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
    using QPlainTextDocumentLayout_Event_Callback = bool (*)(QPlainTextDocumentLayout*, QEvent*);
    using QPlainTextDocumentLayout_EventFilter_Callback = bool (*)(QPlainTextDocumentLayout*, QObject*, QEvent*);
    using QPlainTextDocumentLayout_TimerEvent_Callback = void (*)(QPlainTextDocumentLayout*, QTimerEvent*);
    using QPlainTextDocumentLayout_ChildEvent_Callback = void (*)(QPlainTextDocumentLayout*, QChildEvent*);
    using QPlainTextDocumentLayout_CustomEvent_Callback = void (*)(QPlainTextDocumentLayout*, QEvent*);
    using QPlainTextDocumentLayout_ConnectNotify_Callback = void (*)(QPlainTextDocumentLayout*, QMetaMethod*);
    using QPlainTextDocumentLayout_DisconnectNotify_Callback = void (*)(QPlainTextDocumentLayout*, QMetaMethod*);
    using QPlainTextDocumentLayout_FormatIndex_Callback = int (*)(QPlainTextDocumentLayout*, int);
    using QPlainTextDocumentLayout_Format_Callback = QTextCharFormat* (*)(QPlainTextDocumentLayout*, int);
    using QPlainTextDocumentLayout_Sender_Callback = QObject* (*)();
    using QPlainTextDocumentLayout_SenderSignalIndex_Callback = int (*)();
    using QPlainTextDocumentLayout_Receivers_Callback = int (*)(const QPlainTextDocumentLayout*, const char*);
    using QPlainTextDocumentLayout_IsSignalConnected_Callback = bool (*)(const QPlainTextDocumentLayout*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlainTextDocumentLayout_MetaObject_Callback qplaintextdocumentlayout_metaobject_callback = nullptr;
    QPlainTextDocumentLayout_Metacast_Callback qplaintextdocumentlayout_metacast_callback = nullptr;
    QPlainTextDocumentLayout_Metacall_Callback qplaintextdocumentlayout_metacall_callback = nullptr;
    QPlainTextDocumentLayout_Draw_Callback qplaintextdocumentlayout_draw_callback = nullptr;
    QPlainTextDocumentLayout_HitTest_Callback qplaintextdocumentlayout_hittest_callback = nullptr;
    QPlainTextDocumentLayout_PageCount_Callback qplaintextdocumentlayout_pagecount_callback = nullptr;
    QPlainTextDocumentLayout_DocumentSize_Callback qplaintextdocumentlayout_documentsize_callback = nullptr;
    QPlainTextDocumentLayout_FrameBoundingRect_Callback qplaintextdocumentlayout_frameboundingrect_callback = nullptr;
    QPlainTextDocumentLayout_BlockBoundingRect_Callback qplaintextdocumentlayout_blockboundingrect_callback = nullptr;
    QPlainTextDocumentLayout_DocumentChanged_Callback qplaintextdocumentlayout_documentchanged_callback = nullptr;
    QPlainTextDocumentLayout_ResizeInlineObject_Callback qplaintextdocumentlayout_resizeinlineobject_callback = nullptr;
    QPlainTextDocumentLayout_PositionInlineObject_Callback qplaintextdocumentlayout_positioninlineobject_callback = nullptr;
    QPlainTextDocumentLayout_DrawInlineObject_Callback qplaintextdocumentlayout_drawinlineobject_callback = nullptr;
    QPlainTextDocumentLayout_Event_Callback qplaintextdocumentlayout_event_callback = nullptr;
    QPlainTextDocumentLayout_EventFilter_Callback qplaintextdocumentlayout_eventfilter_callback = nullptr;
    QPlainTextDocumentLayout_TimerEvent_Callback qplaintextdocumentlayout_timerevent_callback = nullptr;
    QPlainTextDocumentLayout_ChildEvent_Callback qplaintextdocumentlayout_childevent_callback = nullptr;
    QPlainTextDocumentLayout_CustomEvent_Callback qplaintextdocumentlayout_customevent_callback = nullptr;
    QPlainTextDocumentLayout_ConnectNotify_Callback qplaintextdocumentlayout_connectnotify_callback = nullptr;
    QPlainTextDocumentLayout_DisconnectNotify_Callback qplaintextdocumentlayout_disconnectnotify_callback = nullptr;
    QPlainTextDocumentLayout_FormatIndex_Callback qplaintextdocumentlayout_formatindex_callback = nullptr;
    QPlainTextDocumentLayout_Format_Callback qplaintextdocumentlayout_format_callback = nullptr;
    QPlainTextDocumentLayout_Sender_Callback qplaintextdocumentlayout_sender_callback = nullptr;
    QPlainTextDocumentLayout_SenderSignalIndex_Callback qplaintextdocumentlayout_sendersignalindex_callback = nullptr;
    QPlainTextDocumentLayout_Receivers_Callback qplaintextdocumentlayout_receivers_callback = nullptr;
    QPlainTextDocumentLayout_IsSignalConnected_Callback qplaintextdocumentlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplaintextdocumentlayout_metaobject_isbase = false;
    mutable bool qplaintextdocumentlayout_metacast_isbase = false;
    mutable bool qplaintextdocumentlayout_metacall_isbase = false;
    mutable bool qplaintextdocumentlayout_draw_isbase = false;
    mutable bool qplaintextdocumentlayout_hittest_isbase = false;
    mutable bool qplaintextdocumentlayout_pagecount_isbase = false;
    mutable bool qplaintextdocumentlayout_documentsize_isbase = false;
    mutable bool qplaintextdocumentlayout_frameboundingrect_isbase = false;
    mutable bool qplaintextdocumentlayout_blockboundingrect_isbase = false;
    mutable bool qplaintextdocumentlayout_documentchanged_isbase = false;
    mutable bool qplaintextdocumentlayout_resizeinlineobject_isbase = false;
    mutable bool qplaintextdocumentlayout_positioninlineobject_isbase = false;
    mutable bool qplaintextdocumentlayout_drawinlineobject_isbase = false;
    mutable bool qplaintextdocumentlayout_event_isbase = false;
    mutable bool qplaintextdocumentlayout_eventfilter_isbase = false;
    mutable bool qplaintextdocumentlayout_timerevent_isbase = false;
    mutable bool qplaintextdocumentlayout_childevent_isbase = false;
    mutable bool qplaintextdocumentlayout_customevent_isbase = false;
    mutable bool qplaintextdocumentlayout_connectnotify_isbase = false;
    mutable bool qplaintextdocumentlayout_disconnectnotify_isbase = false;
    mutable bool qplaintextdocumentlayout_formatindex_isbase = false;
    mutable bool qplaintextdocumentlayout_format_isbase = false;
    mutable bool qplaintextdocumentlayout_sender_isbase = false;
    mutable bool qplaintextdocumentlayout_sendersignalindex_isbase = false;
    mutable bool qplaintextdocumentlayout_receivers_isbase = false;
    mutable bool qplaintextdocumentlayout_issignalconnected_isbase = false;

  public:
    VirtualQPlainTextDocumentLayout(QTextDocument* document) : QPlainTextDocumentLayout(document) {};

    // Callback setters
    inline void setQPlainTextDocumentLayout_MetaObject_Callback(QPlainTextDocumentLayout_MetaObject_Callback cb) { qplaintextdocumentlayout_metaobject_callback = cb; }
    inline void setQPlainTextDocumentLayout_Metacast_Callback(QPlainTextDocumentLayout_Metacast_Callback cb) { qplaintextdocumentlayout_metacast_callback = cb; }
    inline void setQPlainTextDocumentLayout_Metacall_Callback(QPlainTextDocumentLayout_Metacall_Callback cb) { qplaintextdocumentlayout_metacall_callback = cb; }
    inline void setQPlainTextDocumentLayout_Draw_Callback(QPlainTextDocumentLayout_Draw_Callback cb) { qplaintextdocumentlayout_draw_callback = cb; }
    inline void setQPlainTextDocumentLayout_HitTest_Callback(QPlainTextDocumentLayout_HitTest_Callback cb) { qplaintextdocumentlayout_hittest_callback = cb; }
    inline void setQPlainTextDocumentLayout_PageCount_Callback(QPlainTextDocumentLayout_PageCount_Callback cb) { qplaintextdocumentlayout_pagecount_callback = cb; }
    inline void setQPlainTextDocumentLayout_DocumentSize_Callback(QPlainTextDocumentLayout_DocumentSize_Callback cb) { qplaintextdocumentlayout_documentsize_callback = cb; }
    inline void setQPlainTextDocumentLayout_FrameBoundingRect_Callback(QPlainTextDocumentLayout_FrameBoundingRect_Callback cb) { qplaintextdocumentlayout_frameboundingrect_callback = cb; }
    inline void setQPlainTextDocumentLayout_BlockBoundingRect_Callback(QPlainTextDocumentLayout_BlockBoundingRect_Callback cb) { qplaintextdocumentlayout_blockboundingrect_callback = cb; }
    inline void setQPlainTextDocumentLayout_DocumentChanged_Callback(QPlainTextDocumentLayout_DocumentChanged_Callback cb) { qplaintextdocumentlayout_documentchanged_callback = cb; }
    inline void setQPlainTextDocumentLayout_ResizeInlineObject_Callback(QPlainTextDocumentLayout_ResizeInlineObject_Callback cb) { qplaintextdocumentlayout_resizeinlineobject_callback = cb; }
    inline void setQPlainTextDocumentLayout_PositionInlineObject_Callback(QPlainTextDocumentLayout_PositionInlineObject_Callback cb) { qplaintextdocumentlayout_positioninlineobject_callback = cb; }
    inline void setQPlainTextDocumentLayout_DrawInlineObject_Callback(QPlainTextDocumentLayout_DrawInlineObject_Callback cb) { qplaintextdocumentlayout_drawinlineobject_callback = cb; }
    inline void setQPlainTextDocumentLayout_Event_Callback(QPlainTextDocumentLayout_Event_Callback cb) { qplaintextdocumentlayout_event_callback = cb; }
    inline void setQPlainTextDocumentLayout_EventFilter_Callback(QPlainTextDocumentLayout_EventFilter_Callback cb) { qplaintextdocumentlayout_eventfilter_callback = cb; }
    inline void setQPlainTextDocumentLayout_TimerEvent_Callback(QPlainTextDocumentLayout_TimerEvent_Callback cb) { qplaintextdocumentlayout_timerevent_callback = cb; }
    inline void setQPlainTextDocumentLayout_ChildEvent_Callback(QPlainTextDocumentLayout_ChildEvent_Callback cb) { qplaintextdocumentlayout_childevent_callback = cb; }
    inline void setQPlainTextDocumentLayout_CustomEvent_Callback(QPlainTextDocumentLayout_CustomEvent_Callback cb) { qplaintextdocumentlayout_customevent_callback = cb; }
    inline void setQPlainTextDocumentLayout_ConnectNotify_Callback(QPlainTextDocumentLayout_ConnectNotify_Callback cb) { qplaintextdocumentlayout_connectnotify_callback = cb; }
    inline void setQPlainTextDocumentLayout_DisconnectNotify_Callback(QPlainTextDocumentLayout_DisconnectNotify_Callback cb) { qplaintextdocumentlayout_disconnectnotify_callback = cb; }
    inline void setQPlainTextDocumentLayout_FormatIndex_Callback(QPlainTextDocumentLayout_FormatIndex_Callback cb) { qplaintextdocumentlayout_formatindex_callback = cb; }
    inline void setQPlainTextDocumentLayout_Format_Callback(QPlainTextDocumentLayout_Format_Callback cb) { qplaintextdocumentlayout_format_callback = cb; }
    inline void setQPlainTextDocumentLayout_Sender_Callback(QPlainTextDocumentLayout_Sender_Callback cb) { qplaintextdocumentlayout_sender_callback = cb; }
    inline void setQPlainTextDocumentLayout_SenderSignalIndex_Callback(QPlainTextDocumentLayout_SenderSignalIndex_Callback cb) { qplaintextdocumentlayout_sendersignalindex_callback = cb; }
    inline void setQPlainTextDocumentLayout_Receivers_Callback(QPlainTextDocumentLayout_Receivers_Callback cb) { qplaintextdocumentlayout_receivers_callback = cb; }
    inline void setQPlainTextDocumentLayout_IsSignalConnected_Callback(QPlainTextDocumentLayout_IsSignalConnected_Callback cb) { qplaintextdocumentlayout_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlainTextDocumentLayout_MetaObject_IsBase(bool value) const { qplaintextdocumentlayout_metaobject_isbase = value; }
    inline void setQPlainTextDocumentLayout_Metacast_IsBase(bool value) const { qplaintextdocumentlayout_metacast_isbase = value; }
    inline void setQPlainTextDocumentLayout_Metacall_IsBase(bool value) const { qplaintextdocumentlayout_metacall_isbase = value; }
    inline void setQPlainTextDocumentLayout_Draw_IsBase(bool value) const { qplaintextdocumentlayout_draw_isbase = value; }
    inline void setQPlainTextDocumentLayout_HitTest_IsBase(bool value) const { qplaintextdocumentlayout_hittest_isbase = value; }
    inline void setQPlainTextDocumentLayout_PageCount_IsBase(bool value) const { qplaintextdocumentlayout_pagecount_isbase = value; }
    inline void setQPlainTextDocumentLayout_DocumentSize_IsBase(bool value) const { qplaintextdocumentlayout_documentsize_isbase = value; }
    inline void setQPlainTextDocumentLayout_FrameBoundingRect_IsBase(bool value) const { qplaintextdocumentlayout_frameboundingrect_isbase = value; }
    inline void setQPlainTextDocumentLayout_BlockBoundingRect_IsBase(bool value) const { qplaintextdocumentlayout_blockboundingrect_isbase = value; }
    inline void setQPlainTextDocumentLayout_DocumentChanged_IsBase(bool value) const { qplaintextdocumentlayout_documentchanged_isbase = value; }
    inline void setQPlainTextDocumentLayout_ResizeInlineObject_IsBase(bool value) const { qplaintextdocumentlayout_resizeinlineobject_isbase = value; }
    inline void setQPlainTextDocumentLayout_PositionInlineObject_IsBase(bool value) const { qplaintextdocumentlayout_positioninlineobject_isbase = value; }
    inline void setQPlainTextDocumentLayout_DrawInlineObject_IsBase(bool value) const { qplaintextdocumentlayout_drawinlineobject_isbase = value; }
    inline void setQPlainTextDocumentLayout_Event_IsBase(bool value) const { qplaintextdocumentlayout_event_isbase = value; }
    inline void setQPlainTextDocumentLayout_EventFilter_IsBase(bool value) const { qplaintextdocumentlayout_eventfilter_isbase = value; }
    inline void setQPlainTextDocumentLayout_TimerEvent_IsBase(bool value) const { qplaintextdocumentlayout_timerevent_isbase = value; }
    inline void setQPlainTextDocumentLayout_ChildEvent_IsBase(bool value) const { qplaintextdocumentlayout_childevent_isbase = value; }
    inline void setQPlainTextDocumentLayout_CustomEvent_IsBase(bool value) const { qplaintextdocumentlayout_customevent_isbase = value; }
    inline void setQPlainTextDocumentLayout_ConnectNotify_IsBase(bool value) const { qplaintextdocumentlayout_connectnotify_isbase = value; }
    inline void setQPlainTextDocumentLayout_DisconnectNotify_IsBase(bool value) const { qplaintextdocumentlayout_disconnectnotify_isbase = value; }
    inline void setQPlainTextDocumentLayout_FormatIndex_IsBase(bool value) const { qplaintextdocumentlayout_formatindex_isbase = value; }
    inline void setQPlainTextDocumentLayout_Format_IsBase(bool value) const { qplaintextdocumentlayout_format_isbase = value; }
    inline void setQPlainTextDocumentLayout_Sender_IsBase(bool value) const { qplaintextdocumentlayout_sender_isbase = value; }
    inline void setQPlainTextDocumentLayout_SenderSignalIndex_IsBase(bool value) const { qplaintextdocumentlayout_sendersignalindex_isbase = value; }
    inline void setQPlainTextDocumentLayout_Receivers_IsBase(bool value) const { qplaintextdocumentlayout_receivers_isbase = value; }
    inline void setQPlainTextDocumentLayout_IsSignalConnected_IsBase(bool value) const { qplaintextdocumentlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplaintextdocumentlayout_metaobject_isbase) {
            qplaintextdocumentlayout_metaobject_isbase = false;
            return QPlainTextDocumentLayout::metaObject();
        }
        auto metaobject_cb = qplaintextdocumentlayout_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QPlainTextDocumentLayout::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplaintextdocumentlayout_metacast_isbase) {
            qplaintextdocumentlayout_metacast_isbase = false;
            return QPlainTextDocumentLayout::qt_metacast(param1);
        }
        auto metacast_cb = qplaintextdocumentlayout_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaintextdocumentlayout_metacall_isbase) {
            qplaintextdocumentlayout_metacall_isbase = false;
            return QPlainTextDocumentLayout::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qplaintextdocumentlayout_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* param1, const QAbstractTextDocumentLayout::PaintContext& param2) override {
        if (qplaintextdocumentlayout_draw_isbase) {
            qplaintextdocumentlayout_draw_isbase = false;
            QPlainTextDocumentLayout::draw(param1, param2);
            return;
        }
        auto draw_cb = qplaintextdocumentlayout_draw_callback;
        if (draw_cb) {
            QPainter* cbval1 = param1;
            const QAbstractTextDocumentLayout::PaintContext& param2_ret = param2;
            // Cast returned reference into pointer
            QAbstractTextDocumentLayout__PaintContext* cbval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&param2_ret);

            draw_cb(this, cbval1, cbval2);
            return;
        }
        QPlainTextDocumentLayout::draw(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int hitTest(const QPointF& param1, Qt::HitTestAccuracy param2) const override {
        if (qplaintextdocumentlayout_hittest_isbase) {
            qplaintextdocumentlayout_hittest_isbase = false;
            return QPlainTextDocumentLayout::hitTest(param1, param2);
        }
        auto hittest_cb = qplaintextdocumentlayout_hittest_callback;
        if (hittest_cb) {
            const QPointF& param1_ret = param1;
            // Cast returned reference into pointer
            QPointF* cbval1 = const_cast<QPointF*>(&param1_ret);
            int cbval2 = static_cast<int>(param2);

            int callback_ret = hittest_cb(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::hitTest(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int pageCount() const override {
        if (qplaintextdocumentlayout_pagecount_isbase) {
            qplaintextdocumentlayout_pagecount_isbase = false;
            return QPlainTextDocumentLayout::pageCount();
        }
        auto pagecount_cb = qplaintextdocumentlayout_pagecount_callback;
        if (pagecount_cb) {
            int callback_ret = pagecount_cb();
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::pageCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF documentSize() const override {
        if (qplaintextdocumentlayout_documentsize_isbase) {
            qplaintextdocumentlayout_documentsize_isbase = false;
            return QPlainTextDocumentLayout::documentSize();
        }
        auto documentsize_cb = qplaintextdocumentlayout_documentsize_callback;
        if (documentsize_cb) {
            QSizeF* callback_ret = documentsize_cb();
            return *callback_ret;
        }
        return QPlainTextDocumentLayout::documentSize();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF frameBoundingRect(QTextFrame* param1) const override {
        if (qplaintextdocumentlayout_frameboundingrect_isbase) {
            qplaintextdocumentlayout_frameboundingrect_isbase = false;
            return QPlainTextDocumentLayout::frameBoundingRect(param1);
        }
        auto frameboundingrect_cb = qplaintextdocumentlayout_frameboundingrect_callback;
        if (frameboundingrect_cb) {
            QTextFrame* cbval1 = param1;

            QRectF* callback_ret = frameboundingrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QPlainTextDocumentLayout::frameBoundingRect(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
        if (qplaintextdocumentlayout_blockboundingrect_isbase) {
            qplaintextdocumentlayout_blockboundingrect_isbase = false;
            return QPlainTextDocumentLayout::blockBoundingRect(block);
        }
        auto blockboundingrect_cb = qplaintextdocumentlayout_blockboundingrect_callback;
        if (blockboundingrect_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            QRectF* callback_ret = blockboundingrect_cb(this, cbval1);
            return *callback_ret;
        }
        return QPlainTextDocumentLayout::blockBoundingRect(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void documentChanged(int from, int param2, int charsAdded) override {
        if (qplaintextdocumentlayout_documentchanged_isbase) {
            qplaintextdocumentlayout_documentchanged_isbase = false;
            QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
            return;
        }
        auto documentchanged_cb = qplaintextdocumentlayout_documentchanged_callback;
        if (documentchanged_cb) {
            int cbval1 = from;
            int cbval2 = param2;
            int cbval3 = charsAdded;

            documentchanged_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_resizeinlineobject_isbase) {
            qplaintextdocumentlayout_resizeinlineobject_isbase = false;
            QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
            return;
        }
        auto resizeinlineobject_cb = qplaintextdocumentlayout_resizeinlineobject_callback;
        if (resizeinlineobject_cb) {
            QTextInlineObject* cbval1 = new QTextInlineObject(item);
            int cbval2 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval3 = const_cast<QTextFormat*>(&format_ret);

            resizeinlineobject_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_positioninlineobject_isbase) {
            qplaintextdocumentlayout_positioninlineobject_isbase = false;
            QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
            return;
        }
        auto positioninlineobject_cb = qplaintextdocumentlayout_positioninlineobject_callback;
        if (positioninlineobject_cb) {
            QTextInlineObject* cbval1 = new QTextInlineObject(item);
            int cbval2 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval3 = const_cast<QTextFormat*>(&format_ret);

            positioninlineobject_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_drawinlineobject_isbase) {
            qplaintextdocumentlayout_drawinlineobject_isbase = false;
            QPlainTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
            return;
        }
        auto drawinlineobject_cb = qplaintextdocumentlayout_drawinlineobject_callback;
        if (drawinlineobject_cb) {
            QPainter* cbval1 = painter;
            const QRectF& rect_ret = rect;
            // Cast returned reference into pointer
            QRectF* cbval2 = const_cast<QRectF*>(&rect_ret);
            QTextInlineObject* cbval3 = new QTextInlineObject(object);
            int cbval4 = posInDocument;
            const QTextFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextFormat* cbval5 = const_cast<QTextFormat*>(&format_ret);

            drawinlineobject_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return;
        }
        QPlainTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplaintextdocumentlayout_event_isbase) {
            qplaintextdocumentlayout_event_isbase = false;
            return QPlainTextDocumentLayout::event(event);
        }
        auto event_cb = qplaintextdocumentlayout_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplaintextdocumentlayout_eventfilter_isbase) {
            qplaintextdocumentlayout_eventfilter_isbase = false;
            return QPlainTextDocumentLayout::eventFilter(watched, event);
        }
        auto eventfilter_cb = qplaintextdocumentlayout_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplaintextdocumentlayout_timerevent_isbase) {
            qplaintextdocumentlayout_timerevent_isbase = false;
            QPlainTextDocumentLayout::timerEvent(event);
            return;
        }
        auto timerevent_cb = qplaintextdocumentlayout_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaintextdocumentlayout_childevent_isbase) {
            qplaintextdocumentlayout_childevent_isbase = false;
            QPlainTextDocumentLayout::childEvent(event);
            return;
        }
        auto childevent_cb = qplaintextdocumentlayout_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaintextdocumentlayout_customevent_isbase) {
            qplaintextdocumentlayout_customevent_isbase = false;
            QPlainTextDocumentLayout::customEvent(event);
            return;
        }
        auto customevent_cb = qplaintextdocumentlayout_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaintextdocumentlayout_connectnotify_isbase) {
            qplaintextdocumentlayout_connectnotify_isbase = false;
            QPlainTextDocumentLayout::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qplaintextdocumentlayout_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaintextdocumentlayout_disconnectnotify_isbase) {
            qplaintextdocumentlayout_disconnectnotify_isbase = false;
            QPlainTextDocumentLayout::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qplaintextdocumentlayout_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QPlainTextDocumentLayout::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int formatIndex(int pos) {
        if (qplaintextdocumentlayout_formatindex_isbase) {
            qplaintextdocumentlayout_formatindex_isbase = false;
            return QPlainTextDocumentLayout::formatIndex(pos);
        }
        auto formatindex_cb = qplaintextdocumentlayout_formatindex_callback;
        if (formatindex_cb) {
            int cbval1 = pos;

            int callback_ret = formatindex_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::formatIndex(pos);
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) {
        if (qplaintextdocumentlayout_format_isbase) {
            qplaintextdocumentlayout_format_isbase = false;
            return QPlainTextDocumentLayout::format(pos);
        }
        auto format_cb = qplaintextdocumentlayout_format_callback;
        if (format_cb) {
            int cbval1 = pos;

            QTextCharFormat* callback_ret = format_cb(this, cbval1);
            return *callback_ret;
        }
        return QPlainTextDocumentLayout::format(pos);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplaintextdocumentlayout_sender_isbase) {
            qplaintextdocumentlayout_sender_isbase = false;
            return QPlainTextDocumentLayout::sender();
        }
        auto sender_cb = qplaintextdocumentlayout_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QPlainTextDocumentLayout::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplaintextdocumentlayout_sendersignalindex_isbase) {
            qplaintextdocumentlayout_sendersignalindex_isbase = false;
            return QPlainTextDocumentLayout::senderSignalIndex();
        }
        auto sendersignalindex_cb = qplaintextdocumentlayout_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplaintextdocumentlayout_receivers_isbase) {
            qplaintextdocumentlayout_receivers_isbase = false;
            return QPlainTextDocumentLayout::receivers(signal);
        }
        auto receivers_cb = qplaintextdocumentlayout_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPlainTextDocumentLayout::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplaintextdocumentlayout_issignalconnected_isbase) {
            qplaintextdocumentlayout_issignalconnected_isbase = false;
            return QPlainTextDocumentLayout::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qplaintextdocumentlayout_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QPlainTextDocumentLayout::isSignalConnected(signal);
    }

    // Friend functions
    friend void QPlainTextDocumentLayout_DocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
    friend void QPlainTextDocumentLayout_SuperDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
    friend void QPlainTextDocumentLayout_ResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_SuperResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_PositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_SuperPositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_DrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_SuperDrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, const QRectF* rect, QTextInlineObject* object, int posInDocument, const QTextFormat* format);
    friend void QPlainTextDocumentLayout_TimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event);
    friend void QPlainTextDocumentLayout_SuperTimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event);
    friend void QPlainTextDocumentLayout_ChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event);
    friend void QPlainTextDocumentLayout_SuperChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event);
    friend void QPlainTextDocumentLayout_CustomEvent(QPlainTextDocumentLayout* self, QEvent* event);
    friend void QPlainTextDocumentLayout_SuperCustomEvent(QPlainTextDocumentLayout* self, QEvent* event);
    friend void QPlainTextDocumentLayout_ConnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal);
    friend void QPlainTextDocumentLayout_SuperConnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal);
    friend void QPlainTextDocumentLayout_DisconnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal);
    friend void QPlainTextDocumentLayout_SuperDisconnectNotify(QPlainTextDocumentLayout* self, const QMetaMethod* signal);
    friend int QPlainTextDocumentLayout_FormatIndex(QPlainTextDocumentLayout* self, int pos);
    friend int QPlainTextDocumentLayout_SuperFormatIndex(QPlainTextDocumentLayout* self, int pos);
    friend QTextCharFormat* QPlainTextDocumentLayout_Format(QPlainTextDocumentLayout* self, int pos);
    friend QTextCharFormat* QPlainTextDocumentLayout_SuperFormat(QPlainTextDocumentLayout* self, int pos);
    friend QObject* QPlainTextDocumentLayout_Sender(const QPlainTextDocumentLayout* self);
    friend QObject* QPlainTextDocumentLayout_SuperSender(const QPlainTextDocumentLayout* self);
    friend int QPlainTextDocumentLayout_SenderSignalIndex(const QPlainTextDocumentLayout* self);
    friend int QPlainTextDocumentLayout_SuperSenderSignalIndex(const QPlainTextDocumentLayout* self);
    friend int QPlainTextDocumentLayout_Receivers(const QPlainTextDocumentLayout* self, const char* signal);
    friend int QPlainTextDocumentLayout_SuperReceivers(const QPlainTextDocumentLayout* self, const char* signal);
    friend bool QPlainTextDocumentLayout_IsSignalConnected(const QPlainTextDocumentLayout* self, const QMetaMethod* signal);
    friend bool QPlainTextDocumentLayout_SuperIsSignalConnected(const QPlainTextDocumentLayout* self, const QMetaMethod* signal);
};

#endif
