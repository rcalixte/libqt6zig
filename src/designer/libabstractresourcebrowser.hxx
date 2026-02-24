#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTRESOURCEBROWSER_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTRESOURCEBROWSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerResourceBrowserInterface so that we can call protected methods
class VirtualQDesignerResourceBrowserInterface : public QDesignerResourceBrowserInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerResourceBrowserInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerResourceBrowserInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerResourceBrowserInterface_Metacast_Callback = void* (*)(QDesignerResourceBrowserInterface*, const char*);
    using QDesignerResourceBrowserInterface_Metacall_Callback = int (*)(QDesignerResourceBrowserInterface*, int, int, void**);
    using QDesignerResourceBrowserInterface_SetCurrentPath_Callback = void (*)(QDesignerResourceBrowserInterface*, const char*);
    using QDesignerResourceBrowserInterface_CurrentPath_Callback = const char* (*)();
    using QDesignerResourceBrowserInterface_DevType_Callback = int (*)();
    using QDesignerResourceBrowserInterface_SetVisible_Callback = void (*)(QDesignerResourceBrowserInterface*, bool);
    using QDesignerResourceBrowserInterface_SizeHint_Callback = QSize* (*)();
    using QDesignerResourceBrowserInterface_MinimumSizeHint_Callback = QSize* (*)();
    using QDesignerResourceBrowserInterface_HeightForWidth_Callback = int (*)(const QDesignerResourceBrowserInterface*, int);
    using QDesignerResourceBrowserInterface_HasHeightForWidth_Callback = bool (*)();
    using QDesignerResourceBrowserInterface_PaintEngine_Callback = QPaintEngine* (*)();
    using QDesignerResourceBrowserInterface_Event_Callback = bool (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_MousePressEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_MouseReleaseEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_MouseMoveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMouseEvent*);
    using QDesignerResourceBrowserInterface_WheelEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QWheelEvent*);
    using QDesignerResourceBrowserInterface_KeyPressEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QKeyEvent*);
    using QDesignerResourceBrowserInterface_KeyReleaseEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QKeyEvent*);
    using QDesignerResourceBrowserInterface_FocusInEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QFocusEvent*);
    using QDesignerResourceBrowserInterface_FocusOutEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QFocusEvent*);
    using QDesignerResourceBrowserInterface_EnterEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEnterEvent*);
    using QDesignerResourceBrowserInterface_LeaveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_PaintEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QPaintEvent*);
    using QDesignerResourceBrowserInterface_MoveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QMoveEvent*);
    using QDesignerResourceBrowserInterface_ResizeEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QResizeEvent*);
    using QDesignerResourceBrowserInterface_CloseEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QCloseEvent*);
    using QDesignerResourceBrowserInterface_ContextMenuEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QContextMenuEvent*);
    using QDesignerResourceBrowserInterface_TabletEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QTabletEvent*);
    using QDesignerResourceBrowserInterface_ActionEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QActionEvent*);
    using QDesignerResourceBrowserInterface_DragEnterEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDragEnterEvent*);
    using QDesignerResourceBrowserInterface_DragMoveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDragMoveEvent*);
    using QDesignerResourceBrowserInterface_DragLeaveEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDragLeaveEvent*);
    using QDesignerResourceBrowserInterface_DropEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QDropEvent*);
    using QDesignerResourceBrowserInterface_ShowEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QShowEvent*);
    using QDesignerResourceBrowserInterface_HideEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QHideEvent*);
    using QDesignerResourceBrowserInterface_NativeEvent_Callback = bool (*)(QDesignerResourceBrowserInterface*, libqt_string, void*, intptr_t*);
    using QDesignerResourceBrowserInterface_ChangeEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_Metric_Callback = int (*)(const QDesignerResourceBrowserInterface*, int);
    using QDesignerResourceBrowserInterface_InitPainter_Callback = void (*)(const QDesignerResourceBrowserInterface*, QPainter*);
    using QDesignerResourceBrowserInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerResourceBrowserInterface*, QPoint*);
    using QDesignerResourceBrowserInterface_SharedPainter_Callback = QPainter* (*)();
    using QDesignerResourceBrowserInterface_InputMethodEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QInputMethodEvent*);
    using QDesignerResourceBrowserInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerResourceBrowserInterface*, int);
    using QDesignerResourceBrowserInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerResourceBrowserInterface*, bool);
    using QDesignerResourceBrowserInterface_EventFilter_Callback = bool (*)(QDesignerResourceBrowserInterface*, QObject*, QEvent*);
    using QDesignerResourceBrowserInterface_TimerEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QTimerEvent*);
    using QDesignerResourceBrowserInterface_ChildEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QChildEvent*);
    using QDesignerResourceBrowserInterface_CustomEvent_Callback = void (*)(QDesignerResourceBrowserInterface*, QEvent*);
    using QDesignerResourceBrowserInterface_ConnectNotify_Callback = void (*)(QDesignerResourceBrowserInterface*, QMetaMethod*);
    using QDesignerResourceBrowserInterface_DisconnectNotify_Callback = void (*)(QDesignerResourceBrowserInterface*, QMetaMethod*);
    using QDesignerResourceBrowserInterface_UpdateMicroFocus_Callback = void (*)();
    using QDesignerResourceBrowserInterface_Create_Callback = void (*)();
    using QDesignerResourceBrowserInterface_Destroy_Callback = void (*)();
    using QDesignerResourceBrowserInterface_FocusNextChild_Callback = bool (*)();
    using QDesignerResourceBrowserInterface_FocusPreviousChild_Callback = bool (*)();
    using QDesignerResourceBrowserInterface_Sender_Callback = QObject* (*)();
    using QDesignerResourceBrowserInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerResourceBrowserInterface_Receivers_Callback = int (*)(const QDesignerResourceBrowserInterface*, const char*);
    using QDesignerResourceBrowserInterface_IsSignalConnected_Callback = bool (*)(const QDesignerResourceBrowserInterface*, QMetaMethod*);
    using QDesignerResourceBrowserInterface_GetDecodedMetricF_Callback = double (*)(const QDesignerResourceBrowserInterface*, int, int);

  protected:
    // Instance callback storage
    QDesignerResourceBrowserInterface_MetaObject_Callback qdesignerresourcebrowserinterface_metaobject_callback = nullptr;
    QDesignerResourceBrowserInterface_Metacast_Callback qdesignerresourcebrowserinterface_metacast_callback = nullptr;
    QDesignerResourceBrowserInterface_Metacall_Callback qdesignerresourcebrowserinterface_metacall_callback = nullptr;
    QDesignerResourceBrowserInterface_SetCurrentPath_Callback qdesignerresourcebrowserinterface_setcurrentpath_callback = nullptr;
    QDesignerResourceBrowserInterface_CurrentPath_Callback qdesignerresourcebrowserinterface_currentpath_callback = nullptr;
    QDesignerResourceBrowserInterface_DevType_Callback qdesignerresourcebrowserinterface_devtype_callback = nullptr;
    QDesignerResourceBrowserInterface_SetVisible_Callback qdesignerresourcebrowserinterface_setvisible_callback = nullptr;
    QDesignerResourceBrowserInterface_SizeHint_Callback qdesignerresourcebrowserinterface_sizehint_callback = nullptr;
    QDesignerResourceBrowserInterface_MinimumSizeHint_Callback qdesignerresourcebrowserinterface_minimumsizehint_callback = nullptr;
    QDesignerResourceBrowserInterface_HeightForWidth_Callback qdesignerresourcebrowserinterface_heightforwidth_callback = nullptr;
    QDesignerResourceBrowserInterface_HasHeightForWidth_Callback qdesignerresourcebrowserinterface_hasheightforwidth_callback = nullptr;
    QDesignerResourceBrowserInterface_PaintEngine_Callback qdesignerresourcebrowserinterface_paintengine_callback = nullptr;
    QDesignerResourceBrowserInterface_Event_Callback qdesignerresourcebrowserinterface_event_callback = nullptr;
    QDesignerResourceBrowserInterface_MousePressEvent_Callback qdesignerresourcebrowserinterface_mousepressevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MouseReleaseEvent_Callback qdesignerresourcebrowserinterface_mousereleaseevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback qdesignerresourcebrowserinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MouseMoveEvent_Callback qdesignerresourcebrowserinterface_mousemoveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_WheelEvent_Callback qdesignerresourcebrowserinterface_wheelevent_callback = nullptr;
    QDesignerResourceBrowserInterface_KeyPressEvent_Callback qdesignerresourcebrowserinterface_keypressevent_callback = nullptr;
    QDesignerResourceBrowserInterface_KeyReleaseEvent_Callback qdesignerresourcebrowserinterface_keyreleaseevent_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusInEvent_Callback qdesignerresourcebrowserinterface_focusinevent_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusOutEvent_Callback qdesignerresourcebrowserinterface_focusoutevent_callback = nullptr;
    QDesignerResourceBrowserInterface_EnterEvent_Callback qdesignerresourcebrowserinterface_enterevent_callback = nullptr;
    QDesignerResourceBrowserInterface_LeaveEvent_Callback qdesignerresourcebrowserinterface_leaveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_PaintEvent_Callback qdesignerresourcebrowserinterface_paintevent_callback = nullptr;
    QDesignerResourceBrowserInterface_MoveEvent_Callback qdesignerresourcebrowserinterface_moveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ResizeEvent_Callback qdesignerresourcebrowserinterface_resizeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_CloseEvent_Callback qdesignerresourcebrowserinterface_closeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ContextMenuEvent_Callback qdesignerresourcebrowserinterface_contextmenuevent_callback = nullptr;
    QDesignerResourceBrowserInterface_TabletEvent_Callback qdesignerresourcebrowserinterface_tabletevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ActionEvent_Callback qdesignerresourcebrowserinterface_actionevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DragEnterEvent_Callback qdesignerresourcebrowserinterface_dragenterevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DragMoveEvent_Callback qdesignerresourcebrowserinterface_dragmoveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DragLeaveEvent_Callback qdesignerresourcebrowserinterface_dragleaveevent_callback = nullptr;
    QDesignerResourceBrowserInterface_DropEvent_Callback qdesignerresourcebrowserinterface_dropevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ShowEvent_Callback qdesignerresourcebrowserinterface_showevent_callback = nullptr;
    QDesignerResourceBrowserInterface_HideEvent_Callback qdesignerresourcebrowserinterface_hideevent_callback = nullptr;
    QDesignerResourceBrowserInterface_NativeEvent_Callback qdesignerresourcebrowserinterface_nativeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ChangeEvent_Callback qdesignerresourcebrowserinterface_changeevent_callback = nullptr;
    QDesignerResourceBrowserInterface_Metric_Callback qdesignerresourcebrowserinterface_metric_callback = nullptr;
    QDesignerResourceBrowserInterface_InitPainter_Callback qdesignerresourcebrowserinterface_initpainter_callback = nullptr;
    QDesignerResourceBrowserInterface_Redirected_Callback qdesignerresourcebrowserinterface_redirected_callback = nullptr;
    QDesignerResourceBrowserInterface_SharedPainter_Callback qdesignerresourcebrowserinterface_sharedpainter_callback = nullptr;
    QDesignerResourceBrowserInterface_InputMethodEvent_Callback qdesignerresourcebrowserinterface_inputmethodevent_callback = nullptr;
    QDesignerResourceBrowserInterface_InputMethodQuery_Callback qdesignerresourcebrowserinterface_inputmethodquery_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusNextPrevChild_Callback qdesignerresourcebrowserinterface_focusnextprevchild_callback = nullptr;
    QDesignerResourceBrowserInterface_EventFilter_Callback qdesignerresourcebrowserinterface_eventfilter_callback = nullptr;
    QDesignerResourceBrowserInterface_TimerEvent_Callback qdesignerresourcebrowserinterface_timerevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ChildEvent_Callback qdesignerresourcebrowserinterface_childevent_callback = nullptr;
    QDesignerResourceBrowserInterface_CustomEvent_Callback qdesignerresourcebrowserinterface_customevent_callback = nullptr;
    QDesignerResourceBrowserInterface_ConnectNotify_Callback qdesignerresourcebrowserinterface_connectnotify_callback = nullptr;
    QDesignerResourceBrowserInterface_DisconnectNotify_Callback qdesignerresourcebrowserinterface_disconnectnotify_callback = nullptr;
    QDesignerResourceBrowserInterface_UpdateMicroFocus_Callback qdesignerresourcebrowserinterface_updatemicrofocus_callback = nullptr;
    QDesignerResourceBrowserInterface_Create_Callback qdesignerresourcebrowserinterface_create_callback = nullptr;
    QDesignerResourceBrowserInterface_Destroy_Callback qdesignerresourcebrowserinterface_destroy_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusNextChild_Callback qdesignerresourcebrowserinterface_focusnextchild_callback = nullptr;
    QDesignerResourceBrowserInterface_FocusPreviousChild_Callback qdesignerresourcebrowserinterface_focuspreviouschild_callback = nullptr;
    QDesignerResourceBrowserInterface_Sender_Callback qdesignerresourcebrowserinterface_sender_callback = nullptr;
    QDesignerResourceBrowserInterface_SenderSignalIndex_Callback qdesignerresourcebrowserinterface_sendersignalindex_callback = nullptr;
    QDesignerResourceBrowserInterface_Receivers_Callback qdesignerresourcebrowserinterface_receivers_callback = nullptr;
    QDesignerResourceBrowserInterface_IsSignalConnected_Callback qdesignerresourcebrowserinterface_issignalconnected_callback = nullptr;
    QDesignerResourceBrowserInterface_GetDecodedMetricF_Callback qdesignerresourcebrowserinterface_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerresourcebrowserinterface_metaobject_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_metacast_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_metacall_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_setcurrentpath_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_currentpath_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_devtype_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_setvisible_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_sizehint_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_minimumsizehint_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_heightforwidth_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_hasheightforwidth_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_paintengine_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_event_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_mousepressevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_mousereleaseevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_mousedoubleclickevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_mousemoveevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_wheelevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_keypressevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_keyreleaseevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_focusinevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_focusoutevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_enterevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_leaveevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_paintevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_moveevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_resizeevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_closeevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_contextmenuevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_tabletevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_actionevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_dragenterevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_dragmoveevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_dragleaveevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_dropevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_showevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_hideevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_nativeevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_changeevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_metric_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_initpainter_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_redirected_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_sharedpainter_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_inputmethodevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_inputmethodquery_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_focusnextprevchild_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_eventfilter_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_timerevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_childevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_customevent_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_connectnotify_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_updatemicrofocus_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_create_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_destroy_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_focusnextchild_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_focuspreviouschild_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_sender_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_receivers_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_issignalconnected_isbase = false;
    mutable bool qdesignerresourcebrowserinterface_getdecodedmetricf_isbase = false;

  public:
    VirtualQDesignerResourceBrowserInterface(QWidget* parent) : QDesignerResourceBrowserInterface(parent) {};
    VirtualQDesignerResourceBrowserInterface() : QDesignerResourceBrowserInterface() {};

    ~VirtualQDesignerResourceBrowserInterface() {
        qdesignerresourcebrowserinterface_metaobject_callback = nullptr;
        qdesignerresourcebrowserinterface_metacast_callback = nullptr;
        qdesignerresourcebrowserinterface_metacall_callback = nullptr;
        qdesignerresourcebrowserinterface_setcurrentpath_callback = nullptr;
        qdesignerresourcebrowserinterface_currentpath_callback = nullptr;
        qdesignerresourcebrowserinterface_devtype_callback = nullptr;
        qdesignerresourcebrowserinterface_setvisible_callback = nullptr;
        qdesignerresourcebrowserinterface_sizehint_callback = nullptr;
        qdesignerresourcebrowserinterface_minimumsizehint_callback = nullptr;
        qdesignerresourcebrowserinterface_heightforwidth_callback = nullptr;
        qdesignerresourcebrowserinterface_hasheightforwidth_callback = nullptr;
        qdesignerresourcebrowserinterface_paintengine_callback = nullptr;
        qdesignerresourcebrowserinterface_event_callback = nullptr;
        qdesignerresourcebrowserinterface_mousepressevent_callback = nullptr;
        qdesignerresourcebrowserinterface_mousereleaseevent_callback = nullptr;
        qdesignerresourcebrowserinterface_mousedoubleclickevent_callback = nullptr;
        qdesignerresourcebrowserinterface_mousemoveevent_callback = nullptr;
        qdesignerresourcebrowserinterface_wheelevent_callback = nullptr;
        qdesignerresourcebrowserinterface_keypressevent_callback = nullptr;
        qdesignerresourcebrowserinterface_keyreleaseevent_callback = nullptr;
        qdesignerresourcebrowserinterface_focusinevent_callback = nullptr;
        qdesignerresourcebrowserinterface_focusoutevent_callback = nullptr;
        qdesignerresourcebrowserinterface_enterevent_callback = nullptr;
        qdesignerresourcebrowserinterface_leaveevent_callback = nullptr;
        qdesignerresourcebrowserinterface_paintevent_callback = nullptr;
        qdesignerresourcebrowserinterface_moveevent_callback = nullptr;
        qdesignerresourcebrowserinterface_resizeevent_callback = nullptr;
        qdesignerresourcebrowserinterface_closeevent_callback = nullptr;
        qdesignerresourcebrowserinterface_contextmenuevent_callback = nullptr;
        qdesignerresourcebrowserinterface_tabletevent_callback = nullptr;
        qdesignerresourcebrowserinterface_actionevent_callback = nullptr;
        qdesignerresourcebrowserinterface_dragenterevent_callback = nullptr;
        qdesignerresourcebrowserinterface_dragmoveevent_callback = nullptr;
        qdesignerresourcebrowserinterface_dragleaveevent_callback = nullptr;
        qdesignerresourcebrowserinterface_dropevent_callback = nullptr;
        qdesignerresourcebrowserinterface_showevent_callback = nullptr;
        qdesignerresourcebrowserinterface_hideevent_callback = nullptr;
        qdesignerresourcebrowserinterface_nativeevent_callback = nullptr;
        qdesignerresourcebrowserinterface_changeevent_callback = nullptr;
        qdesignerresourcebrowserinterface_metric_callback = nullptr;
        qdesignerresourcebrowserinterface_initpainter_callback = nullptr;
        qdesignerresourcebrowserinterface_redirected_callback = nullptr;
        qdesignerresourcebrowserinterface_sharedpainter_callback = nullptr;
        qdesignerresourcebrowserinterface_inputmethodevent_callback = nullptr;
        qdesignerresourcebrowserinterface_inputmethodquery_callback = nullptr;
        qdesignerresourcebrowserinterface_focusnextprevchild_callback = nullptr;
        qdesignerresourcebrowserinterface_eventfilter_callback = nullptr;
        qdesignerresourcebrowserinterface_timerevent_callback = nullptr;
        qdesignerresourcebrowserinterface_childevent_callback = nullptr;
        qdesignerresourcebrowserinterface_customevent_callback = nullptr;
        qdesignerresourcebrowserinterface_connectnotify_callback = nullptr;
        qdesignerresourcebrowserinterface_disconnectnotify_callback = nullptr;
        qdesignerresourcebrowserinterface_updatemicrofocus_callback = nullptr;
        qdesignerresourcebrowserinterface_create_callback = nullptr;
        qdesignerresourcebrowserinterface_destroy_callback = nullptr;
        qdesignerresourcebrowserinterface_focusnextchild_callback = nullptr;
        qdesignerresourcebrowserinterface_focuspreviouschild_callback = nullptr;
        qdesignerresourcebrowserinterface_sender_callback = nullptr;
        qdesignerresourcebrowserinterface_sendersignalindex_callback = nullptr;
        qdesignerresourcebrowserinterface_receivers_callback = nullptr;
        qdesignerresourcebrowserinterface_issignalconnected_callback = nullptr;
        qdesignerresourcebrowserinterface_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerResourceBrowserInterface_MetaObject_Callback(QDesignerResourceBrowserInterface_MetaObject_Callback cb) { qdesignerresourcebrowserinterface_metaobject_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Metacast_Callback(QDesignerResourceBrowserInterface_Metacast_Callback cb) { qdesignerresourcebrowserinterface_metacast_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Metacall_Callback(QDesignerResourceBrowserInterface_Metacall_Callback cb) { qdesignerresourcebrowserinterface_metacall_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_SetCurrentPath_Callback(QDesignerResourceBrowserInterface_SetCurrentPath_Callback cb) { qdesignerresourcebrowserinterface_setcurrentpath_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_CurrentPath_Callback(QDesignerResourceBrowserInterface_CurrentPath_Callback cb) { qdesignerresourcebrowserinterface_currentpath_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_DevType_Callback(QDesignerResourceBrowserInterface_DevType_Callback cb) { qdesignerresourcebrowserinterface_devtype_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_SetVisible_Callback(QDesignerResourceBrowserInterface_SetVisible_Callback cb) { qdesignerresourcebrowserinterface_setvisible_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_SizeHint_Callback(QDesignerResourceBrowserInterface_SizeHint_Callback cb) { qdesignerresourcebrowserinterface_sizehint_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_MinimumSizeHint_Callback(QDesignerResourceBrowserInterface_MinimumSizeHint_Callback cb) { qdesignerresourcebrowserinterface_minimumsizehint_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_HeightForWidth_Callback(QDesignerResourceBrowserInterface_HeightForWidth_Callback cb) { qdesignerresourcebrowserinterface_heightforwidth_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_HasHeightForWidth_Callback(QDesignerResourceBrowserInterface_HasHeightForWidth_Callback cb) { qdesignerresourcebrowserinterface_hasheightforwidth_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_PaintEngine_Callback(QDesignerResourceBrowserInterface_PaintEngine_Callback cb) { qdesignerresourcebrowserinterface_paintengine_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Event_Callback(QDesignerResourceBrowserInterface_Event_Callback cb) { qdesignerresourcebrowserinterface_event_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_MousePressEvent_Callback(QDesignerResourceBrowserInterface_MousePressEvent_Callback cb) { qdesignerresourcebrowserinterface_mousepressevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_MouseReleaseEvent_Callback(QDesignerResourceBrowserInterface_MouseReleaseEvent_Callback cb) { qdesignerresourcebrowserinterface_mousereleaseevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback(QDesignerResourceBrowserInterface_MouseDoubleClickEvent_Callback cb) { qdesignerresourcebrowserinterface_mousedoubleclickevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_MouseMoveEvent_Callback(QDesignerResourceBrowserInterface_MouseMoveEvent_Callback cb) { qdesignerresourcebrowserinterface_mousemoveevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_WheelEvent_Callback(QDesignerResourceBrowserInterface_WheelEvent_Callback cb) { qdesignerresourcebrowserinterface_wheelevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_KeyPressEvent_Callback(QDesignerResourceBrowserInterface_KeyPressEvent_Callback cb) { qdesignerresourcebrowserinterface_keypressevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_KeyReleaseEvent_Callback(QDesignerResourceBrowserInterface_KeyReleaseEvent_Callback cb) { qdesignerresourcebrowserinterface_keyreleaseevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_FocusInEvent_Callback(QDesignerResourceBrowserInterface_FocusInEvent_Callback cb) { qdesignerresourcebrowserinterface_focusinevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_FocusOutEvent_Callback(QDesignerResourceBrowserInterface_FocusOutEvent_Callback cb) { qdesignerresourcebrowserinterface_focusoutevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_EnterEvent_Callback(QDesignerResourceBrowserInterface_EnterEvent_Callback cb) { qdesignerresourcebrowserinterface_enterevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_LeaveEvent_Callback(QDesignerResourceBrowserInterface_LeaveEvent_Callback cb) { qdesignerresourcebrowserinterface_leaveevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_PaintEvent_Callback(QDesignerResourceBrowserInterface_PaintEvent_Callback cb) { qdesignerresourcebrowserinterface_paintevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_MoveEvent_Callback(QDesignerResourceBrowserInterface_MoveEvent_Callback cb) { qdesignerresourcebrowserinterface_moveevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_ResizeEvent_Callback(QDesignerResourceBrowserInterface_ResizeEvent_Callback cb) { qdesignerresourcebrowserinterface_resizeevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_CloseEvent_Callback(QDesignerResourceBrowserInterface_CloseEvent_Callback cb) { qdesignerresourcebrowserinterface_closeevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_ContextMenuEvent_Callback(QDesignerResourceBrowserInterface_ContextMenuEvent_Callback cb) { qdesignerresourcebrowserinterface_contextmenuevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_TabletEvent_Callback(QDesignerResourceBrowserInterface_TabletEvent_Callback cb) { qdesignerresourcebrowserinterface_tabletevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_ActionEvent_Callback(QDesignerResourceBrowserInterface_ActionEvent_Callback cb) { qdesignerresourcebrowserinterface_actionevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_DragEnterEvent_Callback(QDesignerResourceBrowserInterface_DragEnterEvent_Callback cb) { qdesignerresourcebrowserinterface_dragenterevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_DragMoveEvent_Callback(QDesignerResourceBrowserInterface_DragMoveEvent_Callback cb) { qdesignerresourcebrowserinterface_dragmoveevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_DragLeaveEvent_Callback(QDesignerResourceBrowserInterface_DragLeaveEvent_Callback cb) { qdesignerresourcebrowserinterface_dragleaveevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_DropEvent_Callback(QDesignerResourceBrowserInterface_DropEvent_Callback cb) { qdesignerresourcebrowserinterface_dropevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_ShowEvent_Callback(QDesignerResourceBrowserInterface_ShowEvent_Callback cb) { qdesignerresourcebrowserinterface_showevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_HideEvent_Callback(QDesignerResourceBrowserInterface_HideEvent_Callback cb) { qdesignerresourcebrowserinterface_hideevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_NativeEvent_Callback(QDesignerResourceBrowserInterface_NativeEvent_Callback cb) { qdesignerresourcebrowserinterface_nativeevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_ChangeEvent_Callback(QDesignerResourceBrowserInterface_ChangeEvent_Callback cb) { qdesignerresourcebrowserinterface_changeevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Metric_Callback(QDesignerResourceBrowserInterface_Metric_Callback cb) { qdesignerresourcebrowserinterface_metric_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_InitPainter_Callback(QDesignerResourceBrowserInterface_InitPainter_Callback cb) { qdesignerresourcebrowserinterface_initpainter_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Redirected_Callback(QDesignerResourceBrowserInterface_Redirected_Callback cb) { qdesignerresourcebrowserinterface_redirected_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_SharedPainter_Callback(QDesignerResourceBrowserInterface_SharedPainter_Callback cb) { qdesignerresourcebrowserinterface_sharedpainter_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_InputMethodEvent_Callback(QDesignerResourceBrowserInterface_InputMethodEvent_Callback cb) { qdesignerresourcebrowserinterface_inputmethodevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_InputMethodQuery_Callback(QDesignerResourceBrowserInterface_InputMethodQuery_Callback cb) { qdesignerresourcebrowserinterface_inputmethodquery_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_FocusNextPrevChild_Callback(QDesignerResourceBrowserInterface_FocusNextPrevChild_Callback cb) { qdesignerresourcebrowserinterface_focusnextprevchild_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_EventFilter_Callback(QDesignerResourceBrowserInterface_EventFilter_Callback cb) { qdesignerresourcebrowserinterface_eventfilter_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_TimerEvent_Callback(QDesignerResourceBrowserInterface_TimerEvent_Callback cb) { qdesignerresourcebrowserinterface_timerevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_ChildEvent_Callback(QDesignerResourceBrowserInterface_ChildEvent_Callback cb) { qdesignerresourcebrowserinterface_childevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_CustomEvent_Callback(QDesignerResourceBrowserInterface_CustomEvent_Callback cb) { qdesignerresourcebrowserinterface_customevent_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_ConnectNotify_Callback(QDesignerResourceBrowserInterface_ConnectNotify_Callback cb) { qdesignerresourcebrowserinterface_connectnotify_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_DisconnectNotify_Callback(QDesignerResourceBrowserInterface_DisconnectNotify_Callback cb) { qdesignerresourcebrowserinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_UpdateMicroFocus_Callback(QDesignerResourceBrowserInterface_UpdateMicroFocus_Callback cb) { qdesignerresourcebrowserinterface_updatemicrofocus_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Create_Callback(QDesignerResourceBrowserInterface_Create_Callback cb) { qdesignerresourcebrowserinterface_create_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Destroy_Callback(QDesignerResourceBrowserInterface_Destroy_Callback cb) { qdesignerresourcebrowserinterface_destroy_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_FocusNextChild_Callback(QDesignerResourceBrowserInterface_FocusNextChild_Callback cb) { qdesignerresourcebrowserinterface_focusnextchild_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_FocusPreviousChild_Callback(QDesignerResourceBrowserInterface_FocusPreviousChild_Callback cb) { qdesignerresourcebrowserinterface_focuspreviouschild_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Sender_Callback(QDesignerResourceBrowserInterface_Sender_Callback cb) { qdesignerresourcebrowserinterface_sender_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_SenderSignalIndex_Callback(QDesignerResourceBrowserInterface_SenderSignalIndex_Callback cb) { qdesignerresourcebrowserinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_Receivers_Callback(QDesignerResourceBrowserInterface_Receivers_Callback cb) { qdesignerresourcebrowserinterface_receivers_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_IsSignalConnected_Callback(QDesignerResourceBrowserInterface_IsSignalConnected_Callback cb) { qdesignerresourcebrowserinterface_issignalconnected_callback = cb; }
    inline void setQDesignerResourceBrowserInterface_GetDecodedMetricF_Callback(QDesignerResourceBrowserInterface_GetDecodedMetricF_Callback cb) { qdesignerresourcebrowserinterface_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDesignerResourceBrowserInterface_MetaObject_IsBase(bool value) const { qdesignerresourcebrowserinterface_metaobject_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Metacast_IsBase(bool value) const { qdesignerresourcebrowserinterface_metacast_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Metacall_IsBase(bool value) const { qdesignerresourcebrowserinterface_metacall_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_SetCurrentPath_IsBase(bool value) const { qdesignerresourcebrowserinterface_setcurrentpath_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_CurrentPath_IsBase(bool value) const { qdesignerresourcebrowserinterface_currentpath_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_DevType_IsBase(bool value) const { qdesignerresourcebrowserinterface_devtype_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_SetVisible_IsBase(bool value) const { qdesignerresourcebrowserinterface_setvisible_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_SizeHint_IsBase(bool value) const { qdesignerresourcebrowserinterface_sizehint_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_MinimumSizeHint_IsBase(bool value) const { qdesignerresourcebrowserinterface_minimumsizehint_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_HeightForWidth_IsBase(bool value) const { qdesignerresourcebrowserinterface_heightforwidth_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_HasHeightForWidth_IsBase(bool value) const { qdesignerresourcebrowserinterface_hasheightforwidth_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_PaintEngine_IsBase(bool value) const { qdesignerresourcebrowserinterface_paintengine_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Event_IsBase(bool value) const { qdesignerresourcebrowserinterface_event_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_MousePressEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_mousepressevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_MouseReleaseEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_mousereleaseevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_MouseDoubleClickEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_mousedoubleclickevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_MouseMoveEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_mousemoveevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_WheelEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_wheelevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_KeyPressEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_keypressevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_KeyReleaseEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_keyreleaseevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_FocusInEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_focusinevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_FocusOutEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_focusoutevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_EnterEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_enterevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_LeaveEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_leaveevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_PaintEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_paintevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_MoveEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_moveevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_ResizeEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_resizeevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_CloseEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_closeevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_ContextMenuEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_contextmenuevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_TabletEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_tabletevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_ActionEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_actionevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_DragEnterEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_dragenterevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_DragMoveEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_dragmoveevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_DragLeaveEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_dragleaveevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_DropEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_dropevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_ShowEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_showevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_HideEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_hideevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_NativeEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_nativeevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_ChangeEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_changeevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Metric_IsBase(bool value) const { qdesignerresourcebrowserinterface_metric_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_InitPainter_IsBase(bool value) const { qdesignerresourcebrowserinterface_initpainter_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Redirected_IsBase(bool value) const { qdesignerresourcebrowserinterface_redirected_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_SharedPainter_IsBase(bool value) const { qdesignerresourcebrowserinterface_sharedpainter_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_InputMethodEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_inputmethodevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_InputMethodQuery_IsBase(bool value) const { qdesignerresourcebrowserinterface_inputmethodquery_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_FocusNextPrevChild_IsBase(bool value) const { qdesignerresourcebrowserinterface_focusnextprevchild_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_EventFilter_IsBase(bool value) const { qdesignerresourcebrowserinterface_eventfilter_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_TimerEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_timerevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_ChildEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_childevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_CustomEvent_IsBase(bool value) const { qdesignerresourcebrowserinterface_customevent_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_ConnectNotify_IsBase(bool value) const { qdesignerresourcebrowserinterface_connectnotify_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_DisconnectNotify_IsBase(bool value) const { qdesignerresourcebrowserinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_UpdateMicroFocus_IsBase(bool value) const { qdesignerresourcebrowserinterface_updatemicrofocus_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Create_IsBase(bool value) const { qdesignerresourcebrowserinterface_create_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Destroy_IsBase(bool value) const { qdesignerresourcebrowserinterface_destroy_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_FocusNextChild_IsBase(bool value) const { qdesignerresourcebrowserinterface_focusnextchild_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_FocusPreviousChild_IsBase(bool value) const { qdesignerresourcebrowserinterface_focuspreviouschild_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Sender_IsBase(bool value) const { qdesignerresourcebrowserinterface_sender_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerresourcebrowserinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_Receivers_IsBase(bool value) const { qdesignerresourcebrowserinterface_receivers_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_IsSignalConnected_IsBase(bool value) const { qdesignerresourcebrowserinterface_issignalconnected_isbase = value; }
    inline void setQDesignerResourceBrowserInterface_GetDecodedMetricF_IsBase(bool value) const { qdesignerresourcebrowserinterface_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerresourcebrowserinterface_metaobject_isbase) {
            qdesignerresourcebrowserinterface_metaobject_isbase = false;
            return QDesignerResourceBrowserInterface::metaObject();
        } else if (qdesignerresourcebrowserinterface_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qdesignerresourcebrowserinterface_metaobject_callback();
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerresourcebrowserinterface_metacast_isbase) {
            qdesignerresourcebrowserinterface_metacast_isbase = false;
            return QDesignerResourceBrowserInterface::qt_metacast(param1);
        } else if (qdesignerresourcebrowserinterface_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qdesignerresourcebrowserinterface_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerresourcebrowserinterface_metacall_isbase) {
            qdesignerresourcebrowserinterface_metacall_isbase = false;
            return QDesignerResourceBrowserInterface::qt_metacall(param1, param2, param3);
        } else if (qdesignerresourcebrowserinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdesignerresourcebrowserinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerResourceBrowserInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentPath(const QString& filePath) override {
        if (qdesignerresourcebrowserinterface_setcurrentpath_callback != nullptr) {
            const QString filePath_ret = filePath;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray filePath_b = filePath_ret.toUtf8();
            auto filePath_str_len = filePath_b.length();
            const char* filePath_str = static_cast<const char*>(malloc(filePath_str_len + 1));
            memcpy((void*)filePath_str, filePath_b.data(), filePath_str_len);
            ((char*)filePath_str)[filePath_str_len] = '\0';
            const char* cbval1 = filePath_str;

            qdesignerresourcebrowserinterface_setcurrentpath_callback(this, cbval1);
            libqt_free(filePath_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString currentPath() const override {
        if (qdesignerresourcebrowserinterface_currentpath_callback != nullptr) {
            const char* callback_ret = qdesignerresourcebrowserinterface_currentpath_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerresourcebrowserinterface_devtype_isbase) {
            qdesignerresourcebrowserinterface_devtype_isbase = false;
            return QDesignerResourceBrowserInterface::devType();
        } else if (qdesignerresourcebrowserinterface_devtype_callback != nullptr) {
            int callback_ret = qdesignerresourcebrowserinterface_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerResourceBrowserInterface::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerresourcebrowserinterface_setvisible_isbase) {
            qdesignerresourcebrowserinterface_setvisible_isbase = false;
            QDesignerResourceBrowserInterface::setVisible(visible);
        } else if (qdesignerresourcebrowserinterface_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qdesignerresourcebrowserinterface_setvisible_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerresourcebrowserinterface_sizehint_isbase) {
            qdesignerresourcebrowserinterface_sizehint_isbase = false;
            return QDesignerResourceBrowserInterface::sizeHint();
        } else if (qdesignerresourcebrowserinterface_sizehint_callback != nullptr) {
            QSize* callback_ret = qdesignerresourcebrowserinterface_sizehint_callback();
            return *callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerresourcebrowserinterface_minimumsizehint_isbase) {
            qdesignerresourcebrowserinterface_minimumsizehint_isbase = false;
            return QDesignerResourceBrowserInterface::minimumSizeHint();
        } else if (qdesignerresourcebrowserinterface_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qdesignerresourcebrowserinterface_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerresourcebrowserinterface_heightforwidth_isbase) {
            qdesignerresourcebrowserinterface_heightforwidth_isbase = false;
            return QDesignerResourceBrowserInterface::heightForWidth(param1);
        } else if (qdesignerresourcebrowserinterface_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qdesignerresourcebrowserinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerResourceBrowserInterface::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerresourcebrowserinterface_hasheightforwidth_isbase) {
            qdesignerresourcebrowserinterface_hasheightforwidth_isbase = false;
            return QDesignerResourceBrowserInterface::hasHeightForWidth();
        } else if (qdesignerresourcebrowserinterface_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qdesignerresourcebrowserinterface_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerresourcebrowserinterface_paintengine_isbase) {
            qdesignerresourcebrowserinterface_paintengine_isbase = false;
            return QDesignerResourceBrowserInterface::paintEngine();
        } else if (qdesignerresourcebrowserinterface_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qdesignerresourcebrowserinterface_paintengine_callback();
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerresourcebrowserinterface_event_isbase) {
            qdesignerresourcebrowserinterface_event_isbase = false;
            return QDesignerResourceBrowserInterface::event(event);
        } else if (qdesignerresourcebrowserinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdesignerresourcebrowserinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousepressevent_isbase) {
            qdesignerresourcebrowserinterface_mousepressevent_isbase = false;
            QDesignerResourceBrowserInterface::mousePressEvent(event);
        } else if (qdesignerresourcebrowserinterface_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_mousepressevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousereleaseevent_isbase) {
            qdesignerresourcebrowserinterface_mousereleaseevent_isbase = false;
            QDesignerResourceBrowserInterface::mouseReleaseEvent(event);
        } else if (qdesignerresourcebrowserinterface_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_mousereleaseevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousedoubleclickevent_isbase) {
            qdesignerresourcebrowserinterface_mousedoubleclickevent_isbase = false;
            QDesignerResourceBrowserInterface::mouseDoubleClickEvent(event);
        } else if (qdesignerresourcebrowserinterface_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerresourcebrowserinterface_mousemoveevent_isbase) {
            qdesignerresourcebrowserinterface_mousemoveevent_isbase = false;
            QDesignerResourceBrowserInterface::mouseMoveEvent(event);
        } else if (qdesignerresourcebrowserinterface_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_mousemoveevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerresourcebrowserinterface_wheelevent_isbase) {
            qdesignerresourcebrowserinterface_wheelevent_isbase = false;
            QDesignerResourceBrowserInterface::wheelEvent(event);
        } else if (qdesignerresourcebrowserinterface_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_wheelevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerresourcebrowserinterface_keypressevent_isbase) {
            qdesignerresourcebrowserinterface_keypressevent_isbase = false;
            QDesignerResourceBrowserInterface::keyPressEvent(event);
        } else if (qdesignerresourcebrowserinterface_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_keypressevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerresourcebrowserinterface_keyreleaseevent_isbase) {
            qdesignerresourcebrowserinterface_keyreleaseevent_isbase = false;
            QDesignerResourceBrowserInterface::keyReleaseEvent(event);
        } else if (qdesignerresourcebrowserinterface_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_keyreleaseevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerresourcebrowserinterface_focusinevent_isbase) {
            qdesignerresourcebrowserinterface_focusinevent_isbase = false;
            QDesignerResourceBrowserInterface::focusInEvent(event);
        } else if (qdesignerresourcebrowserinterface_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_focusinevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerresourcebrowserinterface_focusoutevent_isbase) {
            qdesignerresourcebrowserinterface_focusoutevent_isbase = false;
            QDesignerResourceBrowserInterface::focusOutEvent(event);
        } else if (qdesignerresourcebrowserinterface_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_focusoutevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerresourcebrowserinterface_enterevent_isbase) {
            qdesignerresourcebrowserinterface_enterevent_isbase = false;
            QDesignerResourceBrowserInterface::enterEvent(event);
        } else if (qdesignerresourcebrowserinterface_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_enterevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerresourcebrowserinterface_leaveevent_isbase) {
            qdesignerresourcebrowserinterface_leaveevent_isbase = false;
            QDesignerResourceBrowserInterface::leaveEvent(event);
        } else if (qdesignerresourcebrowserinterface_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_leaveevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerresourcebrowserinterface_paintevent_isbase) {
            qdesignerresourcebrowserinterface_paintevent_isbase = false;
            QDesignerResourceBrowserInterface::paintEvent(event);
        } else if (qdesignerresourcebrowserinterface_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_paintevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerresourcebrowserinterface_moveevent_isbase) {
            qdesignerresourcebrowserinterface_moveevent_isbase = false;
            QDesignerResourceBrowserInterface::moveEvent(event);
        } else if (qdesignerresourcebrowserinterface_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_moveevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerresourcebrowserinterface_resizeevent_isbase) {
            qdesignerresourcebrowserinterface_resizeevent_isbase = false;
            QDesignerResourceBrowserInterface::resizeEvent(event);
        } else if (qdesignerresourcebrowserinterface_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_resizeevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerresourcebrowserinterface_closeevent_isbase) {
            qdesignerresourcebrowserinterface_closeevent_isbase = false;
            QDesignerResourceBrowserInterface::closeEvent(event);
        } else if (qdesignerresourcebrowserinterface_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_closeevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerresourcebrowserinterface_contextmenuevent_isbase) {
            qdesignerresourcebrowserinterface_contextmenuevent_isbase = false;
            QDesignerResourceBrowserInterface::contextMenuEvent(event);
        } else if (qdesignerresourcebrowserinterface_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_contextmenuevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerresourcebrowserinterface_tabletevent_isbase) {
            qdesignerresourcebrowserinterface_tabletevent_isbase = false;
            QDesignerResourceBrowserInterface::tabletEvent(event);
        } else if (qdesignerresourcebrowserinterface_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_tabletevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerresourcebrowserinterface_actionevent_isbase) {
            qdesignerresourcebrowserinterface_actionevent_isbase = false;
            QDesignerResourceBrowserInterface::actionEvent(event);
        } else if (qdesignerresourcebrowserinterface_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_actionevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerresourcebrowserinterface_dragenterevent_isbase) {
            qdesignerresourcebrowserinterface_dragenterevent_isbase = false;
            QDesignerResourceBrowserInterface::dragEnterEvent(event);
        } else if (qdesignerresourcebrowserinterface_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_dragenterevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerresourcebrowserinterface_dragmoveevent_isbase) {
            qdesignerresourcebrowserinterface_dragmoveevent_isbase = false;
            QDesignerResourceBrowserInterface::dragMoveEvent(event);
        } else if (qdesignerresourcebrowserinterface_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_dragmoveevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerresourcebrowserinterface_dragleaveevent_isbase) {
            qdesignerresourcebrowserinterface_dragleaveevent_isbase = false;
            QDesignerResourceBrowserInterface::dragLeaveEvent(event);
        } else if (qdesignerresourcebrowserinterface_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_dragleaveevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerresourcebrowserinterface_dropevent_isbase) {
            qdesignerresourcebrowserinterface_dropevent_isbase = false;
            QDesignerResourceBrowserInterface::dropEvent(event);
        } else if (qdesignerresourcebrowserinterface_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_dropevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerresourcebrowserinterface_showevent_isbase) {
            qdesignerresourcebrowserinterface_showevent_isbase = false;
            QDesignerResourceBrowserInterface::showEvent(event);
        } else if (qdesignerresourcebrowserinterface_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_showevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerresourcebrowserinterface_hideevent_isbase) {
            qdesignerresourcebrowserinterface_hideevent_isbase = false;
            QDesignerResourceBrowserInterface::hideEvent(event);
        } else if (qdesignerresourcebrowserinterface_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_hideevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerresourcebrowserinterface_nativeevent_isbase) {
            qdesignerresourcebrowserinterface_nativeevent_isbase = false;
            return QDesignerResourceBrowserInterface::nativeEvent(eventType, message, result);
        } else if (qdesignerresourcebrowserinterface_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qdesignerresourcebrowserinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerresourcebrowserinterface_changeevent_isbase) {
            qdesignerresourcebrowserinterface_changeevent_isbase = false;
            QDesignerResourceBrowserInterface::changeEvent(param1);
        } else if (qdesignerresourcebrowserinterface_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qdesignerresourcebrowserinterface_changeevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerresourcebrowserinterface_metric_isbase) {
            qdesignerresourcebrowserinterface_metric_isbase = false;
            return QDesignerResourceBrowserInterface::metric(param1);
        } else if (qdesignerresourcebrowserinterface_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qdesignerresourcebrowserinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerResourceBrowserInterface::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerresourcebrowserinterface_initpainter_isbase) {
            qdesignerresourcebrowserinterface_initpainter_isbase = false;
            QDesignerResourceBrowserInterface::initPainter(painter);
        } else if (qdesignerresourcebrowserinterface_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qdesignerresourcebrowserinterface_initpainter_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerresourcebrowserinterface_redirected_isbase) {
            qdesignerresourcebrowserinterface_redirected_isbase = false;
            return QDesignerResourceBrowserInterface::redirected(offset);
        } else if (qdesignerresourcebrowserinterface_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qdesignerresourcebrowserinterface_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerresourcebrowserinterface_sharedpainter_isbase) {
            qdesignerresourcebrowserinterface_sharedpainter_isbase = false;
            return QDesignerResourceBrowserInterface::sharedPainter();
        } else if (qdesignerresourcebrowserinterface_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qdesignerresourcebrowserinterface_sharedpainter_callback();
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerresourcebrowserinterface_inputmethodevent_isbase) {
            qdesignerresourcebrowserinterface_inputmethodevent_isbase = false;
            QDesignerResourceBrowserInterface::inputMethodEvent(param1);
        } else if (qdesignerresourcebrowserinterface_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qdesignerresourcebrowserinterface_inputmethodevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerresourcebrowserinterface_inputmethodquery_isbase) {
            qdesignerresourcebrowserinterface_inputmethodquery_isbase = false;
            return QDesignerResourceBrowserInterface::inputMethodQuery(param1);
        } else if (qdesignerresourcebrowserinterface_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qdesignerresourcebrowserinterface_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerresourcebrowserinterface_focusnextprevchild_isbase) {
            qdesignerresourcebrowserinterface_focusnextprevchild_isbase = false;
            return QDesignerResourceBrowserInterface::focusNextPrevChild(next);
        } else if (qdesignerresourcebrowserinterface_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qdesignerresourcebrowserinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerresourcebrowserinterface_eventfilter_isbase) {
            qdesignerresourcebrowserinterface_eventfilter_isbase = false;
            return QDesignerResourceBrowserInterface::eventFilter(watched, event);
        } else if (qdesignerresourcebrowserinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdesignerresourcebrowserinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerresourcebrowserinterface_timerevent_isbase) {
            qdesignerresourcebrowserinterface_timerevent_isbase = false;
            QDesignerResourceBrowserInterface::timerEvent(event);
        } else if (qdesignerresourcebrowserinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_timerevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerresourcebrowserinterface_childevent_isbase) {
            qdesignerresourcebrowserinterface_childevent_isbase = false;
            QDesignerResourceBrowserInterface::childEvent(event);
        } else if (qdesignerresourcebrowserinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_childevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerresourcebrowserinterface_customevent_isbase) {
            qdesignerresourcebrowserinterface_customevent_isbase = false;
            QDesignerResourceBrowserInterface::customEvent(event);
        } else if (qdesignerresourcebrowserinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdesignerresourcebrowserinterface_customevent_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerresourcebrowserinterface_connectnotify_isbase) {
            qdesignerresourcebrowserinterface_connectnotify_isbase = false;
            QDesignerResourceBrowserInterface::connectNotify(signal);
        } else if (qdesignerresourcebrowserinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerresourcebrowserinterface_connectnotify_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerresourcebrowserinterface_disconnectnotify_isbase) {
            qdesignerresourcebrowserinterface_disconnectnotify_isbase = false;
            QDesignerResourceBrowserInterface::disconnectNotify(signal);
        } else if (qdesignerresourcebrowserinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdesignerresourcebrowserinterface_disconnectnotify_callback(this, cbval1);
        } else {
            QDesignerResourceBrowserInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdesignerresourcebrowserinterface_updatemicrofocus_isbase) {
            qdesignerresourcebrowserinterface_updatemicrofocus_isbase = false;
            QDesignerResourceBrowserInterface::updateMicroFocus();
        } else if (qdesignerresourcebrowserinterface_updatemicrofocus_callback != nullptr) {
            qdesignerresourcebrowserinterface_updatemicrofocus_callback();
        } else {
            QDesignerResourceBrowserInterface::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdesignerresourcebrowserinterface_create_isbase) {
            qdesignerresourcebrowserinterface_create_isbase = false;
            QDesignerResourceBrowserInterface::create();
        } else if (qdesignerresourcebrowserinterface_create_callback != nullptr) {
            qdesignerresourcebrowserinterface_create_callback();
        } else {
            QDesignerResourceBrowserInterface::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdesignerresourcebrowserinterface_destroy_isbase) {
            qdesignerresourcebrowserinterface_destroy_isbase = false;
            QDesignerResourceBrowserInterface::destroy();
        } else if (qdesignerresourcebrowserinterface_destroy_callback != nullptr) {
            qdesignerresourcebrowserinterface_destroy_callback();
        } else {
            QDesignerResourceBrowserInterface::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdesignerresourcebrowserinterface_focusnextchild_isbase) {
            qdesignerresourcebrowserinterface_focusnextchild_isbase = false;
            return QDesignerResourceBrowserInterface::focusNextChild();
        } else if (qdesignerresourcebrowserinterface_focusnextchild_callback != nullptr) {
            bool callback_ret = qdesignerresourcebrowserinterface_focusnextchild_callback();
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdesignerresourcebrowserinterface_focuspreviouschild_isbase) {
            qdesignerresourcebrowserinterface_focuspreviouschild_isbase = false;
            return QDesignerResourceBrowserInterface::focusPreviousChild();
        } else if (qdesignerresourcebrowserinterface_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qdesignerresourcebrowserinterface_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerresourcebrowserinterface_sender_isbase) {
            qdesignerresourcebrowserinterface_sender_isbase = false;
            return QDesignerResourceBrowserInterface::sender();
        } else if (qdesignerresourcebrowserinterface_sender_callback != nullptr) {
            QObject* callback_ret = qdesignerresourcebrowserinterface_sender_callback();
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerresourcebrowserinterface_sendersignalindex_isbase) {
            qdesignerresourcebrowserinterface_sendersignalindex_isbase = false;
            return QDesignerResourceBrowserInterface::senderSignalIndex();
        } else if (qdesignerresourcebrowserinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = qdesignerresourcebrowserinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerResourceBrowserInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerresourcebrowserinterface_receivers_isbase) {
            qdesignerresourcebrowserinterface_receivers_isbase = false;
            return QDesignerResourceBrowserInterface::receivers(signal);
        } else if (qdesignerresourcebrowserinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdesignerresourcebrowserinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDesignerResourceBrowserInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerresourcebrowserinterface_issignalconnected_isbase) {
            qdesignerresourcebrowserinterface_issignalconnected_isbase = false;
            return QDesignerResourceBrowserInterface::isSignalConnected(signal);
        } else if (qdesignerresourcebrowserinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdesignerresourcebrowserinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDesignerResourceBrowserInterface::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdesignerresourcebrowserinterface_getdecodedmetricf_isbase) {
            qdesignerresourcebrowserinterface_getdecodedmetricf_isbase = false;
            return QDesignerResourceBrowserInterface::getDecodedMetricF(metricA, metricB);
        } else if (qdesignerresourcebrowserinterface_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qdesignerresourcebrowserinterface_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QDesignerResourceBrowserInterface::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QDesignerResourceBrowserInterface_Event(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend bool QDesignerResourceBrowserInterface_SuperEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_MousePressEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMousePressEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_MouseReleaseEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMouseReleaseEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_MouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMouseDoubleClickEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_MouseMoveEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMouseMoveEvent(QDesignerResourceBrowserInterface* self, QMouseEvent* event);
    friend void QDesignerResourceBrowserInterface_WheelEvent(QDesignerResourceBrowserInterface* self, QWheelEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperWheelEvent(QDesignerResourceBrowserInterface* self, QWheelEvent* event);
    friend void QDesignerResourceBrowserInterface_KeyPressEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperKeyPressEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event);
    friend void QDesignerResourceBrowserInterface_KeyReleaseEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperKeyReleaseEvent(QDesignerResourceBrowserInterface* self, QKeyEvent* event);
    friend void QDesignerResourceBrowserInterface_FocusInEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperFocusInEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event);
    friend void QDesignerResourceBrowserInterface_FocusOutEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperFocusOutEvent(QDesignerResourceBrowserInterface* self, QFocusEvent* event);
    friend void QDesignerResourceBrowserInterface_EnterEvent(QDesignerResourceBrowserInterface* self, QEnterEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperEnterEvent(QDesignerResourceBrowserInterface* self, QEnterEvent* event);
    friend void QDesignerResourceBrowserInterface_LeaveEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperLeaveEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_PaintEvent(QDesignerResourceBrowserInterface* self, QPaintEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperPaintEvent(QDesignerResourceBrowserInterface* self, QPaintEvent* event);
    friend void QDesignerResourceBrowserInterface_MoveEvent(QDesignerResourceBrowserInterface* self, QMoveEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperMoveEvent(QDesignerResourceBrowserInterface* self, QMoveEvent* event);
    friend void QDesignerResourceBrowserInterface_ResizeEvent(QDesignerResourceBrowserInterface* self, QResizeEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperResizeEvent(QDesignerResourceBrowserInterface* self, QResizeEvent* event);
    friend void QDesignerResourceBrowserInterface_CloseEvent(QDesignerResourceBrowserInterface* self, QCloseEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperCloseEvent(QDesignerResourceBrowserInterface* self, QCloseEvent* event);
    friend void QDesignerResourceBrowserInterface_ContextMenuEvent(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperContextMenuEvent(QDesignerResourceBrowserInterface* self, QContextMenuEvent* event);
    friend void QDesignerResourceBrowserInterface_TabletEvent(QDesignerResourceBrowserInterface* self, QTabletEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperTabletEvent(QDesignerResourceBrowserInterface* self, QTabletEvent* event);
    friend void QDesignerResourceBrowserInterface_ActionEvent(QDesignerResourceBrowserInterface* self, QActionEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperActionEvent(QDesignerResourceBrowserInterface* self, QActionEvent* event);
    friend void QDesignerResourceBrowserInterface_DragEnterEvent(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDragEnterEvent(QDesignerResourceBrowserInterface* self, QDragEnterEvent* event);
    friend void QDesignerResourceBrowserInterface_DragMoveEvent(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDragMoveEvent(QDesignerResourceBrowserInterface* self, QDragMoveEvent* event);
    friend void QDesignerResourceBrowserInterface_DragLeaveEvent(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDragLeaveEvent(QDesignerResourceBrowserInterface* self, QDragLeaveEvent* event);
    friend void QDesignerResourceBrowserInterface_DropEvent(QDesignerResourceBrowserInterface* self, QDropEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperDropEvent(QDesignerResourceBrowserInterface* self, QDropEvent* event);
    friend void QDesignerResourceBrowserInterface_ShowEvent(QDesignerResourceBrowserInterface* self, QShowEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperShowEvent(QDesignerResourceBrowserInterface* self, QShowEvent* event);
    friend void QDesignerResourceBrowserInterface_HideEvent(QDesignerResourceBrowserInterface* self, QHideEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperHideEvent(QDesignerResourceBrowserInterface* self, QHideEvent* event);
    friend bool QDesignerResourceBrowserInterface_NativeEvent(QDesignerResourceBrowserInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDesignerResourceBrowserInterface_SuperNativeEvent(QDesignerResourceBrowserInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerResourceBrowserInterface_ChangeEvent(QDesignerResourceBrowserInterface* self, QEvent* param1);
    friend void QDesignerResourceBrowserInterface_SuperChangeEvent(QDesignerResourceBrowserInterface* self, QEvent* param1);
    friend int QDesignerResourceBrowserInterface_Metric(const QDesignerResourceBrowserInterface* self, int param1);
    friend int QDesignerResourceBrowserInterface_SuperMetric(const QDesignerResourceBrowserInterface* self, int param1);
    friend void QDesignerResourceBrowserInterface_InitPainter(const QDesignerResourceBrowserInterface* self, QPainter* painter);
    friend void QDesignerResourceBrowserInterface_SuperInitPainter(const QDesignerResourceBrowserInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerResourceBrowserInterface_Redirected(const QDesignerResourceBrowserInterface* self, QPoint* offset);
    friend QPaintDevice* QDesignerResourceBrowserInterface_SuperRedirected(const QDesignerResourceBrowserInterface* self, QPoint* offset);
    friend QPainter* QDesignerResourceBrowserInterface_SharedPainter(const QDesignerResourceBrowserInterface* self);
    friend QPainter* QDesignerResourceBrowserInterface_SuperSharedPainter(const QDesignerResourceBrowserInterface* self);
    friend void QDesignerResourceBrowserInterface_InputMethodEvent(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1);
    friend void QDesignerResourceBrowserInterface_SuperInputMethodEvent(QDesignerResourceBrowserInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerResourceBrowserInterface_FocusNextPrevChild(QDesignerResourceBrowserInterface* self, bool next);
    friend bool QDesignerResourceBrowserInterface_SuperFocusNextPrevChild(QDesignerResourceBrowserInterface* self, bool next);
    friend void QDesignerResourceBrowserInterface_TimerEvent(QDesignerResourceBrowserInterface* self, QTimerEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperTimerEvent(QDesignerResourceBrowserInterface* self, QTimerEvent* event);
    friend void QDesignerResourceBrowserInterface_ChildEvent(QDesignerResourceBrowserInterface* self, QChildEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperChildEvent(QDesignerResourceBrowserInterface* self, QChildEvent* event);
    friend void QDesignerResourceBrowserInterface_CustomEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_SuperCustomEvent(QDesignerResourceBrowserInterface* self, QEvent* event);
    friend void QDesignerResourceBrowserInterface_ConnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
    friend void QDesignerResourceBrowserInterface_SuperConnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
    friend void QDesignerResourceBrowserInterface_DisconnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
    friend void QDesignerResourceBrowserInterface_SuperDisconnectNotify(QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
    friend void QDesignerResourceBrowserInterface_UpdateMicroFocus(QDesignerResourceBrowserInterface* self);
    friend void QDesignerResourceBrowserInterface_SuperUpdateMicroFocus(QDesignerResourceBrowserInterface* self);
    friend void QDesignerResourceBrowserInterface_Create(QDesignerResourceBrowserInterface* self);
    friend void QDesignerResourceBrowserInterface_SuperCreate(QDesignerResourceBrowserInterface* self);
    friend void QDesignerResourceBrowserInterface_Destroy(QDesignerResourceBrowserInterface* self);
    friend void QDesignerResourceBrowserInterface_SuperDestroy(QDesignerResourceBrowserInterface* self);
    friend bool QDesignerResourceBrowserInterface_FocusNextChild(QDesignerResourceBrowserInterface* self);
    friend bool QDesignerResourceBrowserInterface_SuperFocusNextChild(QDesignerResourceBrowserInterface* self);
    friend bool QDesignerResourceBrowserInterface_FocusPreviousChild(QDesignerResourceBrowserInterface* self);
    friend bool QDesignerResourceBrowserInterface_SuperFocusPreviousChild(QDesignerResourceBrowserInterface* self);
    friend QObject* QDesignerResourceBrowserInterface_Sender(const QDesignerResourceBrowserInterface* self);
    friend QObject* QDesignerResourceBrowserInterface_SuperSender(const QDesignerResourceBrowserInterface* self);
    friend int QDesignerResourceBrowserInterface_SenderSignalIndex(const QDesignerResourceBrowserInterface* self);
    friend int QDesignerResourceBrowserInterface_SuperSenderSignalIndex(const QDesignerResourceBrowserInterface* self);
    friend int QDesignerResourceBrowserInterface_Receivers(const QDesignerResourceBrowserInterface* self, const char* signal);
    friend int QDesignerResourceBrowserInterface_SuperReceivers(const QDesignerResourceBrowserInterface* self, const char* signal);
    friend bool QDesignerResourceBrowserInterface_IsSignalConnected(const QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
    friend bool QDesignerResourceBrowserInterface_SuperIsSignalConnected(const QDesignerResourceBrowserInterface* self, const QMetaMethod* signal);
    friend double QDesignerResourceBrowserInterface_GetDecodedMetricF(const QDesignerResourceBrowserInterface* self, int metricA, int metricB);
    friend double QDesignerResourceBrowserInterface_SuperGetDecodedMetricF(const QDesignerResourceBrowserInterface* self, int metricA, int metricB);
};

#endif
