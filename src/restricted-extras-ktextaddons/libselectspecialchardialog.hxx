#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBSELECTSPECIALCHARDIALOG_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBSELECTSPECIALCHARDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAddonsWidgets::SelectSpecialCharDialog
class VirtualTextAddonsWidgetsSelectSpecialCharDialog final : public TextAddonsWidgets::SelectSpecialCharDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback = QMetaObject* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback = void* (*)(TextAddonsWidgets__SelectSpecialCharDialog*, const char*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback = int (*)(TextAddonsWidgets__SelectSpecialCharDialog*, int, int, void**);
    using TextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, bool);
    using TextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback = QSize* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback = QSize* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Open_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback = int (*)(TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Done_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QKeyEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QCloseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QShowEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QResizeEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QContextMenuEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QObject*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback = int (*)(const TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback = int (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback = bool (*)(const TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback = QPaintEngine* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Event_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMouseEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QWheelEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QKeyEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QFocusEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QFocusEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEnterEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QPaintEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMoveEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QTabletEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QActionEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDragEnterEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDragMoveEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDragLeaveEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QDropEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QHideEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, libqt_string, void*, intptr_t*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback = int (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback = void (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, QPainter*);
    using TextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback = QPaintDevice* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, QPoint*);
    using TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback = QPainter* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*);
    using TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QInputMethodEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback = QVariant* (*)(const TextAddonsWidgets__SelectSpecialCharDialog*, int);
    using TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback = bool (*)(TextAddonsWidgets__SelectSpecialCharDialog*, bool);
    using TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QTimerEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QChildEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QEvent*);
    using TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMetaMethod*);
    using TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback = void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QMetaMethod*);
    using TextAddonsWidgets::SelectSpecialCharDialog::adjustPosition;
    using TextAddonsWidgets::SelectSpecialCharDialog::create;
    using TextAddonsWidgets::SelectSpecialCharDialog::destroy;
    using TextAddonsWidgets::SelectSpecialCharDialog::focusNextChild;
    using TextAddonsWidgets::SelectSpecialCharDialog::focusPreviousChild;
    using TextAddonsWidgets::SelectSpecialCharDialog::getDecodedMetricF;
    using TextAddonsWidgets::SelectSpecialCharDialog::isSignalConnected;
    using TextAddonsWidgets::SelectSpecialCharDialog::receivers;
    using TextAddonsWidgets::SelectSpecialCharDialog::sender;
    using TextAddonsWidgets::SelectSpecialCharDialog::senderSignalIndex;
    using TextAddonsWidgets::SelectSpecialCharDialog::updateMicroFocus;

    // Instance callback storage
    TextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback textaddonswidgets__selectspecialchardialog_metaobject_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback textaddonswidgets__selectspecialchardialog_metacast_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback textaddonswidgets__selectspecialchardialog_metacall_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback textaddonswidgets__selectspecialchardialog_setvisible_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback textaddonswidgets__selectspecialchardialog_sizehint_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback textaddonswidgets__selectspecialchardialog_minimumsizehint_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Open_Callback textaddonswidgets__selectspecialchardialog_open_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback textaddonswidgets__selectspecialchardialog_exec_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Done_Callback textaddonswidgets__selectspecialchardialog_done_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback textaddonswidgets__selectspecialchardialog_accept_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback textaddonswidgets__selectspecialchardialog_reject_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback textaddonswidgets__selectspecialchardialog_keypressevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback textaddonswidgets__selectspecialchardialog_closeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback textaddonswidgets__selectspecialchardialog_showevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback textaddonswidgets__selectspecialchardialog_resizeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback textaddonswidgets__selectspecialchardialog_contextmenuevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback textaddonswidgets__selectspecialchardialog_eventfilter_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback textaddonswidgets__selectspecialchardialog_devtype_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback textaddonswidgets__selectspecialchardialog_heightforwidth_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback textaddonswidgets__selectspecialchardialog_hasheightforwidth_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback textaddonswidgets__selectspecialchardialog_paintengine_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Event_Callback textaddonswidgets__selectspecialchardialog_event_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback textaddonswidgets__selectspecialchardialog_mousepressevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback textaddonswidgets__selectspecialchardialog_mousereleaseevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback textaddonswidgets__selectspecialchardialog_mousemoveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback textaddonswidgets__selectspecialchardialog_wheelevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback textaddonswidgets__selectspecialchardialog_keyreleaseevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback textaddonswidgets__selectspecialchardialog_focusinevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback textaddonswidgets__selectspecialchardialog_focusoutevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback textaddonswidgets__selectspecialchardialog_enterevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback textaddonswidgets__selectspecialchardialog_leaveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback textaddonswidgets__selectspecialchardialog_paintevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback textaddonswidgets__selectspecialchardialog_moveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback textaddonswidgets__selectspecialchardialog_tabletevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback textaddonswidgets__selectspecialchardialog_actionevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback textaddonswidgets__selectspecialchardialog_dragenterevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback textaddonswidgets__selectspecialchardialog_dragmoveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback textaddonswidgets__selectspecialchardialog_dragleaveevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback textaddonswidgets__selectspecialchardialog_dropevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback textaddonswidgets__selectspecialchardialog_hideevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback textaddonswidgets__selectspecialchardialog_nativeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback textaddonswidgets__selectspecialchardialog_changeevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback textaddonswidgets__selectspecialchardialog_metric_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback textaddonswidgets__selectspecialchardialog_initpainter_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback textaddonswidgets__selectspecialchardialog_redirected_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback textaddonswidgets__selectspecialchardialog_sharedpainter_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback textaddonswidgets__selectspecialchardialog_inputmethodevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback textaddonswidgets__selectspecialchardialog_inputmethodquery_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback textaddonswidgets__selectspecialchardialog_focusnextprevchild_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback textaddonswidgets__selectspecialchardialog_timerevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback textaddonswidgets__selectspecialchardialog_childevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback textaddonswidgets__selectspecialchardialog_customevent_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback textaddonswidgets__selectspecialchardialog_connectnotify_callback = nullptr;
    TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback textaddonswidgets__selectspecialchardialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextAddonsWidgets::SelectSpecialCharDialog {
        using TextAddonsWidgets::SelectSpecialCharDialog::actionEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::changeEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::childEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::closeEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::connectNotify;
        using TextAddonsWidgets::SelectSpecialCharDialog::contextMenuEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::customEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::disconnectNotify;
        using TextAddonsWidgets::SelectSpecialCharDialog::dragEnterEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::dragLeaveEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::dragMoveEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::dropEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::enterEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::event;
        using TextAddonsWidgets::SelectSpecialCharDialog::eventFilter;
        using TextAddonsWidgets::SelectSpecialCharDialog::focusInEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::focusNextPrevChild;
        using TextAddonsWidgets::SelectSpecialCharDialog::focusOutEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::hideEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::initPainter;
        using TextAddonsWidgets::SelectSpecialCharDialog::inputMethodEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::keyPressEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::keyReleaseEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::leaveEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::metric;
        using TextAddonsWidgets::SelectSpecialCharDialog::mouseDoubleClickEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::mouseMoveEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::mousePressEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::mouseReleaseEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::moveEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::nativeEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::paintEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::redirected;
        using TextAddonsWidgets::SelectSpecialCharDialog::resizeEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::sharedPainter;
        using TextAddonsWidgets::SelectSpecialCharDialog::showEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::tabletEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::timerEvent;
        using TextAddonsWidgets::SelectSpecialCharDialog::wheelEvent;
    };

    VirtualTextAddonsWidgetsSelectSpecialCharDialog(QWidget* parent) : TextAddonsWidgets::SelectSpecialCharDialog(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textaddonswidgets__selectspecialchardialog_metaobject_callback) {
            QMetaObject* callback_ret = textaddonswidgets__selectspecialchardialog_metaobject_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textaddonswidgets__selectspecialchardialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textaddonswidgets__selectspecialchardialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textaddonswidgets__selectspecialchardialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textaddonswidgets__selectspecialchardialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textaddonswidgets__selectspecialchardialog_setvisible_callback) {
            bool cbval1 = visible;
            textaddonswidgets__selectspecialchardialog_setvisible_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textaddonswidgets__selectspecialchardialog_sizehint_callback) {
            QSize* callback_ret = textaddonswidgets__selectspecialchardialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textaddonswidgets__selectspecialchardialog_minimumsizehint_callback) {
            QSize* callback_ret = textaddonswidgets__selectspecialchardialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (textaddonswidgets__selectspecialchardialog_open_callback) {
            textaddonswidgets__selectspecialchardialog_open_callback(this);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (textaddonswidgets__selectspecialchardialog_exec_callback) {
            int callback_ret = textaddonswidgets__selectspecialchardialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (textaddonswidgets__selectspecialchardialog_done_callback) {
            int cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_done_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (textaddonswidgets__selectspecialchardialog_accept_callback) {
            textaddonswidgets__selectspecialchardialog_accept_callback(this);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (textaddonswidgets__selectspecialchardialog_reject_callback) {
            textaddonswidgets__selectspecialchardialog_reject_callback(this);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_keypressevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_closeevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_showevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_resizeevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textaddonswidgets__selectspecialchardialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textaddonswidgets__selectspecialchardialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textaddonswidgets__selectspecialchardialog_devtype_callback) {
            int callback_ret = textaddonswidgets__selectspecialchardialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textaddonswidgets__selectspecialchardialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textaddonswidgets__selectspecialchardialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textaddonswidgets__selectspecialchardialog_hasheightforwidth_callback) {
            bool callback_ret = textaddonswidgets__selectspecialchardialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textaddonswidgets__selectspecialchardialog_paintengine_callback) {
            QPaintEngine* callback_ret = textaddonswidgets__selectspecialchardialog_paintengine_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textaddonswidgets__selectspecialchardialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_mousepressevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_wheelevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_focusinevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_focusoutevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_enterevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_leaveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_paintevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_moveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_tabletevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_actionevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_dragenterevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_dropevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_hideevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textaddonswidgets__selectspecialchardialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textaddonswidgets__selectspecialchardialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_changeevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textaddonswidgets__selectspecialchardialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textaddonswidgets__selectspecialchardialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textaddonswidgets__selectspecialchardialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            textaddonswidgets__selectspecialchardialog_initpainter_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textaddonswidgets__selectspecialchardialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textaddonswidgets__selectspecialchardialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textaddonswidgets__selectspecialchardialog_sharedpainter_callback) {
            QPainter* callback_ret = textaddonswidgets__selectspecialchardialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textaddonswidgets__selectspecialchardialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textaddonswidgets__selectspecialchardialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textaddonswidgets__selectspecialchardialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textaddonswidgets__selectspecialchardialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textaddonswidgets__selectspecialchardialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textaddonswidgets__selectspecialchardialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextAddonsWidgets__SelectSpecialCharDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_timerevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_childevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textaddonswidgets__selectspecialchardialog_customevent_callback) {
            QEvent* cbval1 = event;
            textaddonswidgets__selectspecialchardialog_customevent_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__selectspecialchardialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textaddonswidgets__selectspecialchardialog_connectnotify_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textaddonswidgets__selectspecialchardialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textaddonswidgets__selectspecialchardialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextAddonsWidgets__SelectSpecialCharDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyPressEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QKeyEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperCloseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QCloseEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperShowEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QShowEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperResizeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QResizeEvent* param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperContextMenuEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QContextMenuEvent* param1);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEventFilter(TextAddonsWidgets::SelectSpecialCharDialog* self, QObject* param1, QEvent* param2);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMousePressEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseReleaseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseDoubleClickEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMouseEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperWheelEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QWheelEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyReleaseEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QKeyEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusInEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusOutEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QFocusEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperEnterEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEnterEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperLeaveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QPaintEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QMoveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperTabletEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QTabletEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperActionEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QActionEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragEnterEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragEnterEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragMoveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragMoveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragLeaveEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDragLeaveEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDropEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QDropEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperHideEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QHideEvent* event);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperNativeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperChangeEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* param1);
    friend int TextAddonsWidgets__SelectSpecialCharDialog_SuperMetric(const TextAddonsWidgets::SelectSpecialCharDialog* self, int param1);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperInitPainter(const TextAddonsWidgets::SelectSpecialCharDialog* self, QPainter* painter);
    friend QPaintDevice* TextAddonsWidgets__SelectSpecialCharDialog_SuperRedirected(const TextAddonsWidgets::SelectSpecialCharDialog* self, QPoint* offset);
    friend QPainter* TextAddonsWidgets__SelectSpecialCharDialog_SuperSharedPainter(const TextAddonsWidgets::SelectSpecialCharDialog* self);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QInputMethodEvent* param1);
    friend bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextPrevChild(TextAddonsWidgets::SelectSpecialCharDialog* self, bool next);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperTimerEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QTimerEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperChildEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QChildEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperCustomEvent(TextAddonsWidgets::SelectSpecialCharDialog* self, QEvent* event);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperConnectNotify(TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
    friend void TextAddonsWidgets__SelectSpecialCharDialog_SuperDisconnectNotify(TextAddonsWidgets::SelectSpecialCharDialog* self, const QMetaMethod* signal);
};

#endif
