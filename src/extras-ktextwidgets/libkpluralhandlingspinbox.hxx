#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKPLURALHANDLINGSPINBOX_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKPLURALHANDLINGSPINBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPluralHandlingSpinBox so that we can call protected methods
class VirtualKPluralHandlingSpinBox final : public KPluralHandlingSpinBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKPluralHandlingSpinBox = true;

    // Virtual class public types (including callbacks)
    using KPluralHandlingSpinBox_MetaObject_Callback = QMetaObject* (*)();
    using KPluralHandlingSpinBox_Metacast_Callback = void* (*)(KPluralHandlingSpinBox*, const char*);
    using KPluralHandlingSpinBox_Metacall_Callback = int (*)(KPluralHandlingSpinBox*, int, int, void**);
    using KPluralHandlingSpinBox_Event_Callback = bool (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_Validate_Callback = int (*)(const KPluralHandlingSpinBox*, const char*, int*);
    using KPluralHandlingSpinBox_ValueFromText_Callback = int (*)(const KPluralHandlingSpinBox*, const char*);
    using KPluralHandlingSpinBox_TextFromValue_Callback = const char* (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_Fixup_Callback = void (*)(const KPluralHandlingSpinBox*, const char*);
    using KPluralHandlingSpinBox_SizeHint_Callback = QSize* (*)();
    using KPluralHandlingSpinBox_MinimumSizeHint_Callback = QSize* (*)();
    using KPluralHandlingSpinBox_InputMethodQuery_Callback = QVariant* (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_StepBy_Callback = void (*)(KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_Clear_Callback = void (*)();
    using KPluralHandlingSpinBox_ResizeEvent_Callback = void (*)(KPluralHandlingSpinBox*, QResizeEvent*);
    using KPluralHandlingSpinBox_KeyPressEvent_Callback = void (*)(KPluralHandlingSpinBox*, QKeyEvent*);
    using KPluralHandlingSpinBox_KeyReleaseEvent_Callback = void (*)(KPluralHandlingSpinBox*, QKeyEvent*);
    using KPluralHandlingSpinBox_WheelEvent_Callback = void (*)(KPluralHandlingSpinBox*, QWheelEvent*);
    using KPluralHandlingSpinBox_FocusInEvent_Callback = void (*)(KPluralHandlingSpinBox*, QFocusEvent*);
    using KPluralHandlingSpinBox_FocusOutEvent_Callback = void (*)(KPluralHandlingSpinBox*, QFocusEvent*);
    using KPluralHandlingSpinBox_ContextMenuEvent_Callback = void (*)(KPluralHandlingSpinBox*, QContextMenuEvent*);
    using KPluralHandlingSpinBox_ChangeEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_CloseEvent_Callback = void (*)(KPluralHandlingSpinBox*, QCloseEvent*);
    using KPluralHandlingSpinBox_HideEvent_Callback = void (*)(KPluralHandlingSpinBox*, QHideEvent*);
    using KPluralHandlingSpinBox_MousePressEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_MouseReleaseEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_MouseMoveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_TimerEvent_Callback = void (*)(KPluralHandlingSpinBox*, QTimerEvent*);
    using KPluralHandlingSpinBox_PaintEvent_Callback = void (*)(KPluralHandlingSpinBox*, QPaintEvent*);
    using KPluralHandlingSpinBox_ShowEvent_Callback = void (*)(KPluralHandlingSpinBox*, QShowEvent*);
    using KPluralHandlingSpinBox_InitStyleOption_Callback = void (*)(const KPluralHandlingSpinBox*, QStyleOptionSpinBox*);
    using KPluralHandlingSpinBox_StepEnabled_Callback = int (*)();
    using KPluralHandlingSpinBox_DevType_Callback = int (*)();
    using KPluralHandlingSpinBox_SetVisible_Callback = void (*)(KPluralHandlingSpinBox*, bool);
    using KPluralHandlingSpinBox_HeightForWidth_Callback = int (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_HasHeightForWidth_Callback = bool (*)();
    using KPluralHandlingSpinBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KPluralHandlingSpinBox_MouseDoubleClickEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMouseEvent*);
    using KPluralHandlingSpinBox_EnterEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEnterEvent*);
    using KPluralHandlingSpinBox_LeaveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_MoveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QMoveEvent*);
    using KPluralHandlingSpinBox_TabletEvent_Callback = void (*)(KPluralHandlingSpinBox*, QTabletEvent*);
    using KPluralHandlingSpinBox_ActionEvent_Callback = void (*)(KPluralHandlingSpinBox*, QActionEvent*);
    using KPluralHandlingSpinBox_DragEnterEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDragEnterEvent*);
    using KPluralHandlingSpinBox_DragMoveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDragMoveEvent*);
    using KPluralHandlingSpinBox_DragLeaveEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDragLeaveEvent*);
    using KPluralHandlingSpinBox_DropEvent_Callback = void (*)(KPluralHandlingSpinBox*, QDropEvent*);
    using KPluralHandlingSpinBox_NativeEvent_Callback = bool (*)(KPluralHandlingSpinBox*, libqt_string, void*, intptr_t*);
    using KPluralHandlingSpinBox_Metric_Callback = int (*)(const KPluralHandlingSpinBox*, int);
    using KPluralHandlingSpinBox_InitPainter_Callback = void (*)(const KPluralHandlingSpinBox*, QPainter*);
    using KPluralHandlingSpinBox_Redirected_Callback = QPaintDevice* (*)(const KPluralHandlingSpinBox*, QPoint*);
    using KPluralHandlingSpinBox_SharedPainter_Callback = QPainter* (*)();
    using KPluralHandlingSpinBox_InputMethodEvent_Callback = void (*)(KPluralHandlingSpinBox*, QInputMethodEvent*);
    using KPluralHandlingSpinBox_FocusNextPrevChild_Callback = bool (*)(KPluralHandlingSpinBox*, bool);
    using KPluralHandlingSpinBox_EventFilter_Callback = bool (*)(KPluralHandlingSpinBox*, QObject*, QEvent*);
    using KPluralHandlingSpinBox_ChildEvent_Callback = void (*)(KPluralHandlingSpinBox*, QChildEvent*);
    using KPluralHandlingSpinBox_CustomEvent_Callback = void (*)(KPluralHandlingSpinBox*, QEvent*);
    using KPluralHandlingSpinBox_ConnectNotify_Callback = void (*)(KPluralHandlingSpinBox*, QMetaMethod*);
    using KPluralHandlingSpinBox_DisconnectNotify_Callback = void (*)(KPluralHandlingSpinBox*, QMetaMethod*);
    using KPluralHandlingSpinBox_LineEdit_Callback = QLineEdit* (*)();
    using KPluralHandlingSpinBox_SetLineEdit_Callback = void (*)(KPluralHandlingSpinBox*, QLineEdit*);
    using KPluralHandlingSpinBox_UpdateMicroFocus_Callback = void (*)();
    using KPluralHandlingSpinBox_Create_Callback = void (*)();
    using KPluralHandlingSpinBox_Destroy_Callback = void (*)();
    using KPluralHandlingSpinBox_FocusNextChild_Callback = bool (*)();
    using KPluralHandlingSpinBox_FocusPreviousChild_Callback = bool (*)();
    using KPluralHandlingSpinBox_Sender_Callback = QObject* (*)();
    using KPluralHandlingSpinBox_SenderSignalIndex_Callback = int (*)();
    using KPluralHandlingSpinBox_Receivers_Callback = int (*)(const KPluralHandlingSpinBox*, const char*);
    using KPluralHandlingSpinBox_IsSignalConnected_Callback = bool (*)(const KPluralHandlingSpinBox*, QMetaMethod*);
    using KPluralHandlingSpinBox_GetDecodedMetricF_Callback = double (*)(const KPluralHandlingSpinBox*, int, int);

  protected:
    // Instance callback storage
    KPluralHandlingSpinBox_MetaObject_Callback kpluralhandlingspinbox_metaobject_callback = nullptr;
    KPluralHandlingSpinBox_Metacast_Callback kpluralhandlingspinbox_metacast_callback = nullptr;
    KPluralHandlingSpinBox_Metacall_Callback kpluralhandlingspinbox_metacall_callback = nullptr;
    KPluralHandlingSpinBox_Event_Callback kpluralhandlingspinbox_event_callback = nullptr;
    KPluralHandlingSpinBox_Validate_Callback kpluralhandlingspinbox_validate_callback = nullptr;
    KPluralHandlingSpinBox_ValueFromText_Callback kpluralhandlingspinbox_valuefromtext_callback = nullptr;
    KPluralHandlingSpinBox_TextFromValue_Callback kpluralhandlingspinbox_textfromvalue_callback = nullptr;
    KPluralHandlingSpinBox_Fixup_Callback kpluralhandlingspinbox_fixup_callback = nullptr;
    KPluralHandlingSpinBox_SizeHint_Callback kpluralhandlingspinbox_sizehint_callback = nullptr;
    KPluralHandlingSpinBox_MinimumSizeHint_Callback kpluralhandlingspinbox_minimumsizehint_callback = nullptr;
    KPluralHandlingSpinBox_InputMethodQuery_Callback kpluralhandlingspinbox_inputmethodquery_callback = nullptr;
    KPluralHandlingSpinBox_StepBy_Callback kpluralhandlingspinbox_stepby_callback = nullptr;
    KPluralHandlingSpinBox_Clear_Callback kpluralhandlingspinbox_clear_callback = nullptr;
    KPluralHandlingSpinBox_ResizeEvent_Callback kpluralhandlingspinbox_resizeevent_callback = nullptr;
    KPluralHandlingSpinBox_KeyPressEvent_Callback kpluralhandlingspinbox_keypressevent_callback = nullptr;
    KPluralHandlingSpinBox_KeyReleaseEvent_Callback kpluralhandlingspinbox_keyreleaseevent_callback = nullptr;
    KPluralHandlingSpinBox_WheelEvent_Callback kpluralhandlingspinbox_wheelevent_callback = nullptr;
    KPluralHandlingSpinBox_FocusInEvent_Callback kpluralhandlingspinbox_focusinevent_callback = nullptr;
    KPluralHandlingSpinBox_FocusOutEvent_Callback kpluralhandlingspinbox_focusoutevent_callback = nullptr;
    KPluralHandlingSpinBox_ContextMenuEvent_Callback kpluralhandlingspinbox_contextmenuevent_callback = nullptr;
    KPluralHandlingSpinBox_ChangeEvent_Callback kpluralhandlingspinbox_changeevent_callback = nullptr;
    KPluralHandlingSpinBox_CloseEvent_Callback kpluralhandlingspinbox_closeevent_callback = nullptr;
    KPluralHandlingSpinBox_HideEvent_Callback kpluralhandlingspinbox_hideevent_callback = nullptr;
    KPluralHandlingSpinBox_MousePressEvent_Callback kpluralhandlingspinbox_mousepressevent_callback = nullptr;
    KPluralHandlingSpinBox_MouseReleaseEvent_Callback kpluralhandlingspinbox_mousereleaseevent_callback = nullptr;
    KPluralHandlingSpinBox_MouseMoveEvent_Callback kpluralhandlingspinbox_mousemoveevent_callback = nullptr;
    KPluralHandlingSpinBox_TimerEvent_Callback kpluralhandlingspinbox_timerevent_callback = nullptr;
    KPluralHandlingSpinBox_PaintEvent_Callback kpluralhandlingspinbox_paintevent_callback = nullptr;
    KPluralHandlingSpinBox_ShowEvent_Callback kpluralhandlingspinbox_showevent_callback = nullptr;
    KPluralHandlingSpinBox_InitStyleOption_Callback kpluralhandlingspinbox_initstyleoption_callback = nullptr;
    KPluralHandlingSpinBox_StepEnabled_Callback kpluralhandlingspinbox_stepenabled_callback = nullptr;
    KPluralHandlingSpinBox_DevType_Callback kpluralhandlingspinbox_devtype_callback = nullptr;
    KPluralHandlingSpinBox_SetVisible_Callback kpluralhandlingspinbox_setvisible_callback = nullptr;
    KPluralHandlingSpinBox_HeightForWidth_Callback kpluralhandlingspinbox_heightforwidth_callback = nullptr;
    KPluralHandlingSpinBox_HasHeightForWidth_Callback kpluralhandlingspinbox_hasheightforwidth_callback = nullptr;
    KPluralHandlingSpinBox_PaintEngine_Callback kpluralhandlingspinbox_paintengine_callback = nullptr;
    KPluralHandlingSpinBox_MouseDoubleClickEvent_Callback kpluralhandlingspinbox_mousedoubleclickevent_callback = nullptr;
    KPluralHandlingSpinBox_EnterEvent_Callback kpluralhandlingspinbox_enterevent_callback = nullptr;
    KPluralHandlingSpinBox_LeaveEvent_Callback kpluralhandlingspinbox_leaveevent_callback = nullptr;
    KPluralHandlingSpinBox_MoveEvent_Callback kpluralhandlingspinbox_moveevent_callback = nullptr;
    KPluralHandlingSpinBox_TabletEvent_Callback kpluralhandlingspinbox_tabletevent_callback = nullptr;
    KPluralHandlingSpinBox_ActionEvent_Callback kpluralhandlingspinbox_actionevent_callback = nullptr;
    KPluralHandlingSpinBox_DragEnterEvent_Callback kpluralhandlingspinbox_dragenterevent_callback = nullptr;
    KPluralHandlingSpinBox_DragMoveEvent_Callback kpluralhandlingspinbox_dragmoveevent_callback = nullptr;
    KPluralHandlingSpinBox_DragLeaveEvent_Callback kpluralhandlingspinbox_dragleaveevent_callback = nullptr;
    KPluralHandlingSpinBox_DropEvent_Callback kpluralhandlingspinbox_dropevent_callback = nullptr;
    KPluralHandlingSpinBox_NativeEvent_Callback kpluralhandlingspinbox_nativeevent_callback = nullptr;
    KPluralHandlingSpinBox_Metric_Callback kpluralhandlingspinbox_metric_callback = nullptr;
    KPluralHandlingSpinBox_InitPainter_Callback kpluralhandlingspinbox_initpainter_callback = nullptr;
    KPluralHandlingSpinBox_Redirected_Callback kpluralhandlingspinbox_redirected_callback = nullptr;
    KPluralHandlingSpinBox_SharedPainter_Callback kpluralhandlingspinbox_sharedpainter_callback = nullptr;
    KPluralHandlingSpinBox_InputMethodEvent_Callback kpluralhandlingspinbox_inputmethodevent_callback = nullptr;
    KPluralHandlingSpinBox_FocusNextPrevChild_Callback kpluralhandlingspinbox_focusnextprevchild_callback = nullptr;
    KPluralHandlingSpinBox_EventFilter_Callback kpluralhandlingspinbox_eventfilter_callback = nullptr;
    KPluralHandlingSpinBox_ChildEvent_Callback kpluralhandlingspinbox_childevent_callback = nullptr;
    KPluralHandlingSpinBox_CustomEvent_Callback kpluralhandlingspinbox_customevent_callback = nullptr;
    KPluralHandlingSpinBox_ConnectNotify_Callback kpluralhandlingspinbox_connectnotify_callback = nullptr;
    KPluralHandlingSpinBox_DisconnectNotify_Callback kpluralhandlingspinbox_disconnectnotify_callback = nullptr;
    KPluralHandlingSpinBox_LineEdit_Callback kpluralhandlingspinbox_lineedit_callback = nullptr;
    KPluralHandlingSpinBox_SetLineEdit_Callback kpluralhandlingspinbox_setlineedit_callback = nullptr;
    KPluralHandlingSpinBox_UpdateMicroFocus_Callback kpluralhandlingspinbox_updatemicrofocus_callback = nullptr;
    KPluralHandlingSpinBox_Create_Callback kpluralhandlingspinbox_create_callback = nullptr;
    KPluralHandlingSpinBox_Destroy_Callback kpluralhandlingspinbox_destroy_callback = nullptr;
    KPluralHandlingSpinBox_FocusNextChild_Callback kpluralhandlingspinbox_focusnextchild_callback = nullptr;
    KPluralHandlingSpinBox_FocusPreviousChild_Callback kpluralhandlingspinbox_focuspreviouschild_callback = nullptr;
    KPluralHandlingSpinBox_Sender_Callback kpluralhandlingspinbox_sender_callback = nullptr;
    KPluralHandlingSpinBox_SenderSignalIndex_Callback kpluralhandlingspinbox_sendersignalindex_callback = nullptr;
    KPluralHandlingSpinBox_Receivers_Callback kpluralhandlingspinbox_receivers_callback = nullptr;
    KPluralHandlingSpinBox_IsSignalConnected_Callback kpluralhandlingspinbox_issignalconnected_callback = nullptr;
    KPluralHandlingSpinBox_GetDecodedMetricF_Callback kpluralhandlingspinbox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpluralhandlingspinbox_metaobject_isbase = false;
    mutable bool kpluralhandlingspinbox_metacast_isbase = false;
    mutable bool kpluralhandlingspinbox_metacall_isbase = false;
    mutable bool kpluralhandlingspinbox_event_isbase = false;
    mutable bool kpluralhandlingspinbox_validate_isbase = false;
    mutable bool kpluralhandlingspinbox_valuefromtext_isbase = false;
    mutable bool kpluralhandlingspinbox_textfromvalue_isbase = false;
    mutable bool kpluralhandlingspinbox_fixup_isbase = false;
    mutable bool kpluralhandlingspinbox_sizehint_isbase = false;
    mutable bool kpluralhandlingspinbox_minimumsizehint_isbase = false;
    mutable bool kpluralhandlingspinbox_inputmethodquery_isbase = false;
    mutable bool kpluralhandlingspinbox_stepby_isbase = false;
    mutable bool kpluralhandlingspinbox_clear_isbase = false;
    mutable bool kpluralhandlingspinbox_resizeevent_isbase = false;
    mutable bool kpluralhandlingspinbox_keypressevent_isbase = false;
    mutable bool kpluralhandlingspinbox_keyreleaseevent_isbase = false;
    mutable bool kpluralhandlingspinbox_wheelevent_isbase = false;
    mutable bool kpluralhandlingspinbox_focusinevent_isbase = false;
    mutable bool kpluralhandlingspinbox_focusoutevent_isbase = false;
    mutable bool kpluralhandlingspinbox_contextmenuevent_isbase = false;
    mutable bool kpluralhandlingspinbox_changeevent_isbase = false;
    mutable bool kpluralhandlingspinbox_closeevent_isbase = false;
    mutable bool kpluralhandlingspinbox_hideevent_isbase = false;
    mutable bool kpluralhandlingspinbox_mousepressevent_isbase = false;
    mutable bool kpluralhandlingspinbox_mousereleaseevent_isbase = false;
    mutable bool kpluralhandlingspinbox_mousemoveevent_isbase = false;
    mutable bool kpluralhandlingspinbox_timerevent_isbase = false;
    mutable bool kpluralhandlingspinbox_paintevent_isbase = false;
    mutable bool kpluralhandlingspinbox_showevent_isbase = false;
    mutable bool kpluralhandlingspinbox_initstyleoption_isbase = false;
    mutable bool kpluralhandlingspinbox_stepenabled_isbase = false;
    mutable bool kpluralhandlingspinbox_devtype_isbase = false;
    mutable bool kpluralhandlingspinbox_setvisible_isbase = false;
    mutable bool kpluralhandlingspinbox_heightforwidth_isbase = false;
    mutable bool kpluralhandlingspinbox_hasheightforwidth_isbase = false;
    mutable bool kpluralhandlingspinbox_paintengine_isbase = false;
    mutable bool kpluralhandlingspinbox_mousedoubleclickevent_isbase = false;
    mutable bool kpluralhandlingspinbox_enterevent_isbase = false;
    mutable bool kpluralhandlingspinbox_leaveevent_isbase = false;
    mutable bool kpluralhandlingspinbox_moveevent_isbase = false;
    mutable bool kpluralhandlingspinbox_tabletevent_isbase = false;
    mutable bool kpluralhandlingspinbox_actionevent_isbase = false;
    mutable bool kpluralhandlingspinbox_dragenterevent_isbase = false;
    mutable bool kpluralhandlingspinbox_dragmoveevent_isbase = false;
    mutable bool kpluralhandlingspinbox_dragleaveevent_isbase = false;
    mutable bool kpluralhandlingspinbox_dropevent_isbase = false;
    mutable bool kpluralhandlingspinbox_nativeevent_isbase = false;
    mutable bool kpluralhandlingspinbox_metric_isbase = false;
    mutable bool kpluralhandlingspinbox_initpainter_isbase = false;
    mutable bool kpluralhandlingspinbox_redirected_isbase = false;
    mutable bool kpluralhandlingspinbox_sharedpainter_isbase = false;
    mutable bool kpluralhandlingspinbox_inputmethodevent_isbase = false;
    mutable bool kpluralhandlingspinbox_focusnextprevchild_isbase = false;
    mutable bool kpluralhandlingspinbox_eventfilter_isbase = false;
    mutable bool kpluralhandlingspinbox_childevent_isbase = false;
    mutable bool kpluralhandlingspinbox_customevent_isbase = false;
    mutable bool kpluralhandlingspinbox_connectnotify_isbase = false;
    mutable bool kpluralhandlingspinbox_disconnectnotify_isbase = false;
    mutable bool kpluralhandlingspinbox_lineedit_isbase = false;
    mutable bool kpluralhandlingspinbox_setlineedit_isbase = false;
    mutable bool kpluralhandlingspinbox_updatemicrofocus_isbase = false;
    mutable bool kpluralhandlingspinbox_create_isbase = false;
    mutable bool kpluralhandlingspinbox_destroy_isbase = false;
    mutable bool kpluralhandlingspinbox_focusnextchild_isbase = false;
    mutable bool kpluralhandlingspinbox_focuspreviouschild_isbase = false;
    mutable bool kpluralhandlingspinbox_sender_isbase = false;
    mutable bool kpluralhandlingspinbox_sendersignalindex_isbase = false;
    mutable bool kpluralhandlingspinbox_receivers_isbase = false;
    mutable bool kpluralhandlingspinbox_issignalconnected_isbase = false;
    mutable bool kpluralhandlingspinbox_getdecodedmetricf_isbase = false;

  public:
    VirtualKPluralHandlingSpinBox(QWidget* parent) : KPluralHandlingSpinBox(parent) {};
    VirtualKPluralHandlingSpinBox() : KPluralHandlingSpinBox() {};

    // Callback setters
    inline void setKPluralHandlingSpinBox_MetaObject_Callback(KPluralHandlingSpinBox_MetaObject_Callback cb) { kpluralhandlingspinbox_metaobject_callback = cb; }
    inline void setKPluralHandlingSpinBox_Metacast_Callback(KPluralHandlingSpinBox_Metacast_Callback cb) { kpluralhandlingspinbox_metacast_callback = cb; }
    inline void setKPluralHandlingSpinBox_Metacall_Callback(KPluralHandlingSpinBox_Metacall_Callback cb) { kpluralhandlingspinbox_metacall_callback = cb; }
    inline void setKPluralHandlingSpinBox_Event_Callback(KPluralHandlingSpinBox_Event_Callback cb) { kpluralhandlingspinbox_event_callback = cb; }
    inline void setKPluralHandlingSpinBox_Validate_Callback(KPluralHandlingSpinBox_Validate_Callback cb) { kpluralhandlingspinbox_validate_callback = cb; }
    inline void setKPluralHandlingSpinBox_ValueFromText_Callback(KPluralHandlingSpinBox_ValueFromText_Callback cb) { kpluralhandlingspinbox_valuefromtext_callback = cb; }
    inline void setKPluralHandlingSpinBox_TextFromValue_Callback(KPluralHandlingSpinBox_TextFromValue_Callback cb) { kpluralhandlingspinbox_textfromvalue_callback = cb; }
    inline void setKPluralHandlingSpinBox_Fixup_Callback(KPluralHandlingSpinBox_Fixup_Callback cb) { kpluralhandlingspinbox_fixup_callback = cb; }
    inline void setKPluralHandlingSpinBox_SizeHint_Callback(KPluralHandlingSpinBox_SizeHint_Callback cb) { kpluralhandlingspinbox_sizehint_callback = cb; }
    inline void setKPluralHandlingSpinBox_MinimumSizeHint_Callback(KPluralHandlingSpinBox_MinimumSizeHint_Callback cb) { kpluralhandlingspinbox_minimumsizehint_callback = cb; }
    inline void setKPluralHandlingSpinBox_InputMethodQuery_Callback(KPluralHandlingSpinBox_InputMethodQuery_Callback cb) { kpluralhandlingspinbox_inputmethodquery_callback = cb; }
    inline void setKPluralHandlingSpinBox_StepBy_Callback(KPluralHandlingSpinBox_StepBy_Callback cb) { kpluralhandlingspinbox_stepby_callback = cb; }
    inline void setKPluralHandlingSpinBox_Clear_Callback(KPluralHandlingSpinBox_Clear_Callback cb) { kpluralhandlingspinbox_clear_callback = cb; }
    inline void setKPluralHandlingSpinBox_ResizeEvent_Callback(KPluralHandlingSpinBox_ResizeEvent_Callback cb) { kpluralhandlingspinbox_resizeevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_KeyPressEvent_Callback(KPluralHandlingSpinBox_KeyPressEvent_Callback cb) { kpluralhandlingspinbox_keypressevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_KeyReleaseEvent_Callback(KPluralHandlingSpinBox_KeyReleaseEvent_Callback cb) { kpluralhandlingspinbox_keyreleaseevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_WheelEvent_Callback(KPluralHandlingSpinBox_WheelEvent_Callback cb) { kpluralhandlingspinbox_wheelevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_FocusInEvent_Callback(KPluralHandlingSpinBox_FocusInEvent_Callback cb) { kpluralhandlingspinbox_focusinevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_FocusOutEvent_Callback(KPluralHandlingSpinBox_FocusOutEvent_Callback cb) { kpluralhandlingspinbox_focusoutevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_ContextMenuEvent_Callback(KPluralHandlingSpinBox_ContextMenuEvent_Callback cb) { kpluralhandlingspinbox_contextmenuevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_ChangeEvent_Callback(KPluralHandlingSpinBox_ChangeEvent_Callback cb) { kpluralhandlingspinbox_changeevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_CloseEvent_Callback(KPluralHandlingSpinBox_CloseEvent_Callback cb) { kpluralhandlingspinbox_closeevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_HideEvent_Callback(KPluralHandlingSpinBox_HideEvent_Callback cb) { kpluralhandlingspinbox_hideevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_MousePressEvent_Callback(KPluralHandlingSpinBox_MousePressEvent_Callback cb) { kpluralhandlingspinbox_mousepressevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_MouseReleaseEvent_Callback(KPluralHandlingSpinBox_MouseReleaseEvent_Callback cb) { kpluralhandlingspinbox_mousereleaseevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_MouseMoveEvent_Callback(KPluralHandlingSpinBox_MouseMoveEvent_Callback cb) { kpluralhandlingspinbox_mousemoveevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_TimerEvent_Callback(KPluralHandlingSpinBox_TimerEvent_Callback cb) { kpluralhandlingspinbox_timerevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_PaintEvent_Callback(KPluralHandlingSpinBox_PaintEvent_Callback cb) { kpluralhandlingspinbox_paintevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_ShowEvent_Callback(KPluralHandlingSpinBox_ShowEvent_Callback cb) { kpluralhandlingspinbox_showevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_InitStyleOption_Callback(KPluralHandlingSpinBox_InitStyleOption_Callback cb) { kpluralhandlingspinbox_initstyleoption_callback = cb; }
    inline void setKPluralHandlingSpinBox_StepEnabled_Callback(KPluralHandlingSpinBox_StepEnabled_Callback cb) { kpluralhandlingspinbox_stepenabled_callback = cb; }
    inline void setKPluralHandlingSpinBox_DevType_Callback(KPluralHandlingSpinBox_DevType_Callback cb) { kpluralhandlingspinbox_devtype_callback = cb; }
    inline void setKPluralHandlingSpinBox_SetVisible_Callback(KPluralHandlingSpinBox_SetVisible_Callback cb) { kpluralhandlingspinbox_setvisible_callback = cb; }
    inline void setKPluralHandlingSpinBox_HeightForWidth_Callback(KPluralHandlingSpinBox_HeightForWidth_Callback cb) { kpluralhandlingspinbox_heightforwidth_callback = cb; }
    inline void setKPluralHandlingSpinBox_HasHeightForWidth_Callback(KPluralHandlingSpinBox_HasHeightForWidth_Callback cb) { kpluralhandlingspinbox_hasheightforwidth_callback = cb; }
    inline void setKPluralHandlingSpinBox_PaintEngine_Callback(KPluralHandlingSpinBox_PaintEngine_Callback cb) { kpluralhandlingspinbox_paintengine_callback = cb; }
    inline void setKPluralHandlingSpinBox_MouseDoubleClickEvent_Callback(KPluralHandlingSpinBox_MouseDoubleClickEvent_Callback cb) { kpluralhandlingspinbox_mousedoubleclickevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_EnterEvent_Callback(KPluralHandlingSpinBox_EnterEvent_Callback cb) { kpluralhandlingspinbox_enterevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_LeaveEvent_Callback(KPluralHandlingSpinBox_LeaveEvent_Callback cb) { kpluralhandlingspinbox_leaveevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_MoveEvent_Callback(KPluralHandlingSpinBox_MoveEvent_Callback cb) { kpluralhandlingspinbox_moveevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_TabletEvent_Callback(KPluralHandlingSpinBox_TabletEvent_Callback cb) { kpluralhandlingspinbox_tabletevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_ActionEvent_Callback(KPluralHandlingSpinBox_ActionEvent_Callback cb) { kpluralhandlingspinbox_actionevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_DragEnterEvent_Callback(KPluralHandlingSpinBox_DragEnterEvent_Callback cb) { kpluralhandlingspinbox_dragenterevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_DragMoveEvent_Callback(KPluralHandlingSpinBox_DragMoveEvent_Callback cb) { kpluralhandlingspinbox_dragmoveevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_DragLeaveEvent_Callback(KPluralHandlingSpinBox_DragLeaveEvent_Callback cb) { kpluralhandlingspinbox_dragleaveevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_DropEvent_Callback(KPluralHandlingSpinBox_DropEvent_Callback cb) { kpluralhandlingspinbox_dropevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_NativeEvent_Callback(KPluralHandlingSpinBox_NativeEvent_Callback cb) { kpluralhandlingspinbox_nativeevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_Metric_Callback(KPluralHandlingSpinBox_Metric_Callback cb) { kpluralhandlingspinbox_metric_callback = cb; }
    inline void setKPluralHandlingSpinBox_InitPainter_Callback(KPluralHandlingSpinBox_InitPainter_Callback cb) { kpluralhandlingspinbox_initpainter_callback = cb; }
    inline void setKPluralHandlingSpinBox_Redirected_Callback(KPluralHandlingSpinBox_Redirected_Callback cb) { kpluralhandlingspinbox_redirected_callback = cb; }
    inline void setKPluralHandlingSpinBox_SharedPainter_Callback(KPluralHandlingSpinBox_SharedPainter_Callback cb) { kpluralhandlingspinbox_sharedpainter_callback = cb; }
    inline void setKPluralHandlingSpinBox_InputMethodEvent_Callback(KPluralHandlingSpinBox_InputMethodEvent_Callback cb) { kpluralhandlingspinbox_inputmethodevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_FocusNextPrevChild_Callback(KPluralHandlingSpinBox_FocusNextPrevChild_Callback cb) { kpluralhandlingspinbox_focusnextprevchild_callback = cb; }
    inline void setKPluralHandlingSpinBox_EventFilter_Callback(KPluralHandlingSpinBox_EventFilter_Callback cb) { kpluralhandlingspinbox_eventfilter_callback = cb; }
    inline void setKPluralHandlingSpinBox_ChildEvent_Callback(KPluralHandlingSpinBox_ChildEvent_Callback cb) { kpluralhandlingspinbox_childevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_CustomEvent_Callback(KPluralHandlingSpinBox_CustomEvent_Callback cb) { kpluralhandlingspinbox_customevent_callback = cb; }
    inline void setKPluralHandlingSpinBox_ConnectNotify_Callback(KPluralHandlingSpinBox_ConnectNotify_Callback cb) { kpluralhandlingspinbox_connectnotify_callback = cb; }
    inline void setKPluralHandlingSpinBox_DisconnectNotify_Callback(KPluralHandlingSpinBox_DisconnectNotify_Callback cb) { kpluralhandlingspinbox_disconnectnotify_callback = cb; }
    inline void setKPluralHandlingSpinBox_LineEdit_Callback(KPluralHandlingSpinBox_LineEdit_Callback cb) { kpluralhandlingspinbox_lineedit_callback = cb; }
    inline void setKPluralHandlingSpinBox_SetLineEdit_Callback(KPluralHandlingSpinBox_SetLineEdit_Callback cb) { kpluralhandlingspinbox_setlineedit_callback = cb; }
    inline void setKPluralHandlingSpinBox_UpdateMicroFocus_Callback(KPluralHandlingSpinBox_UpdateMicroFocus_Callback cb) { kpluralhandlingspinbox_updatemicrofocus_callback = cb; }
    inline void setKPluralHandlingSpinBox_Create_Callback(KPluralHandlingSpinBox_Create_Callback cb) { kpluralhandlingspinbox_create_callback = cb; }
    inline void setKPluralHandlingSpinBox_Destroy_Callback(KPluralHandlingSpinBox_Destroy_Callback cb) { kpluralhandlingspinbox_destroy_callback = cb; }
    inline void setKPluralHandlingSpinBox_FocusNextChild_Callback(KPluralHandlingSpinBox_FocusNextChild_Callback cb) { kpluralhandlingspinbox_focusnextchild_callback = cb; }
    inline void setKPluralHandlingSpinBox_FocusPreviousChild_Callback(KPluralHandlingSpinBox_FocusPreviousChild_Callback cb) { kpluralhandlingspinbox_focuspreviouschild_callback = cb; }
    inline void setKPluralHandlingSpinBox_Sender_Callback(KPluralHandlingSpinBox_Sender_Callback cb) { kpluralhandlingspinbox_sender_callback = cb; }
    inline void setKPluralHandlingSpinBox_SenderSignalIndex_Callback(KPluralHandlingSpinBox_SenderSignalIndex_Callback cb) { kpluralhandlingspinbox_sendersignalindex_callback = cb; }
    inline void setKPluralHandlingSpinBox_Receivers_Callback(KPluralHandlingSpinBox_Receivers_Callback cb) { kpluralhandlingspinbox_receivers_callback = cb; }
    inline void setKPluralHandlingSpinBox_IsSignalConnected_Callback(KPluralHandlingSpinBox_IsSignalConnected_Callback cb) { kpluralhandlingspinbox_issignalconnected_callback = cb; }
    inline void setKPluralHandlingSpinBox_GetDecodedMetricF_Callback(KPluralHandlingSpinBox_GetDecodedMetricF_Callback cb) { kpluralhandlingspinbox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPluralHandlingSpinBox_MetaObject_IsBase(bool value) const { kpluralhandlingspinbox_metaobject_isbase = value; }
    inline void setKPluralHandlingSpinBox_Metacast_IsBase(bool value) const { kpluralhandlingspinbox_metacast_isbase = value; }
    inline void setKPluralHandlingSpinBox_Metacall_IsBase(bool value) const { kpluralhandlingspinbox_metacall_isbase = value; }
    inline void setKPluralHandlingSpinBox_Event_IsBase(bool value) const { kpluralhandlingspinbox_event_isbase = value; }
    inline void setKPluralHandlingSpinBox_Validate_IsBase(bool value) const { kpluralhandlingspinbox_validate_isbase = value; }
    inline void setKPluralHandlingSpinBox_ValueFromText_IsBase(bool value) const { kpluralhandlingspinbox_valuefromtext_isbase = value; }
    inline void setKPluralHandlingSpinBox_TextFromValue_IsBase(bool value) const { kpluralhandlingspinbox_textfromvalue_isbase = value; }
    inline void setKPluralHandlingSpinBox_Fixup_IsBase(bool value) const { kpluralhandlingspinbox_fixup_isbase = value; }
    inline void setKPluralHandlingSpinBox_SizeHint_IsBase(bool value) const { kpluralhandlingspinbox_sizehint_isbase = value; }
    inline void setKPluralHandlingSpinBox_MinimumSizeHint_IsBase(bool value) const { kpluralhandlingspinbox_minimumsizehint_isbase = value; }
    inline void setKPluralHandlingSpinBox_InputMethodQuery_IsBase(bool value) const { kpluralhandlingspinbox_inputmethodquery_isbase = value; }
    inline void setKPluralHandlingSpinBox_StepBy_IsBase(bool value) const { kpluralhandlingspinbox_stepby_isbase = value; }
    inline void setKPluralHandlingSpinBox_Clear_IsBase(bool value) const { kpluralhandlingspinbox_clear_isbase = value; }
    inline void setKPluralHandlingSpinBox_ResizeEvent_IsBase(bool value) const { kpluralhandlingspinbox_resizeevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_KeyPressEvent_IsBase(bool value) const { kpluralhandlingspinbox_keypressevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_KeyReleaseEvent_IsBase(bool value) const { kpluralhandlingspinbox_keyreleaseevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_WheelEvent_IsBase(bool value) const { kpluralhandlingspinbox_wheelevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_FocusInEvent_IsBase(bool value) const { kpluralhandlingspinbox_focusinevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_FocusOutEvent_IsBase(bool value) const { kpluralhandlingspinbox_focusoutevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_ContextMenuEvent_IsBase(bool value) const { kpluralhandlingspinbox_contextmenuevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_ChangeEvent_IsBase(bool value) const { kpluralhandlingspinbox_changeevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_CloseEvent_IsBase(bool value) const { kpluralhandlingspinbox_closeevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_HideEvent_IsBase(bool value) const { kpluralhandlingspinbox_hideevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_MousePressEvent_IsBase(bool value) const { kpluralhandlingspinbox_mousepressevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_MouseReleaseEvent_IsBase(bool value) const { kpluralhandlingspinbox_mousereleaseevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_MouseMoveEvent_IsBase(bool value) const { kpluralhandlingspinbox_mousemoveevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_TimerEvent_IsBase(bool value) const { kpluralhandlingspinbox_timerevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_PaintEvent_IsBase(bool value) const { kpluralhandlingspinbox_paintevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_ShowEvent_IsBase(bool value) const { kpluralhandlingspinbox_showevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_InitStyleOption_IsBase(bool value) const { kpluralhandlingspinbox_initstyleoption_isbase = value; }
    inline void setKPluralHandlingSpinBox_StepEnabled_IsBase(bool value) const { kpluralhandlingspinbox_stepenabled_isbase = value; }
    inline void setKPluralHandlingSpinBox_DevType_IsBase(bool value) const { kpluralhandlingspinbox_devtype_isbase = value; }
    inline void setKPluralHandlingSpinBox_SetVisible_IsBase(bool value) const { kpluralhandlingspinbox_setvisible_isbase = value; }
    inline void setKPluralHandlingSpinBox_HeightForWidth_IsBase(bool value) const { kpluralhandlingspinbox_heightforwidth_isbase = value; }
    inline void setKPluralHandlingSpinBox_HasHeightForWidth_IsBase(bool value) const { kpluralhandlingspinbox_hasheightforwidth_isbase = value; }
    inline void setKPluralHandlingSpinBox_PaintEngine_IsBase(bool value) const { kpluralhandlingspinbox_paintengine_isbase = value; }
    inline void setKPluralHandlingSpinBox_MouseDoubleClickEvent_IsBase(bool value) const { kpluralhandlingspinbox_mousedoubleclickevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_EnterEvent_IsBase(bool value) const { kpluralhandlingspinbox_enterevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_LeaveEvent_IsBase(bool value) const { kpluralhandlingspinbox_leaveevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_MoveEvent_IsBase(bool value) const { kpluralhandlingspinbox_moveevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_TabletEvent_IsBase(bool value) const { kpluralhandlingspinbox_tabletevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_ActionEvent_IsBase(bool value) const { kpluralhandlingspinbox_actionevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_DragEnterEvent_IsBase(bool value) const { kpluralhandlingspinbox_dragenterevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_DragMoveEvent_IsBase(bool value) const { kpluralhandlingspinbox_dragmoveevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_DragLeaveEvent_IsBase(bool value) const { kpluralhandlingspinbox_dragleaveevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_DropEvent_IsBase(bool value) const { kpluralhandlingspinbox_dropevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_NativeEvent_IsBase(bool value) const { kpluralhandlingspinbox_nativeevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_Metric_IsBase(bool value) const { kpluralhandlingspinbox_metric_isbase = value; }
    inline void setKPluralHandlingSpinBox_InitPainter_IsBase(bool value) const { kpluralhandlingspinbox_initpainter_isbase = value; }
    inline void setKPluralHandlingSpinBox_Redirected_IsBase(bool value) const { kpluralhandlingspinbox_redirected_isbase = value; }
    inline void setKPluralHandlingSpinBox_SharedPainter_IsBase(bool value) const { kpluralhandlingspinbox_sharedpainter_isbase = value; }
    inline void setKPluralHandlingSpinBox_InputMethodEvent_IsBase(bool value) const { kpluralhandlingspinbox_inputmethodevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_FocusNextPrevChild_IsBase(bool value) const { kpluralhandlingspinbox_focusnextprevchild_isbase = value; }
    inline void setKPluralHandlingSpinBox_EventFilter_IsBase(bool value) const { kpluralhandlingspinbox_eventfilter_isbase = value; }
    inline void setKPluralHandlingSpinBox_ChildEvent_IsBase(bool value) const { kpluralhandlingspinbox_childevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_CustomEvent_IsBase(bool value) const { kpluralhandlingspinbox_customevent_isbase = value; }
    inline void setKPluralHandlingSpinBox_ConnectNotify_IsBase(bool value) const { kpluralhandlingspinbox_connectnotify_isbase = value; }
    inline void setKPluralHandlingSpinBox_DisconnectNotify_IsBase(bool value) const { kpluralhandlingspinbox_disconnectnotify_isbase = value; }
    inline void setKPluralHandlingSpinBox_LineEdit_IsBase(bool value) const { kpluralhandlingspinbox_lineedit_isbase = value; }
    inline void setKPluralHandlingSpinBox_SetLineEdit_IsBase(bool value) const { kpluralhandlingspinbox_setlineedit_isbase = value; }
    inline void setKPluralHandlingSpinBox_UpdateMicroFocus_IsBase(bool value) const { kpluralhandlingspinbox_updatemicrofocus_isbase = value; }
    inline void setKPluralHandlingSpinBox_Create_IsBase(bool value) const { kpluralhandlingspinbox_create_isbase = value; }
    inline void setKPluralHandlingSpinBox_Destroy_IsBase(bool value) const { kpluralhandlingspinbox_destroy_isbase = value; }
    inline void setKPluralHandlingSpinBox_FocusNextChild_IsBase(bool value) const { kpluralhandlingspinbox_focusnextchild_isbase = value; }
    inline void setKPluralHandlingSpinBox_FocusPreviousChild_IsBase(bool value) const { kpluralhandlingspinbox_focuspreviouschild_isbase = value; }
    inline void setKPluralHandlingSpinBox_Sender_IsBase(bool value) const { kpluralhandlingspinbox_sender_isbase = value; }
    inline void setKPluralHandlingSpinBox_SenderSignalIndex_IsBase(bool value) const { kpluralhandlingspinbox_sendersignalindex_isbase = value; }
    inline void setKPluralHandlingSpinBox_Receivers_IsBase(bool value) const { kpluralhandlingspinbox_receivers_isbase = value; }
    inline void setKPluralHandlingSpinBox_IsSignalConnected_IsBase(bool value) const { kpluralhandlingspinbox_issignalconnected_isbase = value; }
    inline void setKPluralHandlingSpinBox_GetDecodedMetricF_IsBase(bool value) const { kpluralhandlingspinbox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpluralhandlingspinbox_metaobject_isbase) {
            kpluralhandlingspinbox_metaobject_isbase = false;
            return KPluralHandlingSpinBox::metaObject();
        }
        auto metaobject_cb = kpluralhandlingspinbox_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpluralhandlingspinbox_metacast_isbase) {
            kpluralhandlingspinbox_metacast_isbase = false;
            return KPluralHandlingSpinBox::qt_metacast(param1);
        }
        auto metacast_cb = kpluralhandlingspinbox_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpluralhandlingspinbox_metacall_isbase) {
            kpluralhandlingspinbox_metacall_isbase = false;
            return KPluralHandlingSpinBox::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpluralhandlingspinbox_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpluralhandlingspinbox_event_isbase) {
            kpluralhandlingspinbox_event_isbase = false;
            return KPluralHandlingSpinBox::event(event);
        }
        auto event_cb = kpluralhandlingspinbox_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (kpluralhandlingspinbox_validate_isbase) {
            kpluralhandlingspinbox_validate_isbase = false;
            return KPluralHandlingSpinBox::validate(input, pos);
        }
        auto validate_cb = kpluralhandlingspinbox_validate_callback;
        if (validate_cb) {
            QString input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;

            int callback_ret = validate_cb(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return KPluralHandlingSpinBox::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual int valueFromText(const QString& text) const override {
        if (kpluralhandlingspinbox_valuefromtext_isbase) {
            kpluralhandlingspinbox_valuefromtext_isbase = false;
            return KPluralHandlingSpinBox::valueFromText(text);
        }
        auto valuefromtext_cb = kpluralhandlingspinbox_valuefromtext_callback;
        if (valuefromtext_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            int callback_ret = valuefromtext_cb(this, cbval1);
            libqt_free(text_str);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::valueFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromValue(int val) const override {
        if (kpluralhandlingspinbox_textfromvalue_isbase) {
            kpluralhandlingspinbox_textfromvalue_isbase = false;
            return KPluralHandlingSpinBox::textFromValue(val);
        }
        auto textfromvalue_cb = kpluralhandlingspinbox_textfromvalue_callback;
        if (textfromvalue_cb) {
            int cbval1 = val;

            const char* callback_ret = textfromvalue_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KPluralHandlingSpinBox::textFromValue(val);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (kpluralhandlingspinbox_fixup_isbase) {
            kpluralhandlingspinbox_fixup_isbase = false;
            KPluralHandlingSpinBox::fixup(str);
            return;
        }
        auto fixup_cb = kpluralhandlingspinbox_fixup_callback;
        if (fixup_cb) {
            QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            auto str_str_len = str_b.length();
            const char* str_str = static_cast<const char*>(malloc(str_str_len + 1));
            memcpy((void*)str_str, str_b.data(), str_str_len);
            ((char*)str_str)[str_str_len] = '\0';
            const char* cbval1 = str_str;

            fixup_cb(this, cbval1);
            libqt_free(str_str);
            return;
        }
        KPluralHandlingSpinBox::fixup(str);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpluralhandlingspinbox_sizehint_isbase) {
            kpluralhandlingspinbox_sizehint_isbase = false;
            return KPluralHandlingSpinBox::sizeHint();
        }
        auto sizehint_cb = kpluralhandlingspinbox_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KPluralHandlingSpinBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpluralhandlingspinbox_minimumsizehint_isbase) {
            kpluralhandlingspinbox_minimumsizehint_isbase = false;
            return KPluralHandlingSpinBox::minimumSizeHint();
        }
        auto minimumsizehint_cb = kpluralhandlingspinbox_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KPluralHandlingSpinBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpluralhandlingspinbox_inputmethodquery_isbase) {
            kpluralhandlingspinbox_inputmethodquery_isbase = false;
            return KPluralHandlingSpinBox::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kpluralhandlingspinbox_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KPluralHandlingSpinBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (kpluralhandlingspinbox_stepby_isbase) {
            kpluralhandlingspinbox_stepby_isbase = false;
            KPluralHandlingSpinBox::stepBy(steps);
            return;
        }
        auto stepby_cb = kpluralhandlingspinbox_stepby_callback;
        if (stepby_cb) {
            int cbval1 = steps;

            stepby_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kpluralhandlingspinbox_clear_isbase) {
            kpluralhandlingspinbox_clear_isbase = false;
            KPluralHandlingSpinBox::clear();
            return;
        }
        auto clear_cb = kpluralhandlingspinbox_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        KPluralHandlingSpinBox::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpluralhandlingspinbox_resizeevent_isbase) {
            kpluralhandlingspinbox_resizeevent_isbase = false;
            KPluralHandlingSpinBox::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kpluralhandlingspinbox_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpluralhandlingspinbox_keypressevent_isbase) {
            kpluralhandlingspinbox_keypressevent_isbase = false;
            KPluralHandlingSpinBox::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kpluralhandlingspinbox_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpluralhandlingspinbox_keyreleaseevent_isbase) {
            kpluralhandlingspinbox_keyreleaseevent_isbase = false;
            KPluralHandlingSpinBox::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kpluralhandlingspinbox_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpluralhandlingspinbox_wheelevent_isbase) {
            kpluralhandlingspinbox_wheelevent_isbase = false;
            KPluralHandlingSpinBox::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kpluralhandlingspinbox_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpluralhandlingspinbox_focusinevent_isbase) {
            kpluralhandlingspinbox_focusinevent_isbase = false;
            KPluralHandlingSpinBox::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kpluralhandlingspinbox_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpluralhandlingspinbox_focusoutevent_isbase) {
            kpluralhandlingspinbox_focusoutevent_isbase = false;
            KPluralHandlingSpinBox::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kpluralhandlingspinbox_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpluralhandlingspinbox_contextmenuevent_isbase) {
            kpluralhandlingspinbox_contextmenuevent_isbase = false;
            KPluralHandlingSpinBox::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kpluralhandlingspinbox_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kpluralhandlingspinbox_changeevent_isbase) {
            kpluralhandlingspinbox_changeevent_isbase = false;
            KPluralHandlingSpinBox::changeEvent(event);
            return;
        }
        auto changeevent_cb = kpluralhandlingspinbox_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpluralhandlingspinbox_closeevent_isbase) {
            kpluralhandlingspinbox_closeevent_isbase = false;
            KPluralHandlingSpinBox::closeEvent(event);
            return;
        }
        auto closeevent_cb = kpluralhandlingspinbox_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpluralhandlingspinbox_hideevent_isbase) {
            kpluralhandlingspinbox_hideevent_isbase = false;
            KPluralHandlingSpinBox::hideEvent(event);
            return;
        }
        auto hideevent_cb = kpluralhandlingspinbox_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousepressevent_isbase) {
            kpluralhandlingspinbox_mousepressevent_isbase = false;
            KPluralHandlingSpinBox::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kpluralhandlingspinbox_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousereleaseevent_isbase) {
            kpluralhandlingspinbox_mousereleaseevent_isbase = false;
            KPluralHandlingSpinBox::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kpluralhandlingspinbox_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousemoveevent_isbase) {
            kpluralhandlingspinbox_mousemoveevent_isbase = false;
            KPluralHandlingSpinBox::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kpluralhandlingspinbox_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpluralhandlingspinbox_timerevent_isbase) {
            kpluralhandlingspinbox_timerevent_isbase = false;
            KPluralHandlingSpinBox::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpluralhandlingspinbox_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpluralhandlingspinbox_paintevent_isbase) {
            kpluralhandlingspinbox_paintevent_isbase = false;
            KPluralHandlingSpinBox::paintEvent(event);
            return;
        }
        auto paintevent_cb = kpluralhandlingspinbox_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpluralhandlingspinbox_showevent_isbase) {
            kpluralhandlingspinbox_showevent_isbase = false;
            KPluralHandlingSpinBox::showEvent(event);
            return;
        }
        auto showevent_cb = kpluralhandlingspinbox_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (kpluralhandlingspinbox_initstyleoption_isbase) {
            kpluralhandlingspinbox_initstyleoption_isbase = false;
            KPluralHandlingSpinBox::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = kpluralhandlingspinbox_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionSpinBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (kpluralhandlingspinbox_stepenabled_isbase) {
            kpluralhandlingspinbox_stepenabled_isbase = false;
            return KPluralHandlingSpinBox::stepEnabled();
        }
        auto stepenabled_cb = kpluralhandlingspinbox_stepenabled_callback;
        if (stepenabled_cb) {
            int callback_ret = stepenabled_cb();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return KPluralHandlingSpinBox::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpluralhandlingspinbox_devtype_isbase) {
            kpluralhandlingspinbox_devtype_isbase = false;
            return KPluralHandlingSpinBox::devType();
        }
        auto devtype_cb = kpluralhandlingspinbox_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpluralhandlingspinbox_setvisible_isbase) {
            kpluralhandlingspinbox_setvisible_isbase = false;
            KPluralHandlingSpinBox::setVisible(visible);
            return;
        }
        auto setvisible_cb = kpluralhandlingspinbox_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpluralhandlingspinbox_heightforwidth_isbase) {
            kpluralhandlingspinbox_heightforwidth_isbase = false;
            return KPluralHandlingSpinBox::heightForWidth(param1);
        }
        auto heightforwidth_cb = kpluralhandlingspinbox_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpluralhandlingspinbox_hasheightforwidth_isbase) {
            kpluralhandlingspinbox_hasheightforwidth_isbase = false;
            return KPluralHandlingSpinBox::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kpluralhandlingspinbox_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpluralhandlingspinbox_paintengine_isbase) {
            kpluralhandlingspinbox_paintengine_isbase = false;
            return KPluralHandlingSpinBox::paintEngine();
        }
        auto paintengine_cb = kpluralhandlingspinbox_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpluralhandlingspinbox_mousedoubleclickevent_isbase) {
            kpluralhandlingspinbox_mousedoubleclickevent_isbase = false;
            KPluralHandlingSpinBox::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kpluralhandlingspinbox_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpluralhandlingspinbox_enterevent_isbase) {
            kpluralhandlingspinbox_enterevent_isbase = false;
            KPluralHandlingSpinBox::enterEvent(event);
            return;
        }
        auto enterevent_cb = kpluralhandlingspinbox_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpluralhandlingspinbox_leaveevent_isbase) {
            kpluralhandlingspinbox_leaveevent_isbase = false;
            KPluralHandlingSpinBox::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kpluralhandlingspinbox_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpluralhandlingspinbox_moveevent_isbase) {
            kpluralhandlingspinbox_moveevent_isbase = false;
            KPluralHandlingSpinBox::moveEvent(event);
            return;
        }
        auto moveevent_cb = kpluralhandlingspinbox_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpluralhandlingspinbox_tabletevent_isbase) {
            kpluralhandlingspinbox_tabletevent_isbase = false;
            KPluralHandlingSpinBox::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kpluralhandlingspinbox_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpluralhandlingspinbox_actionevent_isbase) {
            kpluralhandlingspinbox_actionevent_isbase = false;
            KPluralHandlingSpinBox::actionEvent(event);
            return;
        }
        auto actionevent_cb = kpluralhandlingspinbox_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpluralhandlingspinbox_dragenterevent_isbase) {
            kpluralhandlingspinbox_dragenterevent_isbase = false;
            KPluralHandlingSpinBox::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kpluralhandlingspinbox_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpluralhandlingspinbox_dragmoveevent_isbase) {
            kpluralhandlingspinbox_dragmoveevent_isbase = false;
            KPluralHandlingSpinBox::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kpluralhandlingspinbox_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpluralhandlingspinbox_dragleaveevent_isbase) {
            kpluralhandlingspinbox_dragleaveevent_isbase = false;
            KPluralHandlingSpinBox::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kpluralhandlingspinbox_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpluralhandlingspinbox_dropevent_isbase) {
            kpluralhandlingspinbox_dropevent_isbase = false;
            KPluralHandlingSpinBox::dropEvent(event);
            return;
        }
        auto dropevent_cb = kpluralhandlingspinbox_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpluralhandlingspinbox_nativeevent_isbase) {
            kpluralhandlingspinbox_nativeevent_isbase = false;
            return KPluralHandlingSpinBox::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kpluralhandlingspinbox_nativeevent_callback;
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
        return KPluralHandlingSpinBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpluralhandlingspinbox_metric_isbase) {
            kpluralhandlingspinbox_metric_isbase = false;
            return KPluralHandlingSpinBox::metric(param1);
        }
        auto metric_cb = kpluralhandlingspinbox_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpluralhandlingspinbox_initpainter_isbase) {
            kpluralhandlingspinbox_initpainter_isbase = false;
            KPluralHandlingSpinBox::initPainter(painter);
            return;
        }
        auto initpainter_cb = kpluralhandlingspinbox_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpluralhandlingspinbox_redirected_isbase) {
            kpluralhandlingspinbox_redirected_isbase = false;
            return KPluralHandlingSpinBox::redirected(offset);
        }
        auto redirected_cb = kpluralhandlingspinbox_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpluralhandlingspinbox_sharedpainter_isbase) {
            kpluralhandlingspinbox_sharedpainter_isbase = false;
            return KPluralHandlingSpinBox::sharedPainter();
        }
        auto sharedpainter_cb = kpluralhandlingspinbox_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpluralhandlingspinbox_inputmethodevent_isbase) {
            kpluralhandlingspinbox_inputmethodevent_isbase = false;
            KPluralHandlingSpinBox::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kpluralhandlingspinbox_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpluralhandlingspinbox_focusnextprevchild_isbase) {
            kpluralhandlingspinbox_focusnextprevchild_isbase = false;
            return KPluralHandlingSpinBox::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kpluralhandlingspinbox_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpluralhandlingspinbox_eventfilter_isbase) {
            kpluralhandlingspinbox_eventfilter_isbase = false;
            return KPluralHandlingSpinBox::eventFilter(watched, event);
        }
        auto eventfilter_cb = kpluralhandlingspinbox_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpluralhandlingspinbox_childevent_isbase) {
            kpluralhandlingspinbox_childevent_isbase = false;
            KPluralHandlingSpinBox::childEvent(event);
            return;
        }
        auto childevent_cb = kpluralhandlingspinbox_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpluralhandlingspinbox_customevent_isbase) {
            kpluralhandlingspinbox_customevent_isbase = false;
            KPluralHandlingSpinBox::customEvent(event);
            return;
        }
        auto customevent_cb = kpluralhandlingspinbox_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpluralhandlingspinbox_connectnotify_isbase) {
            kpluralhandlingspinbox_connectnotify_isbase = false;
            KPluralHandlingSpinBox::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpluralhandlingspinbox_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpluralhandlingspinbox_disconnectnotify_isbase) {
            kpluralhandlingspinbox_disconnectnotify_isbase = false;
            KPluralHandlingSpinBox::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpluralhandlingspinbox_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (kpluralhandlingspinbox_lineedit_isbase) {
            kpluralhandlingspinbox_lineedit_isbase = false;
            return KPluralHandlingSpinBox::lineEdit();
        }
        auto lineedit_cb = kpluralhandlingspinbox_lineedit_callback;
        if (lineedit_cb) {
            QLineEdit* callback_ret = lineedit_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::lineEdit();
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (kpluralhandlingspinbox_setlineedit_isbase) {
            kpluralhandlingspinbox_setlineedit_isbase = false;
            KPluralHandlingSpinBox::setLineEdit(edit);
            return;
        }
        auto setlineedit_cb = kpluralhandlingspinbox_setlineedit_callback;
        if (setlineedit_cb) {
            QLineEdit* cbval1 = edit;

            setlineedit_cb(this, cbval1);
            return;
        }
        KPluralHandlingSpinBox::setLineEdit(edit);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpluralhandlingspinbox_updatemicrofocus_isbase) {
            kpluralhandlingspinbox_updatemicrofocus_isbase = false;
            KPluralHandlingSpinBox::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kpluralhandlingspinbox_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KPluralHandlingSpinBox::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpluralhandlingspinbox_create_isbase) {
            kpluralhandlingspinbox_create_isbase = false;
            KPluralHandlingSpinBox::create();
            return;
        }
        auto create_cb = kpluralhandlingspinbox_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KPluralHandlingSpinBox::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpluralhandlingspinbox_destroy_isbase) {
            kpluralhandlingspinbox_destroy_isbase = false;
            KPluralHandlingSpinBox::destroy();
            return;
        }
        auto destroy_cb = kpluralhandlingspinbox_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KPluralHandlingSpinBox::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpluralhandlingspinbox_focusnextchild_isbase) {
            kpluralhandlingspinbox_focusnextchild_isbase = false;
            return KPluralHandlingSpinBox::focusNextChild();
        }
        auto focusnextchild_cb = kpluralhandlingspinbox_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpluralhandlingspinbox_focuspreviouschild_isbase) {
            kpluralhandlingspinbox_focuspreviouschild_isbase = false;
            return KPluralHandlingSpinBox::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kpluralhandlingspinbox_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpluralhandlingspinbox_sender_isbase) {
            kpluralhandlingspinbox_sender_isbase = false;
            return KPluralHandlingSpinBox::sender();
        }
        auto sender_cb = kpluralhandlingspinbox_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPluralHandlingSpinBox::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpluralhandlingspinbox_sendersignalindex_isbase) {
            kpluralhandlingspinbox_sendersignalindex_isbase = false;
            return KPluralHandlingSpinBox::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpluralhandlingspinbox_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpluralhandlingspinbox_receivers_isbase) {
            kpluralhandlingspinbox_receivers_isbase = false;
            return KPluralHandlingSpinBox::receivers(signal);
        }
        auto receivers_cb = kpluralhandlingspinbox_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPluralHandlingSpinBox::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpluralhandlingspinbox_issignalconnected_isbase) {
            kpluralhandlingspinbox_issignalconnected_isbase = false;
            return KPluralHandlingSpinBox::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpluralhandlingspinbox_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPluralHandlingSpinBox::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpluralhandlingspinbox_getdecodedmetricf_isbase) {
            kpluralhandlingspinbox_getdecodedmetricf_isbase = false;
            return KPluralHandlingSpinBox::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kpluralhandlingspinbox_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KPluralHandlingSpinBox::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KPluralHandlingSpinBox_Event(KPluralHandlingSpinBox* self, QEvent* event);
    friend bool KPluralHandlingSpinBox_SuperEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend int KPluralHandlingSpinBox_Validate(const KPluralHandlingSpinBox* self, libqt_string input, int* pos);
    friend int KPluralHandlingSpinBox_SuperValidate(const KPluralHandlingSpinBox* self, libqt_string input, int* pos);
    friend int KPluralHandlingSpinBox_ValueFromText(const KPluralHandlingSpinBox* self, const libqt_string text);
    friend int KPluralHandlingSpinBox_SuperValueFromText(const KPluralHandlingSpinBox* self, const libqt_string text);
    friend libqt_string KPluralHandlingSpinBox_TextFromValue(const KPluralHandlingSpinBox* self, int val);
    friend libqt_string KPluralHandlingSpinBox_SuperTextFromValue(const KPluralHandlingSpinBox* self, int val);
    friend void KPluralHandlingSpinBox_Fixup(const KPluralHandlingSpinBox* self, libqt_string str);
    friend void KPluralHandlingSpinBox_SuperFixup(const KPluralHandlingSpinBox* self, libqt_string str);
    friend void KPluralHandlingSpinBox_ResizeEvent(KPluralHandlingSpinBox* self, QResizeEvent* event);
    friend void KPluralHandlingSpinBox_SuperResizeEvent(KPluralHandlingSpinBox* self, QResizeEvent* event);
    friend void KPluralHandlingSpinBox_KeyPressEvent(KPluralHandlingSpinBox* self, QKeyEvent* event);
    friend void KPluralHandlingSpinBox_SuperKeyPressEvent(KPluralHandlingSpinBox* self, QKeyEvent* event);
    friend void KPluralHandlingSpinBox_KeyReleaseEvent(KPluralHandlingSpinBox* self, QKeyEvent* event);
    friend void KPluralHandlingSpinBox_SuperKeyReleaseEvent(KPluralHandlingSpinBox* self, QKeyEvent* event);
    friend void KPluralHandlingSpinBox_WheelEvent(KPluralHandlingSpinBox* self, QWheelEvent* event);
    friend void KPluralHandlingSpinBox_SuperWheelEvent(KPluralHandlingSpinBox* self, QWheelEvent* event);
    friend void KPluralHandlingSpinBox_FocusInEvent(KPluralHandlingSpinBox* self, QFocusEvent* event);
    friend void KPluralHandlingSpinBox_SuperFocusInEvent(KPluralHandlingSpinBox* self, QFocusEvent* event);
    friend void KPluralHandlingSpinBox_FocusOutEvent(KPluralHandlingSpinBox* self, QFocusEvent* event);
    friend void KPluralHandlingSpinBox_SuperFocusOutEvent(KPluralHandlingSpinBox* self, QFocusEvent* event);
    friend void KPluralHandlingSpinBox_ContextMenuEvent(KPluralHandlingSpinBox* self, QContextMenuEvent* event);
    friend void KPluralHandlingSpinBox_SuperContextMenuEvent(KPluralHandlingSpinBox* self, QContextMenuEvent* event);
    friend void KPluralHandlingSpinBox_ChangeEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_SuperChangeEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_CloseEvent(KPluralHandlingSpinBox* self, QCloseEvent* event);
    friend void KPluralHandlingSpinBox_SuperCloseEvent(KPluralHandlingSpinBox* self, QCloseEvent* event);
    friend void KPluralHandlingSpinBox_HideEvent(KPluralHandlingSpinBox* self, QHideEvent* event);
    friend void KPluralHandlingSpinBox_SuperHideEvent(KPluralHandlingSpinBox* self, QHideEvent* event);
    friend void KPluralHandlingSpinBox_MousePressEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperMousePressEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_MouseReleaseEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperMouseReleaseEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_MouseMoveEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperMouseMoveEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_TimerEvent(KPluralHandlingSpinBox* self, QTimerEvent* event);
    friend void KPluralHandlingSpinBox_SuperTimerEvent(KPluralHandlingSpinBox* self, QTimerEvent* event);
    friend void KPluralHandlingSpinBox_PaintEvent(KPluralHandlingSpinBox* self, QPaintEvent* event);
    friend void KPluralHandlingSpinBox_SuperPaintEvent(KPluralHandlingSpinBox* self, QPaintEvent* event);
    friend void KPluralHandlingSpinBox_ShowEvent(KPluralHandlingSpinBox* self, QShowEvent* event);
    friend void KPluralHandlingSpinBox_SuperShowEvent(KPluralHandlingSpinBox* self, QShowEvent* event);
    friend void KPluralHandlingSpinBox_InitStyleOption(const KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option);
    friend void KPluralHandlingSpinBox_SuperInitStyleOption(const KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option);
    friend int KPluralHandlingSpinBox_StepEnabled(const KPluralHandlingSpinBox* self);
    friend int KPluralHandlingSpinBox_SuperStepEnabled(const KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_MouseDoubleClickEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_SuperMouseDoubleClickEvent(KPluralHandlingSpinBox* self, QMouseEvent* event);
    friend void KPluralHandlingSpinBox_EnterEvent(KPluralHandlingSpinBox* self, QEnterEvent* event);
    friend void KPluralHandlingSpinBox_SuperEnterEvent(KPluralHandlingSpinBox* self, QEnterEvent* event);
    friend void KPluralHandlingSpinBox_LeaveEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_SuperLeaveEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_MoveEvent(KPluralHandlingSpinBox* self, QMoveEvent* event);
    friend void KPluralHandlingSpinBox_SuperMoveEvent(KPluralHandlingSpinBox* self, QMoveEvent* event);
    friend void KPluralHandlingSpinBox_TabletEvent(KPluralHandlingSpinBox* self, QTabletEvent* event);
    friend void KPluralHandlingSpinBox_SuperTabletEvent(KPluralHandlingSpinBox* self, QTabletEvent* event);
    friend void KPluralHandlingSpinBox_ActionEvent(KPluralHandlingSpinBox* self, QActionEvent* event);
    friend void KPluralHandlingSpinBox_SuperActionEvent(KPluralHandlingSpinBox* self, QActionEvent* event);
    friend void KPluralHandlingSpinBox_DragEnterEvent(KPluralHandlingSpinBox* self, QDragEnterEvent* event);
    friend void KPluralHandlingSpinBox_SuperDragEnterEvent(KPluralHandlingSpinBox* self, QDragEnterEvent* event);
    friend void KPluralHandlingSpinBox_DragMoveEvent(KPluralHandlingSpinBox* self, QDragMoveEvent* event);
    friend void KPluralHandlingSpinBox_SuperDragMoveEvent(KPluralHandlingSpinBox* self, QDragMoveEvent* event);
    friend void KPluralHandlingSpinBox_DragLeaveEvent(KPluralHandlingSpinBox* self, QDragLeaveEvent* event);
    friend void KPluralHandlingSpinBox_SuperDragLeaveEvent(KPluralHandlingSpinBox* self, QDragLeaveEvent* event);
    friend void KPluralHandlingSpinBox_DropEvent(KPluralHandlingSpinBox* self, QDropEvent* event);
    friend void KPluralHandlingSpinBox_SuperDropEvent(KPluralHandlingSpinBox* self, QDropEvent* event);
    friend bool KPluralHandlingSpinBox_NativeEvent(KPluralHandlingSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPluralHandlingSpinBox_SuperNativeEvent(KPluralHandlingSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KPluralHandlingSpinBox_Metric(const KPluralHandlingSpinBox* self, int param1);
    friend int KPluralHandlingSpinBox_SuperMetric(const KPluralHandlingSpinBox* self, int param1);
    friend void KPluralHandlingSpinBox_InitPainter(const KPluralHandlingSpinBox* self, QPainter* painter);
    friend void KPluralHandlingSpinBox_SuperInitPainter(const KPluralHandlingSpinBox* self, QPainter* painter);
    friend QPaintDevice* KPluralHandlingSpinBox_Redirected(const KPluralHandlingSpinBox* self, QPoint* offset);
    friend QPaintDevice* KPluralHandlingSpinBox_SuperRedirected(const KPluralHandlingSpinBox* self, QPoint* offset);
    friend QPainter* KPluralHandlingSpinBox_SharedPainter(const KPluralHandlingSpinBox* self);
    friend QPainter* KPluralHandlingSpinBox_SuperSharedPainter(const KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_InputMethodEvent(KPluralHandlingSpinBox* self, QInputMethodEvent* param1);
    friend void KPluralHandlingSpinBox_SuperInputMethodEvent(KPluralHandlingSpinBox* self, QInputMethodEvent* param1);
    friend bool KPluralHandlingSpinBox_FocusNextPrevChild(KPluralHandlingSpinBox* self, bool next);
    friend bool KPluralHandlingSpinBox_SuperFocusNextPrevChild(KPluralHandlingSpinBox* self, bool next);
    friend void KPluralHandlingSpinBox_ChildEvent(KPluralHandlingSpinBox* self, QChildEvent* event);
    friend void KPluralHandlingSpinBox_SuperChildEvent(KPluralHandlingSpinBox* self, QChildEvent* event);
    friend void KPluralHandlingSpinBox_CustomEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_SuperCustomEvent(KPluralHandlingSpinBox* self, QEvent* event);
    friend void KPluralHandlingSpinBox_ConnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal);
    friend void KPluralHandlingSpinBox_SuperConnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal);
    friend void KPluralHandlingSpinBox_DisconnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal);
    friend void KPluralHandlingSpinBox_SuperDisconnectNotify(KPluralHandlingSpinBox* self, const QMetaMethod* signal);
    friend QLineEdit* KPluralHandlingSpinBox_LineEdit(const KPluralHandlingSpinBox* self);
    friend QLineEdit* KPluralHandlingSpinBox_SuperLineEdit(const KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_SetLineEdit(KPluralHandlingSpinBox* self, QLineEdit* edit);
    friend void KPluralHandlingSpinBox_SuperSetLineEdit(KPluralHandlingSpinBox* self, QLineEdit* edit);
    friend void KPluralHandlingSpinBox_UpdateMicroFocus(KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_SuperUpdateMicroFocus(KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_Create(KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_SuperCreate(KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_Destroy(KPluralHandlingSpinBox* self);
    friend void KPluralHandlingSpinBox_SuperDestroy(KPluralHandlingSpinBox* self);
    friend bool KPluralHandlingSpinBox_FocusNextChild(KPluralHandlingSpinBox* self);
    friend bool KPluralHandlingSpinBox_SuperFocusNextChild(KPluralHandlingSpinBox* self);
    friend bool KPluralHandlingSpinBox_FocusPreviousChild(KPluralHandlingSpinBox* self);
    friend bool KPluralHandlingSpinBox_SuperFocusPreviousChild(KPluralHandlingSpinBox* self);
    friend QObject* KPluralHandlingSpinBox_Sender(const KPluralHandlingSpinBox* self);
    friend QObject* KPluralHandlingSpinBox_SuperSender(const KPluralHandlingSpinBox* self);
    friend int KPluralHandlingSpinBox_SenderSignalIndex(const KPluralHandlingSpinBox* self);
    friend int KPluralHandlingSpinBox_SuperSenderSignalIndex(const KPluralHandlingSpinBox* self);
    friend int KPluralHandlingSpinBox_Receivers(const KPluralHandlingSpinBox* self, const char* signal);
    friend int KPluralHandlingSpinBox_SuperReceivers(const KPluralHandlingSpinBox* self, const char* signal);
    friend bool KPluralHandlingSpinBox_IsSignalConnected(const KPluralHandlingSpinBox* self, const QMetaMethod* signal);
    friend bool KPluralHandlingSpinBox_SuperIsSignalConnected(const KPluralHandlingSpinBox* self, const QMetaMethod* signal);
    friend double KPluralHandlingSpinBox_GetDecodedMetricF(const KPluralHandlingSpinBox* self, int metricA, int metricB);
    friend double KPluralHandlingSpinBox_SuperGetDecodedMetricF(const KPluralHandlingSpinBox* self, int metricA, int metricB);
};

#endif
