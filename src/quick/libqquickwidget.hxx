#pragma once
#ifndef QUICK_LIBQQUICKWIDGET_HXX
#define QUICK_LIBQQUICKWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQuickWidget
class VirtualQQuickWidget final : public QQuickWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQuickWidget_MetaObject_Callback = QMetaObject* (*)(const QQuickWidget*);
    using QQuickWidget_Metacast_Callback = void* (*)(QQuickWidget*, const char*);
    using QQuickWidget_Metacall_Callback = int (*)(QQuickWidget*, int, int, void**);
    using QQuickWidget_SizeHint_Callback = QSize* (*)(const QQuickWidget*);
    using QQuickWidget_ResizeEvent_Callback = void (*)(QQuickWidget*, QResizeEvent*);
    using QQuickWidget_TimerEvent_Callback = void (*)(QQuickWidget*, QTimerEvent*);
    using QQuickWidget_KeyPressEvent_Callback = void (*)(QQuickWidget*, QKeyEvent*);
    using QQuickWidget_KeyReleaseEvent_Callback = void (*)(QQuickWidget*, QKeyEvent*);
    using QQuickWidget_MousePressEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_MouseReleaseEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_MouseMoveEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_MouseDoubleClickEvent_Callback = void (*)(QQuickWidget*, QMouseEvent*);
    using QQuickWidget_ShowEvent_Callback = void (*)(QQuickWidget*, QShowEvent*);
    using QQuickWidget_HideEvent_Callback = void (*)(QQuickWidget*, QHideEvent*);
    using QQuickWidget_FocusInEvent_Callback = void (*)(QQuickWidget*, QFocusEvent*);
    using QQuickWidget_FocusOutEvent_Callback = void (*)(QQuickWidget*, QFocusEvent*);
    using QQuickWidget_WheelEvent_Callback = void (*)(QQuickWidget*, QWheelEvent*);
    using QQuickWidget_DragEnterEvent_Callback = void (*)(QQuickWidget*, QDragEnterEvent*);
    using QQuickWidget_DragMoveEvent_Callback = void (*)(QQuickWidget*, QDragMoveEvent*);
    using QQuickWidget_DragLeaveEvent_Callback = void (*)(QQuickWidget*, QDragLeaveEvent*);
    using QQuickWidget_DropEvent_Callback = void (*)(QQuickWidget*, QDropEvent*);
    using QQuickWidget_Event_Callback = bool (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_PaintEvent_Callback = void (*)(QQuickWidget*, QPaintEvent*);
    using QQuickWidget_FocusNextPrevChild_Callback = bool (*)(QQuickWidget*, bool);
    using QQuickWidget_DevType_Callback = int (*)(const QQuickWidget*);
    using QQuickWidget_SetVisible_Callback = void (*)(QQuickWidget*, bool);
    using QQuickWidget_MinimumSizeHint_Callback = QSize* (*)(const QQuickWidget*);
    using QQuickWidget_HeightForWidth_Callback = int (*)(const QQuickWidget*, int);
    using QQuickWidget_HasHeightForWidth_Callback = bool (*)(const QQuickWidget*);
    using QQuickWidget_PaintEngine_Callback = QPaintEngine* (*)(const QQuickWidget*);
    using QQuickWidget_EnterEvent_Callback = void (*)(QQuickWidget*, QEnterEvent*);
    using QQuickWidget_LeaveEvent_Callback = void (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_MoveEvent_Callback = void (*)(QQuickWidget*, QMoveEvent*);
    using QQuickWidget_CloseEvent_Callback = void (*)(QQuickWidget*, QCloseEvent*);
    using QQuickWidget_ContextMenuEvent_Callback = void (*)(QQuickWidget*, QContextMenuEvent*);
    using QQuickWidget_TabletEvent_Callback = void (*)(QQuickWidget*, QTabletEvent*);
    using QQuickWidget_ActionEvent_Callback = void (*)(QQuickWidget*, QActionEvent*);
    using QQuickWidget_NativeEvent_Callback = bool (*)(QQuickWidget*, libqt_string, void*, intptr_t*);
    using QQuickWidget_ChangeEvent_Callback = void (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_Metric_Callback = int (*)(const QQuickWidget*, int);
    using QQuickWidget_InitPainter_Callback = void (*)(const QQuickWidget*, QPainter*);
    using QQuickWidget_Redirected_Callback = QPaintDevice* (*)(const QQuickWidget*, QPoint*);
    using QQuickWidget_SharedPainter_Callback = QPainter* (*)(const QQuickWidget*);
    using QQuickWidget_InputMethodEvent_Callback = void (*)(QQuickWidget*, QInputMethodEvent*);
    using QQuickWidget_InputMethodQuery_Callback = QVariant* (*)(const QQuickWidget*, int);
    using QQuickWidget_EventFilter_Callback = bool (*)(QQuickWidget*, QObject*, QEvent*);
    using QQuickWidget_ChildEvent_Callback = void (*)(QQuickWidget*, QChildEvent*);
    using QQuickWidget_CustomEvent_Callback = void (*)(QQuickWidget*, QEvent*);
    using QQuickWidget_ConnectNotify_Callback = void (*)(QQuickWidget*, QMetaMethod*);
    using QQuickWidget_DisconnectNotify_Callback = void (*)(QQuickWidget*, QMetaMethod*);
    using QQuickWidget::create;
    using QQuickWidget::destroy;
    using QQuickWidget::focusNextChild;
    using QQuickWidget::focusPreviousChild;
    using QQuickWidget::getDecodedMetricF;
    using QQuickWidget::isSignalConnected;
    using QQuickWidget::receivers;
    using QQuickWidget::sender;
    using QQuickWidget::senderSignalIndex;
    using QQuickWidget::updateMicroFocus;

    // Instance callback storage
    QQuickWidget_MetaObject_Callback qquickwidget_metaobject_callback = nullptr;
    QQuickWidget_Metacast_Callback qquickwidget_metacast_callback = nullptr;
    QQuickWidget_Metacall_Callback qquickwidget_metacall_callback = nullptr;
    QQuickWidget_SizeHint_Callback qquickwidget_sizehint_callback = nullptr;
    QQuickWidget_ResizeEvent_Callback qquickwidget_resizeevent_callback = nullptr;
    QQuickWidget_TimerEvent_Callback qquickwidget_timerevent_callback = nullptr;
    QQuickWidget_KeyPressEvent_Callback qquickwidget_keypressevent_callback = nullptr;
    QQuickWidget_KeyReleaseEvent_Callback qquickwidget_keyreleaseevent_callback = nullptr;
    QQuickWidget_MousePressEvent_Callback qquickwidget_mousepressevent_callback = nullptr;
    QQuickWidget_MouseReleaseEvent_Callback qquickwidget_mousereleaseevent_callback = nullptr;
    QQuickWidget_MouseMoveEvent_Callback qquickwidget_mousemoveevent_callback = nullptr;
    QQuickWidget_MouseDoubleClickEvent_Callback qquickwidget_mousedoubleclickevent_callback = nullptr;
    QQuickWidget_ShowEvent_Callback qquickwidget_showevent_callback = nullptr;
    QQuickWidget_HideEvent_Callback qquickwidget_hideevent_callback = nullptr;
    QQuickWidget_FocusInEvent_Callback qquickwidget_focusinevent_callback = nullptr;
    QQuickWidget_FocusOutEvent_Callback qquickwidget_focusoutevent_callback = nullptr;
    QQuickWidget_WheelEvent_Callback qquickwidget_wheelevent_callback = nullptr;
    QQuickWidget_DragEnterEvent_Callback qquickwidget_dragenterevent_callback = nullptr;
    QQuickWidget_DragMoveEvent_Callback qquickwidget_dragmoveevent_callback = nullptr;
    QQuickWidget_DragLeaveEvent_Callback qquickwidget_dragleaveevent_callback = nullptr;
    QQuickWidget_DropEvent_Callback qquickwidget_dropevent_callback = nullptr;
    QQuickWidget_Event_Callback qquickwidget_event_callback = nullptr;
    QQuickWidget_PaintEvent_Callback qquickwidget_paintevent_callback = nullptr;
    QQuickWidget_FocusNextPrevChild_Callback qquickwidget_focusnextprevchild_callback = nullptr;
    QQuickWidget_DevType_Callback qquickwidget_devtype_callback = nullptr;
    QQuickWidget_SetVisible_Callback qquickwidget_setvisible_callback = nullptr;
    QQuickWidget_MinimumSizeHint_Callback qquickwidget_minimumsizehint_callback = nullptr;
    QQuickWidget_HeightForWidth_Callback qquickwidget_heightforwidth_callback = nullptr;
    QQuickWidget_HasHeightForWidth_Callback qquickwidget_hasheightforwidth_callback = nullptr;
    QQuickWidget_PaintEngine_Callback qquickwidget_paintengine_callback = nullptr;
    QQuickWidget_EnterEvent_Callback qquickwidget_enterevent_callback = nullptr;
    QQuickWidget_LeaveEvent_Callback qquickwidget_leaveevent_callback = nullptr;
    QQuickWidget_MoveEvent_Callback qquickwidget_moveevent_callback = nullptr;
    QQuickWidget_CloseEvent_Callback qquickwidget_closeevent_callback = nullptr;
    QQuickWidget_ContextMenuEvent_Callback qquickwidget_contextmenuevent_callback = nullptr;
    QQuickWidget_TabletEvent_Callback qquickwidget_tabletevent_callback = nullptr;
    QQuickWidget_ActionEvent_Callback qquickwidget_actionevent_callback = nullptr;
    QQuickWidget_NativeEvent_Callback qquickwidget_nativeevent_callback = nullptr;
    QQuickWidget_ChangeEvent_Callback qquickwidget_changeevent_callback = nullptr;
    QQuickWidget_Metric_Callback qquickwidget_metric_callback = nullptr;
    QQuickWidget_InitPainter_Callback qquickwidget_initpainter_callback = nullptr;
    QQuickWidget_Redirected_Callback qquickwidget_redirected_callback = nullptr;
    QQuickWidget_SharedPainter_Callback qquickwidget_sharedpainter_callback = nullptr;
    QQuickWidget_InputMethodEvent_Callback qquickwidget_inputmethodevent_callback = nullptr;
    QQuickWidget_InputMethodQuery_Callback qquickwidget_inputmethodquery_callback = nullptr;
    QQuickWidget_EventFilter_Callback qquickwidget_eventfilter_callback = nullptr;
    QQuickWidget_ChildEvent_Callback qquickwidget_childevent_callback = nullptr;
    QQuickWidget_CustomEvent_Callback qquickwidget_customevent_callback = nullptr;
    QQuickWidget_ConnectNotify_Callback qquickwidget_connectnotify_callback = nullptr;
    QQuickWidget_DisconnectNotify_Callback qquickwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QQuickWidget {
        using QQuickWidget::actionEvent;
        using QQuickWidget::changeEvent;
        using QQuickWidget::childEvent;
        using QQuickWidget::closeEvent;
        using QQuickWidget::connectNotify;
        using QQuickWidget::contextMenuEvent;
        using QQuickWidget::customEvent;
        using QQuickWidget::disconnectNotify;
        using QQuickWidget::dragEnterEvent;
        using QQuickWidget::dragLeaveEvent;
        using QQuickWidget::dragMoveEvent;
        using QQuickWidget::dropEvent;
        using QQuickWidget::enterEvent;
        using QQuickWidget::event;
        using QQuickWidget::focusInEvent;
        using QQuickWidget::focusNextPrevChild;
        using QQuickWidget::focusOutEvent;
        using QQuickWidget::hideEvent;
        using QQuickWidget::initPainter;
        using QQuickWidget::inputMethodEvent;
        using QQuickWidget::keyPressEvent;
        using QQuickWidget::keyReleaseEvent;
        using QQuickWidget::leaveEvent;
        using QQuickWidget::metric;
        using QQuickWidget::mouseDoubleClickEvent;
        using QQuickWidget::mouseMoveEvent;
        using QQuickWidget::mousePressEvent;
        using QQuickWidget::mouseReleaseEvent;
        using QQuickWidget::moveEvent;
        using QQuickWidget::nativeEvent;
        using QQuickWidget::paintEvent;
        using QQuickWidget::redirected;
        using QQuickWidget::resizeEvent;
        using QQuickWidget::sharedPainter;
        using QQuickWidget::showEvent;
        using QQuickWidget::tabletEvent;
        using QQuickWidget::timerEvent;
        using QQuickWidget::wheelEvent;
    };

    VirtualQQuickWidget(QWidget* parent) : QQuickWidget(parent) {};
    VirtualQQuickWidget() : QQuickWidget() {};
    VirtualQQuickWidget(QQmlEngine* engine, QWidget* parent) : QQuickWidget(engine, parent) {};
    VirtualQQuickWidget(const QUrl& source) : QQuickWidget(source) {};
    VirtualQQuickWidget(const QUrl& source, QWidget* parent) : QQuickWidget(source, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qquickwidget_metaobject_callback) {
            QMetaObject* callback_ret = qquickwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QQuickWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qquickwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qquickwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qquickwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qquickwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qquickwidget_sizehint_callback) {
            QSize* callback_ret = qquickwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qquickwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qquickwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qquickwidget_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qquickwidget_timerevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qquickwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qquickwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qquickwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = param1;
            qquickwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qquickwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qquickwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qquickwidget_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qquickwidget_showevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qquickwidget_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qquickwidget_hideevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qquickwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qquickwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qquickwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qquickwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qquickwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qquickwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qquickwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qquickwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qquickwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qquickwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qquickwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qquickwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qquickwidget_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qquickwidget_dropevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qquickwidget_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qquickwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qquickwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qquickwidget_paintevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qquickwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qquickwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qquickwidget_devtype_callback) {
            int callback_ret = qquickwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qquickwidget_setvisible_callback) {
            bool cbval1 = visible;
            qquickwidget_setvisible_callback(this, cbval1);
            return;
        }
        QQuickWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qquickwidget_minimumsizehint_callback) {
            QSize* callback_ret = qquickwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qquickwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qquickwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qquickwidget_hasheightforwidth_callback) {
            bool callback_ret = qquickwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QQuickWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qquickwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qquickwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QQuickWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qquickwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qquickwidget_enterevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qquickwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qquickwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qquickwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qquickwidget_moveevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qquickwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qquickwidget_closeevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qquickwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qquickwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qquickwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qquickwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qquickwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qquickwidget_actionevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qquickwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qquickwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QQuickWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qquickwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qquickwidget_changeevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qquickwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qquickwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QQuickWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qquickwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qquickwidget_initpainter_callback(this, cbval1);
            return;
        }
        QQuickWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qquickwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qquickwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QQuickWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qquickwidget_sharedpainter_callback) {
            QPainter* callback_ret = qquickwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QQuickWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qquickwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qquickwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qquickwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qquickwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QQuickWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qquickwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qquickwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QQuickWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qquickwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qquickwidget_childevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qquickwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qquickwidget_customevent_callback(this, cbval1);
            return;
        }
        QQuickWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qquickwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QQuickWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qquickwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qquickwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QQuickWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void QQuickWidget_SuperResizeEvent(QQuickWidget* self, QResizeEvent* param1);
    friend void QQuickWidget_SuperTimerEvent(QQuickWidget* self, QTimerEvent* param1);
    friend void QQuickWidget_SuperKeyPressEvent(QQuickWidget* self, QKeyEvent* param1);
    friend void QQuickWidget_SuperKeyReleaseEvent(QQuickWidget* self, QKeyEvent* param1);
    friend void QQuickWidget_SuperMousePressEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperMouseReleaseEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperMouseMoveEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperMouseDoubleClickEvent(QQuickWidget* self, QMouseEvent* param1);
    friend void QQuickWidget_SuperShowEvent(QQuickWidget* self, QShowEvent* param1);
    friend void QQuickWidget_SuperHideEvent(QQuickWidget* self, QHideEvent* param1);
    friend void QQuickWidget_SuperFocusInEvent(QQuickWidget* self, QFocusEvent* event);
    friend void QQuickWidget_SuperFocusOutEvent(QQuickWidget* self, QFocusEvent* event);
    friend void QQuickWidget_SuperWheelEvent(QQuickWidget* self, QWheelEvent* param1);
    friend void QQuickWidget_SuperDragEnterEvent(QQuickWidget* self, QDragEnterEvent* param1);
    friend void QQuickWidget_SuperDragMoveEvent(QQuickWidget* self, QDragMoveEvent* param1);
    friend void QQuickWidget_SuperDragLeaveEvent(QQuickWidget* self, QDragLeaveEvent* param1);
    friend void QQuickWidget_SuperDropEvent(QQuickWidget* self, QDropEvent* param1);
    friend bool QQuickWidget_SuperEvent(QQuickWidget* self, QEvent* param1);
    friend void QQuickWidget_SuperPaintEvent(QQuickWidget* self, QPaintEvent* event);
    friend bool QQuickWidget_SuperFocusNextPrevChild(QQuickWidget* self, bool next);
    friend void QQuickWidget_SuperEnterEvent(QQuickWidget* self, QEnterEvent* event);
    friend void QQuickWidget_SuperLeaveEvent(QQuickWidget* self, QEvent* event);
    friend void QQuickWidget_SuperMoveEvent(QQuickWidget* self, QMoveEvent* event);
    friend void QQuickWidget_SuperCloseEvent(QQuickWidget* self, QCloseEvent* event);
    friend void QQuickWidget_SuperContextMenuEvent(QQuickWidget* self, QContextMenuEvent* event);
    friend void QQuickWidget_SuperTabletEvent(QQuickWidget* self, QTabletEvent* event);
    friend void QQuickWidget_SuperActionEvent(QQuickWidget* self, QActionEvent* event);
    friend bool QQuickWidget_SuperNativeEvent(QQuickWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QQuickWidget_SuperChangeEvent(QQuickWidget* self, QEvent* param1);
    friend int QQuickWidget_SuperMetric(const QQuickWidget* self, int param1);
    friend void QQuickWidget_SuperInitPainter(const QQuickWidget* self, QPainter* painter);
    friend QPaintDevice* QQuickWidget_SuperRedirected(const QQuickWidget* self, QPoint* offset);
    friend QPainter* QQuickWidget_SuperSharedPainter(const QQuickWidget* self);
    friend void QQuickWidget_SuperInputMethodEvent(QQuickWidget* self, QInputMethodEvent* param1);
    friend void QQuickWidget_SuperChildEvent(QQuickWidget* self, QChildEvent* event);
    friend void QQuickWidget_SuperCustomEvent(QQuickWidget* self, QEvent* event);
    friend void QQuickWidget_SuperConnectNotify(QQuickWidget* self, const QMetaMethod* signal);
    friend void QQuickWidget_SuperDisconnectNotify(QQuickWidget* self, const QMetaMethod* signal);
};

#endif
