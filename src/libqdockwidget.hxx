#pragma once
#ifndef LIBQDOCKWIDGET_HXX
#define LIBQDOCKWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDockWidget
class VirtualQDockWidget final : public QDockWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDockWidget_MetaObject_Callback = QMetaObject* (*)(const QDockWidget*);
    using QDockWidget_Metacast_Callback = void* (*)(QDockWidget*, const char*);
    using QDockWidget_Metacall_Callback = int (*)(QDockWidget*, int, int, void**);
    using QDockWidget_ChangeEvent_Callback = void (*)(QDockWidget*, QEvent*);
    using QDockWidget_CloseEvent_Callback = void (*)(QDockWidget*, QCloseEvent*);
    using QDockWidget_PaintEvent_Callback = void (*)(QDockWidget*, QPaintEvent*);
    using QDockWidget_Event_Callback = bool (*)(QDockWidget*, QEvent*);
    using QDockWidget_InitStyleOption_Callback = void (*)(const QDockWidget*, QStyleOptionDockWidget*);
    using QDockWidget_DevType_Callback = int (*)(const QDockWidget*);
    using QDockWidget_SetVisible_Callback = void (*)(QDockWidget*, bool);
    using QDockWidget_SizeHint_Callback = QSize* (*)(const QDockWidget*);
    using QDockWidget_MinimumSizeHint_Callback = QSize* (*)(const QDockWidget*);
    using QDockWidget_HeightForWidth_Callback = int (*)(const QDockWidget*, int);
    using QDockWidget_HasHeightForWidth_Callback = bool (*)(const QDockWidget*);
    using QDockWidget_PaintEngine_Callback = QPaintEngine* (*)(const QDockWidget*);
    using QDockWidget_MousePressEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_MouseReleaseEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_MouseDoubleClickEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_MouseMoveEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_WheelEvent_Callback = void (*)(QDockWidget*, QWheelEvent*);
    using QDockWidget_KeyPressEvent_Callback = void (*)(QDockWidget*, QKeyEvent*);
    using QDockWidget_KeyReleaseEvent_Callback = void (*)(QDockWidget*, QKeyEvent*);
    using QDockWidget_FocusInEvent_Callback = void (*)(QDockWidget*, QFocusEvent*);
    using QDockWidget_FocusOutEvent_Callback = void (*)(QDockWidget*, QFocusEvent*);
    using QDockWidget_EnterEvent_Callback = void (*)(QDockWidget*, QEnterEvent*);
    using QDockWidget_LeaveEvent_Callback = void (*)(QDockWidget*, QEvent*);
    using QDockWidget_MoveEvent_Callback = void (*)(QDockWidget*, QMoveEvent*);
    using QDockWidget_ResizeEvent_Callback = void (*)(QDockWidget*, QResizeEvent*);
    using QDockWidget_ContextMenuEvent_Callback = void (*)(QDockWidget*, QContextMenuEvent*);
    using QDockWidget_TabletEvent_Callback = void (*)(QDockWidget*, QTabletEvent*);
    using QDockWidget_ActionEvent_Callback = void (*)(QDockWidget*, QActionEvent*);
    using QDockWidget_DragEnterEvent_Callback = void (*)(QDockWidget*, QDragEnterEvent*);
    using QDockWidget_DragMoveEvent_Callback = void (*)(QDockWidget*, QDragMoveEvent*);
    using QDockWidget_DragLeaveEvent_Callback = void (*)(QDockWidget*, QDragLeaveEvent*);
    using QDockWidget_DropEvent_Callback = void (*)(QDockWidget*, QDropEvent*);
    using QDockWidget_ShowEvent_Callback = void (*)(QDockWidget*, QShowEvent*);
    using QDockWidget_HideEvent_Callback = void (*)(QDockWidget*, QHideEvent*);
    using QDockWidget_NativeEvent_Callback = bool (*)(QDockWidget*, libqt_string, void*, intptr_t*);
    using QDockWidget_Metric_Callback = int (*)(const QDockWidget*, int);
    using QDockWidget_InitPainter_Callback = void (*)(const QDockWidget*, QPainter*);
    using QDockWidget_Redirected_Callback = QPaintDevice* (*)(const QDockWidget*, QPoint*);
    using QDockWidget_SharedPainter_Callback = QPainter* (*)(const QDockWidget*);
    using QDockWidget_InputMethodEvent_Callback = void (*)(QDockWidget*, QInputMethodEvent*);
    using QDockWidget_InputMethodQuery_Callback = QVariant* (*)(const QDockWidget*, int);
    using QDockWidget_FocusNextPrevChild_Callback = bool (*)(QDockWidget*, bool);
    using QDockWidget_EventFilter_Callback = bool (*)(QDockWidget*, QObject*, QEvent*);
    using QDockWidget_TimerEvent_Callback = void (*)(QDockWidget*, QTimerEvent*);
    using QDockWidget_ChildEvent_Callback = void (*)(QDockWidget*, QChildEvent*);
    using QDockWidget_CustomEvent_Callback = void (*)(QDockWidget*, QEvent*);
    using QDockWidget_ConnectNotify_Callback = void (*)(QDockWidget*, QMetaMethod*);
    using QDockWidget_DisconnectNotify_Callback = void (*)(QDockWidget*, QMetaMethod*);
    using QDockWidget::create;
    using QDockWidget::destroy;
    using QDockWidget::focusNextChild;
    using QDockWidget::focusPreviousChild;
    using QDockWidget::getDecodedMetricF;
    using QDockWidget::isSignalConnected;
    using QDockWidget::receivers;
    using QDockWidget::sender;
    using QDockWidget::senderSignalIndex;
    using QDockWidget::updateMicroFocus;

    // Instance callback storage
    QDockWidget_MetaObject_Callback qdockwidget_metaobject_callback = nullptr;
    QDockWidget_Metacast_Callback qdockwidget_metacast_callback = nullptr;
    QDockWidget_Metacall_Callback qdockwidget_metacall_callback = nullptr;
    QDockWidget_ChangeEvent_Callback qdockwidget_changeevent_callback = nullptr;
    QDockWidget_CloseEvent_Callback qdockwidget_closeevent_callback = nullptr;
    QDockWidget_PaintEvent_Callback qdockwidget_paintevent_callback = nullptr;
    QDockWidget_Event_Callback qdockwidget_event_callback = nullptr;
    QDockWidget_InitStyleOption_Callback qdockwidget_initstyleoption_callback = nullptr;
    QDockWidget_DevType_Callback qdockwidget_devtype_callback = nullptr;
    QDockWidget_SetVisible_Callback qdockwidget_setvisible_callback = nullptr;
    QDockWidget_SizeHint_Callback qdockwidget_sizehint_callback = nullptr;
    QDockWidget_MinimumSizeHint_Callback qdockwidget_minimumsizehint_callback = nullptr;
    QDockWidget_HeightForWidth_Callback qdockwidget_heightforwidth_callback = nullptr;
    QDockWidget_HasHeightForWidth_Callback qdockwidget_hasheightforwidth_callback = nullptr;
    QDockWidget_PaintEngine_Callback qdockwidget_paintengine_callback = nullptr;
    QDockWidget_MousePressEvent_Callback qdockwidget_mousepressevent_callback = nullptr;
    QDockWidget_MouseReleaseEvent_Callback qdockwidget_mousereleaseevent_callback = nullptr;
    QDockWidget_MouseDoubleClickEvent_Callback qdockwidget_mousedoubleclickevent_callback = nullptr;
    QDockWidget_MouseMoveEvent_Callback qdockwidget_mousemoveevent_callback = nullptr;
    QDockWidget_WheelEvent_Callback qdockwidget_wheelevent_callback = nullptr;
    QDockWidget_KeyPressEvent_Callback qdockwidget_keypressevent_callback = nullptr;
    QDockWidget_KeyReleaseEvent_Callback qdockwidget_keyreleaseevent_callback = nullptr;
    QDockWidget_FocusInEvent_Callback qdockwidget_focusinevent_callback = nullptr;
    QDockWidget_FocusOutEvent_Callback qdockwidget_focusoutevent_callback = nullptr;
    QDockWidget_EnterEvent_Callback qdockwidget_enterevent_callback = nullptr;
    QDockWidget_LeaveEvent_Callback qdockwidget_leaveevent_callback = nullptr;
    QDockWidget_MoveEvent_Callback qdockwidget_moveevent_callback = nullptr;
    QDockWidget_ResizeEvent_Callback qdockwidget_resizeevent_callback = nullptr;
    QDockWidget_ContextMenuEvent_Callback qdockwidget_contextmenuevent_callback = nullptr;
    QDockWidget_TabletEvent_Callback qdockwidget_tabletevent_callback = nullptr;
    QDockWidget_ActionEvent_Callback qdockwidget_actionevent_callback = nullptr;
    QDockWidget_DragEnterEvent_Callback qdockwidget_dragenterevent_callback = nullptr;
    QDockWidget_DragMoveEvent_Callback qdockwidget_dragmoveevent_callback = nullptr;
    QDockWidget_DragLeaveEvent_Callback qdockwidget_dragleaveevent_callback = nullptr;
    QDockWidget_DropEvent_Callback qdockwidget_dropevent_callback = nullptr;
    QDockWidget_ShowEvent_Callback qdockwidget_showevent_callback = nullptr;
    QDockWidget_HideEvent_Callback qdockwidget_hideevent_callback = nullptr;
    QDockWidget_NativeEvent_Callback qdockwidget_nativeevent_callback = nullptr;
    QDockWidget_Metric_Callback qdockwidget_metric_callback = nullptr;
    QDockWidget_InitPainter_Callback qdockwidget_initpainter_callback = nullptr;
    QDockWidget_Redirected_Callback qdockwidget_redirected_callback = nullptr;
    QDockWidget_SharedPainter_Callback qdockwidget_sharedpainter_callback = nullptr;
    QDockWidget_InputMethodEvent_Callback qdockwidget_inputmethodevent_callback = nullptr;
    QDockWidget_InputMethodQuery_Callback qdockwidget_inputmethodquery_callback = nullptr;
    QDockWidget_FocusNextPrevChild_Callback qdockwidget_focusnextprevchild_callback = nullptr;
    QDockWidget_EventFilter_Callback qdockwidget_eventfilter_callback = nullptr;
    QDockWidget_TimerEvent_Callback qdockwidget_timerevent_callback = nullptr;
    QDockWidget_ChildEvent_Callback qdockwidget_childevent_callback = nullptr;
    QDockWidget_CustomEvent_Callback qdockwidget_customevent_callback = nullptr;
    QDockWidget_ConnectNotify_Callback qdockwidget_connectnotify_callback = nullptr;
    QDockWidget_DisconnectNotify_Callback qdockwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDockWidget {
        using QDockWidget::actionEvent;
        using QDockWidget::changeEvent;
        using QDockWidget::childEvent;
        using QDockWidget::closeEvent;
        using QDockWidget::connectNotify;
        using QDockWidget::contextMenuEvent;
        using QDockWidget::customEvent;
        using QDockWidget::disconnectNotify;
        using QDockWidget::dragEnterEvent;
        using QDockWidget::dragLeaveEvent;
        using QDockWidget::dragMoveEvent;
        using QDockWidget::dropEvent;
        using QDockWidget::enterEvent;
        using QDockWidget::event;
        using QDockWidget::focusInEvent;
        using QDockWidget::focusNextPrevChild;
        using QDockWidget::focusOutEvent;
        using QDockWidget::hideEvent;
        using QDockWidget::initPainter;
        using QDockWidget::initStyleOption;
        using QDockWidget::inputMethodEvent;
        using QDockWidget::keyPressEvent;
        using QDockWidget::keyReleaseEvent;
        using QDockWidget::leaveEvent;
        using QDockWidget::metric;
        using QDockWidget::mouseDoubleClickEvent;
        using QDockWidget::mouseMoveEvent;
        using QDockWidget::mousePressEvent;
        using QDockWidget::mouseReleaseEvent;
        using QDockWidget::moveEvent;
        using QDockWidget::nativeEvent;
        using QDockWidget::paintEvent;
        using QDockWidget::redirected;
        using QDockWidget::resizeEvent;
        using QDockWidget::sharedPainter;
        using QDockWidget::showEvent;
        using QDockWidget::tabletEvent;
        using QDockWidget::timerEvent;
        using QDockWidget::wheelEvent;
    };

    VirtualQDockWidget(QWidget* parent) : QDockWidget(parent) {};
    VirtualQDockWidget(const QString& title) : QDockWidget(title) {};
    VirtualQDockWidget() : QDockWidget() {};
    VirtualQDockWidget(const QString& title, QWidget* parent) : QDockWidget(title, parent) {};
    VirtualQDockWidget(const QString& title, QWidget* parent, Qt::WindowFlags flags) : QDockWidget(title, parent, flags) {};
    VirtualQDockWidget(QWidget* parent, Qt::WindowFlags flags) : QDockWidget(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdockwidget_metaobject_callback) {
            QMetaObject* callback_ret = qdockwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QDockWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdockwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdockwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDockWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdockwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdockwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDockWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdockwidget_changeevent_callback) {
            QEvent* cbval1 = event;
            qdockwidget_changeevent_callback(this, cbval1);
            return;
        }
        QDockWidget::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdockwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdockwidget_closeevent_callback(this, cbval1);
            return;
        }
        QDockWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdockwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdockwidget_paintevent_callback(this, cbval1);
            return;
        }
        QDockWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdockwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdockwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDockWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionDockWidget* option) const override {
        if (qdockwidget_initstyleoption_callback) {
            QStyleOptionDockWidget* cbval1 = option;
            qdockwidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QDockWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdockwidget_devtype_callback) {
            int callback_ret = qdockwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDockWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdockwidget_setvisible_callback) {
            bool cbval1 = visible;
            qdockwidget_setvisible_callback(this, cbval1);
            return;
        }
        QDockWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdockwidget_sizehint_callback) {
            QSize* callback_ret = qdockwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDockWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdockwidget_minimumsizehint_callback) {
            QSize* callback_ret = qdockwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDockWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdockwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdockwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDockWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdockwidget_hasheightforwidth_callback) {
            bool callback_ret = qdockwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDockWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdockwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qdockwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QDockWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdockwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdockwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QDockWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdockwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdockwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDockWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdockwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdockwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDockWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdockwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdockwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDockWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdockwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdockwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QDockWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdockwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdockwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QDockWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdockwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdockwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDockWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdockwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdockwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QDockWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdockwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdockwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QDockWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdockwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdockwidget_enterevent_callback(this, cbval1);
            return;
        }
        QDockWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdockwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdockwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QDockWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdockwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdockwidget_moveevent_callback(this, cbval1);
            return;
        }
        QDockWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdockwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdockwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QDockWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdockwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdockwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDockWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdockwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdockwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QDockWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdockwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdockwidget_actionevent_callback(this, cbval1);
            return;
        }
        QDockWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdockwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdockwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QDockWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdockwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdockwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDockWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdockwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdockwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDockWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdockwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdockwidget_dropevent_callback(this, cbval1);
            return;
        }
        QDockWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdockwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdockwidget_showevent_callback(this, cbval1);
            return;
        }
        QDockWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdockwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdockwidget_hideevent_callback(this, cbval1);
            return;
        }
        QDockWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdockwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdockwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDockWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdockwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdockwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDockWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdockwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdockwidget_initpainter_callback(this, cbval1);
            return;
        }
        QDockWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdockwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdockwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDockWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdockwidget_sharedpainter_callback) {
            QPainter* callback_ret = qdockwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDockWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdockwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdockwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDockWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdockwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdockwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDockWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdockwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdockwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDockWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdockwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdockwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDockWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdockwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdockwidget_timerevent_callback(this, cbval1);
            return;
        }
        QDockWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdockwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdockwidget_childevent_callback(this, cbval1);
            return;
        }
        QDockWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdockwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qdockwidget_customevent_callback(this, cbval1);
            return;
        }
        QDockWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdockwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdockwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QDockWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdockwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdockwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDockWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDockWidget_SuperChangeEvent(QDockWidget* self, QEvent* event);
    friend void QDockWidget_SuperCloseEvent(QDockWidget* self, QCloseEvent* event);
    friend void QDockWidget_SuperPaintEvent(QDockWidget* self, QPaintEvent* event);
    friend bool QDockWidget_SuperEvent(QDockWidget* self, QEvent* event);
    friend void QDockWidget_SuperInitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option);
    friend void QDockWidget_SuperMousePressEvent(QDockWidget* self, QMouseEvent* event);
    friend void QDockWidget_SuperMouseReleaseEvent(QDockWidget* self, QMouseEvent* event);
    friend void QDockWidget_SuperMouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event);
    friend void QDockWidget_SuperMouseMoveEvent(QDockWidget* self, QMouseEvent* event);
    friend void QDockWidget_SuperWheelEvent(QDockWidget* self, QWheelEvent* event);
    friend void QDockWidget_SuperKeyPressEvent(QDockWidget* self, QKeyEvent* event);
    friend void QDockWidget_SuperKeyReleaseEvent(QDockWidget* self, QKeyEvent* event);
    friend void QDockWidget_SuperFocusInEvent(QDockWidget* self, QFocusEvent* event);
    friend void QDockWidget_SuperFocusOutEvent(QDockWidget* self, QFocusEvent* event);
    friend void QDockWidget_SuperEnterEvent(QDockWidget* self, QEnterEvent* event);
    friend void QDockWidget_SuperLeaveEvent(QDockWidget* self, QEvent* event);
    friend void QDockWidget_SuperMoveEvent(QDockWidget* self, QMoveEvent* event);
    friend void QDockWidget_SuperResizeEvent(QDockWidget* self, QResizeEvent* event);
    friend void QDockWidget_SuperContextMenuEvent(QDockWidget* self, QContextMenuEvent* event);
    friend void QDockWidget_SuperTabletEvent(QDockWidget* self, QTabletEvent* event);
    friend void QDockWidget_SuperActionEvent(QDockWidget* self, QActionEvent* event);
    friend void QDockWidget_SuperDragEnterEvent(QDockWidget* self, QDragEnterEvent* event);
    friend void QDockWidget_SuperDragMoveEvent(QDockWidget* self, QDragMoveEvent* event);
    friend void QDockWidget_SuperDragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event);
    friend void QDockWidget_SuperDropEvent(QDockWidget* self, QDropEvent* event);
    friend void QDockWidget_SuperShowEvent(QDockWidget* self, QShowEvent* event);
    friend void QDockWidget_SuperHideEvent(QDockWidget* self, QHideEvent* event);
    friend bool QDockWidget_SuperNativeEvent(QDockWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDockWidget_SuperMetric(const QDockWidget* self, int param1);
    friend void QDockWidget_SuperInitPainter(const QDockWidget* self, QPainter* painter);
    friend QPaintDevice* QDockWidget_SuperRedirected(const QDockWidget* self, QPoint* offset);
    friend QPainter* QDockWidget_SuperSharedPainter(const QDockWidget* self);
    friend void QDockWidget_SuperInputMethodEvent(QDockWidget* self, QInputMethodEvent* param1);
    friend bool QDockWidget_SuperFocusNextPrevChild(QDockWidget* self, bool next);
    friend void QDockWidget_SuperTimerEvent(QDockWidget* self, QTimerEvent* event);
    friend void QDockWidget_SuperChildEvent(QDockWidget* self, QChildEvent* event);
    friend void QDockWidget_SuperCustomEvent(QDockWidget* self, QEvent* event);
    friend void QDockWidget_SuperConnectNotify(QDockWidget* self, const QMetaMethod* signal);
    friend void QDockWidget_SuperDisconnectNotify(QDockWidget* self, const QMetaMethod* signal);
};

#endif
