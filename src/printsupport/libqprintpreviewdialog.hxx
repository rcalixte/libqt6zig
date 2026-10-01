#pragma once
#ifndef PRINTSUPPORT_LIBQPRINTPREVIEWDIALOG_HXX
#define PRINTSUPPORT_LIBQPRINTPREVIEWDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrintPreviewDialog
class VirtualQPrintPreviewDialog final : public QPrintPreviewDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPrintPreviewDialog_MetaObject_Callback = QMetaObject* (*)(const QPrintPreviewDialog*);
    using QPrintPreviewDialog_Metacast_Callback = void* (*)(QPrintPreviewDialog*, const char*);
    using QPrintPreviewDialog_Metacall_Callback = int (*)(QPrintPreviewDialog*, int, int, void**);
    using QPrintPreviewDialog_SetVisible_Callback = void (*)(QPrintPreviewDialog*, bool);
    using QPrintPreviewDialog_Done_Callback = void (*)(QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_SizeHint_Callback = QSize* (*)(const QPrintPreviewDialog*);
    using QPrintPreviewDialog_MinimumSizeHint_Callback = QSize* (*)(const QPrintPreviewDialog*);
    using QPrintPreviewDialog_Open_Callback = void (*)(QPrintPreviewDialog*);
    using QPrintPreviewDialog_Exec_Callback = int (*)(QPrintPreviewDialog*);
    using QPrintPreviewDialog_Accept_Callback = void (*)(QPrintPreviewDialog*);
    using QPrintPreviewDialog_Reject_Callback = void (*)(QPrintPreviewDialog*);
    using QPrintPreviewDialog_KeyPressEvent_Callback = void (*)(QPrintPreviewDialog*, QKeyEvent*);
    using QPrintPreviewDialog_CloseEvent_Callback = void (*)(QPrintPreviewDialog*, QCloseEvent*);
    using QPrintPreviewDialog_ShowEvent_Callback = void (*)(QPrintPreviewDialog*, QShowEvent*);
    using QPrintPreviewDialog_ResizeEvent_Callback = void (*)(QPrintPreviewDialog*, QResizeEvent*);
    using QPrintPreviewDialog_ContextMenuEvent_Callback = void (*)(QPrintPreviewDialog*, QContextMenuEvent*);
    using QPrintPreviewDialog_EventFilter_Callback = bool (*)(QPrintPreviewDialog*, QObject*, QEvent*);
    using QPrintPreviewDialog_DevType_Callback = int (*)(const QPrintPreviewDialog*);
    using QPrintPreviewDialog_HeightForWidth_Callback = int (*)(const QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_HasHeightForWidth_Callback = bool (*)(const QPrintPreviewDialog*);
    using QPrintPreviewDialog_PaintEngine_Callback = QPaintEngine* (*)(const QPrintPreviewDialog*);
    using QPrintPreviewDialog_Event_Callback = bool (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_MousePressEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_MouseReleaseEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_MouseDoubleClickEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_MouseMoveEvent_Callback = void (*)(QPrintPreviewDialog*, QMouseEvent*);
    using QPrintPreviewDialog_WheelEvent_Callback = void (*)(QPrintPreviewDialog*, QWheelEvent*);
    using QPrintPreviewDialog_KeyReleaseEvent_Callback = void (*)(QPrintPreviewDialog*, QKeyEvent*);
    using QPrintPreviewDialog_FocusInEvent_Callback = void (*)(QPrintPreviewDialog*, QFocusEvent*);
    using QPrintPreviewDialog_FocusOutEvent_Callback = void (*)(QPrintPreviewDialog*, QFocusEvent*);
    using QPrintPreviewDialog_EnterEvent_Callback = void (*)(QPrintPreviewDialog*, QEnterEvent*);
    using QPrintPreviewDialog_LeaveEvent_Callback = void (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_PaintEvent_Callback = void (*)(QPrintPreviewDialog*, QPaintEvent*);
    using QPrintPreviewDialog_MoveEvent_Callback = void (*)(QPrintPreviewDialog*, QMoveEvent*);
    using QPrintPreviewDialog_TabletEvent_Callback = void (*)(QPrintPreviewDialog*, QTabletEvent*);
    using QPrintPreviewDialog_ActionEvent_Callback = void (*)(QPrintPreviewDialog*, QActionEvent*);
    using QPrintPreviewDialog_DragEnterEvent_Callback = void (*)(QPrintPreviewDialog*, QDragEnterEvent*);
    using QPrintPreviewDialog_DragMoveEvent_Callback = void (*)(QPrintPreviewDialog*, QDragMoveEvent*);
    using QPrintPreviewDialog_DragLeaveEvent_Callback = void (*)(QPrintPreviewDialog*, QDragLeaveEvent*);
    using QPrintPreviewDialog_DropEvent_Callback = void (*)(QPrintPreviewDialog*, QDropEvent*);
    using QPrintPreviewDialog_HideEvent_Callback = void (*)(QPrintPreviewDialog*, QHideEvent*);
    using QPrintPreviewDialog_NativeEvent_Callback = bool (*)(QPrintPreviewDialog*, libqt_string, void*, intptr_t*);
    using QPrintPreviewDialog_ChangeEvent_Callback = void (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_Metric_Callback = int (*)(const QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_InitPainter_Callback = void (*)(const QPrintPreviewDialog*, QPainter*);
    using QPrintPreviewDialog_Redirected_Callback = QPaintDevice* (*)(const QPrintPreviewDialog*, QPoint*);
    using QPrintPreviewDialog_SharedPainter_Callback = QPainter* (*)(const QPrintPreviewDialog*);
    using QPrintPreviewDialog_InputMethodEvent_Callback = void (*)(QPrintPreviewDialog*, QInputMethodEvent*);
    using QPrintPreviewDialog_InputMethodQuery_Callback = QVariant* (*)(const QPrintPreviewDialog*, int);
    using QPrintPreviewDialog_FocusNextPrevChild_Callback = bool (*)(QPrintPreviewDialog*, bool);
    using QPrintPreviewDialog_TimerEvent_Callback = void (*)(QPrintPreviewDialog*, QTimerEvent*);
    using QPrintPreviewDialog_ChildEvent_Callback = void (*)(QPrintPreviewDialog*, QChildEvent*);
    using QPrintPreviewDialog_CustomEvent_Callback = void (*)(QPrintPreviewDialog*, QEvent*);
    using QPrintPreviewDialog_ConnectNotify_Callback = void (*)(QPrintPreviewDialog*, QMetaMethod*);
    using QPrintPreviewDialog_DisconnectNotify_Callback = void (*)(QPrintPreviewDialog*, QMetaMethod*);
    using QPrintPreviewDialog::adjustPosition;
    using QPrintPreviewDialog::create;
    using QPrintPreviewDialog::destroy;
    using QPrintPreviewDialog::focusNextChild;
    using QPrintPreviewDialog::focusPreviousChild;
    using QPrintPreviewDialog::getDecodedMetricF;
    using QPrintPreviewDialog::isSignalConnected;
    using QPrintPreviewDialog::receivers;
    using QPrintPreviewDialog::sender;
    using QPrintPreviewDialog::senderSignalIndex;
    using QPrintPreviewDialog::updateMicroFocus;

    // Instance callback storage
    QPrintPreviewDialog_MetaObject_Callback qprintpreviewdialog_metaobject_callback = nullptr;
    QPrintPreviewDialog_Metacast_Callback qprintpreviewdialog_metacast_callback = nullptr;
    QPrintPreviewDialog_Metacall_Callback qprintpreviewdialog_metacall_callback = nullptr;
    QPrintPreviewDialog_SetVisible_Callback qprintpreviewdialog_setvisible_callback = nullptr;
    QPrintPreviewDialog_Done_Callback qprintpreviewdialog_done_callback = nullptr;
    QPrintPreviewDialog_SizeHint_Callback qprintpreviewdialog_sizehint_callback = nullptr;
    QPrintPreviewDialog_MinimumSizeHint_Callback qprintpreviewdialog_minimumsizehint_callback = nullptr;
    QPrintPreviewDialog_Open_Callback qprintpreviewdialog_open_callback = nullptr;
    QPrintPreviewDialog_Exec_Callback qprintpreviewdialog_exec_callback = nullptr;
    QPrintPreviewDialog_Accept_Callback qprintpreviewdialog_accept_callback = nullptr;
    QPrintPreviewDialog_Reject_Callback qprintpreviewdialog_reject_callback = nullptr;
    QPrintPreviewDialog_KeyPressEvent_Callback qprintpreviewdialog_keypressevent_callback = nullptr;
    QPrintPreviewDialog_CloseEvent_Callback qprintpreviewdialog_closeevent_callback = nullptr;
    QPrintPreviewDialog_ShowEvent_Callback qprintpreviewdialog_showevent_callback = nullptr;
    QPrintPreviewDialog_ResizeEvent_Callback qprintpreviewdialog_resizeevent_callback = nullptr;
    QPrintPreviewDialog_ContextMenuEvent_Callback qprintpreviewdialog_contextmenuevent_callback = nullptr;
    QPrintPreviewDialog_EventFilter_Callback qprintpreviewdialog_eventfilter_callback = nullptr;
    QPrintPreviewDialog_DevType_Callback qprintpreviewdialog_devtype_callback = nullptr;
    QPrintPreviewDialog_HeightForWidth_Callback qprintpreviewdialog_heightforwidth_callback = nullptr;
    QPrintPreviewDialog_HasHeightForWidth_Callback qprintpreviewdialog_hasheightforwidth_callback = nullptr;
    QPrintPreviewDialog_PaintEngine_Callback qprintpreviewdialog_paintengine_callback = nullptr;
    QPrintPreviewDialog_Event_Callback qprintpreviewdialog_event_callback = nullptr;
    QPrintPreviewDialog_MousePressEvent_Callback qprintpreviewdialog_mousepressevent_callback = nullptr;
    QPrintPreviewDialog_MouseReleaseEvent_Callback qprintpreviewdialog_mousereleaseevent_callback = nullptr;
    QPrintPreviewDialog_MouseDoubleClickEvent_Callback qprintpreviewdialog_mousedoubleclickevent_callback = nullptr;
    QPrintPreviewDialog_MouseMoveEvent_Callback qprintpreviewdialog_mousemoveevent_callback = nullptr;
    QPrintPreviewDialog_WheelEvent_Callback qprintpreviewdialog_wheelevent_callback = nullptr;
    QPrintPreviewDialog_KeyReleaseEvent_Callback qprintpreviewdialog_keyreleaseevent_callback = nullptr;
    QPrintPreviewDialog_FocusInEvent_Callback qprintpreviewdialog_focusinevent_callback = nullptr;
    QPrintPreviewDialog_FocusOutEvent_Callback qprintpreviewdialog_focusoutevent_callback = nullptr;
    QPrintPreviewDialog_EnterEvent_Callback qprintpreviewdialog_enterevent_callback = nullptr;
    QPrintPreviewDialog_LeaveEvent_Callback qprintpreviewdialog_leaveevent_callback = nullptr;
    QPrintPreviewDialog_PaintEvent_Callback qprintpreviewdialog_paintevent_callback = nullptr;
    QPrintPreviewDialog_MoveEvent_Callback qprintpreviewdialog_moveevent_callback = nullptr;
    QPrintPreviewDialog_TabletEvent_Callback qprintpreviewdialog_tabletevent_callback = nullptr;
    QPrintPreviewDialog_ActionEvent_Callback qprintpreviewdialog_actionevent_callback = nullptr;
    QPrintPreviewDialog_DragEnterEvent_Callback qprintpreviewdialog_dragenterevent_callback = nullptr;
    QPrintPreviewDialog_DragMoveEvent_Callback qprintpreviewdialog_dragmoveevent_callback = nullptr;
    QPrintPreviewDialog_DragLeaveEvent_Callback qprintpreviewdialog_dragleaveevent_callback = nullptr;
    QPrintPreviewDialog_DropEvent_Callback qprintpreviewdialog_dropevent_callback = nullptr;
    QPrintPreviewDialog_HideEvent_Callback qprintpreviewdialog_hideevent_callback = nullptr;
    QPrintPreviewDialog_NativeEvent_Callback qprintpreviewdialog_nativeevent_callback = nullptr;
    QPrintPreviewDialog_ChangeEvent_Callback qprintpreviewdialog_changeevent_callback = nullptr;
    QPrintPreviewDialog_Metric_Callback qprintpreviewdialog_metric_callback = nullptr;
    QPrintPreviewDialog_InitPainter_Callback qprintpreviewdialog_initpainter_callback = nullptr;
    QPrintPreviewDialog_Redirected_Callback qprintpreviewdialog_redirected_callback = nullptr;
    QPrintPreviewDialog_SharedPainter_Callback qprintpreviewdialog_sharedpainter_callback = nullptr;
    QPrintPreviewDialog_InputMethodEvent_Callback qprintpreviewdialog_inputmethodevent_callback = nullptr;
    QPrintPreviewDialog_InputMethodQuery_Callback qprintpreviewdialog_inputmethodquery_callback = nullptr;
    QPrintPreviewDialog_FocusNextPrevChild_Callback qprintpreviewdialog_focusnextprevchild_callback = nullptr;
    QPrintPreviewDialog_TimerEvent_Callback qprintpreviewdialog_timerevent_callback = nullptr;
    QPrintPreviewDialog_ChildEvent_Callback qprintpreviewdialog_childevent_callback = nullptr;
    QPrintPreviewDialog_CustomEvent_Callback qprintpreviewdialog_customevent_callback = nullptr;
    QPrintPreviewDialog_ConnectNotify_Callback qprintpreviewdialog_connectnotify_callback = nullptr;
    QPrintPreviewDialog_DisconnectNotify_Callback qprintpreviewdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPrintPreviewDialog {
        using QPrintPreviewDialog::actionEvent;
        using QPrintPreviewDialog::changeEvent;
        using QPrintPreviewDialog::childEvent;
        using QPrintPreviewDialog::closeEvent;
        using QPrintPreviewDialog::connectNotify;
        using QPrintPreviewDialog::contextMenuEvent;
        using QPrintPreviewDialog::customEvent;
        using QPrintPreviewDialog::disconnectNotify;
        using QPrintPreviewDialog::dragEnterEvent;
        using QPrintPreviewDialog::dragLeaveEvent;
        using QPrintPreviewDialog::dragMoveEvent;
        using QPrintPreviewDialog::dropEvent;
        using QPrintPreviewDialog::enterEvent;
        using QPrintPreviewDialog::event;
        using QPrintPreviewDialog::eventFilter;
        using QPrintPreviewDialog::focusInEvent;
        using QPrintPreviewDialog::focusNextPrevChild;
        using QPrintPreviewDialog::focusOutEvent;
        using QPrintPreviewDialog::hideEvent;
        using QPrintPreviewDialog::initPainter;
        using QPrintPreviewDialog::inputMethodEvent;
        using QPrintPreviewDialog::keyPressEvent;
        using QPrintPreviewDialog::keyReleaseEvent;
        using QPrintPreviewDialog::leaveEvent;
        using QPrintPreviewDialog::metric;
        using QPrintPreviewDialog::mouseDoubleClickEvent;
        using QPrintPreviewDialog::mouseMoveEvent;
        using QPrintPreviewDialog::mousePressEvent;
        using QPrintPreviewDialog::mouseReleaseEvent;
        using QPrintPreviewDialog::moveEvent;
        using QPrintPreviewDialog::nativeEvent;
        using QPrintPreviewDialog::paintEvent;
        using QPrintPreviewDialog::redirected;
        using QPrintPreviewDialog::resizeEvent;
        using QPrintPreviewDialog::sharedPainter;
        using QPrintPreviewDialog::showEvent;
        using QPrintPreviewDialog::tabletEvent;
        using QPrintPreviewDialog::timerEvent;
        using QPrintPreviewDialog::wheelEvent;
    };

    VirtualQPrintPreviewDialog(QWidget* parent) : QPrintPreviewDialog(parent) {};
    VirtualQPrintPreviewDialog() : QPrintPreviewDialog() {};
    VirtualQPrintPreviewDialog(QPrinter* printer) : QPrintPreviewDialog(printer) {};
    VirtualQPrintPreviewDialog(QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewDialog(parent, flags) {};
    VirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent) : QPrintPreviewDialog(printer, parent) {};
    VirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewDialog(printer, parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qprintpreviewdialog_metaobject_callback) {
            QMetaObject* callback_ret = qprintpreviewdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QPrintPreviewDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qprintpreviewdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qprintpreviewdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprintpreviewdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qprintpreviewdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprintpreviewdialog_setvisible_callback) {
            bool cbval1 = visible;
            qprintpreviewdialog_setvisible_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qprintpreviewdialog_done_callback) {
            int cbval1 = result;
            qprintpreviewdialog_done_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprintpreviewdialog_sizehint_callback) {
            QSize* callback_ret = qprintpreviewdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintPreviewDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprintpreviewdialog_minimumsizehint_callback) {
            QSize* callback_ret = qprintpreviewdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintPreviewDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qprintpreviewdialog_open_callback) {
            qprintpreviewdialog_open_callback(this);
            return;
        }
        QPrintPreviewDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qprintpreviewdialog_exec_callback) {
            int callback_ret = qprintpreviewdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qprintpreviewdialog_accept_callback) {
            qprintpreviewdialog_accept_callback(this);
            return;
        }
        QPrintPreviewDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qprintpreviewdialog_reject_callback) {
            qprintpreviewdialog_reject_callback(this);
            return;
        }
        QPrintPreviewDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qprintpreviewdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qprintpreviewdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qprintpreviewdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qprintpreviewdialog_closeevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qprintpreviewdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qprintpreviewdialog_showevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qprintpreviewdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qprintpreviewdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qprintpreviewdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qprintpreviewdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qprintpreviewdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qprintpreviewdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPrintPreviewDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprintpreviewdialog_devtype_callback) {
            int callback_ret = qprintpreviewdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprintpreviewdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qprintpreviewdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprintpreviewdialog_hasheightforwidth_callback) {
            bool callback_ret = qprintpreviewdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPrintPreviewDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprintpreviewdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qprintpreviewdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QPrintPreviewDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprintpreviewdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qprintpreviewdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprintpreviewdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprintpreviewdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qprintpreviewdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprintpreviewdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qprintpreviewdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprintpreviewdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qprintpreviewdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprintpreviewdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qprintpreviewdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprintpreviewdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qprintpreviewdialog_enterevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprintpreviewdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qprintpreviewdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprintpreviewdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qprintpreviewdialog_paintevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprintpreviewdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qprintpreviewdialog_moveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprintpreviewdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qprintpreviewdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprintpreviewdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qprintpreviewdialog_actionevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprintpreviewdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qprintpreviewdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprintpreviewdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qprintpreviewdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprintpreviewdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qprintpreviewdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprintpreviewdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qprintpreviewdialog_dropevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprintpreviewdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qprintpreviewdialog_hideevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprintpreviewdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qprintpreviewdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPrintPreviewDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprintpreviewdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            qprintpreviewdialog_changeevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprintpreviewdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qprintpreviewdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprintpreviewdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qprintpreviewdialog_initpainter_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprintpreviewdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qprintpreviewdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprintpreviewdialog_sharedpainter_callback) {
            QPainter* callback_ret = qprintpreviewdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPrintPreviewDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprintpreviewdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qprintpreviewdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprintpreviewdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qprintpreviewdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintPreviewDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprintpreviewdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qprintpreviewdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprintpreviewdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qprintpreviewdialog_timerevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprintpreviewdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qprintpreviewdialog_childevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprintpreviewdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qprintpreviewdialog_customevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprintpreviewdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprintpreviewdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPrintPreviewDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPrintPreviewDialog_SuperKeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1);
    friend void QPrintPreviewDialog_SuperCloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1);
    friend void QPrintPreviewDialog_SuperShowEvent(QPrintPreviewDialog* self, QShowEvent* param1);
    friend void QPrintPreviewDialog_SuperResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1);
    friend void QPrintPreviewDialog_SuperContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1);
    friend bool QPrintPreviewDialog_SuperEventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2);
    friend bool QPrintPreviewDialog_SuperEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_SuperMousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_SuperMouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_SuperMouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_SuperMouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event);
    friend void QPrintPreviewDialog_SuperWheelEvent(QPrintPreviewDialog* self, QWheelEvent* event);
    friend void QPrintPreviewDialog_SuperKeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event);
    friend void QPrintPreviewDialog_SuperFocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event);
    friend void QPrintPreviewDialog_SuperFocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event);
    friend void QPrintPreviewDialog_SuperEnterEvent(QPrintPreviewDialog* self, QEnterEvent* event);
    friend void QPrintPreviewDialog_SuperLeaveEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_SuperPaintEvent(QPrintPreviewDialog* self, QPaintEvent* event);
    friend void QPrintPreviewDialog_SuperMoveEvent(QPrintPreviewDialog* self, QMoveEvent* event);
    friend void QPrintPreviewDialog_SuperTabletEvent(QPrintPreviewDialog* self, QTabletEvent* event);
    friend void QPrintPreviewDialog_SuperActionEvent(QPrintPreviewDialog* self, QActionEvent* event);
    friend void QPrintPreviewDialog_SuperDragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event);
    friend void QPrintPreviewDialog_SuperDragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event);
    friend void QPrintPreviewDialog_SuperDragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event);
    friend void QPrintPreviewDialog_SuperDropEvent(QPrintPreviewDialog* self, QDropEvent* event);
    friend void QPrintPreviewDialog_SuperHideEvent(QPrintPreviewDialog* self, QHideEvent* event);
    friend bool QPrintPreviewDialog_SuperNativeEvent(QPrintPreviewDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPrintPreviewDialog_SuperChangeEvent(QPrintPreviewDialog* self, QEvent* param1);
    friend int QPrintPreviewDialog_SuperMetric(const QPrintPreviewDialog* self, int param1);
    friend void QPrintPreviewDialog_SuperInitPainter(const QPrintPreviewDialog* self, QPainter* painter);
    friend QPaintDevice* QPrintPreviewDialog_SuperRedirected(const QPrintPreviewDialog* self, QPoint* offset);
    friend QPainter* QPrintPreviewDialog_SuperSharedPainter(const QPrintPreviewDialog* self);
    friend void QPrintPreviewDialog_SuperInputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1);
    friend bool QPrintPreviewDialog_SuperFocusNextPrevChild(QPrintPreviewDialog* self, bool next);
    friend void QPrintPreviewDialog_SuperTimerEvent(QPrintPreviewDialog* self, QTimerEvent* event);
    friend void QPrintPreviewDialog_SuperChildEvent(QPrintPreviewDialog* self, QChildEvent* event);
    friend void QPrintPreviewDialog_SuperCustomEvent(QPrintPreviewDialog* self, QEvent* event);
    friend void QPrintPreviewDialog_SuperConnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
    friend void QPrintPreviewDialog_SuperDisconnectNotify(QPrintPreviewDialog* self, const QMetaMethod* signal);
};

#endif
