#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLCONFIGDIALOG_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLCONFIGDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolConfigDialog
class VirtualTextGrammarCheckLanguageToolConfigDialog final : public TextGrammarCheck::LanguageToolConfigDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolConfigDialog*, const char*);
    using TextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolConfigDialog*, int, int, void**);
    using TextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, bool);
    using TextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_Open_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_Exec_Callback = int (*)(TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_Done_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_Accept_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_Reject_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QShowEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DevType_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QActionEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QDropEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QHideEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolConfigDialog*, QPainter*);
    using TextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolConfigDialog*, QPoint*);
    using TextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__LanguageToolConfigDialog*);
    using TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolConfigDialog*, int);
    using TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigDialog*, bool);
    using TextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QChildEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigDialog*, QMetaMethod*);
    using TextGrammarCheck::LanguageToolConfigDialog::adjustPosition;
    using TextGrammarCheck::LanguageToolConfigDialog::create;
    using TextGrammarCheck::LanguageToolConfigDialog::destroy;
    using TextGrammarCheck::LanguageToolConfigDialog::focusNextChild;
    using TextGrammarCheck::LanguageToolConfigDialog::focusPreviousChild;
    using TextGrammarCheck::LanguageToolConfigDialog::getDecodedMetricF;
    using TextGrammarCheck::LanguageToolConfigDialog::isSignalConnected;
    using TextGrammarCheck::LanguageToolConfigDialog::receivers;
    using TextGrammarCheck::LanguageToolConfigDialog::sender;
    using TextGrammarCheck::LanguageToolConfigDialog::senderSignalIndex;
    using TextGrammarCheck::LanguageToolConfigDialog::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback textgrammarcheck__languagetoolconfigdialog_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback textgrammarcheck__languagetoolconfigdialog_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback textgrammarcheck__languagetoolconfigdialog_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback textgrammarcheck__languagetoolconfigdialog_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback textgrammarcheck__languagetoolconfigdialog_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback textgrammarcheck__languagetoolconfigdialog_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Open_Callback textgrammarcheck__languagetoolconfigdialog_open_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Exec_Callback textgrammarcheck__languagetoolconfigdialog_exec_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Done_Callback textgrammarcheck__languagetoolconfigdialog_done_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Accept_Callback textgrammarcheck__languagetoolconfigdialog_accept_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Reject_Callback textgrammarcheck__languagetoolconfigdialog_reject_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback textgrammarcheck__languagetoolconfigdialog_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback textgrammarcheck__languagetoolconfigdialog_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback textgrammarcheck__languagetoolconfigdialog_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback textgrammarcheck__languagetoolconfigdialog_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback textgrammarcheck__languagetoolconfigdialog_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback textgrammarcheck__languagetoolconfigdialog_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DevType_Callback textgrammarcheck__languagetoolconfigdialog_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback textgrammarcheck__languagetoolconfigdialog_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback textgrammarcheck__languagetoolconfigdialog_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Event_Callback textgrammarcheck__languagetoolconfigdialog_event_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback textgrammarcheck__languagetoolconfigdialog_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback textgrammarcheck__languagetoolconfigdialog_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback textgrammarcheck__languagetoolconfigdialog_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback textgrammarcheck__languagetoolconfigdialog_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback textgrammarcheck__languagetoolconfigdialog_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback textgrammarcheck__languagetoolconfigdialog_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback textgrammarcheck__languagetoolconfigdialog_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback textgrammarcheck__languagetoolconfigdialog_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback textgrammarcheck__languagetoolconfigdialog_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback textgrammarcheck__languagetoolconfigdialog_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback textgrammarcheck__languagetoolconfigdialog_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback textgrammarcheck__languagetoolconfigdialog_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback textgrammarcheck__languagetoolconfigdialog_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback textgrammarcheck__languagetoolconfigdialog_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback textgrammarcheck__languagetoolconfigdialog_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback textgrammarcheck__languagetoolconfigdialog_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback textgrammarcheck__languagetoolconfigdialog_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Metric_Callback textgrammarcheck__languagetoolconfigdialog_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback textgrammarcheck__languagetoolconfigdialog_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback textgrammarcheck__languagetoolconfigdialog_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback textgrammarcheck__languagetoolconfigdialog_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback textgrammarcheck__languagetoolconfigdialog_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback textgrammarcheck__languagetoolconfigdialog_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback textgrammarcheck__languagetoolconfigdialog_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback textgrammarcheck__languagetoolconfigdialog_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback textgrammarcheck__languagetoolconfigdialog_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback textgrammarcheck__languagetoolconfigdialog_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback textgrammarcheck__languagetoolconfigdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::LanguageToolConfigDialog {
        using TextGrammarCheck::LanguageToolConfigDialog::actionEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::changeEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::childEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::closeEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::connectNotify;
        using TextGrammarCheck::LanguageToolConfigDialog::contextMenuEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::customEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::disconnectNotify;
        using TextGrammarCheck::LanguageToolConfigDialog::dragEnterEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::dragLeaveEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::dragMoveEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::dropEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::enterEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::event;
        using TextGrammarCheck::LanguageToolConfigDialog::eventFilter;
        using TextGrammarCheck::LanguageToolConfigDialog::focusInEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::focusNextPrevChild;
        using TextGrammarCheck::LanguageToolConfigDialog::focusOutEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::hideEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::initPainter;
        using TextGrammarCheck::LanguageToolConfigDialog::inputMethodEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::keyPressEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::keyReleaseEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::leaveEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::metric;
        using TextGrammarCheck::LanguageToolConfigDialog::mouseDoubleClickEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::mouseMoveEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::mousePressEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::mouseReleaseEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::moveEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::nativeEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::paintEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::redirected;
        using TextGrammarCheck::LanguageToolConfigDialog::resizeEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::sharedPainter;
        using TextGrammarCheck::LanguageToolConfigDialog::showEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::tabletEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::timerEvent;
        using TextGrammarCheck::LanguageToolConfigDialog::wheelEvent;
    };

    VirtualTextGrammarCheckLanguageToolConfigDialog(QWidget* parent) : TextGrammarCheck::LanguageToolConfigDialog(parent) {};
    VirtualTextGrammarCheckLanguageToolConfigDialog() : TextGrammarCheck::LanguageToolConfigDialog() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolconfigdialog_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__languagetoolconfigdialog_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__languagetoolconfigdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolconfigdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__languagetoolconfigdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolconfigdialog_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__languagetoolconfigdialog_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolconfigdialog_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolconfigdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolconfigdialog_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolconfigdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (textgrammarcheck__languagetoolconfigdialog_open_callback) {
            textgrammarcheck__languagetoolconfigdialog_open_callback(this);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (textgrammarcheck__languagetoolconfigdialog_exec_callback) {
            int callback_ret = textgrammarcheck__languagetoolconfigdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_done_callback) {
            int cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_done_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (textgrammarcheck__languagetoolconfigdialog_accept_callback) {
            textgrammarcheck__languagetoolconfigdialog_accept_callback(this);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (textgrammarcheck__languagetoolconfigdialog_reject_callback) {
            textgrammarcheck__languagetoolconfigdialog_reject_callback(this);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textgrammarcheck__languagetoolconfigdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textgrammarcheck__languagetoolconfigdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolconfigdialog_devtype_callback) {
            int callback_ret = textgrammarcheck__languagetoolconfigdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolconfigdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__languagetoolconfigdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolconfigdialog_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__languagetoolconfigdialog_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__languagetoolconfigdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolconfigdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__languagetoolconfigdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolconfigdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__languagetoolconfigdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolconfigdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__languagetoolconfigdialog_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolconfigdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__languagetoolconfigdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolconfigdialog_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__languagetoolconfigdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolconfigdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__languagetoolconfigdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigdialog_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigdialog_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolconfigdialog_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolconfigdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyPressEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QKeyEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperCloseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QCloseEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperShowEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QShowEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperResizeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QResizeEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperContextMenuEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QContextMenuEvent* param1);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperEventFilter(TextGrammarCheck::LanguageToolConfigDialog* self, QObject* param1, QEvent* param2);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMousePressEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperWheelEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusInEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusOutEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperEnterEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperLeaveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperTabletEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperActionEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDragEnterEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDragMoveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDropEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperHideEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QHideEvent* event);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperNativeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperChangeEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* param1);
    friend int TextGrammarCheck__LanguageToolConfigDialog_SuperMetric(const TextGrammarCheck::LanguageToolConfigDialog* self, int param1);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperInitPainter(const TextGrammarCheck::LanguageToolConfigDialog* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolConfigDialog_SuperRedirected(const TextGrammarCheck::LanguageToolConfigDialog* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolConfigDialog_SuperSharedPainter(const TextGrammarCheck::LanguageToolConfigDialog* self);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolConfigDialog* self, bool next);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperTimerEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperChildEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperCustomEvent(TextGrammarCheck::LanguageToolConfigDialog* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperConnectNotify(TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigDialog_SuperDisconnectNotify(TextGrammarCheck::LanguageToolConfigDialog* self, const QMetaMethod* signal);
};

#endif
