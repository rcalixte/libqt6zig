#pragma once
#ifndef LIBQDIAL_HXX
#define LIBQDIAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDial
class VirtualQDial final : public QDial {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSlider::SliderChange;
    using QDial_MetaObject_Callback = QMetaObject* (*)(const QDial*);
    using QDial_Metacast_Callback = void* (*)(QDial*, const char*);
    using QDial_Metacall_Callback = int (*)(QDial*, int, int, void**);
    using QDial_SizeHint_Callback = QSize* (*)(const QDial*);
    using QDial_MinimumSizeHint_Callback = QSize* (*)(const QDial*);
    using QDial_Event_Callback = bool (*)(QDial*, QEvent*);
    using QDial_ResizeEvent_Callback = void (*)(QDial*, QResizeEvent*);
    using QDial_PaintEvent_Callback = void (*)(QDial*, QPaintEvent*);
    using QDial_MousePressEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_MouseReleaseEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_MouseMoveEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_SliderChange_Callback = void (*)(QDial*, int);
    using QDial_InitStyleOption_Callback = void (*)(const QDial*, QStyleOptionSlider*);
    using QDial_KeyPressEvent_Callback = void (*)(QDial*, QKeyEvent*);
    using QDial_TimerEvent_Callback = void (*)(QDial*, QTimerEvent*);
    using QDial_WheelEvent_Callback = void (*)(QDial*, QWheelEvent*);
    using QDial_ChangeEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_DevType_Callback = int (*)(const QDial*);
    using QDial_SetVisible_Callback = void (*)(QDial*, bool);
    using QDial_HeightForWidth_Callback = int (*)(const QDial*, int);
    using QDial_HasHeightForWidth_Callback = bool (*)(const QDial*);
    using QDial_PaintEngine_Callback = QPaintEngine* (*)(const QDial*);
    using QDial_MouseDoubleClickEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_KeyReleaseEvent_Callback = void (*)(QDial*, QKeyEvent*);
    using QDial_FocusInEvent_Callback = void (*)(QDial*, QFocusEvent*);
    using QDial_FocusOutEvent_Callback = void (*)(QDial*, QFocusEvent*);
    using QDial_EnterEvent_Callback = void (*)(QDial*, QEnterEvent*);
    using QDial_LeaveEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_MoveEvent_Callback = void (*)(QDial*, QMoveEvent*);
    using QDial_CloseEvent_Callback = void (*)(QDial*, QCloseEvent*);
    using QDial_ContextMenuEvent_Callback = void (*)(QDial*, QContextMenuEvent*);
    using QDial_TabletEvent_Callback = void (*)(QDial*, QTabletEvent*);
    using QDial_ActionEvent_Callback = void (*)(QDial*, QActionEvent*);
    using QDial_DragEnterEvent_Callback = void (*)(QDial*, QDragEnterEvent*);
    using QDial_DragMoveEvent_Callback = void (*)(QDial*, QDragMoveEvent*);
    using QDial_DragLeaveEvent_Callback = void (*)(QDial*, QDragLeaveEvent*);
    using QDial_DropEvent_Callback = void (*)(QDial*, QDropEvent*);
    using QDial_ShowEvent_Callback = void (*)(QDial*, QShowEvent*);
    using QDial_HideEvent_Callback = void (*)(QDial*, QHideEvent*);
    using QDial_NativeEvent_Callback = bool (*)(QDial*, libqt_string, void*, intptr_t*);
    using QDial_Metric_Callback = int (*)(const QDial*, int);
    using QDial_InitPainter_Callback = void (*)(const QDial*, QPainter*);
    using QDial_Redirected_Callback = QPaintDevice* (*)(const QDial*, QPoint*);
    using QDial_SharedPainter_Callback = QPainter* (*)(const QDial*);
    using QDial_InputMethodEvent_Callback = void (*)(QDial*, QInputMethodEvent*);
    using QDial_InputMethodQuery_Callback = QVariant* (*)(const QDial*, int);
    using QDial_FocusNextPrevChild_Callback = bool (*)(QDial*, bool);
    using QDial_EventFilter_Callback = bool (*)(QDial*, QObject*, QEvent*);
    using QDial_ChildEvent_Callback = void (*)(QDial*, QChildEvent*);
    using QDial_CustomEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_ConnectNotify_Callback = void (*)(QDial*, QMetaMethod*);
    using QDial_DisconnectNotify_Callback = void (*)(QDial*, QMetaMethod*);
    using QDial::create;
    using QDial::destroy;
    using QDial::focusNextChild;
    using QDial::focusPreviousChild;
    using QDial::getDecodedMetricF;
    using QDial::isSignalConnected;
    using QDial::receivers;
    using QDial::repeatAction;
    using QDial::sender;
    using QDial::senderSignalIndex;
    using QDial::setRepeatAction;
    using QDial::updateMicroFocus;

    // Instance callback storage
    QDial_MetaObject_Callback qdial_metaobject_callback = nullptr;
    QDial_Metacast_Callback qdial_metacast_callback = nullptr;
    QDial_Metacall_Callback qdial_metacall_callback = nullptr;
    QDial_SizeHint_Callback qdial_sizehint_callback = nullptr;
    QDial_MinimumSizeHint_Callback qdial_minimumsizehint_callback = nullptr;
    QDial_Event_Callback qdial_event_callback = nullptr;
    QDial_ResizeEvent_Callback qdial_resizeevent_callback = nullptr;
    QDial_PaintEvent_Callback qdial_paintevent_callback = nullptr;
    QDial_MousePressEvent_Callback qdial_mousepressevent_callback = nullptr;
    QDial_MouseReleaseEvent_Callback qdial_mousereleaseevent_callback = nullptr;
    QDial_MouseMoveEvent_Callback qdial_mousemoveevent_callback = nullptr;
    QDial_SliderChange_Callback qdial_sliderchange_callback = nullptr;
    QDial_InitStyleOption_Callback qdial_initstyleoption_callback = nullptr;
    QDial_KeyPressEvent_Callback qdial_keypressevent_callback = nullptr;
    QDial_TimerEvent_Callback qdial_timerevent_callback = nullptr;
    QDial_WheelEvent_Callback qdial_wheelevent_callback = nullptr;
    QDial_ChangeEvent_Callback qdial_changeevent_callback = nullptr;
    QDial_DevType_Callback qdial_devtype_callback = nullptr;
    QDial_SetVisible_Callback qdial_setvisible_callback = nullptr;
    QDial_HeightForWidth_Callback qdial_heightforwidth_callback = nullptr;
    QDial_HasHeightForWidth_Callback qdial_hasheightforwidth_callback = nullptr;
    QDial_PaintEngine_Callback qdial_paintengine_callback = nullptr;
    QDial_MouseDoubleClickEvent_Callback qdial_mousedoubleclickevent_callback = nullptr;
    QDial_KeyReleaseEvent_Callback qdial_keyreleaseevent_callback = nullptr;
    QDial_FocusInEvent_Callback qdial_focusinevent_callback = nullptr;
    QDial_FocusOutEvent_Callback qdial_focusoutevent_callback = nullptr;
    QDial_EnterEvent_Callback qdial_enterevent_callback = nullptr;
    QDial_LeaveEvent_Callback qdial_leaveevent_callback = nullptr;
    QDial_MoveEvent_Callback qdial_moveevent_callback = nullptr;
    QDial_CloseEvent_Callback qdial_closeevent_callback = nullptr;
    QDial_ContextMenuEvent_Callback qdial_contextmenuevent_callback = nullptr;
    QDial_TabletEvent_Callback qdial_tabletevent_callback = nullptr;
    QDial_ActionEvent_Callback qdial_actionevent_callback = nullptr;
    QDial_DragEnterEvent_Callback qdial_dragenterevent_callback = nullptr;
    QDial_DragMoveEvent_Callback qdial_dragmoveevent_callback = nullptr;
    QDial_DragLeaveEvent_Callback qdial_dragleaveevent_callback = nullptr;
    QDial_DropEvent_Callback qdial_dropevent_callback = nullptr;
    QDial_ShowEvent_Callback qdial_showevent_callback = nullptr;
    QDial_HideEvent_Callback qdial_hideevent_callback = nullptr;
    QDial_NativeEvent_Callback qdial_nativeevent_callback = nullptr;
    QDial_Metric_Callback qdial_metric_callback = nullptr;
    QDial_InitPainter_Callback qdial_initpainter_callback = nullptr;
    QDial_Redirected_Callback qdial_redirected_callback = nullptr;
    QDial_SharedPainter_Callback qdial_sharedpainter_callback = nullptr;
    QDial_InputMethodEvent_Callback qdial_inputmethodevent_callback = nullptr;
    QDial_InputMethodQuery_Callback qdial_inputmethodquery_callback = nullptr;
    QDial_FocusNextPrevChild_Callback qdial_focusnextprevchild_callback = nullptr;
    QDial_EventFilter_Callback qdial_eventfilter_callback = nullptr;
    QDial_ChildEvent_Callback qdial_childevent_callback = nullptr;
    QDial_CustomEvent_Callback qdial_customevent_callback = nullptr;
    QDial_ConnectNotify_Callback qdial_connectnotify_callback = nullptr;
    QDial_DisconnectNotify_Callback qdial_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDial {
        using QDial::actionEvent;
        using QDial::changeEvent;
        using QDial::childEvent;
        using QDial::closeEvent;
        using QDial::connectNotify;
        using QDial::contextMenuEvent;
        using QDial::customEvent;
        using QDial::disconnectNotify;
        using QDial::dragEnterEvent;
        using QDial::dragLeaveEvent;
        using QDial::dragMoveEvent;
        using QDial::dropEvent;
        using QDial::enterEvent;
        using QDial::event;
        using QDial::focusInEvent;
        using QDial::focusNextPrevChild;
        using QDial::focusOutEvent;
        using QDial::hideEvent;
        using QDial::initPainter;
        using QDial::initStyleOption;
        using QDial::inputMethodEvent;
        using QDial::keyPressEvent;
        using QDial::keyReleaseEvent;
        using QDial::leaveEvent;
        using QDial::metric;
        using QDial::mouseDoubleClickEvent;
        using QDial::mouseMoveEvent;
        using QDial::mousePressEvent;
        using QDial::mouseReleaseEvent;
        using QDial::moveEvent;
        using QDial::nativeEvent;
        using QDial::paintEvent;
        using QDial::redirected;
        using QDial::resizeEvent;
        using QDial::sharedPainter;
        using QDial::showEvent;
        using QDial::sliderChange;
        using QDial::tabletEvent;
        using QDial::timerEvent;
        using QDial::wheelEvent;
    };

    VirtualQDial(QWidget* parent) : QDial(parent) {};
    VirtualQDial() : QDial() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdial_metaobject_callback) {
            QMetaObject* callback_ret = qdial_metaobject_callback(this);
            return callback_ret;
        }
        return QDial::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdial_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdial_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDial::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdial_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdial_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDial::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdial_sizehint_callback) {
            QSize* callback_ret = qdial_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDial::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdial_minimumsizehint_callback) {
            QSize* callback_ret = qdial_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDial::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qdial_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qdial_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDial::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* re) override {
        if (qdial_resizeevent_callback) {
            QResizeEvent* cbval1 = re;
            qdial_resizeevent_callback(this, cbval1);
            return;
        }
        QDial::resizeEvent(re);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* pe) override {
        if (qdial_paintevent_callback) {
            QPaintEvent* cbval1 = pe;
            qdial_paintevent_callback(this, cbval1);
            return;
        }
        QDial::paintEvent(pe);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* me) override {
        if (qdial_mousepressevent_callback) {
            QMouseEvent* cbval1 = me;
            qdial_mousepressevent_callback(this, cbval1);
            return;
        }
        QDial::mousePressEvent(me);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* me) override {
        if (qdial_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = me;
            qdial_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDial::mouseReleaseEvent(me);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* me) override {
        if (qdial_mousemoveevent_callback) {
            QMouseEvent* cbval1 = me;
            qdial_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDial::mouseMoveEvent(me);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qdial_sliderchange_callback) {
            int cbval1 = static_cast<int>(change);
            qdial_sliderchange_callback(this, cbval1);
            return;
        }
        QDial::sliderChange(change);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSlider* option) const override {
        if (qdial_initstyleoption_callback) {
            QStyleOptionSlider* cbval1 = option;
            qdial_initstyleoption_callback(this, cbval1);
            return;
        }
        QDial::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qdial_keypressevent_callback) {
            QKeyEvent* cbval1 = ev;
            qdial_keypressevent_callback(this, cbval1);
            return;
        }
        QDial::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qdial_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qdial_timerevent_callback(this, cbval1);
            return;
        }
        QDial::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qdial_wheelevent_callback) {
            QWheelEvent* cbval1 = e;
            qdial_wheelevent_callback(this, cbval1);
            return;
        }
        QDial::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qdial_changeevent_callback) {
            QEvent* cbval1 = e;
            qdial_changeevent_callback(this, cbval1);
            return;
        }
        QDial::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdial_devtype_callback) {
            int callback_ret = qdial_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDial::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdial_setvisible_callback) {
            bool cbval1 = visible;
            qdial_setvisible_callback(this, cbval1);
            return;
        }
        QDial::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdial_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdial_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDial::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdial_hasheightforwidth_callback) {
            bool callback_ret = qdial_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDial::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdial_paintengine_callback) {
            QPaintEngine* callback_ret = qdial_paintengine_callback(this);
            return callback_ret;
        }
        return QDial::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdial_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdial_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDial::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdial_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdial_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDial::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdial_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdial_focusinevent_callback(this, cbval1);
            return;
        }
        QDial::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdial_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdial_focusoutevent_callback(this, cbval1);
            return;
        }
        QDial::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdial_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdial_enterevent_callback(this, cbval1);
            return;
        }
        QDial::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdial_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdial_leaveevent_callback(this, cbval1);
            return;
        }
        QDial::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdial_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdial_moveevent_callback(this, cbval1);
            return;
        }
        QDial::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdial_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdial_closeevent_callback(this, cbval1);
            return;
        }
        QDial::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdial_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdial_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDial::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdial_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdial_tabletevent_callback(this, cbval1);
            return;
        }
        QDial::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdial_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdial_actionevent_callback(this, cbval1);
            return;
        }
        QDial::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdial_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdial_dragenterevent_callback(this, cbval1);
            return;
        }
        QDial::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdial_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdial_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDial::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdial_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdial_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDial::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdial_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdial_dropevent_callback(this, cbval1);
            return;
        }
        QDial::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdial_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdial_showevent_callback(this, cbval1);
            return;
        }
        QDial::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdial_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdial_hideevent_callback(this, cbval1);
            return;
        }
        QDial::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdial_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdial_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDial::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdial_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdial_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDial::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdial_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdial_initpainter_callback(this, cbval1);
            return;
        }
        QDial::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdial_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdial_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDial::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdial_sharedpainter_callback) {
            QPainter* callback_ret = qdial_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDial::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdial_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdial_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDial::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdial_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdial_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDial::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdial_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdial_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDial::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdial_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdial_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDial::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdial_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdial_childevent_callback(this, cbval1);
            return;
        }
        QDial::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdial_customevent_callback) {
            QEvent* cbval1 = event;
            qdial_customevent_callback(this, cbval1);
            return;
        }
        QDial::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdial_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdial_connectnotify_callback(this, cbval1);
            return;
        }
        QDial::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdial_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdial_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDial::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QDial_SuperEvent(QDial* self, QEvent* e);
    friend void QDial_SuperResizeEvent(QDial* self, QResizeEvent* re);
    friend void QDial_SuperPaintEvent(QDial* self, QPaintEvent* pe);
    friend void QDial_SuperMousePressEvent(QDial* self, QMouseEvent* me);
    friend void QDial_SuperMouseReleaseEvent(QDial* self, QMouseEvent* me);
    friend void QDial_SuperMouseMoveEvent(QDial* self, QMouseEvent* me);
    friend void QDial_SuperSliderChange(QDial* self, int change);
    friend void QDial_SuperInitStyleOption(const QDial* self, QStyleOptionSlider* option);
    friend void QDial_SuperKeyPressEvent(QDial* self, QKeyEvent* ev);
    friend void QDial_SuperTimerEvent(QDial* self, QTimerEvent* param1);
    friend void QDial_SuperWheelEvent(QDial* self, QWheelEvent* e);
    friend void QDial_SuperChangeEvent(QDial* self, QEvent* e);
    friend void QDial_SuperMouseDoubleClickEvent(QDial* self, QMouseEvent* event);
    friend void QDial_SuperKeyReleaseEvent(QDial* self, QKeyEvent* event);
    friend void QDial_SuperFocusInEvent(QDial* self, QFocusEvent* event);
    friend void QDial_SuperFocusOutEvent(QDial* self, QFocusEvent* event);
    friend void QDial_SuperEnterEvent(QDial* self, QEnterEvent* event);
    friend void QDial_SuperLeaveEvent(QDial* self, QEvent* event);
    friend void QDial_SuperMoveEvent(QDial* self, QMoveEvent* event);
    friend void QDial_SuperCloseEvent(QDial* self, QCloseEvent* event);
    friend void QDial_SuperContextMenuEvent(QDial* self, QContextMenuEvent* event);
    friend void QDial_SuperTabletEvent(QDial* self, QTabletEvent* event);
    friend void QDial_SuperActionEvent(QDial* self, QActionEvent* event);
    friend void QDial_SuperDragEnterEvent(QDial* self, QDragEnterEvent* event);
    friend void QDial_SuperDragMoveEvent(QDial* self, QDragMoveEvent* event);
    friend void QDial_SuperDragLeaveEvent(QDial* self, QDragLeaveEvent* event);
    friend void QDial_SuperDropEvent(QDial* self, QDropEvent* event);
    friend void QDial_SuperShowEvent(QDial* self, QShowEvent* event);
    friend void QDial_SuperHideEvent(QDial* self, QHideEvent* event);
    friend bool QDial_SuperNativeEvent(QDial* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDial_SuperMetric(const QDial* self, int param1);
    friend void QDial_SuperInitPainter(const QDial* self, QPainter* painter);
    friend QPaintDevice* QDial_SuperRedirected(const QDial* self, QPoint* offset);
    friend QPainter* QDial_SuperSharedPainter(const QDial* self);
    friend void QDial_SuperInputMethodEvent(QDial* self, QInputMethodEvent* param1);
    friend bool QDial_SuperFocusNextPrevChild(QDial* self, bool next);
    friend void QDial_SuperChildEvent(QDial* self, QChildEvent* event);
    friend void QDial_SuperCustomEvent(QDial* self, QEvent* event);
    friend void QDial_SuperConnectNotify(QDial* self, const QMetaMethod* signal);
    friend void QDial_SuperDisconnectNotify(QDial* self, const QMetaMethod* signal);
};

#endif
