#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKRICHTEXTWIDGET_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKRICHTEXTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRichTextWidget so that we can call protected methods
class VirtualKRichTextWidget final : public KRichTextWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKRichTextWidget = true;

    // Virtual class public types (including callbacks)
    using KRichTextWidget_Metacall_Callback = int (*)(KRichTextWidget*, int, int, void**);
    using KRichTextWidget_CreateActions_Callback = QAction** (*)();
    using KRichTextWidget_MouseReleaseEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_KeyPressEvent_Callback = void (*)(KRichTextWidget*, QKeyEvent*);
    using KRichTextWidget_SetReadOnly_Callback = void (*)(KRichTextWidget*, bool);
    using KRichTextWidget_SetCheckSpellingEnabled_Callback = void (*)(KRichTextWidget*, bool);
    using KRichTextWidget_CheckSpellingEnabled_Callback = bool (*)();
    using KRichTextWidget_ShouldBlockBeSpellChecked_Callback = bool (*)(const KRichTextWidget*, libqt_string);
    using KRichTextWidget_CreateHighlighter_Callback = void (*)();
    using KRichTextWidget_MousePopupMenu_Callback = QMenu* (*)();
    using KRichTextWidget_Event_Callback = bool (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_FocusInEvent_Callback = void (*)(KRichTextWidget*, QFocusEvent*);
    using KRichTextWidget_DeleteWordBack_Callback = void (*)();
    using KRichTextWidget_DeleteWordForward_Callback = void (*)();
    using KRichTextWidget_ContextMenuEvent_Callback = void (*)(KRichTextWidget*, QContextMenuEvent*);
    using KRichTextWidget_LoadResource_Callback = QVariant* (*)(KRichTextWidget*, int, QUrl*);
    using KRichTextWidget_InputMethodQuery_Callback = QVariant* (*)(const KRichTextWidget*, int);
    using KRichTextWidget_TimerEvent_Callback = void (*)(KRichTextWidget*, QTimerEvent*);
    using KRichTextWidget_KeyReleaseEvent_Callback = void (*)(KRichTextWidget*, QKeyEvent*);
    using KRichTextWidget_ResizeEvent_Callback = void (*)(KRichTextWidget*, QResizeEvent*);
    using KRichTextWidget_PaintEvent_Callback = void (*)(KRichTextWidget*, QPaintEvent*);
    using KRichTextWidget_MousePressEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_MouseMoveEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_MouseDoubleClickEvent_Callback = void (*)(KRichTextWidget*, QMouseEvent*);
    using KRichTextWidget_FocusNextPrevChild_Callback = bool (*)(KRichTextWidget*, bool);
    using KRichTextWidget_DragEnterEvent_Callback = void (*)(KRichTextWidget*, QDragEnterEvent*);
    using KRichTextWidget_DragLeaveEvent_Callback = void (*)(KRichTextWidget*, QDragLeaveEvent*);
    using KRichTextWidget_DragMoveEvent_Callback = void (*)(KRichTextWidget*, QDragMoveEvent*);
    using KRichTextWidget_DropEvent_Callback = void (*)(KRichTextWidget*, QDropEvent*);
    using KRichTextWidget_FocusOutEvent_Callback = void (*)(KRichTextWidget*, QFocusEvent*);
    using KRichTextWidget_ShowEvent_Callback = void (*)(KRichTextWidget*, QShowEvent*);
    using KRichTextWidget_ChangeEvent_Callback = void (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_WheelEvent_Callback = void (*)(KRichTextWidget*, QWheelEvent*);
    using KRichTextWidget_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using KRichTextWidget_CanInsertFromMimeData_Callback = bool (*)(const KRichTextWidget*, QMimeData*);
    using KRichTextWidget_InsertFromMimeData_Callback = void (*)(KRichTextWidget*, QMimeData*);
    using KRichTextWidget_InputMethodEvent_Callback = void (*)(KRichTextWidget*, QInputMethodEvent*);
    using KRichTextWidget_ScrollContentsBy_Callback = void (*)(KRichTextWidget*, int, int);
    using KRichTextWidget_DoSetTextCursor_Callback = void (*)(KRichTextWidget*, QTextCursor*);
    using KRichTextWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KRichTextWidget_SizeHint_Callback = QSize* (*)();
    using KRichTextWidget_SetupViewport_Callback = void (*)(KRichTextWidget*, QWidget*);
    using KRichTextWidget_EventFilter_Callback = bool (*)(KRichTextWidget*, QObject*, QEvent*);
    using KRichTextWidget_ViewportEvent_Callback = bool (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_ViewportSizeHint_Callback = QSize* (*)();
    using KRichTextWidget_InitStyleOption_Callback = void (*)(const KRichTextWidget*, QStyleOptionFrame*);
    using KRichTextWidget_DevType_Callback = int (*)();
    using KRichTextWidget_SetVisible_Callback = void (*)(KRichTextWidget*, bool);
    using KRichTextWidget_HeightForWidth_Callback = int (*)(const KRichTextWidget*, int);
    using KRichTextWidget_HasHeightForWidth_Callback = bool (*)();
    using KRichTextWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KRichTextWidget_EnterEvent_Callback = void (*)(KRichTextWidget*, QEnterEvent*);
    using KRichTextWidget_LeaveEvent_Callback = void (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_MoveEvent_Callback = void (*)(KRichTextWidget*, QMoveEvent*);
    using KRichTextWidget_CloseEvent_Callback = void (*)(KRichTextWidget*, QCloseEvent*);
    using KRichTextWidget_TabletEvent_Callback = void (*)(KRichTextWidget*, QTabletEvent*);
    using KRichTextWidget_ActionEvent_Callback = void (*)(KRichTextWidget*, QActionEvent*);
    using KRichTextWidget_HideEvent_Callback = void (*)(KRichTextWidget*, QHideEvent*);
    using KRichTextWidget_NativeEvent_Callback = bool (*)(KRichTextWidget*, libqt_string, void*, intptr_t*);
    using KRichTextWidget_Metric_Callback = int (*)(const KRichTextWidget*, int);
    using KRichTextWidget_InitPainter_Callback = void (*)(const KRichTextWidget*, QPainter*);
    using KRichTextWidget_Redirected_Callback = QPaintDevice* (*)(const KRichTextWidget*, QPoint*);
    using KRichTextWidget_SharedPainter_Callback = QPainter* (*)();
    using KRichTextWidget_ChildEvent_Callback = void (*)(KRichTextWidget*, QChildEvent*);
    using KRichTextWidget_CustomEvent_Callback = void (*)(KRichTextWidget*, QEvent*);
    using KRichTextWidget_ConnectNotify_Callback = void (*)(KRichTextWidget*, QMetaMethod*);
    using KRichTextWidget_DisconnectNotify_Callback = void (*)(KRichTextWidget*, QMetaMethod*);
    using KRichTextWidget_SlotDoReplace_Callback = void (*)();
    using KRichTextWidget_SlotReplaceNext_Callback = void (*)();
    using KRichTextWidget_SlotDoFind_Callback = void (*)();
    using KRichTextWidget_SlotFind_Callback = void (*)();
    using KRichTextWidget_SlotFindNext_Callback = void (*)();
    using KRichTextWidget_SlotFindPrevious_Callback = void (*)();
    using KRichTextWidget_SlotReplace_Callback = void (*)();
    using KRichTextWidget_SlotSpeakText_Callback = void (*)();
    using KRichTextWidget_ZoomInF_Callback = void (*)(KRichTextWidget*, float);
    using KRichTextWidget_SetViewportMargins_Callback = void (*)(KRichTextWidget*, int, int, int, int);
    using KRichTextWidget_ViewportMargins_Callback = QMargins* (*)();
    using KRichTextWidget_DrawFrame_Callback = void (*)(KRichTextWidget*, QPainter*);
    using KRichTextWidget_UpdateMicroFocus_Callback = void (*)();
    using KRichTextWidget_Create_Callback = void (*)();
    using KRichTextWidget_Destroy_Callback = void (*)();
    using KRichTextWidget_FocusNextChild_Callback = bool (*)();
    using KRichTextWidget_FocusPreviousChild_Callback = bool (*)();
    using KRichTextWidget_Sender_Callback = QObject* (*)();
    using KRichTextWidget_SenderSignalIndex_Callback = int (*)();
    using KRichTextWidget_Receivers_Callback = int (*)(const KRichTextWidget*, const char*);
    using KRichTextWidget_IsSignalConnected_Callback = bool (*)(const KRichTextWidget*, QMetaMethod*);
    using KRichTextWidget_GetDecodedMetricF_Callback = double (*)(const KRichTextWidget*, int, int);

  protected:
    // Instance callback storage
    KRichTextWidget_Metacall_Callback krichtextwidget_metacall_callback = nullptr;
    KRichTextWidget_CreateActions_Callback krichtextwidget_createactions_callback = nullptr;
    KRichTextWidget_MouseReleaseEvent_Callback krichtextwidget_mousereleaseevent_callback = nullptr;
    KRichTextWidget_KeyPressEvent_Callback krichtextwidget_keypressevent_callback = nullptr;
    KRichTextWidget_SetReadOnly_Callback krichtextwidget_setreadonly_callback = nullptr;
    KRichTextWidget_SetCheckSpellingEnabled_Callback krichtextwidget_setcheckspellingenabled_callback = nullptr;
    KRichTextWidget_CheckSpellingEnabled_Callback krichtextwidget_checkspellingenabled_callback = nullptr;
    KRichTextWidget_ShouldBlockBeSpellChecked_Callback krichtextwidget_shouldblockbespellchecked_callback = nullptr;
    KRichTextWidget_CreateHighlighter_Callback krichtextwidget_createhighlighter_callback = nullptr;
    KRichTextWidget_MousePopupMenu_Callback krichtextwidget_mousepopupmenu_callback = nullptr;
    KRichTextWidget_Event_Callback krichtextwidget_event_callback = nullptr;
    KRichTextWidget_FocusInEvent_Callback krichtextwidget_focusinevent_callback = nullptr;
    KRichTextWidget_DeleteWordBack_Callback krichtextwidget_deletewordback_callback = nullptr;
    KRichTextWidget_DeleteWordForward_Callback krichtextwidget_deletewordforward_callback = nullptr;
    KRichTextWidget_ContextMenuEvent_Callback krichtextwidget_contextmenuevent_callback = nullptr;
    KRichTextWidget_LoadResource_Callback krichtextwidget_loadresource_callback = nullptr;
    KRichTextWidget_InputMethodQuery_Callback krichtextwidget_inputmethodquery_callback = nullptr;
    KRichTextWidget_TimerEvent_Callback krichtextwidget_timerevent_callback = nullptr;
    KRichTextWidget_KeyReleaseEvent_Callback krichtextwidget_keyreleaseevent_callback = nullptr;
    KRichTextWidget_ResizeEvent_Callback krichtextwidget_resizeevent_callback = nullptr;
    KRichTextWidget_PaintEvent_Callback krichtextwidget_paintevent_callback = nullptr;
    KRichTextWidget_MousePressEvent_Callback krichtextwidget_mousepressevent_callback = nullptr;
    KRichTextWidget_MouseMoveEvent_Callback krichtextwidget_mousemoveevent_callback = nullptr;
    KRichTextWidget_MouseDoubleClickEvent_Callback krichtextwidget_mousedoubleclickevent_callback = nullptr;
    KRichTextWidget_FocusNextPrevChild_Callback krichtextwidget_focusnextprevchild_callback = nullptr;
    KRichTextWidget_DragEnterEvent_Callback krichtextwidget_dragenterevent_callback = nullptr;
    KRichTextWidget_DragLeaveEvent_Callback krichtextwidget_dragleaveevent_callback = nullptr;
    KRichTextWidget_DragMoveEvent_Callback krichtextwidget_dragmoveevent_callback = nullptr;
    KRichTextWidget_DropEvent_Callback krichtextwidget_dropevent_callback = nullptr;
    KRichTextWidget_FocusOutEvent_Callback krichtextwidget_focusoutevent_callback = nullptr;
    KRichTextWidget_ShowEvent_Callback krichtextwidget_showevent_callback = nullptr;
    KRichTextWidget_ChangeEvent_Callback krichtextwidget_changeevent_callback = nullptr;
    KRichTextWidget_WheelEvent_Callback krichtextwidget_wheelevent_callback = nullptr;
    KRichTextWidget_CreateMimeDataFromSelection_Callback krichtextwidget_createmimedatafromselection_callback = nullptr;
    KRichTextWidget_CanInsertFromMimeData_Callback krichtextwidget_caninsertfrommimedata_callback = nullptr;
    KRichTextWidget_InsertFromMimeData_Callback krichtextwidget_insertfrommimedata_callback = nullptr;
    KRichTextWidget_InputMethodEvent_Callback krichtextwidget_inputmethodevent_callback = nullptr;
    KRichTextWidget_ScrollContentsBy_Callback krichtextwidget_scrollcontentsby_callback = nullptr;
    KRichTextWidget_DoSetTextCursor_Callback krichtextwidget_dosettextcursor_callback = nullptr;
    KRichTextWidget_MinimumSizeHint_Callback krichtextwidget_minimumsizehint_callback = nullptr;
    KRichTextWidget_SizeHint_Callback krichtextwidget_sizehint_callback = nullptr;
    KRichTextWidget_SetupViewport_Callback krichtextwidget_setupviewport_callback = nullptr;
    KRichTextWidget_EventFilter_Callback krichtextwidget_eventfilter_callback = nullptr;
    KRichTextWidget_ViewportEvent_Callback krichtextwidget_viewportevent_callback = nullptr;
    KRichTextWidget_ViewportSizeHint_Callback krichtextwidget_viewportsizehint_callback = nullptr;
    KRichTextWidget_InitStyleOption_Callback krichtextwidget_initstyleoption_callback = nullptr;
    KRichTextWidget_DevType_Callback krichtextwidget_devtype_callback = nullptr;
    KRichTextWidget_SetVisible_Callback krichtextwidget_setvisible_callback = nullptr;
    KRichTextWidget_HeightForWidth_Callback krichtextwidget_heightforwidth_callback = nullptr;
    KRichTextWidget_HasHeightForWidth_Callback krichtextwidget_hasheightforwidth_callback = nullptr;
    KRichTextWidget_PaintEngine_Callback krichtextwidget_paintengine_callback = nullptr;
    KRichTextWidget_EnterEvent_Callback krichtextwidget_enterevent_callback = nullptr;
    KRichTextWidget_LeaveEvent_Callback krichtextwidget_leaveevent_callback = nullptr;
    KRichTextWidget_MoveEvent_Callback krichtextwidget_moveevent_callback = nullptr;
    KRichTextWidget_CloseEvent_Callback krichtextwidget_closeevent_callback = nullptr;
    KRichTextWidget_TabletEvent_Callback krichtextwidget_tabletevent_callback = nullptr;
    KRichTextWidget_ActionEvent_Callback krichtextwidget_actionevent_callback = nullptr;
    KRichTextWidget_HideEvent_Callback krichtextwidget_hideevent_callback = nullptr;
    KRichTextWidget_NativeEvent_Callback krichtextwidget_nativeevent_callback = nullptr;
    KRichTextWidget_Metric_Callback krichtextwidget_metric_callback = nullptr;
    KRichTextWidget_InitPainter_Callback krichtextwidget_initpainter_callback = nullptr;
    KRichTextWidget_Redirected_Callback krichtextwidget_redirected_callback = nullptr;
    KRichTextWidget_SharedPainter_Callback krichtextwidget_sharedpainter_callback = nullptr;
    KRichTextWidget_ChildEvent_Callback krichtextwidget_childevent_callback = nullptr;
    KRichTextWidget_CustomEvent_Callback krichtextwidget_customevent_callback = nullptr;
    KRichTextWidget_ConnectNotify_Callback krichtextwidget_connectnotify_callback = nullptr;
    KRichTextWidget_DisconnectNotify_Callback krichtextwidget_disconnectnotify_callback = nullptr;
    KRichTextWidget_SlotDoReplace_Callback krichtextwidget_slotdoreplace_callback = nullptr;
    KRichTextWidget_SlotReplaceNext_Callback krichtextwidget_slotreplacenext_callback = nullptr;
    KRichTextWidget_SlotDoFind_Callback krichtextwidget_slotdofind_callback = nullptr;
    KRichTextWidget_SlotFind_Callback krichtextwidget_slotfind_callback = nullptr;
    KRichTextWidget_SlotFindNext_Callback krichtextwidget_slotfindnext_callback = nullptr;
    KRichTextWidget_SlotFindPrevious_Callback krichtextwidget_slotfindprevious_callback = nullptr;
    KRichTextWidget_SlotReplace_Callback krichtextwidget_slotreplace_callback = nullptr;
    KRichTextWidget_SlotSpeakText_Callback krichtextwidget_slotspeaktext_callback = nullptr;
    KRichTextWidget_ZoomInF_Callback krichtextwidget_zoominf_callback = nullptr;
    KRichTextWidget_SetViewportMargins_Callback krichtextwidget_setviewportmargins_callback = nullptr;
    KRichTextWidget_ViewportMargins_Callback krichtextwidget_viewportmargins_callback = nullptr;
    KRichTextWidget_DrawFrame_Callback krichtextwidget_drawframe_callback = nullptr;
    KRichTextWidget_UpdateMicroFocus_Callback krichtextwidget_updatemicrofocus_callback = nullptr;
    KRichTextWidget_Create_Callback krichtextwidget_create_callback = nullptr;
    KRichTextWidget_Destroy_Callback krichtextwidget_destroy_callback = nullptr;
    KRichTextWidget_FocusNextChild_Callback krichtextwidget_focusnextchild_callback = nullptr;
    KRichTextWidget_FocusPreviousChild_Callback krichtextwidget_focuspreviouschild_callback = nullptr;
    KRichTextWidget_Sender_Callback krichtextwidget_sender_callback = nullptr;
    KRichTextWidget_SenderSignalIndex_Callback krichtextwidget_sendersignalindex_callback = nullptr;
    KRichTextWidget_Receivers_Callback krichtextwidget_receivers_callback = nullptr;
    KRichTextWidget_IsSignalConnected_Callback krichtextwidget_issignalconnected_callback = nullptr;
    KRichTextWidget_GetDecodedMetricF_Callback krichtextwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool krichtextwidget_metacall_isbase = false;
    mutable bool krichtextwidget_createactions_isbase = false;
    mutable bool krichtextwidget_mousereleaseevent_isbase = false;
    mutable bool krichtextwidget_keypressevent_isbase = false;
    mutable bool krichtextwidget_setreadonly_isbase = false;
    mutable bool krichtextwidget_setcheckspellingenabled_isbase = false;
    mutable bool krichtextwidget_checkspellingenabled_isbase = false;
    mutable bool krichtextwidget_shouldblockbespellchecked_isbase = false;
    mutable bool krichtextwidget_createhighlighter_isbase = false;
    mutable bool krichtextwidget_mousepopupmenu_isbase = false;
    mutable bool krichtextwidget_event_isbase = false;
    mutable bool krichtextwidget_focusinevent_isbase = false;
    mutable bool krichtextwidget_deletewordback_isbase = false;
    mutable bool krichtextwidget_deletewordforward_isbase = false;
    mutable bool krichtextwidget_contextmenuevent_isbase = false;
    mutable bool krichtextwidget_loadresource_isbase = false;
    mutable bool krichtextwidget_inputmethodquery_isbase = false;
    mutable bool krichtextwidget_timerevent_isbase = false;
    mutable bool krichtextwidget_keyreleaseevent_isbase = false;
    mutable bool krichtextwidget_resizeevent_isbase = false;
    mutable bool krichtextwidget_paintevent_isbase = false;
    mutable bool krichtextwidget_mousepressevent_isbase = false;
    mutable bool krichtextwidget_mousemoveevent_isbase = false;
    mutable bool krichtextwidget_mousedoubleclickevent_isbase = false;
    mutable bool krichtextwidget_focusnextprevchild_isbase = false;
    mutable bool krichtextwidget_dragenterevent_isbase = false;
    mutable bool krichtextwidget_dragleaveevent_isbase = false;
    mutable bool krichtextwidget_dragmoveevent_isbase = false;
    mutable bool krichtextwidget_dropevent_isbase = false;
    mutable bool krichtextwidget_focusoutevent_isbase = false;
    mutable bool krichtextwidget_showevent_isbase = false;
    mutable bool krichtextwidget_changeevent_isbase = false;
    mutable bool krichtextwidget_wheelevent_isbase = false;
    mutable bool krichtextwidget_createmimedatafromselection_isbase = false;
    mutable bool krichtextwidget_caninsertfrommimedata_isbase = false;
    mutable bool krichtextwidget_insertfrommimedata_isbase = false;
    mutable bool krichtextwidget_inputmethodevent_isbase = false;
    mutable bool krichtextwidget_scrollcontentsby_isbase = false;
    mutable bool krichtextwidget_dosettextcursor_isbase = false;
    mutable bool krichtextwidget_minimumsizehint_isbase = false;
    mutable bool krichtextwidget_sizehint_isbase = false;
    mutable bool krichtextwidget_setupviewport_isbase = false;
    mutable bool krichtextwidget_eventfilter_isbase = false;
    mutable bool krichtextwidget_viewportevent_isbase = false;
    mutable bool krichtextwidget_viewportsizehint_isbase = false;
    mutable bool krichtextwidget_initstyleoption_isbase = false;
    mutable bool krichtextwidget_devtype_isbase = false;
    mutable bool krichtextwidget_setvisible_isbase = false;
    mutable bool krichtextwidget_heightforwidth_isbase = false;
    mutable bool krichtextwidget_hasheightforwidth_isbase = false;
    mutable bool krichtextwidget_paintengine_isbase = false;
    mutable bool krichtextwidget_enterevent_isbase = false;
    mutable bool krichtextwidget_leaveevent_isbase = false;
    mutable bool krichtextwidget_moveevent_isbase = false;
    mutable bool krichtextwidget_closeevent_isbase = false;
    mutable bool krichtextwidget_tabletevent_isbase = false;
    mutable bool krichtextwidget_actionevent_isbase = false;
    mutable bool krichtextwidget_hideevent_isbase = false;
    mutable bool krichtextwidget_nativeevent_isbase = false;
    mutable bool krichtextwidget_metric_isbase = false;
    mutable bool krichtextwidget_initpainter_isbase = false;
    mutable bool krichtextwidget_redirected_isbase = false;
    mutable bool krichtextwidget_sharedpainter_isbase = false;
    mutable bool krichtextwidget_childevent_isbase = false;
    mutable bool krichtextwidget_customevent_isbase = false;
    mutable bool krichtextwidget_connectnotify_isbase = false;
    mutable bool krichtextwidget_disconnectnotify_isbase = false;
    mutable bool krichtextwidget_slotdoreplace_isbase = false;
    mutable bool krichtextwidget_slotreplacenext_isbase = false;
    mutable bool krichtextwidget_slotdofind_isbase = false;
    mutable bool krichtextwidget_slotfind_isbase = false;
    mutable bool krichtextwidget_slotfindnext_isbase = false;
    mutable bool krichtextwidget_slotfindprevious_isbase = false;
    mutable bool krichtextwidget_slotreplace_isbase = false;
    mutable bool krichtextwidget_slotspeaktext_isbase = false;
    mutable bool krichtextwidget_zoominf_isbase = false;
    mutable bool krichtextwidget_setviewportmargins_isbase = false;
    mutable bool krichtextwidget_viewportmargins_isbase = false;
    mutable bool krichtextwidget_drawframe_isbase = false;
    mutable bool krichtextwidget_updatemicrofocus_isbase = false;
    mutable bool krichtextwidget_create_isbase = false;
    mutable bool krichtextwidget_destroy_isbase = false;
    mutable bool krichtextwidget_focusnextchild_isbase = false;
    mutable bool krichtextwidget_focuspreviouschild_isbase = false;
    mutable bool krichtextwidget_sender_isbase = false;
    mutable bool krichtextwidget_sendersignalindex_isbase = false;
    mutable bool krichtextwidget_receivers_isbase = false;
    mutable bool krichtextwidget_issignalconnected_isbase = false;
    mutable bool krichtextwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKRichTextWidget(QWidget* parent) : KRichTextWidget(parent) {};
    VirtualKRichTextWidget(const QString& text) : KRichTextWidget(text) {};
    VirtualKRichTextWidget(const QString& text, QWidget* parent) : KRichTextWidget(text, parent) {};

    ~VirtualKRichTextWidget() {
        krichtextwidget_metacall_callback = nullptr;
        krichtextwidget_createactions_callback = nullptr;
        krichtextwidget_mousereleaseevent_callback = nullptr;
        krichtextwidget_keypressevent_callback = nullptr;
        krichtextwidget_setreadonly_callback = nullptr;
        krichtextwidget_setcheckspellingenabled_callback = nullptr;
        krichtextwidget_checkspellingenabled_callback = nullptr;
        krichtextwidget_shouldblockbespellchecked_callback = nullptr;
        krichtextwidget_createhighlighter_callback = nullptr;
        krichtextwidget_mousepopupmenu_callback = nullptr;
        krichtextwidget_event_callback = nullptr;
        krichtextwidget_focusinevent_callback = nullptr;
        krichtextwidget_deletewordback_callback = nullptr;
        krichtextwidget_deletewordforward_callback = nullptr;
        krichtextwidget_contextmenuevent_callback = nullptr;
        krichtextwidget_loadresource_callback = nullptr;
        krichtextwidget_inputmethodquery_callback = nullptr;
        krichtextwidget_timerevent_callback = nullptr;
        krichtextwidget_keyreleaseevent_callback = nullptr;
        krichtextwidget_resizeevent_callback = nullptr;
        krichtextwidget_paintevent_callback = nullptr;
        krichtextwidget_mousepressevent_callback = nullptr;
        krichtextwidget_mousemoveevent_callback = nullptr;
        krichtextwidget_mousedoubleclickevent_callback = nullptr;
        krichtextwidget_focusnextprevchild_callback = nullptr;
        krichtextwidget_dragenterevent_callback = nullptr;
        krichtextwidget_dragleaveevent_callback = nullptr;
        krichtextwidget_dragmoveevent_callback = nullptr;
        krichtextwidget_dropevent_callback = nullptr;
        krichtextwidget_focusoutevent_callback = nullptr;
        krichtextwidget_showevent_callback = nullptr;
        krichtextwidget_changeevent_callback = nullptr;
        krichtextwidget_wheelevent_callback = nullptr;
        krichtextwidget_createmimedatafromselection_callback = nullptr;
        krichtextwidget_caninsertfrommimedata_callback = nullptr;
        krichtextwidget_insertfrommimedata_callback = nullptr;
        krichtextwidget_inputmethodevent_callback = nullptr;
        krichtextwidget_scrollcontentsby_callback = nullptr;
        krichtextwidget_dosettextcursor_callback = nullptr;
        krichtextwidget_minimumsizehint_callback = nullptr;
        krichtextwidget_sizehint_callback = nullptr;
        krichtextwidget_setupviewport_callback = nullptr;
        krichtextwidget_eventfilter_callback = nullptr;
        krichtextwidget_viewportevent_callback = nullptr;
        krichtextwidget_viewportsizehint_callback = nullptr;
        krichtextwidget_initstyleoption_callback = nullptr;
        krichtextwidget_devtype_callback = nullptr;
        krichtextwidget_setvisible_callback = nullptr;
        krichtextwidget_heightforwidth_callback = nullptr;
        krichtextwidget_hasheightforwidth_callback = nullptr;
        krichtextwidget_paintengine_callback = nullptr;
        krichtextwidget_enterevent_callback = nullptr;
        krichtextwidget_leaveevent_callback = nullptr;
        krichtextwidget_moveevent_callback = nullptr;
        krichtextwidget_closeevent_callback = nullptr;
        krichtextwidget_tabletevent_callback = nullptr;
        krichtextwidget_actionevent_callback = nullptr;
        krichtextwidget_hideevent_callback = nullptr;
        krichtextwidget_nativeevent_callback = nullptr;
        krichtextwidget_metric_callback = nullptr;
        krichtextwidget_initpainter_callback = nullptr;
        krichtextwidget_redirected_callback = nullptr;
        krichtextwidget_sharedpainter_callback = nullptr;
        krichtextwidget_childevent_callback = nullptr;
        krichtextwidget_customevent_callback = nullptr;
        krichtextwidget_connectnotify_callback = nullptr;
        krichtextwidget_disconnectnotify_callback = nullptr;
        krichtextwidget_slotdoreplace_callback = nullptr;
        krichtextwidget_slotreplacenext_callback = nullptr;
        krichtextwidget_slotdofind_callback = nullptr;
        krichtextwidget_slotfind_callback = nullptr;
        krichtextwidget_slotfindnext_callback = nullptr;
        krichtextwidget_slotfindprevious_callback = nullptr;
        krichtextwidget_slotreplace_callback = nullptr;
        krichtextwidget_slotspeaktext_callback = nullptr;
        krichtextwidget_zoominf_callback = nullptr;
        krichtextwidget_setviewportmargins_callback = nullptr;
        krichtextwidget_viewportmargins_callback = nullptr;
        krichtextwidget_drawframe_callback = nullptr;
        krichtextwidget_updatemicrofocus_callback = nullptr;
        krichtextwidget_create_callback = nullptr;
        krichtextwidget_destroy_callback = nullptr;
        krichtextwidget_focusnextchild_callback = nullptr;
        krichtextwidget_focuspreviouschild_callback = nullptr;
        krichtextwidget_sender_callback = nullptr;
        krichtextwidget_sendersignalindex_callback = nullptr;
        krichtextwidget_receivers_callback = nullptr;
        krichtextwidget_issignalconnected_callback = nullptr;
        krichtextwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKRichTextWidget_Metacall_Callback(KRichTextWidget_Metacall_Callback cb) { krichtextwidget_metacall_callback = cb; }
    inline void setKRichTextWidget_CreateActions_Callback(KRichTextWidget_CreateActions_Callback cb) { krichtextwidget_createactions_callback = cb; }
    inline void setKRichTextWidget_MouseReleaseEvent_Callback(KRichTextWidget_MouseReleaseEvent_Callback cb) { krichtextwidget_mousereleaseevent_callback = cb; }
    inline void setKRichTextWidget_KeyPressEvent_Callback(KRichTextWidget_KeyPressEvent_Callback cb) { krichtextwidget_keypressevent_callback = cb; }
    inline void setKRichTextWidget_SetReadOnly_Callback(KRichTextWidget_SetReadOnly_Callback cb) { krichtextwidget_setreadonly_callback = cb; }
    inline void setKRichTextWidget_SetCheckSpellingEnabled_Callback(KRichTextWidget_SetCheckSpellingEnabled_Callback cb) { krichtextwidget_setcheckspellingenabled_callback = cb; }
    inline void setKRichTextWidget_CheckSpellingEnabled_Callback(KRichTextWidget_CheckSpellingEnabled_Callback cb) { krichtextwidget_checkspellingenabled_callback = cb; }
    inline void setKRichTextWidget_ShouldBlockBeSpellChecked_Callback(KRichTextWidget_ShouldBlockBeSpellChecked_Callback cb) { krichtextwidget_shouldblockbespellchecked_callback = cb; }
    inline void setKRichTextWidget_CreateHighlighter_Callback(KRichTextWidget_CreateHighlighter_Callback cb) { krichtextwidget_createhighlighter_callback = cb; }
    inline void setKRichTextWidget_MousePopupMenu_Callback(KRichTextWidget_MousePopupMenu_Callback cb) { krichtextwidget_mousepopupmenu_callback = cb; }
    inline void setKRichTextWidget_Event_Callback(KRichTextWidget_Event_Callback cb) { krichtextwidget_event_callback = cb; }
    inline void setKRichTextWidget_FocusInEvent_Callback(KRichTextWidget_FocusInEvent_Callback cb) { krichtextwidget_focusinevent_callback = cb; }
    inline void setKRichTextWidget_DeleteWordBack_Callback(KRichTextWidget_DeleteWordBack_Callback cb) { krichtextwidget_deletewordback_callback = cb; }
    inline void setKRichTextWidget_DeleteWordForward_Callback(KRichTextWidget_DeleteWordForward_Callback cb) { krichtextwidget_deletewordforward_callback = cb; }
    inline void setKRichTextWidget_ContextMenuEvent_Callback(KRichTextWidget_ContextMenuEvent_Callback cb) { krichtextwidget_contextmenuevent_callback = cb; }
    inline void setKRichTextWidget_LoadResource_Callback(KRichTextWidget_LoadResource_Callback cb) { krichtextwidget_loadresource_callback = cb; }
    inline void setKRichTextWidget_InputMethodQuery_Callback(KRichTextWidget_InputMethodQuery_Callback cb) { krichtextwidget_inputmethodquery_callback = cb; }
    inline void setKRichTextWidget_TimerEvent_Callback(KRichTextWidget_TimerEvent_Callback cb) { krichtextwidget_timerevent_callback = cb; }
    inline void setKRichTextWidget_KeyReleaseEvent_Callback(KRichTextWidget_KeyReleaseEvent_Callback cb) { krichtextwidget_keyreleaseevent_callback = cb; }
    inline void setKRichTextWidget_ResizeEvent_Callback(KRichTextWidget_ResizeEvent_Callback cb) { krichtextwidget_resizeevent_callback = cb; }
    inline void setKRichTextWidget_PaintEvent_Callback(KRichTextWidget_PaintEvent_Callback cb) { krichtextwidget_paintevent_callback = cb; }
    inline void setKRichTextWidget_MousePressEvent_Callback(KRichTextWidget_MousePressEvent_Callback cb) { krichtextwidget_mousepressevent_callback = cb; }
    inline void setKRichTextWidget_MouseMoveEvent_Callback(KRichTextWidget_MouseMoveEvent_Callback cb) { krichtextwidget_mousemoveevent_callback = cb; }
    inline void setKRichTextWidget_MouseDoubleClickEvent_Callback(KRichTextWidget_MouseDoubleClickEvent_Callback cb) { krichtextwidget_mousedoubleclickevent_callback = cb; }
    inline void setKRichTextWidget_FocusNextPrevChild_Callback(KRichTextWidget_FocusNextPrevChild_Callback cb) { krichtextwidget_focusnextprevchild_callback = cb; }
    inline void setKRichTextWidget_DragEnterEvent_Callback(KRichTextWidget_DragEnterEvent_Callback cb) { krichtextwidget_dragenterevent_callback = cb; }
    inline void setKRichTextWidget_DragLeaveEvent_Callback(KRichTextWidget_DragLeaveEvent_Callback cb) { krichtextwidget_dragleaveevent_callback = cb; }
    inline void setKRichTextWidget_DragMoveEvent_Callback(KRichTextWidget_DragMoveEvent_Callback cb) { krichtextwidget_dragmoveevent_callback = cb; }
    inline void setKRichTextWidget_DropEvent_Callback(KRichTextWidget_DropEvent_Callback cb) { krichtextwidget_dropevent_callback = cb; }
    inline void setKRichTextWidget_FocusOutEvent_Callback(KRichTextWidget_FocusOutEvent_Callback cb) { krichtextwidget_focusoutevent_callback = cb; }
    inline void setKRichTextWidget_ShowEvent_Callback(KRichTextWidget_ShowEvent_Callback cb) { krichtextwidget_showevent_callback = cb; }
    inline void setKRichTextWidget_ChangeEvent_Callback(KRichTextWidget_ChangeEvent_Callback cb) { krichtextwidget_changeevent_callback = cb; }
    inline void setKRichTextWidget_WheelEvent_Callback(KRichTextWidget_WheelEvent_Callback cb) { krichtextwidget_wheelevent_callback = cb; }
    inline void setKRichTextWidget_CreateMimeDataFromSelection_Callback(KRichTextWidget_CreateMimeDataFromSelection_Callback cb) { krichtextwidget_createmimedatafromselection_callback = cb; }
    inline void setKRichTextWidget_CanInsertFromMimeData_Callback(KRichTextWidget_CanInsertFromMimeData_Callback cb) { krichtextwidget_caninsertfrommimedata_callback = cb; }
    inline void setKRichTextWidget_InsertFromMimeData_Callback(KRichTextWidget_InsertFromMimeData_Callback cb) { krichtextwidget_insertfrommimedata_callback = cb; }
    inline void setKRichTextWidget_InputMethodEvent_Callback(KRichTextWidget_InputMethodEvent_Callback cb) { krichtextwidget_inputmethodevent_callback = cb; }
    inline void setKRichTextWidget_ScrollContentsBy_Callback(KRichTextWidget_ScrollContentsBy_Callback cb) { krichtextwidget_scrollcontentsby_callback = cb; }
    inline void setKRichTextWidget_DoSetTextCursor_Callback(KRichTextWidget_DoSetTextCursor_Callback cb) { krichtextwidget_dosettextcursor_callback = cb; }
    inline void setKRichTextWidget_MinimumSizeHint_Callback(KRichTextWidget_MinimumSizeHint_Callback cb) { krichtextwidget_minimumsizehint_callback = cb; }
    inline void setKRichTextWidget_SizeHint_Callback(KRichTextWidget_SizeHint_Callback cb) { krichtextwidget_sizehint_callback = cb; }
    inline void setKRichTextWidget_SetupViewport_Callback(KRichTextWidget_SetupViewport_Callback cb) { krichtextwidget_setupviewport_callback = cb; }
    inline void setKRichTextWidget_EventFilter_Callback(KRichTextWidget_EventFilter_Callback cb) { krichtextwidget_eventfilter_callback = cb; }
    inline void setKRichTextWidget_ViewportEvent_Callback(KRichTextWidget_ViewportEvent_Callback cb) { krichtextwidget_viewportevent_callback = cb; }
    inline void setKRichTextWidget_ViewportSizeHint_Callback(KRichTextWidget_ViewportSizeHint_Callback cb) { krichtextwidget_viewportsizehint_callback = cb; }
    inline void setKRichTextWidget_InitStyleOption_Callback(KRichTextWidget_InitStyleOption_Callback cb) { krichtextwidget_initstyleoption_callback = cb; }
    inline void setKRichTextWidget_DevType_Callback(KRichTextWidget_DevType_Callback cb) { krichtextwidget_devtype_callback = cb; }
    inline void setKRichTextWidget_SetVisible_Callback(KRichTextWidget_SetVisible_Callback cb) { krichtextwidget_setvisible_callback = cb; }
    inline void setKRichTextWidget_HeightForWidth_Callback(KRichTextWidget_HeightForWidth_Callback cb) { krichtextwidget_heightforwidth_callback = cb; }
    inline void setKRichTextWidget_HasHeightForWidth_Callback(KRichTextWidget_HasHeightForWidth_Callback cb) { krichtextwidget_hasheightforwidth_callback = cb; }
    inline void setKRichTextWidget_PaintEngine_Callback(KRichTextWidget_PaintEngine_Callback cb) { krichtextwidget_paintengine_callback = cb; }
    inline void setKRichTextWidget_EnterEvent_Callback(KRichTextWidget_EnterEvent_Callback cb) { krichtextwidget_enterevent_callback = cb; }
    inline void setKRichTextWidget_LeaveEvent_Callback(KRichTextWidget_LeaveEvent_Callback cb) { krichtextwidget_leaveevent_callback = cb; }
    inline void setKRichTextWidget_MoveEvent_Callback(KRichTextWidget_MoveEvent_Callback cb) { krichtextwidget_moveevent_callback = cb; }
    inline void setKRichTextWidget_CloseEvent_Callback(KRichTextWidget_CloseEvent_Callback cb) { krichtextwidget_closeevent_callback = cb; }
    inline void setKRichTextWidget_TabletEvent_Callback(KRichTextWidget_TabletEvent_Callback cb) { krichtextwidget_tabletevent_callback = cb; }
    inline void setKRichTextWidget_ActionEvent_Callback(KRichTextWidget_ActionEvent_Callback cb) { krichtextwidget_actionevent_callback = cb; }
    inline void setKRichTextWidget_HideEvent_Callback(KRichTextWidget_HideEvent_Callback cb) { krichtextwidget_hideevent_callback = cb; }
    inline void setKRichTextWidget_NativeEvent_Callback(KRichTextWidget_NativeEvent_Callback cb) { krichtextwidget_nativeevent_callback = cb; }
    inline void setKRichTextWidget_Metric_Callback(KRichTextWidget_Metric_Callback cb) { krichtextwidget_metric_callback = cb; }
    inline void setKRichTextWidget_InitPainter_Callback(KRichTextWidget_InitPainter_Callback cb) { krichtextwidget_initpainter_callback = cb; }
    inline void setKRichTextWidget_Redirected_Callback(KRichTextWidget_Redirected_Callback cb) { krichtextwidget_redirected_callback = cb; }
    inline void setKRichTextWidget_SharedPainter_Callback(KRichTextWidget_SharedPainter_Callback cb) { krichtextwidget_sharedpainter_callback = cb; }
    inline void setKRichTextWidget_ChildEvent_Callback(KRichTextWidget_ChildEvent_Callback cb) { krichtextwidget_childevent_callback = cb; }
    inline void setKRichTextWidget_CustomEvent_Callback(KRichTextWidget_CustomEvent_Callback cb) { krichtextwidget_customevent_callback = cb; }
    inline void setKRichTextWidget_ConnectNotify_Callback(KRichTextWidget_ConnectNotify_Callback cb) { krichtextwidget_connectnotify_callback = cb; }
    inline void setKRichTextWidget_DisconnectNotify_Callback(KRichTextWidget_DisconnectNotify_Callback cb) { krichtextwidget_disconnectnotify_callback = cb; }
    inline void setKRichTextWidget_SlotDoReplace_Callback(KRichTextWidget_SlotDoReplace_Callback cb) { krichtextwidget_slotdoreplace_callback = cb; }
    inline void setKRichTextWidget_SlotReplaceNext_Callback(KRichTextWidget_SlotReplaceNext_Callback cb) { krichtextwidget_slotreplacenext_callback = cb; }
    inline void setKRichTextWidget_SlotDoFind_Callback(KRichTextWidget_SlotDoFind_Callback cb) { krichtextwidget_slotdofind_callback = cb; }
    inline void setKRichTextWidget_SlotFind_Callback(KRichTextWidget_SlotFind_Callback cb) { krichtextwidget_slotfind_callback = cb; }
    inline void setKRichTextWidget_SlotFindNext_Callback(KRichTextWidget_SlotFindNext_Callback cb) { krichtextwidget_slotfindnext_callback = cb; }
    inline void setKRichTextWidget_SlotFindPrevious_Callback(KRichTextWidget_SlotFindPrevious_Callback cb) { krichtextwidget_slotfindprevious_callback = cb; }
    inline void setKRichTextWidget_SlotReplace_Callback(KRichTextWidget_SlotReplace_Callback cb) { krichtextwidget_slotreplace_callback = cb; }
    inline void setKRichTextWidget_SlotSpeakText_Callback(KRichTextWidget_SlotSpeakText_Callback cb) { krichtextwidget_slotspeaktext_callback = cb; }
    inline void setKRichTextWidget_ZoomInF_Callback(KRichTextWidget_ZoomInF_Callback cb) { krichtextwidget_zoominf_callback = cb; }
    inline void setKRichTextWidget_SetViewportMargins_Callback(KRichTextWidget_SetViewportMargins_Callback cb) { krichtextwidget_setviewportmargins_callback = cb; }
    inline void setKRichTextWidget_ViewportMargins_Callback(KRichTextWidget_ViewportMargins_Callback cb) { krichtextwidget_viewportmargins_callback = cb; }
    inline void setKRichTextWidget_DrawFrame_Callback(KRichTextWidget_DrawFrame_Callback cb) { krichtextwidget_drawframe_callback = cb; }
    inline void setKRichTextWidget_UpdateMicroFocus_Callback(KRichTextWidget_UpdateMicroFocus_Callback cb) { krichtextwidget_updatemicrofocus_callback = cb; }
    inline void setKRichTextWidget_Create_Callback(KRichTextWidget_Create_Callback cb) { krichtextwidget_create_callback = cb; }
    inline void setKRichTextWidget_Destroy_Callback(KRichTextWidget_Destroy_Callback cb) { krichtextwidget_destroy_callback = cb; }
    inline void setKRichTextWidget_FocusNextChild_Callback(KRichTextWidget_FocusNextChild_Callback cb) { krichtextwidget_focusnextchild_callback = cb; }
    inline void setKRichTextWidget_FocusPreviousChild_Callback(KRichTextWidget_FocusPreviousChild_Callback cb) { krichtextwidget_focuspreviouschild_callback = cb; }
    inline void setKRichTextWidget_Sender_Callback(KRichTextWidget_Sender_Callback cb) { krichtextwidget_sender_callback = cb; }
    inline void setKRichTextWidget_SenderSignalIndex_Callback(KRichTextWidget_SenderSignalIndex_Callback cb) { krichtextwidget_sendersignalindex_callback = cb; }
    inline void setKRichTextWidget_Receivers_Callback(KRichTextWidget_Receivers_Callback cb) { krichtextwidget_receivers_callback = cb; }
    inline void setKRichTextWidget_IsSignalConnected_Callback(KRichTextWidget_IsSignalConnected_Callback cb) { krichtextwidget_issignalconnected_callback = cb; }
    inline void setKRichTextWidget_GetDecodedMetricF_Callback(KRichTextWidget_GetDecodedMetricF_Callback cb) { krichtextwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKRichTextWidget_Metacall_IsBase(bool value) const { krichtextwidget_metacall_isbase = value; }
    inline void setKRichTextWidget_CreateActions_IsBase(bool value) const { krichtextwidget_createactions_isbase = value; }
    inline void setKRichTextWidget_MouseReleaseEvent_IsBase(bool value) const { krichtextwidget_mousereleaseevent_isbase = value; }
    inline void setKRichTextWidget_KeyPressEvent_IsBase(bool value) const { krichtextwidget_keypressevent_isbase = value; }
    inline void setKRichTextWidget_SetReadOnly_IsBase(bool value) const { krichtextwidget_setreadonly_isbase = value; }
    inline void setKRichTextWidget_SetCheckSpellingEnabled_IsBase(bool value) const { krichtextwidget_setcheckspellingenabled_isbase = value; }
    inline void setKRichTextWidget_CheckSpellingEnabled_IsBase(bool value) const { krichtextwidget_checkspellingenabled_isbase = value; }
    inline void setKRichTextWidget_ShouldBlockBeSpellChecked_IsBase(bool value) const { krichtextwidget_shouldblockbespellchecked_isbase = value; }
    inline void setKRichTextWidget_CreateHighlighter_IsBase(bool value) const { krichtextwidget_createhighlighter_isbase = value; }
    inline void setKRichTextWidget_MousePopupMenu_IsBase(bool value) const { krichtextwidget_mousepopupmenu_isbase = value; }
    inline void setKRichTextWidget_Event_IsBase(bool value) const { krichtextwidget_event_isbase = value; }
    inline void setKRichTextWidget_FocusInEvent_IsBase(bool value) const { krichtextwidget_focusinevent_isbase = value; }
    inline void setKRichTextWidget_DeleteWordBack_IsBase(bool value) const { krichtextwidget_deletewordback_isbase = value; }
    inline void setKRichTextWidget_DeleteWordForward_IsBase(bool value) const { krichtextwidget_deletewordforward_isbase = value; }
    inline void setKRichTextWidget_ContextMenuEvent_IsBase(bool value) const { krichtextwidget_contextmenuevent_isbase = value; }
    inline void setKRichTextWidget_LoadResource_IsBase(bool value) const { krichtextwidget_loadresource_isbase = value; }
    inline void setKRichTextWidget_InputMethodQuery_IsBase(bool value) const { krichtextwidget_inputmethodquery_isbase = value; }
    inline void setKRichTextWidget_TimerEvent_IsBase(bool value) const { krichtextwidget_timerevent_isbase = value; }
    inline void setKRichTextWidget_KeyReleaseEvent_IsBase(bool value) const { krichtextwidget_keyreleaseevent_isbase = value; }
    inline void setKRichTextWidget_ResizeEvent_IsBase(bool value) const { krichtextwidget_resizeevent_isbase = value; }
    inline void setKRichTextWidget_PaintEvent_IsBase(bool value) const { krichtextwidget_paintevent_isbase = value; }
    inline void setKRichTextWidget_MousePressEvent_IsBase(bool value) const { krichtextwidget_mousepressevent_isbase = value; }
    inline void setKRichTextWidget_MouseMoveEvent_IsBase(bool value) const { krichtextwidget_mousemoveevent_isbase = value; }
    inline void setKRichTextWidget_MouseDoubleClickEvent_IsBase(bool value) const { krichtextwidget_mousedoubleclickevent_isbase = value; }
    inline void setKRichTextWidget_FocusNextPrevChild_IsBase(bool value) const { krichtextwidget_focusnextprevchild_isbase = value; }
    inline void setKRichTextWidget_DragEnterEvent_IsBase(bool value) const { krichtextwidget_dragenterevent_isbase = value; }
    inline void setKRichTextWidget_DragLeaveEvent_IsBase(bool value) const { krichtextwidget_dragleaveevent_isbase = value; }
    inline void setKRichTextWidget_DragMoveEvent_IsBase(bool value) const { krichtextwidget_dragmoveevent_isbase = value; }
    inline void setKRichTextWidget_DropEvent_IsBase(bool value) const { krichtextwidget_dropevent_isbase = value; }
    inline void setKRichTextWidget_FocusOutEvent_IsBase(bool value) const { krichtextwidget_focusoutevent_isbase = value; }
    inline void setKRichTextWidget_ShowEvent_IsBase(bool value) const { krichtextwidget_showevent_isbase = value; }
    inline void setKRichTextWidget_ChangeEvent_IsBase(bool value) const { krichtextwidget_changeevent_isbase = value; }
    inline void setKRichTextWidget_WheelEvent_IsBase(bool value) const { krichtextwidget_wheelevent_isbase = value; }
    inline void setKRichTextWidget_CreateMimeDataFromSelection_IsBase(bool value) const { krichtextwidget_createmimedatafromselection_isbase = value; }
    inline void setKRichTextWidget_CanInsertFromMimeData_IsBase(bool value) const { krichtextwidget_caninsertfrommimedata_isbase = value; }
    inline void setKRichTextWidget_InsertFromMimeData_IsBase(bool value) const { krichtextwidget_insertfrommimedata_isbase = value; }
    inline void setKRichTextWidget_InputMethodEvent_IsBase(bool value) const { krichtextwidget_inputmethodevent_isbase = value; }
    inline void setKRichTextWidget_ScrollContentsBy_IsBase(bool value) const { krichtextwidget_scrollcontentsby_isbase = value; }
    inline void setKRichTextWidget_DoSetTextCursor_IsBase(bool value) const { krichtextwidget_dosettextcursor_isbase = value; }
    inline void setKRichTextWidget_MinimumSizeHint_IsBase(bool value) const { krichtextwidget_minimumsizehint_isbase = value; }
    inline void setKRichTextWidget_SizeHint_IsBase(bool value) const { krichtextwidget_sizehint_isbase = value; }
    inline void setKRichTextWidget_SetupViewport_IsBase(bool value) const { krichtextwidget_setupviewport_isbase = value; }
    inline void setKRichTextWidget_EventFilter_IsBase(bool value) const { krichtextwidget_eventfilter_isbase = value; }
    inline void setKRichTextWidget_ViewportEvent_IsBase(bool value) const { krichtextwidget_viewportevent_isbase = value; }
    inline void setKRichTextWidget_ViewportSizeHint_IsBase(bool value) const { krichtextwidget_viewportsizehint_isbase = value; }
    inline void setKRichTextWidget_InitStyleOption_IsBase(bool value) const { krichtextwidget_initstyleoption_isbase = value; }
    inline void setKRichTextWidget_DevType_IsBase(bool value) const { krichtextwidget_devtype_isbase = value; }
    inline void setKRichTextWidget_SetVisible_IsBase(bool value) const { krichtextwidget_setvisible_isbase = value; }
    inline void setKRichTextWidget_HeightForWidth_IsBase(bool value) const { krichtextwidget_heightforwidth_isbase = value; }
    inline void setKRichTextWidget_HasHeightForWidth_IsBase(bool value) const { krichtextwidget_hasheightforwidth_isbase = value; }
    inline void setKRichTextWidget_PaintEngine_IsBase(bool value) const { krichtextwidget_paintengine_isbase = value; }
    inline void setKRichTextWidget_EnterEvent_IsBase(bool value) const { krichtextwidget_enterevent_isbase = value; }
    inline void setKRichTextWidget_LeaveEvent_IsBase(bool value) const { krichtextwidget_leaveevent_isbase = value; }
    inline void setKRichTextWidget_MoveEvent_IsBase(bool value) const { krichtextwidget_moveevent_isbase = value; }
    inline void setKRichTextWidget_CloseEvent_IsBase(bool value) const { krichtextwidget_closeevent_isbase = value; }
    inline void setKRichTextWidget_TabletEvent_IsBase(bool value) const { krichtextwidget_tabletevent_isbase = value; }
    inline void setKRichTextWidget_ActionEvent_IsBase(bool value) const { krichtextwidget_actionevent_isbase = value; }
    inline void setKRichTextWidget_HideEvent_IsBase(bool value) const { krichtextwidget_hideevent_isbase = value; }
    inline void setKRichTextWidget_NativeEvent_IsBase(bool value) const { krichtextwidget_nativeevent_isbase = value; }
    inline void setKRichTextWidget_Metric_IsBase(bool value) const { krichtextwidget_metric_isbase = value; }
    inline void setKRichTextWidget_InitPainter_IsBase(bool value) const { krichtextwidget_initpainter_isbase = value; }
    inline void setKRichTextWidget_Redirected_IsBase(bool value) const { krichtextwidget_redirected_isbase = value; }
    inline void setKRichTextWidget_SharedPainter_IsBase(bool value) const { krichtextwidget_sharedpainter_isbase = value; }
    inline void setKRichTextWidget_ChildEvent_IsBase(bool value) const { krichtextwidget_childevent_isbase = value; }
    inline void setKRichTextWidget_CustomEvent_IsBase(bool value) const { krichtextwidget_customevent_isbase = value; }
    inline void setKRichTextWidget_ConnectNotify_IsBase(bool value) const { krichtextwidget_connectnotify_isbase = value; }
    inline void setKRichTextWidget_DisconnectNotify_IsBase(bool value) const { krichtextwidget_disconnectnotify_isbase = value; }
    inline void setKRichTextWidget_SlotDoReplace_IsBase(bool value) const { krichtextwidget_slotdoreplace_isbase = value; }
    inline void setKRichTextWidget_SlotReplaceNext_IsBase(bool value) const { krichtextwidget_slotreplacenext_isbase = value; }
    inline void setKRichTextWidget_SlotDoFind_IsBase(bool value) const { krichtextwidget_slotdofind_isbase = value; }
    inline void setKRichTextWidget_SlotFind_IsBase(bool value) const { krichtextwidget_slotfind_isbase = value; }
    inline void setKRichTextWidget_SlotFindNext_IsBase(bool value) const { krichtextwidget_slotfindnext_isbase = value; }
    inline void setKRichTextWidget_SlotFindPrevious_IsBase(bool value) const { krichtextwidget_slotfindprevious_isbase = value; }
    inline void setKRichTextWidget_SlotReplace_IsBase(bool value) const { krichtextwidget_slotreplace_isbase = value; }
    inline void setKRichTextWidget_SlotSpeakText_IsBase(bool value) const { krichtextwidget_slotspeaktext_isbase = value; }
    inline void setKRichTextWidget_ZoomInF_IsBase(bool value) const { krichtextwidget_zoominf_isbase = value; }
    inline void setKRichTextWidget_SetViewportMargins_IsBase(bool value) const { krichtextwidget_setviewportmargins_isbase = value; }
    inline void setKRichTextWidget_ViewportMargins_IsBase(bool value) const { krichtextwidget_viewportmargins_isbase = value; }
    inline void setKRichTextWidget_DrawFrame_IsBase(bool value) const { krichtextwidget_drawframe_isbase = value; }
    inline void setKRichTextWidget_UpdateMicroFocus_IsBase(bool value) const { krichtextwidget_updatemicrofocus_isbase = value; }
    inline void setKRichTextWidget_Create_IsBase(bool value) const { krichtextwidget_create_isbase = value; }
    inline void setKRichTextWidget_Destroy_IsBase(bool value) const { krichtextwidget_destroy_isbase = value; }
    inline void setKRichTextWidget_FocusNextChild_IsBase(bool value) const { krichtextwidget_focusnextchild_isbase = value; }
    inline void setKRichTextWidget_FocusPreviousChild_IsBase(bool value) const { krichtextwidget_focuspreviouschild_isbase = value; }
    inline void setKRichTextWidget_Sender_IsBase(bool value) const { krichtextwidget_sender_isbase = value; }
    inline void setKRichTextWidget_SenderSignalIndex_IsBase(bool value) const { krichtextwidget_sendersignalindex_isbase = value; }
    inline void setKRichTextWidget_Receivers_IsBase(bool value) const { krichtextwidget_receivers_isbase = value; }
    inline void setKRichTextWidget_IsSignalConnected_IsBase(bool value) const { krichtextwidget_issignalconnected_isbase = value; }
    inline void setKRichTextWidget_GetDecodedMetricF_IsBase(bool value) const { krichtextwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krichtextwidget_metacall_isbase) {
            krichtextwidget_metacall_isbase = false;
            return KRichTextWidget::qt_metacall(param1, param2, param3);
        } else if (krichtextwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = krichtextwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> createActions() override {
        if (krichtextwidget_createactions_isbase) {
            krichtextwidget_createactions_isbase = false;
            return KRichTextWidget::createActions();
        } else if (krichtextwidget_createactions_callback != nullptr) {
            QAction** callback_ret = krichtextwidget_createactions_callback();
            QList<QAction*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QAction** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KRichTextWidget::createActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (krichtextwidget_mousereleaseevent_isbase) {
            krichtextwidget_mousereleaseevent_isbase = false;
            KRichTextWidget::mouseReleaseEvent(event);
        } else if (krichtextwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            krichtextwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KRichTextWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (krichtextwidget_keypressevent_isbase) {
            krichtextwidget_keypressevent_isbase = false;
            KRichTextWidget::keyPressEvent(event);
        } else if (krichtextwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            krichtextwidget_keypressevent_callback(this, cbval1);
        } else {
            KRichTextWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (krichtextwidget_setreadonly_isbase) {
            krichtextwidget_setreadonly_isbase = false;
            KRichTextWidget::setReadOnly(readOnly);
        } else if (krichtextwidget_setreadonly_callback != nullptr) {
            bool cbval1 = readOnly;

            krichtextwidget_setreadonly_callback(this, cbval1);
        } else {
            KRichTextWidget::setReadOnly(readOnly);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCheckSpellingEnabled(bool check) override {
        if (krichtextwidget_setcheckspellingenabled_isbase) {
            krichtextwidget_setcheckspellingenabled_isbase = false;
            KRichTextWidget::setCheckSpellingEnabled(check);
        } else if (krichtextwidget_setcheckspellingenabled_callback != nullptr) {
            bool cbval1 = check;

            krichtextwidget_setcheckspellingenabled_callback(this, cbval1);
        } else {
            KRichTextWidget::setCheckSpellingEnabled(check);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkSpellingEnabled() const override {
        if (krichtextwidget_checkspellingenabled_isbase) {
            krichtextwidget_checkspellingenabled_isbase = false;
            return KRichTextWidget::checkSpellingEnabled();
        } else if (krichtextwidget_checkspellingenabled_callback != nullptr) {
            bool callback_ret = krichtextwidget_checkspellingenabled_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::checkSpellingEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBlockBeSpellChecked(const QString& block) const override {
        if (krichtextwidget_shouldblockbespellchecked_isbase) {
            krichtextwidget_shouldblockbespellchecked_isbase = false;
            return KRichTextWidget::shouldBlockBeSpellChecked(block);
        } else if (krichtextwidget_shouldblockbespellchecked_callback != nullptr) {
            const QString block_ret = block;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray block_b = block_ret.toUtf8();
            libqt_string block_str;
            block_str.len = block_b.length();
            block_str.data = static_cast<const char*>(malloc(block_str.len + 1));
            memcpy((void*)block_str.data, block_b.data(), block_str.len);
            ((char*)block_str.data)[block_str.len] = '\0';
            libqt_string cbval1 = block_str;

            bool callback_ret = krichtextwidget_shouldblockbespellchecked_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextWidget::shouldBlockBeSpellChecked(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (krichtextwidget_createhighlighter_isbase) {
            krichtextwidget_createhighlighter_isbase = false;
            KRichTextWidget::createHighlighter();
        } else if (krichtextwidget_createhighlighter_callback != nullptr) {
            krichtextwidget_createhighlighter_callback();
        } else {
            KRichTextWidget::createHighlighter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* mousePopupMenu() override {
        if (krichtextwidget_mousepopupmenu_isbase) {
            krichtextwidget_mousepopupmenu_isbase = false;
            return KRichTextWidget::mousePopupMenu();
        } else if (krichtextwidget_mousepopupmenu_callback != nullptr) {
            QMenu* callback_ret = krichtextwidget_mousepopupmenu_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::mousePopupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (krichtextwidget_event_isbase) {
            krichtextwidget_event_isbase = false;
            return KRichTextWidget::event(param1);
        } else if (krichtextwidget_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = krichtextwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextWidget::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (krichtextwidget_focusinevent_isbase) {
            krichtextwidget_focusinevent_isbase = false;
            KRichTextWidget::focusInEvent(param1);
        } else if (krichtextwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            krichtextwidget_focusinevent_callback(this, cbval1);
        } else {
            KRichTextWidget::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordBack() override {
        if (krichtextwidget_deletewordback_isbase) {
            krichtextwidget_deletewordback_isbase = false;
            KRichTextWidget::deleteWordBack();
        } else if (krichtextwidget_deletewordback_callback != nullptr) {
            krichtextwidget_deletewordback_callback();
        } else {
            KRichTextWidget::deleteWordBack();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordForward() override {
        if (krichtextwidget_deletewordforward_isbase) {
            krichtextwidget_deletewordforward_isbase = false;
            KRichTextWidget::deleteWordForward();
        } else if (krichtextwidget_deletewordforward_callback != nullptr) {
            krichtextwidget_deletewordforward_callback();
        } else {
            KRichTextWidget::deleteWordForward();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (krichtextwidget_contextmenuevent_isbase) {
            krichtextwidget_contextmenuevent_isbase = false;
            KRichTextWidget::contextMenuEvent(param1);
        } else if (krichtextwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            krichtextwidget_contextmenuevent_callback(this, cbval1);
        } else {
            KRichTextWidget::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (krichtextwidget_loadresource_isbase) {
            krichtextwidget_loadresource_isbase = false;
            return KRichTextWidget::loadResource(typeVal, name);
        } else if (krichtextwidget_loadresource_callback != nullptr) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = krichtextwidget_loadresource_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KRichTextWidget::loadResource(typeVal, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (krichtextwidget_inputmethodquery_isbase) {
            krichtextwidget_inputmethodquery_isbase = false;
            return KRichTextWidget::inputMethodQuery(property);
        } else if (krichtextwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = krichtextwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRichTextWidget::inputMethodQuery(property);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (krichtextwidget_timerevent_isbase) {
            krichtextwidget_timerevent_isbase = false;
            KRichTextWidget::timerEvent(e);
        } else if (krichtextwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            krichtextwidget_timerevent_callback(this, cbval1);
        } else {
            KRichTextWidget::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (krichtextwidget_keyreleaseevent_isbase) {
            krichtextwidget_keyreleaseevent_isbase = false;
            KRichTextWidget::keyReleaseEvent(e);
        } else if (krichtextwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            krichtextwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KRichTextWidget::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (krichtextwidget_resizeevent_isbase) {
            krichtextwidget_resizeevent_isbase = false;
            KRichTextWidget::resizeEvent(e);
        } else if (krichtextwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            krichtextwidget_resizeevent_callback(this, cbval1);
        } else {
            KRichTextWidget::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (krichtextwidget_paintevent_isbase) {
            krichtextwidget_paintevent_isbase = false;
            KRichTextWidget::paintEvent(e);
        } else if (krichtextwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            krichtextwidget_paintevent_callback(this, cbval1);
        } else {
            KRichTextWidget::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (krichtextwidget_mousepressevent_isbase) {
            krichtextwidget_mousepressevent_isbase = false;
            KRichTextWidget::mousePressEvent(e);
        } else if (krichtextwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            krichtextwidget_mousepressevent_callback(this, cbval1);
        } else {
            KRichTextWidget::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (krichtextwidget_mousemoveevent_isbase) {
            krichtextwidget_mousemoveevent_isbase = false;
            KRichTextWidget::mouseMoveEvent(e);
        } else if (krichtextwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            krichtextwidget_mousemoveevent_callback(this, cbval1);
        } else {
            KRichTextWidget::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (krichtextwidget_mousedoubleclickevent_isbase) {
            krichtextwidget_mousedoubleclickevent_isbase = false;
            KRichTextWidget::mouseDoubleClickEvent(e);
        } else if (krichtextwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            krichtextwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KRichTextWidget::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (krichtextwidget_focusnextprevchild_isbase) {
            krichtextwidget_focusnextprevchild_isbase = false;
            return KRichTextWidget::focusNextPrevChild(next);
        } else if (krichtextwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = krichtextwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (krichtextwidget_dragenterevent_isbase) {
            krichtextwidget_dragenterevent_isbase = false;
            KRichTextWidget::dragEnterEvent(e);
        } else if (krichtextwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = e;

            krichtextwidget_dragenterevent_callback(this, cbval1);
        } else {
            KRichTextWidget::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (krichtextwidget_dragleaveevent_isbase) {
            krichtextwidget_dragleaveevent_isbase = false;
            KRichTextWidget::dragLeaveEvent(e);
        } else if (krichtextwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            krichtextwidget_dragleaveevent_callback(this, cbval1);
        } else {
            KRichTextWidget::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (krichtextwidget_dragmoveevent_isbase) {
            krichtextwidget_dragmoveevent_isbase = false;
            KRichTextWidget::dragMoveEvent(e);
        } else if (krichtextwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            krichtextwidget_dragmoveevent_callback(this, cbval1);
        } else {
            KRichTextWidget::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (krichtextwidget_dropevent_isbase) {
            krichtextwidget_dropevent_isbase = false;
            KRichTextWidget::dropEvent(e);
        } else if (krichtextwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = e;

            krichtextwidget_dropevent_callback(this, cbval1);
        } else {
            KRichTextWidget::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (krichtextwidget_focusoutevent_isbase) {
            krichtextwidget_focusoutevent_isbase = false;
            KRichTextWidget::focusOutEvent(e);
        } else if (krichtextwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            krichtextwidget_focusoutevent_callback(this, cbval1);
        } else {
            KRichTextWidget::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (krichtextwidget_showevent_isbase) {
            krichtextwidget_showevent_isbase = false;
            KRichTextWidget::showEvent(param1);
        } else if (krichtextwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            krichtextwidget_showevent_callback(this, cbval1);
        } else {
            KRichTextWidget::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (krichtextwidget_changeevent_isbase) {
            krichtextwidget_changeevent_isbase = false;
            KRichTextWidget::changeEvent(e);
        } else if (krichtextwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            krichtextwidget_changeevent_callback(this, cbval1);
        } else {
            KRichTextWidget::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (krichtextwidget_wheelevent_isbase) {
            krichtextwidget_wheelevent_isbase = false;
            KRichTextWidget::wheelEvent(e);
        } else if (krichtextwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            krichtextwidget_wheelevent_callback(this, cbval1);
        } else {
            KRichTextWidget::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (krichtextwidget_createmimedatafromselection_isbase) {
            krichtextwidget_createmimedatafromselection_isbase = false;
            return KRichTextWidget::createMimeDataFromSelection();
        } else if (krichtextwidget_createmimedatafromselection_callback != nullptr) {
            QMimeData* callback_ret = krichtextwidget_createmimedatafromselection_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::createMimeDataFromSelection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (krichtextwidget_caninsertfrommimedata_isbase) {
            krichtextwidget_caninsertfrommimedata_isbase = false;
            return KRichTextWidget::canInsertFromMimeData(source);
        } else if (krichtextwidget_caninsertfrommimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = krichtextwidget_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextWidget::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (krichtextwidget_insertfrommimedata_isbase) {
            krichtextwidget_insertfrommimedata_isbase = false;
            KRichTextWidget::insertFromMimeData(source);
        } else if (krichtextwidget_insertfrommimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)source;

            krichtextwidget_insertfrommimedata_callback(this, cbval1);
        } else {
            KRichTextWidget::insertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (krichtextwidget_inputmethodevent_isbase) {
            krichtextwidget_inputmethodevent_isbase = false;
            KRichTextWidget::inputMethodEvent(param1);
        } else if (krichtextwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            krichtextwidget_inputmethodevent_callback(this, cbval1);
        } else {
            KRichTextWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (krichtextwidget_scrollcontentsby_isbase) {
            krichtextwidget_scrollcontentsby_isbase = false;
            KRichTextWidget::scrollContentsBy(dx, dy);
        } else if (krichtextwidget_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            krichtextwidget_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            KRichTextWidget::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (krichtextwidget_dosettextcursor_isbase) {
            krichtextwidget_dosettextcursor_isbase = false;
            KRichTextWidget::doSetTextCursor(cursor);
        } else if (krichtextwidget_dosettextcursor_callback != nullptr) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            krichtextwidget_dosettextcursor_callback(this, cbval1);
        } else {
            KRichTextWidget::doSetTextCursor(cursor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (krichtextwidget_minimumsizehint_isbase) {
            krichtextwidget_minimumsizehint_isbase = false;
            return KRichTextWidget::minimumSizeHint();
        } else if (krichtextwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = krichtextwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KRichTextWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (krichtextwidget_sizehint_isbase) {
            krichtextwidget_sizehint_isbase = false;
            return KRichTextWidget::sizeHint();
        } else if (krichtextwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = krichtextwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KRichTextWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (krichtextwidget_setupviewport_isbase) {
            krichtextwidget_setupviewport_isbase = false;
            KRichTextWidget::setupViewport(viewport);
        } else if (krichtextwidget_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            krichtextwidget_setupviewport_callback(this, cbval1);
        } else {
            KRichTextWidget::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (krichtextwidget_eventfilter_isbase) {
            krichtextwidget_eventfilter_isbase = false;
            return KRichTextWidget::eventFilter(param1, param2);
        } else if (krichtextwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = krichtextwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRichTextWidget::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (krichtextwidget_viewportevent_isbase) {
            krichtextwidget_viewportevent_isbase = false;
            return KRichTextWidget::viewportEvent(param1);
        } else if (krichtextwidget_viewportevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = krichtextwidget_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextWidget::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (krichtextwidget_viewportsizehint_isbase) {
            krichtextwidget_viewportsizehint_isbase = false;
            return KRichTextWidget::viewportSizeHint();
        } else if (krichtextwidget_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = krichtextwidget_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return KRichTextWidget::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (krichtextwidget_initstyleoption_isbase) {
            krichtextwidget_initstyleoption_isbase = false;
            KRichTextWidget::initStyleOption(option);
        } else if (krichtextwidget_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            krichtextwidget_initstyleoption_callback(this, cbval1);
        } else {
            KRichTextWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (krichtextwidget_devtype_isbase) {
            krichtextwidget_devtype_isbase = false;
            return KRichTextWidget::devType();
        } else if (krichtextwidget_devtype_callback != nullptr) {
            int callback_ret = krichtextwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (krichtextwidget_setvisible_isbase) {
            krichtextwidget_setvisible_isbase = false;
            KRichTextWidget::setVisible(visible);
        } else if (krichtextwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            krichtextwidget_setvisible_callback(this, cbval1);
        } else {
            KRichTextWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (krichtextwidget_heightforwidth_isbase) {
            krichtextwidget_heightforwidth_isbase = false;
            return KRichTextWidget::heightForWidth(param1);
        } else if (krichtextwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = krichtextwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (krichtextwidget_hasheightforwidth_isbase) {
            krichtextwidget_hasheightforwidth_isbase = false;
            return KRichTextWidget::hasHeightForWidth();
        } else if (krichtextwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = krichtextwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (krichtextwidget_paintengine_isbase) {
            krichtextwidget_paintengine_isbase = false;
            return KRichTextWidget::paintEngine();
        } else if (krichtextwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = krichtextwidget_paintengine_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (krichtextwidget_enterevent_isbase) {
            krichtextwidget_enterevent_isbase = false;
            KRichTextWidget::enterEvent(event);
        } else if (krichtextwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            krichtextwidget_enterevent_callback(this, cbval1);
        } else {
            KRichTextWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (krichtextwidget_leaveevent_isbase) {
            krichtextwidget_leaveevent_isbase = false;
            KRichTextWidget::leaveEvent(event);
        } else if (krichtextwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            krichtextwidget_leaveevent_callback(this, cbval1);
        } else {
            KRichTextWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (krichtextwidget_moveevent_isbase) {
            krichtextwidget_moveevent_isbase = false;
            KRichTextWidget::moveEvent(event);
        } else if (krichtextwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            krichtextwidget_moveevent_callback(this, cbval1);
        } else {
            KRichTextWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (krichtextwidget_closeevent_isbase) {
            krichtextwidget_closeevent_isbase = false;
            KRichTextWidget::closeEvent(event);
        } else if (krichtextwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            krichtextwidget_closeevent_callback(this, cbval1);
        } else {
            KRichTextWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (krichtextwidget_tabletevent_isbase) {
            krichtextwidget_tabletevent_isbase = false;
            KRichTextWidget::tabletEvent(event);
        } else if (krichtextwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            krichtextwidget_tabletevent_callback(this, cbval1);
        } else {
            KRichTextWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (krichtextwidget_actionevent_isbase) {
            krichtextwidget_actionevent_isbase = false;
            KRichTextWidget::actionEvent(event);
        } else if (krichtextwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            krichtextwidget_actionevent_callback(this, cbval1);
        } else {
            KRichTextWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (krichtextwidget_hideevent_isbase) {
            krichtextwidget_hideevent_isbase = false;
            KRichTextWidget::hideEvent(event);
        } else if (krichtextwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            krichtextwidget_hideevent_callback(this, cbval1);
        } else {
            KRichTextWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (krichtextwidget_nativeevent_isbase) {
            krichtextwidget_nativeevent_isbase = false;
            return KRichTextWidget::nativeEvent(eventType, message, result);
        } else if (krichtextwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = krichtextwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRichTextWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (krichtextwidget_metric_isbase) {
            krichtextwidget_metric_isbase = false;
            return KRichTextWidget::metric(param1);
        } else if (krichtextwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = krichtextwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (krichtextwidget_initpainter_isbase) {
            krichtextwidget_initpainter_isbase = false;
            KRichTextWidget::initPainter(painter);
        } else if (krichtextwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            krichtextwidget_initpainter_callback(this, cbval1);
        } else {
            KRichTextWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (krichtextwidget_redirected_isbase) {
            krichtextwidget_redirected_isbase = false;
            return KRichTextWidget::redirected(offset);
        } else if (krichtextwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = krichtextwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (krichtextwidget_sharedpainter_isbase) {
            krichtextwidget_sharedpainter_isbase = false;
            return KRichTextWidget::sharedPainter();
        } else if (krichtextwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = krichtextwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krichtextwidget_childevent_isbase) {
            krichtextwidget_childevent_isbase = false;
            KRichTextWidget::childEvent(event);
        } else if (krichtextwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            krichtextwidget_childevent_callback(this, cbval1);
        } else {
            KRichTextWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krichtextwidget_customevent_isbase) {
            krichtextwidget_customevent_isbase = false;
            KRichTextWidget::customEvent(event);
        } else if (krichtextwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            krichtextwidget_customevent_callback(this, cbval1);
        } else {
            KRichTextWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krichtextwidget_connectnotify_isbase) {
            krichtextwidget_connectnotify_isbase = false;
            KRichTextWidget::connectNotify(signal);
        } else if (krichtextwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krichtextwidget_connectnotify_callback(this, cbval1);
        } else {
            KRichTextWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krichtextwidget_disconnectnotify_isbase) {
            krichtextwidget_disconnectnotify_isbase = false;
            KRichTextWidget::disconnectNotify(signal);
        } else if (krichtextwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krichtextwidget_disconnectnotify_callback(this, cbval1);
        } else {
            KRichTextWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotDoReplace() {
        if (krichtextwidget_slotdoreplace_isbase) {
            krichtextwidget_slotdoreplace_isbase = false;
            KRichTextWidget::slotDoReplace();
        } else if (krichtextwidget_slotdoreplace_callback != nullptr) {
            krichtextwidget_slotdoreplace_callback();
        } else {
            KRichTextWidget::slotDoReplace();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotReplaceNext() {
        if (krichtextwidget_slotreplacenext_isbase) {
            krichtextwidget_slotreplacenext_isbase = false;
            KRichTextWidget::slotReplaceNext();
        } else if (krichtextwidget_slotreplacenext_callback != nullptr) {
            krichtextwidget_slotreplacenext_callback();
        } else {
            KRichTextWidget::slotReplaceNext();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotDoFind() {
        if (krichtextwidget_slotdofind_isbase) {
            krichtextwidget_slotdofind_isbase = false;
            KRichTextWidget::slotDoFind();
        } else if (krichtextwidget_slotdofind_callback != nullptr) {
            krichtextwidget_slotdofind_callback();
        } else {
            KRichTextWidget::slotDoFind();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFind() {
        if (krichtextwidget_slotfind_isbase) {
            krichtextwidget_slotfind_isbase = false;
            KRichTextWidget::slotFind();
        } else if (krichtextwidget_slotfind_callback != nullptr) {
            krichtextwidget_slotfind_callback();
        } else {
            KRichTextWidget::slotFind();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFindNext() {
        if (krichtextwidget_slotfindnext_isbase) {
            krichtextwidget_slotfindnext_isbase = false;
            KRichTextWidget::slotFindNext();
        } else if (krichtextwidget_slotfindnext_callback != nullptr) {
            krichtextwidget_slotfindnext_callback();
        } else {
            KRichTextWidget::slotFindNext();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFindPrevious() {
        if (krichtextwidget_slotfindprevious_isbase) {
            krichtextwidget_slotfindprevious_isbase = false;
            KRichTextWidget::slotFindPrevious();
        } else if (krichtextwidget_slotfindprevious_callback != nullptr) {
            krichtextwidget_slotfindprevious_callback();
        } else {
            KRichTextWidget::slotFindPrevious();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotReplace() {
        if (krichtextwidget_slotreplace_isbase) {
            krichtextwidget_slotreplace_isbase = false;
            KRichTextWidget::slotReplace();
        } else if (krichtextwidget_slotreplace_callback != nullptr) {
            krichtextwidget_slotreplace_callback();
        } else {
            KRichTextWidget::slotReplace();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotSpeakText() {
        if (krichtextwidget_slotspeaktext_isbase) {
            krichtextwidget_slotspeaktext_isbase = false;
            KRichTextWidget::slotSpeakText();
        } else if (krichtextwidget_slotspeaktext_callback != nullptr) {
            krichtextwidget_slotspeaktext_callback();
        } else {
            KRichTextWidget::slotSpeakText();
        }
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (krichtextwidget_zoominf_isbase) {
            krichtextwidget_zoominf_isbase = false;
            KRichTextWidget::zoomInF(range);
        } else if (krichtextwidget_zoominf_callback != nullptr) {
            float cbval1 = range;

            krichtextwidget_zoominf_callback(this, cbval1);
        } else {
            KRichTextWidget::zoomInF(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (krichtextwidget_setviewportmargins_isbase) {
            krichtextwidget_setviewportmargins_isbase = false;
            KRichTextWidget::setViewportMargins(left, top, right, bottom);
        } else if (krichtextwidget_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            krichtextwidget_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KRichTextWidget::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (krichtextwidget_viewportmargins_isbase) {
            krichtextwidget_viewportmargins_isbase = false;
            return KRichTextWidget::viewportMargins();
        } else if (krichtextwidget_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = krichtextwidget_viewportmargins_callback();
            return *callback_ret;
        } else {
            return KRichTextWidget::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (krichtextwidget_drawframe_isbase) {
            krichtextwidget_drawframe_isbase = false;
            KRichTextWidget::drawFrame(param1);
        } else if (krichtextwidget_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            krichtextwidget_drawframe_callback(this, cbval1);
        } else {
            KRichTextWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (krichtextwidget_updatemicrofocus_isbase) {
            krichtextwidget_updatemicrofocus_isbase = false;
            KRichTextWidget::updateMicroFocus();
        } else if (krichtextwidget_updatemicrofocus_callback != nullptr) {
            krichtextwidget_updatemicrofocus_callback();
        } else {
            KRichTextWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (krichtextwidget_create_isbase) {
            krichtextwidget_create_isbase = false;
            KRichTextWidget::create();
        } else if (krichtextwidget_create_callback != nullptr) {
            krichtextwidget_create_callback();
        } else {
            KRichTextWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (krichtextwidget_destroy_isbase) {
            krichtextwidget_destroy_isbase = false;
            KRichTextWidget::destroy();
        } else if (krichtextwidget_destroy_callback != nullptr) {
            krichtextwidget_destroy_callback();
        } else {
            KRichTextWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (krichtextwidget_focusnextchild_isbase) {
            krichtextwidget_focusnextchild_isbase = false;
            return KRichTextWidget::focusNextChild();
        } else if (krichtextwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = krichtextwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (krichtextwidget_focuspreviouschild_isbase) {
            krichtextwidget_focuspreviouschild_isbase = false;
            return KRichTextWidget::focusPreviousChild();
        } else if (krichtextwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = krichtextwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (krichtextwidget_sender_isbase) {
            krichtextwidget_sender_isbase = false;
            return KRichTextWidget::sender();
        } else if (krichtextwidget_sender_callback != nullptr) {
            QObject* callback_ret = krichtextwidget_sender_callback();
            return callback_ret;
        } else {
            return KRichTextWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (krichtextwidget_sendersignalindex_isbase) {
            krichtextwidget_sendersignalindex_isbase = false;
            return KRichTextWidget::senderSignalIndex();
        } else if (krichtextwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = krichtextwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (krichtextwidget_receivers_isbase) {
            krichtextwidget_receivers_isbase = false;
            return KRichTextWidget::receivers(signal);
        } else if (krichtextwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = krichtextwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (krichtextwidget_issignalconnected_isbase) {
            krichtextwidget_issignalconnected_isbase = false;
            return KRichTextWidget::isSignalConnected(signal);
        } else if (krichtextwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = krichtextwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (krichtextwidget_getdecodedmetricf_isbase) {
            krichtextwidget_getdecodedmetricf_isbase = false;
            return KRichTextWidget::getDecodedMetricF(metricA, metricB);
        } else if (krichtextwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = krichtextwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KRichTextWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KRichTextWidget_MouseReleaseEvent(KRichTextWidget* self, QMouseEvent* event);
    friend void KRichTextWidget_QBaseMouseReleaseEvent(KRichTextWidget* self, QMouseEvent* event);
    friend void KRichTextWidget_KeyPressEvent(KRichTextWidget* self, QKeyEvent* event);
    friend void KRichTextWidget_QBaseKeyPressEvent(KRichTextWidget* self, QKeyEvent* event);
    friend bool KRichTextWidget_Event(KRichTextWidget* self, QEvent* param1);
    friend bool KRichTextWidget_QBaseEvent(KRichTextWidget* self, QEvent* param1);
    friend void KRichTextWidget_FocusInEvent(KRichTextWidget* self, QFocusEvent* param1);
    friend void KRichTextWidget_QBaseFocusInEvent(KRichTextWidget* self, QFocusEvent* param1);
    friend void KRichTextWidget_DeleteWordBack(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseDeleteWordBack(KRichTextWidget* self);
    friend void KRichTextWidget_DeleteWordForward(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseDeleteWordForward(KRichTextWidget* self);
    friend void KRichTextWidget_ContextMenuEvent(KRichTextWidget* self, QContextMenuEvent* param1);
    friend void KRichTextWidget_QBaseContextMenuEvent(KRichTextWidget* self, QContextMenuEvent* param1);
    friend void KRichTextWidget_TimerEvent(KRichTextWidget* self, QTimerEvent* e);
    friend void KRichTextWidget_QBaseTimerEvent(KRichTextWidget* self, QTimerEvent* e);
    friend void KRichTextWidget_KeyReleaseEvent(KRichTextWidget* self, QKeyEvent* e);
    friend void KRichTextWidget_QBaseKeyReleaseEvent(KRichTextWidget* self, QKeyEvent* e);
    friend void KRichTextWidget_ResizeEvent(KRichTextWidget* self, QResizeEvent* e);
    friend void KRichTextWidget_QBaseResizeEvent(KRichTextWidget* self, QResizeEvent* e);
    friend void KRichTextWidget_PaintEvent(KRichTextWidget* self, QPaintEvent* e);
    friend void KRichTextWidget_QBasePaintEvent(KRichTextWidget* self, QPaintEvent* e);
    friend void KRichTextWidget_MousePressEvent(KRichTextWidget* self, QMouseEvent* e);
    friend void KRichTextWidget_QBaseMousePressEvent(KRichTextWidget* self, QMouseEvent* e);
    friend void KRichTextWidget_MouseMoveEvent(KRichTextWidget* self, QMouseEvent* e);
    friend void KRichTextWidget_QBaseMouseMoveEvent(KRichTextWidget* self, QMouseEvent* e);
    friend void KRichTextWidget_MouseDoubleClickEvent(KRichTextWidget* self, QMouseEvent* e);
    friend void KRichTextWidget_QBaseMouseDoubleClickEvent(KRichTextWidget* self, QMouseEvent* e);
    friend bool KRichTextWidget_FocusNextPrevChild(KRichTextWidget* self, bool next);
    friend bool KRichTextWidget_QBaseFocusNextPrevChild(KRichTextWidget* self, bool next);
    friend void KRichTextWidget_DragEnterEvent(KRichTextWidget* self, QDragEnterEvent* e);
    friend void KRichTextWidget_QBaseDragEnterEvent(KRichTextWidget* self, QDragEnterEvent* e);
    friend void KRichTextWidget_DragLeaveEvent(KRichTextWidget* self, QDragLeaveEvent* e);
    friend void KRichTextWidget_QBaseDragLeaveEvent(KRichTextWidget* self, QDragLeaveEvent* e);
    friend void KRichTextWidget_DragMoveEvent(KRichTextWidget* self, QDragMoveEvent* e);
    friend void KRichTextWidget_QBaseDragMoveEvent(KRichTextWidget* self, QDragMoveEvent* e);
    friend void KRichTextWidget_DropEvent(KRichTextWidget* self, QDropEvent* e);
    friend void KRichTextWidget_QBaseDropEvent(KRichTextWidget* self, QDropEvent* e);
    friend void KRichTextWidget_FocusOutEvent(KRichTextWidget* self, QFocusEvent* e);
    friend void KRichTextWidget_QBaseFocusOutEvent(KRichTextWidget* self, QFocusEvent* e);
    friend void KRichTextWidget_ShowEvent(KRichTextWidget* self, QShowEvent* param1);
    friend void KRichTextWidget_QBaseShowEvent(KRichTextWidget* self, QShowEvent* param1);
    friend void KRichTextWidget_ChangeEvent(KRichTextWidget* self, QEvent* e);
    friend void KRichTextWidget_QBaseChangeEvent(KRichTextWidget* self, QEvent* e);
    friend void KRichTextWidget_WheelEvent(KRichTextWidget* self, QWheelEvent* e);
    friend void KRichTextWidget_QBaseWheelEvent(KRichTextWidget* self, QWheelEvent* e);
    friend QMimeData* KRichTextWidget_CreateMimeDataFromSelection(const KRichTextWidget* self);
    friend QMimeData* KRichTextWidget_QBaseCreateMimeDataFromSelection(const KRichTextWidget* self);
    friend bool KRichTextWidget_CanInsertFromMimeData(const KRichTextWidget* self, const QMimeData* source);
    friend bool KRichTextWidget_QBaseCanInsertFromMimeData(const KRichTextWidget* self, const QMimeData* source);
    friend void KRichTextWidget_InsertFromMimeData(KRichTextWidget* self, const QMimeData* source);
    friend void KRichTextWidget_QBaseInsertFromMimeData(KRichTextWidget* self, const QMimeData* source);
    friend void KRichTextWidget_InputMethodEvent(KRichTextWidget* self, QInputMethodEvent* param1);
    friend void KRichTextWidget_QBaseInputMethodEvent(KRichTextWidget* self, QInputMethodEvent* param1);
    friend void KRichTextWidget_ScrollContentsBy(KRichTextWidget* self, int dx, int dy);
    friend void KRichTextWidget_QBaseScrollContentsBy(KRichTextWidget* self, int dx, int dy);
    friend void KRichTextWidget_DoSetTextCursor(KRichTextWidget* self, const QTextCursor* cursor);
    friend void KRichTextWidget_QBaseDoSetTextCursor(KRichTextWidget* self, const QTextCursor* cursor);
    friend bool KRichTextWidget_EventFilter(KRichTextWidget* self, QObject* param1, QEvent* param2);
    friend bool KRichTextWidget_QBaseEventFilter(KRichTextWidget* self, QObject* param1, QEvent* param2);
    friend bool KRichTextWidget_ViewportEvent(KRichTextWidget* self, QEvent* param1);
    friend bool KRichTextWidget_QBaseViewportEvent(KRichTextWidget* self, QEvent* param1);
    friend QSize* KRichTextWidget_ViewportSizeHint(const KRichTextWidget* self);
    friend QSize* KRichTextWidget_QBaseViewportSizeHint(const KRichTextWidget* self);
    friend void KRichTextWidget_InitStyleOption(const KRichTextWidget* self, QStyleOptionFrame* option);
    friend void KRichTextWidget_QBaseInitStyleOption(const KRichTextWidget* self, QStyleOptionFrame* option);
    friend void KRichTextWidget_EnterEvent(KRichTextWidget* self, QEnterEvent* event);
    friend void KRichTextWidget_QBaseEnterEvent(KRichTextWidget* self, QEnterEvent* event);
    friend void KRichTextWidget_LeaveEvent(KRichTextWidget* self, QEvent* event);
    friend void KRichTextWidget_QBaseLeaveEvent(KRichTextWidget* self, QEvent* event);
    friend void KRichTextWidget_MoveEvent(KRichTextWidget* self, QMoveEvent* event);
    friend void KRichTextWidget_QBaseMoveEvent(KRichTextWidget* self, QMoveEvent* event);
    friend void KRichTextWidget_CloseEvent(KRichTextWidget* self, QCloseEvent* event);
    friend void KRichTextWidget_QBaseCloseEvent(KRichTextWidget* self, QCloseEvent* event);
    friend void KRichTextWidget_TabletEvent(KRichTextWidget* self, QTabletEvent* event);
    friend void KRichTextWidget_QBaseTabletEvent(KRichTextWidget* self, QTabletEvent* event);
    friend void KRichTextWidget_ActionEvent(KRichTextWidget* self, QActionEvent* event);
    friend void KRichTextWidget_QBaseActionEvent(KRichTextWidget* self, QActionEvent* event);
    friend void KRichTextWidget_HideEvent(KRichTextWidget* self, QHideEvent* event);
    friend void KRichTextWidget_QBaseHideEvent(KRichTextWidget* self, QHideEvent* event);
    friend bool KRichTextWidget_NativeEvent(KRichTextWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KRichTextWidget_QBaseNativeEvent(KRichTextWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRichTextWidget_Metric(const KRichTextWidget* self, int param1);
    friend int KRichTextWidget_QBaseMetric(const KRichTextWidget* self, int param1);
    friend void KRichTextWidget_InitPainter(const KRichTextWidget* self, QPainter* painter);
    friend void KRichTextWidget_QBaseInitPainter(const KRichTextWidget* self, QPainter* painter);
    friend QPaintDevice* KRichTextWidget_Redirected(const KRichTextWidget* self, QPoint* offset);
    friend QPaintDevice* KRichTextWidget_QBaseRedirected(const KRichTextWidget* self, QPoint* offset);
    friend QPainter* KRichTextWidget_SharedPainter(const KRichTextWidget* self);
    friend QPainter* KRichTextWidget_QBaseSharedPainter(const KRichTextWidget* self);
    friend void KRichTextWidget_ChildEvent(KRichTextWidget* self, QChildEvent* event);
    friend void KRichTextWidget_QBaseChildEvent(KRichTextWidget* self, QChildEvent* event);
    friend void KRichTextWidget_CustomEvent(KRichTextWidget* self, QEvent* event);
    friend void KRichTextWidget_QBaseCustomEvent(KRichTextWidget* self, QEvent* event);
    friend void KRichTextWidget_ConnectNotify(KRichTextWidget* self, const QMetaMethod* signal);
    friend void KRichTextWidget_QBaseConnectNotify(KRichTextWidget* self, const QMetaMethod* signal);
    friend void KRichTextWidget_DisconnectNotify(KRichTextWidget* self, const QMetaMethod* signal);
    friend void KRichTextWidget_QBaseDisconnectNotify(KRichTextWidget* self, const QMetaMethod* signal);
    friend void KRichTextWidget_SlotDoReplace(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotDoReplace(KRichTextWidget* self);
    friend void KRichTextWidget_SlotReplaceNext(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotReplaceNext(KRichTextWidget* self);
    friend void KRichTextWidget_SlotDoFind(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotDoFind(KRichTextWidget* self);
    friend void KRichTextWidget_SlotFind(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotFind(KRichTextWidget* self);
    friend void KRichTextWidget_SlotFindNext(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotFindNext(KRichTextWidget* self);
    friend void KRichTextWidget_SlotFindPrevious(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotFindPrevious(KRichTextWidget* self);
    friend void KRichTextWidget_SlotReplace(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotReplace(KRichTextWidget* self);
    friend void KRichTextWidget_SlotSpeakText(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseSlotSpeakText(KRichTextWidget* self);
    friend void KRichTextWidget_ZoomInF(KRichTextWidget* self, float range);
    friend void KRichTextWidget_QBaseZoomInF(KRichTextWidget* self, float range);
    friend void KRichTextWidget_SetViewportMargins(KRichTextWidget* self, int left, int top, int right, int bottom);
    friend void KRichTextWidget_QBaseSetViewportMargins(KRichTextWidget* self, int left, int top, int right, int bottom);
    friend QMargins* KRichTextWidget_ViewportMargins(const KRichTextWidget* self);
    friend QMargins* KRichTextWidget_QBaseViewportMargins(const KRichTextWidget* self);
    friend void KRichTextWidget_DrawFrame(KRichTextWidget* self, QPainter* param1);
    friend void KRichTextWidget_QBaseDrawFrame(KRichTextWidget* self, QPainter* param1);
    friend void KRichTextWidget_UpdateMicroFocus(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseUpdateMicroFocus(KRichTextWidget* self);
    friend void KRichTextWidget_Create(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseCreate(KRichTextWidget* self);
    friend void KRichTextWidget_Destroy(KRichTextWidget* self);
    friend void KRichTextWidget_QBaseDestroy(KRichTextWidget* self);
    friend bool KRichTextWidget_FocusNextChild(KRichTextWidget* self);
    friend bool KRichTextWidget_QBaseFocusNextChild(KRichTextWidget* self);
    friend bool KRichTextWidget_FocusPreviousChild(KRichTextWidget* self);
    friend bool KRichTextWidget_QBaseFocusPreviousChild(KRichTextWidget* self);
    friend QObject* KRichTextWidget_Sender(const KRichTextWidget* self);
    friend QObject* KRichTextWidget_QBaseSender(const KRichTextWidget* self);
    friend int KRichTextWidget_SenderSignalIndex(const KRichTextWidget* self);
    friend int KRichTextWidget_QBaseSenderSignalIndex(const KRichTextWidget* self);
    friend int KRichTextWidget_Receivers(const KRichTextWidget* self, const char* signal);
    friend int KRichTextWidget_QBaseReceivers(const KRichTextWidget* self, const char* signal);
    friend bool KRichTextWidget_IsSignalConnected(const KRichTextWidget* self, const QMetaMethod* signal);
    friend bool KRichTextWidget_QBaseIsSignalConnected(const KRichTextWidget* self, const QMetaMethod* signal);
    friend double KRichTextWidget_GetDecodedMetricF(const KRichTextWidget* self, int metricA, int metricB);
    friend double KRichTextWidget_QBaseGetDecodedMetricF(const KRichTextWidget* self, int metricA, int metricB);
};

#endif
