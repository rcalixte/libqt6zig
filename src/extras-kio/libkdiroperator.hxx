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
    using KDirOperator_MetaObject_Callback = QMetaObject* (*)();
    using KDirOperator_Metacast_Callback = void* (*)(KDirOperator*, const char*);
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
    using KDirOperator_SlotCompletionMatch_Callback = void (*)(KDirOperator*, const char*);
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
    KDirOperator_MetaObject_Callback kdiroperator_metaobject_callback = nullptr;
    KDirOperator_Metacast_Callback kdiroperator_metacast_callback = nullptr;
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
    mutable bool kdiroperator_metaobject_isbase = false;
    mutable bool kdiroperator_metacast_isbase = false;
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

    // Callback setters
    inline void setKDirOperator_MetaObject_Callback(KDirOperator_MetaObject_Callback cb) { kdiroperator_metaobject_callback = cb; }
    inline void setKDirOperator_Metacast_Callback(KDirOperator_Metacast_Callback cb) { kdiroperator_metacast_callback = cb; }
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
    inline void setKDirOperator_MetaObject_IsBase(bool value) const { kdiroperator_metaobject_isbase = value; }
    inline void setKDirOperator_Metacast_IsBase(bool value) const { kdiroperator_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kdiroperator_metaobject_isbase) {
            kdiroperator_metaobject_isbase = false;
            return KDirOperator::metaObject();
        }
        auto metaobject_cb = kdiroperator_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KDirOperator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kdiroperator_metacast_isbase) {
            kdiroperator_metacast_isbase = false;
            return KDirOperator::qt_metacast(param1);
        }
        auto metacast_cb = kdiroperator_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdiroperator_metacall_isbase) {
            kdiroperator_metacall_isbase = false;
            return KDirOperator::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kdiroperator_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setShowHiddenFiles(bool s) override {
        if (kdiroperator_setshowhiddenfiles_isbase) {
            kdiroperator_setshowhiddenfiles_isbase = false;
            KDirOperator::setShowHiddenFiles(s);
            return;
        }
        auto setshowhiddenfiles_cb = kdiroperator_setshowhiddenfiles_callback;
        if (setshowhiddenfiles_cb) {
            bool cbval1 = s;

            setshowhiddenfiles_cb(this, cbval1);
            return;
        }
        KDirOperator::setShowHiddenFiles(s);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setUrl(const QUrl& url, bool clearforward) override {
        if (kdiroperator_seturl_isbase) {
            kdiroperator_seturl_isbase = false;
            KDirOperator::setUrl(url, clearforward);
            return;
        }
        auto seturl_cb = kdiroperator_seturl_callback;
        if (seturl_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = clearforward;

            seturl_cb(this, cbval1, cbval2);
            return;
        }
        KDirOperator::setUrl(url, clearforward);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KFile::Modes m) override {
        if (kdiroperator_setmode_isbase) {
            kdiroperator_setmode_isbase = false;
            KDirOperator::setMode(m);
            return;
        }
        auto setmode_cb = kdiroperator_setmode_callback;
        if (setmode_cb) {
            int cbval1 = static_cast<int>(m);

            setmode_cb(this, cbval1);
            return;
        }
        KDirOperator::setMode(m);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPreviewWidget(KPreviewWidgetBase* w) override {
        if (kdiroperator_setpreviewwidget_isbase) {
            kdiroperator_setpreviewwidget_isbase = false;
            KDirOperator::setPreviewWidget(w);
            return;
        }
        auto setpreviewwidget_cb = kdiroperator_setpreviewwidget_callback;
        if (setpreviewwidget_cb) {
            KPreviewWidgetBase* cbval1 = w;

            setpreviewwidget_cb(this, cbval1);
            return;
        }
        KDirOperator::setPreviewWidget(w);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setViewConfig(KConfigGroup& configGroup) override {
        if (kdiroperator_setviewconfig_isbase) {
            kdiroperator_setviewconfig_isbase = false;
            KDirOperator::setViewConfig(configGroup);
            return;
        }
        auto setviewconfig_cb = kdiroperator_setviewconfig_callback;
        if (setviewconfig_cb) {
            KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &configGroup_ret;

            setviewconfig_cb(this, cbval1);
            return;
        }
        KDirOperator::setViewConfig(configGroup);
    }

    // Virtual method for C ABI access and custom callback
    virtual void readConfig(const KConfigGroup& configGroup) override {
        if (kdiroperator_readconfig_isbase) {
            kdiroperator_readconfig_isbase = false;
            KDirOperator::readConfig(configGroup);
            return;
        }
        auto readconfig_cb = kdiroperator_readconfig_callback;
        if (readconfig_cb) {
            const KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = const_cast<KConfigGroup*>(&configGroup_ret);

            readconfig_cb(this, cbval1);
            return;
        }
        KDirOperator::readConfig(configGroup);
    }

    // Virtual method for C ABI access and custom callback
    virtual void writeConfig(KConfigGroup& configGroup) override {
        if (kdiroperator_writeconfig_isbase) {
            kdiroperator_writeconfig_isbase = false;
            KDirOperator::writeConfig(configGroup);
            return;
        }
        auto writeconfig_cb = kdiroperator_writeconfig_callback;
        if (writeconfig_cb) {
            KConfigGroup& configGroup_ret = configGroup;
            // Cast returned reference into pointer
            KConfigGroup* cbval1 = &configGroup_ret;

            writeconfig_cb(this, cbval1);
            return;
        }
        KDirOperator::writeConfig(configGroup);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::DeleteJob* del(const KFileItemList& items, QWidget* parent, bool ask, bool showProgress) override {
        if (kdiroperator_del_isbase) {
            kdiroperator_del_isbase = false;
            return KDirOperator::del(items, parent, ask, showProgress);
        }
        auto del_cb = kdiroperator_del_callback;
        if (del_cb) {
            const KFileItemList& items_ret = items;
            // Cast returned reference into pointer
            KFileItemList* cbval1 = const_cast<KFileItemList*>(&items_ret);
            QWidget* cbval2 = parent;
            bool cbval3 = ask;
            bool cbval4 = showProgress;

            KIO__DeleteJob* callback_ret = del_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KDirOperator::del(items, parent, ask, showProgress);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnableDirHighlighting(bool enable) override {
        if (kdiroperator_setenabledirhighlighting_isbase) {
            kdiroperator_setenabledirhighlighting_isbase = false;
            KDirOperator::setEnableDirHighlighting(enable);
            return;
        }
        auto setenabledirhighlighting_cb = kdiroperator_setenabledirhighlighting_callback;
        if (setenabledirhighlighting_cb) {
            bool cbval1 = enable;

            setenabledirhighlighting_cb(this, cbval1);
            return;
        }
        KDirOperator::setEnableDirHighlighting(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAcceptDrops(bool b) override {
        if (kdiroperator_setacceptdrops_isbase) {
            kdiroperator_setacceptdrops_isbase = false;
            KDirOperator::setAcceptDrops(b);
            return;
        }
        auto setacceptdrops_cb = kdiroperator_setacceptdrops_callback;
        if (setacceptdrops_cb) {
            bool cbval1 = b;

            setacceptdrops_cb(this, cbval1);
            return;
        }
        KDirOperator::setAcceptDrops(b);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDropOptions(int options) override {
        if (kdiroperator_setdropoptions_isbase) {
            kdiroperator_setdropoptions_isbase = false;
            KDirOperator::setDropOptions(options);
            return;
        }
        auto setdropoptions_cb = kdiroperator_setdropoptions_callback;
        if (setdropoptions_cb) {
            int cbval1 = options;

            setdropoptions_cb(this, cbval1);
            return;
        }
        KDirOperator::setDropOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::CopyJob* trash(const KFileItemList& items, QWidget* parent, bool ask, bool showProgress) override {
        if (kdiroperator_trash_isbase) {
            kdiroperator_trash_isbase = false;
            return KDirOperator::trash(items, parent, ask, showProgress);
        }
        auto trash_cb = kdiroperator_trash_callback;
        if (trash_cb) {
            const KFileItemList& items_ret = items;
            // Cast returned reference into pointer
            KFileItemList* cbval1 = const_cast<KFileItemList*>(&items_ret);
            QWidget* cbval2 = parent;
            bool cbval3 = ask;
            bool cbval4 = showProgress;

            KIO__CopyJob* callback_ret = trash_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KDirOperator::trash(items, parent, ask, showProgress);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemView* createView(QWidget* parent, KFile::FileView viewKind) override {
        if (kdiroperator_createview_isbase) {
            kdiroperator_createview_isbase = false;
            return KDirOperator::createView(parent, viewKind);
        }
        auto createview_cb = kdiroperator_createview_callback;
        if (createview_cb) {
            QWidget* cbval1 = parent;
            int cbval2 = static_cast<int>(viewKind);

            QAbstractItemView* callback_ret = createview_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirOperator::createView(parent, viewKind);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDirLister(KDirLister* lister) override {
        if (kdiroperator_setdirlister_isbase) {
            kdiroperator_setdirlister_isbase = false;
            KDirOperator::setDirLister(lister);
            return;
        }
        auto setdirlister_cb = kdiroperator_setdirlister_callback;
        if (setdirlister_cb) {
            KDirLister* cbval1 = lister;

            setdirlister_cb(this, cbval1);
            return;
        }
        KDirOperator::setDirLister(lister);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdiroperator_resizeevent_isbase) {
            kdiroperator_resizeevent_isbase = false;
            KDirOperator::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kdiroperator_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KDirOperator::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void activatedMenu(const KFileItem& item, const QPoint& pos) override {
        if (kdiroperator_activatedmenu_isbase) {
            kdiroperator_activatedmenu_isbase = false;
            KDirOperator::activatedMenu(item, pos);
            return;
        }
        auto activatedmenu_cb = kdiroperator_activatedmenu_callback;
        if (activatedmenu_cb) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&pos_ret);

            activatedmenu_cb(this, cbval1, cbval2);
            return;
        }
        KDirOperator::activatedMenu(item, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kdiroperator_changeevent_isbase) {
            kdiroperator_changeevent_isbase = false;
            KDirOperator::changeEvent(event);
            return;
        }
        auto changeevent_cb = kdiroperator_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        KDirOperator::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdiroperator_eventfilter_isbase) {
            kdiroperator_eventfilter_isbase = false;
            return KDirOperator::eventFilter(watched, event);
        }
        auto eventfilter_cb = kdiroperator_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KDirOperator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void back() override {
        if (kdiroperator_back_isbase) {
            kdiroperator_back_isbase = false;
            KDirOperator::back();
            return;
        }
        auto back_cb = kdiroperator_back_callback;
        if (back_cb) {
            back_cb();
            return;
        }
        KDirOperator::back();
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (kdiroperator_forward_isbase) {
            kdiroperator_forward_isbase = false;
            KDirOperator::forward();
            return;
        }
        auto forward_cb = kdiroperator_forward_callback;
        if (forward_cb) {
            forward_cb();
            return;
        }
        KDirOperator::forward();
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (kdiroperator_home_isbase) {
            kdiroperator_home_isbase = false;
            KDirOperator::home();
            return;
        }
        auto home_cb = kdiroperator_home_callback;
        if (home_cb) {
            home_cb();
            return;
        }
        KDirOperator::home();
    }

    // Virtual method for C ABI access and custom callback
    virtual void cdUp() override {
        if (kdiroperator_cdup_isbase) {
            kdiroperator_cdup_isbase = false;
            KDirOperator::cdUp();
            return;
        }
        auto cdup_cb = kdiroperator_cdup_callback;
        if (cdup_cb) {
            cdup_cb();
            return;
        }
        KDirOperator::cdUp();
    }

    // Virtual method for C ABI access and custom callback
    virtual void rereadDir() override {
        if (kdiroperator_rereaddir_isbase) {
            kdiroperator_rereaddir_isbase = false;
            KDirOperator::rereadDir();
            return;
        }
        auto rereaddir_cb = kdiroperator_rereaddir_callback;
        if (rereaddir_cb) {
            rereaddir_cb();
            return;
        }
        KDirOperator::rereadDir();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mkdir() override {
        if (kdiroperator_mkdir_isbase) {
            kdiroperator_mkdir_isbase = false;
            KDirOperator::mkdir();
            return;
        }
        auto mkdir_cb = kdiroperator_mkdir_callback;
        if (mkdir_cb) {
            mkdir_cb();
            return;
        }
        KDirOperator::mkdir();
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteSelected() override {
        if (kdiroperator_deleteselected_isbase) {
            kdiroperator_deleteselected_isbase = false;
            KDirOperator::deleteSelected();
            return;
        }
        auto deleteselected_cb = kdiroperator_deleteselected_callback;
        if (deleteselected_cb) {
            deleteselected_cb();
            return;
        }
        KDirOperator::deleteSelected();
    }

    // Virtual method for C ABI access and custom callback
    virtual void trashSelected() override {
        if (kdiroperator_trashselected_isbase) {
            kdiroperator_trashselected_isbase = false;
            KDirOperator::trashSelected();
            return;
        }
        auto trashselected_cb = kdiroperator_trashselected_callback;
        if (trashselected_cb) {
            trashselected_cb();
            return;
        }
        KDirOperator::trashSelected();
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectDir(const KFileItem& item) override {
        if (kdiroperator_selectdir_isbase) {
            kdiroperator_selectdir_isbase = false;
            KDirOperator::selectDir(item);
            return;
        }
        auto selectdir_cb = kdiroperator_selectdir_callback;
        if (selectdir_cb) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);

            selectdir_cb(this, cbval1);
            return;
        }
        KDirOperator::selectDir(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdiroperator_devtype_isbase) {
            kdiroperator_devtype_isbase = false;
            return KDirOperator::devType();
        }
        auto devtype_cb = kdiroperator_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdiroperator_setvisible_isbase) {
            kdiroperator_setvisible_isbase = false;
            KDirOperator::setVisible(visible);
            return;
        }
        auto setvisible_cb = kdiroperator_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KDirOperator::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdiroperator_sizehint_isbase) {
            kdiroperator_sizehint_isbase = false;
            return KDirOperator::sizeHint();
        }
        auto sizehint_cb = kdiroperator_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KDirOperator::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdiroperator_minimumsizehint_isbase) {
            kdiroperator_minimumsizehint_isbase = false;
            return KDirOperator::minimumSizeHint();
        }
        auto minimumsizehint_cb = kdiroperator_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KDirOperator::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdiroperator_heightforwidth_isbase) {
            kdiroperator_heightforwidth_isbase = false;
            return KDirOperator::heightForWidth(param1);
        }
        auto heightforwidth_cb = kdiroperator_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdiroperator_hasheightforwidth_isbase) {
            kdiroperator_hasheightforwidth_isbase = false;
            return KDirOperator::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kdiroperator_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KDirOperator::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdiroperator_paintengine_isbase) {
            kdiroperator_paintengine_isbase = false;
            return KDirOperator::paintEngine();
        }
        auto paintengine_cb = kdiroperator_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KDirOperator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdiroperator_event_isbase) {
            kdiroperator_event_isbase = false;
            return KDirOperator::event(event);
        }
        auto event_cb = kdiroperator_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdiroperator_mousepressevent_isbase) {
            kdiroperator_mousepressevent_isbase = false;
            KDirOperator::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kdiroperator_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KDirOperator::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kdiroperator_mousereleaseevent_isbase) {
            kdiroperator_mousereleaseevent_isbase = false;
            KDirOperator::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kdiroperator_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KDirOperator::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdiroperator_mousedoubleclickevent_isbase) {
            kdiroperator_mousedoubleclickevent_isbase = false;
            KDirOperator::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kdiroperator_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KDirOperator::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdiroperator_mousemoveevent_isbase) {
            kdiroperator_mousemoveevent_isbase = false;
            KDirOperator::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kdiroperator_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KDirOperator::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdiroperator_wheelevent_isbase) {
            kdiroperator_wheelevent_isbase = false;
            KDirOperator::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kdiroperator_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KDirOperator::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdiroperator_keypressevent_isbase) {
            kdiroperator_keypressevent_isbase = false;
            KDirOperator::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kdiroperator_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KDirOperator::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdiroperator_keyreleaseevent_isbase) {
            kdiroperator_keyreleaseevent_isbase = false;
            KDirOperator::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kdiroperator_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KDirOperator::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdiroperator_focusinevent_isbase) {
            kdiroperator_focusinevent_isbase = false;
            KDirOperator::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kdiroperator_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KDirOperator::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdiroperator_focusoutevent_isbase) {
            kdiroperator_focusoutevent_isbase = false;
            KDirOperator::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kdiroperator_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KDirOperator::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdiroperator_enterevent_isbase) {
            kdiroperator_enterevent_isbase = false;
            KDirOperator::enterEvent(event);
            return;
        }
        auto enterevent_cb = kdiroperator_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KDirOperator::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdiroperator_leaveevent_isbase) {
            kdiroperator_leaveevent_isbase = false;
            KDirOperator::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kdiroperator_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KDirOperator::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kdiroperator_paintevent_isbase) {
            kdiroperator_paintevent_isbase = false;
            KDirOperator::paintEvent(event);
            return;
        }
        auto paintevent_cb = kdiroperator_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KDirOperator::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdiroperator_moveevent_isbase) {
            kdiroperator_moveevent_isbase = false;
            KDirOperator::moveEvent(event);
            return;
        }
        auto moveevent_cb = kdiroperator_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KDirOperator::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdiroperator_closeevent_isbase) {
            kdiroperator_closeevent_isbase = false;
            KDirOperator::closeEvent(event);
            return;
        }
        auto closeevent_cb = kdiroperator_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KDirOperator::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdiroperator_contextmenuevent_isbase) {
            kdiroperator_contextmenuevent_isbase = false;
            KDirOperator::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kdiroperator_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KDirOperator::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdiroperator_tabletevent_isbase) {
            kdiroperator_tabletevent_isbase = false;
            KDirOperator::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kdiroperator_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KDirOperator::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdiroperator_actionevent_isbase) {
            kdiroperator_actionevent_isbase = false;
            KDirOperator::actionEvent(event);
            return;
        }
        auto actionevent_cb = kdiroperator_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KDirOperator::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdiroperator_dragenterevent_isbase) {
            kdiroperator_dragenterevent_isbase = false;
            KDirOperator::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kdiroperator_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KDirOperator::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdiroperator_dragmoveevent_isbase) {
            kdiroperator_dragmoveevent_isbase = false;
            KDirOperator::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kdiroperator_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KDirOperator::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdiroperator_dragleaveevent_isbase) {
            kdiroperator_dragleaveevent_isbase = false;
            KDirOperator::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kdiroperator_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KDirOperator::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdiroperator_dropevent_isbase) {
            kdiroperator_dropevent_isbase = false;
            KDirOperator::dropEvent(event);
            return;
        }
        auto dropevent_cb = kdiroperator_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KDirOperator::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdiroperator_showevent_isbase) {
            kdiroperator_showevent_isbase = false;
            KDirOperator::showEvent(event);
            return;
        }
        auto showevent_cb = kdiroperator_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KDirOperator::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kdiroperator_hideevent_isbase) {
            kdiroperator_hideevent_isbase = false;
            KDirOperator::hideEvent(event);
            return;
        }
        auto hideevent_cb = kdiroperator_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KDirOperator::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdiroperator_nativeevent_isbase) {
            kdiroperator_nativeevent_isbase = false;
            return KDirOperator::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kdiroperator_nativeevent_callback;
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
        return KDirOperator::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdiroperator_metric_isbase) {
            kdiroperator_metric_isbase = false;
            return KDirOperator::metric(param1);
        }
        auto metric_cb = kdiroperator_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdiroperator_initpainter_isbase) {
            kdiroperator_initpainter_isbase = false;
            KDirOperator::initPainter(painter);
            return;
        }
        auto initpainter_cb = kdiroperator_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KDirOperator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdiroperator_redirected_isbase) {
            kdiroperator_redirected_isbase = false;
            return KDirOperator::redirected(offset);
        }
        auto redirected_cb = kdiroperator_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdiroperator_sharedpainter_isbase) {
            kdiroperator_sharedpainter_isbase = false;
            return KDirOperator::sharedPainter();
        }
        auto sharedpainter_cb = kdiroperator_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KDirOperator::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdiroperator_inputmethodevent_isbase) {
            kdiroperator_inputmethodevent_isbase = false;
            KDirOperator::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kdiroperator_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KDirOperator::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdiroperator_inputmethodquery_isbase) {
            kdiroperator_inputmethodquery_isbase = false;
            return KDirOperator::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kdiroperator_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KDirOperator::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdiroperator_focusnextprevchild_isbase) {
            kdiroperator_focusnextprevchild_isbase = false;
            return KDirOperator::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kdiroperator_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdiroperator_timerevent_isbase) {
            kdiroperator_timerevent_isbase = false;
            KDirOperator::timerEvent(event);
            return;
        }
        auto timerevent_cb = kdiroperator_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KDirOperator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdiroperator_childevent_isbase) {
            kdiroperator_childevent_isbase = false;
            KDirOperator::childEvent(event);
            return;
        }
        auto childevent_cb = kdiroperator_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KDirOperator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdiroperator_customevent_isbase) {
            kdiroperator_customevent_isbase = false;
            KDirOperator::customEvent(event);
            return;
        }
        auto customevent_cb = kdiroperator_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KDirOperator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdiroperator_connectnotify_isbase) {
            kdiroperator_connectnotify_isbase = false;
            KDirOperator::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kdiroperator_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KDirOperator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdiroperator_disconnectnotify_isbase) {
            kdiroperator_disconnectnotify_isbase = false;
            KDirOperator::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kdiroperator_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KDirOperator::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setupActions() {
        if (kdiroperator_setupactions_isbase) {
            kdiroperator_setupactions_isbase = false;
            KDirOperator::setupActions();
            return;
        }
        auto setupactions_cb = kdiroperator_setupactions_callback;
        if (setupactions_cb) {
            setupactions_cb();
            return;
        }
        KDirOperator::setupActions();
    }

    // Virtual method for C ABI access and custom callback
    void updateSortActions() {
        if (kdiroperator_updatesortactions_isbase) {
            kdiroperator_updatesortactions_isbase = false;
            KDirOperator::updateSortActions();
            return;
        }
        auto updatesortactions_cb = kdiroperator_updatesortactions_callback;
        if (updatesortactions_cb) {
            updatesortactions_cb();
            return;
        }
        KDirOperator::updateSortActions();
    }

    // Virtual method for C ABI access and custom callback
    void updateViewActions() {
        if (kdiroperator_updateviewactions_isbase) {
            kdiroperator_updateviewactions_isbase = false;
            KDirOperator::updateViewActions();
            return;
        }
        auto updateviewactions_cb = kdiroperator_updateviewactions_callback;
        if (updateviewactions_cb) {
            updateviewactions_cb();
            return;
        }
        KDirOperator::updateViewActions();
    }

    // Virtual method for C ABI access and custom callback
    void setupMenu() {
        if (kdiroperator_setupmenu2_isbase) {
            kdiroperator_setupmenu2_isbase = false;
            KDirOperator::setupMenu();
            return;
        }
        auto setupmenu2_cb = kdiroperator_setupmenu2_callback;
        if (setupmenu2_cb) {
            setupmenu2_cb();
            return;
        }
        KDirOperator::setupMenu();
    }

    // Virtual method for C ABI access and custom callback
    void prepareCompletionObjects() {
        if (kdiroperator_preparecompletionobjects_isbase) {
            kdiroperator_preparecompletionobjects_isbase = false;
            KDirOperator::prepareCompletionObjects();
            return;
        }
        auto preparecompletionobjects_cb = kdiroperator_preparecompletionobjects_callback;
        if (preparecompletionobjects_cb) {
            preparecompletionobjects_cb();
            return;
        }
        KDirOperator::prepareCompletionObjects();
    }

    // Virtual method for C ABI access and custom callback
    bool checkPreviewSupport() {
        if (kdiroperator_checkpreviewsupport_isbase) {
            kdiroperator_checkpreviewsupport_isbase = false;
            return KDirOperator::checkPreviewSupport();
        }
        auto checkpreviewsupport_cb = kdiroperator_checkpreviewsupport_callback;
        if (checkpreviewsupport_cb) {
            bool callback_ret = checkpreviewsupport_cb();
            return callback_ret;
        }
        return KDirOperator::checkPreviewSupport();
    }

    // Virtual method for C ABI access and custom callback
    void resetCursor() {
        if (kdiroperator_resetcursor_isbase) {
            kdiroperator_resetcursor_isbase = false;
            KDirOperator::resetCursor();
            return;
        }
        auto resetcursor_cb = kdiroperator_resetcursor_callback;
        if (resetcursor_cb) {
            resetcursor_cb();
            return;
        }
        KDirOperator::resetCursor();
    }

    // Virtual method for C ABI access and custom callback
    void pathChanged() {
        if (kdiroperator_pathchanged_isbase) {
            kdiroperator_pathchanged_isbase = false;
            KDirOperator::pathChanged();
            return;
        }
        auto pathchanged_cb = kdiroperator_pathchanged_callback;
        if (pathchanged_cb) {
            pathchanged_cb();
            return;
        }
        KDirOperator::pathChanged();
    }

    // Virtual method for C ABI access and custom callback
    void selectFile(const KFileItem& item) {
        if (kdiroperator_selectfile_isbase) {
            kdiroperator_selectfile_isbase = false;
            KDirOperator::selectFile(item);
            return;
        }
        auto selectfile_cb = kdiroperator_selectfile_callback;
        if (selectfile_cb) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);

            selectfile_cb(this, cbval1);
            return;
        }
        KDirOperator::selectFile(item);
    }

    // Virtual method for C ABI access and custom callback
    void highlightFile(const KFileItem& item) {
        if (kdiroperator_highlightfile_isbase) {
            kdiroperator_highlightfile_isbase = false;
            KDirOperator::highlightFile(item);
            return;
        }
        auto highlightfile_cb = kdiroperator_highlightfile_callback;
        if (highlightfile_cb) {
            const KFileItem& item_ret = item;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&item_ret);

            highlightfile_cb(this, cbval1);
            return;
        }
        KDirOperator::highlightFile(item);
    }

    // Virtual method for C ABI access and custom callback
    void sortByName() {
        if (kdiroperator_sortbyname_isbase) {
            kdiroperator_sortbyname_isbase = false;
            KDirOperator::sortByName();
            return;
        }
        auto sortbyname_cb = kdiroperator_sortbyname_callback;
        if (sortbyname_cb) {
            sortbyname_cb();
            return;
        }
        KDirOperator::sortByName();
    }

    // Virtual method for C ABI access and custom callback
    void sortBySize() {
        if (kdiroperator_sortbysize_isbase) {
            kdiroperator_sortbysize_isbase = false;
            KDirOperator::sortBySize();
            return;
        }
        auto sortbysize_cb = kdiroperator_sortbysize_callback;
        if (sortbysize_cb) {
            sortbysize_cb();
            return;
        }
        KDirOperator::sortBySize();
    }

    // Virtual method for C ABI access and custom callback
    void sortByDate() {
        if (kdiroperator_sortbydate_isbase) {
            kdiroperator_sortbydate_isbase = false;
            KDirOperator::sortByDate();
            return;
        }
        auto sortbydate_cb = kdiroperator_sortbydate_callback;
        if (sortbydate_cb) {
            sortbydate_cb();
            return;
        }
        KDirOperator::sortByDate();
    }

    // Virtual method for C ABI access and custom callback
    void sortByType() {
        if (kdiroperator_sortbytype_isbase) {
            kdiroperator_sortbytype_isbase = false;
            KDirOperator::sortByType();
            return;
        }
        auto sortbytype_cb = kdiroperator_sortbytype_callback;
        if (sortbytype_cb) {
            sortbytype_cb();
            return;
        }
        KDirOperator::sortByType();
    }

    // Virtual method for C ABI access and custom callback
    void sortReversed() {
        if (kdiroperator_sortreversed_isbase) {
            kdiroperator_sortreversed_isbase = false;
            KDirOperator::sortReversed();
            return;
        }
        auto sortreversed_cb = kdiroperator_sortreversed_callback;
        if (sortreversed_cb) {
            sortreversed_cb();
            return;
        }
        KDirOperator::sortReversed();
    }

    // Virtual method for C ABI access and custom callback
    void toggleDirsFirst() {
        if (kdiroperator_toggledirsfirst_isbase) {
            kdiroperator_toggledirsfirst_isbase = false;
            KDirOperator::toggleDirsFirst();
            return;
        }
        auto toggledirsfirst_cb = kdiroperator_toggledirsfirst_callback;
        if (toggledirsfirst_cb) {
            toggledirsfirst_cb();
            return;
        }
        KDirOperator::toggleDirsFirst();
    }

    // Virtual method for C ABI access and custom callback
    void toggleIgnoreCase() {
        if (kdiroperator_toggleignorecase_isbase) {
            kdiroperator_toggleignorecase_isbase = false;
            KDirOperator::toggleIgnoreCase();
            return;
        }
        auto toggleignorecase_cb = kdiroperator_toggleignorecase_callback;
        if (toggleignorecase_cb) {
            toggleignorecase_cb();
            return;
        }
        KDirOperator::toggleIgnoreCase();
    }

    // Virtual method for C ABI access and custom callback
    void slotCompletionMatch(const QString& match) {
        if (kdiroperator_slotcompletionmatch_isbase) {
            kdiroperator_slotcompletionmatch_isbase = false;
            KDirOperator::slotCompletionMatch(match);
            return;
        }
        auto slotcompletionmatch_cb = kdiroperator_slotcompletionmatch_callback;
        if (slotcompletionmatch_cb) {
            const QString match_ret = match;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray match_b = match_ret.toUtf8();
            auto match_str_len = match_b.length();
            const char* match_str = static_cast<const char*>(malloc(match_str_len + 1));
            memcpy((void*)match_str, match_b.data(), match_str_len);
            ((char*)match_str)[match_str_len] = '\0';
            const char* cbval1 = match_str;

            slotcompletionmatch_cb(this, cbval1);
            libqt_free(match_str);
            return;
        }
        KDirOperator::slotCompletionMatch(match);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kdiroperator_updatemicrofocus_isbase) {
            kdiroperator_updatemicrofocus_isbase = false;
            KDirOperator::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kdiroperator_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KDirOperator::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kdiroperator_create_isbase) {
            kdiroperator_create_isbase = false;
            KDirOperator::create();
            return;
        }
        auto create_cb = kdiroperator_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KDirOperator::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kdiroperator_destroy_isbase) {
            kdiroperator_destroy_isbase = false;
            KDirOperator::destroy();
            return;
        }
        auto destroy_cb = kdiroperator_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KDirOperator::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kdiroperator_focusnextchild_isbase) {
            kdiroperator_focusnextchild_isbase = false;
            return KDirOperator::focusNextChild();
        }
        auto focusnextchild_cb = kdiroperator_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KDirOperator::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kdiroperator_focuspreviouschild_isbase) {
            kdiroperator_focuspreviouschild_isbase = false;
            return KDirOperator::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kdiroperator_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KDirOperator::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdiroperator_sender_isbase) {
            kdiroperator_sender_isbase = false;
            return KDirOperator::sender();
        }
        auto sender_cb = kdiroperator_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KDirOperator::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdiroperator_sendersignalindex_isbase) {
            kdiroperator_sendersignalindex_isbase = false;
            return KDirOperator::senderSignalIndex();
        }
        auto sendersignalindex_cb = kdiroperator_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdiroperator_receivers_isbase) {
            kdiroperator_receivers_isbase = false;
            return KDirOperator::receivers(signal);
        }
        auto receivers_cb = kdiroperator_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KDirOperator::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdiroperator_issignalconnected_isbase) {
            kdiroperator_issignalconnected_isbase = false;
            return KDirOperator::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kdiroperator_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KDirOperator::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kdiroperator_getdecodedmetricf_isbase) {
            kdiroperator_getdecodedmetricf_isbase = false;
            return KDirOperator::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kdiroperator_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KDirOperator::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend QAbstractItemView* KDirOperator_CreateView(KDirOperator* self, QWidget* parent, int viewKind);
    friend QAbstractItemView* KDirOperator_SuperCreateView(KDirOperator* self, QWidget* parent, int viewKind);
    friend void KDirOperator_SetDirLister(KDirOperator* self, KDirLister* lister);
    friend void KDirOperator_SuperSetDirLister(KDirOperator* self, KDirLister* lister);
    friend void KDirOperator_ResizeEvent(KDirOperator* self, QResizeEvent* event);
    friend void KDirOperator_SuperResizeEvent(KDirOperator* self, QResizeEvent* event);
    friend void KDirOperator_ActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos);
    friend void KDirOperator_SuperActivatedMenu(KDirOperator* self, const KFileItem* item, const QPoint* pos);
    friend void KDirOperator_ChangeEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_SuperChangeEvent(KDirOperator* self, QEvent* event);
    friend bool KDirOperator_EventFilter(KDirOperator* self, QObject* watched, QEvent* event);
    friend bool KDirOperator_SuperEventFilter(KDirOperator* self, QObject* watched, QEvent* event);
    friend void KDirOperator_SelectDir(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_SuperSelectDir(KDirOperator* self, const KFileItem* item);
    friend bool KDirOperator_Event(KDirOperator* self, QEvent* event);
    friend bool KDirOperator_SuperEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_MousePressEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperMousePressEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_MouseReleaseEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperMouseReleaseEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_MouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperMouseDoubleClickEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_MouseMoveEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_SuperMouseMoveEvent(KDirOperator* self, QMouseEvent* event);
    friend void KDirOperator_WheelEvent(KDirOperator* self, QWheelEvent* event);
    friend void KDirOperator_SuperWheelEvent(KDirOperator* self, QWheelEvent* event);
    friend void KDirOperator_KeyPressEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_SuperKeyPressEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_KeyReleaseEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_SuperKeyReleaseEvent(KDirOperator* self, QKeyEvent* event);
    friend void KDirOperator_FocusInEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_SuperFocusInEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_FocusOutEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_SuperFocusOutEvent(KDirOperator* self, QFocusEvent* event);
    friend void KDirOperator_EnterEvent(KDirOperator* self, QEnterEvent* event);
    friend void KDirOperator_SuperEnterEvent(KDirOperator* self, QEnterEvent* event);
    friend void KDirOperator_LeaveEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_SuperLeaveEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_PaintEvent(KDirOperator* self, QPaintEvent* event);
    friend void KDirOperator_SuperPaintEvent(KDirOperator* self, QPaintEvent* event);
    friend void KDirOperator_MoveEvent(KDirOperator* self, QMoveEvent* event);
    friend void KDirOperator_SuperMoveEvent(KDirOperator* self, QMoveEvent* event);
    friend void KDirOperator_CloseEvent(KDirOperator* self, QCloseEvent* event);
    friend void KDirOperator_SuperCloseEvent(KDirOperator* self, QCloseEvent* event);
    friend void KDirOperator_ContextMenuEvent(KDirOperator* self, QContextMenuEvent* event);
    friend void KDirOperator_SuperContextMenuEvent(KDirOperator* self, QContextMenuEvent* event);
    friend void KDirOperator_TabletEvent(KDirOperator* self, QTabletEvent* event);
    friend void KDirOperator_SuperTabletEvent(KDirOperator* self, QTabletEvent* event);
    friend void KDirOperator_ActionEvent(KDirOperator* self, QActionEvent* event);
    friend void KDirOperator_SuperActionEvent(KDirOperator* self, QActionEvent* event);
    friend void KDirOperator_DragEnterEvent(KDirOperator* self, QDragEnterEvent* event);
    friend void KDirOperator_SuperDragEnterEvent(KDirOperator* self, QDragEnterEvent* event);
    friend void KDirOperator_DragMoveEvent(KDirOperator* self, QDragMoveEvent* event);
    friend void KDirOperator_SuperDragMoveEvent(KDirOperator* self, QDragMoveEvent* event);
    friend void KDirOperator_DragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event);
    friend void KDirOperator_SuperDragLeaveEvent(KDirOperator* self, QDragLeaveEvent* event);
    friend void KDirOperator_DropEvent(KDirOperator* self, QDropEvent* event);
    friend void KDirOperator_SuperDropEvent(KDirOperator* self, QDropEvent* event);
    friend void KDirOperator_ShowEvent(KDirOperator* self, QShowEvent* event);
    friend void KDirOperator_SuperShowEvent(KDirOperator* self, QShowEvent* event);
    friend void KDirOperator_HideEvent(KDirOperator* self, QHideEvent* event);
    friend void KDirOperator_SuperHideEvent(KDirOperator* self, QHideEvent* event);
    friend bool KDirOperator_NativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KDirOperator_SuperNativeEvent(KDirOperator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDirOperator_Metric(const KDirOperator* self, int param1);
    friend int KDirOperator_SuperMetric(const KDirOperator* self, int param1);
    friend void KDirOperator_InitPainter(const KDirOperator* self, QPainter* painter);
    friend void KDirOperator_SuperInitPainter(const KDirOperator* self, QPainter* painter);
    friend QPaintDevice* KDirOperator_Redirected(const KDirOperator* self, QPoint* offset);
    friend QPaintDevice* KDirOperator_SuperRedirected(const KDirOperator* self, QPoint* offset);
    friend QPainter* KDirOperator_SharedPainter(const KDirOperator* self);
    friend QPainter* KDirOperator_SuperSharedPainter(const KDirOperator* self);
    friend void KDirOperator_InputMethodEvent(KDirOperator* self, QInputMethodEvent* param1);
    friend void KDirOperator_SuperInputMethodEvent(KDirOperator* self, QInputMethodEvent* param1);
    friend bool KDirOperator_FocusNextPrevChild(KDirOperator* self, bool next);
    friend bool KDirOperator_SuperFocusNextPrevChild(KDirOperator* self, bool next);
    friend void KDirOperator_TimerEvent(KDirOperator* self, QTimerEvent* event);
    friend void KDirOperator_SuperTimerEvent(KDirOperator* self, QTimerEvent* event);
    friend void KDirOperator_ChildEvent(KDirOperator* self, QChildEvent* event);
    friend void KDirOperator_SuperChildEvent(KDirOperator* self, QChildEvent* event);
    friend void KDirOperator_CustomEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_SuperCustomEvent(KDirOperator* self, QEvent* event);
    friend void KDirOperator_ConnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_SuperConnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_DisconnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_SuperDisconnectNotify(KDirOperator* self, const QMetaMethod* signal);
    friend void KDirOperator_SetupActions(KDirOperator* self);
    friend void KDirOperator_SuperSetupActions(KDirOperator* self);
    friend void KDirOperator_UpdateSortActions(KDirOperator* self);
    friend void KDirOperator_SuperUpdateSortActions(KDirOperator* self);
    friend void KDirOperator_UpdateViewActions(KDirOperator* self);
    friend void KDirOperator_SuperUpdateViewActions(KDirOperator* self);
    friend void KDirOperator_SetupMenu2(KDirOperator* self);
    friend void KDirOperator_SuperSetupMenu2(KDirOperator* self);
    friend void KDirOperator_PrepareCompletionObjects(KDirOperator* self);
    friend void KDirOperator_SuperPrepareCompletionObjects(KDirOperator* self);
    friend bool KDirOperator_CheckPreviewSupport(KDirOperator* self);
    friend bool KDirOperator_SuperCheckPreviewSupport(KDirOperator* self);
    friend void KDirOperator_ResetCursor(KDirOperator* self);
    friend void KDirOperator_SuperResetCursor(KDirOperator* self);
    friend void KDirOperator_PathChanged(KDirOperator* self);
    friend void KDirOperator_SuperPathChanged(KDirOperator* self);
    friend void KDirOperator_SelectFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_SuperSelectFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_HighlightFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_SuperHighlightFile(KDirOperator* self, const KFileItem* item);
    friend void KDirOperator_SortByName(KDirOperator* self);
    friend void KDirOperator_SuperSortByName(KDirOperator* self);
    friend void KDirOperator_SortBySize(KDirOperator* self);
    friend void KDirOperator_SuperSortBySize(KDirOperator* self);
    friend void KDirOperator_SortByDate(KDirOperator* self);
    friend void KDirOperator_SuperSortByDate(KDirOperator* self);
    friend void KDirOperator_SortByType(KDirOperator* self);
    friend void KDirOperator_SuperSortByType(KDirOperator* self);
    friend void KDirOperator_SortReversed(KDirOperator* self);
    friend void KDirOperator_SuperSortReversed(KDirOperator* self);
    friend void KDirOperator_ToggleDirsFirst(KDirOperator* self);
    friend void KDirOperator_SuperToggleDirsFirst(KDirOperator* self);
    friend void KDirOperator_ToggleIgnoreCase(KDirOperator* self);
    friend void KDirOperator_SuperToggleIgnoreCase(KDirOperator* self);
    friend void KDirOperator_SlotCompletionMatch(KDirOperator* self, const libqt_string match);
    friend void KDirOperator_SuperSlotCompletionMatch(KDirOperator* self, const libqt_string match);
    friend void KDirOperator_UpdateMicroFocus(KDirOperator* self);
    friend void KDirOperator_SuperUpdateMicroFocus(KDirOperator* self);
    friend void KDirOperator_Create(KDirOperator* self);
    friend void KDirOperator_SuperCreate(KDirOperator* self);
    friend void KDirOperator_Destroy(KDirOperator* self);
    friend void KDirOperator_SuperDestroy(KDirOperator* self);
    friend bool KDirOperator_FocusNextChild(KDirOperator* self);
    friend bool KDirOperator_SuperFocusNextChild(KDirOperator* self);
    friend bool KDirOperator_FocusPreviousChild(KDirOperator* self);
    friend bool KDirOperator_SuperFocusPreviousChild(KDirOperator* self);
    friend QObject* KDirOperator_Sender(const KDirOperator* self);
    friend QObject* KDirOperator_SuperSender(const KDirOperator* self);
    friend int KDirOperator_SenderSignalIndex(const KDirOperator* self);
    friend int KDirOperator_SuperSenderSignalIndex(const KDirOperator* self);
    friend int KDirOperator_Receivers(const KDirOperator* self, const char* signal);
    friend int KDirOperator_SuperReceivers(const KDirOperator* self, const char* signal);
    friend bool KDirOperator_IsSignalConnected(const KDirOperator* self, const QMetaMethod* signal);
    friend bool KDirOperator_SuperIsSignalConnected(const KDirOperator* self, const QMetaMethod* signal);
    friend double KDirOperator_GetDecodedMetricF(const KDirOperator* self, int metricA, int metricB);
    friend double KDirOperator_SuperGetDecodedMetricF(const KDirOperator* self, int metricA, int metricB);
};

#endif
