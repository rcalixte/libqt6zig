#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKDIROPERATOR_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKDIROPERATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDirOperator so that we can call protected methods
class VirtualKDirOperator final : public KDirOperator {

  public:
    // Virtual class boolean flag
    bool isVirtualKDirOperator = true;

    // Virtual class public types (including callbacks)
    using KDirOperator_Metacall_Callback = int (*)(KDirOperator*, int, int, void**);
    using KDirOperator_SetShowHiddenFiles_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SetUrl_Callback = void (*)(KDirOperator*, QUrl*, bool);
    using KDirOperator_SetMode_Callback = void (*)(KDirOperator*, int);
    using KDirOperator_SetPreviewWidget_Callback = void (*)(KDirOperator*, KPreviewWidgetBase*);
    using KDirOperator_SetViewConfig_Callback = void (*)(KDirOperator*, KConfigGroup*);
    using KDirOperator_ReadConfig_Callback = void (*)(KDirOperator*, KConfigGroup*);
    using KDirOperator_WriteConfig_Callback = void (*)(KDirOperator*, KConfigGroup*);
    using KDirOperator_Del_Callback = KIO__DeleteJob* (*)(KDirOperator*, KFileItemList*, QWidget*, bool, bool);
    using KDirOperator_SetEnableDirHighlighting_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SetAcceptDrops_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SetDropOptions_Callback = void (*)(KDirOperator*, int);
    using KDirOperator_Trash_Callback = KIO__CopyJob* (*)(KDirOperator*, KFileItemList*, QWidget*, bool, bool);
    using KDirOperator_CreateView_Callback = QAbstractItemView* (*)(KDirOperator*, QWidget*, int);
    using KDirOperator_SetDirLister_Callback = void (*)(KDirOperator*, KDirLister*);
    using KDirOperator_ResizeEvent_Callback = void (*)(KDirOperator*, QResizeEvent*);
    using KDirOperator_ActivatedMenu_Callback = void (*)(KDirOperator*, KFileItem*, QPoint*);
    using KDirOperator_ChangeEvent_Callback = void (*)(KDirOperator*, QEvent*);
    using KDirOperator_EventFilter_Callback = bool (*)(KDirOperator*, QObject*, QEvent*);
    using KDirOperator_Back_Callback = void (*)();
    using KDirOperator_Forward_Callback = void (*)();
    using KDirOperator_Home_Callback = void (*)();
    using KDirOperator_CdUp_Callback = void (*)();
    using KDirOperator_RereadDir_Callback = void (*)();
    using KDirOperator_Mkdir_Callback = void (*)();
    using KDirOperator_DeleteSelected_Callback = void (*)();
    using KDirOperator_TrashSelected_Callback = void (*)();
    using KDirOperator_SelectDir_Callback = void (*)(KDirOperator*, KFileItem*);
    using KDirOperator_DevType_Callback = int (*)();
    using KDirOperator_SetVisible_Callback = void (*)(KDirOperator*, bool);
    using KDirOperator_SizeHint_Callback = QSize* (*)();
    using KDirOperator_MinimumSizeHint_Callback = QSize* (*)();
    using KDirOperator_HeightForWidth_Callback = int (*)(const KDirOperator*, int);
    using KDirOperator_HasHeightForWidth_Callback = bool (*)();
    using KDirOperator_PaintEngine_Callback = QPaintEngine* (*)();
    using KDirOperator_Event_Callback = bool (*)(KDirOperator*, QEvent*);
    using KDirOperator_MousePressEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_MouseReleaseEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_MouseDoubleClickEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_MouseMoveEvent_Callback = void (*)(KDirOperator*, QMouseEvent*);
    using KDirOperator_WheelEvent_Callback = void (*)(KDirOperator*, QWheelEvent*);
    using KDirOperator_KeyPressEvent_Callback = void (*)(KDirOperator*, QKeyEvent*);
    using KDirOperator_KeyReleaseEvent_Callback = void (*)(KDirOperator*, QKeyEvent*);
    using KDirOperator_FocusInEvent_Callback = void (*)(KDirOperator*, QFocusEvent*);
    using KDirOperator_FocusOutEvent_Callback = void (*)(KDirOperator*, QFocusEvent*);
    using KDirOperator_EnterEvent_Callback = void (*)(KDirOperator*, QEnterEvent*);
    using KDirOperator_LeaveEvent_Callback = void (*)(KDirOperator*, QEvent*);
    using KDirOperator_PaintEvent_Callback = void (*)(KDirOperator*, QPaintEvent*);
    using KDirOperator_MoveEvent_Callback = void (*)(KDirOperator*, QMoveEvent*);
    using KDirOperator_CloseEvent_Callback = void (*)(KDirOperator*, QCloseEvent*);
    using KDirOperator_ContextMenuEvent_Callback = void (*)(KDirOperator*, QContextMenuEvent*);
    using KDirOperator_TabletEvent_Callback = void (*)(KDirOperator*, QTabletEvent*);
    using KDirOperator_ActionEvent_Callback = void (*)(KDirOperator*, QActionEvent*);
    using KDirOperator_DragEnterEvent_Callback = void (*)(KDirOperator*, QDragEnterEvent*);
    using KDirOperator_DragMoveEvent_Callback = void (*)(KDirOperator*, QDragMoveEvent*);
    using KDirOperator_DragLeaveEvent_Callback = void (*)(KDirOperator*, QDragLeaveEvent*);
    using KDirOperator_DropEvent_Callback = void (*)(KDirOperator*, QDropEvent*);
    using KDirOperator_ShowEvent_Callback = void (*)(KDirOperator*, QShowEvent*);
    using KDirOperator_HideEvent_Callback = void (*)(KDirOperator*, QHideEvent*);
    using KDirOperator_NativeEvent_Callback = bool (*)(KDirOperator*, libqt_string, void*, intptr_t*);
    using KDirOperator_Metric_Callback = int (*)(const KDirOperator*, int);
    using KDirOperator_InitPainter_Callback = void (*)(const KDirOperator*, QPainter*);
    using KDirOperator_Redirected_Callback = QPaintDevice* (*)(const KDirOperator*, QPoint*);
    using KDirOperator_SharedPainter_Callback = QPainter* (*)();
    using KDirOperator_InputMethodEvent_Callback = void (*)(KDirOperator*, QInputMethodEvent*);
    using KDirOperator_InputMethodQuery_Callback = QVariant* (*)(const KDirOperator*, int);
    using KDirOperator_FocusNextPrevChild_Callback = bool (*)(KDirOperator*, bool);
    using KDirOperator_TimerEvent_Callback = void (*)(KDirOperator*, QTimerEvent*);
    using KDirOperator_ChildEvent_Callback = void (*)(KDirOperator*, QChildEvent*);
    using KDirOperator_CustomEvent_Callback = void (*)(KDirOperator*, QEvent*);
    using KDirOperator_ConnectNotify_Callback = void (*)(KDirOperator*, QMetaMethod*);
    using KDirOperator_DisconnectNotify_Callback = void (*)(KDirOperator*, QMetaMethod*);
    using KDirOperator_SetupActions_Callback = void (*)();
    using KDirOperator_UpdateSortActions_Callback = void (*)();
    using KDirOperator_UpdateViewActions_Callback = void (*)();
    using KDirOperator_SetupMenu2_Callback = void (*)();
    using KDirOperator_PrepareCompletionObjects_Callback = void (*)();
    using KDirOperator_CheckPreviewSupport_Callback = bool (*)();
    using KDirOperator_ResetCursor_Callback = void (*)();
    using KDirOperator_PathChanged_Callback = void (*)();
    using KDirOperator_SelectFile_Callback = void (*)(KDirOperator*, KFileItem*);
    using KDirOperator_HighlightFile_Callback = void (*)(KDirOperator*, KFileItem*);
    using KDirOperator_SortByName_Callback = void (*)();
    using KDirOperator_SortBySize_Callback = void (*)();
    using KDirOperator_SortByDate_Callback = void (*)();
    using KDirOperator_SortByType_Callback = void (*)();
    using KDirOperator_SortReversed_Callback = void (*)();
    using KDirOperator_ToggleDirsFirst_Callback = void (*)();
    using KDirOperator_ToggleIgnoreCase_Callback = void (*)();
    using KDirOperator_SlotCompletionMatch_Callback = void (*)(KDirOperator*, libqt_string);
    using KDirOperator_UpdateMicroFocus_Callback = void (*)();
    using KDirOperator_Create_Callback = void (*)();
    using KDirOperator_Destroy_Callback = void (*)();
    using KDirOperator_FocusNextChild_Callback = bool (*)();
    using KDirOperator_FocusPreviousChild_Callback = bool (*)();
    using KDirOperator_Sender_Callback = QObject* (*)();
    using KDirOperator_SenderSignalIndex_Callback = int (*)();
    using KDirOperator_Receivers_Callback = int (*)(const KDirOperator*, const char*);
    using KDirOperator_IsSignalConnected_Callback = bool (*)(const KDirOperator*, QMetaMethod*);
    using KDirOperator_GetDecodedMetricF_Callback = double (*)(const KDirOperator*, int, int);

  protected:
    // Instance callback storage
    KDirOperator_Metacall_Callback kdiroperator_metacall_callback = nullptr;
    KDirOperator_SetShowHiddenFiles_Callback kdiroperator_setshowhiddenfiles_callback = nullptr;
    KDirOperator_SetUrl_Callback kdiroperator_seturl_callback = nullptr;
    KDirOperator_SetMode_Callback kdiroperator_setmode_callback = nullptr;
    KDirOperator_SetPreviewWidget_Callback kdiroperator_setpreviewwidget_callback = nullptr;
    KDirOperator_SetViewConfig_Callback kdiroperator_setviewconfig_callback = nullptr;
    KDirOperator_ReadConfig_Callback kdiroperator_readconfig_callback = nullptr;
    KDirOperator_WriteConfig_Callback kdiroperator_writeconfig_callback = nullptr;
    KDirOperator_Del_Callback kdiroperator_del_callback = nullptr;
    KDirOperator_SetEnableDirHighlighting_Callback kdiroperator_setenabledirhighlighting_callback = nullptr;
    KDirOperator_SetAcceptDrops_Callback kdiroperator_setacceptdrops_callback = nullptr;
    KDirOperator_SetDropOptions_Callback kdiroperator_setdropoptions_callback = nullptr;
    KDirOperator_Trash_Callback kdiroperator_trash_callback = nullptr;
    KDirOperator_CreateView_Callback kdiroperator_createview_callback = nullptr;
    KDirOperator_SetDirLister_Callback kdiroperator_setdirlister_callback = nullptr;
    KDirOperator_ResizeEvent_Callback kdiroperator_resizeevent_callback = nullptr;
    KDirOperator_ActivatedMenu_Callback kdiroperator_activatedmenu_callback = nullptr;
    KDirOperator_ChangeEvent_Callback kdiroperator_changeevent_callback = nullptr;
    KDirOperator_EventFilter_Callback kdiroperator_eventfilter_callback = nullptr;
    KDirOperator_Back_Callback kdiroperator_back_callback = nullptr;
    KDirOperator_Forward_Callback kdiroperator_forward_callback = nullptr;
    KDirOperator_Home_Callback kdiroperator_home_callback = nullptr;
    KDirOperator_CdUp_Callback kdiroperator_cdup_callback = nullptr;
    KDirOperator_RereadDir_Callback kdiroperator_rereaddir_callback = nullptr;
    KDirOperator_Mkdir_Callback kdiroperator_mkdir_callback = nullptr;
    KDirOperator_DeleteSelected_Callback kdiroperator_deleteselected_callback = nullptr;
    KDirOperator_TrashSelected_Callback kdiroperator_trashselected_callback = nullptr;
    KDirOperator_SelectDir_Callback kdiroperator_selectdir_callback = nullptr;
    KDirOperator_DevType_Callback kdiroperator_devtype_callback = nullptr;
    KDirOperator_SetVisible_Callback kdiroperator_setvisible_callback = nullptr;
    KDirOperator_SizeHint_Callback kdiroperator_sizehint_callback = nullptr;
    KDirOperator_MinimumSizeHint_Callback kdiroperator_minimumsizehint_callback = nullptr;
    KDirOperator_HeightForWidth_Callback kdiroperator_heightforwidth_callback = nullptr;
    KDirOperator_HasHeightForWidth_Callback kdiroperator_hasheightforwidth_callback = nullptr;
    KDirOperator_PaintEngine_Callback kdiroperator_paintengine_callback = nullptr;
    KDirOperator_Event_Callback kdiroperator_event_callback = nullptr;
    KDirOperator_MousePressEvent_Callback kdiroperator_mousepressevent_callback = nullptr;
    KDirOperator_MouseReleaseEvent_Callback kdiroperator_mousereleaseevent_callback = nullptr;
    KDirOperator_MouseDoubleClickEvent_Callback kdiroperator_mousedoubleclickevent_callback = nullptr;
    KDirOperator_MouseMoveEvent_Callback kdiroperator_mousemoveevent_callback = nullptr;
    KDirOperator_WheelEvent_Callback kdiroperator_wheelevent_callback = nullptr;
    KDirOperator_KeyPressEvent_Callback kdiroperator_keypressevent_callback = nullptr;
    KDirOperator_KeyReleaseEvent_Callback kdiroperator_keyreleaseevent_callback = nullptr;
    KDirOperator_FocusInEvent_Callback kdiroperator_focusinevent_callback = nullptr;
    KDirOperator_FocusOutEvent_Callback kdiroperator_focusoutevent_callback = nullptr;
    KDirOperator_EnterEvent_Callback kdiroperator_enterevent_callback = nullptr;
    KDirOperator_LeaveEvent_Callback kdiroperator_leaveevent_callback = nullptr;
    KDirOperator_PaintEvent_Callback kdiroperator_paintevent_callback = nullptr;
    KDirOperator_MoveEvent_Callback kdiroperator_moveevent_callback = nullptr;
    KDirOperator_CloseEvent_Callback kdiroperator_closeevent_callback = nullptr;
    KDirOperator_ContextMenuEvent_Callback kdiroperator_contextmenuevent_callback = nullptr;
    KDirOperator_TabletEvent_Callback kdiroperator_tabletevent_callback = nullptr;
    KDirOperator_ActionEvent_Callback kdiroperator_actionevent_callback = nullptr;
    KDirOperator_DragEnterEvent_Callback kdiroperator_dragenterevent_callback = nullptr;
    KDirOperator_DragMoveEvent_Callback kdiroperator_dragmoveevent_callback = nullptr;
    KDirOperator_DragLeaveEvent_Callback kdiroperator_dragleaveevent_callback = nullptr;
    KDirOperator_DropEvent_Callback kdiroperator_dropevent_callback = nullptr;
    KDirOperator_ShowEvent_Callback kdiroperator_showevent_callback = nullptr;
    KDirOperator_HideEvent_Callback kdiroperator_hideevent_callback = nullptr;
    KDirOperator_NativeEvent_Callback kdiroperator_nativeevent_callback = nullptr;
    KDirOperator_Metric_Callback kdiroperator_metric_callback = nullptr;
    KDirOperator_InitPainter_Callback kdiroperator_initpainter_callback = nullptr;
    KDirOperator_Redirected_Callback kdiroperator_redirected_callback = nullptr;
    KDirOperator_SharedPainter_Callback kdiroperator_sharedpainter_callback = nullptr;
    KDirOperator_InputMethodEvent_Callback kdiroperator_inputmethodevent_callback = nullptr;
    KDirOperator_InputMethodQuery_Callback kdiroperator_inputmethodquery_callback = nullptr;
    KDirOperator_FocusNextPrevChild_Callback kdiroperator_focusnextprevchild_callback = nullptr;
    KDirOperator_TimerEvent_Callback kdiroperator_timerevent_callback = nullptr;
    KDirOperator_ChildEvent_Callback kdiroperator_childevent_callback = nullptr;
    KDirOperator_CustomEvent_Callback kdiroperator_customevent_callback = nullptr;
    KDirOperator_ConnectNotify_Callback kdiroperator_connectnotify_callback = nullptr;
    KDirOperator_DisconnectNotify_Callback kdiroperator_disconnectnotify_callback = nullptr;
    KDirOperator_SetupActions_Callback kdiroperator_setupactions_callback = nullptr;
    KDirOperator_UpdateSortActions_Callback kdiroperator_updatesortactions_callback = nullptr;
    KDirOperator_UpdateViewActions_Callback kdiroperator_updateviewactions_callback = nullptr;
    KDirOperator_SetupMenu2_Callback kdiroperator_setupmenu2_callback = nullptr;
    KDirOperator_PrepareCompletionObjects_Callback kdiroperator_preparecompletionobjects_callback = nullptr;
    KDirOperator_CheckPreviewSupport_Callback kdiroperator_checkpreviewsupport_callback = nullptr;
    KDirOperator_ResetCursor_Callback kdiroperator_resetcursor_callback = nullptr;
    KDirOperator_PathChanged_Callback kdiroperator_pathchanged_callback = nullptr;
    KDirOperator_SelectFile_Callback kdiroperator_selectfile_callback = nullptr;
    KDirOperator_HighlightFile_Callback kdiroperator_highlightfile_callback = nullptr;
    KDirOperator_SortByName_Callback kdiroperator_sortbyname_callback = nullptr;
    KDirOperator_SortBySize_Callback kdiroperator_sortbysize_callback = nullptr;
    KDirOperator_SortByDate_Callback kdiroperator_sortbydate_callback = nullptr;
    KDirOperator_SortByType_Callback kdiroperator_sortbytype_callback = nullptr;
    KDirOperator_SortReversed_Callback kdiroperator_sortreversed_callback = nullptr;
    KDirOperator_ToggleDirsFirst_Callback kdiroperator_toggledirsfirst_callback = nullptr;
    KDirOperator_ToggleIgnoreCase_Callback kdiroperator_toggleignorecase_callback = nullptr;
    KDirOperator_SlotCompletionMatch_Callback kdiroperator_slotcompletionmatch_callback = nullptr;
    KDirOperator_UpdateMicroFocus_Callback kdiroperator_updatemicrofocus_callback = nullptr;
    KDirOperator_Create_Callback kdiroperator_create_callback = nullptr;
    KDirOperator_Destroy_Callback kdiroperator_destroy_callback = nullptr;
    KDirOperator_FocusNextChild_Callback kdiroperator_focusnextchild_callback = nullptr;
    KDirOperator_FocusPreviousChild_Callback kdiroperator_focuspreviouschild_callback = nullptr;
    KDirOperator_Sender_Callback kdiroperator_sender_callback = nullptr;
    KDirOperator_SenderSignalIndex_Callback kdiroperator_sendersignalindex_callback = nullptr;
    KDirOperator_Receivers_Callback kdiroperator_receivers_callback = nullptr;
    KDirOperator_IsSignalConnected_Callback kdiroperator_issignalconnected_callback = nullptr;
    KDirOperator_GetDecodedMetricF_Callback kdiroperator_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kdiroperator_metacall_isbase = false;
    mutable bool kdiroperator_setshowhiddenfiles_isbase = false;
    mutable bool kdiroperator_seturl_isbase = false;
    mutable bool kdiroperator_setmode_isbase = false;
    mutable bool kdiroperator_setpreviewwidget_isbase = false;
    mutable bool kdiroperator_setviewconfig_isbase = false;
    mutable bool kdiroperator_readconfig_isbase = false;
    mutable bool kdiroperator_writeconfig_isbase = false;
    mutable bool kdiroperator_del_isbase = false;
    mutable bool kdiroperator_setenabledirhighlighting_isbase = false;
    mutable bool kdiroperator_setacceptdrops_isbase = false;
    mutable bool kdiroperator_setdropoptions_isbase = false;
    mutable bool kdiroperator_trash_isbase = false;
    mutable bool kdiroperator_createview_isbase = false;
    mutable bool kdiroperator_setdirlister_isbase = false;
    mutable bool kdiroperator_resizeevent_isbase = false;
    mutable bool kdiroperator_activatedmenu_isbase = false;
    mutable bool kdiroperator_changeevent_isbase = false;
    mutable bool kdiroperator_eventfilter_isbase = false;
    mutable bool kdiroperator_back_isbase = false;
    mutable bool kdiroperator_forward_isbase = false;
    mutable bool kdiroperator_home_isbase = false;
    mutable bool kdiroperator_cdup_isbase = false;
    mutable bool kdiroperator_rereaddir_isbase = false;
    mutable bool kdiroperator_mkdir_isbase = false;
    mutable bool kdiroperator_deleteselected_isbase = false;
    mutable bool kdiroperator_trashselected_isbase = false;
    mutable bool kdiroperator_selectdir_isbase = false;
    mutable bool kdiroperator_devtype_isbase = false;
    mutable bool kdiroperator_setvisible_isbase = false;
    mutable bool kdiroperator_sizehint_isbase = false;
    mutable bool kdiroperator_minimumsizehint_isbase = false;
    mutable bool kdiroperator_heightforwidth_isbase = false;
    mutable bool kdiroperator_hasheightforwidth_isbase = false;
    mutable bool kdiroperator_paintengine_isbase = false;
    mutable bool kdiroperator_event_isbase = false;
    mutable bool kdiroperator_mousepressevent_isbase = false;
    mutable bool kdiroperator_mousereleaseevent_isbase = false;
    mutable bool kdiroperator_mousedoubleclickevent_isbase = false;
    mutable bool kdiroperator_mousemoveevent_isbase = false;
    mutable bool kdiroperator_wheelevent_isbase = false;
    mutable bool kdiroperator_keypressevent_isbase = false;
    mutable bool kdiroperator_keyreleaseevent_isbase = false;
    mutable bool kdiroperator_focusinevent_isbase = false;
    mutable bool kdiroperator_focusoutevent_isbase = false;
    mutable bool kdiroperator_enterevent_isbase = false;
    mutable bool kdiroperator_leaveevent_isbase = false;
    mutable bool kdiroperator_paintevent_isbase = false;
    mutable bool kdiroperator_moveevent_isbase = false;
    mutable bool kdiroperator_closeevent_isbase = false;
    mutable bool kdiroperator_contextmenuevent_isbase = false;
    mutable bool kdiroperator_tabletevent_isbase = false;
    mutable bool kdiroperator_actionevent_isbase = false;
    mutable bool kdiroperator_dragenterevent_isbase = false;
    mutable bool kdiroperator_dragmoveevent_isbase = false;
    mutable bool kdiroperator_dragleaveevent_isbase = false;
    mutable bool kdiroperator_dropevent_isbase = false;
    mutable bool kdiroperator_showevent_isbase = false;
    mutable bool kdiroperator_hideevent_isbase = false;
    mutable bool kdiroperator_nativeevent_isbase = false;
    mutable bool kdiroperator_metric_isbase = false;
    mutable bool kdiroperator_initpainter_isbase = false;
    mutable bool kdiroperator_redirected_isbase = false;
    mutable bool kdiroperator_sharedpainter_isbase = false;
    mutable bool kdiroperator_inputmethodevent_isbase = false;
    mutable bool kdiroperator_inputmethodquery_isbase = false;
    mutable bool kdiroperator_focusnextprevchild_isbase = false;
    mutable bool kdiroperator_timerevent_isbase = false;
    mutable bool kdiroperator_childevent_isbase = false;
    mutable bool kdiroperator_customevent_isbase = false;
    mutable bool kdiroperator_connectnotify_isbase = false;
    mutable bool kdiroperator_disconnectnotify_isbase = false;
    mutable bool kdiroperator_setupactions_isbase = false;
    mutable bool kdiroperator_updatesortactions_isbase = false;
    mutable bool kdiroperator_updateviewactions_isbase = false;
    mutable bool kdiroperator_setupmenu2_isbase = false;
    mutable bool kdiroperator_preparecompletionobjects_isbase = false;
    mutable bool kdiroperator_checkpreviewsupport_isbase = false;
    mutable bool kdiroperator_resetcursor_isbase = false;
    mutable bool kdiroperator_pathchanged_isbase = false;
    mutable bool kdiroperator_selectfile_isbase = false;
    mutable bool kdiroperator_highlightfile_isbase = false;
    mutable bool kdiroperator_sortbyname_isbase = false;
    mutable bool kdiroperator_sortbysize_isbase = false;
    mutable bool kdiroperator_sortbydate_isbase = false;
    mutable bool kdiroperator_sortbytype_isbase = false;
    mutable bool kdiroperator_sortreversed_isbase = false;
    mutable bool kdiroperator_toggledirsfirst_isbase = false;
    mutable bool kdiroperator_toggleignorecase_isbase = false;
    mutable bool kdiroperator_slotcompletionmatch_isbase = false;
    mutable bool kdiroperator_updatemicrofocus_isbase = false;
    mutable bool kdiroperator_create_isbase = false;
    mutable bool kdiroperator_destroy_isbase = false;
    mutable bool kdiroperator_focusnextchild_isbase = false;
    mutable bool kdiroperator_focuspreviouschild_isbase = false;
    mutable bool kdiroperator_sender_isbase = false;
    mutable bool kdiroperator_sendersignalindex_isbase = false;
    mutable bool kdiroperator_receivers_isbase = false;
    mutable bool kdiroperator_issignalconnected_isbase = false;
    mutable bool kdiroperator_getdecodedmetricf_isbase = false;

  public:
    VirtualKDirOperator() : KDirOperator() {};
    VirtualKDirOperator(const QUrl& urlName) : KDirOperator(urlName) {};
    VirtualKDirOperator(const QUrl& urlName, QWidget* parent) : KDirOperator(urlName, parent) {};

    ~VirtualKDirOperator() {
        kdiroperator_metacall_callback = nullptr;
        kdiroperator_setshowhiddenfiles_callback = nullptr;
        kdiroperator_seturl_callback = nullptr;
        kdiroperator_setmode_callback = nullptr;
        kdiroperator_setpreviewwidget_callback = nullptr;
        kdiroperator_setviewconfig_callback = nullptr;
        kdiroperator_readconfig_callback = nullptr;
        kdiroperator_writeconfig_callback = nullptr;
        kdiroperator_del_callback = nullptr;
        kdiroperator_setenabledirhighlighting_callback = nullptr;
        kdiroperator_setacceptdrops_callback = nullptr;
        kdiroperator_setdropoptions_callback = nullptr;
        kdiroperator_trash_callback = nullptr;
        kdiroperator_createview_callback = nullptr;
        kdiroperator_setdirlister_callback = nullptr;
        kdiroperator_resizeevent_callback = nullptr;
        kdiroperator_activatedmenu_callback = nullptr;
        kdiroperator_changeevent_callback = nullptr;
        kdiroperator_eventfilter_callback = nullptr;
        kdiroperator_back_callback = nullptr;
        kdiroperator_forward_callback = nullptr;
        kdiroperator_home_callback = nullptr;
        kdiroperator_cdup_callback = nullptr;
        kdiroperator_rereaddir_callback = nullptr;
        kdiroperator_mkdir_callback = nullptr;
        kdiroperator_deleteselected_callback = nullptr;
        kdiroperator_trashselected_callback = nullptr;
        kdiroperator_selectdir_callback = nullptr;
        kdiroperator_devtype_callback = nullptr;
        kdiroperator_setvisible_callback = nullptr;
        kdiroperator_sizehint_callback = nullptr;
        kdiroperator_minimumsizehint_callback = nullptr;
        kdiroperator_heightforwidth_callback = nullptr;
        kdiroperator_hasheightforwidth_callback = nullptr;
        kdiroperator_paintengine_callback = nullptr;
        kdiroperator_event_callback = nullptr;
        kdiroperator_mousepressevent_callback = nullptr;
        kdiroperator_mousereleaseevent_callback = nullptr;
        kdiroperator_mousedoubleclickevent_callback = nullptr;
        kdiroperator_mousemoveevent_callback = nullptr;
        kdiroperator_wheelevent_callback = nullptr;
        kdiroperator_keypressevent_callback = nullptr;
        kdiroperator_keyreleaseevent_callback = nullptr;
        kdiroperator_focusinevent_callback = nullptr;
        kdiroperator_focusoutevent_callback = nullptr;
        kdiroperator_enterevent_callback = nullptr;
        kdiroperator_leaveevent_callback = nullptr;
        kdiroperator_paintevent_callback = nullptr;
        kdiroperator_moveevent_callback = nullptr;
        kdiroperator_closeevent_callback = nullptr;
        kdiroperator_contextmenuevent_callback = nullptr;
        kdiroperator_tabletevent_callback = nullptr;
        kdiroperator_actionevent_callback = nullptr;
        kdiroperator_dragenterevent_callback = nullptr;
        kdiroperator_dragmoveevent_callback = nullptr;
        kdiroperator_dragleaveevent_callback = nullptr;
        kdiroperator_dropevent_callback = nullptr;
        kdiroperator_showevent_callback = nullptr;
        kdiroperator_hideevent_callback = nullptr;
        kdiroperator_nativeevent_callback = nullptr;
        kdiroperator_metric_callback = nullptr;
        kdiroperator_initpainter_callback = nullptr;
        kdiroperator_redirected_callback = nullptr;
        kdiroperator_sharedpainter_callback = nullptr;
        kdiroperator_inputmethodevent_callback = nullptr;
        kdiroperator_inputmethodquery_callback = nullptr;
        kdiroperator_focusnextprevchild_callback = nullptr;
        kdiroperator_timerevent_callback = nullptr;
        kdiroperator_childevent_callback = nullptr;
        kdiroperator_customevent_callback = nullptr;
        kdiroperator_connectnotify_callback = nullptr;
        kdiroperator_disconnectnotify_callback = nullptr;
        kdiroperator_setupactions_callback = nullptr;
        kdiroperator_updatesortactions_callback = nullptr;
        kdiroperator_updateviewactions_callback = nullptr;
        kdiroperator_setupmenu2_callback = nullptr;
        kdiroperator_preparecompletionobjects_callback = nullptr;
        kdiroperator_checkpreviewsupport_callback = nullptr;
        kdiroperator_resetcursor_callback = nullptr;
        kdiroperator_pathchanged_callback = nullptr;
        kdiroperator_selectfile_callback = nullptr;
        kdiroperator_highlightfile_callback = nullptr;
        kdiroperator_sortbyname_callback = nullptr;
        kdiroperator_sortbysize_callback = nullptr;
        kdiroperator_sortbydate_callback = nullptr;
        kdiroperator_sortbytype_callback = nullptr;
        kdiroperator_sortreversed_callback = nullptr;
        kdiroperator_toggledirsfirst_callback = nullptr;
        kdiroperator_toggleignorecase_callback = nullptr;
        kdiroperator_slotcompletionmatch_callback = nullptr;
        kdiroperator_updatemicrofocus_callback = nullptr;
        kdiroperator_create_callback = nullptr;
        kdiroperator_destroy_callback = nullptr;
        kdiroperator_focusnextchild_callback = nullptr;
        kdiroperator_focuspreviouschild_callback = nullptr;
        kdiroperator_sender_callback = nullptr;
        kdiroperator_sendersignalindex_callback = nullptr;
        kdiroperator_receivers_callback = nullptr;
        kdiroperator_issignalconnected_callback = nullptr;
        kdiroperator_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKDirOperator_Metacall_Callback(KDirOperator_Metacall_Callback cb) { kdiroperator_metacall_callback = cb; }
    inline void setKDirOperator_SetShowHiddenFiles_Callback(KDirOperator_SetShowHiddenFiles_Callback cb) { kdiroperator_setshowhiddenfiles_callback = cb; }
    inline void setKDirOperator_SetUrl_Callback(KDirOperator_SetUrl_Callback cb) { kdiroperator_seturl_callback = cb; }
    inline void setKDirOperator_SetMode_Callback(KDirOperator_SetMode_Callback cb) { kdiroperator_setmode_callback = cb; }
    inline void setKDirOperator_SetPreviewWidget_Callback(KDirOperator_SetPreviewWidget_Callback cb) { kdiroperator_setpreviewwidget_callback = cb; }
    inline void setKDirOperator_SetViewConfig_Callback(KDirOperator_SetViewConfig_Callback cb) { kdiroperator_setviewconfig_callback = cb; }
    inline void setKDirOperator_ReadConfig_Callback(KDirOperator_ReadConfig_Callback cb) { kdiroperator_readconfig_callback = cb; }
    inline void setKDirOperator_WriteConfig_Callback(KDirOperator_WriteConfig_Callback cb) { kdiroperator_writeconfig_callback = cb; }
    inline void setKDirOperator_Del_Callback(KDirOperator_Del_Callback cb) { kdiroperator_del_callback = cb; }
    inline void setKDirOperator_SetEnableDirHighlighting_Callback(KDirOperator_SetEnableDirHighlighting_Callback cb) { kdiroperator_setenabledirhighlighting_callback = cb; }
    inline void setKDirOperator_SetAcceptDrops_Callback(KDirOperator_SetAcceptDrops_Callback cb) { kdiroperator_setacceptdrops_callback = cb; }
    inline void setKDirOperator_SetDropOptions_Callback(KDirOperator_SetDropOptions_Callback cb) { kdiroperator_setdropoptions_callback = cb; }
    inline void setKDirOperator_Trash_Callback(KDirOperator_Trash_Callback cb) { kdiroperator_trash_callback = cb; }
    inline void setKDirOperator_CreateView_Callback(KDirOperator_CreateView_Callback cb) { kdiroperator_createview_callback = cb; }
    inline void setKDirOperator_SetDirLister_Callback(KDirOperator_SetDirLister_Callback cb) { kdiroperator_setdirlister_callback = cb; }
    inline void setKDirOperator_ResizeEvent_Callback(KDirOperator_ResizeEvent_Callback cb) { kdiroperator_resizeevent_callback = cb; }
    inline void setKDirOperator_ActivatedMenu_Callback(KDirOperator_ActivatedMenu_Callback cb) { kdiroperator_activatedmenu_callback = cb; }
    inline void setKDirOperator_ChangeEvent_Callback(KDirOperator_ChangeEvent_Callback cb) { kdiroperator_changeevent_callback = cb; }
    inline void setKDirOperator_EventFilter_Callback(KDirOperator_EventFilter_Callback cb) { kdiroperator_eventfilter_callback = cb; }
    inline void setKDirOperator_Back_Callback(KDirOperator_Back_Callback cb) { kdiroperator_back_callback = cb; }
    inline void setKDirOperator_Forward_Callback(KDirOperator_Forward_Callback cb) { kdiroperator_forward_callback = cb; }
    inline void setKDirOperator_Home_Callback(KDirOperator_Home_Callback cb) { kdiroperator_home_callback = cb; }
    inline void setKDirOperator_CdUp_Callback(KDirOperator_CdUp_Callback cb) { kdiroperator_cdup_callback = cb; }
    inline void setKDirOperator_RereadDir_Callback(KDirOperator_RereadDir_Callback cb) { kdiroperator_rereaddir_callback = cb; }
    inline void setKDirOperator_Mkdir_Callback(KDirOperator_Mkdir_Callback cb) { kdiroperator_mkdir_callback = cb; }
    inline void setKDirOperator_DeleteSelected_Callback(KDirOperator_DeleteSelected_Callback cb) { kdiroperator_deleteselected_callback = cb; }
    inline void setKDirOperator_TrashSelected_Callback(KDirOperator_TrashSelected_Callback cb) { kdiroperator_trashselected_callback = cb; }
    inline void setKDirOperator_SelectDir_Callback(KDirOperator_SelectDir_Callback cb) { kdiroperator_selectdir_callback = cb; }
    inline void setKDirOperator_DevType_Callback(KDirOperator_DevType_Callback cb) { kdiroperator_devtype_callback = cb; }
    inline void setKDirOperator_SetVisible_Callback(KDirOperator_SetVisible_Callback cb) { kdiroperator_setvisible_callback = cb; }
    inline void setKDirOperator_SizeHint_Callback(KDirOperator_SizeHint_Callback cb) { kdiroperator_sizehint_callback = cb; }
    inline void setKDirOperator_MinimumSizeHint_Callback(KDirOperator_MinimumSizeHint_Callback cb) { kdiroperator_minimumsizehint_callback = cb; }
    inline void setKDirOperator_HeightForWidth_Callback(KDirOperator_HeightForWidth_Callback cb) { kdiroperator_heightforwidth_callback = cb; }
    inline void setKDirOperator_HasHeightForWidth_Callback(KDirOperator_HasHeightForWidth_Callback cb) { kdiroperator_hasheightforwidth_callback = cb; }
    inline void setKDirOperator_PaintEngine_Callback(KDirOperator_PaintEngine_Callback cb) { kdiroperator_paintengine_callback = cb; }
    inline void setKDirOperator_Event_Callback(KDirOperator_Event_Callback cb) { kdiroperator_event_callback = cb; }
    inline void setKDirOperator_MousePressEvent_Callback(KDirOperator_MousePressEvent_Callback cb) { kdiroperator_mousepressevent_callback = cb; }
    inline void setKDirOperator_MouseReleaseEvent_Callback(KDirOperator_MouseReleaseEvent_Callback cb) { kdiroperator_mousereleaseevent_callback = cb; }
    inline void setKDirOperator_MouseDoubleClickEvent_Callback(KDirOperator_MouseDoubleClickEvent_Callback cb) { kdiroperator_mousedoubleclickevent_callback = cb; }
    inline void setKDirOperator_MouseMoveEvent_Callback(KDirOperator_MouseMoveEvent_Callback cb) { kdiroperator_mousemoveevent_callback = cb; }
    inline void setKDirOperator_WheelEvent_Callback(KDirOperator_WheelEvent_Callback cb) { kdiroperator_wheelevent_callback = cb; }
    inline void setKDirOperator_KeyPressEvent_Callback(KDirOperator_KeyPressEvent_Callback cb) { kdiroperator_keypressevent_callback = cb; }
    inline void setKDirOperator_KeyReleaseEvent_Callback(KDirOperator_KeyReleaseEvent_Callback cb) { kdiroperator_keyreleaseevent_callback = cb; }
    inline void setKDirOperator_FocusInEvent_Callback(KDirOperator_FocusInEvent_Callback cb) { kdiroperator_focusinevent_callback = cb; }
    inline void setKDirOperator_FocusOutEvent_Callback(KDirOperator_FocusOutEvent_Callback cb) { kdiroperator_focusoutevent_callback = cb; }
    inline void setKDirOperator_EnterEvent_Callback(KDirOperator_EnterEvent_Callback cb) { kdiroperator_enterevent_callback = cb; }
    inline void setKDirOperator_LeaveEvent_Callback(KDirOperator_LeaveEvent_Callback cb) { kdiroperator_leaveevent_callback = cb; }
    inline void setKDirOperator_PaintEvent_Callback(KDirOperator_PaintEvent_Callback cb) { kdiroperator_paintevent_callback = cb; }
    inline void setKDirOperator_MoveEvent_Callback(KDirOperator_MoveEvent_Callback cb) { kdiroperator_moveevent_callback = cb; }
    inline void setKDirOperator_CloseEvent_Callback(KDirOperator_CloseEvent_Callback cb) { kdiroperator_closeevent_callback = cb; }
    inline void setKDirOperator_ContextMenuEvent_Callback(KDirOperator_ContextMenuEvent_Callback cb) { kdiroperator_contextmenuevent_callback = cb; }
    inline void setKDirOperator_TabletEvent_Callback(KDirOperator_TabletEvent_Callback cb) { kdiroperator_tabletevent_callback = cb; }
    inline void setKDirOperator_ActionEvent_Callback(KDirOperator_ActionEvent_Callback cb) { kdiroperator_actionevent_callback = cb; }
    inline void setKDirOperator_DragEnterEvent_Callback(KDirOperator_DragEnterEvent_Callback cb) { kdiroperator_dragenterevent_callback = cb; }
    inline void setKDirOperator_DragMoveEvent_Callback(KDirOperator_DragMoveEvent_Callback cb) { kdiroperator_dragmoveevent_callback = cb; }
    inline void setKDirOperator_DragLeaveEvent_Callback(KDirOperator_DragLeaveEvent_Callback cb) { kdiroperator_dragleaveevent_callback = cb; }
    inline void setKDirOperator_DropEvent_Callback(KDirOperator_DropEvent_Callback cb) { kdiroperator_dropevent_callback = cb; }
    inline void setKDirOperator_ShowEvent_Callback(KDirOperator_ShowEvent_Callback cb) { kdiroperator_showevent_callback = cb; }
    inline void setKDirOperator_HideEvent_Callback(KDirOperator_HideEvent_Callback cb) { kdiroperator_hideevent_callback = cb; }
    inline void setKDirOperator_NativeEvent_Callback(KDirOperator_NativeEvent_Callback cb) { kdiroperator_nativeevent_callback = cb; }
    inline void setKDirOperator_Metric_Callback(KDirOperator_Metric_Callback cb) { kdiroperator_metric_callback = cb; }
    inline void setKDirOperator_InitPainter_Callback(KDirOperator_InitPainter_Callback cb) { kdiroperator_initpainter_callback = cb; }
    inline void setKDirOperator_Redirected_Callback(KDirOperator_Redirected_Callback cb) { kdiroperator_redirected_callback = cb; }
    inline void setKDirOperator_SharedPainter_Callback(KDirOperator_SharedPainter_Callback cb) { kdiroperator_sharedpainter_callback = cb; }
    inline void setKDirOperator_InputMethodEvent_Callback(KDirOperator_InputMethodEvent_Callback cb) { kdiroperator_inputmethodevent_callback = cb; }
    inline void setKDirOperator_InputMethodQuery_Callback(KDirOperator_InputMethodQuery_Callback cb) { kdiroperator_inputmethodquery_callback = cb; }
    inline void setKDirOperator_FocusNextPrevChild_Callback(KDirOperator_FocusNextPrevChild_Callback cb) { kdiroperator_focusnextprevchild_callback = cb; }
    inline void setKDirOperator_TimerEvent_Callback(KDirOperator_TimerEvent_Callback cb) { kdiroperator_timerevent_callback = cb; }
    inline void setKDirOperator_ChildEvent_Callback(KDirOperator_ChildEvent_Callback cb) { kdiroperator_childevent_callback = cb; }
    inline void setKDirOperator_CustomEvent_Callback(KDirOperator_CustomEvent_Callback cb) { kdiroperator_customevent_callback = cb; }
    inline void setKDirOperator_ConnectNotify_Callback(KDirOperator_ConnectNotify_Callback cb) { kdiroperator_connectnotify_callback = cb; }
    inline void setKDirOperator_DisconnectNotify_Callback(KDirOperator_DisconnectNotify_Callback cb) { kdiroperator_disconnectnotify_callback = cb; }
    inline void setKDirOperator_SetupActions_Callback(KDirOperator_SetupActions_Callback cb) { kdiroperator_setupactions_callback = cb; }
    inline void setKDirOperator_UpdateSortActions_Callback(KDirOperator_UpdateSortActions_Callback cb) { kdiroperator_updatesortactions_callback = cb; }
    inline void setKDirOperator_UpdateViewActions_Callback(KDirOperator_UpdateViewActions_Callback cb) { kdiroperator_updateviewactions_callback = cb; }
    inline void setKDirOperator_SetupMenu2_Callback(KDirOperator_SetupMenu2_Callback cb) { kdiroperator_setupmenu2_callback = cb; }
    inline void setKDirOperator_PrepareCompletionObjects_Callback(KDirOperator_PrepareCompletionObjects_Callback cb) { kdiroperator_preparecompletionobjects_callback = cb; }
    inline void setKDirOperator_CheckPreviewSupport_Callback(KDirOperator_CheckPreviewSupport_Callback cb) { kdiroperator_checkpreviewsupport_callback = cb; }
    inline void setKDirOperator_ResetCursor_Callback(KDirOperator_ResetCursor_Callback cb) { kdiroperator_resetcursor_callback = cb; }
    inline void setKDirOperator_PathChanged_Callback(KDirOperator_PathChanged_Callback cb) { kdiroperator_pathchanged_callback = cb; }
    inline void setKDirOperator_SelectFile_Callback(KDirOperator_SelectFile_Callback cb) { kdiroperator_selectfile_callback = cb; }
    inline void setKDirOperator_HighlightFile_Callback(KDirOperator_HighlightFile_Callback cb) { kdiroperator_highlightfile_callback = cb; }
    inline void setKDirOperator_SortByName_Callback(KDirOperator_SortByName_Callback cb) { kdiroperator_sortbyname_callback = cb; }
    inline void setKDirOperator_SortBySize_Callback(KDirOperator_SortBySize_Callback cb) { kdiroperator_sortbysize_callback = cb; }
    inline void setKDirOperator_SortByDate_Callback(KDirOperator_SortByDate_Callback cb) { kdiroperator_sortbydate_callback = cb; }
    inline void setKDirOperator_SortByType_Callback(KDirOperator_SortByType_Callback cb) { kdiroperator_sortbytype_callback = cb; }
    inline void setKDirOperator_SortReversed_Callback(KDirOperator_SortReversed_Callback cb) { kdiroperator_sortreversed_callback = cb; }
    inline void setKDirOperator_ToggleDirsFirst_Callback(KDirOperator_ToggleDirsFirst_Callback cb) { kdiroperator_toggledirsfirst_callback = cb; }
    inline void setKDirOperator_ToggleIgnoreCase_Callback(KDirOperator_ToggleIgnoreCase_Callback cb) { kdiroperator_toggleignorecase_callback = cb; }
    inline void setKDirOperator_SlotCompletionMatch_Callback(KDirOperator_SlotCompletionMatch_Callback cb) { kdiroperator_slotcompletionmatch_callback = cb; }
    inline void setKDirOperator_UpdateMicroFocus_Callback(KDirOperator_UpdateMicroFocus_Callback cb) { kdiroperator_updatemicrofocus_callback = cb; }
    inline void setKDirOperator_Create_Callback(KDirOperator_Create_Callback cb) { kdiroperator_create_callback = cb; }
    inline void setKDirOperator_Destroy_Callback(KDirOperator_Destroy_Callback cb) { kdiroperator_destroy_callback = cb; }
    inline void setKDirOperator_FocusNextChild_Callback(KDirOperator_FocusNextChild_Callback cb) { kdiroperator_focusnextchild_callback = cb; }
    inline void setKDirOperator_FocusPreviousChild_Callback(KDirOperator_FocusPreviousChild_Callback cb) { kdiroperator_focuspreviouschild_callback = cb; }
    inline void setKDirOperator_Sender_Callback(KDirOperator_Sender_Callback cb) { kdiroperator_sender_callback = cb; }
    inline void setKDirOperator_SenderSignalIndex_Callback(KDirOperator_SenderSignalIndex_Callback cb) { kdiroperator_sendersignalindex_callback = cb; }
    inline void setKDirOperator_Receivers_Callback(KDirOperator_Receivers_Callback cb) { kdiroperator_receivers_callback = cb; }
    inline void setKDirOperator_IsSignalConnected_Callback(KDirOperator_IsSignalConnected_Callback cb) { kdiroperator_issignalconnected_callback = cb; }
    inline void setKDirOperator_GetDecodedMetricF_Callback(KDirOperator_GetDecodedMetricF_Callback cb) { kdiroperator_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKDirOperator_Metacall_IsBase(bool value) const { kdiroperator_metacall_isbase = value; }
    inline void setKDirOperator_SetShowHiddenFiles_IsBase(bool value) const { kdiroperator_setshowhiddenfiles_isbase = value; }
    inline void setKDirOperator_SetUrl_IsBase(bool value) const { kdiroperator_seturl_isbase = value; }
    inline void setKDirOperator_SetMode_IsBase(bool value) const { kdiroperator_setmode_isbase = value; }
    inline void setKDirOperator_SetPreviewWidget_IsBase(bool value) const { kdiroperator_setpreviewwidget_isbase = value; }
    inline void setKDirOperator_SetViewConfig_IsBase(bool value) const { kdiroperator_setviewconfig_isbase = value; }
    inline void setKDirOperator_ReadConfig_IsBase(bool value) const { kdiroperator_readconfig_isbase = value; }
    inline void setKDirOperator_WriteConfig_IsBase(bool value) const { kdiroperator_writeconfig_isbase = value; }
    inline void setKDirOperator_Del_IsBase(bool value) const { kdiroperator_del_isbase = value; }
    inline void setKDirOperator_SetEnableDirHighlighting_IsBase(bool value) const { kdiroperator_setenabledirhighlighting_isbase = value; }
    inline void setKDirOperator_SetAcceptDrops_IsBase(bool value) const { kdiroperator_setacceptdrops_isbase = value; }
    inline void setKDirOperator_SetDropOptions_IsBase(bool value) const { kdiroperator_setdropoptions_isbase = value; }
    inline void setKDirOperator_Trash_IsBase(bool value) const { kdiroperator_trash_isbase = value; }
    inline void setKDirOperator_CreateView_IsBase(bool value) const { kdiroperator_createview_isbase = value; }
    inline void setKDirOperator_SetDirLister_IsBase(bool value) const { kdiroperator_setdirlister_isbase = value; }
    inline void setKDirOperator_ResizeEvent_IsBase(bool value) const { kdiroperator_resizeevent_isbase = value; }
    inline void setKDirOperator_ActivatedMenu_IsBase(bool value) const { kdiroperator_activatedmenu_isbase = value; }
    inline void setKDirOperator_ChangeEvent_IsBase(bool value) const { kdiroperator_changeevent_isbase = value; }
    inline void setKDirOperator_EventFilter_IsBase(bool value) const { kdiroperator_eventfilter_isbase = value; }
    inline void setKDirOperator_Back_IsBase(bool value) const { kdiroperator_back_isbase = value; }
    inline void setKDirOperator_Forward_IsBase(bool value) const { kdiroperator_forward_isbase = value; }
    inline void setKDirOperator_Home_IsBase(bool value) const { kdiroperator_home_isbase = value; }
    inline void setKDirOperator_CdUp_IsBase(bool value) const { kdiroperator_cdup_isbase = value; }
    inline void setKDirOperator_RereadDir_IsBase(bool value) const { kdiroperator_rereaddir_isbase = value; }
    inline void setKDirOperator_Mkdir_IsBase(bool value) const { kdiroperator_mkdir_isbase = value; }
    inline void setKDirOperator_DeleteSelected_IsBase(bool value) const { kdiroperator_deleteselected_isbase = value; }
    inline void setKDirOperator_TrashSelected_IsBase(bool value) const { kdiroperator_trashselected_isbase = value; }
    inline void setKDirOperator_SelectDir_IsBase(bool value) const { kdiroperator_selectdir_isbase = value; }
    inline void setKDirOperator_DevType_IsBase(bool value) const { kdiroperator_devtype_isbase = value; }
    inline void setKDirOperator_SetVisible_IsBase(bool value) const { kdiroperator_setvisible_isbase = value; }
    inline void setKDirOperator_SizeHint_IsBase(bool value) const { kdiroperator_sizehint_isbase = value; }
    inline void setKDirOperator_MinimumSizeHint_IsBase(bool value) const { kdiroperator_minimumsizehint_isbase = value; }
    inline void setKDirOperator_HeightForWidth_IsBase(bool value) const { kdiroperator_heightforwidth_isbase = value; }
    inline void setKDirOperator_HasHeightForWidth_IsBase(bool value) const { kdiroperator_hasheightforwidth_isbase = value; }
    inline void setKDirOperator_PaintEngine_IsBase(bool value) const { kdiroperator_paintengine_isbase = value; }
    inline void setKDirOperator_Event_IsBase(bool value) const { kdiroperator_event_isbase = value; }
    inline void setKDirOperator_MousePressEvent_IsBase(bool value) const { kdiroperator_mousepressevent_isbase = value; }
    inline void setKDirOperator_MouseReleaseEvent_IsBase(bool value) const { kdiroperator_mousereleaseevent_isbase = value; }
    inline void setKDirOperator_MouseDoubleClickEvent_IsBase(bool value) const { kdiroperator_mousedoubleclickevent_isbase = value; }
    inline void setKDirOperator_MouseMoveEvent_IsBase(bool value) const { kdiroperator_mousemoveevent_isbase = value; }
    inline void setKDirOperator_WheelEvent_IsBase(bool value) const { kdiroperator_wheelevent_isbase = value; }
    inline void setKDirOperator_KeyPressEvent_IsBase(bool value) const { kdiroperator_keypressevent_isbase = value; }
    inline void setKDirOperator_KeyReleaseEvent_IsBase(bool value) const { kdiroperator_keyreleaseevent_isbase = value; }
    inline void setKDirOperator_FocusInEvent_IsBase(bool value) const { kdiroperator_focusinevent_isbase = value; }
    inline void setKDirOperator_FocusOutEvent_IsBase(bool value) const { kdiroperator_focusoutevent_isbase = value; }
    inline void setKDirOperator_EnterEvent_IsBase(bool value) const { kdiroperator_enterevent_isbase = value; }
    inline void setKDirOperator_LeaveEvent_IsBase(bool value) const { kdiroperator_leaveevent_isbase = value; }
    inline void setKDirOperator_PaintEvent_IsBase(bool value) const { kdiroperator_paintevent_isbase = value; }
    inline void setKDirOperator_MoveEvent_IsBase(bool value) const { kdiroperator_moveevent_isbase = value; }
    inline void setKDirOperator_CloseEvent_IsBase(bool value) const { kdiroperator_closeevent_isbase = value; }
    inline void setKDirOperator_ContextMenuEvent_IsBase(bool value) const { kdiroperator_contextmenuevent_isbase = value; }
    inline void setKDirOperator_TabletEvent_IsBase(bool value) const { kdiroperator_tabletevent_isbase = value; }
    inline void setKDirOperator_ActionEvent_IsBase(bool value) const { kdiroperator_actionevent_isbase = value; }
    inline void setKDirOperator_DragEnterEvent_IsBase(bool value) const { kdiroperator_dragenterevent_isbase = value; }
    inline void setKDirOperator_DragMoveEvent_IsBase(bool value) const { kdiroperator_dragmoveevent_isbase = value; }
    inline void setKDirOperator_DragLeaveEvent_IsBase(bool value) const { kdiroperator_dragleaveevent_isbase = value; }
    inline void setKDirOperator_DropEvent_IsBase(bool value) const { kdiroperator_dropevent_isbase = value; }
    inline void setKDirOperator_ShowEvent_IsBase(bool value) const { kdiroperator_showevent_isbase = value; }
    inline void setKDirOperator_HideEvent_IsBase(bool value) const { kdiroperator_hideevent_isbase = value; }
    inline void setKDirOperator_NativeEvent_IsBase(bool value) const { kdiroperator_nativeevent_isbase = value; }
    inline void setKDirOperator_Metric_IsBase(bool value) const { kdiroperator_metric_isbase = value; }
    inline void setKDirOperator_InitPainter_IsBase(bool value) const { kdiroperator_initpainter_isbase = value; }
    inline void setKDirOperator_Redirected_IsBase(bool value) const { kdiroperator_redirected_isbase = value; }
    inline void setKDirOperator_SharedPainter_IsBase(bool value) const { kdiroperator_sharedpainter_isbase = value; }
    inline void setKDirOperator_InputMethodEvent_IsBase(bool value) const { kdiroperator_inputmethodevent_isbase = value; }
    inline void setKDirOperator_InputMethodQuery_IsBase(bool value) const { kdiroperator_inputmethodquery_isbase = value; }
    inline void setKDirOperator_FocusNextPrevChild_IsBase(bool value) const { kdiroperator_focusnextprevchild_isbase = value; }
    inline void setKDirOperator_TimerEvent_IsBase(bool value) const { kdiroperator_timerevent_isbase = value; }
    inline void setKDirOperator_ChildEvent_IsBase(bool value) const { kdiroperator_childevent_isbase = value; }
    inline void setKDirOperator_CustomEvent_IsBase(bool value) const { kdiroperator_customevent_isbase = value; }
    inline void setKDirOperator_ConnectNotify_IsBase(bool value) const { kdiroperator_connectnotify_isbase = value; }
    inline void setKDirOperator_DisconnectNotify_IsBase(bool value) const { kdiroperator_disconnectnotify_isbase = value; }
    inline void setKDirOperator_SetupActions_IsBase(bool value) const { kdiroperator_setupactions_isbase = value; }
    inline void setKDirOperator_UpdateSortActions_IsBase(bool value) const { kdiroperator_updatesortactions_isbase = value; }
    inline void setKDirOperator_UpdateViewActions_IsBase(bool value) const { kdiroperator_updateviewactions_isbase = value; }
    inline void setKDirOperator_SetupMenu2_IsBase(bool value) const { kdiroperator_setupmenu2_isbase = value; }
    inline void setKDirOperator_PrepareCompletionObjects_IsBase(bool value) const { kdiroperator_preparecompletionobjects_isbase = value; }
    inline void setKDirOperator_CheckPreviewSupport_IsBase(bool value) const { kdiroperator_checkpreviewsupport_isbase = value; }
    inline void setKDirOperator_ResetCursor_IsBase(bool value) const { kdiroperator_resetcursor_isbase = value; }
    inline void setKDirOperator_PathChanged_IsBase(bool value) const { kdiroperator_pathchanged_isbase = value; }
    inline void setKDirOperator_SelectFile_IsBase(bool value) const { kdiroperator_selectfile_isbase = value; }
    inline void setKDirOperator_HighlightFile_IsBase(bool value) const { kdiroperator_highlightfile_isbase = value; }
    inline void setKDirOperator_SortByName_IsBase(bool value) const { kdiroperator_sortbyname_isbase = value; }
    inline void setKDirOperator_SortBySize_IsBase(bool value) const { kdiroperator_sortbysize_isbase = value; }
    inline void setKDirOperator_SortByDate_IsBase(bool value) const { kdiroperator_sortbydate_isbase = value; }
    inline void setKDirOperator_SortByType_IsBase(bool value) const { kdiroperator_sortbytype_isbase = value; }
    inline void setKDirOperator_SortReversed_IsBase(bool value) const { kdiroperator_sortreversed_isbase = value; }
    inline void setKDirOperator_ToggleDirsFirst_IsBase(bool value) const { kdiroperator_toggledirsfirst_isbase = value; }
    inline void setKDirOperator_ToggleIgnoreCase_IsBase(bool value) const { kdiroperator_toggleignorecase_isbase = value; }
    inline void setKDirOperator_SlotCompletionMatch_IsBase(bool value) const { kdiroperator_slotcompletionmatch_isbase = value; }
    inline void setKDirOperator_UpdateMicroFocus_IsBase(bool value) const { kdiroperator_updatemicrofocus_isbase = value; }
    inline void setKDirOperator_Create_IsBase(bool value) const { kdiroperator_create_isbase = value; }
    inline void setKDirOperator_Destroy_IsBase(bool value) const { kdiroperator_destroy_isbase = value; }
    inline void setKDirOperator_FocusNextChild_IsBase(bool value) const { kdiroperator_focusnextchild_isbase = value; }
    inline void setKDirOperator_FocusPreviousChild_IsBase(bool value) const { kdiroperator_focuspreviouschild_isbase = value; }
    inline void setKDirOperator_Sender_IsBase(bool value) const { kdiroperator_sender_isbase = value; }
    inline void setKDirOperator_SenderSignalIndex_IsBase(bool value) const { kdiroperator_sendersignalindex_isbase = value; }
    inline void setKDirOperator_Receivers_IsBase(bool value) const { kdiroperator_receivers_isbase = value; }
    inline void setKDirOperator_IsSignalConnected_IsBase(bool value) const { kdiroperator_issignalconnected_isbase = value; }
    inline void setKDirOperator_GetDecodedMetricF_IsBase(bool value) const { kdiroperator_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdiroperator_metacall_isbase) {
            kdiroperator_metacall_isbase = false;
            return KDirOperator::qt_metacall(param1, param2, param3);
        } else if (kdiroperator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdiroperator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDirOperator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setShowHiddenFiles(bool s) override {
        if (kdiroperator_setshowhiddenfiles_isbase) {
            kdiroperator_setshowhiddenfiles_isbase = false;
            KDirOperator::setShowHiddenFiles(s);
        } else if (kdiroperator_setshowhiddenfiles_callback != nullptr) {
            bool cbval1 = s;

            kdiroperator_setshowhiddenfiles_callback(this, cbval1);
        } else {
            KDirOperator::setShowHiddenFiles(s);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUrl(const QUrl& url, bool clearforward) override {
        if (kdiroperator_seturl_isbase) {
            kdiroperator_seturl_isbase = false;
            KDirOperator::setUrl(url, clearforward);
        } else if (kdiroperator_seturl_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = clearforward;

            kdiroperator_seturl_callback(this, cbval1, cbval2);
        } else {
            KDirOperator::setUrl(url, clearforward);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KFile::Modes m) override {
        if (kdiroperator_setmode_isbase) {
            kdiroperator_setmode_isbase = false;
            KDirOperator::setMode(m);
        } else if (kdiroperator_setmode_callback != nullptr) {
            int cbval1 = static_cast<int>(m);

            kdiroperator_setmode_callback(this, cbval1);
        } else {
            KDirOperator::setMode(m);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPreviewWidget(KPreviewWidgetBase* w) override {
        if (kdiroperator_setpreviewwidget_isbase) {
            kdiroperator_setpreviewwidget_isbase = false;
            KDirOperator::setPreviewWidget(w);
        } else if (kdiroperator_setpreviewwidget_callback != nullptr) {
            KPreviewWidgetBase* cbval1 = w;

            kdiroperator_setpreviewwidget_callback(this, cbval1);
        } else {
            KDirOperator::setPreviewWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setViewConfig(KConfigGroup& configGroup) override {
        if (kdiroperator_setviewconfig_isbase) {
            kdiroperator_setviewconfig_isbase = false;
            KDirOperator::setViewConfig(configGroup);
        } else if (kdiroperator_setviewconfig_callback != nullptr) {
            KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &configGroup_ret;

            kdiroperator_setviewconfig_callback(this, cbval1);
        } else {
            KDirOperator::setViewConfig(configGroup);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(const KConfigGroup& configGroup) override {
        if (kdiroperator_readconfig_isbase) {
            kdiroperator_readconfig_isbase = false;
            KDirOperator::readConfig(configGroup);
        } else if (kdiroperator_readconfig_callback != nullptr) {
            const KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&configGroup_ret);

            kdiroperator_readconfig_callback(this, cbval1);
        } else {
            KDirOperator::readConfig(configGroup);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfigGroup& configGroup) override {
        if (kdiroperator_writeconfig_isbase) {
            kdiroperator_writeconfig_isbase = false;
            KDirOperator::writeConfig(configGroup);
        } else if (kdiroperator_writeconfig_callback != nullptr) {
            KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &configGroup_ret;

            kdiroperator_writeconfig_callback(this, cbval1);
        } else {
            KDirOperator::writeConfig(configGroup);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::DeleteJob* del(const KFileItemList& items, QWidget* parent, bool ask, bool showProgress) override {
        if (kdiroperator_del_isbase) {
            kdiroperator_del_isbase = false;
            return KDirOperator::del(items, parent, ask, showProgress);
        } else if (kdiroperator_del_callback != nullptr) {
            const KFileItemList& items_ret = items;
            // Cast returned reference into pointer
            KFileItemList* cbval1 = const_cast<KFileItemList*>(&items_ret);
            QWidget* cbval2 = parent;
            bool cbval3 = ask;
            bool cbval4 = showProgress;

            KIO__DeleteJob* callback_ret = kdiroperator_del_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDirOperator::del(items, parent, ask, showProgress);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnableDirHighlighting(bool enable) override {
        if (kdiroperator_setenabledirhighlighting_isbase) {
            kdiroperator_setenabledirhighlighting_isbase = false;
            KDirOperator::setEnableDirHighlighting(enable);
        } else if (kdiroperator_setenabledirhighlighting_callback != nullptr) {
            bool cbval1 = enable;

            kdiroperator_setenabledirhighlighting_callback(this, cbval1);
        } else {
            KDirOperator::setEnableDirHighlighting(enable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAcceptDrops(bool b) override {
        if (kdiroperator_setacceptdrops_isbase) {
            kdiroperator_setacceptdrops_isbase = false;
            KDirOperator::setAcceptDrops(b);
        } else if (kdiroperator_setacceptdrops_callback != nullptr) {
            bool cbval1 = b;

            kdiroperator_setacceptdrops_callback(this, cbval1);
        } else {
            KDirOperator::setAcceptDrops(b);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDropOptions(int options) override {
        if (kdiroperator_setdropoptions_isbase) {
            kdiroperator_setdropoptions_isbase = false;
            KDirOperator::setDropOptions(options);
        } else if (kdiroperator_setdropoptions_callback != nullptr) {
            int cbval1 = options;

            kdiroperator_setdropoptions_callback(this, cbval1);
        } else {
            KDirOperator::setDropOptions(options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::CopyJob* trash(const KFileItemList& items, QWidget* parent, bool ask, bool showProgress) override {
        if (kdiroperator_trash_isbase) {
            kdiroperator_trash_isbase = false;
            return KDirOperator::trash(items, parent, ask, showProgress);
        } else if (kdiroperator_trash_callback != nullptr) {
            const KFileItemList& items_ret = items;
            // Cast returned reference into pointer
            KFileItemList* cbval1 = const_cast<KFileItemList*>(&items_ret);
            QWidget* cbval2 = parent;
            bool cbval3 = ask;
            bool cbval4 = showProgress;

            KIO__CopyJob* callback_ret = kdiroperator_trash_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KDirOperator::trash(items, parent, ask, showProgress);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createView(QWidget* parent, KFile::FileView viewKind) override {
        if (kdiroperator_createview_isbase) {
            kdiroperator_createview_isbase = false;
            return KDirOperator::createView(parent, viewKind);
        } else if (kdiroperator_createview_callback != nullptr) {
            QWidget* cbval1 = parent;
            int cbval2 = static_cast<int>(viewKind);

            QAbstractItemView* callback_ret = kdiroperator_createview_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirOperator::createView(parent, viewKind);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDirLister(KDirLister* lister) override {
        if (kdiroperator_setdirlister_isbase) {
            kdiroperator_setdirlister_isbase = false;
            KDirOperator::setDirLister(lister);
        } else if (kdiroperator_setdirlister_callback != nullptr) {
            KDirLister* cbval1 = lister;

            kdiroperator_setdirlister_callback(this, cbval1);
        } else {
            KDirOperator::setDirLister(lister);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdiroperator_resizeevent_isbase) {
            kdiroperator_resizeevent_isbase = false;
            KDirOperator::resizeEvent(event);
        } else if (kdiroperator_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kdiroperator_resizeevent_callback(this, cbval1);
        } else {
            KDirOperator::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void activatedMenu(const KFileItem& item, const QPoint& pos) override {
        if (kdiroperator_activatedmenu_isbase) {
            kdiroperator_activatedmenu_isbase = false;
            KDirOperator::activatedMenu(item, pos);
        } else if (kdiroperator_activatedmenu_callback != nullptr) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&pos_ret);

            kdiroperator_activatedmenu_callback(this, cbval1, cbval2);
        } else {
            KDirOperator::activatedMenu(item, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kdiroperator_changeevent_isbase) {
            kdiroperator_changeevent_isbase = false;
            KDirOperator::changeEvent(event);
        } else if (kdiroperator_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdiroperator_changeevent_callback(this, cbval1);
        } else {
            KDirOperator::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdiroperator_eventfilter_isbase) {
            kdiroperator_eventfilter_isbase = false;
            return KDirOperator::eventFilter(watched, event);
        } else if (kdiroperator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdiroperator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDirOperator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void back() override {
        if (kdiroperator_back_isbase) {
            kdiroperator_back_isbase = false;
            KDirOperator::back();
        } else if (kdiroperator_back_callback != nullptr) {
            kdiroperator_back_callback();
        } else {
            KDirOperator::back();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (kdiroperator_forward_isbase) {
            kdiroperator_forward_isbase = false;
            KDirOperator::forward();
        } else if (kdiroperator_forward_callback != nullptr) {
            kdiroperator_forward_callback();
        } else {
            KDirOperator::forward();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (kdiroperator_home_isbase) {
            kdiroperator_home_isbase = false;
            KDirOperator::home();
        } else if (kdiroperator_home_callback != nullptr) {
            kdiroperator_home_callback();
        } else {
            KDirOperator::home();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void cdUp() override {
        if (kdiroperator_cdup_isbase) {
            kdiroperator_cdup_isbase = false;
            KDirOperator::cdUp();
        } else if (kdiroperator_cdup_callback != nullptr) {
            kdiroperator_cdup_callback();
        } else {
            KDirOperator::cdUp();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rereadDir() override {
        if (kdiroperator_rereaddir_isbase) {
            kdiroperator_rereaddir_isbase = false;
            KDirOperator::rereadDir();
        } else if (kdiroperator_rereaddir_callback != nullptr) {
            kdiroperator_rereaddir_callback();
        } else {
            KDirOperator::rereadDir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mkdir() override {
        if (kdiroperator_mkdir_isbase) {
            kdiroperator_mkdir_isbase = false;
            KDirOperator::mkdir();
        } else if (kdiroperator_mkdir_callback != nullptr) {
            kdiroperator_mkdir_callback();
        } else {
            KDirOperator::mkdir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteSelected() override {
        if (kdiroperator_deleteselected_isbase) {
            kdiroperator_deleteselected_isbase = false;
            KDirOperator::deleteSelected();
        } else if (kdiroperator_deleteselected_callback != nullptr) {
            kdiroperator_deleteselected_callback();
        } else {
            KDirOperator::deleteSelected();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void trashSelected() override {
        if (kdiroperator_trashselected_isbase) {
            kdiroperator_trashselected_isbase = false;
            KDirOperator::trashSelected();
        } else if (kdiroperator_trashselected_callback != nullptr) {
            kdiroperator_trashselected_callback();
        } else {
            KDirOperator::trashSelected();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectDir(const KFileItem& item) override {
        if (kdiroperator_selectdir_isbase) {
            kdiroperator_selectdir_isbase = false;
            KDirOperator::selectDir(item);
        } else if (kdiroperator_selectdir_callback != nullptr) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);

            kdiroperator_selectdir_callback(this, cbval1);
        } else {
            KDirOperator::selectDir(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdiroperator_devtype_isbase) {
            kdiroperator_devtype_isbase = false;
            return KDirOperator::devType();
        } else if (kdiroperator_devtype_callback != nullptr) {
            int callback_ret = kdiroperator_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDirOperator::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdiroperator_setvisible_isbase) {
            kdiroperator_setvisible_isbase = false;
            KDirOperator::setVisible(visible);
        } else if (kdiroperator_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kdiroperator_setvisible_callback(this, cbval1);
        } else {
            KDirOperator::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdiroperator_sizehint_isbase) {
            kdiroperator_sizehint_isbase = false;
            return KDirOperator::sizeHint();
        } else if (kdiroperator_sizehint_callback != nullptr) {
            QSize* callback_ret = kdiroperator_sizehint_callback();
            return *callback_ret;
        } else {
            return KDirOperator::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdiroperator_minimumsizehint_isbase) {
            kdiroperator_minimumsizehint_isbase = false;
            return KDirOperator::minimumSizeHint();
        } else if (kdiroperator_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kdiroperator_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KDirOperator::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdiroperator_heightforwidth_isbase) {
            kdiroperator_heightforwidth_isbase = false;
            return KDirOperator::heightForWidth(param1);
        } else if (kdiroperator_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kdiroperator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirOperator::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdiroperator_hasheightforwidth_isbase) {
            kdiroperator_hasheightforwidth_isbase = false;
            return KDirOperator::hasHeightForWidth();
        } else if (kdiroperator_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kdiroperator_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KDirOperator::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdiroperator_paintengine_isbase) {
            kdiroperator_paintengine_isbase = false;
            return KDirOperator::paintEngine();
        } else if (kdiroperator_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kdiroperator_paintengine_callback();
            return callback_ret;
        } else {
            return KDirOperator::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdiroperator_event_isbase) {
            kdiroperator_event_isbase = false;
            return KDirOperator::event(event);
        } else if (kdiroperator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdiroperator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirOperator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdiroperator_mousepressevent_isbase) {
            kdiroperator_mousepressevent_isbase = false;
            KDirOperator::mousePressEvent(event);
        } else if (kdiroperator_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdiroperator_mousepressevent_callback(this, cbval1);
        } else {
            KDirOperator::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kdiroperator_mousereleaseevent_isbase) {
            kdiroperator_mousereleaseevent_isbase = false;
            KDirOperator::mouseReleaseEvent(event);
        } else if (kdiroperator_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdiroperator_mousereleaseevent_callback(this, cbval1);
        } else {
            KDirOperator::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdiroperator_mousedoubleclickevent_isbase) {
            kdiroperator_mousedoubleclickevent_isbase = false;
            KDirOperator::mouseDoubleClickEvent(event);
        } else if (kdiroperator_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdiroperator_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KDirOperator::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdiroperator_mousemoveevent_isbase) {
            kdiroperator_mousemoveevent_isbase = false;
            KDirOperator::mouseMoveEvent(event);
        } else if (kdiroperator_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdiroperator_mousemoveevent_callback(this, cbval1);
        } else {
            KDirOperator::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdiroperator_wheelevent_isbase) {
            kdiroperator_wheelevent_isbase = false;
            KDirOperator::wheelEvent(event);
        } else if (kdiroperator_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kdiroperator_wheelevent_callback(this, cbval1);
        } else {
            KDirOperator::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdiroperator_keypressevent_isbase) {
            kdiroperator_keypressevent_isbase = false;
            KDirOperator::keyPressEvent(event);
        } else if (kdiroperator_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdiroperator_keypressevent_callback(this, cbval1);
        } else {
            KDirOperator::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdiroperator_keyreleaseevent_isbase) {
            kdiroperator_keyreleaseevent_isbase = false;
            KDirOperator::keyReleaseEvent(event);
        } else if (kdiroperator_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdiroperator_keyreleaseevent_callback(this, cbval1);
        } else {
            KDirOperator::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdiroperator_focusinevent_isbase) {
            kdiroperator_focusinevent_isbase = false;
            KDirOperator::focusInEvent(event);
        } else if (kdiroperator_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdiroperator_focusinevent_callback(this, cbval1);
        } else {
            KDirOperator::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdiroperator_focusoutevent_isbase) {
            kdiroperator_focusoutevent_isbase = false;
            KDirOperator::focusOutEvent(event);
        } else if (kdiroperator_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdiroperator_focusoutevent_callback(this, cbval1);
        } else {
            KDirOperator::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdiroperator_enterevent_isbase) {
            kdiroperator_enterevent_isbase = false;
            KDirOperator::enterEvent(event);
        } else if (kdiroperator_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kdiroperator_enterevent_callback(this, cbval1);
        } else {
            KDirOperator::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdiroperator_leaveevent_isbase) {
            kdiroperator_leaveevent_isbase = false;
            KDirOperator::leaveEvent(event);
        } else if (kdiroperator_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdiroperator_leaveevent_callback(this, cbval1);
        } else {
            KDirOperator::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kdiroperator_paintevent_isbase) {
            kdiroperator_paintevent_isbase = false;
            KDirOperator::paintEvent(event);
        } else if (kdiroperator_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kdiroperator_paintevent_callback(this, cbval1);
        } else {
            KDirOperator::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdiroperator_moveevent_isbase) {
            kdiroperator_moveevent_isbase = false;
            KDirOperator::moveEvent(event);
        } else if (kdiroperator_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kdiroperator_moveevent_callback(this, cbval1);
        } else {
            KDirOperator::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdiroperator_closeevent_isbase) {
            kdiroperator_closeevent_isbase = false;
            KDirOperator::closeEvent(event);
        } else if (kdiroperator_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kdiroperator_closeevent_callback(this, cbval1);
        } else {
            KDirOperator::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdiroperator_contextmenuevent_isbase) {
            kdiroperator_contextmenuevent_isbase = false;
            KDirOperator::contextMenuEvent(event);
        } else if (kdiroperator_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kdiroperator_contextmenuevent_callback(this, cbval1);
        } else {
            KDirOperator::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdiroperator_tabletevent_isbase) {
            kdiroperator_tabletevent_isbase = false;
            KDirOperator::tabletEvent(event);
        } else if (kdiroperator_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kdiroperator_tabletevent_callback(this, cbval1);
        } else {
            KDirOperator::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdiroperator_actionevent_isbase) {
            kdiroperator_actionevent_isbase = false;
            KDirOperator::actionEvent(event);
        } else if (kdiroperator_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kdiroperator_actionevent_callback(this, cbval1);
        } else {
            KDirOperator::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdiroperator_dragenterevent_isbase) {
            kdiroperator_dragenterevent_isbase = false;
            KDirOperator::dragEnterEvent(event);
        } else if (kdiroperator_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kdiroperator_dragenterevent_callback(this, cbval1);
        } else {
            KDirOperator::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdiroperator_dragmoveevent_isbase) {
            kdiroperator_dragmoveevent_isbase = false;
            KDirOperator::dragMoveEvent(event);
        } else if (kdiroperator_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kdiroperator_dragmoveevent_callback(this, cbval1);
        } else {
            KDirOperator::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdiroperator_dragleaveevent_isbase) {
            kdiroperator_dragleaveevent_isbase = false;
            KDirOperator::dragLeaveEvent(event);
        } else if (kdiroperator_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kdiroperator_dragleaveevent_callback(this, cbval1);
        } else {
            KDirOperator::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdiroperator_dropevent_isbase) {
            kdiroperator_dropevent_isbase = false;
            KDirOperator::dropEvent(event);
        } else if (kdiroperator_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kdiroperator_dropevent_callback(this, cbval1);
        } else {
            KDirOperator::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdiroperator_showevent_isbase) {
            kdiroperator_showevent_isbase = false;
            KDirOperator::showEvent(event);
        } else if (kdiroperator_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kdiroperator_showevent_callback(this, cbval1);
        } else {
            KDirOperator::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kdiroperator_hideevent_isbase) {
            kdiroperator_hideevent_isbase = false;
            KDirOperator::hideEvent(event);
        } else if (kdiroperator_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kdiroperator_hideevent_callback(this, cbval1);
        } else {
            KDirOperator::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdiroperator_nativeevent_isbase) {
            kdiroperator_nativeevent_isbase = false;
            return KDirOperator::nativeEvent(eventType, message, result);
        } else if (kdiroperator_nativeevent_callback != nullptr) {
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

            bool callback_ret = kdiroperator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDirOperator::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdiroperator_metric_isbase) {
            kdiroperator_metric_isbase = false;
            return KDirOperator::metric(param1);
        } else if (kdiroperator_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kdiroperator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirOperator::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdiroperator_initpainter_isbase) {
            kdiroperator_initpainter_isbase = false;
            KDirOperator::initPainter(painter);
        } else if (kdiroperator_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kdiroperator_initpainter_callback(this, cbval1);
        } else {
            KDirOperator::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdiroperator_redirected_isbase) {
            kdiroperator_redirected_isbase = false;
            return KDirOperator::redirected(offset);
        } else if (kdiroperator_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kdiroperator_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirOperator::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdiroperator_sharedpainter_isbase) {
            kdiroperator_sharedpainter_isbase = false;
            return KDirOperator::sharedPainter();
        } else if (kdiroperator_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kdiroperator_sharedpainter_callback();
            return callback_ret;
        } else {
            return KDirOperator::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdiroperator_inputmethodevent_isbase) {
            kdiroperator_inputmethodevent_isbase = false;
            KDirOperator::inputMethodEvent(param1);
        } else if (kdiroperator_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kdiroperator_inputmethodevent_callback(this, cbval1);
        } else {
            KDirOperator::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdiroperator_inputmethodquery_isbase) {
            kdiroperator_inputmethodquery_isbase = false;
            return KDirOperator::inputMethodQuery(param1);
        } else if (kdiroperator_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kdiroperator_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDirOperator::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdiroperator_focusnextprevchild_isbase) {
            kdiroperator_focusnextprevchild_isbase = false;
            return KDirOperator::focusNextPrevChild(next);
        } else if (kdiroperator_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kdiroperator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirOperator::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdiroperator_timerevent_isbase) {
            kdiroperator_timerevent_isbase = false;
            KDirOperator::timerEvent(event);
        } else if (kdiroperator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdiroperator_timerevent_callback(this, cbval1);
        } else {
            KDirOperator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdiroperator_childevent_isbase) {
            kdiroperator_childevent_isbase = false;
            KDirOperator::childEvent(event);
        } else if (kdiroperator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdiroperator_childevent_callback(this, cbval1);
        } else {
            KDirOperator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdiroperator_customevent_isbase) {
            kdiroperator_customevent_isbase = false;
            KDirOperator::customEvent(event);
        } else if (kdiroperator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdiroperator_customevent_callback(this, cbval1);
        } else {
            KDirOperator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdiroperator_connectnotify_isbase) {
            kdiroperator_connectnotify_isbase = false;
            KDirOperator::connectNotify(signal);
        } else if (kdiroperator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdiroperator_connectnotify_callback(this, cbval1);
        } else {
            KDirOperator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdiroperator_disconnectnotify_isbase) {
            kdiroperator_disconnectnotify_isbase = false;
            KDirOperator::disconnectNotify(signal);
        } else if (kdiroperator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdiroperator_disconnectnotify_callback(this, cbval1);
        } else {
            KDirOperator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setupActions() {
        if (kdiroperator_setupactions_isbase) {
            kdiroperator_setupactions_isbase = false;
            KDirOperator::setupActions();
        } else if (kdiroperator_setupactions_callback != nullptr) {
            kdiroperator_setupactions_callback();
        } else {
            KDirOperator::setupActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateSortActions() {
        if (kdiroperator_updatesortactions_isbase) {
            kdiroperator_updatesortactions_isbase = false;
            KDirOperator::updateSortActions();
        } else if (kdiroperator_updatesortactions_callback != nullptr) {
            kdiroperator_updatesortactions_callback();
        } else {
            KDirOperator::updateSortActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateViewActions() {
        if (kdiroperator_updateviewactions_isbase) {
            kdiroperator_updateviewactions_isbase = false;
            KDirOperator::updateViewActions();
        } else if (kdiroperator_updateviewactions_callback != nullptr) {
            kdiroperator_updateviewactions_callback();
        } else {
            KDirOperator::updateViewActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setupMenu() {
        if (kdiroperator_setupmenu2_isbase) {
            kdiroperator_setupmenu2_isbase = false;
            KDirOperator::setupMenu();
        } else if (kdiroperator_setupmenu2_callback != nullptr) {
            kdiroperator_setupmenu2_callback();
        } else {
            KDirOperator::setupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    void prepareCompletionObjects() {
        if (kdiroperator_preparecompletionobjects_isbase) {
            kdiroperator_preparecompletionobjects_isbase = false;
            KDirOperator::prepareCompletionObjects();
        } else if (kdiroperator_preparecompletionobjects_callback != nullptr) {
            kdiroperator_preparecompletionobjects_callback();
        } else {
            KDirOperator::prepareCompletionObjects();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool checkPreviewSupport() {
        if (kdiroperator_checkpreviewsupport_isbase) {
            kdiroperator_checkpreviewsupport_isbase = false;
            return KDirOperator::checkPreviewSupport();
        } else if (kdiroperator_checkpreviewsupport_callback != nullptr) {
            bool callback_ret = kdiroperator_checkpreviewsupport_callback();
            return callback_ret;
        } else {
            return KDirOperator::checkPreviewSupport();
        }
    }

    // Virtual method for C ABI access and custom callback
    void resetCursor() {
        if (kdiroperator_resetcursor_isbase) {
            kdiroperator_resetcursor_isbase = false;
            KDirOperator::resetCursor();
        } else if (kdiroperator_resetcursor_callback != nullptr) {
            kdiroperator_resetcursor_callback();
        } else {
            KDirOperator::resetCursor();
        }
    }

    // Virtual method for C ABI access and custom callback
    void pathChanged() {
        if (kdiroperator_pathchanged_isbase) {
            kdiroperator_pathchanged_isbase = false;
            KDirOperator::pathChanged();
        } else if (kdiroperator_pathchanged_callback != nullptr) {
            kdiroperator_pathchanged_callback();
        } else {
            KDirOperator::pathChanged();
        }
    }

    // Virtual method for C ABI access and custom callback
    void selectFile(const KFileItem& item) {
        if (kdiroperator_selectfile_isbase) {
            kdiroperator_selectfile_isbase = false;
            KDirOperator::selectFile(item);
        } else if (kdiroperator_selectfile_callback != nullptr) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);

            kdiroperator_selectfile_callback(this, cbval1);
        } else {
            KDirOperator::selectFile(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void highlightFile(const KFileItem& item) {
        if (kdiroperator_highlightfile_isbase) {
            kdiroperator_highlightfile_isbase = false;
            KDirOperator::highlightFile(item);
        } else if (kdiroperator_highlightfile_callback != nullptr) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);

            kdiroperator_highlightfile_callback(this, cbval1);
        } else {
            KDirOperator::highlightFile(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void sortByName() {
        if (kdiroperator_sortbyname_isbase) {
            kdiroperator_sortbyname_isbase = false;
            KDirOperator::sortByName();
        } else if (kdiroperator_sortbyname_callback != nullptr) {
            kdiroperator_sortbyname_callback();
        } else {
            KDirOperator::sortByName();
        }
    }

    // Virtual method for C ABI access and custom callback
    void sortBySize() {
        if (kdiroperator_sortbysize_isbase) {
            kdiroperator_sortbysize_isbase = false;
            KDirOperator::sortBySize();
        } else if (kdiroperator_sortbysize_callback != nullptr) {
            kdiroperator_sortbysize_callback();
        } else {
            KDirOperator::sortBySize();
        }
    }

    // Virtual method for C ABI access and custom callback
    void sortByDate() {
        if (kdiroperator_sortbydate_isbase) {
            kdiroperator_sortbydate_isbase = false;
            KDirOperator::sortByDate();
        } else if (kdiroperator_sortbydate_callback != nullptr) {
            kdiroperator_sortbydate_callback();
        } else {
            KDirOperator::sortByDate();
        }
    }

    // Virtual method for C ABI access and custom callback
    void sortByType() {
        if (kdiroperator_sortbytype_isbase) {
            kdiroperator_sortbytype_isbase = false;
            KDirOperator::sortByType();
        } else if (kdiroperator_sortbytype_callback != nullptr) {
            kdiroperator_sortbytype_callback();
        } else {
            KDirOperator::sortByType();
        }
    }

    // Virtual method for C ABI access and custom callback
    void sortReversed() {
        if (kdiroperator_sortreversed_isbase) {
            kdiroperator_sortreversed_isbase = false;
            KDirOperator::sortReversed();
        } else if (kdiroperator_sortreversed_callback != nullptr) {
            kdiroperator_sortreversed_callback();
        } else {
            KDirOperator::sortReversed();
        }
    }

    // Virtual method for C ABI access and custom callback
    void toggleDirsFirst() {
        if (kdiroperator_toggledirsfirst_isbase) {
            kdiroperator_toggledirsfirst_isbase = false;
            KDirOperator::toggleDirsFirst();
        } else if (kdiroperator_toggledirsfirst_callback != nullptr) {
            kdiroperator_toggledirsfirst_callback();
        } else {
            KDirOperator::toggleDirsFirst();
        }
    }

    // Virtual method for C ABI access and custom callback
    void toggleIgnoreCase() {
        if (kdiroperator_toggleignorecase_isbase) {
            kdiroperator_toggleignorecase_isbase = false;
            KDirOperator::toggleIgnoreCase();
        } else if (kdiroperator_toggleignorecase_callback != nullptr) {
            kdiroperator_toggleignorecase_callback();
        } else {
            KDirOperator::toggleIgnoreCase();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotCompletionMatch(const QString& match) {
        if (kdiroperator_slotcompletionmatch_isbase) {
            kdiroperator_slotcompletionmatch_isbase = false;
            KDirOperator::slotCompletionMatch(match);
        } else if (kdiroperator_slotcompletionmatch_callback != nullptr) {
            const QString match_ret = match;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray match_b = match_ret.toUtf8();
            libqt_string match_str;
            match_str.len = match_b.length();
            match_str.data = static_cast<const char*>(malloc(match_str.len + 1));
            memcpy((void*)match_str.data, match_b.data(), match_str.len);
            ((char*)match_str.data)[match_str.len] = '\0';
            libqt_string cbval1 = match_str;

            kdiroperator_slotcompletionmatch_callback(this, cbval1);
        } else {
            KDirOperator::slotCompletionMatch(match);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kdiroperator_updatemicrofocus_isbase) {
            kdiroperator_updatemicrofocus_isbase = false;
            KDirOperator::updateMicroFocus();
        } else if (kdiroperator_updatemicrofocus_callback != nullptr) {
            kdiroperator_updatemicrofocus_callback();
        } else {
            KDirOperator::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kdiroperator_create_isbase) {
            kdiroperator_create_isbase = false;
            KDirOperator::create();
        } else if (kdiroperator_create_callback != nullptr) {
            kdiroperator_create_callback();
        } else {
            KDirOperator::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kdiroperator_destroy_isbase) {
            kdiroperator_destroy_isbase = false;
            KDirOperator::destroy();
        } else if (kdiroperator_destroy_callback != nullptr) {
            kdiroperator_destroy_callback();
        } else {
            KDirOperator::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kdiroperator_focusnextchild_isbase) {
            kdiroperator_focusnextchild_isbase = false;
            return KDirOperator::focusNextChild();
        } else if (kdiroperator_focusnextchild_callback != nullptr) {
            bool callback_ret = kdiroperator_focusnextchild_callback();
            return callback_ret;
        } else {
            return KDirOperator::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kdiroperator_focuspreviouschild_isbase) {
            kdiroperator_focuspreviouschild_isbase = false;
            return KDirOperator::focusPreviousChild();
        } else if (kdiroperator_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kdiroperator_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KDirOperator::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdiroperator_sender_isbase) {
            kdiroperator_sender_isbase = false;
            return KDirOperator::sender();
        } else if (kdiroperator_sender_callback != nullptr) {
            QObject* callback_ret = kdiroperator_sender_callback();
            return callback_ret;
        } else {
            return KDirOperator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdiroperator_sendersignalindex_isbase) {
            kdiroperator_sendersignalindex_isbase = false;
            return KDirOperator::senderSignalIndex();
        } else if (kdiroperator_sendersignalindex_callback != nullptr) {
            int callback_ret = kdiroperator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDirOperator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdiroperator_receivers_isbase) {
            kdiroperator_receivers_isbase = false;
            return KDirOperator::receivers(signal);
        } else if (kdiroperator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdiroperator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDirOperator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdiroperator_issignalconnected_isbase) {
            kdiroperator_issignalconnected_isbase = false;
            return KDirOperator::isSignalConnected(signal);
        } else if (kdiroperator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdiroperator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDirOperator::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kdiroperator_getdecodedmetricf_isbase) {
            kdiroperator_getdecodedmetricf_isbase = false;
            return KDirOperator::getDecodedMetricF(metricA, metricB);
        } else if (kdiroperator_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kdiroperator_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KDirOperator::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend QAbstractItemView* KDirOperator_CreateView(KDirOperator* self, QWidget* parent, int viewKind);
    friend QAbstractItemView* KDirOperator_QBaseCreateView(KDirOperator* self, QWidget* parent, int viewKind);
    friend void KDirOperator_SetDirLister(KDirOperator* self, KDirLister* lister);
    friend void KDirOperator_QBaseSetDirLister(KDirOperator* self, KDirLister* lister);
    friend void KDirOperator_ResizeEvent(KDirOperator* self, QResizeEvent* event);
    friend void KDirOperator_QBaseResizeEvent(KDirOperator* self, QResizeEvent* event);
    friend void KDirOperator_ActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos);
    friend void KDirOperator_QBaseActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos);
    friend void KDirOperator_ChangeEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_QBaseChangeEvent(KDirOperator* self, QEvent* event);
    friend bool KDirOperator_EventFilter(KDirOperator* self, QObject* watched, QEvent* event);
    friend bool KDirOperator_QBaseEventFilter(KDirOperator* self, QObject* watched, QEvent* event);
    friend void KDirOperator_SelectDir(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_QBaseSelectDir(KDirOperator* self, const KFileItem* item);
    friend bool KDirOperator_Event(KDirOperator* self, QEvent* event);
    friend bool KDirOperator_QBaseEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_MousePressEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_QBaseMousePressEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_MouseReleaseEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_QBaseMouseReleaseEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_MouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_QBaseMouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_MouseMoveEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_QBaseMouseMoveEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_WheelEvent(KDirOperator* self, QWheelEvent* event);
    friend void KDirOperator_QBaseWheelEvent(KDirOperator* self, QWheelEvent* event);
    friend void KDirOperator_KeyPressEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_QBaseKeyPressEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_KeyReleaseEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_QBaseKeyReleaseEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_FocusInEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_QBaseFocusInEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_FocusOutEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_QBaseFocusOutEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_EnterEvent(KDirOperator* self, QEnterEvent* event);
    friend void KDirOperator_QBaseEnterEvent(KDirOperator* self, QEnterEvent* event);
    friend void KDirOperator_LeaveEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_QBaseLeaveEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_PaintEvent(KDirOperator* self, QPaintEvent* event);
    friend void KDirOperator_QBasePaintEvent(KDirOperator* self, QPaintEvent* event);
    friend void KDirOperator_MoveEvent(KDirOperator* self, QMoveEvent* event);
    friend void KDirOperator_QBaseMoveEvent(KDirOperator* self, QMoveEvent* event);
    friend void KDirOperator_CloseEvent(KDirOperator* self, QCloseEvent* event);
    friend void KDirOperator_QBaseCloseEvent(KDirOperator* self, QCloseEvent* event);
    friend void KDirOperator_ContextMenuEvent(KDirOperator* self, QContextMenuEvent* event);
    friend void KDirOperator_QBaseContextMenuEvent(KDirOperator* self, QContextMenuEvent* event);
    friend void KDirOperator_TabletEvent(KDirOperator* self, QTabletEvent* event);
    friend void KDirOperator_QBaseTabletEvent(KDirOperator* self, QTabletEvent* event);
    friend void KDirOperator_ActionEvent(KDirOperator* self, QActionEvent* event);
    friend void KDirOperator_QBaseActionEvent(KDirOperator* self, QActionEvent* event);
    friend void KDirOperator_DragEnterEvent(KDirOperator* self, QDragEnterEvent* event);
    friend void KDirOperator_QBaseDragEnterEvent(KDirOperator* self, QDragEnterEvent* event);
    friend void KDirOperator_DragMoveEvent(KDirOperator* self, QDragMoveEvent* event);
    friend void KDirOperator_QBaseDragMoveEvent(KDirOperator* self, QDragMoveEvent* event);
    friend void KDirOperator_DragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event);
    friend void KDirOperator_QBaseDragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event);
    friend void KDirOperator_DropEvent(KDirOperator* self, QDropEvent* event);
    friend void KDirOperator_QBaseDropEvent(KDirOperator* self, QDropEvent* event);
    friend void KDirOperator_ShowEvent(KDirOperator* self, QShowEvent* event);
    friend void KDirOperator_QBaseShowEvent(KDirOperator* self, QShowEvent* event);
    friend void KDirOperator_HideEvent(KDirOperator* self, QHideEvent* event);
    friend void KDirOperator_QBaseHideEvent(KDirOperator* self, QHideEvent* event);
    friend bool KDirOperator_NativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KDirOperator_QBaseNativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDirOperator_Metric(const KDirOperator* self, int param1);
    friend int KDirOperator_QBaseMetric(const KDirOperator* self, int param1);
    friend void KDirOperator_InitPainter(const KDirOperator* self, QPainter* painter);
    friend void KDirOperator_QBaseInitPainter(const KDirOperator* self, QPainter* painter);
    friend QPaintDevice* KDirOperator_Redirected(const KDirOperator* self, QPoint* offset);
    friend QPaintDevice* KDirOperator_QBaseRedirected(const KDirOperator* self, QPoint* offset);
    friend QPainter* KDirOperator_SharedPainter(const KDirOperator* self);
    friend QPainter* KDirOperator_QBaseSharedPainter(const KDirOperator* self);
    friend void KDirOperator_InputMethodEvent(KDirOperator* self, QInputMethodEvent* param1);
    friend void KDirOperator_QBaseInputMethodEvent(KDirOperator* self, QInputMethodEvent* param1);
    friend bool KDirOperator_FocusNextPrevChild(KDirOperator* self, bool next);
    friend bool KDirOperator_QBaseFocusNextPrevChild(KDirOperator* self, bool next);
    friend void KDirOperator_TimerEvent(KDirOperator* self, QTimerEvent* event);
    friend void KDirOperator_QBaseTimerEvent(KDirOperator* self, QTimerEvent* event);
    friend void KDirOperator_ChildEvent(KDirOperator* self, QChildEvent* event);
    friend void KDirOperator_QBaseChildEvent(KDirOperator* self, QChildEvent* event);
    friend void KDirOperator_CustomEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_QBaseCustomEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_ConnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_QBaseConnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_DisconnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_QBaseDisconnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_SetupActions(KDirOperator* self);
    friend void KDirOperator_QBaseSetupActions(KDirOperator* self);
    friend void KDirOperator_UpdateSortActions(KDirOperator* self);
    friend void KDirOperator_QBaseUpdateSortActions(KDirOperator* self);
    friend void KDirOperator_UpdateViewActions(KDirOperator* self);
    friend void KDirOperator_QBaseUpdateViewActions(KDirOperator* self);
    friend void KDirOperator_SetupMenu2(KDirOperator* self);
    friend void KDirOperator_QBaseSetupMenu2(KDirOperator* self);
    friend void KDirOperator_PrepareCompletionObjects(KDirOperator* self);
    friend void KDirOperator_QBasePrepareCompletionObjects(KDirOperator* self);
    friend bool KDirOperator_CheckPreviewSupport(KDirOperator* self);
    friend bool KDirOperator_QBaseCheckPreviewSupport(KDirOperator* self);
    friend void KDirOperator_ResetCursor(KDirOperator* self);
    friend void KDirOperator_QBaseResetCursor(KDirOperator* self);
    friend void KDirOperator_PathChanged(KDirOperator* self);
    friend void KDirOperator_QBasePathChanged(KDirOperator* self);
    friend void KDirOperator_SelectFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_QBaseSelectFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_HighlightFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_QBaseHighlightFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_SortByName(KDirOperator* self);
    friend void KDirOperator_QBaseSortByName(KDirOperator* self);
    friend void KDirOperator_SortBySize(KDirOperator* self);
    friend void KDirOperator_QBaseSortBySize(KDirOperator* self);
    friend void KDirOperator_SortByDate(KDirOperator* self);
    friend void KDirOperator_QBaseSortByDate(KDirOperator* self);
    friend void KDirOperator_SortByType(KDirOperator* self);
    friend void KDirOperator_QBaseSortByType(KDirOperator* self);
    friend void KDirOperator_SortReversed(KDirOperator* self);
    friend void KDirOperator_QBaseSortReversed(KDirOperator* self);
    friend void KDirOperator_ToggleDirsFirst(KDirOperator* self);
    friend void KDirOperator_QBaseToggleDirsFirst(KDirOperator* self);
    friend void KDirOperator_ToggleIgnoreCase(KDirOperator* self);
    friend void KDirOperator_QBaseToggleIgnoreCase(KDirOperator* self);
    friend void KDirOperator_SlotCompletionMatch(KDirOperator* self, const libqt_string match);
    friend void KDirOperator_QBaseSlotCompletionMatch(KDirOperator* self, const libqt_string match);
    friend void KDirOperator_UpdateMicroFocus(KDirOperator* self);
    friend void KDirOperator_QBaseUpdateMicroFocus(KDirOperator* self);
    friend void KDirOperator_Create(KDirOperator* self);
    friend void KDirOperator_QBaseCreate(KDirOperator* self);
    friend void KDirOperator_Destroy(KDirOperator* self);
    friend void KDirOperator_QBaseDestroy(KDirOperator* self);
    friend bool KDirOperator_FocusNextChild(KDirOperator* self);
    friend bool KDirOperator_QBaseFocusNextChild(KDirOperator* self);
    friend bool KDirOperator_FocusPreviousChild(KDirOperator* self);
    friend bool KDirOperator_QBaseFocusPreviousChild(KDirOperator* self);
    friend QObject* KDirOperator_Sender(const KDirOperator* self);
    friend QObject* KDirOperator_QBaseSender(const KDirOperator* self);
    friend int KDirOperator_SenderSignalIndex(const KDirOperator* self);
    friend int KDirOperator_QBaseSenderSignalIndex(const KDirOperator* self);
    friend int KDirOperator_Receivers(const KDirOperator* self, const char* signal);
    friend int KDirOperator_QBaseReceivers(const KDirOperator* self, const char* signal);
    friend bool KDirOperator_IsSignalConnected(const KDirOperator* self, const QMetaMethod* signal);
    friend bool KDirOperator_QBaseIsSignalConnected(const KDirOperator* self, const QMetaMethod* signal);
    friend double KDirOperator_GetDecodedMetricF(const KDirOperator* self, int metricA, int metricB);
    friend double KDirOperator_QBaseGetDecodedMetricF(const KDirOperator* self, int metricA, int metricB);
};

#endif
