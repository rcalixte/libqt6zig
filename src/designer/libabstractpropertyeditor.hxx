#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTPROPERTYEDITOR_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTPROPERTYEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerPropertyEditorInterface so that we can call protected methods
class VirtualQDesignerPropertyEditorInterface : public QDesignerPropertyEditorInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerPropertyEditorInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerPropertyEditorInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerPropertyEditorInterface_Metacast_Callback = void* (*)(QDesignerPropertyEditorInterface*, const char*);
    using QDesignerPropertyEditorInterface_Metacall_Callback = int (*)(QDesignerPropertyEditorInterface*, int, int, void**);
    using QDesignerPropertyEditorInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
    using QDesignerPropertyEditorInterface_IsReadOnly_Callback = bool (*)();
    using QDesignerPropertyEditorInterface_Object_Callback = QObject* (*)();
    using QDesignerPropertyEditorInterface_CurrentPropertyName_Callback = const char* (*)();
    using QDesignerPropertyEditorInterface_SetObject_Callback = void (*)(QDesignerPropertyEditorInterface*, QObject*);
    using QDesignerPropertyEditorInterface_SetPropertyValue_Callback = void (*)(QDesignerPropertyEditorInterface*, const char*, QVariant*, bool);
    using QDesignerPropertyEditorInterface_SetReadOnly_Callback = void (*)(QDesignerPropertyEditorInterface*, bool);
    using QDesignerPropertyEditorInterface_DevType_Callback = int (*)();
    using QDesignerPropertyEditorInterface_SetVisible_Callback = void (*)(QDesignerPropertyEditorInterface*, bool);
    using QDesignerPropertyEditorInterface_SizeHint_Callback = QSize* (*)();
    using QDesignerPropertyEditorInterface_MinimumSizeHint_Callback = QSize* (*)();
    using QDesignerPropertyEditorInterface_HeightForWidth_Callback = int (*)(const QDesignerPropertyEditorInterface*, int);
    using QDesignerPropertyEditorInterface_HasHeightForWidth_Callback = bool (*)();
    using QDesignerPropertyEditorInterface_PaintEngine_Callback = QPaintEngine* (*)();
    using QDesignerPropertyEditorInterface_Event_Callback = bool (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_MousePressEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_MouseReleaseEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_MouseMoveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMouseEvent*);
    using QDesignerPropertyEditorInterface_WheelEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QWheelEvent*);
    using QDesignerPropertyEditorInterface_KeyPressEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QKeyEvent*);
    using QDesignerPropertyEditorInterface_KeyReleaseEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QKeyEvent*);
    using QDesignerPropertyEditorInterface_FocusInEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QFocusEvent*);
    using QDesignerPropertyEditorInterface_FocusOutEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QFocusEvent*);
    using QDesignerPropertyEditorInterface_EnterEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEnterEvent*);
    using QDesignerPropertyEditorInterface_LeaveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_PaintEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QPaintEvent*);
    using QDesignerPropertyEditorInterface_MoveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QMoveEvent*);
    using QDesignerPropertyEditorInterface_ResizeEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QResizeEvent*);
    using QDesignerPropertyEditorInterface_CloseEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QCloseEvent*);
    using QDesignerPropertyEditorInterface_ContextMenuEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QContextMenuEvent*);
    using QDesignerPropertyEditorInterface_TabletEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QTabletEvent*);
    using QDesignerPropertyEditorInterface_ActionEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QActionEvent*);
    using QDesignerPropertyEditorInterface_DragEnterEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDragEnterEvent*);
    using QDesignerPropertyEditorInterface_DragMoveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDragMoveEvent*);
    using QDesignerPropertyEditorInterface_DragLeaveEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDragLeaveEvent*);
    using QDesignerPropertyEditorInterface_DropEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QDropEvent*);
    using QDesignerPropertyEditorInterface_ShowEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QShowEvent*);
    using QDesignerPropertyEditorInterface_HideEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QHideEvent*);
    using QDesignerPropertyEditorInterface_NativeEvent_Callback = bool (*)(QDesignerPropertyEditorInterface*, libqt_string, void*, intptr_t*);
    using QDesignerPropertyEditorInterface_ChangeEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_Metric_Callback = int (*)(const QDesignerPropertyEditorInterface*, int);
    using QDesignerPropertyEditorInterface_InitPainter_Callback = void (*)(const QDesignerPropertyEditorInterface*, QPainter*);
    using QDesignerPropertyEditorInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerPropertyEditorInterface*, QPoint*);
    using QDesignerPropertyEditorInterface_SharedPainter_Callback = QPainter* (*)();
    using QDesignerPropertyEditorInterface_InputMethodEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QInputMethodEvent*);
    using QDesignerPropertyEditorInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerPropertyEditorInterface*, int);
    using QDesignerPropertyEditorInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerPropertyEditorInterface*, bool);
    using QDesignerPropertyEditorInterface_EventFilter_Callback = bool (*)(QDesignerPropertyEditorInterface*, QObject*, QEvent*);
    using QDesignerPropertyEditorInterface_TimerEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QTimerEvent*);
    using QDesignerPropertyEditorInterface_ChildEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QChildEvent*);
    using QDesignerPropertyEditorInterface_CustomEvent_Callback = void (*)(QDesignerPropertyEditorInterface*, QEvent*);
    using QDesignerPropertyEditorInterface_ConnectNotify_Callback = void (*)(QDesignerPropertyEditorInterface*, QMetaMethod*);
    using QDesignerPropertyEditorInterface_DisconnectNotify_Callback = void (*)(QDesignerPropertyEditorInterface*, QMetaMethod*);
    using QDesignerPropertyEditorInterface_UpdateMicroFocus_Callback = void (*)();
    using QDesignerPropertyEditorInterface_Create_Callback = void (*)();
    using QDesignerPropertyEditorInterface_Destroy_Callback = void (*)();
    using QDesignerPropertyEditorInterface_FocusNextChild_Callback = bool (*)();
    using QDesignerPropertyEditorInterface_FocusPreviousChild_Callback = bool (*)();
    using QDesignerPropertyEditorInterface_Sender_Callback = QObject* (*)();
    using QDesignerPropertyEditorInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerPropertyEditorInterface_Receivers_Callback = int (*)(const QDesignerPropertyEditorInterface*, const char*);
    using QDesignerPropertyEditorInterface_IsSignalConnected_Callback = bool (*)(const QDesignerPropertyEditorInterface*, QMetaMethod*);
    using QDesignerPropertyEditorInterface_GetDecodedMetricF_Callback = double (*)(const QDesignerPropertyEditorInterface*, int, int);

  protected:
    // Instance callback storage
    QDesignerPropertyEditorInterface_MetaObject_Callback qdesignerpropertyeditorinterface_metaobject_callback = nullptr;
    QDesignerPropertyEditorInterface_Metacast_Callback qdesignerpropertyeditorinterface_metacast_callback = nullptr;
    QDesignerPropertyEditorInterface_Metacall_Callback qdesignerpropertyeditorinterface_metacall_callback = nullptr;
    QDesignerPropertyEditorInterface_Core_Callback qdesignerpropertyeditorinterface_core_callback = nullptr;
    QDesignerPropertyEditorInterface_IsReadOnly_Callback qdesignerpropertyeditorinterface_isreadonly_callback = nullptr;
    QDesignerPropertyEditorInterface_Object_Callback qdesignerpropertyeditorinterface_object_callback = nullptr;
    QDesignerPropertyEditorInterface_CurrentPropertyName_Callback qdesignerpropertyeditorinterface_currentpropertyname_callback = nullptr;
    QDesignerPropertyEditorInterface_SetObject_Callback qdesignerpropertyeditorinterface_setobject_callback = nullptr;
    QDesignerPropertyEditorInterface_SetPropertyValue_Callback qdesignerpropertyeditorinterface_setpropertyvalue_callback = nullptr;
    QDesignerPropertyEditorInterface_SetReadOnly_Callback qdesignerpropertyeditorinterface_setreadonly_callback = nullptr;
    QDesignerPropertyEditorInterface_DevType_Callback qdesignerpropertyeditorinterface_devtype_callback = nullptr;
    QDesignerPropertyEditorInterface_SetVisible_Callback qdesignerpropertyeditorinterface_setvisible_callback = nullptr;
    QDesignerPropertyEditorInterface_SizeHint_Callback qdesignerpropertyeditorinterface_sizehint_callback = nullptr;
    QDesignerPropertyEditorInterface_MinimumSizeHint_Callback qdesignerpropertyeditorinterface_minimumsizehint_callback = nullptr;
    QDesignerPropertyEditorInterface_HeightForWidth_Callback qdesignerpropertyeditorinterface_heightforwidth_callback = nullptr;
    QDesignerPropertyEditorInterface_HasHeightForWidth_Callback qdesignerpropertyeditorinterface_hasheightforwidth_callback = nullptr;
    QDesignerPropertyEditorInterface_PaintEngine_Callback qdesignerpropertyeditorinterface_paintengine_callback = nullptr;
    QDesignerPropertyEditorInterface_Event_Callback qdesignerpropertyeditorinterface_event_callback = nullptr;
    QDesignerPropertyEditorInterface_MousePressEvent_Callback qdesignerpropertyeditorinterface_mousepressevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MouseReleaseEvent_Callback qdesignerpropertyeditorinterface_mousereleaseevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback qdesignerpropertyeditorinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MouseMoveEvent_Callback qdesignerpropertyeditorinterface_mousemoveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_WheelEvent_Callback qdesignerpropertyeditorinterface_wheelevent_callback = nullptr;
    QDesignerPropertyEditorInterface_KeyPressEvent_Callback qdesignerpropertyeditorinterface_keypressevent_callback = nullptr;
    QDesignerPropertyEditorInterface_KeyReleaseEvent_Callback qdesignerpropertyeditorinterface_keyreleaseevent_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusInEvent_Callback qdesignerpropertyeditorinterface_focusinevent_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusOutEvent_Callback qdesignerpropertyeditorinterface_focusoutevent_callback = nullptr;
    QDesignerPropertyEditorInterface_EnterEvent_Callback qdesignerpropertyeditorinterface_enterevent_callback = nullptr;
    QDesignerPropertyEditorInterface_LeaveEvent_Callback qdesignerpropertyeditorinterface_leaveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_PaintEvent_Callback qdesignerpropertyeditorinterface_paintevent_callback = nullptr;
    QDesignerPropertyEditorInterface_MoveEvent_Callback qdesignerpropertyeditorinterface_moveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ResizeEvent_Callback qdesignerpropertyeditorinterface_resizeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_CloseEvent_Callback qdesignerpropertyeditorinterface_closeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ContextMenuEvent_Callback qdesignerpropertyeditorinterface_contextmenuevent_callback = nullptr;
    QDesignerPropertyEditorInterface_TabletEvent_Callback qdesignerpropertyeditorinterface_tabletevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ActionEvent_Callback qdesignerpropertyeditorinterface_actionevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DragEnterEvent_Callback qdesignerpropertyeditorinterface_dragenterevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DragMoveEvent_Callback qdesignerpropertyeditorinterface_dragmoveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DragLeaveEvent_Callback qdesignerpropertyeditorinterface_dragleaveevent_callback = nullptr;
    QDesignerPropertyEditorInterface_DropEvent_Callback qdesignerpropertyeditorinterface_dropevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ShowEvent_Callback qdesignerpropertyeditorinterface_showevent_callback = nullptr;
    QDesignerPropertyEditorInterface_HideEvent_Callback qdesignerpropertyeditorinterface_hideevent_callback = nullptr;
    QDesignerPropertyEditorInterface_NativeEvent_Callback qdesignerpropertyeditorinterface_nativeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ChangeEvent_Callback qdesignerpropertyeditorinterface_changeevent_callback = nullptr;
    QDesignerPropertyEditorInterface_Metric_Callback qdesignerpropertyeditorinterface_metric_callback = nullptr;
    QDesignerPropertyEditorInterface_InitPainter_Callback qdesignerpropertyeditorinterface_initpainter_callback = nullptr;
    QDesignerPropertyEditorInterface_Redirected_Callback qdesignerpropertyeditorinterface_redirected_callback = nullptr;
    QDesignerPropertyEditorInterface_SharedPainter_Callback qdesignerpropertyeditorinterface_sharedpainter_callback = nullptr;
    QDesignerPropertyEditorInterface_InputMethodEvent_Callback qdesignerpropertyeditorinterface_inputmethodevent_callback = nullptr;
    QDesignerPropertyEditorInterface_InputMethodQuery_Callback qdesignerpropertyeditorinterface_inputmethodquery_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusNextPrevChild_Callback qdesignerpropertyeditorinterface_focusnextprevchild_callback = nullptr;
    QDesignerPropertyEditorInterface_EventFilter_Callback qdesignerpropertyeditorinterface_eventfilter_callback = nullptr;
    QDesignerPropertyEditorInterface_TimerEvent_Callback qdesignerpropertyeditorinterface_timerevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ChildEvent_Callback qdesignerpropertyeditorinterface_childevent_callback = nullptr;
    QDesignerPropertyEditorInterface_CustomEvent_Callback qdesignerpropertyeditorinterface_customevent_callback = nullptr;
    QDesignerPropertyEditorInterface_ConnectNotify_Callback qdesignerpropertyeditorinterface_connectnotify_callback = nullptr;
    QDesignerPropertyEditorInterface_DisconnectNotify_Callback qdesignerpropertyeditorinterface_disconnectnotify_callback = nullptr;
    QDesignerPropertyEditorInterface_UpdateMicroFocus_Callback qdesignerpropertyeditorinterface_updatemicrofocus_callback = nullptr;
    QDesignerPropertyEditorInterface_Create_Callback qdesignerpropertyeditorinterface_create_callback = nullptr;
    QDesignerPropertyEditorInterface_Destroy_Callback qdesignerpropertyeditorinterface_destroy_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusNextChild_Callback qdesignerpropertyeditorinterface_focusnextchild_callback = nullptr;
    QDesignerPropertyEditorInterface_FocusPreviousChild_Callback qdesignerpropertyeditorinterface_focuspreviouschild_callback = nullptr;
    QDesignerPropertyEditorInterface_Sender_Callback qdesignerpropertyeditorinterface_sender_callback = nullptr;
    QDesignerPropertyEditorInterface_SenderSignalIndex_Callback qdesignerpropertyeditorinterface_sendersignalindex_callback = nullptr;
    QDesignerPropertyEditorInterface_Receivers_Callback qdesignerpropertyeditorinterface_receivers_callback = nullptr;
    QDesignerPropertyEditorInterface_IsSignalConnected_Callback qdesignerpropertyeditorinterface_issignalconnected_callback = nullptr;
    QDesignerPropertyEditorInterface_GetDecodedMetricF_Callback qdesignerpropertyeditorinterface_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerpropertyeditorinterface_metaobject_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_metacast_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_metacall_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_core_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_isreadonly_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_object_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_currentpropertyname_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_setobject_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_setpropertyvalue_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_setreadonly_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_devtype_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_setvisible_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_sizehint_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_minimumsizehint_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_heightforwidth_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_hasheightforwidth_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_paintengine_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_event_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_mousepressevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_mousereleaseevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_mousedoubleclickevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_mousemoveevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_wheelevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_keypressevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_keyreleaseevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_focusinevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_focusoutevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_enterevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_leaveevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_paintevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_moveevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_resizeevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_closeevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_contextmenuevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_tabletevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_actionevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_dragenterevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_dragmoveevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_dragleaveevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_dropevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_showevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_hideevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_nativeevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_changeevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_metric_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_initpainter_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_redirected_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_sharedpainter_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_inputmethodevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_inputmethodquery_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_focusnextprevchild_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_eventfilter_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_timerevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_childevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_customevent_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_connectnotify_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_updatemicrofocus_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_create_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_destroy_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_focusnextchild_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_focuspreviouschild_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_sender_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_receivers_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_issignalconnected_isbase = false;
    mutable bool qdesignerpropertyeditorinterface_getdecodedmetricf_isbase = false;

  public:
    VirtualQDesignerPropertyEditorInterface(QWidget* parent) : QDesignerPropertyEditorInterface(parent) {};
    VirtualQDesignerPropertyEditorInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerPropertyEditorInterface(parent, flags) {};

    // Callback setters
    inline void setQDesignerPropertyEditorInterface_MetaObject_Callback(QDesignerPropertyEditorInterface_MetaObject_Callback cb) { qdesignerpropertyeditorinterface_metaobject_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Metacast_Callback(QDesignerPropertyEditorInterface_Metacast_Callback cb) { qdesignerpropertyeditorinterface_metacast_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Metacall_Callback(QDesignerPropertyEditorInterface_Metacall_Callback cb) { qdesignerpropertyeditorinterface_metacall_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Core_Callback(QDesignerPropertyEditorInterface_Core_Callback cb) { qdesignerpropertyeditorinterface_core_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_IsReadOnly_Callback(QDesignerPropertyEditorInterface_IsReadOnly_Callback cb) { qdesignerpropertyeditorinterface_isreadonly_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Object_Callback(QDesignerPropertyEditorInterface_Object_Callback cb) { qdesignerpropertyeditorinterface_object_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_CurrentPropertyName_Callback(QDesignerPropertyEditorInterface_CurrentPropertyName_Callback cb) { qdesignerpropertyeditorinterface_currentpropertyname_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_SetObject_Callback(QDesignerPropertyEditorInterface_SetObject_Callback cb) { qdesignerpropertyeditorinterface_setobject_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_SetPropertyValue_Callback(QDesignerPropertyEditorInterface_SetPropertyValue_Callback cb) { qdesignerpropertyeditorinterface_setpropertyvalue_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_SetReadOnly_Callback(QDesignerPropertyEditorInterface_SetReadOnly_Callback cb) { qdesignerpropertyeditorinterface_setreadonly_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_DevType_Callback(QDesignerPropertyEditorInterface_DevType_Callback cb) { qdesignerpropertyeditorinterface_devtype_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_SetVisible_Callback(QDesignerPropertyEditorInterface_SetVisible_Callback cb) { qdesignerpropertyeditorinterface_setvisible_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_SizeHint_Callback(QDesignerPropertyEditorInterface_SizeHint_Callback cb) { qdesignerpropertyeditorinterface_sizehint_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_MinimumSizeHint_Callback(QDesignerPropertyEditorInterface_MinimumSizeHint_Callback cb) { qdesignerpropertyeditorinterface_minimumsizehint_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_HeightForWidth_Callback(QDesignerPropertyEditorInterface_HeightForWidth_Callback cb) { qdesignerpropertyeditorinterface_heightforwidth_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_HasHeightForWidth_Callback(QDesignerPropertyEditorInterface_HasHeightForWidth_Callback cb) { qdesignerpropertyeditorinterface_hasheightforwidth_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_PaintEngine_Callback(QDesignerPropertyEditorInterface_PaintEngine_Callback cb) { qdesignerpropertyeditorinterface_paintengine_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Event_Callback(QDesignerPropertyEditorInterface_Event_Callback cb) { qdesignerpropertyeditorinterface_event_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_MousePressEvent_Callback(QDesignerPropertyEditorInterface_MousePressEvent_Callback cb) { qdesignerpropertyeditorinterface_mousepressevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_MouseReleaseEvent_Callback(QDesignerPropertyEditorInterface_MouseReleaseEvent_Callback cb) { qdesignerpropertyeditorinterface_mousereleaseevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback(QDesignerPropertyEditorInterface_MouseDoubleClickEvent_Callback cb) { qdesignerpropertyeditorinterface_mousedoubleclickevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_MouseMoveEvent_Callback(QDesignerPropertyEditorInterface_MouseMoveEvent_Callback cb) { qdesignerpropertyeditorinterface_mousemoveevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_WheelEvent_Callback(QDesignerPropertyEditorInterface_WheelEvent_Callback cb) { qdesignerpropertyeditorinterface_wheelevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_KeyPressEvent_Callback(QDesignerPropertyEditorInterface_KeyPressEvent_Callback cb) { qdesignerpropertyeditorinterface_keypressevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_KeyReleaseEvent_Callback(QDesignerPropertyEditorInterface_KeyReleaseEvent_Callback cb) { qdesignerpropertyeditorinterface_keyreleaseevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_FocusInEvent_Callback(QDesignerPropertyEditorInterface_FocusInEvent_Callback cb) { qdesignerpropertyeditorinterface_focusinevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_FocusOutEvent_Callback(QDesignerPropertyEditorInterface_FocusOutEvent_Callback cb) { qdesignerpropertyeditorinterface_focusoutevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_EnterEvent_Callback(QDesignerPropertyEditorInterface_EnterEvent_Callback cb) { qdesignerpropertyeditorinterface_enterevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_LeaveEvent_Callback(QDesignerPropertyEditorInterface_LeaveEvent_Callback cb) { qdesignerpropertyeditorinterface_leaveevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_PaintEvent_Callback(QDesignerPropertyEditorInterface_PaintEvent_Callback cb) { qdesignerpropertyeditorinterface_paintevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_MoveEvent_Callback(QDesignerPropertyEditorInterface_MoveEvent_Callback cb) { qdesignerpropertyeditorinterface_moveevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_ResizeEvent_Callback(QDesignerPropertyEditorInterface_ResizeEvent_Callback cb) { qdesignerpropertyeditorinterface_resizeevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_CloseEvent_Callback(QDesignerPropertyEditorInterface_CloseEvent_Callback cb) { qdesignerpropertyeditorinterface_closeevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_ContextMenuEvent_Callback(QDesignerPropertyEditorInterface_ContextMenuEvent_Callback cb) { qdesignerpropertyeditorinterface_contextmenuevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_TabletEvent_Callback(QDesignerPropertyEditorInterface_TabletEvent_Callback cb) { qdesignerpropertyeditorinterface_tabletevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_ActionEvent_Callback(QDesignerPropertyEditorInterface_ActionEvent_Callback cb) { qdesignerpropertyeditorinterface_actionevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_DragEnterEvent_Callback(QDesignerPropertyEditorInterface_DragEnterEvent_Callback cb) { qdesignerpropertyeditorinterface_dragenterevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_DragMoveEvent_Callback(QDesignerPropertyEditorInterface_DragMoveEvent_Callback cb) { qdesignerpropertyeditorinterface_dragmoveevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_DragLeaveEvent_Callback(QDesignerPropertyEditorInterface_DragLeaveEvent_Callback cb) { qdesignerpropertyeditorinterface_dragleaveevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_DropEvent_Callback(QDesignerPropertyEditorInterface_DropEvent_Callback cb) { qdesignerpropertyeditorinterface_dropevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_ShowEvent_Callback(QDesignerPropertyEditorInterface_ShowEvent_Callback cb) { qdesignerpropertyeditorinterface_showevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_HideEvent_Callback(QDesignerPropertyEditorInterface_HideEvent_Callback cb) { qdesignerpropertyeditorinterface_hideevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_NativeEvent_Callback(QDesignerPropertyEditorInterface_NativeEvent_Callback cb) { qdesignerpropertyeditorinterface_nativeevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_ChangeEvent_Callback(QDesignerPropertyEditorInterface_ChangeEvent_Callback cb) { qdesignerpropertyeditorinterface_changeevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Metric_Callback(QDesignerPropertyEditorInterface_Metric_Callback cb) { qdesignerpropertyeditorinterface_metric_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_InitPainter_Callback(QDesignerPropertyEditorInterface_InitPainter_Callback cb) { qdesignerpropertyeditorinterface_initpainter_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Redirected_Callback(QDesignerPropertyEditorInterface_Redirected_Callback cb) { qdesignerpropertyeditorinterface_redirected_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_SharedPainter_Callback(QDesignerPropertyEditorInterface_SharedPainter_Callback cb) { qdesignerpropertyeditorinterface_sharedpainter_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_InputMethodEvent_Callback(QDesignerPropertyEditorInterface_InputMethodEvent_Callback cb) { qdesignerpropertyeditorinterface_inputmethodevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_InputMethodQuery_Callback(QDesignerPropertyEditorInterface_InputMethodQuery_Callback cb) { qdesignerpropertyeditorinterface_inputmethodquery_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_FocusNextPrevChild_Callback(QDesignerPropertyEditorInterface_FocusNextPrevChild_Callback cb) { qdesignerpropertyeditorinterface_focusnextprevchild_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_EventFilter_Callback(QDesignerPropertyEditorInterface_EventFilter_Callback cb) { qdesignerpropertyeditorinterface_eventfilter_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_TimerEvent_Callback(QDesignerPropertyEditorInterface_TimerEvent_Callback cb) { qdesignerpropertyeditorinterface_timerevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_ChildEvent_Callback(QDesignerPropertyEditorInterface_ChildEvent_Callback cb) { qdesignerpropertyeditorinterface_childevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_CustomEvent_Callback(QDesignerPropertyEditorInterface_CustomEvent_Callback cb) { qdesignerpropertyeditorinterface_customevent_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_ConnectNotify_Callback(QDesignerPropertyEditorInterface_ConnectNotify_Callback cb) { qdesignerpropertyeditorinterface_connectnotify_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_DisconnectNotify_Callback(QDesignerPropertyEditorInterface_DisconnectNotify_Callback cb) { qdesignerpropertyeditorinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_UpdateMicroFocus_Callback(QDesignerPropertyEditorInterface_UpdateMicroFocus_Callback cb) { qdesignerpropertyeditorinterface_updatemicrofocus_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Create_Callback(QDesignerPropertyEditorInterface_Create_Callback cb) { qdesignerpropertyeditorinterface_create_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Destroy_Callback(QDesignerPropertyEditorInterface_Destroy_Callback cb) { qdesignerpropertyeditorinterface_destroy_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_FocusNextChild_Callback(QDesignerPropertyEditorInterface_FocusNextChild_Callback cb) { qdesignerpropertyeditorinterface_focusnextchild_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_FocusPreviousChild_Callback(QDesignerPropertyEditorInterface_FocusPreviousChild_Callback cb) { qdesignerpropertyeditorinterface_focuspreviouschild_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Sender_Callback(QDesignerPropertyEditorInterface_Sender_Callback cb) { qdesignerpropertyeditorinterface_sender_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_SenderSignalIndex_Callback(QDesignerPropertyEditorInterface_SenderSignalIndex_Callback cb) { qdesignerpropertyeditorinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_Receivers_Callback(QDesignerPropertyEditorInterface_Receivers_Callback cb) { qdesignerpropertyeditorinterface_receivers_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_IsSignalConnected_Callback(QDesignerPropertyEditorInterface_IsSignalConnected_Callback cb) { qdesignerpropertyeditorinterface_issignalconnected_callback = cb; }
    inline void setQDesignerPropertyEditorInterface_GetDecodedMetricF_Callback(QDesignerPropertyEditorInterface_GetDecodedMetricF_Callback cb) { qdesignerpropertyeditorinterface_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDesignerPropertyEditorInterface_MetaObject_IsBase(bool value) const { qdesignerpropertyeditorinterface_metaobject_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Metacast_IsBase(bool value) const { qdesignerpropertyeditorinterface_metacast_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Metacall_IsBase(bool value) const { qdesignerpropertyeditorinterface_metacall_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Core_IsBase(bool value) const { qdesignerpropertyeditorinterface_core_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_IsReadOnly_IsBase(bool value) const { qdesignerpropertyeditorinterface_isreadonly_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Object_IsBase(bool value) const { qdesignerpropertyeditorinterface_object_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_CurrentPropertyName_IsBase(bool value) const { qdesignerpropertyeditorinterface_currentpropertyname_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_SetObject_IsBase(bool value) const { qdesignerpropertyeditorinterface_setobject_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_SetPropertyValue_IsBase(bool value) const { qdesignerpropertyeditorinterface_setpropertyvalue_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_SetReadOnly_IsBase(bool value) const { qdesignerpropertyeditorinterface_setreadonly_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_DevType_IsBase(bool value) const { qdesignerpropertyeditorinterface_devtype_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_SetVisible_IsBase(bool value) const { qdesignerpropertyeditorinterface_setvisible_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_SizeHint_IsBase(bool value) const { qdesignerpropertyeditorinterface_sizehint_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_MinimumSizeHint_IsBase(bool value) const { qdesignerpropertyeditorinterface_minimumsizehint_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_HeightForWidth_IsBase(bool value) const { qdesignerpropertyeditorinterface_heightforwidth_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_HasHeightForWidth_IsBase(bool value) const { qdesignerpropertyeditorinterface_hasheightforwidth_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_PaintEngine_IsBase(bool value) const { qdesignerpropertyeditorinterface_paintengine_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Event_IsBase(bool value) const { qdesignerpropertyeditorinterface_event_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_MousePressEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_mousepressevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_MouseReleaseEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_mousereleaseevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_MouseDoubleClickEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_mousedoubleclickevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_MouseMoveEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_mousemoveevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_WheelEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_wheelevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_KeyPressEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_keypressevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_KeyReleaseEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_keyreleaseevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_FocusInEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_focusinevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_FocusOutEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_focusoutevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_EnterEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_enterevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_LeaveEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_leaveevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_PaintEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_paintevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_MoveEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_moveevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_ResizeEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_resizeevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_CloseEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_closeevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_ContextMenuEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_contextmenuevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_TabletEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_tabletevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_ActionEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_actionevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_DragEnterEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_dragenterevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_DragMoveEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_dragmoveevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_DragLeaveEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_dragleaveevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_DropEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_dropevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_ShowEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_showevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_HideEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_hideevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_NativeEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_nativeevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_ChangeEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_changeevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Metric_IsBase(bool value) const { qdesignerpropertyeditorinterface_metric_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_InitPainter_IsBase(bool value) const { qdesignerpropertyeditorinterface_initpainter_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Redirected_IsBase(bool value) const { qdesignerpropertyeditorinterface_redirected_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_SharedPainter_IsBase(bool value) const { qdesignerpropertyeditorinterface_sharedpainter_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_InputMethodEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_inputmethodevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_InputMethodQuery_IsBase(bool value) const { qdesignerpropertyeditorinterface_inputmethodquery_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_FocusNextPrevChild_IsBase(bool value) const { qdesignerpropertyeditorinterface_focusnextprevchild_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_EventFilter_IsBase(bool value) const { qdesignerpropertyeditorinterface_eventfilter_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_TimerEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_timerevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_ChildEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_childevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_CustomEvent_IsBase(bool value) const { qdesignerpropertyeditorinterface_customevent_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_ConnectNotify_IsBase(bool value) const { qdesignerpropertyeditorinterface_connectnotify_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_DisconnectNotify_IsBase(bool value) const { qdesignerpropertyeditorinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_UpdateMicroFocus_IsBase(bool value) const { qdesignerpropertyeditorinterface_updatemicrofocus_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Create_IsBase(bool value) const { qdesignerpropertyeditorinterface_create_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Destroy_IsBase(bool value) const { qdesignerpropertyeditorinterface_destroy_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_FocusNextChild_IsBase(bool value) const { qdesignerpropertyeditorinterface_focusnextchild_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_FocusPreviousChild_IsBase(bool value) const { qdesignerpropertyeditorinterface_focuspreviouschild_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Sender_IsBase(bool value) const { qdesignerpropertyeditorinterface_sender_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerpropertyeditorinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_Receivers_IsBase(bool value) const { qdesignerpropertyeditorinterface_receivers_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_IsSignalConnected_IsBase(bool value) const { qdesignerpropertyeditorinterface_issignalconnected_isbase = value; }
    inline void setQDesignerPropertyEditorInterface_GetDecodedMetricF_IsBase(bool value) const { qdesignerpropertyeditorinterface_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerpropertyeditorinterface_metaobject_isbase) {
            qdesignerpropertyeditorinterface_metaobject_isbase = false;
            return QDesignerPropertyEditorInterface::metaObject();
        }
        auto metaobject_cb = qdesignerpropertyeditorinterface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerpropertyeditorinterface_metacast_isbase) {
            qdesignerpropertyeditorinterface_metacast_isbase = false;
            return QDesignerPropertyEditorInterface::qt_metacast(param1);
        }
        auto metacast_cb = qdesignerpropertyeditorinterface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerpropertyeditorinterface_metacall_isbase) {
            qdesignerpropertyeditorinterface_metacall_isbase = false;
            return QDesignerPropertyEditorInterface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdesignerpropertyeditorinterface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerpropertyeditorinterface_core_isbase) {
            qdesignerpropertyeditorinterface_core_isbase = false;
            return QDesignerPropertyEditorInterface::core();
        }
        auto core_cb = qdesignerpropertyeditorinterface_core_callback;
        if (core_cb) {
            QDesignerFormEditorInterface* callback_ret = core_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::core();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isReadOnly() const override {
        auto isreadonly_cb = qdesignerpropertyeditorinterface_isreadonly_callback;
        if (isreadonly_cb) {
            bool callback_ret = isreadonly_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        auto object_cb = qdesignerpropertyeditorinterface_object_callback;
        if (object_cb) {
            QObject* callback_ret = object_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QString currentPropertyName() const override {
        auto currentpropertyname_cb = qdesignerpropertyeditorinterface_currentpropertyname_callback;
        if (currentpropertyname_cb) {
            const char* callback_ret = currentpropertyname_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setObject(QObject* object) override {
        auto setobject_cb = qdesignerpropertyeditorinterface_setobject_callback;
        if (setobject_cb) {
            QObject* cbval1 = object;

            setobject_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPropertyValue(const QString& name, const QVariant& value, bool changed) override {
        auto setpropertyvalue_cb = qdesignerpropertyeditorinterface_setpropertyvalue_callback;
        if (setpropertyvalue_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            bool cbval3 = changed;

            setpropertyvalue_cb(this, cbval1, cbval2, cbval3);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        auto setreadonly_cb = qdesignerpropertyeditorinterface_setreadonly_callback;
        if (setreadonly_cb) {
            bool cbval1 = readOnly;

            setreadonly_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerpropertyeditorinterface_devtype_isbase) {
            qdesignerpropertyeditorinterface_devtype_isbase = false;
            return QDesignerPropertyEditorInterface::devType();
        }
        auto devtype_cb = qdesignerpropertyeditorinterface_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerpropertyeditorinterface_setvisible_isbase) {
            qdesignerpropertyeditorinterface_setvisible_isbase = false;
            QDesignerPropertyEditorInterface::setVisible(visible);
            return;
        }
        auto setvisible_cb = qdesignerpropertyeditorinterface_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerpropertyeditorinterface_sizehint_isbase) {
            qdesignerpropertyeditorinterface_sizehint_isbase = false;
            return QDesignerPropertyEditorInterface::sizeHint();
        }
        auto sizehint_cb = qdesignerpropertyeditorinterface_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QDesignerPropertyEditorInterface::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerpropertyeditorinterface_minimumsizehint_isbase) {
            qdesignerpropertyeditorinterface_minimumsizehint_isbase = false;
            return QDesignerPropertyEditorInterface::minimumSizeHint();
        }
        auto minimumsizehint_cb = qdesignerpropertyeditorinterface_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QDesignerPropertyEditorInterface::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerpropertyeditorinterface_heightforwidth_isbase) {
            qdesignerpropertyeditorinterface_heightforwidth_isbase = false;
            return QDesignerPropertyEditorInterface::heightForWidth(param1);
        }
        auto heightforwidth_cb = qdesignerpropertyeditorinterface_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerpropertyeditorinterface_hasheightforwidth_isbase) {
            qdesignerpropertyeditorinterface_hasheightforwidth_isbase = false;
            return QDesignerPropertyEditorInterface::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qdesignerpropertyeditorinterface_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerpropertyeditorinterface_paintengine_isbase) {
            qdesignerpropertyeditorinterface_paintengine_isbase = false;
            return QDesignerPropertyEditorInterface::paintEngine();
        }
        auto paintengine_cb = qdesignerpropertyeditorinterface_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerpropertyeditorinterface_event_isbase) {
            qdesignerpropertyeditorinterface_event_isbase = false;
            return QDesignerPropertyEditorInterface::event(event);
        }
        auto event_cb = qdesignerpropertyeditorinterface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousepressevent_isbase) {
            qdesignerpropertyeditorinterface_mousepressevent_isbase = false;
            QDesignerPropertyEditorInterface::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qdesignerpropertyeditorinterface_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousereleaseevent_isbase) {
            qdesignerpropertyeditorinterface_mousereleaseevent_isbase = false;
            QDesignerPropertyEditorInterface::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qdesignerpropertyeditorinterface_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousedoubleclickevent_isbase) {
            qdesignerpropertyeditorinterface_mousedoubleclickevent_isbase = false;
            QDesignerPropertyEditorInterface::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qdesignerpropertyeditorinterface_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerpropertyeditorinterface_mousemoveevent_isbase) {
            qdesignerpropertyeditorinterface_mousemoveevent_isbase = false;
            QDesignerPropertyEditorInterface::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qdesignerpropertyeditorinterface_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerpropertyeditorinterface_wheelevent_isbase) {
            qdesignerpropertyeditorinterface_wheelevent_isbase = false;
            QDesignerPropertyEditorInterface::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qdesignerpropertyeditorinterface_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerpropertyeditorinterface_keypressevent_isbase) {
            qdesignerpropertyeditorinterface_keypressevent_isbase = false;
            QDesignerPropertyEditorInterface::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qdesignerpropertyeditorinterface_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerpropertyeditorinterface_keyreleaseevent_isbase) {
            qdesignerpropertyeditorinterface_keyreleaseevent_isbase = false;
            QDesignerPropertyEditorInterface::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qdesignerpropertyeditorinterface_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerpropertyeditorinterface_focusinevent_isbase) {
            qdesignerpropertyeditorinterface_focusinevent_isbase = false;
            QDesignerPropertyEditorInterface::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qdesignerpropertyeditorinterface_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerpropertyeditorinterface_focusoutevent_isbase) {
            qdesignerpropertyeditorinterface_focusoutevent_isbase = false;
            QDesignerPropertyEditorInterface::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qdesignerpropertyeditorinterface_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerpropertyeditorinterface_enterevent_isbase) {
            qdesignerpropertyeditorinterface_enterevent_isbase = false;
            QDesignerPropertyEditorInterface::enterEvent(event);
            return;
        }
        auto enterevent_cb = qdesignerpropertyeditorinterface_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerpropertyeditorinterface_leaveevent_isbase) {
            qdesignerpropertyeditorinterface_leaveevent_isbase = false;
            QDesignerPropertyEditorInterface::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qdesignerpropertyeditorinterface_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerpropertyeditorinterface_paintevent_isbase) {
            qdesignerpropertyeditorinterface_paintevent_isbase = false;
            QDesignerPropertyEditorInterface::paintEvent(event);
            return;
        }
        auto paintevent_cb = qdesignerpropertyeditorinterface_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerpropertyeditorinterface_moveevent_isbase) {
            qdesignerpropertyeditorinterface_moveevent_isbase = false;
            QDesignerPropertyEditorInterface::moveEvent(event);
            return;
        }
        auto moveevent_cb = qdesignerpropertyeditorinterface_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerpropertyeditorinterface_resizeevent_isbase) {
            qdesignerpropertyeditorinterface_resizeevent_isbase = false;
            QDesignerPropertyEditorInterface::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qdesignerpropertyeditorinterface_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerpropertyeditorinterface_closeevent_isbase) {
            qdesignerpropertyeditorinterface_closeevent_isbase = false;
            QDesignerPropertyEditorInterface::closeEvent(event);
            return;
        }
        auto closeevent_cb = qdesignerpropertyeditorinterface_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerpropertyeditorinterface_contextmenuevent_isbase) {
            qdesignerpropertyeditorinterface_contextmenuevent_isbase = false;
            QDesignerPropertyEditorInterface::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qdesignerpropertyeditorinterface_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerpropertyeditorinterface_tabletevent_isbase) {
            qdesignerpropertyeditorinterface_tabletevent_isbase = false;
            QDesignerPropertyEditorInterface::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qdesignerpropertyeditorinterface_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerpropertyeditorinterface_actionevent_isbase) {
            qdesignerpropertyeditorinterface_actionevent_isbase = false;
            QDesignerPropertyEditorInterface::actionEvent(event);
            return;
        }
        auto actionevent_cb = qdesignerpropertyeditorinterface_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerpropertyeditorinterface_dragenterevent_isbase) {
            qdesignerpropertyeditorinterface_dragenterevent_isbase = false;
            QDesignerPropertyEditorInterface::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qdesignerpropertyeditorinterface_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerpropertyeditorinterface_dragmoveevent_isbase) {
            qdesignerpropertyeditorinterface_dragmoveevent_isbase = false;
            QDesignerPropertyEditorInterface::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qdesignerpropertyeditorinterface_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerpropertyeditorinterface_dragleaveevent_isbase) {
            qdesignerpropertyeditorinterface_dragleaveevent_isbase = false;
            QDesignerPropertyEditorInterface::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qdesignerpropertyeditorinterface_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerpropertyeditorinterface_dropevent_isbase) {
            qdesignerpropertyeditorinterface_dropevent_isbase = false;
            QDesignerPropertyEditorInterface::dropEvent(event);
            return;
        }
        auto dropevent_cb = qdesignerpropertyeditorinterface_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerpropertyeditorinterface_showevent_isbase) {
            qdesignerpropertyeditorinterface_showevent_isbase = false;
            QDesignerPropertyEditorInterface::showEvent(event);
            return;
        }
        auto showevent_cb = qdesignerpropertyeditorinterface_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerpropertyeditorinterface_hideevent_isbase) {
            qdesignerpropertyeditorinterface_hideevent_isbase = false;
            QDesignerPropertyEditorInterface::hideEvent(event);
            return;
        }
        auto hideevent_cb = qdesignerpropertyeditorinterface_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerpropertyeditorinterface_nativeevent_isbase) {
            qdesignerpropertyeditorinterface_nativeevent_isbase = false;
            return QDesignerPropertyEditorInterface::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qdesignerpropertyeditorinterface_nativeevent_callback;
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
        return QDesignerPropertyEditorInterface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerpropertyeditorinterface_changeevent_isbase) {
            qdesignerpropertyeditorinterface_changeevent_isbase = false;
            QDesignerPropertyEditorInterface::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qdesignerpropertyeditorinterface_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerpropertyeditorinterface_metric_isbase) {
            qdesignerpropertyeditorinterface_metric_isbase = false;
            return QDesignerPropertyEditorInterface::metric(param1);
        }
        auto metric_cb = qdesignerpropertyeditorinterface_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerpropertyeditorinterface_initpainter_isbase) {
            qdesignerpropertyeditorinterface_initpainter_isbase = false;
            QDesignerPropertyEditorInterface::initPainter(painter);
            return;
        }
        auto initpainter_cb = qdesignerpropertyeditorinterface_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerpropertyeditorinterface_redirected_isbase) {
            qdesignerpropertyeditorinterface_redirected_isbase = false;
            return QDesignerPropertyEditorInterface::redirected(offset);
        }
        auto redirected_cb = qdesignerpropertyeditorinterface_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerpropertyeditorinterface_sharedpainter_isbase) {
            qdesignerpropertyeditorinterface_sharedpainter_isbase = false;
            return QDesignerPropertyEditorInterface::sharedPainter();
        }
        auto sharedpainter_cb = qdesignerpropertyeditorinterface_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerpropertyeditorinterface_inputmethodevent_isbase) {
            qdesignerpropertyeditorinterface_inputmethodevent_isbase = false;
            QDesignerPropertyEditorInterface::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qdesignerpropertyeditorinterface_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerpropertyeditorinterface_inputmethodquery_isbase) {
            qdesignerpropertyeditorinterface_inputmethodquery_isbase = false;
            return QDesignerPropertyEditorInterface::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qdesignerpropertyeditorinterface_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QDesignerPropertyEditorInterface::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerpropertyeditorinterface_focusnextprevchild_isbase) {
            qdesignerpropertyeditorinterface_focusnextprevchild_isbase = false;
            return QDesignerPropertyEditorInterface::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qdesignerpropertyeditorinterface_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerpropertyeditorinterface_eventfilter_isbase) {
            qdesignerpropertyeditorinterface_eventfilter_isbase = false;
            return QDesignerPropertyEditorInterface::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdesignerpropertyeditorinterface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerpropertyeditorinterface_timerevent_isbase) {
            qdesignerpropertyeditorinterface_timerevent_isbase = false;
            QDesignerPropertyEditorInterface::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdesignerpropertyeditorinterface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerpropertyeditorinterface_childevent_isbase) {
            qdesignerpropertyeditorinterface_childevent_isbase = false;
            QDesignerPropertyEditorInterface::childEvent(event);
            return;
        }
        auto childevent_cb = qdesignerpropertyeditorinterface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerpropertyeditorinterface_customevent_isbase) {
            qdesignerpropertyeditorinterface_customevent_isbase = false;
            QDesignerPropertyEditorInterface::customEvent(event);
            return;
        }
        auto customevent_cb = qdesignerpropertyeditorinterface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerpropertyeditorinterface_connectnotify_isbase) {
            qdesignerpropertyeditorinterface_connectnotify_isbase = false;
            QDesignerPropertyEditorInterface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdesignerpropertyeditorinterface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerpropertyeditorinterface_disconnectnotify_isbase) {
            qdesignerpropertyeditorinterface_disconnectnotify_isbase = false;
            QDesignerPropertyEditorInterface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdesignerpropertyeditorinterface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDesignerPropertyEditorInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdesignerpropertyeditorinterface_updatemicrofocus_isbase) {
            qdesignerpropertyeditorinterface_updatemicrofocus_isbase = false;
            QDesignerPropertyEditorInterface::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qdesignerpropertyeditorinterface_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QDesignerPropertyEditorInterface::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdesignerpropertyeditorinterface_create_isbase) {
            qdesignerpropertyeditorinterface_create_isbase = false;
            QDesignerPropertyEditorInterface::create();
            return;
        }
        auto create_cb = qdesignerpropertyeditorinterface_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QDesignerPropertyEditorInterface::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdesignerpropertyeditorinterface_destroy_isbase) {
            qdesignerpropertyeditorinterface_destroy_isbase = false;
            QDesignerPropertyEditorInterface::destroy();
            return;
        }
        auto destroy_cb = qdesignerpropertyeditorinterface_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QDesignerPropertyEditorInterface::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdesignerpropertyeditorinterface_focusnextchild_isbase) {
            qdesignerpropertyeditorinterface_focusnextchild_isbase = false;
            return QDesignerPropertyEditorInterface::focusNextChild();
        }
        auto focusnextchild_cb = qdesignerpropertyeditorinterface_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdesignerpropertyeditorinterface_focuspreviouschild_isbase) {
            qdesignerpropertyeditorinterface_focuspreviouschild_isbase = false;
            return QDesignerPropertyEditorInterface::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qdesignerpropertyeditorinterface_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerpropertyeditorinterface_sender_isbase) {
            qdesignerpropertyeditorinterface_sender_isbase = false;
            return QDesignerPropertyEditorInterface::sender();
        }
        auto sender_cb = qdesignerpropertyeditorinterface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerpropertyeditorinterface_sendersignalindex_isbase) {
            qdesignerpropertyeditorinterface_sendersignalindex_isbase = false;
            return QDesignerPropertyEditorInterface::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdesignerpropertyeditorinterface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerpropertyeditorinterface_receivers_isbase) {
            qdesignerpropertyeditorinterface_receivers_isbase = false;
            return QDesignerPropertyEditorInterface::receivers(signal);
        }
        auto receivers_cb = qdesignerpropertyeditorinterface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerpropertyeditorinterface_issignalconnected_isbase) {
            qdesignerpropertyeditorinterface_issignalconnected_isbase = false;
            return QDesignerPropertyEditorInterface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdesignerpropertyeditorinterface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerPropertyEditorInterface::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdesignerpropertyeditorinterface_getdecodedmetricf_isbase) {
            qdesignerpropertyeditorinterface_getdecodedmetricf_isbase = false;
            return QDesignerPropertyEditorInterface::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qdesignerpropertyeditorinterface_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QDesignerPropertyEditorInterface::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QDesignerPropertyEditorInterface_Event(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend bool QDesignerPropertyEditorInterface_SuperEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_MousePressEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMousePressEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_MouseReleaseEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMouseReleaseEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_MouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMouseDoubleClickEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_MouseMoveEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMouseMoveEvent(QDesignerPropertyEditorInterface* self, QMouseEvent* event);
    friend void QDesignerPropertyEditorInterface_WheelEvent(QDesignerPropertyEditorInterface* self, QWheelEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperWheelEvent(QDesignerPropertyEditorInterface* self, QWheelEvent* event);
    friend void QDesignerPropertyEditorInterface_KeyPressEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperKeyPressEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event);
    friend void QDesignerPropertyEditorInterface_KeyReleaseEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperKeyReleaseEvent(QDesignerPropertyEditorInterface* self, QKeyEvent* event);
    friend void QDesignerPropertyEditorInterface_FocusInEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperFocusInEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event);
    friend void QDesignerPropertyEditorInterface_FocusOutEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperFocusOutEvent(QDesignerPropertyEditorInterface* self, QFocusEvent* event);
    friend void QDesignerPropertyEditorInterface_EnterEvent(QDesignerPropertyEditorInterface* self, QEnterEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperEnterEvent(QDesignerPropertyEditorInterface* self, QEnterEvent* event);
    friend void QDesignerPropertyEditorInterface_LeaveEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperLeaveEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_PaintEvent(QDesignerPropertyEditorInterface* self, QPaintEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperPaintEvent(QDesignerPropertyEditorInterface* self, QPaintEvent* event);
    friend void QDesignerPropertyEditorInterface_MoveEvent(QDesignerPropertyEditorInterface* self, QMoveEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperMoveEvent(QDesignerPropertyEditorInterface* self, QMoveEvent* event);
    friend void QDesignerPropertyEditorInterface_ResizeEvent(QDesignerPropertyEditorInterface* self, QResizeEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperResizeEvent(QDesignerPropertyEditorInterface* self, QResizeEvent* event);
    friend void QDesignerPropertyEditorInterface_CloseEvent(QDesignerPropertyEditorInterface* self, QCloseEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperCloseEvent(QDesignerPropertyEditorInterface* self, QCloseEvent* event);
    friend void QDesignerPropertyEditorInterface_ContextMenuEvent(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperContextMenuEvent(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event);
    friend void QDesignerPropertyEditorInterface_TabletEvent(QDesignerPropertyEditorInterface* self, QTabletEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperTabletEvent(QDesignerPropertyEditorInterface* self, QTabletEvent* event);
    friend void QDesignerPropertyEditorInterface_ActionEvent(QDesignerPropertyEditorInterface* self, QActionEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperActionEvent(QDesignerPropertyEditorInterface* self, QActionEvent* event);
    friend void QDesignerPropertyEditorInterface_DragEnterEvent(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDragEnterEvent(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event);
    friend void QDesignerPropertyEditorInterface_DragMoveEvent(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDragMoveEvent(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event);
    friend void QDesignerPropertyEditorInterface_DragLeaveEvent(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDragLeaveEvent(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerPropertyEditorInterface_DropEvent(QDesignerPropertyEditorInterface* self, QDropEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperDropEvent(QDesignerPropertyEditorInterface* self, QDropEvent* event);
    friend void QDesignerPropertyEditorInterface_ShowEvent(QDesignerPropertyEditorInterface* self, QShowEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperShowEvent(QDesignerPropertyEditorInterface* self, QShowEvent* event);
    friend void QDesignerPropertyEditorInterface_HideEvent(QDesignerPropertyEditorInterface* self, QHideEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperHideEvent(QDesignerPropertyEditorInterface* self, QHideEvent* event);
    friend bool QDesignerPropertyEditorInterface_NativeEvent(QDesignerPropertyEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDesignerPropertyEditorInterface_SuperNativeEvent(QDesignerPropertyEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerPropertyEditorInterface_ChangeEvent(QDesignerPropertyEditorInterface* self, QEvent* param1);
    friend void QDesignerPropertyEditorInterface_SuperChangeEvent(QDesignerPropertyEditorInterface* self, QEvent* param1);
    friend int QDesignerPropertyEditorInterface_Metric(const QDesignerPropertyEditorInterface* self, int param1);
    friend int QDesignerPropertyEditorInterface_SuperMetric(const QDesignerPropertyEditorInterface* self, int param1);
    friend void QDesignerPropertyEditorInterface_InitPainter(const QDesignerPropertyEditorInterface* self, QPainter* painter);
    friend void QDesignerPropertyEditorInterface_SuperInitPainter(const QDesignerPropertyEditorInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerPropertyEditorInterface_Redirected(const QDesignerPropertyEditorInterface* self, QPoint* offset);
    friend QPaintDevice* QDesignerPropertyEditorInterface_SuperRedirected(const QDesignerPropertyEditorInterface* self, QPoint* offset);
    friend QPainter* QDesignerPropertyEditorInterface_SharedPainter(const QDesignerPropertyEditorInterface* self);
    friend QPainter* QDesignerPropertyEditorInterface_SuperSharedPainter(const QDesignerPropertyEditorInterface* self);
    friend void QDesignerPropertyEditorInterface_InputMethodEvent(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1);
    friend void QDesignerPropertyEditorInterface_SuperInputMethodEvent(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerPropertyEditorInterface_FocusNextPrevChild(QDesignerPropertyEditorInterface* self, bool next);
    friend bool QDesignerPropertyEditorInterface_SuperFocusNextPrevChild(QDesignerPropertyEditorInterface* self, bool next);
    friend void QDesignerPropertyEditorInterface_TimerEvent(QDesignerPropertyEditorInterface* self, QTimerEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperTimerEvent(QDesignerPropertyEditorInterface* self, QTimerEvent* event);
    friend void QDesignerPropertyEditorInterface_ChildEvent(QDesignerPropertyEditorInterface* self, QChildEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperChildEvent(QDesignerPropertyEditorInterface* self, QChildEvent* event);
    friend void QDesignerPropertyEditorInterface_CustomEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_SuperCustomEvent(QDesignerPropertyEditorInterface* self, QEvent* event);
    friend void QDesignerPropertyEditorInterface_ConnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerPropertyEditorInterface_SuperConnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerPropertyEditorInterface_DisconnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerPropertyEditorInterface_SuperDisconnectNotify(QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerPropertyEditorInterface_UpdateMicroFocus(QDesignerPropertyEditorInterface* self);
    friend void QDesignerPropertyEditorInterface_SuperUpdateMicroFocus(QDesignerPropertyEditorInterface* self);
    friend void QDesignerPropertyEditorInterface_Create(QDesignerPropertyEditorInterface* self);
    friend void QDesignerPropertyEditorInterface_SuperCreate(QDesignerPropertyEditorInterface* self);
    friend void QDesignerPropertyEditorInterface_Destroy(QDesignerPropertyEditorInterface* self);
    friend void QDesignerPropertyEditorInterface_SuperDestroy(QDesignerPropertyEditorInterface* self);
    friend bool QDesignerPropertyEditorInterface_FocusNextChild(QDesignerPropertyEditorInterface* self);
    friend bool QDesignerPropertyEditorInterface_SuperFocusNextChild(QDesignerPropertyEditorInterface* self);
    friend bool QDesignerPropertyEditorInterface_FocusPreviousChild(QDesignerPropertyEditorInterface* self);
    friend bool QDesignerPropertyEditorInterface_SuperFocusPreviousChild(QDesignerPropertyEditorInterface* self);
    friend QObject* QDesignerPropertyEditorInterface_Sender(const QDesignerPropertyEditorInterface* self);
    friend QObject* QDesignerPropertyEditorInterface_SuperSender(const QDesignerPropertyEditorInterface* self);
    friend int QDesignerPropertyEditorInterface_SenderSignalIndex(const QDesignerPropertyEditorInterface* self);
    friend int QDesignerPropertyEditorInterface_SuperSenderSignalIndex(const QDesignerPropertyEditorInterface* self);
    friend int QDesignerPropertyEditorInterface_Receivers(const QDesignerPropertyEditorInterface* self, const char* signal);
    friend int QDesignerPropertyEditorInterface_SuperReceivers(const QDesignerPropertyEditorInterface* self, const char* signal);
    friend bool QDesignerPropertyEditorInterface_IsSignalConnected(const QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
    friend bool QDesignerPropertyEditorInterface_SuperIsSignalConnected(const QDesignerPropertyEditorInterface* self, const QMetaMethod* signal);
    friend double QDesignerPropertyEditorInterface_GetDecodedMetricF(const QDesignerPropertyEditorInterface* self, int metricA, int metricB);
    friend double QDesignerPropertyEditorInterface_SuperGetDecodedMetricF(const QDesignerPropertyEditorInterface* self, int metricA, int metricB);
};

#endif
