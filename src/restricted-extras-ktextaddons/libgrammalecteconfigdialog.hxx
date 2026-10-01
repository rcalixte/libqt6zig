#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTECONFIGDIALOG_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTECONFIGDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteConfigDialog
class VirtualTextGrammarCheckGrammalecteConfigDialog final : public TextGrammarCheck::GrammalecteConfigDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteConfigDialog*, const char*);
    using TextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteConfigDialog*, int, int, void**);
    using TextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, bool);
    using TextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_Open_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_Exec_Callback = int (*)(TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_Done_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_Accept_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_Reject_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QCloseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QShowEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QResizeEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QContextMenuEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DevType_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QWheelEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QPaintEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QTabletEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QActionEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDragEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDragMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QDropEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QHideEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_Metric_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammalecteConfigDialog*, QPainter*);
    using TextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammalecteConfigDialog*, QPoint*);
    using TextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__GrammalecteConfigDialog*);
    using TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QInputMethodEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammalecteConfigDialog*, int);
    using TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigDialog*, bool);
    using TextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QChildEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigDialog*, QMetaMethod*);
    using TextGrammarCheck::GrammalecteConfigDialog::adjustPosition;
    using TextGrammarCheck::GrammalecteConfigDialog::create;
    using TextGrammarCheck::GrammalecteConfigDialog::destroy;
    using TextGrammarCheck::GrammalecteConfigDialog::focusNextChild;
    using TextGrammarCheck::GrammalecteConfigDialog::focusPreviousChild;
    using TextGrammarCheck::GrammalecteConfigDialog::getDecodedMetricF;
    using TextGrammarCheck::GrammalecteConfigDialog::isSignalConnected;
    using TextGrammarCheck::GrammalecteConfigDialog::receivers;
    using TextGrammarCheck::GrammalecteConfigDialog::sender;
    using TextGrammarCheck::GrammalecteConfigDialog::senderSignalIndex;
    using TextGrammarCheck::GrammalecteConfigDialog::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback textgrammarcheck__grammalecteconfigdialog_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback textgrammarcheck__grammalecteconfigdialog_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback textgrammarcheck__grammalecteconfigdialog_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback textgrammarcheck__grammalecteconfigdialog_setvisible_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback textgrammarcheck__grammalecteconfigdialog_sizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback textgrammarcheck__grammalecteconfigdialog_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Open_Callback textgrammarcheck__grammalecteconfigdialog_open_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Exec_Callback textgrammarcheck__grammalecteconfigdialog_exec_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Done_Callback textgrammarcheck__grammalecteconfigdialog_done_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Accept_Callback textgrammarcheck__grammalecteconfigdialog_accept_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Reject_Callback textgrammarcheck__grammalecteconfigdialog_reject_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback textgrammarcheck__grammalecteconfigdialog_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback textgrammarcheck__grammalecteconfigdialog_closeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback textgrammarcheck__grammalecteconfigdialog_showevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback textgrammarcheck__grammalecteconfigdialog_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback textgrammarcheck__grammalecteconfigdialog_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback textgrammarcheck__grammalecteconfigdialog_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DevType_Callback textgrammarcheck__grammalecteconfigdialog_devtype_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback textgrammarcheck__grammalecteconfigdialog_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback textgrammarcheck__grammalecteconfigdialog_paintengine_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Event_Callback textgrammarcheck__grammalecteconfigdialog_event_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback textgrammarcheck__grammalecteconfigdialog_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback textgrammarcheck__grammalecteconfigdialog_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback textgrammarcheck__grammalecteconfigdialog_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback textgrammarcheck__grammalecteconfigdialog_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback textgrammarcheck__grammalecteconfigdialog_enterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback textgrammarcheck__grammalecteconfigdialog_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback textgrammarcheck__grammalecteconfigdialog_paintevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback textgrammarcheck__grammalecteconfigdialog_moveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback textgrammarcheck__grammalecteconfigdialog_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback textgrammarcheck__grammalecteconfigdialog_actionevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback textgrammarcheck__grammalecteconfigdialog_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback textgrammarcheck__grammalecteconfigdialog_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback textgrammarcheck__grammalecteconfigdialog_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback textgrammarcheck__grammalecteconfigdialog_dropevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback textgrammarcheck__grammalecteconfigdialog_hideevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback textgrammarcheck__grammalecteconfigdialog_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback textgrammarcheck__grammalecteconfigdialog_changeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Metric_Callback textgrammarcheck__grammalecteconfigdialog_metric_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback textgrammarcheck__grammalecteconfigdialog_initpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback textgrammarcheck__grammalecteconfigdialog_redirected_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback textgrammarcheck__grammalecteconfigdialog_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback textgrammarcheck__grammalecteconfigdialog_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback textgrammarcheck__grammalecteconfigdialog_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback textgrammarcheck__grammalecteconfigdialog_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback textgrammarcheck__grammalecteconfigdialog_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback textgrammarcheck__grammalecteconfigdialog_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback textgrammarcheck__grammalecteconfigdialog_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback textgrammarcheck__grammalecteconfigdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammalecteConfigDialog {
        using TextGrammarCheck::GrammalecteConfigDialog::actionEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::changeEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::childEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::closeEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::connectNotify;
        using TextGrammarCheck::GrammalecteConfigDialog::contextMenuEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::customEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::disconnectNotify;
        using TextGrammarCheck::GrammalecteConfigDialog::dragEnterEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::dragLeaveEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::dragMoveEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::dropEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::enterEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::event;
        using TextGrammarCheck::GrammalecteConfigDialog::eventFilter;
        using TextGrammarCheck::GrammalecteConfigDialog::focusInEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::focusNextPrevChild;
        using TextGrammarCheck::GrammalecteConfigDialog::focusOutEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::hideEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::initPainter;
        using TextGrammarCheck::GrammalecteConfigDialog::inputMethodEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::keyPressEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::keyReleaseEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::leaveEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::metric;
        using TextGrammarCheck::GrammalecteConfigDialog::mouseDoubleClickEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::mouseMoveEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::mousePressEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::mouseReleaseEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::moveEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::nativeEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::paintEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::redirected;
        using TextGrammarCheck::GrammalecteConfigDialog::resizeEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::sharedPainter;
        using TextGrammarCheck::GrammalecteConfigDialog::showEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::tabletEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::timerEvent;
        using TextGrammarCheck::GrammalecteConfigDialog::wheelEvent;
    };

    VirtualTextGrammarCheckGrammalecteConfigDialog(QWidget* parent) : TextGrammarCheck::GrammalecteConfigDialog(parent) {};
    VirtualTextGrammarCheckGrammalecteConfigDialog() : TextGrammarCheck::GrammalecteConfigDialog() {};
    VirtualTextGrammarCheckGrammalecteConfigDialog(QWidget* parent, bool disableMessageBox) : TextGrammarCheck::GrammalecteConfigDialog(parent, disableMessageBox) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteconfigdialog_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammalecteconfigdialog_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammalecteconfigdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteconfigdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammalecteconfigdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammalecteconfigdialog_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__grammalecteconfigdialog_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammalecteconfigdialog_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammalecteconfigdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammalecteconfigdialog_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammalecteconfigdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (textgrammarcheck__grammalecteconfigdialog_open_callback) {
            textgrammarcheck__grammalecteconfigdialog_open_callback(this);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (textgrammarcheck__grammalecteconfigdialog_exec_callback) {
            int callback_ret = textgrammarcheck__grammalecteconfigdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_done_callback) {
            int cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_done_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (textgrammarcheck__grammalecteconfigdialog_accept_callback) {
            textgrammarcheck__grammalecteconfigdialog_accept_callback(this);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (textgrammarcheck__grammalecteconfigdialog_reject_callback) {
            textgrammarcheck__grammalecteconfigdialog_reject_callback(this);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textgrammarcheck__grammalecteconfigdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textgrammarcheck__grammalecteconfigdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammalecteconfigdialog_devtype_callback) {
            int callback_ret = textgrammarcheck__grammalecteconfigdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammalecteconfigdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__grammalecteconfigdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammalecteconfigdialog_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__grammalecteconfigdialog_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__grammalecteconfigdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammalecteconfigdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__grammalecteconfigdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammalecteconfigdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__grammalecteconfigdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammalecteconfigdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__grammalecteconfigdialog_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammalecteconfigdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__grammalecteconfigdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammalecteconfigdialog_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__grammalecteconfigdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammalecteconfigdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__grammalecteconfigdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigdialog_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigdialog_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteconfigdialog_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteconfigdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyPressEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QKeyEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperCloseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QCloseEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperShowEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QShowEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperResizeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QResizeEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperContextMenuEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QContextMenuEvent* param1);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperEventFilter(TextGrammarCheck::GrammalecteConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMousePressEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperWheelEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusInEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusOutEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperEnterEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperLeaveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperTabletEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperActionEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDragEnterEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDragMoveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDragLeaveEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDropEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperHideEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperNativeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperChangeEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* param1);
    friend int TextGrammarCheck__GrammalecteConfigDialog_SuperMetric(const TextGrammarCheck::GrammalecteConfigDialog* self, int param1);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperInitPainter(const TextGrammarCheck::GrammalecteConfigDialog* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammalecteConfigDialog_SuperRedirected(const TextGrammarCheck::GrammalecteConfigDialog* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammalecteConfigDialog_SuperSharedPainter(const TextGrammarCheck::GrammalecteConfigDialog* self);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck::GrammalecteConfigDialog* self, bool next);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperTimerEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperChildEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperCustomEvent(TextGrammarCheck::GrammalecteConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperConnectNotify(TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigDialog_SuperDisconnectNotify(TextGrammarCheck::GrammalecteConfigDialog* self, const QMetaMethod* signal);
};

#endif
