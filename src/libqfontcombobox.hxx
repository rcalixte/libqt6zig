#pragma once
#ifndef SRCC_LIBVIRTUALQFONTCOMBOBOX_H
#define SRCC_LIBVIRTUALQFONTCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFontComboBox so that we can call protected methods
class VirtualQFontComboBox final : public QFontComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQFontComboBox = true;

    // Virtual class public types (including callbacks)
    using QFontComboBox_Metacall_Callback = int (*)(QFontComboBox*, int, int, void**);
    using QFontComboBox_SizeHint_Callback = QSize* (*)();
    using QFontComboBox_Event_Callback = bool (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_SetModel_Callback = void (*)(QFontComboBox*, QAbstractItemModel*);
    using QFontComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using QFontComboBox_ShowPopup_Callback = void (*)();
    using QFontComboBox_HidePopup_Callback = void (*)();
    using QFontComboBox_InputMethodQuery_Callback = QVariant* (*)(const QFontComboBox*, int);
    using QFontComboBox_FocusInEvent_Callback = void (*)(QFontComboBox*, QFocusEvent*);
    using QFontComboBox_FocusOutEvent_Callback = void (*)(QFontComboBox*, QFocusEvent*);
    using QFontComboBox_ChangeEvent_Callback = void (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_ResizeEvent_Callback = void (*)(QFontComboBox*, QResizeEvent*);
    using QFontComboBox_PaintEvent_Callback = void (*)(QFontComboBox*, QPaintEvent*);
    using QFontComboBox_ShowEvent_Callback = void (*)(QFontComboBox*, QShowEvent*);
    using QFontComboBox_HideEvent_Callback = void (*)(QFontComboBox*, QHideEvent*);
    using QFontComboBox_MousePressEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_MouseReleaseEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_KeyPressEvent_Callback = void (*)(QFontComboBox*, QKeyEvent*);
    using QFontComboBox_KeyReleaseEvent_Callback = void (*)(QFontComboBox*, QKeyEvent*);
    using QFontComboBox_WheelEvent_Callback = void (*)(QFontComboBox*, QWheelEvent*);
    using QFontComboBox_ContextMenuEvent_Callback = void (*)(QFontComboBox*, QContextMenuEvent*);
    using QFontComboBox_InputMethodEvent_Callback = void (*)(QFontComboBox*, QInputMethodEvent*);
    using QFontComboBox_InitStyleOption_Callback = void (*)(const QFontComboBox*, QStyleOptionComboBox*);
    using QFontComboBox_DevType_Callback = int (*)();
    using QFontComboBox_SetVisible_Callback = void (*)(QFontComboBox*, bool);
    using QFontComboBox_HeightForWidth_Callback = int (*)(const QFontComboBox*, int);
    using QFontComboBox_HasHeightForWidth_Callback = bool (*)();
    using QFontComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QFontComboBox_MouseDoubleClickEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_MouseMoveEvent_Callback = void (*)(QFontComboBox*, QMouseEvent*);
    using QFontComboBox_EnterEvent_Callback = void (*)(QFontComboBox*, QEnterEvent*);
    using QFontComboBox_LeaveEvent_Callback = void (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_MoveEvent_Callback = void (*)(QFontComboBox*, QMoveEvent*);
    using QFontComboBox_CloseEvent_Callback = void (*)(QFontComboBox*, QCloseEvent*);
    using QFontComboBox_TabletEvent_Callback = void (*)(QFontComboBox*, QTabletEvent*);
    using QFontComboBox_ActionEvent_Callback = void (*)(QFontComboBox*, QActionEvent*);
    using QFontComboBox_DragEnterEvent_Callback = void (*)(QFontComboBox*, QDragEnterEvent*);
    using QFontComboBox_DragMoveEvent_Callback = void (*)(QFontComboBox*, QDragMoveEvent*);
    using QFontComboBox_DragLeaveEvent_Callback = void (*)(QFontComboBox*, QDragLeaveEvent*);
    using QFontComboBox_DropEvent_Callback = void (*)(QFontComboBox*, QDropEvent*);
    using QFontComboBox_NativeEvent_Callback = bool (*)(QFontComboBox*, libqt_string, void*, intptr_t*);
    using QFontComboBox_Metric_Callback = int (*)(const QFontComboBox*, int);
    using QFontComboBox_InitPainter_Callback = void (*)(const QFontComboBox*, QPainter*);
    using QFontComboBox_Redirected_Callback = QPaintDevice* (*)(const QFontComboBox*, QPoint*);
    using QFontComboBox_SharedPainter_Callback = QPainter* (*)();
    using QFontComboBox_FocusNextPrevChild_Callback = bool (*)(QFontComboBox*, bool);
    using QFontComboBox_EventFilter_Callback = bool (*)(QFontComboBox*, QObject*, QEvent*);
    using QFontComboBox_TimerEvent_Callback = void (*)(QFontComboBox*, QTimerEvent*);
    using QFontComboBox_ChildEvent_Callback = void (*)(QFontComboBox*, QChildEvent*);
    using QFontComboBox_CustomEvent_Callback = void (*)(QFontComboBox*, QEvent*);
    using QFontComboBox_ConnectNotify_Callback = void (*)(QFontComboBox*, QMetaMethod*);
    using QFontComboBox_DisconnectNotify_Callback = void (*)(QFontComboBox*, QMetaMethod*);
    using QFontComboBox_UpdateMicroFocus_Callback = void (*)();
    using QFontComboBox_Create_Callback = void (*)();
    using QFontComboBox_Destroy_Callback = void (*)();
    using QFontComboBox_FocusNextChild_Callback = bool (*)();
    using QFontComboBox_FocusPreviousChild_Callback = bool (*)();
    using QFontComboBox_Sender_Callback = QObject* (*)();
    using QFontComboBox_SenderSignalIndex_Callback = int (*)();
    using QFontComboBox_Receivers_Callback = int (*)(const QFontComboBox*, const char*);
    using QFontComboBox_IsSignalConnected_Callback = bool (*)(const QFontComboBox*, QMetaMethod*);
    using QFontComboBox_GetDecodedMetricF_Callback = double (*)(const QFontComboBox*, int, int);

  protected:
    // Instance callback storage
    QFontComboBox_Metacall_Callback qfontcombobox_metacall_callback = nullptr;
    QFontComboBox_SizeHint_Callback qfontcombobox_sizehint_callback = nullptr;
    QFontComboBox_Event_Callback qfontcombobox_event_callback = nullptr;
    QFontComboBox_SetModel_Callback qfontcombobox_setmodel_callback = nullptr;
    QFontComboBox_MinimumSizeHint_Callback qfontcombobox_minimumsizehint_callback = nullptr;
    QFontComboBox_ShowPopup_Callback qfontcombobox_showpopup_callback = nullptr;
    QFontComboBox_HidePopup_Callback qfontcombobox_hidepopup_callback = nullptr;
    QFontComboBox_InputMethodQuery_Callback qfontcombobox_inputmethodquery_callback = nullptr;
    QFontComboBox_FocusInEvent_Callback qfontcombobox_focusinevent_callback = nullptr;
    QFontComboBox_FocusOutEvent_Callback qfontcombobox_focusoutevent_callback = nullptr;
    QFontComboBox_ChangeEvent_Callback qfontcombobox_changeevent_callback = nullptr;
    QFontComboBox_ResizeEvent_Callback qfontcombobox_resizeevent_callback = nullptr;
    QFontComboBox_PaintEvent_Callback qfontcombobox_paintevent_callback = nullptr;
    QFontComboBox_ShowEvent_Callback qfontcombobox_showevent_callback = nullptr;
    QFontComboBox_HideEvent_Callback qfontcombobox_hideevent_callback = nullptr;
    QFontComboBox_MousePressEvent_Callback qfontcombobox_mousepressevent_callback = nullptr;
    QFontComboBox_MouseReleaseEvent_Callback qfontcombobox_mousereleaseevent_callback = nullptr;
    QFontComboBox_KeyPressEvent_Callback qfontcombobox_keypressevent_callback = nullptr;
    QFontComboBox_KeyReleaseEvent_Callback qfontcombobox_keyreleaseevent_callback = nullptr;
    QFontComboBox_WheelEvent_Callback qfontcombobox_wheelevent_callback = nullptr;
    QFontComboBox_ContextMenuEvent_Callback qfontcombobox_contextmenuevent_callback = nullptr;
    QFontComboBox_InputMethodEvent_Callback qfontcombobox_inputmethodevent_callback = nullptr;
    QFontComboBox_InitStyleOption_Callback qfontcombobox_initstyleoption_callback = nullptr;
    QFontComboBox_DevType_Callback qfontcombobox_devtype_callback = nullptr;
    QFontComboBox_SetVisible_Callback qfontcombobox_setvisible_callback = nullptr;
    QFontComboBox_HeightForWidth_Callback qfontcombobox_heightforwidth_callback = nullptr;
    QFontComboBox_HasHeightForWidth_Callback qfontcombobox_hasheightforwidth_callback = nullptr;
    QFontComboBox_PaintEngine_Callback qfontcombobox_paintengine_callback = nullptr;
    QFontComboBox_MouseDoubleClickEvent_Callback qfontcombobox_mousedoubleclickevent_callback = nullptr;
    QFontComboBox_MouseMoveEvent_Callback qfontcombobox_mousemoveevent_callback = nullptr;
    QFontComboBox_EnterEvent_Callback qfontcombobox_enterevent_callback = nullptr;
    QFontComboBox_LeaveEvent_Callback qfontcombobox_leaveevent_callback = nullptr;
    QFontComboBox_MoveEvent_Callback qfontcombobox_moveevent_callback = nullptr;
    QFontComboBox_CloseEvent_Callback qfontcombobox_closeevent_callback = nullptr;
    QFontComboBox_TabletEvent_Callback qfontcombobox_tabletevent_callback = nullptr;
    QFontComboBox_ActionEvent_Callback qfontcombobox_actionevent_callback = nullptr;
    QFontComboBox_DragEnterEvent_Callback qfontcombobox_dragenterevent_callback = nullptr;
    QFontComboBox_DragMoveEvent_Callback qfontcombobox_dragmoveevent_callback = nullptr;
    QFontComboBox_DragLeaveEvent_Callback qfontcombobox_dragleaveevent_callback = nullptr;
    QFontComboBox_DropEvent_Callback qfontcombobox_dropevent_callback = nullptr;
    QFontComboBox_NativeEvent_Callback qfontcombobox_nativeevent_callback = nullptr;
    QFontComboBox_Metric_Callback qfontcombobox_metric_callback = nullptr;
    QFontComboBox_InitPainter_Callback qfontcombobox_initpainter_callback = nullptr;
    QFontComboBox_Redirected_Callback qfontcombobox_redirected_callback = nullptr;
    QFontComboBox_SharedPainter_Callback qfontcombobox_sharedpainter_callback = nullptr;
    QFontComboBox_FocusNextPrevChild_Callback qfontcombobox_focusnextprevchild_callback = nullptr;
    QFontComboBox_EventFilter_Callback qfontcombobox_eventfilter_callback = nullptr;
    QFontComboBox_TimerEvent_Callback qfontcombobox_timerevent_callback = nullptr;
    QFontComboBox_ChildEvent_Callback qfontcombobox_childevent_callback = nullptr;
    QFontComboBox_CustomEvent_Callback qfontcombobox_customevent_callback = nullptr;
    QFontComboBox_ConnectNotify_Callback qfontcombobox_connectnotify_callback = nullptr;
    QFontComboBox_DisconnectNotify_Callback qfontcombobox_disconnectnotify_callback = nullptr;
    QFontComboBox_UpdateMicroFocus_Callback qfontcombobox_updatemicrofocus_callback = nullptr;
    QFontComboBox_Create_Callback qfontcombobox_create_callback = nullptr;
    QFontComboBox_Destroy_Callback qfontcombobox_destroy_callback = nullptr;
    QFontComboBox_FocusNextChild_Callback qfontcombobox_focusnextchild_callback = nullptr;
    QFontComboBox_FocusPreviousChild_Callback qfontcombobox_focuspreviouschild_callback = nullptr;
    QFontComboBox_Sender_Callback qfontcombobox_sender_callback = nullptr;
    QFontComboBox_SenderSignalIndex_Callback qfontcombobox_sendersignalindex_callback = nullptr;
    QFontComboBox_Receivers_Callback qfontcombobox_receivers_callback = nullptr;
    QFontComboBox_IsSignalConnected_Callback qfontcombobox_issignalconnected_callback = nullptr;
    QFontComboBox_GetDecodedMetricF_Callback qfontcombobox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qfontcombobox_metacall_isbase = false;
    mutable bool qfontcombobox_sizehint_isbase = false;
    mutable bool qfontcombobox_event_isbase = false;
    mutable bool qfontcombobox_setmodel_isbase = false;
    mutable bool qfontcombobox_minimumsizehint_isbase = false;
    mutable bool qfontcombobox_showpopup_isbase = false;
    mutable bool qfontcombobox_hidepopup_isbase = false;
    mutable bool qfontcombobox_inputmethodquery_isbase = false;
    mutable bool qfontcombobox_focusinevent_isbase = false;
    mutable bool qfontcombobox_focusoutevent_isbase = false;
    mutable bool qfontcombobox_changeevent_isbase = false;
    mutable bool qfontcombobox_resizeevent_isbase = false;
    mutable bool qfontcombobox_paintevent_isbase = false;
    mutable bool qfontcombobox_showevent_isbase = false;
    mutable bool qfontcombobox_hideevent_isbase = false;
    mutable bool qfontcombobox_mousepressevent_isbase = false;
    mutable bool qfontcombobox_mousereleaseevent_isbase = false;
    mutable bool qfontcombobox_keypressevent_isbase = false;
    mutable bool qfontcombobox_keyreleaseevent_isbase = false;
    mutable bool qfontcombobox_wheelevent_isbase = false;
    mutable bool qfontcombobox_contextmenuevent_isbase = false;
    mutable bool qfontcombobox_inputmethodevent_isbase = false;
    mutable bool qfontcombobox_initstyleoption_isbase = false;
    mutable bool qfontcombobox_devtype_isbase = false;
    mutable bool qfontcombobox_setvisible_isbase = false;
    mutable bool qfontcombobox_heightforwidth_isbase = false;
    mutable bool qfontcombobox_hasheightforwidth_isbase = false;
    mutable bool qfontcombobox_paintengine_isbase = false;
    mutable bool qfontcombobox_mousedoubleclickevent_isbase = false;
    mutable bool qfontcombobox_mousemoveevent_isbase = false;
    mutable bool qfontcombobox_enterevent_isbase = false;
    mutable bool qfontcombobox_leaveevent_isbase = false;
    mutable bool qfontcombobox_moveevent_isbase = false;
    mutable bool qfontcombobox_closeevent_isbase = false;
    mutable bool qfontcombobox_tabletevent_isbase = false;
    mutable bool qfontcombobox_actionevent_isbase = false;
    mutable bool qfontcombobox_dragenterevent_isbase = false;
    mutable bool qfontcombobox_dragmoveevent_isbase = false;
    mutable bool qfontcombobox_dragleaveevent_isbase = false;
    mutable bool qfontcombobox_dropevent_isbase = false;
    mutable bool qfontcombobox_nativeevent_isbase = false;
    mutable bool qfontcombobox_metric_isbase = false;
    mutable bool qfontcombobox_initpainter_isbase = false;
    mutable bool qfontcombobox_redirected_isbase = false;
    mutable bool qfontcombobox_sharedpainter_isbase = false;
    mutable bool qfontcombobox_focusnextprevchild_isbase = false;
    mutable bool qfontcombobox_eventfilter_isbase = false;
    mutable bool qfontcombobox_timerevent_isbase = false;
    mutable bool qfontcombobox_childevent_isbase = false;
    mutable bool qfontcombobox_customevent_isbase = false;
    mutable bool qfontcombobox_connectnotify_isbase = false;
    mutable bool qfontcombobox_disconnectnotify_isbase = false;
    mutable bool qfontcombobox_updatemicrofocus_isbase = false;
    mutable bool qfontcombobox_create_isbase = false;
    mutable bool qfontcombobox_destroy_isbase = false;
    mutable bool qfontcombobox_focusnextchild_isbase = false;
    mutable bool qfontcombobox_focuspreviouschild_isbase = false;
    mutable bool qfontcombobox_sender_isbase = false;
    mutable bool qfontcombobox_sendersignalindex_isbase = false;
    mutable bool qfontcombobox_receivers_isbase = false;
    mutable bool qfontcombobox_issignalconnected_isbase = false;
    mutable bool qfontcombobox_getdecodedmetricf_isbase = false;

  public:
    VirtualQFontComboBox(QWidget* parent) : QFontComboBox(parent) {};
    VirtualQFontComboBox() : QFontComboBox() {};

    ~VirtualQFontComboBox() {
        qfontcombobox_metacall_callback = nullptr;
        qfontcombobox_sizehint_callback = nullptr;
        qfontcombobox_event_callback = nullptr;
        qfontcombobox_setmodel_callback = nullptr;
        qfontcombobox_minimumsizehint_callback = nullptr;
        qfontcombobox_showpopup_callback = nullptr;
        qfontcombobox_hidepopup_callback = nullptr;
        qfontcombobox_inputmethodquery_callback = nullptr;
        qfontcombobox_focusinevent_callback = nullptr;
        qfontcombobox_focusoutevent_callback = nullptr;
        qfontcombobox_changeevent_callback = nullptr;
        qfontcombobox_resizeevent_callback = nullptr;
        qfontcombobox_paintevent_callback = nullptr;
        qfontcombobox_showevent_callback = nullptr;
        qfontcombobox_hideevent_callback = nullptr;
        qfontcombobox_mousepressevent_callback = nullptr;
        qfontcombobox_mousereleaseevent_callback = nullptr;
        qfontcombobox_keypressevent_callback = nullptr;
        qfontcombobox_keyreleaseevent_callback = nullptr;
        qfontcombobox_wheelevent_callback = nullptr;
        qfontcombobox_contextmenuevent_callback = nullptr;
        qfontcombobox_inputmethodevent_callback = nullptr;
        qfontcombobox_initstyleoption_callback = nullptr;
        qfontcombobox_devtype_callback = nullptr;
        qfontcombobox_setvisible_callback = nullptr;
        qfontcombobox_heightforwidth_callback = nullptr;
        qfontcombobox_hasheightforwidth_callback = nullptr;
        qfontcombobox_paintengine_callback = nullptr;
        qfontcombobox_mousedoubleclickevent_callback = nullptr;
        qfontcombobox_mousemoveevent_callback = nullptr;
        qfontcombobox_enterevent_callback = nullptr;
        qfontcombobox_leaveevent_callback = nullptr;
        qfontcombobox_moveevent_callback = nullptr;
        qfontcombobox_closeevent_callback = nullptr;
        qfontcombobox_tabletevent_callback = nullptr;
        qfontcombobox_actionevent_callback = nullptr;
        qfontcombobox_dragenterevent_callback = nullptr;
        qfontcombobox_dragmoveevent_callback = nullptr;
        qfontcombobox_dragleaveevent_callback = nullptr;
        qfontcombobox_dropevent_callback = nullptr;
        qfontcombobox_nativeevent_callback = nullptr;
        qfontcombobox_metric_callback = nullptr;
        qfontcombobox_initpainter_callback = nullptr;
        qfontcombobox_redirected_callback = nullptr;
        qfontcombobox_sharedpainter_callback = nullptr;
        qfontcombobox_focusnextprevchild_callback = nullptr;
        qfontcombobox_eventfilter_callback = nullptr;
        qfontcombobox_timerevent_callback = nullptr;
        qfontcombobox_childevent_callback = nullptr;
        qfontcombobox_customevent_callback = nullptr;
        qfontcombobox_connectnotify_callback = nullptr;
        qfontcombobox_disconnectnotify_callback = nullptr;
        qfontcombobox_updatemicrofocus_callback = nullptr;
        qfontcombobox_create_callback = nullptr;
        qfontcombobox_destroy_callback = nullptr;
        qfontcombobox_focusnextchild_callback = nullptr;
        qfontcombobox_focuspreviouschild_callback = nullptr;
        qfontcombobox_sender_callback = nullptr;
        qfontcombobox_sendersignalindex_callback = nullptr;
        qfontcombobox_receivers_callback = nullptr;
        qfontcombobox_issignalconnected_callback = nullptr;
        qfontcombobox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQFontComboBox_Metacall_Callback(QFontComboBox_Metacall_Callback cb) { qfontcombobox_metacall_callback = cb; }
    inline void setQFontComboBox_SizeHint_Callback(QFontComboBox_SizeHint_Callback cb) { qfontcombobox_sizehint_callback = cb; }
    inline void setQFontComboBox_Event_Callback(QFontComboBox_Event_Callback cb) { qfontcombobox_event_callback = cb; }
    inline void setQFontComboBox_SetModel_Callback(QFontComboBox_SetModel_Callback cb) { qfontcombobox_setmodel_callback = cb; }
    inline void setQFontComboBox_MinimumSizeHint_Callback(QFontComboBox_MinimumSizeHint_Callback cb) { qfontcombobox_minimumsizehint_callback = cb; }
    inline void setQFontComboBox_ShowPopup_Callback(QFontComboBox_ShowPopup_Callback cb) { qfontcombobox_showpopup_callback = cb; }
    inline void setQFontComboBox_HidePopup_Callback(QFontComboBox_HidePopup_Callback cb) { qfontcombobox_hidepopup_callback = cb; }
    inline void setQFontComboBox_InputMethodQuery_Callback(QFontComboBox_InputMethodQuery_Callback cb) { qfontcombobox_inputmethodquery_callback = cb; }
    inline void setQFontComboBox_FocusInEvent_Callback(QFontComboBox_FocusInEvent_Callback cb) { qfontcombobox_focusinevent_callback = cb; }
    inline void setQFontComboBox_FocusOutEvent_Callback(QFontComboBox_FocusOutEvent_Callback cb) { qfontcombobox_focusoutevent_callback = cb; }
    inline void setQFontComboBox_ChangeEvent_Callback(QFontComboBox_ChangeEvent_Callback cb) { qfontcombobox_changeevent_callback = cb; }
    inline void setQFontComboBox_ResizeEvent_Callback(QFontComboBox_ResizeEvent_Callback cb) { qfontcombobox_resizeevent_callback = cb; }
    inline void setQFontComboBox_PaintEvent_Callback(QFontComboBox_PaintEvent_Callback cb) { qfontcombobox_paintevent_callback = cb; }
    inline void setQFontComboBox_ShowEvent_Callback(QFontComboBox_ShowEvent_Callback cb) { qfontcombobox_showevent_callback = cb; }
    inline void setQFontComboBox_HideEvent_Callback(QFontComboBox_HideEvent_Callback cb) { qfontcombobox_hideevent_callback = cb; }
    inline void setQFontComboBox_MousePressEvent_Callback(QFontComboBox_MousePressEvent_Callback cb) { qfontcombobox_mousepressevent_callback = cb; }
    inline void setQFontComboBox_MouseReleaseEvent_Callback(QFontComboBox_MouseReleaseEvent_Callback cb) { qfontcombobox_mousereleaseevent_callback = cb; }
    inline void setQFontComboBox_KeyPressEvent_Callback(QFontComboBox_KeyPressEvent_Callback cb) { qfontcombobox_keypressevent_callback = cb; }
    inline void setQFontComboBox_KeyReleaseEvent_Callback(QFontComboBox_KeyReleaseEvent_Callback cb) { qfontcombobox_keyreleaseevent_callback = cb; }
    inline void setQFontComboBox_WheelEvent_Callback(QFontComboBox_WheelEvent_Callback cb) { qfontcombobox_wheelevent_callback = cb; }
    inline void setQFontComboBox_ContextMenuEvent_Callback(QFontComboBox_ContextMenuEvent_Callback cb) { qfontcombobox_contextmenuevent_callback = cb; }
    inline void setQFontComboBox_InputMethodEvent_Callback(QFontComboBox_InputMethodEvent_Callback cb) { qfontcombobox_inputmethodevent_callback = cb; }
    inline void setQFontComboBox_InitStyleOption_Callback(QFontComboBox_InitStyleOption_Callback cb) { qfontcombobox_initstyleoption_callback = cb; }
    inline void setQFontComboBox_DevType_Callback(QFontComboBox_DevType_Callback cb) { qfontcombobox_devtype_callback = cb; }
    inline void setQFontComboBox_SetVisible_Callback(QFontComboBox_SetVisible_Callback cb) { qfontcombobox_setvisible_callback = cb; }
    inline void setQFontComboBox_HeightForWidth_Callback(QFontComboBox_HeightForWidth_Callback cb) { qfontcombobox_heightforwidth_callback = cb; }
    inline void setQFontComboBox_HasHeightForWidth_Callback(QFontComboBox_HasHeightForWidth_Callback cb) { qfontcombobox_hasheightforwidth_callback = cb; }
    inline void setQFontComboBox_PaintEngine_Callback(QFontComboBox_PaintEngine_Callback cb) { qfontcombobox_paintengine_callback = cb; }
    inline void setQFontComboBox_MouseDoubleClickEvent_Callback(QFontComboBox_MouseDoubleClickEvent_Callback cb) { qfontcombobox_mousedoubleclickevent_callback = cb; }
    inline void setQFontComboBox_MouseMoveEvent_Callback(QFontComboBox_MouseMoveEvent_Callback cb) { qfontcombobox_mousemoveevent_callback = cb; }
    inline void setQFontComboBox_EnterEvent_Callback(QFontComboBox_EnterEvent_Callback cb) { qfontcombobox_enterevent_callback = cb; }
    inline void setQFontComboBox_LeaveEvent_Callback(QFontComboBox_LeaveEvent_Callback cb) { qfontcombobox_leaveevent_callback = cb; }
    inline void setQFontComboBox_MoveEvent_Callback(QFontComboBox_MoveEvent_Callback cb) { qfontcombobox_moveevent_callback = cb; }
    inline void setQFontComboBox_CloseEvent_Callback(QFontComboBox_CloseEvent_Callback cb) { qfontcombobox_closeevent_callback = cb; }
    inline void setQFontComboBox_TabletEvent_Callback(QFontComboBox_TabletEvent_Callback cb) { qfontcombobox_tabletevent_callback = cb; }
    inline void setQFontComboBox_ActionEvent_Callback(QFontComboBox_ActionEvent_Callback cb) { qfontcombobox_actionevent_callback = cb; }
    inline void setQFontComboBox_DragEnterEvent_Callback(QFontComboBox_DragEnterEvent_Callback cb) { qfontcombobox_dragenterevent_callback = cb; }
    inline void setQFontComboBox_DragMoveEvent_Callback(QFontComboBox_DragMoveEvent_Callback cb) { qfontcombobox_dragmoveevent_callback = cb; }
    inline void setQFontComboBox_DragLeaveEvent_Callback(QFontComboBox_DragLeaveEvent_Callback cb) { qfontcombobox_dragleaveevent_callback = cb; }
    inline void setQFontComboBox_DropEvent_Callback(QFontComboBox_DropEvent_Callback cb) { qfontcombobox_dropevent_callback = cb; }
    inline void setQFontComboBox_NativeEvent_Callback(QFontComboBox_NativeEvent_Callback cb) { qfontcombobox_nativeevent_callback = cb; }
    inline void setQFontComboBox_Metric_Callback(QFontComboBox_Metric_Callback cb) { qfontcombobox_metric_callback = cb; }
    inline void setQFontComboBox_InitPainter_Callback(QFontComboBox_InitPainter_Callback cb) { qfontcombobox_initpainter_callback = cb; }
    inline void setQFontComboBox_Redirected_Callback(QFontComboBox_Redirected_Callback cb) { qfontcombobox_redirected_callback = cb; }
    inline void setQFontComboBox_SharedPainter_Callback(QFontComboBox_SharedPainter_Callback cb) { qfontcombobox_sharedpainter_callback = cb; }
    inline void setQFontComboBox_FocusNextPrevChild_Callback(QFontComboBox_FocusNextPrevChild_Callback cb) { qfontcombobox_focusnextprevchild_callback = cb; }
    inline void setQFontComboBox_EventFilter_Callback(QFontComboBox_EventFilter_Callback cb) { qfontcombobox_eventfilter_callback = cb; }
    inline void setQFontComboBox_TimerEvent_Callback(QFontComboBox_TimerEvent_Callback cb) { qfontcombobox_timerevent_callback = cb; }
    inline void setQFontComboBox_ChildEvent_Callback(QFontComboBox_ChildEvent_Callback cb) { qfontcombobox_childevent_callback = cb; }
    inline void setQFontComboBox_CustomEvent_Callback(QFontComboBox_CustomEvent_Callback cb) { qfontcombobox_customevent_callback = cb; }
    inline void setQFontComboBox_ConnectNotify_Callback(QFontComboBox_ConnectNotify_Callback cb) { qfontcombobox_connectnotify_callback = cb; }
    inline void setQFontComboBox_DisconnectNotify_Callback(QFontComboBox_DisconnectNotify_Callback cb) { qfontcombobox_disconnectnotify_callback = cb; }
    inline void setQFontComboBox_UpdateMicroFocus_Callback(QFontComboBox_UpdateMicroFocus_Callback cb) { qfontcombobox_updatemicrofocus_callback = cb; }
    inline void setQFontComboBox_Create_Callback(QFontComboBox_Create_Callback cb) { qfontcombobox_create_callback = cb; }
    inline void setQFontComboBox_Destroy_Callback(QFontComboBox_Destroy_Callback cb) { qfontcombobox_destroy_callback = cb; }
    inline void setQFontComboBox_FocusNextChild_Callback(QFontComboBox_FocusNextChild_Callback cb) { qfontcombobox_focusnextchild_callback = cb; }
    inline void setQFontComboBox_FocusPreviousChild_Callback(QFontComboBox_FocusPreviousChild_Callback cb) { qfontcombobox_focuspreviouschild_callback = cb; }
    inline void setQFontComboBox_Sender_Callback(QFontComboBox_Sender_Callback cb) { qfontcombobox_sender_callback = cb; }
    inline void setQFontComboBox_SenderSignalIndex_Callback(QFontComboBox_SenderSignalIndex_Callback cb) { qfontcombobox_sendersignalindex_callback = cb; }
    inline void setQFontComboBox_Receivers_Callback(QFontComboBox_Receivers_Callback cb) { qfontcombobox_receivers_callback = cb; }
    inline void setQFontComboBox_IsSignalConnected_Callback(QFontComboBox_IsSignalConnected_Callback cb) { qfontcombobox_issignalconnected_callback = cb; }
    inline void setQFontComboBox_GetDecodedMetricF_Callback(QFontComboBox_GetDecodedMetricF_Callback cb) { qfontcombobox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQFontComboBox_Metacall_IsBase(bool value) const { qfontcombobox_metacall_isbase = value; }
    inline void setQFontComboBox_SizeHint_IsBase(bool value) const { qfontcombobox_sizehint_isbase = value; }
    inline void setQFontComboBox_Event_IsBase(bool value) const { qfontcombobox_event_isbase = value; }
    inline void setQFontComboBox_SetModel_IsBase(bool value) const { qfontcombobox_setmodel_isbase = value; }
    inline void setQFontComboBox_MinimumSizeHint_IsBase(bool value) const { qfontcombobox_minimumsizehint_isbase = value; }
    inline void setQFontComboBox_ShowPopup_IsBase(bool value) const { qfontcombobox_showpopup_isbase = value; }
    inline void setQFontComboBox_HidePopup_IsBase(bool value) const { qfontcombobox_hidepopup_isbase = value; }
    inline void setQFontComboBox_InputMethodQuery_IsBase(bool value) const { qfontcombobox_inputmethodquery_isbase = value; }
    inline void setQFontComboBox_FocusInEvent_IsBase(bool value) const { qfontcombobox_focusinevent_isbase = value; }
    inline void setQFontComboBox_FocusOutEvent_IsBase(bool value) const { qfontcombobox_focusoutevent_isbase = value; }
    inline void setQFontComboBox_ChangeEvent_IsBase(bool value) const { qfontcombobox_changeevent_isbase = value; }
    inline void setQFontComboBox_ResizeEvent_IsBase(bool value) const { qfontcombobox_resizeevent_isbase = value; }
    inline void setQFontComboBox_PaintEvent_IsBase(bool value) const { qfontcombobox_paintevent_isbase = value; }
    inline void setQFontComboBox_ShowEvent_IsBase(bool value) const { qfontcombobox_showevent_isbase = value; }
    inline void setQFontComboBox_HideEvent_IsBase(bool value) const { qfontcombobox_hideevent_isbase = value; }
    inline void setQFontComboBox_MousePressEvent_IsBase(bool value) const { qfontcombobox_mousepressevent_isbase = value; }
    inline void setQFontComboBox_MouseReleaseEvent_IsBase(bool value) const { qfontcombobox_mousereleaseevent_isbase = value; }
    inline void setQFontComboBox_KeyPressEvent_IsBase(bool value) const { qfontcombobox_keypressevent_isbase = value; }
    inline void setQFontComboBox_KeyReleaseEvent_IsBase(bool value) const { qfontcombobox_keyreleaseevent_isbase = value; }
    inline void setQFontComboBox_WheelEvent_IsBase(bool value) const { qfontcombobox_wheelevent_isbase = value; }
    inline void setQFontComboBox_ContextMenuEvent_IsBase(bool value) const { qfontcombobox_contextmenuevent_isbase = value; }
    inline void setQFontComboBox_InputMethodEvent_IsBase(bool value) const { qfontcombobox_inputmethodevent_isbase = value; }
    inline void setQFontComboBox_InitStyleOption_IsBase(bool value) const { qfontcombobox_initstyleoption_isbase = value; }
    inline void setQFontComboBox_DevType_IsBase(bool value) const { qfontcombobox_devtype_isbase = value; }
    inline void setQFontComboBox_SetVisible_IsBase(bool value) const { qfontcombobox_setvisible_isbase = value; }
    inline void setQFontComboBox_HeightForWidth_IsBase(bool value) const { qfontcombobox_heightforwidth_isbase = value; }
    inline void setQFontComboBox_HasHeightForWidth_IsBase(bool value) const { qfontcombobox_hasheightforwidth_isbase = value; }
    inline void setQFontComboBox_PaintEngine_IsBase(bool value) const { qfontcombobox_paintengine_isbase = value; }
    inline void setQFontComboBox_MouseDoubleClickEvent_IsBase(bool value) const { qfontcombobox_mousedoubleclickevent_isbase = value; }
    inline void setQFontComboBox_MouseMoveEvent_IsBase(bool value) const { qfontcombobox_mousemoveevent_isbase = value; }
    inline void setQFontComboBox_EnterEvent_IsBase(bool value) const { qfontcombobox_enterevent_isbase = value; }
    inline void setQFontComboBox_LeaveEvent_IsBase(bool value) const { qfontcombobox_leaveevent_isbase = value; }
    inline void setQFontComboBox_MoveEvent_IsBase(bool value) const { qfontcombobox_moveevent_isbase = value; }
    inline void setQFontComboBox_CloseEvent_IsBase(bool value) const { qfontcombobox_closeevent_isbase = value; }
    inline void setQFontComboBox_TabletEvent_IsBase(bool value) const { qfontcombobox_tabletevent_isbase = value; }
    inline void setQFontComboBox_ActionEvent_IsBase(bool value) const { qfontcombobox_actionevent_isbase = value; }
    inline void setQFontComboBox_DragEnterEvent_IsBase(bool value) const { qfontcombobox_dragenterevent_isbase = value; }
    inline void setQFontComboBox_DragMoveEvent_IsBase(bool value) const { qfontcombobox_dragmoveevent_isbase = value; }
    inline void setQFontComboBox_DragLeaveEvent_IsBase(bool value) const { qfontcombobox_dragleaveevent_isbase = value; }
    inline void setQFontComboBox_DropEvent_IsBase(bool value) const { qfontcombobox_dropevent_isbase = value; }
    inline void setQFontComboBox_NativeEvent_IsBase(bool value) const { qfontcombobox_nativeevent_isbase = value; }
    inline void setQFontComboBox_Metric_IsBase(bool value) const { qfontcombobox_metric_isbase = value; }
    inline void setQFontComboBox_InitPainter_IsBase(bool value) const { qfontcombobox_initpainter_isbase = value; }
    inline void setQFontComboBox_Redirected_IsBase(bool value) const { qfontcombobox_redirected_isbase = value; }
    inline void setQFontComboBox_SharedPainter_IsBase(bool value) const { qfontcombobox_sharedpainter_isbase = value; }
    inline void setQFontComboBox_FocusNextPrevChild_IsBase(bool value) const { qfontcombobox_focusnextprevchild_isbase = value; }
    inline void setQFontComboBox_EventFilter_IsBase(bool value) const { qfontcombobox_eventfilter_isbase = value; }
    inline void setQFontComboBox_TimerEvent_IsBase(bool value) const { qfontcombobox_timerevent_isbase = value; }
    inline void setQFontComboBox_ChildEvent_IsBase(bool value) const { qfontcombobox_childevent_isbase = value; }
    inline void setQFontComboBox_CustomEvent_IsBase(bool value) const { qfontcombobox_customevent_isbase = value; }
    inline void setQFontComboBox_ConnectNotify_IsBase(bool value) const { qfontcombobox_connectnotify_isbase = value; }
    inline void setQFontComboBox_DisconnectNotify_IsBase(bool value) const { qfontcombobox_disconnectnotify_isbase = value; }
    inline void setQFontComboBox_UpdateMicroFocus_IsBase(bool value) const { qfontcombobox_updatemicrofocus_isbase = value; }
    inline void setQFontComboBox_Create_IsBase(bool value) const { qfontcombobox_create_isbase = value; }
    inline void setQFontComboBox_Destroy_IsBase(bool value) const { qfontcombobox_destroy_isbase = value; }
    inline void setQFontComboBox_FocusNextChild_IsBase(bool value) const { qfontcombobox_focusnextchild_isbase = value; }
    inline void setQFontComboBox_FocusPreviousChild_IsBase(bool value) const { qfontcombobox_focuspreviouschild_isbase = value; }
    inline void setQFontComboBox_Sender_IsBase(bool value) const { qfontcombobox_sender_isbase = value; }
    inline void setQFontComboBox_SenderSignalIndex_IsBase(bool value) const { qfontcombobox_sendersignalindex_isbase = value; }
    inline void setQFontComboBox_Receivers_IsBase(bool value) const { qfontcombobox_receivers_isbase = value; }
    inline void setQFontComboBox_IsSignalConnected_IsBase(bool value) const { qfontcombobox_issignalconnected_isbase = value; }
    inline void setQFontComboBox_GetDecodedMetricF_IsBase(bool value) const { qfontcombobox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfontcombobox_metacall_isbase) {
            qfontcombobox_metacall_isbase = false;
            return QFontComboBox::qt_metacall(param1, param2, param3);
        } else if (qfontcombobox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qfontcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QFontComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfontcombobox_sizehint_isbase) {
            qfontcombobox_sizehint_isbase = false;
            return QFontComboBox::sizeHint();
        } else if (qfontcombobox_sizehint_callback != nullptr) {
            QSize* callback_ret = qfontcombobox_sizehint_callback();
            return *callback_ret;
        } else {
            return QFontComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qfontcombobox_event_isbase) {
            qfontcombobox_event_isbase = false;
            return QFontComboBox::event(e);
        } else if (qfontcombobox_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qfontcombobox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFontComboBox::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qfontcombobox_setmodel_isbase) {
            qfontcombobox_setmodel_isbase = false;
            QFontComboBox::setModel(model);
        } else if (qfontcombobox_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            qfontcombobox_setmodel_callback(this, cbval1);
        } else {
            QFontComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfontcombobox_minimumsizehint_isbase) {
            qfontcombobox_minimumsizehint_isbase = false;
            return QFontComboBox::minimumSizeHint();
        } else if (qfontcombobox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qfontcombobox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QFontComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (qfontcombobox_showpopup_isbase) {
            qfontcombobox_showpopup_isbase = false;
            QFontComboBox::showPopup();
        } else if (qfontcombobox_showpopup_callback != nullptr) {
            qfontcombobox_showpopup_callback();
        } else {
            QFontComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (qfontcombobox_hidepopup_isbase) {
            qfontcombobox_hidepopup_isbase = false;
            QFontComboBox::hidePopup();
        } else if (qfontcombobox_hidepopup_callback != nullptr) {
            qfontcombobox_hidepopup_callback();
        } else {
            QFontComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfontcombobox_inputmethodquery_isbase) {
            qfontcombobox_inputmethodquery_isbase = false;
            return QFontComboBox::inputMethodQuery(param1);
        } else if (qfontcombobox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qfontcombobox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QFontComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qfontcombobox_focusinevent_isbase) {
            qfontcombobox_focusinevent_isbase = false;
            QFontComboBox::focusInEvent(e);
        } else if (qfontcombobox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            qfontcombobox_focusinevent_callback(this, cbval1);
        } else {
            QFontComboBox::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qfontcombobox_focusoutevent_isbase) {
            qfontcombobox_focusoutevent_isbase = false;
            QFontComboBox::focusOutEvent(e);
        } else if (qfontcombobox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            qfontcombobox_focusoutevent_callback(this, cbval1);
        } else {
            QFontComboBox::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qfontcombobox_changeevent_isbase) {
            qfontcombobox_changeevent_isbase = false;
            QFontComboBox::changeEvent(e);
        } else if (qfontcombobox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qfontcombobox_changeevent_callback(this, cbval1);
        } else {
            QFontComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qfontcombobox_resizeevent_isbase) {
            qfontcombobox_resizeevent_isbase = false;
            QFontComboBox::resizeEvent(e);
        } else if (qfontcombobox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            qfontcombobox_resizeevent_callback(this, cbval1);
        } else {
            QFontComboBox::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qfontcombobox_paintevent_isbase) {
            qfontcombobox_paintevent_isbase = false;
            QFontComboBox::paintEvent(e);
        } else if (qfontcombobox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            qfontcombobox_paintevent_callback(this, cbval1);
        } else {
            QFontComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (qfontcombobox_showevent_isbase) {
            qfontcombobox_showevent_isbase = false;
            QFontComboBox::showEvent(e);
        } else if (qfontcombobox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            qfontcombobox_showevent_callback(this, cbval1);
        } else {
            QFontComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (qfontcombobox_hideevent_isbase) {
            qfontcombobox_hideevent_isbase = false;
            QFontComboBox::hideEvent(e);
        } else if (qfontcombobox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            qfontcombobox_hideevent_callback(this, cbval1);
        } else {
            QFontComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qfontcombobox_mousepressevent_isbase) {
            qfontcombobox_mousepressevent_isbase = false;
            QFontComboBox::mousePressEvent(e);
        } else if (qfontcombobox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qfontcombobox_mousepressevent_callback(this, cbval1);
        } else {
            QFontComboBox::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qfontcombobox_mousereleaseevent_isbase) {
            qfontcombobox_mousereleaseevent_isbase = false;
            QFontComboBox::mouseReleaseEvent(e);
        } else if (qfontcombobox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qfontcombobox_mousereleaseevent_callback(this, cbval1);
        } else {
            QFontComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qfontcombobox_keypressevent_isbase) {
            qfontcombobox_keypressevent_isbase = false;
            QFontComboBox::keyPressEvent(e);
        } else if (qfontcombobox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qfontcombobox_keypressevent_callback(this, cbval1);
        } else {
            QFontComboBox::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qfontcombobox_keyreleaseevent_isbase) {
            qfontcombobox_keyreleaseevent_isbase = false;
            QFontComboBox::keyReleaseEvent(e);
        } else if (qfontcombobox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qfontcombobox_keyreleaseevent_callback(this, cbval1);
        } else {
            QFontComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qfontcombobox_wheelevent_isbase) {
            qfontcombobox_wheelevent_isbase = false;
            QFontComboBox::wheelEvent(e);
        } else if (qfontcombobox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            qfontcombobox_wheelevent_callback(this, cbval1);
        } else {
            QFontComboBox::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qfontcombobox_contextmenuevent_isbase) {
            qfontcombobox_contextmenuevent_isbase = false;
            QFontComboBox::contextMenuEvent(e);
        } else if (qfontcombobox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            qfontcombobox_contextmenuevent_callback(this, cbval1);
        } else {
            QFontComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfontcombobox_inputmethodevent_isbase) {
            qfontcombobox_inputmethodevent_isbase = false;
            QFontComboBox::inputMethodEvent(param1);
        } else if (qfontcombobox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qfontcombobox_inputmethodevent_callback(this, cbval1);
        } else {
            QFontComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (qfontcombobox_initstyleoption_isbase) {
            qfontcombobox_initstyleoption_isbase = false;
            QFontComboBox::initStyleOption(option);
        } else if (qfontcombobox_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            qfontcombobox_initstyleoption_callback(this, cbval1);
        } else {
            QFontComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfontcombobox_devtype_isbase) {
            qfontcombobox_devtype_isbase = false;
            return QFontComboBox::devType();
        } else if (qfontcombobox_devtype_callback != nullptr) {
            int callback_ret = qfontcombobox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QFontComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfontcombobox_setvisible_isbase) {
            qfontcombobox_setvisible_isbase = false;
            QFontComboBox::setVisible(visible);
        } else if (qfontcombobox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qfontcombobox_setvisible_callback(this, cbval1);
        } else {
            QFontComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfontcombobox_heightforwidth_isbase) {
            qfontcombobox_heightforwidth_isbase = false;
            return QFontComboBox::heightForWidth(param1);
        } else if (qfontcombobox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qfontcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFontComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfontcombobox_hasheightforwidth_isbase) {
            qfontcombobox_hasheightforwidth_isbase = false;
            return QFontComboBox::hasHeightForWidth();
        } else if (qfontcombobox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qfontcombobox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QFontComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfontcombobox_paintengine_isbase) {
            qfontcombobox_paintengine_isbase = false;
            return QFontComboBox::paintEngine();
        } else if (qfontcombobox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qfontcombobox_paintengine_callback();
            return callback_ret;
        } else {
            return QFontComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfontcombobox_mousedoubleclickevent_isbase) {
            qfontcombobox_mousedoubleclickevent_isbase = false;
            QFontComboBox::mouseDoubleClickEvent(event);
        } else if (qfontcombobox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qfontcombobox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QFontComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfontcombobox_mousemoveevent_isbase) {
            qfontcombobox_mousemoveevent_isbase = false;
            QFontComboBox::mouseMoveEvent(event);
        } else if (qfontcombobox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qfontcombobox_mousemoveevent_callback(this, cbval1);
        } else {
            QFontComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfontcombobox_enterevent_isbase) {
            qfontcombobox_enterevent_isbase = false;
            QFontComboBox::enterEvent(event);
        } else if (qfontcombobox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qfontcombobox_enterevent_callback(this, cbval1);
        } else {
            QFontComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfontcombobox_leaveevent_isbase) {
            qfontcombobox_leaveevent_isbase = false;
            QFontComboBox::leaveEvent(event);
        } else if (qfontcombobox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qfontcombobox_leaveevent_callback(this, cbval1);
        } else {
            QFontComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfontcombobox_moveevent_isbase) {
            qfontcombobox_moveevent_isbase = false;
            QFontComboBox::moveEvent(event);
        } else if (qfontcombobox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qfontcombobox_moveevent_callback(this, cbval1);
        } else {
            QFontComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qfontcombobox_closeevent_isbase) {
            qfontcombobox_closeevent_isbase = false;
            QFontComboBox::closeEvent(event);
        } else if (qfontcombobox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qfontcombobox_closeevent_callback(this, cbval1);
        } else {
            QFontComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfontcombobox_tabletevent_isbase) {
            qfontcombobox_tabletevent_isbase = false;
            QFontComboBox::tabletEvent(event);
        } else if (qfontcombobox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qfontcombobox_tabletevent_callback(this, cbval1);
        } else {
            QFontComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfontcombobox_actionevent_isbase) {
            qfontcombobox_actionevent_isbase = false;
            QFontComboBox::actionEvent(event);
        } else if (qfontcombobox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qfontcombobox_actionevent_callback(this, cbval1);
        } else {
            QFontComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfontcombobox_dragenterevent_isbase) {
            qfontcombobox_dragenterevent_isbase = false;
            QFontComboBox::dragEnterEvent(event);
        } else if (qfontcombobox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qfontcombobox_dragenterevent_callback(this, cbval1);
        } else {
            QFontComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfontcombobox_dragmoveevent_isbase) {
            qfontcombobox_dragmoveevent_isbase = false;
            QFontComboBox::dragMoveEvent(event);
        } else if (qfontcombobox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qfontcombobox_dragmoveevent_callback(this, cbval1);
        } else {
            QFontComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfontcombobox_dragleaveevent_isbase) {
            qfontcombobox_dragleaveevent_isbase = false;
            QFontComboBox::dragLeaveEvent(event);
        } else if (qfontcombobox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qfontcombobox_dragleaveevent_callback(this, cbval1);
        } else {
            QFontComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfontcombobox_dropevent_isbase) {
            qfontcombobox_dropevent_isbase = false;
            QFontComboBox::dropEvent(event);
        } else if (qfontcombobox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qfontcombobox_dropevent_callback(this, cbval1);
        } else {
            QFontComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfontcombobox_nativeevent_isbase) {
            qfontcombobox_nativeevent_isbase = false;
            return QFontComboBox::nativeEvent(eventType, message, result);
        } else if (qfontcombobox_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qfontcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QFontComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfontcombobox_metric_isbase) {
            qfontcombobox_metric_isbase = false;
            return QFontComboBox::metric(param1);
        } else if (qfontcombobox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qfontcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFontComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfontcombobox_initpainter_isbase) {
            qfontcombobox_initpainter_isbase = false;
            QFontComboBox::initPainter(painter);
        } else if (qfontcombobox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qfontcombobox_initpainter_callback(this, cbval1);
        } else {
            QFontComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfontcombobox_redirected_isbase) {
            qfontcombobox_redirected_isbase = false;
            return QFontComboBox::redirected(offset);
        } else if (qfontcombobox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qfontcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFontComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfontcombobox_sharedpainter_isbase) {
            qfontcombobox_sharedpainter_isbase = false;
            return QFontComboBox::sharedPainter();
        } else if (qfontcombobox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qfontcombobox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QFontComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfontcombobox_focusnextprevchild_isbase) {
            qfontcombobox_focusnextprevchild_isbase = false;
            return QFontComboBox::focusNextPrevChild(next);
        } else if (qfontcombobox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qfontcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFontComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfontcombobox_eventfilter_isbase) {
            qfontcombobox_eventfilter_isbase = false;
            return QFontComboBox::eventFilter(watched, event);
        } else if (qfontcombobox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qfontcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFontComboBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfontcombobox_timerevent_isbase) {
            qfontcombobox_timerevent_isbase = false;
            QFontComboBox::timerEvent(event);
        } else if (qfontcombobox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qfontcombobox_timerevent_callback(this, cbval1);
        } else {
            QFontComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfontcombobox_childevent_isbase) {
            qfontcombobox_childevent_isbase = false;
            QFontComboBox::childEvent(event);
        } else if (qfontcombobox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qfontcombobox_childevent_callback(this, cbval1);
        } else {
            QFontComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfontcombobox_customevent_isbase) {
            qfontcombobox_customevent_isbase = false;
            QFontComboBox::customEvent(event);
        } else if (qfontcombobox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qfontcombobox_customevent_callback(this, cbval1);
        } else {
            QFontComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfontcombobox_connectnotify_isbase) {
            qfontcombobox_connectnotify_isbase = false;
            QFontComboBox::connectNotify(signal);
        } else if (qfontcombobox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfontcombobox_connectnotify_callback(this, cbval1);
        } else {
            QFontComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfontcombobox_disconnectnotify_isbase) {
            qfontcombobox_disconnectnotify_isbase = false;
            QFontComboBox::disconnectNotify(signal);
        } else if (qfontcombobox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfontcombobox_disconnectnotify_callback(this, cbval1);
        } else {
            QFontComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qfontcombobox_updatemicrofocus_isbase) {
            qfontcombobox_updatemicrofocus_isbase = false;
            QFontComboBox::updateMicroFocus();
        } else if (qfontcombobox_updatemicrofocus_callback != nullptr) {
            qfontcombobox_updatemicrofocus_callback();
        } else {
            QFontComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qfontcombobox_create_isbase) {
            qfontcombobox_create_isbase = false;
            QFontComboBox::create();
        } else if (qfontcombobox_create_callback != nullptr) {
            qfontcombobox_create_callback();
        } else {
            QFontComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qfontcombobox_destroy_isbase) {
            qfontcombobox_destroy_isbase = false;
            QFontComboBox::destroy();
        } else if (qfontcombobox_destroy_callback != nullptr) {
            qfontcombobox_destroy_callback();
        } else {
            QFontComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qfontcombobox_focusnextchild_isbase) {
            qfontcombobox_focusnextchild_isbase = false;
            return QFontComboBox::focusNextChild();
        } else if (qfontcombobox_focusnextchild_callback != nullptr) {
            bool callback_ret = qfontcombobox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QFontComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qfontcombobox_focuspreviouschild_isbase) {
            qfontcombobox_focuspreviouschild_isbase = false;
            return QFontComboBox::focusPreviousChild();
        } else if (qfontcombobox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qfontcombobox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QFontComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfontcombobox_sender_isbase) {
            qfontcombobox_sender_isbase = false;
            return QFontComboBox::sender();
        } else if (qfontcombobox_sender_callback != nullptr) {
            QObject* callback_ret = qfontcombobox_sender_callback();
            return callback_ret;
        } else {
            return QFontComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfontcombobox_sendersignalindex_isbase) {
            qfontcombobox_sendersignalindex_isbase = false;
            return QFontComboBox::senderSignalIndex();
        } else if (qfontcombobox_sendersignalindex_callback != nullptr) {
            int callback_ret = qfontcombobox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QFontComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfontcombobox_receivers_isbase) {
            qfontcombobox_receivers_isbase = false;
            return QFontComboBox::receivers(signal);
        } else if (qfontcombobox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qfontcombobox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFontComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfontcombobox_issignalconnected_isbase) {
            qfontcombobox_issignalconnected_isbase = false;
            return QFontComboBox::isSignalConnected(signal);
        } else if (qfontcombobox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qfontcombobox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFontComboBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qfontcombobox_getdecodedmetricf_isbase) {
            qfontcombobox_getdecodedmetricf_isbase = false;
            return QFontComboBox::getDecodedMetricF(metricA, metricB);
        } else if (qfontcombobox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qfontcombobox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QFontComboBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QFontComboBox_Event(QFontComboBox* self, QEvent* e);
    friend bool QFontComboBox_QBaseEvent(QFontComboBox* self, QEvent* e);
    friend void QFontComboBox_FocusInEvent(QFontComboBox* self, QFocusEvent* e);
    friend void QFontComboBox_QBaseFocusInEvent(QFontComboBox* self, QFocusEvent* e);
    friend void QFontComboBox_FocusOutEvent(QFontComboBox* self, QFocusEvent* e);
    friend void QFontComboBox_QBaseFocusOutEvent(QFontComboBox* self, QFocusEvent* e);
    friend void QFontComboBox_ChangeEvent(QFontComboBox* self, QEvent* e);
    friend void QFontComboBox_QBaseChangeEvent(QFontComboBox* self, QEvent* e);
    friend void QFontComboBox_ResizeEvent(QFontComboBox* self, QResizeEvent* e);
    friend void QFontComboBox_QBaseResizeEvent(QFontComboBox* self, QResizeEvent* e);
    friend void QFontComboBox_PaintEvent(QFontComboBox* self, QPaintEvent* e);
    friend void QFontComboBox_QBasePaintEvent(QFontComboBox* self, QPaintEvent* e);
    friend void QFontComboBox_ShowEvent(QFontComboBox* self, QShowEvent* e);
    friend void QFontComboBox_QBaseShowEvent(QFontComboBox* self, QShowEvent* e);
    friend void QFontComboBox_HideEvent(QFontComboBox* self, QHideEvent* e);
    friend void QFontComboBox_QBaseHideEvent(QFontComboBox* self, QHideEvent* e);
    friend void QFontComboBox_MousePressEvent(QFontComboBox* self, QMouseEvent* e);
    friend void QFontComboBox_QBaseMousePressEvent(QFontComboBox* self, QMouseEvent* e);
    friend void QFontComboBox_MouseReleaseEvent(QFontComboBox* self, QMouseEvent* e);
    friend void QFontComboBox_QBaseMouseReleaseEvent(QFontComboBox* self, QMouseEvent* e);
    friend void QFontComboBox_KeyPressEvent(QFontComboBox* self, QKeyEvent* e);
    friend void QFontComboBox_QBaseKeyPressEvent(QFontComboBox* self, QKeyEvent* e);
    friend void QFontComboBox_KeyReleaseEvent(QFontComboBox* self, QKeyEvent* e);
    friend void QFontComboBox_QBaseKeyReleaseEvent(QFontComboBox* self, QKeyEvent* e);
    friend void QFontComboBox_WheelEvent(QFontComboBox* self, QWheelEvent* e);
    friend void QFontComboBox_QBaseWheelEvent(QFontComboBox* self, QWheelEvent* e);
    friend void QFontComboBox_ContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e);
    friend void QFontComboBox_QBaseContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e);
    friend void QFontComboBox_InputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1);
    friend void QFontComboBox_QBaseInputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1);
    friend void QFontComboBox_InitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option);
    friend void QFontComboBox_QBaseInitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option);
    friend void QFontComboBox_MouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event);
    friend void QFontComboBox_QBaseMouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event);
    friend void QFontComboBox_MouseMoveEvent(QFontComboBox* self, QMouseEvent* event);
    friend void QFontComboBox_QBaseMouseMoveEvent(QFontComboBox* self, QMouseEvent* event);
    friend void QFontComboBox_EnterEvent(QFontComboBox* self, QEnterEvent* event);
    friend void QFontComboBox_QBaseEnterEvent(QFontComboBox* self, QEnterEvent* event);
    friend void QFontComboBox_LeaveEvent(QFontComboBox* self, QEvent* event);
    friend void QFontComboBox_QBaseLeaveEvent(QFontComboBox* self, QEvent* event);
    friend void QFontComboBox_MoveEvent(QFontComboBox* self, QMoveEvent* event);
    friend void QFontComboBox_QBaseMoveEvent(QFontComboBox* self, QMoveEvent* event);
    friend void QFontComboBox_CloseEvent(QFontComboBox* self, QCloseEvent* event);
    friend void QFontComboBox_QBaseCloseEvent(QFontComboBox* self, QCloseEvent* event);
    friend void QFontComboBox_TabletEvent(QFontComboBox* self, QTabletEvent* event);
    friend void QFontComboBox_QBaseTabletEvent(QFontComboBox* self, QTabletEvent* event);
    friend void QFontComboBox_ActionEvent(QFontComboBox* self, QActionEvent* event);
    friend void QFontComboBox_QBaseActionEvent(QFontComboBox* self, QActionEvent* event);
    friend void QFontComboBox_DragEnterEvent(QFontComboBox* self, QDragEnterEvent* event);
    friend void QFontComboBox_QBaseDragEnterEvent(QFontComboBox* self, QDragEnterEvent* event);
    friend void QFontComboBox_DragMoveEvent(QFontComboBox* self, QDragMoveEvent* event);
    friend void QFontComboBox_QBaseDragMoveEvent(QFontComboBox* self, QDragMoveEvent* event);
    friend void QFontComboBox_DragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event);
    friend void QFontComboBox_QBaseDragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event);
    friend void QFontComboBox_DropEvent(QFontComboBox* self, QDropEvent* event);
    friend void QFontComboBox_QBaseDropEvent(QFontComboBox* self, QDropEvent* event);
    friend bool QFontComboBox_NativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QFontComboBox_QBaseNativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QFontComboBox_Metric(const QFontComboBox* self, int param1);
    friend int QFontComboBox_QBaseMetric(const QFontComboBox* self, int param1);
    friend void QFontComboBox_InitPainter(const QFontComboBox* self, QPainter* painter);
    friend void QFontComboBox_QBaseInitPainter(const QFontComboBox* self, QPainter* painter);
    friend QPaintDevice* QFontComboBox_Redirected(const QFontComboBox* self, QPoint* offset);
    friend QPaintDevice* QFontComboBox_QBaseRedirected(const QFontComboBox* self, QPoint* offset);
    friend QPainter* QFontComboBox_SharedPainter(const QFontComboBox* self);
    friend QPainter* QFontComboBox_QBaseSharedPainter(const QFontComboBox* self);
    friend bool QFontComboBox_FocusNextPrevChild(QFontComboBox* self, bool next);
    friend bool QFontComboBox_QBaseFocusNextPrevChild(QFontComboBox* self, bool next);
    friend void QFontComboBox_TimerEvent(QFontComboBox* self, QTimerEvent* event);
    friend void QFontComboBox_QBaseTimerEvent(QFontComboBox* self, QTimerEvent* event);
    friend void QFontComboBox_ChildEvent(QFontComboBox* self, QChildEvent* event);
    friend void QFontComboBox_QBaseChildEvent(QFontComboBox* self, QChildEvent* event);
    friend void QFontComboBox_CustomEvent(QFontComboBox* self, QEvent* event);
    friend void QFontComboBox_QBaseCustomEvent(QFontComboBox* self, QEvent* event);
    friend void QFontComboBox_ConnectNotify(QFontComboBox* self, const QMetaMethod* signal);
    friend void QFontComboBox_QBaseConnectNotify(QFontComboBox* self, const QMetaMethod* signal);
    friend void QFontComboBox_DisconnectNotify(QFontComboBox* self, const QMetaMethod* signal);
    friend void QFontComboBox_QBaseDisconnectNotify(QFontComboBox* self, const QMetaMethod* signal);
    friend void QFontComboBox_UpdateMicroFocus(QFontComboBox* self);
    friend void QFontComboBox_QBaseUpdateMicroFocus(QFontComboBox* self);
    friend void QFontComboBox_Create(QFontComboBox* self);
    friend void QFontComboBox_QBaseCreate(QFontComboBox* self);
    friend void QFontComboBox_Destroy(QFontComboBox* self);
    friend void QFontComboBox_QBaseDestroy(QFontComboBox* self);
    friend bool QFontComboBox_FocusNextChild(QFontComboBox* self);
    friend bool QFontComboBox_QBaseFocusNextChild(QFontComboBox* self);
    friend bool QFontComboBox_FocusPreviousChild(QFontComboBox* self);
    friend bool QFontComboBox_QBaseFocusPreviousChild(QFontComboBox* self);
    friend QObject* QFontComboBox_Sender(const QFontComboBox* self);
    friend QObject* QFontComboBox_QBaseSender(const QFontComboBox* self);
    friend int QFontComboBox_SenderSignalIndex(const QFontComboBox* self);
    friend int QFontComboBox_QBaseSenderSignalIndex(const QFontComboBox* self);
    friend int QFontComboBox_Receivers(const QFontComboBox* self, const char* signal);
    friend int QFontComboBox_QBaseReceivers(const QFontComboBox* self, const char* signal);
    friend bool QFontComboBox_IsSignalConnected(const QFontComboBox* self, const QMetaMethod* signal);
    friend bool QFontComboBox_QBaseIsSignalConnected(const QFontComboBox* self, const QMetaMethod* signal);
    friend double QFontComboBox_GetDecodedMetricF(const QFontComboBox* self, int metricA, int metricB);
    friend double QFontComboBox_QBaseGetDecodedMetricF(const QFontComboBox* self, int metricA, int metricB);
};

#endif
