#pragma once
#ifndef LIBQMAINWINDOW_HXX
#define LIBQMAINWINDOW_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMainWindow
class VirtualQMainWindow final : public QMainWindow {
  public:
    // Virtual class public types (including callbacks and access types)
    using QMainWindow_MetaObject_Callback = QMetaObject* (*)(const QMainWindow*);
    using QMainWindow_Metacast_Callback = void* (*)(QMainWindow*, const char*);
    using QMainWindow_Metacall_Callback = int (*)(QMainWindow*, int, int, void**);
    using QMainWindow_CreatePopupMenu_Callback = QMenu* (*)(QMainWindow*);
    using QMainWindow_ContextMenuEvent_Callback = void (*)(QMainWindow*, QContextMenuEvent*);
    using QMainWindow_Event_Callback = bool (*)(QMainWindow*, QEvent*);
    using QMainWindow_DevType_Callback = int (*)(const QMainWindow*);
    using QMainWindow_SetVisible_Callback = void (*)(QMainWindow*, bool);
    using QMainWindow_SizeHint_Callback = QSize* (*)(const QMainWindow*);
    using QMainWindow_MinimumSizeHint_Callback = QSize* (*)(const QMainWindow*);
    using QMainWindow_HeightForWidth_Callback = int (*)(const QMainWindow*, int);
    using QMainWindow_HasHeightForWidth_Callback = bool (*)(const QMainWindow*);
    using QMainWindow_PaintEngine_Callback = QPaintEngine* (*)(const QMainWindow*);
    using QMainWindow_MousePressEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_MouseReleaseEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_MouseDoubleClickEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_MouseMoveEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_WheelEvent_Callback = void (*)(QMainWindow*, QWheelEvent*);
    using QMainWindow_KeyPressEvent_Callback = void (*)(QMainWindow*, QKeyEvent*);
    using QMainWindow_KeyReleaseEvent_Callback = void (*)(QMainWindow*, QKeyEvent*);
    using QMainWindow_FocusInEvent_Callback = void (*)(QMainWindow*, QFocusEvent*);
    using QMainWindow_FocusOutEvent_Callback = void (*)(QMainWindow*, QFocusEvent*);
    using QMainWindow_EnterEvent_Callback = void (*)(QMainWindow*, QEnterEvent*);
    using QMainWindow_LeaveEvent_Callback = void (*)(QMainWindow*, QEvent*);
    using QMainWindow_PaintEvent_Callback = void (*)(QMainWindow*, QPaintEvent*);
    using QMainWindow_MoveEvent_Callback = void (*)(QMainWindow*, QMoveEvent*);
    using QMainWindow_ResizeEvent_Callback = void (*)(QMainWindow*, QResizeEvent*);
    using QMainWindow_CloseEvent_Callback = void (*)(QMainWindow*, QCloseEvent*);
    using QMainWindow_TabletEvent_Callback = void (*)(QMainWindow*, QTabletEvent*);
    using QMainWindow_ActionEvent_Callback = void (*)(QMainWindow*, QActionEvent*);
    using QMainWindow_DragEnterEvent_Callback = void (*)(QMainWindow*, QDragEnterEvent*);
    using QMainWindow_DragMoveEvent_Callback = void (*)(QMainWindow*, QDragMoveEvent*);
    using QMainWindow_DragLeaveEvent_Callback = void (*)(QMainWindow*, QDragLeaveEvent*);
    using QMainWindow_DropEvent_Callback = void (*)(QMainWindow*, QDropEvent*);
    using QMainWindow_ShowEvent_Callback = void (*)(QMainWindow*, QShowEvent*);
    using QMainWindow_HideEvent_Callback = void (*)(QMainWindow*, QHideEvent*);
    using QMainWindow_NativeEvent_Callback = bool (*)(QMainWindow*, libqt_string, void*, intptr_t*);
    using QMainWindow_ChangeEvent_Callback = void (*)(QMainWindow*, QEvent*);
    using QMainWindow_Metric_Callback = int (*)(const QMainWindow*, int);
    using QMainWindow_InitPainter_Callback = void (*)(const QMainWindow*, QPainter*);
    using QMainWindow_Redirected_Callback = QPaintDevice* (*)(const QMainWindow*, QPoint*);
    using QMainWindow_SharedPainter_Callback = QPainter* (*)(const QMainWindow*);
    using QMainWindow_InputMethodEvent_Callback = void (*)(QMainWindow*, QInputMethodEvent*);
    using QMainWindow_InputMethodQuery_Callback = QVariant* (*)(const QMainWindow*, int);
    using QMainWindow_FocusNextPrevChild_Callback = bool (*)(QMainWindow*, bool);
    using QMainWindow_EventFilter_Callback = bool (*)(QMainWindow*, QObject*, QEvent*);
    using QMainWindow_TimerEvent_Callback = void (*)(QMainWindow*, QTimerEvent*);
    using QMainWindow_ChildEvent_Callback = void (*)(QMainWindow*, QChildEvent*);
    using QMainWindow_CustomEvent_Callback = void (*)(QMainWindow*, QEvent*);
    using QMainWindow_ConnectNotify_Callback = void (*)(QMainWindow*, QMetaMethod*);
    using QMainWindow_DisconnectNotify_Callback = void (*)(QMainWindow*, QMetaMethod*);
    using QMainWindow::create;
    using QMainWindow::destroy;
    using QMainWindow::focusNextChild;
    using QMainWindow::focusPreviousChild;
    using QMainWindow::getDecodedMetricF;
    using QMainWindow::isSignalConnected;
    using QMainWindow::receivers;
    using QMainWindow::sender;
    using QMainWindow::senderSignalIndex;
    using QMainWindow::updateMicroFocus;

    // Instance callback storage
    QMainWindow_MetaObject_Callback qmainwindow_metaobject_callback = nullptr;
    QMainWindow_Metacast_Callback qmainwindow_metacast_callback = nullptr;
    QMainWindow_Metacall_Callback qmainwindow_metacall_callback = nullptr;
    QMainWindow_CreatePopupMenu_Callback qmainwindow_createpopupmenu_callback = nullptr;
    QMainWindow_ContextMenuEvent_Callback qmainwindow_contextmenuevent_callback = nullptr;
    QMainWindow_Event_Callback qmainwindow_event_callback = nullptr;
    QMainWindow_DevType_Callback qmainwindow_devtype_callback = nullptr;
    QMainWindow_SetVisible_Callback qmainwindow_setvisible_callback = nullptr;
    QMainWindow_SizeHint_Callback qmainwindow_sizehint_callback = nullptr;
    QMainWindow_MinimumSizeHint_Callback qmainwindow_minimumsizehint_callback = nullptr;
    QMainWindow_HeightForWidth_Callback qmainwindow_heightforwidth_callback = nullptr;
    QMainWindow_HasHeightForWidth_Callback qmainwindow_hasheightforwidth_callback = nullptr;
    QMainWindow_PaintEngine_Callback qmainwindow_paintengine_callback = nullptr;
    QMainWindow_MousePressEvent_Callback qmainwindow_mousepressevent_callback = nullptr;
    QMainWindow_MouseReleaseEvent_Callback qmainwindow_mousereleaseevent_callback = nullptr;
    QMainWindow_MouseDoubleClickEvent_Callback qmainwindow_mousedoubleclickevent_callback = nullptr;
    QMainWindow_MouseMoveEvent_Callback qmainwindow_mousemoveevent_callback = nullptr;
    QMainWindow_WheelEvent_Callback qmainwindow_wheelevent_callback = nullptr;
    QMainWindow_KeyPressEvent_Callback qmainwindow_keypressevent_callback = nullptr;
    QMainWindow_KeyReleaseEvent_Callback qmainwindow_keyreleaseevent_callback = nullptr;
    QMainWindow_FocusInEvent_Callback qmainwindow_focusinevent_callback = nullptr;
    QMainWindow_FocusOutEvent_Callback qmainwindow_focusoutevent_callback = nullptr;
    QMainWindow_EnterEvent_Callback qmainwindow_enterevent_callback = nullptr;
    QMainWindow_LeaveEvent_Callback qmainwindow_leaveevent_callback = nullptr;
    QMainWindow_PaintEvent_Callback qmainwindow_paintevent_callback = nullptr;
    QMainWindow_MoveEvent_Callback qmainwindow_moveevent_callback = nullptr;
    QMainWindow_ResizeEvent_Callback qmainwindow_resizeevent_callback = nullptr;
    QMainWindow_CloseEvent_Callback qmainwindow_closeevent_callback = nullptr;
    QMainWindow_TabletEvent_Callback qmainwindow_tabletevent_callback = nullptr;
    QMainWindow_ActionEvent_Callback qmainwindow_actionevent_callback = nullptr;
    QMainWindow_DragEnterEvent_Callback qmainwindow_dragenterevent_callback = nullptr;
    QMainWindow_DragMoveEvent_Callback qmainwindow_dragmoveevent_callback = nullptr;
    QMainWindow_DragLeaveEvent_Callback qmainwindow_dragleaveevent_callback = nullptr;
    QMainWindow_DropEvent_Callback qmainwindow_dropevent_callback = nullptr;
    QMainWindow_ShowEvent_Callback qmainwindow_showevent_callback = nullptr;
    QMainWindow_HideEvent_Callback qmainwindow_hideevent_callback = nullptr;
    QMainWindow_NativeEvent_Callback qmainwindow_nativeevent_callback = nullptr;
    QMainWindow_ChangeEvent_Callback qmainwindow_changeevent_callback = nullptr;
    QMainWindow_Metric_Callback qmainwindow_metric_callback = nullptr;
    QMainWindow_InitPainter_Callback qmainwindow_initpainter_callback = nullptr;
    QMainWindow_Redirected_Callback qmainwindow_redirected_callback = nullptr;
    QMainWindow_SharedPainter_Callback qmainwindow_sharedpainter_callback = nullptr;
    QMainWindow_InputMethodEvent_Callback qmainwindow_inputmethodevent_callback = nullptr;
    QMainWindow_InputMethodQuery_Callback qmainwindow_inputmethodquery_callback = nullptr;
    QMainWindow_FocusNextPrevChild_Callback qmainwindow_focusnextprevchild_callback = nullptr;
    QMainWindow_EventFilter_Callback qmainwindow_eventfilter_callback = nullptr;
    QMainWindow_TimerEvent_Callback qmainwindow_timerevent_callback = nullptr;
    QMainWindow_ChildEvent_Callback qmainwindow_childevent_callback = nullptr;
    QMainWindow_CustomEvent_Callback qmainwindow_customevent_callback = nullptr;
    QMainWindow_ConnectNotify_Callback qmainwindow_connectnotify_callback = nullptr;
    QMainWindow_DisconnectNotify_Callback qmainwindow_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QMainWindow {
        using QMainWindow::actionEvent;
        using QMainWindow::changeEvent;
        using QMainWindow::childEvent;
        using QMainWindow::closeEvent;
        using QMainWindow::connectNotify;
        using QMainWindow::contextMenuEvent;
        using QMainWindow::customEvent;
        using QMainWindow::disconnectNotify;
        using QMainWindow::dragEnterEvent;
        using QMainWindow::dragLeaveEvent;
        using QMainWindow::dragMoveEvent;
        using QMainWindow::dropEvent;
        using QMainWindow::enterEvent;
        using QMainWindow::event;
        using QMainWindow::focusInEvent;
        using QMainWindow::focusNextPrevChild;
        using QMainWindow::focusOutEvent;
        using QMainWindow::hideEvent;
        using QMainWindow::initPainter;
        using QMainWindow::inputMethodEvent;
        using QMainWindow::keyPressEvent;
        using QMainWindow::keyReleaseEvent;
        using QMainWindow::leaveEvent;
        using QMainWindow::metric;
        using QMainWindow::mouseDoubleClickEvent;
        using QMainWindow::mouseMoveEvent;
        using QMainWindow::mousePressEvent;
        using QMainWindow::mouseReleaseEvent;
        using QMainWindow::moveEvent;
        using QMainWindow::nativeEvent;
        using QMainWindow::paintEvent;
        using QMainWindow::redirected;
        using QMainWindow::resizeEvent;
        using QMainWindow::sharedPainter;
        using QMainWindow::showEvent;
        using QMainWindow::tabletEvent;
        using QMainWindow::timerEvent;
        using QMainWindow::wheelEvent;
    };

    VirtualQMainWindow(QWidget* parent) : QMainWindow(parent) {};
    VirtualQMainWindow() : QMainWindow() {};
    VirtualQMainWindow(QWidget* parent, Qt::WindowFlags flags) : QMainWindow(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qmainwindow_metaobject_callback) {
            QMetaObject* callback_ret = qmainwindow_metaobject_callback(this);
            return callback_ret;
        }
        return QMainWindow::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qmainwindow_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qmainwindow_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QMainWindow::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmainwindow_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qmainwindow_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QMainWindow::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (qmainwindow_createpopupmenu_callback) {
            QMenu* callback_ret = qmainwindow_createpopupmenu_callback(this);
            return callback_ret;
        }
        return QMainWindow::createPopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qmainwindow_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qmainwindow_contextmenuevent_callback(this, cbval1);
            return;
        }
        QMainWindow::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmainwindow_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qmainwindow_event_callback(this, cbval1);
            return callback_ret;
        }
        return QMainWindow::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmainwindow_devtype_callback) {
            int callback_ret = qmainwindow_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QMainWindow::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmainwindow_setvisible_callback) {
            bool cbval1 = visible;
            qmainwindow_setvisible_callback(this, cbval1);
            return;
        }
        QMainWindow::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmainwindow_sizehint_callback) {
            QSize* callback_ret = qmainwindow_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMainWindow::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmainwindow_minimumsizehint_callback) {
            QSize* callback_ret = qmainwindow_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMainWindow::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmainwindow_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qmainwindow_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMainWindow::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmainwindow_hasheightforwidth_callback) {
            bool callback_ret = qmainwindow_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QMainWindow::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmainwindow_paintengine_callback) {
            QPaintEngine* callback_ret = qmainwindow_paintengine_callback(this);
            return callback_ret;
        }
        return QMainWindow::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qmainwindow_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qmainwindow_mousepressevent_callback(this, cbval1);
            return;
        }
        QMainWindow::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qmainwindow_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qmainwindow_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QMainWindow::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmainwindow_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qmainwindow_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QMainWindow::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qmainwindow_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qmainwindow_mousemoveevent_callback(this, cbval1);
            return;
        }
        QMainWindow::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmainwindow_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qmainwindow_wheelevent_callback(this, cbval1);
            return;
        }
        QMainWindow::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qmainwindow_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qmainwindow_keypressevent_callback(this, cbval1);
            return;
        }
        QMainWindow::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmainwindow_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qmainwindow_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QMainWindow::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmainwindow_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qmainwindow_focusinevent_callback(this, cbval1);
            return;
        }
        QMainWindow::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmainwindow_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qmainwindow_focusoutevent_callback(this, cbval1);
            return;
        }
        QMainWindow::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmainwindow_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qmainwindow_enterevent_callback(this, cbval1);
            return;
        }
        QMainWindow::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qmainwindow_leaveevent_callback) {
            QEvent* cbval1 = event;
            qmainwindow_leaveevent_callback(this, cbval1);
            return;
        }
        QMainWindow::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qmainwindow_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qmainwindow_paintevent_callback(this, cbval1);
            return;
        }
        QMainWindow::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmainwindow_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qmainwindow_moveevent_callback(this, cbval1);
            return;
        }
        QMainWindow::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qmainwindow_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qmainwindow_resizeevent_callback(this, cbval1);
            return;
        }
        QMainWindow::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmainwindow_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qmainwindow_closeevent_callback(this, cbval1);
            return;
        }
        QMainWindow::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmainwindow_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qmainwindow_tabletevent_callback(this, cbval1);
            return;
        }
        QMainWindow::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmainwindow_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qmainwindow_actionevent_callback(this, cbval1);
            return;
        }
        QMainWindow::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmainwindow_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qmainwindow_dragenterevent_callback(this, cbval1);
            return;
        }
        QMainWindow::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmainwindow_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qmainwindow_dragmoveevent_callback(this, cbval1);
            return;
        }
        QMainWindow::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmainwindow_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qmainwindow_dragleaveevent_callback(this, cbval1);
            return;
        }
        QMainWindow::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmainwindow_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qmainwindow_dropevent_callback(this, cbval1);
            return;
        }
        QMainWindow::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmainwindow_showevent_callback) {
            QShowEvent* cbval1 = event;
            qmainwindow_showevent_callback(this, cbval1);
            return;
        }
        QMainWindow::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmainwindow_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qmainwindow_hideevent_callback(this, cbval1);
            return;
        }
        QMainWindow::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmainwindow_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qmainwindow_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QMainWindow::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmainwindow_changeevent_callback) {
            QEvent* cbval1 = param1;
            qmainwindow_changeevent_callback(this, cbval1);
            return;
        }
        QMainWindow::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmainwindow_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qmainwindow_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QMainWindow::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmainwindow_initpainter_callback) {
            QPainter* cbval1 = painter;
            qmainwindow_initpainter_callback(this, cbval1);
            return;
        }
        QMainWindow::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmainwindow_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qmainwindow_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QMainWindow::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmainwindow_sharedpainter_callback) {
            QPainter* callback_ret = qmainwindow_sharedpainter_callback(this);
            return callback_ret;
        }
        return QMainWindow::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmainwindow_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qmainwindow_inputmethodevent_callback(this, cbval1);
            return;
        }
        QMainWindow::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmainwindow_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qmainwindow_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QMainWindow::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmainwindow_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qmainwindow_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QMainWindow::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmainwindow_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qmainwindow_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QMainWindow::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmainwindow_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qmainwindow_timerevent_callback(this, cbval1);
            return;
        }
        QMainWindow::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmainwindow_childevent_callback) {
            QChildEvent* cbval1 = event;
            qmainwindow_childevent_callback(this, cbval1);
            return;
        }
        QMainWindow::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmainwindow_customevent_callback) {
            QEvent* cbval1 = event;
            qmainwindow_customevent_callback(this, cbval1);
            return;
        }
        QMainWindow::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmainwindow_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmainwindow_connectnotify_callback(this, cbval1);
            return;
        }
        QMainWindow::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmainwindow_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qmainwindow_disconnectnotify_callback(this, cbval1);
            return;
        }
        QMainWindow::disconnectNotify(signal);
    }

    // Friend functions
    friend void QMainWindow_SuperContextMenuEvent(QMainWindow* self, QContextMenuEvent* event);
    friend bool QMainWindow_SuperEvent(QMainWindow* self, QEvent* event);
    friend void QMainWindow_SuperMousePressEvent(QMainWindow* self, QMouseEvent* event);
    friend void QMainWindow_SuperMouseReleaseEvent(QMainWindow* self, QMouseEvent* event);
    friend void QMainWindow_SuperMouseDoubleClickEvent(QMainWindow* self, QMouseEvent* event);
    friend void QMainWindow_SuperMouseMoveEvent(QMainWindow* self, QMouseEvent* event);
    friend void QMainWindow_SuperWheelEvent(QMainWindow* self, QWheelEvent* event);
    friend void QMainWindow_SuperKeyPressEvent(QMainWindow* self, QKeyEvent* event);
    friend void QMainWindow_SuperKeyReleaseEvent(QMainWindow* self, QKeyEvent* event);
    friend void QMainWindow_SuperFocusInEvent(QMainWindow* self, QFocusEvent* event);
    friend void QMainWindow_SuperFocusOutEvent(QMainWindow* self, QFocusEvent* event);
    friend void QMainWindow_SuperEnterEvent(QMainWindow* self, QEnterEvent* event);
    friend void QMainWindow_SuperLeaveEvent(QMainWindow* self, QEvent* event);
    friend void QMainWindow_SuperPaintEvent(QMainWindow* self, QPaintEvent* event);
    friend void QMainWindow_SuperMoveEvent(QMainWindow* self, QMoveEvent* event);
    friend void QMainWindow_SuperResizeEvent(QMainWindow* self, QResizeEvent* event);
    friend void QMainWindow_SuperCloseEvent(QMainWindow* self, QCloseEvent* event);
    friend void QMainWindow_SuperTabletEvent(QMainWindow* self, QTabletEvent* event);
    friend void QMainWindow_SuperActionEvent(QMainWindow* self, QActionEvent* event);
    friend void QMainWindow_SuperDragEnterEvent(QMainWindow* self, QDragEnterEvent* event);
    friend void QMainWindow_SuperDragMoveEvent(QMainWindow* self, QDragMoveEvent* event);
    friend void QMainWindow_SuperDragLeaveEvent(QMainWindow* self, QDragLeaveEvent* event);
    friend void QMainWindow_SuperDropEvent(QMainWindow* self, QDropEvent* event);
    friend void QMainWindow_SuperShowEvent(QMainWindow* self, QShowEvent* event);
    friend void QMainWindow_SuperHideEvent(QMainWindow* self, QHideEvent* event);
    friend bool QMainWindow_SuperNativeEvent(QMainWindow* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QMainWindow_SuperChangeEvent(QMainWindow* self, QEvent* param1);
    friend int QMainWindow_SuperMetric(const QMainWindow* self, int param1);
    friend void QMainWindow_SuperInitPainter(const QMainWindow* self, QPainter* painter);
    friend QPaintDevice* QMainWindow_SuperRedirected(const QMainWindow* self, QPoint* offset);
    friend QPainter* QMainWindow_SuperSharedPainter(const QMainWindow* self);
    friend void QMainWindow_SuperInputMethodEvent(QMainWindow* self, QInputMethodEvent* param1);
    friend bool QMainWindow_SuperFocusNextPrevChild(QMainWindow* self, bool next);
    friend void QMainWindow_SuperTimerEvent(QMainWindow* self, QTimerEvent* event);
    friend void QMainWindow_SuperChildEvent(QMainWindow* self, QChildEvent* event);
    friend void QMainWindow_SuperCustomEvent(QMainWindow* self, QEvent* event);
    friend void QMainWindow_SuperConnectNotify(QMainWindow* self, const QMetaMethod* signal);
    friend void QMainWindow_SuperDisconnectNotify(QMainWindow* self, const QMetaMethod* signal);
};

#endif
