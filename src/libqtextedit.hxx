#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTEDIT_H
#define SRCC_LIBVIRTUALQTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextEdit so that we can call protected methods
class VirtualQTextEdit final : public QTextEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQTextEdit = true;

    // Virtual class public types (including callbacks)
    using QTextEdit_MetaObject_Callback = QMetaObject* (*)();
    using QTextEdit_Metacast_Callback = void* (*)(QTextEdit*, const char*);
    using QTextEdit_Metacall_Callback = int (*)(QTextEdit*, int, int, void**);
    using QTextEdit_LoadResource_Callback = QVariant* (*)(QTextEdit*, int, QUrl*);
    using QTextEdit_InputMethodQuery_Callback = QVariant* (*)(const QTextEdit*, int);
    using QTextEdit_Event_Callback = bool (*)(QTextEdit*, QEvent*);
    using QTextEdit_TimerEvent_Callback = void (*)(QTextEdit*, QTimerEvent*);
    using QTextEdit_KeyPressEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
    using QTextEdit_KeyReleaseEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
    using QTextEdit_ResizeEvent_Callback = void (*)(QTextEdit*, QResizeEvent*);
    using QTextEdit_PaintEvent_Callback = void (*)(QTextEdit*, QPaintEvent*);
    using QTextEdit_MousePressEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseMoveEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseReleaseEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseDoubleClickEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_FocusNextPrevChild_Callback = bool (*)(QTextEdit*, bool);
    using QTextEdit_ContextMenuEvent_Callback = void (*)(QTextEdit*, QContextMenuEvent*);
    using QTextEdit_DragEnterEvent_Callback = void (*)(QTextEdit*, QDragEnterEvent*);
    using QTextEdit_DragLeaveEvent_Callback = void (*)(QTextEdit*, QDragLeaveEvent*);
    using QTextEdit_DragMoveEvent_Callback = void (*)(QTextEdit*, QDragMoveEvent*);
    using QTextEdit_DropEvent_Callback = void (*)(QTextEdit*, QDropEvent*);
    using QTextEdit_FocusInEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
    using QTextEdit_FocusOutEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
    using QTextEdit_ShowEvent_Callback = void (*)(QTextEdit*, QShowEvent*);
    using QTextEdit_ChangeEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_WheelEvent_Callback = void (*)(QTextEdit*, QWheelEvent*);
    using QTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using QTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QTextEdit*, QMimeData*);
    using QTextEdit_InsertFromMimeData_Callback = void (*)(QTextEdit*, QMimeData*);
    using QTextEdit_InputMethodEvent_Callback = void (*)(QTextEdit*, QInputMethodEvent*);
    using QTextEdit_ScrollContentsBy_Callback = void (*)(QTextEdit*, int, int);
    using QTextEdit_DoSetTextCursor_Callback = void (*)(QTextEdit*, QTextCursor*);
    using QTextEdit_MinimumSizeHint_Callback = QSize* (*)();
    using QTextEdit_SizeHint_Callback = QSize* (*)();
    using QTextEdit_SetupViewport_Callback = void (*)(QTextEdit*, QWidget*);
    using QTextEdit_EventFilter_Callback = bool (*)(QTextEdit*, QObject*, QEvent*);
    using QTextEdit_ViewportEvent_Callback = bool (*)(QTextEdit*, QEvent*);
    using QTextEdit_ViewportSizeHint_Callback = QSize* (*)();
    using QTextEdit_InitStyleOption_Callback = void (*)(const QTextEdit*, QStyleOptionFrame*);
    using QTextEdit_DevType_Callback = int (*)();
    using QTextEdit_SetVisible_Callback = void (*)(QTextEdit*, bool);
    using QTextEdit_HeightForWidth_Callback = int (*)(const QTextEdit*, int);
    using QTextEdit_HasHeightForWidth_Callback = bool (*)();
    using QTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QTextEdit_EnterEvent_Callback = void (*)(QTextEdit*, QEnterEvent*);
    using QTextEdit_LeaveEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_MoveEvent_Callback = void (*)(QTextEdit*, QMoveEvent*);
    using QTextEdit_CloseEvent_Callback = void (*)(QTextEdit*, QCloseEvent*);
    using QTextEdit_TabletEvent_Callback = void (*)(QTextEdit*, QTabletEvent*);
    using QTextEdit_ActionEvent_Callback = void (*)(QTextEdit*, QActionEvent*);
    using QTextEdit_HideEvent_Callback = void (*)(QTextEdit*, QHideEvent*);
    using QTextEdit_NativeEvent_Callback = bool (*)(QTextEdit*, libqt_string, void*, intptr_t*);
    using QTextEdit_Metric_Callback = int (*)(const QTextEdit*, int);
    using QTextEdit_InitPainter_Callback = void (*)(const QTextEdit*, QPainter*);
    using QTextEdit_Redirected_Callback = QPaintDevice* (*)(const QTextEdit*, QPoint*);
    using QTextEdit_SharedPainter_Callback = QPainter* (*)();
    using QTextEdit_ChildEvent_Callback = void (*)(QTextEdit*, QChildEvent*);
    using QTextEdit_CustomEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_ConnectNotify_Callback = void (*)(QTextEdit*, QMetaMethod*);
    using QTextEdit_DisconnectNotify_Callback = void (*)(QTextEdit*, QMetaMethod*);
    using QTextEdit_ZoomInF_Callback = void (*)(QTextEdit*, float);
    using QTextEdit_SetViewportMargins_Callback = void (*)(QTextEdit*, int, int, int, int);
    using QTextEdit_ViewportMargins_Callback = QMargins* (*)();
    using QTextEdit_DrawFrame_Callback = void (*)(QTextEdit*, QPainter*);
    using QTextEdit_UpdateMicroFocus_Callback = void (*)();
    using QTextEdit_Create_Callback = void (*)();
    using QTextEdit_Destroy_Callback = void (*)();
    using QTextEdit_FocusNextChild_Callback = bool (*)();
    using QTextEdit_FocusPreviousChild_Callback = bool (*)();
    using QTextEdit_Sender_Callback = QObject* (*)();
    using QTextEdit_SenderSignalIndex_Callback = int (*)();
    using QTextEdit_Receivers_Callback = int (*)(const QTextEdit*, const char*);
    using QTextEdit_IsSignalConnected_Callback = bool (*)(const QTextEdit*, QMetaMethod*);
    using QTextEdit_GetDecodedMetricF_Callback = double (*)(const QTextEdit*, int, int);

  protected:
    // Instance callback storage
    QTextEdit_MetaObject_Callback qtextedit_metaobject_callback = nullptr;
    QTextEdit_Metacast_Callback qtextedit_metacast_callback = nullptr;
    QTextEdit_Metacall_Callback qtextedit_metacall_callback = nullptr;
    QTextEdit_LoadResource_Callback qtextedit_loadresource_callback = nullptr;
    QTextEdit_InputMethodQuery_Callback qtextedit_inputmethodquery_callback = nullptr;
    QTextEdit_Event_Callback qtextedit_event_callback = nullptr;
    QTextEdit_TimerEvent_Callback qtextedit_timerevent_callback = nullptr;
    QTextEdit_KeyPressEvent_Callback qtextedit_keypressevent_callback = nullptr;
    QTextEdit_KeyReleaseEvent_Callback qtextedit_keyreleaseevent_callback = nullptr;
    QTextEdit_ResizeEvent_Callback qtextedit_resizeevent_callback = nullptr;
    QTextEdit_PaintEvent_Callback qtextedit_paintevent_callback = nullptr;
    QTextEdit_MousePressEvent_Callback qtextedit_mousepressevent_callback = nullptr;
    QTextEdit_MouseMoveEvent_Callback qtextedit_mousemoveevent_callback = nullptr;
    QTextEdit_MouseReleaseEvent_Callback qtextedit_mousereleaseevent_callback = nullptr;
    QTextEdit_MouseDoubleClickEvent_Callback qtextedit_mousedoubleclickevent_callback = nullptr;
    QTextEdit_FocusNextPrevChild_Callback qtextedit_focusnextprevchild_callback = nullptr;
    QTextEdit_ContextMenuEvent_Callback qtextedit_contextmenuevent_callback = nullptr;
    QTextEdit_DragEnterEvent_Callback qtextedit_dragenterevent_callback = nullptr;
    QTextEdit_DragLeaveEvent_Callback qtextedit_dragleaveevent_callback = nullptr;
    QTextEdit_DragMoveEvent_Callback qtextedit_dragmoveevent_callback = nullptr;
    QTextEdit_DropEvent_Callback qtextedit_dropevent_callback = nullptr;
    QTextEdit_FocusInEvent_Callback qtextedit_focusinevent_callback = nullptr;
    QTextEdit_FocusOutEvent_Callback qtextedit_focusoutevent_callback = nullptr;
    QTextEdit_ShowEvent_Callback qtextedit_showevent_callback = nullptr;
    QTextEdit_ChangeEvent_Callback qtextedit_changeevent_callback = nullptr;
    QTextEdit_WheelEvent_Callback qtextedit_wheelevent_callback = nullptr;
    QTextEdit_CreateMimeDataFromSelection_Callback qtextedit_createmimedatafromselection_callback = nullptr;
    QTextEdit_CanInsertFromMimeData_Callback qtextedit_caninsertfrommimedata_callback = nullptr;
    QTextEdit_InsertFromMimeData_Callback qtextedit_insertfrommimedata_callback = nullptr;
    QTextEdit_InputMethodEvent_Callback qtextedit_inputmethodevent_callback = nullptr;
    QTextEdit_ScrollContentsBy_Callback qtextedit_scrollcontentsby_callback = nullptr;
    QTextEdit_DoSetTextCursor_Callback qtextedit_dosettextcursor_callback = nullptr;
    QTextEdit_MinimumSizeHint_Callback qtextedit_minimumsizehint_callback = nullptr;
    QTextEdit_SizeHint_Callback qtextedit_sizehint_callback = nullptr;
    QTextEdit_SetupViewport_Callback qtextedit_setupviewport_callback = nullptr;
    QTextEdit_EventFilter_Callback qtextedit_eventfilter_callback = nullptr;
    QTextEdit_ViewportEvent_Callback qtextedit_viewportevent_callback = nullptr;
    QTextEdit_ViewportSizeHint_Callback qtextedit_viewportsizehint_callback = nullptr;
    QTextEdit_InitStyleOption_Callback qtextedit_initstyleoption_callback = nullptr;
    QTextEdit_DevType_Callback qtextedit_devtype_callback = nullptr;
    QTextEdit_SetVisible_Callback qtextedit_setvisible_callback = nullptr;
    QTextEdit_HeightForWidth_Callback qtextedit_heightforwidth_callback = nullptr;
    QTextEdit_HasHeightForWidth_Callback qtextedit_hasheightforwidth_callback = nullptr;
    QTextEdit_PaintEngine_Callback qtextedit_paintengine_callback = nullptr;
    QTextEdit_EnterEvent_Callback qtextedit_enterevent_callback = nullptr;
    QTextEdit_LeaveEvent_Callback qtextedit_leaveevent_callback = nullptr;
    QTextEdit_MoveEvent_Callback qtextedit_moveevent_callback = nullptr;
    QTextEdit_CloseEvent_Callback qtextedit_closeevent_callback = nullptr;
    QTextEdit_TabletEvent_Callback qtextedit_tabletevent_callback = nullptr;
    QTextEdit_ActionEvent_Callback qtextedit_actionevent_callback = nullptr;
    QTextEdit_HideEvent_Callback qtextedit_hideevent_callback = nullptr;
    QTextEdit_NativeEvent_Callback qtextedit_nativeevent_callback = nullptr;
    QTextEdit_Metric_Callback qtextedit_metric_callback = nullptr;
    QTextEdit_InitPainter_Callback qtextedit_initpainter_callback = nullptr;
    QTextEdit_Redirected_Callback qtextedit_redirected_callback = nullptr;
    QTextEdit_SharedPainter_Callback qtextedit_sharedpainter_callback = nullptr;
    QTextEdit_ChildEvent_Callback qtextedit_childevent_callback = nullptr;
    QTextEdit_CustomEvent_Callback qtextedit_customevent_callback = nullptr;
    QTextEdit_ConnectNotify_Callback qtextedit_connectnotify_callback = nullptr;
    QTextEdit_DisconnectNotify_Callback qtextedit_disconnectnotify_callback = nullptr;
    QTextEdit_ZoomInF_Callback qtextedit_zoominf_callback = nullptr;
    QTextEdit_SetViewportMargins_Callback qtextedit_setviewportmargins_callback = nullptr;
    QTextEdit_ViewportMargins_Callback qtextedit_viewportmargins_callback = nullptr;
    QTextEdit_DrawFrame_Callback qtextedit_drawframe_callback = nullptr;
    QTextEdit_UpdateMicroFocus_Callback qtextedit_updatemicrofocus_callback = nullptr;
    QTextEdit_Create_Callback qtextedit_create_callback = nullptr;
    QTextEdit_Destroy_Callback qtextedit_destroy_callback = nullptr;
    QTextEdit_FocusNextChild_Callback qtextedit_focusnextchild_callback = nullptr;
    QTextEdit_FocusPreviousChild_Callback qtextedit_focuspreviouschild_callback = nullptr;
    QTextEdit_Sender_Callback qtextedit_sender_callback = nullptr;
    QTextEdit_SenderSignalIndex_Callback qtextedit_sendersignalindex_callback = nullptr;
    QTextEdit_Receivers_Callback qtextedit_receivers_callback = nullptr;
    QTextEdit_IsSignalConnected_Callback qtextedit_issignalconnected_callback = nullptr;
    QTextEdit_GetDecodedMetricF_Callback qtextedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtextedit_metaobject_isbase = false;
    mutable bool qtextedit_metacast_isbase = false;
    mutable bool qtextedit_metacall_isbase = false;
    mutable bool qtextedit_loadresource_isbase = false;
    mutable bool qtextedit_inputmethodquery_isbase = false;
    mutable bool qtextedit_event_isbase = false;
    mutable bool qtextedit_timerevent_isbase = false;
    mutable bool qtextedit_keypressevent_isbase = false;
    mutable bool qtextedit_keyreleaseevent_isbase = false;
    mutable bool qtextedit_resizeevent_isbase = false;
    mutable bool qtextedit_paintevent_isbase = false;
    mutable bool qtextedit_mousepressevent_isbase = false;
    mutable bool qtextedit_mousemoveevent_isbase = false;
    mutable bool qtextedit_mousereleaseevent_isbase = false;
    mutable bool qtextedit_mousedoubleclickevent_isbase = false;
    mutable bool qtextedit_focusnextprevchild_isbase = false;
    mutable bool qtextedit_contextmenuevent_isbase = false;
    mutable bool qtextedit_dragenterevent_isbase = false;
    mutable bool qtextedit_dragleaveevent_isbase = false;
    mutable bool qtextedit_dragmoveevent_isbase = false;
    mutable bool qtextedit_dropevent_isbase = false;
    mutable bool qtextedit_focusinevent_isbase = false;
    mutable bool qtextedit_focusoutevent_isbase = false;
    mutable bool qtextedit_showevent_isbase = false;
    mutable bool qtextedit_changeevent_isbase = false;
    mutable bool qtextedit_wheelevent_isbase = false;
    mutable bool qtextedit_createmimedatafromselection_isbase = false;
    mutable bool qtextedit_caninsertfrommimedata_isbase = false;
    mutable bool qtextedit_insertfrommimedata_isbase = false;
    mutable bool qtextedit_inputmethodevent_isbase = false;
    mutable bool qtextedit_scrollcontentsby_isbase = false;
    mutable bool qtextedit_dosettextcursor_isbase = false;
    mutable bool qtextedit_minimumsizehint_isbase = false;
    mutable bool qtextedit_sizehint_isbase = false;
    mutable bool qtextedit_setupviewport_isbase = false;
    mutable bool qtextedit_eventfilter_isbase = false;
    mutable bool qtextedit_viewportevent_isbase = false;
    mutable bool qtextedit_viewportsizehint_isbase = false;
    mutable bool qtextedit_initstyleoption_isbase = false;
    mutable bool qtextedit_devtype_isbase = false;
    mutable bool qtextedit_setvisible_isbase = false;
    mutable bool qtextedit_heightforwidth_isbase = false;
    mutable bool qtextedit_hasheightforwidth_isbase = false;
    mutable bool qtextedit_paintengine_isbase = false;
    mutable bool qtextedit_enterevent_isbase = false;
    mutable bool qtextedit_leaveevent_isbase = false;
    mutable bool qtextedit_moveevent_isbase = false;
    mutable bool qtextedit_closeevent_isbase = false;
    mutable bool qtextedit_tabletevent_isbase = false;
    mutable bool qtextedit_actionevent_isbase = false;
    mutable bool qtextedit_hideevent_isbase = false;
    mutable bool qtextedit_nativeevent_isbase = false;
    mutable bool qtextedit_metric_isbase = false;
    mutable bool qtextedit_initpainter_isbase = false;
    mutable bool qtextedit_redirected_isbase = false;
    mutable bool qtextedit_sharedpainter_isbase = false;
    mutable bool qtextedit_childevent_isbase = false;
    mutable bool qtextedit_customevent_isbase = false;
    mutable bool qtextedit_connectnotify_isbase = false;
    mutable bool qtextedit_disconnectnotify_isbase = false;
    mutable bool qtextedit_zoominf_isbase = false;
    mutable bool qtextedit_setviewportmargins_isbase = false;
    mutable bool qtextedit_viewportmargins_isbase = false;
    mutable bool qtextedit_drawframe_isbase = false;
    mutable bool qtextedit_updatemicrofocus_isbase = false;
    mutable bool qtextedit_create_isbase = false;
    mutable bool qtextedit_destroy_isbase = false;
    mutable bool qtextedit_focusnextchild_isbase = false;
    mutable bool qtextedit_focuspreviouschild_isbase = false;
    mutable bool qtextedit_sender_isbase = false;
    mutable bool qtextedit_sendersignalindex_isbase = false;
    mutable bool qtextedit_receivers_isbase = false;
    mutable bool qtextedit_issignalconnected_isbase = false;
    mutable bool qtextedit_getdecodedmetricf_isbase = false;

  public:
    VirtualQTextEdit(QWidget* parent) : QTextEdit(parent) {};
    VirtualQTextEdit() : QTextEdit() {};
    VirtualQTextEdit(const QString& text) : QTextEdit(text) {};
    VirtualQTextEdit(const QString& text, QWidget* parent) : QTextEdit(text, parent) {};

    // Callback setters
    inline void setQTextEdit_MetaObject_Callback(QTextEdit_MetaObject_Callback cb) { qtextedit_metaobject_callback = cb; }
    inline void setQTextEdit_Metacast_Callback(QTextEdit_Metacast_Callback cb) { qtextedit_metacast_callback = cb; }
    inline void setQTextEdit_Metacall_Callback(QTextEdit_Metacall_Callback cb) { qtextedit_metacall_callback = cb; }
    inline void setQTextEdit_LoadResource_Callback(QTextEdit_LoadResource_Callback cb) { qtextedit_loadresource_callback = cb; }
    inline void setQTextEdit_InputMethodQuery_Callback(QTextEdit_InputMethodQuery_Callback cb) { qtextedit_inputmethodquery_callback = cb; }
    inline void setQTextEdit_Event_Callback(QTextEdit_Event_Callback cb) { qtextedit_event_callback = cb; }
    inline void setQTextEdit_TimerEvent_Callback(QTextEdit_TimerEvent_Callback cb) { qtextedit_timerevent_callback = cb; }
    inline void setQTextEdit_KeyPressEvent_Callback(QTextEdit_KeyPressEvent_Callback cb) { qtextedit_keypressevent_callback = cb; }
    inline void setQTextEdit_KeyReleaseEvent_Callback(QTextEdit_KeyReleaseEvent_Callback cb) { qtextedit_keyreleaseevent_callback = cb; }
    inline void setQTextEdit_ResizeEvent_Callback(QTextEdit_ResizeEvent_Callback cb) { qtextedit_resizeevent_callback = cb; }
    inline void setQTextEdit_PaintEvent_Callback(QTextEdit_PaintEvent_Callback cb) { qtextedit_paintevent_callback = cb; }
    inline void setQTextEdit_MousePressEvent_Callback(QTextEdit_MousePressEvent_Callback cb) { qtextedit_mousepressevent_callback = cb; }
    inline void setQTextEdit_MouseMoveEvent_Callback(QTextEdit_MouseMoveEvent_Callback cb) { qtextedit_mousemoveevent_callback = cb; }
    inline void setQTextEdit_MouseReleaseEvent_Callback(QTextEdit_MouseReleaseEvent_Callback cb) { qtextedit_mousereleaseevent_callback = cb; }
    inline void setQTextEdit_MouseDoubleClickEvent_Callback(QTextEdit_MouseDoubleClickEvent_Callback cb) { qtextedit_mousedoubleclickevent_callback = cb; }
    inline void setQTextEdit_FocusNextPrevChild_Callback(QTextEdit_FocusNextPrevChild_Callback cb) { qtextedit_focusnextprevchild_callback = cb; }
    inline void setQTextEdit_ContextMenuEvent_Callback(QTextEdit_ContextMenuEvent_Callback cb) { qtextedit_contextmenuevent_callback = cb; }
    inline void setQTextEdit_DragEnterEvent_Callback(QTextEdit_DragEnterEvent_Callback cb) { qtextedit_dragenterevent_callback = cb; }
    inline void setQTextEdit_DragLeaveEvent_Callback(QTextEdit_DragLeaveEvent_Callback cb) { qtextedit_dragleaveevent_callback = cb; }
    inline void setQTextEdit_DragMoveEvent_Callback(QTextEdit_DragMoveEvent_Callback cb) { qtextedit_dragmoveevent_callback = cb; }
    inline void setQTextEdit_DropEvent_Callback(QTextEdit_DropEvent_Callback cb) { qtextedit_dropevent_callback = cb; }
    inline void setQTextEdit_FocusInEvent_Callback(QTextEdit_FocusInEvent_Callback cb) { qtextedit_focusinevent_callback = cb; }
    inline void setQTextEdit_FocusOutEvent_Callback(QTextEdit_FocusOutEvent_Callback cb) { qtextedit_focusoutevent_callback = cb; }
    inline void setQTextEdit_ShowEvent_Callback(QTextEdit_ShowEvent_Callback cb) { qtextedit_showevent_callback = cb; }
    inline void setQTextEdit_ChangeEvent_Callback(QTextEdit_ChangeEvent_Callback cb) { qtextedit_changeevent_callback = cb; }
    inline void setQTextEdit_WheelEvent_Callback(QTextEdit_WheelEvent_Callback cb) { qtextedit_wheelevent_callback = cb; }
    inline void setQTextEdit_CreateMimeDataFromSelection_Callback(QTextEdit_CreateMimeDataFromSelection_Callback cb) { qtextedit_createmimedatafromselection_callback = cb; }
    inline void setQTextEdit_CanInsertFromMimeData_Callback(QTextEdit_CanInsertFromMimeData_Callback cb) { qtextedit_caninsertfrommimedata_callback = cb; }
    inline void setQTextEdit_InsertFromMimeData_Callback(QTextEdit_InsertFromMimeData_Callback cb) { qtextedit_insertfrommimedata_callback = cb; }
    inline void setQTextEdit_InputMethodEvent_Callback(QTextEdit_InputMethodEvent_Callback cb) { qtextedit_inputmethodevent_callback = cb; }
    inline void setQTextEdit_ScrollContentsBy_Callback(QTextEdit_ScrollContentsBy_Callback cb) { qtextedit_scrollcontentsby_callback = cb; }
    inline void setQTextEdit_DoSetTextCursor_Callback(QTextEdit_DoSetTextCursor_Callback cb) { qtextedit_dosettextcursor_callback = cb; }
    inline void setQTextEdit_MinimumSizeHint_Callback(QTextEdit_MinimumSizeHint_Callback cb) { qtextedit_minimumsizehint_callback = cb; }
    inline void setQTextEdit_SizeHint_Callback(QTextEdit_SizeHint_Callback cb) { qtextedit_sizehint_callback = cb; }
    inline void setQTextEdit_SetupViewport_Callback(QTextEdit_SetupViewport_Callback cb) { qtextedit_setupviewport_callback = cb; }
    inline void setQTextEdit_EventFilter_Callback(QTextEdit_EventFilter_Callback cb) { qtextedit_eventfilter_callback = cb; }
    inline void setQTextEdit_ViewportEvent_Callback(QTextEdit_ViewportEvent_Callback cb) { qtextedit_viewportevent_callback = cb; }
    inline void setQTextEdit_ViewportSizeHint_Callback(QTextEdit_ViewportSizeHint_Callback cb) { qtextedit_viewportsizehint_callback = cb; }
    inline void setQTextEdit_InitStyleOption_Callback(QTextEdit_InitStyleOption_Callback cb) { qtextedit_initstyleoption_callback = cb; }
    inline void setQTextEdit_DevType_Callback(QTextEdit_DevType_Callback cb) { qtextedit_devtype_callback = cb; }
    inline void setQTextEdit_SetVisible_Callback(QTextEdit_SetVisible_Callback cb) { qtextedit_setvisible_callback = cb; }
    inline void setQTextEdit_HeightForWidth_Callback(QTextEdit_HeightForWidth_Callback cb) { qtextedit_heightforwidth_callback = cb; }
    inline void setQTextEdit_HasHeightForWidth_Callback(QTextEdit_HasHeightForWidth_Callback cb) { qtextedit_hasheightforwidth_callback = cb; }
    inline void setQTextEdit_PaintEngine_Callback(QTextEdit_PaintEngine_Callback cb) { qtextedit_paintengine_callback = cb; }
    inline void setQTextEdit_EnterEvent_Callback(QTextEdit_EnterEvent_Callback cb) { qtextedit_enterevent_callback = cb; }
    inline void setQTextEdit_LeaveEvent_Callback(QTextEdit_LeaveEvent_Callback cb) { qtextedit_leaveevent_callback = cb; }
    inline void setQTextEdit_MoveEvent_Callback(QTextEdit_MoveEvent_Callback cb) { qtextedit_moveevent_callback = cb; }
    inline void setQTextEdit_CloseEvent_Callback(QTextEdit_CloseEvent_Callback cb) { qtextedit_closeevent_callback = cb; }
    inline void setQTextEdit_TabletEvent_Callback(QTextEdit_TabletEvent_Callback cb) { qtextedit_tabletevent_callback = cb; }
    inline void setQTextEdit_ActionEvent_Callback(QTextEdit_ActionEvent_Callback cb) { qtextedit_actionevent_callback = cb; }
    inline void setQTextEdit_HideEvent_Callback(QTextEdit_HideEvent_Callback cb) { qtextedit_hideevent_callback = cb; }
    inline void setQTextEdit_NativeEvent_Callback(QTextEdit_NativeEvent_Callback cb) { qtextedit_nativeevent_callback = cb; }
    inline void setQTextEdit_Metric_Callback(QTextEdit_Metric_Callback cb) { qtextedit_metric_callback = cb; }
    inline void setQTextEdit_InitPainter_Callback(QTextEdit_InitPainter_Callback cb) { qtextedit_initpainter_callback = cb; }
    inline void setQTextEdit_Redirected_Callback(QTextEdit_Redirected_Callback cb) { qtextedit_redirected_callback = cb; }
    inline void setQTextEdit_SharedPainter_Callback(QTextEdit_SharedPainter_Callback cb) { qtextedit_sharedpainter_callback = cb; }
    inline void setQTextEdit_ChildEvent_Callback(QTextEdit_ChildEvent_Callback cb) { qtextedit_childevent_callback = cb; }
    inline void setQTextEdit_CustomEvent_Callback(QTextEdit_CustomEvent_Callback cb) { qtextedit_customevent_callback = cb; }
    inline void setQTextEdit_ConnectNotify_Callback(QTextEdit_ConnectNotify_Callback cb) { qtextedit_connectnotify_callback = cb; }
    inline void setQTextEdit_DisconnectNotify_Callback(QTextEdit_DisconnectNotify_Callback cb) { qtextedit_disconnectnotify_callback = cb; }
    inline void setQTextEdit_ZoomInF_Callback(QTextEdit_ZoomInF_Callback cb) { qtextedit_zoominf_callback = cb; }
    inline void setQTextEdit_SetViewportMargins_Callback(QTextEdit_SetViewportMargins_Callback cb) { qtextedit_setviewportmargins_callback = cb; }
    inline void setQTextEdit_ViewportMargins_Callback(QTextEdit_ViewportMargins_Callback cb) { qtextedit_viewportmargins_callback = cb; }
    inline void setQTextEdit_DrawFrame_Callback(QTextEdit_DrawFrame_Callback cb) { qtextedit_drawframe_callback = cb; }
    inline void setQTextEdit_UpdateMicroFocus_Callback(QTextEdit_UpdateMicroFocus_Callback cb) { qtextedit_updatemicrofocus_callback = cb; }
    inline void setQTextEdit_Create_Callback(QTextEdit_Create_Callback cb) { qtextedit_create_callback = cb; }
    inline void setQTextEdit_Destroy_Callback(QTextEdit_Destroy_Callback cb) { qtextedit_destroy_callback = cb; }
    inline void setQTextEdit_FocusNextChild_Callback(QTextEdit_FocusNextChild_Callback cb) { qtextedit_focusnextchild_callback = cb; }
    inline void setQTextEdit_FocusPreviousChild_Callback(QTextEdit_FocusPreviousChild_Callback cb) { qtextedit_focuspreviouschild_callback = cb; }
    inline void setQTextEdit_Sender_Callback(QTextEdit_Sender_Callback cb) { qtextedit_sender_callback = cb; }
    inline void setQTextEdit_SenderSignalIndex_Callback(QTextEdit_SenderSignalIndex_Callback cb) { qtextedit_sendersignalindex_callback = cb; }
    inline void setQTextEdit_Receivers_Callback(QTextEdit_Receivers_Callback cb) { qtextedit_receivers_callback = cb; }
    inline void setQTextEdit_IsSignalConnected_Callback(QTextEdit_IsSignalConnected_Callback cb) { qtextedit_issignalconnected_callback = cb; }
    inline void setQTextEdit_GetDecodedMetricF_Callback(QTextEdit_GetDecodedMetricF_Callback cb) { qtextedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQTextEdit_MetaObject_IsBase(bool value) const { qtextedit_metaobject_isbase = value; }
    inline void setQTextEdit_Metacast_IsBase(bool value) const { qtextedit_metacast_isbase = value; }
    inline void setQTextEdit_Metacall_IsBase(bool value) const { qtextedit_metacall_isbase = value; }
    inline void setQTextEdit_LoadResource_IsBase(bool value) const { qtextedit_loadresource_isbase = value; }
    inline void setQTextEdit_InputMethodQuery_IsBase(bool value) const { qtextedit_inputmethodquery_isbase = value; }
    inline void setQTextEdit_Event_IsBase(bool value) const { qtextedit_event_isbase = value; }
    inline void setQTextEdit_TimerEvent_IsBase(bool value) const { qtextedit_timerevent_isbase = value; }
    inline void setQTextEdit_KeyPressEvent_IsBase(bool value) const { qtextedit_keypressevent_isbase = value; }
    inline void setQTextEdit_KeyReleaseEvent_IsBase(bool value) const { qtextedit_keyreleaseevent_isbase = value; }
    inline void setQTextEdit_ResizeEvent_IsBase(bool value) const { qtextedit_resizeevent_isbase = value; }
    inline void setQTextEdit_PaintEvent_IsBase(bool value) const { qtextedit_paintevent_isbase = value; }
    inline void setQTextEdit_MousePressEvent_IsBase(bool value) const { qtextedit_mousepressevent_isbase = value; }
    inline void setQTextEdit_MouseMoveEvent_IsBase(bool value) const { qtextedit_mousemoveevent_isbase = value; }
    inline void setQTextEdit_MouseReleaseEvent_IsBase(bool value) const { qtextedit_mousereleaseevent_isbase = value; }
    inline void setQTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { qtextedit_mousedoubleclickevent_isbase = value; }
    inline void setQTextEdit_FocusNextPrevChild_IsBase(bool value) const { qtextedit_focusnextprevchild_isbase = value; }
    inline void setQTextEdit_ContextMenuEvent_IsBase(bool value) const { qtextedit_contextmenuevent_isbase = value; }
    inline void setQTextEdit_DragEnterEvent_IsBase(bool value) const { qtextedit_dragenterevent_isbase = value; }
    inline void setQTextEdit_DragLeaveEvent_IsBase(bool value) const { qtextedit_dragleaveevent_isbase = value; }
    inline void setQTextEdit_DragMoveEvent_IsBase(bool value) const { qtextedit_dragmoveevent_isbase = value; }
    inline void setQTextEdit_DropEvent_IsBase(bool value) const { qtextedit_dropevent_isbase = value; }
    inline void setQTextEdit_FocusInEvent_IsBase(bool value) const { qtextedit_focusinevent_isbase = value; }
    inline void setQTextEdit_FocusOutEvent_IsBase(bool value) const { qtextedit_focusoutevent_isbase = value; }
    inline void setQTextEdit_ShowEvent_IsBase(bool value) const { qtextedit_showevent_isbase = value; }
    inline void setQTextEdit_ChangeEvent_IsBase(bool value) const { qtextedit_changeevent_isbase = value; }
    inline void setQTextEdit_WheelEvent_IsBase(bool value) const { qtextedit_wheelevent_isbase = value; }
    inline void setQTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { qtextedit_createmimedatafromselection_isbase = value; }
    inline void setQTextEdit_CanInsertFromMimeData_IsBase(bool value) const { qtextedit_caninsertfrommimedata_isbase = value; }
    inline void setQTextEdit_InsertFromMimeData_IsBase(bool value) const { qtextedit_insertfrommimedata_isbase = value; }
    inline void setQTextEdit_InputMethodEvent_IsBase(bool value) const { qtextedit_inputmethodevent_isbase = value; }
    inline void setQTextEdit_ScrollContentsBy_IsBase(bool value) const { qtextedit_scrollcontentsby_isbase = value; }
    inline void setQTextEdit_DoSetTextCursor_IsBase(bool value) const { qtextedit_dosettextcursor_isbase = value; }
    inline void setQTextEdit_MinimumSizeHint_IsBase(bool value) const { qtextedit_minimumsizehint_isbase = value; }
    inline void setQTextEdit_SizeHint_IsBase(bool value) const { qtextedit_sizehint_isbase = value; }
    inline void setQTextEdit_SetupViewport_IsBase(bool value) const { qtextedit_setupviewport_isbase = value; }
    inline void setQTextEdit_EventFilter_IsBase(bool value) const { qtextedit_eventfilter_isbase = value; }
    inline void setQTextEdit_ViewportEvent_IsBase(bool value) const { qtextedit_viewportevent_isbase = value; }
    inline void setQTextEdit_ViewportSizeHint_IsBase(bool value) const { qtextedit_viewportsizehint_isbase = value; }
    inline void setQTextEdit_InitStyleOption_IsBase(bool value) const { qtextedit_initstyleoption_isbase = value; }
    inline void setQTextEdit_DevType_IsBase(bool value) const { qtextedit_devtype_isbase = value; }
    inline void setQTextEdit_SetVisible_IsBase(bool value) const { qtextedit_setvisible_isbase = value; }
    inline void setQTextEdit_HeightForWidth_IsBase(bool value) const { qtextedit_heightforwidth_isbase = value; }
    inline void setQTextEdit_HasHeightForWidth_IsBase(bool value) const { qtextedit_hasheightforwidth_isbase = value; }
    inline void setQTextEdit_PaintEngine_IsBase(bool value) const { qtextedit_paintengine_isbase = value; }
    inline void setQTextEdit_EnterEvent_IsBase(bool value) const { qtextedit_enterevent_isbase = value; }
    inline void setQTextEdit_LeaveEvent_IsBase(bool value) const { qtextedit_leaveevent_isbase = value; }
    inline void setQTextEdit_MoveEvent_IsBase(bool value) const { qtextedit_moveevent_isbase = value; }
    inline void setQTextEdit_CloseEvent_IsBase(bool value) const { qtextedit_closeevent_isbase = value; }
    inline void setQTextEdit_TabletEvent_IsBase(bool value) const { qtextedit_tabletevent_isbase = value; }
    inline void setQTextEdit_ActionEvent_IsBase(bool value) const { qtextedit_actionevent_isbase = value; }
    inline void setQTextEdit_HideEvent_IsBase(bool value) const { qtextedit_hideevent_isbase = value; }
    inline void setQTextEdit_NativeEvent_IsBase(bool value) const { qtextedit_nativeevent_isbase = value; }
    inline void setQTextEdit_Metric_IsBase(bool value) const { qtextedit_metric_isbase = value; }
    inline void setQTextEdit_InitPainter_IsBase(bool value) const { qtextedit_initpainter_isbase = value; }
    inline void setQTextEdit_Redirected_IsBase(bool value) const { qtextedit_redirected_isbase = value; }
    inline void setQTextEdit_SharedPainter_IsBase(bool value) const { qtextedit_sharedpainter_isbase = value; }
    inline void setQTextEdit_ChildEvent_IsBase(bool value) const { qtextedit_childevent_isbase = value; }
    inline void setQTextEdit_CustomEvent_IsBase(bool value) const { qtextedit_customevent_isbase = value; }
    inline void setQTextEdit_ConnectNotify_IsBase(bool value) const { qtextedit_connectnotify_isbase = value; }
    inline void setQTextEdit_DisconnectNotify_IsBase(bool value) const { qtextedit_disconnectnotify_isbase = value; }
    inline void setQTextEdit_ZoomInF_IsBase(bool value) const { qtextedit_zoominf_isbase = value; }
    inline void setQTextEdit_SetViewportMargins_IsBase(bool value) const { qtextedit_setviewportmargins_isbase = value; }
    inline void setQTextEdit_ViewportMargins_IsBase(bool value) const { qtextedit_viewportmargins_isbase = value; }
    inline void setQTextEdit_DrawFrame_IsBase(bool value) const { qtextedit_drawframe_isbase = value; }
    inline void setQTextEdit_UpdateMicroFocus_IsBase(bool value) const { qtextedit_updatemicrofocus_isbase = value; }
    inline void setQTextEdit_Create_IsBase(bool value) const { qtextedit_create_isbase = value; }
    inline void setQTextEdit_Destroy_IsBase(bool value) const { qtextedit_destroy_isbase = value; }
    inline void setQTextEdit_FocusNextChild_IsBase(bool value) const { qtextedit_focusnextchild_isbase = value; }
    inline void setQTextEdit_FocusPreviousChild_IsBase(bool value) const { qtextedit_focuspreviouschild_isbase = value; }
    inline void setQTextEdit_Sender_IsBase(bool value) const { qtextedit_sender_isbase = value; }
    inline void setQTextEdit_SenderSignalIndex_IsBase(bool value) const { qtextedit_sendersignalindex_isbase = value; }
    inline void setQTextEdit_Receivers_IsBase(bool value) const { qtextedit_receivers_isbase = value; }
    inline void setQTextEdit_IsSignalConnected_IsBase(bool value) const { qtextedit_issignalconnected_isbase = value; }
    inline void setQTextEdit_GetDecodedMetricF_IsBase(bool value) const { qtextedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextedit_metaobject_isbase) {
            qtextedit_metaobject_isbase = false;
            return QTextEdit::metaObject();
        }
        auto metaobject_cb = qtextedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTextEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextedit_metacast_isbase) {
            qtextedit_metacast_isbase = false;
            return QTextEdit::qt_metacast(param1);
        }
        auto metacast_cb = qtextedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextedit_metacall_isbase) {
            qtextedit_metacall_isbase = false;
            return QTextEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtextedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextedit_loadresource_isbase) {
            qtextedit_loadresource_isbase = false;
            return QTextEdit::loadResource(typeVal, name);
        }
        auto loadresource_cb = qtextedit_loadresource_callback;
        if (loadresource_cb) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = loadresource_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QTextEdit::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qtextedit_inputmethodquery_isbase) {
            qtextedit_inputmethodquery_isbase = false;
            return QTextEdit::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = qtextedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QTextEdit::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtextedit_event_isbase) {
            qtextedit_event_isbase = false;
            return QTextEdit::event(e);
        }
        auto event_cb = qtextedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qtextedit_timerevent_isbase) {
            qtextedit_timerevent_isbase = false;
            QTextEdit::timerEvent(e);
            return;
        }
        auto timerevent_cb = qtextedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QTextEdit::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qtextedit_keypressevent_isbase) {
            qtextedit_keypressevent_isbase = false;
            QTextEdit::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = qtextedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        QTextEdit::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtextedit_keyreleaseevent_isbase) {
            qtextedit_keyreleaseevent_isbase = false;
            QTextEdit::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = qtextedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QTextEdit::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qtextedit_resizeevent_isbase) {
            qtextedit_resizeevent_isbase = false;
            QTextEdit::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = qtextedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        QTextEdit::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtextedit_paintevent_isbase) {
            qtextedit_paintevent_isbase = false;
            QTextEdit::paintEvent(e);
            return;
        }
        auto paintevent_cb = qtextedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        QTextEdit::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qtextedit_mousepressevent_isbase) {
            qtextedit_mousepressevent_isbase = false;
            QTextEdit::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = qtextedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QTextEdit::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qtextedit_mousemoveevent_isbase) {
            qtextedit_mousemoveevent_isbase = false;
            QTextEdit::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = qtextedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QTextEdit::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qtextedit_mousereleaseevent_isbase) {
            qtextedit_mousereleaseevent_isbase = false;
            QTextEdit::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qtextedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QTextEdit::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qtextedit_mousedoubleclickevent_isbase) {
            qtextedit_mousedoubleclickevent_isbase = false;
            QTextEdit::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = qtextedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QTextEdit::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtextedit_focusnextprevchild_isbase) {
            qtextedit_focusnextprevchild_isbase = false;
            return QTextEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qtextedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qtextedit_contextmenuevent_isbase) {
            qtextedit_contextmenuevent_isbase = false;
            QTextEdit::contextMenuEvent(e);
            return;
        }
        auto contextmenuevent_cb = qtextedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = e;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QTextEdit::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qtextedit_dragenterevent_isbase) {
            qtextedit_dragenterevent_isbase = false;
            QTextEdit::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = qtextedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QTextEdit::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qtextedit_dragleaveevent_isbase) {
            qtextedit_dragleaveevent_isbase = false;
            QTextEdit::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = qtextedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QTextEdit::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qtextedit_dragmoveevent_isbase) {
            qtextedit_dragmoveevent_isbase = false;
            QTextEdit::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = qtextedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QTextEdit::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qtextedit_dropevent_isbase) {
            qtextedit_dropevent_isbase = false;
            QTextEdit::dropEvent(e);
            return;
        }
        auto dropevent_cb = qtextedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;

            dropevent_cb(this, cbval1);
            return;
        }
        QTextEdit::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtextedit_focusinevent_isbase) {
            qtextedit_focusinevent_isbase = false;
            QTextEdit::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = qtextedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        QTextEdit::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qtextedit_focusoutevent_isbase) {
            qtextedit_focusoutevent_isbase = false;
            QTextEdit::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = qtextedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QTextEdit::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtextedit_showevent_isbase) {
            qtextedit_showevent_isbase = false;
            QTextEdit::showEvent(param1);
            return;
        }
        auto showevent_cb = qtextedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QTextEdit::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qtextedit_changeevent_isbase) {
            qtextedit_changeevent_isbase = false;
            QTextEdit::changeEvent(e);
            return;
        }
        auto changeevent_cb = qtextedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QTextEdit::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qtextedit_wheelevent_isbase) {
            qtextedit_wheelevent_isbase = false;
            QTextEdit::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qtextedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QTextEdit::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qtextedit_createmimedatafromselection_isbase) {
            qtextedit_createmimedatafromselection_isbase = false;
            return QTextEdit::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = qtextedit_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return QTextEdit::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qtextedit_caninsertfrommimedata_isbase) {
            qtextedit_caninsertfrommimedata_isbase = false;
            return QTextEdit::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = qtextedit_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qtextedit_insertfrommimedata_isbase) {
            qtextedit_insertfrommimedata_isbase = false;
            QTextEdit::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = qtextedit_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            insertfrommimedata_cb(this, cbval1);
            return;
        }
        QTextEdit::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtextedit_inputmethodevent_isbase) {
            qtextedit_inputmethodevent_isbase = false;
            QTextEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qtextedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QTextEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtextedit_scrollcontentsby_isbase) {
            qtextedit_scrollcontentsby_isbase = false;
            QTextEdit::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qtextedit_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QTextEdit::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qtextedit_dosettextcursor_isbase) {
            qtextedit_dosettextcursor_isbase = false;
            QTextEdit::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = qtextedit_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            dosettextcursor_cb(this, cbval1);
            return;
        }
        QTextEdit::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtextedit_minimumsizehint_isbase) {
            qtextedit_minimumsizehint_isbase = false;
            return QTextEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = qtextedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QTextEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtextedit_sizehint_isbase) {
            qtextedit_sizehint_isbase = false;
            return QTextEdit::sizeHint();
        }
        auto sizehint_cb = qtextedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QTextEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtextedit_setupviewport_isbase) {
            qtextedit_setupviewport_isbase = false;
            QTextEdit::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qtextedit_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QTextEdit::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qtextedit_eventfilter_isbase) {
            qtextedit_eventfilter_isbase = false;
            return QTextEdit::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qtextedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextEdit::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qtextedit_viewportevent_isbase) {
            qtextedit_viewportevent_isbase = false;
            return QTextEdit::viewportEvent(param1);
        }
        auto viewportevent_cb = qtextedit_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtextedit_viewportsizehint_isbase) {
            qtextedit_viewportsizehint_isbase = false;
            return QTextEdit::viewportSizeHint();
        }
        auto viewportsizehint_cb = qtextedit_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QTextEdit::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtextedit_initstyleoption_isbase) {
            qtextedit_initstyleoption_isbase = false;
            QTextEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qtextedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QTextEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtextedit_devtype_isbase) {
            qtextedit_devtype_isbase = false;
            return QTextEdit::devType();
        }
        auto devtype_cb = qtextedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtextedit_setvisible_isbase) {
            qtextedit_setvisible_isbase = false;
            QTextEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = qtextedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QTextEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtextedit_heightforwidth_isbase) {
            qtextedit_heightforwidth_isbase = false;
            return QTextEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = qtextedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtextedit_hasheightforwidth_isbase) {
            qtextedit_hasheightforwidth_isbase = false;
            return QTextEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qtextedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QTextEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtextedit_paintengine_isbase) {
            qtextedit_paintengine_isbase = false;
            return QTextEdit::paintEngine();
        }
        auto paintengine_cb = qtextedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QTextEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtextedit_enterevent_isbase) {
            qtextedit_enterevent_isbase = false;
            QTextEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = qtextedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QTextEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtextedit_leaveevent_isbase) {
            qtextedit_leaveevent_isbase = false;
            QTextEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qtextedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QTextEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtextedit_moveevent_isbase) {
            qtextedit_moveevent_isbase = false;
            QTextEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = qtextedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QTextEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtextedit_closeevent_isbase) {
            qtextedit_closeevent_isbase = false;
            QTextEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = qtextedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QTextEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtextedit_tabletevent_isbase) {
            qtextedit_tabletevent_isbase = false;
            QTextEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qtextedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QTextEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtextedit_actionevent_isbase) {
            qtextedit_actionevent_isbase = false;
            QTextEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = qtextedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QTextEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtextedit_hideevent_isbase) {
            qtextedit_hideevent_isbase = false;
            QTextEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = qtextedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QTextEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtextedit_nativeevent_isbase) {
            qtextedit_nativeevent_isbase = false;
            return QTextEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qtextedit_nativeevent_callback;
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
        return QTextEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtextedit_metric_isbase) {
            qtextedit_metric_isbase = false;
            return QTextEdit::metric(param1);
        }
        auto metric_cb = qtextedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtextedit_initpainter_isbase) {
            qtextedit_initpainter_isbase = false;
            QTextEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = qtextedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QTextEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtextedit_redirected_isbase) {
            qtextedit_redirected_isbase = false;
            return QTextEdit::redirected(offset);
        }
        auto redirected_cb = qtextedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtextedit_sharedpainter_isbase) {
            qtextedit_sharedpainter_isbase = false;
            return QTextEdit::sharedPainter();
        }
        auto sharedpainter_cb = qtextedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QTextEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextedit_childevent_isbase) {
            qtextedit_childevent_isbase = false;
            QTextEdit::childEvent(event);
            return;
        }
        auto childevent_cb = qtextedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTextEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextedit_customevent_isbase) {
            qtextedit_customevent_isbase = false;
            QTextEdit::customEvent(event);
            return;
        }
        auto customevent_cb = qtextedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTextEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextedit_connectnotify_isbase) {
            qtextedit_connectnotify_isbase = false;
            QTextEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtextedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTextEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextedit_disconnectnotify_isbase) {
            qtextedit_disconnectnotify_isbase = false;
            QTextEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtextedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTextEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (qtextedit_zoominf_isbase) {
            qtextedit_zoominf_isbase = false;
            QTextEdit::zoomInF(range);
            return;
        }
        auto zoominf_cb = qtextedit_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;

            zoominf_cb(this, cbval1);
            return;
        }
        QTextEdit::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtextedit_setviewportmargins_isbase) {
            qtextedit_setviewportmargins_isbase = false;
            QTextEdit::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qtextedit_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QTextEdit::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtextedit_viewportmargins_isbase) {
            qtextedit_viewportmargins_isbase = false;
            return QTextEdit::viewportMargins();
        }
        auto viewportmargins_cb = qtextedit_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QTextEdit::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtextedit_drawframe_isbase) {
            qtextedit_drawframe_isbase = false;
            QTextEdit::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qtextedit_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QTextEdit::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtextedit_updatemicrofocus_isbase) {
            qtextedit_updatemicrofocus_isbase = false;
            QTextEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qtextedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QTextEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtextedit_create_isbase) {
            qtextedit_create_isbase = false;
            QTextEdit::create();
            return;
        }
        auto create_cb = qtextedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QTextEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtextedit_destroy_isbase) {
            qtextedit_destroy_isbase = false;
            QTextEdit::destroy();
            return;
        }
        auto destroy_cb = qtextedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QTextEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtextedit_focusnextchild_isbase) {
            qtextedit_focusnextchild_isbase = false;
            return QTextEdit::focusNextChild();
        }
        auto focusnextchild_cb = qtextedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QTextEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtextedit_focuspreviouschild_isbase) {
            qtextedit_focuspreviouschild_isbase = false;
            return QTextEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qtextedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QTextEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextedit_sender_isbase) {
            qtextedit_sender_isbase = false;
            return QTextEdit::sender();
        }
        auto sender_cb = qtextedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTextEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextedit_sendersignalindex_isbase) {
            qtextedit_sendersignalindex_isbase = false;
            return QTextEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtextedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextedit_receivers_isbase) {
            qtextedit_receivers_isbase = false;
            return QTextEdit::receivers(signal);
        }
        auto receivers_cb = qtextedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextedit_issignalconnected_isbase) {
            qtextedit_issignalconnected_isbase = false;
            return QTextEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtextedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTextEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtextedit_getdecodedmetricf_isbase) {
            qtextedit_getdecodedmetricf_isbase = false;
            return QTextEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qtextedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QTextEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QTextEdit_Event(QTextEdit* self, QEvent* e);
    friend bool QTextEdit_SuperEvent(QTextEdit* self, QEvent* e);
    friend void QTextEdit_TimerEvent(QTextEdit* self, QTimerEvent* e);
    friend void QTextEdit_SuperTimerEvent(QTextEdit* self, QTimerEvent* e);
    friend void QTextEdit_KeyPressEvent(QTextEdit* self, QKeyEvent* e);
    friend void QTextEdit_SuperKeyPressEvent(QTextEdit* self, QKeyEvent* e);
    friend void QTextEdit_KeyReleaseEvent(QTextEdit* self, QKeyEvent* e);
    friend void QTextEdit_SuperKeyReleaseEvent(QTextEdit* self, QKeyEvent* e);
    friend void QTextEdit_ResizeEvent(QTextEdit* self, QResizeEvent* e);
    friend void QTextEdit_SuperResizeEvent(QTextEdit* self, QResizeEvent* e);
    friend void QTextEdit_PaintEvent(QTextEdit* self, QPaintEvent* e);
    friend void QTextEdit_SuperPaintEvent(QTextEdit* self, QPaintEvent* e);
    friend void QTextEdit_MousePressEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_SuperMousePressEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_MouseMoveEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_SuperMouseMoveEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_MouseReleaseEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_SuperMouseReleaseEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_MouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e);
    friend void QTextEdit_SuperMouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e);
    friend bool QTextEdit_FocusNextPrevChild(QTextEdit* self, bool next);
    friend bool QTextEdit_SuperFocusNextPrevChild(QTextEdit* self, bool next);
    friend void QTextEdit_ContextMenuEvent(QTextEdit* self, QContextMenuEvent* e);
    friend void QTextEdit_SuperContextMenuEvent(QTextEdit* self, QContextMenuEvent* e);
    friend void QTextEdit_DragEnterEvent(QTextEdit* self, QDragEnterEvent* e);
    friend void QTextEdit_SuperDragEnterEvent(QTextEdit* self, QDragEnterEvent* e);
    friend void QTextEdit_DragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e);
    friend void QTextEdit_SuperDragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e);
    friend void QTextEdit_DragMoveEvent(QTextEdit* self, QDragMoveEvent* e);
    friend void QTextEdit_SuperDragMoveEvent(QTextEdit* self, QDragMoveEvent* e);
    friend void QTextEdit_DropEvent(QTextEdit* self, QDropEvent* e);
    friend void QTextEdit_SuperDropEvent(QTextEdit* self, QDropEvent* e);
    friend void QTextEdit_FocusInEvent(QTextEdit* self, QFocusEvent* e);
    friend void QTextEdit_SuperFocusInEvent(QTextEdit* self, QFocusEvent* e);
    friend void QTextEdit_FocusOutEvent(QTextEdit* self, QFocusEvent* e);
    friend void QTextEdit_SuperFocusOutEvent(QTextEdit* self, QFocusEvent* e);
    friend void QTextEdit_ShowEvent(QTextEdit* self, QShowEvent* param1);
    friend void QTextEdit_SuperShowEvent(QTextEdit* self, QShowEvent* param1);
    friend void QTextEdit_ChangeEvent(QTextEdit* self, QEvent* e);
    friend void QTextEdit_SuperChangeEvent(QTextEdit* self, QEvent* e);
    friend void QTextEdit_WheelEvent(QTextEdit* self, QWheelEvent* e);
    friend void QTextEdit_SuperWheelEvent(QTextEdit* self, QWheelEvent* e);
    friend QMimeData* QTextEdit_CreateMimeDataFromSelection(const QTextEdit* self);
    friend QMimeData* QTextEdit_SuperCreateMimeDataFromSelection(const QTextEdit* self);
    friend bool QTextEdit_CanInsertFromMimeData(const QTextEdit* self, const QMimeData* source);
    friend bool QTextEdit_SuperCanInsertFromMimeData(const QTextEdit* self, const QMimeData* source);
    friend void QTextEdit_InsertFromMimeData(QTextEdit* self, const QMimeData* source);
    friend void QTextEdit_SuperInsertFromMimeData(QTextEdit* self, const QMimeData* source);
    friend void QTextEdit_InputMethodEvent(QTextEdit* self, QInputMethodEvent* param1);
    friend void QTextEdit_SuperInputMethodEvent(QTextEdit* self, QInputMethodEvent* param1);
    friend void QTextEdit_ScrollContentsBy(QTextEdit* self, int dx, int dy);
    friend void QTextEdit_SuperScrollContentsBy(QTextEdit* self, int dx, int dy);
    friend void QTextEdit_DoSetTextCursor(QTextEdit* self, const QTextCursor* cursor);
    friend void QTextEdit_SuperDoSetTextCursor(QTextEdit* self, const QTextCursor* cursor);
    friend bool QTextEdit_EventFilter(QTextEdit* self, QObject* param1, QEvent* param2);
    friend bool QTextEdit_SuperEventFilter(QTextEdit* self, QObject* param1, QEvent* param2);
    friend bool QTextEdit_ViewportEvent(QTextEdit* self, QEvent* param1);
    friend bool QTextEdit_SuperViewportEvent(QTextEdit* self, QEvent* param1);
    friend QSize* QTextEdit_ViewportSizeHint(const QTextEdit* self);
    friend QSize* QTextEdit_SuperViewportSizeHint(const QTextEdit* self);
    friend void QTextEdit_InitStyleOption(const QTextEdit* self, QStyleOptionFrame* option);
    friend void QTextEdit_SuperInitStyleOption(const QTextEdit* self, QStyleOptionFrame* option);
    friend void QTextEdit_EnterEvent(QTextEdit* self, QEnterEvent* event);
    friend void QTextEdit_SuperEnterEvent(QTextEdit* self, QEnterEvent* event);
    friend void QTextEdit_LeaveEvent(QTextEdit* self, QEvent* event);
    friend void QTextEdit_SuperLeaveEvent(QTextEdit* self, QEvent* event);
    friend void QTextEdit_MoveEvent(QTextEdit* self, QMoveEvent* event);
    friend void QTextEdit_SuperMoveEvent(QTextEdit* self, QMoveEvent* event);
    friend void QTextEdit_CloseEvent(QTextEdit* self, QCloseEvent* event);
    friend void QTextEdit_SuperCloseEvent(QTextEdit* self, QCloseEvent* event);
    friend void QTextEdit_TabletEvent(QTextEdit* self, QTabletEvent* event);
    friend void QTextEdit_SuperTabletEvent(QTextEdit* self, QTabletEvent* event);
    friend void QTextEdit_ActionEvent(QTextEdit* self, QActionEvent* event);
    friend void QTextEdit_SuperActionEvent(QTextEdit* self, QActionEvent* event);
    friend void QTextEdit_HideEvent(QTextEdit* self, QHideEvent* event);
    friend void QTextEdit_SuperHideEvent(QTextEdit* self, QHideEvent* event);
    friend bool QTextEdit_NativeEvent(QTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTextEdit_SuperNativeEvent(QTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTextEdit_Metric(const QTextEdit* self, int param1);
    friend int QTextEdit_SuperMetric(const QTextEdit* self, int param1);
    friend void QTextEdit_InitPainter(const QTextEdit* self, QPainter* painter);
    friend void QTextEdit_SuperInitPainter(const QTextEdit* self, QPainter* painter);
    friend QPaintDevice* QTextEdit_Redirected(const QTextEdit* self, QPoint* offset);
    friend QPaintDevice* QTextEdit_SuperRedirected(const QTextEdit* self, QPoint* offset);
    friend QPainter* QTextEdit_SharedPainter(const QTextEdit* self);
    friend QPainter* QTextEdit_SuperSharedPainter(const QTextEdit* self);
    friend void QTextEdit_ChildEvent(QTextEdit* self, QChildEvent* event);
    friend void QTextEdit_SuperChildEvent(QTextEdit* self, QChildEvent* event);
    friend void QTextEdit_CustomEvent(QTextEdit* self, QEvent* event);
    friend void QTextEdit_SuperCustomEvent(QTextEdit* self, QEvent* event);
    friend void QTextEdit_ConnectNotify(QTextEdit* self, const QMetaMethod* signal);
    friend void QTextEdit_SuperConnectNotify(QTextEdit* self, const QMetaMethod* signal);
    friend void QTextEdit_DisconnectNotify(QTextEdit* self, const QMetaMethod* signal);
    friend void QTextEdit_SuperDisconnectNotify(QTextEdit* self, const QMetaMethod* signal);
    friend void QTextEdit_ZoomInF(QTextEdit* self, float range);
    friend void QTextEdit_SuperZoomInF(QTextEdit* self, float range);
    friend void QTextEdit_SetViewportMargins(QTextEdit* self, int left, int top, int right, int bottom);
    friend void QTextEdit_SuperSetViewportMargins(QTextEdit* self, int left, int top, int right, int bottom);
    friend QMargins* QTextEdit_ViewportMargins(const QTextEdit* self);
    friend QMargins* QTextEdit_SuperViewportMargins(const QTextEdit* self);
    friend void QTextEdit_DrawFrame(QTextEdit* self, QPainter* param1);
    friend void QTextEdit_SuperDrawFrame(QTextEdit* self, QPainter* param1);
    friend void QTextEdit_UpdateMicroFocus(QTextEdit* self);
    friend void QTextEdit_SuperUpdateMicroFocus(QTextEdit* self);
    friend void QTextEdit_Create(QTextEdit* self);
    friend void QTextEdit_SuperCreate(QTextEdit* self);
    friend void QTextEdit_Destroy(QTextEdit* self);
    friend void QTextEdit_SuperDestroy(QTextEdit* self);
    friend bool QTextEdit_FocusNextChild(QTextEdit* self);
    friend bool QTextEdit_SuperFocusNextChild(QTextEdit* self);
    friend bool QTextEdit_FocusPreviousChild(QTextEdit* self);
    friend bool QTextEdit_SuperFocusPreviousChild(QTextEdit* self);
    friend QObject* QTextEdit_Sender(const QTextEdit* self);
    friend QObject* QTextEdit_SuperSender(const QTextEdit* self);
    friend int QTextEdit_SenderSignalIndex(const QTextEdit* self);
    friend int QTextEdit_SuperSenderSignalIndex(const QTextEdit* self);
    friend int QTextEdit_Receivers(const QTextEdit* self, const char* signal);
    friend int QTextEdit_SuperReceivers(const QTextEdit* self, const char* signal);
    friend bool QTextEdit_IsSignalConnected(const QTextEdit* self, const QMetaMethod* signal);
    friend bool QTextEdit_SuperIsSignalConnected(const QTextEdit* self, const QMetaMethod* signal);
    friend double QTextEdit_GetDecodedMetricF(const QTextEdit* self, int metricA, int metricB);
    friend double QTextEdit_SuperGetDecodedMetricF(const QTextEdit* self, int metricA, int metricB);
};

#endif
