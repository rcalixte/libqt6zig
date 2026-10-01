#pragma once
#ifndef SVG_LIBQSVGWIDGET_HXX
#define SVG_LIBQSVGWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSvgWidget
class VirtualQSvgWidget final : public QSvgWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSvgWidget_MetaObject_Callback = QMetaObject* (*)(const QSvgWidget*);
    using QSvgWidget_Metacast_Callback = void* (*)(QSvgWidget*, const char*);
    using QSvgWidget_Metacall_Callback = int (*)(QSvgWidget*, int, int, void**);
    using QSvgWidget_SizeHint_Callback = QSize* (*)(const QSvgWidget*);
    using QSvgWidget_PaintEvent_Callback = void (*)(QSvgWidget*, QPaintEvent*);
    using QSvgWidget_DevType_Callback = int (*)(const QSvgWidget*);
    using QSvgWidget_SetVisible_Callback = void (*)(QSvgWidget*, bool);
    using QSvgWidget_MinimumSizeHint_Callback = QSize* (*)(const QSvgWidget*);
    using QSvgWidget_HeightForWidth_Callback = int (*)(const QSvgWidget*, int);
    using QSvgWidget_HasHeightForWidth_Callback = bool (*)(const QSvgWidget*);
    using QSvgWidget_PaintEngine_Callback = QPaintEngine* (*)(const QSvgWidget*);
    using QSvgWidget_Event_Callback = bool (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_MousePressEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_MouseReleaseEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_MouseDoubleClickEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_MouseMoveEvent_Callback = void (*)(QSvgWidget*, QMouseEvent*);
    using QSvgWidget_WheelEvent_Callback = void (*)(QSvgWidget*, QWheelEvent*);
    using QSvgWidget_KeyPressEvent_Callback = void (*)(QSvgWidget*, QKeyEvent*);
    using QSvgWidget_KeyReleaseEvent_Callback = void (*)(QSvgWidget*, QKeyEvent*);
    using QSvgWidget_FocusInEvent_Callback = void (*)(QSvgWidget*, QFocusEvent*);
    using QSvgWidget_FocusOutEvent_Callback = void (*)(QSvgWidget*, QFocusEvent*);
    using QSvgWidget_EnterEvent_Callback = void (*)(QSvgWidget*, QEnterEvent*);
    using QSvgWidget_LeaveEvent_Callback = void (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_MoveEvent_Callback = void (*)(QSvgWidget*, QMoveEvent*);
    using QSvgWidget_ResizeEvent_Callback = void (*)(QSvgWidget*, QResizeEvent*);
    using QSvgWidget_CloseEvent_Callback = void (*)(QSvgWidget*, QCloseEvent*);
    using QSvgWidget_ContextMenuEvent_Callback = void (*)(QSvgWidget*, QContextMenuEvent*);
    using QSvgWidget_TabletEvent_Callback = void (*)(QSvgWidget*, QTabletEvent*);
    using QSvgWidget_ActionEvent_Callback = void (*)(QSvgWidget*, QActionEvent*);
    using QSvgWidget_DragEnterEvent_Callback = void (*)(QSvgWidget*, QDragEnterEvent*);
    using QSvgWidget_DragMoveEvent_Callback = void (*)(QSvgWidget*, QDragMoveEvent*);
    using QSvgWidget_DragLeaveEvent_Callback = void (*)(QSvgWidget*, QDragLeaveEvent*);
    using QSvgWidget_DropEvent_Callback = void (*)(QSvgWidget*, QDropEvent*);
    using QSvgWidget_ShowEvent_Callback = void (*)(QSvgWidget*, QShowEvent*);
    using QSvgWidget_HideEvent_Callback = void (*)(QSvgWidget*, QHideEvent*);
    using QSvgWidget_NativeEvent_Callback = bool (*)(QSvgWidget*, libqt_string, void*, intptr_t*);
    using QSvgWidget_ChangeEvent_Callback = void (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_Metric_Callback = int (*)(const QSvgWidget*, int);
    using QSvgWidget_InitPainter_Callback = void (*)(const QSvgWidget*, QPainter*);
    using QSvgWidget_Redirected_Callback = QPaintDevice* (*)(const QSvgWidget*, QPoint*);
    using QSvgWidget_SharedPainter_Callback = QPainter* (*)(const QSvgWidget*);
    using QSvgWidget_InputMethodEvent_Callback = void (*)(QSvgWidget*, QInputMethodEvent*);
    using QSvgWidget_InputMethodQuery_Callback = QVariant* (*)(const QSvgWidget*, int);
    using QSvgWidget_FocusNextPrevChild_Callback = bool (*)(QSvgWidget*, bool);
    using QSvgWidget_EventFilter_Callback = bool (*)(QSvgWidget*, QObject*, QEvent*);
    using QSvgWidget_TimerEvent_Callback = void (*)(QSvgWidget*, QTimerEvent*);
    using QSvgWidget_ChildEvent_Callback = void (*)(QSvgWidget*, QChildEvent*);
    using QSvgWidget_CustomEvent_Callback = void (*)(QSvgWidget*, QEvent*);
    using QSvgWidget_ConnectNotify_Callback = void (*)(QSvgWidget*, QMetaMethod*);
    using QSvgWidget_DisconnectNotify_Callback = void (*)(QSvgWidget*, QMetaMethod*);
    using QSvgWidget::create;
    using QSvgWidget::destroy;
    using QSvgWidget::focusNextChild;
    using QSvgWidget::focusPreviousChild;
    using QSvgWidget::getDecodedMetricF;
    using QSvgWidget::isSignalConnected;
    using QSvgWidget::receivers;
    using QSvgWidget::sender;
    using QSvgWidget::senderSignalIndex;
    using QSvgWidget::updateMicroFocus;

    // Instance callback storage
    QSvgWidget_MetaObject_Callback qsvgwidget_metaobject_callback = nullptr;
    QSvgWidget_Metacast_Callback qsvgwidget_metacast_callback = nullptr;
    QSvgWidget_Metacall_Callback qsvgwidget_metacall_callback = nullptr;
    QSvgWidget_SizeHint_Callback qsvgwidget_sizehint_callback = nullptr;
    QSvgWidget_PaintEvent_Callback qsvgwidget_paintevent_callback = nullptr;
    QSvgWidget_DevType_Callback qsvgwidget_devtype_callback = nullptr;
    QSvgWidget_SetVisible_Callback qsvgwidget_setvisible_callback = nullptr;
    QSvgWidget_MinimumSizeHint_Callback qsvgwidget_minimumsizehint_callback = nullptr;
    QSvgWidget_HeightForWidth_Callback qsvgwidget_heightforwidth_callback = nullptr;
    QSvgWidget_HasHeightForWidth_Callback qsvgwidget_hasheightforwidth_callback = nullptr;
    QSvgWidget_PaintEngine_Callback qsvgwidget_paintengine_callback = nullptr;
    QSvgWidget_Event_Callback qsvgwidget_event_callback = nullptr;
    QSvgWidget_MousePressEvent_Callback qsvgwidget_mousepressevent_callback = nullptr;
    QSvgWidget_MouseReleaseEvent_Callback qsvgwidget_mousereleaseevent_callback = nullptr;
    QSvgWidget_MouseDoubleClickEvent_Callback qsvgwidget_mousedoubleclickevent_callback = nullptr;
    QSvgWidget_MouseMoveEvent_Callback qsvgwidget_mousemoveevent_callback = nullptr;
    QSvgWidget_WheelEvent_Callback qsvgwidget_wheelevent_callback = nullptr;
    QSvgWidget_KeyPressEvent_Callback qsvgwidget_keypressevent_callback = nullptr;
    QSvgWidget_KeyReleaseEvent_Callback qsvgwidget_keyreleaseevent_callback = nullptr;
    QSvgWidget_FocusInEvent_Callback qsvgwidget_focusinevent_callback = nullptr;
    QSvgWidget_FocusOutEvent_Callback qsvgwidget_focusoutevent_callback = nullptr;
    QSvgWidget_EnterEvent_Callback qsvgwidget_enterevent_callback = nullptr;
    QSvgWidget_LeaveEvent_Callback qsvgwidget_leaveevent_callback = nullptr;
    QSvgWidget_MoveEvent_Callback qsvgwidget_moveevent_callback = nullptr;
    QSvgWidget_ResizeEvent_Callback qsvgwidget_resizeevent_callback = nullptr;
    QSvgWidget_CloseEvent_Callback qsvgwidget_closeevent_callback = nullptr;
    QSvgWidget_ContextMenuEvent_Callback qsvgwidget_contextmenuevent_callback = nullptr;
    QSvgWidget_TabletEvent_Callback qsvgwidget_tabletevent_callback = nullptr;
    QSvgWidget_ActionEvent_Callback qsvgwidget_actionevent_callback = nullptr;
    QSvgWidget_DragEnterEvent_Callback qsvgwidget_dragenterevent_callback = nullptr;
    QSvgWidget_DragMoveEvent_Callback qsvgwidget_dragmoveevent_callback = nullptr;
    QSvgWidget_DragLeaveEvent_Callback qsvgwidget_dragleaveevent_callback = nullptr;
    QSvgWidget_DropEvent_Callback qsvgwidget_dropevent_callback = nullptr;
    QSvgWidget_ShowEvent_Callback qsvgwidget_showevent_callback = nullptr;
    QSvgWidget_HideEvent_Callback qsvgwidget_hideevent_callback = nullptr;
    QSvgWidget_NativeEvent_Callback qsvgwidget_nativeevent_callback = nullptr;
    QSvgWidget_ChangeEvent_Callback qsvgwidget_changeevent_callback = nullptr;
    QSvgWidget_Metric_Callback qsvgwidget_metric_callback = nullptr;
    QSvgWidget_InitPainter_Callback qsvgwidget_initpainter_callback = nullptr;
    QSvgWidget_Redirected_Callback qsvgwidget_redirected_callback = nullptr;
    QSvgWidget_SharedPainter_Callback qsvgwidget_sharedpainter_callback = nullptr;
    QSvgWidget_InputMethodEvent_Callback qsvgwidget_inputmethodevent_callback = nullptr;
    QSvgWidget_InputMethodQuery_Callback qsvgwidget_inputmethodquery_callback = nullptr;
    QSvgWidget_FocusNextPrevChild_Callback qsvgwidget_focusnextprevchild_callback = nullptr;
    QSvgWidget_EventFilter_Callback qsvgwidget_eventfilter_callback = nullptr;
    QSvgWidget_TimerEvent_Callback qsvgwidget_timerevent_callback = nullptr;
    QSvgWidget_ChildEvent_Callback qsvgwidget_childevent_callback = nullptr;
    QSvgWidget_CustomEvent_Callback qsvgwidget_customevent_callback = nullptr;
    QSvgWidget_ConnectNotify_Callback qsvgwidget_connectnotify_callback = nullptr;
    QSvgWidget_DisconnectNotify_Callback qsvgwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSvgWidget {
        using QSvgWidget::actionEvent;
        using QSvgWidget::changeEvent;
        using QSvgWidget::childEvent;
        using QSvgWidget::closeEvent;
        using QSvgWidget::connectNotify;
        using QSvgWidget::contextMenuEvent;
        using QSvgWidget::customEvent;
        using QSvgWidget::disconnectNotify;
        using QSvgWidget::dragEnterEvent;
        using QSvgWidget::dragLeaveEvent;
        using QSvgWidget::dragMoveEvent;
        using QSvgWidget::dropEvent;
        using QSvgWidget::enterEvent;
        using QSvgWidget::event;
        using QSvgWidget::focusInEvent;
        using QSvgWidget::focusNextPrevChild;
        using QSvgWidget::focusOutEvent;
        using QSvgWidget::hideEvent;
        using QSvgWidget::initPainter;
        using QSvgWidget::inputMethodEvent;
        using QSvgWidget::keyPressEvent;
        using QSvgWidget::keyReleaseEvent;
        using QSvgWidget::leaveEvent;
        using QSvgWidget::metric;
        using QSvgWidget::mouseDoubleClickEvent;
        using QSvgWidget::mouseMoveEvent;
        using QSvgWidget::mousePressEvent;
        using QSvgWidget::mouseReleaseEvent;
        using QSvgWidget::moveEvent;
        using QSvgWidget::nativeEvent;
        using QSvgWidget::paintEvent;
        using QSvgWidget::redirected;
        using QSvgWidget::resizeEvent;
        using QSvgWidget::sharedPainter;
        using QSvgWidget::showEvent;
        using QSvgWidget::tabletEvent;
        using QSvgWidget::timerEvent;
        using QSvgWidget::wheelEvent;
    };

    VirtualQSvgWidget(QWidget* parent) : QSvgWidget(parent) {};
    VirtualQSvgWidget() : QSvgWidget() {};
    VirtualQSvgWidget(const QString& file) : QSvgWidget(file) {};
    VirtualQSvgWidget(const QString& file, QWidget* parent) : QSvgWidget(file, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsvgwidget_metaobject_callback) {
            QMetaObject* callback_ret = qsvgwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QSvgWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsvgwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsvgwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSvgWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsvgwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsvgwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSvgWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsvgwidget_sizehint_callback) {
            QSize* callback_ret = qsvgwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSvgWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qsvgwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qsvgwidget_paintevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsvgwidget_devtype_callback) {
            int callback_ret = qsvgwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSvgWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsvgwidget_setvisible_callback) {
            bool cbval1 = visible;
            qsvgwidget_setvisible_callback(this, cbval1);
            return;
        }
        QSvgWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsvgwidget_minimumsizehint_callback) {
            QSize* callback_ret = qsvgwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSvgWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsvgwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qsvgwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSvgWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsvgwidget_hasheightforwidth_callback) {
            bool callback_ret = qsvgwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSvgWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsvgwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qsvgwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QSvgWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsvgwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsvgwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSvgWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qsvgwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qsvgwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qsvgwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qsvgwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qsvgwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsvgwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qsvgwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsvgwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qsvgwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsvgwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qsvgwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsvgwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qsvgwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsvgwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qsvgwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsvgwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qsvgwidget_enterevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsvgwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qsvgwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsvgwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qsvgwidget_moveevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qsvgwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qsvgwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsvgwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qsvgwidget_closeevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsvgwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qsvgwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsvgwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qsvgwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsvgwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qsvgwidget_actionevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsvgwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qsvgwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsvgwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qsvgwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsvgwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qsvgwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsvgwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qsvgwidget_dropevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsvgwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qsvgwidget_showevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsvgwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qsvgwidget_hideevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsvgwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qsvgwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QSvgWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsvgwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qsvgwidget_changeevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsvgwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsvgwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSvgWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsvgwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsvgwidget_initpainter_callback(this, cbval1);
            return;
        }
        QSvgWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsvgwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsvgwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSvgWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsvgwidget_sharedpainter_callback) {
            QPainter* callback_ret = qsvgwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSvgWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsvgwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qsvgwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsvgwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qsvgwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSvgWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsvgwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qsvgwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QSvgWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsvgwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsvgwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSvgWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsvgwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsvgwidget_timerevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsvgwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsvgwidget_childevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsvgwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qsvgwidget_customevent_callback(this, cbval1);
            return;
        }
        QSvgWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsvgwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsvgwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QSvgWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsvgwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsvgwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSvgWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSvgWidget_SuperPaintEvent(QSvgWidget* self, QPaintEvent* event);
    friend bool QSvgWidget_SuperEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_SuperMousePressEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_SuperMouseReleaseEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_SuperMouseDoubleClickEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_SuperMouseMoveEvent(QSvgWidget* self, QMouseEvent* event);
    friend void QSvgWidget_SuperWheelEvent(QSvgWidget* self, QWheelEvent* event);
    friend void QSvgWidget_SuperKeyPressEvent(QSvgWidget* self, QKeyEvent* event);
    friend void QSvgWidget_SuperKeyReleaseEvent(QSvgWidget* self, QKeyEvent* event);
    friend void QSvgWidget_SuperFocusInEvent(QSvgWidget* self, QFocusEvent* event);
    friend void QSvgWidget_SuperFocusOutEvent(QSvgWidget* self, QFocusEvent* event);
    friend void QSvgWidget_SuperEnterEvent(QSvgWidget* self, QEnterEvent* event);
    friend void QSvgWidget_SuperLeaveEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_SuperMoveEvent(QSvgWidget* self, QMoveEvent* event);
    friend void QSvgWidget_SuperResizeEvent(QSvgWidget* self, QResizeEvent* event);
    friend void QSvgWidget_SuperCloseEvent(QSvgWidget* self, QCloseEvent* event);
    friend void QSvgWidget_SuperContextMenuEvent(QSvgWidget* self, QContextMenuEvent* event);
    friend void QSvgWidget_SuperTabletEvent(QSvgWidget* self, QTabletEvent* event);
    friend void QSvgWidget_SuperActionEvent(QSvgWidget* self, QActionEvent* event);
    friend void QSvgWidget_SuperDragEnterEvent(QSvgWidget* self, QDragEnterEvent* event);
    friend void QSvgWidget_SuperDragMoveEvent(QSvgWidget* self, QDragMoveEvent* event);
    friend void QSvgWidget_SuperDragLeaveEvent(QSvgWidget* self, QDragLeaveEvent* event);
    friend void QSvgWidget_SuperDropEvent(QSvgWidget* self, QDropEvent* event);
    friend void QSvgWidget_SuperShowEvent(QSvgWidget* self, QShowEvent* event);
    friend void QSvgWidget_SuperHideEvent(QSvgWidget* self, QHideEvent* event);
    friend bool QSvgWidget_SuperNativeEvent(QSvgWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QSvgWidget_SuperChangeEvent(QSvgWidget* self, QEvent* param1);
    friend int QSvgWidget_SuperMetric(const QSvgWidget* self, int param1);
    friend void QSvgWidget_SuperInitPainter(const QSvgWidget* self, QPainter* painter);
    friend QPaintDevice* QSvgWidget_SuperRedirected(const QSvgWidget* self, QPoint* offset);
    friend QPainter* QSvgWidget_SuperSharedPainter(const QSvgWidget* self);
    friend void QSvgWidget_SuperInputMethodEvent(QSvgWidget* self, QInputMethodEvent* param1);
    friend bool QSvgWidget_SuperFocusNextPrevChild(QSvgWidget* self, bool next);
    friend void QSvgWidget_SuperTimerEvent(QSvgWidget* self, QTimerEvent* event);
    friend void QSvgWidget_SuperChildEvent(QSvgWidget* self, QChildEvent* event);
    friend void QSvgWidget_SuperCustomEvent(QSvgWidget* self, QEvent* event);
    friend void QSvgWidget_SuperConnectNotify(QSvgWidget* self, const QMetaMethod* signal);
    friend void QSvgWidget_SuperDisconnectNotify(QSvgWidget* self, const QMetaMethod* signal);
};

#endif
