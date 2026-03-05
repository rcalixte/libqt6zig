#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBVIRTUALQTERMWIDGET_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBVIRTUALQTERMWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTermWidget so that we can call protected methods
class VirtualQTermWidget final : public QTermWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQTermWidget = true;

    // Virtual class public types (including callbacks)
    using QTermWidget_MetaObject_Callback = QMetaObject* (*)();
    using QTermWidget_Metacast_Callback = void* (*)(QTermWidget*, const char*);
    using QTermWidget_Metacall_Callback = int (*)(QTermWidget*, int, int, void**);
    using QTermWidget_SizeHint_Callback = QSize* (*)();
    using QTermWidget_SetTerminalSizeHint_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_TerminalSizeHint_Callback = bool (*)();
    using QTermWidget_StartShellProgram_Callback = void (*)();
    using QTermWidget_StartTerminalTeletype_Callback = void (*)();
    using QTermWidget_GetShellPID_Callback = int (*)();
    using QTermWidget_GetForegroundProcessId_Callback = int (*)();
    using QTermWidget_ChangeDir_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SetTerminalFont_Callback = void (*)(QTermWidget*, QFont*);
    using QTermWidget_GetTerminalFont_Callback = QFont* (*)();
    using QTermWidget_SetTerminalOpacity_Callback = void (*)(QTermWidget*, double);
    using QTermWidget_SetTerminalBackgroundImage_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SetTerminalBackgroundMode_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_SetEnvironment_Callback = void (*)(QTermWidget*, const char**);
    using QTermWidget_SetShellProgram_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SetWorkingDirectory_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_WorkingDirectory_Callback = const char* (*)();
    using QTermWidget_SetArgs_Callback = void (*)(QTermWidget*, const char**);
    using QTermWidget_SetColorScheme_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_GetAvailableColorSchemes_Callback = const char** (*)();
    using QTermWidget_SetHistorySize_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_HistorySize_Callback = int (*)();
    using QTermWidget_SetScrollBarPosition_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_ScrollToEnd_Callback = void (*)();
    using QTermWidget_SendText_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SendKeyEvent_Callback = void (*)(QTermWidget*, QKeyEvent*);
    using QTermWidget_SetFlowControlEnabled_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_FlowControlEnabled_Callback = bool (*)();
    using QTermWidget_SetFlowControlWarningEnabled_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_KeyBindings_Callback = const char* (*)();
    using QTermWidget_SetMotionAfterPasting_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_HistoryLinesCount_Callback = int (*)();
    using QTermWidget_ScreenColumnsCount_Callback = int (*)();
    using QTermWidget_ScreenLinesCount_Callback = int (*)();
    using QTermWidget_SetSelectionStart_Callback = void (*)(QTermWidget*, int, int);
    using QTermWidget_SetSelectionEnd_Callback = void (*)(QTermWidget*, int, int);
    using QTermWidget_GetSelectionStart_Callback = void (*)(QTermWidget*, int*, int*);
    using QTermWidget_GetSelectionEnd_Callback = void (*)(QTermWidget*, int*, int*);
    using QTermWidget_SelectedText_Callback = const char* (*)(QTermWidget*, bool);
    using QTermWidget_SetMonitorActivity_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetMonitorSilence_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetSilenceTimeout_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_FilterActions_Callback = libqt_list /* of QAction* */ (*)(QTermWidget*, QPoint*);
    using QTermWidget_GetPtySlaveFd_Callback = int (*)();
    using QTermWidget_SetBlinkingCursor_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetBidiEnabled_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_IsBidiEnabled_Callback = bool (*)();
    using QTermWidget_SetAutoClose_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_Title_Callback = const char* (*)();
    using QTermWidget_Icon_Callback = const char* (*)();
    using QTermWidget_IsTitleChanged_Callback = bool (*)();
    using QTermWidget_BracketText_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_DisableBracketedPasteMode_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_BracketedPasteModeIsDisabled_Callback = bool (*)();
    using QTermWidget_SetMargin_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_GetMargin_Callback = int (*)();
    using QTermWidget_SetDrawLineChars_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetBoldIntense_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetConfirmMultilinePaste_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetTrimPastedTrailingNewlines_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_WordCharacters_Callback = const char* (*)();
    using QTermWidget_SetWordCharacters_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_CreateWidget_Callback = QTermWidgetInterface* (*)(const QTermWidget*, int);
    using QTermWidget_ResizeEvent_Callback = void (*)(QTermWidget*, QResizeEvent*);
    using QTermWidget_DevType_Callback = int (*)();
    using QTermWidget_SetVisible_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QTermWidget_HeightForWidth_Callback = int (*)(const QTermWidget*, int);
    using QTermWidget_HasHeightForWidth_Callback = bool (*)();
    using QTermWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QTermWidget_Event_Callback = bool (*)(QTermWidget*, QEvent*);
    using QTermWidget_MousePressEvent_Callback = void (*)(QTermWidget*, QMouseEvent*);
    using QTermWidget_MouseReleaseEvent_Callback = void (*)(QTermWidget*, QMouseEvent*);
    using QTermWidget_MouseDoubleClickEvent_Callback = void (*)(QTermWidget*, QMouseEvent*);
    using QTermWidget_MouseMoveEvent_Callback = void (*)(QTermWidget*, QMouseEvent*);
    using QTermWidget_WheelEvent_Callback = void (*)(QTermWidget*, QWheelEvent*);
    using QTermWidget_KeyPressEvent_Callback = void (*)(QTermWidget*, QKeyEvent*);
    using QTermWidget_KeyReleaseEvent_Callback = void (*)(QTermWidget*, QKeyEvent*);
    using QTermWidget_FocusInEvent_Callback = void (*)(QTermWidget*, QFocusEvent*);
    using QTermWidget_FocusOutEvent_Callback = void (*)(QTermWidget*, QFocusEvent*);
    using QTermWidget_EnterEvent_Callback = void (*)(QTermWidget*, QEnterEvent*);
    using QTermWidget_LeaveEvent_Callback = void (*)(QTermWidget*, QEvent*);
    using QTermWidget_PaintEvent_Callback = void (*)(QTermWidget*, QPaintEvent*);
    using QTermWidget_MoveEvent_Callback = void (*)(QTermWidget*, QMoveEvent*);
    using QTermWidget_CloseEvent_Callback = void (*)(QTermWidget*, QCloseEvent*);
    using QTermWidget_ContextMenuEvent_Callback = void (*)(QTermWidget*, QContextMenuEvent*);
    using QTermWidget_TabletEvent_Callback = void (*)(QTermWidget*, QTabletEvent*);
    using QTermWidget_ActionEvent_Callback = void (*)(QTermWidget*, QActionEvent*);
    using QTermWidget_DragEnterEvent_Callback = void (*)(QTermWidget*, QDragEnterEvent*);
    using QTermWidget_DragMoveEvent_Callback = void (*)(QTermWidget*, QDragMoveEvent*);
    using QTermWidget_DragLeaveEvent_Callback = void (*)(QTermWidget*, QDragLeaveEvent*);
    using QTermWidget_DropEvent_Callback = void (*)(QTermWidget*, QDropEvent*);
    using QTermWidget_ShowEvent_Callback = void (*)(QTermWidget*, QShowEvent*);
    using QTermWidget_HideEvent_Callback = void (*)(QTermWidget*, QHideEvent*);
    using QTermWidget_NativeEvent_Callback = bool (*)(QTermWidget*, libqt_string, void*, intptr_t*);
    using QTermWidget_ChangeEvent_Callback = void (*)(QTermWidget*, QEvent*);
    using QTermWidget_Metric_Callback = int (*)(const QTermWidget*, int);
    using QTermWidget_InitPainter_Callback = void (*)(const QTermWidget*, QPainter*);
    using QTermWidget_Redirected_Callback = QPaintDevice* (*)(const QTermWidget*, QPoint*);
    using QTermWidget_SharedPainter_Callback = QPainter* (*)();
    using QTermWidget_InputMethodEvent_Callback = void (*)(QTermWidget*, QInputMethodEvent*);
    using QTermWidget_InputMethodQuery_Callback = QVariant* (*)(const QTermWidget*, int);
    using QTermWidget_FocusNextPrevChild_Callback = bool (*)(QTermWidget*, bool);
    using QTermWidget_EventFilter_Callback = bool (*)(QTermWidget*, QObject*, QEvent*);
    using QTermWidget_TimerEvent_Callback = void (*)(QTermWidget*, QTimerEvent*);
    using QTermWidget_ChildEvent_Callback = void (*)(QTermWidget*, QChildEvent*);
    using QTermWidget_CustomEvent_Callback = void (*)(QTermWidget*, QEvent*);
    using QTermWidget_ConnectNotify_Callback = void (*)(QTermWidget*, QMetaMethod*);
    using QTermWidget_DisconnectNotify_Callback = void (*)(QTermWidget*, QMetaMethod*);
    using QTermWidget_SessionFinished_Callback = void (*)();
    using QTermWidget_SelectionChanged_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_UpdateMicroFocus_Callback = void (*)();
    using QTermWidget_Create_Callback = void (*)();
    using QTermWidget_Destroy_Callback = void (*)();
    using QTermWidget_FocusNextChild_Callback = bool (*)();
    using QTermWidget_FocusPreviousChild_Callback = bool (*)();
    using QTermWidget_Sender_Callback = QObject* (*)();
    using QTermWidget_SenderSignalIndex_Callback = int (*)();
    using QTermWidget_Receivers_Callback = int (*)(const QTermWidget*, const char*);
    using QTermWidget_IsSignalConnected_Callback = bool (*)(const QTermWidget*, QMetaMethod*);
    using QTermWidget_GetDecodedMetricF_Callback = double (*)(const QTermWidget*, int, int);

  protected:
    // Instance callback storage
    QTermWidget_MetaObject_Callback qtermwidget_metaobject_callback = nullptr;
    QTermWidget_Metacast_Callback qtermwidget_metacast_callback = nullptr;
    QTermWidget_Metacall_Callback qtermwidget_metacall_callback = nullptr;
    QTermWidget_SizeHint_Callback qtermwidget_sizehint_callback = nullptr;
    QTermWidget_SetTerminalSizeHint_Callback qtermwidget_setterminalsizehint_callback = nullptr;
    QTermWidget_TerminalSizeHint_Callback qtermwidget_terminalsizehint_callback = nullptr;
    QTermWidget_StartShellProgram_Callback qtermwidget_startshellprogram_callback = nullptr;
    QTermWidget_StartTerminalTeletype_Callback qtermwidget_startterminalteletype_callback = nullptr;
    QTermWidget_GetShellPID_Callback qtermwidget_getshellpid_callback = nullptr;
    QTermWidget_GetForegroundProcessId_Callback qtermwidget_getforegroundprocessid_callback = nullptr;
    QTermWidget_ChangeDir_Callback qtermwidget_changedir_callback = nullptr;
    QTermWidget_SetTerminalFont_Callback qtermwidget_setterminalfont_callback = nullptr;
    QTermWidget_GetTerminalFont_Callback qtermwidget_getterminalfont_callback = nullptr;
    QTermWidget_SetTerminalOpacity_Callback qtermwidget_setterminalopacity_callback = nullptr;
    QTermWidget_SetTerminalBackgroundImage_Callback qtermwidget_setterminalbackgroundimage_callback = nullptr;
    QTermWidget_SetTerminalBackgroundMode_Callback qtermwidget_setterminalbackgroundmode_callback = nullptr;
    QTermWidget_SetEnvironment_Callback qtermwidget_setenvironment_callback = nullptr;
    QTermWidget_SetShellProgram_Callback qtermwidget_setshellprogram_callback = nullptr;
    QTermWidget_SetWorkingDirectory_Callback qtermwidget_setworkingdirectory_callback = nullptr;
    QTermWidget_WorkingDirectory_Callback qtermwidget_workingdirectory_callback = nullptr;
    QTermWidget_SetArgs_Callback qtermwidget_setargs_callback = nullptr;
    QTermWidget_SetColorScheme_Callback qtermwidget_setcolorscheme_callback = nullptr;
    QTermWidget_GetAvailableColorSchemes_Callback qtermwidget_getavailablecolorschemes_callback = nullptr;
    QTermWidget_SetHistorySize_Callback qtermwidget_sethistorysize_callback = nullptr;
    QTermWidget_HistorySize_Callback qtermwidget_historysize_callback = nullptr;
    QTermWidget_SetScrollBarPosition_Callback qtermwidget_setscrollbarposition_callback = nullptr;
    QTermWidget_ScrollToEnd_Callback qtermwidget_scrolltoend_callback = nullptr;
    QTermWidget_SendText_Callback qtermwidget_sendtext_callback = nullptr;
    QTermWidget_SendKeyEvent_Callback qtermwidget_sendkeyevent_callback = nullptr;
    QTermWidget_SetFlowControlEnabled_Callback qtermwidget_setflowcontrolenabled_callback = nullptr;
    QTermWidget_FlowControlEnabled_Callback qtermwidget_flowcontrolenabled_callback = nullptr;
    QTermWidget_SetFlowControlWarningEnabled_Callback qtermwidget_setflowcontrolwarningenabled_callback = nullptr;
    QTermWidget_KeyBindings_Callback qtermwidget_keybindings_callback = nullptr;
    QTermWidget_SetMotionAfterPasting_Callback qtermwidget_setmotionafterpasting_callback = nullptr;
    QTermWidget_HistoryLinesCount_Callback qtermwidget_historylinescount_callback = nullptr;
    QTermWidget_ScreenColumnsCount_Callback qtermwidget_screencolumnscount_callback = nullptr;
    QTermWidget_ScreenLinesCount_Callback qtermwidget_screenlinescount_callback = nullptr;
    QTermWidget_SetSelectionStart_Callback qtermwidget_setselectionstart_callback = nullptr;
    QTermWidget_SetSelectionEnd_Callback qtermwidget_setselectionend_callback = nullptr;
    QTermWidget_GetSelectionStart_Callback qtermwidget_getselectionstart_callback = nullptr;
    QTermWidget_GetSelectionEnd_Callback qtermwidget_getselectionend_callback = nullptr;
    QTermWidget_SelectedText_Callback qtermwidget_selectedtext_callback = nullptr;
    QTermWidget_SetMonitorActivity_Callback qtermwidget_setmonitoractivity_callback = nullptr;
    QTermWidget_SetMonitorSilence_Callback qtermwidget_setmonitorsilence_callback = nullptr;
    QTermWidget_SetSilenceTimeout_Callback qtermwidget_setsilencetimeout_callback = nullptr;
    QTermWidget_FilterActions_Callback qtermwidget_filteractions_callback = nullptr;
    QTermWidget_GetPtySlaveFd_Callback qtermwidget_getptyslavefd_callback = nullptr;
    QTermWidget_SetBlinkingCursor_Callback qtermwidget_setblinkingcursor_callback = nullptr;
    QTermWidget_SetBidiEnabled_Callback qtermwidget_setbidienabled_callback = nullptr;
    QTermWidget_IsBidiEnabled_Callback qtermwidget_isbidienabled_callback = nullptr;
    QTermWidget_SetAutoClose_Callback qtermwidget_setautoclose_callback = nullptr;
    QTermWidget_Title_Callback qtermwidget_title_callback = nullptr;
    QTermWidget_Icon_Callback qtermwidget_icon_callback = nullptr;
    QTermWidget_IsTitleChanged_Callback qtermwidget_istitlechanged_callback = nullptr;
    QTermWidget_BracketText_Callback qtermwidget_brackettext_callback = nullptr;
    QTermWidget_DisableBracketedPasteMode_Callback qtermwidget_disablebracketedpastemode_callback = nullptr;
    QTermWidget_BracketedPasteModeIsDisabled_Callback qtermwidget_bracketedpastemodeisdisabled_callback = nullptr;
    QTermWidget_SetMargin_Callback qtermwidget_setmargin_callback = nullptr;
    QTermWidget_GetMargin_Callback qtermwidget_getmargin_callback = nullptr;
    QTermWidget_SetDrawLineChars_Callback qtermwidget_setdrawlinechars_callback = nullptr;
    QTermWidget_SetBoldIntense_Callback qtermwidget_setboldintense_callback = nullptr;
    QTermWidget_SetConfirmMultilinePaste_Callback qtermwidget_setconfirmmultilinepaste_callback = nullptr;
    QTermWidget_SetTrimPastedTrailingNewlines_Callback qtermwidget_settrimpastedtrailingnewlines_callback = nullptr;
    QTermWidget_WordCharacters_Callback qtermwidget_wordcharacters_callback = nullptr;
    QTermWidget_SetWordCharacters_Callback qtermwidget_setwordcharacters_callback = nullptr;
    QTermWidget_CreateWidget_Callback qtermwidget_createwidget_callback = nullptr;
    QTermWidget_ResizeEvent_Callback qtermwidget_resizeevent_callback = nullptr;
    QTermWidget_DevType_Callback qtermwidget_devtype_callback = nullptr;
    QTermWidget_SetVisible_Callback qtermwidget_setvisible_callback = nullptr;
    QTermWidget_MinimumSizeHint_Callback qtermwidget_minimumsizehint_callback = nullptr;
    QTermWidget_HeightForWidth_Callback qtermwidget_heightforwidth_callback = nullptr;
    QTermWidget_HasHeightForWidth_Callback qtermwidget_hasheightforwidth_callback = nullptr;
    QTermWidget_PaintEngine_Callback qtermwidget_paintengine_callback = nullptr;
    QTermWidget_Event_Callback qtermwidget_event_callback = nullptr;
    QTermWidget_MousePressEvent_Callback qtermwidget_mousepressevent_callback = nullptr;
    QTermWidget_MouseReleaseEvent_Callback qtermwidget_mousereleaseevent_callback = nullptr;
    QTermWidget_MouseDoubleClickEvent_Callback qtermwidget_mousedoubleclickevent_callback = nullptr;
    QTermWidget_MouseMoveEvent_Callback qtermwidget_mousemoveevent_callback = nullptr;
    QTermWidget_WheelEvent_Callback qtermwidget_wheelevent_callback = nullptr;
    QTermWidget_KeyPressEvent_Callback qtermwidget_keypressevent_callback = nullptr;
    QTermWidget_KeyReleaseEvent_Callback qtermwidget_keyreleaseevent_callback = nullptr;
    QTermWidget_FocusInEvent_Callback qtermwidget_focusinevent_callback = nullptr;
    QTermWidget_FocusOutEvent_Callback qtermwidget_focusoutevent_callback = nullptr;
    QTermWidget_EnterEvent_Callback qtermwidget_enterevent_callback = nullptr;
    QTermWidget_LeaveEvent_Callback qtermwidget_leaveevent_callback = nullptr;
    QTermWidget_PaintEvent_Callback qtermwidget_paintevent_callback = nullptr;
    QTermWidget_MoveEvent_Callback qtermwidget_moveevent_callback = nullptr;
    QTermWidget_CloseEvent_Callback qtermwidget_closeevent_callback = nullptr;
    QTermWidget_ContextMenuEvent_Callback qtermwidget_contextmenuevent_callback = nullptr;
    QTermWidget_TabletEvent_Callback qtermwidget_tabletevent_callback = nullptr;
    QTermWidget_ActionEvent_Callback qtermwidget_actionevent_callback = nullptr;
    QTermWidget_DragEnterEvent_Callback qtermwidget_dragenterevent_callback = nullptr;
    QTermWidget_DragMoveEvent_Callback qtermwidget_dragmoveevent_callback = nullptr;
    QTermWidget_DragLeaveEvent_Callback qtermwidget_dragleaveevent_callback = nullptr;
    QTermWidget_DropEvent_Callback qtermwidget_dropevent_callback = nullptr;
    QTermWidget_ShowEvent_Callback qtermwidget_showevent_callback = nullptr;
    QTermWidget_HideEvent_Callback qtermwidget_hideevent_callback = nullptr;
    QTermWidget_NativeEvent_Callback qtermwidget_nativeevent_callback = nullptr;
    QTermWidget_ChangeEvent_Callback qtermwidget_changeevent_callback = nullptr;
    QTermWidget_Metric_Callback qtermwidget_metric_callback = nullptr;
    QTermWidget_InitPainter_Callback qtermwidget_initpainter_callback = nullptr;
    QTermWidget_Redirected_Callback qtermwidget_redirected_callback = nullptr;
    QTermWidget_SharedPainter_Callback qtermwidget_sharedpainter_callback = nullptr;
    QTermWidget_InputMethodEvent_Callback qtermwidget_inputmethodevent_callback = nullptr;
    QTermWidget_InputMethodQuery_Callback qtermwidget_inputmethodquery_callback = nullptr;
    QTermWidget_FocusNextPrevChild_Callback qtermwidget_focusnextprevchild_callback = nullptr;
    QTermWidget_EventFilter_Callback qtermwidget_eventfilter_callback = nullptr;
    QTermWidget_TimerEvent_Callback qtermwidget_timerevent_callback = nullptr;
    QTermWidget_ChildEvent_Callback qtermwidget_childevent_callback = nullptr;
    QTermWidget_CustomEvent_Callback qtermwidget_customevent_callback = nullptr;
    QTermWidget_ConnectNotify_Callback qtermwidget_connectnotify_callback = nullptr;
    QTermWidget_DisconnectNotify_Callback qtermwidget_disconnectnotify_callback = nullptr;
    QTermWidget_SessionFinished_Callback qtermwidget_sessionfinished_callback = nullptr;
    QTermWidget_SelectionChanged_Callback qtermwidget_selectionchanged_callback = nullptr;
    QTermWidget_UpdateMicroFocus_Callback qtermwidget_updatemicrofocus_callback = nullptr;
    QTermWidget_Create_Callback qtermwidget_create_callback = nullptr;
    QTermWidget_Destroy_Callback qtermwidget_destroy_callback = nullptr;
    QTermWidget_FocusNextChild_Callback qtermwidget_focusnextchild_callback = nullptr;
    QTermWidget_FocusPreviousChild_Callback qtermwidget_focuspreviouschild_callback = nullptr;
    QTermWidget_Sender_Callback qtermwidget_sender_callback = nullptr;
    QTermWidget_SenderSignalIndex_Callback qtermwidget_sendersignalindex_callback = nullptr;
    QTermWidget_Receivers_Callback qtermwidget_receivers_callback = nullptr;
    QTermWidget_IsSignalConnected_Callback qtermwidget_issignalconnected_callback = nullptr;
    QTermWidget_GetDecodedMetricF_Callback qtermwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtermwidget_metaobject_isbase = false;
    mutable bool qtermwidget_metacast_isbase = false;
    mutable bool qtermwidget_metacall_isbase = false;
    mutable bool qtermwidget_sizehint_isbase = false;
    mutable bool qtermwidget_setterminalsizehint_isbase = false;
    mutable bool qtermwidget_terminalsizehint_isbase = false;
    mutable bool qtermwidget_startshellprogram_isbase = false;
    mutable bool qtermwidget_startterminalteletype_isbase = false;
    mutable bool qtermwidget_getshellpid_isbase = false;
    mutable bool qtermwidget_getforegroundprocessid_isbase = false;
    mutable bool qtermwidget_changedir_isbase = false;
    mutable bool qtermwidget_setterminalfont_isbase = false;
    mutable bool qtermwidget_getterminalfont_isbase = false;
    mutable bool qtermwidget_setterminalopacity_isbase = false;
    mutable bool qtermwidget_setterminalbackgroundimage_isbase = false;
    mutable bool qtermwidget_setterminalbackgroundmode_isbase = false;
    mutable bool qtermwidget_setenvironment_isbase = false;
    mutable bool qtermwidget_setshellprogram_isbase = false;
    mutable bool qtermwidget_setworkingdirectory_isbase = false;
    mutable bool qtermwidget_workingdirectory_isbase = false;
    mutable bool qtermwidget_setargs_isbase = false;
    mutable bool qtermwidget_setcolorscheme_isbase = false;
    mutable bool qtermwidget_getavailablecolorschemes_isbase = false;
    mutable bool qtermwidget_sethistorysize_isbase = false;
    mutable bool qtermwidget_historysize_isbase = false;
    mutable bool qtermwidget_setscrollbarposition_isbase = false;
    mutable bool qtermwidget_scrolltoend_isbase = false;
    mutable bool qtermwidget_sendtext_isbase = false;
    mutable bool qtermwidget_sendkeyevent_isbase = false;
    mutable bool qtermwidget_setflowcontrolenabled_isbase = false;
    mutable bool qtermwidget_flowcontrolenabled_isbase = false;
    mutable bool qtermwidget_setflowcontrolwarningenabled_isbase = false;
    mutable bool qtermwidget_keybindings_isbase = false;
    mutable bool qtermwidget_setmotionafterpasting_isbase = false;
    mutable bool qtermwidget_historylinescount_isbase = false;
    mutable bool qtermwidget_screencolumnscount_isbase = false;
    mutable bool qtermwidget_screenlinescount_isbase = false;
    mutable bool qtermwidget_setselectionstart_isbase = false;
    mutable bool qtermwidget_setselectionend_isbase = false;
    mutable bool qtermwidget_getselectionstart_isbase = false;
    mutable bool qtermwidget_getselectionend_isbase = false;
    mutable bool qtermwidget_selectedtext_isbase = false;
    mutable bool qtermwidget_setmonitoractivity_isbase = false;
    mutable bool qtermwidget_setmonitorsilence_isbase = false;
    mutable bool qtermwidget_setsilencetimeout_isbase = false;
    mutable bool qtermwidget_filteractions_isbase = false;
    mutable bool qtermwidget_getptyslavefd_isbase = false;
    mutable bool qtermwidget_setblinkingcursor_isbase = false;
    mutable bool qtermwidget_setbidienabled_isbase = false;
    mutable bool qtermwidget_isbidienabled_isbase = false;
    mutable bool qtermwidget_setautoclose_isbase = false;
    mutable bool qtermwidget_title_isbase = false;
    mutable bool qtermwidget_icon_isbase = false;
    mutable bool qtermwidget_istitlechanged_isbase = false;
    mutable bool qtermwidget_brackettext_isbase = false;
    mutable bool qtermwidget_disablebracketedpastemode_isbase = false;
    mutable bool qtermwidget_bracketedpastemodeisdisabled_isbase = false;
    mutable bool qtermwidget_setmargin_isbase = false;
    mutable bool qtermwidget_getmargin_isbase = false;
    mutable bool qtermwidget_setdrawlinechars_isbase = false;
    mutable bool qtermwidget_setboldintense_isbase = false;
    mutable bool qtermwidget_setconfirmmultilinepaste_isbase = false;
    mutable bool qtermwidget_settrimpastedtrailingnewlines_isbase = false;
    mutable bool qtermwidget_wordcharacters_isbase = false;
    mutable bool qtermwidget_setwordcharacters_isbase = false;
    mutable bool qtermwidget_createwidget_isbase = false;
    mutable bool qtermwidget_resizeevent_isbase = false;
    mutable bool qtermwidget_devtype_isbase = false;
    mutable bool qtermwidget_setvisible_isbase = false;
    mutable bool qtermwidget_minimumsizehint_isbase = false;
    mutable bool qtermwidget_heightforwidth_isbase = false;
    mutable bool qtermwidget_hasheightforwidth_isbase = false;
    mutable bool qtermwidget_paintengine_isbase = false;
    mutable bool qtermwidget_event_isbase = false;
    mutable bool qtermwidget_mousepressevent_isbase = false;
    mutable bool qtermwidget_mousereleaseevent_isbase = false;
    mutable bool qtermwidget_mousedoubleclickevent_isbase = false;
    mutable bool qtermwidget_mousemoveevent_isbase = false;
    mutable bool qtermwidget_wheelevent_isbase = false;
    mutable bool qtermwidget_keypressevent_isbase = false;
    mutable bool qtermwidget_keyreleaseevent_isbase = false;
    mutable bool qtermwidget_focusinevent_isbase = false;
    mutable bool qtermwidget_focusoutevent_isbase = false;
    mutable bool qtermwidget_enterevent_isbase = false;
    mutable bool qtermwidget_leaveevent_isbase = false;
    mutable bool qtermwidget_paintevent_isbase = false;
    mutable bool qtermwidget_moveevent_isbase = false;
    mutable bool qtermwidget_closeevent_isbase = false;
    mutable bool qtermwidget_contextmenuevent_isbase = false;
    mutable bool qtermwidget_tabletevent_isbase = false;
    mutable bool qtermwidget_actionevent_isbase = false;
    mutable bool qtermwidget_dragenterevent_isbase = false;
    mutable bool qtermwidget_dragmoveevent_isbase = false;
    mutable bool qtermwidget_dragleaveevent_isbase = false;
    mutable bool qtermwidget_dropevent_isbase = false;
    mutable bool qtermwidget_showevent_isbase = false;
    mutable bool qtermwidget_hideevent_isbase = false;
    mutable bool qtermwidget_nativeevent_isbase = false;
    mutable bool qtermwidget_changeevent_isbase = false;
    mutable bool qtermwidget_metric_isbase = false;
    mutable bool qtermwidget_initpainter_isbase = false;
    mutable bool qtermwidget_redirected_isbase = false;
    mutable bool qtermwidget_sharedpainter_isbase = false;
    mutable bool qtermwidget_inputmethodevent_isbase = false;
    mutable bool qtermwidget_inputmethodquery_isbase = false;
    mutable bool qtermwidget_focusnextprevchild_isbase = false;
    mutable bool qtermwidget_eventfilter_isbase = false;
    mutable bool qtermwidget_timerevent_isbase = false;
    mutable bool qtermwidget_childevent_isbase = false;
    mutable bool qtermwidget_customevent_isbase = false;
    mutable bool qtermwidget_connectnotify_isbase = false;
    mutable bool qtermwidget_disconnectnotify_isbase = false;
    mutable bool qtermwidget_sessionfinished_isbase = false;
    mutable bool qtermwidget_selectionchanged_isbase = false;
    mutable bool qtermwidget_updatemicrofocus_isbase = false;
    mutable bool qtermwidget_create_isbase = false;
    mutable bool qtermwidget_destroy_isbase = false;
    mutable bool qtermwidget_focusnextchild_isbase = false;
    mutable bool qtermwidget_focuspreviouschild_isbase = false;
    mutable bool qtermwidget_sender_isbase = false;
    mutable bool qtermwidget_sendersignalindex_isbase = false;
    mutable bool qtermwidget_receivers_isbase = false;
    mutable bool qtermwidget_issignalconnected_isbase = false;
    mutable bool qtermwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualQTermWidget(QWidget* parent) : QTermWidget(parent) {};
    VirtualQTermWidget(int startnow) : QTermWidget(startnow) {};
    VirtualQTermWidget() : QTermWidget() {};
    VirtualQTermWidget(int startnow, QWidget* parent) : QTermWidget(startnow, parent) {};

    // Callback setters
    inline void setQTermWidget_MetaObject_Callback(QTermWidget_MetaObject_Callback cb) { qtermwidget_metaobject_callback = cb; }
    inline void setQTermWidget_Metacast_Callback(QTermWidget_Metacast_Callback cb) { qtermwidget_metacast_callback = cb; }
    inline void setQTermWidget_Metacall_Callback(QTermWidget_Metacall_Callback cb) { qtermwidget_metacall_callback = cb; }
    inline void setQTermWidget_SizeHint_Callback(QTermWidget_SizeHint_Callback cb) { qtermwidget_sizehint_callback = cb; }
    inline void setQTermWidget_SetTerminalSizeHint_Callback(QTermWidget_SetTerminalSizeHint_Callback cb) { qtermwidget_setterminalsizehint_callback = cb; }
    inline void setQTermWidget_TerminalSizeHint_Callback(QTermWidget_TerminalSizeHint_Callback cb) { qtermwidget_terminalsizehint_callback = cb; }
    inline void setQTermWidget_StartShellProgram_Callback(QTermWidget_StartShellProgram_Callback cb) { qtermwidget_startshellprogram_callback = cb; }
    inline void setQTermWidget_StartTerminalTeletype_Callback(QTermWidget_StartTerminalTeletype_Callback cb) { qtermwidget_startterminalteletype_callback = cb; }
    inline void setQTermWidget_GetShellPID_Callback(QTermWidget_GetShellPID_Callback cb) { qtermwidget_getshellpid_callback = cb; }
    inline void setQTermWidget_GetForegroundProcessId_Callback(QTermWidget_GetForegroundProcessId_Callback cb) { qtermwidget_getforegroundprocessid_callback = cb; }
    inline void setQTermWidget_ChangeDir_Callback(QTermWidget_ChangeDir_Callback cb) { qtermwidget_changedir_callback = cb; }
    inline void setQTermWidget_SetTerminalFont_Callback(QTermWidget_SetTerminalFont_Callback cb) { qtermwidget_setterminalfont_callback = cb; }
    inline void setQTermWidget_GetTerminalFont_Callback(QTermWidget_GetTerminalFont_Callback cb) { qtermwidget_getterminalfont_callback = cb; }
    inline void setQTermWidget_SetTerminalOpacity_Callback(QTermWidget_SetTerminalOpacity_Callback cb) { qtermwidget_setterminalopacity_callback = cb; }
    inline void setQTermWidget_SetTerminalBackgroundImage_Callback(QTermWidget_SetTerminalBackgroundImage_Callback cb) { qtermwidget_setterminalbackgroundimage_callback = cb; }
    inline void setQTermWidget_SetTerminalBackgroundMode_Callback(QTermWidget_SetTerminalBackgroundMode_Callback cb) { qtermwidget_setterminalbackgroundmode_callback = cb; }
    inline void setQTermWidget_SetEnvironment_Callback(QTermWidget_SetEnvironment_Callback cb) { qtermwidget_setenvironment_callback = cb; }
    inline void setQTermWidget_SetShellProgram_Callback(QTermWidget_SetShellProgram_Callback cb) { qtermwidget_setshellprogram_callback = cb; }
    inline void setQTermWidget_SetWorkingDirectory_Callback(QTermWidget_SetWorkingDirectory_Callback cb) { qtermwidget_setworkingdirectory_callback = cb; }
    inline void setQTermWidget_WorkingDirectory_Callback(QTermWidget_WorkingDirectory_Callback cb) { qtermwidget_workingdirectory_callback = cb; }
    inline void setQTermWidget_SetArgs_Callback(QTermWidget_SetArgs_Callback cb) { qtermwidget_setargs_callback = cb; }
    inline void setQTermWidget_SetColorScheme_Callback(QTermWidget_SetColorScheme_Callback cb) { qtermwidget_setcolorscheme_callback = cb; }
    inline void setQTermWidget_GetAvailableColorSchemes_Callback(QTermWidget_GetAvailableColorSchemes_Callback cb) { qtermwidget_getavailablecolorschemes_callback = cb; }
    inline void setQTermWidget_SetHistorySize_Callback(QTermWidget_SetHistorySize_Callback cb) { qtermwidget_sethistorysize_callback = cb; }
    inline void setQTermWidget_HistorySize_Callback(QTermWidget_HistorySize_Callback cb) { qtermwidget_historysize_callback = cb; }
    inline void setQTermWidget_SetScrollBarPosition_Callback(QTermWidget_SetScrollBarPosition_Callback cb) { qtermwidget_setscrollbarposition_callback = cb; }
    inline void setQTermWidget_ScrollToEnd_Callback(QTermWidget_ScrollToEnd_Callback cb) { qtermwidget_scrolltoend_callback = cb; }
    inline void setQTermWidget_SendText_Callback(QTermWidget_SendText_Callback cb) { qtermwidget_sendtext_callback = cb; }
    inline void setQTermWidget_SendKeyEvent_Callback(QTermWidget_SendKeyEvent_Callback cb) { qtermwidget_sendkeyevent_callback = cb; }
    inline void setQTermWidget_SetFlowControlEnabled_Callback(QTermWidget_SetFlowControlEnabled_Callback cb) { qtermwidget_setflowcontrolenabled_callback = cb; }
    inline void setQTermWidget_FlowControlEnabled_Callback(QTermWidget_FlowControlEnabled_Callback cb) { qtermwidget_flowcontrolenabled_callback = cb; }
    inline void setQTermWidget_SetFlowControlWarningEnabled_Callback(QTermWidget_SetFlowControlWarningEnabled_Callback cb) { qtermwidget_setflowcontrolwarningenabled_callback = cb; }
    inline void setQTermWidget_KeyBindings_Callback(QTermWidget_KeyBindings_Callback cb) { qtermwidget_keybindings_callback = cb; }
    inline void setQTermWidget_SetMotionAfterPasting_Callback(QTermWidget_SetMotionAfterPasting_Callback cb) { qtermwidget_setmotionafterpasting_callback = cb; }
    inline void setQTermWidget_HistoryLinesCount_Callback(QTermWidget_HistoryLinesCount_Callback cb) { qtermwidget_historylinescount_callback = cb; }
    inline void setQTermWidget_ScreenColumnsCount_Callback(QTermWidget_ScreenColumnsCount_Callback cb) { qtermwidget_screencolumnscount_callback = cb; }
    inline void setQTermWidget_ScreenLinesCount_Callback(QTermWidget_ScreenLinesCount_Callback cb) { qtermwidget_screenlinescount_callback = cb; }
    inline void setQTermWidget_SetSelectionStart_Callback(QTermWidget_SetSelectionStart_Callback cb) { qtermwidget_setselectionstart_callback = cb; }
    inline void setQTermWidget_SetSelectionEnd_Callback(QTermWidget_SetSelectionEnd_Callback cb) { qtermwidget_setselectionend_callback = cb; }
    inline void setQTermWidget_GetSelectionStart_Callback(QTermWidget_GetSelectionStart_Callback cb) { qtermwidget_getselectionstart_callback = cb; }
    inline void setQTermWidget_GetSelectionEnd_Callback(QTermWidget_GetSelectionEnd_Callback cb) { qtermwidget_getselectionend_callback = cb; }
    inline void setQTermWidget_SelectedText_Callback(QTermWidget_SelectedText_Callback cb) { qtermwidget_selectedtext_callback = cb; }
    inline void setQTermWidget_SetMonitorActivity_Callback(QTermWidget_SetMonitorActivity_Callback cb) { qtermwidget_setmonitoractivity_callback = cb; }
    inline void setQTermWidget_SetMonitorSilence_Callback(QTermWidget_SetMonitorSilence_Callback cb) { qtermwidget_setmonitorsilence_callback = cb; }
    inline void setQTermWidget_SetSilenceTimeout_Callback(QTermWidget_SetSilenceTimeout_Callback cb) { qtermwidget_setsilencetimeout_callback = cb; }
    inline void setQTermWidget_FilterActions_Callback(QTermWidget_FilterActions_Callback cb) { qtermwidget_filteractions_callback = cb; }
    inline void setQTermWidget_GetPtySlaveFd_Callback(QTermWidget_GetPtySlaveFd_Callback cb) { qtermwidget_getptyslavefd_callback = cb; }
    inline void setQTermWidget_SetBlinkingCursor_Callback(QTermWidget_SetBlinkingCursor_Callback cb) { qtermwidget_setblinkingcursor_callback = cb; }
    inline void setQTermWidget_SetBidiEnabled_Callback(QTermWidget_SetBidiEnabled_Callback cb) { qtermwidget_setbidienabled_callback = cb; }
    inline void setQTermWidget_IsBidiEnabled_Callback(QTermWidget_IsBidiEnabled_Callback cb) { qtermwidget_isbidienabled_callback = cb; }
    inline void setQTermWidget_SetAutoClose_Callback(QTermWidget_SetAutoClose_Callback cb) { qtermwidget_setautoclose_callback = cb; }
    inline void setQTermWidget_Title_Callback(QTermWidget_Title_Callback cb) { qtermwidget_title_callback = cb; }
    inline void setQTermWidget_Icon_Callback(QTermWidget_Icon_Callback cb) { qtermwidget_icon_callback = cb; }
    inline void setQTermWidget_IsTitleChanged_Callback(QTermWidget_IsTitleChanged_Callback cb) { qtermwidget_istitlechanged_callback = cb; }
    inline void setQTermWidget_BracketText_Callback(QTermWidget_BracketText_Callback cb) { qtermwidget_brackettext_callback = cb; }
    inline void setQTermWidget_DisableBracketedPasteMode_Callback(QTermWidget_DisableBracketedPasteMode_Callback cb) { qtermwidget_disablebracketedpastemode_callback = cb; }
    inline void setQTermWidget_BracketedPasteModeIsDisabled_Callback(QTermWidget_BracketedPasteModeIsDisabled_Callback cb) { qtermwidget_bracketedpastemodeisdisabled_callback = cb; }
    inline void setQTermWidget_SetMargin_Callback(QTermWidget_SetMargin_Callback cb) { qtermwidget_setmargin_callback = cb; }
    inline void setQTermWidget_GetMargin_Callback(QTermWidget_GetMargin_Callback cb) { qtermwidget_getmargin_callback = cb; }
    inline void setQTermWidget_SetDrawLineChars_Callback(QTermWidget_SetDrawLineChars_Callback cb) { qtermwidget_setdrawlinechars_callback = cb; }
    inline void setQTermWidget_SetBoldIntense_Callback(QTermWidget_SetBoldIntense_Callback cb) { qtermwidget_setboldintense_callback = cb; }
    inline void setQTermWidget_SetConfirmMultilinePaste_Callback(QTermWidget_SetConfirmMultilinePaste_Callback cb) { qtermwidget_setconfirmmultilinepaste_callback = cb; }
    inline void setQTermWidget_SetTrimPastedTrailingNewlines_Callback(QTermWidget_SetTrimPastedTrailingNewlines_Callback cb) { qtermwidget_settrimpastedtrailingnewlines_callback = cb; }
    inline void setQTermWidget_WordCharacters_Callback(QTermWidget_WordCharacters_Callback cb) { qtermwidget_wordcharacters_callback = cb; }
    inline void setQTermWidget_SetWordCharacters_Callback(QTermWidget_SetWordCharacters_Callback cb) { qtermwidget_setwordcharacters_callback = cb; }
    inline void setQTermWidget_CreateWidget_Callback(QTermWidget_CreateWidget_Callback cb) { qtermwidget_createwidget_callback = cb; }
    inline void setQTermWidget_ResizeEvent_Callback(QTermWidget_ResizeEvent_Callback cb) { qtermwidget_resizeevent_callback = cb; }
    inline void setQTermWidget_DevType_Callback(QTermWidget_DevType_Callback cb) { qtermwidget_devtype_callback = cb; }
    inline void setQTermWidget_SetVisible_Callback(QTermWidget_SetVisible_Callback cb) { qtermwidget_setvisible_callback = cb; }
    inline void setQTermWidget_MinimumSizeHint_Callback(QTermWidget_MinimumSizeHint_Callback cb) { qtermwidget_minimumsizehint_callback = cb; }
    inline void setQTermWidget_HeightForWidth_Callback(QTermWidget_HeightForWidth_Callback cb) { qtermwidget_heightforwidth_callback = cb; }
    inline void setQTermWidget_HasHeightForWidth_Callback(QTermWidget_HasHeightForWidth_Callback cb) { qtermwidget_hasheightforwidth_callback = cb; }
    inline void setQTermWidget_PaintEngine_Callback(QTermWidget_PaintEngine_Callback cb) { qtermwidget_paintengine_callback = cb; }
    inline void setQTermWidget_Event_Callback(QTermWidget_Event_Callback cb) { qtermwidget_event_callback = cb; }
    inline void setQTermWidget_MousePressEvent_Callback(QTermWidget_MousePressEvent_Callback cb) { qtermwidget_mousepressevent_callback = cb; }
    inline void setQTermWidget_MouseReleaseEvent_Callback(QTermWidget_MouseReleaseEvent_Callback cb) { qtermwidget_mousereleaseevent_callback = cb; }
    inline void setQTermWidget_MouseDoubleClickEvent_Callback(QTermWidget_MouseDoubleClickEvent_Callback cb) { qtermwidget_mousedoubleclickevent_callback = cb; }
    inline void setQTermWidget_MouseMoveEvent_Callback(QTermWidget_MouseMoveEvent_Callback cb) { qtermwidget_mousemoveevent_callback = cb; }
    inline void setQTermWidget_WheelEvent_Callback(QTermWidget_WheelEvent_Callback cb) { qtermwidget_wheelevent_callback = cb; }
    inline void setQTermWidget_KeyPressEvent_Callback(QTermWidget_KeyPressEvent_Callback cb) { qtermwidget_keypressevent_callback = cb; }
    inline void setQTermWidget_KeyReleaseEvent_Callback(QTermWidget_KeyReleaseEvent_Callback cb) { qtermwidget_keyreleaseevent_callback = cb; }
    inline void setQTermWidget_FocusInEvent_Callback(QTermWidget_FocusInEvent_Callback cb) { qtermwidget_focusinevent_callback = cb; }
    inline void setQTermWidget_FocusOutEvent_Callback(QTermWidget_FocusOutEvent_Callback cb) { qtermwidget_focusoutevent_callback = cb; }
    inline void setQTermWidget_EnterEvent_Callback(QTermWidget_EnterEvent_Callback cb) { qtermwidget_enterevent_callback = cb; }
    inline void setQTermWidget_LeaveEvent_Callback(QTermWidget_LeaveEvent_Callback cb) { qtermwidget_leaveevent_callback = cb; }
    inline void setQTermWidget_PaintEvent_Callback(QTermWidget_PaintEvent_Callback cb) { qtermwidget_paintevent_callback = cb; }
    inline void setQTermWidget_MoveEvent_Callback(QTermWidget_MoveEvent_Callback cb) { qtermwidget_moveevent_callback = cb; }
    inline void setQTermWidget_CloseEvent_Callback(QTermWidget_CloseEvent_Callback cb) { qtermwidget_closeevent_callback = cb; }
    inline void setQTermWidget_ContextMenuEvent_Callback(QTermWidget_ContextMenuEvent_Callback cb) { qtermwidget_contextmenuevent_callback = cb; }
    inline void setQTermWidget_TabletEvent_Callback(QTermWidget_TabletEvent_Callback cb) { qtermwidget_tabletevent_callback = cb; }
    inline void setQTermWidget_ActionEvent_Callback(QTermWidget_ActionEvent_Callback cb) { qtermwidget_actionevent_callback = cb; }
    inline void setQTermWidget_DragEnterEvent_Callback(QTermWidget_DragEnterEvent_Callback cb) { qtermwidget_dragenterevent_callback = cb; }
    inline void setQTermWidget_DragMoveEvent_Callback(QTermWidget_DragMoveEvent_Callback cb) { qtermwidget_dragmoveevent_callback = cb; }
    inline void setQTermWidget_DragLeaveEvent_Callback(QTermWidget_DragLeaveEvent_Callback cb) { qtermwidget_dragleaveevent_callback = cb; }
    inline void setQTermWidget_DropEvent_Callback(QTermWidget_DropEvent_Callback cb) { qtermwidget_dropevent_callback = cb; }
    inline void setQTermWidget_ShowEvent_Callback(QTermWidget_ShowEvent_Callback cb) { qtermwidget_showevent_callback = cb; }
    inline void setQTermWidget_HideEvent_Callback(QTermWidget_HideEvent_Callback cb) { qtermwidget_hideevent_callback = cb; }
    inline void setQTermWidget_NativeEvent_Callback(QTermWidget_NativeEvent_Callback cb) { qtermwidget_nativeevent_callback = cb; }
    inline void setQTermWidget_ChangeEvent_Callback(QTermWidget_ChangeEvent_Callback cb) { qtermwidget_changeevent_callback = cb; }
    inline void setQTermWidget_Metric_Callback(QTermWidget_Metric_Callback cb) { qtermwidget_metric_callback = cb; }
    inline void setQTermWidget_InitPainter_Callback(QTermWidget_InitPainter_Callback cb) { qtermwidget_initpainter_callback = cb; }
    inline void setQTermWidget_Redirected_Callback(QTermWidget_Redirected_Callback cb) { qtermwidget_redirected_callback = cb; }
    inline void setQTermWidget_SharedPainter_Callback(QTermWidget_SharedPainter_Callback cb) { qtermwidget_sharedpainter_callback = cb; }
    inline void setQTermWidget_InputMethodEvent_Callback(QTermWidget_InputMethodEvent_Callback cb) { qtermwidget_inputmethodevent_callback = cb; }
    inline void setQTermWidget_InputMethodQuery_Callback(QTermWidget_InputMethodQuery_Callback cb) { qtermwidget_inputmethodquery_callback = cb; }
    inline void setQTermWidget_FocusNextPrevChild_Callback(QTermWidget_FocusNextPrevChild_Callback cb) { qtermwidget_focusnextprevchild_callback = cb; }
    inline void setQTermWidget_EventFilter_Callback(QTermWidget_EventFilter_Callback cb) { qtermwidget_eventfilter_callback = cb; }
    inline void setQTermWidget_TimerEvent_Callback(QTermWidget_TimerEvent_Callback cb) { qtermwidget_timerevent_callback = cb; }
    inline void setQTermWidget_ChildEvent_Callback(QTermWidget_ChildEvent_Callback cb) { qtermwidget_childevent_callback = cb; }
    inline void setQTermWidget_CustomEvent_Callback(QTermWidget_CustomEvent_Callback cb) { qtermwidget_customevent_callback = cb; }
    inline void setQTermWidget_ConnectNotify_Callback(QTermWidget_ConnectNotify_Callback cb) { qtermwidget_connectnotify_callback = cb; }
    inline void setQTermWidget_DisconnectNotify_Callback(QTermWidget_DisconnectNotify_Callback cb) { qtermwidget_disconnectnotify_callback = cb; }
    inline void setQTermWidget_SessionFinished_Callback(QTermWidget_SessionFinished_Callback cb) { qtermwidget_sessionfinished_callback = cb; }
    inline void setQTermWidget_SelectionChanged_Callback(QTermWidget_SelectionChanged_Callback cb) { qtermwidget_selectionchanged_callback = cb; }
    inline void setQTermWidget_UpdateMicroFocus_Callback(QTermWidget_UpdateMicroFocus_Callback cb) { qtermwidget_updatemicrofocus_callback = cb; }
    inline void setQTermWidget_Create_Callback(QTermWidget_Create_Callback cb) { qtermwidget_create_callback = cb; }
    inline void setQTermWidget_Destroy_Callback(QTermWidget_Destroy_Callback cb) { qtermwidget_destroy_callback = cb; }
    inline void setQTermWidget_FocusNextChild_Callback(QTermWidget_FocusNextChild_Callback cb) { qtermwidget_focusnextchild_callback = cb; }
    inline void setQTermWidget_FocusPreviousChild_Callback(QTermWidget_FocusPreviousChild_Callback cb) { qtermwidget_focuspreviouschild_callback = cb; }
    inline void setQTermWidget_Sender_Callback(QTermWidget_Sender_Callback cb) { qtermwidget_sender_callback = cb; }
    inline void setQTermWidget_SenderSignalIndex_Callback(QTermWidget_SenderSignalIndex_Callback cb) { qtermwidget_sendersignalindex_callback = cb; }
    inline void setQTermWidget_Receivers_Callback(QTermWidget_Receivers_Callback cb) { qtermwidget_receivers_callback = cb; }
    inline void setQTermWidget_IsSignalConnected_Callback(QTermWidget_IsSignalConnected_Callback cb) { qtermwidget_issignalconnected_callback = cb; }
    inline void setQTermWidget_GetDecodedMetricF_Callback(QTermWidget_GetDecodedMetricF_Callback cb) { qtermwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQTermWidget_MetaObject_IsBase(bool value) const { qtermwidget_metaobject_isbase = value; }
    inline void setQTermWidget_Metacast_IsBase(bool value) const { qtermwidget_metacast_isbase = value; }
    inline void setQTermWidget_Metacall_IsBase(bool value) const { qtermwidget_metacall_isbase = value; }
    inline void setQTermWidget_SizeHint_IsBase(bool value) const { qtermwidget_sizehint_isbase = value; }
    inline void setQTermWidget_SetTerminalSizeHint_IsBase(bool value) const { qtermwidget_setterminalsizehint_isbase = value; }
    inline void setQTermWidget_TerminalSizeHint_IsBase(bool value) const { qtermwidget_terminalsizehint_isbase = value; }
    inline void setQTermWidget_StartShellProgram_IsBase(bool value) const { qtermwidget_startshellprogram_isbase = value; }
    inline void setQTermWidget_StartTerminalTeletype_IsBase(bool value) const { qtermwidget_startterminalteletype_isbase = value; }
    inline void setQTermWidget_GetShellPID_IsBase(bool value) const { qtermwidget_getshellpid_isbase = value; }
    inline void setQTermWidget_GetForegroundProcessId_IsBase(bool value) const { qtermwidget_getforegroundprocessid_isbase = value; }
    inline void setQTermWidget_ChangeDir_IsBase(bool value) const { qtermwidget_changedir_isbase = value; }
    inline void setQTermWidget_SetTerminalFont_IsBase(bool value) const { qtermwidget_setterminalfont_isbase = value; }
    inline void setQTermWidget_GetTerminalFont_IsBase(bool value) const { qtermwidget_getterminalfont_isbase = value; }
    inline void setQTermWidget_SetTerminalOpacity_IsBase(bool value) const { qtermwidget_setterminalopacity_isbase = value; }
    inline void setQTermWidget_SetTerminalBackgroundImage_IsBase(bool value) const { qtermwidget_setterminalbackgroundimage_isbase = value; }
    inline void setQTermWidget_SetTerminalBackgroundMode_IsBase(bool value) const { qtermwidget_setterminalbackgroundmode_isbase = value; }
    inline void setQTermWidget_SetEnvironment_IsBase(bool value) const { qtermwidget_setenvironment_isbase = value; }
    inline void setQTermWidget_SetShellProgram_IsBase(bool value) const { qtermwidget_setshellprogram_isbase = value; }
    inline void setQTermWidget_SetWorkingDirectory_IsBase(bool value) const { qtermwidget_setworkingdirectory_isbase = value; }
    inline void setQTermWidget_WorkingDirectory_IsBase(bool value) const { qtermwidget_workingdirectory_isbase = value; }
    inline void setQTermWidget_SetArgs_IsBase(bool value) const { qtermwidget_setargs_isbase = value; }
    inline void setQTermWidget_SetColorScheme_IsBase(bool value) const { qtermwidget_setcolorscheme_isbase = value; }
    inline void setQTermWidget_GetAvailableColorSchemes_IsBase(bool value) const { qtermwidget_getavailablecolorschemes_isbase = value; }
    inline void setQTermWidget_SetHistorySize_IsBase(bool value) const { qtermwidget_sethistorysize_isbase = value; }
    inline void setQTermWidget_HistorySize_IsBase(bool value) const { qtermwidget_historysize_isbase = value; }
    inline void setQTermWidget_SetScrollBarPosition_IsBase(bool value) const { qtermwidget_setscrollbarposition_isbase = value; }
    inline void setQTermWidget_ScrollToEnd_IsBase(bool value) const { qtermwidget_scrolltoend_isbase = value; }
    inline void setQTermWidget_SendText_IsBase(bool value) const { qtermwidget_sendtext_isbase = value; }
    inline void setQTermWidget_SendKeyEvent_IsBase(bool value) const { qtermwidget_sendkeyevent_isbase = value; }
    inline void setQTermWidget_SetFlowControlEnabled_IsBase(bool value) const { qtermwidget_setflowcontrolenabled_isbase = value; }
    inline void setQTermWidget_FlowControlEnabled_IsBase(bool value) const { qtermwidget_flowcontrolenabled_isbase = value; }
    inline void setQTermWidget_SetFlowControlWarningEnabled_IsBase(bool value) const { qtermwidget_setflowcontrolwarningenabled_isbase = value; }
    inline void setQTermWidget_KeyBindings_IsBase(bool value) const { qtermwidget_keybindings_isbase = value; }
    inline void setQTermWidget_SetMotionAfterPasting_IsBase(bool value) const { qtermwidget_setmotionafterpasting_isbase = value; }
    inline void setQTermWidget_HistoryLinesCount_IsBase(bool value) const { qtermwidget_historylinescount_isbase = value; }
    inline void setQTermWidget_ScreenColumnsCount_IsBase(bool value) const { qtermwidget_screencolumnscount_isbase = value; }
    inline void setQTermWidget_ScreenLinesCount_IsBase(bool value) const { qtermwidget_screenlinescount_isbase = value; }
    inline void setQTermWidget_SetSelectionStart_IsBase(bool value) const { qtermwidget_setselectionstart_isbase = value; }
    inline void setQTermWidget_SetSelectionEnd_IsBase(bool value) const { qtermwidget_setselectionend_isbase = value; }
    inline void setQTermWidget_GetSelectionStart_IsBase(bool value) const { qtermwidget_getselectionstart_isbase = value; }
    inline void setQTermWidget_GetSelectionEnd_IsBase(bool value) const { qtermwidget_getselectionend_isbase = value; }
    inline void setQTermWidget_SelectedText_IsBase(bool value) const { qtermwidget_selectedtext_isbase = value; }
    inline void setQTermWidget_SetMonitorActivity_IsBase(bool value) const { qtermwidget_setmonitoractivity_isbase = value; }
    inline void setQTermWidget_SetMonitorSilence_IsBase(bool value) const { qtermwidget_setmonitorsilence_isbase = value; }
    inline void setQTermWidget_SetSilenceTimeout_IsBase(bool value) const { qtermwidget_setsilencetimeout_isbase = value; }
    inline void setQTermWidget_FilterActions_IsBase(bool value) const { qtermwidget_filteractions_isbase = value; }
    inline void setQTermWidget_GetPtySlaveFd_IsBase(bool value) const { qtermwidget_getptyslavefd_isbase = value; }
    inline void setQTermWidget_SetBlinkingCursor_IsBase(bool value) const { qtermwidget_setblinkingcursor_isbase = value; }
    inline void setQTermWidget_SetBidiEnabled_IsBase(bool value) const { qtermwidget_setbidienabled_isbase = value; }
    inline void setQTermWidget_IsBidiEnabled_IsBase(bool value) const { qtermwidget_isbidienabled_isbase = value; }
    inline void setQTermWidget_SetAutoClose_IsBase(bool value) const { qtermwidget_setautoclose_isbase = value; }
    inline void setQTermWidget_Title_IsBase(bool value) const { qtermwidget_title_isbase = value; }
    inline void setQTermWidget_Icon_IsBase(bool value) const { qtermwidget_icon_isbase = value; }
    inline void setQTermWidget_IsTitleChanged_IsBase(bool value) const { qtermwidget_istitlechanged_isbase = value; }
    inline void setQTermWidget_BracketText_IsBase(bool value) const { qtermwidget_brackettext_isbase = value; }
    inline void setQTermWidget_DisableBracketedPasteMode_IsBase(bool value) const { qtermwidget_disablebracketedpastemode_isbase = value; }
    inline void setQTermWidget_BracketedPasteModeIsDisabled_IsBase(bool value) const { qtermwidget_bracketedpastemodeisdisabled_isbase = value; }
    inline void setQTermWidget_SetMargin_IsBase(bool value) const { qtermwidget_setmargin_isbase = value; }
    inline void setQTermWidget_GetMargin_IsBase(bool value) const { qtermwidget_getmargin_isbase = value; }
    inline void setQTermWidget_SetDrawLineChars_IsBase(bool value) const { qtermwidget_setdrawlinechars_isbase = value; }
    inline void setQTermWidget_SetBoldIntense_IsBase(bool value) const { qtermwidget_setboldintense_isbase = value; }
    inline void setQTermWidget_SetConfirmMultilinePaste_IsBase(bool value) const { qtermwidget_setconfirmmultilinepaste_isbase = value; }
    inline void setQTermWidget_SetTrimPastedTrailingNewlines_IsBase(bool value) const { qtermwidget_settrimpastedtrailingnewlines_isbase = value; }
    inline void setQTermWidget_WordCharacters_IsBase(bool value) const { qtermwidget_wordcharacters_isbase = value; }
    inline void setQTermWidget_SetWordCharacters_IsBase(bool value) const { qtermwidget_setwordcharacters_isbase = value; }
    inline void setQTermWidget_CreateWidget_IsBase(bool value) const { qtermwidget_createwidget_isbase = value; }
    inline void setQTermWidget_ResizeEvent_IsBase(bool value) const { qtermwidget_resizeevent_isbase = value; }
    inline void setQTermWidget_DevType_IsBase(bool value) const { qtermwidget_devtype_isbase = value; }
    inline void setQTermWidget_SetVisible_IsBase(bool value) const { qtermwidget_setvisible_isbase = value; }
    inline void setQTermWidget_MinimumSizeHint_IsBase(bool value) const { qtermwidget_minimumsizehint_isbase = value; }
    inline void setQTermWidget_HeightForWidth_IsBase(bool value) const { qtermwidget_heightforwidth_isbase = value; }
    inline void setQTermWidget_HasHeightForWidth_IsBase(bool value) const { qtermwidget_hasheightforwidth_isbase = value; }
    inline void setQTermWidget_PaintEngine_IsBase(bool value) const { qtermwidget_paintengine_isbase = value; }
    inline void setQTermWidget_Event_IsBase(bool value) const { qtermwidget_event_isbase = value; }
    inline void setQTermWidget_MousePressEvent_IsBase(bool value) const { qtermwidget_mousepressevent_isbase = value; }
    inline void setQTermWidget_MouseReleaseEvent_IsBase(bool value) const { qtermwidget_mousereleaseevent_isbase = value; }
    inline void setQTermWidget_MouseDoubleClickEvent_IsBase(bool value) const { qtermwidget_mousedoubleclickevent_isbase = value; }
    inline void setQTermWidget_MouseMoveEvent_IsBase(bool value) const { qtermwidget_mousemoveevent_isbase = value; }
    inline void setQTermWidget_WheelEvent_IsBase(bool value) const { qtermwidget_wheelevent_isbase = value; }
    inline void setQTermWidget_KeyPressEvent_IsBase(bool value) const { qtermwidget_keypressevent_isbase = value; }
    inline void setQTermWidget_KeyReleaseEvent_IsBase(bool value) const { qtermwidget_keyreleaseevent_isbase = value; }
    inline void setQTermWidget_FocusInEvent_IsBase(bool value) const { qtermwidget_focusinevent_isbase = value; }
    inline void setQTermWidget_FocusOutEvent_IsBase(bool value) const { qtermwidget_focusoutevent_isbase = value; }
    inline void setQTermWidget_EnterEvent_IsBase(bool value) const { qtermwidget_enterevent_isbase = value; }
    inline void setQTermWidget_LeaveEvent_IsBase(bool value) const { qtermwidget_leaveevent_isbase = value; }
    inline void setQTermWidget_PaintEvent_IsBase(bool value) const { qtermwidget_paintevent_isbase = value; }
    inline void setQTermWidget_MoveEvent_IsBase(bool value) const { qtermwidget_moveevent_isbase = value; }
    inline void setQTermWidget_CloseEvent_IsBase(bool value) const { qtermwidget_closeevent_isbase = value; }
    inline void setQTermWidget_ContextMenuEvent_IsBase(bool value) const { qtermwidget_contextmenuevent_isbase = value; }
    inline void setQTermWidget_TabletEvent_IsBase(bool value) const { qtermwidget_tabletevent_isbase = value; }
    inline void setQTermWidget_ActionEvent_IsBase(bool value) const { qtermwidget_actionevent_isbase = value; }
    inline void setQTermWidget_DragEnterEvent_IsBase(bool value) const { qtermwidget_dragenterevent_isbase = value; }
    inline void setQTermWidget_DragMoveEvent_IsBase(bool value) const { qtermwidget_dragmoveevent_isbase = value; }
    inline void setQTermWidget_DragLeaveEvent_IsBase(bool value) const { qtermwidget_dragleaveevent_isbase = value; }
    inline void setQTermWidget_DropEvent_IsBase(bool value) const { qtermwidget_dropevent_isbase = value; }
    inline void setQTermWidget_ShowEvent_IsBase(bool value) const { qtermwidget_showevent_isbase = value; }
    inline void setQTermWidget_HideEvent_IsBase(bool value) const { qtermwidget_hideevent_isbase = value; }
    inline void setQTermWidget_NativeEvent_IsBase(bool value) const { qtermwidget_nativeevent_isbase = value; }
    inline void setQTermWidget_ChangeEvent_IsBase(bool value) const { qtermwidget_changeevent_isbase = value; }
    inline void setQTermWidget_Metric_IsBase(bool value) const { qtermwidget_metric_isbase = value; }
    inline void setQTermWidget_InitPainter_IsBase(bool value) const { qtermwidget_initpainter_isbase = value; }
    inline void setQTermWidget_Redirected_IsBase(bool value) const { qtermwidget_redirected_isbase = value; }
    inline void setQTermWidget_SharedPainter_IsBase(bool value) const { qtermwidget_sharedpainter_isbase = value; }
    inline void setQTermWidget_InputMethodEvent_IsBase(bool value) const { qtermwidget_inputmethodevent_isbase = value; }
    inline void setQTermWidget_InputMethodQuery_IsBase(bool value) const { qtermwidget_inputmethodquery_isbase = value; }
    inline void setQTermWidget_FocusNextPrevChild_IsBase(bool value) const { qtermwidget_focusnextprevchild_isbase = value; }
    inline void setQTermWidget_EventFilter_IsBase(bool value) const { qtermwidget_eventfilter_isbase = value; }
    inline void setQTermWidget_TimerEvent_IsBase(bool value) const { qtermwidget_timerevent_isbase = value; }
    inline void setQTermWidget_ChildEvent_IsBase(bool value) const { qtermwidget_childevent_isbase = value; }
    inline void setQTermWidget_CustomEvent_IsBase(bool value) const { qtermwidget_customevent_isbase = value; }
    inline void setQTermWidget_ConnectNotify_IsBase(bool value) const { qtermwidget_connectnotify_isbase = value; }
    inline void setQTermWidget_DisconnectNotify_IsBase(bool value) const { qtermwidget_disconnectnotify_isbase = value; }
    inline void setQTermWidget_SessionFinished_IsBase(bool value) const { qtermwidget_sessionfinished_isbase = value; }
    inline void setQTermWidget_SelectionChanged_IsBase(bool value) const { qtermwidget_selectionchanged_isbase = value; }
    inline void setQTermWidget_UpdateMicroFocus_IsBase(bool value) const { qtermwidget_updatemicrofocus_isbase = value; }
    inline void setQTermWidget_Create_IsBase(bool value) const { qtermwidget_create_isbase = value; }
    inline void setQTermWidget_Destroy_IsBase(bool value) const { qtermwidget_destroy_isbase = value; }
    inline void setQTermWidget_FocusNextChild_IsBase(bool value) const { qtermwidget_focusnextchild_isbase = value; }
    inline void setQTermWidget_FocusPreviousChild_IsBase(bool value) const { qtermwidget_focuspreviouschild_isbase = value; }
    inline void setQTermWidget_Sender_IsBase(bool value) const { qtermwidget_sender_isbase = value; }
    inline void setQTermWidget_SenderSignalIndex_IsBase(bool value) const { qtermwidget_sendersignalindex_isbase = value; }
    inline void setQTermWidget_Receivers_IsBase(bool value) const { qtermwidget_receivers_isbase = value; }
    inline void setQTermWidget_IsSignalConnected_IsBase(bool value) const { qtermwidget_issignalconnected_isbase = value; }
    inline void setQTermWidget_GetDecodedMetricF_IsBase(bool value) const { qtermwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtermwidget_metaobject_isbase) {
            qtermwidget_metaobject_isbase = false;
            return QTermWidget::metaObject();
        }
        auto metaobject_cb = qtermwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTermWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtermwidget_metacast_isbase) {
            qtermwidget_metacast_isbase = false;
            return QTermWidget::qt_metacast(param1);
        }
        auto metacast_cb = qtermwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtermwidget_metacall_isbase) {
            qtermwidget_metacall_isbase = false;
            return QTermWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtermwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtermwidget_sizehint_isbase) {
            qtermwidget_sizehint_isbase = false;
            return QTermWidget::sizeHint();
        }
        auto sizehint_cb = qtermwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QTermWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalSizeHint(bool enabled) override {
        if (qtermwidget_setterminalsizehint_isbase) {
            qtermwidget_setterminalsizehint_isbase = false;
            QTermWidget::setTerminalSizeHint(enabled);
            return;
        }
        auto setterminalsizehint_cb = qtermwidget_setterminalsizehint_callback;
        if (setterminalsizehint_cb) {
            bool cbval1 = enabled;

            setterminalsizehint_cb(this, cbval1);
            return;
        }
        QTermWidget::setTerminalSizeHint(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool terminalSizeHint() override {
        if (qtermwidget_terminalsizehint_isbase) {
            qtermwidget_terminalsizehint_isbase = false;
            return QTermWidget::terminalSizeHint();
        }
        auto terminalsizehint_cb = qtermwidget_terminalsizehint_callback;
        if (terminalsizehint_cb) {
            bool callback_ret = terminalsizehint_cb();
            return callback_ret;
        }
        return QTermWidget::terminalSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void startShellProgram() override {
        if (qtermwidget_startshellprogram_isbase) {
            qtermwidget_startshellprogram_isbase = false;
            QTermWidget::startShellProgram();
            return;
        }
        auto startshellprogram_cb = qtermwidget_startshellprogram_callback;
        if (startshellprogram_cb) {
            startshellprogram_cb();
            return;
        }
        QTermWidget::startShellProgram();
    }

    // Virtual method for C ABI access and custom callback
    virtual void startTerminalTeletype() override {
        if (qtermwidget_startterminalteletype_isbase) {
            qtermwidget_startterminalteletype_isbase = false;
            QTermWidget::startTerminalTeletype();
            return;
        }
        auto startterminalteletype_cb = qtermwidget_startterminalteletype_callback;
        if (startterminalteletype_cb) {
            startterminalteletype_cb();
            return;
        }
        QTermWidget::startTerminalTeletype();
    }

    // Virtual method for C ABI access and custom callback
    virtual int getShellPID() override {
        if (qtermwidget_getshellpid_isbase) {
            qtermwidget_getshellpid_isbase = false;
            return QTermWidget::getShellPID();
        }
        auto getshellpid_cb = qtermwidget_getshellpid_callback;
        if (getshellpid_cb) {
            int callback_ret = getshellpid_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getShellPID();
    }

    // Virtual method for C ABI access and custom callback
    virtual int getForegroundProcessId() override {
        if (qtermwidget_getforegroundprocessid_isbase) {
            qtermwidget_getforegroundprocessid_isbase = false;
            return QTermWidget::getForegroundProcessId();
        }
        auto getforegroundprocessid_cb = qtermwidget_getforegroundprocessid_callback;
        if (getforegroundprocessid_cb) {
            int callback_ret = getforegroundprocessid_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getForegroundProcessId();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeDir(const QString& dir) override {
        if (qtermwidget_changedir_isbase) {
            qtermwidget_changedir_isbase = false;
            QTermWidget::changeDir(dir);
            return;
        }
        auto changedir_cb = qtermwidget_changedir_callback;
        if (changedir_cb) {
            const QString dir_ret = dir;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dir_b = dir_ret.toUtf8();
            auto dir_str_len = dir_b.length();
            const char* dir_str = static_cast<const char*>(malloc(dir_str_len + 1));
            memcpy((void*)dir_str, dir_b.data(), dir_str_len);
            ((char*)dir_str)[dir_str_len] = '\0';
            const char* cbval1 = dir_str;

            changedir_cb(this, cbval1);
            libqt_free(dir_str);
            return;
        }
        QTermWidget::changeDir(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalFont(const QFont& font) override {
        if (qtermwidget_setterminalfont_isbase) {
            qtermwidget_setterminalfont_isbase = false;
            QTermWidget::setTerminalFont(font);
            return;
        }
        auto setterminalfont_cb = qtermwidget_setterminalfont_callback;
        if (setterminalfont_cb) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);

            setterminalfont_cb(this, cbval1);
            return;
        }
        QTermWidget::setTerminalFont(font);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont getTerminalFont() override {
        if (qtermwidget_getterminalfont_isbase) {
            qtermwidget_getterminalfont_isbase = false;
            return QTermWidget::getTerminalFont();
        }
        auto getterminalfont_cb = qtermwidget_getterminalfont_callback;
        if (getterminalfont_cb) {
            QFont* callback_ret = getterminalfont_cb();
            return *callback_ret;
        }
        return QTermWidget::getTerminalFont();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalOpacity(qreal level) override {
        if (qtermwidget_setterminalopacity_isbase) {
            qtermwidget_setterminalopacity_isbase = false;
            QTermWidget::setTerminalOpacity(level);
            return;
        }
        auto setterminalopacity_cb = qtermwidget_setterminalopacity_callback;
        if (setterminalopacity_cb) {
            double cbval1 = static_cast<double>(level);

            setterminalopacity_cb(this, cbval1);
            return;
        }
        QTermWidget::setTerminalOpacity(level);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalBackgroundImage(const QString& backgroundImage) override {
        if (qtermwidget_setterminalbackgroundimage_isbase) {
            qtermwidget_setterminalbackgroundimage_isbase = false;
            QTermWidget::setTerminalBackgroundImage(backgroundImage);
            return;
        }
        auto setterminalbackgroundimage_cb = qtermwidget_setterminalbackgroundimage_callback;
        if (setterminalbackgroundimage_cb) {
            const QString backgroundImage_ret = backgroundImage;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray backgroundImage_b = backgroundImage_ret.toUtf8();
            auto backgroundImage_str_len = backgroundImage_b.length();
            const char* backgroundImage_str = static_cast<const char*>(malloc(backgroundImage_str_len + 1));
            memcpy((void*)backgroundImage_str, backgroundImage_b.data(), backgroundImage_str_len);
            ((char*)backgroundImage_str)[backgroundImage_str_len] = '\0';
            const char* cbval1 = backgroundImage_str;

            setterminalbackgroundimage_cb(this, cbval1);
            libqt_free(backgroundImage_str);
            return;
        }
        QTermWidget::setTerminalBackgroundImage(backgroundImage);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalBackgroundMode(int mode) override {
        if (qtermwidget_setterminalbackgroundmode_isbase) {
            qtermwidget_setterminalbackgroundmode_isbase = false;
            QTermWidget::setTerminalBackgroundMode(mode);
            return;
        }
        auto setterminalbackgroundmode_cb = qtermwidget_setterminalbackgroundmode_callback;
        if (setterminalbackgroundmode_cb) {
            int cbval1 = mode;

            setterminalbackgroundmode_cb(this, cbval1);
            return;
        }
        QTermWidget::setTerminalBackgroundMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnvironment(const QList<QString>& environment) override {
        if (qtermwidget_setenvironment_isbase) {
            qtermwidget_setenvironment_isbase = false;
            QTermWidget::setEnvironment(environment);
            return;
        }
        auto setenvironment_cb = qtermwidget_setenvironment_callback;
        if (setenvironment_cb) {
            const QList<QString>& environment_ret = environment;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** environment_arr = static_cast<const char**>(malloc(sizeof(const char*) * (environment_ret.size() + 1)));
            for (qsizetype i = 0; i < environment_ret.size(); ++i) {
                QByteArray environment_b = environment_ret[i].toUtf8();
                auto environment_str_len = environment_b.length();
                char* environment_str = static_cast<char*>(malloc(environment_str_len + 1));
                memcpy(environment_str, environment_b.data(), environment_str_len);
                environment_str[environment_str_len] = '\0';
                environment_arr[i] = environment_str;
            }
            // Append sentinel null terminator to the list
            environment_arr[environment_ret.size()] = nullptr;
            const char** cbval1 = environment_arr;

            setenvironment_cb(this, cbval1);
            libqt_free(environment_arr);
            return;
        }
        QTermWidget::setEnvironment(environment);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setShellProgram(const QString& program) override {
        if (qtermwidget_setshellprogram_isbase) {
            qtermwidget_setshellprogram_isbase = false;
            QTermWidget::setShellProgram(program);
            return;
        }
        auto setshellprogram_cb = qtermwidget_setshellprogram_callback;
        if (setshellprogram_cb) {
            const QString program_ret = program;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray program_b = program_ret.toUtf8();
            auto program_str_len = program_b.length();
            const char* program_str = static_cast<const char*>(malloc(program_str_len + 1));
            memcpy((void*)program_str, program_b.data(), program_str_len);
            ((char*)program_str)[program_str_len] = '\0';
            const char* cbval1 = program_str;

            setshellprogram_cb(this, cbval1);
            libqt_free(program_str);
            return;
        }
        QTermWidget::setShellProgram(program);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWorkingDirectory(const QString& dir) override {
        if (qtermwidget_setworkingdirectory_isbase) {
            qtermwidget_setworkingdirectory_isbase = false;
            QTermWidget::setWorkingDirectory(dir);
            return;
        }
        auto setworkingdirectory_cb = qtermwidget_setworkingdirectory_callback;
        if (setworkingdirectory_cb) {
            const QString dir_ret = dir;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dir_b = dir_ret.toUtf8();
            auto dir_str_len = dir_b.length();
            const char* dir_str = static_cast<const char*>(malloc(dir_str_len + 1));
            memcpy((void*)dir_str, dir_b.data(), dir_str_len);
            ((char*)dir_str)[dir_str_len] = '\0';
            const char* cbval1 = dir_str;

            setworkingdirectory_cb(this, cbval1);
            libqt_free(dir_str);
            return;
        }
        QTermWidget::setWorkingDirectory(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString workingDirectory() override {
        if (qtermwidget_workingdirectory_isbase) {
            qtermwidget_workingdirectory_isbase = false;
            return QTermWidget::workingDirectory();
        }
        auto workingdirectory_cb = qtermwidget_workingdirectory_callback;
        if (workingdirectory_cb) {
            const char* callback_ret = workingdirectory_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::workingDirectory();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setArgs(const QList<QString>& args) override {
        if (qtermwidget_setargs_isbase) {
            qtermwidget_setargs_isbase = false;
            QTermWidget::setArgs(args);
            return;
        }
        auto setargs_cb = qtermwidget_setargs_callback;
        if (setargs_cb) {
            const QList<QString>& args_ret = args;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** args_arr = static_cast<const char**>(malloc(sizeof(const char*) * (args_ret.size() + 1)));
            for (qsizetype i = 0; i < args_ret.size(); ++i) {
                QByteArray args_b = args_ret[i].toUtf8();
                auto args_str_len = args_b.length();
                char* args_str = static_cast<char*>(malloc(args_str_len + 1));
                memcpy(args_str, args_b.data(), args_str_len);
                args_str[args_str_len] = '\0';
                args_arr[i] = args_str;
            }
            // Append sentinel null terminator to the list
            args_arr[args_ret.size()] = nullptr;
            const char** cbval1 = args_arr;

            setargs_cb(this, cbval1);
            libqt_free(args_arr);
            return;
        }
        QTermWidget::setArgs(args);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColorScheme(const QString& name) override {
        if (qtermwidget_setcolorscheme_isbase) {
            qtermwidget_setcolorscheme_isbase = false;
            QTermWidget::setColorScheme(name);
            return;
        }
        auto setcolorscheme_cb = qtermwidget_setcolorscheme_callback;
        if (setcolorscheme_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            setcolorscheme_cb(this, cbval1);
            libqt_free(name_str);
            return;
        }
        QTermWidget::setColorScheme(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> getAvailableColorSchemes() override {
        if (qtermwidget_getavailablecolorschemes_isbase) {
            qtermwidget_getavailablecolorschemes_isbase = false;
            return QTermWidget::getAvailableColorSchemes();
        }
        auto getavailablecolorschemes_cb = qtermwidget_getavailablecolorschemes_callback;
        if (getavailablecolorschemes_cb) {
            const char** callback_ret = getavailablecolorschemes_cb();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return QTermWidget::getAvailableColorSchemes();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHistorySize(int lines) override {
        if (qtermwidget_sethistorysize_isbase) {
            qtermwidget_sethistorysize_isbase = false;
            QTermWidget::setHistorySize(lines);
            return;
        }
        auto sethistorysize_cb = qtermwidget_sethistorysize_callback;
        if (sethistorysize_cb) {
            int cbval1 = lines;

            sethistorysize_cb(this, cbval1);
            return;
        }
        QTermWidget::setHistorySize(lines);
    }

    // Virtual method for C ABI access and custom callback
    virtual int historySize() const override {
        if (qtermwidget_historysize_isbase) {
            qtermwidget_historysize_isbase = false;
            return QTermWidget::historySize();
        }
        auto historysize_cb = qtermwidget_historysize_callback;
        if (historysize_cb) {
            int callback_ret = historysize_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::historySize();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setScrollBarPosition(QTermWidgetInterface::ScrollBarPosition scrollBarPosition) override {
        if (qtermwidget_setscrollbarposition_isbase) {
            qtermwidget_setscrollbarposition_isbase = false;
            QTermWidget::setScrollBarPosition(scrollBarPosition);
            return;
        }
        auto setscrollbarposition_cb = qtermwidget_setscrollbarposition_callback;
        if (setscrollbarposition_cb) {
            int cbval1 = static_cast<int>(scrollBarPosition);

            setscrollbarposition_cb(this, cbval1);
            return;
        }
        QTermWidget::setScrollBarPosition(scrollBarPosition);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollToEnd() override {
        if (qtermwidget_scrolltoend_isbase) {
            qtermwidget_scrolltoend_isbase = false;
            QTermWidget::scrollToEnd();
            return;
        }
        auto scrolltoend_cb = qtermwidget_scrolltoend_callback;
        if (scrolltoend_cb) {
            scrolltoend_cb();
            return;
        }
        QTermWidget::scrollToEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendText(const QString& text) override {
        if (qtermwidget_sendtext_isbase) {
            qtermwidget_sendtext_isbase = false;
            QTermWidget::sendText(text);
            return;
        }
        auto sendtext_cb = qtermwidget_sendtext_callback;
        if (sendtext_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            sendtext_cb(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QTermWidget::sendText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendKeyEvent(QKeyEvent* e) override {
        if (qtermwidget_sendkeyevent_isbase) {
            qtermwidget_sendkeyevent_isbase = false;
            QTermWidget::sendKeyEvent(e);
            return;
        }
        auto sendkeyevent_cb = qtermwidget_sendkeyevent_callback;
        if (sendkeyevent_cb) {
            QKeyEvent* cbval1 = e;

            sendkeyevent_cb(this, cbval1);
            return;
        }
        QTermWidget::sendKeyEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFlowControlEnabled(bool enabled) override {
        if (qtermwidget_setflowcontrolenabled_isbase) {
            qtermwidget_setflowcontrolenabled_isbase = false;
            QTermWidget::setFlowControlEnabled(enabled);
            return;
        }
        auto setflowcontrolenabled_cb = qtermwidget_setflowcontrolenabled_callback;
        if (setflowcontrolenabled_cb) {
            bool cbval1 = enabled;

            setflowcontrolenabled_cb(this, cbval1);
            return;
        }
        QTermWidget::setFlowControlEnabled(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool flowControlEnabled() override {
        if (qtermwidget_flowcontrolenabled_isbase) {
            qtermwidget_flowcontrolenabled_isbase = false;
            return QTermWidget::flowControlEnabled();
        }
        auto flowcontrolenabled_cb = qtermwidget_flowcontrolenabled_callback;
        if (flowcontrolenabled_cb) {
            bool callback_ret = flowcontrolenabled_cb();
            return callback_ret;
        }
        return QTermWidget::flowControlEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFlowControlWarningEnabled(bool enabled) override {
        if (qtermwidget_setflowcontrolwarningenabled_isbase) {
            qtermwidget_setflowcontrolwarningenabled_isbase = false;
            QTermWidget::setFlowControlWarningEnabled(enabled);
            return;
        }
        auto setflowcontrolwarningenabled_cb = qtermwidget_setflowcontrolwarningenabled_callback;
        if (setflowcontrolwarningenabled_cb) {
            bool cbval1 = enabled;

            setflowcontrolwarningenabled_cb(this, cbval1);
            return;
        }
        QTermWidget::setFlowControlWarningEnabled(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString keyBindings() override {
        if (qtermwidget_keybindings_isbase) {
            qtermwidget_keybindings_isbase = false;
            return QTermWidget::keyBindings();
        }
        auto keybindings_cb = qtermwidget_keybindings_callback;
        if (keybindings_cb) {
            const char* callback_ret = keybindings_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::keyBindings();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMotionAfterPasting(int motionAfterPasting) override {
        if (qtermwidget_setmotionafterpasting_isbase) {
            qtermwidget_setmotionafterpasting_isbase = false;
            QTermWidget::setMotionAfterPasting(motionAfterPasting);
            return;
        }
        auto setmotionafterpasting_cb = qtermwidget_setmotionafterpasting_callback;
        if (setmotionafterpasting_cb) {
            int cbval1 = motionAfterPasting;

            setmotionafterpasting_cb(this, cbval1);
            return;
        }
        QTermWidget::setMotionAfterPasting(motionAfterPasting);
    }

    // Virtual method for C ABI access and custom callback
    virtual int historyLinesCount() override {
        if (qtermwidget_historylinescount_isbase) {
            qtermwidget_historylinescount_isbase = false;
            return QTermWidget::historyLinesCount();
        }
        auto historylinescount_cb = qtermwidget_historylinescount_callback;
        if (historylinescount_cb) {
            int callback_ret = historylinescount_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::historyLinesCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int screenColumnsCount() override {
        if (qtermwidget_screencolumnscount_isbase) {
            qtermwidget_screencolumnscount_isbase = false;
            return QTermWidget::screenColumnsCount();
        }
        auto screencolumnscount_cb = qtermwidget_screencolumnscount_callback;
        if (screencolumnscount_cb) {
            int callback_ret = screencolumnscount_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::screenColumnsCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int screenLinesCount() override {
        if (qtermwidget_screenlinescount_isbase) {
            qtermwidget_screenlinescount_isbase = false;
            return QTermWidget::screenLinesCount();
        }
        auto screenlinescount_cb = qtermwidget_screenlinescount_callback;
        if (screenlinescount_cb) {
            int callback_ret = screenlinescount_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::screenLinesCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionStart(int row, int column) override {
        if (qtermwidget_setselectionstart_isbase) {
            qtermwidget_setselectionstart_isbase = false;
            QTermWidget::setSelectionStart(row, column);
            return;
        }
        auto setselectionstart_cb = qtermwidget_setselectionstart_callback;
        if (setselectionstart_cb) {
            int cbval1 = row;
            int cbval2 = column;

            setselectionstart_cb(this, cbval1, cbval2);
            return;
        }
        QTermWidget::setSelectionStart(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionEnd(int row, int column) override {
        if (qtermwidget_setselectionend_isbase) {
            qtermwidget_setselectionend_isbase = false;
            QTermWidget::setSelectionEnd(row, column);
            return;
        }
        auto setselectionend_cb = qtermwidget_setselectionend_callback;
        if (setselectionend_cb) {
            int cbval1 = row;
            int cbval2 = column;

            setselectionend_cb(this, cbval1, cbval2);
            return;
        }
        QTermWidget::setSelectionEnd(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getSelectionStart(int& row, int& column) override {
        if (qtermwidget_getselectionstart_isbase) {
            qtermwidget_getselectionstart_isbase = false;
            QTermWidget::getSelectionStart(row, column);
            return;
        }
        auto getselectionstart_cb = qtermwidget_getselectionstart_callback;
        if (getselectionstart_cb) {
            int* cbval1 = &row;
            int* cbval2 = &column;

            getselectionstart_cb(this, cbval1, cbval2);
            return;
        }
        QTermWidget::getSelectionStart(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getSelectionEnd(int& row, int& column) override {
        if (qtermwidget_getselectionend_isbase) {
            qtermwidget_getselectionend_isbase = false;
            QTermWidget::getSelectionEnd(row, column);
            return;
        }
        auto getselectionend_cb = qtermwidget_getselectionend_callback;
        if (getselectionend_cb) {
            int* cbval1 = &row;
            int* cbval2 = &column;

            getselectionend_cb(this, cbval1, cbval2);
            return;
        }
        QTermWidget::getSelectionEnd(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString selectedText(bool preserveLineBreaks) override {
        if (qtermwidget_selectedtext_isbase) {
            qtermwidget_selectedtext_isbase = false;
            return QTermWidget::selectedText(preserveLineBreaks);
        }
        auto selectedtext_cb = qtermwidget_selectedtext_callback;
        if (selectedtext_cb) {
            bool cbval1 = preserveLineBreaks;

            const char* callback_ret = selectedtext_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::selectedText(preserveLineBreaks);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMonitorActivity(bool monitorActivity) override {
        if (qtermwidget_setmonitoractivity_isbase) {
            qtermwidget_setmonitoractivity_isbase = false;
            QTermWidget::setMonitorActivity(monitorActivity);
            return;
        }
        auto setmonitoractivity_cb = qtermwidget_setmonitoractivity_callback;
        if (setmonitoractivity_cb) {
            bool cbval1 = monitorActivity;

            setmonitoractivity_cb(this, cbval1);
            return;
        }
        QTermWidget::setMonitorActivity(monitorActivity);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMonitorSilence(bool monitorSilence) override {
        if (qtermwidget_setmonitorsilence_isbase) {
            qtermwidget_setmonitorsilence_isbase = false;
            QTermWidget::setMonitorSilence(monitorSilence);
            return;
        }
        auto setmonitorsilence_cb = qtermwidget_setmonitorsilence_callback;
        if (setmonitorsilence_cb) {
            bool cbval1 = monitorSilence;

            setmonitorsilence_cb(this, cbval1);
            return;
        }
        QTermWidget::setMonitorSilence(monitorSilence);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSilenceTimeout(int seconds) override {
        if (qtermwidget_setsilencetimeout_isbase) {
            qtermwidget_setsilencetimeout_isbase = false;
            QTermWidget::setSilenceTimeout(seconds);
            return;
        }
        auto setsilencetimeout_cb = qtermwidget_setsilencetimeout_callback;
        if (setsilencetimeout_cb) {
            int cbval1 = seconds;

            setsilencetimeout_cb(this, cbval1);
            return;
        }
        QTermWidget::setSilenceTimeout(seconds);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> filterActions(const QPoint& position) override {
        if (qtermwidget_filteractions_isbase) {
            qtermwidget_filteractions_isbase = false;
            return QTermWidget::filterActions(position);
        }
        auto filteractions_cb = qtermwidget_filteractions_callback;
        if (filteractions_cb) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);

            libqt_list /* of QAction* */ callback_ret = filteractions_cb(this, cbval1);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTermWidget::filterActions(position);
    }

    // Virtual method for C ABI access and custom callback
    virtual int getPtySlaveFd() const override {
        if (qtermwidget_getptyslavefd_isbase) {
            qtermwidget_getptyslavefd_isbase = false;
            return QTermWidget::getPtySlaveFd();
        }
        auto getptyslavefd_cb = qtermwidget_getptyslavefd_callback;
        if (getptyslavefd_cb) {
            int callback_ret = getptyslavefd_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getPtySlaveFd();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBlinkingCursor(bool blink) override {
        if (qtermwidget_setblinkingcursor_isbase) {
            qtermwidget_setblinkingcursor_isbase = false;
            QTermWidget::setBlinkingCursor(blink);
            return;
        }
        auto setblinkingcursor_cb = qtermwidget_setblinkingcursor_callback;
        if (setblinkingcursor_cb) {
            bool cbval1 = blink;

            setblinkingcursor_cb(this, cbval1);
            return;
        }
        QTermWidget::setBlinkingCursor(blink);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBidiEnabled(bool enabled) override {
        if (qtermwidget_setbidienabled_isbase) {
            qtermwidget_setbidienabled_isbase = false;
            QTermWidget::setBidiEnabled(enabled);
            return;
        }
        auto setbidienabled_cb = qtermwidget_setbidienabled_callback;
        if (setbidienabled_cb) {
            bool cbval1 = enabled;

            setbidienabled_cb(this, cbval1);
            return;
        }
        QTermWidget::setBidiEnabled(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBidiEnabled() override {
        if (qtermwidget_isbidienabled_isbase) {
            qtermwidget_isbidienabled_isbase = false;
            return QTermWidget::isBidiEnabled();
        }
        auto isbidienabled_cb = qtermwidget_isbidienabled_callback;
        if (isbidienabled_cb) {
            bool callback_ret = isbidienabled_cb();
            return callback_ret;
        }
        return QTermWidget::isBidiEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoClose(bool autoClose) override {
        if (qtermwidget_setautoclose_isbase) {
            qtermwidget_setautoclose_isbase = false;
            QTermWidget::setAutoClose(autoClose);
            return;
        }
        auto setautoclose_cb = qtermwidget_setautoclose_callback;
        if (setautoclose_cb) {
            bool cbval1 = autoClose;

            setautoclose_cb(this, cbval1);
            return;
        }
        QTermWidget::setAutoClose(autoClose);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString title() const override {
        if (qtermwidget_title_isbase) {
            qtermwidget_title_isbase = false;
            return QTermWidget::title();
        }
        auto title_cb = qtermwidget_title_callback;
        if (title_cb) {
            const char* callback_ret = title_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::title();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString icon() const override {
        if (qtermwidget_icon_isbase) {
            qtermwidget_icon_isbase = false;
            return QTermWidget::icon();
        }
        auto icon_cb = qtermwidget_icon_callback;
        if (icon_cb) {
            const char* callback_ret = icon_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::icon();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTitleChanged() const override {
        if (qtermwidget_istitlechanged_isbase) {
            qtermwidget_istitlechanged_isbase = false;
            return QTermWidget::isTitleChanged();
        }
        auto istitlechanged_cb = qtermwidget_istitlechanged_callback;
        if (istitlechanged_cb) {
            bool callback_ret = istitlechanged_cb();
            return callback_ret;
        }
        return QTermWidget::isTitleChanged();
    }

    // Virtual method for C ABI access and custom callback
    virtual void bracketText(QString& text) override {
        if (qtermwidget_brackettext_isbase) {
            qtermwidget_brackettext_isbase = false;
            QTermWidget::bracketText(text);
            return;
        }
        auto brackettext_cb = qtermwidget_brackettext_callback;
        if (brackettext_cb) {
            QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            brackettext_cb(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QTermWidget::bracketText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disableBracketedPasteMode(bool disable) override {
        if (qtermwidget_disablebracketedpastemode_isbase) {
            qtermwidget_disablebracketedpastemode_isbase = false;
            QTermWidget::disableBracketedPasteMode(disable);
            return;
        }
        auto disablebracketedpastemode_cb = qtermwidget_disablebracketedpastemode_callback;
        if (disablebracketedpastemode_cb) {
            bool cbval1 = disable;

            disablebracketedpastemode_cb(this, cbval1);
            return;
        }
        QTermWidget::disableBracketedPasteMode(disable);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bracketedPasteModeIsDisabled() const override {
        if (qtermwidget_bracketedpastemodeisdisabled_isbase) {
            qtermwidget_bracketedpastemodeisdisabled_isbase = false;
            return QTermWidget::bracketedPasteModeIsDisabled();
        }
        auto bracketedpastemodeisdisabled_cb = qtermwidget_bracketedpastemodeisdisabled_callback;
        if (bracketedpastemodeisdisabled_cb) {
            bool callback_ret = bracketedpastemodeisdisabled_cb();
            return callback_ret;
        }
        return QTermWidget::bracketedPasteModeIsDisabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMargin(int margin) override {
        if (qtermwidget_setmargin_isbase) {
            qtermwidget_setmargin_isbase = false;
            QTermWidget::setMargin(margin);
            return;
        }
        auto setmargin_cb = qtermwidget_setmargin_callback;
        if (setmargin_cb) {
            int cbval1 = margin;

            setmargin_cb(this, cbval1);
            return;
        }
        QTermWidget::setMargin(margin);
    }

    // Virtual method for C ABI access and custom callback
    virtual int getMargin() const override {
        if (qtermwidget_getmargin_isbase) {
            qtermwidget_getmargin_isbase = false;
            return QTermWidget::getMargin();
        }
        auto getmargin_cb = qtermwidget_getmargin_callback;
        if (getmargin_cb) {
            int callback_ret = getmargin_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getMargin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDrawLineChars(bool drawLineChars) override {
        if (qtermwidget_setdrawlinechars_isbase) {
            qtermwidget_setdrawlinechars_isbase = false;
            QTermWidget::setDrawLineChars(drawLineChars);
            return;
        }
        auto setdrawlinechars_cb = qtermwidget_setdrawlinechars_callback;
        if (setdrawlinechars_cb) {
            bool cbval1 = drawLineChars;

            setdrawlinechars_cb(this, cbval1);
            return;
        }
        QTermWidget::setDrawLineChars(drawLineChars);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBoldIntense(bool boldIntense) override {
        if (qtermwidget_setboldintense_isbase) {
            qtermwidget_setboldintense_isbase = false;
            QTermWidget::setBoldIntense(boldIntense);
            return;
        }
        auto setboldintense_cb = qtermwidget_setboldintense_callback;
        if (setboldintense_cb) {
            bool cbval1 = boldIntense;

            setboldintense_cb(this, cbval1);
            return;
        }
        QTermWidget::setBoldIntense(boldIntense);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setConfirmMultilinePaste(bool confirmMultilinePaste) override {
        if (qtermwidget_setconfirmmultilinepaste_isbase) {
            qtermwidget_setconfirmmultilinepaste_isbase = false;
            QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
            return;
        }
        auto setconfirmmultilinepaste_cb = qtermwidget_setconfirmmultilinepaste_callback;
        if (setconfirmmultilinepaste_cb) {
            bool cbval1 = confirmMultilinePaste;

            setconfirmmultilinepaste_cb(this, cbval1);
            return;
        }
        QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTrimPastedTrailingNewlines(bool trimPastedTrailingNewlines) override {
        if (qtermwidget_settrimpastedtrailingnewlines_isbase) {
            qtermwidget_settrimpastedtrailingnewlines_isbase = false;
            QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
            return;
        }
        auto settrimpastedtrailingnewlines_cb = qtermwidget_settrimpastedtrailingnewlines_callback;
        if (settrimpastedtrailingnewlines_cb) {
            bool cbval1 = trimPastedTrailingNewlines;

            settrimpastedtrailingnewlines_cb(this, cbval1);
            return;
        }
        QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString wordCharacters() const override {
        if (qtermwidget_wordcharacters_isbase) {
            qtermwidget_wordcharacters_isbase = false;
            return QTermWidget::wordCharacters();
        }
        auto wordcharacters_cb = qtermwidget_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWordCharacters(const QString& chars) override {
        if (qtermwidget_setwordcharacters_isbase) {
            qtermwidget_setwordcharacters_isbase = false;
            QTermWidget::setWordCharacters(chars);
            return;
        }
        auto setwordcharacters_cb = qtermwidget_setwordcharacters_callback;
        if (setwordcharacters_cb) {
            const QString chars_ret = chars;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray chars_b = chars_ret.toUtf8();
            auto chars_str_len = chars_b.length();
            const char* chars_str = static_cast<const char*>(malloc(chars_str_len + 1));
            memcpy((void*)chars_str, chars_b.data(), chars_str_len);
            ((char*)chars_str)[chars_str_len] = '\0';
            const char* cbval1 = chars_str;

            setwordcharacters_cb(this, cbval1);
            libqt_free(chars_str);
            return;
        }
        QTermWidget::setWordCharacters(chars);
    }

    // Virtual method for C ABI access and custom callback
    virtual QTermWidgetInterface* createWidget(int startnow) const override {
        if (qtermwidget_createwidget_isbase) {
            qtermwidget_createwidget_isbase = false;
            return QTermWidget::createWidget(startnow);
        }
        auto createwidget_cb = qtermwidget_createwidget_callback;
        if (createwidget_cb) {
            int cbval1 = startnow;

            QTermWidgetInterface* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::createWidget(startnow);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qtermwidget_resizeevent_isbase) {
            qtermwidget_resizeevent_isbase = false;
            QTermWidget::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = qtermwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        QTermWidget::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtermwidget_devtype_isbase) {
            qtermwidget_devtype_isbase = false;
            return QTermWidget::devType();
        }
        auto devtype_cb = qtermwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtermwidget_setvisible_isbase) {
            qtermwidget_setvisible_isbase = false;
            QTermWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = qtermwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QTermWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtermwidget_minimumsizehint_isbase) {
            qtermwidget_minimumsizehint_isbase = false;
            return QTermWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = qtermwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QTermWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtermwidget_heightforwidth_isbase) {
            qtermwidget_heightforwidth_isbase = false;
            return QTermWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = qtermwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtermwidget_hasheightforwidth_isbase) {
            qtermwidget_hasheightforwidth_isbase = false;
            return QTermWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qtermwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QTermWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtermwidget_paintengine_isbase) {
            qtermwidget_paintengine_isbase = false;
            return QTermWidget::paintEngine();
        }
        auto paintengine_cb = qtermwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QTermWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtermwidget_event_isbase) {
            qtermwidget_event_isbase = false;
            return QTermWidget::event(event);
        }
        auto event_cb = qtermwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtermwidget_mousepressevent_isbase) {
            qtermwidget_mousepressevent_isbase = false;
            QTermWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qtermwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QTermWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtermwidget_mousereleaseevent_isbase) {
            qtermwidget_mousereleaseevent_isbase = false;
            QTermWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qtermwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QTermWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtermwidget_mousedoubleclickevent_isbase) {
            qtermwidget_mousedoubleclickevent_isbase = false;
            QTermWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qtermwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QTermWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtermwidget_mousemoveevent_isbase) {
            qtermwidget_mousemoveevent_isbase = false;
            QTermWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qtermwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QTermWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtermwidget_wheelevent_isbase) {
            qtermwidget_wheelevent_isbase = false;
            QTermWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qtermwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QTermWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtermwidget_keypressevent_isbase) {
            qtermwidget_keypressevent_isbase = false;
            QTermWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qtermwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QTermWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtermwidget_keyreleaseevent_isbase) {
            qtermwidget_keyreleaseevent_isbase = false;
            QTermWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qtermwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QTermWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtermwidget_focusinevent_isbase) {
            qtermwidget_focusinevent_isbase = false;
            QTermWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qtermwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QTermWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtermwidget_focusoutevent_isbase) {
            qtermwidget_focusoutevent_isbase = false;
            QTermWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qtermwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QTermWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtermwidget_enterevent_isbase) {
            qtermwidget_enterevent_isbase = false;
            QTermWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = qtermwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QTermWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtermwidget_leaveevent_isbase) {
            qtermwidget_leaveevent_isbase = false;
            QTermWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qtermwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QTermWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtermwidget_paintevent_isbase) {
            qtermwidget_paintevent_isbase = false;
            QTermWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = qtermwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QTermWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtermwidget_moveevent_isbase) {
            qtermwidget_moveevent_isbase = false;
            QTermWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = qtermwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QTermWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtermwidget_closeevent_isbase) {
            qtermwidget_closeevent_isbase = false;
            QTermWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = qtermwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QTermWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtermwidget_contextmenuevent_isbase) {
            qtermwidget_contextmenuevent_isbase = false;
            QTermWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qtermwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QTermWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtermwidget_tabletevent_isbase) {
            qtermwidget_tabletevent_isbase = false;
            QTermWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qtermwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QTermWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtermwidget_actionevent_isbase) {
            qtermwidget_actionevent_isbase = false;
            QTermWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = qtermwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QTermWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtermwidget_dragenterevent_isbase) {
            qtermwidget_dragenterevent_isbase = false;
            QTermWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qtermwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QTermWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtermwidget_dragmoveevent_isbase) {
            qtermwidget_dragmoveevent_isbase = false;
            QTermWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qtermwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QTermWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtermwidget_dragleaveevent_isbase) {
            qtermwidget_dragleaveevent_isbase = false;
            QTermWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qtermwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QTermWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtermwidget_dropevent_isbase) {
            qtermwidget_dropevent_isbase = false;
            QTermWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = qtermwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QTermWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtermwidget_showevent_isbase) {
            qtermwidget_showevent_isbase = false;
            QTermWidget::showEvent(event);
            return;
        }
        auto showevent_cb = qtermwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QTermWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtermwidget_hideevent_isbase) {
            qtermwidget_hideevent_isbase = false;
            QTermWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = qtermwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QTermWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtermwidget_nativeevent_isbase) {
            qtermwidget_nativeevent_isbase = false;
            return QTermWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qtermwidget_nativeevent_callback;
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
        return QTermWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtermwidget_changeevent_isbase) {
            qtermwidget_changeevent_isbase = false;
            QTermWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qtermwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QTermWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtermwidget_metric_isbase) {
            qtermwidget_metric_isbase = false;
            return QTermWidget::metric(param1);
        }
        auto metric_cb = qtermwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtermwidget_initpainter_isbase) {
            qtermwidget_initpainter_isbase = false;
            QTermWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = qtermwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QTermWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtermwidget_redirected_isbase) {
            qtermwidget_redirected_isbase = false;
            return QTermWidget::redirected(offset);
        }
        auto redirected_cb = qtermwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtermwidget_sharedpainter_isbase) {
            qtermwidget_sharedpainter_isbase = false;
            return QTermWidget::sharedPainter();
        }
        auto sharedpainter_cb = qtermwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QTermWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtermwidget_inputmethodevent_isbase) {
            qtermwidget_inputmethodevent_isbase = false;
            QTermWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qtermwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QTermWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtermwidget_inputmethodquery_isbase) {
            qtermwidget_inputmethodquery_isbase = false;
            return QTermWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qtermwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QTermWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtermwidget_focusnextprevchild_isbase) {
            qtermwidget_focusnextprevchild_isbase = false;
            return QTermWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qtermwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtermwidget_eventfilter_isbase) {
            qtermwidget_eventfilter_isbase = false;
            return QTermWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtermwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTermWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtermwidget_timerevent_isbase) {
            qtermwidget_timerevent_isbase = false;
            QTermWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtermwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTermWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtermwidget_childevent_isbase) {
            qtermwidget_childevent_isbase = false;
            QTermWidget::childEvent(event);
            return;
        }
        auto childevent_cb = qtermwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTermWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtermwidget_customevent_isbase) {
            qtermwidget_customevent_isbase = false;
            QTermWidget::customEvent(event);
            return;
        }
        auto customevent_cb = qtermwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTermWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtermwidget_connectnotify_isbase) {
            qtermwidget_connectnotify_isbase = false;
            QTermWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtermwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTermWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtermwidget_disconnectnotify_isbase) {
            qtermwidget_disconnectnotify_isbase = false;
            QTermWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtermwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTermWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void sessionFinished() {
        if (qtermwidget_sessionfinished_isbase) {
            qtermwidget_sessionfinished_isbase = false;
            QTermWidget::sessionFinished();
            return;
        }
        auto sessionfinished_cb = qtermwidget_sessionfinished_callback;
        if (sessionfinished_cb) {
            sessionfinished_cb();
            return;
        }
        QTermWidget::sessionFinished();
    }

    // Virtual method for C ABI access and custom callback
    void selectionChanged(bool textSelected) {
        if (qtermwidget_selectionchanged_isbase) {
            qtermwidget_selectionchanged_isbase = false;
            QTermWidget::selectionChanged(textSelected);
            return;
        }
        auto selectionchanged_cb = qtermwidget_selectionchanged_callback;
        if (selectionchanged_cb) {
            bool cbval1 = textSelected;

            selectionchanged_cb(this, cbval1);
            return;
        }
        QTermWidget::selectionChanged(textSelected);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtermwidget_updatemicrofocus_isbase) {
            qtermwidget_updatemicrofocus_isbase = false;
            QTermWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qtermwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QTermWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtermwidget_create_isbase) {
            qtermwidget_create_isbase = false;
            QTermWidget::create();
            return;
        }
        auto create_cb = qtermwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QTermWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtermwidget_destroy_isbase) {
            qtermwidget_destroy_isbase = false;
            QTermWidget::destroy();
            return;
        }
        auto destroy_cb = qtermwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QTermWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtermwidget_focusnextchild_isbase) {
            qtermwidget_focusnextchild_isbase = false;
            return QTermWidget::focusNextChild();
        }
        auto focusnextchild_cb = qtermwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QTermWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtermwidget_focuspreviouschild_isbase) {
            qtermwidget_focuspreviouschild_isbase = false;
            return QTermWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qtermwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QTermWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtermwidget_sender_isbase) {
            qtermwidget_sender_isbase = false;
            return QTermWidget::sender();
        }
        auto sender_cb = qtermwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTermWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtermwidget_sendersignalindex_isbase) {
            qtermwidget_sendersignalindex_isbase = false;
            return QTermWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtermwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtermwidget_receivers_isbase) {
            qtermwidget_receivers_isbase = false;
            return QTermWidget::receivers(signal);
        }
        auto receivers_cb = qtermwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtermwidget_issignalconnected_isbase) {
            qtermwidget_issignalconnected_isbase = false;
            return QTermWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtermwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtermwidget_getdecodedmetricf_isbase) {
            qtermwidget_getdecodedmetricf_isbase = false;
            return QTermWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qtermwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QTermWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QTermWidget_ResizeEvent(QTermWidget* self, QResizeEvent* param1);
    friend void QTermWidget_SuperResizeEvent(QTermWidget* self, QResizeEvent* param1);
    friend bool QTermWidget_Event(QTermWidget* self, QEvent* event);
    friend bool QTermWidget_SuperEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_MousePressEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperMousePressEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_MouseReleaseEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperMouseReleaseEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_MouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperMouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_MouseMoveEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperMouseMoveEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_WheelEvent(QTermWidget* self, QWheelEvent* event);
    friend void QTermWidget_SuperWheelEvent(QTermWidget* self, QWheelEvent* event);
    friend void QTermWidget_KeyPressEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_SuperKeyPressEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_KeyReleaseEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_SuperKeyReleaseEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_FocusInEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_SuperFocusInEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_FocusOutEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_SuperFocusOutEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_EnterEvent(QTermWidget* self, QEnterEvent* event);
    friend void QTermWidget_SuperEnterEvent(QTermWidget* self, QEnterEvent* event);
    friend void QTermWidget_LeaveEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_SuperLeaveEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_PaintEvent(QTermWidget* self, QPaintEvent* event);
    friend void QTermWidget_SuperPaintEvent(QTermWidget* self, QPaintEvent* event);
    friend void QTermWidget_MoveEvent(QTermWidget* self, QMoveEvent* event);
    friend void QTermWidget_SuperMoveEvent(QTermWidget* self, QMoveEvent* event);
    friend void QTermWidget_CloseEvent(QTermWidget* self, QCloseEvent* event);
    friend void QTermWidget_SuperCloseEvent(QTermWidget* self, QCloseEvent* event);
    friend void QTermWidget_ContextMenuEvent(QTermWidget* self, QContextMenuEvent* event);
    friend void QTermWidget_SuperContextMenuEvent(QTermWidget* self, QContextMenuEvent* event);
    friend void QTermWidget_TabletEvent(QTermWidget* self, QTabletEvent* event);
    friend void QTermWidget_SuperTabletEvent(QTermWidget* self, QTabletEvent* event);
    friend void QTermWidget_ActionEvent(QTermWidget* self, QActionEvent* event);
    friend void QTermWidget_SuperActionEvent(QTermWidget* self, QActionEvent* event);
    friend void QTermWidget_DragEnterEvent(QTermWidget* self, QDragEnterEvent* event);
    friend void QTermWidget_SuperDragEnterEvent(QTermWidget* self, QDragEnterEvent* event);
    friend void QTermWidget_DragMoveEvent(QTermWidget* self, QDragMoveEvent* event);
    friend void QTermWidget_SuperDragMoveEvent(QTermWidget* self, QDragMoveEvent* event);
    friend void QTermWidget_DragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event);
    friend void QTermWidget_SuperDragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event);
    friend void QTermWidget_DropEvent(QTermWidget* self, QDropEvent* event);
    friend void QTermWidget_SuperDropEvent(QTermWidget* self, QDropEvent* event);
    friend void QTermWidget_ShowEvent(QTermWidget* self, QShowEvent* event);
    friend void QTermWidget_SuperShowEvent(QTermWidget* self, QShowEvent* event);
    friend void QTermWidget_HideEvent(QTermWidget* self, QHideEvent* event);
    friend void QTermWidget_SuperHideEvent(QTermWidget* self, QHideEvent* event);
    friend bool QTermWidget_NativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTermWidget_SuperNativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QTermWidget_ChangeEvent(QTermWidget* self, QEvent* param1);
    friend void QTermWidget_SuperChangeEvent(QTermWidget* self, QEvent* param1);
    friend int QTermWidget_Metric(const QTermWidget* self, int param1);
    friend int QTermWidget_SuperMetric(const QTermWidget* self, int param1);
    friend void QTermWidget_InitPainter(const QTermWidget* self, QPainter* painter);
    friend void QTermWidget_SuperInitPainter(const QTermWidget* self, QPainter* painter);
    friend QPaintDevice* QTermWidget_Redirected(const QTermWidget* self, QPoint* offset);
    friend QPaintDevice* QTermWidget_SuperRedirected(const QTermWidget* self, QPoint* offset);
    friend QPainter* QTermWidget_SharedPainter(const QTermWidget* self);
    friend QPainter* QTermWidget_SuperSharedPainter(const QTermWidget* self);
    friend void QTermWidget_InputMethodEvent(QTermWidget* self, QInputMethodEvent* param1);
    friend void QTermWidget_SuperInputMethodEvent(QTermWidget* self, QInputMethodEvent* param1);
    friend bool QTermWidget_FocusNextPrevChild(QTermWidget* self, bool next);
    friend bool QTermWidget_SuperFocusNextPrevChild(QTermWidget* self, bool next);
    friend void QTermWidget_TimerEvent(QTermWidget* self, QTimerEvent* event);
    friend void QTermWidget_SuperTimerEvent(QTermWidget* self, QTimerEvent* event);
    friend void QTermWidget_ChildEvent(QTermWidget* self, QChildEvent* event);
    friend void QTermWidget_SuperChildEvent(QTermWidget* self, QChildEvent* event);
    friend void QTermWidget_CustomEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_SuperCustomEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_ConnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_SuperConnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_DisconnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_SuperDisconnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_SessionFinished(QTermWidget* self);
    friend void QTermWidget_SuperSessionFinished(QTermWidget* self);
    friend void QTermWidget_SelectionChanged(QTermWidget* self, bool textSelected);
    friend void QTermWidget_SuperSelectionChanged(QTermWidget* self, bool textSelected);
    friend void QTermWidget_UpdateMicroFocus(QTermWidget* self);
    friend void QTermWidget_SuperUpdateMicroFocus(QTermWidget* self);
    friend void QTermWidget_Create(QTermWidget* self);
    friend void QTermWidget_SuperCreate(QTermWidget* self);
    friend void QTermWidget_Destroy(QTermWidget* self);
    friend void QTermWidget_SuperDestroy(QTermWidget* self);
    friend bool QTermWidget_FocusNextChild(QTermWidget* self);
    friend bool QTermWidget_SuperFocusNextChild(QTermWidget* self);
    friend bool QTermWidget_FocusPreviousChild(QTermWidget* self);
    friend bool QTermWidget_SuperFocusPreviousChild(QTermWidget* self);
    friend QObject* QTermWidget_Sender(const QTermWidget* self);
    friend QObject* QTermWidget_SuperSender(const QTermWidget* self);
    friend int QTermWidget_SenderSignalIndex(const QTermWidget* self);
    friend int QTermWidget_SuperSenderSignalIndex(const QTermWidget* self);
    friend int QTermWidget_Receivers(const QTermWidget* self, const char* signal);
    friend int QTermWidget_SuperReceivers(const QTermWidget* self, const char* signal);
    friend bool QTermWidget_IsSignalConnected(const QTermWidget* self, const QMetaMethod* signal);
    friend bool QTermWidget_SuperIsSignalConnected(const QTermWidget* self, const QMetaMethod* signal);
    friend double QTermWidget_GetDecodedMetricF(const QTermWidget* self, int metricA, int metricB);
    friend double QTermWidget_SuperGetDecodedMetricF(const QTermWidget* self, int metricA, int metricB);
};

#endif
