#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMIMETYPECHOOSER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMIMETYPECHOOSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMimeTypeChooser so that we can call protected methods
class VirtualKMimeTypeChooser final : public KMimeTypeChooser {

  public:
    // Virtual class boolean flag
    bool isVirtualKMimeTypeChooser = true;

    // Virtual class public types (including callbacks)
    using KMimeTypeChooser_Metacall_Callback = int (*)(KMimeTypeChooser*, int, int, void**);
    using KMimeTypeChooser_DevType_Callback = int (*)();
    using KMimeTypeChooser_SetVisible_Callback = void (*)(KMimeTypeChooser*, bool);
    using KMimeTypeChooser_SizeHint_Callback = QSize* (*)();
    using KMimeTypeChooser_MinimumSizeHint_Callback = QSize* (*)();
    using KMimeTypeChooser_HeightForWidth_Callback = int (*)(const KMimeTypeChooser*, int);
    using KMimeTypeChooser_HasHeightForWidth_Callback = bool (*)();
    using KMimeTypeChooser_PaintEngine_Callback = QPaintEngine* (*)();
    using KMimeTypeChooser_Event_Callback = bool (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_MousePressEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_MouseReleaseEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_MouseDoubleClickEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_MouseMoveEvent_Callback = void (*)(KMimeTypeChooser*, QMouseEvent*);
    using KMimeTypeChooser_WheelEvent_Callback = void (*)(KMimeTypeChooser*, QWheelEvent*);
    using KMimeTypeChooser_KeyPressEvent_Callback = void (*)(KMimeTypeChooser*, QKeyEvent*);
    using KMimeTypeChooser_KeyReleaseEvent_Callback = void (*)(KMimeTypeChooser*, QKeyEvent*);
    using KMimeTypeChooser_FocusInEvent_Callback = void (*)(KMimeTypeChooser*, QFocusEvent*);
    using KMimeTypeChooser_FocusOutEvent_Callback = void (*)(KMimeTypeChooser*, QFocusEvent*);
    using KMimeTypeChooser_EnterEvent_Callback = void (*)(KMimeTypeChooser*, QEnterEvent*);
    using KMimeTypeChooser_LeaveEvent_Callback = void (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_PaintEvent_Callback = void (*)(KMimeTypeChooser*, QPaintEvent*);
    using KMimeTypeChooser_MoveEvent_Callback = void (*)(KMimeTypeChooser*, QMoveEvent*);
    using KMimeTypeChooser_ResizeEvent_Callback = void (*)(KMimeTypeChooser*, QResizeEvent*);
    using KMimeTypeChooser_CloseEvent_Callback = void (*)(KMimeTypeChooser*, QCloseEvent*);
    using KMimeTypeChooser_ContextMenuEvent_Callback = void (*)(KMimeTypeChooser*, QContextMenuEvent*);
    using KMimeTypeChooser_TabletEvent_Callback = void (*)(KMimeTypeChooser*, QTabletEvent*);
    using KMimeTypeChooser_ActionEvent_Callback = void (*)(KMimeTypeChooser*, QActionEvent*);
    using KMimeTypeChooser_DragEnterEvent_Callback = void (*)(KMimeTypeChooser*, QDragEnterEvent*);
    using KMimeTypeChooser_DragMoveEvent_Callback = void (*)(KMimeTypeChooser*, QDragMoveEvent*);
    using KMimeTypeChooser_DragLeaveEvent_Callback = void (*)(KMimeTypeChooser*, QDragLeaveEvent*);
    using KMimeTypeChooser_DropEvent_Callback = void (*)(KMimeTypeChooser*, QDropEvent*);
    using KMimeTypeChooser_ShowEvent_Callback = void (*)(KMimeTypeChooser*, QShowEvent*);
    using KMimeTypeChooser_HideEvent_Callback = void (*)(KMimeTypeChooser*, QHideEvent*);
    using KMimeTypeChooser_NativeEvent_Callback = bool (*)(KMimeTypeChooser*, libqt_string, void*, intptr_t*);
    using KMimeTypeChooser_ChangeEvent_Callback = void (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_Metric_Callback = int (*)(const KMimeTypeChooser*, int);
    using KMimeTypeChooser_InitPainter_Callback = void (*)(const KMimeTypeChooser*, QPainter*);
    using KMimeTypeChooser_Redirected_Callback = QPaintDevice* (*)(const KMimeTypeChooser*, QPoint*);
    using KMimeTypeChooser_SharedPainter_Callback = QPainter* (*)();
    using KMimeTypeChooser_InputMethodEvent_Callback = void (*)(KMimeTypeChooser*, QInputMethodEvent*);
    using KMimeTypeChooser_InputMethodQuery_Callback = QVariant* (*)(const KMimeTypeChooser*, int);
    using KMimeTypeChooser_FocusNextPrevChild_Callback = bool (*)(KMimeTypeChooser*, bool);
    using KMimeTypeChooser_EventFilter_Callback = bool (*)(KMimeTypeChooser*, QObject*, QEvent*);
    using KMimeTypeChooser_TimerEvent_Callback = void (*)(KMimeTypeChooser*, QTimerEvent*);
    using KMimeTypeChooser_ChildEvent_Callback = void (*)(KMimeTypeChooser*, QChildEvent*);
    using KMimeTypeChooser_CustomEvent_Callback = void (*)(KMimeTypeChooser*, QEvent*);
    using KMimeTypeChooser_ConnectNotify_Callback = void (*)(KMimeTypeChooser*, QMetaMethod*);
    using KMimeTypeChooser_DisconnectNotify_Callback = void (*)(KMimeTypeChooser*, QMetaMethod*);
    using KMimeTypeChooser_UpdateMicroFocus_Callback = void (*)();
    using KMimeTypeChooser_Create_Callback = void (*)();
    using KMimeTypeChooser_Destroy_Callback = void (*)();
    using KMimeTypeChooser_FocusNextChild_Callback = bool (*)();
    using KMimeTypeChooser_FocusPreviousChild_Callback = bool (*)();
    using KMimeTypeChooser_Sender_Callback = QObject* (*)();
    using KMimeTypeChooser_SenderSignalIndex_Callback = int (*)();
    using KMimeTypeChooser_Receivers_Callback = int (*)(const KMimeTypeChooser*, const char*);
    using KMimeTypeChooser_IsSignalConnected_Callback = bool (*)(const KMimeTypeChooser*, QMetaMethod*);
    using KMimeTypeChooser_GetDecodedMetricF_Callback = double (*)(const KMimeTypeChooser*, int, int);

  protected:
    // Instance callback storage
    KMimeTypeChooser_Metacall_Callback kmimetypechooser_metacall_callback = nullptr;
    KMimeTypeChooser_DevType_Callback kmimetypechooser_devtype_callback = nullptr;
    KMimeTypeChooser_SetVisible_Callback kmimetypechooser_setvisible_callback = nullptr;
    KMimeTypeChooser_SizeHint_Callback kmimetypechooser_sizehint_callback = nullptr;
    KMimeTypeChooser_MinimumSizeHint_Callback kmimetypechooser_minimumsizehint_callback = nullptr;
    KMimeTypeChooser_HeightForWidth_Callback kmimetypechooser_heightforwidth_callback = nullptr;
    KMimeTypeChooser_HasHeightForWidth_Callback kmimetypechooser_hasheightforwidth_callback = nullptr;
    KMimeTypeChooser_PaintEngine_Callback kmimetypechooser_paintengine_callback = nullptr;
    KMimeTypeChooser_Event_Callback kmimetypechooser_event_callback = nullptr;
    KMimeTypeChooser_MousePressEvent_Callback kmimetypechooser_mousepressevent_callback = nullptr;
    KMimeTypeChooser_MouseReleaseEvent_Callback kmimetypechooser_mousereleaseevent_callback = nullptr;
    KMimeTypeChooser_MouseDoubleClickEvent_Callback kmimetypechooser_mousedoubleclickevent_callback = nullptr;
    KMimeTypeChooser_MouseMoveEvent_Callback kmimetypechooser_mousemoveevent_callback = nullptr;
    KMimeTypeChooser_WheelEvent_Callback kmimetypechooser_wheelevent_callback = nullptr;
    KMimeTypeChooser_KeyPressEvent_Callback kmimetypechooser_keypressevent_callback = nullptr;
    KMimeTypeChooser_KeyReleaseEvent_Callback kmimetypechooser_keyreleaseevent_callback = nullptr;
    KMimeTypeChooser_FocusInEvent_Callback kmimetypechooser_focusinevent_callback = nullptr;
    KMimeTypeChooser_FocusOutEvent_Callback kmimetypechooser_focusoutevent_callback = nullptr;
    KMimeTypeChooser_EnterEvent_Callback kmimetypechooser_enterevent_callback = nullptr;
    KMimeTypeChooser_LeaveEvent_Callback kmimetypechooser_leaveevent_callback = nullptr;
    KMimeTypeChooser_PaintEvent_Callback kmimetypechooser_paintevent_callback = nullptr;
    KMimeTypeChooser_MoveEvent_Callback kmimetypechooser_moveevent_callback = nullptr;
    KMimeTypeChooser_ResizeEvent_Callback kmimetypechooser_resizeevent_callback = nullptr;
    KMimeTypeChooser_CloseEvent_Callback kmimetypechooser_closeevent_callback = nullptr;
    KMimeTypeChooser_ContextMenuEvent_Callback kmimetypechooser_contextmenuevent_callback = nullptr;
    KMimeTypeChooser_TabletEvent_Callback kmimetypechooser_tabletevent_callback = nullptr;
    KMimeTypeChooser_ActionEvent_Callback kmimetypechooser_actionevent_callback = nullptr;
    KMimeTypeChooser_DragEnterEvent_Callback kmimetypechooser_dragenterevent_callback = nullptr;
    KMimeTypeChooser_DragMoveEvent_Callback kmimetypechooser_dragmoveevent_callback = nullptr;
    KMimeTypeChooser_DragLeaveEvent_Callback kmimetypechooser_dragleaveevent_callback = nullptr;
    KMimeTypeChooser_DropEvent_Callback kmimetypechooser_dropevent_callback = nullptr;
    KMimeTypeChooser_ShowEvent_Callback kmimetypechooser_showevent_callback = nullptr;
    KMimeTypeChooser_HideEvent_Callback kmimetypechooser_hideevent_callback = nullptr;
    KMimeTypeChooser_NativeEvent_Callback kmimetypechooser_nativeevent_callback = nullptr;
    KMimeTypeChooser_ChangeEvent_Callback kmimetypechooser_changeevent_callback = nullptr;
    KMimeTypeChooser_Metric_Callback kmimetypechooser_metric_callback = nullptr;
    KMimeTypeChooser_InitPainter_Callback kmimetypechooser_initpainter_callback = nullptr;
    KMimeTypeChooser_Redirected_Callback kmimetypechooser_redirected_callback = nullptr;
    KMimeTypeChooser_SharedPainter_Callback kmimetypechooser_sharedpainter_callback = nullptr;
    KMimeTypeChooser_InputMethodEvent_Callback kmimetypechooser_inputmethodevent_callback = nullptr;
    KMimeTypeChooser_InputMethodQuery_Callback kmimetypechooser_inputmethodquery_callback = nullptr;
    KMimeTypeChooser_FocusNextPrevChild_Callback kmimetypechooser_focusnextprevchild_callback = nullptr;
    KMimeTypeChooser_EventFilter_Callback kmimetypechooser_eventfilter_callback = nullptr;
    KMimeTypeChooser_TimerEvent_Callback kmimetypechooser_timerevent_callback = nullptr;
    KMimeTypeChooser_ChildEvent_Callback kmimetypechooser_childevent_callback = nullptr;
    KMimeTypeChooser_CustomEvent_Callback kmimetypechooser_customevent_callback = nullptr;
    KMimeTypeChooser_ConnectNotify_Callback kmimetypechooser_connectnotify_callback = nullptr;
    KMimeTypeChooser_DisconnectNotify_Callback kmimetypechooser_disconnectnotify_callback = nullptr;
    KMimeTypeChooser_UpdateMicroFocus_Callback kmimetypechooser_updatemicrofocus_callback = nullptr;
    KMimeTypeChooser_Create_Callback kmimetypechooser_create_callback = nullptr;
    KMimeTypeChooser_Destroy_Callback kmimetypechooser_destroy_callback = nullptr;
    KMimeTypeChooser_FocusNextChild_Callback kmimetypechooser_focusnextchild_callback = nullptr;
    KMimeTypeChooser_FocusPreviousChild_Callback kmimetypechooser_focuspreviouschild_callback = nullptr;
    KMimeTypeChooser_Sender_Callback kmimetypechooser_sender_callback = nullptr;
    KMimeTypeChooser_SenderSignalIndex_Callback kmimetypechooser_sendersignalindex_callback = nullptr;
    KMimeTypeChooser_Receivers_Callback kmimetypechooser_receivers_callback = nullptr;
    KMimeTypeChooser_IsSignalConnected_Callback kmimetypechooser_issignalconnected_callback = nullptr;
    KMimeTypeChooser_GetDecodedMetricF_Callback kmimetypechooser_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kmimetypechooser_metacall_isbase = false;
    mutable bool kmimetypechooser_devtype_isbase = false;
    mutable bool kmimetypechooser_setvisible_isbase = false;
    mutable bool kmimetypechooser_sizehint_isbase = false;
    mutable bool kmimetypechooser_minimumsizehint_isbase = false;
    mutable bool kmimetypechooser_heightforwidth_isbase = false;
    mutable bool kmimetypechooser_hasheightforwidth_isbase = false;
    mutable bool kmimetypechooser_paintengine_isbase = false;
    mutable bool kmimetypechooser_event_isbase = false;
    mutable bool kmimetypechooser_mousepressevent_isbase = false;
    mutable bool kmimetypechooser_mousereleaseevent_isbase = false;
    mutable bool kmimetypechooser_mousedoubleclickevent_isbase = false;
    mutable bool kmimetypechooser_mousemoveevent_isbase = false;
    mutable bool kmimetypechooser_wheelevent_isbase = false;
    mutable bool kmimetypechooser_keypressevent_isbase = false;
    mutable bool kmimetypechooser_keyreleaseevent_isbase = false;
    mutable bool kmimetypechooser_focusinevent_isbase = false;
    mutable bool kmimetypechooser_focusoutevent_isbase = false;
    mutable bool kmimetypechooser_enterevent_isbase = false;
    mutable bool kmimetypechooser_leaveevent_isbase = false;
    mutable bool kmimetypechooser_paintevent_isbase = false;
    mutable bool kmimetypechooser_moveevent_isbase = false;
    mutable bool kmimetypechooser_resizeevent_isbase = false;
    mutable bool kmimetypechooser_closeevent_isbase = false;
    mutable bool kmimetypechooser_contextmenuevent_isbase = false;
    mutable bool kmimetypechooser_tabletevent_isbase = false;
    mutable bool kmimetypechooser_actionevent_isbase = false;
    mutable bool kmimetypechooser_dragenterevent_isbase = false;
    mutable bool kmimetypechooser_dragmoveevent_isbase = false;
    mutable bool kmimetypechooser_dragleaveevent_isbase = false;
    mutable bool kmimetypechooser_dropevent_isbase = false;
    mutable bool kmimetypechooser_showevent_isbase = false;
    mutable bool kmimetypechooser_hideevent_isbase = false;
    mutable bool kmimetypechooser_nativeevent_isbase = false;
    mutable bool kmimetypechooser_changeevent_isbase = false;
    mutable bool kmimetypechooser_metric_isbase = false;
    mutable bool kmimetypechooser_initpainter_isbase = false;
    mutable bool kmimetypechooser_redirected_isbase = false;
    mutable bool kmimetypechooser_sharedpainter_isbase = false;
    mutable bool kmimetypechooser_inputmethodevent_isbase = false;
    mutable bool kmimetypechooser_inputmethodquery_isbase = false;
    mutable bool kmimetypechooser_focusnextprevchild_isbase = false;
    mutable bool kmimetypechooser_eventfilter_isbase = false;
    mutable bool kmimetypechooser_timerevent_isbase = false;
    mutable bool kmimetypechooser_childevent_isbase = false;
    mutable bool kmimetypechooser_customevent_isbase = false;
    mutable bool kmimetypechooser_connectnotify_isbase = false;
    mutable bool kmimetypechooser_disconnectnotify_isbase = false;
    mutable bool kmimetypechooser_updatemicrofocus_isbase = false;
    mutable bool kmimetypechooser_create_isbase = false;
    mutable bool kmimetypechooser_destroy_isbase = false;
    mutable bool kmimetypechooser_focusnextchild_isbase = false;
    mutable bool kmimetypechooser_focuspreviouschild_isbase = false;
    mutable bool kmimetypechooser_sender_isbase = false;
    mutable bool kmimetypechooser_sendersignalindex_isbase = false;
    mutable bool kmimetypechooser_receivers_isbase = false;
    mutable bool kmimetypechooser_issignalconnected_isbase = false;
    mutable bool kmimetypechooser_getdecodedmetricf_isbase = false;

  public:
    VirtualKMimeTypeChooser() : KMimeTypeChooser() {};
    VirtualKMimeTypeChooser(const QString& text) : KMimeTypeChooser(text) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes) : KMimeTypeChooser(text, selectedMimeTypes) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup, groupsToShow) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup, groupsToShow, visuals) {};
    VirtualKMimeTypeChooser(const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals, QWidget* parent) : KMimeTypeChooser(text, selectedMimeTypes, defaultGroup, groupsToShow, visuals, parent) {};

    ~VirtualKMimeTypeChooser() {
        kmimetypechooser_metacall_callback = nullptr;
        kmimetypechooser_devtype_callback = nullptr;
        kmimetypechooser_setvisible_callback = nullptr;
        kmimetypechooser_sizehint_callback = nullptr;
        kmimetypechooser_minimumsizehint_callback = nullptr;
        kmimetypechooser_heightforwidth_callback = nullptr;
        kmimetypechooser_hasheightforwidth_callback = nullptr;
        kmimetypechooser_paintengine_callback = nullptr;
        kmimetypechooser_event_callback = nullptr;
        kmimetypechooser_mousepressevent_callback = nullptr;
        kmimetypechooser_mousereleaseevent_callback = nullptr;
        kmimetypechooser_mousedoubleclickevent_callback = nullptr;
        kmimetypechooser_mousemoveevent_callback = nullptr;
        kmimetypechooser_wheelevent_callback = nullptr;
        kmimetypechooser_keypressevent_callback = nullptr;
        kmimetypechooser_keyreleaseevent_callback = nullptr;
        kmimetypechooser_focusinevent_callback = nullptr;
        kmimetypechooser_focusoutevent_callback = nullptr;
        kmimetypechooser_enterevent_callback = nullptr;
        kmimetypechooser_leaveevent_callback = nullptr;
        kmimetypechooser_paintevent_callback = nullptr;
        kmimetypechooser_moveevent_callback = nullptr;
        kmimetypechooser_resizeevent_callback = nullptr;
        kmimetypechooser_closeevent_callback = nullptr;
        kmimetypechooser_contextmenuevent_callback = nullptr;
        kmimetypechooser_tabletevent_callback = nullptr;
        kmimetypechooser_actionevent_callback = nullptr;
        kmimetypechooser_dragenterevent_callback = nullptr;
        kmimetypechooser_dragmoveevent_callback = nullptr;
        kmimetypechooser_dragleaveevent_callback = nullptr;
        kmimetypechooser_dropevent_callback = nullptr;
        kmimetypechooser_showevent_callback = nullptr;
        kmimetypechooser_hideevent_callback = nullptr;
        kmimetypechooser_nativeevent_callback = nullptr;
        kmimetypechooser_changeevent_callback = nullptr;
        kmimetypechooser_metric_callback = nullptr;
        kmimetypechooser_initpainter_callback = nullptr;
        kmimetypechooser_redirected_callback = nullptr;
        kmimetypechooser_sharedpainter_callback = nullptr;
        kmimetypechooser_inputmethodevent_callback = nullptr;
        kmimetypechooser_inputmethodquery_callback = nullptr;
        kmimetypechooser_focusnextprevchild_callback = nullptr;
        kmimetypechooser_eventfilter_callback = nullptr;
        kmimetypechooser_timerevent_callback = nullptr;
        kmimetypechooser_childevent_callback = nullptr;
        kmimetypechooser_customevent_callback = nullptr;
        kmimetypechooser_connectnotify_callback = nullptr;
        kmimetypechooser_disconnectnotify_callback = nullptr;
        kmimetypechooser_updatemicrofocus_callback = nullptr;
        kmimetypechooser_create_callback = nullptr;
        kmimetypechooser_destroy_callback = nullptr;
        kmimetypechooser_focusnextchild_callback = nullptr;
        kmimetypechooser_focuspreviouschild_callback = nullptr;
        kmimetypechooser_sender_callback = nullptr;
        kmimetypechooser_sendersignalindex_callback = nullptr;
        kmimetypechooser_receivers_callback = nullptr;
        kmimetypechooser_issignalconnected_callback = nullptr;
        kmimetypechooser_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKMimeTypeChooser_Metacall_Callback(KMimeTypeChooser_Metacall_Callback cb) { kmimetypechooser_metacall_callback = cb; }
    inline void setKMimeTypeChooser_DevType_Callback(KMimeTypeChooser_DevType_Callback cb) { kmimetypechooser_devtype_callback = cb; }
    inline void setKMimeTypeChooser_SetVisible_Callback(KMimeTypeChooser_SetVisible_Callback cb) { kmimetypechooser_setvisible_callback = cb; }
    inline void setKMimeTypeChooser_SizeHint_Callback(KMimeTypeChooser_SizeHint_Callback cb) { kmimetypechooser_sizehint_callback = cb; }
    inline void setKMimeTypeChooser_MinimumSizeHint_Callback(KMimeTypeChooser_MinimumSizeHint_Callback cb) { kmimetypechooser_minimumsizehint_callback = cb; }
    inline void setKMimeTypeChooser_HeightForWidth_Callback(KMimeTypeChooser_HeightForWidth_Callback cb) { kmimetypechooser_heightforwidth_callback = cb; }
    inline void setKMimeTypeChooser_HasHeightForWidth_Callback(KMimeTypeChooser_HasHeightForWidth_Callback cb) { kmimetypechooser_hasheightforwidth_callback = cb; }
    inline void setKMimeTypeChooser_PaintEngine_Callback(KMimeTypeChooser_PaintEngine_Callback cb) { kmimetypechooser_paintengine_callback = cb; }
    inline void setKMimeTypeChooser_Event_Callback(KMimeTypeChooser_Event_Callback cb) { kmimetypechooser_event_callback = cb; }
    inline void setKMimeTypeChooser_MousePressEvent_Callback(KMimeTypeChooser_MousePressEvent_Callback cb) { kmimetypechooser_mousepressevent_callback = cb; }
    inline void setKMimeTypeChooser_MouseReleaseEvent_Callback(KMimeTypeChooser_MouseReleaseEvent_Callback cb) { kmimetypechooser_mousereleaseevent_callback = cb; }
    inline void setKMimeTypeChooser_MouseDoubleClickEvent_Callback(KMimeTypeChooser_MouseDoubleClickEvent_Callback cb) { kmimetypechooser_mousedoubleclickevent_callback = cb; }
    inline void setKMimeTypeChooser_MouseMoveEvent_Callback(KMimeTypeChooser_MouseMoveEvent_Callback cb) { kmimetypechooser_mousemoveevent_callback = cb; }
    inline void setKMimeTypeChooser_WheelEvent_Callback(KMimeTypeChooser_WheelEvent_Callback cb) { kmimetypechooser_wheelevent_callback = cb; }
    inline void setKMimeTypeChooser_KeyPressEvent_Callback(KMimeTypeChooser_KeyPressEvent_Callback cb) { kmimetypechooser_keypressevent_callback = cb; }
    inline void setKMimeTypeChooser_KeyReleaseEvent_Callback(KMimeTypeChooser_KeyReleaseEvent_Callback cb) { kmimetypechooser_keyreleaseevent_callback = cb; }
    inline void setKMimeTypeChooser_FocusInEvent_Callback(KMimeTypeChooser_FocusInEvent_Callback cb) { kmimetypechooser_focusinevent_callback = cb; }
    inline void setKMimeTypeChooser_FocusOutEvent_Callback(KMimeTypeChooser_FocusOutEvent_Callback cb) { kmimetypechooser_focusoutevent_callback = cb; }
    inline void setKMimeTypeChooser_EnterEvent_Callback(KMimeTypeChooser_EnterEvent_Callback cb) { kmimetypechooser_enterevent_callback = cb; }
    inline void setKMimeTypeChooser_LeaveEvent_Callback(KMimeTypeChooser_LeaveEvent_Callback cb) { kmimetypechooser_leaveevent_callback = cb; }
    inline void setKMimeTypeChooser_PaintEvent_Callback(KMimeTypeChooser_PaintEvent_Callback cb) { kmimetypechooser_paintevent_callback = cb; }
    inline void setKMimeTypeChooser_MoveEvent_Callback(KMimeTypeChooser_MoveEvent_Callback cb) { kmimetypechooser_moveevent_callback = cb; }
    inline void setKMimeTypeChooser_ResizeEvent_Callback(KMimeTypeChooser_ResizeEvent_Callback cb) { kmimetypechooser_resizeevent_callback = cb; }
    inline void setKMimeTypeChooser_CloseEvent_Callback(KMimeTypeChooser_CloseEvent_Callback cb) { kmimetypechooser_closeevent_callback = cb; }
    inline void setKMimeTypeChooser_ContextMenuEvent_Callback(KMimeTypeChooser_ContextMenuEvent_Callback cb) { kmimetypechooser_contextmenuevent_callback = cb; }
    inline void setKMimeTypeChooser_TabletEvent_Callback(KMimeTypeChooser_TabletEvent_Callback cb) { kmimetypechooser_tabletevent_callback = cb; }
    inline void setKMimeTypeChooser_ActionEvent_Callback(KMimeTypeChooser_ActionEvent_Callback cb) { kmimetypechooser_actionevent_callback = cb; }
    inline void setKMimeTypeChooser_DragEnterEvent_Callback(KMimeTypeChooser_DragEnterEvent_Callback cb) { kmimetypechooser_dragenterevent_callback = cb; }
    inline void setKMimeTypeChooser_DragMoveEvent_Callback(KMimeTypeChooser_DragMoveEvent_Callback cb) { kmimetypechooser_dragmoveevent_callback = cb; }
    inline void setKMimeTypeChooser_DragLeaveEvent_Callback(KMimeTypeChooser_DragLeaveEvent_Callback cb) { kmimetypechooser_dragleaveevent_callback = cb; }
    inline void setKMimeTypeChooser_DropEvent_Callback(KMimeTypeChooser_DropEvent_Callback cb) { kmimetypechooser_dropevent_callback = cb; }
    inline void setKMimeTypeChooser_ShowEvent_Callback(KMimeTypeChooser_ShowEvent_Callback cb) { kmimetypechooser_showevent_callback = cb; }
    inline void setKMimeTypeChooser_HideEvent_Callback(KMimeTypeChooser_HideEvent_Callback cb) { kmimetypechooser_hideevent_callback = cb; }
    inline void setKMimeTypeChooser_NativeEvent_Callback(KMimeTypeChooser_NativeEvent_Callback cb) { kmimetypechooser_nativeevent_callback = cb; }
    inline void setKMimeTypeChooser_ChangeEvent_Callback(KMimeTypeChooser_ChangeEvent_Callback cb) { kmimetypechooser_changeevent_callback = cb; }
    inline void setKMimeTypeChooser_Metric_Callback(KMimeTypeChooser_Metric_Callback cb) { kmimetypechooser_metric_callback = cb; }
    inline void setKMimeTypeChooser_InitPainter_Callback(KMimeTypeChooser_InitPainter_Callback cb) { kmimetypechooser_initpainter_callback = cb; }
    inline void setKMimeTypeChooser_Redirected_Callback(KMimeTypeChooser_Redirected_Callback cb) { kmimetypechooser_redirected_callback = cb; }
    inline void setKMimeTypeChooser_SharedPainter_Callback(KMimeTypeChooser_SharedPainter_Callback cb) { kmimetypechooser_sharedpainter_callback = cb; }
    inline void setKMimeTypeChooser_InputMethodEvent_Callback(KMimeTypeChooser_InputMethodEvent_Callback cb) { kmimetypechooser_inputmethodevent_callback = cb; }
    inline void setKMimeTypeChooser_InputMethodQuery_Callback(KMimeTypeChooser_InputMethodQuery_Callback cb) { kmimetypechooser_inputmethodquery_callback = cb; }
    inline void setKMimeTypeChooser_FocusNextPrevChild_Callback(KMimeTypeChooser_FocusNextPrevChild_Callback cb) { kmimetypechooser_focusnextprevchild_callback = cb; }
    inline void setKMimeTypeChooser_EventFilter_Callback(KMimeTypeChooser_EventFilter_Callback cb) { kmimetypechooser_eventfilter_callback = cb; }
    inline void setKMimeTypeChooser_TimerEvent_Callback(KMimeTypeChooser_TimerEvent_Callback cb) { kmimetypechooser_timerevent_callback = cb; }
    inline void setKMimeTypeChooser_ChildEvent_Callback(KMimeTypeChooser_ChildEvent_Callback cb) { kmimetypechooser_childevent_callback = cb; }
    inline void setKMimeTypeChooser_CustomEvent_Callback(KMimeTypeChooser_CustomEvent_Callback cb) { kmimetypechooser_customevent_callback = cb; }
    inline void setKMimeTypeChooser_ConnectNotify_Callback(KMimeTypeChooser_ConnectNotify_Callback cb) { kmimetypechooser_connectnotify_callback = cb; }
    inline void setKMimeTypeChooser_DisconnectNotify_Callback(KMimeTypeChooser_DisconnectNotify_Callback cb) { kmimetypechooser_disconnectnotify_callback = cb; }
    inline void setKMimeTypeChooser_UpdateMicroFocus_Callback(KMimeTypeChooser_UpdateMicroFocus_Callback cb) { kmimetypechooser_updatemicrofocus_callback = cb; }
    inline void setKMimeTypeChooser_Create_Callback(KMimeTypeChooser_Create_Callback cb) { kmimetypechooser_create_callback = cb; }
    inline void setKMimeTypeChooser_Destroy_Callback(KMimeTypeChooser_Destroy_Callback cb) { kmimetypechooser_destroy_callback = cb; }
    inline void setKMimeTypeChooser_FocusNextChild_Callback(KMimeTypeChooser_FocusNextChild_Callback cb) { kmimetypechooser_focusnextchild_callback = cb; }
    inline void setKMimeTypeChooser_FocusPreviousChild_Callback(KMimeTypeChooser_FocusPreviousChild_Callback cb) { kmimetypechooser_focuspreviouschild_callback = cb; }
    inline void setKMimeTypeChooser_Sender_Callback(KMimeTypeChooser_Sender_Callback cb) { kmimetypechooser_sender_callback = cb; }
    inline void setKMimeTypeChooser_SenderSignalIndex_Callback(KMimeTypeChooser_SenderSignalIndex_Callback cb) { kmimetypechooser_sendersignalindex_callback = cb; }
    inline void setKMimeTypeChooser_Receivers_Callback(KMimeTypeChooser_Receivers_Callback cb) { kmimetypechooser_receivers_callback = cb; }
    inline void setKMimeTypeChooser_IsSignalConnected_Callback(KMimeTypeChooser_IsSignalConnected_Callback cb) { kmimetypechooser_issignalconnected_callback = cb; }
    inline void setKMimeTypeChooser_GetDecodedMetricF_Callback(KMimeTypeChooser_GetDecodedMetricF_Callback cb) { kmimetypechooser_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKMimeTypeChooser_Metacall_IsBase(bool value) const { kmimetypechooser_metacall_isbase = value; }
    inline void setKMimeTypeChooser_DevType_IsBase(bool value) const { kmimetypechooser_devtype_isbase = value; }
    inline void setKMimeTypeChooser_SetVisible_IsBase(bool value) const { kmimetypechooser_setvisible_isbase = value; }
    inline void setKMimeTypeChooser_SizeHint_IsBase(bool value) const { kmimetypechooser_sizehint_isbase = value; }
    inline void setKMimeTypeChooser_MinimumSizeHint_IsBase(bool value) const { kmimetypechooser_minimumsizehint_isbase = value; }
    inline void setKMimeTypeChooser_HeightForWidth_IsBase(bool value) const { kmimetypechooser_heightforwidth_isbase = value; }
    inline void setKMimeTypeChooser_HasHeightForWidth_IsBase(bool value) const { kmimetypechooser_hasheightforwidth_isbase = value; }
    inline void setKMimeTypeChooser_PaintEngine_IsBase(bool value) const { kmimetypechooser_paintengine_isbase = value; }
    inline void setKMimeTypeChooser_Event_IsBase(bool value) const { kmimetypechooser_event_isbase = value; }
    inline void setKMimeTypeChooser_MousePressEvent_IsBase(bool value) const { kmimetypechooser_mousepressevent_isbase = value; }
    inline void setKMimeTypeChooser_MouseReleaseEvent_IsBase(bool value) const { kmimetypechooser_mousereleaseevent_isbase = value; }
    inline void setKMimeTypeChooser_MouseDoubleClickEvent_IsBase(bool value) const { kmimetypechooser_mousedoubleclickevent_isbase = value; }
    inline void setKMimeTypeChooser_MouseMoveEvent_IsBase(bool value) const { kmimetypechooser_mousemoveevent_isbase = value; }
    inline void setKMimeTypeChooser_WheelEvent_IsBase(bool value) const { kmimetypechooser_wheelevent_isbase = value; }
    inline void setKMimeTypeChooser_KeyPressEvent_IsBase(bool value) const { kmimetypechooser_keypressevent_isbase = value; }
    inline void setKMimeTypeChooser_KeyReleaseEvent_IsBase(bool value) const { kmimetypechooser_keyreleaseevent_isbase = value; }
    inline void setKMimeTypeChooser_FocusInEvent_IsBase(bool value) const { kmimetypechooser_focusinevent_isbase = value; }
    inline void setKMimeTypeChooser_FocusOutEvent_IsBase(bool value) const { kmimetypechooser_focusoutevent_isbase = value; }
    inline void setKMimeTypeChooser_EnterEvent_IsBase(bool value) const { kmimetypechooser_enterevent_isbase = value; }
    inline void setKMimeTypeChooser_LeaveEvent_IsBase(bool value) const { kmimetypechooser_leaveevent_isbase = value; }
    inline void setKMimeTypeChooser_PaintEvent_IsBase(bool value) const { kmimetypechooser_paintevent_isbase = value; }
    inline void setKMimeTypeChooser_MoveEvent_IsBase(bool value) const { kmimetypechooser_moveevent_isbase = value; }
    inline void setKMimeTypeChooser_ResizeEvent_IsBase(bool value) const { kmimetypechooser_resizeevent_isbase = value; }
    inline void setKMimeTypeChooser_CloseEvent_IsBase(bool value) const { kmimetypechooser_closeevent_isbase = value; }
    inline void setKMimeTypeChooser_ContextMenuEvent_IsBase(bool value) const { kmimetypechooser_contextmenuevent_isbase = value; }
    inline void setKMimeTypeChooser_TabletEvent_IsBase(bool value) const { kmimetypechooser_tabletevent_isbase = value; }
    inline void setKMimeTypeChooser_ActionEvent_IsBase(bool value) const { kmimetypechooser_actionevent_isbase = value; }
    inline void setKMimeTypeChooser_DragEnterEvent_IsBase(bool value) const { kmimetypechooser_dragenterevent_isbase = value; }
    inline void setKMimeTypeChooser_DragMoveEvent_IsBase(bool value) const { kmimetypechooser_dragmoveevent_isbase = value; }
    inline void setKMimeTypeChooser_DragLeaveEvent_IsBase(bool value) const { kmimetypechooser_dragleaveevent_isbase = value; }
    inline void setKMimeTypeChooser_DropEvent_IsBase(bool value) const { kmimetypechooser_dropevent_isbase = value; }
    inline void setKMimeTypeChooser_ShowEvent_IsBase(bool value) const { kmimetypechooser_showevent_isbase = value; }
    inline void setKMimeTypeChooser_HideEvent_IsBase(bool value) const { kmimetypechooser_hideevent_isbase = value; }
    inline void setKMimeTypeChooser_NativeEvent_IsBase(bool value) const { kmimetypechooser_nativeevent_isbase = value; }
    inline void setKMimeTypeChooser_ChangeEvent_IsBase(bool value) const { kmimetypechooser_changeevent_isbase = value; }
    inline void setKMimeTypeChooser_Metric_IsBase(bool value) const { kmimetypechooser_metric_isbase = value; }
    inline void setKMimeTypeChooser_InitPainter_IsBase(bool value) const { kmimetypechooser_initpainter_isbase = value; }
    inline void setKMimeTypeChooser_Redirected_IsBase(bool value) const { kmimetypechooser_redirected_isbase = value; }
    inline void setKMimeTypeChooser_SharedPainter_IsBase(bool value) const { kmimetypechooser_sharedpainter_isbase = value; }
    inline void setKMimeTypeChooser_InputMethodEvent_IsBase(bool value) const { kmimetypechooser_inputmethodevent_isbase = value; }
    inline void setKMimeTypeChooser_InputMethodQuery_IsBase(bool value) const { kmimetypechooser_inputmethodquery_isbase = value; }
    inline void setKMimeTypeChooser_FocusNextPrevChild_IsBase(bool value) const { kmimetypechooser_focusnextprevchild_isbase = value; }
    inline void setKMimeTypeChooser_EventFilter_IsBase(bool value) const { kmimetypechooser_eventfilter_isbase = value; }
    inline void setKMimeTypeChooser_TimerEvent_IsBase(bool value) const { kmimetypechooser_timerevent_isbase = value; }
    inline void setKMimeTypeChooser_ChildEvent_IsBase(bool value) const { kmimetypechooser_childevent_isbase = value; }
    inline void setKMimeTypeChooser_CustomEvent_IsBase(bool value) const { kmimetypechooser_customevent_isbase = value; }
    inline void setKMimeTypeChooser_ConnectNotify_IsBase(bool value) const { kmimetypechooser_connectnotify_isbase = value; }
    inline void setKMimeTypeChooser_DisconnectNotify_IsBase(bool value) const { kmimetypechooser_disconnectnotify_isbase = value; }
    inline void setKMimeTypeChooser_UpdateMicroFocus_IsBase(bool value) const { kmimetypechooser_updatemicrofocus_isbase = value; }
    inline void setKMimeTypeChooser_Create_IsBase(bool value) const { kmimetypechooser_create_isbase = value; }
    inline void setKMimeTypeChooser_Destroy_IsBase(bool value) const { kmimetypechooser_destroy_isbase = value; }
    inline void setKMimeTypeChooser_FocusNextChild_IsBase(bool value) const { kmimetypechooser_focusnextchild_isbase = value; }
    inline void setKMimeTypeChooser_FocusPreviousChild_IsBase(bool value) const { kmimetypechooser_focuspreviouschild_isbase = value; }
    inline void setKMimeTypeChooser_Sender_IsBase(bool value) const { kmimetypechooser_sender_isbase = value; }
    inline void setKMimeTypeChooser_SenderSignalIndex_IsBase(bool value) const { kmimetypechooser_sendersignalindex_isbase = value; }
    inline void setKMimeTypeChooser_Receivers_IsBase(bool value) const { kmimetypechooser_receivers_isbase = value; }
    inline void setKMimeTypeChooser_IsSignalConnected_IsBase(bool value) const { kmimetypechooser_issignalconnected_isbase = value; }
    inline void setKMimeTypeChooser_GetDecodedMetricF_IsBase(bool value) const { kmimetypechooser_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmimetypechooser_metacall_isbase) {
            kmimetypechooser_metacall_isbase = false;
            return KMimeTypeChooser::qt_metacall(param1, param2, param3);
        } else if (kmimetypechooser_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kmimetypechooser_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooser::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmimetypechooser_devtype_isbase) {
            kmimetypechooser_devtype_isbase = false;
            return KMimeTypeChooser::devType();
        } else if (kmimetypechooser_devtype_callback != nullptr) {
            int callback_ret = kmimetypechooser_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooser::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmimetypechooser_setvisible_isbase) {
            kmimetypechooser_setvisible_isbase = false;
            KMimeTypeChooser::setVisible(visible);
        } else if (kmimetypechooser_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kmimetypechooser_setvisible_callback(this, cbval1);
        } else {
            KMimeTypeChooser::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmimetypechooser_sizehint_isbase) {
            kmimetypechooser_sizehint_isbase = false;
            return KMimeTypeChooser::sizeHint();
        } else if (kmimetypechooser_sizehint_callback != nullptr) {
            QSize* callback_ret = kmimetypechooser_sizehint_callback();
            return *callback_ret;
        } else {
            return KMimeTypeChooser::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmimetypechooser_minimumsizehint_isbase) {
            kmimetypechooser_minimumsizehint_isbase = false;
            return KMimeTypeChooser::minimumSizeHint();
        } else if (kmimetypechooser_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kmimetypechooser_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KMimeTypeChooser::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmimetypechooser_heightforwidth_isbase) {
            kmimetypechooser_heightforwidth_isbase = false;
            return KMimeTypeChooser::heightForWidth(param1);
        } else if (kmimetypechooser_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kmimetypechooser_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooser::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmimetypechooser_hasheightforwidth_isbase) {
            kmimetypechooser_hasheightforwidth_isbase = false;
            return KMimeTypeChooser::hasHeightForWidth();
        } else if (kmimetypechooser_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kmimetypechooser_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooser::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmimetypechooser_paintengine_isbase) {
            kmimetypechooser_paintengine_isbase = false;
            return KMimeTypeChooser::paintEngine();
        } else if (kmimetypechooser_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kmimetypechooser_paintengine_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooser::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmimetypechooser_event_isbase) {
            kmimetypechooser_event_isbase = false;
            return KMimeTypeChooser::event(event);
        } else if (kmimetypechooser_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kmimetypechooser_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooser::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousepressevent_isbase) {
            kmimetypechooser_mousepressevent_isbase = false;
            KMimeTypeChooser::mousePressEvent(event);
        } else if (kmimetypechooser_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooser_mousepressevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousereleaseevent_isbase) {
            kmimetypechooser_mousereleaseevent_isbase = false;
            KMimeTypeChooser::mouseReleaseEvent(event);
        } else if (kmimetypechooser_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooser_mousereleaseevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousedoubleclickevent_isbase) {
            kmimetypechooser_mousedoubleclickevent_isbase = false;
            KMimeTypeChooser::mouseDoubleClickEvent(event);
        } else if (kmimetypechooser_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooser_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmimetypechooser_mousemoveevent_isbase) {
            kmimetypechooser_mousemoveevent_isbase = false;
            KMimeTypeChooser::mouseMoveEvent(event);
        } else if (kmimetypechooser_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooser_mousemoveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmimetypechooser_wheelevent_isbase) {
            kmimetypechooser_wheelevent_isbase = false;
            KMimeTypeChooser::wheelEvent(event);
        } else if (kmimetypechooser_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kmimetypechooser_wheelevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kmimetypechooser_keypressevent_isbase) {
            kmimetypechooser_keypressevent_isbase = false;
            KMimeTypeChooser::keyPressEvent(event);
        } else if (kmimetypechooser_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kmimetypechooser_keypressevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmimetypechooser_keyreleaseevent_isbase) {
            kmimetypechooser_keyreleaseevent_isbase = false;
            KMimeTypeChooser::keyReleaseEvent(event);
        } else if (kmimetypechooser_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kmimetypechooser_keyreleaseevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmimetypechooser_focusinevent_isbase) {
            kmimetypechooser_focusinevent_isbase = false;
            KMimeTypeChooser::focusInEvent(event);
        } else if (kmimetypechooser_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmimetypechooser_focusinevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmimetypechooser_focusoutevent_isbase) {
            kmimetypechooser_focusoutevent_isbase = false;
            KMimeTypeChooser::focusOutEvent(event);
        } else if (kmimetypechooser_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmimetypechooser_focusoutevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmimetypechooser_enterevent_isbase) {
            kmimetypechooser_enterevent_isbase = false;
            KMimeTypeChooser::enterEvent(event);
        } else if (kmimetypechooser_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kmimetypechooser_enterevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmimetypechooser_leaveevent_isbase) {
            kmimetypechooser_leaveevent_isbase = false;
            KMimeTypeChooser::leaveEvent(event);
        } else if (kmimetypechooser_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmimetypechooser_leaveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmimetypechooser_paintevent_isbase) {
            kmimetypechooser_paintevent_isbase = false;
            KMimeTypeChooser::paintEvent(event);
        } else if (kmimetypechooser_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kmimetypechooser_paintevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmimetypechooser_moveevent_isbase) {
            kmimetypechooser_moveevent_isbase = false;
            KMimeTypeChooser::moveEvent(event);
        } else if (kmimetypechooser_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kmimetypechooser_moveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmimetypechooser_resizeevent_isbase) {
            kmimetypechooser_resizeevent_isbase = false;
            KMimeTypeChooser::resizeEvent(event);
        } else if (kmimetypechooser_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kmimetypechooser_resizeevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kmimetypechooser_closeevent_isbase) {
            kmimetypechooser_closeevent_isbase = false;
            KMimeTypeChooser::closeEvent(event);
        } else if (kmimetypechooser_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kmimetypechooser_closeevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmimetypechooser_contextmenuevent_isbase) {
            kmimetypechooser_contextmenuevent_isbase = false;
            KMimeTypeChooser::contextMenuEvent(event);
        } else if (kmimetypechooser_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kmimetypechooser_contextmenuevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmimetypechooser_tabletevent_isbase) {
            kmimetypechooser_tabletevent_isbase = false;
            KMimeTypeChooser::tabletEvent(event);
        } else if (kmimetypechooser_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kmimetypechooser_tabletevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmimetypechooser_actionevent_isbase) {
            kmimetypechooser_actionevent_isbase = false;
            KMimeTypeChooser::actionEvent(event);
        } else if (kmimetypechooser_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kmimetypechooser_actionevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmimetypechooser_dragenterevent_isbase) {
            kmimetypechooser_dragenterevent_isbase = false;
            KMimeTypeChooser::dragEnterEvent(event);
        } else if (kmimetypechooser_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kmimetypechooser_dragenterevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmimetypechooser_dragmoveevent_isbase) {
            kmimetypechooser_dragmoveevent_isbase = false;
            KMimeTypeChooser::dragMoveEvent(event);
        } else if (kmimetypechooser_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kmimetypechooser_dragmoveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmimetypechooser_dragleaveevent_isbase) {
            kmimetypechooser_dragleaveevent_isbase = false;
            KMimeTypeChooser::dragLeaveEvent(event);
        } else if (kmimetypechooser_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kmimetypechooser_dragleaveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmimetypechooser_dropevent_isbase) {
            kmimetypechooser_dropevent_isbase = false;
            KMimeTypeChooser::dropEvent(event);
        } else if (kmimetypechooser_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kmimetypechooser_dropevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmimetypechooser_showevent_isbase) {
            kmimetypechooser_showevent_isbase = false;
            KMimeTypeChooser::showEvent(event);
        } else if (kmimetypechooser_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kmimetypechooser_showevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmimetypechooser_hideevent_isbase) {
            kmimetypechooser_hideevent_isbase = false;
            KMimeTypeChooser::hideEvent(event);
        } else if (kmimetypechooser_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kmimetypechooser_hideevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmimetypechooser_nativeevent_isbase) {
            kmimetypechooser_nativeevent_isbase = false;
            return KMimeTypeChooser::nativeEvent(eventType, message, result);
        } else if (kmimetypechooser_nativeevent_callback != nullptr) {
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

            bool callback_ret = kmimetypechooser_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KMimeTypeChooser::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmimetypechooser_changeevent_isbase) {
            kmimetypechooser_changeevent_isbase = false;
            KMimeTypeChooser::changeEvent(param1);
        } else if (kmimetypechooser_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kmimetypechooser_changeevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmimetypechooser_metric_isbase) {
            kmimetypechooser_metric_isbase = false;
            return KMimeTypeChooser::metric(param1);
        } else if (kmimetypechooser_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kmimetypechooser_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooser::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmimetypechooser_initpainter_isbase) {
            kmimetypechooser_initpainter_isbase = false;
            KMimeTypeChooser::initPainter(painter);
        } else if (kmimetypechooser_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kmimetypechooser_initpainter_callback(this, cbval1);
        } else {
            KMimeTypeChooser::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmimetypechooser_redirected_isbase) {
            kmimetypechooser_redirected_isbase = false;
            return KMimeTypeChooser::redirected(offset);
        } else if (kmimetypechooser_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kmimetypechooser_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooser::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmimetypechooser_sharedpainter_isbase) {
            kmimetypechooser_sharedpainter_isbase = false;
            return KMimeTypeChooser::sharedPainter();
        } else if (kmimetypechooser_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kmimetypechooser_sharedpainter_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooser::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmimetypechooser_inputmethodevent_isbase) {
            kmimetypechooser_inputmethodevent_isbase = false;
            KMimeTypeChooser::inputMethodEvent(param1);
        } else if (kmimetypechooser_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kmimetypechooser_inputmethodevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmimetypechooser_inputmethodquery_isbase) {
            kmimetypechooser_inputmethodquery_isbase = false;
            return KMimeTypeChooser::inputMethodQuery(param1);
        } else if (kmimetypechooser_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kmimetypechooser_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KMimeTypeChooser::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmimetypechooser_focusnextprevchild_isbase) {
            kmimetypechooser_focusnextprevchild_isbase = false;
            return KMimeTypeChooser::focusNextPrevChild(next);
        } else if (kmimetypechooser_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kmimetypechooser_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooser::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmimetypechooser_eventfilter_isbase) {
            kmimetypechooser_eventfilter_isbase = false;
            return KMimeTypeChooser::eventFilter(watched, event);
        } else if (kmimetypechooser_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kmimetypechooser_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KMimeTypeChooser::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmimetypechooser_timerevent_isbase) {
            kmimetypechooser_timerevent_isbase = false;
            KMimeTypeChooser::timerEvent(event);
        } else if (kmimetypechooser_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kmimetypechooser_timerevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmimetypechooser_childevent_isbase) {
            kmimetypechooser_childevent_isbase = false;
            KMimeTypeChooser::childEvent(event);
        } else if (kmimetypechooser_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kmimetypechooser_childevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmimetypechooser_customevent_isbase) {
            kmimetypechooser_customevent_isbase = false;
            KMimeTypeChooser::customEvent(event);
        } else if (kmimetypechooser_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmimetypechooser_customevent_callback(this, cbval1);
        } else {
            KMimeTypeChooser::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooser_connectnotify_isbase) {
            kmimetypechooser_connectnotify_isbase = false;
            KMimeTypeChooser::connectNotify(signal);
        } else if (kmimetypechooser_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmimetypechooser_connectnotify_callback(this, cbval1);
        } else {
            KMimeTypeChooser::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooser_disconnectnotify_isbase) {
            kmimetypechooser_disconnectnotify_isbase = false;
            KMimeTypeChooser::disconnectNotify(signal);
        } else if (kmimetypechooser_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmimetypechooser_disconnectnotify_callback(this, cbval1);
        } else {
            KMimeTypeChooser::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kmimetypechooser_updatemicrofocus_isbase) {
            kmimetypechooser_updatemicrofocus_isbase = false;
            KMimeTypeChooser::updateMicroFocus();
        } else if (kmimetypechooser_updatemicrofocus_callback != nullptr) {
            kmimetypechooser_updatemicrofocus_callback();
        } else {
            KMimeTypeChooser::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kmimetypechooser_create_isbase) {
            kmimetypechooser_create_isbase = false;
            KMimeTypeChooser::create();
        } else if (kmimetypechooser_create_callback != nullptr) {
            kmimetypechooser_create_callback();
        } else {
            KMimeTypeChooser::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kmimetypechooser_destroy_isbase) {
            kmimetypechooser_destroy_isbase = false;
            KMimeTypeChooser::destroy();
        } else if (kmimetypechooser_destroy_callback != nullptr) {
            kmimetypechooser_destroy_callback();
        } else {
            KMimeTypeChooser::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kmimetypechooser_focusnextchild_isbase) {
            kmimetypechooser_focusnextchild_isbase = false;
            return KMimeTypeChooser::focusNextChild();
        } else if (kmimetypechooser_focusnextchild_callback != nullptr) {
            bool callback_ret = kmimetypechooser_focusnextchild_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooser::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kmimetypechooser_focuspreviouschild_isbase) {
            kmimetypechooser_focuspreviouschild_isbase = false;
            return KMimeTypeChooser::focusPreviousChild();
        } else if (kmimetypechooser_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kmimetypechooser_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooser::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmimetypechooser_sender_isbase) {
            kmimetypechooser_sender_isbase = false;
            return KMimeTypeChooser::sender();
        } else if (kmimetypechooser_sender_callback != nullptr) {
            QObject* callback_ret = kmimetypechooser_sender_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooser::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmimetypechooser_sendersignalindex_isbase) {
            kmimetypechooser_sendersignalindex_isbase = false;
            return KMimeTypeChooser::senderSignalIndex();
        } else if (kmimetypechooser_sendersignalindex_callback != nullptr) {
            int callback_ret = kmimetypechooser_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooser::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmimetypechooser_receivers_isbase) {
            kmimetypechooser_receivers_isbase = false;
            return KMimeTypeChooser::receivers(signal);
        } else if (kmimetypechooser_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kmimetypechooser_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooser::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmimetypechooser_issignalconnected_isbase) {
            kmimetypechooser_issignalconnected_isbase = false;
            return KMimeTypeChooser::isSignalConnected(signal);
        } else if (kmimetypechooser_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kmimetypechooser_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooser::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kmimetypechooser_getdecodedmetricf_isbase) {
            kmimetypechooser_getdecodedmetricf_isbase = false;
            return KMimeTypeChooser::getDecodedMetricF(metricA, metricB);
        } else if (kmimetypechooser_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kmimetypechooser_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KMimeTypeChooser::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KMimeTypeChooser_Event(KMimeTypeChooser* self, QEvent* event);
    friend bool KMimeTypeChooser_QBaseEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_MousePressEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_QBaseMousePressEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_MouseReleaseEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_QBaseMouseReleaseEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_MouseDoubleClickEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_QBaseMouseDoubleClickEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_MouseMoveEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_QBaseMouseMoveEvent(KMimeTypeChooser* self, QMouseEvent* event);
    friend void KMimeTypeChooser_WheelEvent(KMimeTypeChooser* self, QWheelEvent* event);
    friend void KMimeTypeChooser_QBaseWheelEvent(KMimeTypeChooser* self, QWheelEvent* event);
    friend void KMimeTypeChooser_KeyPressEvent(KMimeTypeChooser* self, QKeyEvent* event);
    friend void KMimeTypeChooser_QBaseKeyPressEvent(KMimeTypeChooser* self, QKeyEvent* event);
    friend void KMimeTypeChooser_KeyReleaseEvent(KMimeTypeChooser* self, QKeyEvent* event);
    friend void KMimeTypeChooser_QBaseKeyReleaseEvent(KMimeTypeChooser* self, QKeyEvent* event);
    friend void KMimeTypeChooser_FocusInEvent(KMimeTypeChooser* self, QFocusEvent* event);
    friend void KMimeTypeChooser_QBaseFocusInEvent(KMimeTypeChooser* self, QFocusEvent* event);
    friend void KMimeTypeChooser_FocusOutEvent(KMimeTypeChooser* self, QFocusEvent* event);
    friend void KMimeTypeChooser_QBaseFocusOutEvent(KMimeTypeChooser* self, QFocusEvent* event);
    friend void KMimeTypeChooser_EnterEvent(KMimeTypeChooser* self, QEnterEvent* event);
    friend void KMimeTypeChooser_QBaseEnterEvent(KMimeTypeChooser* self, QEnterEvent* event);
    friend void KMimeTypeChooser_LeaveEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_QBaseLeaveEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_PaintEvent(KMimeTypeChooser* self, QPaintEvent* event);
    friend void KMimeTypeChooser_QBasePaintEvent(KMimeTypeChooser* self, QPaintEvent* event);
    friend void KMimeTypeChooser_MoveEvent(KMimeTypeChooser* self, QMoveEvent* event);
    friend void KMimeTypeChooser_QBaseMoveEvent(KMimeTypeChooser* self, QMoveEvent* event);
    friend void KMimeTypeChooser_ResizeEvent(KMimeTypeChooser* self, QResizeEvent* event);
    friend void KMimeTypeChooser_QBaseResizeEvent(KMimeTypeChooser* self, QResizeEvent* event);
    friend void KMimeTypeChooser_CloseEvent(KMimeTypeChooser* self, QCloseEvent* event);
    friend void KMimeTypeChooser_QBaseCloseEvent(KMimeTypeChooser* self, QCloseEvent* event);
    friend void KMimeTypeChooser_ContextMenuEvent(KMimeTypeChooser* self, QContextMenuEvent* event);
    friend void KMimeTypeChooser_QBaseContextMenuEvent(KMimeTypeChooser* self, QContextMenuEvent* event);
    friend void KMimeTypeChooser_TabletEvent(KMimeTypeChooser* self, QTabletEvent* event);
    friend void KMimeTypeChooser_QBaseTabletEvent(KMimeTypeChooser* self, QTabletEvent* event);
    friend void KMimeTypeChooser_ActionEvent(KMimeTypeChooser* self, QActionEvent* event);
    friend void KMimeTypeChooser_QBaseActionEvent(KMimeTypeChooser* self, QActionEvent* event);
    friend void KMimeTypeChooser_DragEnterEvent(KMimeTypeChooser* self, QDragEnterEvent* event);
    friend void KMimeTypeChooser_QBaseDragEnterEvent(KMimeTypeChooser* self, QDragEnterEvent* event);
    friend void KMimeTypeChooser_DragMoveEvent(KMimeTypeChooser* self, QDragMoveEvent* event);
    friend void KMimeTypeChooser_QBaseDragMoveEvent(KMimeTypeChooser* self, QDragMoveEvent* event);
    friend void KMimeTypeChooser_DragLeaveEvent(KMimeTypeChooser* self, QDragLeaveEvent* event);
    friend void KMimeTypeChooser_QBaseDragLeaveEvent(KMimeTypeChooser* self, QDragLeaveEvent* event);
    friend void KMimeTypeChooser_DropEvent(KMimeTypeChooser* self, QDropEvent* event);
    friend void KMimeTypeChooser_QBaseDropEvent(KMimeTypeChooser* self, QDropEvent* event);
    friend void KMimeTypeChooser_ShowEvent(KMimeTypeChooser* self, QShowEvent* event);
    friend void KMimeTypeChooser_QBaseShowEvent(KMimeTypeChooser* self, QShowEvent* event);
    friend void KMimeTypeChooser_HideEvent(KMimeTypeChooser* self, QHideEvent* event);
    friend void KMimeTypeChooser_QBaseHideEvent(KMimeTypeChooser* self, QHideEvent* event);
    friend bool KMimeTypeChooser_NativeEvent(KMimeTypeChooser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KMimeTypeChooser_QBaseNativeEvent(KMimeTypeChooser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMimeTypeChooser_ChangeEvent(KMimeTypeChooser* self, QEvent* param1);
    friend void KMimeTypeChooser_QBaseChangeEvent(KMimeTypeChooser* self, QEvent* param1);
    friend int KMimeTypeChooser_Metric(const KMimeTypeChooser* self, int param1);
    friend int KMimeTypeChooser_QBaseMetric(const KMimeTypeChooser* self, int param1);
    friend void KMimeTypeChooser_InitPainter(const KMimeTypeChooser* self, QPainter* painter);
    friend void KMimeTypeChooser_QBaseInitPainter(const KMimeTypeChooser* self, QPainter* painter);
    friend QPaintDevice* KMimeTypeChooser_Redirected(const KMimeTypeChooser* self, QPoint* offset);
    friend QPaintDevice* KMimeTypeChooser_QBaseRedirected(const KMimeTypeChooser* self, QPoint* offset);
    friend QPainter* KMimeTypeChooser_SharedPainter(const KMimeTypeChooser* self);
    friend QPainter* KMimeTypeChooser_QBaseSharedPainter(const KMimeTypeChooser* self);
    friend void KMimeTypeChooser_InputMethodEvent(KMimeTypeChooser* self, QInputMethodEvent* param1);
    friend void KMimeTypeChooser_QBaseInputMethodEvent(KMimeTypeChooser* self, QInputMethodEvent* param1);
    friend bool KMimeTypeChooser_FocusNextPrevChild(KMimeTypeChooser* self, bool next);
    friend bool KMimeTypeChooser_QBaseFocusNextPrevChild(KMimeTypeChooser* self, bool next);
    friend void KMimeTypeChooser_TimerEvent(KMimeTypeChooser* self, QTimerEvent* event);
    friend void KMimeTypeChooser_QBaseTimerEvent(KMimeTypeChooser* self, QTimerEvent* event);
    friend void KMimeTypeChooser_ChildEvent(KMimeTypeChooser* self, QChildEvent* event);
    friend void KMimeTypeChooser_QBaseChildEvent(KMimeTypeChooser* self, QChildEvent* event);
    friend void KMimeTypeChooser_CustomEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_QBaseCustomEvent(KMimeTypeChooser* self, QEvent* event);
    friend void KMimeTypeChooser_ConnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal);
    friend void KMimeTypeChooser_QBaseConnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal);
    friend void KMimeTypeChooser_DisconnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal);
    friend void KMimeTypeChooser_QBaseDisconnectNotify(KMimeTypeChooser* self, const QMetaMethod* signal);
    friend void KMimeTypeChooser_UpdateMicroFocus(KMimeTypeChooser* self);
    friend void KMimeTypeChooser_QBaseUpdateMicroFocus(KMimeTypeChooser* self);
    friend void KMimeTypeChooser_Create(KMimeTypeChooser* self);
    friend void KMimeTypeChooser_QBaseCreate(KMimeTypeChooser* self);
    friend void KMimeTypeChooser_Destroy(KMimeTypeChooser* self);
    friend void KMimeTypeChooser_QBaseDestroy(KMimeTypeChooser* self);
    friend bool KMimeTypeChooser_FocusNextChild(KMimeTypeChooser* self);
    friend bool KMimeTypeChooser_QBaseFocusNextChild(KMimeTypeChooser* self);
    friend bool KMimeTypeChooser_FocusPreviousChild(KMimeTypeChooser* self);
    friend bool KMimeTypeChooser_QBaseFocusPreviousChild(KMimeTypeChooser* self);
    friend QObject* KMimeTypeChooser_Sender(const KMimeTypeChooser* self);
    friend QObject* KMimeTypeChooser_QBaseSender(const KMimeTypeChooser* self);
    friend int KMimeTypeChooser_SenderSignalIndex(const KMimeTypeChooser* self);
    friend int KMimeTypeChooser_QBaseSenderSignalIndex(const KMimeTypeChooser* self);
    friend int KMimeTypeChooser_Receivers(const KMimeTypeChooser* self, const char* signal);
    friend int KMimeTypeChooser_QBaseReceivers(const KMimeTypeChooser* self, const char* signal);
    friend bool KMimeTypeChooser_IsSignalConnected(const KMimeTypeChooser* self, const QMetaMethod* signal);
    friend bool KMimeTypeChooser_QBaseIsSignalConnected(const KMimeTypeChooser* self, const QMetaMethod* signal);
    friend double KMimeTypeChooser_GetDecodedMetricF(const KMimeTypeChooser* self, int metricA, int metricB);
    friend double KMimeTypeChooser_QBaseGetDecodedMetricF(const KMimeTypeChooser* self, int metricA, int metricB);
};

// This class is a subclass of KMimeTypeChooserDialog so that we can call protected methods
class VirtualKMimeTypeChooserDialog final : public KMimeTypeChooserDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKMimeTypeChooserDialog = true;

    // Virtual class public types (including callbacks)
    using KMimeTypeChooserDialog_Metacall_Callback = int (*)(KMimeTypeChooserDialog*, int, int, void**);
    using KMimeTypeChooserDialog_SizeHint_Callback = QSize* (*)();
    using KMimeTypeChooserDialog_SetVisible_Callback = void (*)(KMimeTypeChooserDialog*, bool);
    using KMimeTypeChooserDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KMimeTypeChooserDialog_Open_Callback = void (*)();
    using KMimeTypeChooserDialog_Exec_Callback = int (*)();
    using KMimeTypeChooserDialog_Done_Callback = void (*)(KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_Accept_Callback = void (*)();
    using KMimeTypeChooserDialog_Reject_Callback = void (*)();
    using KMimeTypeChooserDialog_KeyPressEvent_Callback = void (*)(KMimeTypeChooserDialog*, QKeyEvent*);
    using KMimeTypeChooserDialog_CloseEvent_Callback = void (*)(KMimeTypeChooserDialog*, QCloseEvent*);
    using KMimeTypeChooserDialog_ShowEvent_Callback = void (*)(KMimeTypeChooserDialog*, QShowEvent*);
    using KMimeTypeChooserDialog_ResizeEvent_Callback = void (*)(KMimeTypeChooserDialog*, QResizeEvent*);
    using KMimeTypeChooserDialog_ContextMenuEvent_Callback = void (*)(KMimeTypeChooserDialog*, QContextMenuEvent*);
    using KMimeTypeChooserDialog_EventFilter_Callback = bool (*)(KMimeTypeChooserDialog*, QObject*, QEvent*);
    using KMimeTypeChooserDialog_DevType_Callback = int (*)();
    using KMimeTypeChooserDialog_HeightForWidth_Callback = int (*)(const KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_HasHeightForWidth_Callback = bool (*)();
    using KMimeTypeChooserDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KMimeTypeChooserDialog_Event_Callback = bool (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_MousePressEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_MouseReleaseEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_MouseDoubleClickEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_MouseMoveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMouseEvent*);
    using KMimeTypeChooserDialog_WheelEvent_Callback = void (*)(KMimeTypeChooserDialog*, QWheelEvent*);
    using KMimeTypeChooserDialog_KeyReleaseEvent_Callback = void (*)(KMimeTypeChooserDialog*, QKeyEvent*);
    using KMimeTypeChooserDialog_FocusInEvent_Callback = void (*)(KMimeTypeChooserDialog*, QFocusEvent*);
    using KMimeTypeChooserDialog_FocusOutEvent_Callback = void (*)(KMimeTypeChooserDialog*, QFocusEvent*);
    using KMimeTypeChooserDialog_EnterEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEnterEvent*);
    using KMimeTypeChooserDialog_LeaveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_PaintEvent_Callback = void (*)(KMimeTypeChooserDialog*, QPaintEvent*);
    using KMimeTypeChooserDialog_MoveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QMoveEvent*);
    using KMimeTypeChooserDialog_TabletEvent_Callback = void (*)(KMimeTypeChooserDialog*, QTabletEvent*);
    using KMimeTypeChooserDialog_ActionEvent_Callback = void (*)(KMimeTypeChooserDialog*, QActionEvent*);
    using KMimeTypeChooserDialog_DragEnterEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDragEnterEvent*);
    using KMimeTypeChooserDialog_DragMoveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDragMoveEvent*);
    using KMimeTypeChooserDialog_DragLeaveEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDragLeaveEvent*);
    using KMimeTypeChooserDialog_DropEvent_Callback = void (*)(KMimeTypeChooserDialog*, QDropEvent*);
    using KMimeTypeChooserDialog_HideEvent_Callback = void (*)(KMimeTypeChooserDialog*, QHideEvent*);
    using KMimeTypeChooserDialog_NativeEvent_Callback = bool (*)(KMimeTypeChooserDialog*, libqt_string, void*, intptr_t*);
    using KMimeTypeChooserDialog_ChangeEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_Metric_Callback = int (*)(const KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_InitPainter_Callback = void (*)(const KMimeTypeChooserDialog*, QPainter*);
    using KMimeTypeChooserDialog_Redirected_Callback = QPaintDevice* (*)(const KMimeTypeChooserDialog*, QPoint*);
    using KMimeTypeChooserDialog_SharedPainter_Callback = QPainter* (*)();
    using KMimeTypeChooserDialog_InputMethodEvent_Callback = void (*)(KMimeTypeChooserDialog*, QInputMethodEvent*);
    using KMimeTypeChooserDialog_InputMethodQuery_Callback = QVariant* (*)(const KMimeTypeChooserDialog*, int);
    using KMimeTypeChooserDialog_FocusNextPrevChild_Callback = bool (*)(KMimeTypeChooserDialog*, bool);
    using KMimeTypeChooserDialog_TimerEvent_Callback = void (*)(KMimeTypeChooserDialog*, QTimerEvent*);
    using KMimeTypeChooserDialog_ChildEvent_Callback = void (*)(KMimeTypeChooserDialog*, QChildEvent*);
    using KMimeTypeChooserDialog_CustomEvent_Callback = void (*)(KMimeTypeChooserDialog*, QEvent*);
    using KMimeTypeChooserDialog_ConnectNotify_Callback = void (*)(KMimeTypeChooserDialog*, QMetaMethod*);
    using KMimeTypeChooserDialog_DisconnectNotify_Callback = void (*)(KMimeTypeChooserDialog*, QMetaMethod*);
    using KMimeTypeChooserDialog_AdjustPosition_Callback = void (*)(KMimeTypeChooserDialog*, QWidget*);
    using KMimeTypeChooserDialog_UpdateMicroFocus_Callback = void (*)();
    using KMimeTypeChooserDialog_Create_Callback = void (*)();
    using KMimeTypeChooserDialog_Destroy_Callback = void (*)();
    using KMimeTypeChooserDialog_FocusNextChild_Callback = bool (*)();
    using KMimeTypeChooserDialog_FocusPreviousChild_Callback = bool (*)();
    using KMimeTypeChooserDialog_Sender_Callback = QObject* (*)();
    using KMimeTypeChooserDialog_SenderSignalIndex_Callback = int (*)();
    using KMimeTypeChooserDialog_Receivers_Callback = int (*)(const KMimeTypeChooserDialog*, const char*);
    using KMimeTypeChooserDialog_IsSignalConnected_Callback = bool (*)(const KMimeTypeChooserDialog*, QMetaMethod*);
    using KMimeTypeChooserDialog_GetDecodedMetricF_Callback = double (*)(const KMimeTypeChooserDialog*, int, int);

  protected:
    // Instance callback storage
    KMimeTypeChooserDialog_Metacall_Callback kmimetypechooserdialog_metacall_callback = nullptr;
    KMimeTypeChooserDialog_SizeHint_Callback kmimetypechooserdialog_sizehint_callback = nullptr;
    KMimeTypeChooserDialog_SetVisible_Callback kmimetypechooserdialog_setvisible_callback = nullptr;
    KMimeTypeChooserDialog_MinimumSizeHint_Callback kmimetypechooserdialog_minimumsizehint_callback = nullptr;
    KMimeTypeChooserDialog_Open_Callback kmimetypechooserdialog_open_callback = nullptr;
    KMimeTypeChooserDialog_Exec_Callback kmimetypechooserdialog_exec_callback = nullptr;
    KMimeTypeChooserDialog_Done_Callback kmimetypechooserdialog_done_callback = nullptr;
    KMimeTypeChooserDialog_Accept_Callback kmimetypechooserdialog_accept_callback = nullptr;
    KMimeTypeChooserDialog_Reject_Callback kmimetypechooserdialog_reject_callback = nullptr;
    KMimeTypeChooserDialog_KeyPressEvent_Callback kmimetypechooserdialog_keypressevent_callback = nullptr;
    KMimeTypeChooserDialog_CloseEvent_Callback kmimetypechooserdialog_closeevent_callback = nullptr;
    KMimeTypeChooserDialog_ShowEvent_Callback kmimetypechooserdialog_showevent_callback = nullptr;
    KMimeTypeChooserDialog_ResizeEvent_Callback kmimetypechooserdialog_resizeevent_callback = nullptr;
    KMimeTypeChooserDialog_ContextMenuEvent_Callback kmimetypechooserdialog_contextmenuevent_callback = nullptr;
    KMimeTypeChooserDialog_EventFilter_Callback kmimetypechooserdialog_eventfilter_callback = nullptr;
    KMimeTypeChooserDialog_DevType_Callback kmimetypechooserdialog_devtype_callback = nullptr;
    KMimeTypeChooserDialog_HeightForWidth_Callback kmimetypechooserdialog_heightforwidth_callback = nullptr;
    KMimeTypeChooserDialog_HasHeightForWidth_Callback kmimetypechooserdialog_hasheightforwidth_callback = nullptr;
    KMimeTypeChooserDialog_PaintEngine_Callback kmimetypechooserdialog_paintengine_callback = nullptr;
    KMimeTypeChooserDialog_Event_Callback kmimetypechooserdialog_event_callback = nullptr;
    KMimeTypeChooserDialog_MousePressEvent_Callback kmimetypechooserdialog_mousepressevent_callback = nullptr;
    KMimeTypeChooserDialog_MouseReleaseEvent_Callback kmimetypechooserdialog_mousereleaseevent_callback = nullptr;
    KMimeTypeChooserDialog_MouseDoubleClickEvent_Callback kmimetypechooserdialog_mousedoubleclickevent_callback = nullptr;
    KMimeTypeChooserDialog_MouseMoveEvent_Callback kmimetypechooserdialog_mousemoveevent_callback = nullptr;
    KMimeTypeChooserDialog_WheelEvent_Callback kmimetypechooserdialog_wheelevent_callback = nullptr;
    KMimeTypeChooserDialog_KeyReleaseEvent_Callback kmimetypechooserdialog_keyreleaseevent_callback = nullptr;
    KMimeTypeChooserDialog_FocusInEvent_Callback kmimetypechooserdialog_focusinevent_callback = nullptr;
    KMimeTypeChooserDialog_FocusOutEvent_Callback kmimetypechooserdialog_focusoutevent_callback = nullptr;
    KMimeTypeChooserDialog_EnterEvent_Callback kmimetypechooserdialog_enterevent_callback = nullptr;
    KMimeTypeChooserDialog_LeaveEvent_Callback kmimetypechooserdialog_leaveevent_callback = nullptr;
    KMimeTypeChooserDialog_PaintEvent_Callback kmimetypechooserdialog_paintevent_callback = nullptr;
    KMimeTypeChooserDialog_MoveEvent_Callback kmimetypechooserdialog_moveevent_callback = nullptr;
    KMimeTypeChooserDialog_TabletEvent_Callback kmimetypechooserdialog_tabletevent_callback = nullptr;
    KMimeTypeChooserDialog_ActionEvent_Callback kmimetypechooserdialog_actionevent_callback = nullptr;
    KMimeTypeChooserDialog_DragEnterEvent_Callback kmimetypechooserdialog_dragenterevent_callback = nullptr;
    KMimeTypeChooserDialog_DragMoveEvent_Callback kmimetypechooserdialog_dragmoveevent_callback = nullptr;
    KMimeTypeChooserDialog_DragLeaveEvent_Callback kmimetypechooserdialog_dragleaveevent_callback = nullptr;
    KMimeTypeChooserDialog_DropEvent_Callback kmimetypechooserdialog_dropevent_callback = nullptr;
    KMimeTypeChooserDialog_HideEvent_Callback kmimetypechooserdialog_hideevent_callback = nullptr;
    KMimeTypeChooserDialog_NativeEvent_Callback kmimetypechooserdialog_nativeevent_callback = nullptr;
    KMimeTypeChooserDialog_ChangeEvent_Callback kmimetypechooserdialog_changeevent_callback = nullptr;
    KMimeTypeChooserDialog_Metric_Callback kmimetypechooserdialog_metric_callback = nullptr;
    KMimeTypeChooserDialog_InitPainter_Callback kmimetypechooserdialog_initpainter_callback = nullptr;
    KMimeTypeChooserDialog_Redirected_Callback kmimetypechooserdialog_redirected_callback = nullptr;
    KMimeTypeChooserDialog_SharedPainter_Callback kmimetypechooserdialog_sharedpainter_callback = nullptr;
    KMimeTypeChooserDialog_InputMethodEvent_Callback kmimetypechooserdialog_inputmethodevent_callback = nullptr;
    KMimeTypeChooserDialog_InputMethodQuery_Callback kmimetypechooserdialog_inputmethodquery_callback = nullptr;
    KMimeTypeChooserDialog_FocusNextPrevChild_Callback kmimetypechooserdialog_focusnextprevchild_callback = nullptr;
    KMimeTypeChooserDialog_TimerEvent_Callback kmimetypechooserdialog_timerevent_callback = nullptr;
    KMimeTypeChooserDialog_ChildEvent_Callback kmimetypechooserdialog_childevent_callback = nullptr;
    KMimeTypeChooserDialog_CustomEvent_Callback kmimetypechooserdialog_customevent_callback = nullptr;
    KMimeTypeChooserDialog_ConnectNotify_Callback kmimetypechooserdialog_connectnotify_callback = nullptr;
    KMimeTypeChooserDialog_DisconnectNotify_Callback kmimetypechooserdialog_disconnectnotify_callback = nullptr;
    KMimeTypeChooserDialog_AdjustPosition_Callback kmimetypechooserdialog_adjustposition_callback = nullptr;
    KMimeTypeChooserDialog_UpdateMicroFocus_Callback kmimetypechooserdialog_updatemicrofocus_callback = nullptr;
    KMimeTypeChooserDialog_Create_Callback kmimetypechooserdialog_create_callback = nullptr;
    KMimeTypeChooserDialog_Destroy_Callback kmimetypechooserdialog_destroy_callback = nullptr;
    KMimeTypeChooserDialog_FocusNextChild_Callback kmimetypechooserdialog_focusnextchild_callback = nullptr;
    KMimeTypeChooserDialog_FocusPreviousChild_Callback kmimetypechooserdialog_focuspreviouschild_callback = nullptr;
    KMimeTypeChooserDialog_Sender_Callback kmimetypechooserdialog_sender_callback = nullptr;
    KMimeTypeChooserDialog_SenderSignalIndex_Callback kmimetypechooserdialog_sendersignalindex_callback = nullptr;
    KMimeTypeChooserDialog_Receivers_Callback kmimetypechooserdialog_receivers_callback = nullptr;
    KMimeTypeChooserDialog_IsSignalConnected_Callback kmimetypechooserdialog_issignalconnected_callback = nullptr;
    KMimeTypeChooserDialog_GetDecodedMetricF_Callback kmimetypechooserdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kmimetypechooserdialog_metacall_isbase = false;
    mutable bool kmimetypechooserdialog_sizehint_isbase = false;
    mutable bool kmimetypechooserdialog_setvisible_isbase = false;
    mutable bool kmimetypechooserdialog_minimumsizehint_isbase = false;
    mutable bool kmimetypechooserdialog_open_isbase = false;
    mutable bool kmimetypechooserdialog_exec_isbase = false;
    mutable bool kmimetypechooserdialog_done_isbase = false;
    mutable bool kmimetypechooserdialog_accept_isbase = false;
    mutable bool kmimetypechooserdialog_reject_isbase = false;
    mutable bool kmimetypechooserdialog_keypressevent_isbase = false;
    mutable bool kmimetypechooserdialog_closeevent_isbase = false;
    mutable bool kmimetypechooserdialog_showevent_isbase = false;
    mutable bool kmimetypechooserdialog_resizeevent_isbase = false;
    mutable bool kmimetypechooserdialog_contextmenuevent_isbase = false;
    mutable bool kmimetypechooserdialog_eventfilter_isbase = false;
    mutable bool kmimetypechooserdialog_devtype_isbase = false;
    mutable bool kmimetypechooserdialog_heightforwidth_isbase = false;
    mutable bool kmimetypechooserdialog_hasheightforwidth_isbase = false;
    mutable bool kmimetypechooserdialog_paintengine_isbase = false;
    mutable bool kmimetypechooserdialog_event_isbase = false;
    mutable bool kmimetypechooserdialog_mousepressevent_isbase = false;
    mutable bool kmimetypechooserdialog_mousereleaseevent_isbase = false;
    mutable bool kmimetypechooserdialog_mousedoubleclickevent_isbase = false;
    mutable bool kmimetypechooserdialog_mousemoveevent_isbase = false;
    mutable bool kmimetypechooserdialog_wheelevent_isbase = false;
    mutable bool kmimetypechooserdialog_keyreleaseevent_isbase = false;
    mutable bool kmimetypechooserdialog_focusinevent_isbase = false;
    mutable bool kmimetypechooserdialog_focusoutevent_isbase = false;
    mutable bool kmimetypechooserdialog_enterevent_isbase = false;
    mutable bool kmimetypechooserdialog_leaveevent_isbase = false;
    mutable bool kmimetypechooserdialog_paintevent_isbase = false;
    mutable bool kmimetypechooserdialog_moveevent_isbase = false;
    mutable bool kmimetypechooserdialog_tabletevent_isbase = false;
    mutable bool kmimetypechooserdialog_actionevent_isbase = false;
    mutable bool kmimetypechooserdialog_dragenterevent_isbase = false;
    mutable bool kmimetypechooserdialog_dragmoveevent_isbase = false;
    mutable bool kmimetypechooserdialog_dragleaveevent_isbase = false;
    mutable bool kmimetypechooserdialog_dropevent_isbase = false;
    mutable bool kmimetypechooserdialog_hideevent_isbase = false;
    mutable bool kmimetypechooserdialog_nativeevent_isbase = false;
    mutable bool kmimetypechooserdialog_changeevent_isbase = false;
    mutable bool kmimetypechooserdialog_metric_isbase = false;
    mutable bool kmimetypechooserdialog_initpainter_isbase = false;
    mutable bool kmimetypechooserdialog_redirected_isbase = false;
    mutable bool kmimetypechooserdialog_sharedpainter_isbase = false;
    mutable bool kmimetypechooserdialog_inputmethodevent_isbase = false;
    mutable bool kmimetypechooserdialog_inputmethodquery_isbase = false;
    mutable bool kmimetypechooserdialog_focusnextprevchild_isbase = false;
    mutable bool kmimetypechooserdialog_timerevent_isbase = false;
    mutable bool kmimetypechooserdialog_childevent_isbase = false;
    mutable bool kmimetypechooserdialog_customevent_isbase = false;
    mutable bool kmimetypechooserdialog_connectnotify_isbase = false;
    mutable bool kmimetypechooserdialog_disconnectnotify_isbase = false;
    mutable bool kmimetypechooserdialog_adjustposition_isbase = false;
    mutable bool kmimetypechooserdialog_updatemicrofocus_isbase = false;
    mutable bool kmimetypechooserdialog_create_isbase = false;
    mutable bool kmimetypechooserdialog_destroy_isbase = false;
    mutable bool kmimetypechooserdialog_focusnextchild_isbase = false;
    mutable bool kmimetypechooserdialog_focuspreviouschild_isbase = false;
    mutable bool kmimetypechooserdialog_sender_isbase = false;
    mutable bool kmimetypechooserdialog_sendersignalindex_isbase = false;
    mutable bool kmimetypechooserdialog_receivers_isbase = false;
    mutable bool kmimetypechooserdialog_issignalconnected_isbase = false;
    mutable bool kmimetypechooserdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKMimeTypeChooserDialog() : KMimeTypeChooserDialog() {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, nullptr) {};
    VirtualKMimeTypeChooserDialog(const QString& title) : KMimeTypeChooserDialog(title) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text) : KMimeTypeChooserDialog(title, text) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes) : KMimeTypeChooserDialog(title, text, selectedMimeTypes) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, groupsToShow) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, groupsToShow, visuals) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, const QList<QString>& groupsToShow, int visuals, QWidget* parent) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, groupsToShow, visuals, parent) {};
    VirtualKMimeTypeChooserDialog(const QString& title, const QString& text, const QList<QString>& selectedMimeTypes, const QString& defaultGroup, QWidget* parent) : KMimeTypeChooserDialog(title, text, selectedMimeTypes, defaultGroup, parent) {};

    ~VirtualKMimeTypeChooserDialog() {
        kmimetypechooserdialog_metacall_callback = nullptr;
        kmimetypechooserdialog_sizehint_callback = nullptr;
        kmimetypechooserdialog_setvisible_callback = nullptr;
        kmimetypechooserdialog_minimumsizehint_callback = nullptr;
        kmimetypechooserdialog_open_callback = nullptr;
        kmimetypechooserdialog_exec_callback = nullptr;
        kmimetypechooserdialog_done_callback = nullptr;
        kmimetypechooserdialog_accept_callback = nullptr;
        kmimetypechooserdialog_reject_callback = nullptr;
        kmimetypechooserdialog_keypressevent_callback = nullptr;
        kmimetypechooserdialog_closeevent_callback = nullptr;
        kmimetypechooserdialog_showevent_callback = nullptr;
        kmimetypechooserdialog_resizeevent_callback = nullptr;
        kmimetypechooserdialog_contextmenuevent_callback = nullptr;
        kmimetypechooserdialog_eventfilter_callback = nullptr;
        kmimetypechooserdialog_devtype_callback = nullptr;
        kmimetypechooserdialog_heightforwidth_callback = nullptr;
        kmimetypechooserdialog_hasheightforwidth_callback = nullptr;
        kmimetypechooserdialog_paintengine_callback = nullptr;
        kmimetypechooserdialog_event_callback = nullptr;
        kmimetypechooserdialog_mousepressevent_callback = nullptr;
        kmimetypechooserdialog_mousereleaseevent_callback = nullptr;
        kmimetypechooserdialog_mousedoubleclickevent_callback = nullptr;
        kmimetypechooserdialog_mousemoveevent_callback = nullptr;
        kmimetypechooserdialog_wheelevent_callback = nullptr;
        kmimetypechooserdialog_keyreleaseevent_callback = nullptr;
        kmimetypechooserdialog_focusinevent_callback = nullptr;
        kmimetypechooserdialog_focusoutevent_callback = nullptr;
        kmimetypechooserdialog_enterevent_callback = nullptr;
        kmimetypechooserdialog_leaveevent_callback = nullptr;
        kmimetypechooserdialog_paintevent_callback = nullptr;
        kmimetypechooserdialog_moveevent_callback = nullptr;
        kmimetypechooserdialog_tabletevent_callback = nullptr;
        kmimetypechooserdialog_actionevent_callback = nullptr;
        kmimetypechooserdialog_dragenterevent_callback = nullptr;
        kmimetypechooserdialog_dragmoveevent_callback = nullptr;
        kmimetypechooserdialog_dragleaveevent_callback = nullptr;
        kmimetypechooserdialog_dropevent_callback = nullptr;
        kmimetypechooserdialog_hideevent_callback = nullptr;
        kmimetypechooserdialog_nativeevent_callback = nullptr;
        kmimetypechooserdialog_changeevent_callback = nullptr;
        kmimetypechooserdialog_metric_callback = nullptr;
        kmimetypechooserdialog_initpainter_callback = nullptr;
        kmimetypechooserdialog_redirected_callback = nullptr;
        kmimetypechooserdialog_sharedpainter_callback = nullptr;
        kmimetypechooserdialog_inputmethodevent_callback = nullptr;
        kmimetypechooserdialog_inputmethodquery_callback = nullptr;
        kmimetypechooserdialog_focusnextprevchild_callback = nullptr;
        kmimetypechooserdialog_timerevent_callback = nullptr;
        kmimetypechooserdialog_childevent_callback = nullptr;
        kmimetypechooserdialog_customevent_callback = nullptr;
        kmimetypechooserdialog_connectnotify_callback = nullptr;
        kmimetypechooserdialog_disconnectnotify_callback = nullptr;
        kmimetypechooserdialog_adjustposition_callback = nullptr;
        kmimetypechooserdialog_updatemicrofocus_callback = nullptr;
        kmimetypechooserdialog_create_callback = nullptr;
        kmimetypechooserdialog_destroy_callback = nullptr;
        kmimetypechooserdialog_focusnextchild_callback = nullptr;
        kmimetypechooserdialog_focuspreviouschild_callback = nullptr;
        kmimetypechooserdialog_sender_callback = nullptr;
        kmimetypechooserdialog_sendersignalindex_callback = nullptr;
        kmimetypechooserdialog_receivers_callback = nullptr;
        kmimetypechooserdialog_issignalconnected_callback = nullptr;
        kmimetypechooserdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKMimeTypeChooserDialog_Metacall_Callback(KMimeTypeChooserDialog_Metacall_Callback cb) { kmimetypechooserdialog_metacall_callback = cb; }
    inline void setKMimeTypeChooserDialog_SizeHint_Callback(KMimeTypeChooserDialog_SizeHint_Callback cb) { kmimetypechooserdialog_sizehint_callback = cb; }
    inline void setKMimeTypeChooserDialog_SetVisible_Callback(KMimeTypeChooserDialog_SetVisible_Callback cb) { kmimetypechooserdialog_setvisible_callback = cb; }
    inline void setKMimeTypeChooserDialog_MinimumSizeHint_Callback(KMimeTypeChooserDialog_MinimumSizeHint_Callback cb) { kmimetypechooserdialog_minimumsizehint_callback = cb; }
    inline void setKMimeTypeChooserDialog_Open_Callback(KMimeTypeChooserDialog_Open_Callback cb) { kmimetypechooserdialog_open_callback = cb; }
    inline void setKMimeTypeChooserDialog_Exec_Callback(KMimeTypeChooserDialog_Exec_Callback cb) { kmimetypechooserdialog_exec_callback = cb; }
    inline void setKMimeTypeChooserDialog_Done_Callback(KMimeTypeChooserDialog_Done_Callback cb) { kmimetypechooserdialog_done_callback = cb; }
    inline void setKMimeTypeChooserDialog_Accept_Callback(KMimeTypeChooserDialog_Accept_Callback cb) { kmimetypechooserdialog_accept_callback = cb; }
    inline void setKMimeTypeChooserDialog_Reject_Callback(KMimeTypeChooserDialog_Reject_Callback cb) { kmimetypechooserdialog_reject_callback = cb; }
    inline void setKMimeTypeChooserDialog_KeyPressEvent_Callback(KMimeTypeChooserDialog_KeyPressEvent_Callback cb) { kmimetypechooserdialog_keypressevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_CloseEvent_Callback(KMimeTypeChooserDialog_CloseEvent_Callback cb) { kmimetypechooserdialog_closeevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_ShowEvent_Callback(KMimeTypeChooserDialog_ShowEvent_Callback cb) { kmimetypechooserdialog_showevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_ResizeEvent_Callback(KMimeTypeChooserDialog_ResizeEvent_Callback cb) { kmimetypechooserdialog_resizeevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_ContextMenuEvent_Callback(KMimeTypeChooserDialog_ContextMenuEvent_Callback cb) { kmimetypechooserdialog_contextmenuevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_EventFilter_Callback(KMimeTypeChooserDialog_EventFilter_Callback cb) { kmimetypechooserdialog_eventfilter_callback = cb; }
    inline void setKMimeTypeChooserDialog_DevType_Callback(KMimeTypeChooserDialog_DevType_Callback cb) { kmimetypechooserdialog_devtype_callback = cb; }
    inline void setKMimeTypeChooserDialog_HeightForWidth_Callback(KMimeTypeChooserDialog_HeightForWidth_Callback cb) { kmimetypechooserdialog_heightforwidth_callback = cb; }
    inline void setKMimeTypeChooserDialog_HasHeightForWidth_Callback(KMimeTypeChooserDialog_HasHeightForWidth_Callback cb) { kmimetypechooserdialog_hasheightforwidth_callback = cb; }
    inline void setKMimeTypeChooserDialog_PaintEngine_Callback(KMimeTypeChooserDialog_PaintEngine_Callback cb) { kmimetypechooserdialog_paintengine_callback = cb; }
    inline void setKMimeTypeChooserDialog_Event_Callback(KMimeTypeChooserDialog_Event_Callback cb) { kmimetypechooserdialog_event_callback = cb; }
    inline void setKMimeTypeChooserDialog_MousePressEvent_Callback(KMimeTypeChooserDialog_MousePressEvent_Callback cb) { kmimetypechooserdialog_mousepressevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_MouseReleaseEvent_Callback(KMimeTypeChooserDialog_MouseReleaseEvent_Callback cb) { kmimetypechooserdialog_mousereleaseevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_MouseDoubleClickEvent_Callback(KMimeTypeChooserDialog_MouseDoubleClickEvent_Callback cb) { kmimetypechooserdialog_mousedoubleclickevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_MouseMoveEvent_Callback(KMimeTypeChooserDialog_MouseMoveEvent_Callback cb) { kmimetypechooserdialog_mousemoveevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_WheelEvent_Callback(KMimeTypeChooserDialog_WheelEvent_Callback cb) { kmimetypechooserdialog_wheelevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_KeyReleaseEvent_Callback(KMimeTypeChooserDialog_KeyReleaseEvent_Callback cb) { kmimetypechooserdialog_keyreleaseevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_FocusInEvent_Callback(KMimeTypeChooserDialog_FocusInEvent_Callback cb) { kmimetypechooserdialog_focusinevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_FocusOutEvent_Callback(KMimeTypeChooserDialog_FocusOutEvent_Callback cb) { kmimetypechooserdialog_focusoutevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_EnterEvent_Callback(KMimeTypeChooserDialog_EnterEvent_Callback cb) { kmimetypechooserdialog_enterevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_LeaveEvent_Callback(KMimeTypeChooserDialog_LeaveEvent_Callback cb) { kmimetypechooserdialog_leaveevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_PaintEvent_Callback(KMimeTypeChooserDialog_PaintEvent_Callback cb) { kmimetypechooserdialog_paintevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_MoveEvent_Callback(KMimeTypeChooserDialog_MoveEvent_Callback cb) { kmimetypechooserdialog_moveevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_TabletEvent_Callback(KMimeTypeChooserDialog_TabletEvent_Callback cb) { kmimetypechooserdialog_tabletevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_ActionEvent_Callback(KMimeTypeChooserDialog_ActionEvent_Callback cb) { kmimetypechooserdialog_actionevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_DragEnterEvent_Callback(KMimeTypeChooserDialog_DragEnterEvent_Callback cb) { kmimetypechooserdialog_dragenterevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_DragMoveEvent_Callback(KMimeTypeChooserDialog_DragMoveEvent_Callback cb) { kmimetypechooserdialog_dragmoveevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_DragLeaveEvent_Callback(KMimeTypeChooserDialog_DragLeaveEvent_Callback cb) { kmimetypechooserdialog_dragleaveevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_DropEvent_Callback(KMimeTypeChooserDialog_DropEvent_Callback cb) { kmimetypechooserdialog_dropevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_HideEvent_Callback(KMimeTypeChooserDialog_HideEvent_Callback cb) { kmimetypechooserdialog_hideevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_NativeEvent_Callback(KMimeTypeChooserDialog_NativeEvent_Callback cb) { kmimetypechooserdialog_nativeevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_ChangeEvent_Callback(KMimeTypeChooserDialog_ChangeEvent_Callback cb) { kmimetypechooserdialog_changeevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_Metric_Callback(KMimeTypeChooserDialog_Metric_Callback cb) { kmimetypechooserdialog_metric_callback = cb; }
    inline void setKMimeTypeChooserDialog_InitPainter_Callback(KMimeTypeChooserDialog_InitPainter_Callback cb) { kmimetypechooserdialog_initpainter_callback = cb; }
    inline void setKMimeTypeChooserDialog_Redirected_Callback(KMimeTypeChooserDialog_Redirected_Callback cb) { kmimetypechooserdialog_redirected_callback = cb; }
    inline void setKMimeTypeChooserDialog_SharedPainter_Callback(KMimeTypeChooserDialog_SharedPainter_Callback cb) { kmimetypechooserdialog_sharedpainter_callback = cb; }
    inline void setKMimeTypeChooserDialog_InputMethodEvent_Callback(KMimeTypeChooserDialog_InputMethodEvent_Callback cb) { kmimetypechooserdialog_inputmethodevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_InputMethodQuery_Callback(KMimeTypeChooserDialog_InputMethodQuery_Callback cb) { kmimetypechooserdialog_inputmethodquery_callback = cb; }
    inline void setKMimeTypeChooserDialog_FocusNextPrevChild_Callback(KMimeTypeChooserDialog_FocusNextPrevChild_Callback cb) { kmimetypechooserdialog_focusnextprevchild_callback = cb; }
    inline void setKMimeTypeChooserDialog_TimerEvent_Callback(KMimeTypeChooserDialog_TimerEvent_Callback cb) { kmimetypechooserdialog_timerevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_ChildEvent_Callback(KMimeTypeChooserDialog_ChildEvent_Callback cb) { kmimetypechooserdialog_childevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_CustomEvent_Callback(KMimeTypeChooserDialog_CustomEvent_Callback cb) { kmimetypechooserdialog_customevent_callback = cb; }
    inline void setKMimeTypeChooserDialog_ConnectNotify_Callback(KMimeTypeChooserDialog_ConnectNotify_Callback cb) { kmimetypechooserdialog_connectnotify_callback = cb; }
    inline void setKMimeTypeChooserDialog_DisconnectNotify_Callback(KMimeTypeChooserDialog_DisconnectNotify_Callback cb) { kmimetypechooserdialog_disconnectnotify_callback = cb; }
    inline void setKMimeTypeChooserDialog_AdjustPosition_Callback(KMimeTypeChooserDialog_AdjustPosition_Callback cb) { kmimetypechooserdialog_adjustposition_callback = cb; }
    inline void setKMimeTypeChooserDialog_UpdateMicroFocus_Callback(KMimeTypeChooserDialog_UpdateMicroFocus_Callback cb) { kmimetypechooserdialog_updatemicrofocus_callback = cb; }
    inline void setKMimeTypeChooserDialog_Create_Callback(KMimeTypeChooserDialog_Create_Callback cb) { kmimetypechooserdialog_create_callback = cb; }
    inline void setKMimeTypeChooserDialog_Destroy_Callback(KMimeTypeChooserDialog_Destroy_Callback cb) { kmimetypechooserdialog_destroy_callback = cb; }
    inline void setKMimeTypeChooserDialog_FocusNextChild_Callback(KMimeTypeChooserDialog_FocusNextChild_Callback cb) { kmimetypechooserdialog_focusnextchild_callback = cb; }
    inline void setKMimeTypeChooserDialog_FocusPreviousChild_Callback(KMimeTypeChooserDialog_FocusPreviousChild_Callback cb) { kmimetypechooserdialog_focuspreviouschild_callback = cb; }
    inline void setKMimeTypeChooserDialog_Sender_Callback(KMimeTypeChooserDialog_Sender_Callback cb) { kmimetypechooserdialog_sender_callback = cb; }
    inline void setKMimeTypeChooserDialog_SenderSignalIndex_Callback(KMimeTypeChooserDialog_SenderSignalIndex_Callback cb) { kmimetypechooserdialog_sendersignalindex_callback = cb; }
    inline void setKMimeTypeChooserDialog_Receivers_Callback(KMimeTypeChooserDialog_Receivers_Callback cb) { kmimetypechooserdialog_receivers_callback = cb; }
    inline void setKMimeTypeChooserDialog_IsSignalConnected_Callback(KMimeTypeChooserDialog_IsSignalConnected_Callback cb) { kmimetypechooserdialog_issignalconnected_callback = cb; }
    inline void setKMimeTypeChooserDialog_GetDecodedMetricF_Callback(KMimeTypeChooserDialog_GetDecodedMetricF_Callback cb) { kmimetypechooserdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKMimeTypeChooserDialog_Metacall_IsBase(bool value) const { kmimetypechooserdialog_metacall_isbase = value; }
    inline void setKMimeTypeChooserDialog_SizeHint_IsBase(bool value) const { kmimetypechooserdialog_sizehint_isbase = value; }
    inline void setKMimeTypeChooserDialog_SetVisible_IsBase(bool value) const { kmimetypechooserdialog_setvisible_isbase = value; }
    inline void setKMimeTypeChooserDialog_MinimumSizeHint_IsBase(bool value) const { kmimetypechooserdialog_minimumsizehint_isbase = value; }
    inline void setKMimeTypeChooserDialog_Open_IsBase(bool value) const { kmimetypechooserdialog_open_isbase = value; }
    inline void setKMimeTypeChooserDialog_Exec_IsBase(bool value) const { kmimetypechooserdialog_exec_isbase = value; }
    inline void setKMimeTypeChooserDialog_Done_IsBase(bool value) const { kmimetypechooserdialog_done_isbase = value; }
    inline void setKMimeTypeChooserDialog_Accept_IsBase(bool value) const { kmimetypechooserdialog_accept_isbase = value; }
    inline void setKMimeTypeChooserDialog_Reject_IsBase(bool value) const { kmimetypechooserdialog_reject_isbase = value; }
    inline void setKMimeTypeChooserDialog_KeyPressEvent_IsBase(bool value) const { kmimetypechooserdialog_keypressevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_CloseEvent_IsBase(bool value) const { kmimetypechooserdialog_closeevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_ShowEvent_IsBase(bool value) const { kmimetypechooserdialog_showevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_ResizeEvent_IsBase(bool value) const { kmimetypechooserdialog_resizeevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_ContextMenuEvent_IsBase(bool value) const { kmimetypechooserdialog_contextmenuevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_EventFilter_IsBase(bool value) const { kmimetypechooserdialog_eventfilter_isbase = value; }
    inline void setKMimeTypeChooserDialog_DevType_IsBase(bool value) const { kmimetypechooserdialog_devtype_isbase = value; }
    inline void setKMimeTypeChooserDialog_HeightForWidth_IsBase(bool value) const { kmimetypechooserdialog_heightforwidth_isbase = value; }
    inline void setKMimeTypeChooserDialog_HasHeightForWidth_IsBase(bool value) const { kmimetypechooserdialog_hasheightforwidth_isbase = value; }
    inline void setKMimeTypeChooserDialog_PaintEngine_IsBase(bool value) const { kmimetypechooserdialog_paintengine_isbase = value; }
    inline void setKMimeTypeChooserDialog_Event_IsBase(bool value) const { kmimetypechooserdialog_event_isbase = value; }
    inline void setKMimeTypeChooserDialog_MousePressEvent_IsBase(bool value) const { kmimetypechooserdialog_mousepressevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_MouseReleaseEvent_IsBase(bool value) const { kmimetypechooserdialog_mousereleaseevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_MouseDoubleClickEvent_IsBase(bool value) const { kmimetypechooserdialog_mousedoubleclickevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_MouseMoveEvent_IsBase(bool value) const { kmimetypechooserdialog_mousemoveevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_WheelEvent_IsBase(bool value) const { kmimetypechooserdialog_wheelevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_KeyReleaseEvent_IsBase(bool value) const { kmimetypechooserdialog_keyreleaseevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_FocusInEvent_IsBase(bool value) const { kmimetypechooserdialog_focusinevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_FocusOutEvent_IsBase(bool value) const { kmimetypechooserdialog_focusoutevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_EnterEvent_IsBase(bool value) const { kmimetypechooserdialog_enterevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_LeaveEvent_IsBase(bool value) const { kmimetypechooserdialog_leaveevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_PaintEvent_IsBase(bool value) const { kmimetypechooserdialog_paintevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_MoveEvent_IsBase(bool value) const { kmimetypechooserdialog_moveevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_TabletEvent_IsBase(bool value) const { kmimetypechooserdialog_tabletevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_ActionEvent_IsBase(bool value) const { kmimetypechooserdialog_actionevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_DragEnterEvent_IsBase(bool value) const { kmimetypechooserdialog_dragenterevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_DragMoveEvent_IsBase(bool value) const { kmimetypechooserdialog_dragmoveevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_DragLeaveEvent_IsBase(bool value) const { kmimetypechooserdialog_dragleaveevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_DropEvent_IsBase(bool value) const { kmimetypechooserdialog_dropevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_HideEvent_IsBase(bool value) const { kmimetypechooserdialog_hideevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_NativeEvent_IsBase(bool value) const { kmimetypechooserdialog_nativeevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_ChangeEvent_IsBase(bool value) const { kmimetypechooserdialog_changeevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_Metric_IsBase(bool value) const { kmimetypechooserdialog_metric_isbase = value; }
    inline void setKMimeTypeChooserDialog_InitPainter_IsBase(bool value) const { kmimetypechooserdialog_initpainter_isbase = value; }
    inline void setKMimeTypeChooserDialog_Redirected_IsBase(bool value) const { kmimetypechooserdialog_redirected_isbase = value; }
    inline void setKMimeTypeChooserDialog_SharedPainter_IsBase(bool value) const { kmimetypechooserdialog_sharedpainter_isbase = value; }
    inline void setKMimeTypeChooserDialog_InputMethodEvent_IsBase(bool value) const { kmimetypechooserdialog_inputmethodevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_InputMethodQuery_IsBase(bool value) const { kmimetypechooserdialog_inputmethodquery_isbase = value; }
    inline void setKMimeTypeChooserDialog_FocusNextPrevChild_IsBase(bool value) const { kmimetypechooserdialog_focusnextprevchild_isbase = value; }
    inline void setKMimeTypeChooserDialog_TimerEvent_IsBase(bool value) const { kmimetypechooserdialog_timerevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_ChildEvent_IsBase(bool value) const { kmimetypechooserdialog_childevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_CustomEvent_IsBase(bool value) const { kmimetypechooserdialog_customevent_isbase = value; }
    inline void setKMimeTypeChooserDialog_ConnectNotify_IsBase(bool value) const { kmimetypechooserdialog_connectnotify_isbase = value; }
    inline void setKMimeTypeChooserDialog_DisconnectNotify_IsBase(bool value) const { kmimetypechooserdialog_disconnectnotify_isbase = value; }
    inline void setKMimeTypeChooserDialog_AdjustPosition_IsBase(bool value) const { kmimetypechooserdialog_adjustposition_isbase = value; }
    inline void setKMimeTypeChooserDialog_UpdateMicroFocus_IsBase(bool value) const { kmimetypechooserdialog_updatemicrofocus_isbase = value; }
    inline void setKMimeTypeChooserDialog_Create_IsBase(bool value) const { kmimetypechooserdialog_create_isbase = value; }
    inline void setKMimeTypeChooserDialog_Destroy_IsBase(bool value) const { kmimetypechooserdialog_destroy_isbase = value; }
    inline void setKMimeTypeChooserDialog_FocusNextChild_IsBase(bool value) const { kmimetypechooserdialog_focusnextchild_isbase = value; }
    inline void setKMimeTypeChooserDialog_FocusPreviousChild_IsBase(bool value) const { kmimetypechooserdialog_focuspreviouschild_isbase = value; }
    inline void setKMimeTypeChooserDialog_Sender_IsBase(bool value) const { kmimetypechooserdialog_sender_isbase = value; }
    inline void setKMimeTypeChooserDialog_SenderSignalIndex_IsBase(bool value) const { kmimetypechooserdialog_sendersignalindex_isbase = value; }
    inline void setKMimeTypeChooserDialog_Receivers_IsBase(bool value) const { kmimetypechooserdialog_receivers_isbase = value; }
    inline void setKMimeTypeChooserDialog_IsSignalConnected_IsBase(bool value) const { kmimetypechooserdialog_issignalconnected_isbase = value; }
    inline void setKMimeTypeChooserDialog_GetDecodedMetricF_IsBase(bool value) const { kmimetypechooserdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmimetypechooserdialog_metacall_isbase) {
            kmimetypechooserdialog_metacall_isbase = false;
            return KMimeTypeChooserDialog::qt_metacall(param1, param2, param3);
        } else if (kmimetypechooserdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kmimetypechooserdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmimetypechooserdialog_sizehint_isbase) {
            kmimetypechooserdialog_sizehint_isbase = false;
            return KMimeTypeChooserDialog::sizeHint();
        } else if (kmimetypechooserdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kmimetypechooserdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KMimeTypeChooserDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmimetypechooserdialog_setvisible_isbase) {
            kmimetypechooserdialog_setvisible_isbase = false;
            KMimeTypeChooserDialog::setVisible(visible);
        } else if (kmimetypechooserdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kmimetypechooserdialog_setvisible_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmimetypechooserdialog_minimumsizehint_isbase) {
            kmimetypechooserdialog_minimumsizehint_isbase = false;
            return KMimeTypeChooserDialog::minimumSizeHint();
        } else if (kmimetypechooserdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kmimetypechooserdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KMimeTypeChooserDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kmimetypechooserdialog_open_isbase) {
            kmimetypechooserdialog_open_isbase = false;
            KMimeTypeChooserDialog::open();
        } else if (kmimetypechooserdialog_open_callback != nullptr) {
            kmimetypechooserdialog_open_callback();
        } else {
            KMimeTypeChooserDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kmimetypechooserdialog_exec_isbase) {
            kmimetypechooserdialog_exec_isbase = false;
            return KMimeTypeChooserDialog::exec();
        } else if (kmimetypechooserdialog_exec_callback != nullptr) {
            int callback_ret = kmimetypechooserdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kmimetypechooserdialog_done_isbase) {
            kmimetypechooserdialog_done_isbase = false;
            KMimeTypeChooserDialog::done(param1);
        } else if (kmimetypechooserdialog_done_callback != nullptr) {
            int cbval1 = param1;

            kmimetypechooserdialog_done_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kmimetypechooserdialog_accept_isbase) {
            kmimetypechooserdialog_accept_isbase = false;
            KMimeTypeChooserDialog::accept();
        } else if (kmimetypechooserdialog_accept_callback != nullptr) {
            kmimetypechooserdialog_accept_callback();
        } else {
            KMimeTypeChooserDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kmimetypechooserdialog_reject_isbase) {
            kmimetypechooserdialog_reject_isbase = false;
            KMimeTypeChooserDialog::reject();
        } else if (kmimetypechooserdialog_reject_callback != nullptr) {
            kmimetypechooserdialog_reject_callback();
        } else {
            KMimeTypeChooserDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kmimetypechooserdialog_keypressevent_isbase) {
            kmimetypechooserdialog_keypressevent_isbase = false;
            KMimeTypeChooserDialog::keyPressEvent(param1);
        } else if (kmimetypechooserdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kmimetypechooserdialog_keypressevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kmimetypechooserdialog_closeevent_isbase) {
            kmimetypechooserdialog_closeevent_isbase = false;
            KMimeTypeChooserDialog::closeEvent(param1);
        } else if (kmimetypechooserdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kmimetypechooserdialog_closeevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kmimetypechooserdialog_showevent_isbase) {
            kmimetypechooserdialog_showevent_isbase = false;
            KMimeTypeChooserDialog::showEvent(param1);
        } else if (kmimetypechooserdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kmimetypechooserdialog_showevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kmimetypechooserdialog_resizeevent_isbase) {
            kmimetypechooserdialog_resizeevent_isbase = false;
            KMimeTypeChooserDialog::resizeEvent(param1);
        } else if (kmimetypechooserdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kmimetypechooserdialog_resizeevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kmimetypechooserdialog_contextmenuevent_isbase) {
            kmimetypechooserdialog_contextmenuevent_isbase = false;
            KMimeTypeChooserDialog::contextMenuEvent(param1);
        } else if (kmimetypechooserdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kmimetypechooserdialog_contextmenuevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kmimetypechooserdialog_eventfilter_isbase) {
            kmimetypechooserdialog_eventfilter_isbase = false;
            return KMimeTypeChooserDialog::eventFilter(param1, param2);
        } else if (kmimetypechooserdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kmimetypechooserdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmimetypechooserdialog_devtype_isbase) {
            kmimetypechooserdialog_devtype_isbase = false;
            return KMimeTypeChooserDialog::devType();
        } else if (kmimetypechooserdialog_devtype_callback != nullptr) {
            int callback_ret = kmimetypechooserdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmimetypechooserdialog_heightforwidth_isbase) {
            kmimetypechooserdialog_heightforwidth_isbase = false;
            return KMimeTypeChooserDialog::heightForWidth(param1);
        } else if (kmimetypechooserdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kmimetypechooserdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmimetypechooserdialog_hasheightforwidth_isbase) {
            kmimetypechooserdialog_hasheightforwidth_isbase = false;
            return KMimeTypeChooserDialog::hasHeightForWidth();
        } else if (kmimetypechooserdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kmimetypechooserdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmimetypechooserdialog_paintengine_isbase) {
            kmimetypechooserdialog_paintengine_isbase = false;
            return KMimeTypeChooserDialog::paintEngine();
        } else if (kmimetypechooserdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kmimetypechooserdialog_paintengine_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmimetypechooserdialog_event_isbase) {
            kmimetypechooserdialog_event_isbase = false;
            return KMimeTypeChooserDialog::event(event);
        } else if (kmimetypechooserdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kmimetypechooserdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousepressevent_isbase) {
            kmimetypechooserdialog_mousepressevent_isbase = false;
            KMimeTypeChooserDialog::mousePressEvent(event);
        } else if (kmimetypechooserdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooserdialog_mousepressevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousereleaseevent_isbase) {
            kmimetypechooserdialog_mousereleaseevent_isbase = false;
            KMimeTypeChooserDialog::mouseReleaseEvent(event);
        } else if (kmimetypechooserdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooserdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousedoubleclickevent_isbase) {
            kmimetypechooserdialog_mousedoubleclickevent_isbase = false;
            KMimeTypeChooserDialog::mouseDoubleClickEvent(event);
        } else if (kmimetypechooserdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooserdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmimetypechooserdialog_mousemoveevent_isbase) {
            kmimetypechooserdialog_mousemoveevent_isbase = false;
            KMimeTypeChooserDialog::mouseMoveEvent(event);
        } else if (kmimetypechooserdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmimetypechooserdialog_mousemoveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmimetypechooserdialog_wheelevent_isbase) {
            kmimetypechooserdialog_wheelevent_isbase = false;
            KMimeTypeChooserDialog::wheelEvent(event);
        } else if (kmimetypechooserdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kmimetypechooserdialog_wheelevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmimetypechooserdialog_keyreleaseevent_isbase) {
            kmimetypechooserdialog_keyreleaseevent_isbase = false;
            KMimeTypeChooserDialog::keyReleaseEvent(event);
        } else if (kmimetypechooserdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kmimetypechooserdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmimetypechooserdialog_focusinevent_isbase) {
            kmimetypechooserdialog_focusinevent_isbase = false;
            KMimeTypeChooserDialog::focusInEvent(event);
        } else if (kmimetypechooserdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmimetypechooserdialog_focusinevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmimetypechooserdialog_focusoutevent_isbase) {
            kmimetypechooserdialog_focusoutevent_isbase = false;
            KMimeTypeChooserDialog::focusOutEvent(event);
        } else if (kmimetypechooserdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmimetypechooserdialog_focusoutevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmimetypechooserdialog_enterevent_isbase) {
            kmimetypechooserdialog_enterevent_isbase = false;
            KMimeTypeChooserDialog::enterEvent(event);
        } else if (kmimetypechooserdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kmimetypechooserdialog_enterevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmimetypechooserdialog_leaveevent_isbase) {
            kmimetypechooserdialog_leaveevent_isbase = false;
            KMimeTypeChooserDialog::leaveEvent(event);
        } else if (kmimetypechooserdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmimetypechooserdialog_leaveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmimetypechooserdialog_paintevent_isbase) {
            kmimetypechooserdialog_paintevent_isbase = false;
            KMimeTypeChooserDialog::paintEvent(event);
        } else if (kmimetypechooserdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kmimetypechooserdialog_paintevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmimetypechooserdialog_moveevent_isbase) {
            kmimetypechooserdialog_moveevent_isbase = false;
            KMimeTypeChooserDialog::moveEvent(event);
        } else if (kmimetypechooserdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kmimetypechooserdialog_moveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmimetypechooserdialog_tabletevent_isbase) {
            kmimetypechooserdialog_tabletevent_isbase = false;
            KMimeTypeChooserDialog::tabletEvent(event);
        } else if (kmimetypechooserdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kmimetypechooserdialog_tabletevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmimetypechooserdialog_actionevent_isbase) {
            kmimetypechooserdialog_actionevent_isbase = false;
            KMimeTypeChooserDialog::actionEvent(event);
        } else if (kmimetypechooserdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kmimetypechooserdialog_actionevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmimetypechooserdialog_dragenterevent_isbase) {
            kmimetypechooserdialog_dragenterevent_isbase = false;
            KMimeTypeChooserDialog::dragEnterEvent(event);
        } else if (kmimetypechooserdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kmimetypechooserdialog_dragenterevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmimetypechooserdialog_dragmoveevent_isbase) {
            kmimetypechooserdialog_dragmoveevent_isbase = false;
            KMimeTypeChooserDialog::dragMoveEvent(event);
        } else if (kmimetypechooserdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kmimetypechooserdialog_dragmoveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmimetypechooserdialog_dragleaveevent_isbase) {
            kmimetypechooserdialog_dragleaveevent_isbase = false;
            KMimeTypeChooserDialog::dragLeaveEvent(event);
        } else if (kmimetypechooserdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kmimetypechooserdialog_dragleaveevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmimetypechooserdialog_dropevent_isbase) {
            kmimetypechooserdialog_dropevent_isbase = false;
            KMimeTypeChooserDialog::dropEvent(event);
        } else if (kmimetypechooserdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kmimetypechooserdialog_dropevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmimetypechooserdialog_hideevent_isbase) {
            kmimetypechooserdialog_hideevent_isbase = false;
            KMimeTypeChooserDialog::hideEvent(event);
        } else if (kmimetypechooserdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kmimetypechooserdialog_hideevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmimetypechooserdialog_nativeevent_isbase) {
            kmimetypechooserdialog_nativeevent_isbase = false;
            return KMimeTypeChooserDialog::nativeEvent(eventType, message, result);
        } else if (kmimetypechooserdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kmimetypechooserdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmimetypechooserdialog_changeevent_isbase) {
            kmimetypechooserdialog_changeevent_isbase = false;
            KMimeTypeChooserDialog::changeEvent(param1);
        } else if (kmimetypechooserdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kmimetypechooserdialog_changeevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmimetypechooserdialog_metric_isbase) {
            kmimetypechooserdialog_metric_isbase = false;
            return KMimeTypeChooserDialog::metric(param1);
        } else if (kmimetypechooserdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kmimetypechooserdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmimetypechooserdialog_initpainter_isbase) {
            kmimetypechooserdialog_initpainter_isbase = false;
            KMimeTypeChooserDialog::initPainter(painter);
        } else if (kmimetypechooserdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kmimetypechooserdialog_initpainter_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmimetypechooserdialog_redirected_isbase) {
            kmimetypechooserdialog_redirected_isbase = false;
            return KMimeTypeChooserDialog::redirected(offset);
        } else if (kmimetypechooserdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kmimetypechooserdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmimetypechooserdialog_sharedpainter_isbase) {
            kmimetypechooserdialog_sharedpainter_isbase = false;
            return KMimeTypeChooserDialog::sharedPainter();
        } else if (kmimetypechooserdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kmimetypechooserdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmimetypechooserdialog_inputmethodevent_isbase) {
            kmimetypechooserdialog_inputmethodevent_isbase = false;
            KMimeTypeChooserDialog::inputMethodEvent(param1);
        } else if (kmimetypechooserdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kmimetypechooserdialog_inputmethodevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmimetypechooserdialog_inputmethodquery_isbase) {
            kmimetypechooserdialog_inputmethodquery_isbase = false;
            return KMimeTypeChooserDialog::inputMethodQuery(param1);
        } else if (kmimetypechooserdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kmimetypechooserdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KMimeTypeChooserDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmimetypechooserdialog_focusnextprevchild_isbase) {
            kmimetypechooserdialog_focusnextprevchild_isbase = false;
            return KMimeTypeChooserDialog::focusNextPrevChild(next);
        } else if (kmimetypechooserdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kmimetypechooserdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmimetypechooserdialog_timerevent_isbase) {
            kmimetypechooserdialog_timerevent_isbase = false;
            KMimeTypeChooserDialog::timerEvent(event);
        } else if (kmimetypechooserdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kmimetypechooserdialog_timerevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmimetypechooserdialog_childevent_isbase) {
            kmimetypechooserdialog_childevent_isbase = false;
            KMimeTypeChooserDialog::childEvent(event);
        } else if (kmimetypechooserdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kmimetypechooserdialog_childevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmimetypechooserdialog_customevent_isbase) {
            kmimetypechooserdialog_customevent_isbase = false;
            KMimeTypeChooserDialog::customEvent(event);
        } else if (kmimetypechooserdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmimetypechooserdialog_customevent_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooserdialog_connectnotify_isbase) {
            kmimetypechooserdialog_connectnotify_isbase = false;
            KMimeTypeChooserDialog::connectNotify(signal);
        } else if (kmimetypechooserdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmimetypechooserdialog_connectnotify_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmimetypechooserdialog_disconnectnotify_isbase) {
            kmimetypechooserdialog_disconnectnotify_isbase = false;
            KMimeTypeChooserDialog::disconnectNotify(signal);
        } else if (kmimetypechooserdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmimetypechooserdialog_disconnectnotify_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kmimetypechooserdialog_adjustposition_isbase) {
            kmimetypechooserdialog_adjustposition_isbase = false;
            KMimeTypeChooserDialog::adjustPosition(param1);
        } else if (kmimetypechooserdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kmimetypechooserdialog_adjustposition_callback(this, cbval1);
        } else {
            KMimeTypeChooserDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kmimetypechooserdialog_updatemicrofocus_isbase) {
            kmimetypechooserdialog_updatemicrofocus_isbase = false;
            KMimeTypeChooserDialog::updateMicroFocus();
        } else if (kmimetypechooserdialog_updatemicrofocus_callback != nullptr) {
            kmimetypechooserdialog_updatemicrofocus_callback();
        } else {
            KMimeTypeChooserDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kmimetypechooserdialog_create_isbase) {
            kmimetypechooserdialog_create_isbase = false;
            KMimeTypeChooserDialog::create();
        } else if (kmimetypechooserdialog_create_callback != nullptr) {
            kmimetypechooserdialog_create_callback();
        } else {
            KMimeTypeChooserDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kmimetypechooserdialog_destroy_isbase) {
            kmimetypechooserdialog_destroy_isbase = false;
            KMimeTypeChooserDialog::destroy();
        } else if (kmimetypechooserdialog_destroy_callback != nullptr) {
            kmimetypechooserdialog_destroy_callback();
        } else {
            KMimeTypeChooserDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kmimetypechooserdialog_focusnextchild_isbase) {
            kmimetypechooserdialog_focusnextchild_isbase = false;
            return KMimeTypeChooserDialog::focusNextChild();
        } else if (kmimetypechooserdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kmimetypechooserdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kmimetypechooserdialog_focuspreviouschild_isbase) {
            kmimetypechooserdialog_focuspreviouschild_isbase = false;
            return KMimeTypeChooserDialog::focusPreviousChild();
        } else if (kmimetypechooserdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kmimetypechooserdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmimetypechooserdialog_sender_isbase) {
            kmimetypechooserdialog_sender_isbase = false;
            return KMimeTypeChooserDialog::sender();
        } else if (kmimetypechooserdialog_sender_callback != nullptr) {
            QObject* callback_ret = kmimetypechooserdialog_sender_callback();
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmimetypechooserdialog_sendersignalindex_isbase) {
            kmimetypechooserdialog_sendersignalindex_isbase = false;
            return KMimeTypeChooserDialog::senderSignalIndex();
        } else if (kmimetypechooserdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kmimetypechooserdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmimetypechooserdialog_receivers_isbase) {
            kmimetypechooserdialog_receivers_isbase = false;
            return KMimeTypeChooserDialog::receivers(signal);
        } else if (kmimetypechooserdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kmimetypechooserdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmimetypechooserdialog_issignalconnected_isbase) {
            kmimetypechooserdialog_issignalconnected_isbase = false;
            return KMimeTypeChooserDialog::isSignalConnected(signal);
        } else if (kmimetypechooserdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kmimetypechooserdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMimeTypeChooserDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kmimetypechooserdialog_getdecodedmetricf_isbase) {
            kmimetypechooserdialog_getdecodedmetricf_isbase = false;
            return KMimeTypeChooserDialog::getDecodedMetricF(metricA, metricB);
        } else if (kmimetypechooserdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kmimetypechooserdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KMimeTypeChooserDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KMimeTypeChooserDialog_KeyPressEvent(KMimeTypeChooserDialog* self, QKeyEvent* param1);
    friend void KMimeTypeChooserDialog_QBaseKeyPressEvent(KMimeTypeChooserDialog* self, QKeyEvent* param1);
    friend void KMimeTypeChooserDialog_CloseEvent(KMimeTypeChooserDialog* self, QCloseEvent* param1);
    friend void KMimeTypeChooserDialog_QBaseCloseEvent(KMimeTypeChooserDialog* self, QCloseEvent* param1);
    friend void KMimeTypeChooserDialog_ShowEvent(KMimeTypeChooserDialog* self, QShowEvent* param1);
    friend void KMimeTypeChooserDialog_QBaseShowEvent(KMimeTypeChooserDialog* self, QShowEvent* param1);
    friend void KMimeTypeChooserDialog_ResizeEvent(KMimeTypeChooserDialog* self, QResizeEvent* param1);
    friend void KMimeTypeChooserDialog_QBaseResizeEvent(KMimeTypeChooserDialog* self, QResizeEvent* param1);
    friend void KMimeTypeChooserDialog_ContextMenuEvent(KMimeTypeChooserDialog* self, QContextMenuEvent* param1);
    friend void KMimeTypeChooserDialog_QBaseContextMenuEvent(KMimeTypeChooserDialog* self, QContextMenuEvent* param1);
    friend bool KMimeTypeChooserDialog_EventFilter(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2);
    friend bool KMimeTypeChooserDialog_QBaseEventFilter(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2);
    friend bool KMimeTypeChooserDialog_Event(KMimeTypeChooserDialog* self, QEvent* event);
    friend bool KMimeTypeChooserDialog_QBaseEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_MousePressEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_QBaseMousePressEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_MouseReleaseEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_QBaseMouseReleaseEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_MouseDoubleClickEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_QBaseMouseDoubleClickEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_MouseMoveEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_QBaseMouseMoveEvent(KMimeTypeChooserDialog* self, QMouseEvent* event);
    friend void KMimeTypeChooserDialog_WheelEvent(KMimeTypeChooserDialog* self, QWheelEvent* event);
    friend void KMimeTypeChooserDialog_QBaseWheelEvent(KMimeTypeChooserDialog* self, QWheelEvent* event);
    friend void KMimeTypeChooserDialog_KeyReleaseEvent(KMimeTypeChooserDialog* self, QKeyEvent* event);
    friend void KMimeTypeChooserDialog_QBaseKeyReleaseEvent(KMimeTypeChooserDialog* self, QKeyEvent* event);
    friend void KMimeTypeChooserDialog_FocusInEvent(KMimeTypeChooserDialog* self, QFocusEvent* event);
    friend void KMimeTypeChooserDialog_QBaseFocusInEvent(KMimeTypeChooserDialog* self, QFocusEvent* event);
    friend void KMimeTypeChooserDialog_FocusOutEvent(KMimeTypeChooserDialog* self, QFocusEvent* event);
    friend void KMimeTypeChooserDialog_QBaseFocusOutEvent(KMimeTypeChooserDialog* self, QFocusEvent* event);
    friend void KMimeTypeChooserDialog_EnterEvent(KMimeTypeChooserDialog* self, QEnterEvent* event);
    friend void KMimeTypeChooserDialog_QBaseEnterEvent(KMimeTypeChooserDialog* self, QEnterEvent* event);
    friend void KMimeTypeChooserDialog_LeaveEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_QBaseLeaveEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_PaintEvent(KMimeTypeChooserDialog* self, QPaintEvent* event);
    friend void KMimeTypeChooserDialog_QBasePaintEvent(KMimeTypeChooserDialog* self, QPaintEvent* event);
    friend void KMimeTypeChooserDialog_MoveEvent(KMimeTypeChooserDialog* self, QMoveEvent* event);
    friend void KMimeTypeChooserDialog_QBaseMoveEvent(KMimeTypeChooserDialog* self, QMoveEvent* event);
    friend void KMimeTypeChooserDialog_TabletEvent(KMimeTypeChooserDialog* self, QTabletEvent* event);
    friend void KMimeTypeChooserDialog_QBaseTabletEvent(KMimeTypeChooserDialog* self, QTabletEvent* event);
    friend void KMimeTypeChooserDialog_ActionEvent(KMimeTypeChooserDialog* self, QActionEvent* event);
    friend void KMimeTypeChooserDialog_QBaseActionEvent(KMimeTypeChooserDialog* self, QActionEvent* event);
    friend void KMimeTypeChooserDialog_DragEnterEvent(KMimeTypeChooserDialog* self, QDragEnterEvent* event);
    friend void KMimeTypeChooserDialog_QBaseDragEnterEvent(KMimeTypeChooserDialog* self, QDragEnterEvent* event);
    friend void KMimeTypeChooserDialog_DragMoveEvent(KMimeTypeChooserDialog* self, QDragMoveEvent* event);
    friend void KMimeTypeChooserDialog_QBaseDragMoveEvent(KMimeTypeChooserDialog* self, QDragMoveEvent* event);
    friend void KMimeTypeChooserDialog_DragLeaveEvent(KMimeTypeChooserDialog* self, QDragLeaveEvent* event);
    friend void KMimeTypeChooserDialog_QBaseDragLeaveEvent(KMimeTypeChooserDialog* self, QDragLeaveEvent* event);
    friend void KMimeTypeChooserDialog_DropEvent(KMimeTypeChooserDialog* self, QDropEvent* event);
    friend void KMimeTypeChooserDialog_QBaseDropEvent(KMimeTypeChooserDialog* self, QDropEvent* event);
    friend void KMimeTypeChooserDialog_HideEvent(KMimeTypeChooserDialog* self, QHideEvent* event);
    friend void KMimeTypeChooserDialog_QBaseHideEvent(KMimeTypeChooserDialog* self, QHideEvent* event);
    friend bool KMimeTypeChooserDialog_NativeEvent(KMimeTypeChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KMimeTypeChooserDialog_QBaseNativeEvent(KMimeTypeChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMimeTypeChooserDialog_ChangeEvent(KMimeTypeChooserDialog* self, QEvent* param1);
    friend void KMimeTypeChooserDialog_QBaseChangeEvent(KMimeTypeChooserDialog* self, QEvent* param1);
    friend int KMimeTypeChooserDialog_Metric(const KMimeTypeChooserDialog* self, int param1);
    friend int KMimeTypeChooserDialog_QBaseMetric(const KMimeTypeChooserDialog* self, int param1);
    friend void KMimeTypeChooserDialog_InitPainter(const KMimeTypeChooserDialog* self, QPainter* painter);
    friend void KMimeTypeChooserDialog_QBaseInitPainter(const KMimeTypeChooserDialog* self, QPainter* painter);
    friend QPaintDevice* KMimeTypeChooserDialog_Redirected(const KMimeTypeChooserDialog* self, QPoint* offset);
    friend QPaintDevice* KMimeTypeChooserDialog_QBaseRedirected(const KMimeTypeChooserDialog* self, QPoint* offset);
    friend QPainter* KMimeTypeChooserDialog_SharedPainter(const KMimeTypeChooserDialog* self);
    friend QPainter* KMimeTypeChooserDialog_QBaseSharedPainter(const KMimeTypeChooserDialog* self);
    friend void KMimeTypeChooserDialog_InputMethodEvent(KMimeTypeChooserDialog* self, QInputMethodEvent* param1);
    friend void KMimeTypeChooserDialog_QBaseInputMethodEvent(KMimeTypeChooserDialog* self, QInputMethodEvent* param1);
    friend bool KMimeTypeChooserDialog_FocusNextPrevChild(KMimeTypeChooserDialog* self, bool next);
    friend bool KMimeTypeChooserDialog_QBaseFocusNextPrevChild(KMimeTypeChooserDialog* self, bool next);
    friend void KMimeTypeChooserDialog_TimerEvent(KMimeTypeChooserDialog* self, QTimerEvent* event);
    friend void KMimeTypeChooserDialog_QBaseTimerEvent(KMimeTypeChooserDialog* self, QTimerEvent* event);
    friend void KMimeTypeChooserDialog_ChildEvent(KMimeTypeChooserDialog* self, QChildEvent* event);
    friend void KMimeTypeChooserDialog_QBaseChildEvent(KMimeTypeChooserDialog* self, QChildEvent* event);
    friend void KMimeTypeChooserDialog_CustomEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_QBaseCustomEvent(KMimeTypeChooserDialog* self, QEvent* event);
    friend void KMimeTypeChooserDialog_ConnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal);
    friend void KMimeTypeChooserDialog_QBaseConnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal);
    friend void KMimeTypeChooserDialog_DisconnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal);
    friend void KMimeTypeChooserDialog_QBaseDisconnectNotify(KMimeTypeChooserDialog* self, const QMetaMethod* signal);
    friend void KMimeTypeChooserDialog_AdjustPosition(KMimeTypeChooserDialog* self, QWidget* param1);
    friend void KMimeTypeChooserDialog_QBaseAdjustPosition(KMimeTypeChooserDialog* self, QWidget* param1);
    friend void KMimeTypeChooserDialog_UpdateMicroFocus(KMimeTypeChooserDialog* self);
    friend void KMimeTypeChooserDialog_QBaseUpdateMicroFocus(KMimeTypeChooserDialog* self);
    friend void KMimeTypeChooserDialog_Create(KMimeTypeChooserDialog* self);
    friend void KMimeTypeChooserDialog_QBaseCreate(KMimeTypeChooserDialog* self);
    friend void KMimeTypeChooserDialog_Destroy(KMimeTypeChooserDialog* self);
    friend void KMimeTypeChooserDialog_QBaseDestroy(KMimeTypeChooserDialog* self);
    friend bool KMimeTypeChooserDialog_FocusNextChild(KMimeTypeChooserDialog* self);
    friend bool KMimeTypeChooserDialog_QBaseFocusNextChild(KMimeTypeChooserDialog* self);
    friend bool KMimeTypeChooserDialog_FocusPreviousChild(KMimeTypeChooserDialog* self);
    friend bool KMimeTypeChooserDialog_QBaseFocusPreviousChild(KMimeTypeChooserDialog* self);
    friend QObject* KMimeTypeChooserDialog_Sender(const KMimeTypeChooserDialog* self);
    friend QObject* KMimeTypeChooserDialog_QBaseSender(const KMimeTypeChooserDialog* self);
    friend int KMimeTypeChooserDialog_SenderSignalIndex(const KMimeTypeChooserDialog* self);
    friend int KMimeTypeChooserDialog_QBaseSenderSignalIndex(const KMimeTypeChooserDialog* self);
    friend int KMimeTypeChooserDialog_Receivers(const KMimeTypeChooserDialog* self, const char* signal);
    friend int KMimeTypeChooserDialog_QBaseReceivers(const KMimeTypeChooserDialog* self, const char* signal);
    friend bool KMimeTypeChooserDialog_IsSignalConnected(const KMimeTypeChooserDialog* self, const QMetaMethod* signal);
    friend bool KMimeTypeChooserDialog_QBaseIsSignalConnected(const KMimeTypeChooserDialog* self, const QMetaMethod* signal);
    friend double KMimeTypeChooserDialog_GetDecodedMetricF(const KMimeTypeChooserDialog* self, int metricA, int metricB);
    friend double KMimeTypeChooserDialog_QBaseGetDecodedMetricF(const KMimeTypeChooserDialog* self, int metricA, int metricB);
};

#endif
