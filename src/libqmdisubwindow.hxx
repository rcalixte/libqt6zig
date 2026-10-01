#pragma once
#ifndef LIBQMDISUBWINDOW_HXX
#define LIBQMDISUBWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMdiSubWindow
class VirtualQMdiSubWindow final : public QMdiSubWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMdiSubWindow_MetaObject_Callback = QMetaObject* (*)(const QMdiSubWindow*);
    using QMdiSubWindow_Metacast_Callback = void* (*)(QMdiSubWindow*, const char*);
    using QMdiSubWindow_Metacall_Callback = int (*)(QMdiSubWindow*, int, int, void**);
    using QMdiSubWindow_SizeHint_Callback = QSize* (*)(const QMdiSubWindow*);
    using QMdiSubWindow_MinimumSizeHint_Callback = QSize* (*)(const QMdiSubWindow*);
    using QMdiSubWindow_EventFilter_Callback = bool (*)(QMdiSubWindow*, QObject*, QEvent*);
    using QMdiSubWindow_Event_Callback = bool (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ShowEvent_Callback = void (*)(QMdiSubWindow*, QShowEvent*);
    using QMdiSubWindow_HideEvent_Callback = void (*)(QMdiSubWindow*, QHideEvent*);
    using QMdiSubWindow_ChangeEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_CloseEvent_Callback = void (*)(QMdiSubWindow*, QCloseEvent*);
    using QMdiSubWindow_LeaveEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ResizeEvent_Callback = void (*)(QMdiSubWindow*, QResizeEvent*);
    using QMdiSubWindow_TimerEvent_Callback = void (*)(QMdiSubWindow*, QTimerEvent*);
    using QMdiSubWindow_MoveEvent_Callback = void (*)(QMdiSubWindow*, QMoveEvent*);
    using QMdiSubWindow_PaintEvent_Callback = void (*)(QMdiSubWindow*, QPaintEvent*);
    using QMdiSubWindow_MousePressEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseDoubleClickEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseReleaseEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseMoveEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_KeyPressEvent_Callback = void (*)(QMdiSubWindow*, QKeyEvent*);
    using QMdiSubWindow_ContextMenuEvent_Callback = void (*)(QMdiSubWindow*, QContextMenuEvent*);
    using QMdiSubWindow_FocusInEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
    using QMdiSubWindow_FocusOutEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
    using QMdiSubWindow_ChildEvent_Callback = void (*)(QMdiSubWindow*, QChildEvent*);
    using QMdiSubWindow_DevType_Callback = int (*)(const QMdiSubWindow*);
    using QMdiSubWindow_SetVisible_Callback = void (*)(QMdiSubWindow*, bool);
    using QMdiSubWindow_HeightForWidth_Callback = int (*)(const QMdiSubWindow*, int);
    using QMdiSubWindow_HasHeightForWidth_Callback = bool (*)(const QMdiSubWindow*);
    using QMdiSubWindow_PaintEngine_Callback = QPaintEngine* (*)(const QMdiSubWindow*);
    using QMdiSubWindow_WheelEvent_Callback = void (*)(QMdiSubWindow*, QWheelEvent*);
    using QMdiSubWindow_KeyReleaseEvent_Callback = void (*)(QMdiSubWindow*, QKeyEvent*);
    using QMdiSubWindow_EnterEvent_Callback = void (*)(QMdiSubWindow*, QEnterEvent*);
    using QMdiSubWindow_TabletEvent_Callback = void (*)(QMdiSubWindow*, QTabletEvent*);
    using QMdiSubWindow_ActionEvent_Callback = void (*)(QMdiSubWindow*, QActionEvent*);
    using QMdiSubWindow_DragEnterEvent_Callback = void (*)(QMdiSubWindow*, QDragEnterEvent*);
    using QMdiSubWindow_DragMoveEvent_Callback = void (*)(QMdiSubWindow*, QDragMoveEvent*);
    using QMdiSubWindow_DragLeaveEvent_Callback = void (*)(QMdiSubWindow*, QDragLeaveEvent*);
    using QMdiSubWindow_DropEvent_Callback = void (*)(QMdiSubWindow*, QDropEvent*);
    using QMdiSubWindow_NativeEvent_Callback = bool (*)(QMdiSubWindow*, libqt_string, void*, intptr_t*);
    using QMdiSubWindow_Metric_Callback = int (*)(const QMdiSubWindow*, int);
    using QMdiSubWindow_InitPainter_Callback = void (*)(const QMdiSubWindow*, QPainter*);
    using QMdiSubWindow_Redirected_Callback = QPaintDevice* (*)(const QMdiSubWindow*, QPoint*);
    using QMdiSubWindow_SharedPainter_Callback = QPainter* (*)(const QMdiSubWindow*);
    using QMdiSubWindow_InputMethodEvent_Callback = void (*)(QMdiSubWindow*, QInputMethodEvent*);
    using QMdiSubWindow_InputMethodQuery_Callback = QVariant* (*)(const QMdiSubWindow*, int);
    using QMdiSubWindow_FocusNextPrevChild_Callback = bool (*)(QMdiSubWindow*, bool);
    using QMdiSubWindow_CustomEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ConnectNotify_Callback = void (*)(QMdiSubWindow*, QMetaMethod*);
    using QMdiSubWindow_DisconnectNotify_Callback = void (*)(QMdiSubWindow*, QMetaMethod*);
    using QMdiSubWindow::create;
    using QMdiSubWindow::destroy;
    using QMdiSubWindow::focusNextChild;
    using QMdiSubWindow::focusPreviousChild;
    using QMdiSubWindow::getDecodedMetricF;
    using QMdiSubWindow::isSignalConnected;
    using QMdiSubWindow::receivers;
    using QMdiSubWindow::sender;
    using QMdiSubWindow::senderSignalIndex;
    using QMdiSubWindow::updateMicroFocus;

    // Instance callback storage
    QMdiSubWindow_MetaObject_Callback qmdisubwindow_metaobject_callback = nullptr;
    QMdiSubWindow_Metacast_Callback qmdisubwindow_metacast_callback = nullptr;
    QMdiSubWindow_Metacall_Callback qmdisubwindow_metacall_callback = nullptr;
    QMdiSubWindow_SizeHint_Callback qmdisubwindow_sizehint_callback = nullptr;
    QMdiSubWindow_MinimumSizeHint_Callback qmdisubwindow_minimumsizehint_callback = nullptr;
    QMdiSubWindow_EventFilter_Callback qmdisubwindow_eventfilter_callback = nullptr;
    QMdiSubWindow_Event_Callback qmdisubwindow_event_callback = nullptr;
    QMdiSubWindow_ShowEvent_Callback qmdisubwindow_showevent_callback = nullptr;
    QMdiSubWindow_HideEvent_Callback qmdisubwindow_hideevent_callback = nullptr;
    QMdiSubWindow_ChangeEvent_Callback qmdisubwindow_changeevent_callback = nullptr;
    QMdiSubWindow_CloseEvent_Callback qmdisubwindow_closeevent_callback = nullptr;
    QMdiSubWindow_LeaveEvent_Callback qmdisubwindow_leaveevent_callback = nullptr;
    QMdiSubWindow_ResizeEvent_Callback qmdisubwindow_resizeevent_callback = nullptr;
    QMdiSubWindow_TimerEvent_Callback qmdisubwindow_timerevent_callback = nullptr;
    QMdiSubWindow_MoveEvent_Callback qmdisubwindow_moveevent_callback = nullptr;
    QMdiSubWindow_PaintEvent_Callback qmdisubwindow_paintevent_callback = nullptr;
    QMdiSubWindow_MousePressEvent_Callback qmdisubwindow_mousepressevent_callback = nullptr;
    QMdiSubWindow_MouseDoubleClickEvent_Callback qmdisubwindow_mousedoubleclickevent_callback = nullptr;
    QMdiSubWindow_MouseReleaseEvent_Callback qmdisubwindow_mousereleaseevent_callback = nullptr;
    QMdiSubWindow_MouseMoveEvent_Callback qmdisubwindow_mousemoveevent_callback = nullptr;
    QMdiSubWindow_KeyPressEvent_Callback qmdisubwindow_keypressevent_callback = nullptr;
    QMdiSubWindow_ContextMenuEvent_Callback qmdisubwindow_contextmenuevent_callback = nullptr;
    QMdiSubWindow_FocusInEvent_Callback qmdisubwindow_focusinevent_callback = nullptr;
    QMdiSubWindow_FocusOutEvent_Callback qmdisubwindow_focusoutevent_callback = nullptr;
    QMdiSubWindow_ChildEvent_Callback qmdisubwindow_childevent_callback = nullptr;
    QMdiSubWindow_DevType_Callback qmdisubwindow_devtype_callback = nullptr;
    QMdiSubWindow_SetVisible_Callback qmdisubwindow_setvisible_callback = nullptr;
    QMdiSubWindow_HeightForWidth_Callback qmdisubwindow_heightforwidth_callback = nullptr;
    QMdiSubWindow_HasHeightForWidth_Callback qmdisubwindow_hasheightforwidth_callback = nullptr;
    QMdiSubWindow_PaintEngine_Callback qmdisubwindow_paintengine_callback = nullptr;
    QMdiSubWindow_WheelEvent_Callback qmdisubwindow_wheelevent_callback = nullptr;
    QMdiSubWindow_KeyReleaseEvent_Callback qmdisubwindow_keyreleaseevent_callback = nullptr;
    QMdiSubWindow_EnterEvent_Callback qmdisubwindow_enterevent_callback = nullptr;
    QMdiSubWindow_TabletEvent_Callback qmdisubwindow_tabletevent_callback = nullptr;
    QMdiSubWindow_ActionEvent_Callback qmdisubwindow_actionevent_callback = nullptr;
    QMdiSubWindow_DragEnterEvent_Callback qmdisubwindow_dragenterevent_callback = nullptr;
    QMdiSubWindow_DragMoveEvent_Callback qmdisubwindow_dragmoveevent_callback = nullptr;
    QMdiSubWindow_DragLeaveEvent_Callback qmdisubwindow_dragleaveevent_callback = nullptr;
    QMdiSubWindow_DropEvent_Callback qmdisubwindow_dropevent_callback = nullptr;
    QMdiSubWindow_NativeEvent_Callback qmdisubwindow_nativeevent_callback = nullptr;
    QMdiSubWindow_Metric_Callback qmdisubwindow_metric_callback = nullptr;
    QMdiSubWindow_InitPainter_Callback qmdisubwindow_initpainter_callback = nullptr;
    QMdiSubWindow_Redirected_Callback qmdisubwindow_redirected_callback = nullptr;
    QMdiSubWindow_SharedPainter_Callback qmdisubwindow_sharedpainter_callback = nullptr;
    QMdiSubWindow_InputMethodEvent_Callback qmdisubwindow_inputmethodevent_callback = nullptr;
    QMdiSubWindow_InputMethodQuery_Callback qmdisubwindow_inputmethodquery_callback = nullptr;
    QMdiSubWindow_FocusNextPrevChild_Callback qmdisubwindow_focusnextprevchild_callback = nullptr;
    QMdiSubWindow_CustomEvent_Callback qmdisubwindow_customevent_callback = nullptr;
    QMdiSubWindow_ConnectNotify_Callback qmdisubwindow_connectnotify_callback = nullptr;
    QMdiSubWindow_DisconnectNotify_Callback qmdisubwindow_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMdiSubWindow {
        using QMdiSubWindow::actionEvent;
        using QMdiSubWindow::changeEvent;
        using QMdiSubWindow::childEvent;
        using QMdiSubWindow::closeEvent;
        using QMdiSubWindow::connectNotify;
        using QMdiSubWindow::contextMenuEvent;
        using QMdiSubWindow::customEvent;
        using QMdiSubWindow::disconnectNotify;
        using QMdiSubWindow::dragEnterEvent;
        using QMdiSubWindow::dragLeaveEvent;
        using QMdiSubWindow::dragMoveEvent;
        using QMdiSubWindow::dropEvent;
        using QMdiSubWindow::enterEvent;
        using QMdiSubWindow::event;
        using QMdiSubWindow::eventFilter;
        using QMdiSubWindow::focusInEvent;
        using QMdiSubWindow::focusNextPrevChild;
        using QMdiSubWindow::focusOutEvent;
        using QMdiSubWindow::hideEvent;
        using QMdiSubWindow::initPainter;
        using QMdiSubWindow::inputMethodEvent;
        using QMdiSubWindow::keyPressEvent;
        using QMdiSubWindow::keyReleaseEvent;
        using QMdiSubWindow::leaveEvent;
        using QMdiSubWindow::metric;
        using QMdiSubWindow::mouseDoubleClickEvent;
        using QMdiSubWindow::mouseMoveEvent;
        using QMdiSubWindow::mousePressEvent;
        using QMdiSubWindow::mouseReleaseEvent;
        using QMdiSubWindow::moveEvent;
        using QMdiSubWindow::nativeEvent;
        using QMdiSubWindow::paintEvent;
        using QMdiSubWindow::redirected;
        using QMdiSubWindow::resizeEvent;
        using QMdiSubWindow::sharedPainter;
        using QMdiSubWindow::showEvent;
        using QMdiSubWindow::tabletEvent;
        using QMdiSubWindow::timerEvent;
        using QMdiSubWindow::wheelEvent;
    };

    VirtualQMdiSubWindow(QWidget* parent) : QMdiSubWindow(parent) {};
    VirtualQMdiSubWindow() : QMdiSubWindow() {};
    VirtualQMdiSubWindow(QWidget* parent, Qt::WindowFlags flags) : QMdiSubWindow(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmdisubwindow_metaobject_callback) {
            QMetaObject* callback_ret = qmdisubwindow_metaobject_callback(this);
            return callback_ret;
        }
        return QMdiSubWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmdisubwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmdisubwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmdisubwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmdisubwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmdisubwindow_sizehint_callback) {
            QSize* callback_ret = qmdisubwindow_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMdiSubWindow::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmdisubwindow_minimumsizehint_callback) {
            QSize* callback_ret = qmdisubwindow_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMdiSubWindow::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qmdisubwindow_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qmdisubwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMdiSubWindow::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmdisubwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmdisubwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* showEvent) override {
        if (qmdisubwindow_showevent_callback) {
            QShowEvent* cbval1 = showEvent;
            qmdisubwindow_showevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::showEvent(showEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* hideEvent) override {
        if (qmdisubwindow_hideevent_callback) {
            QHideEvent* cbval1 = hideEvent;
            qmdisubwindow_hideevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::hideEvent(hideEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* changeEvent) override {
        if (qmdisubwindow_changeevent_callback) {
            QEvent* cbval1 = changeEvent;
            qmdisubwindow_changeevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::changeEvent(changeEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* closeEvent) override {
        if (qmdisubwindow_closeevent_callback) {
            QCloseEvent* cbval1 = closeEvent;
            qmdisubwindow_closeevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::closeEvent(closeEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* leaveEvent) override {
        if (qmdisubwindow_leaveevent_callback) {
            QEvent* cbval1 = leaveEvent;
            qmdisubwindow_leaveevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::leaveEvent(leaveEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* resizeEvent) override {
        if (qmdisubwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = resizeEvent;
            qmdisubwindow_resizeevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::resizeEvent(resizeEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* timerEvent) override {
        if (qmdisubwindow_timerevent_callback) {
            QTimerEvent* cbval1 = timerEvent;
            qmdisubwindow_timerevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::timerEvent(timerEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* moveEvent) override {
        if (qmdisubwindow_moveevent_callback) {
            QMoveEvent* cbval1 = moveEvent;
            qmdisubwindow_moveevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::moveEvent(moveEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* paintEvent) override {
        if (qmdisubwindow_paintevent_callback) {
            QPaintEvent* cbval1 = paintEvent;
            qmdisubwindow_paintevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::paintEvent(paintEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = mouseEvent;
            qmdisubwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::mousePressEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = mouseEvent;
            qmdisubwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = mouseEvent;
            qmdisubwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::mouseReleaseEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = mouseEvent;
            qmdisubwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::mouseMoveEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (qmdisubwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = keyEvent;
            qmdisubwindow_keypressevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::keyPressEvent(keyEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* contextMenuEvent) override {
        if (qmdisubwindow_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = contextMenuEvent;
            qmdisubwindow_contextmenuevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::contextMenuEvent(contextMenuEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* focusInEvent) override {
        if (qmdisubwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = focusInEvent;
            qmdisubwindow_focusinevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::focusInEvent(focusInEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* focusOutEvent) override {
        if (qmdisubwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = focusOutEvent;
            qmdisubwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::focusOutEvent(focusOutEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* childEvent) override {
        if (qmdisubwindow_childevent_callback) {
            QChildEvent* cbval1 = childEvent;
            qmdisubwindow_childevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::childEvent(childEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmdisubwindow_devtype_callback) {
            int callback_ret = qmdisubwindow_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmdisubwindow_setvisible_callback) {
            bool cbval1 = visible;
            qmdisubwindow_setvisible_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmdisubwindow_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qmdisubwindow_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmdisubwindow_hasheightforwidth_callback) {
            bool callback_ret = qmdisubwindow_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QMdiSubWindow::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmdisubwindow_paintengine_callback) {
            QPaintEngine* callback_ret = qmdisubwindow_paintengine_callback(this);
            return callback_ret;
        }
        return QMdiSubWindow::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmdisubwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qmdisubwindow_wheelevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmdisubwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qmdisubwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmdisubwindow_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qmdisubwindow_enterevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmdisubwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qmdisubwindow_tabletevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmdisubwindow_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qmdisubwindow_actionevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmdisubwindow_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qmdisubwindow_dragenterevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmdisubwindow_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qmdisubwindow_dragmoveevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmdisubwindow_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qmdisubwindow_dragleaveevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmdisubwindow_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qmdisubwindow_dropevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmdisubwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qmdisubwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QMdiSubWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmdisubwindow_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qmdisubwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMdiSubWindow::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmdisubwindow_initpainter_callback) {
            QPainter* cbval1 = painter;
            qmdisubwindow_initpainter_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmdisubwindow_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qmdisubwindow_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmdisubwindow_sharedpainter_callback) {
            QPainter* callback_ret = qmdisubwindow_sharedpainter_callback(this);
            return callback_ret;
        }
        return QMdiSubWindow::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmdisubwindow_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qmdisubwindow_inputmethodevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmdisubwindow_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qmdisubwindow_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMdiSubWindow::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmdisubwindow_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qmdisubwindow_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QMdiSubWindow::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmdisubwindow_customevent_callback) {
            QEvent* cbval1 = event;
            qmdisubwindow_customevent_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmdisubwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmdisubwindow_connectnotify_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmdisubwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmdisubwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMdiSubWindow::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QMdiSubWindow_SuperEventFilter(QMdiSubWindow* self, QObject* object, QEvent* event);
    friend bool QMdiSubWindow_SuperEvent(QMdiSubWindow* self, QEvent* event);
    friend void QMdiSubWindow_SuperShowEvent(QMdiSubWindow* self, QShowEvent* showEvent);
    friend void QMdiSubWindow_SuperHideEvent(QMdiSubWindow* self, QHideEvent* hideEvent);
    friend void QMdiSubWindow_SuperChangeEvent(QMdiSubWindow* self, QEvent* changeEvent);
    friend void QMdiSubWindow_SuperCloseEvent(QMdiSubWindow* self, QCloseEvent* closeEvent);
    friend void QMdiSubWindow_SuperLeaveEvent(QMdiSubWindow* self, QEvent* leaveEvent);
    friend void QMdiSubWindow_SuperResizeEvent(QMdiSubWindow* self, QResizeEvent* resizeEvent);
    friend void QMdiSubWindow_SuperTimerEvent(QMdiSubWindow* self, QTimerEvent* timerEvent);
    friend void QMdiSubWindow_SuperMoveEvent(QMdiSubWindow* self, QMoveEvent* moveEvent);
    friend void QMdiSubWindow_SuperPaintEvent(QMdiSubWindow* self, QPaintEvent* paintEvent);
    friend void QMdiSubWindow_SuperMousePressEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperMouseDoubleClickEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperMouseReleaseEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperMouseMoveEvent(QMdiSubWindow* self, QMouseEvent* mouseEvent);
    friend void QMdiSubWindow_SuperKeyPressEvent(QMdiSubWindow* self, QKeyEvent* keyEvent);
    friend void QMdiSubWindow_SuperContextMenuEvent(QMdiSubWindow* self, QContextMenuEvent* contextMenuEvent);
    friend void QMdiSubWindow_SuperFocusInEvent(QMdiSubWindow* self, QFocusEvent* focusInEvent);
    friend void QMdiSubWindow_SuperFocusOutEvent(QMdiSubWindow* self, QFocusEvent* focusOutEvent);
    friend void QMdiSubWindow_SuperChildEvent(QMdiSubWindow* self, QChildEvent* childEvent);
    friend void QMdiSubWindow_SuperWheelEvent(QMdiSubWindow* self, QWheelEvent* event);
    friend void QMdiSubWindow_SuperKeyReleaseEvent(QMdiSubWindow* self, QKeyEvent* event);
    friend void QMdiSubWindow_SuperEnterEvent(QMdiSubWindow* self, QEnterEvent* event);
    friend void QMdiSubWindow_SuperTabletEvent(QMdiSubWindow* self, QTabletEvent* event);
    friend void QMdiSubWindow_SuperActionEvent(QMdiSubWindow* self, QActionEvent* event);
    friend void QMdiSubWindow_SuperDragEnterEvent(QMdiSubWindow* self, QDragEnterEvent* event);
    friend void QMdiSubWindow_SuperDragMoveEvent(QMdiSubWindow* self, QDragMoveEvent* event);
    friend void QMdiSubWindow_SuperDragLeaveEvent(QMdiSubWindow* self, QDragLeaveEvent* event);
    friend void QMdiSubWindow_SuperDropEvent(QMdiSubWindow* self, QDropEvent* event);
    friend bool QMdiSubWindow_SuperNativeEvent(QMdiSubWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMdiSubWindow_SuperMetric(const QMdiSubWindow* self, int param1);
    friend void QMdiSubWindow_SuperInitPainter(const QMdiSubWindow* self, QPainter* painter);
    friend QPaintDevice* QMdiSubWindow_SuperRedirected(const QMdiSubWindow* self, QPoint* offset);
    friend QPainter* QMdiSubWindow_SuperSharedPainter(const QMdiSubWindow* self);
    friend void QMdiSubWindow_SuperInputMethodEvent(QMdiSubWindow* self, QInputMethodEvent* param1);
    friend bool QMdiSubWindow_SuperFocusNextPrevChild(QMdiSubWindow* self, bool next);
    friend void QMdiSubWindow_SuperCustomEvent(QMdiSubWindow* self, QEvent* event);
    friend void QMdiSubWindow_SuperConnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
    friend void QMdiSubWindow_SuperDisconnectNotify(QMdiSubWindow* self, const QMetaMethod* signal);
};

#endif
