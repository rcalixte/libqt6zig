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
    using QTermWidget_Metacall_Callback = int (*)(QTermWidget*, int, int, void**);
    using QTermWidget_SizeHint_Callback = QSize* (*)();
    using QTermWidget_SetTerminalSizeHint_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_TerminalSizeHint_Callback = bool (*)();
    using QTermWidget_StartShellProgram_Callback = void (*)();
    using QTermWidget_StartTerminalTeletype_Callback = void (*)();
    using QTermWidget_GetShellPID_Callback = int (*)();
    using QTermWidget_GetForegroundProcessId_Callback = int (*)();
    using QTermWidget_ChangeDir_Callback = void (*)(QTermWidget*, libqt_string);
    using QTermWidget_SetTerminalFont_Callback = void (*)(QTermWidget*, QFont*);
    using QTermWidget_GetTerminalFont_Callback = QFont* (*)();
    using QTermWidget_SetTerminalOpacity_Callback = void (*)(QTermWidget*, double);
    using QTermWidget_SetTerminalBackgroundImage_Callback = void (*)(QTermWidget*, libqt_string);
    using QTermWidget_SetTerminalBackgroundMode_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_SetEnvironment_Callback = void (*)(QTermWidget*, libqt_list /* of libqt_string */);
    using QTermWidget_SetShellProgram_Callback = void (*)(QTermWidget*, libqt_string);
    using QTermWidget_SetWorkingDirectory_Callback = void (*)(QTermWidget*, libqt_string);
    using QTermWidget_WorkingDirectory_Callback = const char* (*)();
    using QTermWidget_SetArgs_Callback = void (*)(QTermWidget*, libqt_list /* of libqt_string */);
    using QTermWidget_SetColorScheme_Callback = void (*)(QTermWidget*, libqt_string);
    using QTermWidget_GetAvailableColorSchemes_Callback = const char** (*)();
    using QTermWidget_SetHistorySize_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_HistorySize_Callback = int (*)();
    using QTermWidget_SetScrollBarPosition_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_ScrollToEnd_Callback = void (*)();
    using QTermWidget_SendText_Callback = void (*)(QTermWidget*, libqt_string);
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
    using QTermWidget_FilterActions_Callback = QAction** (*)(QTermWidget*, QPoint*);
    using QTermWidget_GetPtySlaveFd_Callback = int (*)();
    using QTermWidget_SetBlinkingCursor_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetBidiEnabled_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_IsBidiEnabled_Callback = bool (*)();
    using QTermWidget_SetAutoClose_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_Title_Callback = const char* (*)();
    using QTermWidget_Icon_Callback = const char* (*)();
    using QTermWidget_IsTitleChanged_Callback = bool (*)();
    using QTermWidget_BracketText_Callback = void (*)(QTermWidget*, libqt_string);
    using QTermWidget_DisableBracketedPasteMode_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_BracketedPasteModeIsDisabled_Callback = bool (*)();
    using QTermWidget_SetMargin_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_GetMargin_Callback = int (*)();
    using QTermWidget_SetDrawLineChars_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetBoldIntense_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetConfirmMultilinePaste_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetTrimPastedTrailingNewlines_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_WordCharacters_Callback = const char* (*)();
    using QTermWidget_SetWordCharacters_Callback = void (*)(QTermWidget*, libqt_string);
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

    ~VirtualQTermWidget() {
        qtermwidget_metacall_callback = nullptr;
        qtermwidget_sizehint_callback = nullptr;
        qtermwidget_setterminalsizehint_callback = nullptr;
        qtermwidget_terminalsizehint_callback = nullptr;
        qtermwidget_startshellprogram_callback = nullptr;
        qtermwidget_startterminalteletype_callback = nullptr;
        qtermwidget_getshellpid_callback = nullptr;
        qtermwidget_getforegroundprocessid_callback = nullptr;
        qtermwidget_changedir_callback = nullptr;
        qtermwidget_setterminalfont_callback = nullptr;
        qtermwidget_getterminalfont_callback = nullptr;
        qtermwidget_setterminalopacity_callback = nullptr;
        qtermwidget_setterminalbackgroundimage_callback = nullptr;
        qtermwidget_setterminalbackgroundmode_callback = nullptr;
        qtermwidget_setenvironment_callback = nullptr;
        qtermwidget_setshellprogram_callback = nullptr;
        qtermwidget_setworkingdirectory_callback = nullptr;
        qtermwidget_workingdirectory_callback = nullptr;
        qtermwidget_setargs_callback = nullptr;
        qtermwidget_setcolorscheme_callback = nullptr;
        qtermwidget_getavailablecolorschemes_callback = nullptr;
        qtermwidget_sethistorysize_callback = nullptr;
        qtermwidget_historysize_callback = nullptr;
        qtermwidget_setscrollbarposition_callback = nullptr;
        qtermwidget_scrolltoend_callback = nullptr;
        qtermwidget_sendtext_callback = nullptr;
        qtermwidget_sendkeyevent_callback = nullptr;
        qtermwidget_setflowcontrolenabled_callback = nullptr;
        qtermwidget_flowcontrolenabled_callback = nullptr;
        qtermwidget_setflowcontrolwarningenabled_callback = nullptr;
        qtermwidget_keybindings_callback = nullptr;
        qtermwidget_setmotionafterpasting_callback = nullptr;
        qtermwidget_historylinescount_callback = nullptr;
        qtermwidget_screencolumnscount_callback = nullptr;
        qtermwidget_screenlinescount_callback = nullptr;
        qtermwidget_setselectionstart_callback = nullptr;
        qtermwidget_setselectionend_callback = nullptr;
        qtermwidget_getselectionstart_callback = nullptr;
        qtermwidget_getselectionend_callback = nullptr;
        qtermwidget_selectedtext_callback = nullptr;
        qtermwidget_setmonitoractivity_callback = nullptr;
        qtermwidget_setmonitorsilence_callback = nullptr;
        qtermwidget_setsilencetimeout_callback = nullptr;
        qtermwidget_filteractions_callback = nullptr;
        qtermwidget_getptyslavefd_callback = nullptr;
        qtermwidget_setblinkingcursor_callback = nullptr;
        qtermwidget_setbidienabled_callback = nullptr;
        qtermwidget_isbidienabled_callback = nullptr;
        qtermwidget_setautoclose_callback = nullptr;
        qtermwidget_title_callback = nullptr;
        qtermwidget_icon_callback = nullptr;
        qtermwidget_istitlechanged_callback = nullptr;
        qtermwidget_brackettext_callback = nullptr;
        qtermwidget_disablebracketedpastemode_callback = nullptr;
        qtermwidget_bracketedpastemodeisdisabled_callback = nullptr;
        qtermwidget_setmargin_callback = nullptr;
        qtermwidget_getmargin_callback = nullptr;
        qtermwidget_setdrawlinechars_callback = nullptr;
        qtermwidget_setboldintense_callback = nullptr;
        qtermwidget_setconfirmmultilinepaste_callback = nullptr;
        qtermwidget_settrimpastedtrailingnewlines_callback = nullptr;
        qtermwidget_wordcharacters_callback = nullptr;
        qtermwidget_setwordcharacters_callback = nullptr;
        qtermwidget_createwidget_callback = nullptr;
        qtermwidget_resizeevent_callback = nullptr;
        qtermwidget_devtype_callback = nullptr;
        qtermwidget_setvisible_callback = nullptr;
        qtermwidget_minimumsizehint_callback = nullptr;
        qtermwidget_heightforwidth_callback = nullptr;
        qtermwidget_hasheightforwidth_callback = nullptr;
        qtermwidget_paintengine_callback = nullptr;
        qtermwidget_event_callback = nullptr;
        qtermwidget_mousepressevent_callback = nullptr;
        qtermwidget_mousereleaseevent_callback = nullptr;
        qtermwidget_mousedoubleclickevent_callback = nullptr;
        qtermwidget_mousemoveevent_callback = nullptr;
        qtermwidget_wheelevent_callback = nullptr;
        qtermwidget_keypressevent_callback = nullptr;
        qtermwidget_keyreleaseevent_callback = nullptr;
        qtermwidget_focusinevent_callback = nullptr;
        qtermwidget_focusoutevent_callback = nullptr;
        qtermwidget_enterevent_callback = nullptr;
        qtermwidget_leaveevent_callback = nullptr;
        qtermwidget_paintevent_callback = nullptr;
        qtermwidget_moveevent_callback = nullptr;
        qtermwidget_closeevent_callback = nullptr;
        qtermwidget_contextmenuevent_callback = nullptr;
        qtermwidget_tabletevent_callback = nullptr;
        qtermwidget_actionevent_callback = nullptr;
        qtermwidget_dragenterevent_callback = nullptr;
        qtermwidget_dragmoveevent_callback = nullptr;
        qtermwidget_dragleaveevent_callback = nullptr;
        qtermwidget_dropevent_callback = nullptr;
        qtermwidget_showevent_callback = nullptr;
        qtermwidget_hideevent_callback = nullptr;
        qtermwidget_nativeevent_callback = nullptr;
        qtermwidget_changeevent_callback = nullptr;
        qtermwidget_metric_callback = nullptr;
        qtermwidget_initpainter_callback = nullptr;
        qtermwidget_redirected_callback = nullptr;
        qtermwidget_sharedpainter_callback = nullptr;
        qtermwidget_inputmethodevent_callback = nullptr;
        qtermwidget_inputmethodquery_callback = nullptr;
        qtermwidget_focusnextprevchild_callback = nullptr;
        qtermwidget_eventfilter_callback = nullptr;
        qtermwidget_timerevent_callback = nullptr;
        qtermwidget_childevent_callback = nullptr;
        qtermwidget_customevent_callback = nullptr;
        qtermwidget_connectnotify_callback = nullptr;
        qtermwidget_disconnectnotify_callback = nullptr;
        qtermwidget_sessionfinished_callback = nullptr;
        qtermwidget_selectionchanged_callback = nullptr;
        qtermwidget_updatemicrofocus_callback = nullptr;
        qtermwidget_create_callback = nullptr;
        qtermwidget_destroy_callback = nullptr;
        qtermwidget_focusnextchild_callback = nullptr;
        qtermwidget_focuspreviouschild_callback = nullptr;
        qtermwidget_sender_callback = nullptr;
        qtermwidget_sendersignalindex_callback = nullptr;
        qtermwidget_receivers_callback = nullptr;
        qtermwidget_issignalconnected_callback = nullptr;
        qtermwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtermwidget_metacall_isbase) {
            qtermwidget_metacall_isbase = false;
            return QTermWidget::qt_metacall(param1, param2, param3);
        } else if (qtermwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtermwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtermwidget_sizehint_isbase) {
            qtermwidget_sizehint_isbase = false;
            return QTermWidget::sizeHint();
        } else if (qtermwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qtermwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QTermWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalSizeHint(bool enabled) override {
        if (qtermwidget_setterminalsizehint_isbase) {
            qtermwidget_setterminalsizehint_isbase = false;
            QTermWidget::setTerminalSizeHint(enabled);
        } else if (qtermwidget_setterminalsizehint_callback != nullptr) {
            bool cbval1 = enabled;

            qtermwidget_setterminalsizehint_callback(this, cbval1);
        } else {
            QTermWidget::setTerminalSizeHint(enabled);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool terminalSizeHint() override {
        if (qtermwidget_terminalsizehint_isbase) {
            qtermwidget_terminalsizehint_isbase = false;
            return QTermWidget::terminalSizeHint();
        } else if (qtermwidget_terminalsizehint_callback != nullptr) {
            bool callback_ret = qtermwidget_terminalsizehint_callback();
            return callback_ret;
        } else {
            return QTermWidget::terminalSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startShellProgram() override {
        if (qtermwidget_startshellprogram_isbase) {
            qtermwidget_startshellprogram_isbase = false;
            QTermWidget::startShellProgram();
        } else if (qtermwidget_startshellprogram_callback != nullptr) {
            qtermwidget_startshellprogram_callback();
        } else {
            QTermWidget::startShellProgram();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startTerminalTeletype() override {
        if (qtermwidget_startterminalteletype_isbase) {
            qtermwidget_startterminalteletype_isbase = false;
            QTermWidget::startTerminalTeletype();
        } else if (qtermwidget_startterminalteletype_callback != nullptr) {
            qtermwidget_startterminalteletype_callback();
        } else {
            QTermWidget::startTerminalTeletype();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int getShellPID() override {
        if (qtermwidget_getshellpid_isbase) {
            qtermwidget_getshellpid_isbase = false;
            return QTermWidget::getShellPID();
        } else if (qtermwidget_getshellpid_callback != nullptr) {
            int callback_ret = qtermwidget_getshellpid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::getShellPID();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int getForegroundProcessId() override {
        if (qtermwidget_getforegroundprocessid_isbase) {
            qtermwidget_getforegroundprocessid_isbase = false;
            return QTermWidget::getForegroundProcessId();
        } else if (qtermwidget_getforegroundprocessid_callback != nullptr) {
            int callback_ret = qtermwidget_getforegroundprocessid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::getForegroundProcessId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeDir(const QString& dir) override {
        if (qtermwidget_changedir_isbase) {
            qtermwidget_changedir_isbase = false;
            QTermWidget::changeDir(dir);
        } else if (qtermwidget_changedir_callback != nullptr) {
            const QString dir_ret = dir;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dir_b = dir_ret.toUtf8();
            libqt_string dir_str;
            dir_str.len = dir_b.length();
            dir_str.data = static_cast<const char*>(malloc(dir_str.len + 1));
            memcpy((void*)dir_str.data, dir_b.data(), dir_str.len);
            ((char*)dir_str.data)[dir_str.len] = '\0';
            libqt_string cbval1 = dir_str;

            qtermwidget_changedir_callback(this, cbval1);
        } else {
            QTermWidget::changeDir(dir);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalFont(const QFont& font) override {
        if (qtermwidget_setterminalfont_isbase) {
            qtermwidget_setterminalfont_isbase = false;
            QTermWidget::setTerminalFont(font);
        } else if (qtermwidget_setterminalfont_callback != nullptr) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);

            qtermwidget_setterminalfont_callback(this, cbval1);
        } else {
            QTermWidget::setTerminalFont(font);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont getTerminalFont() override {
        if (qtermwidget_getterminalfont_isbase) {
            qtermwidget_getterminalfont_isbase = false;
            return QTermWidget::getTerminalFont();
        } else if (qtermwidget_getterminalfont_callback != nullptr) {
            QFont* callback_ret = qtermwidget_getterminalfont_callback();
            return *callback_ret;
        } else {
            return QTermWidget::getTerminalFont();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalOpacity(qreal level) override {
        if (qtermwidget_setterminalopacity_isbase) {
            qtermwidget_setterminalopacity_isbase = false;
            QTermWidget::setTerminalOpacity(level);
        } else if (qtermwidget_setterminalopacity_callback != nullptr) {
            double cbval1 = static_cast<double>(level);

            qtermwidget_setterminalopacity_callback(this, cbval1);
        } else {
            QTermWidget::setTerminalOpacity(level);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalBackgroundImage(const QString& backgroundImage) override {
        if (qtermwidget_setterminalbackgroundimage_isbase) {
            qtermwidget_setterminalbackgroundimage_isbase = false;
            QTermWidget::setTerminalBackgroundImage(backgroundImage);
        } else if (qtermwidget_setterminalbackgroundimage_callback != nullptr) {
            const QString backgroundImage_ret = backgroundImage;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray backgroundImage_b = backgroundImage_ret.toUtf8();
            libqt_string backgroundImage_str;
            backgroundImage_str.len = backgroundImage_b.length();
            backgroundImage_str.data = static_cast<const char*>(malloc(backgroundImage_str.len + 1));
            memcpy((void*)backgroundImage_str.data, backgroundImage_b.data(), backgroundImage_str.len);
            ((char*)backgroundImage_str.data)[backgroundImage_str.len] = '\0';
            libqt_string cbval1 = backgroundImage_str;

            qtermwidget_setterminalbackgroundimage_callback(this, cbval1);
        } else {
            QTermWidget::setTerminalBackgroundImage(backgroundImage);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalBackgroundMode(int mode) override {
        if (qtermwidget_setterminalbackgroundmode_isbase) {
            qtermwidget_setterminalbackgroundmode_isbase = false;
            QTermWidget::setTerminalBackgroundMode(mode);
        } else if (qtermwidget_setterminalbackgroundmode_callback != nullptr) {
            int cbval1 = mode;

            qtermwidget_setterminalbackgroundmode_callback(this, cbval1);
        } else {
            QTermWidget::setTerminalBackgroundMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnvironment(const QList<QString>& environment) override {
        if (qtermwidget_setenvironment_isbase) {
            qtermwidget_setenvironment_isbase = false;
            QTermWidget::setEnvironment(environment);
        } else if (qtermwidget_setenvironment_callback != nullptr) {
            const QList<QString>& environment_ret = environment;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* environment_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (environment_ret.size() + 1)));
            for (qsizetype i = 0; i < environment_ret.size(); ++i) {
                QString environment_lv_ret = environment_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray environment_lv_b = environment_lv_ret.toUtf8();
                libqt_string environment_lv_str;
                environment_lv_str.len = environment_lv_b.length();
                environment_lv_str.data = static_cast<const char*>(malloc(environment_lv_str.len + 1));
                memcpy((void*)environment_lv_str.data, environment_lv_b.data(), environment_lv_str.len);
                ((char*)environment_lv_str.data)[environment_lv_str.len] = '\0';
                environment_arr[i] = environment_lv_str;
            }
            libqt_list environment_out;
            environment_out.len = environment_ret.size();
            environment_out.data = static_cast<void*>(environment_arr);
            libqt_list /* of libqt_string */ cbval1 = environment_out;

            qtermwidget_setenvironment_callback(this, cbval1);
        } else {
            QTermWidget::setEnvironment(environment);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setShellProgram(const QString& program) override {
        if (qtermwidget_setshellprogram_isbase) {
            qtermwidget_setshellprogram_isbase = false;
            QTermWidget::setShellProgram(program);
        } else if (qtermwidget_setshellprogram_callback != nullptr) {
            const QString program_ret = program;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray program_b = program_ret.toUtf8();
            libqt_string program_str;
            program_str.len = program_b.length();
            program_str.data = static_cast<const char*>(malloc(program_str.len + 1));
            memcpy((void*)program_str.data, program_b.data(), program_str.len);
            ((char*)program_str.data)[program_str.len] = '\0';
            libqt_string cbval1 = program_str;

            qtermwidget_setshellprogram_callback(this, cbval1);
        } else {
            QTermWidget::setShellProgram(program);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWorkingDirectory(const QString& dir) override {
        if (qtermwidget_setworkingdirectory_isbase) {
            qtermwidget_setworkingdirectory_isbase = false;
            QTermWidget::setWorkingDirectory(dir);
        } else if (qtermwidget_setworkingdirectory_callback != nullptr) {
            const QString dir_ret = dir;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dir_b = dir_ret.toUtf8();
            libqt_string dir_str;
            dir_str.len = dir_b.length();
            dir_str.data = static_cast<const char*>(malloc(dir_str.len + 1));
            memcpy((void*)dir_str.data, dir_b.data(), dir_str.len);
            ((char*)dir_str.data)[dir_str.len] = '\0';
            libqt_string cbval1 = dir_str;

            qtermwidget_setworkingdirectory_callback(this, cbval1);
        } else {
            QTermWidget::setWorkingDirectory(dir);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString workingDirectory() override {
        if (qtermwidget_workingdirectory_isbase) {
            qtermwidget_workingdirectory_isbase = false;
            return QTermWidget::workingDirectory();
        } else if (qtermwidget_workingdirectory_callback != nullptr) {
            const char* callback_ret = qtermwidget_workingdirectory_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QTermWidget::workingDirectory();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setArgs(const QList<QString>& args) override {
        if (qtermwidget_setargs_isbase) {
            qtermwidget_setargs_isbase = false;
            QTermWidget::setArgs(args);
        } else if (qtermwidget_setargs_callback != nullptr) {
            const QList<QString>& args_ret = args;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* args_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (args_ret.size() + 1)));
            for (qsizetype i = 0; i < args_ret.size(); ++i) {
                QString args_lv_ret = args_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray args_lv_b = args_lv_ret.toUtf8();
                libqt_string args_lv_str;
                args_lv_str.len = args_lv_b.length();
                args_lv_str.data = static_cast<const char*>(malloc(args_lv_str.len + 1));
                memcpy((void*)args_lv_str.data, args_lv_b.data(), args_lv_str.len);
                ((char*)args_lv_str.data)[args_lv_str.len] = '\0';
                args_arr[i] = args_lv_str;
            }
            libqt_list args_out;
            args_out.len = args_ret.size();
            args_out.data = static_cast<void*>(args_arr);
            libqt_list /* of libqt_string */ cbval1 = args_out;

            qtermwidget_setargs_callback(this, cbval1);
        } else {
            QTermWidget::setArgs(args);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColorScheme(const QString& name) override {
        if (qtermwidget_setcolorscheme_isbase) {
            qtermwidget_setcolorscheme_isbase = false;
            QTermWidget::setColorScheme(name);
        } else if (qtermwidget_setcolorscheme_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            qtermwidget_setcolorscheme_callback(this, cbval1);
        } else {
            QTermWidget::setColorScheme(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> getAvailableColorSchemes() override {
        if (qtermwidget_getavailablecolorschemes_isbase) {
            qtermwidget_getavailablecolorschemes_isbase = false;
            return QTermWidget::getAvailableColorSchemes();
        } else if (qtermwidget_getavailablecolorschemes_callback != nullptr) {
            const char** callback_ret = qtermwidget_getavailablecolorschemes_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QTermWidget::getAvailableColorSchemes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHistorySize(int lines) override {
        if (qtermwidget_sethistorysize_isbase) {
            qtermwidget_sethistorysize_isbase = false;
            QTermWidget::setHistorySize(lines);
        } else if (qtermwidget_sethistorysize_callback != nullptr) {
            int cbval1 = lines;

            qtermwidget_sethistorysize_callback(this, cbval1);
        } else {
            QTermWidget::setHistorySize(lines);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int historySize() const override {
        if (qtermwidget_historysize_isbase) {
            qtermwidget_historysize_isbase = false;
            return QTermWidget::historySize();
        } else if (qtermwidget_historysize_callback != nullptr) {
            int callback_ret = qtermwidget_historysize_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::historySize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setScrollBarPosition(QTermWidgetInterface::ScrollBarPosition scrollBarPosition) override {
        if (qtermwidget_setscrollbarposition_isbase) {
            qtermwidget_setscrollbarposition_isbase = false;
            QTermWidget::setScrollBarPosition(scrollBarPosition);
        } else if (qtermwidget_setscrollbarposition_callback != nullptr) {
            int cbval1 = static_cast<int>(scrollBarPosition);

            qtermwidget_setscrollbarposition_callback(this, cbval1);
        } else {
            QTermWidget::setScrollBarPosition(scrollBarPosition);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollToEnd() override {
        if (qtermwidget_scrolltoend_isbase) {
            qtermwidget_scrolltoend_isbase = false;
            QTermWidget::scrollToEnd();
        } else if (qtermwidget_scrolltoend_callback != nullptr) {
            qtermwidget_scrolltoend_callback();
        } else {
            QTermWidget::scrollToEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendText(const QString& text) override {
        if (qtermwidget_sendtext_isbase) {
            qtermwidget_sendtext_isbase = false;
            QTermWidget::sendText(text);
        } else if (qtermwidget_sendtext_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            qtermwidget_sendtext_callback(this, cbval1);
        } else {
            QTermWidget::sendText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendKeyEvent(QKeyEvent* e) override {
        if (qtermwidget_sendkeyevent_isbase) {
            qtermwidget_sendkeyevent_isbase = false;
            QTermWidget::sendKeyEvent(e);
        } else if (qtermwidget_sendkeyevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qtermwidget_sendkeyevent_callback(this, cbval1);
        } else {
            QTermWidget::sendKeyEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFlowControlEnabled(bool enabled) override {
        if (qtermwidget_setflowcontrolenabled_isbase) {
            qtermwidget_setflowcontrolenabled_isbase = false;
            QTermWidget::setFlowControlEnabled(enabled);
        } else if (qtermwidget_setflowcontrolenabled_callback != nullptr) {
            bool cbval1 = enabled;

            qtermwidget_setflowcontrolenabled_callback(this, cbval1);
        } else {
            QTermWidget::setFlowControlEnabled(enabled);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool flowControlEnabled() override {
        if (qtermwidget_flowcontrolenabled_isbase) {
            qtermwidget_flowcontrolenabled_isbase = false;
            return QTermWidget::flowControlEnabled();
        } else if (qtermwidget_flowcontrolenabled_callback != nullptr) {
            bool callback_ret = qtermwidget_flowcontrolenabled_callback();
            return callback_ret;
        } else {
            return QTermWidget::flowControlEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFlowControlWarningEnabled(bool enabled) override {
        if (qtermwidget_setflowcontrolwarningenabled_isbase) {
            qtermwidget_setflowcontrolwarningenabled_isbase = false;
            QTermWidget::setFlowControlWarningEnabled(enabled);
        } else if (qtermwidget_setflowcontrolwarningenabled_callback != nullptr) {
            bool cbval1 = enabled;

            qtermwidget_setflowcontrolwarningenabled_callback(this, cbval1);
        } else {
            QTermWidget::setFlowControlWarningEnabled(enabled);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString keyBindings() override {
        if (qtermwidget_keybindings_isbase) {
            qtermwidget_keybindings_isbase = false;
            return QTermWidget::keyBindings();
        } else if (qtermwidget_keybindings_callback != nullptr) {
            const char* callback_ret = qtermwidget_keybindings_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QTermWidget::keyBindings();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMotionAfterPasting(int motionAfterPasting) override {
        if (qtermwidget_setmotionafterpasting_isbase) {
            qtermwidget_setmotionafterpasting_isbase = false;
            QTermWidget::setMotionAfterPasting(motionAfterPasting);
        } else if (qtermwidget_setmotionafterpasting_callback != nullptr) {
            int cbval1 = motionAfterPasting;

            qtermwidget_setmotionafterpasting_callback(this, cbval1);
        } else {
            QTermWidget::setMotionAfterPasting(motionAfterPasting);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int historyLinesCount() override {
        if (qtermwidget_historylinescount_isbase) {
            qtermwidget_historylinescount_isbase = false;
            return QTermWidget::historyLinesCount();
        } else if (qtermwidget_historylinescount_callback != nullptr) {
            int callback_ret = qtermwidget_historylinescount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::historyLinesCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int screenColumnsCount() override {
        if (qtermwidget_screencolumnscount_isbase) {
            qtermwidget_screencolumnscount_isbase = false;
            return QTermWidget::screenColumnsCount();
        } else if (qtermwidget_screencolumnscount_callback != nullptr) {
            int callback_ret = qtermwidget_screencolumnscount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::screenColumnsCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int screenLinesCount() override {
        if (qtermwidget_screenlinescount_isbase) {
            qtermwidget_screenlinescount_isbase = false;
            return QTermWidget::screenLinesCount();
        } else if (qtermwidget_screenlinescount_callback != nullptr) {
            int callback_ret = qtermwidget_screenlinescount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::screenLinesCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionStart(int row, int column) override {
        if (qtermwidget_setselectionstart_isbase) {
            qtermwidget_setselectionstart_isbase = false;
            QTermWidget::setSelectionStart(row, column);
        } else if (qtermwidget_setselectionstart_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            qtermwidget_setselectionstart_callback(this, cbval1, cbval2);
        } else {
            QTermWidget::setSelectionStart(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionEnd(int row, int column) override {
        if (qtermwidget_setselectionend_isbase) {
            qtermwidget_setselectionend_isbase = false;
            QTermWidget::setSelectionEnd(row, column);
        } else if (qtermwidget_setselectionend_callback != nullptr) {
            int cbval1 = row;
            int cbval2 = column;

            qtermwidget_setselectionend_callback(this, cbval1, cbval2);
        } else {
            QTermWidget::setSelectionEnd(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getSelectionStart(int& row, int& column) override {
        if (qtermwidget_getselectionstart_isbase) {
            qtermwidget_getselectionstart_isbase = false;
            QTermWidget::getSelectionStart(row, column);
        } else if (qtermwidget_getselectionstart_callback != nullptr) {
            int* cbval1 = &row;
            int* cbval2 = &column;

            qtermwidget_getselectionstart_callback(this, cbval1, cbval2);
        } else {
            QTermWidget::getSelectionStart(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getSelectionEnd(int& row, int& column) override {
        if (qtermwidget_getselectionend_isbase) {
            qtermwidget_getselectionend_isbase = false;
            QTermWidget::getSelectionEnd(row, column);
        } else if (qtermwidget_getselectionend_callback != nullptr) {
            int* cbval1 = &row;
            int* cbval2 = &column;

            qtermwidget_getselectionend_callback(this, cbval1, cbval2);
        } else {
            QTermWidget::getSelectionEnd(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString selectedText(bool preserveLineBreaks) override {
        if (qtermwidget_selectedtext_isbase) {
            qtermwidget_selectedtext_isbase = false;
            return QTermWidget::selectedText(preserveLineBreaks);
        } else if (qtermwidget_selectedtext_callback != nullptr) {
            bool cbval1 = preserveLineBreaks;

            const char* callback_ret = qtermwidget_selectedtext_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QTermWidget::selectedText(preserveLineBreaks);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMonitorActivity(bool monitorActivity) override {
        if (qtermwidget_setmonitoractivity_isbase) {
            qtermwidget_setmonitoractivity_isbase = false;
            QTermWidget::setMonitorActivity(monitorActivity);
        } else if (qtermwidget_setmonitoractivity_callback != nullptr) {
            bool cbval1 = monitorActivity;

            qtermwidget_setmonitoractivity_callback(this, cbval1);
        } else {
            QTermWidget::setMonitorActivity(monitorActivity);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMonitorSilence(bool monitorSilence) override {
        if (qtermwidget_setmonitorsilence_isbase) {
            qtermwidget_setmonitorsilence_isbase = false;
            QTermWidget::setMonitorSilence(monitorSilence);
        } else if (qtermwidget_setmonitorsilence_callback != nullptr) {
            bool cbval1 = monitorSilence;

            qtermwidget_setmonitorsilence_callback(this, cbval1);
        } else {
            QTermWidget::setMonitorSilence(monitorSilence);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSilenceTimeout(int seconds) override {
        if (qtermwidget_setsilencetimeout_isbase) {
            qtermwidget_setsilencetimeout_isbase = false;
            QTermWidget::setSilenceTimeout(seconds);
        } else if (qtermwidget_setsilencetimeout_callback != nullptr) {
            int cbval1 = seconds;

            qtermwidget_setsilencetimeout_callback(this, cbval1);
        } else {
            QTermWidget::setSilenceTimeout(seconds);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> filterActions(const QPoint& position) override {
        if (qtermwidget_filteractions_isbase) {
            qtermwidget_filteractions_isbase = false;
            return QTermWidget::filterActions(position);
        } else if (qtermwidget_filteractions_callback != nullptr) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);

            QAction** callback_ret = qtermwidget_filteractions_callback(this, cbval1);
            QList<QAction*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QAction** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QTermWidget::filterActions(position);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int getPtySlaveFd() const override {
        if (qtermwidget_getptyslavefd_isbase) {
            qtermwidget_getptyslavefd_isbase = false;
            return QTermWidget::getPtySlaveFd();
        } else if (qtermwidget_getptyslavefd_callback != nullptr) {
            int callback_ret = qtermwidget_getptyslavefd_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::getPtySlaveFd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBlinkingCursor(bool blink) override {
        if (qtermwidget_setblinkingcursor_isbase) {
            qtermwidget_setblinkingcursor_isbase = false;
            QTermWidget::setBlinkingCursor(blink);
        } else if (qtermwidget_setblinkingcursor_callback != nullptr) {
            bool cbval1 = blink;

            qtermwidget_setblinkingcursor_callback(this, cbval1);
        } else {
            QTermWidget::setBlinkingCursor(blink);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBidiEnabled(bool enabled) override {
        if (qtermwidget_setbidienabled_isbase) {
            qtermwidget_setbidienabled_isbase = false;
            QTermWidget::setBidiEnabled(enabled);
        } else if (qtermwidget_setbidienabled_callback != nullptr) {
            bool cbval1 = enabled;

            qtermwidget_setbidienabled_callback(this, cbval1);
        } else {
            QTermWidget::setBidiEnabled(enabled);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBidiEnabled() override {
        if (qtermwidget_isbidienabled_isbase) {
            qtermwidget_isbidienabled_isbase = false;
            return QTermWidget::isBidiEnabled();
        } else if (qtermwidget_isbidienabled_callback != nullptr) {
            bool callback_ret = qtermwidget_isbidienabled_callback();
            return callback_ret;
        } else {
            return QTermWidget::isBidiEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoClose(bool autoClose) override {
        if (qtermwidget_setautoclose_isbase) {
            qtermwidget_setautoclose_isbase = false;
            QTermWidget::setAutoClose(autoClose);
        } else if (qtermwidget_setautoclose_callback != nullptr) {
            bool cbval1 = autoClose;

            qtermwidget_setautoclose_callback(this, cbval1);
        } else {
            QTermWidget::setAutoClose(autoClose);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString title() const override {
        if (qtermwidget_title_isbase) {
            qtermwidget_title_isbase = false;
            return QTermWidget::title();
        } else if (qtermwidget_title_callback != nullptr) {
            const char* callback_ret = qtermwidget_title_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QTermWidget::title();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString icon() const override {
        if (qtermwidget_icon_isbase) {
            qtermwidget_icon_isbase = false;
            return QTermWidget::icon();
        } else if (qtermwidget_icon_callback != nullptr) {
            const char* callback_ret = qtermwidget_icon_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QTermWidget::icon();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTitleChanged() const override {
        if (qtermwidget_istitlechanged_isbase) {
            qtermwidget_istitlechanged_isbase = false;
            return QTermWidget::isTitleChanged();
        } else if (qtermwidget_istitlechanged_callback != nullptr) {
            bool callback_ret = qtermwidget_istitlechanged_callback();
            return callback_ret;
        } else {
            return QTermWidget::isTitleChanged();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void bracketText(QString& text) override {
        if (qtermwidget_brackettext_isbase) {
            qtermwidget_brackettext_isbase = false;
            QTermWidget::bracketText(text);
        } else if (qtermwidget_brackettext_callback != nullptr) {
            QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            qtermwidget_brackettext_callback(this, cbval1);
        } else {
            QTermWidget::bracketText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disableBracketedPasteMode(bool disable) override {
        if (qtermwidget_disablebracketedpastemode_isbase) {
            qtermwidget_disablebracketedpastemode_isbase = false;
            QTermWidget::disableBracketedPasteMode(disable);
        } else if (qtermwidget_disablebracketedpastemode_callback != nullptr) {
            bool cbval1 = disable;

            qtermwidget_disablebracketedpastemode_callback(this, cbval1);
        } else {
            QTermWidget::disableBracketedPasteMode(disable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bracketedPasteModeIsDisabled() const override {
        if (qtermwidget_bracketedpastemodeisdisabled_isbase) {
            qtermwidget_bracketedpastemodeisdisabled_isbase = false;
            return QTermWidget::bracketedPasteModeIsDisabled();
        } else if (qtermwidget_bracketedpastemodeisdisabled_callback != nullptr) {
            bool callback_ret = qtermwidget_bracketedpastemodeisdisabled_callback();
            return callback_ret;
        } else {
            return QTermWidget::bracketedPasteModeIsDisabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMargin(int margin) override {
        if (qtermwidget_setmargin_isbase) {
            qtermwidget_setmargin_isbase = false;
            QTermWidget::setMargin(margin);
        } else if (qtermwidget_setmargin_callback != nullptr) {
            int cbval1 = margin;

            qtermwidget_setmargin_callback(this, cbval1);
        } else {
            QTermWidget::setMargin(margin);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int getMargin() const override {
        if (qtermwidget_getmargin_isbase) {
            qtermwidget_getmargin_isbase = false;
            return QTermWidget::getMargin();
        } else if (qtermwidget_getmargin_callback != nullptr) {
            int callback_ret = qtermwidget_getmargin_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::getMargin();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDrawLineChars(bool drawLineChars) override {
        if (qtermwidget_setdrawlinechars_isbase) {
            qtermwidget_setdrawlinechars_isbase = false;
            QTermWidget::setDrawLineChars(drawLineChars);
        } else if (qtermwidget_setdrawlinechars_callback != nullptr) {
            bool cbval1 = drawLineChars;

            qtermwidget_setdrawlinechars_callback(this, cbval1);
        } else {
            QTermWidget::setDrawLineChars(drawLineChars);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBoldIntense(bool boldIntense) override {
        if (qtermwidget_setboldintense_isbase) {
            qtermwidget_setboldintense_isbase = false;
            QTermWidget::setBoldIntense(boldIntense);
        } else if (qtermwidget_setboldintense_callback != nullptr) {
            bool cbval1 = boldIntense;

            qtermwidget_setboldintense_callback(this, cbval1);
        } else {
            QTermWidget::setBoldIntense(boldIntense);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setConfirmMultilinePaste(bool confirmMultilinePaste) override {
        if (qtermwidget_setconfirmmultilinepaste_isbase) {
            qtermwidget_setconfirmmultilinepaste_isbase = false;
            QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
        } else if (qtermwidget_setconfirmmultilinepaste_callback != nullptr) {
            bool cbval1 = confirmMultilinePaste;

            qtermwidget_setconfirmmultilinepaste_callback(this, cbval1);
        } else {
            QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTrimPastedTrailingNewlines(bool trimPastedTrailingNewlines) override {
        if (qtermwidget_settrimpastedtrailingnewlines_isbase) {
            qtermwidget_settrimpastedtrailingnewlines_isbase = false;
            QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
        } else if (qtermwidget_settrimpastedtrailingnewlines_callback != nullptr) {
            bool cbval1 = trimPastedTrailingNewlines;

            qtermwidget_settrimpastedtrailingnewlines_callback(this, cbval1);
        } else {
            QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString wordCharacters() const override {
        if (qtermwidget_wordcharacters_isbase) {
            qtermwidget_wordcharacters_isbase = false;
            return QTermWidget::wordCharacters();
        } else if (qtermwidget_wordcharacters_callback != nullptr) {
            const char* callback_ret = qtermwidget_wordcharacters_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QTermWidget::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWordCharacters(const QString& chars) override {
        if (qtermwidget_setwordcharacters_isbase) {
            qtermwidget_setwordcharacters_isbase = false;
            QTermWidget::setWordCharacters(chars);
        } else if (qtermwidget_setwordcharacters_callback != nullptr) {
            const QString chars_ret = chars;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray chars_b = chars_ret.toUtf8();
            libqt_string chars_str;
            chars_str.len = chars_b.length();
            chars_str.data = static_cast<const char*>(malloc(chars_str.len + 1));
            memcpy((void*)chars_str.data, chars_b.data(), chars_str.len);
            ((char*)chars_str.data)[chars_str.len] = '\0';
            libqt_string cbval1 = chars_str;

            qtermwidget_setwordcharacters_callback(this, cbval1);
        } else {
            QTermWidget::setWordCharacters(chars);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QTermWidgetInterface* createWidget(int startnow) const override {
        if (qtermwidget_createwidget_isbase) {
            qtermwidget_createwidget_isbase = false;
            return QTermWidget::createWidget(startnow);
        } else if (qtermwidget_createwidget_callback != nullptr) {
            int cbval1 = startnow;

            QTermWidgetInterface* callback_ret = qtermwidget_createwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTermWidget::createWidget(startnow);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qtermwidget_resizeevent_isbase) {
            qtermwidget_resizeevent_isbase = false;
            QTermWidget::resizeEvent(param1);
        } else if (qtermwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qtermwidget_resizeevent_callback(this, cbval1);
        } else {
            QTermWidget::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtermwidget_devtype_isbase) {
            qtermwidget_devtype_isbase = false;
            return QTermWidget::devType();
        } else if (qtermwidget_devtype_callback != nullptr) {
            int callback_ret = qtermwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtermwidget_setvisible_isbase) {
            qtermwidget_setvisible_isbase = false;
            QTermWidget::setVisible(visible);
        } else if (qtermwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qtermwidget_setvisible_callback(this, cbval1);
        } else {
            QTermWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtermwidget_minimumsizehint_isbase) {
            qtermwidget_minimumsizehint_isbase = false;
            return QTermWidget::minimumSizeHint();
        } else if (qtermwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qtermwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QTermWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtermwidget_heightforwidth_isbase) {
            qtermwidget_heightforwidth_isbase = false;
            return QTermWidget::heightForWidth(param1);
        } else if (qtermwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qtermwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtermwidget_hasheightforwidth_isbase) {
            qtermwidget_hasheightforwidth_isbase = false;
            return QTermWidget::hasHeightForWidth();
        } else if (qtermwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qtermwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QTermWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtermwidget_paintengine_isbase) {
            qtermwidget_paintengine_isbase = false;
            return QTermWidget::paintEngine();
        } else if (qtermwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qtermwidget_paintengine_callback();
            return callback_ret;
        } else {
            return QTermWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtermwidget_event_isbase) {
            qtermwidget_event_isbase = false;
            return QTermWidget::event(event);
        } else if (qtermwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtermwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTermWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtermwidget_mousepressevent_isbase) {
            qtermwidget_mousepressevent_isbase = false;
            QTermWidget::mousePressEvent(event);
        } else if (qtermwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtermwidget_mousepressevent_callback(this, cbval1);
        } else {
            QTermWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtermwidget_mousereleaseevent_isbase) {
            qtermwidget_mousereleaseevent_isbase = false;
            QTermWidget::mouseReleaseEvent(event);
        } else if (qtermwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtermwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QTermWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtermwidget_mousedoubleclickevent_isbase) {
            qtermwidget_mousedoubleclickevent_isbase = false;
            QTermWidget::mouseDoubleClickEvent(event);
        } else if (qtermwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtermwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QTermWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtermwidget_mousemoveevent_isbase) {
            qtermwidget_mousemoveevent_isbase = false;
            QTermWidget::mouseMoveEvent(event);
        } else if (qtermwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtermwidget_mousemoveevent_callback(this, cbval1);
        } else {
            QTermWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtermwidget_wheelevent_isbase) {
            qtermwidget_wheelevent_isbase = false;
            QTermWidget::wheelEvent(event);
        } else if (qtermwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qtermwidget_wheelevent_callback(this, cbval1);
        } else {
            QTermWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtermwidget_keypressevent_isbase) {
            qtermwidget_keypressevent_isbase = false;
            QTermWidget::keyPressEvent(event);
        } else if (qtermwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtermwidget_keypressevent_callback(this, cbval1);
        } else {
            QTermWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtermwidget_keyreleaseevent_isbase) {
            qtermwidget_keyreleaseevent_isbase = false;
            QTermWidget::keyReleaseEvent(event);
        } else if (qtermwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtermwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QTermWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtermwidget_focusinevent_isbase) {
            qtermwidget_focusinevent_isbase = false;
            QTermWidget::focusInEvent(event);
        } else if (qtermwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtermwidget_focusinevent_callback(this, cbval1);
        } else {
            QTermWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtermwidget_focusoutevent_isbase) {
            qtermwidget_focusoutevent_isbase = false;
            QTermWidget::focusOutEvent(event);
        } else if (qtermwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtermwidget_focusoutevent_callback(this, cbval1);
        } else {
            QTermWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtermwidget_enterevent_isbase) {
            qtermwidget_enterevent_isbase = false;
            QTermWidget::enterEvent(event);
        } else if (qtermwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qtermwidget_enterevent_callback(this, cbval1);
        } else {
            QTermWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtermwidget_leaveevent_isbase) {
            qtermwidget_leaveevent_isbase = false;
            QTermWidget::leaveEvent(event);
        } else if (qtermwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtermwidget_leaveevent_callback(this, cbval1);
        } else {
            QTermWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtermwidget_paintevent_isbase) {
            qtermwidget_paintevent_isbase = false;
            QTermWidget::paintEvent(event);
        } else if (qtermwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qtermwidget_paintevent_callback(this, cbval1);
        } else {
            QTermWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtermwidget_moveevent_isbase) {
            qtermwidget_moveevent_isbase = false;
            QTermWidget::moveEvent(event);
        } else if (qtermwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qtermwidget_moveevent_callback(this, cbval1);
        } else {
            QTermWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtermwidget_closeevent_isbase) {
            qtermwidget_closeevent_isbase = false;
            QTermWidget::closeEvent(event);
        } else if (qtermwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qtermwidget_closeevent_callback(this, cbval1);
        } else {
            QTermWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtermwidget_contextmenuevent_isbase) {
            qtermwidget_contextmenuevent_isbase = false;
            QTermWidget::contextMenuEvent(event);
        } else if (qtermwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qtermwidget_contextmenuevent_callback(this, cbval1);
        } else {
            QTermWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtermwidget_tabletevent_isbase) {
            qtermwidget_tabletevent_isbase = false;
            QTermWidget::tabletEvent(event);
        } else if (qtermwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qtermwidget_tabletevent_callback(this, cbval1);
        } else {
            QTermWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtermwidget_actionevent_isbase) {
            qtermwidget_actionevent_isbase = false;
            QTermWidget::actionEvent(event);
        } else if (qtermwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qtermwidget_actionevent_callback(this, cbval1);
        } else {
            QTermWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtermwidget_dragenterevent_isbase) {
            qtermwidget_dragenterevent_isbase = false;
            QTermWidget::dragEnterEvent(event);
        } else if (qtermwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qtermwidget_dragenterevent_callback(this, cbval1);
        } else {
            QTermWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtermwidget_dragmoveevent_isbase) {
            qtermwidget_dragmoveevent_isbase = false;
            QTermWidget::dragMoveEvent(event);
        } else if (qtermwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qtermwidget_dragmoveevent_callback(this, cbval1);
        } else {
            QTermWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtermwidget_dragleaveevent_isbase) {
            qtermwidget_dragleaveevent_isbase = false;
            QTermWidget::dragLeaveEvent(event);
        } else if (qtermwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qtermwidget_dragleaveevent_callback(this, cbval1);
        } else {
            QTermWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtermwidget_dropevent_isbase) {
            qtermwidget_dropevent_isbase = false;
            QTermWidget::dropEvent(event);
        } else if (qtermwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qtermwidget_dropevent_callback(this, cbval1);
        } else {
            QTermWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtermwidget_showevent_isbase) {
            qtermwidget_showevent_isbase = false;
            QTermWidget::showEvent(event);
        } else if (qtermwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qtermwidget_showevent_callback(this, cbval1);
        } else {
            QTermWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtermwidget_hideevent_isbase) {
            qtermwidget_hideevent_isbase = false;
            QTermWidget::hideEvent(event);
        } else if (qtermwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qtermwidget_hideevent_callback(this, cbval1);
        } else {
            QTermWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtermwidget_nativeevent_isbase) {
            qtermwidget_nativeevent_isbase = false;
            return QTermWidget::nativeEvent(eventType, message, result);
        } else if (qtermwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = qtermwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTermWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtermwidget_changeevent_isbase) {
            qtermwidget_changeevent_isbase = false;
            QTermWidget::changeEvent(param1);
        } else if (qtermwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qtermwidget_changeevent_callback(this, cbval1);
        } else {
            QTermWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtermwidget_metric_isbase) {
            qtermwidget_metric_isbase = false;
            return QTermWidget::metric(param1);
        } else if (qtermwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qtermwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtermwidget_initpainter_isbase) {
            qtermwidget_initpainter_isbase = false;
            QTermWidget::initPainter(painter);
        } else if (qtermwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qtermwidget_initpainter_callback(this, cbval1);
        } else {
            QTermWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtermwidget_redirected_isbase) {
            qtermwidget_redirected_isbase = false;
            return QTermWidget::redirected(offset);
        } else if (qtermwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qtermwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTermWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtermwidget_sharedpainter_isbase) {
            qtermwidget_sharedpainter_isbase = false;
            return QTermWidget::sharedPainter();
        } else if (qtermwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qtermwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QTermWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtermwidget_inputmethodevent_isbase) {
            qtermwidget_inputmethodevent_isbase = false;
            QTermWidget::inputMethodEvent(param1);
        } else if (qtermwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qtermwidget_inputmethodevent_callback(this, cbval1);
        } else {
            QTermWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtermwidget_inputmethodquery_isbase) {
            qtermwidget_inputmethodquery_isbase = false;
            return QTermWidget::inputMethodQuery(param1);
        } else if (qtermwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qtermwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTermWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtermwidget_focusnextprevchild_isbase) {
            qtermwidget_focusnextprevchild_isbase = false;
            return QTermWidget::focusNextPrevChild(next);
        } else if (qtermwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qtermwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTermWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtermwidget_eventfilter_isbase) {
            qtermwidget_eventfilter_isbase = false;
            return QTermWidget::eventFilter(watched, event);
        } else if (qtermwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtermwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTermWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtermwidget_timerevent_isbase) {
            qtermwidget_timerevent_isbase = false;
            QTermWidget::timerEvent(event);
        } else if (qtermwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtermwidget_timerevent_callback(this, cbval1);
        } else {
            QTermWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtermwidget_childevent_isbase) {
            qtermwidget_childevent_isbase = false;
            QTermWidget::childEvent(event);
        } else if (qtermwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtermwidget_childevent_callback(this, cbval1);
        } else {
            QTermWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtermwidget_customevent_isbase) {
            qtermwidget_customevent_isbase = false;
            QTermWidget::customEvent(event);
        } else if (qtermwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtermwidget_customevent_callback(this, cbval1);
        } else {
            QTermWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtermwidget_connectnotify_isbase) {
            qtermwidget_connectnotify_isbase = false;
            QTermWidget::connectNotify(signal);
        } else if (qtermwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtermwidget_connectnotify_callback(this, cbval1);
        } else {
            QTermWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtermwidget_disconnectnotify_isbase) {
            qtermwidget_disconnectnotify_isbase = false;
            QTermWidget::disconnectNotify(signal);
        } else if (qtermwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtermwidget_disconnectnotify_callback(this, cbval1);
        } else {
            QTermWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void sessionFinished() {
        if (qtermwidget_sessionfinished_isbase) {
            qtermwidget_sessionfinished_isbase = false;
            QTermWidget::sessionFinished();
        } else if (qtermwidget_sessionfinished_callback != nullptr) {
            qtermwidget_sessionfinished_callback();
        } else {
            QTermWidget::sessionFinished();
        }
    }

    // Virtual method for C ABI access and custom callback
    void selectionChanged(bool textSelected) {
        if (qtermwidget_selectionchanged_isbase) {
            qtermwidget_selectionchanged_isbase = false;
            QTermWidget::selectionChanged(textSelected);
        } else if (qtermwidget_selectionchanged_callback != nullptr) {
            bool cbval1 = textSelected;

            qtermwidget_selectionchanged_callback(this, cbval1);
        } else {
            QTermWidget::selectionChanged(textSelected);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtermwidget_updatemicrofocus_isbase) {
            qtermwidget_updatemicrofocus_isbase = false;
            QTermWidget::updateMicroFocus();
        } else if (qtermwidget_updatemicrofocus_callback != nullptr) {
            qtermwidget_updatemicrofocus_callback();
        } else {
            QTermWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtermwidget_create_isbase) {
            qtermwidget_create_isbase = false;
            QTermWidget::create();
        } else if (qtermwidget_create_callback != nullptr) {
            qtermwidget_create_callback();
        } else {
            QTermWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtermwidget_destroy_isbase) {
            qtermwidget_destroy_isbase = false;
            QTermWidget::destroy();
        } else if (qtermwidget_destroy_callback != nullptr) {
            qtermwidget_destroy_callback();
        } else {
            QTermWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtermwidget_focusnextchild_isbase) {
            qtermwidget_focusnextchild_isbase = false;
            return QTermWidget::focusNextChild();
        } else if (qtermwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qtermwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QTermWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtermwidget_focuspreviouschild_isbase) {
            qtermwidget_focuspreviouschild_isbase = false;
            return QTermWidget::focusPreviousChild();
        } else if (qtermwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qtermwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QTermWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtermwidget_sender_isbase) {
            qtermwidget_sender_isbase = false;
            return QTermWidget::sender();
        } else if (qtermwidget_sender_callback != nullptr) {
            QObject* callback_ret = qtermwidget_sender_callback();
            return callback_ret;
        } else {
            return QTermWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtermwidget_sendersignalindex_isbase) {
            qtermwidget_sendersignalindex_isbase = false;
            return QTermWidget::senderSignalIndex();
        } else if (qtermwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qtermwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtermwidget_receivers_isbase) {
            qtermwidget_receivers_isbase = false;
            return QTermWidget::receivers(signal);
        } else if (qtermwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtermwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTermWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtermwidget_issignalconnected_isbase) {
            qtermwidget_issignalconnected_isbase = false;
            return QTermWidget::isSignalConnected(signal);
        } else if (qtermwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtermwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTermWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtermwidget_getdecodedmetricf_isbase) {
            qtermwidget_getdecodedmetricf_isbase = false;
            return QTermWidget::getDecodedMetricF(metricA, metricB);
        } else if (qtermwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qtermwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QTermWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void QTermWidget_ResizeEvent(QTermWidget* self, QResizeEvent* param1);
    friend void QTermWidget_QBaseResizeEvent(QTermWidget* self, QResizeEvent* param1);
    friend bool QTermWidget_Event(QTermWidget* self, QEvent* event);
    friend bool QTermWidget_QBaseEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_MousePressEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_QBaseMousePressEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_MouseReleaseEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_QBaseMouseReleaseEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_MouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_QBaseMouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_MouseMoveEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_QBaseMouseMoveEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_WheelEvent(QTermWidget* self, QWheelEvent* event);
    friend void QTermWidget_QBaseWheelEvent(QTermWidget* self, QWheelEvent* event);
    friend void QTermWidget_KeyPressEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_QBaseKeyPressEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_KeyReleaseEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_QBaseKeyReleaseEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_FocusInEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_QBaseFocusInEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_FocusOutEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_QBaseFocusOutEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_EnterEvent(QTermWidget* self, QEnterEvent* event);
    friend void QTermWidget_QBaseEnterEvent(QTermWidget* self, QEnterEvent* event);
    friend void QTermWidget_LeaveEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_QBaseLeaveEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_PaintEvent(QTermWidget* self, QPaintEvent* event);
    friend void QTermWidget_QBasePaintEvent(QTermWidget* self, QPaintEvent* event);
    friend void QTermWidget_MoveEvent(QTermWidget* self, QMoveEvent* event);
    friend void QTermWidget_QBaseMoveEvent(QTermWidget* self, QMoveEvent* event);
    friend void QTermWidget_CloseEvent(QTermWidget* self, QCloseEvent* event);
    friend void QTermWidget_QBaseCloseEvent(QTermWidget* self, QCloseEvent* event);
    friend void QTermWidget_ContextMenuEvent(QTermWidget* self, QContextMenuEvent* event);
    friend void QTermWidget_QBaseContextMenuEvent(QTermWidget* self, QContextMenuEvent* event);
    friend void QTermWidget_TabletEvent(QTermWidget* self, QTabletEvent* event);
    friend void QTermWidget_QBaseTabletEvent(QTermWidget* self, QTabletEvent* event);
    friend void QTermWidget_ActionEvent(QTermWidget* self, QActionEvent* event);
    friend void QTermWidget_QBaseActionEvent(QTermWidget* self, QActionEvent* event);
    friend void QTermWidget_DragEnterEvent(QTermWidget* self, QDragEnterEvent* event);
    friend void QTermWidget_QBaseDragEnterEvent(QTermWidget* self, QDragEnterEvent* event);
    friend void QTermWidget_DragMoveEvent(QTermWidget* self, QDragMoveEvent* event);
    friend void QTermWidget_QBaseDragMoveEvent(QTermWidget* self, QDragMoveEvent* event);
    friend void QTermWidget_DragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event);
    friend void QTermWidget_QBaseDragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event);
    friend void QTermWidget_DropEvent(QTermWidget* self, QDropEvent* event);
    friend void QTermWidget_QBaseDropEvent(QTermWidget* self, QDropEvent* event);
    friend void QTermWidget_ShowEvent(QTermWidget* self, QShowEvent* event);
    friend void QTermWidget_QBaseShowEvent(QTermWidget* self, QShowEvent* event);
    friend void QTermWidget_HideEvent(QTermWidget* self, QHideEvent* event);
    friend void QTermWidget_QBaseHideEvent(QTermWidget* self, QHideEvent* event);
    friend bool QTermWidget_NativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTermWidget_QBaseNativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QTermWidget_ChangeEvent(QTermWidget* self, QEvent* param1);
    friend void QTermWidget_QBaseChangeEvent(QTermWidget* self, QEvent* param1);
    friend int QTermWidget_Metric(const QTermWidget* self, int param1);
    friend int QTermWidget_QBaseMetric(const QTermWidget* self, int param1);
    friend void QTermWidget_InitPainter(const QTermWidget* self, QPainter* painter);
    friend void QTermWidget_QBaseInitPainter(const QTermWidget* self, QPainter* painter);
    friend QPaintDevice* QTermWidget_Redirected(const QTermWidget* self, QPoint* offset);
    friend QPaintDevice* QTermWidget_QBaseRedirected(const QTermWidget* self, QPoint* offset);
    friend QPainter* QTermWidget_SharedPainter(const QTermWidget* self);
    friend QPainter* QTermWidget_QBaseSharedPainter(const QTermWidget* self);
    friend void QTermWidget_InputMethodEvent(QTermWidget* self, QInputMethodEvent* param1);
    friend void QTermWidget_QBaseInputMethodEvent(QTermWidget* self, QInputMethodEvent* param1);
    friend bool QTermWidget_FocusNextPrevChild(QTermWidget* self, bool next);
    friend bool QTermWidget_QBaseFocusNextPrevChild(QTermWidget* self, bool next);
    friend void QTermWidget_TimerEvent(QTermWidget* self, QTimerEvent* event);
    friend void QTermWidget_QBaseTimerEvent(QTermWidget* self, QTimerEvent* event);
    friend void QTermWidget_ChildEvent(QTermWidget* self, QChildEvent* event);
    friend void QTermWidget_QBaseChildEvent(QTermWidget* self, QChildEvent* event);
    friend void QTermWidget_CustomEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_QBaseCustomEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_ConnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_QBaseConnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_DisconnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_QBaseDisconnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_SessionFinished(QTermWidget* self);
    friend void QTermWidget_QBaseSessionFinished(QTermWidget* self);
    friend void QTermWidget_SelectionChanged(QTermWidget* self, bool textSelected);
    friend void QTermWidget_QBaseSelectionChanged(QTermWidget* self, bool textSelected);
    friend void QTermWidget_UpdateMicroFocus(QTermWidget* self);
    friend void QTermWidget_QBaseUpdateMicroFocus(QTermWidget* self);
    friend void QTermWidget_Create(QTermWidget* self);
    friend void QTermWidget_QBaseCreate(QTermWidget* self);
    friend void QTermWidget_Destroy(QTermWidget* self);
    friend void QTermWidget_QBaseDestroy(QTermWidget* self);
    friend bool QTermWidget_FocusNextChild(QTermWidget* self);
    friend bool QTermWidget_QBaseFocusNextChild(QTermWidget* self);
    friend bool QTermWidget_FocusPreviousChild(QTermWidget* self);
    friend bool QTermWidget_QBaseFocusPreviousChild(QTermWidget* self);
    friend QObject* QTermWidget_Sender(const QTermWidget* self);
    friend QObject* QTermWidget_QBaseSender(const QTermWidget* self);
    friend int QTermWidget_SenderSignalIndex(const QTermWidget* self);
    friend int QTermWidget_QBaseSenderSignalIndex(const QTermWidget* self);
    friend int QTermWidget_Receivers(const QTermWidget* self, const char* signal);
    friend int QTermWidget_QBaseReceivers(const QTermWidget* self, const char* signal);
    friend bool QTermWidget_IsSignalConnected(const QTermWidget* self, const QMetaMethod* signal);
    friend bool QTermWidget_QBaseIsSignalConnected(const QTermWidget* self, const QMetaMethod* signal);
    friend double QTermWidget_GetDecodedMetricF(const QTermWidget* self, int metricA, int metricB);
    friend double QTermWidget_QBaseGetDecodedMetricF(const QTermWidget* self, int metricA, int metricB);
};

#endif
