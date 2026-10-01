#pragma once
#ifndef LIBQPROGRESSDIALOG_HXX
#define LIBQPROGRESSDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProgressDialog
class VirtualQProgressDialog final : public QProgressDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QProgressDialog_MetaObject_Callback = QMetaObject* (*)(const QProgressDialog*);
    using QProgressDialog_Metacast_Callback = void* (*)(QProgressDialog*, const char*);
    using QProgressDialog_Metacall_Callback = int (*)(QProgressDialog*, int, int, void**);
    using QProgressDialog_SizeHint_Callback = QSize* (*)(const QProgressDialog*);
    using QProgressDialog_ResizeEvent_Callback = void (*)(QProgressDialog*, QResizeEvent*);
    using QProgressDialog_CloseEvent_Callback = void (*)(QProgressDialog*, QCloseEvent*);
    using QProgressDialog_ChangeEvent_Callback = void (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_ShowEvent_Callback = void (*)(QProgressDialog*, QShowEvent*);
    using QProgressDialog_SetVisible_Callback = void (*)(QProgressDialog*, bool);
    using QProgressDialog_MinimumSizeHint_Callback = QSize* (*)(const QProgressDialog*);
    using QProgressDialog_Open_Callback = void (*)(QProgressDialog*);
    using QProgressDialog_Exec_Callback = int (*)(QProgressDialog*);
    using QProgressDialog_Done_Callback = void (*)(QProgressDialog*, int);
    using QProgressDialog_Accept_Callback = void (*)(QProgressDialog*);
    using QProgressDialog_Reject_Callback = void (*)(QProgressDialog*);
    using QProgressDialog_KeyPressEvent_Callback = void (*)(QProgressDialog*, QKeyEvent*);
    using QProgressDialog_ContextMenuEvent_Callback = void (*)(QProgressDialog*, QContextMenuEvent*);
    using QProgressDialog_EventFilter_Callback = bool (*)(QProgressDialog*, QObject*, QEvent*);
    using QProgressDialog_DevType_Callback = int (*)(const QProgressDialog*);
    using QProgressDialog_HeightForWidth_Callback = int (*)(const QProgressDialog*, int);
    using QProgressDialog_HasHeightForWidth_Callback = bool (*)(const QProgressDialog*);
    using QProgressDialog_PaintEngine_Callback = QPaintEngine* (*)(const QProgressDialog*);
    using QProgressDialog_Event_Callback = bool (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_MousePressEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_MouseReleaseEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_MouseDoubleClickEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_MouseMoveEvent_Callback = void (*)(QProgressDialog*, QMouseEvent*);
    using QProgressDialog_WheelEvent_Callback = void (*)(QProgressDialog*, QWheelEvent*);
    using QProgressDialog_KeyReleaseEvent_Callback = void (*)(QProgressDialog*, QKeyEvent*);
    using QProgressDialog_FocusInEvent_Callback = void (*)(QProgressDialog*, QFocusEvent*);
    using QProgressDialog_FocusOutEvent_Callback = void (*)(QProgressDialog*, QFocusEvent*);
    using QProgressDialog_EnterEvent_Callback = void (*)(QProgressDialog*, QEnterEvent*);
    using QProgressDialog_LeaveEvent_Callback = void (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_PaintEvent_Callback = void (*)(QProgressDialog*, QPaintEvent*);
    using QProgressDialog_MoveEvent_Callback = void (*)(QProgressDialog*, QMoveEvent*);
    using QProgressDialog_TabletEvent_Callback = void (*)(QProgressDialog*, QTabletEvent*);
    using QProgressDialog_ActionEvent_Callback = void (*)(QProgressDialog*, QActionEvent*);
    using QProgressDialog_DragEnterEvent_Callback = void (*)(QProgressDialog*, QDragEnterEvent*);
    using QProgressDialog_DragMoveEvent_Callback = void (*)(QProgressDialog*, QDragMoveEvent*);
    using QProgressDialog_DragLeaveEvent_Callback = void (*)(QProgressDialog*, QDragLeaveEvent*);
    using QProgressDialog_DropEvent_Callback = void (*)(QProgressDialog*, QDropEvent*);
    using QProgressDialog_HideEvent_Callback = void (*)(QProgressDialog*, QHideEvent*);
    using QProgressDialog_NativeEvent_Callback = bool (*)(QProgressDialog*, libqt_string, void*, intptr_t*);
    using QProgressDialog_Metric_Callback = int (*)(const QProgressDialog*, int);
    using QProgressDialog_InitPainter_Callback = void (*)(const QProgressDialog*, QPainter*);
    using QProgressDialog_Redirected_Callback = QPaintDevice* (*)(const QProgressDialog*, QPoint*);
    using QProgressDialog_SharedPainter_Callback = QPainter* (*)(const QProgressDialog*);
    using QProgressDialog_InputMethodEvent_Callback = void (*)(QProgressDialog*, QInputMethodEvent*);
    using QProgressDialog_InputMethodQuery_Callback = QVariant* (*)(const QProgressDialog*, int);
    using QProgressDialog_FocusNextPrevChild_Callback = bool (*)(QProgressDialog*, bool);
    using QProgressDialog_TimerEvent_Callback = void (*)(QProgressDialog*, QTimerEvent*);
    using QProgressDialog_ChildEvent_Callback = void (*)(QProgressDialog*, QChildEvent*);
    using QProgressDialog_CustomEvent_Callback = void (*)(QProgressDialog*, QEvent*);
    using QProgressDialog_ConnectNotify_Callback = void (*)(QProgressDialog*, QMetaMethod*);
    using QProgressDialog_DisconnectNotify_Callback = void (*)(QProgressDialog*, QMetaMethod*);
    using QProgressDialog::adjustPosition;
    using QProgressDialog::create;
    using QProgressDialog::destroy;
    using QProgressDialog::focusNextChild;
    using QProgressDialog::focusPreviousChild;
    using QProgressDialog::forceShow;
    using QProgressDialog::getDecodedMetricF;
    using QProgressDialog::isSignalConnected;
    using QProgressDialog::receivers;
    using QProgressDialog::sender;
    using QProgressDialog::senderSignalIndex;
    using QProgressDialog::updateMicroFocus;

    // Instance callback storage
    QProgressDialog_MetaObject_Callback qprogressdialog_metaobject_callback = nullptr;
    QProgressDialog_Metacast_Callback qprogressdialog_metacast_callback = nullptr;
    QProgressDialog_Metacall_Callback qprogressdialog_metacall_callback = nullptr;
    QProgressDialog_SizeHint_Callback qprogressdialog_sizehint_callback = nullptr;
    QProgressDialog_ResizeEvent_Callback qprogressdialog_resizeevent_callback = nullptr;
    QProgressDialog_CloseEvent_Callback qprogressdialog_closeevent_callback = nullptr;
    QProgressDialog_ChangeEvent_Callback qprogressdialog_changeevent_callback = nullptr;
    QProgressDialog_ShowEvent_Callback qprogressdialog_showevent_callback = nullptr;
    QProgressDialog_SetVisible_Callback qprogressdialog_setvisible_callback = nullptr;
    QProgressDialog_MinimumSizeHint_Callback qprogressdialog_minimumsizehint_callback = nullptr;
    QProgressDialog_Open_Callback qprogressdialog_open_callback = nullptr;
    QProgressDialog_Exec_Callback qprogressdialog_exec_callback = nullptr;
    QProgressDialog_Done_Callback qprogressdialog_done_callback = nullptr;
    QProgressDialog_Accept_Callback qprogressdialog_accept_callback = nullptr;
    QProgressDialog_Reject_Callback qprogressdialog_reject_callback = nullptr;
    QProgressDialog_KeyPressEvent_Callback qprogressdialog_keypressevent_callback = nullptr;
    QProgressDialog_ContextMenuEvent_Callback qprogressdialog_contextmenuevent_callback = nullptr;
    QProgressDialog_EventFilter_Callback qprogressdialog_eventfilter_callback = nullptr;
    QProgressDialog_DevType_Callback qprogressdialog_devtype_callback = nullptr;
    QProgressDialog_HeightForWidth_Callback qprogressdialog_heightforwidth_callback = nullptr;
    QProgressDialog_HasHeightForWidth_Callback qprogressdialog_hasheightforwidth_callback = nullptr;
    QProgressDialog_PaintEngine_Callback qprogressdialog_paintengine_callback = nullptr;
    QProgressDialog_Event_Callback qprogressdialog_event_callback = nullptr;
    QProgressDialog_MousePressEvent_Callback qprogressdialog_mousepressevent_callback = nullptr;
    QProgressDialog_MouseReleaseEvent_Callback qprogressdialog_mousereleaseevent_callback = nullptr;
    QProgressDialog_MouseDoubleClickEvent_Callback qprogressdialog_mousedoubleclickevent_callback = nullptr;
    QProgressDialog_MouseMoveEvent_Callback qprogressdialog_mousemoveevent_callback = nullptr;
    QProgressDialog_WheelEvent_Callback qprogressdialog_wheelevent_callback = nullptr;
    QProgressDialog_KeyReleaseEvent_Callback qprogressdialog_keyreleaseevent_callback = nullptr;
    QProgressDialog_FocusInEvent_Callback qprogressdialog_focusinevent_callback = nullptr;
    QProgressDialog_FocusOutEvent_Callback qprogressdialog_focusoutevent_callback = nullptr;
    QProgressDialog_EnterEvent_Callback qprogressdialog_enterevent_callback = nullptr;
    QProgressDialog_LeaveEvent_Callback qprogressdialog_leaveevent_callback = nullptr;
    QProgressDialog_PaintEvent_Callback qprogressdialog_paintevent_callback = nullptr;
    QProgressDialog_MoveEvent_Callback qprogressdialog_moveevent_callback = nullptr;
    QProgressDialog_TabletEvent_Callback qprogressdialog_tabletevent_callback = nullptr;
    QProgressDialog_ActionEvent_Callback qprogressdialog_actionevent_callback = nullptr;
    QProgressDialog_DragEnterEvent_Callback qprogressdialog_dragenterevent_callback = nullptr;
    QProgressDialog_DragMoveEvent_Callback qprogressdialog_dragmoveevent_callback = nullptr;
    QProgressDialog_DragLeaveEvent_Callback qprogressdialog_dragleaveevent_callback = nullptr;
    QProgressDialog_DropEvent_Callback qprogressdialog_dropevent_callback = nullptr;
    QProgressDialog_HideEvent_Callback qprogressdialog_hideevent_callback = nullptr;
    QProgressDialog_NativeEvent_Callback qprogressdialog_nativeevent_callback = nullptr;
    QProgressDialog_Metric_Callback qprogressdialog_metric_callback = nullptr;
    QProgressDialog_InitPainter_Callback qprogressdialog_initpainter_callback = nullptr;
    QProgressDialog_Redirected_Callback qprogressdialog_redirected_callback = nullptr;
    QProgressDialog_SharedPainter_Callback qprogressdialog_sharedpainter_callback = nullptr;
    QProgressDialog_InputMethodEvent_Callback qprogressdialog_inputmethodevent_callback = nullptr;
    QProgressDialog_InputMethodQuery_Callback qprogressdialog_inputmethodquery_callback = nullptr;
    QProgressDialog_FocusNextPrevChild_Callback qprogressdialog_focusnextprevchild_callback = nullptr;
    QProgressDialog_TimerEvent_Callback qprogressdialog_timerevent_callback = nullptr;
    QProgressDialog_ChildEvent_Callback qprogressdialog_childevent_callback = nullptr;
    QProgressDialog_CustomEvent_Callback qprogressdialog_customevent_callback = nullptr;
    QProgressDialog_ConnectNotify_Callback qprogressdialog_connectnotify_callback = nullptr;
    QProgressDialog_DisconnectNotify_Callback qprogressdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QProgressDialog {
        using QProgressDialog::actionEvent;
        using QProgressDialog::changeEvent;
        using QProgressDialog::childEvent;
        using QProgressDialog::closeEvent;
        using QProgressDialog::connectNotify;
        using QProgressDialog::contextMenuEvent;
        using QProgressDialog::customEvent;
        using QProgressDialog::disconnectNotify;
        using QProgressDialog::dragEnterEvent;
        using QProgressDialog::dragLeaveEvent;
        using QProgressDialog::dragMoveEvent;
        using QProgressDialog::dropEvent;
        using QProgressDialog::enterEvent;
        using QProgressDialog::event;
        using QProgressDialog::eventFilter;
        using QProgressDialog::focusInEvent;
        using QProgressDialog::focusNextPrevChild;
        using QProgressDialog::focusOutEvent;
        using QProgressDialog::hideEvent;
        using QProgressDialog::initPainter;
        using QProgressDialog::inputMethodEvent;
        using QProgressDialog::keyPressEvent;
        using QProgressDialog::keyReleaseEvent;
        using QProgressDialog::leaveEvent;
        using QProgressDialog::metric;
        using QProgressDialog::mouseDoubleClickEvent;
        using QProgressDialog::mouseMoveEvent;
        using QProgressDialog::mousePressEvent;
        using QProgressDialog::mouseReleaseEvent;
        using QProgressDialog::moveEvent;
        using QProgressDialog::nativeEvent;
        using QProgressDialog::paintEvent;
        using QProgressDialog::redirected;
        using QProgressDialog::resizeEvent;
        using QProgressDialog::sharedPainter;
        using QProgressDialog::showEvent;
        using QProgressDialog::tabletEvent;
        using QProgressDialog::timerEvent;
        using QProgressDialog::wheelEvent;
    };

    VirtualQProgressDialog(QWidget* parent) : QProgressDialog(parent) {};
    VirtualQProgressDialog() : QProgressDialog() {};
    VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum) : QProgressDialog(labelText, cancelButtonText, minimum, maximum) {};
    VirtualQProgressDialog(QWidget* parent, Qt::WindowFlags flags) : QProgressDialog(parent, flags) {};
    VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent) : QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent) {};
    VirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent, Qt::WindowFlags flags) : QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qprogressdialog_metaobject_callback) {
            QMetaObject* callback_ret = qprogressdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QProgressDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qprogressdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qprogressdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprogressdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qprogressdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QProgressDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprogressdialog_sizehint_callback) {
            QSize* callback_ret = qprogressdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProgressDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qprogressdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qprogressdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qprogressdialog_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qprogressdialog_closeevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qprogressdialog_changeevent_callback) {
            QEvent* cbval1 = event;
            qprogressdialog_changeevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qprogressdialog_showevent_callback) {
            QShowEvent* cbval1 = event;
            qprogressdialog_showevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprogressdialog_setvisible_callback) {
            bool cbval1 = visible;
            qprogressdialog_setvisible_callback(this, cbval1);
            return;
        }
        QProgressDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprogressdialog_minimumsizehint_callback) {
            QSize* callback_ret = qprogressdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProgressDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qprogressdialog_open_callback) {
            qprogressdialog_open_callback(this);
            return;
        }
        QProgressDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qprogressdialog_exec_callback) {
            int callback_ret = qprogressdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QProgressDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qprogressdialog_done_callback) {
            int cbval1 = param1;
            qprogressdialog_done_callback(this, cbval1);
            return;
        }
        QProgressDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qprogressdialog_accept_callback) {
            qprogressdialog_accept_callback(this);
            return;
        }
        QProgressDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qprogressdialog_reject_callback) {
            qprogressdialog_reject_callback(this);
            return;
        }
        QProgressDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qprogressdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qprogressdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qprogressdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qprogressdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qprogressdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qprogressdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QProgressDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprogressdialog_devtype_callback) {
            int callback_ret = qprogressdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QProgressDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprogressdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qprogressdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QProgressDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprogressdialog_hasheightforwidth_callback) {
            bool callback_ret = qprogressdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QProgressDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprogressdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qprogressdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QProgressDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprogressdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qprogressdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprogressdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qprogressdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprogressdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qprogressdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprogressdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qprogressdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprogressdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qprogressdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprogressdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qprogressdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprogressdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qprogressdialog_enterevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprogressdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qprogressdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprogressdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qprogressdialog_paintevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprogressdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qprogressdialog_moveevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprogressdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qprogressdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprogressdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qprogressdialog_actionevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprogressdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qprogressdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprogressdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qprogressdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprogressdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qprogressdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprogressdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qprogressdialog_dropevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprogressdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qprogressdialog_hideevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprogressdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qprogressdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QProgressDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprogressdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qprogressdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QProgressDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprogressdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qprogressdialog_initpainter_callback(this, cbval1);
            return;
        }
        QProgressDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprogressdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qprogressdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprogressdialog_sharedpainter_callback) {
            QPainter* callback_ret = qprogressdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QProgressDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprogressdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qprogressdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprogressdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qprogressdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProgressDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprogressdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qprogressdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QProgressDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprogressdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qprogressdialog_timerevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprogressdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qprogressdialog_childevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprogressdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qprogressdialog_customevent_callback(this, cbval1);
            return;
        }
        QProgressDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprogressdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprogressdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QProgressDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprogressdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprogressdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QProgressDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QProgressDialog_SuperResizeEvent(QProgressDialog* self, QResizeEvent* event);
    friend void QProgressDialog_SuperCloseEvent(QProgressDialog* self, QCloseEvent* event);
    friend void QProgressDialog_SuperChangeEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_SuperShowEvent(QProgressDialog* self, QShowEvent* event);
    friend void QProgressDialog_SuperKeyPressEvent(QProgressDialog* self, QKeyEvent* param1);
    friend void QProgressDialog_SuperContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1);
    friend bool QProgressDialog_SuperEventFilter(QProgressDialog* self, QObject* param1, QEvent* param2);
    friend bool QProgressDialog_SuperEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_SuperMousePressEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_SuperMouseReleaseEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_SuperMouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_SuperMouseMoveEvent(QProgressDialog* self, QMouseEvent* event);
    friend void QProgressDialog_SuperWheelEvent(QProgressDialog* self, QWheelEvent* event);
    friend void QProgressDialog_SuperKeyReleaseEvent(QProgressDialog* self, QKeyEvent* event);
    friend void QProgressDialog_SuperFocusInEvent(QProgressDialog* self, QFocusEvent* event);
    friend void QProgressDialog_SuperFocusOutEvent(QProgressDialog* self, QFocusEvent* event);
    friend void QProgressDialog_SuperEnterEvent(QProgressDialog* self, QEnterEvent* event);
    friend void QProgressDialog_SuperLeaveEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_SuperPaintEvent(QProgressDialog* self, QPaintEvent* event);
    friend void QProgressDialog_SuperMoveEvent(QProgressDialog* self, QMoveEvent* event);
    friend void QProgressDialog_SuperTabletEvent(QProgressDialog* self, QTabletEvent* event);
    friend void QProgressDialog_SuperActionEvent(QProgressDialog* self, QActionEvent* event);
    friend void QProgressDialog_SuperDragEnterEvent(QProgressDialog* self, QDragEnterEvent* event);
    friend void QProgressDialog_SuperDragMoveEvent(QProgressDialog* self, QDragMoveEvent* event);
    friend void QProgressDialog_SuperDragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event);
    friend void QProgressDialog_SuperDropEvent(QProgressDialog* self, QDropEvent* event);
    friend void QProgressDialog_SuperHideEvent(QProgressDialog* self, QHideEvent* event);
    friend bool QProgressDialog_SuperNativeEvent(QProgressDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QProgressDialog_SuperMetric(const QProgressDialog* self, int param1);
    friend void QProgressDialog_SuperInitPainter(const QProgressDialog* self, QPainter* painter);
    friend QPaintDevice* QProgressDialog_SuperRedirected(const QProgressDialog* self, QPoint* offset);
    friend QPainter* QProgressDialog_SuperSharedPainter(const QProgressDialog* self);
    friend void QProgressDialog_SuperInputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1);
    friend bool QProgressDialog_SuperFocusNextPrevChild(QProgressDialog* self, bool next);
    friend void QProgressDialog_SuperTimerEvent(QProgressDialog* self, QTimerEvent* event);
    friend void QProgressDialog_SuperChildEvent(QProgressDialog* self, QChildEvent* event);
    friend void QProgressDialog_SuperCustomEvent(QProgressDialog* self, QEvent* event);
    friend void QProgressDialog_SuperConnectNotify(QProgressDialog* self, const QMetaMethod* signal);
    friend void QProgressDialog_SuperDisconnectNotify(QProgressDialog* self, const QMetaMethod* signal);
};

#endif
