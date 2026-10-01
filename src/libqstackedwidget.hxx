#pragma once
#ifndef LIBQSTACKEDWIDGET_HXX
#define LIBQSTACKEDWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStackedWidget
class VirtualQStackedWidget final : public QStackedWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStackedWidget_MetaObject_Callback = QMetaObject* (*)(const QStackedWidget*);
    using QStackedWidget_Metacast_Callback = void* (*)(QStackedWidget*, const char*);
    using QStackedWidget_Metacall_Callback = int (*)(QStackedWidget*, int, int, void**);
    using QStackedWidget_Event_Callback = bool (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_SizeHint_Callback = QSize* (*)(const QStackedWidget*);
    using QStackedWidget_PaintEvent_Callback = void (*)(QStackedWidget*, QPaintEvent*);
    using QStackedWidget_ChangeEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_InitStyleOption_Callback = void (*)(const QStackedWidget*, QStyleOptionFrame*);
    using QStackedWidget_DevType_Callback = int (*)(const QStackedWidget*);
    using QStackedWidget_SetVisible_Callback = void (*)(QStackedWidget*, bool);
    using QStackedWidget_MinimumSizeHint_Callback = QSize* (*)(const QStackedWidget*);
    using QStackedWidget_HeightForWidth_Callback = int (*)(const QStackedWidget*, int);
    using QStackedWidget_HasHeightForWidth_Callback = bool (*)(const QStackedWidget*);
    using QStackedWidget_PaintEngine_Callback = QPaintEngine* (*)(const QStackedWidget*);
    using QStackedWidget_MousePressEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseReleaseEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseDoubleClickEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseMoveEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_WheelEvent_Callback = void (*)(QStackedWidget*, QWheelEvent*);
    using QStackedWidget_KeyPressEvent_Callback = void (*)(QStackedWidget*, QKeyEvent*);
    using QStackedWidget_KeyReleaseEvent_Callback = void (*)(QStackedWidget*, QKeyEvent*);
    using QStackedWidget_FocusInEvent_Callback = void (*)(QStackedWidget*, QFocusEvent*);
    using QStackedWidget_FocusOutEvent_Callback = void (*)(QStackedWidget*, QFocusEvent*);
    using QStackedWidget_EnterEvent_Callback = void (*)(QStackedWidget*, QEnterEvent*);
    using QStackedWidget_LeaveEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_MoveEvent_Callback = void (*)(QStackedWidget*, QMoveEvent*);
    using QStackedWidget_ResizeEvent_Callback = void (*)(QStackedWidget*, QResizeEvent*);
    using QStackedWidget_CloseEvent_Callback = void (*)(QStackedWidget*, QCloseEvent*);
    using QStackedWidget_ContextMenuEvent_Callback = void (*)(QStackedWidget*, QContextMenuEvent*);
    using QStackedWidget_TabletEvent_Callback = void (*)(QStackedWidget*, QTabletEvent*);
    using QStackedWidget_ActionEvent_Callback = void (*)(QStackedWidget*, QActionEvent*);
    using QStackedWidget_DragEnterEvent_Callback = void (*)(QStackedWidget*, QDragEnterEvent*);
    using QStackedWidget_DragMoveEvent_Callback = void (*)(QStackedWidget*, QDragMoveEvent*);
    using QStackedWidget_DragLeaveEvent_Callback = void (*)(QStackedWidget*, QDragLeaveEvent*);
    using QStackedWidget_DropEvent_Callback = void (*)(QStackedWidget*, QDropEvent*);
    using QStackedWidget_ShowEvent_Callback = void (*)(QStackedWidget*, QShowEvent*);
    using QStackedWidget_HideEvent_Callback = void (*)(QStackedWidget*, QHideEvent*);
    using QStackedWidget_NativeEvent_Callback = bool (*)(QStackedWidget*, libqt_string, void*, intptr_t*);
    using QStackedWidget_Metric_Callback = int (*)(const QStackedWidget*, int);
    using QStackedWidget_InitPainter_Callback = void (*)(const QStackedWidget*, QPainter*);
    using QStackedWidget_Redirected_Callback = QPaintDevice* (*)(const QStackedWidget*, QPoint*);
    using QStackedWidget_SharedPainter_Callback = QPainter* (*)(const QStackedWidget*);
    using QStackedWidget_InputMethodEvent_Callback = void (*)(QStackedWidget*, QInputMethodEvent*);
    using QStackedWidget_InputMethodQuery_Callback = QVariant* (*)(const QStackedWidget*, int);
    using QStackedWidget_FocusNextPrevChild_Callback = bool (*)(QStackedWidget*, bool);
    using QStackedWidget_EventFilter_Callback = bool (*)(QStackedWidget*, QObject*, QEvent*);
    using QStackedWidget_TimerEvent_Callback = void (*)(QStackedWidget*, QTimerEvent*);
    using QStackedWidget_ChildEvent_Callback = void (*)(QStackedWidget*, QChildEvent*);
    using QStackedWidget_CustomEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_ConnectNotify_Callback = void (*)(QStackedWidget*, QMetaMethod*);
    using QStackedWidget_DisconnectNotify_Callback = void (*)(QStackedWidget*, QMetaMethod*);
    using QStackedWidget::create;
    using QStackedWidget::destroy;
    using QStackedWidget::drawFrame;
    using QStackedWidget::focusNextChild;
    using QStackedWidget::focusPreviousChild;
    using QStackedWidget::getDecodedMetricF;
    using QStackedWidget::isSignalConnected;
    using QStackedWidget::receivers;
    using QStackedWidget::sender;
    using QStackedWidget::senderSignalIndex;
    using QStackedWidget::updateMicroFocus;

    // Instance callback storage
    QStackedWidget_MetaObject_Callback qstackedwidget_metaobject_callback = nullptr;
    QStackedWidget_Metacast_Callback qstackedwidget_metacast_callback = nullptr;
    QStackedWidget_Metacall_Callback qstackedwidget_metacall_callback = nullptr;
    QStackedWidget_Event_Callback qstackedwidget_event_callback = nullptr;
    QStackedWidget_SizeHint_Callback qstackedwidget_sizehint_callback = nullptr;
    QStackedWidget_PaintEvent_Callback qstackedwidget_paintevent_callback = nullptr;
    QStackedWidget_ChangeEvent_Callback qstackedwidget_changeevent_callback = nullptr;
    QStackedWidget_InitStyleOption_Callback qstackedwidget_initstyleoption_callback = nullptr;
    QStackedWidget_DevType_Callback qstackedwidget_devtype_callback = nullptr;
    QStackedWidget_SetVisible_Callback qstackedwidget_setvisible_callback = nullptr;
    QStackedWidget_MinimumSizeHint_Callback qstackedwidget_minimumsizehint_callback = nullptr;
    QStackedWidget_HeightForWidth_Callback qstackedwidget_heightforwidth_callback = nullptr;
    QStackedWidget_HasHeightForWidth_Callback qstackedwidget_hasheightforwidth_callback = nullptr;
    QStackedWidget_PaintEngine_Callback qstackedwidget_paintengine_callback = nullptr;
    QStackedWidget_MousePressEvent_Callback qstackedwidget_mousepressevent_callback = nullptr;
    QStackedWidget_MouseReleaseEvent_Callback qstackedwidget_mousereleaseevent_callback = nullptr;
    QStackedWidget_MouseDoubleClickEvent_Callback qstackedwidget_mousedoubleclickevent_callback = nullptr;
    QStackedWidget_MouseMoveEvent_Callback qstackedwidget_mousemoveevent_callback = nullptr;
    QStackedWidget_WheelEvent_Callback qstackedwidget_wheelevent_callback = nullptr;
    QStackedWidget_KeyPressEvent_Callback qstackedwidget_keypressevent_callback = nullptr;
    QStackedWidget_KeyReleaseEvent_Callback qstackedwidget_keyreleaseevent_callback = nullptr;
    QStackedWidget_FocusInEvent_Callback qstackedwidget_focusinevent_callback = nullptr;
    QStackedWidget_FocusOutEvent_Callback qstackedwidget_focusoutevent_callback = nullptr;
    QStackedWidget_EnterEvent_Callback qstackedwidget_enterevent_callback = nullptr;
    QStackedWidget_LeaveEvent_Callback qstackedwidget_leaveevent_callback = nullptr;
    QStackedWidget_MoveEvent_Callback qstackedwidget_moveevent_callback = nullptr;
    QStackedWidget_ResizeEvent_Callback qstackedwidget_resizeevent_callback = nullptr;
    QStackedWidget_CloseEvent_Callback qstackedwidget_closeevent_callback = nullptr;
    QStackedWidget_ContextMenuEvent_Callback qstackedwidget_contextmenuevent_callback = nullptr;
    QStackedWidget_TabletEvent_Callback qstackedwidget_tabletevent_callback = nullptr;
    QStackedWidget_ActionEvent_Callback qstackedwidget_actionevent_callback = nullptr;
    QStackedWidget_DragEnterEvent_Callback qstackedwidget_dragenterevent_callback = nullptr;
    QStackedWidget_DragMoveEvent_Callback qstackedwidget_dragmoveevent_callback = nullptr;
    QStackedWidget_DragLeaveEvent_Callback qstackedwidget_dragleaveevent_callback = nullptr;
    QStackedWidget_DropEvent_Callback qstackedwidget_dropevent_callback = nullptr;
    QStackedWidget_ShowEvent_Callback qstackedwidget_showevent_callback = nullptr;
    QStackedWidget_HideEvent_Callback qstackedwidget_hideevent_callback = nullptr;
    QStackedWidget_NativeEvent_Callback qstackedwidget_nativeevent_callback = nullptr;
    QStackedWidget_Metric_Callback qstackedwidget_metric_callback = nullptr;
    QStackedWidget_InitPainter_Callback qstackedwidget_initpainter_callback = nullptr;
    QStackedWidget_Redirected_Callback qstackedwidget_redirected_callback = nullptr;
    QStackedWidget_SharedPainter_Callback qstackedwidget_sharedpainter_callback = nullptr;
    QStackedWidget_InputMethodEvent_Callback qstackedwidget_inputmethodevent_callback = nullptr;
    QStackedWidget_InputMethodQuery_Callback qstackedwidget_inputmethodquery_callback = nullptr;
    QStackedWidget_FocusNextPrevChild_Callback qstackedwidget_focusnextprevchild_callback = nullptr;
    QStackedWidget_EventFilter_Callback qstackedwidget_eventfilter_callback = nullptr;
    QStackedWidget_TimerEvent_Callback qstackedwidget_timerevent_callback = nullptr;
    QStackedWidget_ChildEvent_Callback qstackedwidget_childevent_callback = nullptr;
    QStackedWidget_CustomEvent_Callback qstackedwidget_customevent_callback = nullptr;
    QStackedWidget_ConnectNotify_Callback qstackedwidget_connectnotify_callback = nullptr;
    QStackedWidget_DisconnectNotify_Callback qstackedwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QStackedWidget {
        using QStackedWidget::actionEvent;
        using QStackedWidget::changeEvent;
        using QStackedWidget::childEvent;
        using QStackedWidget::closeEvent;
        using QStackedWidget::connectNotify;
        using QStackedWidget::contextMenuEvent;
        using QStackedWidget::customEvent;
        using QStackedWidget::disconnectNotify;
        using QStackedWidget::dragEnterEvent;
        using QStackedWidget::dragLeaveEvent;
        using QStackedWidget::dragMoveEvent;
        using QStackedWidget::dropEvent;
        using QStackedWidget::enterEvent;
        using QStackedWidget::event;
        using QStackedWidget::focusInEvent;
        using QStackedWidget::focusNextPrevChild;
        using QStackedWidget::focusOutEvent;
        using QStackedWidget::hideEvent;
        using QStackedWidget::initPainter;
        using QStackedWidget::initStyleOption;
        using QStackedWidget::inputMethodEvent;
        using QStackedWidget::keyPressEvent;
        using QStackedWidget::keyReleaseEvent;
        using QStackedWidget::leaveEvent;
        using QStackedWidget::metric;
        using QStackedWidget::mouseDoubleClickEvent;
        using QStackedWidget::mouseMoveEvent;
        using QStackedWidget::mousePressEvent;
        using QStackedWidget::mouseReleaseEvent;
        using QStackedWidget::moveEvent;
        using QStackedWidget::nativeEvent;
        using QStackedWidget::paintEvent;
        using QStackedWidget::redirected;
        using QStackedWidget::resizeEvent;
        using QStackedWidget::sharedPainter;
        using QStackedWidget::showEvent;
        using QStackedWidget::tabletEvent;
        using QStackedWidget::timerEvent;
        using QStackedWidget::wheelEvent;
    };

    VirtualQStackedWidget(QWidget* parent) : QStackedWidget(parent) {};
    VirtualQStackedWidget() : QStackedWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstackedwidget_metaobject_callback) {
            QMetaObject* callback_ret = qstackedwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QStackedWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstackedwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstackedwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstackedwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qstackedwidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qstackedwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstackedwidget_sizehint_callback) {
            QSize* callback_ret = qstackedwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStackedWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qstackedwidget_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qstackedwidget_paintevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qstackedwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qstackedwidget_changeevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qstackedwidget_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qstackedwidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QStackedWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qstackedwidget_devtype_callback) {
            int callback_ret = qstackedwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qstackedwidget_setvisible_callback) {
            bool cbval1 = visible;
            qstackedwidget_setvisible_callback(this, cbval1);
            return;
        }
        QStackedWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qstackedwidget_minimumsizehint_callback) {
            QSize* callback_ret = qstackedwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStackedWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qstackedwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qstackedwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstackedwidget_hasheightforwidth_callback) {
            bool callback_ret = qstackedwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QStackedWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qstackedwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qstackedwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QStackedWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qstackedwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qstackedwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qstackedwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qstackedwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qstackedwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qstackedwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qstackedwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qstackedwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qstackedwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qstackedwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qstackedwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qstackedwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qstackedwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qstackedwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qstackedwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qstackedwidget_enterevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qstackedwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qstackedwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qstackedwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qstackedwidget_moveevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qstackedwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qstackedwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qstackedwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qstackedwidget_closeevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qstackedwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qstackedwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qstackedwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qstackedwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qstackedwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qstackedwidget_actionevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qstackedwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qstackedwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qstackedwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qstackedwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qstackedwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qstackedwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qstackedwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qstackedwidget_dropevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qstackedwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qstackedwidget_showevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qstackedwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qstackedwidget_hideevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qstackedwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qstackedwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QStackedWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qstackedwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qstackedwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QStackedWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qstackedwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qstackedwidget_initpainter_callback(this, cbval1);
            return;
        }
        QStackedWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qstackedwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qstackedwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qstackedwidget_sharedpainter_callback) {
            QPainter* callback_ret = qstackedwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QStackedWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qstackedwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qstackedwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qstackedwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qstackedwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStackedWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qstackedwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qstackedwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QStackedWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qstackedwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStackedWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstackedwidget_timerevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstackedwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstackedwidget_childevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qstackedwidget_customevent_callback(this, cbval1);
            return;
        }
        QStackedWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstackedwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QStackedWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstackedwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStackedWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QStackedWidget_SuperEvent(QStackedWidget* self, QEvent* e);
    friend void QStackedWidget_SuperPaintEvent(QStackedWidget* self, QPaintEvent* param1);
    friend void QStackedWidget_SuperChangeEvent(QStackedWidget* self, QEvent* param1);
    friend void QStackedWidget_SuperInitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option);
    friend void QStackedWidget_SuperMousePressEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperMouseReleaseEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperMouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperMouseMoveEvent(QStackedWidget* self, QMouseEvent* event);
    friend void QStackedWidget_SuperWheelEvent(QStackedWidget* self, QWheelEvent* event);
    friend void QStackedWidget_SuperKeyPressEvent(QStackedWidget* self, QKeyEvent* event);
    friend void QStackedWidget_SuperKeyReleaseEvent(QStackedWidget* self, QKeyEvent* event);
    friend void QStackedWidget_SuperFocusInEvent(QStackedWidget* self, QFocusEvent* event);
    friend void QStackedWidget_SuperFocusOutEvent(QStackedWidget* self, QFocusEvent* event);
    friend void QStackedWidget_SuperEnterEvent(QStackedWidget* self, QEnterEvent* event);
    friend void QStackedWidget_SuperLeaveEvent(QStackedWidget* self, QEvent* event);
    friend void QStackedWidget_SuperMoveEvent(QStackedWidget* self, QMoveEvent* event);
    friend void QStackedWidget_SuperResizeEvent(QStackedWidget* self, QResizeEvent* event);
    friend void QStackedWidget_SuperCloseEvent(QStackedWidget* self, QCloseEvent* event);
    friend void QStackedWidget_SuperContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event);
    friend void QStackedWidget_SuperTabletEvent(QStackedWidget* self, QTabletEvent* event);
    friend void QStackedWidget_SuperActionEvent(QStackedWidget* self, QActionEvent* event);
    friend void QStackedWidget_SuperDragEnterEvent(QStackedWidget* self, QDragEnterEvent* event);
    friend void QStackedWidget_SuperDragMoveEvent(QStackedWidget* self, QDragMoveEvent* event);
    friend void QStackedWidget_SuperDragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event);
    friend void QStackedWidget_SuperDropEvent(QStackedWidget* self, QDropEvent* event);
    friend void QStackedWidget_SuperShowEvent(QStackedWidget* self, QShowEvent* event);
    friend void QStackedWidget_SuperHideEvent(QStackedWidget* self, QHideEvent* event);
    friend bool QStackedWidget_SuperNativeEvent(QStackedWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QStackedWidget_SuperMetric(const QStackedWidget* self, int param1);
    friend void QStackedWidget_SuperInitPainter(const QStackedWidget* self, QPainter* painter);
    friend QPaintDevice* QStackedWidget_SuperRedirected(const QStackedWidget* self, QPoint* offset);
    friend QPainter* QStackedWidget_SuperSharedPainter(const QStackedWidget* self);
    friend void QStackedWidget_SuperInputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1);
    friend bool QStackedWidget_SuperFocusNextPrevChild(QStackedWidget* self, bool next);
    friend void QStackedWidget_SuperTimerEvent(QStackedWidget* self, QTimerEvent* event);
    friend void QStackedWidget_SuperChildEvent(QStackedWidget* self, QChildEvent* event);
    friend void QStackedWidget_SuperCustomEvent(QStackedWidget* self, QEvent* event);
    friend void QStackedWidget_SuperConnectNotify(QStackedWidget* self, const QMetaMethod* signal);
    friend void QStackedWidget_SuperDisconnectNotify(QStackedWidget* self, const QMetaMethod* signal);
};

#endif
