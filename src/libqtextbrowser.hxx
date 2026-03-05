#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTBROWSER_H
#define SRCC_LIBVIRTUALQTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextBrowser so that we can call protected methods
class VirtualQTextBrowser final : public QTextBrowser {

  public:
    // Virtual class boolean flag
    bool isVirtualQTextBrowser = true;

    // Virtual class public types (including callbacks)
    using QTextBrowser_MetaObject_Callback = QMetaObject* (*)();
    using QTextBrowser_Metacast_Callback = void* (*)(QTextBrowser*, const char*);
    using QTextBrowser_Metacall_Callback = int (*)(QTextBrowser*, int, int, void**);
    using QTextBrowser_LoadResource_Callback = QVariant* (*)(QTextBrowser*, int, QUrl*);
    using QTextBrowser_Backward_Callback = void (*)();
    using QTextBrowser_Forward_Callback = void (*)();
    using QTextBrowser_Home_Callback = void (*)();
    using QTextBrowser_Reload_Callback = void (*)();
    using QTextBrowser_Event_Callback = bool (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_KeyPressEvent_Callback = void (*)(QTextBrowser*, QKeyEvent*);
    using QTextBrowser_MouseMoveEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_MousePressEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_MouseReleaseEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_FocusOutEvent_Callback = void (*)(QTextBrowser*, QFocusEvent*);
    using QTextBrowser_FocusNextPrevChild_Callback = bool (*)(QTextBrowser*, bool);
    using QTextBrowser_PaintEvent_Callback = void (*)(QTextBrowser*, QPaintEvent*);
    using QTextBrowser_DoSetSource_Callback = void (*)(QTextBrowser*, QUrl*, int);
    using QTextBrowser_InputMethodQuery_Callback = QVariant* (*)(const QTextBrowser*, int);
    using QTextBrowser_TimerEvent_Callback = void (*)(QTextBrowser*, QTimerEvent*);
    using QTextBrowser_KeyReleaseEvent_Callback = void (*)(QTextBrowser*, QKeyEvent*);
    using QTextBrowser_ResizeEvent_Callback = void (*)(QTextBrowser*, QResizeEvent*);
    using QTextBrowser_MouseDoubleClickEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_ContextMenuEvent_Callback = void (*)(QTextBrowser*, QContextMenuEvent*);
    using QTextBrowser_DragEnterEvent_Callback = void (*)(QTextBrowser*, QDragEnterEvent*);
    using QTextBrowser_DragLeaveEvent_Callback = void (*)(QTextBrowser*, QDragLeaveEvent*);
    using QTextBrowser_DragMoveEvent_Callback = void (*)(QTextBrowser*, QDragMoveEvent*);
    using QTextBrowser_DropEvent_Callback = void (*)(QTextBrowser*, QDropEvent*);
    using QTextBrowser_FocusInEvent_Callback = void (*)(QTextBrowser*, QFocusEvent*);
    using QTextBrowser_ShowEvent_Callback = void (*)(QTextBrowser*, QShowEvent*);
    using QTextBrowser_ChangeEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_WheelEvent_Callback = void (*)(QTextBrowser*, QWheelEvent*);
    using QTextBrowser_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using QTextBrowser_CanInsertFromMimeData_Callback = bool (*)(const QTextBrowser*, QMimeData*);
    using QTextBrowser_InsertFromMimeData_Callback = void (*)(QTextBrowser*, QMimeData*);
    using QTextBrowser_InputMethodEvent_Callback = void (*)(QTextBrowser*, QInputMethodEvent*);
    using QTextBrowser_ScrollContentsBy_Callback = void (*)(QTextBrowser*, int, int);
    using QTextBrowser_DoSetTextCursor_Callback = void (*)(QTextBrowser*, QTextCursor*);
    using QTextBrowser_MinimumSizeHint_Callback = QSize* (*)();
    using QTextBrowser_SizeHint_Callback = QSize* (*)();
    using QTextBrowser_SetupViewport_Callback = void (*)(QTextBrowser*, QWidget*);
    using QTextBrowser_EventFilter_Callback = bool (*)(QTextBrowser*, QObject*, QEvent*);
    using QTextBrowser_ViewportEvent_Callback = bool (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_ViewportSizeHint_Callback = QSize* (*)();
    using QTextBrowser_InitStyleOption_Callback = void (*)(const QTextBrowser*, QStyleOptionFrame*);
    using QTextBrowser_DevType_Callback = int (*)();
    using QTextBrowser_SetVisible_Callback = void (*)(QTextBrowser*, bool);
    using QTextBrowser_HeightForWidth_Callback = int (*)(const QTextBrowser*, int);
    using QTextBrowser_HasHeightForWidth_Callback = bool (*)();
    using QTextBrowser_PaintEngine_Callback = QPaintEngine* (*)();
    using QTextBrowser_EnterEvent_Callback = void (*)(QTextBrowser*, QEnterEvent*);
    using QTextBrowser_LeaveEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_MoveEvent_Callback = void (*)(QTextBrowser*, QMoveEvent*);
    using QTextBrowser_CloseEvent_Callback = void (*)(QTextBrowser*, QCloseEvent*);
    using QTextBrowser_TabletEvent_Callback = void (*)(QTextBrowser*, QTabletEvent*);
    using QTextBrowser_ActionEvent_Callback = void (*)(QTextBrowser*, QActionEvent*);
    using QTextBrowser_HideEvent_Callback = void (*)(QTextBrowser*, QHideEvent*);
    using QTextBrowser_NativeEvent_Callback = bool (*)(QTextBrowser*, libqt_string, void*, intptr_t*);
    using QTextBrowser_Metric_Callback = int (*)(const QTextBrowser*, int);
    using QTextBrowser_InitPainter_Callback = void (*)(const QTextBrowser*, QPainter*);
    using QTextBrowser_Redirected_Callback = QPaintDevice* (*)(const QTextBrowser*, QPoint*);
    using QTextBrowser_SharedPainter_Callback = QPainter* (*)();
    using QTextBrowser_ChildEvent_Callback = void (*)(QTextBrowser*, QChildEvent*);
    using QTextBrowser_CustomEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_ConnectNotify_Callback = void (*)(QTextBrowser*, QMetaMethod*);
    using QTextBrowser_DisconnectNotify_Callback = void (*)(QTextBrowser*, QMetaMethod*);
    using QTextBrowser_ZoomInF_Callback = void (*)(QTextBrowser*, float);
    using QTextBrowser_SetViewportMargins_Callback = void (*)(QTextBrowser*, int, int, int, int);
    using QTextBrowser_ViewportMargins_Callback = QMargins* (*)();
    using QTextBrowser_DrawFrame_Callback = void (*)(QTextBrowser*, QPainter*);
    using QTextBrowser_UpdateMicroFocus_Callback = void (*)();
    using QTextBrowser_Create_Callback = void (*)();
    using QTextBrowser_Destroy_Callback = void (*)();
    using QTextBrowser_FocusNextChild_Callback = bool (*)();
    using QTextBrowser_FocusPreviousChild_Callback = bool (*)();
    using QTextBrowser_Sender_Callback = QObject* (*)();
    using QTextBrowser_SenderSignalIndex_Callback = int (*)();
    using QTextBrowser_Receivers_Callback = int (*)(const QTextBrowser*, const char*);
    using QTextBrowser_IsSignalConnected_Callback = bool (*)(const QTextBrowser*, QMetaMethod*);
    using QTextBrowser_GetDecodedMetricF_Callback = double (*)(const QTextBrowser*, int, int);

  protected:
    // Instance callback storage
    QTextBrowser_MetaObject_Callback qtextbrowser_metaobject_callback = nullptr;
    QTextBrowser_Metacast_Callback qtextbrowser_metacast_callback = nullptr;
    QTextBrowser_Metacall_Callback qtextbrowser_metacall_callback = nullptr;
    QTextBrowser_LoadResource_Callback qtextbrowser_loadresource_callback = nullptr;
    QTextBrowser_Backward_Callback qtextbrowser_backward_callback = nullptr;
    QTextBrowser_Forward_Callback qtextbrowser_forward_callback = nullptr;
    QTextBrowser_Home_Callback qtextbrowser_home_callback = nullptr;
    QTextBrowser_Reload_Callback qtextbrowser_reload_callback = nullptr;
    QTextBrowser_Event_Callback qtextbrowser_event_callback = nullptr;
    QTextBrowser_KeyPressEvent_Callback qtextbrowser_keypressevent_callback = nullptr;
    QTextBrowser_MouseMoveEvent_Callback qtextbrowser_mousemoveevent_callback = nullptr;
    QTextBrowser_MousePressEvent_Callback qtextbrowser_mousepressevent_callback = nullptr;
    QTextBrowser_MouseReleaseEvent_Callback qtextbrowser_mousereleaseevent_callback = nullptr;
    QTextBrowser_FocusOutEvent_Callback qtextbrowser_focusoutevent_callback = nullptr;
    QTextBrowser_FocusNextPrevChild_Callback qtextbrowser_focusnextprevchild_callback = nullptr;
    QTextBrowser_PaintEvent_Callback qtextbrowser_paintevent_callback = nullptr;
    QTextBrowser_DoSetSource_Callback qtextbrowser_dosetsource_callback = nullptr;
    QTextBrowser_InputMethodQuery_Callback qtextbrowser_inputmethodquery_callback = nullptr;
    QTextBrowser_TimerEvent_Callback qtextbrowser_timerevent_callback = nullptr;
    QTextBrowser_KeyReleaseEvent_Callback qtextbrowser_keyreleaseevent_callback = nullptr;
    QTextBrowser_ResizeEvent_Callback qtextbrowser_resizeevent_callback = nullptr;
    QTextBrowser_MouseDoubleClickEvent_Callback qtextbrowser_mousedoubleclickevent_callback = nullptr;
    QTextBrowser_ContextMenuEvent_Callback qtextbrowser_contextmenuevent_callback = nullptr;
    QTextBrowser_DragEnterEvent_Callback qtextbrowser_dragenterevent_callback = nullptr;
    QTextBrowser_DragLeaveEvent_Callback qtextbrowser_dragleaveevent_callback = nullptr;
    QTextBrowser_DragMoveEvent_Callback qtextbrowser_dragmoveevent_callback = nullptr;
    QTextBrowser_DropEvent_Callback qtextbrowser_dropevent_callback = nullptr;
    QTextBrowser_FocusInEvent_Callback qtextbrowser_focusinevent_callback = nullptr;
    QTextBrowser_ShowEvent_Callback qtextbrowser_showevent_callback = nullptr;
    QTextBrowser_ChangeEvent_Callback qtextbrowser_changeevent_callback = nullptr;
    QTextBrowser_WheelEvent_Callback qtextbrowser_wheelevent_callback = nullptr;
    QTextBrowser_CreateMimeDataFromSelection_Callback qtextbrowser_createmimedatafromselection_callback = nullptr;
    QTextBrowser_CanInsertFromMimeData_Callback qtextbrowser_caninsertfrommimedata_callback = nullptr;
    QTextBrowser_InsertFromMimeData_Callback qtextbrowser_insertfrommimedata_callback = nullptr;
    QTextBrowser_InputMethodEvent_Callback qtextbrowser_inputmethodevent_callback = nullptr;
    QTextBrowser_ScrollContentsBy_Callback qtextbrowser_scrollcontentsby_callback = nullptr;
    QTextBrowser_DoSetTextCursor_Callback qtextbrowser_dosettextcursor_callback = nullptr;
    QTextBrowser_MinimumSizeHint_Callback qtextbrowser_minimumsizehint_callback = nullptr;
    QTextBrowser_SizeHint_Callback qtextbrowser_sizehint_callback = nullptr;
    QTextBrowser_SetupViewport_Callback qtextbrowser_setupviewport_callback = nullptr;
    QTextBrowser_EventFilter_Callback qtextbrowser_eventfilter_callback = nullptr;
    QTextBrowser_ViewportEvent_Callback qtextbrowser_viewportevent_callback = nullptr;
    QTextBrowser_ViewportSizeHint_Callback qtextbrowser_viewportsizehint_callback = nullptr;
    QTextBrowser_InitStyleOption_Callback qtextbrowser_initstyleoption_callback = nullptr;
    QTextBrowser_DevType_Callback qtextbrowser_devtype_callback = nullptr;
    QTextBrowser_SetVisible_Callback qtextbrowser_setvisible_callback = nullptr;
    QTextBrowser_HeightForWidth_Callback qtextbrowser_heightforwidth_callback = nullptr;
    QTextBrowser_HasHeightForWidth_Callback qtextbrowser_hasheightforwidth_callback = nullptr;
    QTextBrowser_PaintEngine_Callback qtextbrowser_paintengine_callback = nullptr;
    QTextBrowser_EnterEvent_Callback qtextbrowser_enterevent_callback = nullptr;
    QTextBrowser_LeaveEvent_Callback qtextbrowser_leaveevent_callback = nullptr;
    QTextBrowser_MoveEvent_Callback qtextbrowser_moveevent_callback = nullptr;
    QTextBrowser_CloseEvent_Callback qtextbrowser_closeevent_callback = nullptr;
    QTextBrowser_TabletEvent_Callback qtextbrowser_tabletevent_callback = nullptr;
    QTextBrowser_ActionEvent_Callback qtextbrowser_actionevent_callback = nullptr;
    QTextBrowser_HideEvent_Callback qtextbrowser_hideevent_callback = nullptr;
    QTextBrowser_NativeEvent_Callback qtextbrowser_nativeevent_callback = nullptr;
    QTextBrowser_Metric_Callback qtextbrowser_metric_callback = nullptr;
    QTextBrowser_InitPainter_Callback qtextbrowser_initpainter_callback = nullptr;
    QTextBrowser_Redirected_Callback qtextbrowser_redirected_callback = nullptr;
    QTextBrowser_SharedPainter_Callback qtextbrowser_sharedpainter_callback = nullptr;
    QTextBrowser_ChildEvent_Callback qtextbrowser_childevent_callback = nullptr;
    QTextBrowser_CustomEvent_Callback qtextbrowser_customevent_callback = nullptr;
    QTextBrowser_ConnectNotify_Callback qtextbrowser_connectnotify_callback = nullptr;
    QTextBrowser_DisconnectNotify_Callback qtextbrowser_disconnectnotify_callback = nullptr;
    QTextBrowser_ZoomInF_Callback qtextbrowser_zoominf_callback = nullptr;
    QTextBrowser_SetViewportMargins_Callback qtextbrowser_setviewportmargins_callback = nullptr;
    QTextBrowser_ViewportMargins_Callback qtextbrowser_viewportmargins_callback = nullptr;
    QTextBrowser_DrawFrame_Callback qtextbrowser_drawframe_callback = nullptr;
    QTextBrowser_UpdateMicroFocus_Callback qtextbrowser_updatemicrofocus_callback = nullptr;
    QTextBrowser_Create_Callback qtextbrowser_create_callback = nullptr;
    QTextBrowser_Destroy_Callback qtextbrowser_destroy_callback = nullptr;
    QTextBrowser_FocusNextChild_Callback qtextbrowser_focusnextchild_callback = nullptr;
    QTextBrowser_FocusPreviousChild_Callback qtextbrowser_focuspreviouschild_callback = nullptr;
    QTextBrowser_Sender_Callback qtextbrowser_sender_callback = nullptr;
    QTextBrowser_SenderSignalIndex_Callback qtextbrowser_sendersignalindex_callback = nullptr;
    QTextBrowser_Receivers_Callback qtextbrowser_receivers_callback = nullptr;
    QTextBrowser_IsSignalConnected_Callback qtextbrowser_issignalconnected_callback = nullptr;
    QTextBrowser_GetDecodedMetricF_Callback qtextbrowser_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtextbrowser_metaobject_isbase = false;
    mutable bool qtextbrowser_metacast_isbase = false;
    mutable bool qtextbrowser_metacall_isbase = false;
    mutable bool qtextbrowser_loadresource_isbase = false;
    mutable bool qtextbrowser_backward_isbase = false;
    mutable bool qtextbrowser_forward_isbase = false;
    mutable bool qtextbrowser_home_isbase = false;
    mutable bool qtextbrowser_reload_isbase = false;
    mutable bool qtextbrowser_event_isbase = false;
    mutable bool qtextbrowser_keypressevent_isbase = false;
    mutable bool qtextbrowser_mousemoveevent_isbase = false;
    mutable bool qtextbrowser_mousepressevent_isbase = false;
    mutable bool qtextbrowser_mousereleaseevent_isbase = false;
    mutable bool qtextbrowser_focusoutevent_isbase = false;
    mutable bool qtextbrowser_focusnextprevchild_isbase = false;
    mutable bool qtextbrowser_paintevent_isbase = false;
    mutable bool qtextbrowser_dosetsource_isbase = false;
    mutable bool qtextbrowser_inputmethodquery_isbase = false;
    mutable bool qtextbrowser_timerevent_isbase = false;
    mutable bool qtextbrowser_keyreleaseevent_isbase = false;
    mutable bool qtextbrowser_resizeevent_isbase = false;
    mutable bool qtextbrowser_mousedoubleclickevent_isbase = false;
    mutable bool qtextbrowser_contextmenuevent_isbase = false;
    mutable bool qtextbrowser_dragenterevent_isbase = false;
    mutable bool qtextbrowser_dragleaveevent_isbase = false;
    mutable bool qtextbrowser_dragmoveevent_isbase = false;
    mutable bool qtextbrowser_dropevent_isbase = false;
    mutable bool qtextbrowser_focusinevent_isbase = false;
    mutable bool qtextbrowser_showevent_isbase = false;
    mutable bool qtextbrowser_changeevent_isbase = false;
    mutable bool qtextbrowser_wheelevent_isbase = false;
    mutable bool qtextbrowser_createmimedatafromselection_isbase = false;
    mutable bool qtextbrowser_caninsertfrommimedata_isbase = false;
    mutable bool qtextbrowser_insertfrommimedata_isbase = false;
    mutable bool qtextbrowser_inputmethodevent_isbase = false;
    mutable bool qtextbrowser_scrollcontentsby_isbase = false;
    mutable bool qtextbrowser_dosettextcursor_isbase = false;
    mutable bool qtextbrowser_minimumsizehint_isbase = false;
    mutable bool qtextbrowser_sizehint_isbase = false;
    mutable bool qtextbrowser_setupviewport_isbase = false;
    mutable bool qtextbrowser_eventfilter_isbase = false;
    mutable bool qtextbrowser_viewportevent_isbase = false;
    mutable bool qtextbrowser_viewportsizehint_isbase = false;
    mutable bool qtextbrowser_initstyleoption_isbase = false;
    mutable bool qtextbrowser_devtype_isbase = false;
    mutable bool qtextbrowser_setvisible_isbase = false;
    mutable bool qtextbrowser_heightforwidth_isbase = false;
    mutable bool qtextbrowser_hasheightforwidth_isbase = false;
    mutable bool qtextbrowser_paintengine_isbase = false;
    mutable bool qtextbrowser_enterevent_isbase = false;
    mutable bool qtextbrowser_leaveevent_isbase = false;
    mutable bool qtextbrowser_moveevent_isbase = false;
    mutable bool qtextbrowser_closeevent_isbase = false;
    mutable bool qtextbrowser_tabletevent_isbase = false;
    mutable bool qtextbrowser_actionevent_isbase = false;
    mutable bool qtextbrowser_hideevent_isbase = false;
    mutable bool qtextbrowser_nativeevent_isbase = false;
    mutable bool qtextbrowser_metric_isbase = false;
    mutable bool qtextbrowser_initpainter_isbase = false;
    mutable bool qtextbrowser_redirected_isbase = false;
    mutable bool qtextbrowser_sharedpainter_isbase = false;
    mutable bool qtextbrowser_childevent_isbase = false;
    mutable bool qtextbrowser_customevent_isbase = false;
    mutable bool qtextbrowser_connectnotify_isbase = false;
    mutable bool qtextbrowser_disconnectnotify_isbase = false;
    mutable bool qtextbrowser_zoominf_isbase = false;
    mutable bool qtextbrowser_setviewportmargins_isbase = false;
    mutable bool qtextbrowser_viewportmargins_isbase = false;
    mutable bool qtextbrowser_drawframe_isbase = false;
    mutable bool qtextbrowser_updatemicrofocus_isbase = false;
    mutable bool qtextbrowser_create_isbase = false;
    mutable bool qtextbrowser_destroy_isbase = false;
    mutable bool qtextbrowser_focusnextchild_isbase = false;
    mutable bool qtextbrowser_focuspreviouschild_isbase = false;
    mutable bool qtextbrowser_sender_isbase = false;
    mutable bool qtextbrowser_sendersignalindex_isbase = false;
    mutable bool qtextbrowser_receivers_isbase = false;
    mutable bool qtextbrowser_issignalconnected_isbase = false;
    mutable bool qtextbrowser_getdecodedmetricf_isbase = false;

  public:
    VirtualQTextBrowser(QWidget* parent) : QTextBrowser(parent) {};
    VirtualQTextBrowser() : QTextBrowser() {};

    // Callback setters
    inline void setQTextBrowser_MetaObject_Callback(QTextBrowser_MetaObject_Callback cb) { qtextbrowser_metaobject_callback = cb; }
    inline void setQTextBrowser_Metacast_Callback(QTextBrowser_Metacast_Callback cb) { qtextbrowser_metacast_callback = cb; }
    inline void setQTextBrowser_Metacall_Callback(QTextBrowser_Metacall_Callback cb) { qtextbrowser_metacall_callback = cb; }
    inline void setQTextBrowser_LoadResource_Callback(QTextBrowser_LoadResource_Callback cb) { qtextbrowser_loadresource_callback = cb; }
    inline void setQTextBrowser_Backward_Callback(QTextBrowser_Backward_Callback cb) { qtextbrowser_backward_callback = cb; }
    inline void setQTextBrowser_Forward_Callback(QTextBrowser_Forward_Callback cb) { qtextbrowser_forward_callback = cb; }
    inline void setQTextBrowser_Home_Callback(QTextBrowser_Home_Callback cb) { qtextbrowser_home_callback = cb; }
    inline void setQTextBrowser_Reload_Callback(QTextBrowser_Reload_Callback cb) { qtextbrowser_reload_callback = cb; }
    inline void setQTextBrowser_Event_Callback(QTextBrowser_Event_Callback cb) { qtextbrowser_event_callback = cb; }
    inline void setQTextBrowser_KeyPressEvent_Callback(QTextBrowser_KeyPressEvent_Callback cb) { qtextbrowser_keypressevent_callback = cb; }
    inline void setQTextBrowser_MouseMoveEvent_Callback(QTextBrowser_MouseMoveEvent_Callback cb) { qtextbrowser_mousemoveevent_callback = cb; }
    inline void setQTextBrowser_MousePressEvent_Callback(QTextBrowser_MousePressEvent_Callback cb) { qtextbrowser_mousepressevent_callback = cb; }
    inline void setQTextBrowser_MouseReleaseEvent_Callback(QTextBrowser_MouseReleaseEvent_Callback cb) { qtextbrowser_mousereleaseevent_callback = cb; }
    inline void setQTextBrowser_FocusOutEvent_Callback(QTextBrowser_FocusOutEvent_Callback cb) { qtextbrowser_focusoutevent_callback = cb; }
    inline void setQTextBrowser_FocusNextPrevChild_Callback(QTextBrowser_FocusNextPrevChild_Callback cb) { qtextbrowser_focusnextprevchild_callback = cb; }
    inline void setQTextBrowser_PaintEvent_Callback(QTextBrowser_PaintEvent_Callback cb) { qtextbrowser_paintevent_callback = cb; }
    inline void setQTextBrowser_DoSetSource_Callback(QTextBrowser_DoSetSource_Callback cb) { qtextbrowser_dosetsource_callback = cb; }
    inline void setQTextBrowser_InputMethodQuery_Callback(QTextBrowser_InputMethodQuery_Callback cb) { qtextbrowser_inputmethodquery_callback = cb; }
    inline void setQTextBrowser_TimerEvent_Callback(QTextBrowser_TimerEvent_Callback cb) { qtextbrowser_timerevent_callback = cb; }
    inline void setQTextBrowser_KeyReleaseEvent_Callback(QTextBrowser_KeyReleaseEvent_Callback cb) { qtextbrowser_keyreleaseevent_callback = cb; }
    inline void setQTextBrowser_ResizeEvent_Callback(QTextBrowser_ResizeEvent_Callback cb) { qtextbrowser_resizeevent_callback = cb; }
    inline void setQTextBrowser_MouseDoubleClickEvent_Callback(QTextBrowser_MouseDoubleClickEvent_Callback cb) { qtextbrowser_mousedoubleclickevent_callback = cb; }
    inline void setQTextBrowser_ContextMenuEvent_Callback(QTextBrowser_ContextMenuEvent_Callback cb) { qtextbrowser_contextmenuevent_callback = cb; }
    inline void setQTextBrowser_DragEnterEvent_Callback(QTextBrowser_DragEnterEvent_Callback cb) { qtextbrowser_dragenterevent_callback = cb; }
    inline void setQTextBrowser_DragLeaveEvent_Callback(QTextBrowser_DragLeaveEvent_Callback cb) { qtextbrowser_dragleaveevent_callback = cb; }
    inline void setQTextBrowser_DragMoveEvent_Callback(QTextBrowser_DragMoveEvent_Callback cb) { qtextbrowser_dragmoveevent_callback = cb; }
    inline void setQTextBrowser_DropEvent_Callback(QTextBrowser_DropEvent_Callback cb) { qtextbrowser_dropevent_callback = cb; }
    inline void setQTextBrowser_FocusInEvent_Callback(QTextBrowser_FocusInEvent_Callback cb) { qtextbrowser_focusinevent_callback = cb; }
    inline void setQTextBrowser_ShowEvent_Callback(QTextBrowser_ShowEvent_Callback cb) { qtextbrowser_showevent_callback = cb; }
    inline void setQTextBrowser_ChangeEvent_Callback(QTextBrowser_ChangeEvent_Callback cb) { qtextbrowser_changeevent_callback = cb; }
    inline void setQTextBrowser_WheelEvent_Callback(QTextBrowser_WheelEvent_Callback cb) { qtextbrowser_wheelevent_callback = cb; }
    inline void setQTextBrowser_CreateMimeDataFromSelection_Callback(QTextBrowser_CreateMimeDataFromSelection_Callback cb) { qtextbrowser_createmimedatafromselection_callback = cb; }
    inline void setQTextBrowser_CanInsertFromMimeData_Callback(QTextBrowser_CanInsertFromMimeData_Callback cb) { qtextbrowser_caninsertfrommimedata_callback = cb; }
    inline void setQTextBrowser_InsertFromMimeData_Callback(QTextBrowser_InsertFromMimeData_Callback cb) { qtextbrowser_insertfrommimedata_callback = cb; }
    inline void setQTextBrowser_InputMethodEvent_Callback(QTextBrowser_InputMethodEvent_Callback cb) { qtextbrowser_inputmethodevent_callback = cb; }
    inline void setQTextBrowser_ScrollContentsBy_Callback(QTextBrowser_ScrollContentsBy_Callback cb) { qtextbrowser_scrollcontentsby_callback = cb; }
    inline void setQTextBrowser_DoSetTextCursor_Callback(QTextBrowser_DoSetTextCursor_Callback cb) { qtextbrowser_dosettextcursor_callback = cb; }
    inline void setQTextBrowser_MinimumSizeHint_Callback(QTextBrowser_MinimumSizeHint_Callback cb) { qtextbrowser_minimumsizehint_callback = cb; }
    inline void setQTextBrowser_SizeHint_Callback(QTextBrowser_SizeHint_Callback cb) { qtextbrowser_sizehint_callback = cb; }
    inline void setQTextBrowser_SetupViewport_Callback(QTextBrowser_SetupViewport_Callback cb) { qtextbrowser_setupviewport_callback = cb; }
    inline void setQTextBrowser_EventFilter_Callback(QTextBrowser_EventFilter_Callback cb) { qtextbrowser_eventfilter_callback = cb; }
    inline void setQTextBrowser_ViewportEvent_Callback(QTextBrowser_ViewportEvent_Callback cb) { qtextbrowser_viewportevent_callback = cb; }
    inline void setQTextBrowser_ViewportSizeHint_Callback(QTextBrowser_ViewportSizeHint_Callback cb) { qtextbrowser_viewportsizehint_callback = cb; }
    inline void setQTextBrowser_InitStyleOption_Callback(QTextBrowser_InitStyleOption_Callback cb) { qtextbrowser_initstyleoption_callback = cb; }
    inline void setQTextBrowser_DevType_Callback(QTextBrowser_DevType_Callback cb) { qtextbrowser_devtype_callback = cb; }
    inline void setQTextBrowser_SetVisible_Callback(QTextBrowser_SetVisible_Callback cb) { qtextbrowser_setvisible_callback = cb; }
    inline void setQTextBrowser_HeightForWidth_Callback(QTextBrowser_HeightForWidth_Callback cb) { qtextbrowser_heightforwidth_callback = cb; }
    inline void setQTextBrowser_HasHeightForWidth_Callback(QTextBrowser_HasHeightForWidth_Callback cb) { qtextbrowser_hasheightforwidth_callback = cb; }
    inline void setQTextBrowser_PaintEngine_Callback(QTextBrowser_PaintEngine_Callback cb) { qtextbrowser_paintengine_callback = cb; }
    inline void setQTextBrowser_EnterEvent_Callback(QTextBrowser_EnterEvent_Callback cb) { qtextbrowser_enterevent_callback = cb; }
    inline void setQTextBrowser_LeaveEvent_Callback(QTextBrowser_LeaveEvent_Callback cb) { qtextbrowser_leaveevent_callback = cb; }
    inline void setQTextBrowser_MoveEvent_Callback(QTextBrowser_MoveEvent_Callback cb) { qtextbrowser_moveevent_callback = cb; }
    inline void setQTextBrowser_CloseEvent_Callback(QTextBrowser_CloseEvent_Callback cb) { qtextbrowser_closeevent_callback = cb; }
    inline void setQTextBrowser_TabletEvent_Callback(QTextBrowser_TabletEvent_Callback cb) { qtextbrowser_tabletevent_callback = cb; }
    inline void setQTextBrowser_ActionEvent_Callback(QTextBrowser_ActionEvent_Callback cb) { qtextbrowser_actionevent_callback = cb; }
    inline void setQTextBrowser_HideEvent_Callback(QTextBrowser_HideEvent_Callback cb) { qtextbrowser_hideevent_callback = cb; }
    inline void setQTextBrowser_NativeEvent_Callback(QTextBrowser_NativeEvent_Callback cb) { qtextbrowser_nativeevent_callback = cb; }
    inline void setQTextBrowser_Metric_Callback(QTextBrowser_Metric_Callback cb) { qtextbrowser_metric_callback = cb; }
    inline void setQTextBrowser_InitPainter_Callback(QTextBrowser_InitPainter_Callback cb) { qtextbrowser_initpainter_callback = cb; }
    inline void setQTextBrowser_Redirected_Callback(QTextBrowser_Redirected_Callback cb) { qtextbrowser_redirected_callback = cb; }
    inline void setQTextBrowser_SharedPainter_Callback(QTextBrowser_SharedPainter_Callback cb) { qtextbrowser_sharedpainter_callback = cb; }
    inline void setQTextBrowser_ChildEvent_Callback(QTextBrowser_ChildEvent_Callback cb) { qtextbrowser_childevent_callback = cb; }
    inline void setQTextBrowser_CustomEvent_Callback(QTextBrowser_CustomEvent_Callback cb) { qtextbrowser_customevent_callback = cb; }
    inline void setQTextBrowser_ConnectNotify_Callback(QTextBrowser_ConnectNotify_Callback cb) { qtextbrowser_connectnotify_callback = cb; }
    inline void setQTextBrowser_DisconnectNotify_Callback(QTextBrowser_DisconnectNotify_Callback cb) { qtextbrowser_disconnectnotify_callback = cb; }
    inline void setQTextBrowser_ZoomInF_Callback(QTextBrowser_ZoomInF_Callback cb) { qtextbrowser_zoominf_callback = cb; }
    inline void setQTextBrowser_SetViewportMargins_Callback(QTextBrowser_SetViewportMargins_Callback cb) { qtextbrowser_setviewportmargins_callback = cb; }
    inline void setQTextBrowser_ViewportMargins_Callback(QTextBrowser_ViewportMargins_Callback cb) { qtextbrowser_viewportmargins_callback = cb; }
    inline void setQTextBrowser_DrawFrame_Callback(QTextBrowser_DrawFrame_Callback cb) { qtextbrowser_drawframe_callback = cb; }
    inline void setQTextBrowser_UpdateMicroFocus_Callback(QTextBrowser_UpdateMicroFocus_Callback cb) { qtextbrowser_updatemicrofocus_callback = cb; }
    inline void setQTextBrowser_Create_Callback(QTextBrowser_Create_Callback cb) { qtextbrowser_create_callback = cb; }
    inline void setQTextBrowser_Destroy_Callback(QTextBrowser_Destroy_Callback cb) { qtextbrowser_destroy_callback = cb; }
    inline void setQTextBrowser_FocusNextChild_Callback(QTextBrowser_FocusNextChild_Callback cb) { qtextbrowser_focusnextchild_callback = cb; }
    inline void setQTextBrowser_FocusPreviousChild_Callback(QTextBrowser_FocusPreviousChild_Callback cb) { qtextbrowser_focuspreviouschild_callback = cb; }
    inline void setQTextBrowser_Sender_Callback(QTextBrowser_Sender_Callback cb) { qtextbrowser_sender_callback = cb; }
    inline void setQTextBrowser_SenderSignalIndex_Callback(QTextBrowser_SenderSignalIndex_Callback cb) { qtextbrowser_sendersignalindex_callback = cb; }
    inline void setQTextBrowser_Receivers_Callback(QTextBrowser_Receivers_Callback cb) { qtextbrowser_receivers_callback = cb; }
    inline void setQTextBrowser_IsSignalConnected_Callback(QTextBrowser_IsSignalConnected_Callback cb) { qtextbrowser_issignalconnected_callback = cb; }
    inline void setQTextBrowser_GetDecodedMetricF_Callback(QTextBrowser_GetDecodedMetricF_Callback cb) { qtextbrowser_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQTextBrowser_MetaObject_IsBase(bool value) const { qtextbrowser_metaobject_isbase = value; }
    inline void setQTextBrowser_Metacast_IsBase(bool value) const { qtextbrowser_metacast_isbase = value; }
    inline void setQTextBrowser_Metacall_IsBase(bool value) const { qtextbrowser_metacall_isbase = value; }
    inline void setQTextBrowser_LoadResource_IsBase(bool value) const { qtextbrowser_loadresource_isbase = value; }
    inline void setQTextBrowser_Backward_IsBase(bool value) const { qtextbrowser_backward_isbase = value; }
    inline void setQTextBrowser_Forward_IsBase(bool value) const { qtextbrowser_forward_isbase = value; }
    inline void setQTextBrowser_Home_IsBase(bool value) const { qtextbrowser_home_isbase = value; }
    inline void setQTextBrowser_Reload_IsBase(bool value) const { qtextbrowser_reload_isbase = value; }
    inline void setQTextBrowser_Event_IsBase(bool value) const { qtextbrowser_event_isbase = value; }
    inline void setQTextBrowser_KeyPressEvent_IsBase(bool value) const { qtextbrowser_keypressevent_isbase = value; }
    inline void setQTextBrowser_MouseMoveEvent_IsBase(bool value) const { qtextbrowser_mousemoveevent_isbase = value; }
    inline void setQTextBrowser_MousePressEvent_IsBase(bool value) const { qtextbrowser_mousepressevent_isbase = value; }
    inline void setQTextBrowser_MouseReleaseEvent_IsBase(bool value) const { qtextbrowser_mousereleaseevent_isbase = value; }
    inline void setQTextBrowser_FocusOutEvent_IsBase(bool value) const { qtextbrowser_focusoutevent_isbase = value; }
    inline void setQTextBrowser_FocusNextPrevChild_IsBase(bool value) const { qtextbrowser_focusnextprevchild_isbase = value; }
    inline void setQTextBrowser_PaintEvent_IsBase(bool value) const { qtextbrowser_paintevent_isbase = value; }
    inline void setQTextBrowser_DoSetSource_IsBase(bool value) const { qtextbrowser_dosetsource_isbase = value; }
    inline void setQTextBrowser_InputMethodQuery_IsBase(bool value) const { qtextbrowser_inputmethodquery_isbase = value; }
    inline void setQTextBrowser_TimerEvent_IsBase(bool value) const { qtextbrowser_timerevent_isbase = value; }
    inline void setQTextBrowser_KeyReleaseEvent_IsBase(bool value) const { qtextbrowser_keyreleaseevent_isbase = value; }
    inline void setQTextBrowser_ResizeEvent_IsBase(bool value) const { qtextbrowser_resizeevent_isbase = value; }
    inline void setQTextBrowser_MouseDoubleClickEvent_IsBase(bool value) const { qtextbrowser_mousedoubleclickevent_isbase = value; }
    inline void setQTextBrowser_ContextMenuEvent_IsBase(bool value) const { qtextbrowser_contextmenuevent_isbase = value; }
    inline void setQTextBrowser_DragEnterEvent_IsBase(bool value) const { qtextbrowser_dragenterevent_isbase = value; }
    inline void setQTextBrowser_DragLeaveEvent_IsBase(bool value) const { qtextbrowser_dragleaveevent_isbase = value; }
    inline void setQTextBrowser_DragMoveEvent_IsBase(bool value) const { qtextbrowser_dragmoveevent_isbase = value; }
    inline void setQTextBrowser_DropEvent_IsBase(bool value) const { qtextbrowser_dropevent_isbase = value; }
    inline void setQTextBrowser_FocusInEvent_IsBase(bool value) const { qtextbrowser_focusinevent_isbase = value; }
    inline void setQTextBrowser_ShowEvent_IsBase(bool value) const { qtextbrowser_showevent_isbase = value; }
    inline void setQTextBrowser_ChangeEvent_IsBase(bool value) const { qtextbrowser_changeevent_isbase = value; }
    inline void setQTextBrowser_WheelEvent_IsBase(bool value) const { qtextbrowser_wheelevent_isbase = value; }
    inline void setQTextBrowser_CreateMimeDataFromSelection_IsBase(bool value) const { qtextbrowser_createmimedatafromselection_isbase = value; }
    inline void setQTextBrowser_CanInsertFromMimeData_IsBase(bool value) const { qtextbrowser_caninsertfrommimedata_isbase = value; }
    inline void setQTextBrowser_InsertFromMimeData_IsBase(bool value) const { qtextbrowser_insertfrommimedata_isbase = value; }
    inline void setQTextBrowser_InputMethodEvent_IsBase(bool value) const { qtextbrowser_inputmethodevent_isbase = value; }
    inline void setQTextBrowser_ScrollContentsBy_IsBase(bool value) const { qtextbrowser_scrollcontentsby_isbase = value; }
    inline void setQTextBrowser_DoSetTextCursor_IsBase(bool value) const { qtextbrowser_dosettextcursor_isbase = value; }
    inline void setQTextBrowser_MinimumSizeHint_IsBase(bool value) const { qtextbrowser_minimumsizehint_isbase = value; }
    inline void setQTextBrowser_SizeHint_IsBase(bool value) const { qtextbrowser_sizehint_isbase = value; }
    inline void setQTextBrowser_SetupViewport_IsBase(bool value) const { qtextbrowser_setupviewport_isbase = value; }
    inline void setQTextBrowser_EventFilter_IsBase(bool value) const { qtextbrowser_eventfilter_isbase = value; }
    inline void setQTextBrowser_ViewportEvent_IsBase(bool value) const { qtextbrowser_viewportevent_isbase = value; }
    inline void setQTextBrowser_ViewportSizeHint_IsBase(bool value) const { qtextbrowser_viewportsizehint_isbase = value; }
    inline void setQTextBrowser_InitStyleOption_IsBase(bool value) const { qtextbrowser_initstyleoption_isbase = value; }
    inline void setQTextBrowser_DevType_IsBase(bool value) const { qtextbrowser_devtype_isbase = value; }
    inline void setQTextBrowser_SetVisible_IsBase(bool value) const { qtextbrowser_setvisible_isbase = value; }
    inline void setQTextBrowser_HeightForWidth_IsBase(bool value) const { qtextbrowser_heightforwidth_isbase = value; }
    inline void setQTextBrowser_HasHeightForWidth_IsBase(bool value) const { qtextbrowser_hasheightforwidth_isbase = value; }
    inline void setQTextBrowser_PaintEngine_IsBase(bool value) const { qtextbrowser_paintengine_isbase = value; }
    inline void setQTextBrowser_EnterEvent_IsBase(bool value) const { qtextbrowser_enterevent_isbase = value; }
    inline void setQTextBrowser_LeaveEvent_IsBase(bool value) const { qtextbrowser_leaveevent_isbase = value; }
    inline void setQTextBrowser_MoveEvent_IsBase(bool value) const { qtextbrowser_moveevent_isbase = value; }
    inline void setQTextBrowser_CloseEvent_IsBase(bool value) const { qtextbrowser_closeevent_isbase = value; }
    inline void setQTextBrowser_TabletEvent_IsBase(bool value) const { qtextbrowser_tabletevent_isbase = value; }
    inline void setQTextBrowser_ActionEvent_IsBase(bool value) const { qtextbrowser_actionevent_isbase = value; }
    inline void setQTextBrowser_HideEvent_IsBase(bool value) const { qtextbrowser_hideevent_isbase = value; }
    inline void setQTextBrowser_NativeEvent_IsBase(bool value) const { qtextbrowser_nativeevent_isbase = value; }
    inline void setQTextBrowser_Metric_IsBase(bool value) const { qtextbrowser_metric_isbase = value; }
    inline void setQTextBrowser_InitPainter_IsBase(bool value) const { qtextbrowser_initpainter_isbase = value; }
    inline void setQTextBrowser_Redirected_IsBase(bool value) const { qtextbrowser_redirected_isbase = value; }
    inline void setQTextBrowser_SharedPainter_IsBase(bool value) const { qtextbrowser_sharedpainter_isbase = value; }
    inline void setQTextBrowser_ChildEvent_IsBase(bool value) const { qtextbrowser_childevent_isbase = value; }
    inline void setQTextBrowser_CustomEvent_IsBase(bool value) const { qtextbrowser_customevent_isbase = value; }
    inline void setQTextBrowser_ConnectNotify_IsBase(bool value) const { qtextbrowser_connectnotify_isbase = value; }
    inline void setQTextBrowser_DisconnectNotify_IsBase(bool value) const { qtextbrowser_disconnectnotify_isbase = value; }
    inline void setQTextBrowser_ZoomInF_IsBase(bool value) const { qtextbrowser_zoominf_isbase = value; }
    inline void setQTextBrowser_SetViewportMargins_IsBase(bool value) const { qtextbrowser_setviewportmargins_isbase = value; }
    inline void setQTextBrowser_ViewportMargins_IsBase(bool value) const { qtextbrowser_viewportmargins_isbase = value; }
    inline void setQTextBrowser_DrawFrame_IsBase(bool value) const { qtextbrowser_drawframe_isbase = value; }
    inline void setQTextBrowser_UpdateMicroFocus_IsBase(bool value) const { qtextbrowser_updatemicrofocus_isbase = value; }
    inline void setQTextBrowser_Create_IsBase(bool value) const { qtextbrowser_create_isbase = value; }
    inline void setQTextBrowser_Destroy_IsBase(bool value) const { qtextbrowser_destroy_isbase = value; }
    inline void setQTextBrowser_FocusNextChild_IsBase(bool value) const { qtextbrowser_focusnextchild_isbase = value; }
    inline void setQTextBrowser_FocusPreviousChild_IsBase(bool value) const { qtextbrowser_focuspreviouschild_isbase = value; }
    inline void setQTextBrowser_Sender_IsBase(bool value) const { qtextbrowser_sender_isbase = value; }
    inline void setQTextBrowser_SenderSignalIndex_IsBase(bool value) const { qtextbrowser_sendersignalindex_isbase = value; }
    inline void setQTextBrowser_Receivers_IsBase(bool value) const { qtextbrowser_receivers_isbase = value; }
    inline void setQTextBrowser_IsSignalConnected_IsBase(bool value) const { qtextbrowser_issignalconnected_isbase = value; }
    inline void setQTextBrowser_GetDecodedMetricF_IsBase(bool value) const { qtextbrowser_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextbrowser_metaobject_isbase) {
            qtextbrowser_metaobject_isbase = false;
            return QTextBrowser::metaObject();
        }
        auto metaobject_cb = qtextbrowser_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTextBrowser::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextbrowser_metacast_isbase) {
            qtextbrowser_metacast_isbase = false;
            return QTextBrowser::qt_metacast(param1);
        }
        auto metacast_cb = qtextbrowser_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextbrowser_metacall_isbase) {
            qtextbrowser_metacall_isbase = false;
            return QTextBrowser::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtextbrowser_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextbrowser_loadresource_isbase) {
            qtextbrowser_loadresource_isbase = false;
            return QTextBrowser::loadResource(typeVal, name);
        }
        auto loadresource_cb = qtextbrowser_loadresource_callback;
        if (loadresource_cb) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = loadresource_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QTextBrowser::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void backward() override {
        if (qtextbrowser_backward_isbase) {
            qtextbrowser_backward_isbase = false;
            QTextBrowser::backward();
            return;
        }
        auto backward_cb = qtextbrowser_backward_callback;
        if (backward_cb) {
            backward_cb();
            return;
        }
        QTextBrowser::backward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (qtextbrowser_forward_isbase) {
            qtextbrowser_forward_isbase = false;
            QTextBrowser::forward();
            return;
        }
        auto forward_cb = qtextbrowser_forward_callback;
        if (forward_cb) {
            forward_cb();
            return;
        }
        QTextBrowser::forward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (qtextbrowser_home_isbase) {
            qtextbrowser_home_isbase = false;
            QTextBrowser::home();
            return;
        }
        auto home_cb = qtextbrowser_home_callback;
        if (home_cb) {
            home_cb();
            return;
        }
        QTextBrowser::home();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reload() override {
        if (qtextbrowser_reload_isbase) {
            qtextbrowser_reload_isbase = false;
            QTextBrowser::reload();
            return;
        }
        auto reload_cb = qtextbrowser_reload_callback;
        if (reload_cb) {
            reload_cb();
            return;
        }
        QTextBrowser::reload();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtextbrowser_event_isbase) {
            qtextbrowser_event_isbase = false;
            return QTextBrowser::event(e);
        }
        auto event_cb = qtextbrowser_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qtextbrowser_keypressevent_isbase) {
            qtextbrowser_keypressevent_isbase = false;
            QTextBrowser::keyPressEvent(ev);
            return;
        }
        auto keypressevent_cb = qtextbrowser_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = ev;

            keypressevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousemoveevent_isbase) {
            qtextbrowser_mousemoveevent_isbase = false;
            QTextBrowser::mouseMoveEvent(ev);
            return;
        }
        auto mousemoveevent_cb = qtextbrowser_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousepressevent_isbase) {
            qtextbrowser_mousepressevent_isbase = false;
            QTextBrowser::mousePressEvent(ev);
            return;
        }
        auto mousepressevent_cb = qtextbrowser_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousereleaseevent_isbase) {
            qtextbrowser_mousereleaseevent_isbase = false;
            QTextBrowser::mouseReleaseEvent(ev);
            return;
        }
        auto mousereleaseevent_cb = qtextbrowser_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::mouseReleaseEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (qtextbrowser_focusoutevent_isbase) {
            qtextbrowser_focusoutevent_isbase = false;
            QTextBrowser::focusOutEvent(ev);
            return;
        }
        auto focusoutevent_cb = qtextbrowser_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = ev;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtextbrowser_focusnextprevchild_isbase) {
            qtextbrowser_focusnextprevchild_isbase = false;
            return QTextBrowser::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qtextbrowser_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtextbrowser_paintevent_isbase) {
            qtextbrowser_paintevent_isbase = false;
            QTextBrowser::paintEvent(e);
            return;
        }
        auto paintevent_cb = qtextbrowser_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType typeVal) override {
        if (qtextbrowser_dosetsource_isbase) {
            qtextbrowser_dosetsource_isbase = false;
            QTextBrowser::doSetSource(name, typeVal);
            return;
        }
        auto dosetsource_cb = qtextbrowser_dosetsource_callback;
        if (dosetsource_cb) {
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&name_ret);
            int cbval2 = static_cast<int>(typeVal);

            dosetsource_cb(this, cbval1, cbval2);
            return;
        }
        QTextBrowser::doSetSource(name, typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qtextbrowser_inputmethodquery_isbase) {
            qtextbrowser_inputmethodquery_isbase = false;
            return QTextBrowser::inputMethodQuery(property);
        }
        auto inputmethodquery_cb = qtextbrowser_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QTextBrowser::inputMethodQuery(property);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qtextbrowser_timerevent_isbase) {
            qtextbrowser_timerevent_isbase = false;
            QTextBrowser::timerEvent(e);
            return;
        }
        auto timerevent_cb = qtextbrowser_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtextbrowser_keyreleaseevent_isbase) {
            qtextbrowser_keyreleaseevent_isbase = false;
            QTextBrowser::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = qtextbrowser_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qtextbrowser_resizeevent_isbase) {
            qtextbrowser_resizeevent_isbase = false;
            QTextBrowser::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = qtextbrowser_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qtextbrowser_mousedoubleclickevent_isbase) {
            qtextbrowser_mousedoubleclickevent_isbase = false;
            QTextBrowser::mouseDoubleClickEvent(e);
            return;
        }
        auto mousedoubleclickevent_cb = qtextbrowser_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = e;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::mouseDoubleClickEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qtextbrowser_contextmenuevent_isbase) {
            qtextbrowser_contextmenuevent_isbase = false;
            QTextBrowser::contextMenuEvent(e);
            return;
        }
        auto contextmenuevent_cb = qtextbrowser_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = e;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qtextbrowser_dragenterevent_isbase) {
            qtextbrowser_dragenterevent_isbase = false;
            QTextBrowser::dragEnterEvent(e);
            return;
        }
        auto dragenterevent_cb = qtextbrowser_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = e;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::dragEnterEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qtextbrowser_dragleaveevent_isbase) {
            qtextbrowser_dragleaveevent_isbase = false;
            QTextBrowser::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = qtextbrowser_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qtextbrowser_dragmoveevent_isbase) {
            qtextbrowser_dragmoveevent_isbase = false;
            QTextBrowser::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = qtextbrowser_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qtextbrowser_dropevent_isbase) {
            qtextbrowser_dropevent_isbase = false;
            QTextBrowser::dropEvent(e);
            return;
        }
        auto dropevent_cb = qtextbrowser_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = e;

            dropevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::dropEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtextbrowser_focusinevent_isbase) {
            qtextbrowser_focusinevent_isbase = false;
            QTextBrowser::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = qtextbrowser_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtextbrowser_showevent_isbase) {
            qtextbrowser_showevent_isbase = false;
            QTextBrowser::showEvent(param1);
            return;
        }
        auto showevent_cb = qtextbrowser_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qtextbrowser_changeevent_isbase) {
            qtextbrowser_changeevent_isbase = false;
            QTextBrowser::changeEvent(e);
            return;
        }
        auto changeevent_cb = qtextbrowser_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qtextbrowser_wheelevent_isbase) {
            qtextbrowser_wheelevent_isbase = false;
            QTextBrowser::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qtextbrowser_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qtextbrowser_createmimedatafromselection_isbase) {
            qtextbrowser_createmimedatafromselection_isbase = false;
            return QTextBrowser::createMimeDataFromSelection();
        }
        auto createmimedatafromselection_cb = qtextbrowser_createmimedatafromselection_callback;
        if (createmimedatafromselection_cb) {
            QMimeData* callback_ret = createmimedatafromselection_cb();
            return callback_ret;
        }
        return QTextBrowser::createMimeDataFromSelection();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qtextbrowser_caninsertfrommimedata_isbase) {
            qtextbrowser_caninsertfrommimedata_isbase = false;
            return QTextBrowser::canInsertFromMimeData(source);
        }
        auto caninsertfrommimedata_cb = qtextbrowser_caninsertfrommimedata_callback;
        if (caninsertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = caninsertfrommimedata_cb(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::canInsertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qtextbrowser_insertfrommimedata_isbase) {
            qtextbrowser_insertfrommimedata_isbase = false;
            QTextBrowser::insertFromMimeData(source);
            return;
        }
        auto insertfrommimedata_cb = qtextbrowser_insertfrommimedata_callback;
        if (insertfrommimedata_cb) {
            QMimeData* cbval1 = (QMimeData*)source;

            insertfrommimedata_cb(this, cbval1);
            return;
        }
        QTextBrowser::insertFromMimeData(source);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtextbrowser_inputmethodevent_isbase) {
            qtextbrowser_inputmethodevent_isbase = false;
            QTextBrowser::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qtextbrowser_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtextbrowser_scrollcontentsby_isbase) {
            qtextbrowser_scrollcontentsby_isbase = false;
            QTextBrowser::scrollContentsBy(dx, dy);
            return;
        }
        auto scrollcontentsby_cb = qtextbrowser_scrollcontentsby_callback;
        if (scrollcontentsby_cb) {
            int cbval1 = dx;
            int cbval2 = dy;

            scrollcontentsby_cb(this, cbval1, cbval2);
            return;
        }
        QTextBrowser::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qtextbrowser_dosettextcursor_isbase) {
            qtextbrowser_dosettextcursor_isbase = false;
            QTextBrowser::doSetTextCursor(cursor);
            return;
        }
        auto dosettextcursor_cb = qtextbrowser_dosettextcursor_callback;
        if (dosettextcursor_cb) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            dosettextcursor_cb(this, cbval1);
            return;
        }
        QTextBrowser::doSetTextCursor(cursor);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtextbrowser_minimumsizehint_isbase) {
            qtextbrowser_minimumsizehint_isbase = false;
            return QTextBrowser::minimumSizeHint();
        }
        auto minimumsizehint_cb = qtextbrowser_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QTextBrowser::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtextbrowser_sizehint_isbase) {
            qtextbrowser_sizehint_isbase = false;
            return QTextBrowser::sizeHint();
        }
        auto sizehint_cb = qtextbrowser_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QTextBrowser::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtextbrowser_setupviewport_isbase) {
            qtextbrowser_setupviewport_isbase = false;
            QTextBrowser::setupViewport(viewport);
            return;
        }
        auto setupviewport_cb = qtextbrowser_setupviewport_callback;
        if (setupviewport_cb) {
            QWidget* cbval1 = viewport;

            setupviewport_cb(this, cbval1);
            return;
        }
        QTextBrowser::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qtextbrowser_eventfilter_isbase) {
            qtextbrowser_eventfilter_isbase = false;
            return QTextBrowser::eventFilter(param1, param2);
        }
        auto eventfilter_cb = qtextbrowser_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextBrowser::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qtextbrowser_viewportevent_isbase) {
            qtextbrowser_viewportevent_isbase = false;
            return QTextBrowser::viewportEvent(param1);
        }
        auto viewportevent_cb = qtextbrowser_viewportevent_callback;
        if (viewportevent_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = viewportevent_cb(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtextbrowser_viewportsizehint_isbase) {
            qtextbrowser_viewportsizehint_isbase = false;
            return QTextBrowser::viewportSizeHint();
        }
        auto viewportsizehint_cb = qtextbrowser_viewportsizehint_callback;
        if (viewportsizehint_cb) {
            QSize* callback_ret = viewportsizehint_cb();
            return *callback_ret;
        }
        return QTextBrowser::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtextbrowser_initstyleoption_isbase) {
            qtextbrowser_initstyleoption_isbase = false;
            QTextBrowser::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qtextbrowser_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QTextBrowser::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtextbrowser_devtype_isbase) {
            qtextbrowser_devtype_isbase = false;
            return QTextBrowser::devType();
        }
        auto devtype_cb = qtextbrowser_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtextbrowser_setvisible_isbase) {
            qtextbrowser_setvisible_isbase = false;
            QTextBrowser::setVisible(visible);
            return;
        }
        auto setvisible_cb = qtextbrowser_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QTextBrowser::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtextbrowser_heightforwidth_isbase) {
            qtextbrowser_heightforwidth_isbase = false;
            return QTextBrowser::heightForWidth(param1);
        }
        auto heightforwidth_cb = qtextbrowser_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtextbrowser_hasheightforwidth_isbase) {
            qtextbrowser_hasheightforwidth_isbase = false;
            return QTextBrowser::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qtextbrowser_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QTextBrowser::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtextbrowser_paintengine_isbase) {
            qtextbrowser_paintengine_isbase = false;
            return QTextBrowser::paintEngine();
        }
        auto paintengine_cb = qtextbrowser_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QTextBrowser::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtextbrowser_enterevent_isbase) {
            qtextbrowser_enterevent_isbase = false;
            QTextBrowser::enterEvent(event);
            return;
        }
        auto enterevent_cb = qtextbrowser_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtextbrowser_leaveevent_isbase) {
            qtextbrowser_leaveevent_isbase = false;
            QTextBrowser::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qtextbrowser_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtextbrowser_moveevent_isbase) {
            qtextbrowser_moveevent_isbase = false;
            QTextBrowser::moveEvent(event);
            return;
        }
        auto moveevent_cb = qtextbrowser_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtextbrowser_closeevent_isbase) {
            qtextbrowser_closeevent_isbase = false;
            QTextBrowser::closeEvent(event);
            return;
        }
        auto closeevent_cb = qtextbrowser_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtextbrowser_tabletevent_isbase) {
            qtextbrowser_tabletevent_isbase = false;
            QTextBrowser::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qtextbrowser_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtextbrowser_actionevent_isbase) {
            qtextbrowser_actionevent_isbase = false;
            QTextBrowser::actionEvent(event);
            return;
        }
        auto actionevent_cb = qtextbrowser_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtextbrowser_hideevent_isbase) {
            qtextbrowser_hideevent_isbase = false;
            QTextBrowser::hideEvent(event);
            return;
        }
        auto hideevent_cb = qtextbrowser_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtextbrowser_nativeevent_isbase) {
            qtextbrowser_nativeevent_isbase = false;
            return QTextBrowser::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qtextbrowser_nativeevent_callback;
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
        return QTextBrowser::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtextbrowser_metric_isbase) {
            qtextbrowser_metric_isbase = false;
            return QTextBrowser::metric(param1);
        }
        auto metric_cb = qtextbrowser_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtextbrowser_initpainter_isbase) {
            qtextbrowser_initpainter_isbase = false;
            QTextBrowser::initPainter(painter);
            return;
        }
        auto initpainter_cb = qtextbrowser_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QTextBrowser::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtextbrowser_redirected_isbase) {
            qtextbrowser_redirected_isbase = false;
            return QTextBrowser::redirected(offset);
        }
        auto redirected_cb = qtextbrowser_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtextbrowser_sharedpainter_isbase) {
            qtextbrowser_sharedpainter_isbase = false;
            return QTextBrowser::sharedPainter();
        }
        auto sharedpainter_cb = qtextbrowser_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QTextBrowser::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextbrowser_childevent_isbase) {
            qtextbrowser_childevent_isbase = false;
            QTextBrowser::childEvent(event);
            return;
        }
        auto childevent_cb = qtextbrowser_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextbrowser_customevent_isbase) {
            qtextbrowser_customevent_isbase = false;
            QTextBrowser::customEvent(event);
            return;
        }
        auto customevent_cb = qtextbrowser_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTextBrowser::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextbrowser_connectnotify_isbase) {
            qtextbrowser_connectnotify_isbase = false;
            QTextBrowser::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtextbrowser_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTextBrowser::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextbrowser_disconnectnotify_isbase) {
            qtextbrowser_disconnectnotify_isbase = false;
            QTextBrowser::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtextbrowser_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTextBrowser::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (qtextbrowser_zoominf_isbase) {
            qtextbrowser_zoominf_isbase = false;
            QTextBrowser::zoomInF(range);
            return;
        }
        auto zoominf_cb = qtextbrowser_zoominf_callback;
        if (zoominf_cb) {
            float cbval1 = range;

            zoominf_cb(this, cbval1);
            return;
        }
        QTextBrowser::zoomInF(range);
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtextbrowser_setviewportmargins_isbase) {
            qtextbrowser_setviewportmargins_isbase = false;
            QTextBrowser::setViewportMargins(left, top, right, bottom);
            return;
        }
        auto setviewportmargins_cb = qtextbrowser_setviewportmargins_callback;
        if (setviewportmargins_cb) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            setviewportmargins_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QTextBrowser::setViewportMargins(left, top, right, bottom);
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtextbrowser_viewportmargins_isbase) {
            qtextbrowser_viewportmargins_isbase = false;
            return QTextBrowser::viewportMargins();
        }
        auto viewportmargins_cb = qtextbrowser_viewportmargins_callback;
        if (viewportmargins_cb) {
            QMargins* callback_ret = viewportmargins_cb();
            return *callback_ret;
        }
        return QTextBrowser::viewportMargins();
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtextbrowser_drawframe_isbase) {
            qtextbrowser_drawframe_isbase = false;
            QTextBrowser::drawFrame(param1);
            return;
        }
        auto drawframe_cb = qtextbrowser_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        QTextBrowser::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtextbrowser_updatemicrofocus_isbase) {
            qtextbrowser_updatemicrofocus_isbase = false;
            QTextBrowser::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qtextbrowser_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QTextBrowser::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtextbrowser_create_isbase) {
            qtextbrowser_create_isbase = false;
            QTextBrowser::create();
            return;
        }
        auto create_cb = qtextbrowser_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QTextBrowser::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtextbrowser_destroy_isbase) {
            qtextbrowser_destroy_isbase = false;
            QTextBrowser::destroy();
            return;
        }
        auto destroy_cb = qtextbrowser_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QTextBrowser::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtextbrowser_focusnextchild_isbase) {
            qtextbrowser_focusnextchild_isbase = false;
            return QTextBrowser::focusNextChild();
        }
        auto focusnextchild_cb = qtextbrowser_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QTextBrowser::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtextbrowser_focuspreviouschild_isbase) {
            qtextbrowser_focuspreviouschild_isbase = false;
            return QTextBrowser::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qtextbrowser_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QTextBrowser::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextbrowser_sender_isbase) {
            qtextbrowser_sender_isbase = false;
            return QTextBrowser::sender();
        }
        auto sender_cb = qtextbrowser_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTextBrowser::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextbrowser_sendersignalindex_isbase) {
            qtextbrowser_sendersignalindex_isbase = false;
            return QTextBrowser::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtextbrowser_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextbrowser_receivers_isbase) {
            qtextbrowser_receivers_isbase = false;
            return QTextBrowser::receivers(signal);
        }
        auto receivers_cb = qtextbrowser_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextBrowser::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextbrowser_issignalconnected_isbase) {
            qtextbrowser_issignalconnected_isbase = false;
            return QTextBrowser::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtextbrowser_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTextBrowser::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtextbrowser_getdecodedmetricf_isbase) {
            qtextbrowser_getdecodedmetricf_isbase = false;
            return QTextBrowser::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qtextbrowser_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QTextBrowser::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QTextBrowser_Event(QTextBrowser* self, QEvent* e);
    friend bool QTextBrowser_SuperEvent(QTextBrowser* self, QEvent* e);
    friend void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
    friend void QTextBrowser_SuperKeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
    friend void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_SuperMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_SuperMousePressEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_SuperMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
    friend void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
    friend void QTextBrowser_SuperFocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
    friend bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next);
    friend bool QTextBrowser_SuperFocusNextPrevChild(QTextBrowser* self, bool next);
    friend void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e);
    friend void QTextBrowser_SuperPaintEvent(QTextBrowser* self, QPaintEvent* e);
    friend void QTextBrowser_DoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
    friend void QTextBrowser_SuperDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
    friend void QTextBrowser_TimerEvent(QTextBrowser* self, QTimerEvent* e);
    friend void QTextBrowser_SuperTimerEvent(QTextBrowser* self, QTimerEvent* e);
    friend void QTextBrowser_KeyReleaseEvent(QTextBrowser* self, QKeyEvent* e);
    friend void QTextBrowser_SuperKeyReleaseEvent(QTextBrowser* self, QKeyEvent* e);
    friend void QTextBrowser_ResizeEvent(QTextBrowser* self, QResizeEvent* e);
    friend void QTextBrowser_SuperResizeEvent(QTextBrowser* self, QResizeEvent* e);
    friend void QTextBrowser_MouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e);
    friend void QTextBrowser_SuperMouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e);
    friend void QTextBrowser_ContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e);
    friend void QTextBrowser_SuperContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e);
    friend void QTextBrowser_DragEnterEvent(QTextBrowser* self, QDragEnterEvent* e);
    friend void QTextBrowser_SuperDragEnterEvent(QTextBrowser* self, QDragEnterEvent* e);
    friend void QTextBrowser_DragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e);
    friend void QTextBrowser_SuperDragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e);
    friend void QTextBrowser_DragMoveEvent(QTextBrowser* self, QDragMoveEvent* e);
    friend void QTextBrowser_SuperDragMoveEvent(QTextBrowser* self, QDragMoveEvent* e);
    friend void QTextBrowser_DropEvent(QTextBrowser* self, QDropEvent* e);
    friend void QTextBrowser_SuperDropEvent(QTextBrowser* self, QDropEvent* e);
    friend void QTextBrowser_FocusInEvent(QTextBrowser* self, QFocusEvent* e);
    friend void QTextBrowser_SuperFocusInEvent(QTextBrowser* self, QFocusEvent* e);
    friend void QTextBrowser_ShowEvent(QTextBrowser* self, QShowEvent* param1);
    friend void QTextBrowser_SuperShowEvent(QTextBrowser* self, QShowEvent* param1);
    friend void QTextBrowser_ChangeEvent(QTextBrowser* self, QEvent* e);
    friend void QTextBrowser_SuperChangeEvent(QTextBrowser* self, QEvent* e);
    friend void QTextBrowser_WheelEvent(QTextBrowser* self, QWheelEvent* e);
    friend void QTextBrowser_SuperWheelEvent(QTextBrowser* self, QWheelEvent* e);
    friend QMimeData* QTextBrowser_CreateMimeDataFromSelection(const QTextBrowser* self);
    friend QMimeData* QTextBrowser_SuperCreateMimeDataFromSelection(const QTextBrowser* self);
    friend bool QTextBrowser_CanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source);
    friend bool QTextBrowser_SuperCanInsertFromMimeData(const QTextBrowser* self, const QMimeData* source);
    friend void QTextBrowser_InsertFromMimeData(QTextBrowser* self, const QMimeData* source);
    friend void QTextBrowser_SuperInsertFromMimeData(QTextBrowser* self, const QMimeData* source);
    friend void QTextBrowser_InputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1);
    friend void QTextBrowser_SuperInputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1);
    friend void QTextBrowser_ScrollContentsBy(QTextBrowser* self, int dx, int dy);
    friend void QTextBrowser_SuperScrollContentsBy(QTextBrowser* self, int dx, int dy);
    friend void QTextBrowser_DoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor);
    friend void QTextBrowser_SuperDoSetTextCursor(QTextBrowser* self, const QTextCursor* cursor);
    friend bool QTextBrowser_EventFilter(QTextBrowser* self, QObject* param1, QEvent* param2);
    friend bool QTextBrowser_SuperEventFilter(QTextBrowser* self, QObject* param1, QEvent* param2);
    friend bool QTextBrowser_ViewportEvent(QTextBrowser* self, QEvent* param1);
    friend bool QTextBrowser_SuperViewportEvent(QTextBrowser* self, QEvent* param1);
    friend QSize* QTextBrowser_ViewportSizeHint(const QTextBrowser* self);
    friend QSize* QTextBrowser_SuperViewportSizeHint(const QTextBrowser* self);
    friend void QTextBrowser_InitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option);
    friend void QTextBrowser_SuperInitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option);
    friend void QTextBrowser_EnterEvent(QTextBrowser* self, QEnterEvent* event);
    friend void QTextBrowser_SuperEnterEvent(QTextBrowser* self, QEnterEvent* event);
    friend void QTextBrowser_LeaveEvent(QTextBrowser* self, QEvent* event);
    friend void QTextBrowser_SuperLeaveEvent(QTextBrowser* self, QEvent* event);
    friend void QTextBrowser_MoveEvent(QTextBrowser* self, QMoveEvent* event);
    friend void QTextBrowser_SuperMoveEvent(QTextBrowser* self, QMoveEvent* event);
    friend void QTextBrowser_CloseEvent(QTextBrowser* self, QCloseEvent* event);
    friend void QTextBrowser_SuperCloseEvent(QTextBrowser* self, QCloseEvent* event);
    friend void QTextBrowser_TabletEvent(QTextBrowser* self, QTabletEvent* event);
    friend void QTextBrowser_SuperTabletEvent(QTextBrowser* self, QTabletEvent* event);
    friend void QTextBrowser_ActionEvent(QTextBrowser* self, QActionEvent* event);
    friend void QTextBrowser_SuperActionEvent(QTextBrowser* self, QActionEvent* event);
    friend void QTextBrowser_HideEvent(QTextBrowser* self, QHideEvent* event);
    friend void QTextBrowser_SuperHideEvent(QTextBrowser* self, QHideEvent* event);
    friend bool QTextBrowser_NativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTextBrowser_SuperNativeEvent(QTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTextBrowser_Metric(const QTextBrowser* self, int param1);
    friend int QTextBrowser_SuperMetric(const QTextBrowser* self, int param1);
    friend void QTextBrowser_InitPainter(const QTextBrowser* self, QPainter* painter);
    friend void QTextBrowser_SuperInitPainter(const QTextBrowser* self, QPainter* painter);
    friend QPaintDevice* QTextBrowser_Redirected(const QTextBrowser* self, QPoint* offset);
    friend QPaintDevice* QTextBrowser_SuperRedirected(const QTextBrowser* self, QPoint* offset);
    friend QPainter* QTextBrowser_SharedPainter(const QTextBrowser* self);
    friend QPainter* QTextBrowser_SuperSharedPainter(const QTextBrowser* self);
    friend void QTextBrowser_ChildEvent(QTextBrowser* self, QChildEvent* event);
    friend void QTextBrowser_SuperChildEvent(QTextBrowser* self, QChildEvent* event);
    friend void QTextBrowser_CustomEvent(QTextBrowser* self, QEvent* event);
    friend void QTextBrowser_SuperCustomEvent(QTextBrowser* self, QEvent* event);
    friend void QTextBrowser_ConnectNotify(QTextBrowser* self, const QMetaMethod* signal);
    friend void QTextBrowser_SuperConnectNotify(QTextBrowser* self, const QMetaMethod* signal);
    friend void QTextBrowser_DisconnectNotify(QTextBrowser* self, const QMetaMethod* signal);
    friend void QTextBrowser_SuperDisconnectNotify(QTextBrowser* self, const QMetaMethod* signal);
    friend void QTextBrowser_ZoomInF(QTextBrowser* self, float range);
    friend void QTextBrowser_SuperZoomInF(QTextBrowser* self, float range);
    friend void QTextBrowser_SetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom);
    friend void QTextBrowser_SuperSetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom);
    friend QMargins* QTextBrowser_ViewportMargins(const QTextBrowser* self);
    friend QMargins* QTextBrowser_SuperViewportMargins(const QTextBrowser* self);
    friend void QTextBrowser_DrawFrame(QTextBrowser* self, QPainter* param1);
    friend void QTextBrowser_SuperDrawFrame(QTextBrowser* self, QPainter* param1);
    friend void QTextBrowser_UpdateMicroFocus(QTextBrowser* self);
    friend void QTextBrowser_SuperUpdateMicroFocus(QTextBrowser* self);
    friend void QTextBrowser_Create(QTextBrowser* self);
    friend void QTextBrowser_SuperCreate(QTextBrowser* self);
    friend void QTextBrowser_Destroy(QTextBrowser* self);
    friend void QTextBrowser_SuperDestroy(QTextBrowser* self);
    friend bool QTextBrowser_FocusNextChild(QTextBrowser* self);
    friend bool QTextBrowser_SuperFocusNextChild(QTextBrowser* self);
    friend bool QTextBrowser_FocusPreviousChild(QTextBrowser* self);
    friend bool QTextBrowser_SuperFocusPreviousChild(QTextBrowser* self);
    friend QObject* QTextBrowser_Sender(const QTextBrowser* self);
    friend QObject* QTextBrowser_SuperSender(const QTextBrowser* self);
    friend int QTextBrowser_SenderSignalIndex(const QTextBrowser* self);
    friend int QTextBrowser_SuperSenderSignalIndex(const QTextBrowser* self);
    friend int QTextBrowser_Receivers(const QTextBrowser* self, const char* signal);
    friend int QTextBrowser_SuperReceivers(const QTextBrowser* self, const char* signal);
    friend bool QTextBrowser_IsSignalConnected(const QTextBrowser* self, const QMetaMethod* signal);
    friend bool QTextBrowser_SuperIsSignalConnected(const QTextBrowser* self, const QMetaMethod* signal);
    friend double QTextBrowser_GetDecodedMetricF(const QTextBrowser* self, int metricA, int metricB);
    friend double QTextBrowser_SuperGetDecodedMetricF(const QTextBrowser* self, int metricA, int metricB);
};

#endif
