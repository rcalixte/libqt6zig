#pragma once
#ifndef LIBQABSTRACTSLIDER_HXX
#define LIBQABSTRACTSLIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractSlider
class VirtualQAbstractSlider final : public QAbstractSlider {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSlider::SliderChange;
    using QAbstractSlider_MetaObject_Callback = QMetaObject* (*)(const QAbstractSlider*);
    using QAbstractSlider_Metacast_Callback = void* (*)(QAbstractSlider*, const char*);
    using QAbstractSlider_Metacall_Callback = int (*)(QAbstractSlider*, int, int, void**);
    using QAbstractSlider_Event_Callback = bool (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_SliderChange_Callback = void (*)(QAbstractSlider*, int);
    using QAbstractSlider_KeyPressEvent_Callback = void (*)(QAbstractSlider*, QKeyEvent*);
    using QAbstractSlider_TimerEvent_Callback = void (*)(QAbstractSlider*, QTimerEvent*);
    using QAbstractSlider_WheelEvent_Callback = void (*)(QAbstractSlider*, QWheelEvent*);
    using QAbstractSlider_ChangeEvent_Callback = void (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_DevType_Callback = int (*)(const QAbstractSlider*);
    using QAbstractSlider_SetVisible_Callback = void (*)(QAbstractSlider*, bool);
    using QAbstractSlider_SizeHint_Callback = QSize* (*)(const QAbstractSlider*);
    using QAbstractSlider_MinimumSizeHint_Callback = QSize* (*)(const QAbstractSlider*);
    using QAbstractSlider_HeightForWidth_Callback = int (*)(const QAbstractSlider*, int);
    using QAbstractSlider_HasHeightForWidth_Callback = bool (*)(const QAbstractSlider*);
    using QAbstractSlider_PaintEngine_Callback = QPaintEngine* (*)(const QAbstractSlider*);
    using QAbstractSlider_MousePressEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_MouseReleaseEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_MouseDoubleClickEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_MouseMoveEvent_Callback = void (*)(QAbstractSlider*, QMouseEvent*);
    using QAbstractSlider_KeyReleaseEvent_Callback = void (*)(QAbstractSlider*, QKeyEvent*);
    using QAbstractSlider_FocusInEvent_Callback = void (*)(QAbstractSlider*, QFocusEvent*);
    using QAbstractSlider_FocusOutEvent_Callback = void (*)(QAbstractSlider*, QFocusEvent*);
    using QAbstractSlider_EnterEvent_Callback = void (*)(QAbstractSlider*, QEnterEvent*);
    using QAbstractSlider_LeaveEvent_Callback = void (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_PaintEvent_Callback = void (*)(QAbstractSlider*, QPaintEvent*);
    using QAbstractSlider_MoveEvent_Callback = void (*)(QAbstractSlider*, QMoveEvent*);
    using QAbstractSlider_ResizeEvent_Callback = void (*)(QAbstractSlider*, QResizeEvent*);
    using QAbstractSlider_CloseEvent_Callback = void (*)(QAbstractSlider*, QCloseEvent*);
    using QAbstractSlider_ContextMenuEvent_Callback = void (*)(QAbstractSlider*, QContextMenuEvent*);
    using QAbstractSlider_TabletEvent_Callback = void (*)(QAbstractSlider*, QTabletEvent*);
    using QAbstractSlider_ActionEvent_Callback = void (*)(QAbstractSlider*, QActionEvent*);
    using QAbstractSlider_DragEnterEvent_Callback = void (*)(QAbstractSlider*, QDragEnterEvent*);
    using QAbstractSlider_DragMoveEvent_Callback = void (*)(QAbstractSlider*, QDragMoveEvent*);
    using QAbstractSlider_DragLeaveEvent_Callback = void (*)(QAbstractSlider*, QDragLeaveEvent*);
    using QAbstractSlider_DropEvent_Callback = void (*)(QAbstractSlider*, QDropEvent*);
    using QAbstractSlider_ShowEvent_Callback = void (*)(QAbstractSlider*, QShowEvent*);
    using QAbstractSlider_HideEvent_Callback = void (*)(QAbstractSlider*, QHideEvent*);
    using QAbstractSlider_NativeEvent_Callback = bool (*)(QAbstractSlider*, libqt_string, void*, intptr_t*);
    using QAbstractSlider_Metric_Callback = int (*)(const QAbstractSlider*, int);
    using QAbstractSlider_InitPainter_Callback = void (*)(const QAbstractSlider*, QPainter*);
    using QAbstractSlider_Redirected_Callback = QPaintDevice* (*)(const QAbstractSlider*, QPoint*);
    using QAbstractSlider_SharedPainter_Callback = QPainter* (*)(const QAbstractSlider*);
    using QAbstractSlider_InputMethodEvent_Callback = void (*)(QAbstractSlider*, QInputMethodEvent*);
    using QAbstractSlider_InputMethodQuery_Callback = QVariant* (*)(const QAbstractSlider*, int);
    using QAbstractSlider_FocusNextPrevChild_Callback = bool (*)(QAbstractSlider*, bool);
    using QAbstractSlider_EventFilter_Callback = bool (*)(QAbstractSlider*, QObject*, QEvent*);
    using QAbstractSlider_ChildEvent_Callback = void (*)(QAbstractSlider*, QChildEvent*);
    using QAbstractSlider_CustomEvent_Callback = void (*)(QAbstractSlider*, QEvent*);
    using QAbstractSlider_ConnectNotify_Callback = void (*)(QAbstractSlider*, QMetaMethod*);
    using QAbstractSlider_DisconnectNotify_Callback = void (*)(QAbstractSlider*, QMetaMethod*);
    using QAbstractSlider::create;
    using QAbstractSlider::destroy;
    using QAbstractSlider::focusNextChild;
    using QAbstractSlider::focusPreviousChild;
    using QAbstractSlider::getDecodedMetricF;
    using QAbstractSlider::isSignalConnected;
    using QAbstractSlider::receivers;
    using QAbstractSlider::repeatAction;
    using QAbstractSlider::sender;
    using QAbstractSlider::senderSignalIndex;
    using QAbstractSlider::setRepeatAction;
    using QAbstractSlider::updateMicroFocus;

    // Instance callback storage
    QAbstractSlider_MetaObject_Callback qabstractslider_metaobject_callback = nullptr;
    QAbstractSlider_Metacast_Callback qabstractslider_metacast_callback = nullptr;
    QAbstractSlider_Metacall_Callback qabstractslider_metacall_callback = nullptr;
    QAbstractSlider_Event_Callback qabstractslider_event_callback = nullptr;
    QAbstractSlider_SliderChange_Callback qabstractslider_sliderchange_callback = nullptr;
    QAbstractSlider_KeyPressEvent_Callback qabstractslider_keypressevent_callback = nullptr;
    QAbstractSlider_TimerEvent_Callback qabstractslider_timerevent_callback = nullptr;
    QAbstractSlider_WheelEvent_Callback qabstractslider_wheelevent_callback = nullptr;
    QAbstractSlider_ChangeEvent_Callback qabstractslider_changeevent_callback = nullptr;
    QAbstractSlider_DevType_Callback qabstractslider_devtype_callback = nullptr;
    QAbstractSlider_SetVisible_Callback qabstractslider_setvisible_callback = nullptr;
    QAbstractSlider_SizeHint_Callback qabstractslider_sizehint_callback = nullptr;
    QAbstractSlider_MinimumSizeHint_Callback qabstractslider_minimumsizehint_callback = nullptr;
    QAbstractSlider_HeightForWidth_Callback qabstractslider_heightforwidth_callback = nullptr;
    QAbstractSlider_HasHeightForWidth_Callback qabstractslider_hasheightforwidth_callback = nullptr;
    QAbstractSlider_PaintEngine_Callback qabstractslider_paintengine_callback = nullptr;
    QAbstractSlider_MousePressEvent_Callback qabstractslider_mousepressevent_callback = nullptr;
    QAbstractSlider_MouseReleaseEvent_Callback qabstractslider_mousereleaseevent_callback = nullptr;
    QAbstractSlider_MouseDoubleClickEvent_Callback qabstractslider_mousedoubleclickevent_callback = nullptr;
    QAbstractSlider_MouseMoveEvent_Callback qabstractslider_mousemoveevent_callback = nullptr;
    QAbstractSlider_KeyReleaseEvent_Callback qabstractslider_keyreleaseevent_callback = nullptr;
    QAbstractSlider_FocusInEvent_Callback qabstractslider_focusinevent_callback = nullptr;
    QAbstractSlider_FocusOutEvent_Callback qabstractslider_focusoutevent_callback = nullptr;
    QAbstractSlider_EnterEvent_Callback qabstractslider_enterevent_callback = nullptr;
    QAbstractSlider_LeaveEvent_Callback qabstractslider_leaveevent_callback = nullptr;
    QAbstractSlider_PaintEvent_Callback qabstractslider_paintevent_callback = nullptr;
    QAbstractSlider_MoveEvent_Callback qabstractslider_moveevent_callback = nullptr;
    QAbstractSlider_ResizeEvent_Callback qabstractslider_resizeevent_callback = nullptr;
    QAbstractSlider_CloseEvent_Callback qabstractslider_closeevent_callback = nullptr;
    QAbstractSlider_ContextMenuEvent_Callback qabstractslider_contextmenuevent_callback = nullptr;
    QAbstractSlider_TabletEvent_Callback qabstractslider_tabletevent_callback = nullptr;
    QAbstractSlider_ActionEvent_Callback qabstractslider_actionevent_callback = nullptr;
    QAbstractSlider_DragEnterEvent_Callback qabstractslider_dragenterevent_callback = nullptr;
    QAbstractSlider_DragMoveEvent_Callback qabstractslider_dragmoveevent_callback = nullptr;
    QAbstractSlider_DragLeaveEvent_Callback qabstractslider_dragleaveevent_callback = nullptr;
    QAbstractSlider_DropEvent_Callback qabstractslider_dropevent_callback = nullptr;
    QAbstractSlider_ShowEvent_Callback qabstractslider_showevent_callback = nullptr;
    QAbstractSlider_HideEvent_Callback qabstractslider_hideevent_callback = nullptr;
    QAbstractSlider_NativeEvent_Callback qabstractslider_nativeevent_callback = nullptr;
    QAbstractSlider_Metric_Callback qabstractslider_metric_callback = nullptr;
    QAbstractSlider_InitPainter_Callback qabstractslider_initpainter_callback = nullptr;
    QAbstractSlider_Redirected_Callback qabstractslider_redirected_callback = nullptr;
    QAbstractSlider_SharedPainter_Callback qabstractslider_sharedpainter_callback = nullptr;
    QAbstractSlider_InputMethodEvent_Callback qabstractslider_inputmethodevent_callback = nullptr;
    QAbstractSlider_InputMethodQuery_Callback qabstractslider_inputmethodquery_callback = nullptr;
    QAbstractSlider_FocusNextPrevChild_Callback qabstractslider_focusnextprevchild_callback = nullptr;
    QAbstractSlider_EventFilter_Callback qabstractslider_eventfilter_callback = nullptr;
    QAbstractSlider_ChildEvent_Callback qabstractslider_childevent_callback = nullptr;
    QAbstractSlider_CustomEvent_Callback qabstractslider_customevent_callback = nullptr;
    QAbstractSlider_ConnectNotify_Callback qabstractslider_connectnotify_callback = nullptr;
    QAbstractSlider_DisconnectNotify_Callback qabstractslider_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractSlider {
        using QAbstractSlider::actionEvent;
        using QAbstractSlider::changeEvent;
        using QAbstractSlider::childEvent;
        using QAbstractSlider::closeEvent;
        using QAbstractSlider::connectNotify;
        using QAbstractSlider::contextMenuEvent;
        using QAbstractSlider::customEvent;
        using QAbstractSlider::disconnectNotify;
        using QAbstractSlider::dragEnterEvent;
        using QAbstractSlider::dragLeaveEvent;
        using QAbstractSlider::dragMoveEvent;
        using QAbstractSlider::dropEvent;
        using QAbstractSlider::enterEvent;
        using QAbstractSlider::event;
        using QAbstractSlider::focusInEvent;
        using QAbstractSlider::focusNextPrevChild;
        using QAbstractSlider::focusOutEvent;
        using QAbstractSlider::hideEvent;
        using QAbstractSlider::initPainter;
        using QAbstractSlider::inputMethodEvent;
        using QAbstractSlider::keyPressEvent;
        using QAbstractSlider::keyReleaseEvent;
        using QAbstractSlider::leaveEvent;
        using QAbstractSlider::metric;
        using QAbstractSlider::mouseDoubleClickEvent;
        using QAbstractSlider::mouseMoveEvent;
        using QAbstractSlider::mousePressEvent;
        using QAbstractSlider::mouseReleaseEvent;
        using QAbstractSlider::moveEvent;
        using QAbstractSlider::nativeEvent;
        using QAbstractSlider::paintEvent;
        using QAbstractSlider::redirected;
        using QAbstractSlider::resizeEvent;
        using QAbstractSlider::sharedPainter;
        using QAbstractSlider::showEvent;
        using QAbstractSlider::sliderChange;
        using QAbstractSlider::tabletEvent;
        using QAbstractSlider::timerEvent;
        using QAbstractSlider::wheelEvent;
    };

    VirtualQAbstractSlider(QWidget* parent) : QAbstractSlider(parent) {};
    VirtualQAbstractSlider() : QAbstractSlider() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractslider_metaobject_callback) {
            QMetaObject* callback_ret = qabstractslider_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractSlider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractslider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractslider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSlider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractslider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractslider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSlider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qabstractslider_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qabstractslider_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSlider::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qabstractslider_sliderchange_callback) {
            int cbval1 = static_cast<int>(change);
            qabstractslider_sliderchange_callback(this, cbval1);
            return;
        }
        QAbstractSlider::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qabstractslider_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            qabstractslider_keypressevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qabstractslider_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qabstractslider_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qabstractslider_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qabstractslider_wheelevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qabstractslider_changeevent_callback) {
            QEvent* cbval1 = e;
            qabstractslider_changeevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractslider_devtype_callback) {
            int callback_ret = qabstractslider_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSlider::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractslider_setvisible_callback) {
            bool cbval1 = visible;
            qabstractslider_setvisible_callback(this, cbval1);
            return;
        }
        QAbstractSlider::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractslider_sizehint_callback) {
            QSize* callback_ret = qabstractslider_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractSlider::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractslider_minimumsizehint_callback) {
            QSize* callback_ret = qabstractslider_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractSlider::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractslider_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qabstractslider_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSlider::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractslider_hasheightforwidth_callback) {
            bool callback_ret = qabstractslider_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QAbstractSlider::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractslider_paintengine_callback) {
            QPaintEngine* callback_ret = qabstractslider_paintengine_callback(this);
            return callback_ret;
        }
        return QAbstractSlider::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractslider_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractslider_mousepressevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractslider_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractslider_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractslider_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractslider_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractslider_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractslider_mousemoveevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractslider_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qabstractslider_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractslider_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractslider_focusinevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractslider_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qabstractslider_focusoutevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractslider_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qabstractslider_enterevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractslider_leaveevent_callback) {
            QEvent* cbval1 = event;
            qabstractslider_leaveevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractslider_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qabstractslider_paintevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractslider_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qabstractslider_moveevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractslider_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qabstractslider_resizeevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractslider_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qabstractslider_closeevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qabstractslider_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qabstractslider_contextmenuevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractslider_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qabstractslider_tabletevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractslider_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qabstractslider_actionevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractslider_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qabstractslider_dragenterevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractslider_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qabstractslider_dragmoveevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractslider_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qabstractslider_dragleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractslider_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qabstractslider_dropevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractslider_showevent_callback) {
            QShowEvent* cbval1 = event;
            qabstractslider_showevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractslider_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qabstractslider_hideevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractslider_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qabstractslider_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QAbstractSlider::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractslider_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qabstractslider_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSlider::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractslider_initpainter_callback) {
            QPainter* cbval1 = painter;
            qabstractslider_initpainter_callback(this, cbval1);
            return;
        }
        QAbstractSlider::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractslider_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qabstractslider_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSlider::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractslider_sharedpainter_callback) {
            QPainter* callback_ret = qabstractslider_sharedpainter_callback(this);
            return callback_ret;
        }
        return QAbstractSlider::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractslider_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qabstractslider_inputmethodevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractslider_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qabstractslider_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractSlider::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractslider_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qabstractslider_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSlider::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractslider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractslider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractSlider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractslider_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractslider_childevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractslider_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractslider_customevent_callback(this, cbval1);
            return;
        }
        QAbstractSlider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractslider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractslider_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractSlider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractslider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractslider_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractSlider::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QAbstractSlider_SuperEvent(QAbstractSlider* self, QEvent* e);
    friend void QAbstractSlider_SuperSliderChange(QAbstractSlider* self, int change);
    friend void QAbstractSlider_SuperKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
    friend void QAbstractSlider_SuperTimerEvent(QAbstractSlider* self, QTimerEvent* param1);
    friend void QAbstractSlider_SuperWheelEvent(QAbstractSlider* self, QWheelEvent* e);
    friend void QAbstractSlider_SuperChangeEvent(QAbstractSlider* self, QEvent* e);
    friend void QAbstractSlider_SuperMousePressEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_SuperMouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_SuperMouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_SuperMouseMoveEvent(QAbstractSlider* self, QMouseEvent* event);
    friend void QAbstractSlider_SuperKeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event);
    friend void QAbstractSlider_SuperFocusInEvent(QAbstractSlider* self, QFocusEvent* event);
    friend void QAbstractSlider_SuperFocusOutEvent(QAbstractSlider* self, QFocusEvent* event);
    friend void QAbstractSlider_SuperEnterEvent(QAbstractSlider* self, QEnterEvent* event);
    friend void QAbstractSlider_SuperLeaveEvent(QAbstractSlider* self, QEvent* event);
    friend void QAbstractSlider_SuperPaintEvent(QAbstractSlider* self, QPaintEvent* event);
    friend void QAbstractSlider_SuperMoveEvent(QAbstractSlider* self, QMoveEvent* event);
    friend void QAbstractSlider_SuperResizeEvent(QAbstractSlider* self, QResizeEvent* event);
    friend void QAbstractSlider_SuperCloseEvent(QAbstractSlider* self, QCloseEvent* event);
    friend void QAbstractSlider_SuperContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event);
    friend void QAbstractSlider_SuperTabletEvent(QAbstractSlider* self, QTabletEvent* event);
    friend void QAbstractSlider_SuperActionEvent(QAbstractSlider* self, QActionEvent* event);
    friend void QAbstractSlider_SuperDragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event);
    friend void QAbstractSlider_SuperDragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event);
    friend void QAbstractSlider_SuperDragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event);
    friend void QAbstractSlider_SuperDropEvent(QAbstractSlider* self, QDropEvent* event);
    friend void QAbstractSlider_SuperShowEvent(QAbstractSlider* self, QShowEvent* event);
    friend void QAbstractSlider_SuperHideEvent(QAbstractSlider* self, QHideEvent* event);
    friend bool QAbstractSlider_SuperNativeEvent(QAbstractSlider* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractSlider_SuperMetric(const QAbstractSlider* self, int param1);
    friend void QAbstractSlider_SuperInitPainter(const QAbstractSlider* self, QPainter* painter);
    friend QPaintDevice* QAbstractSlider_SuperRedirected(const QAbstractSlider* self, QPoint* offset);
    friend QPainter* QAbstractSlider_SuperSharedPainter(const QAbstractSlider* self);
    friend void QAbstractSlider_SuperInputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1);
    friend bool QAbstractSlider_SuperFocusNextPrevChild(QAbstractSlider* self, bool next);
    friend void QAbstractSlider_SuperChildEvent(QAbstractSlider* self, QChildEvent* event);
    friend void QAbstractSlider_SuperCustomEvent(QAbstractSlider* self, QEvent* event);
    friend void QAbstractSlider_SuperConnectNotify(QAbstractSlider* self, const QMetaMethod* signal);
    friend void QAbstractSlider_SuperDisconnectNotify(QAbstractSlider* self, const QMetaMethod* signal);
};

#endif
