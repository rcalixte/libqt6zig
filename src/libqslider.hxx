#pragma once
#ifndef LIBQSLIDER_HXX
#define LIBQSLIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSlider
class VirtualQSlider final : public QSlider {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSlider::SliderChange;
    using QSlider_MetaObject_Callback = QMetaObject* (*)(const QSlider*);
    using QSlider_Metacast_Callback = void* (*)(QSlider*, const char*);
    using QSlider_Metacall_Callback = int (*)(QSlider*, int, int, void**);
    using QSlider_SizeHint_Callback = QSize* (*)(const QSlider*);
    using QSlider_MinimumSizeHint_Callback = QSize* (*)(const QSlider*);
    using QSlider_Event_Callback = bool (*)(QSlider*, QEvent*);
    using QSlider_PaintEvent_Callback = void (*)(QSlider*, QPaintEvent*);
    using QSlider_MousePressEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_MouseReleaseEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_MouseMoveEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_InitStyleOption_Callback = void (*)(const QSlider*, QStyleOptionSlider*);
    using QSlider_SliderChange_Callback = void (*)(QSlider*, int);
    using QSlider_KeyPressEvent_Callback = void (*)(QSlider*, QKeyEvent*);
    using QSlider_TimerEvent_Callback = void (*)(QSlider*, QTimerEvent*);
    using QSlider_WheelEvent_Callback = void (*)(QSlider*, QWheelEvent*);
    using QSlider_ChangeEvent_Callback = void (*)(QSlider*, QEvent*);
    using QSlider_DevType_Callback = int (*)(const QSlider*);
    using QSlider_SetVisible_Callback = void (*)(QSlider*, bool);
    using QSlider_HeightForWidth_Callback = int (*)(const QSlider*, int);
    using QSlider_HasHeightForWidth_Callback = bool (*)(const QSlider*);
    using QSlider_PaintEngine_Callback = QPaintEngine* (*)(const QSlider*);
    using QSlider_MouseDoubleClickEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_KeyReleaseEvent_Callback = void (*)(QSlider*, QKeyEvent*);
    using QSlider_FocusInEvent_Callback = void (*)(QSlider*, QFocusEvent*);
    using QSlider_FocusOutEvent_Callback = void (*)(QSlider*, QFocusEvent*);
    using QSlider_EnterEvent_Callback = void (*)(QSlider*, QEnterEvent*);
    using QSlider_LeaveEvent_Callback = void (*)(QSlider*, QEvent*);
    using QSlider_MoveEvent_Callback = void (*)(QSlider*, QMoveEvent*);
    using QSlider_ResizeEvent_Callback = void (*)(QSlider*, QResizeEvent*);
    using QSlider_CloseEvent_Callback = void (*)(QSlider*, QCloseEvent*);
    using QSlider_ContextMenuEvent_Callback = void (*)(QSlider*, QContextMenuEvent*);
    using QSlider_TabletEvent_Callback = void (*)(QSlider*, QTabletEvent*);
    using QSlider_ActionEvent_Callback = void (*)(QSlider*, QActionEvent*);
    using QSlider_DragEnterEvent_Callback = void (*)(QSlider*, QDragEnterEvent*);
    using QSlider_DragMoveEvent_Callback = void (*)(QSlider*, QDragMoveEvent*);
    using QSlider_DragLeaveEvent_Callback = void (*)(QSlider*, QDragLeaveEvent*);
    using QSlider_DropEvent_Callback = void (*)(QSlider*, QDropEvent*);
    using QSlider_ShowEvent_Callback = void (*)(QSlider*, QShowEvent*);
    using QSlider_HideEvent_Callback = void (*)(QSlider*, QHideEvent*);
    using QSlider_NativeEvent_Callback = bool (*)(QSlider*, libqt_string, void*, intptr_t*);
    using QSlider_Metric_Callback = int (*)(const QSlider*, int);
    using QSlider_InitPainter_Callback = void (*)(const QSlider*, QPainter*);
    using QSlider_Redirected_Callback = QPaintDevice* (*)(const QSlider*, QPoint*);
    using QSlider_SharedPainter_Callback = QPainter* (*)(const QSlider*);
    using QSlider_InputMethodEvent_Callback = void (*)(QSlider*, QInputMethodEvent*);
    using QSlider_InputMethodQuery_Callback = QVariant* (*)(const QSlider*, int);
    using QSlider_FocusNextPrevChild_Callback = bool (*)(QSlider*, bool);
    using QSlider_EventFilter_Callback = bool (*)(QSlider*, QObject*, QEvent*);
    using QSlider_ChildEvent_Callback = void (*)(QSlider*, QChildEvent*);
    using QSlider_CustomEvent_Callback = void (*)(QSlider*, QEvent*);
    using QSlider_ConnectNotify_Callback = void (*)(QSlider*, QMetaMethod*);
    using QSlider_DisconnectNotify_Callback = void (*)(QSlider*, QMetaMethod*);
    using QSlider::create;
    using QSlider::destroy;
    using QSlider::focusNextChild;
    using QSlider::focusPreviousChild;
    using QSlider::getDecodedMetricF;
    using QSlider::isSignalConnected;
    using QSlider::receivers;
    using QSlider::repeatAction;
    using QSlider::sender;
    using QSlider::senderSignalIndex;
    using QSlider::setRepeatAction;
    using QSlider::updateMicroFocus;

    // Instance callback storage
    QSlider_MetaObject_Callback qslider_metaobject_callback = nullptr;
    QSlider_Metacast_Callback qslider_metacast_callback = nullptr;
    QSlider_Metacall_Callback qslider_metacall_callback = nullptr;
    QSlider_SizeHint_Callback qslider_sizehint_callback = nullptr;
    QSlider_MinimumSizeHint_Callback qslider_minimumsizehint_callback = nullptr;
    QSlider_Event_Callback qslider_event_callback = nullptr;
    QSlider_PaintEvent_Callback qslider_paintevent_callback = nullptr;
    QSlider_MousePressEvent_Callback qslider_mousepressevent_callback = nullptr;
    QSlider_MouseReleaseEvent_Callback qslider_mousereleaseevent_callback = nullptr;
    QSlider_MouseMoveEvent_Callback qslider_mousemoveevent_callback = nullptr;
    QSlider_InitStyleOption_Callback qslider_initstyleoption_callback = nullptr;
    QSlider_SliderChange_Callback qslider_sliderchange_callback = nullptr;
    QSlider_KeyPressEvent_Callback qslider_keypressevent_callback = nullptr;
    QSlider_TimerEvent_Callback qslider_timerevent_callback = nullptr;
    QSlider_WheelEvent_Callback qslider_wheelevent_callback = nullptr;
    QSlider_ChangeEvent_Callback qslider_changeevent_callback = nullptr;
    QSlider_DevType_Callback qslider_devtype_callback = nullptr;
    QSlider_SetVisible_Callback qslider_setvisible_callback = nullptr;
    QSlider_HeightForWidth_Callback qslider_heightforwidth_callback = nullptr;
    QSlider_HasHeightForWidth_Callback qslider_hasheightforwidth_callback = nullptr;
    QSlider_PaintEngine_Callback qslider_paintengine_callback = nullptr;
    QSlider_MouseDoubleClickEvent_Callback qslider_mousedoubleclickevent_callback = nullptr;
    QSlider_KeyReleaseEvent_Callback qslider_keyreleaseevent_callback = nullptr;
    QSlider_FocusInEvent_Callback qslider_focusinevent_callback = nullptr;
    QSlider_FocusOutEvent_Callback qslider_focusoutevent_callback = nullptr;
    QSlider_EnterEvent_Callback qslider_enterevent_callback = nullptr;
    QSlider_LeaveEvent_Callback qslider_leaveevent_callback = nullptr;
    QSlider_MoveEvent_Callback qslider_moveevent_callback = nullptr;
    QSlider_ResizeEvent_Callback qslider_resizeevent_callback = nullptr;
    QSlider_CloseEvent_Callback qslider_closeevent_callback = nullptr;
    QSlider_ContextMenuEvent_Callback qslider_contextmenuevent_callback = nullptr;
    QSlider_TabletEvent_Callback qslider_tabletevent_callback = nullptr;
    QSlider_ActionEvent_Callback qslider_actionevent_callback = nullptr;
    QSlider_DragEnterEvent_Callback qslider_dragenterevent_callback = nullptr;
    QSlider_DragMoveEvent_Callback qslider_dragmoveevent_callback = nullptr;
    QSlider_DragLeaveEvent_Callback qslider_dragleaveevent_callback = nullptr;
    QSlider_DropEvent_Callback qslider_dropevent_callback = nullptr;
    QSlider_ShowEvent_Callback qslider_showevent_callback = nullptr;
    QSlider_HideEvent_Callback qslider_hideevent_callback = nullptr;
    QSlider_NativeEvent_Callback qslider_nativeevent_callback = nullptr;
    QSlider_Metric_Callback qslider_metric_callback = nullptr;
    QSlider_InitPainter_Callback qslider_initpainter_callback = nullptr;
    QSlider_Redirected_Callback qslider_redirected_callback = nullptr;
    QSlider_SharedPainter_Callback qslider_sharedpainter_callback = nullptr;
    QSlider_InputMethodEvent_Callback qslider_inputmethodevent_callback = nullptr;
    QSlider_InputMethodQuery_Callback qslider_inputmethodquery_callback = nullptr;
    QSlider_FocusNextPrevChild_Callback qslider_focusnextprevchild_callback = nullptr;
    QSlider_EventFilter_Callback qslider_eventfilter_callback = nullptr;
    QSlider_ChildEvent_Callback qslider_childevent_callback = nullptr;
    QSlider_CustomEvent_Callback qslider_customevent_callback = nullptr;
    QSlider_ConnectNotify_Callback qslider_connectnotify_callback = nullptr;
    QSlider_DisconnectNotify_Callback qslider_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSlider {
        using QSlider::actionEvent;
        using QSlider::changeEvent;
        using QSlider::childEvent;
        using QSlider::closeEvent;
        using QSlider::connectNotify;
        using QSlider::contextMenuEvent;
        using QSlider::customEvent;
        using QSlider::disconnectNotify;
        using QSlider::dragEnterEvent;
        using QSlider::dragLeaveEvent;
        using QSlider::dragMoveEvent;
        using QSlider::dropEvent;
        using QSlider::enterEvent;
        using QSlider::focusInEvent;
        using QSlider::focusNextPrevChild;
        using QSlider::focusOutEvent;
        using QSlider::hideEvent;
        using QSlider::initPainter;
        using QSlider::initStyleOption;
        using QSlider::inputMethodEvent;
        using QSlider::keyPressEvent;
        using QSlider::keyReleaseEvent;
        using QSlider::leaveEvent;
        using QSlider::metric;
        using QSlider::mouseDoubleClickEvent;
        using QSlider::mouseMoveEvent;
        using QSlider::mousePressEvent;
        using QSlider::mouseReleaseEvent;
        using QSlider::moveEvent;
        using QSlider::nativeEvent;
        using QSlider::paintEvent;
        using QSlider::redirected;
        using QSlider::resizeEvent;
        using QSlider::sharedPainter;
        using QSlider::showEvent;
        using QSlider::sliderChange;
        using QSlider::tabletEvent;
        using QSlider::timerEvent;
        using QSlider::wheelEvent;
    };

    VirtualQSlider(QWidget* parent) : QSlider(parent) {};
    VirtualQSlider() : QSlider() {};
    VirtualQSlider(Qt::Orientation orientation) : QSlider(orientation) {};
    VirtualQSlider(Qt::Orientation orientation, QWidget* parent) : QSlider(orientation, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qslider_metaobject_callback) {
            QMetaObject* callback_ret = qslider_metaobject_callback(this);
            return callback_ret;
        }
        return QSlider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qslider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qslider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSlider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qslider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qslider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSlider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qslider_sizehint_callback) {
            QSize* callback_ret = qslider_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSlider::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qslider_minimumsizehint_callback) {
            QSize* callback_ret = qslider_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSlider::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qslider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qslider_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSlider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* ev) override {
        if (qslider_paintevent_callback) {
            QPaintEvent* cbval1 = ev;
            qslider_paintevent_callback(this, cbval1);
            return;
        }
        QSlider::paintEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qslider_mousepressevent_callback) {
            QMouseEvent* cbval1 = ev;
            qslider_mousepressevent_callback(this, cbval1);
            return;
        }
        QSlider::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qslider_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = ev;
            qslider_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QSlider::mouseReleaseEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qslider_mousemoveevent_callback) {
            QMouseEvent* cbval1 = ev;
            qslider_mousemoveevent_callback(this, cbval1);
            return;
        }
        QSlider::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSlider* option) const override {
        if (qslider_initstyleoption_callback) {
            QStyleOptionSlider* cbval1 = option;
            qslider_initstyleoption_callback(this, cbval1);
            return;
        }
        QSlider::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qslider_sliderchange_callback) {
            int cbval1 = static_cast<int>(change);
            qslider_sliderchange_callback(this, cbval1);
            return;
        }
        QSlider::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qslider_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            qslider_keypressevent_callback(this, cbval1);
            return;
        }
        QSlider::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qslider_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qslider_timerevent_callback(this, cbval1);
            return;
        }
        QSlider::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qslider_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qslider_wheelevent_callback(this, cbval1);
            return;
        }
        QSlider::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qslider_changeevent_callback) {
            QEvent* cbval1 = e;
            qslider_changeevent_callback(this, cbval1);
            return;
        }
        QSlider::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qslider_devtype_callback) {
            int callback_ret = qslider_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSlider::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qslider_setvisible_callback) {
            bool cbval1 = visible;
            qslider_setvisible_callback(this, cbval1);
            return;
        }
        QSlider::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qslider_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qslider_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSlider::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qslider_hasheightforwidth_callback) {
            bool callback_ret = qslider_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSlider::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qslider_paintengine_callback) {
            QPaintEngine* callback_ret = qslider_paintengine_callback(this);
            return callback_ret;
        }
        return QSlider::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qslider_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qslider_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QSlider::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qslider_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qslider_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QSlider::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qslider_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qslider_focusinevent_callback(this, cbval1);
            return;
        }
        QSlider::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qslider_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qslider_focusoutevent_callback(this, cbval1);
            return;
        }
        QSlider::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qslider_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qslider_enterevent_callback(this, cbval1);
            return;
        }
        QSlider::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qslider_leaveevent_callback) {
            QEvent* cbval1 = event;
            qslider_leaveevent_callback(this, cbval1);
            return;
        }
        QSlider::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qslider_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qslider_moveevent_callback(this, cbval1);
            return;
        }
        QSlider::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qslider_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qslider_resizeevent_callback(this, cbval1);
            return;
        }
        QSlider::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qslider_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qslider_closeevent_callback(this, cbval1);
            return;
        }
        QSlider::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qslider_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qslider_contextmenuevent_callback(this, cbval1);
            return;
        }
        QSlider::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qslider_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qslider_tabletevent_callback(this, cbval1);
            return;
        }
        QSlider::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qslider_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qslider_actionevent_callback(this, cbval1);
            return;
        }
        QSlider::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qslider_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qslider_dragenterevent_callback(this, cbval1);
            return;
        }
        QSlider::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qslider_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qslider_dragmoveevent_callback(this, cbval1);
            return;
        }
        QSlider::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qslider_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qslider_dragleaveevent_callback(this, cbval1);
            return;
        }
        QSlider::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qslider_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qslider_dropevent_callback(this, cbval1);
            return;
        }
        QSlider::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qslider_showevent_callback) {
            QShowEvent* cbval1 = event;
            qslider_showevent_callback(this, cbval1);
            return;
        }
        QSlider::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qslider_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qslider_hideevent_callback(this, cbval1);
            return;
        }
        QSlider::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qslider_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qslider_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QSlider::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qslider_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qslider_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSlider::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qslider_initpainter_callback) {
            QPainter* cbval1 = painter;
            qslider_initpainter_callback(this, cbval1);
            return;
        }
        QSlider::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qslider_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qslider_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSlider::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qslider_sharedpainter_callback) {
            QPainter* callback_ret = qslider_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSlider::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qslider_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qslider_inputmethodevent_callback(this, cbval1);
            return;
        }
        QSlider::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qslider_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qslider_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSlider::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qslider_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qslider_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QSlider::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qslider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qslider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSlider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qslider_childevent_callback) {
            QChildEvent* cbval1 = event;
            qslider_childevent_callback(this, cbval1);
            return;
        }
        QSlider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qslider_customevent_callback) {
            QEvent* cbval1 = event;
            qslider_customevent_callback(this, cbval1);
            return;
        }
        QSlider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qslider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qslider_connectnotify_callback(this, cbval1);
            return;
        }
        QSlider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qslider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qslider_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSlider::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSlider_SuperPaintEvent(QSlider* self, QPaintEvent* ev);
    friend void QSlider_SuperMousePressEvent(QSlider* self, QMouseEvent* ev);
    friend void QSlider_SuperMouseReleaseEvent(QSlider* self, QMouseEvent* ev);
    friend void QSlider_SuperMouseMoveEvent(QSlider* self, QMouseEvent* ev);
    friend void QSlider_SuperInitStyleOption(const QSlider* self, QStyleOptionSlider* option);
    friend void QSlider_SuperSliderChange(QSlider* self, int change);
    friend void QSlider_SuperKeyPressEvent(QSlider* self, QKeyEvent* ev);
    friend void QSlider_SuperTimerEvent(QSlider* self, QTimerEvent* param1);
    friend void QSlider_SuperWheelEvent(QSlider* self, QWheelEvent* e);
    friend void QSlider_SuperChangeEvent(QSlider* self, QEvent* e);
    friend void QSlider_SuperMouseDoubleClickEvent(QSlider* self, QMouseEvent* event);
    friend void QSlider_SuperKeyReleaseEvent(QSlider* self, QKeyEvent* event);
    friend void QSlider_SuperFocusInEvent(QSlider* self, QFocusEvent* event);
    friend void QSlider_SuperFocusOutEvent(QSlider* self, QFocusEvent* event);
    friend void QSlider_SuperEnterEvent(QSlider* self, QEnterEvent* event);
    friend void QSlider_SuperLeaveEvent(QSlider* self, QEvent* event);
    friend void QSlider_SuperMoveEvent(QSlider* self, QMoveEvent* event);
    friend void QSlider_SuperResizeEvent(QSlider* self, QResizeEvent* event);
    friend void QSlider_SuperCloseEvent(QSlider* self, QCloseEvent* event);
    friend void QSlider_SuperContextMenuEvent(QSlider* self, QContextMenuEvent* event);
    friend void QSlider_SuperTabletEvent(QSlider* self, QTabletEvent* event);
    friend void QSlider_SuperActionEvent(QSlider* self, QActionEvent* event);
    friend void QSlider_SuperDragEnterEvent(QSlider* self, QDragEnterEvent* event);
    friend void QSlider_SuperDragMoveEvent(QSlider* self, QDragMoveEvent* event);
    friend void QSlider_SuperDragLeaveEvent(QSlider* self, QDragLeaveEvent* event);
    friend void QSlider_SuperDropEvent(QSlider* self, QDropEvent* event);
    friend void QSlider_SuperShowEvent(QSlider* self, QShowEvent* event);
    friend void QSlider_SuperHideEvent(QSlider* self, QHideEvent* event);
    friend bool QSlider_SuperNativeEvent(QSlider* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QSlider_SuperMetric(const QSlider* self, int param1);
    friend void QSlider_SuperInitPainter(const QSlider* self, QPainter* painter);
    friend QPaintDevice* QSlider_SuperRedirected(const QSlider* self, QPoint* offset);
    friend QPainter* QSlider_SuperSharedPainter(const QSlider* self);
    friend void QSlider_SuperInputMethodEvent(QSlider* self, QInputMethodEvent* param1);
    friend bool QSlider_SuperFocusNextPrevChild(QSlider* self, bool next);
    friend void QSlider_SuperChildEvent(QSlider* self, QChildEvent* event);
    friend void QSlider_SuperCustomEvent(QSlider* self, QEvent* event);
    friend void QSlider_SuperConnectNotify(QSlider* self, const QMetaMethod* signal);
    friend void QSlider_SuperDisconnectNotify(QSlider* self, const QMetaMethod* signal);
};

#endif
