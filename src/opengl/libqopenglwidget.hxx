#pragma once
#ifndef OPENGL_LIBQOPENGLWIDGET_HXX
#define OPENGL_LIBQOPENGLWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLWidget
class VirtualQOpenGLWidget final : public QOpenGLWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLWidget_MetaObject_Callback = QMetaObject* (*)(const QOpenGLWidget*);
    using QOpenGLWidget_Metacast_Callback = void* (*)(QOpenGLWidget*, const char*);
    using QOpenGLWidget_Metacall_Callback = int (*)(QOpenGLWidget*, int, int, void**);
    using QOpenGLWidget_InitializeGL_Callback = void (*)(QOpenGLWidget*);
    using QOpenGLWidget_ResizeGL_Callback = void (*)(QOpenGLWidget*, int, int);
    using QOpenGLWidget_PaintGL_Callback = void (*)(QOpenGLWidget*);
    using QOpenGLWidget_PaintEvent_Callback = void (*)(QOpenGLWidget*, QPaintEvent*);
    using QOpenGLWidget_ResizeEvent_Callback = void (*)(QOpenGLWidget*, QResizeEvent*);
    using QOpenGLWidget_Event_Callback = bool (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_Metric_Callback = int (*)(const QOpenGLWidget*, int);
    using QOpenGLWidget_Redirected_Callback = QPaintDevice* (*)(const QOpenGLWidget*, QPoint*);
    using QOpenGLWidget_PaintEngine_Callback = QPaintEngine* (*)(const QOpenGLWidget*);
    using QOpenGLWidget_DevType_Callback = int (*)(const QOpenGLWidget*);
    using QOpenGLWidget_SetVisible_Callback = void (*)(QOpenGLWidget*, bool);
    using QOpenGLWidget_SizeHint_Callback = QSize* (*)(const QOpenGLWidget*);
    using QOpenGLWidget_MinimumSizeHint_Callback = QSize* (*)(const QOpenGLWidget*);
    using QOpenGLWidget_HeightForWidth_Callback = int (*)(const QOpenGLWidget*, int);
    using QOpenGLWidget_HasHeightForWidth_Callback = bool (*)(const QOpenGLWidget*);
    using QOpenGLWidget_MousePressEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_MouseReleaseEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_MouseDoubleClickEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_MouseMoveEvent_Callback = void (*)(QOpenGLWidget*, QMouseEvent*);
    using QOpenGLWidget_WheelEvent_Callback = void (*)(QOpenGLWidget*, QWheelEvent*);
    using QOpenGLWidget_KeyPressEvent_Callback = void (*)(QOpenGLWidget*, QKeyEvent*);
    using QOpenGLWidget_KeyReleaseEvent_Callback = void (*)(QOpenGLWidget*, QKeyEvent*);
    using QOpenGLWidget_FocusInEvent_Callback = void (*)(QOpenGLWidget*, QFocusEvent*);
    using QOpenGLWidget_FocusOutEvent_Callback = void (*)(QOpenGLWidget*, QFocusEvent*);
    using QOpenGLWidget_EnterEvent_Callback = void (*)(QOpenGLWidget*, QEnterEvent*);
    using QOpenGLWidget_LeaveEvent_Callback = void (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_MoveEvent_Callback = void (*)(QOpenGLWidget*, QMoveEvent*);
    using QOpenGLWidget_CloseEvent_Callback = void (*)(QOpenGLWidget*, QCloseEvent*);
    using QOpenGLWidget_ContextMenuEvent_Callback = void (*)(QOpenGLWidget*, QContextMenuEvent*);
    using QOpenGLWidget_TabletEvent_Callback = void (*)(QOpenGLWidget*, QTabletEvent*);
    using QOpenGLWidget_ActionEvent_Callback = void (*)(QOpenGLWidget*, QActionEvent*);
    using QOpenGLWidget_DragEnterEvent_Callback = void (*)(QOpenGLWidget*, QDragEnterEvent*);
    using QOpenGLWidget_DragMoveEvent_Callback = void (*)(QOpenGLWidget*, QDragMoveEvent*);
    using QOpenGLWidget_DragLeaveEvent_Callback = void (*)(QOpenGLWidget*, QDragLeaveEvent*);
    using QOpenGLWidget_DropEvent_Callback = void (*)(QOpenGLWidget*, QDropEvent*);
    using QOpenGLWidget_ShowEvent_Callback = void (*)(QOpenGLWidget*, QShowEvent*);
    using QOpenGLWidget_HideEvent_Callback = void (*)(QOpenGLWidget*, QHideEvent*);
    using QOpenGLWidget_NativeEvent_Callback = bool (*)(QOpenGLWidget*, libqt_string, void*, intptr_t*);
    using QOpenGLWidget_ChangeEvent_Callback = void (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_InitPainter_Callback = void (*)(const QOpenGLWidget*, QPainter*);
    using QOpenGLWidget_SharedPainter_Callback = QPainter* (*)(const QOpenGLWidget*);
    using QOpenGLWidget_InputMethodEvent_Callback = void (*)(QOpenGLWidget*, QInputMethodEvent*);
    using QOpenGLWidget_InputMethodQuery_Callback = QVariant* (*)(const QOpenGLWidget*, int);
    using QOpenGLWidget_FocusNextPrevChild_Callback = bool (*)(QOpenGLWidget*, bool);
    using QOpenGLWidget_EventFilter_Callback = bool (*)(QOpenGLWidget*, QObject*, QEvent*);
    using QOpenGLWidget_TimerEvent_Callback = void (*)(QOpenGLWidget*, QTimerEvent*);
    using QOpenGLWidget_ChildEvent_Callback = void (*)(QOpenGLWidget*, QChildEvent*);
    using QOpenGLWidget_CustomEvent_Callback = void (*)(QOpenGLWidget*, QEvent*);
    using QOpenGLWidget_ConnectNotify_Callback = void (*)(QOpenGLWidget*, QMetaMethod*);
    using QOpenGLWidget_DisconnectNotify_Callback = void (*)(QOpenGLWidget*, QMetaMethod*);
    using QOpenGLWidget::create;
    using QOpenGLWidget::destroy;
    using QOpenGLWidget::focusNextChild;
    using QOpenGLWidget::focusPreviousChild;
    using QOpenGLWidget::getDecodedMetricF;
    using QOpenGLWidget::isSignalConnected;
    using QOpenGLWidget::receivers;
    using QOpenGLWidget::sender;
    using QOpenGLWidget::senderSignalIndex;
    using QOpenGLWidget::updateMicroFocus;

    // Instance callback storage
    QOpenGLWidget_MetaObject_Callback qopenglwidget_metaobject_callback = nullptr;
    QOpenGLWidget_Metacast_Callback qopenglwidget_metacast_callback = nullptr;
    QOpenGLWidget_Metacall_Callback qopenglwidget_metacall_callback = nullptr;
    QOpenGLWidget_InitializeGL_Callback qopenglwidget_initializegl_callback = nullptr;
    QOpenGLWidget_ResizeGL_Callback qopenglwidget_resizegl_callback = nullptr;
    QOpenGLWidget_PaintGL_Callback qopenglwidget_paintgl_callback = nullptr;
    QOpenGLWidget_PaintEvent_Callback qopenglwidget_paintevent_callback = nullptr;
    QOpenGLWidget_ResizeEvent_Callback qopenglwidget_resizeevent_callback = nullptr;
    QOpenGLWidget_Event_Callback qopenglwidget_event_callback = nullptr;
    QOpenGLWidget_Metric_Callback qopenglwidget_metric_callback = nullptr;
    QOpenGLWidget_Redirected_Callback qopenglwidget_redirected_callback = nullptr;
    QOpenGLWidget_PaintEngine_Callback qopenglwidget_paintengine_callback = nullptr;
    QOpenGLWidget_DevType_Callback qopenglwidget_devtype_callback = nullptr;
    QOpenGLWidget_SetVisible_Callback qopenglwidget_setvisible_callback = nullptr;
    QOpenGLWidget_SizeHint_Callback qopenglwidget_sizehint_callback = nullptr;
    QOpenGLWidget_MinimumSizeHint_Callback qopenglwidget_minimumsizehint_callback = nullptr;
    QOpenGLWidget_HeightForWidth_Callback qopenglwidget_heightforwidth_callback = nullptr;
    QOpenGLWidget_HasHeightForWidth_Callback qopenglwidget_hasheightforwidth_callback = nullptr;
    QOpenGLWidget_MousePressEvent_Callback qopenglwidget_mousepressevent_callback = nullptr;
    QOpenGLWidget_MouseReleaseEvent_Callback qopenglwidget_mousereleaseevent_callback = nullptr;
    QOpenGLWidget_MouseDoubleClickEvent_Callback qopenglwidget_mousedoubleclickevent_callback = nullptr;
    QOpenGLWidget_MouseMoveEvent_Callback qopenglwidget_mousemoveevent_callback = nullptr;
    QOpenGLWidget_WheelEvent_Callback qopenglwidget_wheelevent_callback = nullptr;
    QOpenGLWidget_KeyPressEvent_Callback qopenglwidget_keypressevent_callback = nullptr;
    QOpenGLWidget_KeyReleaseEvent_Callback qopenglwidget_keyreleaseevent_callback = nullptr;
    QOpenGLWidget_FocusInEvent_Callback qopenglwidget_focusinevent_callback = nullptr;
    QOpenGLWidget_FocusOutEvent_Callback qopenglwidget_focusoutevent_callback = nullptr;
    QOpenGLWidget_EnterEvent_Callback qopenglwidget_enterevent_callback = nullptr;
    QOpenGLWidget_LeaveEvent_Callback qopenglwidget_leaveevent_callback = nullptr;
    QOpenGLWidget_MoveEvent_Callback qopenglwidget_moveevent_callback = nullptr;
    QOpenGLWidget_CloseEvent_Callback qopenglwidget_closeevent_callback = nullptr;
    QOpenGLWidget_ContextMenuEvent_Callback qopenglwidget_contextmenuevent_callback = nullptr;
    QOpenGLWidget_TabletEvent_Callback qopenglwidget_tabletevent_callback = nullptr;
    QOpenGLWidget_ActionEvent_Callback qopenglwidget_actionevent_callback = nullptr;
    QOpenGLWidget_DragEnterEvent_Callback qopenglwidget_dragenterevent_callback = nullptr;
    QOpenGLWidget_DragMoveEvent_Callback qopenglwidget_dragmoveevent_callback = nullptr;
    QOpenGLWidget_DragLeaveEvent_Callback qopenglwidget_dragleaveevent_callback = nullptr;
    QOpenGLWidget_DropEvent_Callback qopenglwidget_dropevent_callback = nullptr;
    QOpenGLWidget_ShowEvent_Callback qopenglwidget_showevent_callback = nullptr;
    QOpenGLWidget_HideEvent_Callback qopenglwidget_hideevent_callback = nullptr;
    QOpenGLWidget_NativeEvent_Callback qopenglwidget_nativeevent_callback = nullptr;
    QOpenGLWidget_ChangeEvent_Callback qopenglwidget_changeevent_callback = nullptr;
    QOpenGLWidget_InitPainter_Callback qopenglwidget_initpainter_callback = nullptr;
    QOpenGLWidget_SharedPainter_Callback qopenglwidget_sharedpainter_callback = nullptr;
    QOpenGLWidget_InputMethodEvent_Callback qopenglwidget_inputmethodevent_callback = nullptr;
    QOpenGLWidget_InputMethodQuery_Callback qopenglwidget_inputmethodquery_callback = nullptr;
    QOpenGLWidget_FocusNextPrevChild_Callback qopenglwidget_focusnextprevchild_callback = nullptr;
    QOpenGLWidget_EventFilter_Callback qopenglwidget_eventfilter_callback = nullptr;
    QOpenGLWidget_TimerEvent_Callback qopenglwidget_timerevent_callback = nullptr;
    QOpenGLWidget_ChildEvent_Callback qopenglwidget_childevent_callback = nullptr;
    QOpenGLWidget_CustomEvent_Callback qopenglwidget_customevent_callback = nullptr;
    QOpenGLWidget_ConnectNotify_Callback qopenglwidget_connectnotify_callback = nullptr;
    QOpenGLWidget_DisconnectNotify_Callback qopenglwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOpenGLWidget {
        using QOpenGLWidget::actionEvent;
        using QOpenGLWidget::changeEvent;
        using QOpenGLWidget::childEvent;
        using QOpenGLWidget::closeEvent;
        using QOpenGLWidget::connectNotify;
        using QOpenGLWidget::contextMenuEvent;
        using QOpenGLWidget::customEvent;
        using QOpenGLWidget::disconnectNotify;
        using QOpenGLWidget::dragEnterEvent;
        using QOpenGLWidget::dragLeaveEvent;
        using QOpenGLWidget::dragMoveEvent;
        using QOpenGLWidget::dropEvent;
        using QOpenGLWidget::enterEvent;
        using QOpenGLWidget::event;
        using QOpenGLWidget::focusInEvent;
        using QOpenGLWidget::focusNextPrevChild;
        using QOpenGLWidget::focusOutEvent;
        using QOpenGLWidget::hideEvent;
        using QOpenGLWidget::initializeGL;
        using QOpenGLWidget::initPainter;
        using QOpenGLWidget::inputMethodEvent;
        using QOpenGLWidget::keyPressEvent;
        using QOpenGLWidget::keyReleaseEvent;
        using QOpenGLWidget::leaveEvent;
        using QOpenGLWidget::metric;
        using QOpenGLWidget::mouseDoubleClickEvent;
        using QOpenGLWidget::mouseMoveEvent;
        using QOpenGLWidget::mousePressEvent;
        using QOpenGLWidget::mouseReleaseEvent;
        using QOpenGLWidget::moveEvent;
        using QOpenGLWidget::nativeEvent;
        using QOpenGLWidget::paintEngine;
        using QOpenGLWidget::paintEvent;
        using QOpenGLWidget::paintGL;
        using QOpenGLWidget::redirected;
        using QOpenGLWidget::resizeEvent;
        using QOpenGLWidget::resizeGL;
        using QOpenGLWidget::sharedPainter;
        using QOpenGLWidget::showEvent;
        using QOpenGLWidget::tabletEvent;
        using QOpenGLWidget::timerEvent;
        using QOpenGLWidget::wheelEvent;
    };

    VirtualQOpenGLWidget(QWidget* parent) : QOpenGLWidget(parent) {};
    VirtualQOpenGLWidget() : QOpenGLWidget() {};
    VirtualQOpenGLWidget(QWidget* parent, Qt::WindowFlags f) : QOpenGLWidget(parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopenglwidget_metaobject_callback) {
            QMetaObject* callback_ret = qopenglwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopenglwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopenglwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopenglwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initializeGL() override {
        if (qopenglwidget_initializegl_callback) {
            qopenglwidget_initializegl_callback(this);
            return;
        }
        QOpenGLWidget::initializeGL();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeGL(int w, int h) override {
        if (qopenglwidget_resizegl_callback) {
            int cbval1 = w;
            int cbval2 = h;
            qopenglwidget_resizegl_callback(this, cbval1, cbval2);
            return;
        }
        QOpenGLWidget::resizeGL(w, h);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintGL() override {
        if (qopenglwidget_paintgl_callback) {
            qopenglwidget_paintgl_callback(this);
            return;
        }
        QOpenGLWidget::paintGL();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qopenglwidget_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qopenglwidget_paintevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qopenglwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = e;
            qopenglwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qopenglwidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qopenglwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qopenglwidget_metric_callback) {
            int cbval1 = static_cast<int>(metric);
            int callback_ret = qopenglwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLWidget::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* p) const override {
        if (qopenglwidget_redirected_callback) {
            QPoint* cbval1 = p;
            QPaintDevice* callback_ret = qopenglwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLWidget::redirected(p);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qopenglwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qopenglwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QOpenGLWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qopenglwidget_devtype_callback) {
            int callback_ret = qopenglwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qopenglwidget_setvisible_callback) {
            bool cbval1 = visible;
            qopenglwidget_setvisible_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qopenglwidget_sizehint_callback) {
            QSize* callback_ret = qopenglwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QOpenGLWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qopenglwidget_minimumsizehint_callback) {
            QSize* callback_ret = qopenglwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QOpenGLWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qopenglwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qopenglwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qopenglwidget_hasheightforwidth_callback) {
            bool callback_ret = qopenglwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QOpenGLWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qopenglwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qopenglwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qopenglwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qopenglwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qopenglwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qopenglwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qopenglwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qopenglwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qopenglwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qopenglwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qopenglwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qopenglwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qopenglwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qopenglwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qopenglwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qopenglwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qopenglwidget_enterevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qopenglwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qopenglwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qopenglwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qopenglwidget_moveevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qopenglwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qopenglwidget_closeevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qopenglwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qopenglwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qopenglwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qopenglwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qopenglwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qopenglwidget_actionevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qopenglwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qopenglwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qopenglwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qopenglwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qopenglwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qopenglwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qopenglwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qopenglwidget_dropevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qopenglwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qopenglwidget_showevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qopenglwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qopenglwidget_hideevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qopenglwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qopenglwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QOpenGLWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qopenglwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qopenglwidget_changeevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qopenglwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qopenglwidget_initpainter_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qopenglwidget_sharedpainter_callback) {
            QPainter* callback_ret = qopenglwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QOpenGLWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qopenglwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qopenglwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qopenglwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qopenglwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QOpenGLWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qopenglwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qopenglwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopenglwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopenglwidget_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopenglwidget_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qopenglwidget_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLWidget_SuperInitializeGL(QOpenGLWidget* self);
    friend void QOpenGLWidget_SuperResizeGL(QOpenGLWidget* self, int w, int h);
    friend void QOpenGLWidget_SuperPaintGL(QOpenGLWidget* self);
    friend void QOpenGLWidget_SuperPaintEvent(QOpenGLWidget* self, QPaintEvent* e);
    friend void QOpenGLWidget_SuperResizeEvent(QOpenGLWidget* self, QResizeEvent* e);
    friend bool QOpenGLWidget_SuperEvent(QOpenGLWidget* self, QEvent* e);
    friend int QOpenGLWidget_SuperMetric(const QOpenGLWidget* self, int metric);
    friend QPaintDevice* QOpenGLWidget_SuperRedirected(const QOpenGLWidget* self, QPoint* p);
    friend QPaintEngine* QOpenGLWidget_SuperPaintEngine(const QOpenGLWidget* self);
    friend void QOpenGLWidget_SuperMousePressEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_SuperMouseReleaseEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_SuperMouseDoubleClickEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_SuperMouseMoveEvent(QOpenGLWidget* self, QMouseEvent* event);
    friend void QOpenGLWidget_SuperWheelEvent(QOpenGLWidget* self, QWheelEvent* event);
    friend void QOpenGLWidget_SuperKeyPressEvent(QOpenGLWidget* self, QKeyEvent* event);
    friend void QOpenGLWidget_SuperKeyReleaseEvent(QOpenGLWidget* self, QKeyEvent* event);
    friend void QOpenGLWidget_SuperFocusInEvent(QOpenGLWidget* self, QFocusEvent* event);
    friend void QOpenGLWidget_SuperFocusOutEvent(QOpenGLWidget* self, QFocusEvent* event);
    friend void QOpenGLWidget_SuperEnterEvent(QOpenGLWidget* self, QEnterEvent* event);
    friend void QOpenGLWidget_SuperLeaveEvent(QOpenGLWidget* self, QEvent* event);
    friend void QOpenGLWidget_SuperMoveEvent(QOpenGLWidget* self, QMoveEvent* event);
    friend void QOpenGLWidget_SuperCloseEvent(QOpenGLWidget* self, QCloseEvent* event);
    friend void QOpenGLWidget_SuperContextMenuEvent(QOpenGLWidget* self, QContextMenuEvent* event);
    friend void QOpenGLWidget_SuperTabletEvent(QOpenGLWidget* self, QTabletEvent* event);
    friend void QOpenGLWidget_SuperActionEvent(QOpenGLWidget* self, QActionEvent* event);
    friend void QOpenGLWidget_SuperDragEnterEvent(QOpenGLWidget* self, QDragEnterEvent* event);
    friend void QOpenGLWidget_SuperDragMoveEvent(QOpenGLWidget* self, QDragMoveEvent* event);
    friend void QOpenGLWidget_SuperDragLeaveEvent(QOpenGLWidget* self, QDragLeaveEvent* event);
    friend void QOpenGLWidget_SuperDropEvent(QOpenGLWidget* self, QDropEvent* event);
    friend void QOpenGLWidget_SuperShowEvent(QOpenGLWidget* self, QShowEvent* event);
    friend void QOpenGLWidget_SuperHideEvent(QOpenGLWidget* self, QHideEvent* event);
    friend bool QOpenGLWidget_SuperNativeEvent(QOpenGLWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QOpenGLWidget_SuperChangeEvent(QOpenGLWidget* self, QEvent* param1);
    friend void QOpenGLWidget_SuperInitPainter(const QOpenGLWidget* self, QPainter* painter);
    friend QPainter* QOpenGLWidget_SuperSharedPainter(const QOpenGLWidget* self);
    friend void QOpenGLWidget_SuperInputMethodEvent(QOpenGLWidget* self, QInputMethodEvent* param1);
    friend bool QOpenGLWidget_SuperFocusNextPrevChild(QOpenGLWidget* self, bool next);
    friend void QOpenGLWidget_SuperTimerEvent(QOpenGLWidget* self, QTimerEvent* event);
    friend void QOpenGLWidget_SuperChildEvent(QOpenGLWidget* self, QChildEvent* event);
    friend void QOpenGLWidget_SuperCustomEvent(QOpenGLWidget* self, QEvent* event);
    friend void QOpenGLWidget_SuperConnectNotify(QOpenGLWidget* self, const QMetaMethod* signal);
    friend void QOpenGLWidget_SuperDisconnectNotify(QOpenGLWidget* self, const QMetaMethod* signal);
};

#endif
