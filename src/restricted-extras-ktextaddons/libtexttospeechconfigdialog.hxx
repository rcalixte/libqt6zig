#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHCONFIGDIALOG_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHCONFIGDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechConfigDialog
class VirtualTextEditTextToSpeechTextToSpeechConfigDialog final : public TextEditTextToSpeech::TextToSpeechConfigDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject_Callback = QMetaObject* (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, const char*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, bool);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Open_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Exec_Callback = int (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Done_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, int);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Accept_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Reject_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QCloseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QShowEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QResizeEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QContextMenuEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_DevType_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*, int);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth_Callback = bool (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine_Callback = QPaintEngine* (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QWheelEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QPaintEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QTabletEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QActionEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QDragEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QDragMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QDragLeaveEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QDropEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QHideEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, libqt_string, void*, intptr_t*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Metric_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*, int);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter_Callback = void (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*, QPainter*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_Redirected_Callback = QPaintDevice* (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*, QPoint*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter_Callback = QPainter* (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QInputMethodEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const TextEditTextToSpeech__TextToSpeechConfigDialog*, int);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, bool);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigDialog*, QMetaMethod*);
    using TextEditTextToSpeech::TextToSpeechConfigDialog::adjustPosition;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::create;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::destroy;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::focusNextChild;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::focusPreviousChild;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::getDecodedMetricF;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::isSignalConnected;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::receivers;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::sender;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::senderSignalIndex;
    using TextEditTextToSpeech::TextToSpeechConfigDialog::updateMicroFocus;

    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject_Callback textedittexttospeech__texttospeechconfigdialog_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Metacast_Callback textedittexttospeech__texttospeechconfigdialog_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Metacall_Callback textedittexttospeech__texttospeechconfigdialog_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible_Callback textedittexttospeech__texttospeechconfigdialog_setvisible_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint_Callback textedittexttospeech__texttospeechconfigdialog_sizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint_Callback textedittexttospeech__texttospeechconfigdialog_minimumsizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Open_Callback textedittexttospeech__texttospeechconfigdialog_open_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Exec_Callback textedittexttospeech__texttospeechconfigdialog_exec_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Done_Callback textedittexttospeech__texttospeechconfigdialog_done_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Accept_Callback textedittexttospeech__texttospeechconfigdialog_accept_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Reject_Callback textedittexttospeech__texttospeechconfigdialog_reject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent_Callback textedittexttospeech__texttospeechconfigdialog_keypressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent_Callback textedittexttospeech__texttospeechconfigdialog_closeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent_Callback textedittexttospeech__texttospeechconfigdialog_showevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent_Callback textedittexttospeech__texttospeechconfigdialog_resizeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent_Callback textedittexttospeech__texttospeechconfigdialog_contextmenuevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter_Callback textedittexttospeech__texttospeechconfigdialog_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_DevType_Callback textedittexttospeech__texttospeechconfigdialog_devtype_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth_Callback textedittexttospeech__texttospeechconfigdialog_heightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth_Callback textedittexttospeech__texttospeechconfigdialog_hasheightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine_Callback textedittexttospeech__texttospeechconfigdialog_paintengine_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Event_Callback textedittexttospeech__texttospeechconfigdialog_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent_Callback textedittexttospeech__texttospeechconfigdialog_mousepressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent_Callback textedittexttospeech__texttospeechconfigdialog_mousereleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent_Callback textedittexttospeech__texttospeechconfigdialog_mousedoubleclickevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent_Callback textedittexttospeech__texttospeechconfigdialog_mousemoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent_Callback textedittexttospeech__texttospeechconfigdialog_wheelevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent_Callback textedittexttospeech__texttospeechconfigdialog_keyreleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent_Callback textedittexttospeech__texttospeechconfigdialog_focusinevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent_Callback textedittexttospeech__texttospeechconfigdialog_focusoutevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent_Callback textedittexttospeech__texttospeechconfigdialog_enterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent_Callback textedittexttospeech__texttospeechconfigdialog_leaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent_Callback textedittexttospeech__texttospeechconfigdialog_paintevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent_Callback textedittexttospeech__texttospeechconfigdialog_moveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent_Callback textedittexttospeech__texttospeechconfigdialog_tabletevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent_Callback textedittexttospeech__texttospeechconfigdialog_actionevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent_Callback textedittexttospeech__texttospeechconfigdialog_dragenterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent_Callback textedittexttospeech__texttospeechconfigdialog_dragmoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent_Callback textedittexttospeech__texttospeechconfigdialog_dragleaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent_Callback textedittexttospeech__texttospeechconfigdialog_dropevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent_Callback textedittexttospeech__texttospeechconfigdialog_hideevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent_Callback textedittexttospeech__texttospeechconfigdialog_nativeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent_Callback textedittexttospeech__texttospeechconfigdialog_changeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Metric_Callback textedittexttospeech__texttospeechconfigdialog_metric_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter_Callback textedittexttospeech__texttospeechconfigdialog_initpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_Redirected_Callback textedittexttospeech__texttospeechconfigdialog_redirected_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter_Callback textedittexttospeech__texttospeechconfigdialog_sharedpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent_Callback textedittexttospeech__texttospeechconfigdialog_inputmethodevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery_Callback textedittexttospeech__texttospeechconfigdialog_inputmethodquery_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild_Callback textedittexttospeech__texttospeechconfigdialog_focusnextprevchild_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent_Callback textedittexttospeech__texttospeechconfigdialog_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent_Callback textedittexttospeech__texttospeechconfigdialog_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent_Callback textedittexttospeech__texttospeechconfigdialog_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify_Callback textedittexttospeech__texttospeechconfigdialog_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify_Callback textedittexttospeech__texttospeechconfigdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEditTextToSpeech::TextToSpeechConfigDialog {
        using TextEditTextToSpeech::TextToSpeechConfigDialog::actionEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::changeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::childEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::closeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::connectNotify;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::contextMenuEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::customEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::disconnectNotify;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::dragEnterEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::dragLeaveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::dragMoveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::dropEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::enterEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::event;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::eventFilter;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::focusInEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::focusNextPrevChild;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::focusOutEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::hideEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::initPainter;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::inputMethodEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::keyPressEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::keyReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::leaveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::metric;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::mouseDoubleClickEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::mouseMoveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::mousePressEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::mouseReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::moveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::nativeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::paintEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::redirected;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::resizeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::sharedPainter;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::showEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::tabletEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::timerEvent;
        using TextEditTextToSpeech::TextToSpeechConfigDialog::wheelEvent;
    };

    VirtualTextEditTextToSpeechTextToSpeechConfigDialog(QWidget* parent) : TextEditTextToSpeech::TextToSpeechConfigDialog(parent) {};
    VirtualTextEditTextToSpeechTextToSpeechConfigDialog() : TextEditTextToSpeech::TextToSpeechConfigDialog() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechconfigdialog_metaobject_callback) {
            QMetaObject* callback_ret = textedittexttospeech__texttospeechconfigdialog_metaobject_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textedittexttospeech__texttospeechconfigdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechconfigdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textedittexttospeech__texttospeechconfigdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textedittexttospeech__texttospeechconfigdialog_setvisible_callback) {
            bool cbval1 = visible;
            textedittexttospeech__texttospeechconfigdialog_setvisible_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textedittexttospeech__texttospeechconfigdialog_sizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechconfigdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textedittexttospeech__texttospeechconfigdialog_minimumsizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechconfigdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (textedittexttospeech__texttospeechconfigdialog_open_callback) {
            textedittexttospeech__texttospeechconfigdialog_open_callback(this);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (textedittexttospeech__texttospeechconfigdialog_exec_callback) {
            int callback_ret = textedittexttospeech__texttospeechconfigdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_done_callback) {
            int cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_done_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (textedittexttospeech__texttospeechconfigdialog_accept_callback) {
            textedittexttospeech__texttospeechconfigdialog_accept_callback(this);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (textedittexttospeech__texttospeechconfigdialog_reject_callback) {
            textedittexttospeech__texttospeechconfigdialog_reject_callback(this);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_keypressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_closeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_showevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_resizeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textedittexttospeech__texttospeechconfigdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textedittexttospeech__texttospeechconfigdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textedittexttospeech__texttospeechconfigdialog_devtype_callback) {
            int callback_ret = textedittexttospeech__texttospeechconfigdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textedittexttospeech__texttospeechconfigdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textedittexttospeech__texttospeechconfigdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textedittexttospeech__texttospeechconfigdialog_hasheightforwidth_callback) {
            bool callback_ret = textedittexttospeech__texttospeechconfigdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textedittexttospeech__texttospeechconfigdialog_paintengine_callback) {
            QPaintEngine* callback_ret = textedittexttospeech__texttospeechconfigdialog_paintengine_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textedittexttospeech__texttospeechconfigdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_wheelevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_focusinevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_enterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_leaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_paintevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_moveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_tabletevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_actionevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_dropevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_hideevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textedittexttospeech__texttospeechconfigdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textedittexttospeech__texttospeechconfigdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_changeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textedittexttospeech__texttospeechconfigdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textedittexttospeech__texttospeechconfigdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textedittexttospeech__texttospeechconfigdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            textedittexttospeech__texttospeechconfigdialog_initpainter_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textedittexttospeech__texttospeechconfigdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textedittexttospeech__texttospeechconfigdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textedittexttospeech__texttospeechconfigdialog_sharedpainter_callback) {
            QPainter* callback_ret = textedittexttospeech__texttospeechconfigdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textedittexttospeech__texttospeechconfigdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textedittexttospeech__texttospeechconfigdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textedittexttospeech__texttospeechconfigdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textedittexttospeech__texttospeechconfigdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_timerevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_childevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechconfigdialog_customevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigdialog_customevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechconfigdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechconfigdialog_connectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechconfigdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechconfigdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyPressEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QKeyEvent* param1);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCloseEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QCloseEvent* param1);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperShowEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QShowEvent* param1);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperResizeEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QResizeEvent* param1);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperContextMenuEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QContextMenuEvent* param1);
    friend bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEventFilter(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMousePressEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseReleaseEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseDoubleClickEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseMoveEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperWheelEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QWheelEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyReleaseEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusInEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusOutEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEnterEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperLeaveEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperPaintEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QPaintEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMoveEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTabletEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QTabletEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperActionEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QActionEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragEnterEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QDragEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragMoveEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QDragMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragLeaveEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QDragLeaveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDropEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QDropEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHideEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QHideEvent* event);
    friend bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperNativeEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChangeEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QEvent* param1);
    friend int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetric(const TextEditTextToSpeech::TextToSpeechConfigDialog* self, int param1);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInitPainter(const TextEditTextToSpeech::TextToSpeechConfigDialog* self, QPainter* painter);
    friend QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperRedirected(const TextEditTextToSpeech::TextToSpeechConfigDialog* self, QPoint* offset);
    friend QPainter* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSharedPainter(const TextEditTextToSpeech::TextToSpeechConfigDialog* self);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInputMethodEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QInputMethodEvent* param1);
    friend bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusNextPrevChild(TextEditTextToSpeech::TextToSpeechConfigDialog* self, bool next);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChildEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechConfigDialog* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechConfigDialog* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechConfigDialog* self, const QMetaMethod* signal);
};

#endif
