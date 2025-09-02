#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKRICHTEXTEDIT_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKRICHTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRichTextEdit so that we can call protected methods
class VirtualKRichTextEdit final : public KRichTextEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualKRichTextEdit = true;

    // Virtual class public types (including callbacks)
    using KRichTextEdit_Metacall_Callback = int (*)(KRichTextEdit*, int, int, void**);
    using KRichTextEdit_KeyPressEvent_Callback = void (*)(KRichTextEdit*, QKeyEvent*);
    using KRichTextEdit_SetReadOnly_Callback = void (*)(KRichTextEdit*, bool);
    using KRichTextEdit_SetCheckSpellingEnabled_Callback = void (*)(KRichTextEdit*, bool);
    using KRichTextEdit_CheckSpellingEnabled_Callback = bool (*)();
    using KRichTextEdit_ShouldBlockBeSpellChecked_Callback = bool (*)(const KRichTextEdit*, libqt_string);
    using KRichTextEdit_CreateHighlighter_Callback = void (*)();
    using KRichTextEdit_MousePopupMenu_Callback = QMenu* (*)();
    using KRichTextEdit_Event_Callback = bool (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_FocusInEvent_Callback = void (*)(KRichTextEdit*, QFocusEvent*);
    using KRichTextEdit_DeleteWordBack_Callback = void (*)();
    using KRichTextEdit_DeleteWordForward_Callback = void (*)();
    using KRichTextEdit_ContextMenuEvent_Callback = void (*)(KRichTextEdit*, QContextMenuEvent*);
    using KRichTextEdit_LoadResource_Callback = QVariant* (*)(KRichTextEdit*, int, QUrl*);
    using KRichTextEdit_InputMethodQuery_Callback = QVariant* (*)(const KRichTextEdit*, int);
    using KRichTextEdit_TimerEvent_Callback = void (*)(KRichTextEdit*, QTimerEvent*);
    using KRichTextEdit_KeyReleaseEvent_Callback = void (*)(KRichTextEdit*, QKeyEvent*);
    using KRichTextEdit_ResizeEvent_Callback = void (*)(KRichTextEdit*, QResizeEvent*);
    using KRichTextEdit_PaintEvent_Callback = void (*)(KRichTextEdit*, QPaintEvent*);
    using KRichTextEdit_MousePressEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_MouseMoveEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_MouseReleaseEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_MouseDoubleClickEvent_Callback = void (*)(KRichTextEdit*, QMouseEvent*);
    using KRichTextEdit_FocusNextPrevChild_Callback = bool (*)(KRichTextEdit*, bool);
    using KRichTextEdit_DragEnterEvent_Callback = void (*)(KRichTextEdit*, QDragEnterEvent*);
    using KRichTextEdit_DragLeaveEvent_Callback = void (*)(KRichTextEdit*, QDragLeaveEvent*);
    using KRichTextEdit_DragMoveEvent_Callback = void (*)(KRichTextEdit*, QDragMoveEvent*);
    using KRichTextEdit_DropEvent_Callback = void (*)(KRichTextEdit*, QDropEvent*);
    using KRichTextEdit_FocusOutEvent_Callback = void (*)(KRichTextEdit*, QFocusEvent*);
    using KRichTextEdit_ShowEvent_Callback = void (*)(KRichTextEdit*, QShowEvent*);
    using KRichTextEdit_ChangeEvent_Callback = void (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_WheelEvent_Callback = void (*)(KRichTextEdit*, QWheelEvent*);
    using KRichTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using KRichTextEdit_CanInsertFromMimeData_Callback = bool (*)(const KRichTextEdit*, QMimeData*);
    using KRichTextEdit_InsertFromMimeData_Callback = void (*)(KRichTextEdit*, QMimeData*);
    using KRichTextEdit_InputMethodEvent_Callback = void (*)(KRichTextEdit*, QInputMethodEvent*);
    using KRichTextEdit_ScrollContentsBy_Callback = void (*)(KRichTextEdit*, int, int);
    using KRichTextEdit_DoSetTextCursor_Callback = void (*)(KRichTextEdit*, QTextCursor*);
    using KRichTextEdit_MinimumSizeHint_Callback = QSize* (*)();
    using KRichTextEdit_SizeHint_Callback = QSize* (*)();
    using KRichTextEdit_SetupViewport_Callback = void (*)(KRichTextEdit*, QWidget*);
    using KRichTextEdit_EventFilter_Callback = bool (*)(KRichTextEdit*, QObject*, QEvent*);
    using KRichTextEdit_ViewportEvent_Callback = bool (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_ViewportSizeHint_Callback = QSize* (*)();
    using KRichTextEdit_InitStyleOption_Callback = void (*)(const KRichTextEdit*, QStyleOptionFrame*);
    using KRichTextEdit_DevType_Callback = int (*)();
    using KRichTextEdit_SetVisible_Callback = void (*)(KRichTextEdit*, bool);
    using KRichTextEdit_HeightForWidth_Callback = int (*)(const KRichTextEdit*, int);
    using KRichTextEdit_HasHeightForWidth_Callback = bool (*)();
    using KRichTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using KRichTextEdit_EnterEvent_Callback = void (*)(KRichTextEdit*, QEnterEvent*);
    using KRichTextEdit_LeaveEvent_Callback = void (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_MoveEvent_Callback = void (*)(KRichTextEdit*, QMoveEvent*);
    using KRichTextEdit_CloseEvent_Callback = void (*)(KRichTextEdit*, QCloseEvent*);
    using KRichTextEdit_TabletEvent_Callback = void (*)(KRichTextEdit*, QTabletEvent*);
    using KRichTextEdit_ActionEvent_Callback = void (*)(KRichTextEdit*, QActionEvent*);
    using KRichTextEdit_HideEvent_Callback = void (*)(KRichTextEdit*, QHideEvent*);
    using KRichTextEdit_NativeEvent_Callback = bool (*)(KRichTextEdit*, libqt_string, void*, intptr_t*);
    using KRichTextEdit_Metric_Callback = int (*)(const KRichTextEdit*, int);
    using KRichTextEdit_InitPainter_Callback = void (*)(const KRichTextEdit*, QPainter*);
    using KRichTextEdit_Redirected_Callback = QPaintDevice* (*)(const KRichTextEdit*, QPoint*);
    using KRichTextEdit_SharedPainter_Callback = QPainter* (*)();
    using KRichTextEdit_ChildEvent_Callback = void (*)(KRichTextEdit*, QChildEvent*);
    using KRichTextEdit_CustomEvent_Callback = void (*)(KRichTextEdit*, QEvent*);
    using KRichTextEdit_ConnectNotify_Callback = void (*)(KRichTextEdit*, QMetaMethod*);
    using KRichTextEdit_DisconnectNotify_Callback = void (*)(KRichTextEdit*, QMetaMethod*);
    using KRichTextEdit_SlotDoReplace_Callback = void (*)();
    using KRichTextEdit_SlotReplaceNext_Callback = void (*)();
    using KRichTextEdit_SlotDoFind_Callback = void (*)();
    using KRichTextEdit_SlotFind_Callback = void (*)();
    using KRichTextEdit_SlotFindNext_Callback = void (*)();
    using KRichTextEdit_SlotFindPrevious_Callback = void (*)();
    using KRichTextEdit_SlotReplace_Callback = void (*)();
    using KRichTextEdit_SlotSpeakText_Callback = void (*)();
    using KRichTextEdit_ZoomInF_Callback = void (*)(KRichTextEdit*, float);
    using KRichTextEdit_SetViewportMargins_Callback = void (*)(KRichTextEdit*, int, int, int, int);
    using KRichTextEdit_ViewportMargins_Callback = QMargins* (*)();
    using KRichTextEdit_DrawFrame_Callback = void (*)(KRichTextEdit*, QPainter*);
    using KRichTextEdit_UpdateMicroFocus_Callback = void (*)();
    using KRichTextEdit_Create_Callback = void (*)();
    using KRichTextEdit_Destroy_Callback = void (*)();
    using KRichTextEdit_FocusNextChild_Callback = bool (*)();
    using KRichTextEdit_FocusPreviousChild_Callback = bool (*)();
    using KRichTextEdit_Sender_Callback = QObject* (*)();
    using KRichTextEdit_SenderSignalIndex_Callback = int (*)();
    using KRichTextEdit_Receivers_Callback = int (*)(const KRichTextEdit*, const char*);
    using KRichTextEdit_IsSignalConnected_Callback = bool (*)(const KRichTextEdit*, QMetaMethod*);
    using KRichTextEdit_GetDecodedMetricF_Callback = double (*)(const KRichTextEdit*, int, int);

  protected:
    // Instance callback storage
    KRichTextEdit_Metacall_Callback krichtextedit_metacall_callback = nullptr;
    KRichTextEdit_KeyPressEvent_Callback krichtextedit_keypressevent_callback = nullptr;
    KRichTextEdit_SetReadOnly_Callback krichtextedit_setreadonly_callback = nullptr;
    KRichTextEdit_SetCheckSpellingEnabled_Callback krichtextedit_setcheckspellingenabled_callback = nullptr;
    KRichTextEdit_CheckSpellingEnabled_Callback krichtextedit_checkspellingenabled_callback = nullptr;
    KRichTextEdit_ShouldBlockBeSpellChecked_Callback krichtextedit_shouldblockbespellchecked_callback = nullptr;
    KRichTextEdit_CreateHighlighter_Callback krichtextedit_createhighlighter_callback = nullptr;
    KRichTextEdit_MousePopupMenu_Callback krichtextedit_mousepopupmenu_callback = nullptr;
    KRichTextEdit_Event_Callback krichtextedit_event_callback = nullptr;
    KRichTextEdit_FocusInEvent_Callback krichtextedit_focusinevent_callback = nullptr;
    KRichTextEdit_DeleteWordBack_Callback krichtextedit_deletewordback_callback = nullptr;
    KRichTextEdit_DeleteWordForward_Callback krichtextedit_deletewordforward_callback = nullptr;
    KRichTextEdit_ContextMenuEvent_Callback krichtextedit_contextmenuevent_callback = nullptr;
    KRichTextEdit_LoadResource_Callback krichtextedit_loadresource_callback = nullptr;
    KRichTextEdit_InputMethodQuery_Callback krichtextedit_inputmethodquery_callback = nullptr;
    KRichTextEdit_TimerEvent_Callback krichtextedit_timerevent_callback = nullptr;
    KRichTextEdit_KeyReleaseEvent_Callback krichtextedit_keyreleaseevent_callback = nullptr;
    KRichTextEdit_ResizeEvent_Callback krichtextedit_resizeevent_callback = nullptr;
    KRichTextEdit_PaintEvent_Callback krichtextedit_paintevent_callback = nullptr;
    KRichTextEdit_MousePressEvent_Callback krichtextedit_mousepressevent_callback = nullptr;
    KRichTextEdit_MouseMoveEvent_Callback krichtextedit_mousemoveevent_callback = nullptr;
    KRichTextEdit_MouseReleaseEvent_Callback krichtextedit_mousereleaseevent_callback = nullptr;
    KRichTextEdit_MouseDoubleClickEvent_Callback krichtextedit_mousedoubleclickevent_callback = nullptr;
    KRichTextEdit_FocusNextPrevChild_Callback krichtextedit_focusnextprevchild_callback = nullptr;
    KRichTextEdit_DragEnterEvent_Callback krichtextedit_dragenterevent_callback = nullptr;
    KRichTextEdit_DragLeaveEvent_Callback krichtextedit_dragleaveevent_callback = nullptr;
    KRichTextEdit_DragMoveEvent_Callback krichtextedit_dragmoveevent_callback = nullptr;
    KRichTextEdit_DropEvent_Callback krichtextedit_dropevent_callback = nullptr;
    KRichTextEdit_FocusOutEvent_Callback krichtextedit_focusoutevent_callback = nullptr;
    KRichTextEdit_ShowEvent_Callback krichtextedit_showevent_callback = nullptr;
    KRichTextEdit_ChangeEvent_Callback krichtextedit_changeevent_callback = nullptr;
    KRichTextEdit_WheelEvent_Callback krichtextedit_wheelevent_callback = nullptr;
    KRichTextEdit_CreateMimeDataFromSelection_Callback krichtextedit_createmimedatafromselection_callback = nullptr;
    KRichTextEdit_CanInsertFromMimeData_Callback krichtextedit_caninsertfrommimedata_callback = nullptr;
    KRichTextEdit_InsertFromMimeData_Callback krichtextedit_insertfrommimedata_callback = nullptr;
    KRichTextEdit_InputMethodEvent_Callback krichtextedit_inputmethodevent_callback = nullptr;
    KRichTextEdit_ScrollContentsBy_Callback krichtextedit_scrollcontentsby_callback = nullptr;
    KRichTextEdit_DoSetTextCursor_Callback krichtextedit_dosettextcursor_callback = nullptr;
    KRichTextEdit_MinimumSizeHint_Callback krichtextedit_minimumsizehint_callback = nullptr;
    KRichTextEdit_SizeHint_Callback krichtextedit_sizehint_callback = nullptr;
    KRichTextEdit_SetupViewport_Callback krichtextedit_setupviewport_callback = nullptr;
    KRichTextEdit_EventFilter_Callback krichtextedit_eventfilter_callback = nullptr;
    KRichTextEdit_ViewportEvent_Callback krichtextedit_viewportevent_callback = nullptr;
    KRichTextEdit_ViewportSizeHint_Callback krichtextedit_viewportsizehint_callback = nullptr;
    KRichTextEdit_InitStyleOption_Callback krichtextedit_initstyleoption_callback = nullptr;
    KRichTextEdit_DevType_Callback krichtextedit_devtype_callback = nullptr;
    KRichTextEdit_SetVisible_Callback krichtextedit_setvisible_callback = nullptr;
    KRichTextEdit_HeightForWidth_Callback krichtextedit_heightforwidth_callback = nullptr;
    KRichTextEdit_HasHeightForWidth_Callback krichtextedit_hasheightforwidth_callback = nullptr;
    KRichTextEdit_PaintEngine_Callback krichtextedit_paintengine_callback = nullptr;
    KRichTextEdit_EnterEvent_Callback krichtextedit_enterevent_callback = nullptr;
    KRichTextEdit_LeaveEvent_Callback krichtextedit_leaveevent_callback = nullptr;
    KRichTextEdit_MoveEvent_Callback krichtextedit_moveevent_callback = nullptr;
    KRichTextEdit_CloseEvent_Callback krichtextedit_closeevent_callback = nullptr;
    KRichTextEdit_TabletEvent_Callback krichtextedit_tabletevent_callback = nullptr;
    KRichTextEdit_ActionEvent_Callback krichtextedit_actionevent_callback = nullptr;
    KRichTextEdit_HideEvent_Callback krichtextedit_hideevent_callback = nullptr;
    KRichTextEdit_NativeEvent_Callback krichtextedit_nativeevent_callback = nullptr;
    KRichTextEdit_Metric_Callback krichtextedit_metric_callback = nullptr;
    KRichTextEdit_InitPainter_Callback krichtextedit_initpainter_callback = nullptr;
    KRichTextEdit_Redirected_Callback krichtextedit_redirected_callback = nullptr;
    KRichTextEdit_SharedPainter_Callback krichtextedit_sharedpainter_callback = nullptr;
    KRichTextEdit_ChildEvent_Callback krichtextedit_childevent_callback = nullptr;
    KRichTextEdit_CustomEvent_Callback krichtextedit_customevent_callback = nullptr;
    KRichTextEdit_ConnectNotify_Callback krichtextedit_connectnotify_callback = nullptr;
    KRichTextEdit_DisconnectNotify_Callback krichtextedit_disconnectnotify_callback = nullptr;
    KRichTextEdit_SlotDoReplace_Callback krichtextedit_slotdoreplace_callback = nullptr;
    KRichTextEdit_SlotReplaceNext_Callback krichtextedit_slotreplacenext_callback = nullptr;
    KRichTextEdit_SlotDoFind_Callback krichtextedit_slotdofind_callback = nullptr;
    KRichTextEdit_SlotFind_Callback krichtextedit_slotfind_callback = nullptr;
    KRichTextEdit_SlotFindNext_Callback krichtextedit_slotfindnext_callback = nullptr;
    KRichTextEdit_SlotFindPrevious_Callback krichtextedit_slotfindprevious_callback = nullptr;
    KRichTextEdit_SlotReplace_Callback krichtextedit_slotreplace_callback = nullptr;
    KRichTextEdit_SlotSpeakText_Callback krichtextedit_slotspeaktext_callback = nullptr;
    KRichTextEdit_ZoomInF_Callback krichtextedit_zoominf_callback = nullptr;
    KRichTextEdit_SetViewportMargins_Callback krichtextedit_setviewportmargins_callback = nullptr;
    KRichTextEdit_ViewportMargins_Callback krichtextedit_viewportmargins_callback = nullptr;
    KRichTextEdit_DrawFrame_Callback krichtextedit_drawframe_callback = nullptr;
    KRichTextEdit_UpdateMicroFocus_Callback krichtextedit_updatemicrofocus_callback = nullptr;
    KRichTextEdit_Create_Callback krichtextedit_create_callback = nullptr;
    KRichTextEdit_Destroy_Callback krichtextedit_destroy_callback = nullptr;
    KRichTextEdit_FocusNextChild_Callback krichtextedit_focusnextchild_callback = nullptr;
    KRichTextEdit_FocusPreviousChild_Callback krichtextedit_focuspreviouschild_callback = nullptr;
    KRichTextEdit_Sender_Callback krichtextedit_sender_callback = nullptr;
    KRichTextEdit_SenderSignalIndex_Callback krichtextedit_sendersignalindex_callback = nullptr;
    KRichTextEdit_Receivers_Callback krichtextedit_receivers_callback = nullptr;
    KRichTextEdit_IsSignalConnected_Callback krichtextedit_issignalconnected_callback = nullptr;
    KRichTextEdit_GetDecodedMetricF_Callback krichtextedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool krichtextedit_metacall_isbase = false;
    mutable bool krichtextedit_keypressevent_isbase = false;
    mutable bool krichtextedit_setreadonly_isbase = false;
    mutable bool krichtextedit_setcheckspellingenabled_isbase = false;
    mutable bool krichtextedit_checkspellingenabled_isbase = false;
    mutable bool krichtextedit_shouldblockbespellchecked_isbase = false;
    mutable bool krichtextedit_createhighlighter_isbase = false;
    mutable bool krichtextedit_mousepopupmenu_isbase = false;
    mutable bool krichtextedit_event_isbase = false;
    mutable bool krichtextedit_focusinevent_isbase = false;
    mutable bool krichtextedit_deletewordback_isbase = false;
    mutable bool krichtextedit_deletewordforward_isbase = false;
    mutable bool krichtextedit_contextmenuevent_isbase = false;
    mutable bool krichtextedit_loadresource_isbase = false;
    mutable bool krichtextedit_inputmethodquery_isbase = false;
    mutable bool krichtextedit_timerevent_isbase = false;
    mutable bool krichtextedit_keyreleaseevent_isbase = false;
    mutable bool krichtextedit_resizeevent_isbase = false;
    mutable bool krichtextedit_paintevent_isbase = false;
    mutable bool krichtextedit_mousepressevent_isbase = false;
    mutable bool krichtextedit_mousemoveevent_isbase = false;
    mutable bool krichtextedit_mousereleaseevent_isbase = false;
    mutable bool krichtextedit_mousedoubleclickevent_isbase = false;
    mutable bool krichtextedit_focusnextprevchild_isbase = false;
    mutable bool krichtextedit_dragenterevent_isbase = false;
    mutable bool krichtextedit_dragleaveevent_isbase = false;
    mutable bool krichtextedit_dragmoveevent_isbase = false;
    mutable bool krichtextedit_dropevent_isbase = false;
    mutable bool krichtextedit_focusoutevent_isbase = false;
    mutable bool krichtextedit_showevent_isbase = false;
    mutable bool krichtextedit_changeevent_isbase = false;
    mutable bool krichtextedit_wheelevent_isbase = false;
    mutable bool krichtextedit_createmimedatafromselection_isbase = false;
    mutable bool krichtextedit_caninsertfrommimedata_isbase = false;
    mutable bool krichtextedit_insertfrommimedata_isbase = false;
    mutable bool krichtextedit_inputmethodevent_isbase = false;
    mutable bool krichtextedit_scrollcontentsby_isbase = false;
    mutable bool krichtextedit_dosettextcursor_isbase = false;
    mutable bool krichtextedit_minimumsizehint_isbase = false;
    mutable bool krichtextedit_sizehint_isbase = false;
    mutable bool krichtextedit_setupviewport_isbase = false;
    mutable bool krichtextedit_eventfilter_isbase = false;
    mutable bool krichtextedit_viewportevent_isbase = false;
    mutable bool krichtextedit_viewportsizehint_isbase = false;
    mutable bool krichtextedit_initstyleoption_isbase = false;
    mutable bool krichtextedit_devtype_isbase = false;
    mutable bool krichtextedit_setvisible_isbase = false;
    mutable bool krichtextedit_heightforwidth_isbase = false;
    mutable bool krichtextedit_hasheightforwidth_isbase = false;
    mutable bool krichtextedit_paintengine_isbase = false;
    mutable bool krichtextedit_enterevent_isbase = false;
    mutable bool krichtextedit_leaveevent_isbase = false;
    mutable bool krichtextedit_moveevent_isbase = false;
    mutable bool krichtextedit_closeevent_isbase = false;
    mutable bool krichtextedit_tabletevent_isbase = false;
    mutable bool krichtextedit_actionevent_isbase = false;
    mutable bool krichtextedit_hideevent_isbase = false;
    mutable bool krichtextedit_nativeevent_isbase = false;
    mutable bool krichtextedit_metric_isbase = false;
    mutable bool krichtextedit_initpainter_isbase = false;
    mutable bool krichtextedit_redirected_isbase = false;
    mutable bool krichtextedit_sharedpainter_isbase = false;
    mutable bool krichtextedit_childevent_isbase = false;
    mutable bool krichtextedit_customevent_isbase = false;
    mutable bool krichtextedit_connectnotify_isbase = false;
    mutable bool krichtextedit_disconnectnotify_isbase = false;
    mutable bool krichtextedit_slotdoreplace_isbase = false;
    mutable bool krichtextedit_slotreplacenext_isbase = false;
    mutable bool krichtextedit_slotdofind_isbase = false;
    mutable bool krichtextedit_slotfind_isbase = false;
    mutable bool krichtextedit_slotfindnext_isbase = false;
    mutable bool krichtextedit_slotfindprevious_isbase = false;
    mutable bool krichtextedit_slotreplace_isbase = false;
    mutable bool krichtextedit_slotspeaktext_isbase = false;
    mutable bool krichtextedit_zoominf_isbase = false;
    mutable bool krichtextedit_setviewportmargins_isbase = false;
    mutable bool krichtextedit_viewportmargins_isbase = false;
    mutable bool krichtextedit_drawframe_isbase = false;
    mutable bool krichtextedit_updatemicrofocus_isbase = false;
    mutable bool krichtextedit_create_isbase = false;
    mutable bool krichtextedit_destroy_isbase = false;
    mutable bool krichtextedit_focusnextchild_isbase = false;
    mutable bool krichtextedit_focuspreviouschild_isbase = false;
    mutable bool krichtextedit_sender_isbase = false;
    mutable bool krichtextedit_sendersignalindex_isbase = false;
    mutable bool krichtextedit_receivers_isbase = false;
    mutable bool krichtextedit_issignalconnected_isbase = false;
    mutable bool krichtextedit_getdecodedmetricf_isbase = false;

  public:
    VirtualKRichTextEdit(QWidget* parent) : KRichTextEdit(parent) {};
    VirtualKRichTextEdit(const QString& text) : KRichTextEdit(text) {};
    VirtualKRichTextEdit() : KRichTextEdit() {};
    VirtualKRichTextEdit(const QString& text, QWidget* parent) : KRichTextEdit(text, parent) {};

    ~VirtualKRichTextEdit() {
        krichtextedit_metacall_callback = nullptr;
        krichtextedit_keypressevent_callback = nullptr;
        krichtextedit_setreadonly_callback = nullptr;
        krichtextedit_setcheckspellingenabled_callback = nullptr;
        krichtextedit_checkspellingenabled_callback = nullptr;
        krichtextedit_shouldblockbespellchecked_callback = nullptr;
        krichtextedit_createhighlighter_callback = nullptr;
        krichtextedit_mousepopupmenu_callback = nullptr;
        krichtextedit_event_callback = nullptr;
        krichtextedit_focusinevent_callback = nullptr;
        krichtextedit_deletewordback_callback = nullptr;
        krichtextedit_deletewordforward_callback = nullptr;
        krichtextedit_contextmenuevent_callback = nullptr;
        krichtextedit_loadresource_callback = nullptr;
        krichtextedit_inputmethodquery_callback = nullptr;
        krichtextedit_timerevent_callback = nullptr;
        krichtextedit_keyreleaseevent_callback = nullptr;
        krichtextedit_resizeevent_callback = nullptr;
        krichtextedit_paintevent_callback = nullptr;
        krichtextedit_mousepressevent_callback = nullptr;
        krichtextedit_mousemoveevent_callback = nullptr;
        krichtextedit_mousereleaseevent_callback = nullptr;
        krichtextedit_mousedoubleclickevent_callback = nullptr;
        krichtextedit_focusnextprevchild_callback = nullptr;
        krichtextedit_dragenterevent_callback = nullptr;
        krichtextedit_dragleaveevent_callback = nullptr;
        krichtextedit_dragmoveevent_callback = nullptr;
        krichtextedit_dropevent_callback = nullptr;
        krichtextedit_focusoutevent_callback = nullptr;
        krichtextedit_showevent_callback = nullptr;
        krichtextedit_changeevent_callback = nullptr;
        krichtextedit_wheelevent_callback = nullptr;
        krichtextedit_createmimedatafromselection_callback = nullptr;
        krichtextedit_caninsertfrommimedata_callback = nullptr;
        krichtextedit_insertfrommimedata_callback = nullptr;
        krichtextedit_inputmethodevent_callback = nullptr;
        krichtextedit_scrollcontentsby_callback = nullptr;
        krichtextedit_dosettextcursor_callback = nullptr;
        krichtextedit_minimumsizehint_callback = nullptr;
        krichtextedit_sizehint_callback = nullptr;
        krichtextedit_setupviewport_callback = nullptr;
        krichtextedit_eventfilter_callback = nullptr;
        krichtextedit_viewportevent_callback = nullptr;
        krichtextedit_viewportsizehint_callback = nullptr;
        krichtextedit_initstyleoption_callback = nullptr;
        krichtextedit_devtype_callback = nullptr;
        krichtextedit_setvisible_callback = nullptr;
        krichtextedit_heightforwidth_callback = nullptr;
        krichtextedit_hasheightforwidth_callback = nullptr;
        krichtextedit_paintengine_callback = nullptr;
        krichtextedit_enterevent_callback = nullptr;
        krichtextedit_leaveevent_callback = nullptr;
        krichtextedit_moveevent_callback = nullptr;
        krichtextedit_closeevent_callback = nullptr;
        krichtextedit_tabletevent_callback = nullptr;
        krichtextedit_actionevent_callback = nullptr;
        krichtextedit_hideevent_callback = nullptr;
        krichtextedit_nativeevent_callback = nullptr;
        krichtextedit_metric_callback = nullptr;
        krichtextedit_initpainter_callback = nullptr;
        krichtextedit_redirected_callback = nullptr;
        krichtextedit_sharedpainter_callback = nullptr;
        krichtextedit_childevent_callback = nullptr;
        krichtextedit_customevent_callback = nullptr;
        krichtextedit_connectnotify_callback = nullptr;
        krichtextedit_disconnectnotify_callback = nullptr;
        krichtextedit_slotdoreplace_callback = nullptr;
        krichtextedit_slotreplacenext_callback = nullptr;
        krichtextedit_slotdofind_callback = nullptr;
        krichtextedit_slotfind_callback = nullptr;
        krichtextedit_slotfindnext_callback = nullptr;
        krichtextedit_slotfindprevious_callback = nullptr;
        krichtextedit_slotreplace_callback = nullptr;
        krichtextedit_slotspeaktext_callback = nullptr;
        krichtextedit_zoominf_callback = nullptr;
        krichtextedit_setviewportmargins_callback = nullptr;
        krichtextedit_viewportmargins_callback = nullptr;
        krichtextedit_drawframe_callback = nullptr;
        krichtextedit_updatemicrofocus_callback = nullptr;
        krichtextedit_create_callback = nullptr;
        krichtextedit_destroy_callback = nullptr;
        krichtextedit_focusnextchild_callback = nullptr;
        krichtextedit_focuspreviouschild_callback = nullptr;
        krichtextedit_sender_callback = nullptr;
        krichtextedit_sendersignalindex_callback = nullptr;
        krichtextedit_receivers_callback = nullptr;
        krichtextedit_issignalconnected_callback = nullptr;
        krichtextedit_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKRichTextEdit_Metacall_Callback(KRichTextEdit_Metacall_Callback cb) { krichtextedit_metacall_callback = cb; }
    inline void setKRichTextEdit_KeyPressEvent_Callback(KRichTextEdit_KeyPressEvent_Callback cb) { krichtextedit_keypressevent_callback = cb; }
    inline void setKRichTextEdit_SetReadOnly_Callback(KRichTextEdit_SetReadOnly_Callback cb) { krichtextedit_setreadonly_callback = cb; }
    inline void setKRichTextEdit_SetCheckSpellingEnabled_Callback(KRichTextEdit_SetCheckSpellingEnabled_Callback cb) { krichtextedit_setcheckspellingenabled_callback = cb; }
    inline void setKRichTextEdit_CheckSpellingEnabled_Callback(KRichTextEdit_CheckSpellingEnabled_Callback cb) { krichtextedit_checkspellingenabled_callback = cb; }
    inline void setKRichTextEdit_ShouldBlockBeSpellChecked_Callback(KRichTextEdit_ShouldBlockBeSpellChecked_Callback cb) { krichtextedit_shouldblockbespellchecked_callback = cb; }
    inline void setKRichTextEdit_CreateHighlighter_Callback(KRichTextEdit_CreateHighlighter_Callback cb) { krichtextedit_createhighlighter_callback = cb; }
    inline void setKRichTextEdit_MousePopupMenu_Callback(KRichTextEdit_MousePopupMenu_Callback cb) { krichtextedit_mousepopupmenu_callback = cb; }
    inline void setKRichTextEdit_Event_Callback(KRichTextEdit_Event_Callback cb) { krichtextedit_event_callback = cb; }
    inline void setKRichTextEdit_FocusInEvent_Callback(KRichTextEdit_FocusInEvent_Callback cb) { krichtextedit_focusinevent_callback = cb; }
    inline void setKRichTextEdit_DeleteWordBack_Callback(KRichTextEdit_DeleteWordBack_Callback cb) { krichtextedit_deletewordback_callback = cb; }
    inline void setKRichTextEdit_DeleteWordForward_Callback(KRichTextEdit_DeleteWordForward_Callback cb) { krichtextedit_deletewordforward_callback = cb; }
    inline void setKRichTextEdit_ContextMenuEvent_Callback(KRichTextEdit_ContextMenuEvent_Callback cb) { krichtextedit_contextmenuevent_callback = cb; }
    inline void setKRichTextEdit_LoadResource_Callback(KRichTextEdit_LoadResource_Callback cb) { krichtextedit_loadresource_callback = cb; }
    inline void setKRichTextEdit_InputMethodQuery_Callback(KRichTextEdit_InputMethodQuery_Callback cb) { krichtextedit_inputmethodquery_callback = cb; }
    inline void setKRichTextEdit_TimerEvent_Callback(KRichTextEdit_TimerEvent_Callback cb) { krichtextedit_timerevent_callback = cb; }
    inline void setKRichTextEdit_KeyReleaseEvent_Callback(KRichTextEdit_KeyReleaseEvent_Callback cb) { krichtextedit_keyreleaseevent_callback = cb; }
    inline void setKRichTextEdit_ResizeEvent_Callback(KRichTextEdit_ResizeEvent_Callback cb) { krichtextedit_resizeevent_callback = cb; }
    inline void setKRichTextEdit_PaintEvent_Callback(KRichTextEdit_PaintEvent_Callback cb) { krichtextedit_paintevent_callback = cb; }
    inline void setKRichTextEdit_MousePressEvent_Callback(KRichTextEdit_MousePressEvent_Callback cb) { krichtextedit_mousepressevent_callback = cb; }
    inline void setKRichTextEdit_MouseMoveEvent_Callback(KRichTextEdit_MouseMoveEvent_Callback cb) { krichtextedit_mousemoveevent_callback = cb; }
    inline void setKRichTextEdit_MouseReleaseEvent_Callback(KRichTextEdit_MouseReleaseEvent_Callback cb) { krichtextedit_mousereleaseevent_callback = cb; }
    inline void setKRichTextEdit_MouseDoubleClickEvent_Callback(KRichTextEdit_MouseDoubleClickEvent_Callback cb) { krichtextedit_mousedoubleclickevent_callback = cb; }
    inline void setKRichTextEdit_FocusNextPrevChild_Callback(KRichTextEdit_FocusNextPrevChild_Callback cb) { krichtextedit_focusnextprevchild_callback = cb; }
    inline void setKRichTextEdit_DragEnterEvent_Callback(KRichTextEdit_DragEnterEvent_Callback cb) { krichtextedit_dragenterevent_callback = cb; }
    inline void setKRichTextEdit_DragLeaveEvent_Callback(KRichTextEdit_DragLeaveEvent_Callback cb) { krichtextedit_dragleaveevent_callback = cb; }
    inline void setKRichTextEdit_DragMoveEvent_Callback(KRichTextEdit_DragMoveEvent_Callback cb) { krichtextedit_dragmoveevent_callback = cb; }
    inline void setKRichTextEdit_DropEvent_Callback(KRichTextEdit_DropEvent_Callback cb) { krichtextedit_dropevent_callback = cb; }
    inline void setKRichTextEdit_FocusOutEvent_Callback(KRichTextEdit_FocusOutEvent_Callback cb) { krichtextedit_focusoutevent_callback = cb; }
    inline void setKRichTextEdit_ShowEvent_Callback(KRichTextEdit_ShowEvent_Callback cb) { krichtextedit_showevent_callback = cb; }
    inline void setKRichTextEdit_ChangeEvent_Callback(KRichTextEdit_ChangeEvent_Callback cb) { krichtextedit_changeevent_callback = cb; }
    inline void setKRichTextEdit_WheelEvent_Callback(KRichTextEdit_WheelEvent_Callback cb) { krichtextedit_wheelevent_callback = cb; }
    inline void setKRichTextEdit_CreateMimeDataFromSelection_Callback(KRichTextEdit_CreateMimeDataFromSelection_Callback cb) { krichtextedit_createmimedatafromselection_callback = cb; }
    inline void setKRichTextEdit_CanInsertFromMimeData_Callback(KRichTextEdit_CanInsertFromMimeData_Callback cb) { krichtextedit_caninsertfrommimedata_callback = cb; }
    inline void setKRichTextEdit_InsertFromMimeData_Callback(KRichTextEdit_InsertFromMimeData_Callback cb) { krichtextedit_insertfrommimedata_callback = cb; }
    inline void setKRichTextEdit_InputMethodEvent_Callback(KRichTextEdit_InputMethodEvent_Callback cb) { krichtextedit_inputmethodevent_callback = cb; }
    inline void setKRichTextEdit_ScrollContentsBy_Callback(KRichTextEdit_ScrollContentsBy_Callback cb) { krichtextedit_scrollcontentsby_callback = cb; }
    inline void setKRichTextEdit_DoSetTextCursor_Callback(KRichTextEdit_DoSetTextCursor_Callback cb) { krichtextedit_dosettextcursor_callback = cb; }
    inline void setKRichTextEdit_MinimumSizeHint_Callback(KRichTextEdit_MinimumSizeHint_Callback cb) { krichtextedit_minimumsizehint_callback = cb; }
    inline void setKRichTextEdit_SizeHint_Callback(KRichTextEdit_SizeHint_Callback cb) { krichtextedit_sizehint_callback = cb; }
    inline void setKRichTextEdit_SetupViewport_Callback(KRichTextEdit_SetupViewport_Callback cb) { krichtextedit_setupviewport_callback = cb; }
    inline void setKRichTextEdit_EventFilter_Callback(KRichTextEdit_EventFilter_Callback cb) { krichtextedit_eventfilter_callback = cb; }
    inline void setKRichTextEdit_ViewportEvent_Callback(KRichTextEdit_ViewportEvent_Callback cb) { krichtextedit_viewportevent_callback = cb; }
    inline void setKRichTextEdit_ViewportSizeHint_Callback(KRichTextEdit_ViewportSizeHint_Callback cb) { krichtextedit_viewportsizehint_callback = cb; }
    inline void setKRichTextEdit_InitStyleOption_Callback(KRichTextEdit_InitStyleOption_Callback cb) { krichtextedit_initstyleoption_callback = cb; }
    inline void setKRichTextEdit_DevType_Callback(KRichTextEdit_DevType_Callback cb) { krichtextedit_devtype_callback = cb; }
    inline void setKRichTextEdit_SetVisible_Callback(KRichTextEdit_SetVisible_Callback cb) { krichtextedit_setvisible_callback = cb; }
    inline void setKRichTextEdit_HeightForWidth_Callback(KRichTextEdit_HeightForWidth_Callback cb) { krichtextedit_heightforwidth_callback = cb; }
    inline void setKRichTextEdit_HasHeightForWidth_Callback(KRichTextEdit_HasHeightForWidth_Callback cb) { krichtextedit_hasheightforwidth_callback = cb; }
    inline void setKRichTextEdit_PaintEngine_Callback(KRichTextEdit_PaintEngine_Callback cb) { krichtextedit_paintengine_callback = cb; }
    inline void setKRichTextEdit_EnterEvent_Callback(KRichTextEdit_EnterEvent_Callback cb) { krichtextedit_enterevent_callback = cb; }
    inline void setKRichTextEdit_LeaveEvent_Callback(KRichTextEdit_LeaveEvent_Callback cb) { krichtextedit_leaveevent_callback = cb; }
    inline void setKRichTextEdit_MoveEvent_Callback(KRichTextEdit_MoveEvent_Callback cb) { krichtextedit_moveevent_callback = cb; }
    inline void setKRichTextEdit_CloseEvent_Callback(KRichTextEdit_CloseEvent_Callback cb) { krichtextedit_closeevent_callback = cb; }
    inline void setKRichTextEdit_TabletEvent_Callback(KRichTextEdit_TabletEvent_Callback cb) { krichtextedit_tabletevent_callback = cb; }
    inline void setKRichTextEdit_ActionEvent_Callback(KRichTextEdit_ActionEvent_Callback cb) { krichtextedit_actionevent_callback = cb; }
    inline void setKRichTextEdit_HideEvent_Callback(KRichTextEdit_HideEvent_Callback cb) { krichtextedit_hideevent_callback = cb; }
    inline void setKRichTextEdit_NativeEvent_Callback(KRichTextEdit_NativeEvent_Callback cb) { krichtextedit_nativeevent_callback = cb; }
    inline void setKRichTextEdit_Metric_Callback(KRichTextEdit_Metric_Callback cb) { krichtextedit_metric_callback = cb; }
    inline void setKRichTextEdit_InitPainter_Callback(KRichTextEdit_InitPainter_Callback cb) { krichtextedit_initpainter_callback = cb; }
    inline void setKRichTextEdit_Redirected_Callback(KRichTextEdit_Redirected_Callback cb) { krichtextedit_redirected_callback = cb; }
    inline void setKRichTextEdit_SharedPainter_Callback(KRichTextEdit_SharedPainter_Callback cb) { krichtextedit_sharedpainter_callback = cb; }
    inline void setKRichTextEdit_ChildEvent_Callback(KRichTextEdit_ChildEvent_Callback cb) { krichtextedit_childevent_callback = cb; }
    inline void setKRichTextEdit_CustomEvent_Callback(KRichTextEdit_CustomEvent_Callback cb) { krichtextedit_customevent_callback = cb; }
    inline void setKRichTextEdit_ConnectNotify_Callback(KRichTextEdit_ConnectNotify_Callback cb) { krichtextedit_connectnotify_callback = cb; }
    inline void setKRichTextEdit_DisconnectNotify_Callback(KRichTextEdit_DisconnectNotify_Callback cb) { krichtextedit_disconnectnotify_callback = cb; }
    inline void setKRichTextEdit_SlotDoReplace_Callback(KRichTextEdit_SlotDoReplace_Callback cb) { krichtextedit_slotdoreplace_callback = cb; }
    inline void setKRichTextEdit_SlotReplaceNext_Callback(KRichTextEdit_SlotReplaceNext_Callback cb) { krichtextedit_slotreplacenext_callback = cb; }
    inline void setKRichTextEdit_SlotDoFind_Callback(KRichTextEdit_SlotDoFind_Callback cb) { krichtextedit_slotdofind_callback = cb; }
    inline void setKRichTextEdit_SlotFind_Callback(KRichTextEdit_SlotFind_Callback cb) { krichtextedit_slotfind_callback = cb; }
    inline void setKRichTextEdit_SlotFindNext_Callback(KRichTextEdit_SlotFindNext_Callback cb) { krichtextedit_slotfindnext_callback = cb; }
    inline void setKRichTextEdit_SlotFindPrevious_Callback(KRichTextEdit_SlotFindPrevious_Callback cb) { krichtextedit_slotfindprevious_callback = cb; }
    inline void setKRichTextEdit_SlotReplace_Callback(KRichTextEdit_SlotReplace_Callback cb) { krichtextedit_slotreplace_callback = cb; }
    inline void setKRichTextEdit_SlotSpeakText_Callback(KRichTextEdit_SlotSpeakText_Callback cb) { krichtextedit_slotspeaktext_callback = cb; }
    inline void setKRichTextEdit_ZoomInF_Callback(KRichTextEdit_ZoomInF_Callback cb) { krichtextedit_zoominf_callback = cb; }
    inline void setKRichTextEdit_SetViewportMargins_Callback(KRichTextEdit_SetViewportMargins_Callback cb) { krichtextedit_setviewportmargins_callback = cb; }
    inline void setKRichTextEdit_ViewportMargins_Callback(KRichTextEdit_ViewportMargins_Callback cb) { krichtextedit_viewportmargins_callback = cb; }
    inline void setKRichTextEdit_DrawFrame_Callback(KRichTextEdit_DrawFrame_Callback cb) { krichtextedit_drawframe_callback = cb; }
    inline void setKRichTextEdit_UpdateMicroFocus_Callback(KRichTextEdit_UpdateMicroFocus_Callback cb) { krichtextedit_updatemicrofocus_callback = cb; }
    inline void setKRichTextEdit_Create_Callback(KRichTextEdit_Create_Callback cb) { krichtextedit_create_callback = cb; }
    inline void setKRichTextEdit_Destroy_Callback(KRichTextEdit_Destroy_Callback cb) { krichtextedit_destroy_callback = cb; }
    inline void setKRichTextEdit_FocusNextChild_Callback(KRichTextEdit_FocusNextChild_Callback cb) { krichtextedit_focusnextchild_callback = cb; }
    inline void setKRichTextEdit_FocusPreviousChild_Callback(KRichTextEdit_FocusPreviousChild_Callback cb) { krichtextedit_focuspreviouschild_callback = cb; }
    inline void setKRichTextEdit_Sender_Callback(KRichTextEdit_Sender_Callback cb) { krichtextedit_sender_callback = cb; }
    inline void setKRichTextEdit_SenderSignalIndex_Callback(KRichTextEdit_SenderSignalIndex_Callback cb) { krichtextedit_sendersignalindex_callback = cb; }
    inline void setKRichTextEdit_Receivers_Callback(KRichTextEdit_Receivers_Callback cb) { krichtextedit_receivers_callback = cb; }
    inline void setKRichTextEdit_IsSignalConnected_Callback(KRichTextEdit_IsSignalConnected_Callback cb) { krichtextedit_issignalconnected_callback = cb; }
    inline void setKRichTextEdit_GetDecodedMetricF_Callback(KRichTextEdit_GetDecodedMetricF_Callback cb) { krichtextedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKRichTextEdit_Metacall_IsBase(bool value) const { krichtextedit_metacall_isbase = value; }
    inline void setKRichTextEdit_KeyPressEvent_IsBase(bool value) const { krichtextedit_keypressevent_isbase = value; }
    inline void setKRichTextEdit_SetReadOnly_IsBase(bool value) const { krichtextedit_setreadonly_isbase = value; }
    inline void setKRichTextEdit_SetCheckSpellingEnabled_IsBase(bool value) const { krichtextedit_setcheckspellingenabled_isbase = value; }
    inline void setKRichTextEdit_CheckSpellingEnabled_IsBase(bool value) const { krichtextedit_checkspellingenabled_isbase = value; }
    inline void setKRichTextEdit_ShouldBlockBeSpellChecked_IsBase(bool value) const { krichtextedit_shouldblockbespellchecked_isbase = value; }
    inline void setKRichTextEdit_CreateHighlighter_IsBase(bool value) const { krichtextedit_createhighlighter_isbase = value; }
    inline void setKRichTextEdit_MousePopupMenu_IsBase(bool value) const { krichtextedit_mousepopupmenu_isbase = value; }
    inline void setKRichTextEdit_Event_IsBase(bool value) const { krichtextedit_event_isbase = value; }
    inline void setKRichTextEdit_FocusInEvent_IsBase(bool value) const { krichtextedit_focusinevent_isbase = value; }
    inline void setKRichTextEdit_DeleteWordBack_IsBase(bool value) const { krichtextedit_deletewordback_isbase = value; }
    inline void setKRichTextEdit_DeleteWordForward_IsBase(bool value) const { krichtextedit_deletewordforward_isbase = value; }
    inline void setKRichTextEdit_ContextMenuEvent_IsBase(bool value) const { krichtextedit_contextmenuevent_isbase = value; }
    inline void setKRichTextEdit_LoadResource_IsBase(bool value) const { krichtextedit_loadresource_isbase = value; }
    inline void setKRichTextEdit_InputMethodQuery_IsBase(bool value) const { krichtextedit_inputmethodquery_isbase = value; }
    inline void setKRichTextEdit_TimerEvent_IsBase(bool value) const { krichtextedit_timerevent_isbase = value; }
    inline void setKRichTextEdit_KeyReleaseEvent_IsBase(bool value) const { krichtextedit_keyreleaseevent_isbase = value; }
    inline void setKRichTextEdit_ResizeEvent_IsBase(bool value) const { krichtextedit_resizeevent_isbase = value; }
    inline void setKRichTextEdit_PaintEvent_IsBase(bool value) const { krichtextedit_paintevent_isbase = value; }
    inline void setKRichTextEdit_MousePressEvent_IsBase(bool value) const { krichtextedit_mousepressevent_isbase = value; }
    inline void setKRichTextEdit_MouseMoveEvent_IsBase(bool value) const { krichtextedit_mousemoveevent_isbase = value; }
    inline void setKRichTextEdit_MouseReleaseEvent_IsBase(bool value) const { krichtextedit_mousereleaseevent_isbase = value; }
    inline void setKRichTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { krichtextedit_mousedoubleclickevent_isbase = value; }
    inline void setKRichTextEdit_FocusNextPrevChild_IsBase(bool value) const { krichtextedit_focusnextprevchild_isbase = value; }
    inline void setKRichTextEdit_DragEnterEvent_IsBase(bool value) const { krichtextedit_dragenterevent_isbase = value; }
    inline void setKRichTextEdit_DragLeaveEvent_IsBase(bool value) const { krichtextedit_dragleaveevent_isbase = value; }
    inline void setKRichTextEdit_DragMoveEvent_IsBase(bool value) const { krichtextedit_dragmoveevent_isbase = value; }
    inline void setKRichTextEdit_DropEvent_IsBase(bool value) const { krichtextedit_dropevent_isbase = value; }
    inline void setKRichTextEdit_FocusOutEvent_IsBase(bool value) const { krichtextedit_focusoutevent_isbase = value; }
    inline void setKRichTextEdit_ShowEvent_IsBase(bool value) const { krichtextedit_showevent_isbase = value; }
    inline void setKRichTextEdit_ChangeEvent_IsBase(bool value) const { krichtextedit_changeevent_isbase = value; }
    inline void setKRichTextEdit_WheelEvent_IsBase(bool value) const { krichtextedit_wheelevent_isbase = value; }
    inline void setKRichTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { krichtextedit_createmimedatafromselection_isbase = value; }
    inline void setKRichTextEdit_CanInsertFromMimeData_IsBase(bool value) const { krichtextedit_caninsertfrommimedata_isbase = value; }
    inline void setKRichTextEdit_InsertFromMimeData_IsBase(bool value) const { krichtextedit_insertfrommimedata_isbase = value; }
    inline void setKRichTextEdit_InputMethodEvent_IsBase(bool value) const { krichtextedit_inputmethodevent_isbase = value; }
    inline void setKRichTextEdit_ScrollContentsBy_IsBase(bool value) const { krichtextedit_scrollcontentsby_isbase = value; }
    inline void setKRichTextEdit_DoSetTextCursor_IsBase(bool value) const { krichtextedit_dosettextcursor_isbase = value; }
    inline void setKRichTextEdit_MinimumSizeHint_IsBase(bool value) const { krichtextedit_minimumsizehint_isbase = value; }
    inline void setKRichTextEdit_SizeHint_IsBase(bool value) const { krichtextedit_sizehint_isbase = value; }
    inline void setKRichTextEdit_SetupViewport_IsBase(bool value) const { krichtextedit_setupviewport_isbase = value; }
    inline void setKRichTextEdit_EventFilter_IsBase(bool value) const { krichtextedit_eventfilter_isbase = value; }
    inline void setKRichTextEdit_ViewportEvent_IsBase(bool value) const { krichtextedit_viewportevent_isbase = value; }
    inline void setKRichTextEdit_ViewportSizeHint_IsBase(bool value) const { krichtextedit_viewportsizehint_isbase = value; }
    inline void setKRichTextEdit_InitStyleOption_IsBase(bool value) const { krichtextedit_initstyleoption_isbase = value; }
    inline void setKRichTextEdit_DevType_IsBase(bool value) const { krichtextedit_devtype_isbase = value; }
    inline void setKRichTextEdit_SetVisible_IsBase(bool value) const { krichtextedit_setvisible_isbase = value; }
    inline void setKRichTextEdit_HeightForWidth_IsBase(bool value) const { krichtextedit_heightforwidth_isbase = value; }
    inline void setKRichTextEdit_HasHeightForWidth_IsBase(bool value) const { krichtextedit_hasheightforwidth_isbase = value; }
    inline void setKRichTextEdit_PaintEngine_IsBase(bool value) const { krichtextedit_paintengine_isbase = value; }
    inline void setKRichTextEdit_EnterEvent_IsBase(bool value) const { krichtextedit_enterevent_isbase = value; }
    inline void setKRichTextEdit_LeaveEvent_IsBase(bool value) const { krichtextedit_leaveevent_isbase = value; }
    inline void setKRichTextEdit_MoveEvent_IsBase(bool value) const { krichtextedit_moveevent_isbase = value; }
    inline void setKRichTextEdit_CloseEvent_IsBase(bool value) const { krichtextedit_closeevent_isbase = value; }
    inline void setKRichTextEdit_TabletEvent_IsBase(bool value) const { krichtextedit_tabletevent_isbase = value; }
    inline void setKRichTextEdit_ActionEvent_IsBase(bool value) const { krichtextedit_actionevent_isbase = value; }
    inline void setKRichTextEdit_HideEvent_IsBase(bool value) const { krichtextedit_hideevent_isbase = value; }
    inline void setKRichTextEdit_NativeEvent_IsBase(bool value) const { krichtextedit_nativeevent_isbase = value; }
    inline void setKRichTextEdit_Metric_IsBase(bool value) const { krichtextedit_metric_isbase = value; }
    inline void setKRichTextEdit_InitPainter_IsBase(bool value) const { krichtextedit_initpainter_isbase = value; }
    inline void setKRichTextEdit_Redirected_IsBase(bool value) const { krichtextedit_redirected_isbase = value; }
    inline void setKRichTextEdit_SharedPainter_IsBase(bool value) const { krichtextedit_sharedpainter_isbase = value; }
    inline void setKRichTextEdit_ChildEvent_IsBase(bool value) const { krichtextedit_childevent_isbase = value; }
    inline void setKRichTextEdit_CustomEvent_IsBase(bool value) const { krichtextedit_customevent_isbase = value; }
    inline void setKRichTextEdit_ConnectNotify_IsBase(bool value) const { krichtextedit_connectnotify_isbase = value; }
    inline void setKRichTextEdit_DisconnectNotify_IsBase(bool value) const { krichtextedit_disconnectnotify_isbase = value; }
    inline void setKRichTextEdit_SlotDoReplace_IsBase(bool value) const { krichtextedit_slotdoreplace_isbase = value; }
    inline void setKRichTextEdit_SlotReplaceNext_IsBase(bool value) const { krichtextedit_slotreplacenext_isbase = value; }
    inline void setKRichTextEdit_SlotDoFind_IsBase(bool value) const { krichtextedit_slotdofind_isbase = value; }
    inline void setKRichTextEdit_SlotFind_IsBase(bool value) const { krichtextedit_slotfind_isbase = value; }
    inline void setKRichTextEdit_SlotFindNext_IsBase(bool value) const { krichtextedit_slotfindnext_isbase = value; }
    inline void setKRichTextEdit_SlotFindPrevious_IsBase(bool value) const { krichtextedit_slotfindprevious_isbase = value; }
    inline void setKRichTextEdit_SlotReplace_IsBase(bool value) const { krichtextedit_slotreplace_isbase = value; }
    inline void setKRichTextEdit_SlotSpeakText_IsBase(bool value) const { krichtextedit_slotspeaktext_isbase = value; }
    inline void setKRichTextEdit_ZoomInF_IsBase(bool value) const { krichtextedit_zoominf_isbase = value; }
    inline void setKRichTextEdit_SetViewportMargins_IsBase(bool value) const { krichtextedit_setviewportmargins_isbase = value; }
    inline void setKRichTextEdit_ViewportMargins_IsBase(bool value) const { krichtextedit_viewportmargins_isbase = value; }
    inline void setKRichTextEdit_DrawFrame_IsBase(bool value) const { krichtextedit_drawframe_isbase = value; }
    inline void setKRichTextEdit_UpdateMicroFocus_IsBase(bool value) const { krichtextedit_updatemicrofocus_isbase = value; }
    inline void setKRichTextEdit_Create_IsBase(bool value) const { krichtextedit_create_isbase = value; }
    inline void setKRichTextEdit_Destroy_IsBase(bool value) const { krichtextedit_destroy_isbase = value; }
    inline void setKRichTextEdit_FocusNextChild_IsBase(bool value) const { krichtextedit_focusnextchild_isbase = value; }
    inline void setKRichTextEdit_FocusPreviousChild_IsBase(bool value) const { krichtextedit_focuspreviouschild_isbase = value; }
    inline void setKRichTextEdit_Sender_IsBase(bool value) const { krichtextedit_sender_isbase = value; }
    inline void setKRichTextEdit_SenderSignalIndex_IsBase(bool value) const { krichtextedit_sendersignalindex_isbase = value; }
    inline void setKRichTextEdit_Receivers_IsBase(bool value) const { krichtextedit_receivers_isbase = value; }
    inline void setKRichTextEdit_IsSignalConnected_IsBase(bool value) const { krichtextedit_issignalconnected_isbase = value; }
    inline void setKRichTextEdit_GetDecodedMetricF_IsBase(bool value) const { krichtextedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krichtextedit_metacall_isbase) {
            krichtextedit_metacall_isbase = false;
            return KRichTextEdit::qt_metacall(param1, param2, param3);
        } else if (krichtextedit_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = krichtextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (krichtextedit_keypressevent_isbase) {
            krichtextedit_keypressevent_isbase = false;
            KRichTextEdit::keyPressEvent(event);
        } else if (krichtextedit_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            krichtextedit_keypressevent_callback(this, cbval1);
        } else {
            KRichTextEdit::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (krichtextedit_setreadonly_isbase) {
            krichtextedit_setreadonly_isbase = false;
            KRichTextEdit::setReadOnly(readOnly);
        } else if (krichtextedit_setreadonly_callback != nullptr) {
            bool cbval1 = readOnly;

            krichtextedit_setreadonly_callback(this, cbval1);
        } else {
            KRichTextEdit::setReadOnly(readOnly);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCheckSpellingEnabled(bool check) override {
        if (krichtextedit_setcheckspellingenabled_isbase) {
            krichtextedit_setcheckspellingenabled_isbase = false;
            KRichTextEdit::setCheckSpellingEnabled(check);
        } else if (krichtextedit_setcheckspellingenabled_callback != nullptr) {
            bool cbval1 = check;

            krichtextedit_setcheckspellingenabled_callback(this, cbval1);
        } else {
            KRichTextEdit::setCheckSpellingEnabled(check);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkSpellingEnabled() const override {
        if (krichtextedit_checkspellingenabled_isbase) {
            krichtextedit_checkspellingenabled_isbase = false;
            return KRichTextEdit::checkSpellingEnabled();
        } else if (krichtextedit_checkspellingenabled_callback != nullptr) {
            bool callback_ret = krichtextedit_checkspellingenabled_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::checkSpellingEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBlockBeSpellChecked(const QString& block) const override {
        if (krichtextedit_shouldblockbespellchecked_isbase) {
            krichtextedit_shouldblockbespellchecked_isbase = false;
            return KRichTextEdit::shouldBlockBeSpellChecked(block);
        } else if (krichtextedit_shouldblockbespellchecked_callback != nullptr) {
            const QString block_ret = block;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray block_b = block_ret.toUtf8();
            libqt_string block_str;
            block_str.len = block_b.length();
            block_str.data = static_cast<const char*>(malloc(block_str.len + 1));
            memcpy((void*)block_str.data, block_b.data(), block_str.len);
            ((char*)block_str.data)[block_str.len] = '\0';
            libqt_string cbval1 = block_str;

            bool callback_ret = krichtextedit_shouldblockbespellchecked_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextEdit::shouldBlockBeSpellChecked(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (krichtextedit_createhighlighter_isbase) {
            krichtextedit_createhighlighter_isbase = false;
            KRichTextEdit::createHighlighter();
        } else if (krichtextedit_createhighlighter_callback != nullptr) {
            krichtextedit_createhighlighter_callback();
        } else {
            KRichTextEdit::createHighlighter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* mousePopupMenu() override {
        if (krichtextedit_mousepopupmenu_isbase) {
            krichtextedit_mousepopupmenu_isbase = false;
            return KRichTextEdit::mousePopupMenu();
        } else if (krichtextedit_mousepopupmenu_callback != nullptr) {
            QMenu* callback_ret = krichtextedit_mousepopupmenu_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::mousePopupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (krichtextedit_event_isbase) {
            krichtextedit_event_isbase = false;
            return KRichTextEdit::event(param1);
        } else if (krichtextedit_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = krichtextedit_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextEdit::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (krichtextedit_focusinevent_isbase) {
            krichtextedit_focusinevent_isbase = false;
            KRichTextEdit::focusInEvent(param1);
        } else if (krichtextedit_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            krichtextedit_focusinevent_callback(this, cbval1);
        } else {
            KRichTextEdit::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordBack() override {
        if (krichtextedit_deletewordback_isbase) {
            krichtextedit_deletewordback_isbase = false;
            KRichTextEdit::deleteWordBack();
        } else if (krichtextedit_deletewordback_callback != nullptr) {
            krichtextedit_deletewordback_callback();
        } else {
            KRichTextEdit::deleteWordBack();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordForward() override {
        if (krichtextedit_deletewordforward_isbase) {
            krichtextedit_deletewordforward_isbase = false;
            KRichTextEdit::deleteWordForward();
        } else if (krichtextedit_deletewordforward_callback != nullptr) {
            krichtextedit_deletewordforward_callback();
        } else {
            KRichTextEdit::deleteWordForward();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (krichtextedit_contextmenuevent_isbase) {
            krichtextedit_contextmenuevent_isbase = false;
            KRichTextEdit::contextMenuEvent(param1);
        } else if (krichtextedit_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            krichtextedit_contextmenuevent_callback(this, cbval1);
        } else {
            KRichTextEdit::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (krichtextedit_loadresource_isbase) {
            krichtextedit_loadresource_isbase = false;
            return KRichTextEdit::loadResource(typeVal, name);
        } else if (krichtextedit_loadresource_callback != nullptr) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = krichtextedit_loadresource_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KRichTextEdit::loadResource(typeVal, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (krichtextedit_inputmethodquery_isbase) {
            krichtextedit_inputmethodquery_isbase = false;
            return KRichTextEdit::inputMethodQuery(property);
        } else if (krichtextedit_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = krichtextedit_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KRichTextEdit::inputMethodQuery(property);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (krichtextedit_timerevent_isbase) {
            krichtextedit_timerevent_isbase = false;
            KRichTextEdit::timerEvent(e);
        } else if (krichtextedit_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            krichtextedit_timerevent_callback(this, cbval1);
        } else {
            KRichTextEdit::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (krichtextedit_keyreleaseevent_isbase) {
            krichtextedit_keyreleaseevent_isbase = false;
            KRichTextEdit::keyReleaseEvent(e);
        } else if (krichtextedit_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            krichtextedit_keyreleaseevent_callback(this, cbval1);
        } else {
            KRichTextEdit::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (krichtextedit_resizeevent_isbase) {
            krichtextedit_resizeevent_isbase = false;
            KRichTextEdit::resizeEvent(e);
        } else if (krichtextedit_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            krichtextedit_resizeevent_callback(this, cbval1);
        } else {
            KRichTextEdit::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (krichtextedit_paintevent_isbase) {
            krichtextedit_paintevent_isbase = false;
            KRichTextEdit::paintEvent(e);
        } else if (krichtextedit_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            krichtextedit_paintevent_callback(this, cbval1);
        } else {
            KRichTextEdit::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (krichtextedit_mousepressevent_isbase) {
            krichtextedit_mousepressevent_isbase = false;
            KRichTextEdit::mousePressEvent(e);
        } else if (krichtextedit_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            krichtextedit_mousepressevent_callback(this, cbval1);
        } else {
            KRichTextEdit::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (krichtextedit_mousemoveevent_isbase) {
            krichtextedit_mousemoveevent_isbase = false;
            KRichTextEdit::mouseMoveEvent(e);
        } else if (krichtextedit_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            krichtextedit_mousemoveevent_callback(this, cbval1);
        } else {
            KRichTextEdit::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (krichtextedit_mousereleaseevent_isbase) {
            krichtextedit_mousereleaseevent_isbase = false;
            KRichTextEdit::mouseReleaseEvent(e);
        } else if (krichtextedit_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            krichtextedit_mousereleaseevent_callback(this, cbval1);
        } else {
            KRichTextEdit::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (krichtextedit_mousedoubleclickevent_isbase) {
            krichtextedit_mousedoubleclickevent_isbase = false;
            KRichTextEdit::mouseDoubleClickEvent(e);
        } else if (krichtextedit_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            krichtextedit_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KRichTextEdit::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (krichtextedit_focusnextprevchild_isbase) {
            krichtextedit_focusnextprevchild_isbase = false;
            return KRichTextEdit::focusNextPrevChild(next);
        } else if (krichtextedit_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = krichtextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (krichtextedit_dragenterevent_isbase) {
            krichtextedit_dragenterevent_isbase = false;
            KRichTextEdit::dragEnterEvent(e);
        } else if (krichtextedit_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = e;

            krichtextedit_dragenterevent_callback(this, cbval1);
        } else {
            KRichTextEdit::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (krichtextedit_dragleaveevent_isbase) {
            krichtextedit_dragleaveevent_isbase = false;
            KRichTextEdit::dragLeaveEvent(e);
        } else if (krichtextedit_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            krichtextedit_dragleaveevent_callback(this, cbval1);
        } else {
            KRichTextEdit::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (krichtextedit_dragmoveevent_isbase) {
            krichtextedit_dragmoveevent_isbase = false;
            KRichTextEdit::dragMoveEvent(e);
        } else if (krichtextedit_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            krichtextedit_dragmoveevent_callback(this, cbval1);
        } else {
            KRichTextEdit::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (krichtextedit_dropevent_isbase) {
            krichtextedit_dropevent_isbase = false;
            KRichTextEdit::dropEvent(e);
        } else if (krichtextedit_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = e;

            krichtextedit_dropevent_callback(this, cbval1);
        } else {
            KRichTextEdit::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (krichtextedit_focusoutevent_isbase) {
            krichtextedit_focusoutevent_isbase = false;
            KRichTextEdit::focusOutEvent(e);
        } else if (krichtextedit_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            krichtextedit_focusoutevent_callback(this, cbval1);
        } else {
            KRichTextEdit::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (krichtextedit_showevent_isbase) {
            krichtextedit_showevent_isbase = false;
            KRichTextEdit::showEvent(param1);
        } else if (krichtextedit_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            krichtextedit_showevent_callback(this, cbval1);
        } else {
            KRichTextEdit::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (krichtextedit_changeevent_isbase) {
            krichtextedit_changeevent_isbase = false;
            KRichTextEdit::changeEvent(e);
        } else if (krichtextedit_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            krichtextedit_changeevent_callback(this, cbval1);
        } else {
            KRichTextEdit::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (krichtextedit_wheelevent_isbase) {
            krichtextedit_wheelevent_isbase = false;
            KRichTextEdit::wheelEvent(e);
        } else if (krichtextedit_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            krichtextedit_wheelevent_callback(this, cbval1);
        } else {
            KRichTextEdit::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (krichtextedit_createmimedatafromselection_isbase) {
            krichtextedit_createmimedatafromselection_isbase = false;
            return KRichTextEdit::createMimeDataFromSelection();
        } else if (krichtextedit_createmimedatafromselection_callback != nullptr) {
            QMimeData* callback_ret = krichtextedit_createmimedatafromselection_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::createMimeDataFromSelection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (krichtextedit_caninsertfrommimedata_isbase) {
            krichtextedit_caninsertfrommimedata_isbase = false;
            return KRichTextEdit::canInsertFromMimeData(source);
        } else if (krichtextedit_caninsertfrommimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = krichtextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextEdit::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (krichtextedit_insertfrommimedata_isbase) {
            krichtextedit_insertfrommimedata_isbase = false;
            KRichTextEdit::insertFromMimeData(source);
        } else if (krichtextedit_insertfrommimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)source;

            krichtextedit_insertfrommimedata_callback(this, cbval1);
        } else {
            KRichTextEdit::insertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (krichtextedit_inputmethodevent_isbase) {
            krichtextedit_inputmethodevent_isbase = false;
            KRichTextEdit::inputMethodEvent(param1);
        } else if (krichtextedit_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            krichtextedit_inputmethodevent_callback(this, cbval1);
        } else {
            KRichTextEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (krichtextedit_scrollcontentsby_isbase) {
            krichtextedit_scrollcontentsby_isbase = false;
            KRichTextEdit::scrollContentsBy(dx, dy);
        } else if (krichtextedit_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            krichtextedit_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            KRichTextEdit::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (krichtextedit_dosettextcursor_isbase) {
            krichtextedit_dosettextcursor_isbase = false;
            KRichTextEdit::doSetTextCursor(cursor);
        } else if (krichtextedit_dosettextcursor_callback != nullptr) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            krichtextedit_dosettextcursor_callback(this, cbval1);
        } else {
            KRichTextEdit::doSetTextCursor(cursor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (krichtextedit_minimumsizehint_isbase) {
            krichtextedit_minimumsizehint_isbase = false;
            return KRichTextEdit::minimumSizeHint();
        } else if (krichtextedit_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = krichtextedit_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KRichTextEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (krichtextedit_sizehint_isbase) {
            krichtextedit_sizehint_isbase = false;
            return KRichTextEdit::sizeHint();
        } else if (krichtextedit_sizehint_callback != nullptr) {
            QSize* callback_ret = krichtextedit_sizehint_callback();
            return *callback_ret;
        } else {
            return KRichTextEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (krichtextedit_setupviewport_isbase) {
            krichtextedit_setupviewport_isbase = false;
            KRichTextEdit::setupViewport(viewport);
        } else if (krichtextedit_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            krichtextedit_setupviewport_callback(this, cbval1);
        } else {
            KRichTextEdit::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (krichtextedit_eventfilter_isbase) {
            krichtextedit_eventfilter_isbase = false;
            return KRichTextEdit::eventFilter(param1, param2);
        } else if (krichtextedit_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = krichtextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KRichTextEdit::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (krichtextedit_viewportevent_isbase) {
            krichtextedit_viewportevent_isbase = false;
            return KRichTextEdit::viewportEvent(param1);
        } else if (krichtextedit_viewportevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = krichtextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextEdit::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (krichtextedit_viewportsizehint_isbase) {
            krichtextedit_viewportsizehint_isbase = false;
            return KRichTextEdit::viewportSizeHint();
        } else if (krichtextedit_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = krichtextedit_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return KRichTextEdit::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (krichtextedit_initstyleoption_isbase) {
            krichtextedit_initstyleoption_isbase = false;
            KRichTextEdit::initStyleOption(option);
        } else if (krichtextedit_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            krichtextedit_initstyleoption_callback(this, cbval1);
        } else {
            KRichTextEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (krichtextedit_devtype_isbase) {
            krichtextedit_devtype_isbase = false;
            return KRichTextEdit::devType();
        } else if (krichtextedit_devtype_callback != nullptr) {
            int callback_ret = krichtextedit_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (krichtextedit_setvisible_isbase) {
            krichtextedit_setvisible_isbase = false;
            KRichTextEdit::setVisible(visible);
        } else if (krichtextedit_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            krichtextedit_setvisible_callback(this, cbval1);
        } else {
            KRichTextEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (krichtextedit_heightforwidth_isbase) {
            krichtextedit_heightforwidth_isbase = false;
            return KRichTextEdit::heightForWidth(param1);
        } else if (krichtextedit_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = krichtextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (krichtextedit_hasheightforwidth_isbase) {
            krichtextedit_hasheightforwidth_isbase = false;
            return KRichTextEdit::hasHeightForWidth();
        } else if (krichtextedit_hasheightforwidth_callback != nullptr) {
            bool callback_ret = krichtextedit_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (krichtextedit_paintengine_isbase) {
            krichtextedit_paintengine_isbase = false;
            return KRichTextEdit::paintEngine();
        } else if (krichtextedit_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = krichtextedit_paintengine_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (krichtextedit_enterevent_isbase) {
            krichtextedit_enterevent_isbase = false;
            KRichTextEdit::enterEvent(event);
        } else if (krichtextedit_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            krichtextedit_enterevent_callback(this, cbval1);
        } else {
            KRichTextEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (krichtextedit_leaveevent_isbase) {
            krichtextedit_leaveevent_isbase = false;
            KRichTextEdit::leaveEvent(event);
        } else if (krichtextedit_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            krichtextedit_leaveevent_callback(this, cbval1);
        } else {
            KRichTextEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (krichtextedit_moveevent_isbase) {
            krichtextedit_moveevent_isbase = false;
            KRichTextEdit::moveEvent(event);
        } else if (krichtextedit_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            krichtextedit_moveevent_callback(this, cbval1);
        } else {
            KRichTextEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (krichtextedit_closeevent_isbase) {
            krichtextedit_closeevent_isbase = false;
            KRichTextEdit::closeEvent(event);
        } else if (krichtextedit_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            krichtextedit_closeevent_callback(this, cbval1);
        } else {
            KRichTextEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (krichtextedit_tabletevent_isbase) {
            krichtextedit_tabletevent_isbase = false;
            KRichTextEdit::tabletEvent(event);
        } else if (krichtextedit_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            krichtextedit_tabletevent_callback(this, cbval1);
        } else {
            KRichTextEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (krichtextedit_actionevent_isbase) {
            krichtextedit_actionevent_isbase = false;
            KRichTextEdit::actionEvent(event);
        } else if (krichtextedit_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            krichtextedit_actionevent_callback(this, cbval1);
        } else {
            KRichTextEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (krichtextedit_hideevent_isbase) {
            krichtextedit_hideevent_isbase = false;
            KRichTextEdit::hideEvent(event);
        } else if (krichtextedit_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            krichtextedit_hideevent_callback(this, cbval1);
        } else {
            KRichTextEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (krichtextedit_nativeevent_isbase) {
            krichtextedit_nativeevent_isbase = false;
            return KRichTextEdit::nativeEvent(eventType, message, result);
        } else if (krichtextedit_nativeevent_callback != nullptr) {
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

            bool callback_ret = krichtextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KRichTextEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (krichtextedit_metric_isbase) {
            krichtextedit_metric_isbase = false;
            return KRichTextEdit::metric(param1);
        } else if (krichtextedit_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = krichtextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (krichtextedit_initpainter_isbase) {
            krichtextedit_initpainter_isbase = false;
            KRichTextEdit::initPainter(painter);
        } else if (krichtextedit_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            krichtextedit_initpainter_callback(this, cbval1);
        } else {
            KRichTextEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (krichtextedit_redirected_isbase) {
            krichtextedit_redirected_isbase = false;
            return KRichTextEdit::redirected(offset);
        } else if (krichtextedit_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = krichtextedit_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (krichtextedit_sharedpainter_isbase) {
            krichtextedit_sharedpainter_isbase = false;
            return KRichTextEdit::sharedPainter();
        } else if (krichtextedit_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = krichtextedit_sharedpainter_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krichtextedit_childevent_isbase) {
            krichtextedit_childevent_isbase = false;
            KRichTextEdit::childEvent(event);
        } else if (krichtextedit_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            krichtextedit_childevent_callback(this, cbval1);
        } else {
            KRichTextEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krichtextedit_customevent_isbase) {
            krichtextedit_customevent_isbase = false;
            KRichTextEdit::customEvent(event);
        } else if (krichtextedit_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            krichtextedit_customevent_callback(this, cbval1);
        } else {
            KRichTextEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krichtextedit_connectnotify_isbase) {
            krichtextedit_connectnotify_isbase = false;
            KRichTextEdit::connectNotify(signal);
        } else if (krichtextedit_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krichtextedit_connectnotify_callback(this, cbval1);
        } else {
            KRichTextEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krichtextedit_disconnectnotify_isbase) {
            krichtextedit_disconnectnotify_isbase = false;
            KRichTextEdit::disconnectNotify(signal);
        } else if (krichtextedit_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            krichtextedit_disconnectnotify_callback(this, cbval1);
        } else {
            KRichTextEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotDoReplace() {
        if (krichtextedit_slotdoreplace_isbase) {
            krichtextedit_slotdoreplace_isbase = false;
            KRichTextEdit::slotDoReplace();
        } else if (krichtextedit_slotdoreplace_callback != nullptr) {
            krichtextedit_slotdoreplace_callback();
        } else {
            KRichTextEdit::slotDoReplace();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotReplaceNext() {
        if (krichtextedit_slotreplacenext_isbase) {
            krichtextedit_slotreplacenext_isbase = false;
            KRichTextEdit::slotReplaceNext();
        } else if (krichtextedit_slotreplacenext_callback != nullptr) {
            krichtextedit_slotreplacenext_callback();
        } else {
            KRichTextEdit::slotReplaceNext();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotDoFind() {
        if (krichtextedit_slotdofind_isbase) {
            krichtextedit_slotdofind_isbase = false;
            KRichTextEdit::slotDoFind();
        } else if (krichtextedit_slotdofind_callback != nullptr) {
            krichtextedit_slotdofind_callback();
        } else {
            KRichTextEdit::slotDoFind();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFind() {
        if (krichtextedit_slotfind_isbase) {
            krichtextedit_slotfind_isbase = false;
            KRichTextEdit::slotFind();
        } else if (krichtextedit_slotfind_callback != nullptr) {
            krichtextedit_slotfind_callback();
        } else {
            KRichTextEdit::slotFind();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFindNext() {
        if (krichtextedit_slotfindnext_isbase) {
            krichtextedit_slotfindnext_isbase = false;
            KRichTextEdit::slotFindNext();
        } else if (krichtextedit_slotfindnext_callback != nullptr) {
            krichtextedit_slotfindnext_callback();
        } else {
            KRichTextEdit::slotFindNext();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFindPrevious() {
        if (krichtextedit_slotfindprevious_isbase) {
            krichtextedit_slotfindprevious_isbase = false;
            KRichTextEdit::slotFindPrevious();
        } else if (krichtextedit_slotfindprevious_callback != nullptr) {
            krichtextedit_slotfindprevious_callback();
        } else {
            KRichTextEdit::slotFindPrevious();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotReplace() {
        if (krichtextedit_slotreplace_isbase) {
            krichtextedit_slotreplace_isbase = false;
            KRichTextEdit::slotReplace();
        } else if (krichtextedit_slotreplace_callback != nullptr) {
            krichtextedit_slotreplace_callback();
        } else {
            KRichTextEdit::slotReplace();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotSpeakText() {
        if (krichtextedit_slotspeaktext_isbase) {
            krichtextedit_slotspeaktext_isbase = false;
            KRichTextEdit::slotSpeakText();
        } else if (krichtextedit_slotspeaktext_callback != nullptr) {
            krichtextedit_slotspeaktext_callback();
        } else {
            KRichTextEdit::slotSpeakText();
        }
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (krichtextedit_zoominf_isbase) {
            krichtextedit_zoominf_isbase = false;
            KRichTextEdit::zoomInF(range);
        } else if (krichtextedit_zoominf_callback != nullptr) {
            float cbval1 = range;

            krichtextedit_zoominf_callback(this, cbval1);
        } else {
            KRichTextEdit::zoomInF(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (krichtextedit_setviewportmargins_isbase) {
            krichtextedit_setviewportmargins_isbase = false;
            KRichTextEdit::setViewportMargins(left, top, right, bottom);
        } else if (krichtextedit_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            krichtextedit_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KRichTextEdit::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (krichtextedit_viewportmargins_isbase) {
            krichtextedit_viewportmargins_isbase = false;
            return KRichTextEdit::viewportMargins();
        } else if (krichtextedit_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = krichtextedit_viewportmargins_callback();
            return *callback_ret;
        } else {
            return KRichTextEdit::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (krichtextedit_drawframe_isbase) {
            krichtextedit_drawframe_isbase = false;
            KRichTextEdit::drawFrame(param1);
        } else if (krichtextedit_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            krichtextedit_drawframe_callback(this, cbval1);
        } else {
            KRichTextEdit::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (krichtextedit_updatemicrofocus_isbase) {
            krichtextedit_updatemicrofocus_isbase = false;
            KRichTextEdit::updateMicroFocus();
        } else if (krichtextedit_updatemicrofocus_callback != nullptr) {
            krichtextedit_updatemicrofocus_callback();
        } else {
            KRichTextEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (krichtextedit_create_isbase) {
            krichtextedit_create_isbase = false;
            KRichTextEdit::create();
        } else if (krichtextedit_create_callback != nullptr) {
            krichtextedit_create_callback();
        } else {
            KRichTextEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (krichtextedit_destroy_isbase) {
            krichtextedit_destroy_isbase = false;
            KRichTextEdit::destroy();
        } else if (krichtextedit_destroy_callback != nullptr) {
            krichtextedit_destroy_callback();
        } else {
            KRichTextEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (krichtextedit_focusnextchild_isbase) {
            krichtextedit_focusnextchild_isbase = false;
            return KRichTextEdit::focusNextChild();
        } else if (krichtextedit_focusnextchild_callback != nullptr) {
            bool callback_ret = krichtextedit_focusnextchild_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (krichtextedit_focuspreviouschild_isbase) {
            krichtextedit_focuspreviouschild_isbase = false;
            return KRichTextEdit::focusPreviousChild();
        } else if (krichtextedit_focuspreviouschild_callback != nullptr) {
            bool callback_ret = krichtextedit_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (krichtextedit_sender_isbase) {
            krichtextedit_sender_isbase = false;
            return KRichTextEdit::sender();
        } else if (krichtextedit_sender_callback != nullptr) {
            QObject* callback_ret = krichtextedit_sender_callback();
            return callback_ret;
        } else {
            return KRichTextEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (krichtextedit_sendersignalindex_isbase) {
            krichtextedit_sendersignalindex_isbase = false;
            return KRichTextEdit::senderSignalIndex();
        } else if (krichtextedit_sendersignalindex_callback != nullptr) {
            int callback_ret = krichtextedit_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (krichtextedit_receivers_isbase) {
            krichtextedit_receivers_isbase = false;
            return KRichTextEdit::receivers(signal);
        } else if (krichtextedit_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = krichtextedit_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KRichTextEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (krichtextedit_issignalconnected_isbase) {
            krichtextedit_issignalconnected_isbase = false;
            return KRichTextEdit::isSignalConnected(signal);
        } else if (krichtextedit_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = krichtextedit_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KRichTextEdit::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (krichtextedit_getdecodedmetricf_isbase) {
            krichtextedit_getdecodedmetricf_isbase = false;
            return KRichTextEdit::getDecodedMetricF(metricA, metricB);
        } else if (krichtextedit_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = krichtextedit_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KRichTextEdit::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KRichTextEdit_KeyPressEvent(KRichTextEdit* self, QKeyEvent* event);
    friend void KRichTextEdit_QBaseKeyPressEvent(KRichTextEdit* self, QKeyEvent* event);
    friend bool KRichTextEdit_Event(KRichTextEdit* self, QEvent* param1);
    friend bool KRichTextEdit_QBaseEvent(KRichTextEdit* self, QEvent* param1);
    friend void KRichTextEdit_FocusInEvent(KRichTextEdit* self, QFocusEvent* param1);
    friend void KRichTextEdit_QBaseFocusInEvent(KRichTextEdit* self, QFocusEvent* param1);
    friend void KRichTextEdit_DeleteWordBack(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseDeleteWordBack(KRichTextEdit* self);
    friend void KRichTextEdit_DeleteWordForward(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseDeleteWordForward(KRichTextEdit* self);
    friend void KRichTextEdit_ContextMenuEvent(KRichTextEdit* self, QContextMenuEvent* param1);
    friend void KRichTextEdit_QBaseContextMenuEvent(KRichTextEdit* self, QContextMenuEvent* param1);
    friend void KRichTextEdit_TimerEvent(KRichTextEdit* self, QTimerEvent* e);
    friend void KRichTextEdit_QBaseTimerEvent(KRichTextEdit* self, QTimerEvent* e);
    friend void KRichTextEdit_KeyReleaseEvent(KRichTextEdit* self, QKeyEvent* e);
    friend void KRichTextEdit_QBaseKeyReleaseEvent(KRichTextEdit* self, QKeyEvent* e);
    friend void KRichTextEdit_ResizeEvent(KRichTextEdit* self, QResizeEvent* e);
    friend void KRichTextEdit_QBaseResizeEvent(KRichTextEdit* self, QResizeEvent* e);
    friend void KRichTextEdit_PaintEvent(KRichTextEdit* self, QPaintEvent* e);
    friend void KRichTextEdit_QBasePaintEvent(KRichTextEdit* self, QPaintEvent* e);
    friend void KRichTextEdit_MousePressEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_QBaseMousePressEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_MouseMoveEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_QBaseMouseMoveEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_MouseReleaseEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_QBaseMouseReleaseEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_MouseDoubleClickEvent(KRichTextEdit* self, QMouseEvent* e);
    friend void KRichTextEdit_QBaseMouseDoubleClickEvent(KRichTextEdit* self, QMouseEvent* e);
    friend bool KRichTextEdit_FocusNextPrevChild(KRichTextEdit* self, bool next);
    friend bool KRichTextEdit_QBaseFocusNextPrevChild(KRichTextEdit* self, bool next);
    friend void KRichTextEdit_DragEnterEvent(KRichTextEdit* self, QDragEnterEvent* e);
    friend void KRichTextEdit_QBaseDragEnterEvent(KRichTextEdit* self, QDragEnterEvent* e);
    friend void KRichTextEdit_DragLeaveEvent(KRichTextEdit* self, QDragLeaveEvent* e);
    friend void KRichTextEdit_QBaseDragLeaveEvent(KRichTextEdit* self, QDragLeaveEvent* e);
    friend void KRichTextEdit_DragMoveEvent(KRichTextEdit* self, QDragMoveEvent* e);
    friend void KRichTextEdit_QBaseDragMoveEvent(KRichTextEdit* self, QDragMoveEvent* e);
    friend void KRichTextEdit_DropEvent(KRichTextEdit* self, QDropEvent* e);
    friend void KRichTextEdit_QBaseDropEvent(KRichTextEdit* self, QDropEvent* e);
    friend void KRichTextEdit_FocusOutEvent(KRichTextEdit* self, QFocusEvent* e);
    friend void KRichTextEdit_QBaseFocusOutEvent(KRichTextEdit* self, QFocusEvent* e);
    friend void KRichTextEdit_ShowEvent(KRichTextEdit* self, QShowEvent* param1);
    friend void KRichTextEdit_QBaseShowEvent(KRichTextEdit* self, QShowEvent* param1);
    friend void KRichTextEdit_ChangeEvent(KRichTextEdit* self, QEvent* e);
    friend void KRichTextEdit_QBaseChangeEvent(KRichTextEdit* self, QEvent* e);
    friend void KRichTextEdit_WheelEvent(KRichTextEdit* self, QWheelEvent* e);
    friend void KRichTextEdit_QBaseWheelEvent(KRichTextEdit* self, QWheelEvent* e);
    friend QMimeData* KRichTextEdit_CreateMimeDataFromSelection(const KRichTextEdit* self);
    friend QMimeData* KRichTextEdit_QBaseCreateMimeDataFromSelection(const KRichTextEdit* self);
    friend bool KRichTextEdit_CanInsertFromMimeData(const KRichTextEdit* self, const QMimeData* source);
    friend bool KRichTextEdit_QBaseCanInsertFromMimeData(const KRichTextEdit* self, const QMimeData* source);
    friend void KRichTextEdit_InsertFromMimeData(KRichTextEdit* self, const QMimeData* source);
    friend void KRichTextEdit_QBaseInsertFromMimeData(KRichTextEdit* self, const QMimeData* source);
    friend void KRichTextEdit_InputMethodEvent(KRichTextEdit* self, QInputMethodEvent* param1);
    friend void KRichTextEdit_QBaseInputMethodEvent(KRichTextEdit* self, QInputMethodEvent* param1);
    friend void KRichTextEdit_ScrollContentsBy(KRichTextEdit* self, int dx, int dy);
    friend void KRichTextEdit_QBaseScrollContentsBy(KRichTextEdit* self, int dx, int dy);
    friend void KRichTextEdit_DoSetTextCursor(KRichTextEdit* self, const QTextCursor* cursor);
    friend void KRichTextEdit_QBaseDoSetTextCursor(KRichTextEdit* self, const QTextCursor* cursor);
    friend bool KRichTextEdit_EventFilter(KRichTextEdit* self, QObject* param1, QEvent* param2);
    friend bool KRichTextEdit_QBaseEventFilter(KRichTextEdit* self, QObject* param1, QEvent* param2);
    friend bool KRichTextEdit_ViewportEvent(KRichTextEdit* self, QEvent* param1);
    friend bool KRichTextEdit_QBaseViewportEvent(KRichTextEdit* self, QEvent* param1);
    friend QSize* KRichTextEdit_ViewportSizeHint(const KRichTextEdit* self);
    friend QSize* KRichTextEdit_QBaseViewportSizeHint(const KRichTextEdit* self);
    friend void KRichTextEdit_InitStyleOption(const KRichTextEdit* self, QStyleOptionFrame* option);
    friend void KRichTextEdit_QBaseInitStyleOption(const KRichTextEdit* self, QStyleOptionFrame* option);
    friend void KRichTextEdit_EnterEvent(KRichTextEdit* self, QEnterEvent* event);
    friend void KRichTextEdit_QBaseEnterEvent(KRichTextEdit* self, QEnterEvent* event);
    friend void KRichTextEdit_LeaveEvent(KRichTextEdit* self, QEvent* event);
    friend void KRichTextEdit_QBaseLeaveEvent(KRichTextEdit* self, QEvent* event);
    friend void KRichTextEdit_MoveEvent(KRichTextEdit* self, QMoveEvent* event);
    friend void KRichTextEdit_QBaseMoveEvent(KRichTextEdit* self, QMoveEvent* event);
    friend void KRichTextEdit_CloseEvent(KRichTextEdit* self, QCloseEvent* event);
    friend void KRichTextEdit_QBaseCloseEvent(KRichTextEdit* self, QCloseEvent* event);
    friend void KRichTextEdit_TabletEvent(KRichTextEdit* self, QTabletEvent* event);
    friend void KRichTextEdit_QBaseTabletEvent(KRichTextEdit* self, QTabletEvent* event);
    friend void KRichTextEdit_ActionEvent(KRichTextEdit* self, QActionEvent* event);
    friend void KRichTextEdit_QBaseActionEvent(KRichTextEdit* self, QActionEvent* event);
    friend void KRichTextEdit_HideEvent(KRichTextEdit* self, QHideEvent* event);
    friend void KRichTextEdit_QBaseHideEvent(KRichTextEdit* self, QHideEvent* event);
    friend bool KRichTextEdit_NativeEvent(KRichTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KRichTextEdit_QBaseNativeEvent(KRichTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRichTextEdit_Metric(const KRichTextEdit* self, int param1);
    friend int KRichTextEdit_QBaseMetric(const KRichTextEdit* self, int param1);
    friend void KRichTextEdit_InitPainter(const KRichTextEdit* self, QPainter* painter);
    friend void KRichTextEdit_QBaseInitPainter(const KRichTextEdit* self, QPainter* painter);
    friend QPaintDevice* KRichTextEdit_Redirected(const KRichTextEdit* self, QPoint* offset);
    friend QPaintDevice* KRichTextEdit_QBaseRedirected(const KRichTextEdit* self, QPoint* offset);
    friend QPainter* KRichTextEdit_SharedPainter(const KRichTextEdit* self);
    friend QPainter* KRichTextEdit_QBaseSharedPainter(const KRichTextEdit* self);
    friend void KRichTextEdit_ChildEvent(KRichTextEdit* self, QChildEvent* event);
    friend void KRichTextEdit_QBaseChildEvent(KRichTextEdit* self, QChildEvent* event);
    friend void KRichTextEdit_CustomEvent(KRichTextEdit* self, QEvent* event);
    friend void KRichTextEdit_QBaseCustomEvent(KRichTextEdit* self, QEvent* event);
    friend void KRichTextEdit_ConnectNotify(KRichTextEdit* self, const QMetaMethod* signal);
    friend void KRichTextEdit_QBaseConnectNotify(KRichTextEdit* self, const QMetaMethod* signal);
    friend void KRichTextEdit_DisconnectNotify(KRichTextEdit* self, const QMetaMethod* signal);
    friend void KRichTextEdit_QBaseDisconnectNotify(KRichTextEdit* self, const QMetaMethod* signal);
    friend void KRichTextEdit_SlotDoReplace(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotDoReplace(KRichTextEdit* self);
    friend void KRichTextEdit_SlotReplaceNext(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotReplaceNext(KRichTextEdit* self);
    friend void KRichTextEdit_SlotDoFind(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotDoFind(KRichTextEdit* self);
    friend void KRichTextEdit_SlotFind(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotFind(KRichTextEdit* self);
    friend void KRichTextEdit_SlotFindNext(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotFindNext(KRichTextEdit* self);
    friend void KRichTextEdit_SlotFindPrevious(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotFindPrevious(KRichTextEdit* self);
    friend void KRichTextEdit_SlotReplace(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotReplace(KRichTextEdit* self);
    friend void KRichTextEdit_SlotSpeakText(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseSlotSpeakText(KRichTextEdit* self);
    friend void KRichTextEdit_ZoomInF(KRichTextEdit* self, float range);
    friend void KRichTextEdit_QBaseZoomInF(KRichTextEdit* self, float range);
    friend void KRichTextEdit_SetViewportMargins(KRichTextEdit* self, int left, int top, int right, int bottom);
    friend void KRichTextEdit_QBaseSetViewportMargins(KRichTextEdit* self, int left, int top, int right, int bottom);
    friend QMargins* KRichTextEdit_ViewportMargins(const KRichTextEdit* self);
    friend QMargins* KRichTextEdit_QBaseViewportMargins(const KRichTextEdit* self);
    friend void KRichTextEdit_DrawFrame(KRichTextEdit* self, QPainter* param1);
    friend void KRichTextEdit_QBaseDrawFrame(KRichTextEdit* self, QPainter* param1);
    friend void KRichTextEdit_UpdateMicroFocus(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseUpdateMicroFocus(KRichTextEdit* self);
    friend void KRichTextEdit_Create(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseCreate(KRichTextEdit* self);
    friend void KRichTextEdit_Destroy(KRichTextEdit* self);
    friend void KRichTextEdit_QBaseDestroy(KRichTextEdit* self);
    friend bool KRichTextEdit_FocusNextChild(KRichTextEdit* self);
    friend bool KRichTextEdit_QBaseFocusNextChild(KRichTextEdit* self);
    friend bool KRichTextEdit_FocusPreviousChild(KRichTextEdit* self);
    friend bool KRichTextEdit_QBaseFocusPreviousChild(KRichTextEdit* self);
    friend QObject* KRichTextEdit_Sender(const KRichTextEdit* self);
    friend QObject* KRichTextEdit_QBaseSender(const KRichTextEdit* self);
    friend int KRichTextEdit_SenderSignalIndex(const KRichTextEdit* self);
    friend int KRichTextEdit_QBaseSenderSignalIndex(const KRichTextEdit* self);
    friend int KRichTextEdit_Receivers(const KRichTextEdit* self, const char* signal);
    friend int KRichTextEdit_QBaseReceivers(const KRichTextEdit* self, const char* signal);
    friend bool KRichTextEdit_IsSignalConnected(const KRichTextEdit* self, const QMetaMethod* signal);
    friend bool KRichTextEdit_QBaseIsSignalConnected(const KRichTextEdit* self, const QMetaMethod* signal);
    friend double KRichTextEdit_GetDecodedMetricF(const KRichTextEdit* self, int metricA, int metricB);
    friend double KRichTextEdit_QBaseGetDecodedMetricF(const KRichTextEdit* self, int metricA, int metricB);
};

#endif
