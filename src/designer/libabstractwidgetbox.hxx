#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTWIDGETBOX_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTWIDGETBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerWidgetBoxInterface so that we can call protected methods
class VirtualQDesignerWidgetBoxInterface : public QDesignerWidgetBoxInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerWidgetBoxInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerWidgetBoxInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerWidgetBoxInterface_Metacast_Callback = void* (*)(QDesignerWidgetBoxInterface*, const char*);
    using QDesignerWidgetBoxInterface_Metacall_Callback = int (*)(QDesignerWidgetBoxInterface*, int, int, void**);
    using QDesignerWidgetBoxInterface_CategoryCount_Callback = int (*)();
    using QDesignerWidgetBoxInterface_Category_Callback = QDesignerWidgetBoxInterface__Category* (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_AddCategory_Callback = void (*)(QDesignerWidgetBoxInterface*, QDesignerWidgetBoxInterface__Category*);
    using QDesignerWidgetBoxInterface_RemoveCategory_Callback = void (*)(QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_WidgetCount_Callback = int (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_Widget_Callback = QDesignerWidgetBoxInterface__Widget* (*)(const QDesignerWidgetBoxInterface*, int, int);
    using QDesignerWidgetBoxInterface_AddWidget_Callback = void (*)(QDesignerWidgetBoxInterface*, int, QDesignerWidgetBoxInterface__Widget*);
    using QDesignerWidgetBoxInterface_RemoveWidget_Callback = void (*)(QDesignerWidgetBoxInterface*, int, int);
    using QDesignerWidgetBoxInterface_DropWidgets_Callback = void (*)(QDesignerWidgetBoxInterface*, libqt_list /* of QDesignerDnDItemInterface* */, QPoint*);
    using QDesignerWidgetBoxInterface_SetFileName_Callback = void (*)(QDesignerWidgetBoxInterface*, const char*);
    using QDesignerWidgetBoxInterface_FileName_Callback = const char* (*)();
    using QDesignerWidgetBoxInterface_Load_Callback = bool (*)();
    using QDesignerWidgetBoxInterface_Save_Callback = bool (*)();
    using QDesignerWidgetBoxInterface_DevType_Callback = int (*)();
    using QDesignerWidgetBoxInterface_SetVisible_Callback = void (*)(QDesignerWidgetBoxInterface*, bool);
    using QDesignerWidgetBoxInterface_SizeHint_Callback = QSize* (*)();
    using QDesignerWidgetBoxInterface_MinimumSizeHint_Callback = QSize* (*)();
    using QDesignerWidgetBoxInterface_HeightForWidth_Callback = int (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_HasHeightForWidth_Callback = bool (*)();
    using QDesignerWidgetBoxInterface_PaintEngine_Callback = QPaintEngine* (*)();
    using QDesignerWidgetBoxInterface_Event_Callback = bool (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_MousePressEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_MouseReleaseEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_MouseMoveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMouseEvent*);
    using QDesignerWidgetBoxInterface_WheelEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QWheelEvent*);
    using QDesignerWidgetBoxInterface_KeyPressEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QKeyEvent*);
    using QDesignerWidgetBoxInterface_KeyReleaseEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QKeyEvent*);
    using QDesignerWidgetBoxInterface_FocusInEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QFocusEvent*);
    using QDesignerWidgetBoxInterface_FocusOutEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QFocusEvent*);
    using QDesignerWidgetBoxInterface_EnterEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEnterEvent*);
    using QDesignerWidgetBoxInterface_LeaveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_PaintEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QPaintEvent*);
    using QDesignerWidgetBoxInterface_MoveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QMoveEvent*);
    using QDesignerWidgetBoxInterface_ResizeEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QResizeEvent*);
    using QDesignerWidgetBoxInterface_CloseEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QCloseEvent*);
    using QDesignerWidgetBoxInterface_ContextMenuEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QContextMenuEvent*);
    using QDesignerWidgetBoxInterface_TabletEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QTabletEvent*);
    using QDesignerWidgetBoxInterface_ActionEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QActionEvent*);
    using QDesignerWidgetBoxInterface_DragEnterEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDragEnterEvent*);
    using QDesignerWidgetBoxInterface_DragMoveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDragMoveEvent*);
    using QDesignerWidgetBoxInterface_DragLeaveEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDragLeaveEvent*);
    using QDesignerWidgetBoxInterface_DropEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QDropEvent*);
    using QDesignerWidgetBoxInterface_ShowEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QShowEvent*);
    using QDesignerWidgetBoxInterface_HideEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QHideEvent*);
    using QDesignerWidgetBoxInterface_NativeEvent_Callback = bool (*)(QDesignerWidgetBoxInterface*, libqt_string, void*, intptr_t*);
    using QDesignerWidgetBoxInterface_ChangeEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_Metric_Callback = int (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_InitPainter_Callback = void (*)(const QDesignerWidgetBoxInterface*, QPainter*);
    using QDesignerWidgetBoxInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerWidgetBoxInterface*, QPoint*);
    using QDesignerWidgetBoxInterface_SharedPainter_Callback = QPainter* (*)();
    using QDesignerWidgetBoxInterface_InputMethodEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QInputMethodEvent*);
    using QDesignerWidgetBoxInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerWidgetBoxInterface*, int);
    using QDesignerWidgetBoxInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerWidgetBoxInterface*, bool);
    using QDesignerWidgetBoxInterface_EventFilter_Callback = bool (*)(QDesignerWidgetBoxInterface*, QObject*, QEvent*);
    using QDesignerWidgetBoxInterface_TimerEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QTimerEvent*);
    using QDesignerWidgetBoxInterface_ChildEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QChildEvent*);
    using QDesignerWidgetBoxInterface_CustomEvent_Callback = void (*)(QDesignerWidgetBoxInterface*, QEvent*);
    using QDesignerWidgetBoxInterface_ConnectNotify_Callback = void (*)(QDesignerWidgetBoxInterface*, QMetaMethod*);
    using QDesignerWidgetBoxInterface_DisconnectNotify_Callback = void (*)(QDesignerWidgetBoxInterface*, QMetaMethod*);
    using QDesignerWidgetBoxInterface_UpdateMicroFocus_Callback = void (*)();
    using QDesignerWidgetBoxInterface_Create_Callback = void (*)();
    using QDesignerWidgetBoxInterface_Destroy_Callback = void (*)();
    using QDesignerWidgetBoxInterface_FocusNextChild_Callback = bool (*)();
    using QDesignerWidgetBoxInterface_FocusPreviousChild_Callback = bool (*)();
    using QDesignerWidgetBoxInterface_Sender_Callback = QObject* (*)();
    using QDesignerWidgetBoxInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerWidgetBoxInterface_Receivers_Callback = int (*)(const QDesignerWidgetBoxInterface*, const char*);
    using QDesignerWidgetBoxInterface_IsSignalConnected_Callback = bool (*)(const QDesignerWidgetBoxInterface*, QMetaMethod*);
    using QDesignerWidgetBoxInterface_GetDecodedMetricF_Callback = double (*)(const QDesignerWidgetBoxInterface*, int, int);

  protected:
    // Instance callback storage
    QDesignerWidgetBoxInterface_MetaObject_Callback qdesignerwidgetboxinterface_metaobject_callback = nullptr;
    QDesignerWidgetBoxInterface_Metacast_Callback qdesignerwidgetboxinterface_metacast_callback = nullptr;
    QDesignerWidgetBoxInterface_Metacall_Callback qdesignerwidgetboxinterface_metacall_callback = nullptr;
    QDesignerWidgetBoxInterface_CategoryCount_Callback qdesignerwidgetboxinterface_categorycount_callback = nullptr;
    QDesignerWidgetBoxInterface_Category_Callback qdesignerwidgetboxinterface_category_callback = nullptr;
    QDesignerWidgetBoxInterface_AddCategory_Callback qdesignerwidgetboxinterface_addcategory_callback = nullptr;
    QDesignerWidgetBoxInterface_RemoveCategory_Callback qdesignerwidgetboxinterface_removecategory_callback = nullptr;
    QDesignerWidgetBoxInterface_WidgetCount_Callback qdesignerwidgetboxinterface_widgetcount_callback = nullptr;
    QDesignerWidgetBoxInterface_Widget_Callback qdesignerwidgetboxinterface_widget_callback = nullptr;
    QDesignerWidgetBoxInterface_AddWidget_Callback qdesignerwidgetboxinterface_addwidget_callback = nullptr;
    QDesignerWidgetBoxInterface_RemoveWidget_Callback qdesignerwidgetboxinterface_removewidget_callback = nullptr;
    QDesignerWidgetBoxInterface_DropWidgets_Callback qdesignerwidgetboxinterface_dropwidgets_callback = nullptr;
    QDesignerWidgetBoxInterface_SetFileName_Callback qdesignerwidgetboxinterface_setfilename_callback = nullptr;
    QDesignerWidgetBoxInterface_FileName_Callback qdesignerwidgetboxinterface_filename_callback = nullptr;
    QDesignerWidgetBoxInterface_Load_Callback qdesignerwidgetboxinterface_load_callback = nullptr;
    QDesignerWidgetBoxInterface_Save_Callback qdesignerwidgetboxinterface_save_callback = nullptr;
    QDesignerWidgetBoxInterface_DevType_Callback qdesignerwidgetboxinterface_devtype_callback = nullptr;
    QDesignerWidgetBoxInterface_SetVisible_Callback qdesignerwidgetboxinterface_setvisible_callback = nullptr;
    QDesignerWidgetBoxInterface_SizeHint_Callback qdesignerwidgetboxinterface_sizehint_callback = nullptr;
    QDesignerWidgetBoxInterface_MinimumSizeHint_Callback qdesignerwidgetboxinterface_minimumsizehint_callback = nullptr;
    QDesignerWidgetBoxInterface_HeightForWidth_Callback qdesignerwidgetboxinterface_heightforwidth_callback = nullptr;
    QDesignerWidgetBoxInterface_HasHeightForWidth_Callback qdesignerwidgetboxinterface_hasheightforwidth_callback = nullptr;
    QDesignerWidgetBoxInterface_PaintEngine_Callback qdesignerwidgetboxinterface_paintengine_callback = nullptr;
    QDesignerWidgetBoxInterface_Event_Callback qdesignerwidgetboxinterface_event_callback = nullptr;
    QDesignerWidgetBoxInterface_MousePressEvent_Callback qdesignerwidgetboxinterface_mousepressevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MouseReleaseEvent_Callback qdesignerwidgetboxinterface_mousereleaseevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback qdesignerwidgetboxinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MouseMoveEvent_Callback qdesignerwidgetboxinterface_mousemoveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_WheelEvent_Callback qdesignerwidgetboxinterface_wheelevent_callback = nullptr;
    QDesignerWidgetBoxInterface_KeyPressEvent_Callback qdesignerwidgetboxinterface_keypressevent_callback = nullptr;
    QDesignerWidgetBoxInterface_KeyReleaseEvent_Callback qdesignerwidgetboxinterface_keyreleaseevent_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusInEvent_Callback qdesignerwidgetboxinterface_focusinevent_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusOutEvent_Callback qdesignerwidgetboxinterface_focusoutevent_callback = nullptr;
    QDesignerWidgetBoxInterface_EnterEvent_Callback qdesignerwidgetboxinterface_enterevent_callback = nullptr;
    QDesignerWidgetBoxInterface_LeaveEvent_Callback qdesignerwidgetboxinterface_leaveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_PaintEvent_Callback qdesignerwidgetboxinterface_paintevent_callback = nullptr;
    QDesignerWidgetBoxInterface_MoveEvent_Callback qdesignerwidgetboxinterface_moveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ResizeEvent_Callback qdesignerwidgetboxinterface_resizeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_CloseEvent_Callback qdesignerwidgetboxinterface_closeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ContextMenuEvent_Callback qdesignerwidgetboxinterface_contextmenuevent_callback = nullptr;
    QDesignerWidgetBoxInterface_TabletEvent_Callback qdesignerwidgetboxinterface_tabletevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ActionEvent_Callback qdesignerwidgetboxinterface_actionevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DragEnterEvent_Callback qdesignerwidgetboxinterface_dragenterevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DragMoveEvent_Callback qdesignerwidgetboxinterface_dragmoveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DragLeaveEvent_Callback qdesignerwidgetboxinterface_dragleaveevent_callback = nullptr;
    QDesignerWidgetBoxInterface_DropEvent_Callback qdesignerwidgetboxinterface_dropevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ShowEvent_Callback qdesignerwidgetboxinterface_showevent_callback = nullptr;
    QDesignerWidgetBoxInterface_HideEvent_Callback qdesignerwidgetboxinterface_hideevent_callback = nullptr;
    QDesignerWidgetBoxInterface_NativeEvent_Callback qdesignerwidgetboxinterface_nativeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ChangeEvent_Callback qdesignerwidgetboxinterface_changeevent_callback = nullptr;
    QDesignerWidgetBoxInterface_Metric_Callback qdesignerwidgetboxinterface_metric_callback = nullptr;
    QDesignerWidgetBoxInterface_InitPainter_Callback qdesignerwidgetboxinterface_initpainter_callback = nullptr;
    QDesignerWidgetBoxInterface_Redirected_Callback qdesignerwidgetboxinterface_redirected_callback = nullptr;
    QDesignerWidgetBoxInterface_SharedPainter_Callback qdesignerwidgetboxinterface_sharedpainter_callback = nullptr;
    QDesignerWidgetBoxInterface_InputMethodEvent_Callback qdesignerwidgetboxinterface_inputmethodevent_callback = nullptr;
    QDesignerWidgetBoxInterface_InputMethodQuery_Callback qdesignerwidgetboxinterface_inputmethodquery_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusNextPrevChild_Callback qdesignerwidgetboxinterface_focusnextprevchild_callback = nullptr;
    QDesignerWidgetBoxInterface_EventFilter_Callback qdesignerwidgetboxinterface_eventfilter_callback = nullptr;
    QDesignerWidgetBoxInterface_TimerEvent_Callback qdesignerwidgetboxinterface_timerevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ChildEvent_Callback qdesignerwidgetboxinterface_childevent_callback = nullptr;
    QDesignerWidgetBoxInterface_CustomEvent_Callback qdesignerwidgetboxinterface_customevent_callback = nullptr;
    QDesignerWidgetBoxInterface_ConnectNotify_Callback qdesignerwidgetboxinterface_connectnotify_callback = nullptr;
    QDesignerWidgetBoxInterface_DisconnectNotify_Callback qdesignerwidgetboxinterface_disconnectnotify_callback = nullptr;
    QDesignerWidgetBoxInterface_UpdateMicroFocus_Callback qdesignerwidgetboxinterface_updatemicrofocus_callback = nullptr;
    QDesignerWidgetBoxInterface_Create_Callback qdesignerwidgetboxinterface_create_callback = nullptr;
    QDesignerWidgetBoxInterface_Destroy_Callback qdesignerwidgetboxinterface_destroy_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusNextChild_Callback qdesignerwidgetboxinterface_focusnextchild_callback = nullptr;
    QDesignerWidgetBoxInterface_FocusPreviousChild_Callback qdesignerwidgetboxinterface_focuspreviouschild_callback = nullptr;
    QDesignerWidgetBoxInterface_Sender_Callback qdesignerwidgetboxinterface_sender_callback = nullptr;
    QDesignerWidgetBoxInterface_SenderSignalIndex_Callback qdesignerwidgetboxinterface_sendersignalindex_callback = nullptr;
    QDesignerWidgetBoxInterface_Receivers_Callback qdesignerwidgetboxinterface_receivers_callback = nullptr;
    QDesignerWidgetBoxInterface_IsSignalConnected_Callback qdesignerwidgetboxinterface_issignalconnected_callback = nullptr;
    QDesignerWidgetBoxInterface_GetDecodedMetricF_Callback qdesignerwidgetboxinterface_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerwidgetboxinterface_metaobject_isbase = false;
    mutable bool qdesignerwidgetboxinterface_metacast_isbase = false;
    mutable bool qdesignerwidgetboxinterface_metacall_isbase = false;
    mutable bool qdesignerwidgetboxinterface_categorycount_isbase = false;
    mutable bool qdesignerwidgetboxinterface_category_isbase = false;
    mutable bool qdesignerwidgetboxinterface_addcategory_isbase = false;
    mutable bool qdesignerwidgetboxinterface_removecategory_isbase = false;
    mutable bool qdesignerwidgetboxinterface_widgetcount_isbase = false;
    mutable bool qdesignerwidgetboxinterface_widget_isbase = false;
    mutable bool qdesignerwidgetboxinterface_addwidget_isbase = false;
    mutable bool qdesignerwidgetboxinterface_removewidget_isbase = false;
    mutable bool qdesignerwidgetboxinterface_dropwidgets_isbase = false;
    mutable bool qdesignerwidgetboxinterface_setfilename_isbase = false;
    mutable bool qdesignerwidgetboxinterface_filename_isbase = false;
    mutable bool qdesignerwidgetboxinterface_load_isbase = false;
    mutable bool qdesignerwidgetboxinterface_save_isbase = false;
    mutable bool qdesignerwidgetboxinterface_devtype_isbase = false;
    mutable bool qdesignerwidgetboxinterface_setvisible_isbase = false;
    mutable bool qdesignerwidgetboxinterface_sizehint_isbase = false;
    mutable bool qdesignerwidgetboxinterface_minimumsizehint_isbase = false;
    mutable bool qdesignerwidgetboxinterface_heightforwidth_isbase = false;
    mutable bool qdesignerwidgetboxinterface_hasheightforwidth_isbase = false;
    mutable bool qdesignerwidgetboxinterface_paintengine_isbase = false;
    mutable bool qdesignerwidgetboxinterface_event_isbase = false;
    mutable bool qdesignerwidgetboxinterface_mousepressevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_mousereleaseevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_mousedoubleclickevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_mousemoveevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_wheelevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_keypressevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_keyreleaseevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_focusinevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_focusoutevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_enterevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_leaveevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_paintevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_moveevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_resizeevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_closeevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_contextmenuevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_tabletevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_actionevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_dragenterevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_dragmoveevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_dragleaveevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_dropevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_showevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_hideevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_nativeevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_changeevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_metric_isbase = false;
    mutable bool qdesignerwidgetboxinterface_initpainter_isbase = false;
    mutable bool qdesignerwidgetboxinterface_redirected_isbase = false;
    mutable bool qdesignerwidgetboxinterface_sharedpainter_isbase = false;
    mutable bool qdesignerwidgetboxinterface_inputmethodevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_inputmethodquery_isbase = false;
    mutable bool qdesignerwidgetboxinterface_focusnextprevchild_isbase = false;
    mutable bool qdesignerwidgetboxinterface_eventfilter_isbase = false;
    mutable bool qdesignerwidgetboxinterface_timerevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_childevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_customevent_isbase = false;
    mutable bool qdesignerwidgetboxinterface_connectnotify_isbase = false;
    mutable bool qdesignerwidgetboxinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerwidgetboxinterface_updatemicrofocus_isbase = false;
    mutable bool qdesignerwidgetboxinterface_create_isbase = false;
    mutable bool qdesignerwidgetboxinterface_destroy_isbase = false;
    mutable bool qdesignerwidgetboxinterface_focusnextchild_isbase = false;
    mutable bool qdesignerwidgetboxinterface_focuspreviouschild_isbase = false;
    mutable bool qdesignerwidgetboxinterface_sender_isbase = false;
    mutable bool qdesignerwidgetboxinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerwidgetboxinterface_receivers_isbase = false;
    mutable bool qdesignerwidgetboxinterface_issignalconnected_isbase = false;
    mutable bool qdesignerwidgetboxinterface_getdecodedmetricf_isbase = false;

  public:
    VirtualQDesignerWidgetBoxInterface(QWidget* parent) : QDesignerWidgetBoxInterface(parent) {};
    VirtualQDesignerWidgetBoxInterface() : QDesignerWidgetBoxInterface() {};
    VirtualQDesignerWidgetBoxInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerWidgetBoxInterface(parent, flags) {};

    // Callback setters
    inline void setQDesignerWidgetBoxInterface_MetaObject_Callback(QDesignerWidgetBoxInterface_MetaObject_Callback cb) { qdesignerwidgetboxinterface_metaobject_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Metacast_Callback(QDesignerWidgetBoxInterface_Metacast_Callback cb) { qdesignerwidgetboxinterface_metacast_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Metacall_Callback(QDesignerWidgetBoxInterface_Metacall_Callback cb) { qdesignerwidgetboxinterface_metacall_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_CategoryCount_Callback(QDesignerWidgetBoxInterface_CategoryCount_Callback cb) { qdesignerwidgetboxinterface_categorycount_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Category_Callback(QDesignerWidgetBoxInterface_Category_Callback cb) { qdesignerwidgetboxinterface_category_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_AddCategory_Callback(QDesignerWidgetBoxInterface_AddCategory_Callback cb) { qdesignerwidgetboxinterface_addcategory_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_RemoveCategory_Callback(QDesignerWidgetBoxInterface_RemoveCategory_Callback cb) { qdesignerwidgetboxinterface_removecategory_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_WidgetCount_Callback(QDesignerWidgetBoxInterface_WidgetCount_Callback cb) { qdesignerwidgetboxinterface_widgetcount_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Widget_Callback(QDesignerWidgetBoxInterface_Widget_Callback cb) { qdesignerwidgetboxinterface_widget_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_AddWidget_Callback(QDesignerWidgetBoxInterface_AddWidget_Callback cb) { qdesignerwidgetboxinterface_addwidget_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_RemoveWidget_Callback(QDesignerWidgetBoxInterface_RemoveWidget_Callback cb) { qdesignerwidgetboxinterface_removewidget_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_DropWidgets_Callback(QDesignerWidgetBoxInterface_DropWidgets_Callback cb) { qdesignerwidgetboxinterface_dropwidgets_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_SetFileName_Callback(QDesignerWidgetBoxInterface_SetFileName_Callback cb) { qdesignerwidgetboxinterface_setfilename_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_FileName_Callback(QDesignerWidgetBoxInterface_FileName_Callback cb) { qdesignerwidgetboxinterface_filename_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Load_Callback(QDesignerWidgetBoxInterface_Load_Callback cb) { qdesignerwidgetboxinterface_load_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Save_Callback(QDesignerWidgetBoxInterface_Save_Callback cb) { qdesignerwidgetboxinterface_save_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_DevType_Callback(QDesignerWidgetBoxInterface_DevType_Callback cb) { qdesignerwidgetboxinterface_devtype_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_SetVisible_Callback(QDesignerWidgetBoxInterface_SetVisible_Callback cb) { qdesignerwidgetboxinterface_setvisible_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_SizeHint_Callback(QDesignerWidgetBoxInterface_SizeHint_Callback cb) { qdesignerwidgetboxinterface_sizehint_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_MinimumSizeHint_Callback(QDesignerWidgetBoxInterface_MinimumSizeHint_Callback cb) { qdesignerwidgetboxinterface_minimumsizehint_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_HeightForWidth_Callback(QDesignerWidgetBoxInterface_HeightForWidth_Callback cb) { qdesignerwidgetboxinterface_heightforwidth_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_HasHeightForWidth_Callback(QDesignerWidgetBoxInterface_HasHeightForWidth_Callback cb) { qdesignerwidgetboxinterface_hasheightforwidth_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_PaintEngine_Callback(QDesignerWidgetBoxInterface_PaintEngine_Callback cb) { qdesignerwidgetboxinterface_paintengine_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Event_Callback(QDesignerWidgetBoxInterface_Event_Callback cb) { qdesignerwidgetboxinterface_event_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_MousePressEvent_Callback(QDesignerWidgetBoxInterface_MousePressEvent_Callback cb) { qdesignerwidgetboxinterface_mousepressevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_MouseReleaseEvent_Callback(QDesignerWidgetBoxInterface_MouseReleaseEvent_Callback cb) { qdesignerwidgetboxinterface_mousereleaseevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback(QDesignerWidgetBoxInterface_MouseDoubleClickEvent_Callback cb) { qdesignerwidgetboxinterface_mousedoubleclickevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_MouseMoveEvent_Callback(QDesignerWidgetBoxInterface_MouseMoveEvent_Callback cb) { qdesignerwidgetboxinterface_mousemoveevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_WheelEvent_Callback(QDesignerWidgetBoxInterface_WheelEvent_Callback cb) { qdesignerwidgetboxinterface_wheelevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_KeyPressEvent_Callback(QDesignerWidgetBoxInterface_KeyPressEvent_Callback cb) { qdesignerwidgetboxinterface_keypressevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_KeyReleaseEvent_Callback(QDesignerWidgetBoxInterface_KeyReleaseEvent_Callback cb) { qdesignerwidgetboxinterface_keyreleaseevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_FocusInEvent_Callback(QDesignerWidgetBoxInterface_FocusInEvent_Callback cb) { qdesignerwidgetboxinterface_focusinevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_FocusOutEvent_Callback(QDesignerWidgetBoxInterface_FocusOutEvent_Callback cb) { qdesignerwidgetboxinterface_focusoutevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_EnterEvent_Callback(QDesignerWidgetBoxInterface_EnterEvent_Callback cb) { qdesignerwidgetboxinterface_enterevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_LeaveEvent_Callback(QDesignerWidgetBoxInterface_LeaveEvent_Callback cb) { qdesignerwidgetboxinterface_leaveevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_PaintEvent_Callback(QDesignerWidgetBoxInterface_PaintEvent_Callback cb) { qdesignerwidgetboxinterface_paintevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_MoveEvent_Callback(QDesignerWidgetBoxInterface_MoveEvent_Callback cb) { qdesignerwidgetboxinterface_moveevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_ResizeEvent_Callback(QDesignerWidgetBoxInterface_ResizeEvent_Callback cb) { qdesignerwidgetboxinterface_resizeevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_CloseEvent_Callback(QDesignerWidgetBoxInterface_CloseEvent_Callback cb) { qdesignerwidgetboxinterface_closeevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_ContextMenuEvent_Callback(QDesignerWidgetBoxInterface_ContextMenuEvent_Callback cb) { qdesignerwidgetboxinterface_contextmenuevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_TabletEvent_Callback(QDesignerWidgetBoxInterface_TabletEvent_Callback cb) { qdesignerwidgetboxinterface_tabletevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_ActionEvent_Callback(QDesignerWidgetBoxInterface_ActionEvent_Callback cb) { qdesignerwidgetboxinterface_actionevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_DragEnterEvent_Callback(QDesignerWidgetBoxInterface_DragEnterEvent_Callback cb) { qdesignerwidgetboxinterface_dragenterevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_DragMoveEvent_Callback(QDesignerWidgetBoxInterface_DragMoveEvent_Callback cb) { qdesignerwidgetboxinterface_dragmoveevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_DragLeaveEvent_Callback(QDesignerWidgetBoxInterface_DragLeaveEvent_Callback cb) { qdesignerwidgetboxinterface_dragleaveevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_DropEvent_Callback(QDesignerWidgetBoxInterface_DropEvent_Callback cb) { qdesignerwidgetboxinterface_dropevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_ShowEvent_Callback(QDesignerWidgetBoxInterface_ShowEvent_Callback cb) { qdesignerwidgetboxinterface_showevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_HideEvent_Callback(QDesignerWidgetBoxInterface_HideEvent_Callback cb) { qdesignerwidgetboxinterface_hideevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_NativeEvent_Callback(QDesignerWidgetBoxInterface_NativeEvent_Callback cb) { qdesignerwidgetboxinterface_nativeevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_ChangeEvent_Callback(QDesignerWidgetBoxInterface_ChangeEvent_Callback cb) { qdesignerwidgetboxinterface_changeevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Metric_Callback(QDesignerWidgetBoxInterface_Metric_Callback cb) { qdesignerwidgetboxinterface_metric_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_InitPainter_Callback(QDesignerWidgetBoxInterface_InitPainter_Callback cb) { qdesignerwidgetboxinterface_initpainter_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Redirected_Callback(QDesignerWidgetBoxInterface_Redirected_Callback cb) { qdesignerwidgetboxinterface_redirected_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_SharedPainter_Callback(QDesignerWidgetBoxInterface_SharedPainter_Callback cb) { qdesignerwidgetboxinterface_sharedpainter_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_InputMethodEvent_Callback(QDesignerWidgetBoxInterface_InputMethodEvent_Callback cb) { qdesignerwidgetboxinterface_inputmethodevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_InputMethodQuery_Callback(QDesignerWidgetBoxInterface_InputMethodQuery_Callback cb) { qdesignerwidgetboxinterface_inputmethodquery_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_FocusNextPrevChild_Callback(QDesignerWidgetBoxInterface_FocusNextPrevChild_Callback cb) { qdesignerwidgetboxinterface_focusnextprevchild_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_EventFilter_Callback(QDesignerWidgetBoxInterface_EventFilter_Callback cb) { qdesignerwidgetboxinterface_eventfilter_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_TimerEvent_Callback(QDesignerWidgetBoxInterface_TimerEvent_Callback cb) { qdesignerwidgetboxinterface_timerevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_ChildEvent_Callback(QDesignerWidgetBoxInterface_ChildEvent_Callback cb) { qdesignerwidgetboxinterface_childevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_CustomEvent_Callback(QDesignerWidgetBoxInterface_CustomEvent_Callback cb) { qdesignerwidgetboxinterface_customevent_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_ConnectNotify_Callback(QDesignerWidgetBoxInterface_ConnectNotify_Callback cb) { qdesignerwidgetboxinterface_connectnotify_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_DisconnectNotify_Callback(QDesignerWidgetBoxInterface_DisconnectNotify_Callback cb) { qdesignerwidgetboxinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_UpdateMicroFocus_Callback(QDesignerWidgetBoxInterface_UpdateMicroFocus_Callback cb) { qdesignerwidgetboxinterface_updatemicrofocus_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Create_Callback(QDesignerWidgetBoxInterface_Create_Callback cb) { qdesignerwidgetboxinterface_create_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Destroy_Callback(QDesignerWidgetBoxInterface_Destroy_Callback cb) { qdesignerwidgetboxinterface_destroy_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_FocusNextChild_Callback(QDesignerWidgetBoxInterface_FocusNextChild_Callback cb) { qdesignerwidgetboxinterface_focusnextchild_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_FocusPreviousChild_Callback(QDesignerWidgetBoxInterface_FocusPreviousChild_Callback cb) { qdesignerwidgetboxinterface_focuspreviouschild_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Sender_Callback(QDesignerWidgetBoxInterface_Sender_Callback cb) { qdesignerwidgetboxinterface_sender_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_SenderSignalIndex_Callback(QDesignerWidgetBoxInterface_SenderSignalIndex_Callback cb) { qdesignerwidgetboxinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_Receivers_Callback(QDesignerWidgetBoxInterface_Receivers_Callback cb) { qdesignerwidgetboxinterface_receivers_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_IsSignalConnected_Callback(QDesignerWidgetBoxInterface_IsSignalConnected_Callback cb) { qdesignerwidgetboxinterface_issignalconnected_callback = cb; }
    inline void setQDesignerWidgetBoxInterface_GetDecodedMetricF_Callback(QDesignerWidgetBoxInterface_GetDecodedMetricF_Callback cb) { qdesignerwidgetboxinterface_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDesignerWidgetBoxInterface_MetaObject_IsBase(bool value) const { qdesignerwidgetboxinterface_metaobject_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Metacast_IsBase(bool value) const { qdesignerwidgetboxinterface_metacast_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Metacall_IsBase(bool value) const { qdesignerwidgetboxinterface_metacall_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_CategoryCount_IsBase(bool value) const { qdesignerwidgetboxinterface_categorycount_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Category_IsBase(bool value) const { qdesignerwidgetboxinterface_category_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_AddCategory_IsBase(bool value) const { qdesignerwidgetboxinterface_addcategory_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_RemoveCategory_IsBase(bool value) const { qdesignerwidgetboxinterface_removecategory_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_WidgetCount_IsBase(bool value) const { qdesignerwidgetboxinterface_widgetcount_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Widget_IsBase(bool value) const { qdesignerwidgetboxinterface_widget_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_AddWidget_IsBase(bool value) const { qdesignerwidgetboxinterface_addwidget_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_RemoveWidget_IsBase(bool value) const { qdesignerwidgetboxinterface_removewidget_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_DropWidgets_IsBase(bool value) const { qdesignerwidgetboxinterface_dropwidgets_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_SetFileName_IsBase(bool value) const { qdesignerwidgetboxinterface_setfilename_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_FileName_IsBase(bool value) const { qdesignerwidgetboxinterface_filename_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Load_IsBase(bool value) const { qdesignerwidgetboxinterface_load_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Save_IsBase(bool value) const { qdesignerwidgetboxinterface_save_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_DevType_IsBase(bool value) const { qdesignerwidgetboxinterface_devtype_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_SetVisible_IsBase(bool value) const { qdesignerwidgetboxinterface_setvisible_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_SizeHint_IsBase(bool value) const { qdesignerwidgetboxinterface_sizehint_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_MinimumSizeHint_IsBase(bool value) const { qdesignerwidgetboxinterface_minimumsizehint_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_HeightForWidth_IsBase(bool value) const { qdesignerwidgetboxinterface_heightforwidth_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_HasHeightForWidth_IsBase(bool value) const { qdesignerwidgetboxinterface_hasheightforwidth_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_PaintEngine_IsBase(bool value) const { qdesignerwidgetboxinterface_paintengine_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Event_IsBase(bool value) const { qdesignerwidgetboxinterface_event_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_MousePressEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_mousepressevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_MouseReleaseEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_mousereleaseevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_MouseDoubleClickEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_mousedoubleclickevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_MouseMoveEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_mousemoveevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_WheelEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_wheelevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_KeyPressEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_keypressevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_KeyReleaseEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_keyreleaseevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_FocusInEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_focusinevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_FocusOutEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_focusoutevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_EnterEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_enterevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_LeaveEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_leaveevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_PaintEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_paintevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_MoveEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_moveevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_ResizeEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_resizeevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_CloseEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_closeevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_ContextMenuEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_contextmenuevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_TabletEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_tabletevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_ActionEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_actionevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_DragEnterEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_dragenterevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_DragMoveEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_dragmoveevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_DragLeaveEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_dragleaveevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_DropEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_dropevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_ShowEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_showevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_HideEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_hideevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_NativeEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_nativeevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_ChangeEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_changeevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Metric_IsBase(bool value) const { qdesignerwidgetboxinterface_metric_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_InitPainter_IsBase(bool value) const { qdesignerwidgetboxinterface_initpainter_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Redirected_IsBase(bool value) const { qdesignerwidgetboxinterface_redirected_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_SharedPainter_IsBase(bool value) const { qdesignerwidgetboxinterface_sharedpainter_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_InputMethodEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_inputmethodevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_InputMethodQuery_IsBase(bool value) const { qdesignerwidgetboxinterface_inputmethodquery_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_FocusNextPrevChild_IsBase(bool value) const { qdesignerwidgetboxinterface_focusnextprevchild_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_EventFilter_IsBase(bool value) const { qdesignerwidgetboxinterface_eventfilter_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_TimerEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_timerevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_ChildEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_childevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_CustomEvent_IsBase(bool value) const { qdesignerwidgetboxinterface_customevent_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_ConnectNotify_IsBase(bool value) const { qdesignerwidgetboxinterface_connectnotify_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_DisconnectNotify_IsBase(bool value) const { qdesignerwidgetboxinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_UpdateMicroFocus_IsBase(bool value) const { qdesignerwidgetboxinterface_updatemicrofocus_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Create_IsBase(bool value) const { qdesignerwidgetboxinterface_create_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Destroy_IsBase(bool value) const { qdesignerwidgetboxinterface_destroy_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_FocusNextChild_IsBase(bool value) const { qdesignerwidgetboxinterface_focusnextchild_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_FocusPreviousChild_IsBase(bool value) const { qdesignerwidgetboxinterface_focuspreviouschild_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Sender_IsBase(bool value) const { qdesignerwidgetboxinterface_sender_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerwidgetboxinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_Receivers_IsBase(bool value) const { qdesignerwidgetboxinterface_receivers_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_IsSignalConnected_IsBase(bool value) const { qdesignerwidgetboxinterface_issignalconnected_isbase = value; }
    inline void setQDesignerWidgetBoxInterface_GetDecodedMetricF_IsBase(bool value) const { qdesignerwidgetboxinterface_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerwidgetboxinterface_metaobject_isbase) {
            qdesignerwidgetboxinterface_metaobject_isbase = false;
            return QDesignerWidgetBoxInterface::metaObject();
        }
        auto metaobject_cb = qdesignerwidgetboxinterface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerwidgetboxinterface_metacast_isbase) {
            qdesignerwidgetboxinterface_metacast_isbase = false;
            return QDesignerWidgetBoxInterface::qt_metacast(param1);
        }
        auto metacast_cb = qdesignerwidgetboxinterface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerwidgetboxinterface_metacall_isbase) {
            qdesignerwidgetboxinterface_metacall_isbase = false;
            return QDesignerWidgetBoxInterface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdesignerwidgetboxinterface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int categoryCount() const override {
        auto categorycount_cb = qdesignerwidgetboxinterface_categorycount_callback;
        if (categorycount_cb) {
            int callback_ret = categorycount_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerWidgetBoxInterface::Category category(int cat_idx) const override {
        auto category_cb = qdesignerwidgetboxinterface_category_callback;
        if (category_cb) {
            int cbval1 = cat_idx;

            QDesignerWidgetBoxInterface__Category* callback_ret = category_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void addCategory(const QDesignerWidgetBoxInterface::Category& cat) override {
        auto addcategory_cb = qdesignerwidgetboxinterface_addcategory_callback;
        if (addcategory_cb) {
            const QDesignerWidgetBoxInterface::Category& cat_ret = cat;
            // Cast returned reference into pointer
            QDesignerWidgetBoxInterface__Category* cbval1 = const_cast<QDesignerWidgetBoxInterface::Category*>(&cat_ret);

            addcategory_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeCategory(int cat_idx) override {
        auto removecategory_cb = qdesignerwidgetboxinterface_removecategory_callback;
        if (removecategory_cb) {
            int cbval1 = cat_idx;

            removecategory_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int widgetCount(int cat_idx) const override {
        auto widgetcount_cb = qdesignerwidgetboxinterface_widgetcount_callback;
        if (widgetcount_cb) {
            int cbval1 = cat_idx;

            int callback_ret = widgetcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerWidgetBoxInterface::Widget widget(int cat_idx, int wgt_idx) const override {
        auto widget_cb = qdesignerwidgetboxinterface_widget_callback;
        if (widget_cb) {
            int cbval1 = cat_idx;
            int cbval2 = wgt_idx;

            QDesignerWidgetBoxInterface__Widget* callback_ret = widget_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void addWidget(int cat_idx, const QDesignerWidgetBoxInterface::Widget& wgt) override {
        auto addwidget_cb = qdesignerwidgetboxinterface_addwidget_callback;
        if (addwidget_cb) {
            int cbval1 = cat_idx;
            const QDesignerWidgetBoxInterface::Widget& wgt_ret = wgt;
            // Cast returned reference into pointer
            QDesignerWidgetBoxInterface__Widget* cbval2 = const_cast<QDesignerWidgetBoxInterface::Widget*>(&wgt_ret);

            addwidget_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void removeWidget(int cat_idx, int wgt_idx) override {
        auto removewidget_cb = qdesignerwidgetboxinterface_removewidget_callback;
        if (removewidget_cb) {
            int cbval1 = cat_idx;
            int cbval2 = wgt_idx;

            removewidget_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropWidgets(const QList<QDesignerDnDItemInterface*>& item_list, const QPoint& global_mouse_pos) override {
        auto dropwidgets_cb = qdesignerwidgetboxinterface_dropwidgets_callback;
        if (dropwidgets_cb) {
            const QList<QDesignerDnDItemInterface*>& item_list_ret = item_list;
            // Convert QList<> from C++ memory to manually-managed C memory
            QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(malloc(sizeof(QDesignerDnDItemInterface*) * (item_list_ret.size())));
            for (qsizetype i = 0; i < item_list_ret.size(); ++i) {
                item_list_arr[i] = item_list_ret[i];
            }
            libqt_list item_list_out;
            item_list_out.len = item_list_ret.size();
            item_list_out.data = static_cast<void*>(item_list_arr);
            libqt_list /* of QDesignerDnDItemInterface* */ cbval1 = item_list_out;
            const QPoint& global_mouse_pos_ret = global_mouse_pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&global_mouse_pos_ret);

            dropwidgets_cb(this, cbval1, cbval2);
            free(item_list_arr);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFileName(const QString& file_name) override {
        auto setfilename_cb = qdesignerwidgetboxinterface_setfilename_callback;
        if (setfilename_cb) {
            const QString file_name_ret = file_name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray file_name_b = file_name_ret.toUtf8();
            auto file_name_str_len = file_name_b.length();
            const char* file_name_str = static_cast<const char*>(malloc(file_name_str_len + 1));
            memcpy((void*)file_name_str, file_name_b.data(), file_name_str_len);
            ((char*)file_name_str)[file_name_str_len] = '\0';
            const char* cbval1 = file_name_str;

            setfilename_cb(this, cbval1);
            libqt_free(file_name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        auto filename_cb = qdesignerwidgetboxinterface_filename_callback;
        if (filename_cb) {
            const char* callback_ret = filename_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool load() override {
        auto load_cb = qdesignerwidgetboxinterface_load_callback;
        if (load_cb) {
            bool callback_ret = load_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool save() override {
        auto save_cb = qdesignerwidgetboxinterface_save_callback;
        if (save_cb) {
            bool callback_ret = save_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerwidgetboxinterface_devtype_isbase) {
            qdesignerwidgetboxinterface_devtype_isbase = false;
            return QDesignerWidgetBoxInterface::devType();
        }
        auto devtype_cb = qdesignerwidgetboxinterface_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerwidgetboxinterface_setvisible_isbase) {
            qdesignerwidgetboxinterface_setvisible_isbase = false;
            QDesignerWidgetBoxInterface::setVisible(visible);
            return;
        }
        auto setvisible_cb = qdesignerwidgetboxinterface_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerwidgetboxinterface_sizehint_isbase) {
            qdesignerwidgetboxinterface_sizehint_isbase = false;
            return QDesignerWidgetBoxInterface::sizeHint();
        }
        auto sizehint_cb = qdesignerwidgetboxinterface_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QDesignerWidgetBoxInterface::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerwidgetboxinterface_minimumsizehint_isbase) {
            qdesignerwidgetboxinterface_minimumsizehint_isbase = false;
            return QDesignerWidgetBoxInterface::minimumSizeHint();
        }
        auto minimumsizehint_cb = qdesignerwidgetboxinterface_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QDesignerWidgetBoxInterface::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerwidgetboxinterface_heightforwidth_isbase) {
            qdesignerwidgetboxinterface_heightforwidth_isbase = false;
            return QDesignerWidgetBoxInterface::heightForWidth(param1);
        }
        auto heightforwidth_cb = qdesignerwidgetboxinterface_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerwidgetboxinterface_hasheightforwidth_isbase) {
            qdesignerwidgetboxinterface_hasheightforwidth_isbase = false;
            return QDesignerWidgetBoxInterface::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qdesignerwidgetboxinterface_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerwidgetboxinterface_paintengine_isbase) {
            qdesignerwidgetboxinterface_paintengine_isbase = false;
            return QDesignerWidgetBoxInterface::paintEngine();
        }
        auto paintengine_cb = qdesignerwidgetboxinterface_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerwidgetboxinterface_event_isbase) {
            qdesignerwidgetboxinterface_event_isbase = false;
            return QDesignerWidgetBoxInterface::event(event);
        }
        auto event_cb = qdesignerwidgetboxinterface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousepressevent_isbase) {
            qdesignerwidgetboxinterface_mousepressevent_isbase = false;
            QDesignerWidgetBoxInterface::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qdesignerwidgetboxinterface_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousereleaseevent_isbase) {
            qdesignerwidgetboxinterface_mousereleaseevent_isbase = false;
            QDesignerWidgetBoxInterface::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qdesignerwidgetboxinterface_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousedoubleclickevent_isbase) {
            qdesignerwidgetboxinterface_mousedoubleclickevent_isbase = false;
            QDesignerWidgetBoxInterface::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qdesignerwidgetboxinterface_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerwidgetboxinterface_mousemoveevent_isbase) {
            qdesignerwidgetboxinterface_mousemoveevent_isbase = false;
            QDesignerWidgetBoxInterface::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qdesignerwidgetboxinterface_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerwidgetboxinterface_wheelevent_isbase) {
            qdesignerwidgetboxinterface_wheelevent_isbase = false;
            QDesignerWidgetBoxInterface::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qdesignerwidgetboxinterface_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerwidgetboxinterface_keypressevent_isbase) {
            qdesignerwidgetboxinterface_keypressevent_isbase = false;
            QDesignerWidgetBoxInterface::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qdesignerwidgetboxinterface_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerwidgetboxinterface_keyreleaseevent_isbase) {
            qdesignerwidgetboxinterface_keyreleaseevent_isbase = false;
            QDesignerWidgetBoxInterface::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qdesignerwidgetboxinterface_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerwidgetboxinterface_focusinevent_isbase) {
            qdesignerwidgetboxinterface_focusinevent_isbase = false;
            QDesignerWidgetBoxInterface::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qdesignerwidgetboxinterface_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerwidgetboxinterface_focusoutevent_isbase) {
            qdesignerwidgetboxinterface_focusoutevent_isbase = false;
            QDesignerWidgetBoxInterface::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qdesignerwidgetboxinterface_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerwidgetboxinterface_enterevent_isbase) {
            qdesignerwidgetboxinterface_enterevent_isbase = false;
            QDesignerWidgetBoxInterface::enterEvent(event);
            return;
        }
        auto enterevent_cb = qdesignerwidgetboxinterface_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerwidgetboxinterface_leaveevent_isbase) {
            qdesignerwidgetboxinterface_leaveevent_isbase = false;
            QDesignerWidgetBoxInterface::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qdesignerwidgetboxinterface_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerwidgetboxinterface_paintevent_isbase) {
            qdesignerwidgetboxinterface_paintevent_isbase = false;
            QDesignerWidgetBoxInterface::paintEvent(event);
            return;
        }
        auto paintevent_cb = qdesignerwidgetboxinterface_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerwidgetboxinterface_moveevent_isbase) {
            qdesignerwidgetboxinterface_moveevent_isbase = false;
            QDesignerWidgetBoxInterface::moveEvent(event);
            return;
        }
        auto moveevent_cb = qdesignerwidgetboxinterface_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerwidgetboxinterface_resizeevent_isbase) {
            qdesignerwidgetboxinterface_resizeevent_isbase = false;
            QDesignerWidgetBoxInterface::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qdesignerwidgetboxinterface_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerwidgetboxinterface_closeevent_isbase) {
            qdesignerwidgetboxinterface_closeevent_isbase = false;
            QDesignerWidgetBoxInterface::closeEvent(event);
            return;
        }
        auto closeevent_cb = qdesignerwidgetboxinterface_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerwidgetboxinterface_contextmenuevent_isbase) {
            qdesignerwidgetboxinterface_contextmenuevent_isbase = false;
            QDesignerWidgetBoxInterface::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qdesignerwidgetboxinterface_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerwidgetboxinterface_tabletevent_isbase) {
            qdesignerwidgetboxinterface_tabletevent_isbase = false;
            QDesignerWidgetBoxInterface::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qdesignerwidgetboxinterface_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerwidgetboxinterface_actionevent_isbase) {
            qdesignerwidgetboxinterface_actionevent_isbase = false;
            QDesignerWidgetBoxInterface::actionEvent(event);
            return;
        }
        auto actionevent_cb = qdesignerwidgetboxinterface_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerwidgetboxinterface_dragenterevent_isbase) {
            qdesignerwidgetboxinterface_dragenterevent_isbase = false;
            QDesignerWidgetBoxInterface::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qdesignerwidgetboxinterface_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerwidgetboxinterface_dragmoveevent_isbase) {
            qdesignerwidgetboxinterface_dragmoveevent_isbase = false;
            QDesignerWidgetBoxInterface::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qdesignerwidgetboxinterface_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerwidgetboxinterface_dragleaveevent_isbase) {
            qdesignerwidgetboxinterface_dragleaveevent_isbase = false;
            QDesignerWidgetBoxInterface::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qdesignerwidgetboxinterface_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerwidgetboxinterface_dropevent_isbase) {
            qdesignerwidgetboxinterface_dropevent_isbase = false;
            QDesignerWidgetBoxInterface::dropEvent(event);
            return;
        }
        auto dropevent_cb = qdesignerwidgetboxinterface_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerwidgetboxinterface_showevent_isbase) {
            qdesignerwidgetboxinterface_showevent_isbase = false;
            QDesignerWidgetBoxInterface::showEvent(event);
            return;
        }
        auto showevent_cb = qdesignerwidgetboxinterface_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerwidgetboxinterface_hideevent_isbase) {
            qdesignerwidgetboxinterface_hideevent_isbase = false;
            QDesignerWidgetBoxInterface::hideEvent(event);
            return;
        }
        auto hideevent_cb = qdesignerwidgetboxinterface_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerwidgetboxinterface_nativeevent_isbase) {
            qdesignerwidgetboxinterface_nativeevent_isbase = false;
            return QDesignerWidgetBoxInterface::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qdesignerwidgetboxinterface_nativeevent_callback;
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
        return QDesignerWidgetBoxInterface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerwidgetboxinterface_changeevent_isbase) {
            qdesignerwidgetboxinterface_changeevent_isbase = false;
            QDesignerWidgetBoxInterface::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qdesignerwidgetboxinterface_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerwidgetboxinterface_metric_isbase) {
            qdesignerwidgetboxinterface_metric_isbase = false;
            return QDesignerWidgetBoxInterface::metric(param1);
        }
        auto metric_cb = qdesignerwidgetboxinterface_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerwidgetboxinterface_initpainter_isbase) {
            qdesignerwidgetboxinterface_initpainter_isbase = false;
            QDesignerWidgetBoxInterface::initPainter(painter);
            return;
        }
        auto initpainter_cb = qdesignerwidgetboxinterface_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerwidgetboxinterface_redirected_isbase) {
            qdesignerwidgetboxinterface_redirected_isbase = false;
            return QDesignerWidgetBoxInterface::redirected(offset);
        }
        auto redirected_cb = qdesignerwidgetboxinterface_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerwidgetboxinterface_sharedpainter_isbase) {
            qdesignerwidgetboxinterface_sharedpainter_isbase = false;
            return QDesignerWidgetBoxInterface::sharedPainter();
        }
        auto sharedpainter_cb = qdesignerwidgetboxinterface_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerwidgetboxinterface_inputmethodevent_isbase) {
            qdesignerwidgetboxinterface_inputmethodevent_isbase = false;
            QDesignerWidgetBoxInterface::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qdesignerwidgetboxinterface_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerwidgetboxinterface_inputmethodquery_isbase) {
            qdesignerwidgetboxinterface_inputmethodquery_isbase = false;
            return QDesignerWidgetBoxInterface::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qdesignerwidgetboxinterface_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QDesignerWidgetBoxInterface::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerwidgetboxinterface_focusnextprevchild_isbase) {
            qdesignerwidgetboxinterface_focusnextprevchild_isbase = false;
            return QDesignerWidgetBoxInterface::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qdesignerwidgetboxinterface_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerwidgetboxinterface_eventfilter_isbase) {
            qdesignerwidgetboxinterface_eventfilter_isbase = false;
            return QDesignerWidgetBoxInterface::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdesignerwidgetboxinterface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerwidgetboxinterface_timerevent_isbase) {
            qdesignerwidgetboxinterface_timerevent_isbase = false;
            QDesignerWidgetBoxInterface::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdesignerwidgetboxinterface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerwidgetboxinterface_childevent_isbase) {
            qdesignerwidgetboxinterface_childevent_isbase = false;
            QDesignerWidgetBoxInterface::childEvent(event);
            return;
        }
        auto childevent_cb = qdesignerwidgetboxinterface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerwidgetboxinterface_customevent_isbase) {
            qdesignerwidgetboxinterface_customevent_isbase = false;
            QDesignerWidgetBoxInterface::customEvent(event);
            return;
        }
        auto customevent_cb = qdesignerwidgetboxinterface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetboxinterface_connectnotify_isbase) {
            qdesignerwidgetboxinterface_connectnotify_isbase = false;
            QDesignerWidgetBoxInterface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdesignerwidgetboxinterface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetboxinterface_disconnectnotify_isbase) {
            qdesignerwidgetboxinterface_disconnectnotify_isbase = false;
            QDesignerWidgetBoxInterface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdesignerwidgetboxinterface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDesignerWidgetBoxInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdesignerwidgetboxinterface_updatemicrofocus_isbase) {
            qdesignerwidgetboxinterface_updatemicrofocus_isbase = false;
            QDesignerWidgetBoxInterface::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qdesignerwidgetboxinterface_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QDesignerWidgetBoxInterface::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdesignerwidgetboxinterface_create_isbase) {
            qdesignerwidgetboxinterface_create_isbase = false;
            QDesignerWidgetBoxInterface::create();
            return;
        }
        auto create_cb = qdesignerwidgetboxinterface_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QDesignerWidgetBoxInterface::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdesignerwidgetboxinterface_destroy_isbase) {
            qdesignerwidgetboxinterface_destroy_isbase = false;
            QDesignerWidgetBoxInterface::destroy();
            return;
        }
        auto destroy_cb = qdesignerwidgetboxinterface_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QDesignerWidgetBoxInterface::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdesignerwidgetboxinterface_focusnextchild_isbase) {
            qdesignerwidgetboxinterface_focusnextchild_isbase = false;
            return QDesignerWidgetBoxInterface::focusNextChild();
        }
        auto focusnextchild_cb = qdesignerwidgetboxinterface_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdesignerwidgetboxinterface_focuspreviouschild_isbase) {
            qdesignerwidgetboxinterface_focuspreviouschild_isbase = false;
            return QDesignerWidgetBoxInterface::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qdesignerwidgetboxinterface_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerwidgetboxinterface_sender_isbase) {
            qdesignerwidgetboxinterface_sender_isbase = false;
            return QDesignerWidgetBoxInterface::sender();
        }
        auto sender_cb = qdesignerwidgetboxinterface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerwidgetboxinterface_sendersignalindex_isbase) {
            qdesignerwidgetboxinterface_sendersignalindex_isbase = false;
            return QDesignerWidgetBoxInterface::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdesignerwidgetboxinterface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerwidgetboxinterface_receivers_isbase) {
            qdesignerwidgetboxinterface_receivers_isbase = false;
            return QDesignerWidgetBoxInterface::receivers(signal);
        }
        auto receivers_cb = qdesignerwidgetboxinterface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerwidgetboxinterface_issignalconnected_isbase) {
            qdesignerwidgetboxinterface_issignalconnected_isbase = false;
            return QDesignerWidgetBoxInterface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdesignerwidgetboxinterface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetBoxInterface::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdesignerwidgetboxinterface_getdecodedmetricf_isbase) {
            qdesignerwidgetboxinterface_getdecodedmetricf_isbase = false;
            return QDesignerWidgetBoxInterface::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qdesignerwidgetboxinterface_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QDesignerWidgetBoxInterface::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QDesignerWidgetBoxInterface_Event(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend bool QDesignerWidgetBoxInterface_SuperEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_MousePressEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMousePressEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_MouseReleaseEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMouseReleaseEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_MouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMouseDoubleClickEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_MouseMoveEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMouseMoveEvent(QDesignerWidgetBoxInterface* self, QMouseEvent* event);
    friend void QDesignerWidgetBoxInterface_WheelEvent(QDesignerWidgetBoxInterface* self, QWheelEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperWheelEvent(QDesignerWidgetBoxInterface* self, QWheelEvent* event);
    friend void QDesignerWidgetBoxInterface_KeyPressEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperKeyPressEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event);
    friend void QDesignerWidgetBoxInterface_KeyReleaseEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperKeyReleaseEvent(QDesignerWidgetBoxInterface* self, QKeyEvent* event);
    friend void QDesignerWidgetBoxInterface_FocusInEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperFocusInEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event);
    friend void QDesignerWidgetBoxInterface_FocusOutEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperFocusOutEvent(QDesignerWidgetBoxInterface* self, QFocusEvent* event);
    friend void QDesignerWidgetBoxInterface_EnterEvent(QDesignerWidgetBoxInterface* self, QEnterEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperEnterEvent(QDesignerWidgetBoxInterface* self, QEnterEvent* event);
    friend void QDesignerWidgetBoxInterface_LeaveEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperLeaveEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_PaintEvent(QDesignerWidgetBoxInterface* self, QPaintEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperPaintEvent(QDesignerWidgetBoxInterface* self, QPaintEvent* event);
    friend void QDesignerWidgetBoxInterface_MoveEvent(QDesignerWidgetBoxInterface* self, QMoveEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperMoveEvent(QDesignerWidgetBoxInterface* self, QMoveEvent* event);
    friend void QDesignerWidgetBoxInterface_ResizeEvent(QDesignerWidgetBoxInterface* self, QResizeEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperResizeEvent(QDesignerWidgetBoxInterface* self, QResizeEvent* event);
    friend void QDesignerWidgetBoxInterface_CloseEvent(QDesignerWidgetBoxInterface* self, QCloseEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperCloseEvent(QDesignerWidgetBoxInterface* self, QCloseEvent* event);
    friend void QDesignerWidgetBoxInterface_ContextMenuEvent(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperContextMenuEvent(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event);
    friend void QDesignerWidgetBoxInterface_TabletEvent(QDesignerWidgetBoxInterface* self, QTabletEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperTabletEvent(QDesignerWidgetBoxInterface* self, QTabletEvent* event);
    friend void QDesignerWidgetBoxInterface_ActionEvent(QDesignerWidgetBoxInterface* self, QActionEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperActionEvent(QDesignerWidgetBoxInterface* self, QActionEvent* event);
    friend void QDesignerWidgetBoxInterface_DragEnterEvent(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDragEnterEvent(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event);
    friend void QDesignerWidgetBoxInterface_DragMoveEvent(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDragMoveEvent(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event);
    friend void QDesignerWidgetBoxInterface_DragLeaveEvent(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDragLeaveEvent(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event);
    friend void QDesignerWidgetBoxInterface_DropEvent(QDesignerWidgetBoxInterface* self, QDropEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperDropEvent(QDesignerWidgetBoxInterface* self, QDropEvent* event);
    friend void QDesignerWidgetBoxInterface_ShowEvent(QDesignerWidgetBoxInterface* self, QShowEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperShowEvent(QDesignerWidgetBoxInterface* self, QShowEvent* event);
    friend void QDesignerWidgetBoxInterface_HideEvent(QDesignerWidgetBoxInterface* self, QHideEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperHideEvent(QDesignerWidgetBoxInterface* self, QHideEvent* event);
    friend bool QDesignerWidgetBoxInterface_NativeEvent(QDesignerWidgetBoxInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDesignerWidgetBoxInterface_SuperNativeEvent(QDesignerWidgetBoxInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerWidgetBoxInterface_ChangeEvent(QDesignerWidgetBoxInterface* self, QEvent* param1);
    friend void QDesignerWidgetBoxInterface_SuperChangeEvent(QDesignerWidgetBoxInterface* self, QEvent* param1);
    friend int QDesignerWidgetBoxInterface_Metric(const QDesignerWidgetBoxInterface* self, int param1);
    friend int QDesignerWidgetBoxInterface_SuperMetric(const QDesignerWidgetBoxInterface* self, int param1);
    friend void QDesignerWidgetBoxInterface_InitPainter(const QDesignerWidgetBoxInterface* self, QPainter* painter);
    friend void QDesignerWidgetBoxInterface_SuperInitPainter(const QDesignerWidgetBoxInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerWidgetBoxInterface_Redirected(const QDesignerWidgetBoxInterface* self, QPoint* offset);
    friend QPaintDevice* QDesignerWidgetBoxInterface_SuperRedirected(const QDesignerWidgetBoxInterface* self, QPoint* offset);
    friend QPainter* QDesignerWidgetBoxInterface_SharedPainter(const QDesignerWidgetBoxInterface* self);
    friend QPainter* QDesignerWidgetBoxInterface_SuperSharedPainter(const QDesignerWidgetBoxInterface* self);
    friend void QDesignerWidgetBoxInterface_InputMethodEvent(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1);
    friend void QDesignerWidgetBoxInterface_SuperInputMethodEvent(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerWidgetBoxInterface_FocusNextPrevChild(QDesignerWidgetBoxInterface* self, bool next);
    friend bool QDesignerWidgetBoxInterface_SuperFocusNextPrevChild(QDesignerWidgetBoxInterface* self, bool next);
    friend void QDesignerWidgetBoxInterface_TimerEvent(QDesignerWidgetBoxInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperTimerEvent(QDesignerWidgetBoxInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetBoxInterface_ChildEvent(QDesignerWidgetBoxInterface* self, QChildEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperChildEvent(QDesignerWidgetBoxInterface* self, QChildEvent* event);
    friend void QDesignerWidgetBoxInterface_CustomEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_SuperCustomEvent(QDesignerWidgetBoxInterface* self, QEvent* event);
    friend void QDesignerWidgetBoxInterface_ConnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetBoxInterface_SuperConnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetBoxInterface_DisconnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetBoxInterface_SuperDisconnectNotify(QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetBoxInterface_UpdateMicroFocus(QDesignerWidgetBoxInterface* self);
    friend void QDesignerWidgetBoxInterface_SuperUpdateMicroFocus(QDesignerWidgetBoxInterface* self);
    friend void QDesignerWidgetBoxInterface_Create(QDesignerWidgetBoxInterface* self);
    friend void QDesignerWidgetBoxInterface_SuperCreate(QDesignerWidgetBoxInterface* self);
    friend void QDesignerWidgetBoxInterface_Destroy(QDesignerWidgetBoxInterface* self);
    friend void QDesignerWidgetBoxInterface_SuperDestroy(QDesignerWidgetBoxInterface* self);
    friend bool QDesignerWidgetBoxInterface_FocusNextChild(QDesignerWidgetBoxInterface* self);
    friend bool QDesignerWidgetBoxInterface_SuperFocusNextChild(QDesignerWidgetBoxInterface* self);
    friend bool QDesignerWidgetBoxInterface_FocusPreviousChild(QDesignerWidgetBoxInterface* self);
    friend bool QDesignerWidgetBoxInterface_SuperFocusPreviousChild(QDesignerWidgetBoxInterface* self);
    friend QObject* QDesignerWidgetBoxInterface_Sender(const QDesignerWidgetBoxInterface* self);
    friend QObject* QDesignerWidgetBoxInterface_SuperSender(const QDesignerWidgetBoxInterface* self);
    friend int QDesignerWidgetBoxInterface_SenderSignalIndex(const QDesignerWidgetBoxInterface* self);
    friend int QDesignerWidgetBoxInterface_SuperSenderSignalIndex(const QDesignerWidgetBoxInterface* self);
    friend int QDesignerWidgetBoxInterface_Receivers(const QDesignerWidgetBoxInterface* self, const char* signal);
    friend int QDesignerWidgetBoxInterface_SuperReceivers(const QDesignerWidgetBoxInterface* self, const char* signal);
    friend bool QDesignerWidgetBoxInterface_IsSignalConnected(const QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
    friend bool QDesignerWidgetBoxInterface_SuperIsSignalConnected(const QDesignerWidgetBoxInterface* self, const QMetaMethod* signal);
    friend double QDesignerWidgetBoxInterface_GetDecodedMetricF(const QDesignerWidgetBoxInterface* self, int metricA, int metricB);
    friend double QDesignerWidgetBoxInterface_SuperGetDecodedMetricF(const QDesignerWidgetBoxInterface* self, int metricA, int metricB);
};

#endif
