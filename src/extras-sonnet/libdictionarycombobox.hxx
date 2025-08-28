#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALDICTIONARYCOMBOBOX_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALDICTIONARYCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::DictionaryComboBox so that we can call protected methods
class VirtualSonnetDictionaryComboBox final : public Sonnet::DictionaryComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetDictionaryComboBox = true;

    // Virtual class public types (including callbacks)
    using Sonnet__DictionaryComboBox_Metacall_Callback = int (*)(Sonnet__DictionaryComboBox*, int, int, void**);
    using Sonnet__DictionaryComboBox_SetModel_Callback = void (*)(Sonnet__DictionaryComboBox*, QAbstractItemModel*);
    using Sonnet__DictionaryComboBox_SizeHint_Callback = QSize* (*)();
    using Sonnet__DictionaryComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using Sonnet__DictionaryComboBox_ShowPopup_Callback = void (*)();
    using Sonnet__DictionaryComboBox_HidePopup_Callback = void (*)();
    using Sonnet__DictionaryComboBox_Event_Callback = bool (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__DictionaryComboBox*, int);
    using Sonnet__DictionaryComboBox_FocusInEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QFocusEvent*);
    using Sonnet__DictionaryComboBox_FocusOutEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QFocusEvent*);
    using Sonnet__DictionaryComboBox_ChangeEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_ResizeEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QResizeEvent*);
    using Sonnet__DictionaryComboBox_PaintEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QPaintEvent*);
    using Sonnet__DictionaryComboBox_ShowEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QShowEvent*);
    using Sonnet__DictionaryComboBox_HideEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QHideEvent*);
    using Sonnet__DictionaryComboBox_MousePressEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_MouseReleaseEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_KeyPressEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QKeyEvent*);
    using Sonnet__DictionaryComboBox_KeyReleaseEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QKeyEvent*);
    using Sonnet__DictionaryComboBox_WheelEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QWheelEvent*);
    using Sonnet__DictionaryComboBox_ContextMenuEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QContextMenuEvent*);
    using Sonnet__DictionaryComboBox_InputMethodEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QInputMethodEvent*);
    using Sonnet__DictionaryComboBox_InitStyleOption_Callback = void (*)(const Sonnet__DictionaryComboBox*, QStyleOptionComboBox*);
    using Sonnet__DictionaryComboBox_DevType_Callback = int (*)();
    using Sonnet__DictionaryComboBox_SetVisible_Callback = void (*)(Sonnet__DictionaryComboBox*, bool);
    using Sonnet__DictionaryComboBox_HeightForWidth_Callback = int (*)(const Sonnet__DictionaryComboBox*, int);
    using Sonnet__DictionaryComboBox_HasHeightForWidth_Callback = bool (*)();
    using Sonnet__DictionaryComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using Sonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_MouseMoveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMouseEvent*);
    using Sonnet__DictionaryComboBox_EnterEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEnterEvent*);
    using Sonnet__DictionaryComboBox_LeaveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_MoveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QMoveEvent*);
    using Sonnet__DictionaryComboBox_CloseEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QCloseEvent*);
    using Sonnet__DictionaryComboBox_TabletEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QTabletEvent*);
    using Sonnet__DictionaryComboBox_ActionEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QActionEvent*);
    using Sonnet__DictionaryComboBox_DragEnterEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDragEnterEvent*);
    using Sonnet__DictionaryComboBox_DragMoveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDragMoveEvent*);
    using Sonnet__DictionaryComboBox_DragLeaveEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDragLeaveEvent*);
    using Sonnet__DictionaryComboBox_DropEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QDropEvent*);
    using Sonnet__DictionaryComboBox_NativeEvent_Callback = bool (*)(Sonnet__DictionaryComboBox*, libqt_string, void*, intptr_t*);
    using Sonnet__DictionaryComboBox_Metric_Callback = int (*)(const Sonnet__DictionaryComboBox*, int);
    using Sonnet__DictionaryComboBox_InitPainter_Callback = void (*)(const Sonnet__DictionaryComboBox*, QPainter*);
    using Sonnet__DictionaryComboBox_Redirected_Callback = QPaintDevice* (*)(const Sonnet__DictionaryComboBox*, QPoint*);
    using Sonnet__DictionaryComboBox_SharedPainter_Callback = QPainter* (*)();
    using Sonnet__DictionaryComboBox_FocusNextPrevChild_Callback = bool (*)(Sonnet__DictionaryComboBox*, bool);
    using Sonnet__DictionaryComboBox_EventFilter_Callback = bool (*)(Sonnet__DictionaryComboBox*, QObject*, QEvent*);
    using Sonnet__DictionaryComboBox_TimerEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QTimerEvent*);
    using Sonnet__DictionaryComboBox_ChildEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QChildEvent*);
    using Sonnet__DictionaryComboBox_CustomEvent_Callback = void (*)(Sonnet__DictionaryComboBox*, QEvent*);
    using Sonnet__DictionaryComboBox_ConnectNotify_Callback = void (*)(Sonnet__DictionaryComboBox*, QMetaMethod*);
    using Sonnet__DictionaryComboBox_DisconnectNotify_Callback = void (*)(Sonnet__DictionaryComboBox*, QMetaMethod*);
    using Sonnet__DictionaryComboBox_UpdateMicroFocus_Callback = void (*)();
    using Sonnet__DictionaryComboBox_Create_Callback = void (*)();
    using Sonnet__DictionaryComboBox_Destroy_Callback = void (*)();
    using Sonnet__DictionaryComboBox_FocusNextChild_Callback = bool (*)();
    using Sonnet__DictionaryComboBox_FocusPreviousChild_Callback = bool (*)();
    using Sonnet__DictionaryComboBox_Sender_Callback = QObject* (*)();
    using Sonnet__DictionaryComboBox_SenderSignalIndex_Callback = int (*)();
    using Sonnet__DictionaryComboBox_Receivers_Callback = int (*)(const Sonnet__DictionaryComboBox*, const char*);
    using Sonnet__DictionaryComboBox_IsSignalConnected_Callback = bool (*)(const Sonnet__DictionaryComboBox*, QMetaMethod*);
    using Sonnet__DictionaryComboBox_GetDecodedMetricF_Callback = double (*)(const Sonnet__DictionaryComboBox*, int, int);

  protected:
    // Instance callback storage
    Sonnet__DictionaryComboBox_Metacall_Callback sonnet__dictionarycombobox_metacall_callback = nullptr;
    Sonnet__DictionaryComboBox_SetModel_Callback sonnet__dictionarycombobox_setmodel_callback = nullptr;
    Sonnet__DictionaryComboBox_SizeHint_Callback sonnet__dictionarycombobox_sizehint_callback = nullptr;
    Sonnet__DictionaryComboBox_MinimumSizeHint_Callback sonnet__dictionarycombobox_minimumsizehint_callback = nullptr;
    Sonnet__DictionaryComboBox_ShowPopup_Callback sonnet__dictionarycombobox_showpopup_callback = nullptr;
    Sonnet__DictionaryComboBox_HidePopup_Callback sonnet__dictionarycombobox_hidepopup_callback = nullptr;
    Sonnet__DictionaryComboBox_Event_Callback sonnet__dictionarycombobox_event_callback = nullptr;
    Sonnet__DictionaryComboBox_InputMethodQuery_Callback sonnet__dictionarycombobox_inputmethodquery_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusInEvent_Callback sonnet__dictionarycombobox_focusinevent_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusOutEvent_Callback sonnet__dictionarycombobox_focusoutevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ChangeEvent_Callback sonnet__dictionarycombobox_changeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ResizeEvent_Callback sonnet__dictionarycombobox_resizeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_PaintEvent_Callback sonnet__dictionarycombobox_paintevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ShowEvent_Callback sonnet__dictionarycombobox_showevent_callback = nullptr;
    Sonnet__DictionaryComboBox_HideEvent_Callback sonnet__dictionarycombobox_hideevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MousePressEvent_Callback sonnet__dictionarycombobox_mousepressevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MouseReleaseEvent_Callback sonnet__dictionarycombobox_mousereleaseevent_callback = nullptr;
    Sonnet__DictionaryComboBox_KeyPressEvent_Callback sonnet__dictionarycombobox_keypressevent_callback = nullptr;
    Sonnet__DictionaryComboBox_KeyReleaseEvent_Callback sonnet__dictionarycombobox_keyreleaseevent_callback = nullptr;
    Sonnet__DictionaryComboBox_WheelEvent_Callback sonnet__dictionarycombobox_wheelevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ContextMenuEvent_Callback sonnet__dictionarycombobox_contextmenuevent_callback = nullptr;
    Sonnet__DictionaryComboBox_InputMethodEvent_Callback sonnet__dictionarycombobox_inputmethodevent_callback = nullptr;
    Sonnet__DictionaryComboBox_InitStyleOption_Callback sonnet__dictionarycombobox_initstyleoption_callback = nullptr;
    Sonnet__DictionaryComboBox_DevType_Callback sonnet__dictionarycombobox_devtype_callback = nullptr;
    Sonnet__DictionaryComboBox_SetVisible_Callback sonnet__dictionarycombobox_setvisible_callback = nullptr;
    Sonnet__DictionaryComboBox_HeightForWidth_Callback sonnet__dictionarycombobox_heightforwidth_callback = nullptr;
    Sonnet__DictionaryComboBox_HasHeightForWidth_Callback sonnet__dictionarycombobox_hasheightforwidth_callback = nullptr;
    Sonnet__DictionaryComboBox_PaintEngine_Callback sonnet__dictionarycombobox_paintengine_callback = nullptr;
    Sonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback sonnet__dictionarycombobox_mousedoubleclickevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MouseMoveEvent_Callback sonnet__dictionarycombobox_mousemoveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_EnterEvent_Callback sonnet__dictionarycombobox_enterevent_callback = nullptr;
    Sonnet__DictionaryComboBox_LeaveEvent_Callback sonnet__dictionarycombobox_leaveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_MoveEvent_Callback sonnet__dictionarycombobox_moveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_CloseEvent_Callback sonnet__dictionarycombobox_closeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_TabletEvent_Callback sonnet__dictionarycombobox_tabletevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ActionEvent_Callback sonnet__dictionarycombobox_actionevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DragEnterEvent_Callback sonnet__dictionarycombobox_dragenterevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DragMoveEvent_Callback sonnet__dictionarycombobox_dragmoveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DragLeaveEvent_Callback sonnet__dictionarycombobox_dragleaveevent_callback = nullptr;
    Sonnet__DictionaryComboBox_DropEvent_Callback sonnet__dictionarycombobox_dropevent_callback = nullptr;
    Sonnet__DictionaryComboBox_NativeEvent_Callback sonnet__dictionarycombobox_nativeevent_callback = nullptr;
    Sonnet__DictionaryComboBox_Metric_Callback sonnet__dictionarycombobox_metric_callback = nullptr;
    Sonnet__DictionaryComboBox_InitPainter_Callback sonnet__dictionarycombobox_initpainter_callback = nullptr;
    Sonnet__DictionaryComboBox_Redirected_Callback sonnet__dictionarycombobox_redirected_callback = nullptr;
    Sonnet__DictionaryComboBox_SharedPainter_Callback sonnet__dictionarycombobox_sharedpainter_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusNextPrevChild_Callback sonnet__dictionarycombobox_focusnextprevchild_callback = nullptr;
    Sonnet__DictionaryComboBox_EventFilter_Callback sonnet__dictionarycombobox_eventfilter_callback = nullptr;
    Sonnet__DictionaryComboBox_TimerEvent_Callback sonnet__dictionarycombobox_timerevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ChildEvent_Callback sonnet__dictionarycombobox_childevent_callback = nullptr;
    Sonnet__DictionaryComboBox_CustomEvent_Callback sonnet__dictionarycombobox_customevent_callback = nullptr;
    Sonnet__DictionaryComboBox_ConnectNotify_Callback sonnet__dictionarycombobox_connectnotify_callback = nullptr;
    Sonnet__DictionaryComboBox_DisconnectNotify_Callback sonnet__dictionarycombobox_disconnectnotify_callback = nullptr;
    Sonnet__DictionaryComboBox_UpdateMicroFocus_Callback sonnet__dictionarycombobox_updatemicrofocus_callback = nullptr;
    Sonnet__DictionaryComboBox_Create_Callback sonnet__dictionarycombobox_create_callback = nullptr;
    Sonnet__DictionaryComboBox_Destroy_Callback sonnet__dictionarycombobox_destroy_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusNextChild_Callback sonnet__dictionarycombobox_focusnextchild_callback = nullptr;
    Sonnet__DictionaryComboBox_FocusPreviousChild_Callback sonnet__dictionarycombobox_focuspreviouschild_callback = nullptr;
    Sonnet__DictionaryComboBox_Sender_Callback sonnet__dictionarycombobox_sender_callback = nullptr;
    Sonnet__DictionaryComboBox_SenderSignalIndex_Callback sonnet__dictionarycombobox_sendersignalindex_callback = nullptr;
    Sonnet__DictionaryComboBox_Receivers_Callback sonnet__dictionarycombobox_receivers_callback = nullptr;
    Sonnet__DictionaryComboBox_IsSignalConnected_Callback sonnet__dictionarycombobox_issignalconnected_callback = nullptr;
    Sonnet__DictionaryComboBox_GetDecodedMetricF_Callback sonnet__dictionarycombobox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__dictionarycombobox_metacall_isbase = false;
    mutable bool sonnet__dictionarycombobox_setmodel_isbase = false;
    mutable bool sonnet__dictionarycombobox_sizehint_isbase = false;
    mutable bool sonnet__dictionarycombobox_minimumsizehint_isbase = false;
    mutable bool sonnet__dictionarycombobox_showpopup_isbase = false;
    mutable bool sonnet__dictionarycombobox_hidepopup_isbase = false;
    mutable bool sonnet__dictionarycombobox_event_isbase = false;
    mutable bool sonnet__dictionarycombobox_inputmethodquery_isbase = false;
    mutable bool sonnet__dictionarycombobox_focusinevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_focusoutevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_changeevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_resizeevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_paintevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_showevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_hideevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_mousepressevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_mousereleaseevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_keypressevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_keyreleaseevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_wheelevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_contextmenuevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_inputmethodevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_initstyleoption_isbase = false;
    mutable bool sonnet__dictionarycombobox_devtype_isbase = false;
    mutable bool sonnet__dictionarycombobox_setvisible_isbase = false;
    mutable bool sonnet__dictionarycombobox_heightforwidth_isbase = false;
    mutable bool sonnet__dictionarycombobox_hasheightforwidth_isbase = false;
    mutable bool sonnet__dictionarycombobox_paintengine_isbase = false;
    mutable bool sonnet__dictionarycombobox_mousedoubleclickevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_mousemoveevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_enterevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_leaveevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_moveevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_closeevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_tabletevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_actionevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_dragenterevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_dragmoveevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_dragleaveevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_dropevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_nativeevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_metric_isbase = false;
    mutable bool sonnet__dictionarycombobox_initpainter_isbase = false;
    mutable bool sonnet__dictionarycombobox_redirected_isbase = false;
    mutable bool sonnet__dictionarycombobox_sharedpainter_isbase = false;
    mutable bool sonnet__dictionarycombobox_focusnextprevchild_isbase = false;
    mutable bool sonnet__dictionarycombobox_eventfilter_isbase = false;
    mutable bool sonnet__dictionarycombobox_timerevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_childevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_customevent_isbase = false;
    mutable bool sonnet__dictionarycombobox_connectnotify_isbase = false;
    mutable bool sonnet__dictionarycombobox_disconnectnotify_isbase = false;
    mutable bool sonnet__dictionarycombobox_updatemicrofocus_isbase = false;
    mutable bool sonnet__dictionarycombobox_create_isbase = false;
    mutable bool sonnet__dictionarycombobox_destroy_isbase = false;
    mutable bool sonnet__dictionarycombobox_focusnextchild_isbase = false;
    mutable bool sonnet__dictionarycombobox_focuspreviouschild_isbase = false;
    mutable bool sonnet__dictionarycombobox_sender_isbase = false;
    mutable bool sonnet__dictionarycombobox_sendersignalindex_isbase = false;
    mutable bool sonnet__dictionarycombobox_receivers_isbase = false;
    mutable bool sonnet__dictionarycombobox_issignalconnected_isbase = false;
    mutable bool sonnet__dictionarycombobox_getdecodedmetricf_isbase = false;

  public:
    VirtualSonnetDictionaryComboBox(QWidget* parent) : Sonnet::DictionaryComboBox(parent) {};
    VirtualSonnetDictionaryComboBox() : Sonnet::DictionaryComboBox() {};

    ~VirtualSonnetDictionaryComboBox() {
        sonnet__dictionarycombobox_metacall_callback = nullptr;
        sonnet__dictionarycombobox_setmodel_callback = nullptr;
        sonnet__dictionarycombobox_sizehint_callback = nullptr;
        sonnet__dictionarycombobox_minimumsizehint_callback = nullptr;
        sonnet__dictionarycombobox_showpopup_callback = nullptr;
        sonnet__dictionarycombobox_hidepopup_callback = nullptr;
        sonnet__dictionarycombobox_event_callback = nullptr;
        sonnet__dictionarycombobox_inputmethodquery_callback = nullptr;
        sonnet__dictionarycombobox_focusinevent_callback = nullptr;
        sonnet__dictionarycombobox_focusoutevent_callback = nullptr;
        sonnet__dictionarycombobox_changeevent_callback = nullptr;
        sonnet__dictionarycombobox_resizeevent_callback = nullptr;
        sonnet__dictionarycombobox_paintevent_callback = nullptr;
        sonnet__dictionarycombobox_showevent_callback = nullptr;
        sonnet__dictionarycombobox_hideevent_callback = nullptr;
        sonnet__dictionarycombobox_mousepressevent_callback = nullptr;
        sonnet__dictionarycombobox_mousereleaseevent_callback = nullptr;
        sonnet__dictionarycombobox_keypressevent_callback = nullptr;
        sonnet__dictionarycombobox_keyreleaseevent_callback = nullptr;
        sonnet__dictionarycombobox_wheelevent_callback = nullptr;
        sonnet__dictionarycombobox_contextmenuevent_callback = nullptr;
        sonnet__dictionarycombobox_inputmethodevent_callback = nullptr;
        sonnet__dictionarycombobox_initstyleoption_callback = nullptr;
        sonnet__dictionarycombobox_devtype_callback = nullptr;
        sonnet__dictionarycombobox_setvisible_callback = nullptr;
        sonnet__dictionarycombobox_heightforwidth_callback = nullptr;
        sonnet__dictionarycombobox_hasheightforwidth_callback = nullptr;
        sonnet__dictionarycombobox_paintengine_callback = nullptr;
        sonnet__dictionarycombobox_mousedoubleclickevent_callback = nullptr;
        sonnet__dictionarycombobox_mousemoveevent_callback = nullptr;
        sonnet__dictionarycombobox_enterevent_callback = nullptr;
        sonnet__dictionarycombobox_leaveevent_callback = nullptr;
        sonnet__dictionarycombobox_moveevent_callback = nullptr;
        sonnet__dictionarycombobox_closeevent_callback = nullptr;
        sonnet__dictionarycombobox_tabletevent_callback = nullptr;
        sonnet__dictionarycombobox_actionevent_callback = nullptr;
        sonnet__dictionarycombobox_dragenterevent_callback = nullptr;
        sonnet__dictionarycombobox_dragmoveevent_callback = nullptr;
        sonnet__dictionarycombobox_dragleaveevent_callback = nullptr;
        sonnet__dictionarycombobox_dropevent_callback = nullptr;
        sonnet__dictionarycombobox_nativeevent_callback = nullptr;
        sonnet__dictionarycombobox_metric_callback = nullptr;
        sonnet__dictionarycombobox_initpainter_callback = nullptr;
        sonnet__dictionarycombobox_redirected_callback = nullptr;
        sonnet__dictionarycombobox_sharedpainter_callback = nullptr;
        sonnet__dictionarycombobox_focusnextprevchild_callback = nullptr;
        sonnet__dictionarycombobox_eventfilter_callback = nullptr;
        sonnet__dictionarycombobox_timerevent_callback = nullptr;
        sonnet__dictionarycombobox_childevent_callback = nullptr;
        sonnet__dictionarycombobox_customevent_callback = nullptr;
        sonnet__dictionarycombobox_connectnotify_callback = nullptr;
        sonnet__dictionarycombobox_disconnectnotify_callback = nullptr;
        sonnet__dictionarycombobox_updatemicrofocus_callback = nullptr;
        sonnet__dictionarycombobox_create_callback = nullptr;
        sonnet__dictionarycombobox_destroy_callback = nullptr;
        sonnet__dictionarycombobox_focusnextchild_callback = nullptr;
        sonnet__dictionarycombobox_focuspreviouschild_callback = nullptr;
        sonnet__dictionarycombobox_sender_callback = nullptr;
        sonnet__dictionarycombobox_sendersignalindex_callback = nullptr;
        sonnet__dictionarycombobox_receivers_callback = nullptr;
        sonnet__dictionarycombobox_issignalconnected_callback = nullptr;
        sonnet__dictionarycombobox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__DictionaryComboBox_Metacall_Callback(Sonnet__DictionaryComboBox_Metacall_Callback cb) { sonnet__dictionarycombobox_metacall_callback = cb; }
    inline void setSonnet__DictionaryComboBox_SetModel_Callback(Sonnet__DictionaryComboBox_SetModel_Callback cb) { sonnet__dictionarycombobox_setmodel_callback = cb; }
    inline void setSonnet__DictionaryComboBox_SizeHint_Callback(Sonnet__DictionaryComboBox_SizeHint_Callback cb) { sonnet__dictionarycombobox_sizehint_callback = cb; }
    inline void setSonnet__DictionaryComboBox_MinimumSizeHint_Callback(Sonnet__DictionaryComboBox_MinimumSizeHint_Callback cb) { sonnet__dictionarycombobox_minimumsizehint_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ShowPopup_Callback(Sonnet__DictionaryComboBox_ShowPopup_Callback cb) { sonnet__dictionarycombobox_showpopup_callback = cb; }
    inline void setSonnet__DictionaryComboBox_HidePopup_Callback(Sonnet__DictionaryComboBox_HidePopup_Callback cb) { sonnet__dictionarycombobox_hidepopup_callback = cb; }
    inline void setSonnet__DictionaryComboBox_Event_Callback(Sonnet__DictionaryComboBox_Event_Callback cb) { sonnet__dictionarycombobox_event_callback = cb; }
    inline void setSonnet__DictionaryComboBox_InputMethodQuery_Callback(Sonnet__DictionaryComboBox_InputMethodQuery_Callback cb) { sonnet__dictionarycombobox_inputmethodquery_callback = cb; }
    inline void setSonnet__DictionaryComboBox_FocusInEvent_Callback(Sonnet__DictionaryComboBox_FocusInEvent_Callback cb) { sonnet__dictionarycombobox_focusinevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_FocusOutEvent_Callback(Sonnet__DictionaryComboBox_FocusOutEvent_Callback cb) { sonnet__dictionarycombobox_focusoutevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ChangeEvent_Callback(Sonnet__DictionaryComboBox_ChangeEvent_Callback cb) { sonnet__dictionarycombobox_changeevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ResizeEvent_Callback(Sonnet__DictionaryComboBox_ResizeEvent_Callback cb) { sonnet__dictionarycombobox_resizeevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_PaintEvent_Callback(Sonnet__DictionaryComboBox_PaintEvent_Callback cb) { sonnet__dictionarycombobox_paintevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ShowEvent_Callback(Sonnet__DictionaryComboBox_ShowEvent_Callback cb) { sonnet__dictionarycombobox_showevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_HideEvent_Callback(Sonnet__DictionaryComboBox_HideEvent_Callback cb) { sonnet__dictionarycombobox_hideevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_MousePressEvent_Callback(Sonnet__DictionaryComboBox_MousePressEvent_Callback cb) { sonnet__dictionarycombobox_mousepressevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_MouseReleaseEvent_Callback(Sonnet__DictionaryComboBox_MouseReleaseEvent_Callback cb) { sonnet__dictionarycombobox_mousereleaseevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_KeyPressEvent_Callback(Sonnet__DictionaryComboBox_KeyPressEvent_Callback cb) { sonnet__dictionarycombobox_keypressevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_KeyReleaseEvent_Callback(Sonnet__DictionaryComboBox_KeyReleaseEvent_Callback cb) { sonnet__dictionarycombobox_keyreleaseevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_WheelEvent_Callback(Sonnet__DictionaryComboBox_WheelEvent_Callback cb) { sonnet__dictionarycombobox_wheelevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ContextMenuEvent_Callback(Sonnet__DictionaryComboBox_ContextMenuEvent_Callback cb) { sonnet__dictionarycombobox_contextmenuevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_InputMethodEvent_Callback(Sonnet__DictionaryComboBox_InputMethodEvent_Callback cb) { sonnet__dictionarycombobox_inputmethodevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_InitStyleOption_Callback(Sonnet__DictionaryComboBox_InitStyleOption_Callback cb) { sonnet__dictionarycombobox_initstyleoption_callback = cb; }
    inline void setSonnet__DictionaryComboBox_DevType_Callback(Sonnet__DictionaryComboBox_DevType_Callback cb) { sonnet__dictionarycombobox_devtype_callback = cb; }
    inline void setSonnet__DictionaryComboBox_SetVisible_Callback(Sonnet__DictionaryComboBox_SetVisible_Callback cb) { sonnet__dictionarycombobox_setvisible_callback = cb; }
    inline void setSonnet__DictionaryComboBox_HeightForWidth_Callback(Sonnet__DictionaryComboBox_HeightForWidth_Callback cb) { sonnet__dictionarycombobox_heightforwidth_callback = cb; }
    inline void setSonnet__DictionaryComboBox_HasHeightForWidth_Callback(Sonnet__DictionaryComboBox_HasHeightForWidth_Callback cb) { sonnet__dictionarycombobox_hasheightforwidth_callback = cb; }
    inline void setSonnet__DictionaryComboBox_PaintEngine_Callback(Sonnet__DictionaryComboBox_PaintEngine_Callback cb) { sonnet__dictionarycombobox_paintengine_callback = cb; }
    inline void setSonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback(Sonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback cb) { sonnet__dictionarycombobox_mousedoubleclickevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_MouseMoveEvent_Callback(Sonnet__DictionaryComboBox_MouseMoveEvent_Callback cb) { sonnet__dictionarycombobox_mousemoveevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_EnterEvent_Callback(Sonnet__DictionaryComboBox_EnterEvent_Callback cb) { sonnet__dictionarycombobox_enterevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_LeaveEvent_Callback(Sonnet__DictionaryComboBox_LeaveEvent_Callback cb) { sonnet__dictionarycombobox_leaveevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_MoveEvent_Callback(Sonnet__DictionaryComboBox_MoveEvent_Callback cb) { sonnet__dictionarycombobox_moveevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_CloseEvent_Callback(Sonnet__DictionaryComboBox_CloseEvent_Callback cb) { sonnet__dictionarycombobox_closeevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_TabletEvent_Callback(Sonnet__DictionaryComboBox_TabletEvent_Callback cb) { sonnet__dictionarycombobox_tabletevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ActionEvent_Callback(Sonnet__DictionaryComboBox_ActionEvent_Callback cb) { sonnet__dictionarycombobox_actionevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_DragEnterEvent_Callback(Sonnet__DictionaryComboBox_DragEnterEvent_Callback cb) { sonnet__dictionarycombobox_dragenterevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_DragMoveEvent_Callback(Sonnet__DictionaryComboBox_DragMoveEvent_Callback cb) { sonnet__dictionarycombobox_dragmoveevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_DragLeaveEvent_Callback(Sonnet__DictionaryComboBox_DragLeaveEvent_Callback cb) { sonnet__dictionarycombobox_dragleaveevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_DropEvent_Callback(Sonnet__DictionaryComboBox_DropEvent_Callback cb) { sonnet__dictionarycombobox_dropevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_NativeEvent_Callback(Sonnet__DictionaryComboBox_NativeEvent_Callback cb) { sonnet__dictionarycombobox_nativeevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_Metric_Callback(Sonnet__DictionaryComboBox_Metric_Callback cb) { sonnet__dictionarycombobox_metric_callback = cb; }
    inline void setSonnet__DictionaryComboBox_InitPainter_Callback(Sonnet__DictionaryComboBox_InitPainter_Callback cb) { sonnet__dictionarycombobox_initpainter_callback = cb; }
    inline void setSonnet__DictionaryComboBox_Redirected_Callback(Sonnet__DictionaryComboBox_Redirected_Callback cb) { sonnet__dictionarycombobox_redirected_callback = cb; }
    inline void setSonnet__DictionaryComboBox_SharedPainter_Callback(Sonnet__DictionaryComboBox_SharedPainter_Callback cb) { sonnet__dictionarycombobox_sharedpainter_callback = cb; }
    inline void setSonnet__DictionaryComboBox_FocusNextPrevChild_Callback(Sonnet__DictionaryComboBox_FocusNextPrevChild_Callback cb) { sonnet__dictionarycombobox_focusnextprevchild_callback = cb; }
    inline void setSonnet__DictionaryComboBox_EventFilter_Callback(Sonnet__DictionaryComboBox_EventFilter_Callback cb) { sonnet__dictionarycombobox_eventfilter_callback = cb; }
    inline void setSonnet__DictionaryComboBox_TimerEvent_Callback(Sonnet__DictionaryComboBox_TimerEvent_Callback cb) { sonnet__dictionarycombobox_timerevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ChildEvent_Callback(Sonnet__DictionaryComboBox_ChildEvent_Callback cb) { sonnet__dictionarycombobox_childevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_CustomEvent_Callback(Sonnet__DictionaryComboBox_CustomEvent_Callback cb) { sonnet__dictionarycombobox_customevent_callback = cb; }
    inline void setSonnet__DictionaryComboBox_ConnectNotify_Callback(Sonnet__DictionaryComboBox_ConnectNotify_Callback cb) { sonnet__dictionarycombobox_connectnotify_callback = cb; }
    inline void setSonnet__DictionaryComboBox_DisconnectNotify_Callback(Sonnet__DictionaryComboBox_DisconnectNotify_Callback cb) { sonnet__dictionarycombobox_disconnectnotify_callback = cb; }
    inline void setSonnet__DictionaryComboBox_UpdateMicroFocus_Callback(Sonnet__DictionaryComboBox_UpdateMicroFocus_Callback cb) { sonnet__dictionarycombobox_updatemicrofocus_callback = cb; }
    inline void setSonnet__DictionaryComboBox_Create_Callback(Sonnet__DictionaryComboBox_Create_Callback cb) { sonnet__dictionarycombobox_create_callback = cb; }
    inline void setSonnet__DictionaryComboBox_Destroy_Callback(Sonnet__DictionaryComboBox_Destroy_Callback cb) { sonnet__dictionarycombobox_destroy_callback = cb; }
    inline void setSonnet__DictionaryComboBox_FocusNextChild_Callback(Sonnet__DictionaryComboBox_FocusNextChild_Callback cb) { sonnet__dictionarycombobox_focusnextchild_callback = cb; }
    inline void setSonnet__DictionaryComboBox_FocusPreviousChild_Callback(Sonnet__DictionaryComboBox_FocusPreviousChild_Callback cb) { sonnet__dictionarycombobox_focuspreviouschild_callback = cb; }
    inline void setSonnet__DictionaryComboBox_Sender_Callback(Sonnet__DictionaryComboBox_Sender_Callback cb) { sonnet__dictionarycombobox_sender_callback = cb; }
    inline void setSonnet__DictionaryComboBox_SenderSignalIndex_Callback(Sonnet__DictionaryComboBox_SenderSignalIndex_Callback cb) { sonnet__dictionarycombobox_sendersignalindex_callback = cb; }
    inline void setSonnet__DictionaryComboBox_Receivers_Callback(Sonnet__DictionaryComboBox_Receivers_Callback cb) { sonnet__dictionarycombobox_receivers_callback = cb; }
    inline void setSonnet__DictionaryComboBox_IsSignalConnected_Callback(Sonnet__DictionaryComboBox_IsSignalConnected_Callback cb) { sonnet__dictionarycombobox_issignalconnected_callback = cb; }
    inline void setSonnet__DictionaryComboBox_GetDecodedMetricF_Callback(Sonnet__DictionaryComboBox_GetDecodedMetricF_Callback cb) { sonnet__dictionarycombobox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setSonnet__DictionaryComboBox_Metacall_IsBase(bool value) const { sonnet__dictionarycombobox_metacall_isbase = value; }
    inline void setSonnet__DictionaryComboBox_SetModel_IsBase(bool value) const { sonnet__dictionarycombobox_setmodel_isbase = value; }
    inline void setSonnet__DictionaryComboBox_SizeHint_IsBase(bool value) const { sonnet__dictionarycombobox_sizehint_isbase = value; }
    inline void setSonnet__DictionaryComboBox_MinimumSizeHint_IsBase(bool value) const { sonnet__dictionarycombobox_minimumsizehint_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ShowPopup_IsBase(bool value) const { sonnet__dictionarycombobox_showpopup_isbase = value; }
    inline void setSonnet__DictionaryComboBox_HidePopup_IsBase(bool value) const { sonnet__dictionarycombobox_hidepopup_isbase = value; }
    inline void setSonnet__DictionaryComboBox_Event_IsBase(bool value) const { sonnet__dictionarycombobox_event_isbase = value; }
    inline void setSonnet__DictionaryComboBox_InputMethodQuery_IsBase(bool value) const { sonnet__dictionarycombobox_inputmethodquery_isbase = value; }
    inline void setSonnet__DictionaryComboBox_FocusInEvent_IsBase(bool value) const { sonnet__dictionarycombobox_focusinevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_FocusOutEvent_IsBase(bool value) const { sonnet__dictionarycombobox_focusoutevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ChangeEvent_IsBase(bool value) const { sonnet__dictionarycombobox_changeevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ResizeEvent_IsBase(bool value) const { sonnet__dictionarycombobox_resizeevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_PaintEvent_IsBase(bool value) const { sonnet__dictionarycombobox_paintevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ShowEvent_IsBase(bool value) const { sonnet__dictionarycombobox_showevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_HideEvent_IsBase(bool value) const { sonnet__dictionarycombobox_hideevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_MousePressEvent_IsBase(bool value) const { sonnet__dictionarycombobox_mousepressevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_MouseReleaseEvent_IsBase(bool value) const { sonnet__dictionarycombobox_mousereleaseevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_KeyPressEvent_IsBase(bool value) const { sonnet__dictionarycombobox_keypressevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_KeyReleaseEvent_IsBase(bool value) const { sonnet__dictionarycombobox_keyreleaseevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_WheelEvent_IsBase(bool value) const { sonnet__dictionarycombobox_wheelevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ContextMenuEvent_IsBase(bool value) const { sonnet__dictionarycombobox_contextmenuevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_InputMethodEvent_IsBase(bool value) const { sonnet__dictionarycombobox_inputmethodevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_InitStyleOption_IsBase(bool value) const { sonnet__dictionarycombobox_initstyleoption_isbase = value; }
    inline void setSonnet__DictionaryComboBox_DevType_IsBase(bool value) const { sonnet__dictionarycombobox_devtype_isbase = value; }
    inline void setSonnet__DictionaryComboBox_SetVisible_IsBase(bool value) const { sonnet__dictionarycombobox_setvisible_isbase = value; }
    inline void setSonnet__DictionaryComboBox_HeightForWidth_IsBase(bool value) const { sonnet__dictionarycombobox_heightforwidth_isbase = value; }
    inline void setSonnet__DictionaryComboBox_HasHeightForWidth_IsBase(bool value) const { sonnet__dictionarycombobox_hasheightforwidth_isbase = value; }
    inline void setSonnet__DictionaryComboBox_PaintEngine_IsBase(bool value) const { sonnet__dictionarycombobox_paintengine_isbase = value; }
    inline void setSonnet__DictionaryComboBox_MouseDoubleClickEvent_IsBase(bool value) const { sonnet__dictionarycombobox_mousedoubleclickevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_MouseMoveEvent_IsBase(bool value) const { sonnet__dictionarycombobox_mousemoveevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_EnterEvent_IsBase(bool value) const { sonnet__dictionarycombobox_enterevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_LeaveEvent_IsBase(bool value) const { sonnet__dictionarycombobox_leaveevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_MoveEvent_IsBase(bool value) const { sonnet__dictionarycombobox_moveevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_CloseEvent_IsBase(bool value) const { sonnet__dictionarycombobox_closeevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_TabletEvent_IsBase(bool value) const { sonnet__dictionarycombobox_tabletevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ActionEvent_IsBase(bool value) const { sonnet__dictionarycombobox_actionevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_DragEnterEvent_IsBase(bool value) const { sonnet__dictionarycombobox_dragenterevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_DragMoveEvent_IsBase(bool value) const { sonnet__dictionarycombobox_dragmoveevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_DragLeaveEvent_IsBase(bool value) const { sonnet__dictionarycombobox_dragleaveevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_DropEvent_IsBase(bool value) const { sonnet__dictionarycombobox_dropevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_NativeEvent_IsBase(bool value) const { sonnet__dictionarycombobox_nativeevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_Metric_IsBase(bool value) const { sonnet__dictionarycombobox_metric_isbase = value; }
    inline void setSonnet__DictionaryComboBox_InitPainter_IsBase(bool value) const { sonnet__dictionarycombobox_initpainter_isbase = value; }
    inline void setSonnet__DictionaryComboBox_Redirected_IsBase(bool value) const { sonnet__dictionarycombobox_redirected_isbase = value; }
    inline void setSonnet__DictionaryComboBox_SharedPainter_IsBase(bool value) const { sonnet__dictionarycombobox_sharedpainter_isbase = value; }
    inline void setSonnet__DictionaryComboBox_FocusNextPrevChild_IsBase(bool value) const { sonnet__dictionarycombobox_focusnextprevchild_isbase = value; }
    inline void setSonnet__DictionaryComboBox_EventFilter_IsBase(bool value) const { sonnet__dictionarycombobox_eventfilter_isbase = value; }
    inline void setSonnet__DictionaryComboBox_TimerEvent_IsBase(bool value) const { sonnet__dictionarycombobox_timerevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ChildEvent_IsBase(bool value) const { sonnet__dictionarycombobox_childevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_CustomEvent_IsBase(bool value) const { sonnet__dictionarycombobox_customevent_isbase = value; }
    inline void setSonnet__DictionaryComboBox_ConnectNotify_IsBase(bool value) const { sonnet__dictionarycombobox_connectnotify_isbase = value; }
    inline void setSonnet__DictionaryComboBox_DisconnectNotify_IsBase(bool value) const { sonnet__dictionarycombobox_disconnectnotify_isbase = value; }
    inline void setSonnet__DictionaryComboBox_UpdateMicroFocus_IsBase(bool value) const { sonnet__dictionarycombobox_updatemicrofocus_isbase = value; }
    inline void setSonnet__DictionaryComboBox_Create_IsBase(bool value) const { sonnet__dictionarycombobox_create_isbase = value; }
    inline void setSonnet__DictionaryComboBox_Destroy_IsBase(bool value) const { sonnet__dictionarycombobox_destroy_isbase = value; }
    inline void setSonnet__DictionaryComboBox_FocusNextChild_IsBase(bool value) const { sonnet__dictionarycombobox_focusnextchild_isbase = value; }
    inline void setSonnet__DictionaryComboBox_FocusPreviousChild_IsBase(bool value) const { sonnet__dictionarycombobox_focuspreviouschild_isbase = value; }
    inline void setSonnet__DictionaryComboBox_Sender_IsBase(bool value) const { sonnet__dictionarycombobox_sender_isbase = value; }
    inline void setSonnet__DictionaryComboBox_SenderSignalIndex_IsBase(bool value) const { sonnet__dictionarycombobox_sendersignalindex_isbase = value; }
    inline void setSonnet__DictionaryComboBox_Receivers_IsBase(bool value) const { sonnet__dictionarycombobox_receivers_isbase = value; }
    inline void setSonnet__DictionaryComboBox_IsSignalConnected_IsBase(bool value) const { sonnet__dictionarycombobox_issignalconnected_isbase = value; }
    inline void setSonnet__DictionaryComboBox_GetDecodedMetricF_IsBase(bool value) const { sonnet__dictionarycombobox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__dictionarycombobox_metacall_isbase) {
            sonnet__dictionarycombobox_metacall_isbase = false;
            return Sonnet__DictionaryComboBox::qt_metacall(param1, param2, param3);
        } else if (sonnet__dictionarycombobox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__dictionarycombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__DictionaryComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (sonnet__dictionarycombobox_setmodel_isbase) {
            sonnet__dictionarycombobox_setmodel_isbase = false;
            Sonnet__DictionaryComboBox::setModel(model);
        } else if (sonnet__dictionarycombobox_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            sonnet__dictionarycombobox_setmodel_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__dictionarycombobox_sizehint_isbase) {
            sonnet__dictionarycombobox_sizehint_isbase = false;
            return Sonnet__DictionaryComboBox::sizeHint();
        } else if (sonnet__dictionarycombobox_sizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__dictionarycombobox_sizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__dictionarycombobox_minimumsizehint_isbase) {
            sonnet__dictionarycombobox_minimumsizehint_isbase = false;
            return Sonnet__DictionaryComboBox::minimumSizeHint();
        } else if (sonnet__dictionarycombobox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__dictionarycombobox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (sonnet__dictionarycombobox_showpopup_isbase) {
            sonnet__dictionarycombobox_showpopup_isbase = false;
            Sonnet__DictionaryComboBox::showPopup();
        } else if (sonnet__dictionarycombobox_showpopup_callback != nullptr) {
            sonnet__dictionarycombobox_showpopup_callback();
        } else {
            Sonnet__DictionaryComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (sonnet__dictionarycombobox_hidepopup_isbase) {
            sonnet__dictionarycombobox_hidepopup_isbase = false;
            Sonnet__DictionaryComboBox::hidePopup();
        } else if (sonnet__dictionarycombobox_hidepopup_callback != nullptr) {
            sonnet__dictionarycombobox_hidepopup_callback();
        } else {
            Sonnet__DictionaryComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__dictionarycombobox_event_isbase) {
            sonnet__dictionarycombobox_event_isbase = false;
            return Sonnet__DictionaryComboBox::event(event);
        } else if (sonnet__dictionarycombobox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__dictionarycombobox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__dictionarycombobox_inputmethodquery_isbase) {
            sonnet__dictionarycombobox_inputmethodquery_isbase = false;
            return Sonnet__DictionaryComboBox::inputMethodQuery(param1);
        } else if (sonnet__dictionarycombobox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = sonnet__dictionarycombobox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (sonnet__dictionarycombobox_focusinevent_isbase) {
            sonnet__dictionarycombobox_focusinevent_isbase = false;
            Sonnet__DictionaryComboBox::focusInEvent(e);
        } else if (sonnet__dictionarycombobox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            sonnet__dictionarycombobox_focusinevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (sonnet__dictionarycombobox_focusoutevent_isbase) {
            sonnet__dictionarycombobox_focusoutevent_isbase = false;
            Sonnet__DictionaryComboBox::focusOutEvent(e);
        } else if (sonnet__dictionarycombobox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            sonnet__dictionarycombobox_focusoutevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (sonnet__dictionarycombobox_changeevent_isbase) {
            sonnet__dictionarycombobox_changeevent_isbase = false;
            Sonnet__DictionaryComboBox::changeEvent(e);
        } else if (sonnet__dictionarycombobox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            sonnet__dictionarycombobox_changeevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (sonnet__dictionarycombobox_resizeevent_isbase) {
            sonnet__dictionarycombobox_resizeevent_isbase = false;
            Sonnet__DictionaryComboBox::resizeEvent(e);
        } else if (sonnet__dictionarycombobox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            sonnet__dictionarycombobox_resizeevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (sonnet__dictionarycombobox_paintevent_isbase) {
            sonnet__dictionarycombobox_paintevent_isbase = false;
            Sonnet__DictionaryComboBox::paintEvent(e);
        } else if (sonnet__dictionarycombobox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            sonnet__dictionarycombobox_paintevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (sonnet__dictionarycombobox_showevent_isbase) {
            sonnet__dictionarycombobox_showevent_isbase = false;
            Sonnet__DictionaryComboBox::showEvent(e);
        } else if (sonnet__dictionarycombobox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            sonnet__dictionarycombobox_showevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (sonnet__dictionarycombobox_hideevent_isbase) {
            sonnet__dictionarycombobox_hideevent_isbase = false;
            Sonnet__DictionaryComboBox::hideEvent(e);
        } else if (sonnet__dictionarycombobox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            sonnet__dictionarycombobox_hideevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (sonnet__dictionarycombobox_mousepressevent_isbase) {
            sonnet__dictionarycombobox_mousepressevent_isbase = false;
            Sonnet__DictionaryComboBox::mousePressEvent(e);
        } else if (sonnet__dictionarycombobox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            sonnet__dictionarycombobox_mousepressevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (sonnet__dictionarycombobox_mousereleaseevent_isbase) {
            sonnet__dictionarycombobox_mousereleaseevent_isbase = false;
            Sonnet__DictionaryComboBox::mouseReleaseEvent(e);
        } else if (sonnet__dictionarycombobox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            sonnet__dictionarycombobox_mousereleaseevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (sonnet__dictionarycombobox_keypressevent_isbase) {
            sonnet__dictionarycombobox_keypressevent_isbase = false;
            Sonnet__DictionaryComboBox::keyPressEvent(e);
        } else if (sonnet__dictionarycombobox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            sonnet__dictionarycombobox_keypressevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (sonnet__dictionarycombobox_keyreleaseevent_isbase) {
            sonnet__dictionarycombobox_keyreleaseevent_isbase = false;
            Sonnet__DictionaryComboBox::keyReleaseEvent(e);
        } else if (sonnet__dictionarycombobox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            sonnet__dictionarycombobox_keyreleaseevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (sonnet__dictionarycombobox_wheelevent_isbase) {
            sonnet__dictionarycombobox_wheelevent_isbase = false;
            Sonnet__DictionaryComboBox::wheelEvent(e);
        } else if (sonnet__dictionarycombobox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            sonnet__dictionarycombobox_wheelevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (sonnet__dictionarycombobox_contextmenuevent_isbase) {
            sonnet__dictionarycombobox_contextmenuevent_isbase = false;
            Sonnet__DictionaryComboBox::contextMenuEvent(e);
        } else if (sonnet__dictionarycombobox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            sonnet__dictionarycombobox_contextmenuevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__dictionarycombobox_inputmethodevent_isbase) {
            sonnet__dictionarycombobox_inputmethodevent_isbase = false;
            Sonnet__DictionaryComboBox::inputMethodEvent(param1);
        } else if (sonnet__dictionarycombobox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            sonnet__dictionarycombobox_inputmethodevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (sonnet__dictionarycombobox_initstyleoption_isbase) {
            sonnet__dictionarycombobox_initstyleoption_isbase = false;
            Sonnet__DictionaryComboBox::initStyleOption(option);
        } else if (sonnet__dictionarycombobox_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            sonnet__dictionarycombobox_initstyleoption_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__dictionarycombobox_devtype_isbase) {
            sonnet__dictionarycombobox_devtype_isbase = false;
            return Sonnet__DictionaryComboBox::devType();
        } else if (sonnet__dictionarycombobox_devtype_callback != nullptr) {
            int callback_ret = sonnet__dictionarycombobox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__DictionaryComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__dictionarycombobox_setvisible_isbase) {
            sonnet__dictionarycombobox_setvisible_isbase = false;
            Sonnet__DictionaryComboBox::setVisible(visible);
        } else if (sonnet__dictionarycombobox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            sonnet__dictionarycombobox_setvisible_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__dictionarycombobox_heightforwidth_isbase) {
            sonnet__dictionarycombobox_heightforwidth_isbase = false;
            return Sonnet__DictionaryComboBox::heightForWidth(param1);
        } else if (sonnet__dictionarycombobox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = sonnet__dictionarycombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__DictionaryComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__dictionarycombobox_hasheightforwidth_isbase) {
            sonnet__dictionarycombobox_hasheightforwidth_isbase = false;
            return Sonnet__DictionaryComboBox::hasHeightForWidth();
        } else if (sonnet__dictionarycombobox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = sonnet__dictionarycombobox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__dictionarycombobox_paintengine_isbase) {
            sonnet__dictionarycombobox_paintengine_isbase = false;
            return Sonnet__DictionaryComboBox::paintEngine();
        } else if (sonnet__dictionarycombobox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = sonnet__dictionarycombobox_paintengine_callback();
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__dictionarycombobox_mousedoubleclickevent_isbase) {
            sonnet__dictionarycombobox_mousedoubleclickevent_isbase = false;
            Sonnet__DictionaryComboBox::mouseDoubleClickEvent(event);
        } else if (sonnet__dictionarycombobox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__dictionarycombobox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__dictionarycombobox_mousemoveevent_isbase) {
            sonnet__dictionarycombobox_mousemoveevent_isbase = false;
            Sonnet__DictionaryComboBox::mouseMoveEvent(event);
        } else if (sonnet__dictionarycombobox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__dictionarycombobox_mousemoveevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__dictionarycombobox_enterevent_isbase) {
            sonnet__dictionarycombobox_enterevent_isbase = false;
            Sonnet__DictionaryComboBox::enterEvent(event);
        } else if (sonnet__dictionarycombobox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            sonnet__dictionarycombobox_enterevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__dictionarycombobox_leaveevent_isbase) {
            sonnet__dictionarycombobox_leaveevent_isbase = false;
            Sonnet__DictionaryComboBox::leaveEvent(event);
        } else if (sonnet__dictionarycombobox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__dictionarycombobox_leaveevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__dictionarycombobox_moveevent_isbase) {
            sonnet__dictionarycombobox_moveevent_isbase = false;
            Sonnet__DictionaryComboBox::moveEvent(event);
        } else if (sonnet__dictionarycombobox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            sonnet__dictionarycombobox_moveevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (sonnet__dictionarycombobox_closeevent_isbase) {
            sonnet__dictionarycombobox_closeevent_isbase = false;
            Sonnet__DictionaryComboBox::closeEvent(event);
        } else if (sonnet__dictionarycombobox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            sonnet__dictionarycombobox_closeevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__dictionarycombobox_tabletevent_isbase) {
            sonnet__dictionarycombobox_tabletevent_isbase = false;
            Sonnet__DictionaryComboBox::tabletEvent(event);
        } else if (sonnet__dictionarycombobox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            sonnet__dictionarycombobox_tabletevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__dictionarycombobox_actionevent_isbase) {
            sonnet__dictionarycombobox_actionevent_isbase = false;
            Sonnet__DictionaryComboBox::actionEvent(event);
        } else if (sonnet__dictionarycombobox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            sonnet__dictionarycombobox_actionevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__dictionarycombobox_dragenterevent_isbase) {
            sonnet__dictionarycombobox_dragenterevent_isbase = false;
            Sonnet__DictionaryComboBox::dragEnterEvent(event);
        } else if (sonnet__dictionarycombobox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            sonnet__dictionarycombobox_dragenterevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__dictionarycombobox_dragmoveevent_isbase) {
            sonnet__dictionarycombobox_dragmoveevent_isbase = false;
            Sonnet__DictionaryComboBox::dragMoveEvent(event);
        } else if (sonnet__dictionarycombobox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            sonnet__dictionarycombobox_dragmoveevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__dictionarycombobox_dragleaveevent_isbase) {
            sonnet__dictionarycombobox_dragleaveevent_isbase = false;
            Sonnet__DictionaryComboBox::dragLeaveEvent(event);
        } else if (sonnet__dictionarycombobox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            sonnet__dictionarycombobox_dragleaveevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__dictionarycombobox_dropevent_isbase) {
            sonnet__dictionarycombobox_dropevent_isbase = false;
            Sonnet__DictionaryComboBox::dropEvent(event);
        } else if (sonnet__dictionarycombobox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            sonnet__dictionarycombobox_dropevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__dictionarycombobox_nativeevent_isbase) {
            sonnet__dictionarycombobox_nativeevent_isbase = false;
            return Sonnet__DictionaryComboBox::nativeEvent(eventType, message, result);
        } else if (sonnet__dictionarycombobox_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc(eventType_str.len + 1));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = sonnet__dictionarycombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__dictionarycombobox_metric_isbase) {
            sonnet__dictionarycombobox_metric_isbase = false;
            return Sonnet__DictionaryComboBox::metric(param1);
        } else if (sonnet__dictionarycombobox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = sonnet__dictionarycombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__DictionaryComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__dictionarycombobox_initpainter_isbase) {
            sonnet__dictionarycombobox_initpainter_isbase = false;
            Sonnet__DictionaryComboBox::initPainter(painter);
        } else if (sonnet__dictionarycombobox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            sonnet__dictionarycombobox_initpainter_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__dictionarycombobox_redirected_isbase) {
            sonnet__dictionarycombobox_redirected_isbase = false;
            return Sonnet__DictionaryComboBox::redirected(offset);
        } else if (sonnet__dictionarycombobox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = sonnet__dictionarycombobox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__dictionarycombobox_sharedpainter_isbase) {
            sonnet__dictionarycombobox_sharedpainter_isbase = false;
            return Sonnet__DictionaryComboBox::sharedPainter();
        } else if (sonnet__dictionarycombobox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = sonnet__dictionarycombobox_sharedpainter_callback();
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__dictionarycombobox_focusnextprevchild_isbase) {
            sonnet__dictionarycombobox_focusnextprevchild_isbase = false;
            return Sonnet__DictionaryComboBox::focusNextPrevChild(next);
        } else if (sonnet__dictionarycombobox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = sonnet__dictionarycombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__dictionarycombobox_eventfilter_isbase) {
            sonnet__dictionarycombobox_eventfilter_isbase = false;
            return Sonnet__DictionaryComboBox::eventFilter(watched, event);
        } else if (sonnet__dictionarycombobox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sonnet__dictionarycombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__dictionarycombobox_timerevent_isbase) {
            sonnet__dictionarycombobox_timerevent_isbase = false;
            Sonnet__DictionaryComboBox::timerEvent(event);
        } else if (sonnet__dictionarycombobox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__dictionarycombobox_timerevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__dictionarycombobox_childevent_isbase) {
            sonnet__dictionarycombobox_childevent_isbase = false;
            Sonnet__DictionaryComboBox::childEvent(event);
        } else if (sonnet__dictionarycombobox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__dictionarycombobox_childevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__dictionarycombobox_customevent_isbase) {
            sonnet__dictionarycombobox_customevent_isbase = false;
            Sonnet__DictionaryComboBox::customEvent(event);
        } else if (sonnet__dictionarycombobox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__dictionarycombobox_customevent_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__dictionarycombobox_connectnotify_isbase) {
            sonnet__dictionarycombobox_connectnotify_isbase = false;
            Sonnet__DictionaryComboBox::connectNotify(signal);
        } else if (sonnet__dictionarycombobox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__dictionarycombobox_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__dictionarycombobox_disconnectnotify_isbase) {
            sonnet__dictionarycombobox_disconnectnotify_isbase = false;
            Sonnet__DictionaryComboBox::disconnectNotify(signal);
        } else if (sonnet__dictionarycombobox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__dictionarycombobox_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__DictionaryComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (sonnet__dictionarycombobox_updatemicrofocus_isbase) {
            sonnet__dictionarycombobox_updatemicrofocus_isbase = false;
            Sonnet__DictionaryComboBox::updateMicroFocus();
        } else if (sonnet__dictionarycombobox_updatemicrofocus_callback != nullptr) {
            sonnet__dictionarycombobox_updatemicrofocus_callback();
        } else {
            Sonnet__DictionaryComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (sonnet__dictionarycombobox_create_isbase) {
            sonnet__dictionarycombobox_create_isbase = false;
            Sonnet__DictionaryComboBox::create();
        } else if (sonnet__dictionarycombobox_create_callback != nullptr) {
            sonnet__dictionarycombobox_create_callback();
        } else {
            Sonnet__DictionaryComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (sonnet__dictionarycombobox_destroy_isbase) {
            sonnet__dictionarycombobox_destroy_isbase = false;
            Sonnet__DictionaryComboBox::destroy();
        } else if (sonnet__dictionarycombobox_destroy_callback != nullptr) {
            sonnet__dictionarycombobox_destroy_callback();
        } else {
            Sonnet__DictionaryComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (sonnet__dictionarycombobox_focusnextchild_isbase) {
            sonnet__dictionarycombobox_focusnextchild_isbase = false;
            return Sonnet__DictionaryComboBox::focusNextChild();
        } else if (sonnet__dictionarycombobox_focusnextchild_callback != nullptr) {
            bool callback_ret = sonnet__dictionarycombobox_focusnextchild_callback();
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (sonnet__dictionarycombobox_focuspreviouschild_isbase) {
            sonnet__dictionarycombobox_focuspreviouschild_isbase = false;
            return Sonnet__DictionaryComboBox::focusPreviousChild();
        } else if (sonnet__dictionarycombobox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = sonnet__dictionarycombobox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__dictionarycombobox_sender_isbase) {
            sonnet__dictionarycombobox_sender_isbase = false;
            return Sonnet__DictionaryComboBox::sender();
        } else if (sonnet__dictionarycombobox_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__dictionarycombobox_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__dictionarycombobox_sendersignalindex_isbase) {
            sonnet__dictionarycombobox_sendersignalindex_isbase = false;
            return Sonnet__DictionaryComboBox::senderSignalIndex();
        } else if (sonnet__dictionarycombobox_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__dictionarycombobox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__DictionaryComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__dictionarycombobox_receivers_isbase) {
            sonnet__dictionarycombobox_receivers_isbase = false;
            return Sonnet__DictionaryComboBox::receivers(signal);
        } else if (sonnet__dictionarycombobox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__dictionarycombobox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__DictionaryComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__dictionarycombobox_issignalconnected_isbase) {
            sonnet__dictionarycombobox_issignalconnected_isbase = false;
            return Sonnet__DictionaryComboBox::isSignalConnected(signal);
        } else if (sonnet__dictionarycombobox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__dictionarycombobox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__DictionaryComboBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (sonnet__dictionarycombobox_getdecodedmetricf_isbase) {
            sonnet__dictionarycombobox_getdecodedmetricf_isbase = false;
            return Sonnet__DictionaryComboBox::getDecodedMetricF(metricA, metricB);
        } else if (sonnet__dictionarycombobox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = sonnet__dictionarycombobox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return Sonnet__DictionaryComboBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void Sonnet__DictionaryComboBox_FocusInEvent(Sonnet::DictionaryComboBox* self, QFocusEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseFocusInEvent(Sonnet::DictionaryComboBox* self, QFocusEvent* e);
    friend void Sonnet__DictionaryComboBox_FocusOutEvent(Sonnet::DictionaryComboBox* self, QFocusEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseFocusOutEvent(Sonnet::DictionaryComboBox* self, QFocusEvent* e);
    friend void Sonnet__DictionaryComboBox_ChangeEvent(Sonnet::DictionaryComboBox* self, QEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseChangeEvent(Sonnet::DictionaryComboBox* self, QEvent* e);
    friend void Sonnet__DictionaryComboBox_ResizeEvent(Sonnet::DictionaryComboBox* self, QResizeEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseResizeEvent(Sonnet::DictionaryComboBox* self, QResizeEvent* e);
    friend void Sonnet__DictionaryComboBox_PaintEvent(Sonnet::DictionaryComboBox* self, QPaintEvent* e);
    friend void Sonnet__DictionaryComboBox_QBasePaintEvent(Sonnet::DictionaryComboBox* self, QPaintEvent* e);
    friend void Sonnet__DictionaryComboBox_ShowEvent(Sonnet::DictionaryComboBox* self, QShowEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseShowEvent(Sonnet::DictionaryComboBox* self, QShowEvent* e);
    friend void Sonnet__DictionaryComboBox_HideEvent(Sonnet::DictionaryComboBox* self, QHideEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseHideEvent(Sonnet::DictionaryComboBox* self, QHideEvent* e);
    friend void Sonnet__DictionaryComboBox_MousePressEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseMousePressEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* e);
    friend void Sonnet__DictionaryComboBox_MouseReleaseEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseMouseReleaseEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* e);
    friend void Sonnet__DictionaryComboBox_KeyPressEvent(Sonnet::DictionaryComboBox* self, QKeyEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseKeyPressEvent(Sonnet::DictionaryComboBox* self, QKeyEvent* e);
    friend void Sonnet__DictionaryComboBox_KeyReleaseEvent(Sonnet::DictionaryComboBox* self, QKeyEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseKeyReleaseEvent(Sonnet::DictionaryComboBox* self, QKeyEvent* e);
    friend void Sonnet__DictionaryComboBox_WheelEvent(Sonnet::DictionaryComboBox* self, QWheelEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseWheelEvent(Sonnet::DictionaryComboBox* self, QWheelEvent* e);
    friend void Sonnet__DictionaryComboBox_ContextMenuEvent(Sonnet::DictionaryComboBox* self, QContextMenuEvent* e);
    friend void Sonnet__DictionaryComboBox_QBaseContextMenuEvent(Sonnet::DictionaryComboBox* self, QContextMenuEvent* e);
    friend void Sonnet__DictionaryComboBox_InputMethodEvent(Sonnet::DictionaryComboBox* self, QInputMethodEvent* param1);
    friend void Sonnet__DictionaryComboBox_QBaseInputMethodEvent(Sonnet::DictionaryComboBox* self, QInputMethodEvent* param1);
    friend void Sonnet__DictionaryComboBox_InitStyleOption(const Sonnet::DictionaryComboBox* self, QStyleOptionComboBox* option);
    friend void Sonnet__DictionaryComboBox_QBaseInitStyleOption(const Sonnet::DictionaryComboBox* self, QStyleOptionComboBox* option);
    friend void Sonnet__DictionaryComboBox_MouseDoubleClickEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseMouseDoubleClickEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* event);
    friend void Sonnet__DictionaryComboBox_MouseMoveEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseMouseMoveEvent(Sonnet::DictionaryComboBox* self, QMouseEvent* event);
    friend void Sonnet__DictionaryComboBox_EnterEvent(Sonnet::DictionaryComboBox* self, QEnterEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseEnterEvent(Sonnet::DictionaryComboBox* self, QEnterEvent* event);
    friend void Sonnet__DictionaryComboBox_LeaveEvent(Sonnet::DictionaryComboBox* self, QEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseLeaveEvent(Sonnet::DictionaryComboBox* self, QEvent* event);
    friend void Sonnet__DictionaryComboBox_MoveEvent(Sonnet::DictionaryComboBox* self, QMoveEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseMoveEvent(Sonnet::DictionaryComboBox* self, QMoveEvent* event);
    friend void Sonnet__DictionaryComboBox_CloseEvent(Sonnet::DictionaryComboBox* self, QCloseEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseCloseEvent(Sonnet::DictionaryComboBox* self, QCloseEvent* event);
    friend void Sonnet__DictionaryComboBox_TabletEvent(Sonnet::DictionaryComboBox* self, QTabletEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseTabletEvent(Sonnet::DictionaryComboBox* self, QTabletEvent* event);
    friend void Sonnet__DictionaryComboBox_ActionEvent(Sonnet::DictionaryComboBox* self, QActionEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseActionEvent(Sonnet::DictionaryComboBox* self, QActionEvent* event);
    friend void Sonnet__DictionaryComboBox_DragEnterEvent(Sonnet::DictionaryComboBox* self, QDragEnterEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseDragEnterEvent(Sonnet::DictionaryComboBox* self, QDragEnterEvent* event);
    friend void Sonnet__DictionaryComboBox_DragMoveEvent(Sonnet::DictionaryComboBox* self, QDragMoveEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseDragMoveEvent(Sonnet::DictionaryComboBox* self, QDragMoveEvent* event);
    friend void Sonnet__DictionaryComboBox_DragLeaveEvent(Sonnet::DictionaryComboBox* self, QDragLeaveEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseDragLeaveEvent(Sonnet::DictionaryComboBox* self, QDragLeaveEvent* event);
    friend void Sonnet__DictionaryComboBox_DropEvent(Sonnet::DictionaryComboBox* self, QDropEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseDropEvent(Sonnet::DictionaryComboBox* self, QDropEvent* event);
    friend bool Sonnet__DictionaryComboBox_NativeEvent(Sonnet::DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool Sonnet__DictionaryComboBox_QBaseNativeEvent(Sonnet::DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int Sonnet__DictionaryComboBox_Metric(const Sonnet::DictionaryComboBox* self, int param1);
    friend int Sonnet__DictionaryComboBox_QBaseMetric(const Sonnet::DictionaryComboBox* self, int param1);
    friend void Sonnet__DictionaryComboBox_InitPainter(const Sonnet::DictionaryComboBox* self, QPainter* painter);
    friend void Sonnet__DictionaryComboBox_QBaseInitPainter(const Sonnet::DictionaryComboBox* self, QPainter* painter);
    friend QPaintDevice* Sonnet__DictionaryComboBox_Redirected(const Sonnet::DictionaryComboBox* self, QPoint* offset);
    friend QPaintDevice* Sonnet__DictionaryComboBox_QBaseRedirected(const Sonnet::DictionaryComboBox* self, QPoint* offset);
    friend QPainter* Sonnet__DictionaryComboBox_SharedPainter(const Sonnet::DictionaryComboBox* self);
    friend QPainter* Sonnet__DictionaryComboBox_QBaseSharedPainter(const Sonnet::DictionaryComboBox* self);
    friend bool Sonnet__DictionaryComboBox_FocusNextPrevChild(Sonnet::DictionaryComboBox* self, bool next);
    friend bool Sonnet__DictionaryComboBox_QBaseFocusNextPrevChild(Sonnet::DictionaryComboBox* self, bool next);
    friend void Sonnet__DictionaryComboBox_TimerEvent(Sonnet::DictionaryComboBox* self, QTimerEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseTimerEvent(Sonnet::DictionaryComboBox* self, QTimerEvent* event);
    friend void Sonnet__DictionaryComboBox_ChildEvent(Sonnet::DictionaryComboBox* self, QChildEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseChildEvent(Sonnet::DictionaryComboBox* self, QChildEvent* event);
    friend void Sonnet__DictionaryComboBox_CustomEvent(Sonnet::DictionaryComboBox* self, QEvent* event);
    friend void Sonnet__DictionaryComboBox_QBaseCustomEvent(Sonnet::DictionaryComboBox* self, QEvent* event);
    friend void Sonnet__DictionaryComboBox_ConnectNotify(Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
    friend void Sonnet__DictionaryComboBox_QBaseConnectNotify(Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
    friend void Sonnet__DictionaryComboBox_DisconnectNotify(Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
    friend void Sonnet__DictionaryComboBox_QBaseDisconnectNotify(Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
    friend void Sonnet__DictionaryComboBox_UpdateMicroFocus(Sonnet::DictionaryComboBox* self);
    friend void Sonnet__DictionaryComboBox_QBaseUpdateMicroFocus(Sonnet::DictionaryComboBox* self);
    friend void Sonnet__DictionaryComboBox_Create(Sonnet::DictionaryComboBox* self);
    friend void Sonnet__DictionaryComboBox_QBaseCreate(Sonnet::DictionaryComboBox* self);
    friend void Sonnet__DictionaryComboBox_Destroy(Sonnet::DictionaryComboBox* self);
    friend void Sonnet__DictionaryComboBox_QBaseDestroy(Sonnet::DictionaryComboBox* self);
    friend bool Sonnet__DictionaryComboBox_FocusNextChild(Sonnet::DictionaryComboBox* self);
    friend bool Sonnet__DictionaryComboBox_QBaseFocusNextChild(Sonnet::DictionaryComboBox* self);
    friend bool Sonnet__DictionaryComboBox_FocusPreviousChild(Sonnet::DictionaryComboBox* self);
    friend bool Sonnet__DictionaryComboBox_QBaseFocusPreviousChild(Sonnet::DictionaryComboBox* self);
    friend QObject* Sonnet__DictionaryComboBox_Sender(const Sonnet::DictionaryComboBox* self);
    friend QObject* Sonnet__DictionaryComboBox_QBaseSender(const Sonnet::DictionaryComboBox* self);
    friend int Sonnet__DictionaryComboBox_SenderSignalIndex(const Sonnet::DictionaryComboBox* self);
    friend int Sonnet__DictionaryComboBox_QBaseSenderSignalIndex(const Sonnet::DictionaryComboBox* self);
    friend int Sonnet__DictionaryComboBox_Receivers(const Sonnet::DictionaryComboBox* self, const char* signal);
    friend int Sonnet__DictionaryComboBox_QBaseReceivers(const Sonnet::DictionaryComboBox* self, const char* signal);
    friend bool Sonnet__DictionaryComboBox_IsSignalConnected(const Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
    friend bool Sonnet__DictionaryComboBox_QBaseIsSignalConnected(const Sonnet::DictionaryComboBox* self, const QMetaMethod* signal);
    friend double Sonnet__DictionaryComboBox_GetDecodedMetricF(const Sonnet::DictionaryComboBox* self, int metricA, int metricB);
    friend double Sonnet__DictionaryComboBox_QBaseGetDecodedMetricF(const Sonnet::DictionaryComboBox* self, int metricA, int metricB);
};

#endif
