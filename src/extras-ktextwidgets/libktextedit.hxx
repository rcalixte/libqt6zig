#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKTEXTEDIT_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBVIRTUALKTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEdit so that we can call protected methods
class VirtualKTextEdit final : public KTextEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEdit = true;

    // Virtual class public types (including callbacks)
    using KTextEdit_Metacall_Callback = int (*)(KTextEdit*, int, int, void**);
    using KTextEdit_SetReadOnly_Callback = void (*)(KTextEdit*, bool);
    using KTextEdit_SetCheckSpellingEnabled_Callback = void (*)(KTextEdit*, bool);
    using KTextEdit_CheckSpellingEnabled_Callback = bool (*)();
    using KTextEdit_ShouldBlockBeSpellChecked_Callback = bool (*)(const KTextEdit*, libqt_string);
    using KTextEdit_CreateHighlighter_Callback = void (*)();
    using KTextEdit_MousePopupMenu_Callback = QMenu* (*)();
    using KTextEdit_Event_Callback = bool (*)(KTextEdit*, QEvent*);
    using KTextEdit_KeyPressEvent_Callback = void (*)(KTextEdit*, QKeyEvent*);
    using KTextEdit_FocusInEvent_Callback = void (*)(KTextEdit*, QFocusEvent*);
    using KTextEdit_DeleteWordBack_Callback = void (*)();
    using KTextEdit_DeleteWordForward_Callback = void (*)();
    using KTextEdit_ContextMenuEvent_Callback = void (*)(KTextEdit*, QContextMenuEvent*);
    using KTextEdit_LoadResource_Callback = QVariant* (*)(KTextEdit*, int, QUrl*);
    using KTextEdit_InputMethodQuery_Callback = QVariant* (*)(const KTextEdit*, int);
    using KTextEdit_TimerEvent_Callback = void (*)(KTextEdit*, QTimerEvent*);
    using KTextEdit_KeyReleaseEvent_Callback = void (*)(KTextEdit*, QKeyEvent*);
    using KTextEdit_ResizeEvent_Callback = void (*)(KTextEdit*, QResizeEvent*);
    using KTextEdit_PaintEvent_Callback = void (*)(KTextEdit*, QPaintEvent*);
    using KTextEdit_MousePressEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_MouseMoveEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_MouseReleaseEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_MouseDoubleClickEvent_Callback = void (*)(KTextEdit*, QMouseEvent*);
    using KTextEdit_FocusNextPrevChild_Callback = bool (*)(KTextEdit*, bool);
    using KTextEdit_DragEnterEvent_Callback = void (*)(KTextEdit*, QDragEnterEvent*);
    using KTextEdit_DragLeaveEvent_Callback = void (*)(KTextEdit*, QDragLeaveEvent*);
    using KTextEdit_DragMoveEvent_Callback = void (*)(KTextEdit*, QDragMoveEvent*);
    using KTextEdit_DropEvent_Callback = void (*)(KTextEdit*, QDropEvent*);
    using KTextEdit_FocusOutEvent_Callback = void (*)(KTextEdit*, QFocusEvent*);
    using KTextEdit_ShowEvent_Callback = void (*)(KTextEdit*, QShowEvent*);
    using KTextEdit_ChangeEvent_Callback = void (*)(KTextEdit*, QEvent*);
    using KTextEdit_WheelEvent_Callback = void (*)(KTextEdit*, QWheelEvent*);
    using KTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using KTextEdit_CanInsertFromMimeData_Callback = bool (*)(const KTextEdit*, QMimeData*);
    using KTextEdit_InsertFromMimeData_Callback = void (*)(KTextEdit*, QMimeData*);
    using KTextEdit_InputMethodEvent_Callback = void (*)(KTextEdit*, QInputMethodEvent*);
    using KTextEdit_ScrollContentsBy_Callback = void (*)(KTextEdit*, int, int);
    using KTextEdit_DoSetTextCursor_Callback = void (*)(KTextEdit*, QTextCursor*);
    using KTextEdit_MinimumSizeHint_Callback = QSize* (*)();
    using KTextEdit_SizeHint_Callback = QSize* (*)();
    using KTextEdit_SetupViewport_Callback = void (*)(KTextEdit*, QWidget*);
    using KTextEdit_EventFilter_Callback = bool (*)(KTextEdit*, QObject*, QEvent*);
    using KTextEdit_ViewportEvent_Callback = bool (*)(KTextEdit*, QEvent*);
    using KTextEdit_ViewportSizeHint_Callback = QSize* (*)();
    using KTextEdit_InitStyleOption_Callback = void (*)(const KTextEdit*, QStyleOptionFrame*);
    using KTextEdit_DevType_Callback = int (*)();
    using KTextEdit_SetVisible_Callback = void (*)(KTextEdit*, bool);
    using KTextEdit_HeightForWidth_Callback = int (*)(const KTextEdit*, int);
    using KTextEdit_HasHeightForWidth_Callback = bool (*)();
    using KTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using KTextEdit_EnterEvent_Callback = void (*)(KTextEdit*, QEnterEvent*);
    using KTextEdit_LeaveEvent_Callback = void (*)(KTextEdit*, QEvent*);
    using KTextEdit_MoveEvent_Callback = void (*)(KTextEdit*, QMoveEvent*);
    using KTextEdit_CloseEvent_Callback = void (*)(KTextEdit*, QCloseEvent*);
    using KTextEdit_TabletEvent_Callback = void (*)(KTextEdit*, QTabletEvent*);
    using KTextEdit_ActionEvent_Callback = void (*)(KTextEdit*, QActionEvent*);
    using KTextEdit_HideEvent_Callback = void (*)(KTextEdit*, QHideEvent*);
    using KTextEdit_NativeEvent_Callback = bool (*)(KTextEdit*, libqt_string, void*, intptr_t*);
    using KTextEdit_Metric_Callback = int (*)(const KTextEdit*, int);
    using KTextEdit_InitPainter_Callback = void (*)(const KTextEdit*, QPainter*);
    using KTextEdit_Redirected_Callback = QPaintDevice* (*)(const KTextEdit*, QPoint*);
    using KTextEdit_SharedPainter_Callback = QPainter* (*)();
    using KTextEdit_ChildEvent_Callback = void (*)(KTextEdit*, QChildEvent*);
    using KTextEdit_CustomEvent_Callback = void (*)(KTextEdit*, QEvent*);
    using KTextEdit_ConnectNotify_Callback = void (*)(KTextEdit*, QMetaMethod*);
    using KTextEdit_DisconnectNotify_Callback = void (*)(KTextEdit*, QMetaMethod*);
    using KTextEdit_SlotDoReplace_Callback = void (*)();
    using KTextEdit_SlotReplaceNext_Callback = void (*)();
    using KTextEdit_SlotDoFind_Callback = void (*)();
    using KTextEdit_SlotFind_Callback = void (*)();
    using KTextEdit_SlotFindNext_Callback = void (*)();
    using KTextEdit_SlotFindPrevious_Callback = void (*)();
    using KTextEdit_SlotReplace_Callback = void (*)();
    using KTextEdit_SlotSpeakText_Callback = void (*)();
    using KTextEdit_ZoomInF_Callback = void (*)(KTextEdit*, float);
    using KTextEdit_SetViewportMargins_Callback = void (*)(KTextEdit*, int, int, int, int);
    using KTextEdit_ViewportMargins_Callback = QMargins* (*)();
    using KTextEdit_DrawFrame_Callback = void (*)(KTextEdit*, QPainter*);
    using KTextEdit_UpdateMicroFocus_Callback = void (*)();
    using KTextEdit_Create_Callback = void (*)();
    using KTextEdit_Destroy_Callback = void (*)();
    using KTextEdit_FocusNextChild_Callback = bool (*)();
    using KTextEdit_FocusPreviousChild_Callback = bool (*)();
    using KTextEdit_Sender_Callback = QObject* (*)();
    using KTextEdit_SenderSignalIndex_Callback = int (*)();
    using KTextEdit_Receivers_Callback = int (*)(const KTextEdit*, const char*);
    using KTextEdit_IsSignalConnected_Callback = bool (*)(const KTextEdit*, QMetaMethod*);
    using KTextEdit_GetDecodedMetricF_Callback = double (*)(const KTextEdit*, int, int);

  protected:
    // Instance callback storage
    KTextEdit_Metacall_Callback ktextedit_metacall_callback = nullptr;
    KTextEdit_SetReadOnly_Callback ktextedit_setreadonly_callback = nullptr;
    KTextEdit_SetCheckSpellingEnabled_Callback ktextedit_setcheckspellingenabled_callback = nullptr;
    KTextEdit_CheckSpellingEnabled_Callback ktextedit_checkspellingenabled_callback = nullptr;
    KTextEdit_ShouldBlockBeSpellChecked_Callback ktextedit_shouldblockbespellchecked_callback = nullptr;
    KTextEdit_CreateHighlighter_Callback ktextedit_createhighlighter_callback = nullptr;
    KTextEdit_MousePopupMenu_Callback ktextedit_mousepopupmenu_callback = nullptr;
    KTextEdit_Event_Callback ktextedit_event_callback = nullptr;
    KTextEdit_KeyPressEvent_Callback ktextedit_keypressevent_callback = nullptr;
    KTextEdit_FocusInEvent_Callback ktextedit_focusinevent_callback = nullptr;
    KTextEdit_DeleteWordBack_Callback ktextedit_deletewordback_callback = nullptr;
    KTextEdit_DeleteWordForward_Callback ktextedit_deletewordforward_callback = nullptr;
    KTextEdit_ContextMenuEvent_Callback ktextedit_contextmenuevent_callback = nullptr;
    KTextEdit_LoadResource_Callback ktextedit_loadresource_callback = nullptr;
    KTextEdit_InputMethodQuery_Callback ktextedit_inputmethodquery_callback = nullptr;
    KTextEdit_TimerEvent_Callback ktextedit_timerevent_callback = nullptr;
    KTextEdit_KeyReleaseEvent_Callback ktextedit_keyreleaseevent_callback = nullptr;
    KTextEdit_ResizeEvent_Callback ktextedit_resizeevent_callback = nullptr;
    KTextEdit_PaintEvent_Callback ktextedit_paintevent_callback = nullptr;
    KTextEdit_MousePressEvent_Callback ktextedit_mousepressevent_callback = nullptr;
    KTextEdit_MouseMoveEvent_Callback ktextedit_mousemoveevent_callback = nullptr;
    KTextEdit_MouseReleaseEvent_Callback ktextedit_mousereleaseevent_callback = nullptr;
    KTextEdit_MouseDoubleClickEvent_Callback ktextedit_mousedoubleclickevent_callback = nullptr;
    KTextEdit_FocusNextPrevChild_Callback ktextedit_focusnextprevchild_callback = nullptr;
    KTextEdit_DragEnterEvent_Callback ktextedit_dragenterevent_callback = nullptr;
    KTextEdit_DragLeaveEvent_Callback ktextedit_dragleaveevent_callback = nullptr;
    KTextEdit_DragMoveEvent_Callback ktextedit_dragmoveevent_callback = nullptr;
    KTextEdit_DropEvent_Callback ktextedit_dropevent_callback = nullptr;
    KTextEdit_FocusOutEvent_Callback ktextedit_focusoutevent_callback = nullptr;
    KTextEdit_ShowEvent_Callback ktextedit_showevent_callback = nullptr;
    KTextEdit_ChangeEvent_Callback ktextedit_changeevent_callback = nullptr;
    KTextEdit_WheelEvent_Callback ktextedit_wheelevent_callback = nullptr;
    KTextEdit_CreateMimeDataFromSelection_Callback ktextedit_createmimedatafromselection_callback = nullptr;
    KTextEdit_CanInsertFromMimeData_Callback ktextedit_caninsertfrommimedata_callback = nullptr;
    KTextEdit_InsertFromMimeData_Callback ktextedit_insertfrommimedata_callback = nullptr;
    KTextEdit_InputMethodEvent_Callback ktextedit_inputmethodevent_callback = nullptr;
    KTextEdit_ScrollContentsBy_Callback ktextedit_scrollcontentsby_callback = nullptr;
    KTextEdit_DoSetTextCursor_Callback ktextedit_dosettextcursor_callback = nullptr;
    KTextEdit_MinimumSizeHint_Callback ktextedit_minimumsizehint_callback = nullptr;
    KTextEdit_SizeHint_Callback ktextedit_sizehint_callback = nullptr;
    KTextEdit_SetupViewport_Callback ktextedit_setupviewport_callback = nullptr;
    KTextEdit_EventFilter_Callback ktextedit_eventfilter_callback = nullptr;
    KTextEdit_ViewportEvent_Callback ktextedit_viewportevent_callback = nullptr;
    KTextEdit_ViewportSizeHint_Callback ktextedit_viewportsizehint_callback = nullptr;
    KTextEdit_InitStyleOption_Callback ktextedit_initstyleoption_callback = nullptr;
    KTextEdit_DevType_Callback ktextedit_devtype_callback = nullptr;
    KTextEdit_SetVisible_Callback ktextedit_setvisible_callback = nullptr;
    KTextEdit_HeightForWidth_Callback ktextedit_heightforwidth_callback = nullptr;
    KTextEdit_HasHeightForWidth_Callback ktextedit_hasheightforwidth_callback = nullptr;
    KTextEdit_PaintEngine_Callback ktextedit_paintengine_callback = nullptr;
    KTextEdit_EnterEvent_Callback ktextedit_enterevent_callback = nullptr;
    KTextEdit_LeaveEvent_Callback ktextedit_leaveevent_callback = nullptr;
    KTextEdit_MoveEvent_Callback ktextedit_moveevent_callback = nullptr;
    KTextEdit_CloseEvent_Callback ktextedit_closeevent_callback = nullptr;
    KTextEdit_TabletEvent_Callback ktextedit_tabletevent_callback = nullptr;
    KTextEdit_ActionEvent_Callback ktextedit_actionevent_callback = nullptr;
    KTextEdit_HideEvent_Callback ktextedit_hideevent_callback = nullptr;
    KTextEdit_NativeEvent_Callback ktextedit_nativeevent_callback = nullptr;
    KTextEdit_Metric_Callback ktextedit_metric_callback = nullptr;
    KTextEdit_InitPainter_Callback ktextedit_initpainter_callback = nullptr;
    KTextEdit_Redirected_Callback ktextedit_redirected_callback = nullptr;
    KTextEdit_SharedPainter_Callback ktextedit_sharedpainter_callback = nullptr;
    KTextEdit_ChildEvent_Callback ktextedit_childevent_callback = nullptr;
    KTextEdit_CustomEvent_Callback ktextedit_customevent_callback = nullptr;
    KTextEdit_ConnectNotify_Callback ktextedit_connectnotify_callback = nullptr;
    KTextEdit_DisconnectNotify_Callback ktextedit_disconnectnotify_callback = nullptr;
    KTextEdit_SlotDoReplace_Callback ktextedit_slotdoreplace_callback = nullptr;
    KTextEdit_SlotReplaceNext_Callback ktextedit_slotreplacenext_callback = nullptr;
    KTextEdit_SlotDoFind_Callback ktextedit_slotdofind_callback = nullptr;
    KTextEdit_SlotFind_Callback ktextedit_slotfind_callback = nullptr;
    KTextEdit_SlotFindNext_Callback ktextedit_slotfindnext_callback = nullptr;
    KTextEdit_SlotFindPrevious_Callback ktextedit_slotfindprevious_callback = nullptr;
    KTextEdit_SlotReplace_Callback ktextedit_slotreplace_callback = nullptr;
    KTextEdit_SlotSpeakText_Callback ktextedit_slotspeaktext_callback = nullptr;
    KTextEdit_ZoomInF_Callback ktextedit_zoominf_callback = nullptr;
    KTextEdit_SetViewportMargins_Callback ktextedit_setviewportmargins_callback = nullptr;
    KTextEdit_ViewportMargins_Callback ktextedit_viewportmargins_callback = nullptr;
    KTextEdit_DrawFrame_Callback ktextedit_drawframe_callback = nullptr;
    KTextEdit_UpdateMicroFocus_Callback ktextedit_updatemicrofocus_callback = nullptr;
    KTextEdit_Create_Callback ktextedit_create_callback = nullptr;
    KTextEdit_Destroy_Callback ktextedit_destroy_callback = nullptr;
    KTextEdit_FocusNextChild_Callback ktextedit_focusnextchild_callback = nullptr;
    KTextEdit_FocusPreviousChild_Callback ktextedit_focuspreviouschild_callback = nullptr;
    KTextEdit_Sender_Callback ktextedit_sender_callback = nullptr;
    KTextEdit_SenderSignalIndex_Callback ktextedit_sendersignalindex_callback = nullptr;
    KTextEdit_Receivers_Callback ktextedit_receivers_callback = nullptr;
    KTextEdit_IsSignalConnected_Callback ktextedit_issignalconnected_callback = nullptr;
    KTextEdit_GetDecodedMetricF_Callback ktextedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktextedit_metacall_isbase = false;
    mutable bool ktextedit_setreadonly_isbase = false;
    mutable bool ktextedit_setcheckspellingenabled_isbase = false;
    mutable bool ktextedit_checkspellingenabled_isbase = false;
    mutable bool ktextedit_shouldblockbespellchecked_isbase = false;
    mutable bool ktextedit_createhighlighter_isbase = false;
    mutable bool ktextedit_mousepopupmenu_isbase = false;
    mutable bool ktextedit_event_isbase = false;
    mutable bool ktextedit_keypressevent_isbase = false;
    mutable bool ktextedit_focusinevent_isbase = false;
    mutable bool ktextedit_deletewordback_isbase = false;
    mutable bool ktextedit_deletewordforward_isbase = false;
    mutable bool ktextedit_contextmenuevent_isbase = false;
    mutable bool ktextedit_loadresource_isbase = false;
    mutable bool ktextedit_inputmethodquery_isbase = false;
    mutable bool ktextedit_timerevent_isbase = false;
    mutable bool ktextedit_keyreleaseevent_isbase = false;
    mutable bool ktextedit_resizeevent_isbase = false;
    mutable bool ktextedit_paintevent_isbase = false;
    mutable bool ktextedit_mousepressevent_isbase = false;
    mutable bool ktextedit_mousemoveevent_isbase = false;
    mutable bool ktextedit_mousereleaseevent_isbase = false;
    mutable bool ktextedit_mousedoubleclickevent_isbase = false;
    mutable bool ktextedit_focusnextprevchild_isbase = false;
    mutable bool ktextedit_dragenterevent_isbase = false;
    mutable bool ktextedit_dragleaveevent_isbase = false;
    mutable bool ktextedit_dragmoveevent_isbase = false;
    mutable bool ktextedit_dropevent_isbase = false;
    mutable bool ktextedit_focusoutevent_isbase = false;
    mutable bool ktextedit_showevent_isbase = false;
    mutable bool ktextedit_changeevent_isbase = false;
    mutable bool ktextedit_wheelevent_isbase = false;
    mutable bool ktextedit_createmimedatafromselection_isbase = false;
    mutable bool ktextedit_caninsertfrommimedata_isbase = false;
    mutable bool ktextedit_insertfrommimedata_isbase = false;
    mutable bool ktextedit_inputmethodevent_isbase = false;
    mutable bool ktextedit_scrollcontentsby_isbase = false;
    mutable bool ktextedit_dosettextcursor_isbase = false;
    mutable bool ktextedit_minimumsizehint_isbase = false;
    mutable bool ktextedit_sizehint_isbase = false;
    mutable bool ktextedit_setupviewport_isbase = false;
    mutable bool ktextedit_eventfilter_isbase = false;
    mutable bool ktextedit_viewportevent_isbase = false;
    mutable bool ktextedit_viewportsizehint_isbase = false;
    mutable bool ktextedit_initstyleoption_isbase = false;
    mutable bool ktextedit_devtype_isbase = false;
    mutable bool ktextedit_setvisible_isbase = false;
    mutable bool ktextedit_heightforwidth_isbase = false;
    mutable bool ktextedit_hasheightforwidth_isbase = false;
    mutable bool ktextedit_paintengine_isbase = false;
    mutable bool ktextedit_enterevent_isbase = false;
    mutable bool ktextedit_leaveevent_isbase = false;
    mutable bool ktextedit_moveevent_isbase = false;
    mutable bool ktextedit_closeevent_isbase = false;
    mutable bool ktextedit_tabletevent_isbase = false;
    mutable bool ktextedit_actionevent_isbase = false;
    mutable bool ktextedit_hideevent_isbase = false;
    mutable bool ktextedit_nativeevent_isbase = false;
    mutable bool ktextedit_metric_isbase = false;
    mutable bool ktextedit_initpainter_isbase = false;
    mutable bool ktextedit_redirected_isbase = false;
    mutable bool ktextedit_sharedpainter_isbase = false;
    mutable bool ktextedit_childevent_isbase = false;
    mutable bool ktextedit_customevent_isbase = false;
    mutable bool ktextedit_connectnotify_isbase = false;
    mutable bool ktextedit_disconnectnotify_isbase = false;
    mutable bool ktextedit_slotdoreplace_isbase = false;
    mutable bool ktextedit_slotreplacenext_isbase = false;
    mutable bool ktextedit_slotdofind_isbase = false;
    mutable bool ktextedit_slotfind_isbase = false;
    mutable bool ktextedit_slotfindnext_isbase = false;
    mutable bool ktextedit_slotfindprevious_isbase = false;
    mutable bool ktextedit_slotreplace_isbase = false;
    mutable bool ktextedit_slotspeaktext_isbase = false;
    mutable bool ktextedit_zoominf_isbase = false;
    mutable bool ktextedit_setviewportmargins_isbase = false;
    mutable bool ktextedit_viewportmargins_isbase = false;
    mutable bool ktextedit_drawframe_isbase = false;
    mutable bool ktextedit_updatemicrofocus_isbase = false;
    mutable bool ktextedit_create_isbase = false;
    mutable bool ktextedit_destroy_isbase = false;
    mutable bool ktextedit_focusnextchild_isbase = false;
    mutable bool ktextedit_focuspreviouschild_isbase = false;
    mutable bool ktextedit_sender_isbase = false;
    mutable bool ktextedit_sendersignalindex_isbase = false;
    mutable bool ktextedit_receivers_isbase = false;
    mutable bool ktextedit_issignalconnected_isbase = false;
    mutable bool ktextedit_getdecodedmetricf_isbase = false;

  public:
    VirtualKTextEdit(QWidget* parent) : KTextEdit(parent) {};
    VirtualKTextEdit(const QString& text) : KTextEdit(text) {};
    VirtualKTextEdit() : KTextEdit() {};
    VirtualKTextEdit(const QString& text, QWidget* parent) : KTextEdit(text, parent) {};

    ~VirtualKTextEdit() {
        ktextedit_metacall_callback = nullptr;
        ktextedit_setreadonly_callback = nullptr;
        ktextedit_setcheckspellingenabled_callback = nullptr;
        ktextedit_checkspellingenabled_callback = nullptr;
        ktextedit_shouldblockbespellchecked_callback = nullptr;
        ktextedit_createhighlighter_callback = nullptr;
        ktextedit_mousepopupmenu_callback = nullptr;
        ktextedit_event_callback = nullptr;
        ktextedit_keypressevent_callback = nullptr;
        ktextedit_focusinevent_callback = nullptr;
        ktextedit_deletewordback_callback = nullptr;
        ktextedit_deletewordforward_callback = nullptr;
        ktextedit_contextmenuevent_callback = nullptr;
        ktextedit_loadresource_callback = nullptr;
        ktextedit_inputmethodquery_callback = nullptr;
        ktextedit_timerevent_callback = nullptr;
        ktextedit_keyreleaseevent_callback = nullptr;
        ktextedit_resizeevent_callback = nullptr;
        ktextedit_paintevent_callback = nullptr;
        ktextedit_mousepressevent_callback = nullptr;
        ktextedit_mousemoveevent_callback = nullptr;
        ktextedit_mousereleaseevent_callback = nullptr;
        ktextedit_mousedoubleclickevent_callback = nullptr;
        ktextedit_focusnextprevchild_callback = nullptr;
        ktextedit_dragenterevent_callback = nullptr;
        ktextedit_dragleaveevent_callback = nullptr;
        ktextedit_dragmoveevent_callback = nullptr;
        ktextedit_dropevent_callback = nullptr;
        ktextedit_focusoutevent_callback = nullptr;
        ktextedit_showevent_callback = nullptr;
        ktextedit_changeevent_callback = nullptr;
        ktextedit_wheelevent_callback = nullptr;
        ktextedit_createmimedatafromselection_callback = nullptr;
        ktextedit_caninsertfrommimedata_callback = nullptr;
        ktextedit_insertfrommimedata_callback = nullptr;
        ktextedit_inputmethodevent_callback = nullptr;
        ktextedit_scrollcontentsby_callback = nullptr;
        ktextedit_dosettextcursor_callback = nullptr;
        ktextedit_minimumsizehint_callback = nullptr;
        ktextedit_sizehint_callback = nullptr;
        ktextedit_setupviewport_callback = nullptr;
        ktextedit_eventfilter_callback = nullptr;
        ktextedit_viewportevent_callback = nullptr;
        ktextedit_viewportsizehint_callback = nullptr;
        ktextedit_initstyleoption_callback = nullptr;
        ktextedit_devtype_callback = nullptr;
        ktextedit_setvisible_callback = nullptr;
        ktextedit_heightforwidth_callback = nullptr;
        ktextedit_hasheightforwidth_callback = nullptr;
        ktextedit_paintengine_callback = nullptr;
        ktextedit_enterevent_callback = nullptr;
        ktextedit_leaveevent_callback = nullptr;
        ktextedit_moveevent_callback = nullptr;
        ktextedit_closeevent_callback = nullptr;
        ktextedit_tabletevent_callback = nullptr;
        ktextedit_actionevent_callback = nullptr;
        ktextedit_hideevent_callback = nullptr;
        ktextedit_nativeevent_callback = nullptr;
        ktextedit_metric_callback = nullptr;
        ktextedit_initpainter_callback = nullptr;
        ktextedit_redirected_callback = nullptr;
        ktextedit_sharedpainter_callback = nullptr;
        ktextedit_childevent_callback = nullptr;
        ktextedit_customevent_callback = nullptr;
        ktextedit_connectnotify_callback = nullptr;
        ktextedit_disconnectnotify_callback = nullptr;
        ktextedit_slotdoreplace_callback = nullptr;
        ktextedit_slotreplacenext_callback = nullptr;
        ktextedit_slotdofind_callback = nullptr;
        ktextedit_slotfind_callback = nullptr;
        ktextedit_slotfindnext_callback = nullptr;
        ktextedit_slotfindprevious_callback = nullptr;
        ktextedit_slotreplace_callback = nullptr;
        ktextedit_slotspeaktext_callback = nullptr;
        ktextedit_zoominf_callback = nullptr;
        ktextedit_setviewportmargins_callback = nullptr;
        ktextedit_viewportmargins_callback = nullptr;
        ktextedit_drawframe_callback = nullptr;
        ktextedit_updatemicrofocus_callback = nullptr;
        ktextedit_create_callback = nullptr;
        ktextedit_destroy_callback = nullptr;
        ktextedit_focusnextchild_callback = nullptr;
        ktextedit_focuspreviouschild_callback = nullptr;
        ktextedit_sender_callback = nullptr;
        ktextedit_sendersignalindex_callback = nullptr;
        ktextedit_receivers_callback = nullptr;
        ktextedit_issignalconnected_callback = nullptr;
        ktextedit_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEdit_Metacall_Callback(KTextEdit_Metacall_Callback cb) { ktextedit_metacall_callback = cb; }
    inline void setKTextEdit_SetReadOnly_Callback(KTextEdit_SetReadOnly_Callback cb) { ktextedit_setreadonly_callback = cb; }
    inline void setKTextEdit_SetCheckSpellingEnabled_Callback(KTextEdit_SetCheckSpellingEnabled_Callback cb) { ktextedit_setcheckspellingenabled_callback = cb; }
    inline void setKTextEdit_CheckSpellingEnabled_Callback(KTextEdit_CheckSpellingEnabled_Callback cb) { ktextedit_checkspellingenabled_callback = cb; }
    inline void setKTextEdit_ShouldBlockBeSpellChecked_Callback(KTextEdit_ShouldBlockBeSpellChecked_Callback cb) { ktextedit_shouldblockbespellchecked_callback = cb; }
    inline void setKTextEdit_CreateHighlighter_Callback(KTextEdit_CreateHighlighter_Callback cb) { ktextedit_createhighlighter_callback = cb; }
    inline void setKTextEdit_MousePopupMenu_Callback(KTextEdit_MousePopupMenu_Callback cb) { ktextedit_mousepopupmenu_callback = cb; }
    inline void setKTextEdit_Event_Callback(KTextEdit_Event_Callback cb) { ktextedit_event_callback = cb; }
    inline void setKTextEdit_KeyPressEvent_Callback(KTextEdit_KeyPressEvent_Callback cb) { ktextedit_keypressevent_callback = cb; }
    inline void setKTextEdit_FocusInEvent_Callback(KTextEdit_FocusInEvent_Callback cb) { ktextedit_focusinevent_callback = cb; }
    inline void setKTextEdit_DeleteWordBack_Callback(KTextEdit_DeleteWordBack_Callback cb) { ktextedit_deletewordback_callback = cb; }
    inline void setKTextEdit_DeleteWordForward_Callback(KTextEdit_DeleteWordForward_Callback cb) { ktextedit_deletewordforward_callback = cb; }
    inline void setKTextEdit_ContextMenuEvent_Callback(KTextEdit_ContextMenuEvent_Callback cb) { ktextedit_contextmenuevent_callback = cb; }
    inline void setKTextEdit_LoadResource_Callback(KTextEdit_LoadResource_Callback cb) { ktextedit_loadresource_callback = cb; }
    inline void setKTextEdit_InputMethodQuery_Callback(KTextEdit_InputMethodQuery_Callback cb) { ktextedit_inputmethodquery_callback = cb; }
    inline void setKTextEdit_TimerEvent_Callback(KTextEdit_TimerEvent_Callback cb) { ktextedit_timerevent_callback = cb; }
    inline void setKTextEdit_KeyReleaseEvent_Callback(KTextEdit_KeyReleaseEvent_Callback cb) { ktextedit_keyreleaseevent_callback = cb; }
    inline void setKTextEdit_ResizeEvent_Callback(KTextEdit_ResizeEvent_Callback cb) { ktextedit_resizeevent_callback = cb; }
    inline void setKTextEdit_PaintEvent_Callback(KTextEdit_PaintEvent_Callback cb) { ktextedit_paintevent_callback = cb; }
    inline void setKTextEdit_MousePressEvent_Callback(KTextEdit_MousePressEvent_Callback cb) { ktextedit_mousepressevent_callback = cb; }
    inline void setKTextEdit_MouseMoveEvent_Callback(KTextEdit_MouseMoveEvent_Callback cb) { ktextedit_mousemoveevent_callback = cb; }
    inline void setKTextEdit_MouseReleaseEvent_Callback(KTextEdit_MouseReleaseEvent_Callback cb) { ktextedit_mousereleaseevent_callback = cb; }
    inline void setKTextEdit_MouseDoubleClickEvent_Callback(KTextEdit_MouseDoubleClickEvent_Callback cb) { ktextedit_mousedoubleclickevent_callback = cb; }
    inline void setKTextEdit_FocusNextPrevChild_Callback(KTextEdit_FocusNextPrevChild_Callback cb) { ktextedit_focusnextprevchild_callback = cb; }
    inline void setKTextEdit_DragEnterEvent_Callback(KTextEdit_DragEnterEvent_Callback cb) { ktextedit_dragenterevent_callback = cb; }
    inline void setKTextEdit_DragLeaveEvent_Callback(KTextEdit_DragLeaveEvent_Callback cb) { ktextedit_dragleaveevent_callback = cb; }
    inline void setKTextEdit_DragMoveEvent_Callback(KTextEdit_DragMoveEvent_Callback cb) { ktextedit_dragmoveevent_callback = cb; }
    inline void setKTextEdit_DropEvent_Callback(KTextEdit_DropEvent_Callback cb) { ktextedit_dropevent_callback = cb; }
    inline void setKTextEdit_FocusOutEvent_Callback(KTextEdit_FocusOutEvent_Callback cb) { ktextedit_focusoutevent_callback = cb; }
    inline void setKTextEdit_ShowEvent_Callback(KTextEdit_ShowEvent_Callback cb) { ktextedit_showevent_callback = cb; }
    inline void setKTextEdit_ChangeEvent_Callback(KTextEdit_ChangeEvent_Callback cb) { ktextedit_changeevent_callback = cb; }
    inline void setKTextEdit_WheelEvent_Callback(KTextEdit_WheelEvent_Callback cb) { ktextedit_wheelevent_callback = cb; }
    inline void setKTextEdit_CreateMimeDataFromSelection_Callback(KTextEdit_CreateMimeDataFromSelection_Callback cb) { ktextedit_createmimedatafromselection_callback = cb; }
    inline void setKTextEdit_CanInsertFromMimeData_Callback(KTextEdit_CanInsertFromMimeData_Callback cb) { ktextedit_caninsertfrommimedata_callback = cb; }
    inline void setKTextEdit_InsertFromMimeData_Callback(KTextEdit_InsertFromMimeData_Callback cb) { ktextedit_insertfrommimedata_callback = cb; }
    inline void setKTextEdit_InputMethodEvent_Callback(KTextEdit_InputMethodEvent_Callback cb) { ktextedit_inputmethodevent_callback = cb; }
    inline void setKTextEdit_ScrollContentsBy_Callback(KTextEdit_ScrollContentsBy_Callback cb) { ktextedit_scrollcontentsby_callback = cb; }
    inline void setKTextEdit_DoSetTextCursor_Callback(KTextEdit_DoSetTextCursor_Callback cb) { ktextedit_dosettextcursor_callback = cb; }
    inline void setKTextEdit_MinimumSizeHint_Callback(KTextEdit_MinimumSizeHint_Callback cb) { ktextedit_minimumsizehint_callback = cb; }
    inline void setKTextEdit_SizeHint_Callback(KTextEdit_SizeHint_Callback cb) { ktextedit_sizehint_callback = cb; }
    inline void setKTextEdit_SetupViewport_Callback(KTextEdit_SetupViewport_Callback cb) { ktextedit_setupviewport_callback = cb; }
    inline void setKTextEdit_EventFilter_Callback(KTextEdit_EventFilter_Callback cb) { ktextedit_eventfilter_callback = cb; }
    inline void setKTextEdit_ViewportEvent_Callback(KTextEdit_ViewportEvent_Callback cb) { ktextedit_viewportevent_callback = cb; }
    inline void setKTextEdit_ViewportSizeHint_Callback(KTextEdit_ViewportSizeHint_Callback cb) { ktextedit_viewportsizehint_callback = cb; }
    inline void setKTextEdit_InitStyleOption_Callback(KTextEdit_InitStyleOption_Callback cb) { ktextedit_initstyleoption_callback = cb; }
    inline void setKTextEdit_DevType_Callback(KTextEdit_DevType_Callback cb) { ktextedit_devtype_callback = cb; }
    inline void setKTextEdit_SetVisible_Callback(KTextEdit_SetVisible_Callback cb) { ktextedit_setvisible_callback = cb; }
    inline void setKTextEdit_HeightForWidth_Callback(KTextEdit_HeightForWidth_Callback cb) { ktextedit_heightforwidth_callback = cb; }
    inline void setKTextEdit_HasHeightForWidth_Callback(KTextEdit_HasHeightForWidth_Callback cb) { ktextedit_hasheightforwidth_callback = cb; }
    inline void setKTextEdit_PaintEngine_Callback(KTextEdit_PaintEngine_Callback cb) { ktextedit_paintengine_callback = cb; }
    inline void setKTextEdit_EnterEvent_Callback(KTextEdit_EnterEvent_Callback cb) { ktextedit_enterevent_callback = cb; }
    inline void setKTextEdit_LeaveEvent_Callback(KTextEdit_LeaveEvent_Callback cb) { ktextedit_leaveevent_callback = cb; }
    inline void setKTextEdit_MoveEvent_Callback(KTextEdit_MoveEvent_Callback cb) { ktextedit_moveevent_callback = cb; }
    inline void setKTextEdit_CloseEvent_Callback(KTextEdit_CloseEvent_Callback cb) { ktextedit_closeevent_callback = cb; }
    inline void setKTextEdit_TabletEvent_Callback(KTextEdit_TabletEvent_Callback cb) { ktextedit_tabletevent_callback = cb; }
    inline void setKTextEdit_ActionEvent_Callback(KTextEdit_ActionEvent_Callback cb) { ktextedit_actionevent_callback = cb; }
    inline void setKTextEdit_HideEvent_Callback(KTextEdit_HideEvent_Callback cb) { ktextedit_hideevent_callback = cb; }
    inline void setKTextEdit_NativeEvent_Callback(KTextEdit_NativeEvent_Callback cb) { ktextedit_nativeevent_callback = cb; }
    inline void setKTextEdit_Metric_Callback(KTextEdit_Metric_Callback cb) { ktextedit_metric_callback = cb; }
    inline void setKTextEdit_InitPainter_Callback(KTextEdit_InitPainter_Callback cb) { ktextedit_initpainter_callback = cb; }
    inline void setKTextEdit_Redirected_Callback(KTextEdit_Redirected_Callback cb) { ktextedit_redirected_callback = cb; }
    inline void setKTextEdit_SharedPainter_Callback(KTextEdit_SharedPainter_Callback cb) { ktextedit_sharedpainter_callback = cb; }
    inline void setKTextEdit_ChildEvent_Callback(KTextEdit_ChildEvent_Callback cb) { ktextedit_childevent_callback = cb; }
    inline void setKTextEdit_CustomEvent_Callback(KTextEdit_CustomEvent_Callback cb) { ktextedit_customevent_callback = cb; }
    inline void setKTextEdit_ConnectNotify_Callback(KTextEdit_ConnectNotify_Callback cb) { ktextedit_connectnotify_callback = cb; }
    inline void setKTextEdit_DisconnectNotify_Callback(KTextEdit_DisconnectNotify_Callback cb) { ktextedit_disconnectnotify_callback = cb; }
    inline void setKTextEdit_SlotDoReplace_Callback(KTextEdit_SlotDoReplace_Callback cb) { ktextedit_slotdoreplace_callback = cb; }
    inline void setKTextEdit_SlotReplaceNext_Callback(KTextEdit_SlotReplaceNext_Callback cb) { ktextedit_slotreplacenext_callback = cb; }
    inline void setKTextEdit_SlotDoFind_Callback(KTextEdit_SlotDoFind_Callback cb) { ktextedit_slotdofind_callback = cb; }
    inline void setKTextEdit_SlotFind_Callback(KTextEdit_SlotFind_Callback cb) { ktextedit_slotfind_callback = cb; }
    inline void setKTextEdit_SlotFindNext_Callback(KTextEdit_SlotFindNext_Callback cb) { ktextedit_slotfindnext_callback = cb; }
    inline void setKTextEdit_SlotFindPrevious_Callback(KTextEdit_SlotFindPrevious_Callback cb) { ktextedit_slotfindprevious_callback = cb; }
    inline void setKTextEdit_SlotReplace_Callback(KTextEdit_SlotReplace_Callback cb) { ktextedit_slotreplace_callback = cb; }
    inline void setKTextEdit_SlotSpeakText_Callback(KTextEdit_SlotSpeakText_Callback cb) { ktextedit_slotspeaktext_callback = cb; }
    inline void setKTextEdit_ZoomInF_Callback(KTextEdit_ZoomInF_Callback cb) { ktextedit_zoominf_callback = cb; }
    inline void setKTextEdit_SetViewportMargins_Callback(KTextEdit_SetViewportMargins_Callback cb) { ktextedit_setviewportmargins_callback = cb; }
    inline void setKTextEdit_ViewportMargins_Callback(KTextEdit_ViewportMargins_Callback cb) { ktextedit_viewportmargins_callback = cb; }
    inline void setKTextEdit_DrawFrame_Callback(KTextEdit_DrawFrame_Callback cb) { ktextedit_drawframe_callback = cb; }
    inline void setKTextEdit_UpdateMicroFocus_Callback(KTextEdit_UpdateMicroFocus_Callback cb) { ktextedit_updatemicrofocus_callback = cb; }
    inline void setKTextEdit_Create_Callback(KTextEdit_Create_Callback cb) { ktextedit_create_callback = cb; }
    inline void setKTextEdit_Destroy_Callback(KTextEdit_Destroy_Callback cb) { ktextedit_destroy_callback = cb; }
    inline void setKTextEdit_FocusNextChild_Callback(KTextEdit_FocusNextChild_Callback cb) { ktextedit_focusnextchild_callback = cb; }
    inline void setKTextEdit_FocusPreviousChild_Callback(KTextEdit_FocusPreviousChild_Callback cb) { ktextedit_focuspreviouschild_callback = cb; }
    inline void setKTextEdit_Sender_Callback(KTextEdit_Sender_Callback cb) { ktextedit_sender_callback = cb; }
    inline void setKTextEdit_SenderSignalIndex_Callback(KTextEdit_SenderSignalIndex_Callback cb) { ktextedit_sendersignalindex_callback = cb; }
    inline void setKTextEdit_Receivers_Callback(KTextEdit_Receivers_Callback cb) { ktextedit_receivers_callback = cb; }
    inline void setKTextEdit_IsSignalConnected_Callback(KTextEdit_IsSignalConnected_Callback cb) { ktextedit_issignalconnected_callback = cb; }
    inline void setKTextEdit_GetDecodedMetricF_Callback(KTextEdit_GetDecodedMetricF_Callback cb) { ktextedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKTextEdit_Metacall_IsBase(bool value) const { ktextedit_metacall_isbase = value; }
    inline void setKTextEdit_SetReadOnly_IsBase(bool value) const { ktextedit_setreadonly_isbase = value; }
    inline void setKTextEdit_SetCheckSpellingEnabled_IsBase(bool value) const { ktextedit_setcheckspellingenabled_isbase = value; }
    inline void setKTextEdit_CheckSpellingEnabled_IsBase(bool value) const { ktextedit_checkspellingenabled_isbase = value; }
    inline void setKTextEdit_ShouldBlockBeSpellChecked_IsBase(bool value) const { ktextedit_shouldblockbespellchecked_isbase = value; }
    inline void setKTextEdit_CreateHighlighter_IsBase(bool value) const { ktextedit_createhighlighter_isbase = value; }
    inline void setKTextEdit_MousePopupMenu_IsBase(bool value) const { ktextedit_mousepopupmenu_isbase = value; }
    inline void setKTextEdit_Event_IsBase(bool value) const { ktextedit_event_isbase = value; }
    inline void setKTextEdit_KeyPressEvent_IsBase(bool value) const { ktextedit_keypressevent_isbase = value; }
    inline void setKTextEdit_FocusInEvent_IsBase(bool value) const { ktextedit_focusinevent_isbase = value; }
    inline void setKTextEdit_DeleteWordBack_IsBase(bool value) const { ktextedit_deletewordback_isbase = value; }
    inline void setKTextEdit_DeleteWordForward_IsBase(bool value) const { ktextedit_deletewordforward_isbase = value; }
    inline void setKTextEdit_ContextMenuEvent_IsBase(bool value) const { ktextedit_contextmenuevent_isbase = value; }
    inline void setKTextEdit_LoadResource_IsBase(bool value) const { ktextedit_loadresource_isbase = value; }
    inline void setKTextEdit_InputMethodQuery_IsBase(bool value) const { ktextedit_inputmethodquery_isbase = value; }
    inline void setKTextEdit_TimerEvent_IsBase(bool value) const { ktextedit_timerevent_isbase = value; }
    inline void setKTextEdit_KeyReleaseEvent_IsBase(bool value) const { ktextedit_keyreleaseevent_isbase = value; }
    inline void setKTextEdit_ResizeEvent_IsBase(bool value) const { ktextedit_resizeevent_isbase = value; }
    inline void setKTextEdit_PaintEvent_IsBase(bool value) const { ktextedit_paintevent_isbase = value; }
    inline void setKTextEdit_MousePressEvent_IsBase(bool value) const { ktextedit_mousepressevent_isbase = value; }
    inline void setKTextEdit_MouseMoveEvent_IsBase(bool value) const { ktextedit_mousemoveevent_isbase = value; }
    inline void setKTextEdit_MouseReleaseEvent_IsBase(bool value) const { ktextedit_mousereleaseevent_isbase = value; }
    inline void setKTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { ktextedit_mousedoubleclickevent_isbase = value; }
    inline void setKTextEdit_FocusNextPrevChild_IsBase(bool value) const { ktextedit_focusnextprevchild_isbase = value; }
    inline void setKTextEdit_DragEnterEvent_IsBase(bool value) const { ktextedit_dragenterevent_isbase = value; }
    inline void setKTextEdit_DragLeaveEvent_IsBase(bool value) const { ktextedit_dragleaveevent_isbase = value; }
    inline void setKTextEdit_DragMoveEvent_IsBase(bool value) const { ktextedit_dragmoveevent_isbase = value; }
    inline void setKTextEdit_DropEvent_IsBase(bool value) const { ktextedit_dropevent_isbase = value; }
    inline void setKTextEdit_FocusOutEvent_IsBase(bool value) const { ktextedit_focusoutevent_isbase = value; }
    inline void setKTextEdit_ShowEvent_IsBase(bool value) const { ktextedit_showevent_isbase = value; }
    inline void setKTextEdit_ChangeEvent_IsBase(bool value) const { ktextedit_changeevent_isbase = value; }
    inline void setKTextEdit_WheelEvent_IsBase(bool value) const { ktextedit_wheelevent_isbase = value; }
    inline void setKTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { ktextedit_createmimedatafromselection_isbase = value; }
    inline void setKTextEdit_CanInsertFromMimeData_IsBase(bool value) const { ktextedit_caninsertfrommimedata_isbase = value; }
    inline void setKTextEdit_InsertFromMimeData_IsBase(bool value) const { ktextedit_insertfrommimedata_isbase = value; }
    inline void setKTextEdit_InputMethodEvent_IsBase(bool value) const { ktextedit_inputmethodevent_isbase = value; }
    inline void setKTextEdit_ScrollContentsBy_IsBase(bool value) const { ktextedit_scrollcontentsby_isbase = value; }
    inline void setKTextEdit_DoSetTextCursor_IsBase(bool value) const { ktextedit_dosettextcursor_isbase = value; }
    inline void setKTextEdit_MinimumSizeHint_IsBase(bool value) const { ktextedit_minimumsizehint_isbase = value; }
    inline void setKTextEdit_SizeHint_IsBase(bool value) const { ktextedit_sizehint_isbase = value; }
    inline void setKTextEdit_SetupViewport_IsBase(bool value) const { ktextedit_setupviewport_isbase = value; }
    inline void setKTextEdit_EventFilter_IsBase(bool value) const { ktextedit_eventfilter_isbase = value; }
    inline void setKTextEdit_ViewportEvent_IsBase(bool value) const { ktextedit_viewportevent_isbase = value; }
    inline void setKTextEdit_ViewportSizeHint_IsBase(bool value) const { ktextedit_viewportsizehint_isbase = value; }
    inline void setKTextEdit_InitStyleOption_IsBase(bool value) const { ktextedit_initstyleoption_isbase = value; }
    inline void setKTextEdit_DevType_IsBase(bool value) const { ktextedit_devtype_isbase = value; }
    inline void setKTextEdit_SetVisible_IsBase(bool value) const { ktextedit_setvisible_isbase = value; }
    inline void setKTextEdit_HeightForWidth_IsBase(bool value) const { ktextedit_heightforwidth_isbase = value; }
    inline void setKTextEdit_HasHeightForWidth_IsBase(bool value) const { ktextedit_hasheightforwidth_isbase = value; }
    inline void setKTextEdit_PaintEngine_IsBase(bool value) const { ktextedit_paintengine_isbase = value; }
    inline void setKTextEdit_EnterEvent_IsBase(bool value) const { ktextedit_enterevent_isbase = value; }
    inline void setKTextEdit_LeaveEvent_IsBase(bool value) const { ktextedit_leaveevent_isbase = value; }
    inline void setKTextEdit_MoveEvent_IsBase(bool value) const { ktextedit_moveevent_isbase = value; }
    inline void setKTextEdit_CloseEvent_IsBase(bool value) const { ktextedit_closeevent_isbase = value; }
    inline void setKTextEdit_TabletEvent_IsBase(bool value) const { ktextedit_tabletevent_isbase = value; }
    inline void setKTextEdit_ActionEvent_IsBase(bool value) const { ktextedit_actionevent_isbase = value; }
    inline void setKTextEdit_HideEvent_IsBase(bool value) const { ktextedit_hideevent_isbase = value; }
    inline void setKTextEdit_NativeEvent_IsBase(bool value) const { ktextedit_nativeevent_isbase = value; }
    inline void setKTextEdit_Metric_IsBase(bool value) const { ktextedit_metric_isbase = value; }
    inline void setKTextEdit_InitPainter_IsBase(bool value) const { ktextedit_initpainter_isbase = value; }
    inline void setKTextEdit_Redirected_IsBase(bool value) const { ktextedit_redirected_isbase = value; }
    inline void setKTextEdit_SharedPainter_IsBase(bool value) const { ktextedit_sharedpainter_isbase = value; }
    inline void setKTextEdit_ChildEvent_IsBase(bool value) const { ktextedit_childevent_isbase = value; }
    inline void setKTextEdit_CustomEvent_IsBase(bool value) const { ktextedit_customevent_isbase = value; }
    inline void setKTextEdit_ConnectNotify_IsBase(bool value) const { ktextedit_connectnotify_isbase = value; }
    inline void setKTextEdit_DisconnectNotify_IsBase(bool value) const { ktextedit_disconnectnotify_isbase = value; }
    inline void setKTextEdit_SlotDoReplace_IsBase(bool value) const { ktextedit_slotdoreplace_isbase = value; }
    inline void setKTextEdit_SlotReplaceNext_IsBase(bool value) const { ktextedit_slotreplacenext_isbase = value; }
    inline void setKTextEdit_SlotDoFind_IsBase(bool value) const { ktextedit_slotdofind_isbase = value; }
    inline void setKTextEdit_SlotFind_IsBase(bool value) const { ktextedit_slotfind_isbase = value; }
    inline void setKTextEdit_SlotFindNext_IsBase(bool value) const { ktextedit_slotfindnext_isbase = value; }
    inline void setKTextEdit_SlotFindPrevious_IsBase(bool value) const { ktextedit_slotfindprevious_isbase = value; }
    inline void setKTextEdit_SlotReplace_IsBase(bool value) const { ktextedit_slotreplace_isbase = value; }
    inline void setKTextEdit_SlotSpeakText_IsBase(bool value) const { ktextedit_slotspeaktext_isbase = value; }
    inline void setKTextEdit_ZoomInF_IsBase(bool value) const { ktextedit_zoominf_isbase = value; }
    inline void setKTextEdit_SetViewportMargins_IsBase(bool value) const { ktextedit_setviewportmargins_isbase = value; }
    inline void setKTextEdit_ViewportMargins_IsBase(bool value) const { ktextedit_viewportmargins_isbase = value; }
    inline void setKTextEdit_DrawFrame_IsBase(bool value) const { ktextedit_drawframe_isbase = value; }
    inline void setKTextEdit_UpdateMicroFocus_IsBase(bool value) const { ktextedit_updatemicrofocus_isbase = value; }
    inline void setKTextEdit_Create_IsBase(bool value) const { ktextedit_create_isbase = value; }
    inline void setKTextEdit_Destroy_IsBase(bool value) const { ktextedit_destroy_isbase = value; }
    inline void setKTextEdit_FocusNextChild_IsBase(bool value) const { ktextedit_focusnextchild_isbase = value; }
    inline void setKTextEdit_FocusPreviousChild_IsBase(bool value) const { ktextedit_focuspreviouschild_isbase = value; }
    inline void setKTextEdit_Sender_IsBase(bool value) const { ktextedit_sender_isbase = value; }
    inline void setKTextEdit_SenderSignalIndex_IsBase(bool value) const { ktextedit_sendersignalindex_isbase = value; }
    inline void setKTextEdit_Receivers_IsBase(bool value) const { ktextedit_receivers_isbase = value; }
    inline void setKTextEdit_IsSignalConnected_IsBase(bool value) const { ktextedit_issignalconnected_isbase = value; }
    inline void setKTextEdit_GetDecodedMetricF_IsBase(bool value) const { ktextedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktextedit_metacall_isbase) {
            ktextedit_metacall_isbase = false;
            return KTextEdit::qt_metacall(param1, param2, param3);
        } else if (ktextedit_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktextedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (ktextedit_setreadonly_isbase) {
            ktextedit_setreadonly_isbase = false;
            KTextEdit::setReadOnly(readOnly);
        } else if (ktextedit_setreadonly_callback != nullptr) {
            bool cbval1 = readOnly;

            ktextedit_setreadonly_callback(this, cbval1);
        } else {
            KTextEdit::setReadOnly(readOnly);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCheckSpellingEnabled(bool check) override {
        if (ktextedit_setcheckspellingenabled_isbase) {
            ktextedit_setcheckspellingenabled_isbase = false;
            KTextEdit::setCheckSpellingEnabled(check);
        } else if (ktextedit_setcheckspellingenabled_callback != nullptr) {
            bool cbval1 = check;

            ktextedit_setcheckspellingenabled_callback(this, cbval1);
        } else {
            KTextEdit::setCheckSpellingEnabled(check);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkSpellingEnabled() const override {
        if (ktextedit_checkspellingenabled_isbase) {
            ktextedit_checkspellingenabled_isbase = false;
            return KTextEdit::checkSpellingEnabled();
        } else if (ktextedit_checkspellingenabled_callback != nullptr) {
            bool callback_ret = ktextedit_checkspellingenabled_callback();
            return callback_ret;
        } else {
            return KTextEdit::checkSpellingEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBlockBeSpellChecked(const QString& block) const override {
        if (ktextedit_shouldblockbespellchecked_isbase) {
            ktextedit_shouldblockbespellchecked_isbase = false;
            return KTextEdit::shouldBlockBeSpellChecked(block);
        } else if (ktextedit_shouldblockbespellchecked_callback != nullptr) {
            const QString block_ret = block;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray block_b = block_ret.toUtf8();
            libqt_string block_str;
            block_str.len = block_b.length();
            block_str.data = static_cast<const char*>(malloc(block_str.len + 1));
            memcpy((void*)block_str.data, block_b.data(), block_str.len);
            ((char*)block_str.data)[block_str.len] = '\0';
            libqt_string cbval1 = block_str;

            bool callback_ret = ktextedit_shouldblockbespellchecked_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEdit::shouldBlockBeSpellChecked(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void createHighlighter() override {
        if (ktextedit_createhighlighter_isbase) {
            ktextedit_createhighlighter_isbase = false;
            KTextEdit::createHighlighter();
        } else if (ktextedit_createhighlighter_callback != nullptr) {
            ktextedit_createhighlighter_callback();
        } else {
            KTextEdit::createHighlighter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* mousePopupMenu() override {
        if (ktextedit_mousepopupmenu_isbase) {
            ktextedit_mousepopupmenu_isbase = false;
            return KTextEdit::mousePopupMenu();
        } else if (ktextedit_mousepopupmenu_callback != nullptr) {
            QMenu* callback_ret = ktextedit_mousepopupmenu_callback();
            return callback_ret;
        } else {
            return KTextEdit::mousePopupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (ktextedit_event_isbase) {
            ktextedit_event_isbase = false;
            return KTextEdit::event(param1);
        } else if (ktextedit_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktextedit_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEdit::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (ktextedit_keypressevent_isbase) {
            ktextedit_keypressevent_isbase = false;
            KTextEdit::keyPressEvent(param1);
        } else if (ktextedit_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            ktextedit_keypressevent_callback(this, cbval1);
        } else {
            KTextEdit::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (ktextedit_focusinevent_isbase) {
            ktextedit_focusinevent_isbase = false;
            KTextEdit::focusInEvent(param1);
        } else if (ktextedit_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            ktextedit_focusinevent_callback(this, cbval1);
        } else {
            KTextEdit::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordBack() override {
        if (ktextedit_deletewordback_isbase) {
            ktextedit_deletewordback_isbase = false;
            KTextEdit::deleteWordBack();
        } else if (ktextedit_deletewordback_callback != nullptr) {
            ktextedit_deletewordback_callback();
        } else {
            KTextEdit::deleteWordBack();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWordForward() override {
        if (ktextedit_deletewordforward_isbase) {
            ktextedit_deletewordforward_isbase = false;
            KTextEdit::deleteWordForward();
        } else if (ktextedit_deletewordforward_callback != nullptr) {
            ktextedit_deletewordforward_callback();
        } else {
            KTextEdit::deleteWordForward();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ktextedit_contextmenuevent_isbase) {
            ktextedit_contextmenuevent_isbase = false;
            KTextEdit::contextMenuEvent(param1);
        } else if (ktextedit_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            ktextedit_contextmenuevent_callback(this, cbval1);
        } else {
            KTextEdit::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (ktextedit_loadresource_isbase) {
            ktextedit_loadresource_isbase = false;
            return KTextEdit::loadResource(typeVal, name);
        } else if (ktextedit_loadresource_callback != nullptr) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);

            QVariant* callback_ret = ktextedit_loadresource_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KTextEdit::loadResource(typeVal, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (ktextedit_inputmethodquery_isbase) {
            ktextedit_inputmethodquery_isbase = false;
            return KTextEdit::inputMethodQuery(property);
        } else if (ktextedit_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(property);

            QVariant* callback_ret = ktextedit_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTextEdit::inputMethodQuery(property);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (ktextedit_timerevent_isbase) {
            ktextedit_timerevent_isbase = false;
            KTextEdit::timerEvent(e);
        } else if (ktextedit_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            ktextedit_timerevent_callback(this, cbval1);
        } else {
            KTextEdit::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (ktextedit_keyreleaseevent_isbase) {
            ktextedit_keyreleaseevent_isbase = false;
            KTextEdit::keyReleaseEvent(e);
        } else if (ktextedit_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            ktextedit_keyreleaseevent_callback(this, cbval1);
        } else {
            KTextEdit::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (ktextedit_resizeevent_isbase) {
            ktextedit_resizeevent_isbase = false;
            KTextEdit::resizeEvent(e);
        } else if (ktextedit_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            ktextedit_resizeevent_callback(this, cbval1);
        } else {
            KTextEdit::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (ktextedit_paintevent_isbase) {
            ktextedit_paintevent_isbase = false;
            KTextEdit::paintEvent(e);
        } else if (ktextedit_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            ktextedit_paintevent_callback(this, cbval1);
        } else {
            KTextEdit::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (ktextedit_mousepressevent_isbase) {
            ktextedit_mousepressevent_isbase = false;
            KTextEdit::mousePressEvent(e);
        } else if (ktextedit_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            ktextedit_mousepressevent_callback(this, cbval1);
        } else {
            KTextEdit::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (ktextedit_mousemoveevent_isbase) {
            ktextedit_mousemoveevent_isbase = false;
            KTextEdit::mouseMoveEvent(e);
        } else if (ktextedit_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            ktextedit_mousemoveevent_callback(this, cbval1);
        } else {
            KTextEdit::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (ktextedit_mousereleaseevent_isbase) {
            ktextedit_mousereleaseevent_isbase = false;
            KTextEdit::mouseReleaseEvent(e);
        } else if (ktextedit_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            ktextedit_mousereleaseevent_callback(this, cbval1);
        } else {
            KTextEdit::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (ktextedit_mousedoubleclickevent_isbase) {
            ktextedit_mousedoubleclickevent_isbase = false;
            KTextEdit::mouseDoubleClickEvent(e);
        } else if (ktextedit_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            ktextedit_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KTextEdit::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktextedit_focusnextprevchild_isbase) {
            ktextedit_focusnextprevchild_isbase = false;
            return KTextEdit::focusNextPrevChild(next);
        } else if (ktextedit_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ktextedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (ktextedit_dragenterevent_isbase) {
            ktextedit_dragenterevent_isbase = false;
            KTextEdit::dragEnterEvent(e);
        } else if (ktextedit_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = e;

            ktextedit_dragenterevent_callback(this, cbval1);
        } else {
            KTextEdit::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (ktextedit_dragleaveevent_isbase) {
            ktextedit_dragleaveevent_isbase = false;
            KTextEdit::dragLeaveEvent(e);
        } else if (ktextedit_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            ktextedit_dragleaveevent_callback(this, cbval1);
        } else {
            KTextEdit::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (ktextedit_dragmoveevent_isbase) {
            ktextedit_dragmoveevent_isbase = false;
            KTextEdit::dragMoveEvent(e);
        } else if (ktextedit_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            ktextedit_dragmoveevent_callback(this, cbval1);
        } else {
            KTextEdit::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (ktextedit_dropevent_isbase) {
            ktextedit_dropevent_isbase = false;
            KTextEdit::dropEvent(e);
        } else if (ktextedit_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = e;

            ktextedit_dropevent_callback(this, cbval1);
        } else {
            KTextEdit::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (ktextedit_focusoutevent_isbase) {
            ktextedit_focusoutevent_isbase = false;
            KTextEdit::focusOutEvent(e);
        } else if (ktextedit_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            ktextedit_focusoutevent_callback(this, cbval1);
        } else {
            KTextEdit::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (ktextedit_showevent_isbase) {
            ktextedit_showevent_isbase = false;
            KTextEdit::showEvent(param1);
        } else if (ktextedit_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            ktextedit_showevent_callback(this, cbval1);
        } else {
            KTextEdit::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (ktextedit_changeevent_isbase) {
            ktextedit_changeevent_isbase = false;
            KTextEdit::changeEvent(e);
        } else if (ktextedit_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            ktextedit_changeevent_callback(this, cbval1);
        } else {
            KTextEdit::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (ktextedit_wheelevent_isbase) {
            ktextedit_wheelevent_isbase = false;
            KTextEdit::wheelEvent(e);
        } else if (ktextedit_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            ktextedit_wheelevent_callback(this, cbval1);
        } else {
            KTextEdit::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (ktextedit_createmimedatafromselection_isbase) {
            ktextedit_createmimedatafromselection_isbase = false;
            return KTextEdit::createMimeDataFromSelection();
        } else if (ktextedit_createmimedatafromselection_callback != nullptr) {
            QMimeData* callback_ret = ktextedit_createmimedatafromselection_callback();
            return callback_ret;
        } else {
            return KTextEdit::createMimeDataFromSelection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (ktextedit_caninsertfrommimedata_isbase) {
            ktextedit_caninsertfrommimedata_isbase = false;
            return KTextEdit::canInsertFromMimeData(source);
        } else if (ktextedit_caninsertfrommimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)source;

            bool callback_ret = ktextedit_caninsertfrommimedata_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEdit::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (ktextedit_insertfrommimedata_isbase) {
            ktextedit_insertfrommimedata_isbase = false;
            KTextEdit::insertFromMimeData(source);
        } else if (ktextedit_insertfrommimedata_callback != nullptr) {
            QMimeData* cbval1 = (QMimeData*)source;

            ktextedit_insertfrommimedata_callback(this, cbval1);
        } else {
            KTextEdit::insertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktextedit_inputmethodevent_isbase) {
            ktextedit_inputmethodevent_isbase = false;
            KTextEdit::inputMethodEvent(param1);
        } else if (ktextedit_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ktextedit_inputmethodevent_callback(this, cbval1);
        } else {
            KTextEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (ktextedit_scrollcontentsby_isbase) {
            ktextedit_scrollcontentsby_isbase = false;
            KTextEdit::scrollContentsBy(dx, dy);
        } else if (ktextedit_scrollcontentsby_callback != nullptr) {
            int cbval1 = dx;
            int cbval2 = dy;

            ktextedit_scrollcontentsby_callback(this, cbval1, cbval2);
        } else {
            KTextEdit::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (ktextedit_dosettextcursor_isbase) {
            ktextedit_dosettextcursor_isbase = false;
            KTextEdit::doSetTextCursor(cursor);
        } else if (ktextedit_dosettextcursor_callback != nullptr) {
            const QTextCursor& cursor_ret = cursor;
            // Cast returned reference into pointer
            QTextCursor* cbval1 = const_cast<QTextCursor*>(&cursor_ret);

            ktextedit_dosettextcursor_callback(this, cbval1);
        } else {
            KTextEdit::doSetTextCursor(cursor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktextedit_minimumsizehint_isbase) {
            ktextedit_minimumsizehint_isbase = false;
            return KTextEdit::minimumSizeHint();
        } else if (ktextedit_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ktextedit_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KTextEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktextedit_sizehint_isbase) {
            ktextedit_sizehint_isbase = false;
            return KTextEdit::sizeHint();
        } else if (ktextedit_sizehint_callback != nullptr) {
            QSize* callback_ret = ktextedit_sizehint_callback();
            return *callback_ret;
        } else {
            return KTextEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (ktextedit_setupviewport_isbase) {
            ktextedit_setupviewport_isbase = false;
            KTextEdit::setupViewport(viewport);
        } else if (ktextedit_setupviewport_callback != nullptr) {
            QWidget* cbval1 = viewport;

            ktextedit_setupviewport_callback(this, cbval1);
        } else {
            KTextEdit::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ktextedit_eventfilter_isbase) {
            ktextedit_eventfilter_isbase = false;
            return KTextEdit::eventFilter(param1, param2);
        } else if (ktextedit_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = ktextedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEdit::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (ktextedit_viewportevent_isbase) {
            ktextedit_viewportevent_isbase = false;
            return KTextEdit::viewportEvent(param1);
        } else if (ktextedit_viewportevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = ktextedit_viewportevent_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEdit::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (ktextedit_viewportsizehint_isbase) {
            ktextedit_viewportsizehint_isbase = false;
            return KTextEdit::viewportSizeHint();
        } else if (ktextedit_viewportsizehint_callback != nullptr) {
            QSize* callback_ret = ktextedit_viewportsizehint_callback();
            return *callback_ret;
        } else {
            return KTextEdit::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (ktextedit_initstyleoption_isbase) {
            ktextedit_initstyleoption_isbase = false;
            KTextEdit::initStyleOption(option);
        } else if (ktextedit_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            ktextedit_initstyleoption_callback(this, cbval1);
        } else {
            KTextEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktextedit_devtype_isbase) {
            ktextedit_devtype_isbase = false;
            return KTextEdit::devType();
        } else if (ktextedit_devtype_callback != nullptr) {
            int callback_ret = ktextedit_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktextedit_setvisible_isbase) {
            ktextedit_setvisible_isbase = false;
            KTextEdit::setVisible(visible);
        } else if (ktextedit_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ktextedit_setvisible_callback(this, cbval1);
        } else {
            KTextEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktextedit_heightforwidth_isbase) {
            ktextedit_heightforwidth_isbase = false;
            return KTextEdit::heightForWidth(param1);
        } else if (ktextedit_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ktextedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktextedit_hasheightforwidth_isbase) {
            ktextedit_hasheightforwidth_isbase = false;
            return KTextEdit::hasHeightForWidth();
        } else if (ktextedit_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ktextedit_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KTextEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktextedit_paintengine_isbase) {
            ktextedit_paintengine_isbase = false;
            return KTextEdit::paintEngine();
        } else if (ktextedit_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ktextedit_paintengine_callback();
            return callback_ret;
        } else {
            return KTextEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktextedit_enterevent_isbase) {
            ktextedit_enterevent_isbase = false;
            KTextEdit::enterEvent(event);
        } else if (ktextedit_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ktextedit_enterevent_callback(this, cbval1);
        } else {
            KTextEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktextedit_leaveevent_isbase) {
            ktextedit_leaveevent_isbase = false;
            KTextEdit::leaveEvent(event);
        } else if (ktextedit_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktextedit_leaveevent_callback(this, cbval1);
        } else {
            KTextEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktextedit_moveevent_isbase) {
            ktextedit_moveevent_isbase = false;
            KTextEdit::moveEvent(event);
        } else if (ktextedit_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ktextedit_moveevent_callback(this, cbval1);
        } else {
            KTextEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktextedit_closeevent_isbase) {
            ktextedit_closeevent_isbase = false;
            KTextEdit::closeEvent(event);
        } else if (ktextedit_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ktextedit_closeevent_callback(this, cbval1);
        } else {
            KTextEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktextedit_tabletevent_isbase) {
            ktextedit_tabletevent_isbase = false;
            KTextEdit::tabletEvent(event);
        } else if (ktextedit_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ktextedit_tabletevent_callback(this, cbval1);
        } else {
            KTextEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktextedit_actionevent_isbase) {
            ktextedit_actionevent_isbase = false;
            KTextEdit::actionEvent(event);
        } else if (ktextedit_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ktextedit_actionevent_callback(this, cbval1);
        } else {
            KTextEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktextedit_hideevent_isbase) {
            ktextedit_hideevent_isbase = false;
            KTextEdit::hideEvent(event);
        } else if (ktextedit_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ktextedit_hideevent_callback(this, cbval1);
        } else {
            KTextEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktextedit_nativeevent_isbase) {
            ktextedit_nativeevent_isbase = false;
            return KTextEdit::nativeEvent(eventType, message, result);
        } else if (ktextedit_nativeevent_callback != nullptr) {
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

            bool callback_ret = ktextedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktextedit_metric_isbase) {
            ktextedit_metric_isbase = false;
            return KTextEdit::metric(param1);
        } else if (ktextedit_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ktextedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktextedit_initpainter_isbase) {
            ktextedit_initpainter_isbase = false;
            KTextEdit::initPainter(painter);
        } else if (ktextedit_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ktextedit_initpainter_callback(this, cbval1);
        } else {
            KTextEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktextedit_redirected_isbase) {
            ktextedit_redirected_isbase = false;
            return KTextEdit::redirected(offset);
        } else if (ktextedit_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ktextedit_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktextedit_sharedpainter_isbase) {
            ktextedit_sharedpainter_isbase = false;
            return KTextEdit::sharedPainter();
        } else if (ktextedit_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ktextedit_sharedpainter_callback();
            return callback_ret;
        } else {
            return KTextEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktextedit_childevent_isbase) {
            ktextedit_childevent_isbase = false;
            KTextEdit::childEvent(event);
        } else if (ktextedit_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktextedit_childevent_callback(this, cbval1);
        } else {
            KTextEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktextedit_customevent_isbase) {
            ktextedit_customevent_isbase = false;
            KTextEdit::customEvent(event);
        } else if (ktextedit_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktextedit_customevent_callback(this, cbval1);
        } else {
            KTextEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktextedit_connectnotify_isbase) {
            ktextedit_connectnotify_isbase = false;
            KTextEdit::connectNotify(signal);
        } else if (ktextedit_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktextedit_connectnotify_callback(this, cbval1);
        } else {
            KTextEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktextedit_disconnectnotify_isbase) {
            ktextedit_disconnectnotify_isbase = false;
            KTextEdit::disconnectNotify(signal);
        } else if (ktextedit_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktextedit_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotDoReplace() {
        if (ktextedit_slotdoreplace_isbase) {
            ktextedit_slotdoreplace_isbase = false;
            KTextEdit::slotDoReplace();
        } else if (ktextedit_slotdoreplace_callback != nullptr) {
            ktextedit_slotdoreplace_callback();
        } else {
            KTextEdit::slotDoReplace();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotReplaceNext() {
        if (ktextedit_slotreplacenext_isbase) {
            ktextedit_slotreplacenext_isbase = false;
            KTextEdit::slotReplaceNext();
        } else if (ktextedit_slotreplacenext_callback != nullptr) {
            ktextedit_slotreplacenext_callback();
        } else {
            KTextEdit::slotReplaceNext();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotDoFind() {
        if (ktextedit_slotdofind_isbase) {
            ktextedit_slotdofind_isbase = false;
            KTextEdit::slotDoFind();
        } else if (ktextedit_slotdofind_callback != nullptr) {
            ktextedit_slotdofind_callback();
        } else {
            KTextEdit::slotDoFind();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFind() {
        if (ktextedit_slotfind_isbase) {
            ktextedit_slotfind_isbase = false;
            KTextEdit::slotFind();
        } else if (ktextedit_slotfind_callback != nullptr) {
            ktextedit_slotfind_callback();
        } else {
            KTextEdit::slotFind();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFindNext() {
        if (ktextedit_slotfindnext_isbase) {
            ktextedit_slotfindnext_isbase = false;
            KTextEdit::slotFindNext();
        } else if (ktextedit_slotfindnext_callback != nullptr) {
            ktextedit_slotfindnext_callback();
        } else {
            KTextEdit::slotFindNext();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotFindPrevious() {
        if (ktextedit_slotfindprevious_isbase) {
            ktextedit_slotfindprevious_isbase = false;
            KTextEdit::slotFindPrevious();
        } else if (ktextedit_slotfindprevious_callback != nullptr) {
            ktextedit_slotfindprevious_callback();
        } else {
            KTextEdit::slotFindPrevious();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotReplace() {
        if (ktextedit_slotreplace_isbase) {
            ktextedit_slotreplace_isbase = false;
            KTextEdit::slotReplace();
        } else if (ktextedit_slotreplace_callback != nullptr) {
            ktextedit_slotreplace_callback();
        } else {
            KTextEdit::slotReplace();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotSpeakText() {
        if (ktextedit_slotspeaktext_isbase) {
            ktextedit_slotspeaktext_isbase = false;
            KTextEdit::slotSpeakText();
        } else if (ktextedit_slotspeaktext_callback != nullptr) {
            ktextedit_slotspeaktext_callback();
        } else {
            KTextEdit::slotSpeakText();
        }
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (ktextedit_zoominf_isbase) {
            ktextedit_zoominf_isbase = false;
            KTextEdit::zoomInF(range);
        } else if (ktextedit_zoominf_callback != nullptr) {
            float cbval1 = range;

            ktextedit_zoominf_callback(this, cbval1);
        } else {
            KTextEdit::zoomInF(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (ktextedit_setviewportmargins_isbase) {
            ktextedit_setviewportmargins_isbase = false;
            KTextEdit::setViewportMargins(left, top, right, bottom);
        } else if (ktextedit_setviewportmargins_callback != nullptr) {
            int cbval1 = left;
            int cbval2 = top;
            int cbval3 = right;
            int cbval4 = bottom;

            ktextedit_setviewportmargins_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KTextEdit::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (ktextedit_viewportmargins_isbase) {
            ktextedit_viewportmargins_isbase = false;
            return KTextEdit::viewportMargins();
        } else if (ktextedit_viewportmargins_callback != nullptr) {
            QMargins* callback_ret = ktextedit_viewportmargins_callback();
            return *callback_ret;
        } else {
            return KTextEdit::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (ktextedit_drawframe_isbase) {
            ktextedit_drawframe_isbase = false;
            KTextEdit::drawFrame(param1);
        } else if (ktextedit_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            ktextedit_drawframe_callback(this, cbval1);
        } else {
            KTextEdit::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktextedit_updatemicrofocus_isbase) {
            ktextedit_updatemicrofocus_isbase = false;
            KTextEdit::updateMicroFocus();
        } else if (ktextedit_updatemicrofocus_callback != nullptr) {
            ktextedit_updatemicrofocus_callback();
        } else {
            KTextEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktextedit_create_isbase) {
            ktextedit_create_isbase = false;
            KTextEdit::create();
        } else if (ktextedit_create_callback != nullptr) {
            ktextedit_create_callback();
        } else {
            KTextEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktextedit_destroy_isbase) {
            ktextedit_destroy_isbase = false;
            KTextEdit::destroy();
        } else if (ktextedit_destroy_callback != nullptr) {
            ktextedit_destroy_callback();
        } else {
            KTextEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktextedit_focusnextchild_isbase) {
            ktextedit_focusnextchild_isbase = false;
            return KTextEdit::focusNextChild();
        } else if (ktextedit_focusnextchild_callback != nullptr) {
            bool callback_ret = ktextedit_focusnextchild_callback();
            return callback_ret;
        } else {
            return KTextEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktextedit_focuspreviouschild_isbase) {
            ktextedit_focuspreviouschild_isbase = false;
            return KTextEdit::focusPreviousChild();
        } else if (ktextedit_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ktextedit_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KTextEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktextedit_sender_isbase) {
            ktextedit_sender_isbase = false;
            return KTextEdit::sender();
        } else if (ktextedit_sender_callback != nullptr) {
            QObject* callback_ret = ktextedit_sender_callback();
            return callback_ret;
        } else {
            return KTextEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktextedit_sendersignalindex_isbase) {
            ktextedit_sendersignalindex_isbase = false;
            return KTextEdit::senderSignalIndex();
        } else if (ktextedit_sendersignalindex_callback != nullptr) {
            int callback_ret = ktextedit_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktextedit_receivers_isbase) {
            ktextedit_receivers_isbase = false;
            return KTextEdit::receivers(signal);
        } else if (ktextedit_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktextedit_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktextedit_issignalconnected_isbase) {
            ktextedit_issignalconnected_isbase = false;
            return KTextEdit::isSignalConnected(signal);
        } else if (ktextedit_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktextedit_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEdit::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktextedit_getdecodedmetricf_isbase) {
            ktextedit_getdecodedmetricf_isbase = false;
            return KTextEdit::getDecodedMetricF(metricA, metricB);
        } else if (ktextedit_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ktextedit_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KTextEdit::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KTextEdit_Event(KTextEdit* self, QEvent* param1);
    friend bool KTextEdit_QBaseEvent(KTextEdit* self, QEvent* param1);
    friend void KTextEdit_KeyPressEvent(KTextEdit* self, QKeyEvent* param1);
    friend void KTextEdit_QBaseKeyPressEvent(KTextEdit* self, QKeyEvent* param1);
    friend void KTextEdit_FocusInEvent(KTextEdit* self, QFocusEvent* param1);
    friend void KTextEdit_QBaseFocusInEvent(KTextEdit* self, QFocusEvent* param1);
    friend void KTextEdit_DeleteWordBack(KTextEdit* self);
    friend void KTextEdit_QBaseDeleteWordBack(KTextEdit* self);
    friend void KTextEdit_DeleteWordForward(KTextEdit* self);
    friend void KTextEdit_QBaseDeleteWordForward(KTextEdit* self);
    friend void KTextEdit_ContextMenuEvent(KTextEdit* self, QContextMenuEvent* param1);
    friend void KTextEdit_QBaseContextMenuEvent(KTextEdit* self, QContextMenuEvent* param1);
    friend void KTextEdit_TimerEvent(KTextEdit* self, QTimerEvent* e);
    friend void KTextEdit_QBaseTimerEvent(KTextEdit* self, QTimerEvent* e);
    friend void KTextEdit_KeyReleaseEvent(KTextEdit* self, QKeyEvent* e);
    friend void KTextEdit_QBaseKeyReleaseEvent(KTextEdit* self, QKeyEvent* e);
    friend void KTextEdit_ResizeEvent(KTextEdit* self, QResizeEvent* e);
    friend void KTextEdit_QBaseResizeEvent(KTextEdit* self, QResizeEvent* e);
    friend void KTextEdit_PaintEvent(KTextEdit* self, QPaintEvent* e);
    friend void KTextEdit_QBasePaintEvent(KTextEdit* self, QPaintEvent* e);
    friend void KTextEdit_MousePressEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_QBaseMousePressEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_MouseMoveEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_QBaseMouseMoveEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_MouseReleaseEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_QBaseMouseReleaseEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_MouseDoubleClickEvent(KTextEdit* self, QMouseEvent* e);
    friend void KTextEdit_QBaseMouseDoubleClickEvent(KTextEdit* self, QMouseEvent* e);
    friend bool KTextEdit_FocusNextPrevChild(KTextEdit* self, bool next);
    friend bool KTextEdit_QBaseFocusNextPrevChild(KTextEdit* self, bool next);
    friend void KTextEdit_DragEnterEvent(KTextEdit* self, QDragEnterEvent* e);
    friend void KTextEdit_QBaseDragEnterEvent(KTextEdit* self, QDragEnterEvent* e);
    friend void KTextEdit_DragLeaveEvent(KTextEdit* self, QDragLeaveEvent* e);
    friend void KTextEdit_QBaseDragLeaveEvent(KTextEdit* self, QDragLeaveEvent* e);
    friend void KTextEdit_DragMoveEvent(KTextEdit* self, QDragMoveEvent* e);
    friend void KTextEdit_QBaseDragMoveEvent(KTextEdit* self, QDragMoveEvent* e);
    friend void KTextEdit_DropEvent(KTextEdit* self, QDropEvent* e);
    friend void KTextEdit_QBaseDropEvent(KTextEdit* self, QDropEvent* e);
    friend void KTextEdit_FocusOutEvent(KTextEdit* self, QFocusEvent* e);
    friend void KTextEdit_QBaseFocusOutEvent(KTextEdit* self, QFocusEvent* e);
    friend void KTextEdit_ShowEvent(KTextEdit* self, QShowEvent* param1);
    friend void KTextEdit_QBaseShowEvent(KTextEdit* self, QShowEvent* param1);
    friend void KTextEdit_ChangeEvent(KTextEdit* self, QEvent* e);
    friend void KTextEdit_QBaseChangeEvent(KTextEdit* self, QEvent* e);
    friend void KTextEdit_WheelEvent(KTextEdit* self, QWheelEvent* e);
    friend void KTextEdit_QBaseWheelEvent(KTextEdit* self, QWheelEvent* e);
    friend QMimeData* KTextEdit_CreateMimeDataFromSelection(const KTextEdit* self);
    friend QMimeData* KTextEdit_QBaseCreateMimeDataFromSelection(const KTextEdit* self);
    friend bool KTextEdit_CanInsertFromMimeData(const KTextEdit* self, const QMimeData* source);
    friend bool KTextEdit_QBaseCanInsertFromMimeData(const KTextEdit* self, const QMimeData* source);
    friend void KTextEdit_InsertFromMimeData(KTextEdit* self, const QMimeData* source);
    friend void KTextEdit_QBaseInsertFromMimeData(KTextEdit* self, const QMimeData* source);
    friend void KTextEdit_InputMethodEvent(KTextEdit* self, QInputMethodEvent* param1);
    friend void KTextEdit_QBaseInputMethodEvent(KTextEdit* self, QInputMethodEvent* param1);
    friend void KTextEdit_ScrollContentsBy(KTextEdit* self, int dx, int dy);
    friend void KTextEdit_QBaseScrollContentsBy(KTextEdit* self, int dx, int dy);
    friend void KTextEdit_DoSetTextCursor(KTextEdit* self, const QTextCursor* cursor);
    friend void KTextEdit_QBaseDoSetTextCursor(KTextEdit* self, const QTextCursor* cursor);
    friend bool KTextEdit_EventFilter(KTextEdit* self, QObject* param1, QEvent* param2);
    friend bool KTextEdit_QBaseEventFilter(KTextEdit* self, QObject* param1, QEvent* param2);
    friend bool KTextEdit_ViewportEvent(KTextEdit* self, QEvent* param1);
    friend bool KTextEdit_QBaseViewportEvent(KTextEdit* self, QEvent* param1);
    friend QSize* KTextEdit_ViewportSizeHint(const KTextEdit* self);
    friend QSize* KTextEdit_QBaseViewportSizeHint(const KTextEdit* self);
    friend void KTextEdit_InitStyleOption(const KTextEdit* self, QStyleOptionFrame* option);
    friend void KTextEdit_QBaseInitStyleOption(const KTextEdit* self, QStyleOptionFrame* option);
    friend void KTextEdit_EnterEvent(KTextEdit* self, QEnterEvent* event);
    friend void KTextEdit_QBaseEnterEvent(KTextEdit* self, QEnterEvent* event);
    friend void KTextEdit_LeaveEvent(KTextEdit* self, QEvent* event);
    friend void KTextEdit_QBaseLeaveEvent(KTextEdit* self, QEvent* event);
    friend void KTextEdit_MoveEvent(KTextEdit* self, QMoveEvent* event);
    friend void KTextEdit_QBaseMoveEvent(KTextEdit* self, QMoveEvent* event);
    friend void KTextEdit_CloseEvent(KTextEdit* self, QCloseEvent* event);
    friend void KTextEdit_QBaseCloseEvent(KTextEdit* self, QCloseEvent* event);
    friend void KTextEdit_TabletEvent(KTextEdit* self, QTabletEvent* event);
    friend void KTextEdit_QBaseTabletEvent(KTextEdit* self, QTabletEvent* event);
    friend void KTextEdit_ActionEvent(KTextEdit* self, QActionEvent* event);
    friend void KTextEdit_QBaseActionEvent(KTextEdit* self, QActionEvent* event);
    friend void KTextEdit_HideEvent(KTextEdit* self, QHideEvent* event);
    friend void KTextEdit_QBaseHideEvent(KTextEdit* self, QHideEvent* event);
    friend bool KTextEdit_NativeEvent(KTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KTextEdit_QBaseNativeEvent(KTextEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTextEdit_Metric(const KTextEdit* self, int param1);
    friend int KTextEdit_QBaseMetric(const KTextEdit* self, int param1);
    friend void KTextEdit_InitPainter(const KTextEdit* self, QPainter* painter);
    friend void KTextEdit_QBaseInitPainter(const KTextEdit* self, QPainter* painter);
    friend QPaintDevice* KTextEdit_Redirected(const KTextEdit* self, QPoint* offset);
    friend QPaintDevice* KTextEdit_QBaseRedirected(const KTextEdit* self, QPoint* offset);
    friend QPainter* KTextEdit_SharedPainter(const KTextEdit* self);
    friend QPainter* KTextEdit_QBaseSharedPainter(const KTextEdit* self);
    friend void KTextEdit_ChildEvent(KTextEdit* self, QChildEvent* event);
    friend void KTextEdit_QBaseChildEvent(KTextEdit* self, QChildEvent* event);
    friend void KTextEdit_CustomEvent(KTextEdit* self, QEvent* event);
    friend void KTextEdit_QBaseCustomEvent(KTextEdit* self, QEvent* event);
    friend void KTextEdit_ConnectNotify(KTextEdit* self, const QMetaMethod* signal);
    friend void KTextEdit_QBaseConnectNotify(KTextEdit* self, const QMetaMethod* signal);
    friend void KTextEdit_DisconnectNotify(KTextEdit* self, const QMetaMethod* signal);
    friend void KTextEdit_QBaseDisconnectNotify(KTextEdit* self, const QMetaMethod* signal);
    friend void KTextEdit_SlotDoReplace(KTextEdit* self);
    friend void KTextEdit_QBaseSlotDoReplace(KTextEdit* self);
    friend void KTextEdit_SlotReplaceNext(KTextEdit* self);
    friend void KTextEdit_QBaseSlotReplaceNext(KTextEdit* self);
    friend void KTextEdit_SlotDoFind(KTextEdit* self);
    friend void KTextEdit_QBaseSlotDoFind(KTextEdit* self);
    friend void KTextEdit_SlotFind(KTextEdit* self);
    friend void KTextEdit_QBaseSlotFind(KTextEdit* self);
    friend void KTextEdit_SlotFindNext(KTextEdit* self);
    friend void KTextEdit_QBaseSlotFindNext(KTextEdit* self);
    friend void KTextEdit_SlotFindPrevious(KTextEdit* self);
    friend void KTextEdit_QBaseSlotFindPrevious(KTextEdit* self);
    friend void KTextEdit_SlotReplace(KTextEdit* self);
    friend void KTextEdit_QBaseSlotReplace(KTextEdit* self);
    friend void KTextEdit_SlotSpeakText(KTextEdit* self);
    friend void KTextEdit_QBaseSlotSpeakText(KTextEdit* self);
    friend void KTextEdit_ZoomInF(KTextEdit* self, float range);
    friend void KTextEdit_QBaseZoomInF(KTextEdit* self, float range);
    friend void KTextEdit_SetViewportMargins(KTextEdit* self, int left, int top, int right, int bottom);
    friend void KTextEdit_QBaseSetViewportMargins(KTextEdit* self, int left, int top, int right, int bottom);
    friend QMargins* KTextEdit_ViewportMargins(const KTextEdit* self);
    friend QMargins* KTextEdit_QBaseViewportMargins(const KTextEdit* self);
    friend void KTextEdit_DrawFrame(KTextEdit* self, QPainter* param1);
    friend void KTextEdit_QBaseDrawFrame(KTextEdit* self, QPainter* param1);
    friend void KTextEdit_UpdateMicroFocus(KTextEdit* self);
    friend void KTextEdit_QBaseUpdateMicroFocus(KTextEdit* self);
    friend void KTextEdit_Create(KTextEdit* self);
    friend void KTextEdit_QBaseCreate(KTextEdit* self);
    friend void KTextEdit_Destroy(KTextEdit* self);
    friend void KTextEdit_QBaseDestroy(KTextEdit* self);
    friend bool KTextEdit_FocusNextChild(KTextEdit* self);
    friend bool KTextEdit_QBaseFocusNextChild(KTextEdit* self);
    friend bool KTextEdit_FocusPreviousChild(KTextEdit* self);
    friend bool KTextEdit_QBaseFocusPreviousChild(KTextEdit* self);
    friend QObject* KTextEdit_Sender(const KTextEdit* self);
    friend QObject* KTextEdit_QBaseSender(const KTextEdit* self);
    friend int KTextEdit_SenderSignalIndex(const KTextEdit* self);
    friend int KTextEdit_QBaseSenderSignalIndex(const KTextEdit* self);
    friend int KTextEdit_Receivers(const KTextEdit* self, const char* signal);
    friend int KTextEdit_QBaseReceivers(const KTextEdit* self, const char* signal);
    friend bool KTextEdit_IsSignalConnected(const KTextEdit* self, const QMetaMethod* signal);
    friend bool KTextEdit_QBaseIsSignalConnected(const KTextEdit* self, const QMetaMethod* signal);
    friend double KTextEdit_GetDecodedMetricF(const KTextEdit* self, int metricA, int metricB);
    friend double KTextEdit_QBaseGetDecodedMetricF(const KTextEdit* self, int metricA, int metricB);
};

#endif
