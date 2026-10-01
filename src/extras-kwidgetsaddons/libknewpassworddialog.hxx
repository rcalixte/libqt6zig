#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKNEWPASSWORDDIALOG_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKNEWPASSWORDDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNewPasswordDialog
class VirtualKNewPasswordDialog final : public KNewPasswordDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNewPasswordDialog_MetaObject_Callback = QMetaObject* (*)(const KNewPasswordDialog*);
    using KNewPasswordDialog_Metacast_Callback = void* (*)(KNewPasswordDialog*, const char*);
    using KNewPasswordDialog_Metacall_Callback = int (*)(KNewPasswordDialog*, int, int, void**);
    using KNewPasswordDialog_Accept_Callback = void (*)(KNewPasswordDialog*);
    using KNewPasswordDialog_CheckPassword_Callback = bool (*)(KNewPasswordDialog*, const char*);
    using KNewPasswordDialog_SetVisible_Callback = void (*)(KNewPasswordDialog*, bool);
    using KNewPasswordDialog_SizeHint_Callback = QSize* (*)(const KNewPasswordDialog*);
    using KNewPasswordDialog_MinimumSizeHint_Callback = QSize* (*)(const KNewPasswordDialog*);
    using KNewPasswordDialog_Open_Callback = void (*)(KNewPasswordDialog*);
    using KNewPasswordDialog_Exec_Callback = int (*)(KNewPasswordDialog*);
    using KNewPasswordDialog_Done_Callback = void (*)(KNewPasswordDialog*, int);
    using KNewPasswordDialog_Reject_Callback = void (*)(KNewPasswordDialog*);
    using KNewPasswordDialog_KeyPressEvent_Callback = void (*)(KNewPasswordDialog*, QKeyEvent*);
    using KNewPasswordDialog_CloseEvent_Callback = void (*)(KNewPasswordDialog*, QCloseEvent*);
    using KNewPasswordDialog_ShowEvent_Callback = void (*)(KNewPasswordDialog*, QShowEvent*);
    using KNewPasswordDialog_ResizeEvent_Callback = void (*)(KNewPasswordDialog*, QResizeEvent*);
    using KNewPasswordDialog_ContextMenuEvent_Callback = void (*)(KNewPasswordDialog*, QContextMenuEvent*);
    using KNewPasswordDialog_EventFilter_Callback = bool (*)(KNewPasswordDialog*, QObject*, QEvent*);
    using KNewPasswordDialog_DevType_Callback = int (*)(const KNewPasswordDialog*);
    using KNewPasswordDialog_HeightForWidth_Callback = int (*)(const KNewPasswordDialog*, int);
    using KNewPasswordDialog_HasHeightForWidth_Callback = bool (*)(const KNewPasswordDialog*);
    using KNewPasswordDialog_PaintEngine_Callback = QPaintEngine* (*)(const KNewPasswordDialog*);
    using KNewPasswordDialog_Event_Callback = bool (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_MousePressEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_MouseReleaseEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_MouseDoubleClickEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_MouseMoveEvent_Callback = void (*)(KNewPasswordDialog*, QMouseEvent*);
    using KNewPasswordDialog_WheelEvent_Callback = void (*)(KNewPasswordDialog*, QWheelEvent*);
    using KNewPasswordDialog_KeyReleaseEvent_Callback = void (*)(KNewPasswordDialog*, QKeyEvent*);
    using KNewPasswordDialog_FocusInEvent_Callback = void (*)(KNewPasswordDialog*, QFocusEvent*);
    using KNewPasswordDialog_FocusOutEvent_Callback = void (*)(KNewPasswordDialog*, QFocusEvent*);
    using KNewPasswordDialog_EnterEvent_Callback = void (*)(KNewPasswordDialog*, QEnterEvent*);
    using KNewPasswordDialog_LeaveEvent_Callback = void (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_PaintEvent_Callback = void (*)(KNewPasswordDialog*, QPaintEvent*);
    using KNewPasswordDialog_MoveEvent_Callback = void (*)(KNewPasswordDialog*, QMoveEvent*);
    using KNewPasswordDialog_TabletEvent_Callback = void (*)(KNewPasswordDialog*, QTabletEvent*);
    using KNewPasswordDialog_ActionEvent_Callback = void (*)(KNewPasswordDialog*, QActionEvent*);
    using KNewPasswordDialog_DragEnterEvent_Callback = void (*)(KNewPasswordDialog*, QDragEnterEvent*);
    using KNewPasswordDialog_DragMoveEvent_Callback = void (*)(KNewPasswordDialog*, QDragMoveEvent*);
    using KNewPasswordDialog_DragLeaveEvent_Callback = void (*)(KNewPasswordDialog*, QDragLeaveEvent*);
    using KNewPasswordDialog_DropEvent_Callback = void (*)(KNewPasswordDialog*, QDropEvent*);
    using KNewPasswordDialog_HideEvent_Callback = void (*)(KNewPasswordDialog*, QHideEvent*);
    using KNewPasswordDialog_NativeEvent_Callback = bool (*)(KNewPasswordDialog*, libqt_string, void*, intptr_t*);
    using KNewPasswordDialog_ChangeEvent_Callback = void (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_Metric_Callback = int (*)(const KNewPasswordDialog*, int);
    using KNewPasswordDialog_InitPainter_Callback = void (*)(const KNewPasswordDialog*, QPainter*);
    using KNewPasswordDialog_Redirected_Callback = QPaintDevice* (*)(const KNewPasswordDialog*, QPoint*);
    using KNewPasswordDialog_SharedPainter_Callback = QPainter* (*)(const KNewPasswordDialog*);
    using KNewPasswordDialog_InputMethodEvent_Callback = void (*)(KNewPasswordDialog*, QInputMethodEvent*);
    using KNewPasswordDialog_InputMethodQuery_Callback = QVariant* (*)(const KNewPasswordDialog*, int);
    using KNewPasswordDialog_FocusNextPrevChild_Callback = bool (*)(KNewPasswordDialog*, bool);
    using KNewPasswordDialog_TimerEvent_Callback = void (*)(KNewPasswordDialog*, QTimerEvent*);
    using KNewPasswordDialog_ChildEvent_Callback = void (*)(KNewPasswordDialog*, QChildEvent*);
    using KNewPasswordDialog_CustomEvent_Callback = void (*)(KNewPasswordDialog*, QEvent*);
    using KNewPasswordDialog_ConnectNotify_Callback = void (*)(KNewPasswordDialog*, QMetaMethod*);
    using KNewPasswordDialog_DisconnectNotify_Callback = void (*)(KNewPasswordDialog*, QMetaMethod*);
    using KNewPasswordDialog::adjustPosition;
    using KNewPasswordDialog::create;
    using KNewPasswordDialog::destroy;
    using KNewPasswordDialog::focusNextChild;
    using KNewPasswordDialog::focusPreviousChild;
    using KNewPasswordDialog::getDecodedMetricF;
    using KNewPasswordDialog::isSignalConnected;
    using KNewPasswordDialog::receivers;
    using KNewPasswordDialog::sender;
    using KNewPasswordDialog::senderSignalIndex;
    using KNewPasswordDialog::updateMicroFocus;

    // Instance callback storage
    KNewPasswordDialog_MetaObject_Callback knewpassworddialog_metaobject_callback = nullptr;
    KNewPasswordDialog_Metacast_Callback knewpassworddialog_metacast_callback = nullptr;
    KNewPasswordDialog_Metacall_Callback knewpassworddialog_metacall_callback = nullptr;
    KNewPasswordDialog_Accept_Callback knewpassworddialog_accept_callback = nullptr;
    KNewPasswordDialog_CheckPassword_Callback knewpassworddialog_checkpassword_callback = nullptr;
    KNewPasswordDialog_SetVisible_Callback knewpassworddialog_setvisible_callback = nullptr;
    KNewPasswordDialog_SizeHint_Callback knewpassworddialog_sizehint_callback = nullptr;
    KNewPasswordDialog_MinimumSizeHint_Callback knewpassworddialog_minimumsizehint_callback = nullptr;
    KNewPasswordDialog_Open_Callback knewpassworddialog_open_callback = nullptr;
    KNewPasswordDialog_Exec_Callback knewpassworddialog_exec_callback = nullptr;
    KNewPasswordDialog_Done_Callback knewpassworddialog_done_callback = nullptr;
    KNewPasswordDialog_Reject_Callback knewpassworddialog_reject_callback = nullptr;
    KNewPasswordDialog_KeyPressEvent_Callback knewpassworddialog_keypressevent_callback = nullptr;
    KNewPasswordDialog_CloseEvent_Callback knewpassworddialog_closeevent_callback = nullptr;
    KNewPasswordDialog_ShowEvent_Callback knewpassworddialog_showevent_callback = nullptr;
    KNewPasswordDialog_ResizeEvent_Callback knewpassworddialog_resizeevent_callback = nullptr;
    KNewPasswordDialog_ContextMenuEvent_Callback knewpassworddialog_contextmenuevent_callback = nullptr;
    KNewPasswordDialog_EventFilter_Callback knewpassworddialog_eventfilter_callback = nullptr;
    KNewPasswordDialog_DevType_Callback knewpassworddialog_devtype_callback = nullptr;
    KNewPasswordDialog_HeightForWidth_Callback knewpassworddialog_heightforwidth_callback = nullptr;
    KNewPasswordDialog_HasHeightForWidth_Callback knewpassworddialog_hasheightforwidth_callback = nullptr;
    KNewPasswordDialog_PaintEngine_Callback knewpassworddialog_paintengine_callback = nullptr;
    KNewPasswordDialog_Event_Callback knewpassworddialog_event_callback = nullptr;
    KNewPasswordDialog_MousePressEvent_Callback knewpassworddialog_mousepressevent_callback = nullptr;
    KNewPasswordDialog_MouseReleaseEvent_Callback knewpassworddialog_mousereleaseevent_callback = nullptr;
    KNewPasswordDialog_MouseDoubleClickEvent_Callback knewpassworddialog_mousedoubleclickevent_callback = nullptr;
    KNewPasswordDialog_MouseMoveEvent_Callback knewpassworddialog_mousemoveevent_callback = nullptr;
    KNewPasswordDialog_WheelEvent_Callback knewpassworddialog_wheelevent_callback = nullptr;
    KNewPasswordDialog_KeyReleaseEvent_Callback knewpassworddialog_keyreleaseevent_callback = nullptr;
    KNewPasswordDialog_FocusInEvent_Callback knewpassworddialog_focusinevent_callback = nullptr;
    KNewPasswordDialog_FocusOutEvent_Callback knewpassworddialog_focusoutevent_callback = nullptr;
    KNewPasswordDialog_EnterEvent_Callback knewpassworddialog_enterevent_callback = nullptr;
    KNewPasswordDialog_LeaveEvent_Callback knewpassworddialog_leaveevent_callback = nullptr;
    KNewPasswordDialog_PaintEvent_Callback knewpassworddialog_paintevent_callback = nullptr;
    KNewPasswordDialog_MoveEvent_Callback knewpassworddialog_moveevent_callback = nullptr;
    KNewPasswordDialog_TabletEvent_Callback knewpassworddialog_tabletevent_callback = nullptr;
    KNewPasswordDialog_ActionEvent_Callback knewpassworddialog_actionevent_callback = nullptr;
    KNewPasswordDialog_DragEnterEvent_Callback knewpassworddialog_dragenterevent_callback = nullptr;
    KNewPasswordDialog_DragMoveEvent_Callback knewpassworddialog_dragmoveevent_callback = nullptr;
    KNewPasswordDialog_DragLeaveEvent_Callback knewpassworddialog_dragleaveevent_callback = nullptr;
    KNewPasswordDialog_DropEvent_Callback knewpassworddialog_dropevent_callback = nullptr;
    KNewPasswordDialog_HideEvent_Callback knewpassworddialog_hideevent_callback = nullptr;
    KNewPasswordDialog_NativeEvent_Callback knewpassworddialog_nativeevent_callback = nullptr;
    KNewPasswordDialog_ChangeEvent_Callback knewpassworddialog_changeevent_callback = nullptr;
    KNewPasswordDialog_Metric_Callback knewpassworddialog_metric_callback = nullptr;
    KNewPasswordDialog_InitPainter_Callback knewpassworddialog_initpainter_callback = nullptr;
    KNewPasswordDialog_Redirected_Callback knewpassworddialog_redirected_callback = nullptr;
    KNewPasswordDialog_SharedPainter_Callback knewpassworddialog_sharedpainter_callback = nullptr;
    KNewPasswordDialog_InputMethodEvent_Callback knewpassworddialog_inputmethodevent_callback = nullptr;
    KNewPasswordDialog_InputMethodQuery_Callback knewpassworddialog_inputmethodquery_callback = nullptr;
    KNewPasswordDialog_FocusNextPrevChild_Callback knewpassworddialog_focusnextprevchild_callback = nullptr;
    KNewPasswordDialog_TimerEvent_Callback knewpassworddialog_timerevent_callback = nullptr;
    KNewPasswordDialog_ChildEvent_Callback knewpassworddialog_childevent_callback = nullptr;
    KNewPasswordDialog_CustomEvent_Callback knewpassworddialog_customevent_callback = nullptr;
    KNewPasswordDialog_ConnectNotify_Callback knewpassworddialog_connectnotify_callback = nullptr;
    KNewPasswordDialog_DisconnectNotify_Callback knewpassworddialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNewPasswordDialog {
        using KNewPasswordDialog::actionEvent;
        using KNewPasswordDialog::changeEvent;
        using KNewPasswordDialog::checkPassword;
        using KNewPasswordDialog::childEvent;
        using KNewPasswordDialog::closeEvent;
        using KNewPasswordDialog::connectNotify;
        using KNewPasswordDialog::contextMenuEvent;
        using KNewPasswordDialog::customEvent;
        using KNewPasswordDialog::disconnectNotify;
        using KNewPasswordDialog::dragEnterEvent;
        using KNewPasswordDialog::dragLeaveEvent;
        using KNewPasswordDialog::dragMoveEvent;
        using KNewPasswordDialog::dropEvent;
        using KNewPasswordDialog::enterEvent;
        using KNewPasswordDialog::event;
        using KNewPasswordDialog::eventFilter;
        using KNewPasswordDialog::focusInEvent;
        using KNewPasswordDialog::focusNextPrevChild;
        using KNewPasswordDialog::focusOutEvent;
        using KNewPasswordDialog::hideEvent;
        using KNewPasswordDialog::initPainter;
        using KNewPasswordDialog::inputMethodEvent;
        using KNewPasswordDialog::keyPressEvent;
        using KNewPasswordDialog::keyReleaseEvent;
        using KNewPasswordDialog::leaveEvent;
        using KNewPasswordDialog::metric;
        using KNewPasswordDialog::mouseDoubleClickEvent;
        using KNewPasswordDialog::mouseMoveEvent;
        using KNewPasswordDialog::mousePressEvent;
        using KNewPasswordDialog::mouseReleaseEvent;
        using KNewPasswordDialog::moveEvent;
        using KNewPasswordDialog::nativeEvent;
        using KNewPasswordDialog::paintEvent;
        using KNewPasswordDialog::redirected;
        using KNewPasswordDialog::resizeEvent;
        using KNewPasswordDialog::sharedPainter;
        using KNewPasswordDialog::showEvent;
        using KNewPasswordDialog::tabletEvent;
        using KNewPasswordDialog::timerEvent;
        using KNewPasswordDialog::wheelEvent;
    };

    VirtualKNewPasswordDialog(QWidget* parent) : KNewPasswordDialog(parent) {};
    VirtualKNewPasswordDialog() : KNewPasswordDialog() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knewpassworddialog_metaobject_callback) {
            QMetaObject* callback_ret = knewpassworddialog_metaobject_callback(this);
            return callback_ret;
        }
        return KNewPasswordDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knewpassworddialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knewpassworddialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knewpassworddialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knewpassworddialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (knewpassworddialog_accept_callback) {
            knewpassworddialog_accept_callback(this);
            return;
        }
        KNewPasswordDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkPassword(const QString& param1) override {
        if (knewpassworddialog_checkpassword_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            bool callback_ret = knewpassworddialog_checkpassword_callback(this, cbval1);
            libqt_free(param1_str);
            return callback_ret;
        }
        return KNewPasswordDialog::checkPassword(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knewpassworddialog_setvisible_callback) {
            bool cbval1 = visible;
            knewpassworddialog_setvisible_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knewpassworddialog_sizehint_callback) {
            QSize* callback_ret = knewpassworddialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNewPasswordDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knewpassworddialog_minimumsizehint_callback) {
            QSize* callback_ret = knewpassworddialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNewPasswordDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (knewpassworddialog_open_callback) {
            knewpassworddialog_open_callback(this);
            return;
        }
        KNewPasswordDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (knewpassworddialog_exec_callback) {
            int callback_ret = knewpassworddialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (knewpassworddialog_done_callback) {
            int cbval1 = param1;
            knewpassworddialog_done_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (knewpassworddialog_reject_callback) {
            knewpassworddialog_reject_callback(this);
            return;
        }
        KNewPasswordDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knewpassworddialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            knewpassworddialog_keypressevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (knewpassworddialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            knewpassworddialog_closeevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (knewpassworddialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            knewpassworddialog_showevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (knewpassworddialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            knewpassworddialog_resizeevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (knewpassworddialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            knewpassworddialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (knewpassworddialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = knewpassworddialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNewPasswordDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knewpassworddialog_devtype_callback) {
            int callback_ret = knewpassworddialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knewpassworddialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = knewpassworddialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knewpassworddialog_hasheightforwidth_callback) {
            bool callback_ret = knewpassworddialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KNewPasswordDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knewpassworddialog_paintengine_callback) {
            QPaintEngine* callback_ret = knewpassworddialog_paintengine_callback(this);
            return callback_ret;
        }
        return KNewPasswordDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knewpassworddialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knewpassworddialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpassworddialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpassworddialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpassworddialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (knewpassworddialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            knewpassworddialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knewpassworddialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            knewpassworddialog_wheelevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (knewpassworddialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            knewpassworddialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (knewpassworddialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            knewpassworddialog_focusinevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (knewpassworddialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            knewpassworddialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knewpassworddialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            knewpassworddialog_enterevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knewpassworddialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            knewpassworddialog_leaveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (knewpassworddialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            knewpassworddialog_paintevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knewpassworddialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            knewpassworddialog_moveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knewpassworddialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            knewpassworddialog_tabletevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knewpassworddialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            knewpassworddialog_actionevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knewpassworddialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            knewpassworddialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knewpassworddialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            knewpassworddialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knewpassworddialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            knewpassworddialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knewpassworddialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            knewpassworddialog_dropevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knewpassworddialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            knewpassworddialog_hideevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knewpassworddialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = knewpassworddialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KNewPasswordDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (knewpassworddialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            knewpassworddialog_changeevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knewpassworddialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = knewpassworddialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNewPasswordDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knewpassworddialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            knewpassworddialog_initpainter_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knewpassworddialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = knewpassworddialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knewpassworddialog_sharedpainter_callback) {
            QPainter* callback_ret = knewpassworddialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KNewPasswordDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knewpassworddialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            knewpassworddialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knewpassworddialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = knewpassworddialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNewPasswordDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knewpassworddialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = knewpassworddialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KNewPasswordDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knewpassworddialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knewpassworddialog_timerevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knewpassworddialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            knewpassworddialog_childevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knewpassworddialog_customevent_callback) {
            QEvent* cbval1 = event;
            knewpassworddialog_customevent_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knewpassworddialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knewpassworddialog_connectnotify_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knewpassworddialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knewpassworddialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNewPasswordDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KNewPasswordDialog_SuperCheckPassword(KNewPasswordDialog* self, const libqt_string param1);
    friend void KNewPasswordDialog_SuperKeyPressEvent(KNewPasswordDialog* self, QKeyEvent* param1);
    friend void KNewPasswordDialog_SuperCloseEvent(KNewPasswordDialog* self, QCloseEvent* param1);
    friend void KNewPasswordDialog_SuperShowEvent(KNewPasswordDialog* self, QShowEvent* param1);
    friend void KNewPasswordDialog_SuperResizeEvent(KNewPasswordDialog* self, QResizeEvent* param1);
    friend void KNewPasswordDialog_SuperContextMenuEvent(KNewPasswordDialog* self, QContextMenuEvent* param1);
    friend bool KNewPasswordDialog_SuperEventFilter(KNewPasswordDialog* self, QObject* param1, QEvent* param2);
    friend bool KNewPasswordDialog_SuperEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_SuperMousePressEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_SuperMouseReleaseEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_SuperMouseDoubleClickEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_SuperMouseMoveEvent(KNewPasswordDialog* self, QMouseEvent* event);
    friend void KNewPasswordDialog_SuperWheelEvent(KNewPasswordDialog* self, QWheelEvent* event);
    friend void KNewPasswordDialog_SuperKeyReleaseEvent(KNewPasswordDialog* self, QKeyEvent* event);
    friend void KNewPasswordDialog_SuperFocusInEvent(KNewPasswordDialog* self, QFocusEvent* event);
    friend void KNewPasswordDialog_SuperFocusOutEvent(KNewPasswordDialog* self, QFocusEvent* event);
    friend void KNewPasswordDialog_SuperEnterEvent(KNewPasswordDialog* self, QEnterEvent* event);
    friend void KNewPasswordDialog_SuperLeaveEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_SuperPaintEvent(KNewPasswordDialog* self, QPaintEvent* event);
    friend void KNewPasswordDialog_SuperMoveEvent(KNewPasswordDialog* self, QMoveEvent* event);
    friend void KNewPasswordDialog_SuperTabletEvent(KNewPasswordDialog* self, QTabletEvent* event);
    friend void KNewPasswordDialog_SuperActionEvent(KNewPasswordDialog* self, QActionEvent* event);
    friend void KNewPasswordDialog_SuperDragEnterEvent(KNewPasswordDialog* self, QDragEnterEvent* event);
    friend void KNewPasswordDialog_SuperDragMoveEvent(KNewPasswordDialog* self, QDragMoveEvent* event);
    friend void KNewPasswordDialog_SuperDragLeaveEvent(KNewPasswordDialog* self, QDragLeaveEvent* event);
    friend void KNewPasswordDialog_SuperDropEvent(KNewPasswordDialog* self, QDropEvent* event);
    friend void KNewPasswordDialog_SuperHideEvent(KNewPasswordDialog* self, QHideEvent* event);
    friend bool KNewPasswordDialog_SuperNativeEvent(KNewPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KNewPasswordDialog_SuperChangeEvent(KNewPasswordDialog* self, QEvent* param1);
    friend int KNewPasswordDialog_SuperMetric(const KNewPasswordDialog* self, int param1);
    friend void KNewPasswordDialog_SuperInitPainter(const KNewPasswordDialog* self, QPainter* painter);
    friend QPaintDevice* KNewPasswordDialog_SuperRedirected(const KNewPasswordDialog* self, QPoint* offset);
    friend QPainter* KNewPasswordDialog_SuperSharedPainter(const KNewPasswordDialog* self);
    friend void KNewPasswordDialog_SuperInputMethodEvent(KNewPasswordDialog* self, QInputMethodEvent* param1);
    friend bool KNewPasswordDialog_SuperFocusNextPrevChild(KNewPasswordDialog* self, bool next);
    friend void KNewPasswordDialog_SuperTimerEvent(KNewPasswordDialog* self, QTimerEvent* event);
    friend void KNewPasswordDialog_SuperChildEvent(KNewPasswordDialog* self, QChildEvent* event);
    friend void KNewPasswordDialog_SuperCustomEvent(KNewPasswordDialog* self, QEvent* event);
    friend void KNewPasswordDialog_SuperConnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal);
    friend void KNewPasswordDialog_SuperDisconnectNotify(KNewPasswordDialog* self, const QMetaMethod* signal);
};

#endif
