#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLCOMBOBOX_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolComboBox so that we can call protected methods
class VirtualTextGrammarCheckLanguageToolComboBox final : public TextGrammarCheck::LanguageToolComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckLanguageToolComboBox = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__LanguageToolComboBox_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__LanguageToolComboBox_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolComboBox*, const char*);
    using TextGrammarCheck__LanguageToolComboBox_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolComboBox*, int, int, void**);
    using TextGrammarCheck__LanguageToolComboBox_SetModel_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QAbstractItemModel*);
    using TextGrammarCheck__LanguageToolComboBox_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback = void (*)();
    using TextGrammarCheck__LanguageToolComboBox_HidePopup_Callback = void (*)();
    using TextGrammarCheck__LanguageToolComboBox_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolComboBox*, int);
    using TextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QShowEvent*);
    using TextGrammarCheck__LanguageToolComboBox_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QHideEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback = void (*)(const TextGrammarCheck__LanguageToolComboBox*, QStyleOptionComboBox*);
    using TextGrammarCheck__LanguageToolComboBox_DevType_Callback = int (*)();
    using TextGrammarCheck__LanguageToolComboBox_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, bool);
    using TextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolComboBox*, int);
    using TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QActionEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolComboBox_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QDropEvent*);
    using TextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolComboBox_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolComboBox*, int);
    using TextGrammarCheck__LanguageToolComboBox_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolComboBox*, QPainter*);
    using TextGrammarCheck__LanguageToolComboBox_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolComboBox*, QPoint*);
    using TextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, bool);
    using TextGrammarCheck__LanguageToolComboBox_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolComboBox*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QChildEvent*);
    using TextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QEvent*);
    using TextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolComboBox*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__LanguageToolComboBox_Create_Callback = void (*)();
    using TextGrammarCheck__LanguageToolComboBox_Destroy_Callback = void (*)();
    using TextGrammarCheck__LanguageToolComboBox_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolComboBox_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__LanguageToolComboBox_Receivers_Callback = int (*)(const TextGrammarCheck__LanguageToolComboBox*, const char*);
    using TextGrammarCheck__LanguageToolComboBox_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__LanguageToolComboBox*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__LanguageToolComboBox*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__LanguageToolComboBox_MetaObject_Callback textgrammarcheck__languagetoolcombobox_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Metacast_Callback textgrammarcheck__languagetoolcombobox_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Metacall_Callback textgrammarcheck__languagetoolcombobox_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SetModel_Callback textgrammarcheck__languagetoolcombobox_setmodel_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SizeHint_Callback textgrammarcheck__languagetoolcombobox_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback textgrammarcheck__languagetoolcombobox_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback textgrammarcheck__languagetoolcombobox_showpopup_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HidePopup_Callback textgrammarcheck__languagetoolcombobox_hidepopup_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Event_Callback textgrammarcheck__languagetoolcombobox_event_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback textgrammarcheck__languagetoolcombobox_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback textgrammarcheck__languagetoolcombobox_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback textgrammarcheck__languagetoolcombobox_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback textgrammarcheck__languagetoolcombobox_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback textgrammarcheck__languagetoolcombobox_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback textgrammarcheck__languagetoolcombobox_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback textgrammarcheck__languagetoolcombobox_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HideEvent_Callback textgrammarcheck__languagetoolcombobox_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback textgrammarcheck__languagetoolcombobox_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback textgrammarcheck__languagetoolcombobox_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback textgrammarcheck__languagetoolcombobox_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback textgrammarcheck__languagetoolcombobox_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback textgrammarcheck__languagetoolcombobox_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback textgrammarcheck__languagetoolcombobox_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback textgrammarcheck__languagetoolcombobox_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback textgrammarcheck__languagetoolcombobox_initstyleoption_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DevType_Callback textgrammarcheck__languagetoolcombobox_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SetVisible_Callback textgrammarcheck__languagetoolcombobox_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback textgrammarcheck__languagetoolcombobox_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback textgrammarcheck__languagetoolcombobox_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback textgrammarcheck__languagetoolcombobox_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback textgrammarcheck__languagetoolcombobox_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback textgrammarcheck__languagetoolcombobox_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback textgrammarcheck__languagetoolcombobox_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback textgrammarcheck__languagetoolcombobox_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback textgrammarcheck__languagetoolcombobox_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback textgrammarcheck__languagetoolcombobox_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback textgrammarcheck__languagetoolcombobox_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback textgrammarcheck__languagetoolcombobox_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback textgrammarcheck__languagetoolcombobox_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback textgrammarcheck__languagetoolcombobox_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DropEvent_Callback textgrammarcheck__languagetoolcombobox_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback textgrammarcheck__languagetoolcombobox_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Metric_Callback textgrammarcheck__languagetoolcombobox_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_InitPainter_Callback textgrammarcheck__languagetoolcombobox_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Redirected_Callback textgrammarcheck__languagetoolcombobox_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback textgrammarcheck__languagetoolcombobox_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback textgrammarcheck__languagetoolcombobox_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_EventFilter_Callback textgrammarcheck__languagetoolcombobox_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback textgrammarcheck__languagetoolcombobox_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback textgrammarcheck__languagetoolcombobox_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback textgrammarcheck__languagetoolcombobox_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback textgrammarcheck__languagetoolcombobox_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback textgrammarcheck__languagetoolcombobox_disconnectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_Callback textgrammarcheck__languagetoolcombobox_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Create_Callback textgrammarcheck__languagetoolcombobox_create_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Destroy_Callback textgrammarcheck__languagetoolcombobox_destroy_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusNextChild_Callback textgrammarcheck__languagetoolcombobox_focusnextchild_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_Callback textgrammarcheck__languagetoolcombobox_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Sender_Callback textgrammarcheck__languagetoolcombobox_sender_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_Callback textgrammarcheck__languagetoolcombobox_sendersignalindex_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_Receivers_Callback textgrammarcheck__languagetoolcombobox_receivers_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_IsSignalConnected_Callback textgrammarcheck__languagetoolcombobox_issignalconnected_callback = nullptr;
    TextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_Callback textgrammarcheck__languagetoolcombobox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__languagetoolcombobox_metaobject_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_metacast_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_metacall_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_setmodel_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_sizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_showpopup_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_hidepopup_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_event_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_focusinevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_changeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_resizeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_paintevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_showevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_hideevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_keypressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_wheelevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_initstyleoption_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_devtype_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_setvisible_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_paintengine_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_enterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_leaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_moveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_closeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_tabletevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_actionevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_dropevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_nativeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_metric_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_initpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_redirected_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_eventfilter_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_timerevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_childevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_customevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_connectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_create_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_destroy_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_sender_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_receivers_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__languagetoolcombobox_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckLanguageToolComboBox(QWidget* parent) : TextGrammarCheck::LanguageToolComboBox(parent) {};
    VirtualTextGrammarCheckLanguageToolComboBox() : TextGrammarCheck::LanguageToolComboBox() {};

    // Callback setters
    inline void setTextGrammarCheck__LanguageToolComboBox_MetaObject_Callback(TextGrammarCheck__LanguageToolComboBox_MetaObject_Callback cb) { textgrammarcheck__languagetoolcombobox_metaobject_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Metacast_Callback(TextGrammarCheck__LanguageToolComboBox_Metacast_Callback cb) { textgrammarcheck__languagetoolcombobox_metacast_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Metacall_Callback(TextGrammarCheck__LanguageToolComboBox_Metacall_Callback cb) { textgrammarcheck__languagetoolcombobox_metacall_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SetModel_Callback(TextGrammarCheck__LanguageToolComboBox_SetModel_Callback cb) { textgrammarcheck__languagetoolcombobox_setmodel_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SizeHint_Callback(TextGrammarCheck__LanguageToolComboBox_SizeHint_Callback cb) { textgrammarcheck__languagetoolcombobox_sizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback(TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback cb) { textgrammarcheck__languagetoolcombobox_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback(TextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback cb) { textgrammarcheck__languagetoolcombobox_showpopup_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HidePopup_Callback(TextGrammarCheck__LanguageToolComboBox_HidePopup_Callback cb) { textgrammarcheck__languagetoolcombobox_hidepopup_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Event_Callback(TextGrammarCheck__LanguageToolComboBox_Event_Callback cb) { textgrammarcheck__languagetoolcombobox_event_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback(TextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback cb) { textgrammarcheck__languagetoolcombobox_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback(TextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback(TextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback(TextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_changeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback(TextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback(TextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_paintevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback(TextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_showevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HideEvent_Callback(TextGrammarCheck__LanguageToolComboBox_HideEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_hideevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback(TextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback(TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback(TextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback(TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback(TextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback(TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback(TextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback(TextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback cb) { textgrammarcheck__languagetoolcombobox_initstyleoption_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DevType_Callback(TextGrammarCheck__LanguageToolComboBox_DevType_Callback cb) { textgrammarcheck__languagetoolcombobox_devtype_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SetVisible_Callback(TextGrammarCheck__LanguageToolComboBox_SetVisible_Callback cb) { textgrammarcheck__languagetoolcombobox_setvisible_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback(TextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback cb) { textgrammarcheck__languagetoolcombobox_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback(TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback cb) { textgrammarcheck__languagetoolcombobox_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback(TextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback cb) { textgrammarcheck__languagetoolcombobox_paintengine_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback(TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback(TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback(TextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_enterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback(TextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback(TextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_moveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback(TextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_closeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback(TextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback(TextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_actionevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback(TextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback(TextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback(TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DropEvent_Callback(TextGrammarCheck__LanguageToolComboBox_DropEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_dropevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback(TextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Metric_Callback(TextGrammarCheck__LanguageToolComboBox_Metric_Callback cb) { textgrammarcheck__languagetoolcombobox_metric_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InitPainter_Callback(TextGrammarCheck__LanguageToolComboBox_InitPainter_Callback cb) { textgrammarcheck__languagetoolcombobox_initpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Redirected_Callback(TextGrammarCheck__LanguageToolComboBox_Redirected_Callback cb) { textgrammarcheck__languagetoolcombobox_redirected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback(TextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback cb) { textgrammarcheck__languagetoolcombobox_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback(TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback cb) { textgrammarcheck__languagetoolcombobox_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_EventFilter_Callback(TextGrammarCheck__LanguageToolComboBox_EventFilter_Callback cb) { textgrammarcheck__languagetoolcombobox_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback(TextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_timerevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback(TextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_childevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback(TextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback cb) { textgrammarcheck__languagetoolcombobox_customevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback(TextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback cb) { textgrammarcheck__languagetoolcombobox_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback(TextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback cb) { textgrammarcheck__languagetoolcombobox_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_Callback(TextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_Callback cb) { textgrammarcheck__languagetoolcombobox_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Create_Callback(TextGrammarCheck__LanguageToolComboBox_Create_Callback cb) { textgrammarcheck__languagetoolcombobox_create_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Destroy_Callback(TextGrammarCheck__LanguageToolComboBox_Destroy_Callback cb) { textgrammarcheck__languagetoolcombobox_destroy_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusNextChild_Callback(TextGrammarCheck__LanguageToolComboBox_FocusNextChild_Callback cb) { textgrammarcheck__languagetoolcombobox_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_Callback(TextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_Callback cb) { textgrammarcheck__languagetoolcombobox_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Sender_Callback(TextGrammarCheck__LanguageToolComboBox_Sender_Callback cb) { textgrammarcheck__languagetoolcombobox_sender_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_Callback(TextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_Callback cb) { textgrammarcheck__languagetoolcombobox_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Receivers_Callback(TextGrammarCheck__LanguageToolComboBox_Receivers_Callback cb) { textgrammarcheck__languagetoolcombobox_receivers_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_IsSignalConnected_Callback(TextGrammarCheck__LanguageToolComboBox_IsSignalConnected_Callback cb) { textgrammarcheck__languagetoolcombobox_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_Callback(TextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_Callback cb) { textgrammarcheck__languagetoolcombobox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__LanguageToolComboBox_MetaObject_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_metaobject_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Metacast_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_metacast_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Metacall_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_metacall_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SetModel_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_setmodel_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_sizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ShowPopup_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_showpopup_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HidePopup_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_hidepopup_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Event_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_event_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusInEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ChangeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_changeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ResizeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_PaintEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_paintevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ShowEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_showevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HideEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_hideevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MousePressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_WheelEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InitStyleOption_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_initstyleoption_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DevType_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_devtype_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SetVisible_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_setvisible_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_PaintEngine_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_paintengine_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_EnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_enterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_LeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_MoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_moveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_CloseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_closeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_TabletEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ActionEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_actionevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DropEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_dropevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_NativeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Metric_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_metric_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_InitPainter_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_initpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Redirected_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_redirected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SharedPainter_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_EventFilter_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_TimerEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_timerevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ChildEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_childevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_CustomEvent_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_customevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_ConnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Create_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_create_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Destroy_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_destroy_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusNextChild_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Sender_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_sender_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_Receivers_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_receivers_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__languagetoolcombobox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolcombobox_metaobject_isbase) {
            textgrammarcheck__languagetoolcombobox_metaobject_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__languagetoolcombobox_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolcombobox_metacast_isbase) {
            textgrammarcheck__languagetoolcombobox_metacast_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__languagetoolcombobox_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolcombobox_metacall_isbase) {
            textgrammarcheck__languagetoolcombobox_metacall_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__languagetoolcombobox_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (textgrammarcheck__languagetoolcombobox_setmodel_isbase) {
            textgrammarcheck__languagetoolcombobox_setmodel_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::setModel(model);
            return;
        }
        auto setmodel_cb = textgrammarcheck__languagetoolcombobox_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolcombobox_sizehint_isbase) {
            textgrammarcheck__languagetoolcombobox_sizehint_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__languagetoolcombobox_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolcombobox_minimumsizehint_isbase) {
            textgrammarcheck__languagetoolcombobox_minimumsizehint_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__languagetoolcombobox_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (textgrammarcheck__languagetoolcombobox_showpopup_isbase) {
            textgrammarcheck__languagetoolcombobox_showpopup_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::showPopup();
            return;
        }
        auto showpopup_cb = textgrammarcheck__languagetoolcombobox_showpopup_callback;
        if (showpopup_cb) {
            showpopup_cb();
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (textgrammarcheck__languagetoolcombobox_hidepopup_isbase) {
            textgrammarcheck__languagetoolcombobox_hidepopup_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::hidePopup();
            return;
        }
        auto hidepopup_cb = textgrammarcheck__languagetoolcombobox_hidepopup_callback;
        if (hidepopup_cb) {
            hidepopup_cb();
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_event_isbase) {
            textgrammarcheck__languagetoolcombobox_event_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::event(event);
        }
        auto event_cb = textgrammarcheck__languagetoolcombobox_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolcombobox_inputmethodquery_isbase) {
            textgrammarcheck__languagetoolcombobox_inputmethodquery_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__languagetoolcombobox_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_focusinevent_isbase) {
            textgrammarcheck__languagetoolcombobox_focusinevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__languagetoolcombobox_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_focusoutevent_isbase) {
            textgrammarcheck__languagetoolcombobox_focusoutevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__languagetoolcombobox_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_changeevent_isbase) {
            textgrammarcheck__languagetoolcombobox_changeevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::changeEvent(e);
            return;
        }
        auto changeevent_cb = textgrammarcheck__languagetoolcombobox_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_resizeevent_isbase) {
            textgrammarcheck__languagetoolcombobox_resizeevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__languagetoolcombobox_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_paintevent_isbase) {
            textgrammarcheck__languagetoolcombobox_paintevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::paintEvent(e);
            return;
        }
        auto paintevent_cb = textgrammarcheck__languagetoolcombobox_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_showevent_isbase) {
            textgrammarcheck__languagetoolcombobox_showevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::showEvent(e);
            return;
        }
        auto showevent_cb = textgrammarcheck__languagetoolcombobox_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = e;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_hideevent_isbase) {
            textgrammarcheck__languagetoolcombobox_hideevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::hideEvent(e);
            return;
        }
        auto hideevent_cb = textgrammarcheck__languagetoolcombobox_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = e;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_mousepressevent_isbase) {
            textgrammarcheck__languagetoolcombobox_mousepressevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__languagetoolcombobox_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_mousereleaseevent_isbase) {
            textgrammarcheck__languagetoolcombobox_mousereleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__languagetoolcombobox_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_keypressevent_isbase) {
            textgrammarcheck__languagetoolcombobox_keypressevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__languagetoolcombobox_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_keyreleaseevent_isbase) {
            textgrammarcheck__languagetoolcombobox_keyreleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__languagetoolcombobox_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_wheelevent_isbase) {
            textgrammarcheck__languagetoolcombobox_wheelevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__languagetoolcombobox_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (textgrammarcheck__languagetoolcombobox_contextmenuevent_isbase) {
            textgrammarcheck__languagetoolcombobox_contextmenuevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::contextMenuEvent(e);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__languagetoolcombobox_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = e;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolcombobox_inputmethodevent_isbase) {
            textgrammarcheck__languagetoolcombobox_inputmethodevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__languagetoolcombobox_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (textgrammarcheck__languagetoolcombobox_initstyleoption_isbase) {
            textgrammarcheck__languagetoolcombobox_initstyleoption_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = textgrammarcheck__languagetoolcombobox_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionComboBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolcombobox_devtype_isbase) {
            textgrammarcheck__languagetoolcombobox_devtype_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::devType();
        }
        auto devtype_cb = textgrammarcheck__languagetoolcombobox_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolcombobox_setvisible_isbase) {
            textgrammarcheck__languagetoolcombobox_setvisible_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__languagetoolcombobox_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolcombobox_heightforwidth_isbase) {
            textgrammarcheck__languagetoolcombobox_heightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__languagetoolcombobox_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolcombobox_hasheightforwidth_isbase) {
            textgrammarcheck__languagetoolcombobox_hasheightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__languagetoolcombobox_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolcombobox_paintengine_isbase) {
            textgrammarcheck__languagetoolcombobox_paintengine_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__languagetoolcombobox_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_isbase) {
            textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_mousemoveevent_isbase) {
            textgrammarcheck__languagetoolcombobox_mousemoveevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__languagetoolcombobox_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_enterevent_isbase) {
            textgrammarcheck__languagetoolcombobox_enterevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__languagetoolcombobox_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_leaveevent_isbase) {
            textgrammarcheck__languagetoolcombobox_leaveevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__languagetoolcombobox_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_moveevent_isbase) {
            textgrammarcheck__languagetoolcombobox_moveevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__languagetoolcombobox_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_closeevent_isbase) {
            textgrammarcheck__languagetoolcombobox_closeevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::closeEvent(event);
            return;
        }
        auto closeevent_cb = textgrammarcheck__languagetoolcombobox_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_tabletevent_isbase) {
            textgrammarcheck__languagetoolcombobox_tabletevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__languagetoolcombobox_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_actionevent_isbase) {
            textgrammarcheck__languagetoolcombobox_actionevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__languagetoolcombobox_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dragenterevent_isbase) {
            textgrammarcheck__languagetoolcombobox_dragenterevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__languagetoolcombobox_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dragmoveevent_isbase) {
            textgrammarcheck__languagetoolcombobox_dragmoveevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__languagetoolcombobox_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dragleaveevent_isbase) {
            textgrammarcheck__languagetoolcombobox_dragleaveevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__languagetoolcombobox_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_dropevent_isbase) {
            textgrammarcheck__languagetoolcombobox_dropevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__languagetoolcombobox_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolcombobox_nativeevent_isbase) {
            textgrammarcheck__languagetoolcombobox_nativeevent_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__languagetoolcombobox_nativeevent_callback;
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
        return TextGrammarCheck__LanguageToolComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolcombobox_metric_isbase) {
            textgrammarcheck__languagetoolcombobox_metric_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::metric(param1);
        }
        auto metric_cb = textgrammarcheck__languagetoolcombobox_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolcombobox_initpainter_isbase) {
            textgrammarcheck__languagetoolcombobox_initpainter_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__languagetoolcombobox_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolcombobox_redirected_isbase) {
            textgrammarcheck__languagetoolcombobox_redirected_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__languagetoolcombobox_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolcombobox_sharedpainter_isbase) {
            textgrammarcheck__languagetoolcombobox_sharedpainter_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__languagetoolcombobox_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolcombobox_focusnextprevchild_isbase) {
            textgrammarcheck__languagetoolcombobox_focusnextprevchild_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__languagetoolcombobox_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_eventfilter_isbase) {
            textgrammarcheck__languagetoolcombobox_eventfilter_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__languagetoolcombobox_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_timerevent_isbase) {
            textgrammarcheck__languagetoolcombobox_timerevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__languagetoolcombobox_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_childevent_isbase) {
            textgrammarcheck__languagetoolcombobox_childevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__languagetoolcombobox_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolcombobox_customevent_isbase) {
            textgrammarcheck__languagetoolcombobox_customevent_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__languagetoolcombobox_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolcombobox_connectnotify_isbase) {
            textgrammarcheck__languagetoolcombobox_connectnotify_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__languagetoolcombobox_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolcombobox_disconnectnotify_isbase) {
            textgrammarcheck__languagetoolcombobox_disconnectnotify_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__languagetoolcombobox_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__languagetoolcombobox_updatemicrofocus_isbase) {
            textgrammarcheck__languagetoolcombobox_updatemicrofocus_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__languagetoolcombobox_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__languagetoolcombobox_create_isbase) {
            textgrammarcheck__languagetoolcombobox_create_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::create();
            return;
        }
        auto create_cb = textgrammarcheck__languagetoolcombobox_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__languagetoolcombobox_destroy_isbase) {
            textgrammarcheck__languagetoolcombobox_destroy_isbase = false;
            TextGrammarCheck__LanguageToolComboBox::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__languagetoolcombobox_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__LanguageToolComboBox::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__languagetoolcombobox_focusnextchild_isbase) {
            textgrammarcheck__languagetoolcombobox_focusnextchild_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__languagetoolcombobox_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__languagetoolcombobox_focuspreviouschild_isbase) {
            textgrammarcheck__languagetoolcombobox_focuspreviouschild_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__languagetoolcombobox_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__languagetoolcombobox_sender_isbase) {
            textgrammarcheck__languagetoolcombobox_sender_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::sender();
        }
        auto sender_cb = textgrammarcheck__languagetoolcombobox_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__languagetoolcombobox_sendersignalindex_isbase) {
            textgrammarcheck__languagetoolcombobox_sendersignalindex_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__languagetoolcombobox_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__languagetoolcombobox_receivers_isbase) {
            textgrammarcheck__languagetoolcombobox_receivers_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__languagetoolcombobox_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__languagetoolcombobox_issignalconnected_isbase) {
            textgrammarcheck__languagetoolcombobox_issignalconnected_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__languagetoolcombobox_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolComboBox::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__languagetoolcombobox_getdecodedmetricf_isbase) {
            textgrammarcheck__languagetoolcombobox_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__LanguageToolComboBox::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__languagetoolcombobox_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolComboBox::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolComboBox_FocusInEvent(TextGrammarCheck::LanguageToolComboBox* self, QFocusEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperFocusInEvent(TextGrammarCheck::LanguageToolComboBox* self, QFocusEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_FocusOutEvent(TextGrammarCheck::LanguageToolComboBox* self, QFocusEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperFocusOutEvent(TextGrammarCheck::LanguageToolComboBox* self, QFocusEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_ChangeEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperChangeEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_ResizeEvent(TextGrammarCheck::LanguageToolComboBox* self, QResizeEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperResizeEvent(TextGrammarCheck::LanguageToolComboBox* self, QResizeEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_PaintEvent(TextGrammarCheck::LanguageToolComboBox* self, QPaintEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperPaintEvent(TextGrammarCheck::LanguageToolComboBox* self, QPaintEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_ShowEvent(TextGrammarCheck::LanguageToolComboBox* self, QShowEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperShowEvent(TextGrammarCheck::LanguageToolComboBox* self, QShowEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_HideEvent(TextGrammarCheck::LanguageToolComboBox* self, QHideEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperHideEvent(TextGrammarCheck::LanguageToolComboBox* self, QHideEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_MousePressEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMousePressEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_KeyPressEvent(TextGrammarCheck::LanguageToolComboBox* self, QKeyEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperKeyPressEvent(TextGrammarCheck::LanguageToolComboBox* self, QKeyEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent(TextGrammarCheck::LanguageToolComboBox* self, QKeyEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolComboBox* self, QKeyEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_WheelEvent(TextGrammarCheck::LanguageToolComboBox* self, QWheelEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperWheelEvent(TextGrammarCheck::LanguageToolComboBox* self, QWheelEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent(TextGrammarCheck::LanguageToolComboBox* self, QContextMenuEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperContextMenuEvent(TextGrammarCheck::LanguageToolComboBox* self, QContextMenuEvent* e);
    friend void TextGrammarCheck__LanguageToolComboBox_InputMethodEvent(TextGrammarCheck::LanguageToolComboBox* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperInputMethodEvent(TextGrammarCheck::LanguageToolComboBox* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__LanguageToolComboBox_InitStyleOption(const TextGrammarCheck::LanguageToolComboBox* self, QStyleOptionComboBox* option);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperInitStyleOption(const TextGrammarCheck::LanguageToolComboBox* self, QStyleOptionComboBox* option);
    friend void TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_EnterEvent(TextGrammarCheck::LanguageToolComboBox* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperEnterEvent(TextGrammarCheck::LanguageToolComboBox* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_LeaveEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperLeaveEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_MoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_CloseEvent(TextGrammarCheck::LanguageToolComboBox* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperCloseEvent(TextGrammarCheck::LanguageToolComboBox* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_TabletEvent(TextGrammarCheck::LanguageToolComboBox* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperTabletEvent(TextGrammarCheck::LanguageToolComboBox* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_ActionEvent(TextGrammarCheck::LanguageToolComboBox* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperActionEvent(TextGrammarCheck::LanguageToolComboBox* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_DragEnterEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDragEnterEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_DragMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDragMoveEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolComboBox* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_DropEvent(TextGrammarCheck::LanguageToolComboBox* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDropEvent(TextGrammarCheck::LanguageToolComboBox* self, QDropEvent* event);
    friend bool TextGrammarCheck__LanguageToolComboBox_NativeEvent(TextGrammarCheck::LanguageToolComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__LanguageToolComboBox_SuperNativeEvent(TextGrammarCheck::LanguageToolComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int TextGrammarCheck__LanguageToolComboBox_Metric(const TextGrammarCheck::LanguageToolComboBox* self, int param1);
    friend int TextGrammarCheck__LanguageToolComboBox_SuperMetric(const TextGrammarCheck::LanguageToolComboBox* self, int param1);
    friend void TextGrammarCheck__LanguageToolComboBox_InitPainter(const TextGrammarCheck::LanguageToolComboBox* self, QPainter* painter);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperInitPainter(const TextGrammarCheck::LanguageToolComboBox* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolComboBox_Redirected(const TextGrammarCheck::LanguageToolComboBox* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__LanguageToolComboBox_SuperRedirected(const TextGrammarCheck::LanguageToolComboBox* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolComboBox_SharedPainter(const TextGrammarCheck::LanguageToolComboBox* self);
    friend QPainter* TextGrammarCheck__LanguageToolComboBox_SuperSharedPainter(const TextGrammarCheck::LanguageToolComboBox* self);
    friend bool TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild(TextGrammarCheck::LanguageToolComboBox* self, bool next);
    friend bool TextGrammarCheck__LanguageToolComboBox_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolComboBox* self, bool next);
    friend void TextGrammarCheck__LanguageToolComboBox_TimerEvent(TextGrammarCheck::LanguageToolComboBox* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperTimerEvent(TextGrammarCheck::LanguageToolComboBox* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_ChildEvent(TextGrammarCheck::LanguageToolComboBox* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperChildEvent(TextGrammarCheck::LanguageToolComboBox* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_CustomEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperCustomEvent(TextGrammarCheck::LanguageToolComboBox* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolComboBox_ConnectNotify(TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperConnectNotify(TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolComboBox_DisconnectNotify(TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDisconnectNotify(TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus(TextGrammarCheck::LanguageToolComboBox* self);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperUpdateMicroFocus(TextGrammarCheck::LanguageToolComboBox* self);
    friend void TextGrammarCheck__LanguageToolComboBox_Create(TextGrammarCheck::LanguageToolComboBox* self);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperCreate(TextGrammarCheck::LanguageToolComboBox* self);
    friend void TextGrammarCheck__LanguageToolComboBox_Destroy(TextGrammarCheck::LanguageToolComboBox* self);
    friend void TextGrammarCheck__LanguageToolComboBox_SuperDestroy(TextGrammarCheck::LanguageToolComboBox* self);
    friend bool TextGrammarCheck__LanguageToolComboBox_FocusNextChild(TextGrammarCheck::LanguageToolComboBox* self);
    friend bool TextGrammarCheck__LanguageToolComboBox_SuperFocusNextChild(TextGrammarCheck::LanguageToolComboBox* self);
    friend bool TextGrammarCheck__LanguageToolComboBox_FocusPreviousChild(TextGrammarCheck::LanguageToolComboBox* self);
    friend bool TextGrammarCheck__LanguageToolComboBox_SuperFocusPreviousChild(TextGrammarCheck::LanguageToolComboBox* self);
    friend QObject* TextGrammarCheck__LanguageToolComboBox_Sender(const TextGrammarCheck::LanguageToolComboBox* self);
    friend QObject* TextGrammarCheck__LanguageToolComboBox_SuperSender(const TextGrammarCheck::LanguageToolComboBox* self);
    friend int TextGrammarCheck__LanguageToolComboBox_SenderSignalIndex(const TextGrammarCheck::LanguageToolComboBox* self);
    friend int TextGrammarCheck__LanguageToolComboBox_SuperSenderSignalIndex(const TextGrammarCheck::LanguageToolComboBox* self);
    friend int TextGrammarCheck__LanguageToolComboBox_Receivers(const TextGrammarCheck::LanguageToolComboBox* self, const char* signal);
    friend int TextGrammarCheck__LanguageToolComboBox_SuperReceivers(const TextGrammarCheck::LanguageToolComboBox* self, const char* signal);
    friend bool TextGrammarCheck__LanguageToolComboBox_IsSignalConnected(const TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__LanguageToolComboBox_SuperIsSignalConnected(const TextGrammarCheck::LanguageToolComboBox* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF(const TextGrammarCheck::LanguageToolComboBox* self, int metricA, int metricB);
    friend double TextGrammarCheck__LanguageToolComboBox_SuperGetDecodedMetricF(const TextGrammarCheck::LanguageToolComboBox* self, int metricA, int metricB);
};

#endif
