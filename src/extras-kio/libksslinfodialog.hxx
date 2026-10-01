#pragma once
#ifndef EXTRAS_KIO_LIBKSSLINFODIALOG_HXX
#define EXTRAS_KIO_LIBKSSLINFODIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSslInfoDialog
class VirtualKSslInfoDialog final : public KSslInfoDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSslInfoDialog_MetaObject_Callback = QMetaObject* (*)(const KSslInfoDialog*);
    using KSslInfoDialog_Metacast_Callback = void* (*)(KSslInfoDialog*, const char*);
    using KSslInfoDialog_Metacall_Callback = int (*)(KSslInfoDialog*, int, int, void**);
    using KSslInfoDialog_SetVisible_Callback = void (*)(KSslInfoDialog*, bool);
    using KSslInfoDialog_SizeHint_Callback = QSize* (*)(const KSslInfoDialog*);
    using KSslInfoDialog_MinimumSizeHint_Callback = QSize* (*)(const KSslInfoDialog*);
    using KSslInfoDialog_Open_Callback = void (*)(KSslInfoDialog*);
    using KSslInfoDialog_Exec_Callback = int (*)(KSslInfoDialog*);
    using KSslInfoDialog_Done_Callback = void (*)(KSslInfoDialog*, int);
    using KSslInfoDialog_Accept_Callback = void (*)(KSslInfoDialog*);
    using KSslInfoDialog_Reject_Callback = void (*)(KSslInfoDialog*);
    using KSslInfoDialog_KeyPressEvent_Callback = void (*)(KSslInfoDialog*, QKeyEvent*);
    using KSslInfoDialog_CloseEvent_Callback = void (*)(KSslInfoDialog*, QCloseEvent*);
    using KSslInfoDialog_ShowEvent_Callback = void (*)(KSslInfoDialog*, QShowEvent*);
    using KSslInfoDialog_ResizeEvent_Callback = void (*)(KSslInfoDialog*, QResizeEvent*);
    using KSslInfoDialog_ContextMenuEvent_Callback = void (*)(KSslInfoDialog*, QContextMenuEvent*);
    using KSslInfoDialog_EventFilter_Callback = bool (*)(KSslInfoDialog*, QObject*, QEvent*);
    using KSslInfoDialog_DevType_Callback = int (*)(const KSslInfoDialog*);
    using KSslInfoDialog_HeightForWidth_Callback = int (*)(const KSslInfoDialog*, int);
    using KSslInfoDialog_HasHeightForWidth_Callback = bool (*)(const KSslInfoDialog*);
    using KSslInfoDialog_PaintEngine_Callback = QPaintEngine* (*)(const KSslInfoDialog*);
    using KSslInfoDialog_Event_Callback = bool (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_MousePressEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_MouseReleaseEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_MouseDoubleClickEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_MouseMoveEvent_Callback = void (*)(KSslInfoDialog*, QMouseEvent*);
    using KSslInfoDialog_WheelEvent_Callback = void (*)(KSslInfoDialog*, QWheelEvent*);
    using KSslInfoDialog_KeyReleaseEvent_Callback = void (*)(KSslInfoDialog*, QKeyEvent*);
    using KSslInfoDialog_FocusInEvent_Callback = void (*)(KSslInfoDialog*, QFocusEvent*);
    using KSslInfoDialog_FocusOutEvent_Callback = void (*)(KSslInfoDialog*, QFocusEvent*);
    using KSslInfoDialog_EnterEvent_Callback = void (*)(KSslInfoDialog*, QEnterEvent*);
    using KSslInfoDialog_LeaveEvent_Callback = void (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_PaintEvent_Callback = void (*)(KSslInfoDialog*, QPaintEvent*);
    using KSslInfoDialog_MoveEvent_Callback = void (*)(KSslInfoDialog*, QMoveEvent*);
    using KSslInfoDialog_TabletEvent_Callback = void (*)(KSslInfoDialog*, QTabletEvent*);
    using KSslInfoDialog_ActionEvent_Callback = void (*)(KSslInfoDialog*, QActionEvent*);
    using KSslInfoDialog_DragEnterEvent_Callback = void (*)(KSslInfoDialog*, QDragEnterEvent*);
    using KSslInfoDialog_DragMoveEvent_Callback = void (*)(KSslInfoDialog*, QDragMoveEvent*);
    using KSslInfoDialog_DragLeaveEvent_Callback = void (*)(KSslInfoDialog*, QDragLeaveEvent*);
    using KSslInfoDialog_DropEvent_Callback = void (*)(KSslInfoDialog*, QDropEvent*);
    using KSslInfoDialog_HideEvent_Callback = void (*)(KSslInfoDialog*, QHideEvent*);
    using KSslInfoDialog_NativeEvent_Callback = bool (*)(KSslInfoDialog*, libqt_string, void*, intptr_t*);
    using KSslInfoDialog_ChangeEvent_Callback = void (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_Metric_Callback = int (*)(const KSslInfoDialog*, int);
    using KSslInfoDialog_InitPainter_Callback = void (*)(const KSslInfoDialog*, QPainter*);
    using KSslInfoDialog_Redirected_Callback = QPaintDevice* (*)(const KSslInfoDialog*, QPoint*);
    using KSslInfoDialog_SharedPainter_Callback = QPainter* (*)(const KSslInfoDialog*);
    using KSslInfoDialog_InputMethodEvent_Callback = void (*)(KSslInfoDialog*, QInputMethodEvent*);
    using KSslInfoDialog_InputMethodQuery_Callback = QVariant* (*)(const KSslInfoDialog*, int);
    using KSslInfoDialog_FocusNextPrevChild_Callback = bool (*)(KSslInfoDialog*, bool);
    using KSslInfoDialog_TimerEvent_Callback = void (*)(KSslInfoDialog*, QTimerEvent*);
    using KSslInfoDialog_ChildEvent_Callback = void (*)(KSslInfoDialog*, QChildEvent*);
    using KSslInfoDialog_CustomEvent_Callback = void (*)(KSslInfoDialog*, QEvent*);
    using KSslInfoDialog_ConnectNotify_Callback = void (*)(KSslInfoDialog*, QMetaMethod*);
    using KSslInfoDialog_DisconnectNotify_Callback = void (*)(KSslInfoDialog*, QMetaMethod*);
    using KSslInfoDialog::adjustPosition;
    using KSslInfoDialog::create;
    using KSslInfoDialog::destroy;
    using KSslInfoDialog::focusNextChild;
    using KSslInfoDialog::focusPreviousChild;
    using KSslInfoDialog::getDecodedMetricF;
    using KSslInfoDialog::isSignalConnected;
    using KSslInfoDialog::receivers;
    using KSslInfoDialog::sender;
    using KSslInfoDialog::senderSignalIndex;
    using KSslInfoDialog::updateMicroFocus;

    // Instance callback storage
    KSslInfoDialog_MetaObject_Callback ksslinfodialog_metaobject_callback = nullptr;
    KSslInfoDialog_Metacast_Callback ksslinfodialog_metacast_callback = nullptr;
    KSslInfoDialog_Metacall_Callback ksslinfodialog_metacall_callback = nullptr;
    KSslInfoDialog_SetVisible_Callback ksslinfodialog_setvisible_callback = nullptr;
    KSslInfoDialog_SizeHint_Callback ksslinfodialog_sizehint_callback = nullptr;
    KSslInfoDialog_MinimumSizeHint_Callback ksslinfodialog_minimumsizehint_callback = nullptr;
    KSslInfoDialog_Open_Callback ksslinfodialog_open_callback = nullptr;
    KSslInfoDialog_Exec_Callback ksslinfodialog_exec_callback = nullptr;
    KSslInfoDialog_Done_Callback ksslinfodialog_done_callback = nullptr;
    KSslInfoDialog_Accept_Callback ksslinfodialog_accept_callback = nullptr;
    KSslInfoDialog_Reject_Callback ksslinfodialog_reject_callback = nullptr;
    KSslInfoDialog_KeyPressEvent_Callback ksslinfodialog_keypressevent_callback = nullptr;
    KSslInfoDialog_CloseEvent_Callback ksslinfodialog_closeevent_callback = nullptr;
    KSslInfoDialog_ShowEvent_Callback ksslinfodialog_showevent_callback = nullptr;
    KSslInfoDialog_ResizeEvent_Callback ksslinfodialog_resizeevent_callback = nullptr;
    KSslInfoDialog_ContextMenuEvent_Callback ksslinfodialog_contextmenuevent_callback = nullptr;
    KSslInfoDialog_EventFilter_Callback ksslinfodialog_eventfilter_callback = nullptr;
    KSslInfoDialog_DevType_Callback ksslinfodialog_devtype_callback = nullptr;
    KSslInfoDialog_HeightForWidth_Callback ksslinfodialog_heightforwidth_callback = nullptr;
    KSslInfoDialog_HasHeightForWidth_Callback ksslinfodialog_hasheightforwidth_callback = nullptr;
    KSslInfoDialog_PaintEngine_Callback ksslinfodialog_paintengine_callback = nullptr;
    KSslInfoDialog_Event_Callback ksslinfodialog_event_callback = nullptr;
    KSslInfoDialog_MousePressEvent_Callback ksslinfodialog_mousepressevent_callback = nullptr;
    KSslInfoDialog_MouseReleaseEvent_Callback ksslinfodialog_mousereleaseevent_callback = nullptr;
    KSslInfoDialog_MouseDoubleClickEvent_Callback ksslinfodialog_mousedoubleclickevent_callback = nullptr;
    KSslInfoDialog_MouseMoveEvent_Callback ksslinfodialog_mousemoveevent_callback = nullptr;
    KSslInfoDialog_WheelEvent_Callback ksslinfodialog_wheelevent_callback = nullptr;
    KSslInfoDialog_KeyReleaseEvent_Callback ksslinfodialog_keyreleaseevent_callback = nullptr;
    KSslInfoDialog_FocusInEvent_Callback ksslinfodialog_focusinevent_callback = nullptr;
    KSslInfoDialog_FocusOutEvent_Callback ksslinfodialog_focusoutevent_callback = nullptr;
    KSslInfoDialog_EnterEvent_Callback ksslinfodialog_enterevent_callback = nullptr;
    KSslInfoDialog_LeaveEvent_Callback ksslinfodialog_leaveevent_callback = nullptr;
    KSslInfoDialog_PaintEvent_Callback ksslinfodialog_paintevent_callback = nullptr;
    KSslInfoDialog_MoveEvent_Callback ksslinfodialog_moveevent_callback = nullptr;
    KSslInfoDialog_TabletEvent_Callback ksslinfodialog_tabletevent_callback = nullptr;
    KSslInfoDialog_ActionEvent_Callback ksslinfodialog_actionevent_callback = nullptr;
    KSslInfoDialog_DragEnterEvent_Callback ksslinfodialog_dragenterevent_callback = nullptr;
    KSslInfoDialog_DragMoveEvent_Callback ksslinfodialog_dragmoveevent_callback = nullptr;
    KSslInfoDialog_DragLeaveEvent_Callback ksslinfodialog_dragleaveevent_callback = nullptr;
    KSslInfoDialog_DropEvent_Callback ksslinfodialog_dropevent_callback = nullptr;
    KSslInfoDialog_HideEvent_Callback ksslinfodialog_hideevent_callback = nullptr;
    KSslInfoDialog_NativeEvent_Callback ksslinfodialog_nativeevent_callback = nullptr;
    KSslInfoDialog_ChangeEvent_Callback ksslinfodialog_changeevent_callback = nullptr;
    KSslInfoDialog_Metric_Callback ksslinfodialog_metric_callback = nullptr;
    KSslInfoDialog_InitPainter_Callback ksslinfodialog_initpainter_callback = nullptr;
    KSslInfoDialog_Redirected_Callback ksslinfodialog_redirected_callback = nullptr;
    KSslInfoDialog_SharedPainter_Callback ksslinfodialog_sharedpainter_callback = nullptr;
    KSslInfoDialog_InputMethodEvent_Callback ksslinfodialog_inputmethodevent_callback = nullptr;
    KSslInfoDialog_InputMethodQuery_Callback ksslinfodialog_inputmethodquery_callback = nullptr;
    KSslInfoDialog_FocusNextPrevChild_Callback ksslinfodialog_focusnextprevchild_callback = nullptr;
    KSslInfoDialog_TimerEvent_Callback ksslinfodialog_timerevent_callback = nullptr;
    KSslInfoDialog_ChildEvent_Callback ksslinfodialog_childevent_callback = nullptr;
    KSslInfoDialog_CustomEvent_Callback ksslinfodialog_customevent_callback = nullptr;
    KSslInfoDialog_ConnectNotify_Callback ksslinfodialog_connectnotify_callback = nullptr;
    KSslInfoDialog_DisconnectNotify_Callback ksslinfodialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSslInfoDialog {
        using KSslInfoDialog::actionEvent;
        using KSslInfoDialog::changeEvent;
        using KSslInfoDialog::childEvent;
        using KSslInfoDialog::closeEvent;
        using KSslInfoDialog::connectNotify;
        using KSslInfoDialog::contextMenuEvent;
        using KSslInfoDialog::customEvent;
        using KSslInfoDialog::disconnectNotify;
        using KSslInfoDialog::dragEnterEvent;
        using KSslInfoDialog::dragLeaveEvent;
        using KSslInfoDialog::dragMoveEvent;
        using KSslInfoDialog::dropEvent;
        using KSslInfoDialog::enterEvent;
        using KSslInfoDialog::event;
        using KSslInfoDialog::eventFilter;
        using KSslInfoDialog::focusInEvent;
        using KSslInfoDialog::focusNextPrevChild;
        using KSslInfoDialog::focusOutEvent;
        using KSslInfoDialog::hideEvent;
        using KSslInfoDialog::initPainter;
        using KSslInfoDialog::inputMethodEvent;
        using KSslInfoDialog::keyPressEvent;
        using KSslInfoDialog::keyReleaseEvent;
        using KSslInfoDialog::leaveEvent;
        using KSslInfoDialog::metric;
        using KSslInfoDialog::mouseDoubleClickEvent;
        using KSslInfoDialog::mouseMoveEvent;
        using KSslInfoDialog::mousePressEvent;
        using KSslInfoDialog::mouseReleaseEvent;
        using KSslInfoDialog::moveEvent;
        using KSslInfoDialog::nativeEvent;
        using KSslInfoDialog::paintEvent;
        using KSslInfoDialog::redirected;
        using KSslInfoDialog::resizeEvent;
        using KSslInfoDialog::sharedPainter;
        using KSslInfoDialog::showEvent;
        using KSslInfoDialog::tabletEvent;
        using KSslInfoDialog::timerEvent;
        using KSslInfoDialog::wheelEvent;
    };

    VirtualKSslInfoDialog(QWidget* parent) : KSslInfoDialog(parent) {};
    VirtualKSslInfoDialog() : KSslInfoDialog() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksslinfodialog_metaobject_callback) {
            QMetaObject* callback_ret = ksslinfodialog_metaobject_callback(this);
            return callback_ret;
        }
        return KSslInfoDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksslinfodialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksslinfodialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSslInfoDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksslinfodialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksslinfodialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSslInfoDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksslinfodialog_setvisible_callback) {
            bool cbval1 = visible;
            ksslinfodialog_setvisible_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksslinfodialog_sizehint_callback) {
            QSize* callback_ret = ksslinfodialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSslInfoDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksslinfodialog_minimumsizehint_callback) {
            QSize* callback_ret = ksslinfodialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSslInfoDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (ksslinfodialog_open_callback) {
            ksslinfodialog_open_callback(this);
            return;
        }
        KSslInfoDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (ksslinfodialog_exec_callback) {
            int callback_ret = ksslinfodialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KSslInfoDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (ksslinfodialog_done_callback) {
            int cbval1 = param1;
            ksslinfodialog_done_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (ksslinfodialog_accept_callback) {
            ksslinfodialog_accept_callback(this);
            return;
        }
        KSslInfoDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (ksslinfodialog_reject_callback) {
            ksslinfodialog_reject_callback(this);
            return;
        }
        KSslInfoDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (ksslinfodialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            ksslinfodialog_keypressevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (ksslinfodialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            ksslinfodialog_closeevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (ksslinfodialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            ksslinfodialog_showevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (ksslinfodialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            ksslinfodialog_resizeevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ksslinfodialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            ksslinfodialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ksslinfodialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = ksslinfodialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSslInfoDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksslinfodialog_devtype_callback) {
            int callback_ret = ksslinfodialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KSslInfoDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksslinfodialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ksslinfodialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSslInfoDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksslinfodialog_hasheightforwidth_callback) {
            bool callback_ret = ksslinfodialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KSslInfoDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksslinfodialog_paintengine_callback) {
            QPaintEngine* callback_ret = ksslinfodialog_paintengine_callback(this);
            return callback_ret;
        }
        return KSslInfoDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksslinfodialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksslinfodialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSslInfoDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslinfodialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslinfodialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslinfodialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ksslinfodialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslinfodialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksslinfodialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ksslinfodialog_wheelevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ksslinfodialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ksslinfodialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ksslinfodialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ksslinfodialog_focusinevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ksslinfodialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ksslinfodialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksslinfodialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ksslinfodialog_enterevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksslinfodialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            ksslinfodialog_leaveevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ksslinfodialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            ksslinfodialog_paintevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksslinfodialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ksslinfodialog_moveevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksslinfodialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ksslinfodialog_tabletevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ksslinfodialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ksslinfodialog_actionevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksslinfodialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ksslinfodialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksslinfodialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ksslinfodialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksslinfodialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ksslinfodialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksslinfodialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ksslinfodialog_dropevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksslinfodialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ksslinfodialog_hideevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksslinfodialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ksslinfodialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KSslInfoDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksslinfodialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            ksslinfodialog_changeevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksslinfodialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ksslinfodialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSslInfoDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksslinfodialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            ksslinfodialog_initpainter_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksslinfodialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ksslinfodialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KSslInfoDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksslinfodialog_sharedpainter_callback) {
            QPainter* callback_ret = ksslinfodialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KSslInfoDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksslinfodialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ksslinfodialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksslinfodialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ksslinfodialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSslInfoDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksslinfodialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ksslinfodialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KSslInfoDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksslinfodialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksslinfodialog_timerevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksslinfodialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksslinfodialog_childevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksslinfodialog_customevent_callback) {
            QEvent* cbval1 = event;
            ksslinfodialog_customevent_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksslinfodialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksslinfodialog_connectnotify_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksslinfodialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksslinfodialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSslInfoDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void KSslInfoDialog_SuperKeyPressEvent(KSslInfoDialog* self, QKeyEvent* param1);
    friend void KSslInfoDialog_SuperCloseEvent(KSslInfoDialog* self, QCloseEvent* param1);
    friend void KSslInfoDialog_SuperShowEvent(KSslInfoDialog* self, QShowEvent* param1);
    friend void KSslInfoDialog_SuperResizeEvent(KSslInfoDialog* self, QResizeEvent* param1);
    friend void KSslInfoDialog_SuperContextMenuEvent(KSslInfoDialog* self, QContextMenuEvent* param1);
    friend bool KSslInfoDialog_SuperEventFilter(KSslInfoDialog* self, QObject* param1, QEvent* param2);
    friend bool KSslInfoDialog_SuperEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_SuperMousePressEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_SuperMouseReleaseEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_SuperMouseDoubleClickEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_SuperMouseMoveEvent(KSslInfoDialog* self, QMouseEvent* event);
    friend void KSslInfoDialog_SuperWheelEvent(KSslInfoDialog* self, QWheelEvent* event);
    friend void KSslInfoDialog_SuperKeyReleaseEvent(KSslInfoDialog* self, QKeyEvent* event);
    friend void KSslInfoDialog_SuperFocusInEvent(KSslInfoDialog* self, QFocusEvent* event);
    friend void KSslInfoDialog_SuperFocusOutEvent(KSslInfoDialog* self, QFocusEvent* event);
    friend void KSslInfoDialog_SuperEnterEvent(KSslInfoDialog* self, QEnterEvent* event);
    friend void KSslInfoDialog_SuperLeaveEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_SuperPaintEvent(KSslInfoDialog* self, QPaintEvent* event);
    friend void KSslInfoDialog_SuperMoveEvent(KSslInfoDialog* self, QMoveEvent* event);
    friend void KSslInfoDialog_SuperTabletEvent(KSslInfoDialog* self, QTabletEvent* event);
    friend void KSslInfoDialog_SuperActionEvent(KSslInfoDialog* self, QActionEvent* event);
    friend void KSslInfoDialog_SuperDragEnterEvent(KSslInfoDialog* self, QDragEnterEvent* event);
    friend void KSslInfoDialog_SuperDragMoveEvent(KSslInfoDialog* self, QDragMoveEvent* event);
    friend void KSslInfoDialog_SuperDragLeaveEvent(KSslInfoDialog* self, QDragLeaveEvent* event);
    friend void KSslInfoDialog_SuperDropEvent(KSslInfoDialog* self, QDropEvent* event);
    friend void KSslInfoDialog_SuperHideEvent(KSslInfoDialog* self, QHideEvent* event);
    friend bool KSslInfoDialog_SuperNativeEvent(KSslInfoDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KSslInfoDialog_SuperChangeEvent(KSslInfoDialog* self, QEvent* param1);
    friend int KSslInfoDialog_SuperMetric(const KSslInfoDialog* self, int param1);
    friend void KSslInfoDialog_SuperInitPainter(const KSslInfoDialog* self, QPainter* painter);
    friend QPaintDevice* KSslInfoDialog_SuperRedirected(const KSslInfoDialog* self, QPoint* offset);
    friend QPainter* KSslInfoDialog_SuperSharedPainter(const KSslInfoDialog* self);
    friend void KSslInfoDialog_SuperInputMethodEvent(KSslInfoDialog* self, QInputMethodEvent* param1);
    friend bool KSslInfoDialog_SuperFocusNextPrevChild(KSslInfoDialog* self, bool next);
    friend void KSslInfoDialog_SuperTimerEvent(KSslInfoDialog* self, QTimerEvent* event);
    friend void KSslInfoDialog_SuperChildEvent(KSslInfoDialog* self, QChildEvent* event);
    friend void KSslInfoDialog_SuperCustomEvent(KSslInfoDialog* self, QEvent* event);
    friend void KSslInfoDialog_SuperConnectNotify(KSslInfoDialog* self, const QMetaMethod* signal);
    friend void KSslInfoDialog_SuperDisconnectNotify(KSslInfoDialog* self, const QMetaMethod* signal);
};

#endif
