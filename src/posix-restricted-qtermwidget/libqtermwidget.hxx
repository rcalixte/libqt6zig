#pragma once
#ifndef POSIX_RESTRICTED_QTERMWIDGET_LIBQTERMWIDGET_HXX
#define POSIX_RESTRICTED_QTERMWIDGET_LIBQTERMWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTermWidget
class VirtualQTermWidget final : public QTermWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTermWidget_MetaObject_Callback = QMetaObject* (*)(const QTermWidget*);
    using QTermWidget_Metacast_Callback = void* (*)(QTermWidget*, const char*);
    using QTermWidget_Metacall_Callback = int (*)(QTermWidget*, int, int, void**);
    using QTermWidget_SizeHint_Callback = QSize* (*)(const QTermWidget*);
    using QTermWidget_SetTerminalSizeHint_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_TerminalSizeHint_Callback = bool (*)(QTermWidget*);
    using QTermWidget_StartShellProgram_Callback = void (*)(QTermWidget*);
    using QTermWidget_StartTerminalTeletype_Callback = void (*)(QTermWidget*);
    using QTermWidget_GetShellPID_Callback = int (*)(QTermWidget*);
    using QTermWidget_GetForegroundProcessId_Callback = int (*)(QTermWidget*);
    using QTermWidget_ChangeDir_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SetTerminalFont_Callback = void (*)(QTermWidget*, QFont*);
    using QTermWidget_GetTerminalFont_Callback = QFont* (*)(QTermWidget*);
    using QTermWidget_SetTerminalOpacity_Callback = void (*)(QTermWidget*, double);
    using QTermWidget_SetTerminalBackgroundImage_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SetTerminalBackgroundMode_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_SetEnvironment_Callback = void (*)(QTermWidget*, const char**);
    using QTermWidget_SetShellProgram_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SetWorkingDirectory_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_WorkingDirectory_Callback = const char* (*)(QTermWidget*);
    using QTermWidget_SetArgs_Callback = void (*)(QTermWidget*, const char**);
    using QTermWidget_SetColorScheme_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_GetAvailableColorSchemes_Callback = const char** (*)(QTermWidget*);
    using QTermWidget_SetHistorySize_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_HistorySize_Callback = int (*)(const QTermWidget*);
    using QTermWidget_SetScrollBarPosition_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_ScrollToEnd_Callback = void (*)(QTermWidget*);
    using QTermWidget_SendText_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_SendKeyEvent_Callback = void (*)(QTermWidget*, QKeyEvent*);
    using QTermWidget_SetFlowControlEnabled_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_FlowControlEnabled_Callback = bool (*)(QTermWidget*);
    using QTermWidget_SetFlowControlWarningEnabled_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_KeyBindings_Callback = const char* (*)(QTermWidget*);
    using QTermWidget_SetMotionAfterPasting_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_HistoryLinesCount_Callback = int (*)(QTermWidget*);
    using QTermWidget_ScreenColumnsCount_Callback = int (*)(QTermWidget*);
    using QTermWidget_ScreenLinesCount_Callback = int (*)(QTermWidget*);
    using QTermWidget_SetSelectionStart_Callback = void (*)(QTermWidget*, int, int);
    using QTermWidget_SetSelectionEnd_Callback = void (*)(QTermWidget*, int, int);
    using QTermWidget_GetSelectionStart_Callback = void (*)(QTermWidget*, int*, int*);
    using QTermWidget_GetSelectionEnd_Callback = void (*)(QTermWidget*, int*, int*);
    using QTermWidget_SelectedText_Callback = const char* (*)(QTermWidget*, bool);
    using QTermWidget_SetMonitorActivity_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetMonitorSilence_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetSilenceTimeout_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_FilterActions_Callback = libqt_list /* of QAction* */ (*)(QTermWidget*, QPoint*);
    using QTermWidget_GetPtySlaveFd_Callback = int (*)(const QTermWidget*);
    using QTermWidget_SetBlinkingCursor_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetBidiEnabled_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_IsBidiEnabled_Callback = bool (*)(QTermWidget*);
    using QTermWidget_SetAutoClose_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_Title_Callback = const char* (*)(const QTermWidget*);
    using QTermWidget_Icon_Callback = const char* (*)(const QTermWidget*);
    using QTermWidget_IsTitleChanged_Callback = bool (*)(const QTermWidget*);
    using QTermWidget_BracketText_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_DisableBracketedPasteMode_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_BracketedPasteModeIsDisabled_Callback = bool (*)(const QTermWidget*);
    using QTermWidget_SetMargin_Callback = void (*)(QTermWidget*, int);
    using QTermWidget_GetMargin_Callback = int (*)(const QTermWidget*);
    using QTermWidget_SetDrawLineChars_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetBoldIntense_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetConfirmMultilinePaste_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_SetTrimPastedTrailingNewlines_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_WordCharacters_Callback = const char* (*)(const QTermWidget*);
    using QTermWidget_SetWordCharacters_Callback = void (*)(QTermWidget*, const char*);
    using QTermWidget_CreateWidget_Callback = QTermWidgetInterface* (*)(const QTermWidget*, int);
    using QTermWidget_ResizeEvent_Callback = void (*)(QTermWidget*, QResizeEvent*);
    using QTermWidget_DevType_Callback = int (*)(const QTermWidget*);
    using QTermWidget_SetVisible_Callback = void (*)(QTermWidget*, bool);
    using QTermWidget_MinimumSizeHint_Callback = QSize* (*)(const QTermWidget*);
    using QTermWidget_HeightForWidth_Callback = int (*)(const QTermWidget*, int);
    using QTermWidget_HasHeightForWidth_Callback = bool (*)(const QTermWidget*);
    using QTermWidget_PaintEngine_Callback = QPaintEngine* (*)(const QTermWidget*);
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
    using QTermWidget_SharedPainter_Callback = QPainter* (*)(const QTermWidget*);
    using QTermWidget_InputMethodEvent_Callback = void (*)(QTermWidget*, QInputMethodEvent*);
    using QTermWidget_InputMethodQuery_Callback = QVariant* (*)(const QTermWidget*, int);
    using QTermWidget_FocusNextPrevChild_Callback = bool (*)(QTermWidget*, bool);
    using QTermWidget_EventFilter_Callback = bool (*)(QTermWidget*, QObject*, QEvent*);
    using QTermWidget_TimerEvent_Callback = void (*)(QTermWidget*, QTimerEvent*);
    using QTermWidget_ChildEvent_Callback = void (*)(QTermWidget*, QChildEvent*);
    using QTermWidget_CustomEvent_Callback = void (*)(QTermWidget*, QEvent*);
    using QTermWidget_ConnectNotify_Callback = void (*)(QTermWidget*, QMetaMethod*);
    using QTermWidget_DisconnectNotify_Callback = void (*)(QTermWidget*, QMetaMethod*);
    using QTermWidget::create;
    using QTermWidget::destroy;
    using QTermWidget::focusNextChild;
    using QTermWidget::focusPreviousChild;
    using QTermWidget::getDecodedMetricF;
    using QTermWidget::isSignalConnected;
    using QTermWidget::receivers;
    using QTermWidget::selectionChanged;
    using QTermWidget::sender;
    using QTermWidget::senderSignalIndex;
    using QTermWidget::sessionFinished;
    using QTermWidget::updateMicroFocus;

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

    // Access struct
    struct Base : QTermWidget {
        using QTermWidget::actionEvent;
        using QTermWidget::changeEvent;
        using QTermWidget::childEvent;
        using QTermWidget::closeEvent;
        using QTermWidget::connectNotify;
        using QTermWidget::contextMenuEvent;
        using QTermWidget::customEvent;
        using QTermWidget::disconnectNotify;
        using QTermWidget::dragEnterEvent;
        using QTermWidget::dragLeaveEvent;
        using QTermWidget::dragMoveEvent;
        using QTermWidget::dropEvent;
        using QTermWidget::enterEvent;
        using QTermWidget::event;
        using QTermWidget::focusInEvent;
        using QTermWidget::focusNextPrevChild;
        using QTermWidget::focusOutEvent;
        using QTermWidget::hideEvent;
        using QTermWidget::initPainter;
        using QTermWidget::inputMethodEvent;
        using QTermWidget::keyPressEvent;
        using QTermWidget::keyReleaseEvent;
        using QTermWidget::leaveEvent;
        using QTermWidget::metric;
        using QTermWidget::mouseDoubleClickEvent;
        using QTermWidget::mouseMoveEvent;
        using QTermWidget::mousePressEvent;
        using QTermWidget::mouseReleaseEvent;
        using QTermWidget::moveEvent;
        using QTermWidget::nativeEvent;
        using QTermWidget::paintEvent;
        using QTermWidget::redirected;
        using QTermWidget::resizeEvent;
        using QTermWidget::sharedPainter;
        using QTermWidget::showEvent;
        using QTermWidget::tabletEvent;
        using QTermWidget::timerEvent;
        using QTermWidget::wheelEvent;
    };

    VirtualQTermWidget(QWidget* parent) : QTermWidget(parent) {};
    VirtualQTermWidget(int startnow) : QTermWidget(startnow) {};
    VirtualQTermWidget() : QTermWidget() {};
    VirtualQTermWidget(int startnow, QWidget* parent) : QTermWidget(startnow, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtermwidget_metaobject_callback) {
            QMetaObject* callback_ret = qtermwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QTermWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtermwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtermwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtermwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtermwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtermwidget_sizehint_callback) {
            QSize* callback_ret = qtermwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTermWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalSizeHint(bool enabled) override {
        if (qtermwidget_setterminalsizehint_callback) {
            bool cbval1 = enabled;
            qtermwidget_setterminalsizehint_callback(this, cbval1);
            return;
        }
        QTermWidget::setTerminalSizeHint(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool terminalSizeHint() override {
        if (qtermwidget_terminalsizehint_callback) {
            bool callback_ret = qtermwidget_terminalsizehint_callback(this);
            return callback_ret;
        }
        return QTermWidget::terminalSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void startShellProgram() override {
        if (qtermwidget_startshellprogram_callback) {
            qtermwidget_startshellprogram_callback(this);
            return;
        }
        QTermWidget::startShellProgram();
    }

    // Virtual method for C ABI access and custom callback
    virtual void startTerminalTeletype() override {
        if (qtermwidget_startterminalteletype_callback) {
            qtermwidget_startterminalteletype_callback(this);
            return;
        }
        QTermWidget::startTerminalTeletype();
    }

    // Virtual method for C ABI access and custom callback
    virtual int getShellPID() override {
        if (qtermwidget_getshellpid_callback) {
            int callback_ret = qtermwidget_getshellpid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getShellPID();
    }

    // Virtual method for C ABI access and custom callback
    virtual int getForegroundProcessId() override {
        if (qtermwidget_getforegroundprocessid_callback) {
            int callback_ret = qtermwidget_getforegroundprocessid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getForegroundProcessId();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeDir(const QString& dir) override {
        if (qtermwidget_changedir_callback) {
            const auto dir_ret = dir;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dir_b = dir_ret.toUtf8();
            auto dir_str_len = dir_b.length();
            const char* dir_str = static_cast<const char*>(malloc(dir_str_len + 1));
            memcpy((void*)dir_str, dir_b.data(), dir_str_len);
            ((char*)dir_str)[dir_str_len] = '\0';
            const char* cbval1 = dir_str;
            qtermwidget_changedir_callback(this, cbval1);
            libqt_free(dir_str);
            return;
        }
        QTermWidget::changeDir(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalFont(const QFont& font) override {
        if (qtermwidget_setterminalfont_callback) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);
            qtermwidget_setterminalfont_callback(this, cbval1);
            return;
        }
        QTermWidget::setTerminalFont(font);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont getTerminalFont() override {
        if (qtermwidget_getterminalfont_callback) {
            QFont* callback_ret = qtermwidget_getterminalfont_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTermWidget::getTerminalFont();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalOpacity(qreal level) override {
        if (qtermwidget_setterminalopacity_callback) {
            double cbval1 = static_cast<double>(level);
            qtermwidget_setterminalopacity_callback(this, cbval1);
            return;
        }
        QTermWidget::setTerminalOpacity(level);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalBackgroundImage(const QString& backgroundImage) override {
        if (qtermwidget_setterminalbackgroundimage_callback) {
            const auto backgroundImage_ret = backgroundImage;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray backgroundImage_b = backgroundImage_ret.toUtf8();
            auto backgroundImage_str_len = backgroundImage_b.length();
            const char* backgroundImage_str = static_cast<const char*>(malloc(backgroundImage_str_len + 1));
            memcpy((void*)backgroundImage_str, backgroundImage_b.data(), backgroundImage_str_len);
            ((char*)backgroundImage_str)[backgroundImage_str_len] = '\0';
            const char* cbval1 = backgroundImage_str;
            qtermwidget_setterminalbackgroundimage_callback(this, cbval1);
            libqt_free(backgroundImage_str);
            return;
        }
        QTermWidget::setTerminalBackgroundImage(backgroundImage);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTerminalBackgroundMode(int mode) override {
        if (qtermwidget_setterminalbackgroundmode_callback) {
            int cbval1 = mode;
            qtermwidget_setterminalbackgroundmode_callback(this, cbval1);
            return;
        }
        QTermWidget::setTerminalBackgroundMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEnvironment(const QList<QString>& environment) override {
        if (qtermwidget_setenvironment_callback) {
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
            qtermwidget_setenvironment_callback(this, cbval1);
            libqt_free(environment_arr);
            return;
        }
        QTermWidget::setEnvironment(environment);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setShellProgram(const QString& program) override {
        if (qtermwidget_setshellprogram_callback) {
            const auto program_ret = program;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray program_b = program_ret.toUtf8();
            auto program_str_len = program_b.length();
            const char* program_str = static_cast<const char*>(malloc(program_str_len + 1));
            memcpy((void*)program_str, program_b.data(), program_str_len);
            ((char*)program_str)[program_str_len] = '\0';
            const char* cbval1 = program_str;
            qtermwidget_setshellprogram_callback(this, cbval1);
            libqt_free(program_str);
            return;
        }
        QTermWidget::setShellProgram(program);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWorkingDirectory(const QString& dir) override {
        if (qtermwidget_setworkingdirectory_callback) {
            const auto dir_ret = dir;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dir_b = dir_ret.toUtf8();
            auto dir_str_len = dir_b.length();
            const char* dir_str = static_cast<const char*>(malloc(dir_str_len + 1));
            memcpy((void*)dir_str, dir_b.data(), dir_str_len);
            ((char*)dir_str)[dir_str_len] = '\0';
            const char* cbval1 = dir_str;
            qtermwidget_setworkingdirectory_callback(this, cbval1);
            libqt_free(dir_str);
            return;
        }
        QTermWidget::setWorkingDirectory(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString workingDirectory() override {
        if (qtermwidget_workingdirectory_callback) {
            const char* callback_ret = qtermwidget_workingdirectory_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::workingDirectory();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setArgs(const QList<QString>& args) override {
        if (qtermwidget_setargs_callback) {
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
            qtermwidget_setargs_callback(this, cbval1);
            libqt_free(args_arr);
            return;
        }
        QTermWidget::setArgs(args);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColorScheme(const QString& name) override {
        if (qtermwidget_setcolorscheme_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            qtermwidget_setcolorscheme_callback(this, cbval1);
            libqt_free(name_str);
            return;
        }
        QTermWidget::setColorScheme(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> getAvailableColorSchemes() override {
        if (qtermwidget_getavailablecolorschemes_callback) {
            const char** callback_ret = qtermwidget_getavailablecolorschemes_callback(this);
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
        if (qtermwidget_sethistorysize_callback) {
            int cbval1 = lines;
            qtermwidget_sethistorysize_callback(this, cbval1);
            return;
        }
        QTermWidget::setHistorySize(lines);
    }

    // Virtual method for C ABI access and custom callback
    virtual int historySize() const override {
        if (qtermwidget_historysize_callback) {
            int callback_ret = qtermwidget_historysize_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::historySize();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setScrollBarPosition(QTermWidgetInterface::ScrollBarPosition scrollBarPosition) override {
        if (qtermwidget_setscrollbarposition_callback) {
            int cbval1 = static_cast<int>(scrollBarPosition);
            qtermwidget_setscrollbarposition_callback(this, cbval1);
            return;
        }
        QTermWidget::setScrollBarPosition(scrollBarPosition);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollToEnd() override {
        if (qtermwidget_scrolltoend_callback) {
            qtermwidget_scrolltoend_callback(this);
            return;
        }
        QTermWidget::scrollToEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendText(const QString& text) override {
        if (qtermwidget_sendtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qtermwidget_sendtext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QTermWidget::sendText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendKeyEvent(QKeyEvent* e) override {
        if (qtermwidget_sendkeyevent_callback) {
            QKeyEvent* cbval1 = e;
            qtermwidget_sendkeyevent_callback(this, cbval1);
            return;
        }
        QTermWidget::sendKeyEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFlowControlEnabled(bool enabled) override {
        if (qtermwidget_setflowcontrolenabled_callback) {
            bool cbval1 = enabled;
            qtermwidget_setflowcontrolenabled_callback(this, cbval1);
            return;
        }
        QTermWidget::setFlowControlEnabled(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool flowControlEnabled() override {
        if (qtermwidget_flowcontrolenabled_callback) {
            bool callback_ret = qtermwidget_flowcontrolenabled_callback(this);
            return callback_ret;
        }
        return QTermWidget::flowControlEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFlowControlWarningEnabled(bool enabled) override {
        if (qtermwidget_setflowcontrolwarningenabled_callback) {
            bool cbval1 = enabled;
            qtermwidget_setflowcontrolwarningenabled_callback(this, cbval1);
            return;
        }
        QTermWidget::setFlowControlWarningEnabled(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString keyBindings() override {
        if (qtermwidget_keybindings_callback) {
            const char* callback_ret = qtermwidget_keybindings_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::keyBindings();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMotionAfterPasting(int motionAfterPasting) override {
        if (qtermwidget_setmotionafterpasting_callback) {
            int cbval1 = motionAfterPasting;
            qtermwidget_setmotionafterpasting_callback(this, cbval1);
            return;
        }
        QTermWidget::setMotionAfterPasting(motionAfterPasting);
    }

    // Virtual method for C ABI access and custom callback
    virtual int historyLinesCount() override {
        if (qtermwidget_historylinescount_callback) {
            int callback_ret = qtermwidget_historylinescount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::historyLinesCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int screenColumnsCount() override {
        if (qtermwidget_screencolumnscount_callback) {
            int callback_ret = qtermwidget_screencolumnscount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::screenColumnsCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int screenLinesCount() override {
        if (qtermwidget_screenlinescount_callback) {
            int callback_ret = qtermwidget_screenlinescount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::screenLinesCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionStart(int row, int column) override {
        if (qtermwidget_setselectionstart_callback) {
            int cbval1 = row;
            int cbval2 = column;
            qtermwidget_setselectionstart_callback(this, cbval1, cbval2);
            return;
        }
        QTermWidget::setSelectionStart(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionEnd(int row, int column) override {
        if (qtermwidget_setselectionend_callback) {
            int cbval1 = row;
            int cbval2 = column;
            qtermwidget_setselectionend_callback(this, cbval1, cbval2);
            return;
        }
        QTermWidget::setSelectionEnd(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getSelectionStart(int& row, int& column) override {
        if (qtermwidget_getselectionstart_callback) {
            int* cbval1 = &row;
            int* cbval2 = &column;
            qtermwidget_getselectionstart_callback(this, cbval1, cbval2);
            return;
        }
        QTermWidget::getSelectionStart(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual void getSelectionEnd(int& row, int& column) override {
        if (qtermwidget_getselectionend_callback) {
            int* cbval1 = &row;
            int* cbval2 = &column;
            qtermwidget_getselectionend_callback(this, cbval1, cbval2);
            return;
        }
        QTermWidget::getSelectionEnd(row, column);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString selectedText(bool preserveLineBreaks) override {
        if (qtermwidget_selectedtext_callback) {
            bool cbval1 = preserveLineBreaks;
            const char* callback_ret = qtermwidget_selectedtext_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::selectedText(preserveLineBreaks);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMonitorActivity(bool monitorActivity) override {
        if (qtermwidget_setmonitoractivity_callback) {
            bool cbval1 = monitorActivity;
            qtermwidget_setmonitoractivity_callback(this, cbval1);
            return;
        }
        QTermWidget::setMonitorActivity(monitorActivity);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMonitorSilence(bool monitorSilence) override {
        if (qtermwidget_setmonitorsilence_callback) {
            bool cbval1 = monitorSilence;
            qtermwidget_setmonitorsilence_callback(this, cbval1);
            return;
        }
        QTermWidget::setMonitorSilence(monitorSilence);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSilenceTimeout(int seconds) override {
        if (qtermwidget_setsilencetimeout_callback) {
            int cbval1 = seconds;
            qtermwidget_setsilencetimeout_callback(this, cbval1);
            return;
        }
        QTermWidget::setSilenceTimeout(seconds);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> filterActions(const QPoint& position) override {
        if (qtermwidget_filteractions_callback) {
            const QPoint& position_ret = position;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&position_ret);
            libqt_list /* of QAction* */ callback_ret = qtermwidget_filteractions_callback(this, cbval1);
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
        if (qtermwidget_getptyslavefd_callback) {
            int callback_ret = qtermwidget_getptyslavefd_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getPtySlaveFd();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBlinkingCursor(bool blink) override {
        if (qtermwidget_setblinkingcursor_callback) {
            bool cbval1 = blink;
            qtermwidget_setblinkingcursor_callback(this, cbval1);
            return;
        }
        QTermWidget::setBlinkingCursor(blink);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBidiEnabled(bool enabled) override {
        if (qtermwidget_setbidienabled_callback) {
            bool cbval1 = enabled;
            qtermwidget_setbidienabled_callback(this, cbval1);
            return;
        }
        QTermWidget::setBidiEnabled(enabled);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isBidiEnabled() override {
        if (qtermwidget_isbidienabled_callback) {
            bool callback_ret = qtermwidget_isbidienabled_callback(this);
            return callback_ret;
        }
        return QTermWidget::isBidiEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoClose(bool autoClose) override {
        if (qtermwidget_setautoclose_callback) {
            bool cbval1 = autoClose;
            qtermwidget_setautoclose_callback(this, cbval1);
            return;
        }
        QTermWidget::setAutoClose(autoClose);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString title() const override {
        if (qtermwidget_title_callback) {
            const char* callback_ret = qtermwidget_title_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::title();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString icon() const override {
        if (qtermwidget_icon_callback) {
            const char* callback_ret = qtermwidget_icon_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::icon();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isTitleChanged() const override {
        if (qtermwidget_istitlechanged_callback) {
            bool callback_ret = qtermwidget_istitlechanged_callback(this);
            return callback_ret;
        }
        return QTermWidget::isTitleChanged();
    }

    // Virtual method for C ABI access and custom callback
    virtual void bracketText(QString& text) override {
        if (qtermwidget_brackettext_callback) {
            auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qtermwidget_brackettext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        QTermWidget::bracketText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disableBracketedPasteMode(bool disable) override {
        if (qtermwidget_disablebracketedpastemode_callback) {
            bool cbval1 = disable;
            qtermwidget_disablebracketedpastemode_callback(this, cbval1);
            return;
        }
        QTermWidget::disableBracketedPasteMode(disable);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bracketedPasteModeIsDisabled() const override {
        if (qtermwidget_bracketedpastemodeisdisabled_callback) {
            bool callback_ret = qtermwidget_bracketedpastemodeisdisabled_callback(this);
            return callback_ret;
        }
        return QTermWidget::bracketedPasteModeIsDisabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMargin(int margin) override {
        if (qtermwidget_setmargin_callback) {
            int cbval1 = margin;
            qtermwidget_setmargin_callback(this, cbval1);
            return;
        }
        QTermWidget::setMargin(margin);
    }

    // Virtual method for C ABI access and custom callback
    virtual int getMargin() const override {
        if (qtermwidget_getmargin_callback) {
            int callback_ret = qtermwidget_getmargin_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::getMargin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDrawLineChars(bool drawLineChars) override {
        if (qtermwidget_setdrawlinechars_callback) {
            bool cbval1 = drawLineChars;
            qtermwidget_setdrawlinechars_callback(this, cbval1);
            return;
        }
        QTermWidget::setDrawLineChars(drawLineChars);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBoldIntense(bool boldIntense) override {
        if (qtermwidget_setboldintense_callback) {
            bool cbval1 = boldIntense;
            qtermwidget_setboldintense_callback(this, cbval1);
            return;
        }
        QTermWidget::setBoldIntense(boldIntense);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setConfirmMultilinePaste(bool confirmMultilinePaste) override {
        if (qtermwidget_setconfirmmultilinepaste_callback) {
            bool cbval1 = confirmMultilinePaste;
            qtermwidget_setconfirmmultilinepaste_callback(this, cbval1);
            return;
        }
        QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTrimPastedTrailingNewlines(bool trimPastedTrailingNewlines) override {
        if (qtermwidget_settrimpastedtrailingnewlines_callback) {
            bool cbval1 = trimPastedTrailingNewlines;
            qtermwidget_settrimpastedtrailingnewlines_callback(this, cbval1);
            return;
        }
        QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString wordCharacters() const override {
        if (qtermwidget_wordcharacters_callback) {
            const char* callback_ret = qtermwidget_wordcharacters_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTermWidget::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWordCharacters(const QString& chars) override {
        if (qtermwidget_setwordcharacters_callback) {
            const auto chars_ret = chars;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray chars_b = chars_ret.toUtf8();
            auto chars_str_len = chars_b.length();
            const char* chars_str = static_cast<const char*>(malloc(chars_str_len + 1));
            memcpy((void*)chars_str, chars_b.data(), chars_str_len);
            ((char*)chars_str)[chars_str_len] = '\0';
            const char* cbval1 = chars_str;
            qtermwidget_setwordcharacters_callback(this, cbval1);
            libqt_free(chars_str);
            return;
        }
        QTermWidget::setWordCharacters(chars);
    }

    // Virtual method for C ABI access and custom callback
    virtual QTermWidgetInterface* createWidget(int startnow) const override {
        if (qtermwidget_createwidget_callback) {
            int cbval1 = startnow;
            QTermWidgetInterface* callback_ret = qtermwidget_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::createWidget(startnow);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qtermwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qtermwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QTermWidget::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtermwidget_devtype_callback) {
            int callback_ret = qtermwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtermwidget_setvisible_callback) {
            bool cbval1 = visible;
            qtermwidget_setvisible_callback(this, cbval1);
            return;
        }
        QTermWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtermwidget_minimumsizehint_callback) {
            QSize* callback_ret = qtermwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTermWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtermwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtermwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtermwidget_hasheightforwidth_callback) {
            bool callback_ret = qtermwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTermWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtermwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qtermwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QTermWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtermwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtermwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtermwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtermwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QTermWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtermwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtermwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTermWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtermwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtermwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTermWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtermwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtermwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTermWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtermwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtermwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QTermWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtermwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qtermwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QTermWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtermwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtermwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTermWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtermwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtermwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QTermWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtermwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtermwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QTermWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtermwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtermwidget_enterevent_callback(this, cbval1);
            return;
        }
        QTermWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtermwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtermwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QTermWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtermwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qtermwidget_paintevent_callback(this, cbval1);
            return;
        }
        QTermWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtermwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtermwidget_moveevent_callback(this, cbval1);
            return;
        }
        QTermWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtermwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtermwidget_closeevent_callback(this, cbval1);
            return;
        }
        QTermWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtermwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qtermwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTermWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtermwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtermwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QTermWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtermwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtermwidget_actionevent_callback(this, cbval1);
            return;
        }
        QTermWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtermwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtermwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QTermWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtermwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtermwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTermWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtermwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtermwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTermWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtermwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtermwidget_dropevent_callback(this, cbval1);
            return;
        }
        QTermWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtermwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtermwidget_showevent_callback(this, cbval1);
            return;
        }
        QTermWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtermwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtermwidget_hideevent_callback(this, cbval1);
            return;
        }
        QTermWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtermwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtermwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTermWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtermwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qtermwidget_changeevent_callback(this, cbval1);
            return;
        }
        QTermWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtermwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtermwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTermWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtermwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtermwidget_initpainter_callback(this, cbval1);
            return;
        }
        QTermWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtermwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtermwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtermwidget_sharedpainter_callback) {
            QPainter* callback_ret = qtermwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTermWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtermwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtermwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTermWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtermwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qtermwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTermWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtermwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtermwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTermWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtermwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtermwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTermWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtermwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtermwidget_timerevent_callback(this, cbval1);
            return;
        }
        QTermWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtermwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtermwidget_childevent_callback(this, cbval1);
            return;
        }
        QTermWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtermwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qtermwidget_customevent_callback(this, cbval1);
            return;
        }
        QTermWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtermwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtermwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QTermWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtermwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtermwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTermWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTermWidget_SuperResizeEvent(QTermWidget* self, QResizeEvent* param1);
    friend bool QTermWidget_SuperEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_SuperMousePressEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperMouseReleaseEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperMouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperMouseMoveEvent(QTermWidget* self, QMouseEvent* event);
    friend void QTermWidget_SuperWheelEvent(QTermWidget* self, QWheelEvent* event);
    friend void QTermWidget_SuperKeyPressEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_SuperKeyReleaseEvent(QTermWidget* self, QKeyEvent* event);
    friend void QTermWidget_SuperFocusInEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_SuperFocusOutEvent(QTermWidget* self, QFocusEvent* event);
    friend void QTermWidget_SuperEnterEvent(QTermWidget* self, QEnterEvent* event);
    friend void QTermWidget_SuperLeaveEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_SuperPaintEvent(QTermWidget* self, QPaintEvent* event);
    friend void QTermWidget_SuperMoveEvent(QTermWidget* self, QMoveEvent* event);
    friend void QTermWidget_SuperCloseEvent(QTermWidget* self, QCloseEvent* event);
    friend void QTermWidget_SuperContextMenuEvent(QTermWidget* self, QContextMenuEvent* event);
    friend void QTermWidget_SuperTabletEvent(QTermWidget* self, QTabletEvent* event);
    friend void QTermWidget_SuperActionEvent(QTermWidget* self, QActionEvent* event);
    friend void QTermWidget_SuperDragEnterEvent(QTermWidget* self, QDragEnterEvent* event);
    friend void QTermWidget_SuperDragMoveEvent(QTermWidget* self, QDragMoveEvent* event);
    friend void QTermWidget_SuperDragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event);
    friend void QTermWidget_SuperDropEvent(QTermWidget* self, QDropEvent* event);
    friend void QTermWidget_SuperShowEvent(QTermWidget* self, QShowEvent* event);
    friend void QTermWidget_SuperHideEvent(QTermWidget* self, QHideEvent* event);
    friend bool QTermWidget_SuperNativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QTermWidget_SuperChangeEvent(QTermWidget* self, QEvent* param1);
    friend int QTermWidget_SuperMetric(const QTermWidget* self, int param1);
    friend void QTermWidget_SuperInitPainter(const QTermWidget* self, QPainter* painter);
    friend QPaintDevice* QTermWidget_SuperRedirected(const QTermWidget* self, QPoint* offset);
    friend QPainter* QTermWidget_SuperSharedPainter(const QTermWidget* self);
    friend void QTermWidget_SuperInputMethodEvent(QTermWidget* self, QInputMethodEvent* param1);
    friend bool QTermWidget_SuperFocusNextPrevChild(QTermWidget* self, bool next);
    friend void QTermWidget_SuperTimerEvent(QTermWidget* self, QTimerEvent* event);
    friend void QTermWidget_SuperChildEvent(QTermWidget* self, QChildEvent* event);
    friend void QTermWidget_SuperCustomEvent(QTermWidget* self, QEvent* event);
    friend void QTermWidget_SuperConnectNotify(QTermWidget* self, const QMetaMethod* signal);
    friend void QTermWidget_SuperDisconnectNotify(QTermWidget* self, const QMetaMethod* signal);
};

#endif
