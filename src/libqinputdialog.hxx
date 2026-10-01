#pragma once
#ifndef LIBQINPUTDIALOG_HXX
#define LIBQINPUTDIALOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputDialog
class VirtualQInputDialog final : public QInputDialog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QInputDialog_MetaObject_Callback = QMetaObject* (*)(const QInputDialog*);
    using QInputDialog_Metacast_Callback = void* (*)(QInputDialog*, const char*);
    using QInputDialog_Metacall_Callback = int (*)(QInputDialog*, int, int, void**);
    using QInputDialog_MinimumSizeHint_Callback = QSize* (*)(const QInputDialog*);
    using QInputDialog_SizeHint_Callback = QSize* (*)(const QInputDialog*);
    using QInputDialog_SetVisible_Callback = void (*)(QInputDialog*, bool);
    using QInputDialog_Done_Callback = void (*)(QInputDialog*, int);
    using QInputDialog_Open_Callback = void (*)(QInputDialog*);
    using QInputDialog_Exec_Callback = int (*)(QInputDialog*);
    using QInputDialog_Accept_Callback = void (*)(QInputDialog*);
    using QInputDialog_Reject_Callback = void (*)(QInputDialog*);
    using QInputDialog_KeyPressEvent_Callback = void (*)(QInputDialog*, QKeyEvent*);
    using QInputDialog_CloseEvent_Callback = void (*)(QInputDialog*, QCloseEvent*);
    using QInputDialog_ShowEvent_Callback = void (*)(QInputDialog*, QShowEvent*);
    using QInputDialog_ResizeEvent_Callback = void (*)(QInputDialog*, QResizeEvent*);
    using QInputDialog_ContextMenuEvent_Callback = void (*)(QInputDialog*, QContextMenuEvent*);
    using QInputDialog_EventFilter_Callback = bool (*)(QInputDialog*, QObject*, QEvent*);
    using QInputDialog_DevType_Callback = int (*)(const QInputDialog*);
    using QInputDialog_HeightForWidth_Callback = int (*)(const QInputDialog*, int);
    using QInputDialog_HasHeightForWidth_Callback = bool (*)(const QInputDialog*);
    using QInputDialog_PaintEngine_Callback = QPaintEngine* (*)(const QInputDialog*);
    using QInputDialog_Event_Callback = bool (*)(QInputDialog*, QEvent*);
    using QInputDialog_MousePressEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseReleaseEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseDoubleClickEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseMoveEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_WheelEvent_Callback = void (*)(QInputDialog*, QWheelEvent*);
    using QInputDialog_KeyReleaseEvent_Callback = void (*)(QInputDialog*, QKeyEvent*);
    using QInputDialog_FocusInEvent_Callback = void (*)(QInputDialog*, QFocusEvent*);
    using QInputDialog_FocusOutEvent_Callback = void (*)(QInputDialog*, QFocusEvent*);
    using QInputDialog_EnterEvent_Callback = void (*)(QInputDialog*, QEnterEvent*);
    using QInputDialog_LeaveEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_PaintEvent_Callback = void (*)(QInputDialog*, QPaintEvent*);
    using QInputDialog_MoveEvent_Callback = void (*)(QInputDialog*, QMoveEvent*);
    using QInputDialog_TabletEvent_Callback = void (*)(QInputDialog*, QTabletEvent*);
    using QInputDialog_ActionEvent_Callback = void (*)(QInputDialog*, QActionEvent*);
    using QInputDialog_DragEnterEvent_Callback = void (*)(QInputDialog*, QDragEnterEvent*);
    using QInputDialog_DragMoveEvent_Callback = void (*)(QInputDialog*, QDragMoveEvent*);
    using QInputDialog_DragLeaveEvent_Callback = void (*)(QInputDialog*, QDragLeaveEvent*);
    using QInputDialog_DropEvent_Callback = void (*)(QInputDialog*, QDropEvent*);
    using QInputDialog_HideEvent_Callback = void (*)(QInputDialog*, QHideEvent*);
    using QInputDialog_NativeEvent_Callback = bool (*)(QInputDialog*, libqt_string, void*, intptr_t*);
    using QInputDialog_ChangeEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_Metric_Callback = int (*)(const QInputDialog*, int);
    using QInputDialog_InitPainter_Callback = void (*)(const QInputDialog*, QPainter*);
    using QInputDialog_Redirected_Callback = QPaintDevice* (*)(const QInputDialog*, QPoint*);
    using QInputDialog_SharedPainter_Callback = QPainter* (*)(const QInputDialog*);
    using QInputDialog_InputMethodEvent_Callback = void (*)(QInputDialog*, QInputMethodEvent*);
    using QInputDialog_InputMethodQuery_Callback = QVariant* (*)(const QInputDialog*, int);
    using QInputDialog_FocusNextPrevChild_Callback = bool (*)(QInputDialog*, bool);
    using QInputDialog_TimerEvent_Callback = void (*)(QInputDialog*, QTimerEvent*);
    using QInputDialog_ChildEvent_Callback = void (*)(QInputDialog*, QChildEvent*);
    using QInputDialog_CustomEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_ConnectNotify_Callback = void (*)(QInputDialog*, QMetaMethod*);
    using QInputDialog_DisconnectNotify_Callback = void (*)(QInputDialog*, QMetaMethod*);
    using QInputDialog::adjustPosition;
    using QInputDialog::create;
    using QInputDialog::destroy;
    using QInputDialog::focusNextChild;
    using QInputDialog::focusPreviousChild;
    using QInputDialog::getDecodedMetricF;
    using QInputDialog::isSignalConnected;
    using QInputDialog::receivers;
    using QInputDialog::sender;
    using QInputDialog::senderSignalIndex;
    using QInputDialog::updateMicroFocus;

    // Instance callback storage
    QInputDialog_MetaObject_Callback qinputdialog_metaobject_callback = nullptr;
    QInputDialog_Metacast_Callback qinputdialog_metacast_callback = nullptr;
    QInputDialog_Metacall_Callback qinputdialog_metacall_callback = nullptr;
    QInputDialog_MinimumSizeHint_Callback qinputdialog_minimumsizehint_callback = nullptr;
    QInputDialog_SizeHint_Callback qinputdialog_sizehint_callback = nullptr;
    QInputDialog_SetVisible_Callback qinputdialog_setvisible_callback = nullptr;
    QInputDialog_Done_Callback qinputdialog_done_callback = nullptr;
    QInputDialog_Open_Callback qinputdialog_open_callback = nullptr;
    QInputDialog_Exec_Callback qinputdialog_exec_callback = nullptr;
    QInputDialog_Accept_Callback qinputdialog_accept_callback = nullptr;
    QInputDialog_Reject_Callback qinputdialog_reject_callback = nullptr;
    QInputDialog_KeyPressEvent_Callback qinputdialog_keypressevent_callback = nullptr;
    QInputDialog_CloseEvent_Callback qinputdialog_closeevent_callback = nullptr;
    QInputDialog_ShowEvent_Callback qinputdialog_showevent_callback = nullptr;
    QInputDialog_ResizeEvent_Callback qinputdialog_resizeevent_callback = nullptr;
    QInputDialog_ContextMenuEvent_Callback qinputdialog_contextmenuevent_callback = nullptr;
    QInputDialog_EventFilter_Callback qinputdialog_eventfilter_callback = nullptr;
    QInputDialog_DevType_Callback qinputdialog_devtype_callback = nullptr;
    QInputDialog_HeightForWidth_Callback qinputdialog_heightforwidth_callback = nullptr;
    QInputDialog_HasHeightForWidth_Callback qinputdialog_hasheightforwidth_callback = nullptr;
    QInputDialog_PaintEngine_Callback qinputdialog_paintengine_callback = nullptr;
    QInputDialog_Event_Callback qinputdialog_event_callback = nullptr;
    QInputDialog_MousePressEvent_Callback qinputdialog_mousepressevent_callback = nullptr;
    QInputDialog_MouseReleaseEvent_Callback qinputdialog_mousereleaseevent_callback = nullptr;
    QInputDialog_MouseDoubleClickEvent_Callback qinputdialog_mousedoubleclickevent_callback = nullptr;
    QInputDialog_MouseMoveEvent_Callback qinputdialog_mousemoveevent_callback = nullptr;
    QInputDialog_WheelEvent_Callback qinputdialog_wheelevent_callback = nullptr;
    QInputDialog_KeyReleaseEvent_Callback qinputdialog_keyreleaseevent_callback = nullptr;
    QInputDialog_FocusInEvent_Callback qinputdialog_focusinevent_callback = nullptr;
    QInputDialog_FocusOutEvent_Callback qinputdialog_focusoutevent_callback = nullptr;
    QInputDialog_EnterEvent_Callback qinputdialog_enterevent_callback = nullptr;
    QInputDialog_LeaveEvent_Callback qinputdialog_leaveevent_callback = nullptr;
    QInputDialog_PaintEvent_Callback qinputdialog_paintevent_callback = nullptr;
    QInputDialog_MoveEvent_Callback qinputdialog_moveevent_callback = nullptr;
    QInputDialog_TabletEvent_Callback qinputdialog_tabletevent_callback = nullptr;
    QInputDialog_ActionEvent_Callback qinputdialog_actionevent_callback = nullptr;
    QInputDialog_DragEnterEvent_Callback qinputdialog_dragenterevent_callback = nullptr;
    QInputDialog_DragMoveEvent_Callback qinputdialog_dragmoveevent_callback = nullptr;
    QInputDialog_DragLeaveEvent_Callback qinputdialog_dragleaveevent_callback = nullptr;
    QInputDialog_DropEvent_Callback qinputdialog_dropevent_callback = nullptr;
    QInputDialog_HideEvent_Callback qinputdialog_hideevent_callback = nullptr;
    QInputDialog_NativeEvent_Callback qinputdialog_nativeevent_callback = nullptr;
    QInputDialog_ChangeEvent_Callback qinputdialog_changeevent_callback = nullptr;
    QInputDialog_Metric_Callback qinputdialog_metric_callback = nullptr;
    QInputDialog_InitPainter_Callback qinputdialog_initpainter_callback = nullptr;
    QInputDialog_Redirected_Callback qinputdialog_redirected_callback = nullptr;
    QInputDialog_SharedPainter_Callback qinputdialog_sharedpainter_callback = nullptr;
    QInputDialog_InputMethodEvent_Callback qinputdialog_inputmethodevent_callback = nullptr;
    QInputDialog_InputMethodQuery_Callback qinputdialog_inputmethodquery_callback = nullptr;
    QInputDialog_FocusNextPrevChild_Callback qinputdialog_focusnextprevchild_callback = nullptr;
    QInputDialog_TimerEvent_Callback qinputdialog_timerevent_callback = nullptr;
    QInputDialog_ChildEvent_Callback qinputdialog_childevent_callback = nullptr;
    QInputDialog_CustomEvent_Callback qinputdialog_customevent_callback = nullptr;
    QInputDialog_ConnectNotify_Callback qinputdialog_connectnotify_callback = nullptr;
    QInputDialog_DisconnectNotify_Callback qinputdialog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QInputDialog {
        using QInputDialog::actionEvent;
        using QInputDialog::changeEvent;
        using QInputDialog::childEvent;
        using QInputDialog::closeEvent;
        using QInputDialog::connectNotify;
        using QInputDialog::contextMenuEvent;
        using QInputDialog::customEvent;
        using QInputDialog::disconnectNotify;
        using QInputDialog::dragEnterEvent;
        using QInputDialog::dragLeaveEvent;
        using QInputDialog::dragMoveEvent;
        using QInputDialog::dropEvent;
        using QInputDialog::enterEvent;
        using QInputDialog::event;
        using QInputDialog::eventFilter;
        using QInputDialog::focusInEvent;
        using QInputDialog::focusNextPrevChild;
        using QInputDialog::focusOutEvent;
        using QInputDialog::hideEvent;
        using QInputDialog::initPainter;
        using QInputDialog::inputMethodEvent;
        using QInputDialog::keyPressEvent;
        using QInputDialog::keyReleaseEvent;
        using QInputDialog::leaveEvent;
        using QInputDialog::metric;
        using QInputDialog::mouseDoubleClickEvent;
        using QInputDialog::mouseMoveEvent;
        using QInputDialog::mousePressEvent;
        using QInputDialog::mouseReleaseEvent;
        using QInputDialog::moveEvent;
        using QInputDialog::nativeEvent;
        using QInputDialog::paintEvent;
        using QInputDialog::redirected;
        using QInputDialog::resizeEvent;
        using QInputDialog::sharedPainter;
        using QInputDialog::showEvent;
        using QInputDialog::tabletEvent;
        using QInputDialog::timerEvent;
        using QInputDialog::wheelEvent;
    };

    VirtualQInputDialog(QWidget* parent) : QInputDialog(parent) {};
    VirtualQInputDialog() : QInputDialog() {};
    VirtualQInputDialog(QWidget* parent, Qt::WindowFlags flags) : QInputDialog(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qinputdialog_metaobject_callback) {
            QMetaObject* callback_ret = qinputdialog_metaobject_callback(this);
            return callback_ret;
        }
        return QInputDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qinputdialog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qinputdialog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QInputDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qinputdialog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qinputdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QInputDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qinputdialog_minimumsizehint_callback) {
            QSize* callback_ret = qinputdialog_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QInputDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qinputdialog_sizehint_callback) {
            QSize* callback_ret = qinputdialog_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QInputDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qinputdialog_setvisible_callback) {
            bool cbval1 = visible;
            qinputdialog_setvisible_callback(this, cbval1);
            return;
        }
        QInputDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qinputdialog_done_callback) {
            int cbval1 = result;
            qinputdialog_done_callback(this, cbval1);
            return;
        }
        QInputDialog::done(result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qinputdialog_open_callback) {
            qinputdialog_open_callback(this);
            return;
        }
        QInputDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qinputdialog_exec_callback) {
            int callback_ret = qinputdialog_exec_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QInputDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qinputdialog_accept_callback) {
            qinputdialog_accept_callback(this);
            return;
        }
        QInputDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qinputdialog_reject_callback) {
            qinputdialog_reject_callback(this);
            return;
        }
        QInputDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qinputdialog_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qinputdialog_keypressevent_callback(this, cbval1);
            return;
        }
        QInputDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qinputdialog_closeevent_callback) {
            QCloseEvent* cbval1 = param1;
            qinputdialog_closeevent_callback(this, cbval1);
            return;
        }
        QInputDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qinputdialog_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qinputdialog_showevent_callback(this, cbval1);
            return;
        }
        QInputDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qinputdialog_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qinputdialog_resizeevent_callback(this, cbval1);
            return;
        }
        QInputDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qinputdialog_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qinputdialog_contextmenuevent_callback(this, cbval1);
            return;
        }
        QInputDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qinputdialog_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qinputdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QInputDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qinputdialog_devtype_callback) {
            int callback_ret = qinputdialog_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QInputDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qinputdialog_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qinputdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QInputDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qinputdialog_hasheightforwidth_callback) {
            bool callback_ret = qinputdialog_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QInputDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qinputdialog_paintengine_callback) {
            QPaintEngine* callback_ret = qinputdialog_paintengine_callback(this);
            return callback_ret;
        }
        return QInputDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qinputdialog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qinputdialog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QInputDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qinputdialog_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qinputdialog_mousepressevent_callback(this, cbval1);
            return;
        }
        QInputDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qinputdialog_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qinputdialog_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QInputDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qinputdialog_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qinputdialog_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QInputDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qinputdialog_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qinputdialog_mousemoveevent_callback(this, cbval1);
            return;
        }
        QInputDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qinputdialog_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qinputdialog_wheelevent_callback(this, cbval1);
            return;
        }
        QInputDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qinputdialog_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qinputdialog_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QInputDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qinputdialog_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qinputdialog_focusinevent_callback(this, cbval1);
            return;
        }
        QInputDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qinputdialog_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qinputdialog_focusoutevent_callback(this, cbval1);
            return;
        }
        QInputDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qinputdialog_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qinputdialog_enterevent_callback(this, cbval1);
            return;
        }
        QInputDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qinputdialog_leaveevent_callback) {
            QEvent* cbval1 = event;
            qinputdialog_leaveevent_callback(this, cbval1);
            return;
        }
        QInputDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qinputdialog_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qinputdialog_paintevent_callback(this, cbval1);
            return;
        }
        QInputDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qinputdialog_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qinputdialog_moveevent_callback(this, cbval1);
            return;
        }
        QInputDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qinputdialog_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qinputdialog_tabletevent_callback(this, cbval1);
            return;
        }
        QInputDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qinputdialog_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qinputdialog_actionevent_callback(this, cbval1);
            return;
        }
        QInputDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qinputdialog_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qinputdialog_dragenterevent_callback(this, cbval1);
            return;
        }
        QInputDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qinputdialog_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qinputdialog_dragmoveevent_callback(this, cbval1);
            return;
        }
        QInputDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qinputdialog_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qinputdialog_dragleaveevent_callback(this, cbval1);
            return;
        }
        QInputDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qinputdialog_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qinputdialog_dropevent_callback(this, cbval1);
            return;
        }
        QInputDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qinputdialog_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qinputdialog_hideevent_callback(this, cbval1);
            return;
        }
        QInputDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qinputdialog_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qinputdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QInputDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qinputdialog_changeevent_callback) {
            QEvent* cbval1 = param1;
            qinputdialog_changeevent_callback(this, cbval1);
            return;
        }
        QInputDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qinputdialog_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qinputdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QInputDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qinputdialog_initpainter_callback) {
            QPainter* cbval1 = painter;
            qinputdialog_initpainter_callback(this, cbval1);
            return;
        }
        QInputDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qinputdialog_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qinputdialog_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QInputDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qinputdialog_sharedpainter_callback) {
            QPainter* callback_ret = qinputdialog_sharedpainter_callback(this);
            return callback_ret;
        }
        return QInputDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qinputdialog_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qinputdialog_inputmethodevent_callback(this, cbval1);
            return;
        }
        QInputDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qinputdialog_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qinputdialog_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QInputDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qinputdialog_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qinputdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QInputDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qinputdialog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qinputdialog_timerevent_callback(this, cbval1);
            return;
        }
        QInputDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qinputdialog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qinputdialog_childevent_callback(this, cbval1);
            return;
        }
        QInputDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qinputdialog_customevent_callback) {
            QEvent* cbval1 = event;
            qinputdialog_customevent_callback(this, cbval1);
            return;
        }
        QInputDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qinputdialog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qinputdialog_connectnotify_callback(this, cbval1);
            return;
        }
        QInputDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qinputdialog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qinputdialog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QInputDialog::disconnectNotify(signal);
    }

    // Friend functions
    friend void QInputDialog_SuperKeyPressEvent(QInputDialog* self, QKeyEvent* param1);
    friend void QInputDialog_SuperCloseEvent(QInputDialog* self, QCloseEvent* param1);
    friend void QInputDialog_SuperShowEvent(QInputDialog* self, QShowEvent* param1);
    friend void QInputDialog_SuperResizeEvent(QInputDialog* self, QResizeEvent* param1);
    friend void QInputDialog_SuperContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1);
    friend bool QInputDialog_SuperEventFilter(QInputDialog* self, QObject* param1, QEvent* param2);
    friend bool QInputDialog_SuperEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_SuperMousePressEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_SuperMouseReleaseEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_SuperMouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_SuperMouseMoveEvent(QInputDialog* self, QMouseEvent* event);
    friend void QInputDialog_SuperWheelEvent(QInputDialog* self, QWheelEvent* event);
    friend void QInputDialog_SuperKeyReleaseEvent(QInputDialog* self, QKeyEvent* event);
    friend void QInputDialog_SuperFocusInEvent(QInputDialog* self, QFocusEvent* event);
    friend void QInputDialog_SuperFocusOutEvent(QInputDialog* self, QFocusEvent* event);
    friend void QInputDialog_SuperEnterEvent(QInputDialog* self, QEnterEvent* event);
    friend void QInputDialog_SuperLeaveEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_SuperPaintEvent(QInputDialog* self, QPaintEvent* event);
    friend void QInputDialog_SuperMoveEvent(QInputDialog* self, QMoveEvent* event);
    friend void QInputDialog_SuperTabletEvent(QInputDialog* self, QTabletEvent* event);
    friend void QInputDialog_SuperActionEvent(QInputDialog* self, QActionEvent* event);
    friend void QInputDialog_SuperDragEnterEvent(QInputDialog* self, QDragEnterEvent* event);
    friend void QInputDialog_SuperDragMoveEvent(QInputDialog* self, QDragMoveEvent* event);
    friend void QInputDialog_SuperDragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event);
    friend void QInputDialog_SuperDropEvent(QInputDialog* self, QDropEvent* event);
    friend void QInputDialog_SuperHideEvent(QInputDialog* self, QHideEvent* event);
    friend bool QInputDialog_SuperNativeEvent(QInputDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QInputDialog_SuperChangeEvent(QInputDialog* self, QEvent* param1);
    friend int QInputDialog_SuperMetric(const QInputDialog* self, int param1);
    friend void QInputDialog_SuperInitPainter(const QInputDialog* self, QPainter* painter);
    friend QPaintDevice* QInputDialog_SuperRedirected(const QInputDialog* self, QPoint* offset);
    friend QPainter* QInputDialog_SuperSharedPainter(const QInputDialog* self);
    friend void QInputDialog_SuperInputMethodEvent(QInputDialog* self, QInputMethodEvent* param1);
    friend bool QInputDialog_SuperFocusNextPrevChild(QInputDialog* self, bool next);
    friend void QInputDialog_SuperTimerEvent(QInputDialog* self, QTimerEvent* event);
    friend void QInputDialog_SuperChildEvent(QInputDialog* self, QChildEvent* event);
    friend void QInputDialog_SuperCustomEvent(QInputDialog* self, QEvent* event);
    friend void QInputDialog_SuperConnectNotify(QInputDialog* self, const QMetaMethod* signal);
    friend void QInputDialog_SuperDisconnectNotify(QInputDialog* self, const QMetaMethod* signal);
};

#endif
