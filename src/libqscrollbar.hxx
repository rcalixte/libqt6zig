#pragma once
#ifndef LIBQSCROLLBAR_HXX
#define LIBQSCROLLBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QScrollBar
class VirtualQScrollBar final : public QScrollBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSlider::SliderChange;
    using QScrollBar_MetaObject_Callback = QMetaObject* (*)(const QScrollBar*);
    using QScrollBar_Metacast_Callback = void* (*)(QScrollBar*, const char*);
    using QScrollBar_Metacall_Callback = int (*)(QScrollBar*, int, int, void**);
    using QScrollBar_SizeHint_Callback = QSize* (*)(const QScrollBar*);
    using QScrollBar_Event_Callback = bool (*)(QScrollBar*, QEvent*);
    using QScrollBar_WheelEvent_Callback = void (*)(QScrollBar*, QWheelEvent*);
    using QScrollBar_PaintEvent_Callback = void (*)(QScrollBar*, QPaintEvent*);
    using QScrollBar_MousePressEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_MouseReleaseEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_MouseMoveEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_HideEvent_Callback = void (*)(QScrollBar*, QHideEvent*);
    using QScrollBar_SliderChange_Callback = void (*)(QScrollBar*, int);
    using QScrollBar_ContextMenuEvent_Callback = void (*)(QScrollBar*, QContextMenuEvent*);
    using QScrollBar_InitStyleOption_Callback = void (*)(const QScrollBar*, QStyleOptionSlider*);
    using QScrollBar_KeyPressEvent_Callback = void (*)(QScrollBar*, QKeyEvent*);
    using QScrollBar_TimerEvent_Callback = void (*)(QScrollBar*, QTimerEvent*);
    using QScrollBar_ChangeEvent_Callback = void (*)(QScrollBar*, QEvent*);
    using QScrollBar_DevType_Callback = int (*)(const QScrollBar*);
    using QScrollBar_SetVisible_Callback = void (*)(QScrollBar*, bool);
    using QScrollBar_MinimumSizeHint_Callback = QSize* (*)(const QScrollBar*);
    using QScrollBar_HeightForWidth_Callback = int (*)(const QScrollBar*, int);
    using QScrollBar_HasHeightForWidth_Callback = bool (*)(const QScrollBar*);
    using QScrollBar_PaintEngine_Callback = QPaintEngine* (*)(const QScrollBar*);
    using QScrollBar_MouseDoubleClickEvent_Callback = void (*)(QScrollBar*, QMouseEvent*);
    using QScrollBar_KeyReleaseEvent_Callback = void (*)(QScrollBar*, QKeyEvent*);
    using QScrollBar_FocusInEvent_Callback = void (*)(QScrollBar*, QFocusEvent*);
    using QScrollBar_FocusOutEvent_Callback = void (*)(QScrollBar*, QFocusEvent*);
    using QScrollBar_EnterEvent_Callback = void (*)(QScrollBar*, QEnterEvent*);
    using QScrollBar_LeaveEvent_Callback = void (*)(QScrollBar*, QEvent*);
    using QScrollBar_MoveEvent_Callback = void (*)(QScrollBar*, QMoveEvent*);
    using QScrollBar_ResizeEvent_Callback = void (*)(QScrollBar*, QResizeEvent*);
    using QScrollBar_CloseEvent_Callback = void (*)(QScrollBar*, QCloseEvent*);
    using QScrollBar_TabletEvent_Callback = void (*)(QScrollBar*, QTabletEvent*);
    using QScrollBar_ActionEvent_Callback = void (*)(QScrollBar*, QActionEvent*);
    using QScrollBar_DragEnterEvent_Callback = void (*)(QScrollBar*, QDragEnterEvent*);
    using QScrollBar_DragMoveEvent_Callback = void (*)(QScrollBar*, QDragMoveEvent*);
    using QScrollBar_DragLeaveEvent_Callback = void (*)(QScrollBar*, QDragLeaveEvent*);
    using QScrollBar_DropEvent_Callback = void (*)(QScrollBar*, QDropEvent*);
    using QScrollBar_ShowEvent_Callback = void (*)(QScrollBar*, QShowEvent*);
    using QScrollBar_NativeEvent_Callback = bool (*)(QScrollBar*, libqt_string, void*, intptr_t*);
    using QScrollBar_Metric_Callback = int (*)(const QScrollBar*, int);
    using QScrollBar_InitPainter_Callback = void (*)(const QScrollBar*, QPainter*);
    using QScrollBar_Redirected_Callback = QPaintDevice* (*)(const QScrollBar*, QPoint*);
    using QScrollBar_SharedPainter_Callback = QPainter* (*)(const QScrollBar*);
    using QScrollBar_InputMethodEvent_Callback = void (*)(QScrollBar*, QInputMethodEvent*);
    using QScrollBar_InputMethodQuery_Callback = QVariant* (*)(const QScrollBar*, int);
    using QScrollBar_FocusNextPrevChild_Callback = bool (*)(QScrollBar*, bool);
    using QScrollBar_EventFilter_Callback = bool (*)(QScrollBar*, QObject*, QEvent*);
    using QScrollBar_ChildEvent_Callback = void (*)(QScrollBar*, QChildEvent*);
    using QScrollBar_CustomEvent_Callback = void (*)(QScrollBar*, QEvent*);
    using QScrollBar_ConnectNotify_Callback = void (*)(QScrollBar*, QMetaMethod*);
    using QScrollBar_DisconnectNotify_Callback = void (*)(QScrollBar*, QMetaMethod*);
    using QScrollBar::create;
    using QScrollBar::destroy;
    using QScrollBar::focusNextChild;
    using QScrollBar::focusPreviousChild;
    using QScrollBar::getDecodedMetricF;
    using QScrollBar::isSignalConnected;
    using QScrollBar::receivers;
    using QScrollBar::repeatAction;
    using QScrollBar::sender;
    using QScrollBar::senderSignalIndex;
    using QScrollBar::setRepeatAction;
    using QScrollBar::updateMicroFocus;

    // Instance callback storage
    QScrollBar_MetaObject_Callback qscrollbar_metaobject_callback = nullptr;
    QScrollBar_Metacast_Callback qscrollbar_metacast_callback = nullptr;
    QScrollBar_Metacall_Callback qscrollbar_metacall_callback = nullptr;
    QScrollBar_SizeHint_Callback qscrollbar_sizehint_callback = nullptr;
    QScrollBar_Event_Callback qscrollbar_event_callback = nullptr;
    QScrollBar_WheelEvent_Callback qscrollbar_wheelevent_callback = nullptr;
    QScrollBar_PaintEvent_Callback qscrollbar_paintevent_callback = nullptr;
    QScrollBar_MousePressEvent_Callback qscrollbar_mousepressevent_callback = nullptr;
    QScrollBar_MouseReleaseEvent_Callback qscrollbar_mousereleaseevent_callback = nullptr;
    QScrollBar_MouseMoveEvent_Callback qscrollbar_mousemoveevent_callback = nullptr;
    QScrollBar_HideEvent_Callback qscrollbar_hideevent_callback = nullptr;
    QScrollBar_SliderChange_Callback qscrollbar_sliderchange_callback = nullptr;
    QScrollBar_ContextMenuEvent_Callback qscrollbar_contextmenuevent_callback = nullptr;
    QScrollBar_InitStyleOption_Callback qscrollbar_initstyleoption_callback = nullptr;
    QScrollBar_KeyPressEvent_Callback qscrollbar_keypressevent_callback = nullptr;
    QScrollBar_TimerEvent_Callback qscrollbar_timerevent_callback = nullptr;
    QScrollBar_ChangeEvent_Callback qscrollbar_changeevent_callback = nullptr;
    QScrollBar_DevType_Callback qscrollbar_devtype_callback = nullptr;
    QScrollBar_SetVisible_Callback qscrollbar_setvisible_callback = nullptr;
    QScrollBar_MinimumSizeHint_Callback qscrollbar_minimumsizehint_callback = nullptr;
    QScrollBar_HeightForWidth_Callback qscrollbar_heightforwidth_callback = nullptr;
    QScrollBar_HasHeightForWidth_Callback qscrollbar_hasheightforwidth_callback = nullptr;
    QScrollBar_PaintEngine_Callback qscrollbar_paintengine_callback = nullptr;
    QScrollBar_MouseDoubleClickEvent_Callback qscrollbar_mousedoubleclickevent_callback = nullptr;
    QScrollBar_KeyReleaseEvent_Callback qscrollbar_keyreleaseevent_callback = nullptr;
    QScrollBar_FocusInEvent_Callback qscrollbar_focusinevent_callback = nullptr;
    QScrollBar_FocusOutEvent_Callback qscrollbar_focusoutevent_callback = nullptr;
    QScrollBar_EnterEvent_Callback qscrollbar_enterevent_callback = nullptr;
    QScrollBar_LeaveEvent_Callback qscrollbar_leaveevent_callback = nullptr;
    QScrollBar_MoveEvent_Callback qscrollbar_moveevent_callback = nullptr;
    QScrollBar_ResizeEvent_Callback qscrollbar_resizeevent_callback = nullptr;
    QScrollBar_CloseEvent_Callback qscrollbar_closeevent_callback = nullptr;
    QScrollBar_TabletEvent_Callback qscrollbar_tabletevent_callback = nullptr;
    QScrollBar_ActionEvent_Callback qscrollbar_actionevent_callback = nullptr;
    QScrollBar_DragEnterEvent_Callback qscrollbar_dragenterevent_callback = nullptr;
    QScrollBar_DragMoveEvent_Callback qscrollbar_dragmoveevent_callback = nullptr;
    QScrollBar_DragLeaveEvent_Callback qscrollbar_dragleaveevent_callback = nullptr;
    QScrollBar_DropEvent_Callback qscrollbar_dropevent_callback = nullptr;
    QScrollBar_ShowEvent_Callback qscrollbar_showevent_callback = nullptr;
    QScrollBar_NativeEvent_Callback qscrollbar_nativeevent_callback = nullptr;
    QScrollBar_Metric_Callback qscrollbar_metric_callback = nullptr;
    QScrollBar_InitPainter_Callback qscrollbar_initpainter_callback = nullptr;
    QScrollBar_Redirected_Callback qscrollbar_redirected_callback = nullptr;
    QScrollBar_SharedPainter_Callback qscrollbar_sharedpainter_callback = nullptr;
    QScrollBar_InputMethodEvent_Callback qscrollbar_inputmethodevent_callback = nullptr;
    QScrollBar_InputMethodQuery_Callback qscrollbar_inputmethodquery_callback = nullptr;
    QScrollBar_FocusNextPrevChild_Callback qscrollbar_focusnextprevchild_callback = nullptr;
    QScrollBar_EventFilter_Callback qscrollbar_eventfilter_callback = nullptr;
    QScrollBar_ChildEvent_Callback qscrollbar_childevent_callback = nullptr;
    QScrollBar_CustomEvent_Callback qscrollbar_customevent_callback = nullptr;
    QScrollBar_ConnectNotify_Callback qscrollbar_connectnotify_callback = nullptr;
    QScrollBar_DisconnectNotify_Callback qscrollbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QScrollBar {
        using QScrollBar::actionEvent;
        using QScrollBar::changeEvent;
        using QScrollBar::childEvent;
        using QScrollBar::closeEvent;
        using QScrollBar::connectNotify;
        using QScrollBar::contextMenuEvent;
        using QScrollBar::customEvent;
        using QScrollBar::disconnectNotify;
        using QScrollBar::dragEnterEvent;
        using QScrollBar::dragLeaveEvent;
        using QScrollBar::dragMoveEvent;
        using QScrollBar::dropEvent;
        using QScrollBar::enterEvent;
        using QScrollBar::focusInEvent;
        using QScrollBar::focusNextPrevChild;
        using QScrollBar::focusOutEvent;
        using QScrollBar::hideEvent;
        using QScrollBar::initPainter;
        using QScrollBar::initStyleOption;
        using QScrollBar::inputMethodEvent;
        using QScrollBar::keyPressEvent;
        using QScrollBar::keyReleaseEvent;
        using QScrollBar::leaveEvent;
        using QScrollBar::metric;
        using QScrollBar::mouseDoubleClickEvent;
        using QScrollBar::mouseMoveEvent;
        using QScrollBar::mousePressEvent;
        using QScrollBar::mouseReleaseEvent;
        using QScrollBar::moveEvent;
        using QScrollBar::nativeEvent;
        using QScrollBar::paintEvent;
        using QScrollBar::redirected;
        using QScrollBar::resizeEvent;
        using QScrollBar::sharedPainter;
        using QScrollBar::showEvent;
        using QScrollBar::sliderChange;
        using QScrollBar::tabletEvent;
        using QScrollBar::timerEvent;
        using QScrollBar::wheelEvent;
    };

    VirtualQScrollBar(QWidget* parent) : QScrollBar(parent) {};
    VirtualQScrollBar() : QScrollBar() {};
    VirtualQScrollBar(Qt::Orientation param1) : QScrollBar(param1) {};
    VirtualQScrollBar(Qt::Orientation param1, QWidget* parent) : QScrollBar(param1, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscrollbar_metaobject_callback) {
            QMetaObject* callback_ret = qscrollbar_metaobject_callback(this);
            return callback_ret;
        }
        return QScrollBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscrollbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscrollbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscrollbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscrollbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScrollBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qscrollbar_sizehint_callback) {
            QSize* callback_ret = qscrollbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScrollBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscrollbar_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscrollbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qscrollbar_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qscrollbar_wheelevent_callback(this, cbval1);
            return;
        }
        QScrollBar::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qscrollbar_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qscrollbar_paintevent_callback(this, cbval1);
            return;
        }
        QScrollBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qscrollbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qscrollbar_mousepressevent_callback(this, cbval1);
            return;
        }
        QScrollBar::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qscrollbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qscrollbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QScrollBar::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qscrollbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qscrollbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        QScrollBar::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qscrollbar_hideevent_callback) {
            QHideEvent* cbval1 = param1;
            qscrollbar_hideevent_callback(this, cbval1);
            return;
        }
        QScrollBar::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qscrollbar_sliderchange_callback) {
            int cbval1 = static_cast<int>(change);
            qscrollbar_sliderchange_callback(this, cbval1);
            return;
        }
        QScrollBar::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qscrollbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qscrollbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        QScrollBar::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSlider* option) const override {
        if (qscrollbar_initstyleoption_callback) {
            QStyleOptionSlider* cbval1 = option;
            qscrollbar_initstyleoption_callback(this, cbval1);
            return;
        }
        QScrollBar::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qscrollbar_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            qscrollbar_keypressevent_callback(this, cbval1);
            return;
        }
        QScrollBar::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qscrollbar_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qscrollbar_timerevent_callback(this, cbval1);
            return;
        }
        QScrollBar::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qscrollbar_changeevent_callback) {
            QEvent* cbval1 = e;
            qscrollbar_changeevent_callback(this, cbval1);
            return;
        }
        QScrollBar::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qscrollbar_devtype_callback) {
            int callback_ret = qscrollbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QScrollBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qscrollbar_setvisible_callback) {
            bool cbval1 = visible;
            qscrollbar_setvisible_callback(this, cbval1);
            return;
        }
        QScrollBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qscrollbar_minimumsizehint_callback) {
            QSize* callback_ret = qscrollbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScrollBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qscrollbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qscrollbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScrollBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qscrollbar_hasheightforwidth_callback) {
            bool callback_ret = qscrollbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QScrollBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qscrollbar_paintengine_callback) {
            QPaintEngine* callback_ret = qscrollbar_paintengine_callback(this);
            return callback_ret;
        }
        return QScrollBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qscrollbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qscrollbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QScrollBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qscrollbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qscrollbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QScrollBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qscrollbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qscrollbar_focusinevent_callback(this, cbval1);
            return;
        }
        QScrollBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qscrollbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qscrollbar_focusoutevent_callback(this, cbval1);
            return;
        }
        QScrollBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qscrollbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qscrollbar_enterevent_callback(this, cbval1);
            return;
        }
        QScrollBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qscrollbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            qscrollbar_leaveevent_callback(this, cbval1);
            return;
        }
        QScrollBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qscrollbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qscrollbar_moveevent_callback(this, cbval1);
            return;
        }
        QScrollBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qscrollbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qscrollbar_resizeevent_callback(this, cbval1);
            return;
        }
        QScrollBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qscrollbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qscrollbar_closeevent_callback(this, cbval1);
            return;
        }
        QScrollBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qscrollbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qscrollbar_tabletevent_callback(this, cbval1);
            return;
        }
        QScrollBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qscrollbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qscrollbar_actionevent_callback(this, cbval1);
            return;
        }
        QScrollBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qscrollbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qscrollbar_dragenterevent_callback(this, cbval1);
            return;
        }
        QScrollBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qscrollbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qscrollbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        QScrollBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qscrollbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qscrollbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        QScrollBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qscrollbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qscrollbar_dropevent_callback(this, cbval1);
            return;
        }
        QScrollBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qscrollbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            qscrollbar_showevent_callback(this, cbval1);
            return;
        }
        QScrollBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qscrollbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qscrollbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QScrollBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qscrollbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qscrollbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScrollBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qscrollbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            qscrollbar_initpainter_callback(this, cbval1);
            return;
        }
        QScrollBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qscrollbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qscrollbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qscrollbar_sharedpainter_callback) {
            QPainter* callback_ret = qscrollbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return QScrollBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qscrollbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qscrollbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        QScrollBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qscrollbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qscrollbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScrollBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qscrollbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qscrollbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscrollbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscrollbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScrollBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscrollbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscrollbar_childevent_callback(this, cbval1);
            return;
        }
        QScrollBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscrollbar_customevent_callback) {
            QEvent* cbval1 = event;
            qscrollbar_customevent_callback(this, cbval1);
            return;
        }
        QScrollBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscrollbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscrollbar_connectnotify_callback(this, cbval1);
            return;
        }
        QScrollBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscrollbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscrollbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        QScrollBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void QScrollBar_SuperWheelEvent(QScrollBar* self, QWheelEvent* param1);
    friend void QScrollBar_SuperPaintEvent(QScrollBar* self, QPaintEvent* param1);
    friend void QScrollBar_SuperMousePressEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_SuperMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_SuperMouseMoveEvent(QScrollBar* self, QMouseEvent* param1);
    friend void QScrollBar_SuperHideEvent(QScrollBar* self, QHideEvent* param1);
    friend void QScrollBar_SuperSliderChange(QScrollBar* self, int change);
    friend void QScrollBar_SuperContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1);
    friend void QScrollBar_SuperInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option);
    friend void QScrollBar_SuperKeyPressEvent(QScrollBar* self, QKeyEvent* ev);
    friend void QScrollBar_SuperTimerEvent(QScrollBar* self, QTimerEvent* param1);
    friend void QScrollBar_SuperChangeEvent(QScrollBar* self, QEvent* e);
    friend void QScrollBar_SuperMouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event);
    friend void QScrollBar_SuperKeyReleaseEvent(QScrollBar* self, QKeyEvent* event);
    friend void QScrollBar_SuperFocusInEvent(QScrollBar* self, QFocusEvent* event);
    friend void QScrollBar_SuperFocusOutEvent(QScrollBar* self, QFocusEvent* event);
    friend void QScrollBar_SuperEnterEvent(QScrollBar* self, QEnterEvent* event);
    friend void QScrollBar_SuperLeaveEvent(QScrollBar* self, QEvent* event);
    friend void QScrollBar_SuperMoveEvent(QScrollBar* self, QMoveEvent* event);
    friend void QScrollBar_SuperResizeEvent(QScrollBar* self, QResizeEvent* event);
    friend void QScrollBar_SuperCloseEvent(QScrollBar* self, QCloseEvent* event);
    friend void QScrollBar_SuperTabletEvent(QScrollBar* self, QTabletEvent* event);
    friend void QScrollBar_SuperActionEvent(QScrollBar* self, QActionEvent* event);
    friend void QScrollBar_SuperDragEnterEvent(QScrollBar* self, QDragEnterEvent* event);
    friend void QScrollBar_SuperDragMoveEvent(QScrollBar* self, QDragMoveEvent* event);
    friend void QScrollBar_SuperDragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event);
    friend void QScrollBar_SuperDropEvent(QScrollBar* self, QDropEvent* event);
    friend void QScrollBar_SuperShowEvent(QScrollBar* self, QShowEvent* event);
    friend bool QScrollBar_SuperNativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QScrollBar_SuperMetric(const QScrollBar* self, int param1);
    friend void QScrollBar_SuperInitPainter(const QScrollBar* self, QPainter* painter);
    friend QPaintDevice* QScrollBar_SuperRedirected(const QScrollBar* self, QPoint* offset);
    friend QPainter* QScrollBar_SuperSharedPainter(const QScrollBar* self);
    friend void QScrollBar_SuperInputMethodEvent(QScrollBar* self, QInputMethodEvent* param1);
    friend bool QScrollBar_SuperFocusNextPrevChild(QScrollBar* self, bool next);
    friend void QScrollBar_SuperChildEvent(QScrollBar* self, QChildEvent* event);
    friend void QScrollBar_SuperCustomEvent(QScrollBar* self, QEvent* event);
    friend void QScrollBar_SuperConnectNotify(QScrollBar* self, const QMetaMethod* signal);
    friend void QScrollBar_SuperDisconnectNotify(QScrollBar* self, const QMetaMethod* signal);
};

#endif
