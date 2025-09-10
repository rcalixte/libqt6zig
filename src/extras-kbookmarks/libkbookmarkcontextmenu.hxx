#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKCONTEXTMENU_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBVIRTUALKBOOKMARKCONTEXTMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBookmarkContextMenu so that we can call protected methods
class VirtualKBookmarkContextMenu final : public KBookmarkContextMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKBookmarkContextMenu = true;

    // Virtual class public types (including callbacks)
    using KBookmarkContextMenu_Metacall_Callback = int (*)(KBookmarkContextMenu*, int, int, void**);
    using KBookmarkContextMenu_AddActions_Callback = void (*)();
    using KBookmarkContextMenu_SizeHint_Callback = QSize* (*)();
    using KBookmarkContextMenu_ChangeEvent_Callback = void (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_KeyPressEvent_Callback = void (*)(KBookmarkContextMenu*, QKeyEvent*);
    using KBookmarkContextMenu_MouseReleaseEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_MousePressEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_MouseMoveEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_WheelEvent_Callback = void (*)(KBookmarkContextMenu*, QWheelEvent*);
    using KBookmarkContextMenu_EnterEvent_Callback = void (*)(KBookmarkContextMenu*, QEnterEvent*);
    using KBookmarkContextMenu_LeaveEvent_Callback = void (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_HideEvent_Callback = void (*)(KBookmarkContextMenu*, QHideEvent*);
    using KBookmarkContextMenu_PaintEvent_Callback = void (*)(KBookmarkContextMenu*, QPaintEvent*);
    using KBookmarkContextMenu_ActionEvent_Callback = void (*)(KBookmarkContextMenu*, QActionEvent*);
    using KBookmarkContextMenu_TimerEvent_Callback = void (*)(KBookmarkContextMenu*, QTimerEvent*);
    using KBookmarkContextMenu_Event_Callback = bool (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_FocusNextPrevChild_Callback = bool (*)(KBookmarkContextMenu*, bool);
    using KBookmarkContextMenu_InitStyleOption_Callback = void (*)(const KBookmarkContextMenu*, QStyleOptionMenuItem*, QAction*);
    using KBookmarkContextMenu_DevType_Callback = int (*)();
    using KBookmarkContextMenu_SetVisible_Callback = void (*)(KBookmarkContextMenu*, bool);
    using KBookmarkContextMenu_MinimumSizeHint_Callback = QSize* (*)();
    using KBookmarkContextMenu_HeightForWidth_Callback = int (*)(const KBookmarkContextMenu*, int);
    using KBookmarkContextMenu_HasHeightForWidth_Callback = bool (*)();
    using KBookmarkContextMenu_PaintEngine_Callback = QPaintEngine* (*)();
    using KBookmarkContextMenu_MouseDoubleClickEvent_Callback = void (*)(KBookmarkContextMenu*, QMouseEvent*);
    using KBookmarkContextMenu_KeyReleaseEvent_Callback = void (*)(KBookmarkContextMenu*, QKeyEvent*);
    using KBookmarkContextMenu_FocusInEvent_Callback = void (*)(KBookmarkContextMenu*, QFocusEvent*);
    using KBookmarkContextMenu_FocusOutEvent_Callback = void (*)(KBookmarkContextMenu*, QFocusEvent*);
    using KBookmarkContextMenu_MoveEvent_Callback = void (*)(KBookmarkContextMenu*, QMoveEvent*);
    using KBookmarkContextMenu_ResizeEvent_Callback = void (*)(KBookmarkContextMenu*, QResizeEvent*);
    using KBookmarkContextMenu_CloseEvent_Callback = void (*)(KBookmarkContextMenu*, QCloseEvent*);
    using KBookmarkContextMenu_ContextMenuEvent_Callback = void (*)(KBookmarkContextMenu*, QContextMenuEvent*);
    using KBookmarkContextMenu_TabletEvent_Callback = void (*)(KBookmarkContextMenu*, QTabletEvent*);
    using KBookmarkContextMenu_DragEnterEvent_Callback = void (*)(KBookmarkContextMenu*, QDragEnterEvent*);
    using KBookmarkContextMenu_DragMoveEvent_Callback = void (*)(KBookmarkContextMenu*, QDragMoveEvent*);
    using KBookmarkContextMenu_DragLeaveEvent_Callback = void (*)(KBookmarkContextMenu*, QDragLeaveEvent*);
    using KBookmarkContextMenu_DropEvent_Callback = void (*)(KBookmarkContextMenu*, QDropEvent*);
    using KBookmarkContextMenu_ShowEvent_Callback = void (*)(KBookmarkContextMenu*, QShowEvent*);
    using KBookmarkContextMenu_NativeEvent_Callback = bool (*)(KBookmarkContextMenu*, libqt_string, void*, intptr_t*);
    using KBookmarkContextMenu_Metric_Callback = int (*)(const KBookmarkContextMenu*, int);
    using KBookmarkContextMenu_InitPainter_Callback = void (*)(const KBookmarkContextMenu*, QPainter*);
    using KBookmarkContextMenu_Redirected_Callback = QPaintDevice* (*)(const KBookmarkContextMenu*, QPoint*);
    using KBookmarkContextMenu_SharedPainter_Callback = QPainter* (*)();
    using KBookmarkContextMenu_InputMethodEvent_Callback = void (*)(KBookmarkContextMenu*, QInputMethodEvent*);
    using KBookmarkContextMenu_InputMethodQuery_Callback = QVariant* (*)(const KBookmarkContextMenu*, int);
    using KBookmarkContextMenu_EventFilter_Callback = bool (*)(KBookmarkContextMenu*, QObject*, QEvent*);
    using KBookmarkContextMenu_ChildEvent_Callback = void (*)(KBookmarkContextMenu*, QChildEvent*);
    using KBookmarkContextMenu_CustomEvent_Callback = void (*)(KBookmarkContextMenu*, QEvent*);
    using KBookmarkContextMenu_ConnectNotify_Callback = void (*)(KBookmarkContextMenu*, QMetaMethod*);
    using KBookmarkContextMenu_DisconnectNotify_Callback = void (*)(KBookmarkContextMenu*, QMetaMethod*);
    using KBookmarkContextMenu_AddBookmark_Callback = void (*)();
    using KBookmarkContextMenu_AddFolderActions_Callback = void (*)();
    using KBookmarkContextMenu_AddProperties_Callback = void (*)();
    using KBookmarkContextMenu_AddBookmarkActions_Callback = void (*)();
    using KBookmarkContextMenu_AddOpenFolderInTabs_Callback = void (*)();
    using KBookmarkContextMenu_Manager_Callback = KBookmarkManager* (*)();
    using KBookmarkContextMenu_Owner_Callback = KBookmarkOwner* (*)();
    using KBookmarkContextMenu_Bookmark_Callback = KBookmark* (*)();
    using KBookmarkContextMenu_ColumnCount_Callback = int (*)();
    using KBookmarkContextMenu_UpdateMicroFocus_Callback = void (*)();
    using KBookmarkContextMenu_Create_Callback = void (*)();
    using KBookmarkContextMenu_Destroy_Callback = void (*)();
    using KBookmarkContextMenu_FocusNextChild_Callback = bool (*)();
    using KBookmarkContextMenu_FocusPreviousChild_Callback = bool (*)();
    using KBookmarkContextMenu_Sender_Callback = QObject* (*)();
    using KBookmarkContextMenu_SenderSignalIndex_Callback = int (*)();
    using KBookmarkContextMenu_Receivers_Callback = int (*)(const KBookmarkContextMenu*, const char*);
    using KBookmarkContextMenu_IsSignalConnected_Callback = bool (*)(const KBookmarkContextMenu*, QMetaMethod*);
    using KBookmarkContextMenu_GetDecodedMetricF_Callback = double (*)(const KBookmarkContextMenu*, int, int);

  protected:
    // Instance callback storage
    KBookmarkContextMenu_Metacall_Callback kbookmarkcontextmenu_metacall_callback = nullptr;
    KBookmarkContextMenu_AddActions_Callback kbookmarkcontextmenu_addactions_callback = nullptr;
    KBookmarkContextMenu_SizeHint_Callback kbookmarkcontextmenu_sizehint_callback = nullptr;
    KBookmarkContextMenu_ChangeEvent_Callback kbookmarkcontextmenu_changeevent_callback = nullptr;
    KBookmarkContextMenu_KeyPressEvent_Callback kbookmarkcontextmenu_keypressevent_callback = nullptr;
    KBookmarkContextMenu_MouseReleaseEvent_Callback kbookmarkcontextmenu_mousereleaseevent_callback = nullptr;
    KBookmarkContextMenu_MousePressEvent_Callback kbookmarkcontextmenu_mousepressevent_callback = nullptr;
    KBookmarkContextMenu_MouseMoveEvent_Callback kbookmarkcontextmenu_mousemoveevent_callback = nullptr;
    KBookmarkContextMenu_WheelEvent_Callback kbookmarkcontextmenu_wheelevent_callback = nullptr;
    KBookmarkContextMenu_EnterEvent_Callback kbookmarkcontextmenu_enterevent_callback = nullptr;
    KBookmarkContextMenu_LeaveEvent_Callback kbookmarkcontextmenu_leaveevent_callback = nullptr;
    KBookmarkContextMenu_HideEvent_Callback kbookmarkcontextmenu_hideevent_callback = nullptr;
    KBookmarkContextMenu_PaintEvent_Callback kbookmarkcontextmenu_paintevent_callback = nullptr;
    KBookmarkContextMenu_ActionEvent_Callback kbookmarkcontextmenu_actionevent_callback = nullptr;
    KBookmarkContextMenu_TimerEvent_Callback kbookmarkcontextmenu_timerevent_callback = nullptr;
    KBookmarkContextMenu_Event_Callback kbookmarkcontextmenu_event_callback = nullptr;
    KBookmarkContextMenu_FocusNextPrevChild_Callback kbookmarkcontextmenu_focusnextprevchild_callback = nullptr;
    KBookmarkContextMenu_InitStyleOption_Callback kbookmarkcontextmenu_initstyleoption_callback = nullptr;
    KBookmarkContextMenu_DevType_Callback kbookmarkcontextmenu_devtype_callback = nullptr;
    KBookmarkContextMenu_SetVisible_Callback kbookmarkcontextmenu_setvisible_callback = nullptr;
    KBookmarkContextMenu_MinimumSizeHint_Callback kbookmarkcontextmenu_minimumsizehint_callback = nullptr;
    KBookmarkContextMenu_HeightForWidth_Callback kbookmarkcontextmenu_heightforwidth_callback = nullptr;
    KBookmarkContextMenu_HasHeightForWidth_Callback kbookmarkcontextmenu_hasheightforwidth_callback = nullptr;
    KBookmarkContextMenu_PaintEngine_Callback kbookmarkcontextmenu_paintengine_callback = nullptr;
    KBookmarkContextMenu_MouseDoubleClickEvent_Callback kbookmarkcontextmenu_mousedoubleclickevent_callback = nullptr;
    KBookmarkContextMenu_KeyReleaseEvent_Callback kbookmarkcontextmenu_keyreleaseevent_callback = nullptr;
    KBookmarkContextMenu_FocusInEvent_Callback kbookmarkcontextmenu_focusinevent_callback = nullptr;
    KBookmarkContextMenu_FocusOutEvent_Callback kbookmarkcontextmenu_focusoutevent_callback = nullptr;
    KBookmarkContextMenu_MoveEvent_Callback kbookmarkcontextmenu_moveevent_callback = nullptr;
    KBookmarkContextMenu_ResizeEvent_Callback kbookmarkcontextmenu_resizeevent_callback = nullptr;
    KBookmarkContextMenu_CloseEvent_Callback kbookmarkcontextmenu_closeevent_callback = nullptr;
    KBookmarkContextMenu_ContextMenuEvent_Callback kbookmarkcontextmenu_contextmenuevent_callback = nullptr;
    KBookmarkContextMenu_TabletEvent_Callback kbookmarkcontextmenu_tabletevent_callback = nullptr;
    KBookmarkContextMenu_DragEnterEvent_Callback kbookmarkcontextmenu_dragenterevent_callback = nullptr;
    KBookmarkContextMenu_DragMoveEvent_Callback kbookmarkcontextmenu_dragmoveevent_callback = nullptr;
    KBookmarkContextMenu_DragLeaveEvent_Callback kbookmarkcontextmenu_dragleaveevent_callback = nullptr;
    KBookmarkContextMenu_DropEvent_Callback kbookmarkcontextmenu_dropevent_callback = nullptr;
    KBookmarkContextMenu_ShowEvent_Callback kbookmarkcontextmenu_showevent_callback = nullptr;
    KBookmarkContextMenu_NativeEvent_Callback kbookmarkcontextmenu_nativeevent_callback = nullptr;
    KBookmarkContextMenu_Metric_Callback kbookmarkcontextmenu_metric_callback = nullptr;
    KBookmarkContextMenu_InitPainter_Callback kbookmarkcontextmenu_initpainter_callback = nullptr;
    KBookmarkContextMenu_Redirected_Callback kbookmarkcontextmenu_redirected_callback = nullptr;
    KBookmarkContextMenu_SharedPainter_Callback kbookmarkcontextmenu_sharedpainter_callback = nullptr;
    KBookmarkContextMenu_InputMethodEvent_Callback kbookmarkcontextmenu_inputmethodevent_callback = nullptr;
    KBookmarkContextMenu_InputMethodQuery_Callback kbookmarkcontextmenu_inputmethodquery_callback = nullptr;
    KBookmarkContextMenu_EventFilter_Callback kbookmarkcontextmenu_eventfilter_callback = nullptr;
    KBookmarkContextMenu_ChildEvent_Callback kbookmarkcontextmenu_childevent_callback = nullptr;
    KBookmarkContextMenu_CustomEvent_Callback kbookmarkcontextmenu_customevent_callback = nullptr;
    KBookmarkContextMenu_ConnectNotify_Callback kbookmarkcontextmenu_connectnotify_callback = nullptr;
    KBookmarkContextMenu_DisconnectNotify_Callback kbookmarkcontextmenu_disconnectnotify_callback = nullptr;
    KBookmarkContextMenu_AddBookmark_Callback kbookmarkcontextmenu_addbookmark_callback = nullptr;
    KBookmarkContextMenu_AddFolderActions_Callback kbookmarkcontextmenu_addfolderactions_callback = nullptr;
    KBookmarkContextMenu_AddProperties_Callback kbookmarkcontextmenu_addproperties_callback = nullptr;
    KBookmarkContextMenu_AddBookmarkActions_Callback kbookmarkcontextmenu_addbookmarkactions_callback = nullptr;
    KBookmarkContextMenu_AddOpenFolderInTabs_Callback kbookmarkcontextmenu_addopenfolderintabs_callback = nullptr;
    KBookmarkContextMenu_Manager_Callback kbookmarkcontextmenu_manager_callback = nullptr;
    KBookmarkContextMenu_Owner_Callback kbookmarkcontextmenu_owner_callback = nullptr;
    KBookmarkContextMenu_Bookmark_Callback kbookmarkcontextmenu_bookmark_callback = nullptr;
    KBookmarkContextMenu_ColumnCount_Callback kbookmarkcontextmenu_columncount_callback = nullptr;
    KBookmarkContextMenu_UpdateMicroFocus_Callback kbookmarkcontextmenu_updatemicrofocus_callback = nullptr;
    KBookmarkContextMenu_Create_Callback kbookmarkcontextmenu_create_callback = nullptr;
    KBookmarkContextMenu_Destroy_Callback kbookmarkcontextmenu_destroy_callback = nullptr;
    KBookmarkContextMenu_FocusNextChild_Callback kbookmarkcontextmenu_focusnextchild_callback = nullptr;
    KBookmarkContextMenu_FocusPreviousChild_Callback kbookmarkcontextmenu_focuspreviouschild_callback = nullptr;
    KBookmarkContextMenu_Sender_Callback kbookmarkcontextmenu_sender_callback = nullptr;
    KBookmarkContextMenu_SenderSignalIndex_Callback kbookmarkcontextmenu_sendersignalindex_callback = nullptr;
    KBookmarkContextMenu_Receivers_Callback kbookmarkcontextmenu_receivers_callback = nullptr;
    KBookmarkContextMenu_IsSignalConnected_Callback kbookmarkcontextmenu_issignalconnected_callback = nullptr;
    KBookmarkContextMenu_GetDecodedMetricF_Callback kbookmarkcontextmenu_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kbookmarkcontextmenu_metacall_isbase = false;
    mutable bool kbookmarkcontextmenu_addactions_isbase = false;
    mutable bool kbookmarkcontextmenu_sizehint_isbase = false;
    mutable bool kbookmarkcontextmenu_changeevent_isbase = false;
    mutable bool kbookmarkcontextmenu_keypressevent_isbase = false;
    mutable bool kbookmarkcontextmenu_mousereleaseevent_isbase = false;
    mutable bool kbookmarkcontextmenu_mousepressevent_isbase = false;
    mutable bool kbookmarkcontextmenu_mousemoveevent_isbase = false;
    mutable bool kbookmarkcontextmenu_wheelevent_isbase = false;
    mutable bool kbookmarkcontextmenu_enterevent_isbase = false;
    mutable bool kbookmarkcontextmenu_leaveevent_isbase = false;
    mutable bool kbookmarkcontextmenu_hideevent_isbase = false;
    mutable bool kbookmarkcontextmenu_paintevent_isbase = false;
    mutable bool kbookmarkcontextmenu_actionevent_isbase = false;
    mutable bool kbookmarkcontextmenu_timerevent_isbase = false;
    mutable bool kbookmarkcontextmenu_event_isbase = false;
    mutable bool kbookmarkcontextmenu_focusnextprevchild_isbase = false;
    mutable bool kbookmarkcontextmenu_initstyleoption_isbase = false;
    mutable bool kbookmarkcontextmenu_devtype_isbase = false;
    mutable bool kbookmarkcontextmenu_setvisible_isbase = false;
    mutable bool kbookmarkcontextmenu_minimumsizehint_isbase = false;
    mutable bool kbookmarkcontextmenu_heightforwidth_isbase = false;
    mutable bool kbookmarkcontextmenu_hasheightforwidth_isbase = false;
    mutable bool kbookmarkcontextmenu_paintengine_isbase = false;
    mutable bool kbookmarkcontextmenu_mousedoubleclickevent_isbase = false;
    mutable bool kbookmarkcontextmenu_keyreleaseevent_isbase = false;
    mutable bool kbookmarkcontextmenu_focusinevent_isbase = false;
    mutable bool kbookmarkcontextmenu_focusoutevent_isbase = false;
    mutable bool kbookmarkcontextmenu_moveevent_isbase = false;
    mutable bool kbookmarkcontextmenu_resizeevent_isbase = false;
    mutable bool kbookmarkcontextmenu_closeevent_isbase = false;
    mutable bool kbookmarkcontextmenu_contextmenuevent_isbase = false;
    mutable bool kbookmarkcontextmenu_tabletevent_isbase = false;
    mutable bool kbookmarkcontextmenu_dragenterevent_isbase = false;
    mutable bool kbookmarkcontextmenu_dragmoveevent_isbase = false;
    mutable bool kbookmarkcontextmenu_dragleaveevent_isbase = false;
    mutable bool kbookmarkcontextmenu_dropevent_isbase = false;
    mutable bool kbookmarkcontextmenu_showevent_isbase = false;
    mutable bool kbookmarkcontextmenu_nativeevent_isbase = false;
    mutable bool kbookmarkcontextmenu_metric_isbase = false;
    mutable bool kbookmarkcontextmenu_initpainter_isbase = false;
    mutable bool kbookmarkcontextmenu_redirected_isbase = false;
    mutable bool kbookmarkcontextmenu_sharedpainter_isbase = false;
    mutable bool kbookmarkcontextmenu_inputmethodevent_isbase = false;
    mutable bool kbookmarkcontextmenu_inputmethodquery_isbase = false;
    mutable bool kbookmarkcontextmenu_eventfilter_isbase = false;
    mutable bool kbookmarkcontextmenu_childevent_isbase = false;
    mutable bool kbookmarkcontextmenu_customevent_isbase = false;
    mutable bool kbookmarkcontextmenu_connectnotify_isbase = false;
    mutable bool kbookmarkcontextmenu_disconnectnotify_isbase = false;
    mutable bool kbookmarkcontextmenu_addbookmark_isbase = false;
    mutable bool kbookmarkcontextmenu_addfolderactions_isbase = false;
    mutable bool kbookmarkcontextmenu_addproperties_isbase = false;
    mutable bool kbookmarkcontextmenu_addbookmarkactions_isbase = false;
    mutable bool kbookmarkcontextmenu_addopenfolderintabs_isbase = false;
    mutable bool kbookmarkcontextmenu_manager_isbase = false;
    mutable bool kbookmarkcontextmenu_owner_isbase = false;
    mutable bool kbookmarkcontextmenu_bookmark_isbase = false;
    mutable bool kbookmarkcontextmenu_columncount_isbase = false;
    mutable bool kbookmarkcontextmenu_updatemicrofocus_isbase = false;
    mutable bool kbookmarkcontextmenu_create_isbase = false;
    mutable bool kbookmarkcontextmenu_destroy_isbase = false;
    mutable bool kbookmarkcontextmenu_focusnextchild_isbase = false;
    mutable bool kbookmarkcontextmenu_focuspreviouschild_isbase = false;
    mutable bool kbookmarkcontextmenu_sender_isbase = false;
    mutable bool kbookmarkcontextmenu_sendersignalindex_isbase = false;
    mutable bool kbookmarkcontextmenu_receivers_isbase = false;
    mutable bool kbookmarkcontextmenu_issignalconnected_isbase = false;
    mutable bool kbookmarkcontextmenu_getdecodedmetricf_isbase = false;

  public:
    VirtualKBookmarkContextMenu(const KBookmark& bm, KBookmarkManager* manager, KBookmarkOwner* owner) : KBookmarkContextMenu(bm, manager, owner) {};
    VirtualKBookmarkContextMenu(const KBookmark& bm, KBookmarkManager* manager, KBookmarkOwner* owner, QWidget* parent) : KBookmarkContextMenu(bm, manager, owner, parent) {};

    ~VirtualKBookmarkContextMenu() {
        kbookmarkcontextmenu_metacall_callback = nullptr;
        kbookmarkcontextmenu_addactions_callback = nullptr;
        kbookmarkcontextmenu_sizehint_callback = nullptr;
        kbookmarkcontextmenu_changeevent_callback = nullptr;
        kbookmarkcontextmenu_keypressevent_callback = nullptr;
        kbookmarkcontextmenu_mousereleaseevent_callback = nullptr;
        kbookmarkcontextmenu_mousepressevent_callback = nullptr;
        kbookmarkcontextmenu_mousemoveevent_callback = nullptr;
        kbookmarkcontextmenu_wheelevent_callback = nullptr;
        kbookmarkcontextmenu_enterevent_callback = nullptr;
        kbookmarkcontextmenu_leaveevent_callback = nullptr;
        kbookmarkcontextmenu_hideevent_callback = nullptr;
        kbookmarkcontextmenu_paintevent_callback = nullptr;
        kbookmarkcontextmenu_actionevent_callback = nullptr;
        kbookmarkcontextmenu_timerevent_callback = nullptr;
        kbookmarkcontextmenu_event_callback = nullptr;
        kbookmarkcontextmenu_focusnextprevchild_callback = nullptr;
        kbookmarkcontextmenu_initstyleoption_callback = nullptr;
        kbookmarkcontextmenu_devtype_callback = nullptr;
        kbookmarkcontextmenu_setvisible_callback = nullptr;
        kbookmarkcontextmenu_minimumsizehint_callback = nullptr;
        kbookmarkcontextmenu_heightforwidth_callback = nullptr;
        kbookmarkcontextmenu_hasheightforwidth_callback = nullptr;
        kbookmarkcontextmenu_paintengine_callback = nullptr;
        kbookmarkcontextmenu_mousedoubleclickevent_callback = nullptr;
        kbookmarkcontextmenu_keyreleaseevent_callback = nullptr;
        kbookmarkcontextmenu_focusinevent_callback = nullptr;
        kbookmarkcontextmenu_focusoutevent_callback = nullptr;
        kbookmarkcontextmenu_moveevent_callback = nullptr;
        kbookmarkcontextmenu_resizeevent_callback = nullptr;
        kbookmarkcontextmenu_closeevent_callback = nullptr;
        kbookmarkcontextmenu_contextmenuevent_callback = nullptr;
        kbookmarkcontextmenu_tabletevent_callback = nullptr;
        kbookmarkcontextmenu_dragenterevent_callback = nullptr;
        kbookmarkcontextmenu_dragmoveevent_callback = nullptr;
        kbookmarkcontextmenu_dragleaveevent_callback = nullptr;
        kbookmarkcontextmenu_dropevent_callback = nullptr;
        kbookmarkcontextmenu_showevent_callback = nullptr;
        kbookmarkcontextmenu_nativeevent_callback = nullptr;
        kbookmarkcontextmenu_metric_callback = nullptr;
        kbookmarkcontextmenu_initpainter_callback = nullptr;
        kbookmarkcontextmenu_redirected_callback = nullptr;
        kbookmarkcontextmenu_sharedpainter_callback = nullptr;
        kbookmarkcontextmenu_inputmethodevent_callback = nullptr;
        kbookmarkcontextmenu_inputmethodquery_callback = nullptr;
        kbookmarkcontextmenu_eventfilter_callback = nullptr;
        kbookmarkcontextmenu_childevent_callback = nullptr;
        kbookmarkcontextmenu_customevent_callback = nullptr;
        kbookmarkcontextmenu_connectnotify_callback = nullptr;
        kbookmarkcontextmenu_disconnectnotify_callback = nullptr;
        kbookmarkcontextmenu_addbookmark_callback = nullptr;
        kbookmarkcontextmenu_addfolderactions_callback = nullptr;
        kbookmarkcontextmenu_addproperties_callback = nullptr;
        kbookmarkcontextmenu_addbookmarkactions_callback = nullptr;
        kbookmarkcontextmenu_addopenfolderintabs_callback = nullptr;
        kbookmarkcontextmenu_manager_callback = nullptr;
        kbookmarkcontextmenu_owner_callback = nullptr;
        kbookmarkcontextmenu_bookmark_callback = nullptr;
        kbookmarkcontextmenu_columncount_callback = nullptr;
        kbookmarkcontextmenu_updatemicrofocus_callback = nullptr;
        kbookmarkcontextmenu_create_callback = nullptr;
        kbookmarkcontextmenu_destroy_callback = nullptr;
        kbookmarkcontextmenu_focusnextchild_callback = nullptr;
        kbookmarkcontextmenu_focuspreviouschild_callback = nullptr;
        kbookmarkcontextmenu_sender_callback = nullptr;
        kbookmarkcontextmenu_sendersignalindex_callback = nullptr;
        kbookmarkcontextmenu_receivers_callback = nullptr;
        kbookmarkcontextmenu_issignalconnected_callback = nullptr;
        kbookmarkcontextmenu_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKBookmarkContextMenu_Metacall_Callback(KBookmarkContextMenu_Metacall_Callback cb) { kbookmarkcontextmenu_metacall_callback = cb; }
    inline void setKBookmarkContextMenu_AddActions_Callback(KBookmarkContextMenu_AddActions_Callback cb) { kbookmarkcontextmenu_addactions_callback = cb; }
    inline void setKBookmarkContextMenu_SizeHint_Callback(KBookmarkContextMenu_SizeHint_Callback cb) { kbookmarkcontextmenu_sizehint_callback = cb; }
    inline void setKBookmarkContextMenu_ChangeEvent_Callback(KBookmarkContextMenu_ChangeEvent_Callback cb) { kbookmarkcontextmenu_changeevent_callback = cb; }
    inline void setKBookmarkContextMenu_KeyPressEvent_Callback(KBookmarkContextMenu_KeyPressEvent_Callback cb) { kbookmarkcontextmenu_keypressevent_callback = cb; }
    inline void setKBookmarkContextMenu_MouseReleaseEvent_Callback(KBookmarkContextMenu_MouseReleaseEvent_Callback cb) { kbookmarkcontextmenu_mousereleaseevent_callback = cb; }
    inline void setKBookmarkContextMenu_MousePressEvent_Callback(KBookmarkContextMenu_MousePressEvent_Callback cb) { kbookmarkcontextmenu_mousepressevent_callback = cb; }
    inline void setKBookmarkContextMenu_MouseMoveEvent_Callback(KBookmarkContextMenu_MouseMoveEvent_Callback cb) { kbookmarkcontextmenu_mousemoveevent_callback = cb; }
    inline void setKBookmarkContextMenu_WheelEvent_Callback(KBookmarkContextMenu_WheelEvent_Callback cb) { kbookmarkcontextmenu_wheelevent_callback = cb; }
    inline void setKBookmarkContextMenu_EnterEvent_Callback(KBookmarkContextMenu_EnterEvent_Callback cb) { kbookmarkcontextmenu_enterevent_callback = cb; }
    inline void setKBookmarkContextMenu_LeaveEvent_Callback(KBookmarkContextMenu_LeaveEvent_Callback cb) { kbookmarkcontextmenu_leaveevent_callback = cb; }
    inline void setKBookmarkContextMenu_HideEvent_Callback(KBookmarkContextMenu_HideEvent_Callback cb) { kbookmarkcontextmenu_hideevent_callback = cb; }
    inline void setKBookmarkContextMenu_PaintEvent_Callback(KBookmarkContextMenu_PaintEvent_Callback cb) { kbookmarkcontextmenu_paintevent_callback = cb; }
    inline void setKBookmarkContextMenu_ActionEvent_Callback(KBookmarkContextMenu_ActionEvent_Callback cb) { kbookmarkcontextmenu_actionevent_callback = cb; }
    inline void setKBookmarkContextMenu_TimerEvent_Callback(KBookmarkContextMenu_TimerEvent_Callback cb) { kbookmarkcontextmenu_timerevent_callback = cb; }
    inline void setKBookmarkContextMenu_Event_Callback(KBookmarkContextMenu_Event_Callback cb) { kbookmarkcontextmenu_event_callback = cb; }
    inline void setKBookmarkContextMenu_FocusNextPrevChild_Callback(KBookmarkContextMenu_FocusNextPrevChild_Callback cb) { kbookmarkcontextmenu_focusnextprevchild_callback = cb; }
    inline void setKBookmarkContextMenu_InitStyleOption_Callback(KBookmarkContextMenu_InitStyleOption_Callback cb) { kbookmarkcontextmenu_initstyleoption_callback = cb; }
    inline void setKBookmarkContextMenu_DevType_Callback(KBookmarkContextMenu_DevType_Callback cb) { kbookmarkcontextmenu_devtype_callback = cb; }
    inline void setKBookmarkContextMenu_SetVisible_Callback(KBookmarkContextMenu_SetVisible_Callback cb) { kbookmarkcontextmenu_setvisible_callback = cb; }
    inline void setKBookmarkContextMenu_MinimumSizeHint_Callback(KBookmarkContextMenu_MinimumSizeHint_Callback cb) { kbookmarkcontextmenu_minimumsizehint_callback = cb; }
    inline void setKBookmarkContextMenu_HeightForWidth_Callback(KBookmarkContextMenu_HeightForWidth_Callback cb) { kbookmarkcontextmenu_heightforwidth_callback = cb; }
    inline void setKBookmarkContextMenu_HasHeightForWidth_Callback(KBookmarkContextMenu_HasHeightForWidth_Callback cb) { kbookmarkcontextmenu_hasheightforwidth_callback = cb; }
    inline void setKBookmarkContextMenu_PaintEngine_Callback(KBookmarkContextMenu_PaintEngine_Callback cb) { kbookmarkcontextmenu_paintengine_callback = cb; }
    inline void setKBookmarkContextMenu_MouseDoubleClickEvent_Callback(KBookmarkContextMenu_MouseDoubleClickEvent_Callback cb) { kbookmarkcontextmenu_mousedoubleclickevent_callback = cb; }
    inline void setKBookmarkContextMenu_KeyReleaseEvent_Callback(KBookmarkContextMenu_KeyReleaseEvent_Callback cb) { kbookmarkcontextmenu_keyreleaseevent_callback = cb; }
    inline void setKBookmarkContextMenu_FocusInEvent_Callback(KBookmarkContextMenu_FocusInEvent_Callback cb) { kbookmarkcontextmenu_focusinevent_callback = cb; }
    inline void setKBookmarkContextMenu_FocusOutEvent_Callback(KBookmarkContextMenu_FocusOutEvent_Callback cb) { kbookmarkcontextmenu_focusoutevent_callback = cb; }
    inline void setKBookmarkContextMenu_MoveEvent_Callback(KBookmarkContextMenu_MoveEvent_Callback cb) { kbookmarkcontextmenu_moveevent_callback = cb; }
    inline void setKBookmarkContextMenu_ResizeEvent_Callback(KBookmarkContextMenu_ResizeEvent_Callback cb) { kbookmarkcontextmenu_resizeevent_callback = cb; }
    inline void setKBookmarkContextMenu_CloseEvent_Callback(KBookmarkContextMenu_CloseEvent_Callback cb) { kbookmarkcontextmenu_closeevent_callback = cb; }
    inline void setKBookmarkContextMenu_ContextMenuEvent_Callback(KBookmarkContextMenu_ContextMenuEvent_Callback cb) { kbookmarkcontextmenu_contextmenuevent_callback = cb; }
    inline void setKBookmarkContextMenu_TabletEvent_Callback(KBookmarkContextMenu_TabletEvent_Callback cb) { kbookmarkcontextmenu_tabletevent_callback = cb; }
    inline void setKBookmarkContextMenu_DragEnterEvent_Callback(KBookmarkContextMenu_DragEnterEvent_Callback cb) { kbookmarkcontextmenu_dragenterevent_callback = cb; }
    inline void setKBookmarkContextMenu_DragMoveEvent_Callback(KBookmarkContextMenu_DragMoveEvent_Callback cb) { kbookmarkcontextmenu_dragmoveevent_callback = cb; }
    inline void setKBookmarkContextMenu_DragLeaveEvent_Callback(KBookmarkContextMenu_DragLeaveEvent_Callback cb) { kbookmarkcontextmenu_dragleaveevent_callback = cb; }
    inline void setKBookmarkContextMenu_DropEvent_Callback(KBookmarkContextMenu_DropEvent_Callback cb) { kbookmarkcontextmenu_dropevent_callback = cb; }
    inline void setKBookmarkContextMenu_ShowEvent_Callback(KBookmarkContextMenu_ShowEvent_Callback cb) { kbookmarkcontextmenu_showevent_callback = cb; }
    inline void setKBookmarkContextMenu_NativeEvent_Callback(KBookmarkContextMenu_NativeEvent_Callback cb) { kbookmarkcontextmenu_nativeevent_callback = cb; }
    inline void setKBookmarkContextMenu_Metric_Callback(KBookmarkContextMenu_Metric_Callback cb) { kbookmarkcontextmenu_metric_callback = cb; }
    inline void setKBookmarkContextMenu_InitPainter_Callback(KBookmarkContextMenu_InitPainter_Callback cb) { kbookmarkcontextmenu_initpainter_callback = cb; }
    inline void setKBookmarkContextMenu_Redirected_Callback(KBookmarkContextMenu_Redirected_Callback cb) { kbookmarkcontextmenu_redirected_callback = cb; }
    inline void setKBookmarkContextMenu_SharedPainter_Callback(KBookmarkContextMenu_SharedPainter_Callback cb) { kbookmarkcontextmenu_sharedpainter_callback = cb; }
    inline void setKBookmarkContextMenu_InputMethodEvent_Callback(KBookmarkContextMenu_InputMethodEvent_Callback cb) { kbookmarkcontextmenu_inputmethodevent_callback = cb; }
    inline void setKBookmarkContextMenu_InputMethodQuery_Callback(KBookmarkContextMenu_InputMethodQuery_Callback cb) { kbookmarkcontextmenu_inputmethodquery_callback = cb; }
    inline void setKBookmarkContextMenu_EventFilter_Callback(KBookmarkContextMenu_EventFilter_Callback cb) { kbookmarkcontextmenu_eventfilter_callback = cb; }
    inline void setKBookmarkContextMenu_ChildEvent_Callback(KBookmarkContextMenu_ChildEvent_Callback cb) { kbookmarkcontextmenu_childevent_callback = cb; }
    inline void setKBookmarkContextMenu_CustomEvent_Callback(KBookmarkContextMenu_CustomEvent_Callback cb) { kbookmarkcontextmenu_customevent_callback = cb; }
    inline void setKBookmarkContextMenu_ConnectNotify_Callback(KBookmarkContextMenu_ConnectNotify_Callback cb) { kbookmarkcontextmenu_connectnotify_callback = cb; }
    inline void setKBookmarkContextMenu_DisconnectNotify_Callback(KBookmarkContextMenu_DisconnectNotify_Callback cb) { kbookmarkcontextmenu_disconnectnotify_callback = cb; }
    inline void setKBookmarkContextMenu_AddBookmark_Callback(KBookmarkContextMenu_AddBookmark_Callback cb) { kbookmarkcontextmenu_addbookmark_callback = cb; }
    inline void setKBookmarkContextMenu_AddFolderActions_Callback(KBookmarkContextMenu_AddFolderActions_Callback cb) { kbookmarkcontextmenu_addfolderactions_callback = cb; }
    inline void setKBookmarkContextMenu_AddProperties_Callback(KBookmarkContextMenu_AddProperties_Callback cb) { kbookmarkcontextmenu_addproperties_callback = cb; }
    inline void setKBookmarkContextMenu_AddBookmarkActions_Callback(KBookmarkContextMenu_AddBookmarkActions_Callback cb) { kbookmarkcontextmenu_addbookmarkactions_callback = cb; }
    inline void setKBookmarkContextMenu_AddOpenFolderInTabs_Callback(KBookmarkContextMenu_AddOpenFolderInTabs_Callback cb) { kbookmarkcontextmenu_addopenfolderintabs_callback = cb; }
    inline void setKBookmarkContextMenu_Manager_Callback(KBookmarkContextMenu_Manager_Callback cb) { kbookmarkcontextmenu_manager_callback = cb; }
    inline void setKBookmarkContextMenu_Owner_Callback(KBookmarkContextMenu_Owner_Callback cb) { kbookmarkcontextmenu_owner_callback = cb; }
    inline void setKBookmarkContextMenu_Bookmark_Callback(KBookmarkContextMenu_Bookmark_Callback cb) { kbookmarkcontextmenu_bookmark_callback = cb; }
    inline void setKBookmarkContextMenu_ColumnCount_Callback(KBookmarkContextMenu_ColumnCount_Callback cb) { kbookmarkcontextmenu_columncount_callback = cb; }
    inline void setKBookmarkContextMenu_UpdateMicroFocus_Callback(KBookmarkContextMenu_UpdateMicroFocus_Callback cb) { kbookmarkcontextmenu_updatemicrofocus_callback = cb; }
    inline void setKBookmarkContextMenu_Create_Callback(KBookmarkContextMenu_Create_Callback cb) { kbookmarkcontextmenu_create_callback = cb; }
    inline void setKBookmarkContextMenu_Destroy_Callback(KBookmarkContextMenu_Destroy_Callback cb) { kbookmarkcontextmenu_destroy_callback = cb; }
    inline void setKBookmarkContextMenu_FocusNextChild_Callback(KBookmarkContextMenu_FocusNextChild_Callback cb) { kbookmarkcontextmenu_focusnextchild_callback = cb; }
    inline void setKBookmarkContextMenu_FocusPreviousChild_Callback(KBookmarkContextMenu_FocusPreviousChild_Callback cb) { kbookmarkcontextmenu_focuspreviouschild_callback = cb; }
    inline void setKBookmarkContextMenu_Sender_Callback(KBookmarkContextMenu_Sender_Callback cb) { kbookmarkcontextmenu_sender_callback = cb; }
    inline void setKBookmarkContextMenu_SenderSignalIndex_Callback(KBookmarkContextMenu_SenderSignalIndex_Callback cb) { kbookmarkcontextmenu_sendersignalindex_callback = cb; }
    inline void setKBookmarkContextMenu_Receivers_Callback(KBookmarkContextMenu_Receivers_Callback cb) { kbookmarkcontextmenu_receivers_callback = cb; }
    inline void setKBookmarkContextMenu_IsSignalConnected_Callback(KBookmarkContextMenu_IsSignalConnected_Callback cb) { kbookmarkcontextmenu_issignalconnected_callback = cb; }
    inline void setKBookmarkContextMenu_GetDecodedMetricF_Callback(KBookmarkContextMenu_GetDecodedMetricF_Callback cb) { kbookmarkcontextmenu_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKBookmarkContextMenu_Metacall_IsBase(bool value) const { kbookmarkcontextmenu_metacall_isbase = value; }
    inline void setKBookmarkContextMenu_AddActions_IsBase(bool value) const { kbookmarkcontextmenu_addactions_isbase = value; }
    inline void setKBookmarkContextMenu_SizeHint_IsBase(bool value) const { kbookmarkcontextmenu_sizehint_isbase = value; }
    inline void setKBookmarkContextMenu_ChangeEvent_IsBase(bool value) const { kbookmarkcontextmenu_changeevent_isbase = value; }
    inline void setKBookmarkContextMenu_KeyPressEvent_IsBase(bool value) const { kbookmarkcontextmenu_keypressevent_isbase = value; }
    inline void setKBookmarkContextMenu_MouseReleaseEvent_IsBase(bool value) const { kbookmarkcontextmenu_mousereleaseevent_isbase = value; }
    inline void setKBookmarkContextMenu_MousePressEvent_IsBase(bool value) const { kbookmarkcontextmenu_mousepressevent_isbase = value; }
    inline void setKBookmarkContextMenu_MouseMoveEvent_IsBase(bool value) const { kbookmarkcontextmenu_mousemoveevent_isbase = value; }
    inline void setKBookmarkContextMenu_WheelEvent_IsBase(bool value) const { kbookmarkcontextmenu_wheelevent_isbase = value; }
    inline void setKBookmarkContextMenu_EnterEvent_IsBase(bool value) const { kbookmarkcontextmenu_enterevent_isbase = value; }
    inline void setKBookmarkContextMenu_LeaveEvent_IsBase(bool value) const { kbookmarkcontextmenu_leaveevent_isbase = value; }
    inline void setKBookmarkContextMenu_HideEvent_IsBase(bool value) const { kbookmarkcontextmenu_hideevent_isbase = value; }
    inline void setKBookmarkContextMenu_PaintEvent_IsBase(bool value) const { kbookmarkcontextmenu_paintevent_isbase = value; }
    inline void setKBookmarkContextMenu_ActionEvent_IsBase(bool value) const { kbookmarkcontextmenu_actionevent_isbase = value; }
    inline void setKBookmarkContextMenu_TimerEvent_IsBase(bool value) const { kbookmarkcontextmenu_timerevent_isbase = value; }
    inline void setKBookmarkContextMenu_Event_IsBase(bool value) const { kbookmarkcontextmenu_event_isbase = value; }
    inline void setKBookmarkContextMenu_FocusNextPrevChild_IsBase(bool value) const { kbookmarkcontextmenu_focusnextprevchild_isbase = value; }
    inline void setKBookmarkContextMenu_InitStyleOption_IsBase(bool value) const { kbookmarkcontextmenu_initstyleoption_isbase = value; }
    inline void setKBookmarkContextMenu_DevType_IsBase(bool value) const { kbookmarkcontextmenu_devtype_isbase = value; }
    inline void setKBookmarkContextMenu_SetVisible_IsBase(bool value) const { kbookmarkcontextmenu_setvisible_isbase = value; }
    inline void setKBookmarkContextMenu_MinimumSizeHint_IsBase(bool value) const { kbookmarkcontextmenu_minimumsizehint_isbase = value; }
    inline void setKBookmarkContextMenu_HeightForWidth_IsBase(bool value) const { kbookmarkcontextmenu_heightforwidth_isbase = value; }
    inline void setKBookmarkContextMenu_HasHeightForWidth_IsBase(bool value) const { kbookmarkcontextmenu_hasheightforwidth_isbase = value; }
    inline void setKBookmarkContextMenu_PaintEngine_IsBase(bool value) const { kbookmarkcontextmenu_paintengine_isbase = value; }
    inline void setKBookmarkContextMenu_MouseDoubleClickEvent_IsBase(bool value) const { kbookmarkcontextmenu_mousedoubleclickevent_isbase = value; }
    inline void setKBookmarkContextMenu_KeyReleaseEvent_IsBase(bool value) const { kbookmarkcontextmenu_keyreleaseevent_isbase = value; }
    inline void setKBookmarkContextMenu_FocusInEvent_IsBase(bool value) const { kbookmarkcontextmenu_focusinevent_isbase = value; }
    inline void setKBookmarkContextMenu_FocusOutEvent_IsBase(bool value) const { kbookmarkcontextmenu_focusoutevent_isbase = value; }
    inline void setKBookmarkContextMenu_MoveEvent_IsBase(bool value) const { kbookmarkcontextmenu_moveevent_isbase = value; }
    inline void setKBookmarkContextMenu_ResizeEvent_IsBase(bool value) const { kbookmarkcontextmenu_resizeevent_isbase = value; }
    inline void setKBookmarkContextMenu_CloseEvent_IsBase(bool value) const { kbookmarkcontextmenu_closeevent_isbase = value; }
    inline void setKBookmarkContextMenu_ContextMenuEvent_IsBase(bool value) const { kbookmarkcontextmenu_contextmenuevent_isbase = value; }
    inline void setKBookmarkContextMenu_TabletEvent_IsBase(bool value) const { kbookmarkcontextmenu_tabletevent_isbase = value; }
    inline void setKBookmarkContextMenu_DragEnterEvent_IsBase(bool value) const { kbookmarkcontextmenu_dragenterevent_isbase = value; }
    inline void setKBookmarkContextMenu_DragMoveEvent_IsBase(bool value) const { kbookmarkcontextmenu_dragmoveevent_isbase = value; }
    inline void setKBookmarkContextMenu_DragLeaveEvent_IsBase(bool value) const { kbookmarkcontextmenu_dragleaveevent_isbase = value; }
    inline void setKBookmarkContextMenu_DropEvent_IsBase(bool value) const { kbookmarkcontextmenu_dropevent_isbase = value; }
    inline void setKBookmarkContextMenu_ShowEvent_IsBase(bool value) const { kbookmarkcontextmenu_showevent_isbase = value; }
    inline void setKBookmarkContextMenu_NativeEvent_IsBase(bool value) const { kbookmarkcontextmenu_nativeevent_isbase = value; }
    inline void setKBookmarkContextMenu_Metric_IsBase(bool value) const { kbookmarkcontextmenu_metric_isbase = value; }
    inline void setKBookmarkContextMenu_InitPainter_IsBase(bool value) const { kbookmarkcontextmenu_initpainter_isbase = value; }
    inline void setKBookmarkContextMenu_Redirected_IsBase(bool value) const { kbookmarkcontextmenu_redirected_isbase = value; }
    inline void setKBookmarkContextMenu_SharedPainter_IsBase(bool value) const { kbookmarkcontextmenu_sharedpainter_isbase = value; }
    inline void setKBookmarkContextMenu_InputMethodEvent_IsBase(bool value) const { kbookmarkcontextmenu_inputmethodevent_isbase = value; }
    inline void setKBookmarkContextMenu_InputMethodQuery_IsBase(bool value) const { kbookmarkcontextmenu_inputmethodquery_isbase = value; }
    inline void setKBookmarkContextMenu_EventFilter_IsBase(bool value) const { kbookmarkcontextmenu_eventfilter_isbase = value; }
    inline void setKBookmarkContextMenu_ChildEvent_IsBase(bool value) const { kbookmarkcontextmenu_childevent_isbase = value; }
    inline void setKBookmarkContextMenu_CustomEvent_IsBase(bool value) const { kbookmarkcontextmenu_customevent_isbase = value; }
    inline void setKBookmarkContextMenu_ConnectNotify_IsBase(bool value) const { kbookmarkcontextmenu_connectnotify_isbase = value; }
    inline void setKBookmarkContextMenu_DisconnectNotify_IsBase(bool value) const { kbookmarkcontextmenu_disconnectnotify_isbase = value; }
    inline void setKBookmarkContextMenu_AddBookmark_IsBase(bool value) const { kbookmarkcontextmenu_addbookmark_isbase = value; }
    inline void setKBookmarkContextMenu_AddFolderActions_IsBase(bool value) const { kbookmarkcontextmenu_addfolderactions_isbase = value; }
    inline void setKBookmarkContextMenu_AddProperties_IsBase(bool value) const { kbookmarkcontextmenu_addproperties_isbase = value; }
    inline void setKBookmarkContextMenu_AddBookmarkActions_IsBase(bool value) const { kbookmarkcontextmenu_addbookmarkactions_isbase = value; }
    inline void setKBookmarkContextMenu_AddOpenFolderInTabs_IsBase(bool value) const { kbookmarkcontextmenu_addopenfolderintabs_isbase = value; }
    inline void setKBookmarkContextMenu_Manager_IsBase(bool value) const { kbookmarkcontextmenu_manager_isbase = value; }
    inline void setKBookmarkContextMenu_Owner_IsBase(bool value) const { kbookmarkcontextmenu_owner_isbase = value; }
    inline void setKBookmarkContextMenu_Bookmark_IsBase(bool value) const { kbookmarkcontextmenu_bookmark_isbase = value; }
    inline void setKBookmarkContextMenu_ColumnCount_IsBase(bool value) const { kbookmarkcontextmenu_columncount_isbase = value; }
    inline void setKBookmarkContextMenu_UpdateMicroFocus_IsBase(bool value) const { kbookmarkcontextmenu_updatemicrofocus_isbase = value; }
    inline void setKBookmarkContextMenu_Create_IsBase(bool value) const { kbookmarkcontextmenu_create_isbase = value; }
    inline void setKBookmarkContextMenu_Destroy_IsBase(bool value) const { kbookmarkcontextmenu_destroy_isbase = value; }
    inline void setKBookmarkContextMenu_FocusNextChild_IsBase(bool value) const { kbookmarkcontextmenu_focusnextchild_isbase = value; }
    inline void setKBookmarkContextMenu_FocusPreviousChild_IsBase(bool value) const { kbookmarkcontextmenu_focuspreviouschild_isbase = value; }
    inline void setKBookmarkContextMenu_Sender_IsBase(bool value) const { kbookmarkcontextmenu_sender_isbase = value; }
    inline void setKBookmarkContextMenu_SenderSignalIndex_IsBase(bool value) const { kbookmarkcontextmenu_sendersignalindex_isbase = value; }
    inline void setKBookmarkContextMenu_Receivers_IsBase(bool value) const { kbookmarkcontextmenu_receivers_isbase = value; }
    inline void setKBookmarkContextMenu_IsSignalConnected_IsBase(bool value) const { kbookmarkcontextmenu_issignalconnected_isbase = value; }
    inline void setKBookmarkContextMenu_GetDecodedMetricF_IsBase(bool value) const { kbookmarkcontextmenu_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbookmarkcontextmenu_metacall_isbase) {
            kbookmarkcontextmenu_metacall_isbase = false;
            return KBookmarkContextMenu::qt_metacall(param1, param2, param3);
        } else if (kbookmarkcontextmenu_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kbookmarkcontextmenu_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkContextMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addActions() override {
        if (kbookmarkcontextmenu_addactions_isbase) {
            kbookmarkcontextmenu_addactions_isbase = false;
            KBookmarkContextMenu::addActions();
        } else if (kbookmarkcontextmenu_addactions_callback != nullptr) {
            kbookmarkcontextmenu_addactions_callback();
        } else {
            KBookmarkContextMenu::addActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kbookmarkcontextmenu_sizehint_isbase) {
            kbookmarkcontextmenu_sizehint_isbase = false;
            return KBookmarkContextMenu::sizeHint();
        } else if (kbookmarkcontextmenu_sizehint_callback != nullptr) {
            QSize* callback_ret = kbookmarkcontextmenu_sizehint_callback();
            return *callback_ret;
        } else {
            return KBookmarkContextMenu::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kbookmarkcontextmenu_changeevent_isbase) {
            kbookmarkcontextmenu_changeevent_isbase = false;
            KBookmarkContextMenu::changeEvent(param1);
        } else if (kbookmarkcontextmenu_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kbookmarkcontextmenu_changeevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kbookmarkcontextmenu_keypressevent_isbase) {
            kbookmarkcontextmenu_keypressevent_isbase = false;
            KBookmarkContextMenu::keyPressEvent(param1);
        } else if (kbookmarkcontextmenu_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kbookmarkcontextmenu_keypressevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kbookmarkcontextmenu_mousereleaseevent_isbase) {
            kbookmarkcontextmenu_mousereleaseevent_isbase = false;
            KBookmarkContextMenu::mouseReleaseEvent(param1);
        } else if (kbookmarkcontextmenu_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kbookmarkcontextmenu_mousereleaseevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kbookmarkcontextmenu_mousepressevent_isbase) {
            kbookmarkcontextmenu_mousepressevent_isbase = false;
            KBookmarkContextMenu::mousePressEvent(param1);
        } else if (kbookmarkcontextmenu_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kbookmarkcontextmenu_mousepressevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kbookmarkcontextmenu_mousemoveevent_isbase) {
            kbookmarkcontextmenu_mousemoveevent_isbase = false;
            KBookmarkContextMenu::mouseMoveEvent(param1);
        } else if (kbookmarkcontextmenu_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kbookmarkcontextmenu_mousemoveevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kbookmarkcontextmenu_wheelevent_isbase) {
            kbookmarkcontextmenu_wheelevent_isbase = false;
            KBookmarkContextMenu::wheelEvent(param1);
        } else if (kbookmarkcontextmenu_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            kbookmarkcontextmenu_wheelevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kbookmarkcontextmenu_enterevent_isbase) {
            kbookmarkcontextmenu_enterevent_isbase = false;
            KBookmarkContextMenu::enterEvent(param1);
        } else if (kbookmarkcontextmenu_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = param1;

            kbookmarkcontextmenu_enterevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::enterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kbookmarkcontextmenu_leaveevent_isbase) {
            kbookmarkcontextmenu_leaveevent_isbase = false;
            KBookmarkContextMenu::leaveEvent(param1);
        } else if (kbookmarkcontextmenu_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kbookmarkcontextmenu_leaveevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (kbookmarkcontextmenu_hideevent_isbase) {
            kbookmarkcontextmenu_hideevent_isbase = false;
            KBookmarkContextMenu::hideEvent(param1);
        } else if (kbookmarkcontextmenu_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            kbookmarkcontextmenu_hideevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kbookmarkcontextmenu_paintevent_isbase) {
            kbookmarkcontextmenu_paintevent_isbase = false;
            KBookmarkContextMenu::paintEvent(param1);
        } else if (kbookmarkcontextmenu_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kbookmarkcontextmenu_paintevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kbookmarkcontextmenu_actionevent_isbase) {
            kbookmarkcontextmenu_actionevent_isbase = false;
            KBookmarkContextMenu::actionEvent(param1);
        } else if (kbookmarkcontextmenu_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = param1;

            kbookmarkcontextmenu_actionevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kbookmarkcontextmenu_timerevent_isbase) {
            kbookmarkcontextmenu_timerevent_isbase = false;
            KBookmarkContextMenu::timerEvent(param1);
        } else if (kbookmarkcontextmenu_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            kbookmarkcontextmenu_timerevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kbookmarkcontextmenu_event_isbase) {
            kbookmarkcontextmenu_event_isbase = false;
            return KBookmarkContextMenu::event(param1);
        } else if (kbookmarkcontextmenu_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kbookmarkcontextmenu_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkContextMenu::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kbookmarkcontextmenu_focusnextprevchild_isbase) {
            kbookmarkcontextmenu_focusnextprevchild_isbase = false;
            return KBookmarkContextMenu::focusNextPrevChild(next);
        } else if (kbookmarkcontextmenu_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kbookmarkcontextmenu_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkContextMenu::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (kbookmarkcontextmenu_initstyleoption_isbase) {
            kbookmarkcontextmenu_initstyleoption_isbase = false;
            KBookmarkContextMenu::initStyleOption(option, action);
        } else if (kbookmarkcontextmenu_initstyleoption_callback != nullptr) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;

            kbookmarkcontextmenu_initstyleoption_callback(this, cbval1, cbval2);
        } else {
            KBookmarkContextMenu::initStyleOption(option, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kbookmarkcontextmenu_devtype_isbase) {
            kbookmarkcontextmenu_devtype_isbase = false;
            return KBookmarkContextMenu::devType();
        } else if (kbookmarkcontextmenu_devtype_callback != nullptr) {
            int callback_ret = kbookmarkcontextmenu_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkContextMenu::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kbookmarkcontextmenu_setvisible_isbase) {
            kbookmarkcontextmenu_setvisible_isbase = false;
            KBookmarkContextMenu::setVisible(visible);
        } else if (kbookmarkcontextmenu_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kbookmarkcontextmenu_setvisible_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kbookmarkcontextmenu_minimumsizehint_isbase) {
            kbookmarkcontextmenu_minimumsizehint_isbase = false;
            return KBookmarkContextMenu::minimumSizeHint();
        } else if (kbookmarkcontextmenu_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kbookmarkcontextmenu_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KBookmarkContextMenu::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kbookmarkcontextmenu_heightforwidth_isbase) {
            kbookmarkcontextmenu_heightforwidth_isbase = false;
            return KBookmarkContextMenu::heightForWidth(param1);
        } else if (kbookmarkcontextmenu_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kbookmarkcontextmenu_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkContextMenu::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kbookmarkcontextmenu_hasheightforwidth_isbase) {
            kbookmarkcontextmenu_hasheightforwidth_isbase = false;
            return KBookmarkContextMenu::hasHeightForWidth();
        } else if (kbookmarkcontextmenu_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kbookmarkcontextmenu_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kbookmarkcontextmenu_paintengine_isbase) {
            kbookmarkcontextmenu_paintengine_isbase = false;
            return KBookmarkContextMenu::paintEngine();
        } else if (kbookmarkcontextmenu_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kbookmarkcontextmenu_paintengine_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kbookmarkcontextmenu_mousedoubleclickevent_isbase) {
            kbookmarkcontextmenu_mousedoubleclickevent_isbase = false;
            KBookmarkContextMenu::mouseDoubleClickEvent(event);
        } else if (kbookmarkcontextmenu_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kbookmarkcontextmenu_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kbookmarkcontextmenu_keyreleaseevent_isbase) {
            kbookmarkcontextmenu_keyreleaseevent_isbase = false;
            KBookmarkContextMenu::keyReleaseEvent(event);
        } else if (kbookmarkcontextmenu_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kbookmarkcontextmenu_keyreleaseevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kbookmarkcontextmenu_focusinevent_isbase) {
            kbookmarkcontextmenu_focusinevent_isbase = false;
            KBookmarkContextMenu::focusInEvent(event);
        } else if (kbookmarkcontextmenu_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbookmarkcontextmenu_focusinevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kbookmarkcontextmenu_focusoutevent_isbase) {
            kbookmarkcontextmenu_focusoutevent_isbase = false;
            KBookmarkContextMenu::focusOutEvent(event);
        } else if (kbookmarkcontextmenu_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kbookmarkcontextmenu_focusoutevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kbookmarkcontextmenu_moveevent_isbase) {
            kbookmarkcontextmenu_moveevent_isbase = false;
            KBookmarkContextMenu::moveEvent(event);
        } else if (kbookmarkcontextmenu_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kbookmarkcontextmenu_moveevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kbookmarkcontextmenu_resizeevent_isbase) {
            kbookmarkcontextmenu_resizeevent_isbase = false;
            KBookmarkContextMenu::resizeEvent(event);
        } else if (kbookmarkcontextmenu_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kbookmarkcontextmenu_resizeevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kbookmarkcontextmenu_closeevent_isbase) {
            kbookmarkcontextmenu_closeevent_isbase = false;
            KBookmarkContextMenu::closeEvent(event);
        } else if (kbookmarkcontextmenu_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kbookmarkcontextmenu_closeevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kbookmarkcontextmenu_contextmenuevent_isbase) {
            kbookmarkcontextmenu_contextmenuevent_isbase = false;
            KBookmarkContextMenu::contextMenuEvent(event);
        } else if (kbookmarkcontextmenu_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kbookmarkcontextmenu_contextmenuevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kbookmarkcontextmenu_tabletevent_isbase) {
            kbookmarkcontextmenu_tabletevent_isbase = false;
            KBookmarkContextMenu::tabletEvent(event);
        } else if (kbookmarkcontextmenu_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kbookmarkcontextmenu_tabletevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kbookmarkcontextmenu_dragenterevent_isbase) {
            kbookmarkcontextmenu_dragenterevent_isbase = false;
            KBookmarkContextMenu::dragEnterEvent(event);
        } else if (kbookmarkcontextmenu_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kbookmarkcontextmenu_dragenterevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kbookmarkcontextmenu_dragmoveevent_isbase) {
            kbookmarkcontextmenu_dragmoveevent_isbase = false;
            KBookmarkContextMenu::dragMoveEvent(event);
        } else if (kbookmarkcontextmenu_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kbookmarkcontextmenu_dragmoveevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kbookmarkcontextmenu_dragleaveevent_isbase) {
            kbookmarkcontextmenu_dragleaveevent_isbase = false;
            KBookmarkContextMenu::dragLeaveEvent(event);
        } else if (kbookmarkcontextmenu_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kbookmarkcontextmenu_dragleaveevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kbookmarkcontextmenu_dropevent_isbase) {
            kbookmarkcontextmenu_dropevent_isbase = false;
            KBookmarkContextMenu::dropEvent(event);
        } else if (kbookmarkcontextmenu_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kbookmarkcontextmenu_dropevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kbookmarkcontextmenu_showevent_isbase) {
            kbookmarkcontextmenu_showevent_isbase = false;
            KBookmarkContextMenu::showEvent(event);
        } else if (kbookmarkcontextmenu_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kbookmarkcontextmenu_showevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kbookmarkcontextmenu_nativeevent_isbase) {
            kbookmarkcontextmenu_nativeevent_isbase = false;
            return KBookmarkContextMenu::nativeEvent(eventType, message, result);
        } else if (kbookmarkcontextmenu_nativeevent_callback != nullptr) {
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

            bool callback_ret = kbookmarkcontextmenu_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KBookmarkContextMenu::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kbookmarkcontextmenu_metric_isbase) {
            kbookmarkcontextmenu_metric_isbase = false;
            return KBookmarkContextMenu::metric(param1);
        } else if (kbookmarkcontextmenu_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kbookmarkcontextmenu_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkContextMenu::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kbookmarkcontextmenu_initpainter_isbase) {
            kbookmarkcontextmenu_initpainter_isbase = false;
            KBookmarkContextMenu::initPainter(painter);
        } else if (kbookmarkcontextmenu_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kbookmarkcontextmenu_initpainter_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kbookmarkcontextmenu_redirected_isbase) {
            kbookmarkcontextmenu_redirected_isbase = false;
            return KBookmarkContextMenu::redirected(offset);
        } else if (kbookmarkcontextmenu_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kbookmarkcontextmenu_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkContextMenu::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kbookmarkcontextmenu_sharedpainter_isbase) {
            kbookmarkcontextmenu_sharedpainter_isbase = false;
            return KBookmarkContextMenu::sharedPainter();
        } else if (kbookmarkcontextmenu_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kbookmarkcontextmenu_sharedpainter_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kbookmarkcontextmenu_inputmethodevent_isbase) {
            kbookmarkcontextmenu_inputmethodevent_isbase = false;
            KBookmarkContextMenu::inputMethodEvent(param1);
        } else if (kbookmarkcontextmenu_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kbookmarkcontextmenu_inputmethodevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kbookmarkcontextmenu_inputmethodquery_isbase) {
            kbookmarkcontextmenu_inputmethodquery_isbase = false;
            return KBookmarkContextMenu::inputMethodQuery(param1);
        } else if (kbookmarkcontextmenu_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kbookmarkcontextmenu_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KBookmarkContextMenu::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbookmarkcontextmenu_eventfilter_isbase) {
            kbookmarkcontextmenu_eventfilter_isbase = false;
            return KBookmarkContextMenu::eventFilter(watched, event);
        } else if (kbookmarkcontextmenu_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kbookmarkcontextmenu_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KBookmarkContextMenu::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbookmarkcontextmenu_childevent_isbase) {
            kbookmarkcontextmenu_childevent_isbase = false;
            KBookmarkContextMenu::childEvent(event);
        } else if (kbookmarkcontextmenu_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kbookmarkcontextmenu_childevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbookmarkcontextmenu_customevent_isbase) {
            kbookmarkcontextmenu_customevent_isbase = false;
            KBookmarkContextMenu::customEvent(event);
        } else if (kbookmarkcontextmenu_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbookmarkcontextmenu_customevent_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbookmarkcontextmenu_connectnotify_isbase) {
            kbookmarkcontextmenu_connectnotify_isbase = false;
            KBookmarkContextMenu::connectNotify(signal);
        } else if (kbookmarkcontextmenu_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkcontextmenu_connectnotify_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbookmarkcontextmenu_disconnectnotify_isbase) {
            kbookmarkcontextmenu_disconnectnotify_isbase = false;
            KBookmarkContextMenu::disconnectNotify(signal);
        } else if (kbookmarkcontextmenu_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbookmarkcontextmenu_disconnectnotify_callback(this, cbval1);
        } else {
            KBookmarkContextMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addBookmark() {
        if (kbookmarkcontextmenu_addbookmark_isbase) {
            kbookmarkcontextmenu_addbookmark_isbase = false;
            KBookmarkContextMenu::addBookmark();
        } else if (kbookmarkcontextmenu_addbookmark_callback != nullptr) {
            kbookmarkcontextmenu_addbookmark_callback();
        } else {
            KBookmarkContextMenu::addBookmark();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addFolderActions() {
        if (kbookmarkcontextmenu_addfolderactions_isbase) {
            kbookmarkcontextmenu_addfolderactions_isbase = false;
            KBookmarkContextMenu::addFolderActions();
        } else if (kbookmarkcontextmenu_addfolderactions_callback != nullptr) {
            kbookmarkcontextmenu_addfolderactions_callback();
        } else {
            KBookmarkContextMenu::addFolderActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addProperties() {
        if (kbookmarkcontextmenu_addproperties_isbase) {
            kbookmarkcontextmenu_addproperties_isbase = false;
            KBookmarkContextMenu::addProperties();
        } else if (kbookmarkcontextmenu_addproperties_callback != nullptr) {
            kbookmarkcontextmenu_addproperties_callback();
        } else {
            KBookmarkContextMenu::addProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addBookmarkActions() {
        if (kbookmarkcontextmenu_addbookmarkactions_isbase) {
            kbookmarkcontextmenu_addbookmarkactions_isbase = false;
            KBookmarkContextMenu::addBookmarkActions();
        } else if (kbookmarkcontextmenu_addbookmarkactions_callback != nullptr) {
            kbookmarkcontextmenu_addbookmarkactions_callback();
        } else {
            KBookmarkContextMenu::addBookmarkActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addOpenFolderInTabs() {
        if (kbookmarkcontextmenu_addopenfolderintabs_isbase) {
            kbookmarkcontextmenu_addopenfolderintabs_isbase = false;
            KBookmarkContextMenu::addOpenFolderInTabs();
        } else if (kbookmarkcontextmenu_addopenfolderintabs_callback != nullptr) {
            kbookmarkcontextmenu_addopenfolderintabs_callback();
        } else {
            KBookmarkContextMenu::addOpenFolderInTabs();
        }
    }

    // Virtual method for C ABI access and custom callback
    KBookmarkManager* manager() const {
        if (kbookmarkcontextmenu_manager_isbase) {
            kbookmarkcontextmenu_manager_isbase = false;
            return KBookmarkContextMenu::manager();
        } else if (kbookmarkcontextmenu_manager_callback != nullptr) {
            KBookmarkManager* callback_ret = kbookmarkcontextmenu_manager_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::manager();
        }
    }

    // Virtual method for C ABI access and custom callback
    KBookmarkOwner* owner() const {
        if (kbookmarkcontextmenu_owner_isbase) {
            kbookmarkcontextmenu_owner_isbase = false;
            return KBookmarkContextMenu::owner();
        } else if (kbookmarkcontextmenu_owner_callback != nullptr) {
            KBookmarkOwner* callback_ret = kbookmarkcontextmenu_owner_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::owner();
        }
    }

    // Virtual method for C ABI access and custom callback
    KBookmark bookmark() const {
        if (kbookmarkcontextmenu_bookmark_isbase) {
            kbookmarkcontextmenu_bookmark_isbase = false;
            return KBookmarkContextMenu::bookmark();
        } else if (kbookmarkcontextmenu_bookmark_callback != nullptr) {
            KBookmark* callback_ret = kbookmarkcontextmenu_bookmark_callback();
            return *callback_ret;
        } else {
            return KBookmarkContextMenu::bookmark();
        }
    }

    // Virtual method for C ABI access and custom callback
    int columnCount() const {
        if (kbookmarkcontextmenu_columncount_isbase) {
            kbookmarkcontextmenu_columncount_isbase = false;
            return KBookmarkContextMenu::columnCount();
        } else if (kbookmarkcontextmenu_columncount_callback != nullptr) {
            int callback_ret = kbookmarkcontextmenu_columncount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkContextMenu::columnCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kbookmarkcontextmenu_updatemicrofocus_isbase) {
            kbookmarkcontextmenu_updatemicrofocus_isbase = false;
            KBookmarkContextMenu::updateMicroFocus();
        } else if (kbookmarkcontextmenu_updatemicrofocus_callback != nullptr) {
            kbookmarkcontextmenu_updatemicrofocus_callback();
        } else {
            KBookmarkContextMenu::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kbookmarkcontextmenu_create_isbase) {
            kbookmarkcontextmenu_create_isbase = false;
            KBookmarkContextMenu::create();
        } else if (kbookmarkcontextmenu_create_callback != nullptr) {
            kbookmarkcontextmenu_create_callback();
        } else {
            KBookmarkContextMenu::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kbookmarkcontextmenu_destroy_isbase) {
            kbookmarkcontextmenu_destroy_isbase = false;
            KBookmarkContextMenu::destroy();
        } else if (kbookmarkcontextmenu_destroy_callback != nullptr) {
            kbookmarkcontextmenu_destroy_callback();
        } else {
            KBookmarkContextMenu::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kbookmarkcontextmenu_focusnextchild_isbase) {
            kbookmarkcontextmenu_focusnextchild_isbase = false;
            return KBookmarkContextMenu::focusNextChild();
        } else if (kbookmarkcontextmenu_focusnextchild_callback != nullptr) {
            bool callback_ret = kbookmarkcontextmenu_focusnextchild_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kbookmarkcontextmenu_focuspreviouschild_isbase) {
            kbookmarkcontextmenu_focuspreviouschild_isbase = false;
            return KBookmarkContextMenu::focusPreviousChild();
        } else if (kbookmarkcontextmenu_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kbookmarkcontextmenu_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbookmarkcontextmenu_sender_isbase) {
            kbookmarkcontextmenu_sender_isbase = false;
            return KBookmarkContextMenu::sender();
        } else if (kbookmarkcontextmenu_sender_callback != nullptr) {
            QObject* callback_ret = kbookmarkcontextmenu_sender_callback();
            return callback_ret;
        } else {
            return KBookmarkContextMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbookmarkcontextmenu_sendersignalindex_isbase) {
            kbookmarkcontextmenu_sendersignalindex_isbase = false;
            return KBookmarkContextMenu::senderSignalIndex();
        } else if (kbookmarkcontextmenu_sendersignalindex_callback != nullptr) {
            int callback_ret = kbookmarkcontextmenu_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkContextMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbookmarkcontextmenu_receivers_isbase) {
            kbookmarkcontextmenu_receivers_isbase = false;
            return KBookmarkContextMenu::receivers(signal);
        } else if (kbookmarkcontextmenu_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kbookmarkcontextmenu_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBookmarkContextMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbookmarkcontextmenu_issignalconnected_isbase) {
            kbookmarkcontextmenu_issignalconnected_isbase = false;
            return KBookmarkContextMenu::isSignalConnected(signal);
        } else if (kbookmarkcontextmenu_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kbookmarkcontextmenu_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBookmarkContextMenu::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kbookmarkcontextmenu_getdecodedmetricf_isbase) {
            kbookmarkcontextmenu_getdecodedmetricf_isbase = false;
            return KBookmarkContextMenu::getDecodedMetricF(metricA, metricB);
        } else if (kbookmarkcontextmenu_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kbookmarkcontextmenu_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KBookmarkContextMenu::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KBookmarkContextMenu_ChangeEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend void KBookmarkContextMenu_QBaseChangeEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend void KBookmarkContextMenu_KeyPressEvent(KBookmarkContextMenu* self, QKeyEvent* param1);
    friend void KBookmarkContextMenu_QBaseKeyPressEvent(KBookmarkContextMenu* self, QKeyEvent* param1);
    friend void KBookmarkContextMenu_MouseReleaseEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_QBaseMouseReleaseEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_MousePressEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_QBaseMousePressEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_MouseMoveEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_QBaseMouseMoveEvent(KBookmarkContextMenu* self, QMouseEvent* param1);
    friend void KBookmarkContextMenu_WheelEvent(KBookmarkContextMenu* self, QWheelEvent* param1);
    friend void KBookmarkContextMenu_QBaseWheelEvent(KBookmarkContextMenu* self, QWheelEvent* param1);
    friend void KBookmarkContextMenu_EnterEvent(KBookmarkContextMenu* self, QEnterEvent* param1);
    friend void KBookmarkContextMenu_QBaseEnterEvent(KBookmarkContextMenu* self, QEnterEvent* param1);
    friend void KBookmarkContextMenu_LeaveEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend void KBookmarkContextMenu_QBaseLeaveEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend void KBookmarkContextMenu_HideEvent(KBookmarkContextMenu* self, QHideEvent* param1);
    friend void KBookmarkContextMenu_QBaseHideEvent(KBookmarkContextMenu* self, QHideEvent* param1);
    friend void KBookmarkContextMenu_PaintEvent(KBookmarkContextMenu* self, QPaintEvent* param1);
    friend void KBookmarkContextMenu_QBasePaintEvent(KBookmarkContextMenu* self, QPaintEvent* param1);
    friend void KBookmarkContextMenu_ActionEvent(KBookmarkContextMenu* self, QActionEvent* param1);
    friend void KBookmarkContextMenu_QBaseActionEvent(KBookmarkContextMenu* self, QActionEvent* param1);
    friend void KBookmarkContextMenu_TimerEvent(KBookmarkContextMenu* self, QTimerEvent* param1);
    friend void KBookmarkContextMenu_QBaseTimerEvent(KBookmarkContextMenu* self, QTimerEvent* param1);
    friend bool KBookmarkContextMenu_Event(KBookmarkContextMenu* self, QEvent* param1);
    friend bool KBookmarkContextMenu_QBaseEvent(KBookmarkContextMenu* self, QEvent* param1);
    friend bool KBookmarkContextMenu_FocusNextPrevChild(KBookmarkContextMenu* self, bool next);
    friend bool KBookmarkContextMenu_QBaseFocusNextPrevChild(KBookmarkContextMenu* self, bool next);
    friend void KBookmarkContextMenu_InitStyleOption(const KBookmarkContextMenu* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KBookmarkContextMenu_QBaseInitStyleOption(const KBookmarkContextMenu* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KBookmarkContextMenu_MouseDoubleClickEvent(KBookmarkContextMenu* self, QMouseEvent* event);
    friend void KBookmarkContextMenu_QBaseMouseDoubleClickEvent(KBookmarkContextMenu* self, QMouseEvent* event);
    friend void KBookmarkContextMenu_KeyReleaseEvent(KBookmarkContextMenu* self, QKeyEvent* event);
    friend void KBookmarkContextMenu_QBaseKeyReleaseEvent(KBookmarkContextMenu* self, QKeyEvent* event);
    friend void KBookmarkContextMenu_FocusInEvent(KBookmarkContextMenu* self, QFocusEvent* event);
    friend void KBookmarkContextMenu_QBaseFocusInEvent(KBookmarkContextMenu* self, QFocusEvent* event);
    friend void KBookmarkContextMenu_FocusOutEvent(KBookmarkContextMenu* self, QFocusEvent* event);
    friend void KBookmarkContextMenu_QBaseFocusOutEvent(KBookmarkContextMenu* self, QFocusEvent* event);
    friend void KBookmarkContextMenu_MoveEvent(KBookmarkContextMenu* self, QMoveEvent* event);
    friend void KBookmarkContextMenu_QBaseMoveEvent(KBookmarkContextMenu* self, QMoveEvent* event);
    friend void KBookmarkContextMenu_ResizeEvent(KBookmarkContextMenu* self, QResizeEvent* event);
    friend void KBookmarkContextMenu_QBaseResizeEvent(KBookmarkContextMenu* self, QResizeEvent* event);
    friend void KBookmarkContextMenu_CloseEvent(KBookmarkContextMenu* self, QCloseEvent* event);
    friend void KBookmarkContextMenu_QBaseCloseEvent(KBookmarkContextMenu* self, QCloseEvent* event);
    friend void KBookmarkContextMenu_ContextMenuEvent(KBookmarkContextMenu* self, QContextMenuEvent* event);
    friend void KBookmarkContextMenu_QBaseContextMenuEvent(KBookmarkContextMenu* self, QContextMenuEvent* event);
    friend void KBookmarkContextMenu_TabletEvent(KBookmarkContextMenu* self, QTabletEvent* event);
    friend void KBookmarkContextMenu_QBaseTabletEvent(KBookmarkContextMenu* self, QTabletEvent* event);
    friend void KBookmarkContextMenu_DragEnterEvent(KBookmarkContextMenu* self, QDragEnterEvent* event);
    friend void KBookmarkContextMenu_QBaseDragEnterEvent(KBookmarkContextMenu* self, QDragEnterEvent* event);
    friend void KBookmarkContextMenu_DragMoveEvent(KBookmarkContextMenu* self, QDragMoveEvent* event);
    friend void KBookmarkContextMenu_QBaseDragMoveEvent(KBookmarkContextMenu* self, QDragMoveEvent* event);
    friend void KBookmarkContextMenu_DragLeaveEvent(KBookmarkContextMenu* self, QDragLeaveEvent* event);
    friend void KBookmarkContextMenu_QBaseDragLeaveEvent(KBookmarkContextMenu* self, QDragLeaveEvent* event);
    friend void KBookmarkContextMenu_DropEvent(KBookmarkContextMenu* self, QDropEvent* event);
    friend void KBookmarkContextMenu_QBaseDropEvent(KBookmarkContextMenu* self, QDropEvent* event);
    friend void KBookmarkContextMenu_ShowEvent(KBookmarkContextMenu* self, QShowEvent* event);
    friend void KBookmarkContextMenu_QBaseShowEvent(KBookmarkContextMenu* self, QShowEvent* event);
    friend bool KBookmarkContextMenu_NativeEvent(KBookmarkContextMenu* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KBookmarkContextMenu_QBaseNativeEvent(KBookmarkContextMenu* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KBookmarkContextMenu_Metric(const KBookmarkContextMenu* self, int param1);
    friend int KBookmarkContextMenu_QBaseMetric(const KBookmarkContextMenu* self, int param1);
    friend void KBookmarkContextMenu_InitPainter(const KBookmarkContextMenu* self, QPainter* painter);
    friend void KBookmarkContextMenu_QBaseInitPainter(const KBookmarkContextMenu* self, QPainter* painter);
    friend QPaintDevice* KBookmarkContextMenu_Redirected(const KBookmarkContextMenu* self, QPoint* offset);
    friend QPaintDevice* KBookmarkContextMenu_QBaseRedirected(const KBookmarkContextMenu* self, QPoint* offset);
    friend QPainter* KBookmarkContextMenu_SharedPainter(const KBookmarkContextMenu* self);
    friend QPainter* KBookmarkContextMenu_QBaseSharedPainter(const KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_InputMethodEvent(KBookmarkContextMenu* self, QInputMethodEvent* param1);
    friend void KBookmarkContextMenu_QBaseInputMethodEvent(KBookmarkContextMenu* self, QInputMethodEvent* param1);
    friend void KBookmarkContextMenu_ChildEvent(KBookmarkContextMenu* self, QChildEvent* event);
    friend void KBookmarkContextMenu_QBaseChildEvent(KBookmarkContextMenu* self, QChildEvent* event);
    friend void KBookmarkContextMenu_CustomEvent(KBookmarkContextMenu* self, QEvent* event);
    friend void KBookmarkContextMenu_QBaseCustomEvent(KBookmarkContextMenu* self, QEvent* event);
    friend void KBookmarkContextMenu_ConnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal);
    friend void KBookmarkContextMenu_QBaseConnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal);
    friend void KBookmarkContextMenu_DisconnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal);
    friend void KBookmarkContextMenu_QBaseDisconnectNotify(KBookmarkContextMenu* self, const QMetaMethod* signal);
    friend void KBookmarkContextMenu_AddBookmark(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseAddBookmark(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_AddFolderActions(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseAddFolderActions(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_AddProperties(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseAddProperties(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_AddBookmarkActions(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseAddBookmarkActions(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_AddOpenFolderInTabs(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseAddOpenFolderInTabs(KBookmarkContextMenu* self);
    friend KBookmarkManager* KBookmarkContextMenu_Manager(const KBookmarkContextMenu* self);
    friend KBookmarkManager* KBookmarkContextMenu_QBaseManager(const KBookmarkContextMenu* self);
    friend KBookmarkOwner* KBookmarkContextMenu_Owner(const KBookmarkContextMenu* self);
    friend KBookmarkOwner* KBookmarkContextMenu_QBaseOwner(const KBookmarkContextMenu* self);
    friend KBookmark* KBookmarkContextMenu_Bookmark(const KBookmarkContextMenu* self);
    friend KBookmark* KBookmarkContextMenu_QBaseBookmark(const KBookmarkContextMenu* self);
    friend int KBookmarkContextMenu_ColumnCount(const KBookmarkContextMenu* self);
    friend int KBookmarkContextMenu_QBaseColumnCount(const KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_UpdateMicroFocus(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseUpdateMicroFocus(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_Create(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseCreate(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_Destroy(KBookmarkContextMenu* self);
    friend void KBookmarkContextMenu_QBaseDestroy(KBookmarkContextMenu* self);
    friend bool KBookmarkContextMenu_FocusNextChild(KBookmarkContextMenu* self);
    friend bool KBookmarkContextMenu_QBaseFocusNextChild(KBookmarkContextMenu* self);
    friend bool KBookmarkContextMenu_FocusPreviousChild(KBookmarkContextMenu* self);
    friend bool KBookmarkContextMenu_QBaseFocusPreviousChild(KBookmarkContextMenu* self);
    friend QObject* KBookmarkContextMenu_Sender(const KBookmarkContextMenu* self);
    friend QObject* KBookmarkContextMenu_QBaseSender(const KBookmarkContextMenu* self);
    friend int KBookmarkContextMenu_SenderSignalIndex(const KBookmarkContextMenu* self);
    friend int KBookmarkContextMenu_QBaseSenderSignalIndex(const KBookmarkContextMenu* self);
    friend int KBookmarkContextMenu_Receivers(const KBookmarkContextMenu* self, const char* signal);
    friend int KBookmarkContextMenu_QBaseReceivers(const KBookmarkContextMenu* self, const char* signal);
    friend bool KBookmarkContextMenu_IsSignalConnected(const KBookmarkContextMenu* self, const QMetaMethod* signal);
    friend bool KBookmarkContextMenu_QBaseIsSignalConnected(const KBookmarkContextMenu* self, const QMetaMethod* signal);
    friend double KBookmarkContextMenu_GetDecodedMetricF(const KBookmarkContextMenu* self, int metricA, int metricB);
    friend double KBookmarkContextMenu_QBaseGetDecodedMetricF(const KBookmarkContextMenu* self, int metricA, int metricB);
};

#endif
