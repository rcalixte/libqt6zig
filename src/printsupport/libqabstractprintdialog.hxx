#pragma once
#ifndef PRINTSUPPORT_LIBQABSTRACTPRINTDIALOG_HXX
#define PRINTSUPPORT_LIBQABSTRACTPRINTDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractPrintDialog
class VirtualQAbstractPrintDialog final : public QAbstractPrintDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractPrintDialog_MetaObject_Callback = QMetaObject* (*)(const QAbstractPrintDialog*);
    using QAbstractPrintDialog_Metacast_Callback = void* (*)(QAbstractPrintDialog*, const char*);
    using QAbstractPrintDialog_Metacall_Callback = int (*)(QAbstractPrintDialog*, int, int, void**);
    using QAbstractPrintDialog_SetVisible_Callback = void (*)(QAbstractPrintDialog*, bool);
    using QAbstractPrintDialog_SizeHint_Callback = QSize* (*)(const QAbstractPrintDialog*);
    using QAbstractPrintDialog_MinimumSizeHint_Callback = QSize* (*)(const QAbstractPrintDialog*);
    using QAbstractPrintDialog_Open_Callback = void (*)(QAbstractPrintDialog*);
    using QAbstractPrintDialog_Exec_Callback = int (*)(QAbstractPrintDialog*);
    using QAbstractPrintDialog_Done_Callback = void (*)(QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_Accept_Callback = void (*)(QAbstractPrintDialog*);
    using QAbstractPrintDialog_Reject_Callback = void (*)(QAbstractPrintDialog*);
    using QAbstractPrintDialog_KeyPressEvent_Callback = void (*)(QAbstractPrintDialog*, QKeyEvent*);
    using QAbstractPrintDialog_CloseEvent_Callback = void (*)(QAbstractPrintDialog*, QCloseEvent*);
    using QAbstractPrintDialog_ShowEvent_Callback = void (*)(QAbstractPrintDialog*, QShowEvent*);
    using QAbstractPrintDialog_ResizeEvent_Callback = void (*)(QAbstractPrintDialog*, QResizeEvent*);
    using QAbstractPrintDialog_ContextMenuEvent_Callback = void (*)(QAbstractPrintDialog*, QContextMenuEvent*);
    using QAbstractPrintDialog_EventFilter_Callback = bool (*)(QAbstractPrintDialog*, QObject*, QEvent*);
    using QAbstractPrintDialog_DevType_Callback = int (*)(const QAbstractPrintDialog*);
    using QAbstractPrintDialog_HeightForWidth_Callback = int (*)(const QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_HasHeightForWidth_Callback = bool (*)(const QAbstractPrintDialog*);
    using QAbstractPrintDialog_PaintEngine_Callback = QPaintEngine* (*)(const QAbstractPrintDialog*);
    using QAbstractPrintDialog_Event_Callback = bool (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_MousePressEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseReleaseEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseDoubleClickEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseMoveEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_WheelEvent_Callback = void (*)(QAbstractPrintDialog*, QWheelEvent*);
    using QAbstractPrintDialog_KeyReleaseEvent_Callback = void (*)(QAbstractPrintDialog*, QKeyEvent*);
    using QAbstractPrintDialog_FocusInEvent_Callback = void (*)(QAbstractPrintDialog*, QFocusEvent*);
    using QAbstractPrintDialog_FocusOutEvent_Callback = void (*)(QAbstractPrintDialog*, QFocusEvent*);
    using QAbstractPrintDialog_EnterEvent_Callback = void (*)(QAbstractPrintDialog*, QEnterEvent*);
    using QAbstractPrintDialog_LeaveEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_PaintEvent_Callback = void (*)(QAbstractPrintDialog*, QPaintEvent*);
    using QAbstractPrintDialog_MoveEvent_Callback = void (*)(QAbstractPrintDialog*, QMoveEvent*);
    using QAbstractPrintDialog_TabletEvent_Callback = void (*)(QAbstractPrintDialog*, QTabletEvent*);
    using QAbstractPrintDialog_ActionEvent_Callback = void (*)(QAbstractPrintDialog*, QActionEvent*);
    using QAbstractPrintDialog_DragEnterEvent_Callback = void (*)(QAbstractPrintDialog*, QDragEnterEvent*);
    using QAbstractPrintDialog_DragMoveEvent_Callback = void (*)(QAbstractPrintDialog*, QDragMoveEvent*);
    using QAbstractPrintDialog_DragLeaveEvent_Callback = void (*)(QAbstractPrintDialog*, QDragLeaveEvent*);
    using QAbstractPrintDialog_DropEvent_Callback = void (*)(QAbstractPrintDialog*, QDropEvent*);
    using QAbstractPrintDialog_HideEvent_Callback = void (*)(QAbstractPrintDialog*, QHideEvent*);
    using QAbstractPrintDialog_NativeEvent_Callback = bool (*)(QAbstractPrintDialog*, libqt_string, void*, intptr_t*);
    using QAbstractPrintDialog_ChangeEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_Metric_Callback = int (*)(const QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_InitPainter_Callback = void (*)(const QAbstractPrintDialog*, QPainter*);
    using QAbstractPrintDialog_Redirected_Callback = QPaintDevice* (*)(const QAbstractPrintDialog*, QPoint*);
    using QAbstractPrintDialog_SharedPainter_Callback = QPainter* (*)(const QAbstractPrintDialog*);
    using QAbstractPrintDialog_InputMethodEvent_Callback = void (*)(QAbstractPrintDialog*, QInputMethodEvent*);
    using QAbstractPrintDialog_InputMethodQuery_Callback = QVariant* (*)(const QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_FocusNextPrevChild_Callback = bool (*)(QAbstractPrintDialog*, bool);
    using QAbstractPrintDialog_TimerEvent_Callback = void (*)(QAbstractPrintDialog*, QTimerEvent*);
    using QAbstractPrintDialog_ChildEvent_Callback = void (*)(QAbstractPrintDialog*, QChildEvent*);
    using QAbstractPrintDialog_CustomEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_ConnectNotify_Callback = void (*)(QAbstractPrintDialog*, QMetaMethod*);
    using QAbstractPrintDialog_DisconnectNotify_Callback = void (*)(QAbstractPrintDialog*, QMetaMethod*);
    using QAbstractPrintDialog::adjustPosition;
    using QAbstractPrintDialog::create;
    using QAbstractPrintDialog::destroy;
    using QAbstractPrintDialog::focusNextChild;
    using QAbstractPrintDialog::focusPreviousChild;
    using QAbstractPrintDialog::getDecodedMetricF;
    using QAbstractPrintDialog::isSignalConnected;
    using QAbstractPrintDialog::receivers;
    using QAbstractPrintDialog::sender;
    using QAbstractPrintDialog::senderSignalIndex;
    using QAbstractPrintDialog::updateMicroFocus;

    // Instance callback storage
    QAbstractPrintDialog_MetaObject_Callback qabstractprintdialog_metaobject_callback = nullptr;
    QAbstractPrintDialog_Metacast_Callback qabstractprintdialog_metacast_callback = nullptr;
    QAbstractPrintDialog_Metacall_Callback qabstractprintdialog_metacall_callback = nullptr;
    QAbstractPrintDialog_SetVisible_Callback qabstractprintdialog_setvisible_callback = nullptr;
    QAbstractPrintDialog_SizeHint_Callback qabstractprintdialog_sizehint_callback = nullptr;
    QAbstractPrintDialog_MinimumSizeHint_Callback qabstractprintdialog_minimumsizehint_callback = nullptr;
    QAbstractPrintDialog_Open_Callback qabstractprintdialog_open_callback = nullptr;
    QAbstractPrintDialog_Exec_Callback qabstractprintdialog_exec_callback = nullptr;
    QAbstractPrintDialog_Done_Callback qabstractprintdialog_done_callback = nullptr;
    QAbstractPrintDialog_Accept_Callback qabstractprintdialog_accept_callback = nullptr;
    QAbstractPrintDialog_Reject_Callback qabstractprintdialog_reject_callback = nullptr;
    QAbstractPrintDialog_KeyPressEvent_Callback qabstractprintdialog_keypressevent_callback = nullptr;
    QAbstractPrintDialog_CloseEvent_Callback qabstractprintdialog_closeevent_callback = nullptr;
    QAbstractPrintDialog_ShowEvent_Callback qabstractprintdialog_showevent_callback = nullptr;
    QAbstractPrintDialog_ResizeEvent_Callback qabstractprintdialog_resizeevent_callback = nullptr;
    QAbstractPrintDialog_ContextMenuEvent_Callback qabstractprintdialog_contextmenuevent_callback = nullptr;
    QAbstractPrintDialog_EventFilter_Callback qabstractprintdialog_eventfilter_callback = nullptr;
    QAbstractPrintDialog_DevType_Callback qabstractprintdialog_devtype_callback = nullptr;
    QAbstractPrintDialog_HeightForWidth_Callback qabstractprintdialog_heightforwidth_callback = nullptr;
    QAbstractPrintDialog_HasHeightForWidth_Callback qabstractprintdialog_hasheightforwidth_callback = nullptr;
    QAbstractPrintDialog_PaintEngine_Callback qabstractprintdialog_paintengine_callback = nullptr;
    QAbstractPrintDialog_Event_Callback qabstractprintdialog_event_callback = nullptr;
    QAbstractPrintDialog_MousePressEvent_Callback qabstractprintdialog_mousepressevent_callback = nullptr;
    QAbstractPrintDialog_MouseReleaseEvent_Callback qabstractprintdialog_mousereleaseevent_callback = nullptr;
    QAbstractPrintDialog_MouseDoubleClickEvent_Callback qabstractprintdialog_mousedoubleclickevent_callback = nullptr;
    QAbstractPrintDialog_MouseMoveEvent_Callback qabstractprintdialog_mousemoveevent_callback = nullptr;
    QAbstractPrintDialog_WheelEvent_Callback qabstractprintdialog_wheelevent_callback = nullptr;
    QAbstractPrintDialog_KeyReleaseEvent_Callback qabstractprintdialog_keyreleaseevent_callback = nullptr;
    QAbstractPrintDialog_FocusInEvent_Callback qabstractprintdialog_focusinevent_callback = nullptr;
    QAbstractPrintDialog_FocusOutEvent_Callback qabstractprintdialog_focusoutevent_callback = nullptr;
    QAbstractPrintDialog_EnterEvent_Callback qabstractprintdialog_enterevent_callback = nullptr;
    QAbstractPrintDialog_LeaveEvent_Callback qabstractprintdialog_leaveevent_callback = nullptr;
    QAbstractPrintDialog_PaintEvent_Callback qabstractprintdialog_paintevent_callback = nullptr;
    QAbstractPrintDialog_MoveEvent_Callback qabstractprintdialog_moveevent_callback = nullptr;
    QAbstractPrintDialog_TabletEvent_Callback qabstractprintdialog_tabletevent_callback = nullptr;
    QAbstractPrintDialog_ActionEvent_Callback qabstractprintdialog_actionevent_callback = nullptr;
    QAbstractPrintDialog_DragEnterEvent_Callback qabstractprintdialog_dragenterevent_callback = nullptr;
    QAbstractPrintDialog_DragMoveEvent_Callback qabstractprintdialog_dragmoveevent_callback = nullptr;
    QAbstractPrintDialog_DragLeaveEvent_Callback qabstractprintdialog_dragleaveevent_callback = nullptr;
    QAbstractPrintDialog_DropEvent_Callback qabstractprintdialog_dropevent_callback = nullptr;
    QAbstractPrintDialog_HideEvent_Callback qabstractprintdialog_hideevent_callback = nullptr;
    QAbstractPrintDialog_NativeEvent_Callback qabstractprintdialog_nativeevent_callback = nullptr;
    QAbstractPrintDialog_ChangeEvent_Callback qabstractprintdialog_changeevent_callback = nullptr;
    QAbstractPrintDialog_Metric_Callback qabstractprintdialog_metric_callback = nullptr;
    QAbstractPrintDialog_InitPainter_Callback qabstractprintdialog_initpainter_callback = nullptr;
    QAbstractPrintDialog_Redirected_Callback qabstractprintdialog_redirected_callback = nullptr;
    QAbstractPrintDialog_SharedPainter_Callback qabstractprintdialog_sharedpainter_callback = nullptr;
    QAbstractPrintDialog_InputMethodEvent_Callback qabstractprintdialog_inputmethodevent_callback = nullptr;
    QAbstractPrintDialog_InputMethodQuery_Callback qabstractprintdialog_inputmethodquery_callback = nullptr;
    QAbstractPrintDialog_FocusNextPrevChild_Callback qabstractprintdialog_focusnextprevchild_callback = nullptr;
    QAbstractPrintDialog_TimerEvent_Callback qabstractprintdialog_timerevent_callback = nullptr;
    QAbstractPrintDialog_ChildEvent_Callback qabstractprintdialog_childevent_callback = nullptr;
    QAbstractPrintDialog_CustomEvent_Callback qabstractprintdialog_customevent_callback = nullptr;
    QAbstractPrintDialog_ConnectNotify_Callback qabstractprintdialog_connectnotify_callback = nullptr;
    QAbstractPrintDialog_DisconnectNotify_Callback qabstractprintdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractPrintDialog {
        using QAbstractPrintDialog::actionEvent;
        using QAbstractPrintDialog::changeEvent;
        using QAbstractPrintDialog::childEvent;
        using QAbstractPrintDialog::closeEvent;
        using QAbstractPrintDialog::connectNotify;
        using QAbstractPrintDialog::contextMenuEvent;
        using QAbstractPrintDialog::customEvent;
        using QAbstractPrintDialog::disconnectNotify;
        using QAbstractPrintDialog::dragEnterEvent;
        using QAbstractPrintDialog::dragLeaveEvent;
        using QAbstractPrintDialog::dragMoveEvent;
        using QAbstractPrintDialog::dropEvent;
        using QAbstractPrintDialog::enterEvent;
        using QAbstractPrintDialog::event;
        using QAbstractPrintDialog::eventFilter;
        using QAbstractPrintDialog::focusInEvent;
        using QAbstractPrintDialog::focusNextPrevChild;
        using QAbstractPrintDialog::focusOutEvent;
        using QAbstractPrintDialog::hideEvent;
        using QAbstractPrintDialog::initPainter;
        using QAbstractPrintDialog::inputMethodEvent;
        using QAbstractPrintDialog::keyPressEvent;
        using QAbstractPrintDialog::keyReleaseEvent;
        using QAbstractPrintDialog::leaveEvent;
        using QAbstractPrintDialog::metric;
        using QAbstractPrintDialog::mouseDoubleClickEvent;
        using QAbstractPrintDialog::mouseMoveEvent;
        using QAbstractPrintDialog::mousePressEvent;
        using QAbstractPrintDialog::mouseReleaseEvent;
        using QAbstractPrintDialog::moveEvent;
        using QAbstractPrintDialog::nativeEvent;
        using QAbstractPrintDialog::paintEvent;
        using QAbstractPrintDialog::redirected;
        using QAbstractPrintDialog::resizeEvent;
        using QAbstractPrintDialog::sharedPainter;
        using QAbstractPrintDialog::showEvent;
        using QAbstractPrintDialog::tabletEvent;
        using QAbstractPrintDialog::timerEvent;
        using QAbstractPrintDialog::wheelEvent;
    };

    VirtualQAbstractPrintDialog(QPrinter* printer) : QAbstractPrintDialog(printer) {};
    VirtualQAbstractPrintDialog(QPrinter* printer, QWidget* parent) : QAbstractPrintDialog(printer, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractprintdialog_metaobject_callback) {
            QMetaObject* callback_ret = qabstractprintdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractPrintDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractprintdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractprintdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractPrintDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractprintdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractprintdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractPrintDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractprintdialog_setvisible_callback) {
            bool cbval1 = visible;
            qabstractprintdialog_setvisible_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractprintdialog_sizehint_callback) {
            QSize* callback_ret = qabstractprintdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractPrintDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractprintdialog_minimumsizehint_callback) {
            QSize* callback_ret = qabstractprintdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractPrintDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qabstractprintdialog_open_callback) {
            qabstractprintdialog_open_callback(this);
            return;
        }
        QAbstractPrintDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qabstractprintdialog_exec_callback) {
            int callback_ret = qabstractprintdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractPrintDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qabstractprintdialog_done_callback) {
            int cbval1 = param1;
            qabstractprintdialog_done_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qabstractprintdialog_accept_callback) {
            qabstractprintdialog_accept_callback(this);
            return;
        }
        QAbstractPrintDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qabstractprintdialog_reject_callback) {
            qabstractprintdialog_reject_callback(this);
            return;
        }
        QAbstractPrintDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qabstractprintdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qabstractprintdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qabstractprintdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qabstractprintdialog_closeevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qabstractprintdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qabstractprintdialog_showevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qabstractprintdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qabstractprintdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractprintdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qabstractprintdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qabstractprintdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qabstractprintdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractPrintDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractprintdialog_devtype_callback) {
            int callback_ret = qabstractprintdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractPrintDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractprintdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qabstractprintdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractPrintDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractprintdialog_hasheightforwidth_callback) {
            bool callback_ret = qabstractprintdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QAbstractPrintDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractprintdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qabstractprintdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QAbstractPrintDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractprintdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractprintdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractPrintDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractprintdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractprintdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractprintdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractprintdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractprintdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qabstractprintdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractprintdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractprintdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractprintdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractprintdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractprintdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractprintdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractprintdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qabstractprintdialog_enterevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractprintdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qabstractprintdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractprintdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qabstractprintdialog_paintevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractprintdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qabstractprintdialog_moveevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractprintdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qabstractprintdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractprintdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qabstractprintdialog_actionevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractprintdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qabstractprintdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractprintdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qabstractprintdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractprintdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qabstractprintdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractprintdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qabstractprintdialog_dropevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractprintdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qabstractprintdialog_hideevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractprintdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qabstractprintdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QAbstractPrintDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractprintdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            qabstractprintdialog_changeevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractprintdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qabstractprintdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractPrintDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractprintdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qabstractprintdialog_initpainter_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractprintdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qabstractprintdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractPrintDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractprintdialog_sharedpainter_callback) {
            QPainter* callback_ret = qabstractprintdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QAbstractPrintDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractprintdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qabstractprintdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractprintdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qabstractprintdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractPrintDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractprintdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qabstractprintdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractPrintDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractprintdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractprintdialog_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractprintdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractprintdialog_childevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractprintdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractprintdialog_customevent_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractprintdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractprintdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractprintdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractprintdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractPrintDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QAbstractPrintDialog_SuperKeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1);
    friend void QAbstractPrintDialog_SuperCloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1);
    friend void QAbstractPrintDialog_SuperShowEvent(QAbstractPrintDialog* self, QShowEvent* param1);
    friend void QAbstractPrintDialog_SuperResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1);
    friend void QAbstractPrintDialog_SuperContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1);
    friend bool QAbstractPrintDialog_SuperEventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2);
    friend bool QAbstractPrintDialog_SuperEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_SuperMousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_SuperMouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_SuperMouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_SuperMouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event);
    friend void QAbstractPrintDialog_SuperWheelEvent(QAbstractPrintDialog* self, QWheelEvent* event);
    friend void QAbstractPrintDialog_SuperKeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event);
    friend void QAbstractPrintDialog_SuperFocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event);
    friend void QAbstractPrintDialog_SuperFocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event);
    friend void QAbstractPrintDialog_SuperEnterEvent(QAbstractPrintDialog* self, QEnterEvent* event);
    friend void QAbstractPrintDialog_SuperLeaveEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_SuperPaintEvent(QAbstractPrintDialog* self, QPaintEvent* event);
    friend void QAbstractPrintDialog_SuperMoveEvent(QAbstractPrintDialog* self, QMoveEvent* event);
    friend void QAbstractPrintDialog_SuperTabletEvent(QAbstractPrintDialog* self, QTabletEvent* event);
    friend void QAbstractPrintDialog_SuperActionEvent(QAbstractPrintDialog* self, QActionEvent* event);
    friend void QAbstractPrintDialog_SuperDragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event);
    friend void QAbstractPrintDialog_SuperDragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event);
    friend void QAbstractPrintDialog_SuperDragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event);
    friend void QAbstractPrintDialog_SuperDropEvent(QAbstractPrintDialog* self, QDropEvent* event);
    friend void QAbstractPrintDialog_SuperHideEvent(QAbstractPrintDialog* self, QHideEvent* event);
    friend bool QAbstractPrintDialog_SuperNativeEvent(QAbstractPrintDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QAbstractPrintDialog_SuperChangeEvent(QAbstractPrintDialog* self, QEvent* param1);
    friend int QAbstractPrintDialog_SuperMetric(const QAbstractPrintDialog* self, int param1);
    friend void QAbstractPrintDialog_SuperInitPainter(const QAbstractPrintDialog* self, QPainter* painter);
    friend QPaintDevice* QAbstractPrintDialog_SuperRedirected(const QAbstractPrintDialog* self, QPoint* offset);
    friend QPainter* QAbstractPrintDialog_SuperSharedPainter(const QAbstractPrintDialog* self);
    friend void QAbstractPrintDialog_SuperInputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1);
    friend bool QAbstractPrintDialog_SuperFocusNextPrevChild(QAbstractPrintDialog* self, bool next);
    friend void QAbstractPrintDialog_SuperTimerEvent(QAbstractPrintDialog* self, QTimerEvent* event);
    friend void QAbstractPrintDialog_SuperChildEvent(QAbstractPrintDialog* self, QChildEvent* event);
    friend void QAbstractPrintDialog_SuperCustomEvent(QAbstractPrintDialog* self, QEvent* event);
    friend void QAbstractPrintDialog_SuperConnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal);
    friend void QAbstractPrintDialog_SuperDisconnectNotify(QAbstractPrintDialog* self, const QMetaMethod* signal);
};

#endif
