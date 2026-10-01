#pragma once
#ifndef PRINTSUPPORT_LIBQPAGESETUPDIALOG_HXX
#define PRINTSUPPORT_LIBQPAGESETUPDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPageSetupDialog
class VirtualQPageSetupDialog final : public QPageSetupDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPageSetupDialog_MetaObject_Callback = QMetaObject* (*)(const QPageSetupDialog*);
    using QPageSetupDialog_Metacast_Callback = void* (*)(QPageSetupDialog*, const char*);
    using QPageSetupDialog_Metacall_Callback = int (*)(QPageSetupDialog*, int, int, void**);
    using QPageSetupDialog_Exec_Callback = int (*)(QPageSetupDialog*);
    using QPageSetupDialog_Done_Callback = void (*)(QPageSetupDialog*, int);
    using QPageSetupDialog_SetVisible_Callback = void (*)(QPageSetupDialog*, bool);
    using QPageSetupDialog_SizeHint_Callback = QSize* (*)(const QPageSetupDialog*);
    using QPageSetupDialog_MinimumSizeHint_Callback = QSize* (*)(const QPageSetupDialog*);
    using QPageSetupDialog_Open_Callback = void (*)(QPageSetupDialog*);
    using QPageSetupDialog_Accept_Callback = void (*)(QPageSetupDialog*);
    using QPageSetupDialog_Reject_Callback = void (*)(QPageSetupDialog*);
    using QPageSetupDialog_KeyPressEvent_Callback = void (*)(QPageSetupDialog*, QKeyEvent*);
    using QPageSetupDialog_CloseEvent_Callback = void (*)(QPageSetupDialog*, QCloseEvent*);
    using QPageSetupDialog_ShowEvent_Callback = void (*)(QPageSetupDialog*, QShowEvent*);
    using QPageSetupDialog_ResizeEvent_Callback = void (*)(QPageSetupDialog*, QResizeEvent*);
    using QPageSetupDialog_ContextMenuEvent_Callback = void (*)(QPageSetupDialog*, QContextMenuEvent*);
    using QPageSetupDialog_EventFilter_Callback = bool (*)(QPageSetupDialog*, QObject*, QEvent*);
    using QPageSetupDialog_DevType_Callback = int (*)(const QPageSetupDialog*);
    using QPageSetupDialog_HeightForWidth_Callback = int (*)(const QPageSetupDialog*, int);
    using QPageSetupDialog_HasHeightForWidth_Callback = bool (*)(const QPageSetupDialog*);
    using QPageSetupDialog_PaintEngine_Callback = QPaintEngine* (*)(const QPageSetupDialog*);
    using QPageSetupDialog_Event_Callback = bool (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_MousePressEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseReleaseEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseDoubleClickEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseMoveEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_WheelEvent_Callback = void (*)(QPageSetupDialog*, QWheelEvent*);
    using QPageSetupDialog_KeyReleaseEvent_Callback = void (*)(QPageSetupDialog*, QKeyEvent*);
    using QPageSetupDialog_FocusInEvent_Callback = void (*)(QPageSetupDialog*, QFocusEvent*);
    using QPageSetupDialog_FocusOutEvent_Callback = void (*)(QPageSetupDialog*, QFocusEvent*);
    using QPageSetupDialog_EnterEvent_Callback = void (*)(QPageSetupDialog*, QEnterEvent*);
    using QPageSetupDialog_LeaveEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_PaintEvent_Callback = void (*)(QPageSetupDialog*, QPaintEvent*);
    using QPageSetupDialog_MoveEvent_Callback = void (*)(QPageSetupDialog*, QMoveEvent*);
    using QPageSetupDialog_TabletEvent_Callback = void (*)(QPageSetupDialog*, QTabletEvent*);
    using QPageSetupDialog_ActionEvent_Callback = void (*)(QPageSetupDialog*, QActionEvent*);
    using QPageSetupDialog_DragEnterEvent_Callback = void (*)(QPageSetupDialog*, QDragEnterEvent*);
    using QPageSetupDialog_DragMoveEvent_Callback = void (*)(QPageSetupDialog*, QDragMoveEvent*);
    using QPageSetupDialog_DragLeaveEvent_Callback = void (*)(QPageSetupDialog*, QDragLeaveEvent*);
    using QPageSetupDialog_DropEvent_Callback = void (*)(QPageSetupDialog*, QDropEvent*);
    using QPageSetupDialog_HideEvent_Callback = void (*)(QPageSetupDialog*, QHideEvent*);
    using QPageSetupDialog_NativeEvent_Callback = bool (*)(QPageSetupDialog*, libqt_string, void*, intptr_t*);
    using QPageSetupDialog_ChangeEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_Metric_Callback = int (*)(const QPageSetupDialog*, int);
    using QPageSetupDialog_InitPainter_Callback = void (*)(const QPageSetupDialog*, QPainter*);
    using QPageSetupDialog_Redirected_Callback = QPaintDevice* (*)(const QPageSetupDialog*, QPoint*);
    using QPageSetupDialog_SharedPainter_Callback = QPainter* (*)(const QPageSetupDialog*);
    using QPageSetupDialog_InputMethodEvent_Callback = void (*)(QPageSetupDialog*, QInputMethodEvent*);
    using QPageSetupDialog_InputMethodQuery_Callback = QVariant* (*)(const QPageSetupDialog*, int);
    using QPageSetupDialog_FocusNextPrevChild_Callback = bool (*)(QPageSetupDialog*, bool);
    using QPageSetupDialog_TimerEvent_Callback = void (*)(QPageSetupDialog*, QTimerEvent*);
    using QPageSetupDialog_ChildEvent_Callback = void (*)(QPageSetupDialog*, QChildEvent*);
    using QPageSetupDialog_CustomEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_ConnectNotify_Callback = void (*)(QPageSetupDialog*, QMetaMethod*);
    using QPageSetupDialog_DisconnectNotify_Callback = void (*)(QPageSetupDialog*, QMetaMethod*);
    using QPageSetupDialog::adjustPosition;
    using QPageSetupDialog::create;
    using QPageSetupDialog::destroy;
    using QPageSetupDialog::focusNextChild;
    using QPageSetupDialog::focusPreviousChild;
    using QPageSetupDialog::getDecodedMetricF;
    using QPageSetupDialog::isSignalConnected;
    using QPageSetupDialog::receivers;
    using QPageSetupDialog::sender;
    using QPageSetupDialog::senderSignalIndex;
    using QPageSetupDialog::updateMicroFocus;

    // Instance callback storage
    QPageSetupDialog_MetaObject_Callback qpagesetupdialog_metaobject_callback = nullptr;
    QPageSetupDialog_Metacast_Callback qpagesetupdialog_metacast_callback = nullptr;
    QPageSetupDialog_Metacall_Callback qpagesetupdialog_metacall_callback = nullptr;
    QPageSetupDialog_Exec_Callback qpagesetupdialog_exec_callback = nullptr;
    QPageSetupDialog_Done_Callback qpagesetupdialog_done_callback = nullptr;
    QPageSetupDialog_SetVisible_Callback qpagesetupdialog_setvisible_callback = nullptr;
    QPageSetupDialog_SizeHint_Callback qpagesetupdialog_sizehint_callback = nullptr;
    QPageSetupDialog_MinimumSizeHint_Callback qpagesetupdialog_minimumsizehint_callback = nullptr;
    QPageSetupDialog_Open_Callback qpagesetupdialog_open_callback = nullptr;
    QPageSetupDialog_Accept_Callback qpagesetupdialog_accept_callback = nullptr;
    QPageSetupDialog_Reject_Callback qpagesetupdialog_reject_callback = nullptr;
    QPageSetupDialog_KeyPressEvent_Callback qpagesetupdialog_keypressevent_callback = nullptr;
    QPageSetupDialog_CloseEvent_Callback qpagesetupdialog_closeevent_callback = nullptr;
    QPageSetupDialog_ShowEvent_Callback qpagesetupdialog_showevent_callback = nullptr;
    QPageSetupDialog_ResizeEvent_Callback qpagesetupdialog_resizeevent_callback = nullptr;
    QPageSetupDialog_ContextMenuEvent_Callback qpagesetupdialog_contextmenuevent_callback = nullptr;
    QPageSetupDialog_EventFilter_Callback qpagesetupdialog_eventfilter_callback = nullptr;
    QPageSetupDialog_DevType_Callback qpagesetupdialog_devtype_callback = nullptr;
    QPageSetupDialog_HeightForWidth_Callback qpagesetupdialog_heightforwidth_callback = nullptr;
    QPageSetupDialog_HasHeightForWidth_Callback qpagesetupdialog_hasheightforwidth_callback = nullptr;
    QPageSetupDialog_PaintEngine_Callback qpagesetupdialog_paintengine_callback = nullptr;
    QPageSetupDialog_Event_Callback qpagesetupdialog_event_callback = nullptr;
    QPageSetupDialog_MousePressEvent_Callback qpagesetupdialog_mousepressevent_callback = nullptr;
    QPageSetupDialog_MouseReleaseEvent_Callback qpagesetupdialog_mousereleaseevent_callback = nullptr;
    QPageSetupDialog_MouseDoubleClickEvent_Callback qpagesetupdialog_mousedoubleclickevent_callback = nullptr;
    QPageSetupDialog_MouseMoveEvent_Callback qpagesetupdialog_mousemoveevent_callback = nullptr;
    QPageSetupDialog_WheelEvent_Callback qpagesetupdialog_wheelevent_callback = nullptr;
    QPageSetupDialog_KeyReleaseEvent_Callback qpagesetupdialog_keyreleaseevent_callback = nullptr;
    QPageSetupDialog_FocusInEvent_Callback qpagesetupdialog_focusinevent_callback = nullptr;
    QPageSetupDialog_FocusOutEvent_Callback qpagesetupdialog_focusoutevent_callback = nullptr;
    QPageSetupDialog_EnterEvent_Callback qpagesetupdialog_enterevent_callback = nullptr;
    QPageSetupDialog_LeaveEvent_Callback qpagesetupdialog_leaveevent_callback = nullptr;
    QPageSetupDialog_PaintEvent_Callback qpagesetupdialog_paintevent_callback = nullptr;
    QPageSetupDialog_MoveEvent_Callback qpagesetupdialog_moveevent_callback = nullptr;
    QPageSetupDialog_TabletEvent_Callback qpagesetupdialog_tabletevent_callback = nullptr;
    QPageSetupDialog_ActionEvent_Callback qpagesetupdialog_actionevent_callback = nullptr;
    QPageSetupDialog_DragEnterEvent_Callback qpagesetupdialog_dragenterevent_callback = nullptr;
    QPageSetupDialog_DragMoveEvent_Callback qpagesetupdialog_dragmoveevent_callback = nullptr;
    QPageSetupDialog_DragLeaveEvent_Callback qpagesetupdialog_dragleaveevent_callback = nullptr;
    QPageSetupDialog_DropEvent_Callback qpagesetupdialog_dropevent_callback = nullptr;
    QPageSetupDialog_HideEvent_Callback qpagesetupdialog_hideevent_callback = nullptr;
    QPageSetupDialog_NativeEvent_Callback qpagesetupdialog_nativeevent_callback = nullptr;
    QPageSetupDialog_ChangeEvent_Callback qpagesetupdialog_changeevent_callback = nullptr;
    QPageSetupDialog_Metric_Callback qpagesetupdialog_metric_callback = nullptr;
    QPageSetupDialog_InitPainter_Callback qpagesetupdialog_initpainter_callback = nullptr;
    QPageSetupDialog_Redirected_Callback qpagesetupdialog_redirected_callback = nullptr;
    QPageSetupDialog_SharedPainter_Callback qpagesetupdialog_sharedpainter_callback = nullptr;
    QPageSetupDialog_InputMethodEvent_Callback qpagesetupdialog_inputmethodevent_callback = nullptr;
    QPageSetupDialog_InputMethodQuery_Callback qpagesetupdialog_inputmethodquery_callback = nullptr;
    QPageSetupDialog_FocusNextPrevChild_Callback qpagesetupdialog_focusnextprevchild_callback = nullptr;
    QPageSetupDialog_TimerEvent_Callback qpagesetupdialog_timerevent_callback = nullptr;
    QPageSetupDialog_ChildEvent_Callback qpagesetupdialog_childevent_callback = nullptr;
    QPageSetupDialog_CustomEvent_Callback qpagesetupdialog_customevent_callback = nullptr;
    QPageSetupDialog_ConnectNotify_Callback qpagesetupdialog_connectnotify_callback = nullptr;
    QPageSetupDialog_DisconnectNotify_Callback qpagesetupdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPageSetupDialog {
        using QPageSetupDialog::actionEvent;
        using QPageSetupDialog::changeEvent;
        using QPageSetupDialog::childEvent;
        using QPageSetupDialog::closeEvent;
        using QPageSetupDialog::connectNotify;
        using QPageSetupDialog::contextMenuEvent;
        using QPageSetupDialog::customEvent;
        using QPageSetupDialog::disconnectNotify;
        using QPageSetupDialog::dragEnterEvent;
        using QPageSetupDialog::dragLeaveEvent;
        using QPageSetupDialog::dragMoveEvent;
        using QPageSetupDialog::dropEvent;
        using QPageSetupDialog::enterEvent;
        using QPageSetupDialog::event;
        using QPageSetupDialog::eventFilter;
        using QPageSetupDialog::focusInEvent;
        using QPageSetupDialog::focusNextPrevChild;
        using QPageSetupDialog::focusOutEvent;
        using QPageSetupDialog::hideEvent;
        using QPageSetupDialog::initPainter;
        using QPageSetupDialog::inputMethodEvent;
        using QPageSetupDialog::keyPressEvent;
        using QPageSetupDialog::keyReleaseEvent;
        using QPageSetupDialog::leaveEvent;
        using QPageSetupDialog::metric;
        using QPageSetupDialog::mouseDoubleClickEvent;
        using QPageSetupDialog::mouseMoveEvent;
        using QPageSetupDialog::mousePressEvent;
        using QPageSetupDialog::mouseReleaseEvent;
        using QPageSetupDialog::moveEvent;
        using QPageSetupDialog::nativeEvent;
        using QPageSetupDialog::paintEvent;
        using QPageSetupDialog::redirected;
        using QPageSetupDialog::resizeEvent;
        using QPageSetupDialog::sharedPainter;
        using QPageSetupDialog::showEvent;
        using QPageSetupDialog::tabletEvent;
        using QPageSetupDialog::timerEvent;
        using QPageSetupDialog::wheelEvent;
    };

    VirtualQPageSetupDialog(QWidget* parent) : QPageSetupDialog(parent) {};
    VirtualQPageSetupDialog(QPrinter* printer) : QPageSetupDialog(printer) {};
    VirtualQPageSetupDialog() : QPageSetupDialog() {};
    VirtualQPageSetupDialog(QPrinter* printer, QWidget* parent) : QPageSetupDialog(printer, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpagesetupdialog_metaobject_callback) {
            QMetaObject* callback_ret = qpagesetupdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QPageSetupDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpagesetupdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpagesetupdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpagesetupdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpagesetupdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qpagesetupdialog_exec_callback) {
            int callback_ret = qpagesetupdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qpagesetupdialog_done_callback) {
            int cbval1 = result;
            qpagesetupdialog_done_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpagesetupdialog_setvisible_callback) {
            bool cbval1 = visible;
            qpagesetupdialog_setvisible_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpagesetupdialog_sizehint_callback) {
            QSize* callback_ret = qpagesetupdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPageSetupDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpagesetupdialog_minimumsizehint_callback) {
            QSize* callback_ret = qpagesetupdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPageSetupDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qpagesetupdialog_open_callback) {
            qpagesetupdialog_open_callback(this);
            return;
        }
        QPageSetupDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qpagesetupdialog_accept_callback) {
            qpagesetupdialog_accept_callback(this);
            return;
        }
        QPageSetupDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qpagesetupdialog_reject_callback) {
            qpagesetupdialog_reject_callback(this);
            return;
        }
        QPageSetupDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpagesetupdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qpagesetupdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qpagesetupdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qpagesetupdialog_closeevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qpagesetupdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qpagesetupdialog_showevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qpagesetupdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qpagesetupdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qpagesetupdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qpagesetupdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qpagesetupdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qpagesetupdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPageSetupDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpagesetupdialog_devtype_callback) {
            int callback_ret = qpagesetupdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpagesetupdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qpagesetupdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpagesetupdialog_hasheightforwidth_callback) {
            bool callback_ret = qpagesetupdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPageSetupDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpagesetupdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qpagesetupdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QPageSetupDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpagesetupdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qpagesetupdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qpagesetupdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qpagesetupdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qpagesetupdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qpagesetupdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpagesetupdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qpagesetupdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpagesetupdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qpagesetupdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpagesetupdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qpagesetupdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpagesetupdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qpagesetupdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpagesetupdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qpagesetupdialog_enterevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpagesetupdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qpagesetupdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qpagesetupdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qpagesetupdialog_paintevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpagesetupdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qpagesetupdialog_moveevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpagesetupdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qpagesetupdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpagesetupdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qpagesetupdialog_actionevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpagesetupdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qpagesetupdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpagesetupdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qpagesetupdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpagesetupdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qpagesetupdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpagesetupdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qpagesetupdialog_dropevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpagesetupdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qpagesetupdialog_hideevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpagesetupdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qpagesetupdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPageSetupDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qpagesetupdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            qpagesetupdialog_changeevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpagesetupdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qpagesetupdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPageSetupDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpagesetupdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qpagesetupdialog_initpainter_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpagesetupdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qpagesetupdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpagesetupdialog_sharedpainter_callback) {
            QPainter* callback_ret = qpagesetupdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPageSetupDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpagesetupdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qpagesetupdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpagesetupdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qpagesetupdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPageSetupDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpagesetupdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qpagesetupdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPageSetupDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpagesetupdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qpagesetupdialog_timerevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpagesetupdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpagesetupdialog_childevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpagesetupdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qpagesetupdialog_customevent_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpagesetupdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpagesetupdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpagesetupdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpagesetupdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPageSetupDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPageSetupDialog_SuperKeyPressEvent(QPageSetupDialog* self, QKeyEvent* param1);
    friend void QPageSetupDialog_SuperCloseEvent(QPageSetupDialog* self, QCloseEvent* param1);
    friend void QPageSetupDialog_SuperShowEvent(QPageSetupDialog* self, QShowEvent* param1);
    friend void QPageSetupDialog_SuperResizeEvent(QPageSetupDialog* self, QResizeEvent* param1);
    friend void QPageSetupDialog_SuperContextMenuEvent(QPageSetupDialog* self, QContextMenuEvent* param1);
    friend bool QPageSetupDialog_SuperEventFilter(QPageSetupDialog* self, QObject* param1, QEvent* param2);
    friend bool QPageSetupDialog_SuperEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_SuperMousePressEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperMouseReleaseEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperMouseDoubleClickEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperMouseMoveEvent(QPageSetupDialog* self, QMouseEvent* event);
    friend void QPageSetupDialog_SuperWheelEvent(QPageSetupDialog* self, QWheelEvent* event);
    friend void QPageSetupDialog_SuperKeyReleaseEvent(QPageSetupDialog* self, QKeyEvent* event);
    friend void QPageSetupDialog_SuperFocusInEvent(QPageSetupDialog* self, QFocusEvent* event);
    friend void QPageSetupDialog_SuperFocusOutEvent(QPageSetupDialog* self, QFocusEvent* event);
    friend void QPageSetupDialog_SuperEnterEvent(QPageSetupDialog* self, QEnterEvent* event);
    friend void QPageSetupDialog_SuperLeaveEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_SuperPaintEvent(QPageSetupDialog* self, QPaintEvent* event);
    friend void QPageSetupDialog_SuperMoveEvent(QPageSetupDialog* self, QMoveEvent* event);
    friend void QPageSetupDialog_SuperTabletEvent(QPageSetupDialog* self, QTabletEvent* event);
    friend void QPageSetupDialog_SuperActionEvent(QPageSetupDialog* self, QActionEvent* event);
    friend void QPageSetupDialog_SuperDragEnterEvent(QPageSetupDialog* self, QDragEnterEvent* event);
    friend void QPageSetupDialog_SuperDragMoveEvent(QPageSetupDialog* self, QDragMoveEvent* event);
    friend void QPageSetupDialog_SuperDragLeaveEvent(QPageSetupDialog* self, QDragLeaveEvent* event);
    friend void QPageSetupDialog_SuperDropEvent(QPageSetupDialog* self, QDropEvent* event);
    friend void QPageSetupDialog_SuperHideEvent(QPageSetupDialog* self, QHideEvent* event);
    friend bool QPageSetupDialog_SuperNativeEvent(QPageSetupDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPageSetupDialog_SuperChangeEvent(QPageSetupDialog* self, QEvent* param1);
    friend int QPageSetupDialog_SuperMetric(const QPageSetupDialog* self, int param1);
    friend void QPageSetupDialog_SuperInitPainter(const QPageSetupDialog* self, QPainter* painter);
    friend QPaintDevice* QPageSetupDialog_SuperRedirected(const QPageSetupDialog* self, QPoint* offset);
    friend QPainter* QPageSetupDialog_SuperSharedPainter(const QPageSetupDialog* self);
    friend void QPageSetupDialog_SuperInputMethodEvent(QPageSetupDialog* self, QInputMethodEvent* param1);
    friend bool QPageSetupDialog_SuperFocusNextPrevChild(QPageSetupDialog* self, bool next);
    friend void QPageSetupDialog_SuperTimerEvent(QPageSetupDialog* self, QTimerEvent* event);
    friend void QPageSetupDialog_SuperChildEvent(QPageSetupDialog* self, QChildEvent* event);
    friend void QPageSetupDialog_SuperCustomEvent(QPageSetupDialog* self, QEvent* event);
    friend void QPageSetupDialog_SuperConnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
    friend void QPageSetupDialog_SuperDisconnectNotify(QPageSetupDialog* self, const QMetaMethod* signal);
};

#endif
