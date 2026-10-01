#pragma once
#ifndef PRINTSUPPORT_LIBQPRINTDIALOG_HXX
#define PRINTSUPPORT_LIBQPRINTDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrintDialog
class VirtualQPrintDialog final : public QPrintDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPrintDialog_MetaObject_Callback = QMetaObject* (*)(const QPrintDialog*);
    using QPrintDialog_Metacast_Callback = void* (*)(QPrintDialog*, const char*);
    using QPrintDialog_Metacall_Callback = int (*)(QPrintDialog*, int, int, void**);
    using QPrintDialog_Exec_Callback = int (*)(QPrintDialog*);
    using QPrintDialog_Accept_Callback = void (*)(QPrintDialog*);
    using QPrintDialog_Done_Callback = void (*)(QPrintDialog*, int);
    using QPrintDialog_SetVisible_Callback = void (*)(QPrintDialog*, bool);
    using QPrintDialog_SizeHint_Callback = QSize* (*)(const QPrintDialog*);
    using QPrintDialog_MinimumSizeHint_Callback = QSize* (*)(const QPrintDialog*);
    using QPrintDialog_Open_Callback = void (*)(QPrintDialog*);
    using QPrintDialog_Reject_Callback = void (*)(QPrintDialog*);
    using QPrintDialog_KeyPressEvent_Callback = void (*)(QPrintDialog*, QKeyEvent*);
    using QPrintDialog_CloseEvent_Callback = void (*)(QPrintDialog*, QCloseEvent*);
    using QPrintDialog_ShowEvent_Callback = void (*)(QPrintDialog*, QShowEvent*);
    using QPrintDialog_ResizeEvent_Callback = void (*)(QPrintDialog*, QResizeEvent*);
    using QPrintDialog_ContextMenuEvent_Callback = void (*)(QPrintDialog*, QContextMenuEvent*);
    using QPrintDialog_EventFilter_Callback = bool (*)(QPrintDialog*, QObject*, QEvent*);
    using QPrintDialog_DevType_Callback = int (*)(const QPrintDialog*);
    using QPrintDialog_HeightForWidth_Callback = int (*)(const QPrintDialog*, int);
    using QPrintDialog_HasHeightForWidth_Callback = bool (*)(const QPrintDialog*);
    using QPrintDialog_PaintEngine_Callback = QPaintEngine* (*)(const QPrintDialog*);
    using QPrintDialog_Event_Callback = bool (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_MousePressEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseReleaseEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseDoubleClickEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseMoveEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_WheelEvent_Callback = void (*)(QPrintDialog*, QWheelEvent*);
    using QPrintDialog_KeyReleaseEvent_Callback = void (*)(QPrintDialog*, QKeyEvent*);
    using QPrintDialog_FocusInEvent_Callback = void (*)(QPrintDialog*, QFocusEvent*);
    using QPrintDialog_FocusOutEvent_Callback = void (*)(QPrintDialog*, QFocusEvent*);
    using QPrintDialog_EnterEvent_Callback = void (*)(QPrintDialog*, QEnterEvent*);
    using QPrintDialog_LeaveEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_PaintEvent_Callback = void (*)(QPrintDialog*, QPaintEvent*);
    using QPrintDialog_MoveEvent_Callback = void (*)(QPrintDialog*, QMoveEvent*);
    using QPrintDialog_TabletEvent_Callback = void (*)(QPrintDialog*, QTabletEvent*);
    using QPrintDialog_ActionEvent_Callback = void (*)(QPrintDialog*, QActionEvent*);
    using QPrintDialog_DragEnterEvent_Callback = void (*)(QPrintDialog*, QDragEnterEvent*);
    using QPrintDialog_DragMoveEvent_Callback = void (*)(QPrintDialog*, QDragMoveEvent*);
    using QPrintDialog_DragLeaveEvent_Callback = void (*)(QPrintDialog*, QDragLeaveEvent*);
    using QPrintDialog_DropEvent_Callback = void (*)(QPrintDialog*, QDropEvent*);
    using QPrintDialog_HideEvent_Callback = void (*)(QPrintDialog*, QHideEvent*);
    using QPrintDialog_NativeEvent_Callback = bool (*)(QPrintDialog*, libqt_string, void*, intptr_t*);
    using QPrintDialog_ChangeEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_Metric_Callback = int (*)(const QPrintDialog*, int);
    using QPrintDialog_InitPainter_Callback = void (*)(const QPrintDialog*, QPainter*);
    using QPrintDialog_Redirected_Callback = QPaintDevice* (*)(const QPrintDialog*, QPoint*);
    using QPrintDialog_SharedPainter_Callback = QPainter* (*)(const QPrintDialog*);
    using QPrintDialog_InputMethodEvent_Callback = void (*)(QPrintDialog*, QInputMethodEvent*);
    using QPrintDialog_InputMethodQuery_Callback = QVariant* (*)(const QPrintDialog*, int);
    using QPrintDialog_FocusNextPrevChild_Callback = bool (*)(QPrintDialog*, bool);
    using QPrintDialog_TimerEvent_Callback = void (*)(QPrintDialog*, QTimerEvent*);
    using QPrintDialog_ChildEvent_Callback = void (*)(QPrintDialog*, QChildEvent*);
    using QPrintDialog_CustomEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_ConnectNotify_Callback = void (*)(QPrintDialog*, QMetaMethod*);
    using QPrintDialog_DisconnectNotify_Callback = void (*)(QPrintDialog*, QMetaMethod*);
    using QPrintDialog::adjustPosition;
    using QPrintDialog::create;
    using QPrintDialog::destroy;
    using QPrintDialog::focusNextChild;
    using QPrintDialog::focusPreviousChild;
    using QPrintDialog::getDecodedMetricF;
    using QPrintDialog::isSignalConnected;
    using QPrintDialog::receivers;
    using QPrintDialog::sender;
    using QPrintDialog::senderSignalIndex;
    using QPrintDialog::updateMicroFocus;

    // Instance callback storage
    QPrintDialog_MetaObject_Callback qprintdialog_metaobject_callback = nullptr;
    QPrintDialog_Metacast_Callback qprintdialog_metacast_callback = nullptr;
    QPrintDialog_Metacall_Callback qprintdialog_metacall_callback = nullptr;
    QPrintDialog_Exec_Callback qprintdialog_exec_callback = nullptr;
    QPrintDialog_Accept_Callback qprintdialog_accept_callback = nullptr;
    QPrintDialog_Done_Callback qprintdialog_done_callback = nullptr;
    QPrintDialog_SetVisible_Callback qprintdialog_setvisible_callback = nullptr;
    QPrintDialog_SizeHint_Callback qprintdialog_sizehint_callback = nullptr;
    QPrintDialog_MinimumSizeHint_Callback qprintdialog_minimumsizehint_callback = nullptr;
    QPrintDialog_Open_Callback qprintdialog_open_callback = nullptr;
    QPrintDialog_Reject_Callback qprintdialog_reject_callback = nullptr;
    QPrintDialog_KeyPressEvent_Callback qprintdialog_keypressevent_callback = nullptr;
    QPrintDialog_CloseEvent_Callback qprintdialog_closeevent_callback = nullptr;
    QPrintDialog_ShowEvent_Callback qprintdialog_showevent_callback = nullptr;
    QPrintDialog_ResizeEvent_Callback qprintdialog_resizeevent_callback = nullptr;
    QPrintDialog_ContextMenuEvent_Callback qprintdialog_contextmenuevent_callback = nullptr;
    QPrintDialog_EventFilter_Callback qprintdialog_eventfilter_callback = nullptr;
    QPrintDialog_DevType_Callback qprintdialog_devtype_callback = nullptr;
    QPrintDialog_HeightForWidth_Callback qprintdialog_heightforwidth_callback = nullptr;
    QPrintDialog_HasHeightForWidth_Callback qprintdialog_hasheightforwidth_callback = nullptr;
    QPrintDialog_PaintEngine_Callback qprintdialog_paintengine_callback = nullptr;
    QPrintDialog_Event_Callback qprintdialog_event_callback = nullptr;
    QPrintDialog_MousePressEvent_Callback qprintdialog_mousepressevent_callback = nullptr;
    QPrintDialog_MouseReleaseEvent_Callback qprintdialog_mousereleaseevent_callback = nullptr;
    QPrintDialog_MouseDoubleClickEvent_Callback qprintdialog_mousedoubleclickevent_callback = nullptr;
    QPrintDialog_MouseMoveEvent_Callback qprintdialog_mousemoveevent_callback = nullptr;
    QPrintDialog_WheelEvent_Callback qprintdialog_wheelevent_callback = nullptr;
    QPrintDialog_KeyReleaseEvent_Callback qprintdialog_keyreleaseevent_callback = nullptr;
    QPrintDialog_FocusInEvent_Callback qprintdialog_focusinevent_callback = nullptr;
    QPrintDialog_FocusOutEvent_Callback qprintdialog_focusoutevent_callback = nullptr;
    QPrintDialog_EnterEvent_Callback qprintdialog_enterevent_callback = nullptr;
    QPrintDialog_LeaveEvent_Callback qprintdialog_leaveevent_callback = nullptr;
    QPrintDialog_PaintEvent_Callback qprintdialog_paintevent_callback = nullptr;
    QPrintDialog_MoveEvent_Callback qprintdialog_moveevent_callback = nullptr;
    QPrintDialog_TabletEvent_Callback qprintdialog_tabletevent_callback = nullptr;
    QPrintDialog_ActionEvent_Callback qprintdialog_actionevent_callback = nullptr;
    QPrintDialog_DragEnterEvent_Callback qprintdialog_dragenterevent_callback = nullptr;
    QPrintDialog_DragMoveEvent_Callback qprintdialog_dragmoveevent_callback = nullptr;
    QPrintDialog_DragLeaveEvent_Callback qprintdialog_dragleaveevent_callback = nullptr;
    QPrintDialog_DropEvent_Callback qprintdialog_dropevent_callback = nullptr;
    QPrintDialog_HideEvent_Callback qprintdialog_hideevent_callback = nullptr;
    QPrintDialog_NativeEvent_Callback qprintdialog_nativeevent_callback = nullptr;
    QPrintDialog_ChangeEvent_Callback qprintdialog_changeevent_callback = nullptr;
    QPrintDialog_Metric_Callback qprintdialog_metric_callback = nullptr;
    QPrintDialog_InitPainter_Callback qprintdialog_initpainter_callback = nullptr;
    QPrintDialog_Redirected_Callback qprintdialog_redirected_callback = nullptr;
    QPrintDialog_SharedPainter_Callback qprintdialog_sharedpainter_callback = nullptr;
    QPrintDialog_InputMethodEvent_Callback qprintdialog_inputmethodevent_callback = nullptr;
    QPrintDialog_InputMethodQuery_Callback qprintdialog_inputmethodquery_callback = nullptr;
    QPrintDialog_FocusNextPrevChild_Callback qprintdialog_focusnextprevchild_callback = nullptr;
    QPrintDialog_TimerEvent_Callback qprintdialog_timerevent_callback = nullptr;
    QPrintDialog_ChildEvent_Callback qprintdialog_childevent_callback = nullptr;
    QPrintDialog_CustomEvent_Callback qprintdialog_customevent_callback = nullptr;
    QPrintDialog_ConnectNotify_Callback qprintdialog_connectnotify_callback = nullptr;
    QPrintDialog_DisconnectNotify_Callback qprintdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPrintDialog {
        using QPrintDialog::actionEvent;
        using QPrintDialog::changeEvent;
        using QPrintDialog::childEvent;
        using QPrintDialog::closeEvent;
        using QPrintDialog::connectNotify;
        using QPrintDialog::contextMenuEvent;
        using QPrintDialog::customEvent;
        using QPrintDialog::disconnectNotify;
        using QPrintDialog::dragEnterEvent;
        using QPrintDialog::dragLeaveEvent;
        using QPrintDialog::dragMoveEvent;
        using QPrintDialog::dropEvent;
        using QPrintDialog::enterEvent;
        using QPrintDialog::event;
        using QPrintDialog::eventFilter;
        using QPrintDialog::focusInEvent;
        using QPrintDialog::focusNextPrevChild;
        using QPrintDialog::focusOutEvent;
        using QPrintDialog::hideEvent;
        using QPrintDialog::initPainter;
        using QPrintDialog::inputMethodEvent;
        using QPrintDialog::keyPressEvent;
        using QPrintDialog::keyReleaseEvent;
        using QPrintDialog::leaveEvent;
        using QPrintDialog::metric;
        using QPrintDialog::mouseDoubleClickEvent;
        using QPrintDialog::mouseMoveEvent;
        using QPrintDialog::mousePressEvent;
        using QPrintDialog::mouseReleaseEvent;
        using QPrintDialog::moveEvent;
        using QPrintDialog::nativeEvent;
        using QPrintDialog::paintEvent;
        using QPrintDialog::redirected;
        using QPrintDialog::resizeEvent;
        using QPrintDialog::sharedPainter;
        using QPrintDialog::showEvent;
        using QPrintDialog::tabletEvent;
        using QPrintDialog::timerEvent;
        using QPrintDialog::wheelEvent;
    };

    VirtualQPrintDialog(QWidget* parent) : QPrintDialog(parent) {};
    VirtualQPrintDialog(QPrinter* printer) : QPrintDialog(printer) {};
    VirtualQPrintDialog() : QPrintDialog() {};
    VirtualQPrintDialog(QPrinter* printer, QWidget* parent) : QPrintDialog(printer, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qprintdialog_metaobject_callback) {
            QMetaObject* callback_ret = qprintdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QPrintDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qprintdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qprintdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprintdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qprintdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qprintdialog_exec_callback) {
            int callback_ret = qprintdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qprintdialog_accept_callback) {
            qprintdialog_accept_callback(this);
            return;
        }
        QPrintDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qprintdialog_done_callback) {
            int cbval1 = result;
            qprintdialog_done_callback(this, cbval1);
            return;
        }
        QPrintDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprintdialog_setvisible_callback) {
            bool cbval1 = visible;
            qprintdialog_setvisible_callback(this, cbval1);
            return;
        }
        QPrintDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprintdialog_sizehint_callback) {
            QSize* callback_ret = qprintdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprintdialog_minimumsizehint_callback) {
            QSize* callback_ret = qprintdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qprintdialog_open_callback) {
            qprintdialog_open_callback(this);
            return;
        }
        QPrintDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qprintdialog_reject_callback) {
            qprintdialog_reject_callback(this);
            return;
        }
        QPrintDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qprintdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qprintdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qprintdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qprintdialog_closeevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qprintdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qprintdialog_showevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qprintdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qprintdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qprintdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qprintdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qprintdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qprintdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPrintDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprintdialog_devtype_callback) {
            int callback_ret = qprintdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprintdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qprintdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprintdialog_hasheightforwidth_callback) {
            bool callback_ret = qprintdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPrintDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprintdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qprintdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QPrintDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprintdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qprintdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprintdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprintdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprintdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprintdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprintdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qprintdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprintdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qprintdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprintdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qprintdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprintdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qprintdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprintdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qprintdialog_enterevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprintdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qprintdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprintdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qprintdialog_paintevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprintdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qprintdialog_moveevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprintdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qprintdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprintdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qprintdialog_actionevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprintdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qprintdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprintdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qprintdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprintdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qprintdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprintdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qprintdialog_dropevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprintdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qprintdialog_hideevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprintdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qprintdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPrintDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprintdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            qprintdialog_changeevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprintdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qprintdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprintdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qprintdialog_initpainter_callback(this, cbval1);
            return;
        }
        QPrintDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprintdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qprintdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprintdialog_sharedpainter_callback) {
            QPainter* callback_ret = qprintdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPrintDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprintdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qprintdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprintdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qprintdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprintdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qprintdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprintdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qprintdialog_timerevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprintdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qprintdialog_childevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprintdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qprintdialog_customevent_callback(this, cbval1);
            return;
        }
        QPrintDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprintdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprintdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QPrintDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprintdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprintdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPrintDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPrintDialog_SuperKeyPressEvent(QPrintDialog* self, QKeyEvent* param1);
    friend void QPrintDialog_SuperCloseEvent(QPrintDialog* self, QCloseEvent* param1);
    friend void QPrintDialog_SuperShowEvent(QPrintDialog* self, QShowEvent* param1);
    friend void QPrintDialog_SuperResizeEvent(QPrintDialog* self, QResizeEvent* param1);
    friend void QPrintDialog_SuperContextMenuEvent(QPrintDialog* self, QContextMenuEvent* param1);
    friend bool QPrintDialog_SuperEventFilter(QPrintDialog* self, QObject* param1, QEvent* param2);
    friend bool QPrintDialog_SuperEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_SuperMousePressEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperMouseReleaseEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperMouseDoubleClickEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperMouseMoveEvent(QPrintDialog* self, QMouseEvent* event);
    friend void QPrintDialog_SuperWheelEvent(QPrintDialog* self, QWheelEvent* event);
    friend void QPrintDialog_SuperKeyReleaseEvent(QPrintDialog* self, QKeyEvent* event);
    friend void QPrintDialog_SuperFocusInEvent(QPrintDialog* self, QFocusEvent* event);
    friend void QPrintDialog_SuperFocusOutEvent(QPrintDialog* self, QFocusEvent* event);
    friend void QPrintDialog_SuperEnterEvent(QPrintDialog* self, QEnterEvent* event);
    friend void QPrintDialog_SuperLeaveEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_SuperPaintEvent(QPrintDialog* self, QPaintEvent* event);
    friend void QPrintDialog_SuperMoveEvent(QPrintDialog* self, QMoveEvent* event);
    friend void QPrintDialog_SuperTabletEvent(QPrintDialog* self, QTabletEvent* event);
    friend void QPrintDialog_SuperActionEvent(QPrintDialog* self, QActionEvent* event);
    friend void QPrintDialog_SuperDragEnterEvent(QPrintDialog* self, QDragEnterEvent* event);
    friend void QPrintDialog_SuperDragMoveEvent(QPrintDialog* self, QDragMoveEvent* event);
    friend void QPrintDialog_SuperDragLeaveEvent(QPrintDialog* self, QDragLeaveEvent* event);
    friend void QPrintDialog_SuperDropEvent(QPrintDialog* self, QDropEvent* event);
    friend void QPrintDialog_SuperHideEvent(QPrintDialog* self, QHideEvent* event);
    friend bool QPrintDialog_SuperNativeEvent(QPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPrintDialog_SuperChangeEvent(QPrintDialog* self, QEvent* param1);
    friend int QPrintDialog_SuperMetric(const QPrintDialog* self, int param1);
    friend void QPrintDialog_SuperInitPainter(const QPrintDialog* self, QPainter* painter);
    friend QPaintDevice* QPrintDialog_SuperRedirected(const QPrintDialog* self, QPoint* offset);
    friend QPainter* QPrintDialog_SuperSharedPainter(const QPrintDialog* self);
    friend void QPrintDialog_SuperInputMethodEvent(QPrintDialog* self, QInputMethodEvent* param1);
    friend bool QPrintDialog_SuperFocusNextPrevChild(QPrintDialog* self, bool next);
    friend void QPrintDialog_SuperTimerEvent(QPrintDialog* self, QTimerEvent* event);
    friend void QPrintDialog_SuperChildEvent(QPrintDialog* self, QChildEvent* event);
    friend void QPrintDialog_SuperCustomEvent(QPrintDialog* self, QEvent* event);
    friend void QPrintDialog_SuperConnectNotify(QPrintDialog* self, const QMetaMethod* signal);
    friend void QPrintDialog_SuperDisconnectNotify(QPrintDialog* self, const QMetaMethod* signal);
};

#endif
