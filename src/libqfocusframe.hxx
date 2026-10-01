#pragma once
#ifndef LIBQFOCUSFRAME_HXX
#define LIBQFOCUSFRAME_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFocusFrame
class VirtualQFocusFrame final : public QFocusFrame {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFocusFrame_MetaObject_Callback = QMetaObject* (*)(const QFocusFrame*);
    using QFocusFrame_Metacast_Callback = void* (*)(QFocusFrame*, const char*);
    using QFocusFrame_Metacall_Callback = int (*)(QFocusFrame*, int, int, void**);
    using QFocusFrame_Event_Callback = bool (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_EventFilter_Callback = bool (*)(QFocusFrame*, QObject*, QEvent*);
    using QFocusFrame_PaintEvent_Callback = void (*)(QFocusFrame*, QPaintEvent*);
    using QFocusFrame_InitStyleOption_Callback = void (*)(const QFocusFrame*, QStyleOption*);
    using QFocusFrame_DevType_Callback = int (*)(const QFocusFrame*);
    using QFocusFrame_SetVisible_Callback = void (*)(QFocusFrame*, bool);
    using QFocusFrame_SizeHint_Callback = QSize* (*)(const QFocusFrame*);
    using QFocusFrame_MinimumSizeHint_Callback = QSize* (*)(const QFocusFrame*);
    using QFocusFrame_HeightForWidth_Callback = int (*)(const QFocusFrame*, int);
    using QFocusFrame_HasHeightForWidth_Callback = bool (*)(const QFocusFrame*);
    using QFocusFrame_PaintEngine_Callback = QPaintEngine* (*)(const QFocusFrame*);
    using QFocusFrame_MousePressEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_MouseReleaseEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_MouseDoubleClickEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_MouseMoveEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_WheelEvent_Callback = void (*)(QFocusFrame*, QWheelEvent*);
    using QFocusFrame_KeyPressEvent_Callback = void (*)(QFocusFrame*, QKeyEvent*);
    using QFocusFrame_KeyReleaseEvent_Callback = void (*)(QFocusFrame*, QKeyEvent*);
    using QFocusFrame_FocusInEvent_Callback = void (*)(QFocusFrame*, QFocusEvent*);
    using QFocusFrame_FocusOutEvent_Callback = void (*)(QFocusFrame*, QFocusEvent*);
    using QFocusFrame_EnterEvent_Callback = void (*)(QFocusFrame*, QEnterEvent*);
    using QFocusFrame_LeaveEvent_Callback = void (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_MoveEvent_Callback = void (*)(QFocusFrame*, QMoveEvent*);
    using QFocusFrame_ResizeEvent_Callback = void (*)(QFocusFrame*, QResizeEvent*);
    using QFocusFrame_CloseEvent_Callback = void (*)(QFocusFrame*, QCloseEvent*);
    using QFocusFrame_ContextMenuEvent_Callback = void (*)(QFocusFrame*, QContextMenuEvent*);
    using QFocusFrame_TabletEvent_Callback = void (*)(QFocusFrame*, QTabletEvent*);
    using QFocusFrame_ActionEvent_Callback = void (*)(QFocusFrame*, QActionEvent*);
    using QFocusFrame_DragEnterEvent_Callback = void (*)(QFocusFrame*, QDragEnterEvent*);
    using QFocusFrame_DragMoveEvent_Callback = void (*)(QFocusFrame*, QDragMoveEvent*);
    using QFocusFrame_DragLeaveEvent_Callback = void (*)(QFocusFrame*, QDragLeaveEvent*);
    using QFocusFrame_DropEvent_Callback = void (*)(QFocusFrame*, QDropEvent*);
    using QFocusFrame_ShowEvent_Callback = void (*)(QFocusFrame*, QShowEvent*);
    using QFocusFrame_HideEvent_Callback = void (*)(QFocusFrame*, QHideEvent*);
    using QFocusFrame_NativeEvent_Callback = bool (*)(QFocusFrame*, libqt_string, void*, intptr_t*);
    using QFocusFrame_ChangeEvent_Callback = void (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_Metric_Callback = int (*)(const QFocusFrame*, int);
    using QFocusFrame_InitPainter_Callback = void (*)(const QFocusFrame*, QPainter*);
    using QFocusFrame_Redirected_Callback = QPaintDevice* (*)(const QFocusFrame*, QPoint*);
    using QFocusFrame_SharedPainter_Callback = QPainter* (*)(const QFocusFrame*);
    using QFocusFrame_InputMethodEvent_Callback = void (*)(QFocusFrame*, QInputMethodEvent*);
    using QFocusFrame_InputMethodQuery_Callback = QVariant* (*)(const QFocusFrame*, int);
    using QFocusFrame_FocusNextPrevChild_Callback = bool (*)(QFocusFrame*, bool);
    using QFocusFrame_TimerEvent_Callback = void (*)(QFocusFrame*, QTimerEvent*);
    using QFocusFrame_ChildEvent_Callback = void (*)(QFocusFrame*, QChildEvent*);
    using QFocusFrame_CustomEvent_Callback = void (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_ConnectNotify_Callback = void (*)(QFocusFrame*, QMetaMethod*);
    using QFocusFrame_DisconnectNotify_Callback = void (*)(QFocusFrame*, QMetaMethod*);
    using QFocusFrame::create;
    using QFocusFrame::destroy;
    using QFocusFrame::focusNextChild;
    using QFocusFrame::focusPreviousChild;
    using QFocusFrame::getDecodedMetricF;
    using QFocusFrame::isSignalConnected;
    using QFocusFrame::receivers;
    using QFocusFrame::sender;
    using QFocusFrame::senderSignalIndex;
    using QFocusFrame::updateMicroFocus;

    // Instance callback storage
    QFocusFrame_MetaObject_Callback qfocusframe_metaobject_callback = nullptr;
    QFocusFrame_Metacast_Callback qfocusframe_metacast_callback = nullptr;
    QFocusFrame_Metacall_Callback qfocusframe_metacall_callback = nullptr;
    QFocusFrame_Event_Callback qfocusframe_event_callback = nullptr;
    QFocusFrame_EventFilter_Callback qfocusframe_eventfilter_callback = nullptr;
    QFocusFrame_PaintEvent_Callback qfocusframe_paintevent_callback = nullptr;
    QFocusFrame_InitStyleOption_Callback qfocusframe_initstyleoption_callback = nullptr;
    QFocusFrame_DevType_Callback qfocusframe_devtype_callback = nullptr;
    QFocusFrame_SetVisible_Callback qfocusframe_setvisible_callback = nullptr;
    QFocusFrame_SizeHint_Callback qfocusframe_sizehint_callback = nullptr;
    QFocusFrame_MinimumSizeHint_Callback qfocusframe_minimumsizehint_callback = nullptr;
    QFocusFrame_HeightForWidth_Callback qfocusframe_heightforwidth_callback = nullptr;
    QFocusFrame_HasHeightForWidth_Callback qfocusframe_hasheightforwidth_callback = nullptr;
    QFocusFrame_PaintEngine_Callback qfocusframe_paintengine_callback = nullptr;
    QFocusFrame_MousePressEvent_Callback qfocusframe_mousepressevent_callback = nullptr;
    QFocusFrame_MouseReleaseEvent_Callback qfocusframe_mousereleaseevent_callback = nullptr;
    QFocusFrame_MouseDoubleClickEvent_Callback qfocusframe_mousedoubleclickevent_callback = nullptr;
    QFocusFrame_MouseMoveEvent_Callback qfocusframe_mousemoveevent_callback = nullptr;
    QFocusFrame_WheelEvent_Callback qfocusframe_wheelevent_callback = nullptr;
    QFocusFrame_KeyPressEvent_Callback qfocusframe_keypressevent_callback = nullptr;
    QFocusFrame_KeyReleaseEvent_Callback qfocusframe_keyreleaseevent_callback = nullptr;
    QFocusFrame_FocusInEvent_Callback qfocusframe_focusinevent_callback = nullptr;
    QFocusFrame_FocusOutEvent_Callback qfocusframe_focusoutevent_callback = nullptr;
    QFocusFrame_EnterEvent_Callback qfocusframe_enterevent_callback = nullptr;
    QFocusFrame_LeaveEvent_Callback qfocusframe_leaveevent_callback = nullptr;
    QFocusFrame_MoveEvent_Callback qfocusframe_moveevent_callback = nullptr;
    QFocusFrame_ResizeEvent_Callback qfocusframe_resizeevent_callback = nullptr;
    QFocusFrame_CloseEvent_Callback qfocusframe_closeevent_callback = nullptr;
    QFocusFrame_ContextMenuEvent_Callback qfocusframe_contextmenuevent_callback = nullptr;
    QFocusFrame_TabletEvent_Callback qfocusframe_tabletevent_callback = nullptr;
    QFocusFrame_ActionEvent_Callback qfocusframe_actionevent_callback = nullptr;
    QFocusFrame_DragEnterEvent_Callback qfocusframe_dragenterevent_callback = nullptr;
    QFocusFrame_DragMoveEvent_Callback qfocusframe_dragmoveevent_callback = nullptr;
    QFocusFrame_DragLeaveEvent_Callback qfocusframe_dragleaveevent_callback = nullptr;
    QFocusFrame_DropEvent_Callback qfocusframe_dropevent_callback = nullptr;
    QFocusFrame_ShowEvent_Callback qfocusframe_showevent_callback = nullptr;
    QFocusFrame_HideEvent_Callback qfocusframe_hideevent_callback = nullptr;
    QFocusFrame_NativeEvent_Callback qfocusframe_nativeevent_callback = nullptr;
    QFocusFrame_ChangeEvent_Callback qfocusframe_changeevent_callback = nullptr;
    QFocusFrame_Metric_Callback qfocusframe_metric_callback = nullptr;
    QFocusFrame_InitPainter_Callback qfocusframe_initpainter_callback = nullptr;
    QFocusFrame_Redirected_Callback qfocusframe_redirected_callback = nullptr;
    QFocusFrame_SharedPainter_Callback qfocusframe_sharedpainter_callback = nullptr;
    QFocusFrame_InputMethodEvent_Callback qfocusframe_inputmethodevent_callback = nullptr;
    QFocusFrame_InputMethodQuery_Callback qfocusframe_inputmethodquery_callback = nullptr;
    QFocusFrame_FocusNextPrevChild_Callback qfocusframe_focusnextprevchild_callback = nullptr;
    QFocusFrame_TimerEvent_Callback qfocusframe_timerevent_callback = nullptr;
    QFocusFrame_ChildEvent_Callback qfocusframe_childevent_callback = nullptr;
    QFocusFrame_CustomEvent_Callback qfocusframe_customevent_callback = nullptr;
    QFocusFrame_ConnectNotify_Callback qfocusframe_connectnotify_callback = nullptr;
    QFocusFrame_DisconnectNotify_Callback qfocusframe_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFocusFrame {
        using QFocusFrame::actionEvent;
        using QFocusFrame::changeEvent;
        using QFocusFrame::childEvent;
        using QFocusFrame::closeEvent;
        using QFocusFrame::connectNotify;
        using QFocusFrame::contextMenuEvent;
        using QFocusFrame::customEvent;
        using QFocusFrame::disconnectNotify;
        using QFocusFrame::dragEnterEvent;
        using QFocusFrame::dragLeaveEvent;
        using QFocusFrame::dragMoveEvent;
        using QFocusFrame::dropEvent;
        using QFocusFrame::enterEvent;
        using QFocusFrame::event;
        using QFocusFrame::eventFilter;
        using QFocusFrame::focusInEvent;
        using QFocusFrame::focusNextPrevChild;
        using QFocusFrame::focusOutEvent;
        using QFocusFrame::hideEvent;
        using QFocusFrame::initPainter;
        using QFocusFrame::initStyleOption;
        using QFocusFrame::inputMethodEvent;
        using QFocusFrame::keyPressEvent;
        using QFocusFrame::keyReleaseEvent;
        using QFocusFrame::leaveEvent;
        using QFocusFrame::metric;
        using QFocusFrame::mouseDoubleClickEvent;
        using QFocusFrame::mouseMoveEvent;
        using QFocusFrame::mousePressEvent;
        using QFocusFrame::mouseReleaseEvent;
        using QFocusFrame::moveEvent;
        using QFocusFrame::nativeEvent;
        using QFocusFrame::paintEvent;
        using QFocusFrame::redirected;
        using QFocusFrame::resizeEvent;
        using QFocusFrame::sharedPainter;
        using QFocusFrame::showEvent;
        using QFocusFrame::tabletEvent;
        using QFocusFrame::timerEvent;
        using QFocusFrame::wheelEvent;
    };

    VirtualQFocusFrame(QWidget* parent) : QFocusFrame(parent) {};
    VirtualQFocusFrame() : QFocusFrame() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfocusframe_metaobject_callback) {
            QMetaObject* callback_ret = qfocusframe_metaobject_callback(this);
            return callback_ret;
        }
        return QFocusFrame::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfocusframe_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfocusframe_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFocusFrame::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfocusframe_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfocusframe_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFocusFrame::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qfocusframe_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qfocusframe_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFocusFrame::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qfocusframe_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qfocusframe_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFocusFrame::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qfocusframe_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qfocusframe_paintevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qfocusframe_initstyleoption_callback) {
            QStyleOption* cbval1 = option;
            qfocusframe_initstyleoption_callback(this, cbval1);
            return;
        }
        QFocusFrame::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfocusframe_devtype_callback) {
            int callback_ret = qfocusframe_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QFocusFrame::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfocusframe_setvisible_callback) {
            bool cbval1 = visible;
            qfocusframe_setvisible_callback(this, cbval1);
            return;
        }
        QFocusFrame::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfocusframe_sizehint_callback) {
            QSize* callback_ret = qfocusframe_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFocusFrame::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfocusframe_minimumsizehint_callback) {
            QSize* callback_ret = qfocusframe_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFocusFrame::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfocusframe_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qfocusframe_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFocusFrame::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfocusframe_hasheightforwidth_callback) {
            bool callback_ret = qfocusframe_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QFocusFrame::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfocusframe_paintengine_callback) {
            QPaintEngine* callback_ret = qfocusframe_paintengine_callback(this);
            return callback_ret;
        }
        return QFocusFrame::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qfocusframe_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qfocusframe_mousepressevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qfocusframe_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qfocusframe_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfocusframe_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qfocusframe_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfocusframe_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qfocusframe_mousemoveevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qfocusframe_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qfocusframe_wheelevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qfocusframe_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qfocusframe_keypressevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qfocusframe_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qfocusframe_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qfocusframe_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qfocusframe_focusinevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qfocusframe_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qfocusframe_focusoutevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfocusframe_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qfocusframe_enterevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfocusframe_leaveevent_callback) {
            QEvent* cbval1 = event;
            qfocusframe_leaveevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfocusframe_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qfocusframe_moveevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qfocusframe_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qfocusframe_resizeevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qfocusframe_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qfocusframe_closeevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qfocusframe_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qfocusframe_contextmenuevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfocusframe_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qfocusframe_tabletevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfocusframe_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qfocusframe_actionevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfocusframe_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qfocusframe_dragenterevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfocusframe_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qfocusframe_dragmoveevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfocusframe_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qfocusframe_dragleaveevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfocusframe_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qfocusframe_dropevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qfocusframe_showevent_callback) {
            QShowEvent* cbval1 = event;
            qfocusframe_showevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qfocusframe_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qfocusframe_hideevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfocusframe_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qfocusframe_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QFocusFrame::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qfocusframe_changeevent_callback) {
            QEvent* cbval1 = param1;
            qfocusframe_changeevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfocusframe_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qfocusframe_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFocusFrame::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfocusframe_initpainter_callback) {
            QPainter* cbval1 = painter;
            qfocusframe_initpainter_callback(this, cbval1);
            return;
        }
        QFocusFrame::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfocusframe_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qfocusframe_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QFocusFrame::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfocusframe_sharedpainter_callback) {
            QPainter* callback_ret = qfocusframe_sharedpainter_callback(this);
            return callback_ret;
        }
        return QFocusFrame::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfocusframe_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qfocusframe_inputmethodevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfocusframe_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qfocusframe_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFocusFrame::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfocusframe_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qfocusframe_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QFocusFrame::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfocusframe_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfocusframe_timerevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfocusframe_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfocusframe_childevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfocusframe_customevent_callback) {
            QEvent* cbval1 = event;
            qfocusframe_customevent_callback(this, cbval1);
            return;
        }
        QFocusFrame::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfocusframe_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfocusframe_connectnotify_callback(this, cbval1);
            return;
        }
        QFocusFrame::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfocusframe_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfocusframe_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFocusFrame::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QFocusFrame_SuperEvent(QFocusFrame* self, QEvent* e);
    friend bool QFocusFrame_SuperEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2);
    friend void QFocusFrame_SuperPaintEvent(QFocusFrame* self, QPaintEvent* param1);
    friend void QFocusFrame_SuperInitStyleOption(const QFocusFrame* self, QStyleOption* option);
    friend void QFocusFrame_SuperMousePressEvent(QFocusFrame* self, QMouseEvent* event);
    friend void QFocusFrame_SuperMouseReleaseEvent(QFocusFrame* self, QMouseEvent* event);
    friend void QFocusFrame_SuperMouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event);
    friend void QFocusFrame_SuperMouseMoveEvent(QFocusFrame* self, QMouseEvent* event);
    friend void QFocusFrame_SuperWheelEvent(QFocusFrame* self, QWheelEvent* event);
    friend void QFocusFrame_SuperKeyPressEvent(QFocusFrame* self, QKeyEvent* event);
    friend void QFocusFrame_SuperKeyReleaseEvent(QFocusFrame* self, QKeyEvent* event);
    friend void QFocusFrame_SuperFocusInEvent(QFocusFrame* self, QFocusEvent* event);
    friend void QFocusFrame_SuperFocusOutEvent(QFocusFrame* self, QFocusEvent* event);
    friend void QFocusFrame_SuperEnterEvent(QFocusFrame* self, QEnterEvent* event);
    friend void QFocusFrame_SuperLeaveEvent(QFocusFrame* self, QEvent* event);
    friend void QFocusFrame_SuperMoveEvent(QFocusFrame* self, QMoveEvent* event);
    friend void QFocusFrame_SuperResizeEvent(QFocusFrame* self, QResizeEvent* event);
    friend void QFocusFrame_SuperCloseEvent(QFocusFrame* self, QCloseEvent* event);
    friend void QFocusFrame_SuperContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event);
    friend void QFocusFrame_SuperTabletEvent(QFocusFrame* self, QTabletEvent* event);
    friend void QFocusFrame_SuperActionEvent(QFocusFrame* self, QActionEvent* event);
    friend void QFocusFrame_SuperDragEnterEvent(QFocusFrame* self, QDragEnterEvent* event);
    friend void QFocusFrame_SuperDragMoveEvent(QFocusFrame* self, QDragMoveEvent* event);
    friend void QFocusFrame_SuperDragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event);
    friend void QFocusFrame_SuperDropEvent(QFocusFrame* self, QDropEvent* event);
    friend void QFocusFrame_SuperShowEvent(QFocusFrame* self, QShowEvent* event);
    friend void QFocusFrame_SuperHideEvent(QFocusFrame* self, QHideEvent* event);
    friend bool QFocusFrame_SuperNativeEvent(QFocusFrame* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QFocusFrame_SuperChangeEvent(QFocusFrame* self, QEvent* param1);
    friend int QFocusFrame_SuperMetric(const QFocusFrame* self, int param1);
    friend void QFocusFrame_SuperInitPainter(const QFocusFrame* self, QPainter* painter);
    friend QPaintDevice* QFocusFrame_SuperRedirected(const QFocusFrame* self, QPoint* offset);
    friend QPainter* QFocusFrame_SuperSharedPainter(const QFocusFrame* self);
    friend void QFocusFrame_SuperInputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1);
    friend bool QFocusFrame_SuperFocusNextPrevChild(QFocusFrame* self, bool next);
    friend void QFocusFrame_SuperTimerEvent(QFocusFrame* self, QTimerEvent* event);
    friend void QFocusFrame_SuperChildEvent(QFocusFrame* self, QChildEvent* event);
    friend void QFocusFrame_SuperCustomEvent(QFocusFrame* self, QEvent* event);
    friend void QFocusFrame_SuperConnectNotify(QFocusFrame* self, const QMetaMethod* signal);
    friend void QFocusFrame_SuperDisconnectNotify(QFocusFrame* self, const QMetaMethod* signal);
};

#endif
