#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPASSWORDDIALOG_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPASSWORDDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPasswordDialog
class VirtualKPasswordDialog final : public KPasswordDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPasswordDialog_MetaObject_Callback = QMetaObject* (*)(const KPasswordDialog*);
    using KPasswordDialog_Metacast_Callback = void* (*)(KPasswordDialog*, const char*);
    using KPasswordDialog_Metacall_Callback = int (*)(KPasswordDialog*, int, int, void**);
    using KPasswordDialog_Accept_Callback = void (*)(KPasswordDialog*);
    using KPasswordDialog_CheckPassword_Callback = bool (*)(KPasswordDialog*);
    using KPasswordDialog_SetVisible_Callback = void (*)(KPasswordDialog*, bool);
    using KPasswordDialog_SizeHint_Callback = QSize* (*)(const KPasswordDialog*);
    using KPasswordDialog_MinimumSizeHint_Callback = QSize* (*)(const KPasswordDialog*);
    using KPasswordDialog_Open_Callback = void (*)(KPasswordDialog*);
    using KPasswordDialog_Exec_Callback = int (*)(KPasswordDialog*);
    using KPasswordDialog_Done_Callback = void (*)(KPasswordDialog*, int);
    using KPasswordDialog_Reject_Callback = void (*)(KPasswordDialog*);
    using KPasswordDialog_KeyPressEvent_Callback = void (*)(KPasswordDialog*, QKeyEvent*);
    using KPasswordDialog_CloseEvent_Callback = void (*)(KPasswordDialog*, QCloseEvent*);
    using KPasswordDialog_ShowEvent_Callback = void (*)(KPasswordDialog*, QShowEvent*);
    using KPasswordDialog_ResizeEvent_Callback = void (*)(KPasswordDialog*, QResizeEvent*);
    using KPasswordDialog_ContextMenuEvent_Callback = void (*)(KPasswordDialog*, QContextMenuEvent*);
    using KPasswordDialog_EventFilter_Callback = bool (*)(KPasswordDialog*, QObject*, QEvent*);
    using KPasswordDialog_DevType_Callback = int (*)(const KPasswordDialog*);
    using KPasswordDialog_HeightForWidth_Callback = int (*)(const KPasswordDialog*, int);
    using KPasswordDialog_HasHeightForWidth_Callback = bool (*)(const KPasswordDialog*);
    using KPasswordDialog_PaintEngine_Callback = QPaintEngine* (*)(const KPasswordDialog*);
    using KPasswordDialog_Event_Callback = bool (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_MousePressEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_MouseReleaseEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_MouseDoubleClickEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_MouseMoveEvent_Callback = void (*)(KPasswordDialog*, QMouseEvent*);
    using KPasswordDialog_WheelEvent_Callback = void (*)(KPasswordDialog*, QWheelEvent*);
    using KPasswordDialog_KeyReleaseEvent_Callback = void (*)(KPasswordDialog*, QKeyEvent*);
    using KPasswordDialog_FocusInEvent_Callback = void (*)(KPasswordDialog*, QFocusEvent*);
    using KPasswordDialog_FocusOutEvent_Callback = void (*)(KPasswordDialog*, QFocusEvent*);
    using KPasswordDialog_EnterEvent_Callback = void (*)(KPasswordDialog*, QEnterEvent*);
    using KPasswordDialog_LeaveEvent_Callback = void (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_PaintEvent_Callback = void (*)(KPasswordDialog*, QPaintEvent*);
    using KPasswordDialog_MoveEvent_Callback = void (*)(KPasswordDialog*, QMoveEvent*);
    using KPasswordDialog_TabletEvent_Callback = void (*)(KPasswordDialog*, QTabletEvent*);
    using KPasswordDialog_ActionEvent_Callback = void (*)(KPasswordDialog*, QActionEvent*);
    using KPasswordDialog_DragEnterEvent_Callback = void (*)(KPasswordDialog*, QDragEnterEvent*);
    using KPasswordDialog_DragMoveEvent_Callback = void (*)(KPasswordDialog*, QDragMoveEvent*);
    using KPasswordDialog_DragLeaveEvent_Callback = void (*)(KPasswordDialog*, QDragLeaveEvent*);
    using KPasswordDialog_DropEvent_Callback = void (*)(KPasswordDialog*, QDropEvent*);
    using KPasswordDialog_HideEvent_Callback = void (*)(KPasswordDialog*, QHideEvent*);
    using KPasswordDialog_NativeEvent_Callback = bool (*)(KPasswordDialog*, libqt_string, void*, intptr_t*);
    using KPasswordDialog_ChangeEvent_Callback = void (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_Metric_Callback = int (*)(const KPasswordDialog*, int);
    using KPasswordDialog_InitPainter_Callback = void (*)(const KPasswordDialog*, QPainter*);
    using KPasswordDialog_Redirected_Callback = QPaintDevice* (*)(const KPasswordDialog*, QPoint*);
    using KPasswordDialog_SharedPainter_Callback = QPainter* (*)(const KPasswordDialog*);
    using KPasswordDialog_InputMethodEvent_Callback = void (*)(KPasswordDialog*, QInputMethodEvent*);
    using KPasswordDialog_InputMethodQuery_Callback = QVariant* (*)(const KPasswordDialog*, int);
    using KPasswordDialog_FocusNextPrevChild_Callback = bool (*)(KPasswordDialog*, bool);
    using KPasswordDialog_TimerEvent_Callback = void (*)(KPasswordDialog*, QTimerEvent*);
    using KPasswordDialog_ChildEvent_Callback = void (*)(KPasswordDialog*, QChildEvent*);
    using KPasswordDialog_CustomEvent_Callback = void (*)(KPasswordDialog*, QEvent*);
    using KPasswordDialog_ConnectNotify_Callback = void (*)(KPasswordDialog*, QMetaMethod*);
    using KPasswordDialog_DisconnectNotify_Callback = void (*)(KPasswordDialog*, QMetaMethod*);
    using KPasswordDialog::adjustPosition;
    using KPasswordDialog::create;
    using KPasswordDialog::destroy;
    using KPasswordDialog::focusNextChild;
    using KPasswordDialog::focusPreviousChild;
    using KPasswordDialog::getDecodedMetricF;
    using KPasswordDialog::isSignalConnected;
    using KPasswordDialog::receivers;
    using KPasswordDialog::sender;
    using KPasswordDialog::senderSignalIndex;
    using KPasswordDialog::updateMicroFocus;

    // Instance callback storage
    KPasswordDialog_MetaObject_Callback kpassworddialog_metaobject_callback = nullptr;
    KPasswordDialog_Metacast_Callback kpassworddialog_metacast_callback = nullptr;
    KPasswordDialog_Metacall_Callback kpassworddialog_metacall_callback = nullptr;
    KPasswordDialog_Accept_Callback kpassworddialog_accept_callback = nullptr;
    KPasswordDialog_CheckPassword_Callback kpassworddialog_checkpassword_callback = nullptr;
    KPasswordDialog_SetVisible_Callback kpassworddialog_setvisible_callback = nullptr;
    KPasswordDialog_SizeHint_Callback kpassworddialog_sizehint_callback = nullptr;
    KPasswordDialog_MinimumSizeHint_Callback kpassworddialog_minimumsizehint_callback = nullptr;
    KPasswordDialog_Open_Callback kpassworddialog_open_callback = nullptr;
    KPasswordDialog_Exec_Callback kpassworddialog_exec_callback = nullptr;
    KPasswordDialog_Done_Callback kpassworddialog_done_callback = nullptr;
    KPasswordDialog_Reject_Callback kpassworddialog_reject_callback = nullptr;
    KPasswordDialog_KeyPressEvent_Callback kpassworddialog_keypressevent_callback = nullptr;
    KPasswordDialog_CloseEvent_Callback kpassworddialog_closeevent_callback = nullptr;
    KPasswordDialog_ShowEvent_Callback kpassworddialog_showevent_callback = nullptr;
    KPasswordDialog_ResizeEvent_Callback kpassworddialog_resizeevent_callback = nullptr;
    KPasswordDialog_ContextMenuEvent_Callback kpassworddialog_contextmenuevent_callback = nullptr;
    KPasswordDialog_EventFilter_Callback kpassworddialog_eventfilter_callback = nullptr;
    KPasswordDialog_DevType_Callback kpassworddialog_devtype_callback = nullptr;
    KPasswordDialog_HeightForWidth_Callback kpassworddialog_heightforwidth_callback = nullptr;
    KPasswordDialog_HasHeightForWidth_Callback kpassworddialog_hasheightforwidth_callback = nullptr;
    KPasswordDialog_PaintEngine_Callback kpassworddialog_paintengine_callback = nullptr;
    KPasswordDialog_Event_Callback kpassworddialog_event_callback = nullptr;
    KPasswordDialog_MousePressEvent_Callback kpassworddialog_mousepressevent_callback = nullptr;
    KPasswordDialog_MouseReleaseEvent_Callback kpassworddialog_mousereleaseevent_callback = nullptr;
    KPasswordDialog_MouseDoubleClickEvent_Callback kpassworddialog_mousedoubleclickevent_callback = nullptr;
    KPasswordDialog_MouseMoveEvent_Callback kpassworddialog_mousemoveevent_callback = nullptr;
    KPasswordDialog_WheelEvent_Callback kpassworddialog_wheelevent_callback = nullptr;
    KPasswordDialog_KeyReleaseEvent_Callback kpassworddialog_keyreleaseevent_callback = nullptr;
    KPasswordDialog_FocusInEvent_Callback kpassworddialog_focusinevent_callback = nullptr;
    KPasswordDialog_FocusOutEvent_Callback kpassworddialog_focusoutevent_callback = nullptr;
    KPasswordDialog_EnterEvent_Callback kpassworddialog_enterevent_callback = nullptr;
    KPasswordDialog_LeaveEvent_Callback kpassworddialog_leaveevent_callback = nullptr;
    KPasswordDialog_PaintEvent_Callback kpassworddialog_paintevent_callback = nullptr;
    KPasswordDialog_MoveEvent_Callback kpassworddialog_moveevent_callback = nullptr;
    KPasswordDialog_TabletEvent_Callback kpassworddialog_tabletevent_callback = nullptr;
    KPasswordDialog_ActionEvent_Callback kpassworddialog_actionevent_callback = nullptr;
    KPasswordDialog_DragEnterEvent_Callback kpassworddialog_dragenterevent_callback = nullptr;
    KPasswordDialog_DragMoveEvent_Callback kpassworddialog_dragmoveevent_callback = nullptr;
    KPasswordDialog_DragLeaveEvent_Callback kpassworddialog_dragleaveevent_callback = nullptr;
    KPasswordDialog_DropEvent_Callback kpassworddialog_dropevent_callback = nullptr;
    KPasswordDialog_HideEvent_Callback kpassworddialog_hideevent_callback = nullptr;
    KPasswordDialog_NativeEvent_Callback kpassworddialog_nativeevent_callback = nullptr;
    KPasswordDialog_ChangeEvent_Callback kpassworddialog_changeevent_callback = nullptr;
    KPasswordDialog_Metric_Callback kpassworddialog_metric_callback = nullptr;
    KPasswordDialog_InitPainter_Callback kpassworddialog_initpainter_callback = nullptr;
    KPasswordDialog_Redirected_Callback kpassworddialog_redirected_callback = nullptr;
    KPasswordDialog_SharedPainter_Callback kpassworddialog_sharedpainter_callback = nullptr;
    KPasswordDialog_InputMethodEvent_Callback kpassworddialog_inputmethodevent_callback = nullptr;
    KPasswordDialog_InputMethodQuery_Callback kpassworddialog_inputmethodquery_callback = nullptr;
    KPasswordDialog_FocusNextPrevChild_Callback kpassworddialog_focusnextprevchild_callback = nullptr;
    KPasswordDialog_TimerEvent_Callback kpassworddialog_timerevent_callback = nullptr;
    KPasswordDialog_ChildEvent_Callback kpassworddialog_childevent_callback = nullptr;
    KPasswordDialog_CustomEvent_Callback kpassworddialog_customevent_callback = nullptr;
    KPasswordDialog_ConnectNotify_Callback kpassworddialog_connectnotify_callback = nullptr;
    KPasswordDialog_DisconnectNotify_Callback kpassworddialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPasswordDialog {
        using KPasswordDialog::actionEvent;
        using KPasswordDialog::changeEvent;
        using KPasswordDialog::checkPassword;
        using KPasswordDialog::childEvent;
        using KPasswordDialog::closeEvent;
        using KPasswordDialog::connectNotify;
        using KPasswordDialog::contextMenuEvent;
        using KPasswordDialog::customEvent;
        using KPasswordDialog::disconnectNotify;
        using KPasswordDialog::dragEnterEvent;
        using KPasswordDialog::dragLeaveEvent;
        using KPasswordDialog::dragMoveEvent;
        using KPasswordDialog::dropEvent;
        using KPasswordDialog::enterEvent;
        using KPasswordDialog::event;
        using KPasswordDialog::eventFilter;
        using KPasswordDialog::focusInEvent;
        using KPasswordDialog::focusNextPrevChild;
        using KPasswordDialog::focusOutEvent;
        using KPasswordDialog::hideEvent;
        using KPasswordDialog::initPainter;
        using KPasswordDialog::inputMethodEvent;
        using KPasswordDialog::keyPressEvent;
        using KPasswordDialog::keyReleaseEvent;
        using KPasswordDialog::leaveEvent;
        using KPasswordDialog::metric;
        using KPasswordDialog::mouseDoubleClickEvent;
        using KPasswordDialog::mouseMoveEvent;
        using KPasswordDialog::mousePressEvent;
        using KPasswordDialog::mouseReleaseEvent;
        using KPasswordDialog::moveEvent;
        using KPasswordDialog::nativeEvent;
        using KPasswordDialog::paintEvent;
        using KPasswordDialog::redirected;
        using KPasswordDialog::resizeEvent;
        using KPasswordDialog::sharedPainter;
        using KPasswordDialog::showEvent;
        using KPasswordDialog::tabletEvent;
        using KPasswordDialog::timerEvent;
        using KPasswordDialog::wheelEvent;
    };

    VirtualKPasswordDialog(QWidget* parent) : KPasswordDialog(parent) {};
    VirtualKPasswordDialog() : KPasswordDialog() {};
    VirtualKPasswordDialog(QWidget* parent, const KPasswordDialog::KPasswordDialogFlags& flags) : KPasswordDialog(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpassworddialog_metaobject_callback) {
            QMetaObject* callback_ret = kpassworddialog_metaobject_callback(this);
            return callback_ret;
        }
        return KPasswordDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpassworddialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpassworddialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpassworddialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpassworddialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPasswordDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpassworddialog_accept_callback) {
            kpassworddialog_accept_callback(this);
            return;
        }
        KPasswordDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkPassword() override {
        if (kpassworddialog_checkpassword_callback) {
            bool callback_ret = kpassworddialog_checkpassword_callback(this);
            return callback_ret;
        }
        return KPasswordDialog::checkPassword();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpassworddialog_setvisible_callback) {
            bool cbval1 = visible;
            kpassworddialog_setvisible_callback(this, cbval1);
            return;
        }
        KPasswordDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpassworddialog_sizehint_callback) {
            QSize* callback_ret = kpassworddialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPasswordDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpassworddialog_minimumsizehint_callback) {
            QSize* callback_ret = kpassworddialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPasswordDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpassworddialog_open_callback) {
            kpassworddialog_open_callback(this);
            return;
        }
        KPasswordDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpassworddialog_exec_callback) {
            int callback_ret = kpassworddialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPasswordDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpassworddialog_done_callback) {
            int cbval1 = param1;
            kpassworddialog_done_callback(this, cbval1);
            return;
        }
        KPasswordDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpassworddialog_reject_callback) {
            kpassworddialog_reject_callback(this);
            return;
        }
        KPasswordDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpassworddialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kpassworddialog_keypressevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpassworddialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            kpassworddialog_closeevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpassworddialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            kpassworddialog_showevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpassworddialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kpassworddialog_resizeevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpassworddialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            kpassworddialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpassworddialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = kpassworddialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPasswordDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpassworddialog_devtype_callback) {
            int callback_ret = kpassworddialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPasswordDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpassworddialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpassworddialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPasswordDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpassworddialog_hasheightforwidth_callback) {
            bool callback_ret = kpassworddialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPasswordDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpassworddialog_paintengine_callback) {
            QPaintEngine* callback_ret = kpassworddialog_paintengine_callback(this);
            return callback_ret;
        }
        return KPasswordDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpassworddialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpassworddialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpassworddialog_mousepressevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpassworddialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpassworddialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpassworddialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpassworddialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpassworddialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpassworddialog_wheelevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpassworddialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpassworddialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpassworddialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpassworddialog_focusinevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpassworddialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpassworddialog_focusoutevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpassworddialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpassworddialog_enterevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpassworddialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpassworddialog_leaveevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpassworddialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpassworddialog_paintevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpassworddialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpassworddialog_moveevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpassworddialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpassworddialog_tabletevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpassworddialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpassworddialog_actionevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpassworddialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpassworddialog_dragenterevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpassworddialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpassworddialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpassworddialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpassworddialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpassworddialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpassworddialog_dropevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpassworddialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpassworddialog_hideevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpassworddialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpassworddialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPasswordDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpassworddialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpassworddialog_changeevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpassworddialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpassworddialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPasswordDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpassworddialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpassworddialog_initpainter_callback(this, cbval1);
            return;
        }
        KPasswordDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpassworddialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpassworddialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpassworddialog_sharedpainter_callback) {
            QPainter* callback_ret = kpassworddialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPasswordDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpassworddialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpassworddialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpassworddialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpassworddialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPasswordDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpassworddialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpassworddialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPasswordDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpassworddialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpassworddialog_timerevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpassworddialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpassworddialog_childevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpassworddialog_customevent_callback) {
            QEvent* cbval1 = event;
            kpassworddialog_customevent_callback(this, cbval1);
            return;
        }
        KPasswordDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpassworddialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpassworddialog_connectnotify_callback(this, cbval1);
            return;
        }
        KPasswordDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpassworddialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpassworddialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPasswordDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KPasswordDialog_SuperCheckPassword(KPasswordDialog* self);
    friend void KPasswordDialog_SuperKeyPressEvent(KPasswordDialog* self, QKeyEvent* param1);
    friend void KPasswordDialog_SuperCloseEvent(KPasswordDialog* self, QCloseEvent* param1);
    friend void KPasswordDialog_SuperShowEvent(KPasswordDialog* self, QShowEvent* param1);
    friend void KPasswordDialog_SuperResizeEvent(KPasswordDialog* self, QResizeEvent* param1);
    friend void KPasswordDialog_SuperContextMenuEvent(KPasswordDialog* self, QContextMenuEvent* param1);
    friend bool KPasswordDialog_SuperEventFilter(KPasswordDialog* self, QObject* param1, QEvent* param2);
    friend bool KPasswordDialog_SuperEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_SuperMousePressEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_SuperMouseReleaseEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_SuperMouseDoubleClickEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_SuperMouseMoveEvent(KPasswordDialog* self, QMouseEvent* event);
    friend void KPasswordDialog_SuperWheelEvent(KPasswordDialog* self, QWheelEvent* event);
    friend void KPasswordDialog_SuperKeyReleaseEvent(KPasswordDialog* self, QKeyEvent* event);
    friend void KPasswordDialog_SuperFocusInEvent(KPasswordDialog* self, QFocusEvent* event);
    friend void KPasswordDialog_SuperFocusOutEvent(KPasswordDialog* self, QFocusEvent* event);
    friend void KPasswordDialog_SuperEnterEvent(KPasswordDialog* self, QEnterEvent* event);
    friend void KPasswordDialog_SuperLeaveEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_SuperPaintEvent(KPasswordDialog* self, QPaintEvent* event);
    friend void KPasswordDialog_SuperMoveEvent(KPasswordDialog* self, QMoveEvent* event);
    friend void KPasswordDialog_SuperTabletEvent(KPasswordDialog* self, QTabletEvent* event);
    friend void KPasswordDialog_SuperActionEvent(KPasswordDialog* self, QActionEvent* event);
    friend void KPasswordDialog_SuperDragEnterEvent(KPasswordDialog* self, QDragEnterEvent* event);
    friend void KPasswordDialog_SuperDragMoveEvent(KPasswordDialog* self, QDragMoveEvent* event);
    friend void KPasswordDialog_SuperDragLeaveEvent(KPasswordDialog* self, QDragLeaveEvent* event);
    friend void KPasswordDialog_SuperDropEvent(KPasswordDialog* self, QDropEvent* event);
    friend void KPasswordDialog_SuperHideEvent(KPasswordDialog* self, QHideEvent* event);
    friend bool KPasswordDialog_SuperNativeEvent(KPasswordDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPasswordDialog_SuperChangeEvent(KPasswordDialog* self, QEvent* param1);
    friend int KPasswordDialog_SuperMetric(const KPasswordDialog* self, int param1);
    friend void KPasswordDialog_SuperInitPainter(const KPasswordDialog* self, QPainter* painter);
    friend QPaintDevice* KPasswordDialog_SuperRedirected(const KPasswordDialog* self, QPoint* offset);
    friend QPainter* KPasswordDialog_SuperSharedPainter(const KPasswordDialog* self);
    friend void KPasswordDialog_SuperInputMethodEvent(KPasswordDialog* self, QInputMethodEvent* param1);
    friend bool KPasswordDialog_SuperFocusNextPrevChild(KPasswordDialog* self, bool next);
    friend void KPasswordDialog_SuperTimerEvent(KPasswordDialog* self, QTimerEvent* event);
    friend void KPasswordDialog_SuperChildEvent(KPasswordDialog* self, QChildEvent* event);
    friend void KPasswordDialog_SuperCustomEvent(KPasswordDialog* self, QEvent* event);
    friend void KPasswordDialog_SuperConnectNotify(KPasswordDialog* self, const QMetaMethod* signal);
    friend void KPasswordDialog_SuperDisconnectNotify(KPasswordDialog* self, const QMetaMethod* signal);
};

#endif
