#pragma once
#ifndef LIBQSIZEGRIP_HXX
#define LIBQSIZEGRIP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSizeGrip
class VirtualQSizeGrip final : public QSizeGrip {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSizeGrip_MetaObject_Callback = QMetaObject* (*)(const QSizeGrip*);
    using QSizeGrip_Metacast_Callback = void* (*)(QSizeGrip*, const char*);
    using QSizeGrip_Metacall_Callback = int (*)(QSizeGrip*, int, int, void**);
    using QSizeGrip_SizeHint_Callback = QSize* (*)(const QSizeGrip*);
    using QSizeGrip_SetVisible_Callback = void (*)(QSizeGrip*, bool);
    using QSizeGrip_PaintEvent_Callback = void (*)(QSizeGrip*, QPaintEvent*);
    using QSizeGrip_MousePressEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_MouseMoveEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_MouseReleaseEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_MoveEvent_Callback = void (*)(QSizeGrip*, QMoveEvent*);
    using QSizeGrip_ShowEvent_Callback = void (*)(QSizeGrip*, QShowEvent*);
    using QSizeGrip_HideEvent_Callback = void (*)(QSizeGrip*, QHideEvent*);
    using QSizeGrip_EventFilter_Callback = bool (*)(QSizeGrip*, QObject*, QEvent*);
    using QSizeGrip_Event_Callback = bool (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_DevType_Callback = int (*)(const QSizeGrip*);
    using QSizeGrip_MinimumSizeHint_Callback = QSize* (*)(const QSizeGrip*);
    using QSizeGrip_HeightForWidth_Callback = int (*)(const QSizeGrip*, int);
    using QSizeGrip_HasHeightForWidth_Callback = bool (*)(const QSizeGrip*);
    using QSizeGrip_PaintEngine_Callback = QPaintEngine* (*)(const QSizeGrip*);
    using QSizeGrip_MouseDoubleClickEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_WheelEvent_Callback = void (*)(QSizeGrip*, QWheelEvent*);
    using QSizeGrip_KeyPressEvent_Callback = void (*)(QSizeGrip*, QKeyEvent*);
    using QSizeGrip_KeyReleaseEvent_Callback = void (*)(QSizeGrip*, QKeyEvent*);
    using QSizeGrip_FocusInEvent_Callback = void (*)(QSizeGrip*, QFocusEvent*);
    using QSizeGrip_FocusOutEvent_Callback = void (*)(QSizeGrip*, QFocusEvent*);
    using QSizeGrip_EnterEvent_Callback = void (*)(QSizeGrip*, QEnterEvent*);
    using QSizeGrip_LeaveEvent_Callback = void (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_ResizeEvent_Callback = void (*)(QSizeGrip*, QResizeEvent*);
    using QSizeGrip_CloseEvent_Callback = void (*)(QSizeGrip*, QCloseEvent*);
    using QSizeGrip_ContextMenuEvent_Callback = void (*)(QSizeGrip*, QContextMenuEvent*);
    using QSizeGrip_TabletEvent_Callback = void (*)(QSizeGrip*, QTabletEvent*);
    using QSizeGrip_ActionEvent_Callback = void (*)(QSizeGrip*, QActionEvent*);
    using QSizeGrip_DragEnterEvent_Callback = void (*)(QSizeGrip*, QDragEnterEvent*);
    using QSizeGrip_DragMoveEvent_Callback = void (*)(QSizeGrip*, QDragMoveEvent*);
    using QSizeGrip_DragLeaveEvent_Callback = void (*)(QSizeGrip*, QDragLeaveEvent*);
    using QSizeGrip_DropEvent_Callback = void (*)(QSizeGrip*, QDropEvent*);
    using QSizeGrip_NativeEvent_Callback = bool (*)(QSizeGrip*, libqt_string, void*, intptr_t*);
    using QSizeGrip_ChangeEvent_Callback = void (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_Metric_Callback = int (*)(const QSizeGrip*, int);
    using QSizeGrip_InitPainter_Callback = void (*)(const QSizeGrip*, QPainter*);
    using QSizeGrip_Redirected_Callback = QPaintDevice* (*)(const QSizeGrip*, QPoint*);
    using QSizeGrip_SharedPainter_Callback = QPainter* (*)(const QSizeGrip*);
    using QSizeGrip_InputMethodEvent_Callback = void (*)(QSizeGrip*, QInputMethodEvent*);
    using QSizeGrip_InputMethodQuery_Callback = QVariant* (*)(const QSizeGrip*, int);
    using QSizeGrip_FocusNextPrevChild_Callback = bool (*)(QSizeGrip*, bool);
    using QSizeGrip_TimerEvent_Callback = void (*)(QSizeGrip*, QTimerEvent*);
    using QSizeGrip_ChildEvent_Callback = void (*)(QSizeGrip*, QChildEvent*);
    using QSizeGrip_CustomEvent_Callback = void (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_ConnectNotify_Callback = void (*)(QSizeGrip*, QMetaMethod*);
    using QSizeGrip_DisconnectNotify_Callback = void (*)(QSizeGrip*, QMetaMethod*);
    using QSizeGrip::create;
    using QSizeGrip::destroy;
    using QSizeGrip::focusNextChild;
    using QSizeGrip::focusPreviousChild;
    using QSizeGrip::getDecodedMetricF;
    using QSizeGrip::isSignalConnected;
    using QSizeGrip::receivers;
    using QSizeGrip::sender;
    using QSizeGrip::senderSignalIndex;
    using QSizeGrip::updateMicroFocus;

    // Instance callback storage
    QSizeGrip_MetaObject_Callback qsizegrip_metaobject_callback = nullptr;
    QSizeGrip_Metacast_Callback qsizegrip_metacast_callback = nullptr;
    QSizeGrip_Metacall_Callback qsizegrip_metacall_callback = nullptr;
    QSizeGrip_SizeHint_Callback qsizegrip_sizehint_callback = nullptr;
    QSizeGrip_SetVisible_Callback qsizegrip_setvisible_callback = nullptr;
    QSizeGrip_PaintEvent_Callback qsizegrip_paintevent_callback = nullptr;
    QSizeGrip_MousePressEvent_Callback qsizegrip_mousepressevent_callback = nullptr;
    QSizeGrip_MouseMoveEvent_Callback qsizegrip_mousemoveevent_callback = nullptr;
    QSizeGrip_MouseReleaseEvent_Callback qsizegrip_mousereleaseevent_callback = nullptr;
    QSizeGrip_MoveEvent_Callback qsizegrip_moveevent_callback = nullptr;
    QSizeGrip_ShowEvent_Callback qsizegrip_showevent_callback = nullptr;
    QSizeGrip_HideEvent_Callback qsizegrip_hideevent_callback = nullptr;
    QSizeGrip_EventFilter_Callback qsizegrip_eventfilter_callback = nullptr;
    QSizeGrip_Event_Callback qsizegrip_event_callback = nullptr;
    QSizeGrip_DevType_Callback qsizegrip_devtype_callback = nullptr;
    QSizeGrip_MinimumSizeHint_Callback qsizegrip_minimumsizehint_callback = nullptr;
    QSizeGrip_HeightForWidth_Callback qsizegrip_heightforwidth_callback = nullptr;
    QSizeGrip_HasHeightForWidth_Callback qsizegrip_hasheightforwidth_callback = nullptr;
    QSizeGrip_PaintEngine_Callback qsizegrip_paintengine_callback = nullptr;
    QSizeGrip_MouseDoubleClickEvent_Callback qsizegrip_mousedoubleclickevent_callback = nullptr;
    QSizeGrip_WheelEvent_Callback qsizegrip_wheelevent_callback = nullptr;
    QSizeGrip_KeyPressEvent_Callback qsizegrip_keypressevent_callback = nullptr;
    QSizeGrip_KeyReleaseEvent_Callback qsizegrip_keyreleaseevent_callback = nullptr;
    QSizeGrip_FocusInEvent_Callback qsizegrip_focusinevent_callback = nullptr;
    QSizeGrip_FocusOutEvent_Callback qsizegrip_focusoutevent_callback = nullptr;
    QSizeGrip_EnterEvent_Callback qsizegrip_enterevent_callback = nullptr;
    QSizeGrip_LeaveEvent_Callback qsizegrip_leaveevent_callback = nullptr;
    QSizeGrip_ResizeEvent_Callback qsizegrip_resizeevent_callback = nullptr;
    QSizeGrip_CloseEvent_Callback qsizegrip_closeevent_callback = nullptr;
    QSizeGrip_ContextMenuEvent_Callback qsizegrip_contextmenuevent_callback = nullptr;
    QSizeGrip_TabletEvent_Callback qsizegrip_tabletevent_callback = nullptr;
    QSizeGrip_ActionEvent_Callback qsizegrip_actionevent_callback = nullptr;
    QSizeGrip_DragEnterEvent_Callback qsizegrip_dragenterevent_callback = nullptr;
    QSizeGrip_DragMoveEvent_Callback qsizegrip_dragmoveevent_callback = nullptr;
    QSizeGrip_DragLeaveEvent_Callback qsizegrip_dragleaveevent_callback = nullptr;
    QSizeGrip_DropEvent_Callback qsizegrip_dropevent_callback = nullptr;
    QSizeGrip_NativeEvent_Callback qsizegrip_nativeevent_callback = nullptr;
    QSizeGrip_ChangeEvent_Callback qsizegrip_changeevent_callback = nullptr;
    QSizeGrip_Metric_Callback qsizegrip_metric_callback = nullptr;
    QSizeGrip_InitPainter_Callback qsizegrip_initpainter_callback = nullptr;
    QSizeGrip_Redirected_Callback qsizegrip_redirected_callback = nullptr;
    QSizeGrip_SharedPainter_Callback qsizegrip_sharedpainter_callback = nullptr;
    QSizeGrip_InputMethodEvent_Callback qsizegrip_inputmethodevent_callback = nullptr;
    QSizeGrip_InputMethodQuery_Callback qsizegrip_inputmethodquery_callback = nullptr;
    QSizeGrip_FocusNextPrevChild_Callback qsizegrip_focusnextprevchild_callback = nullptr;
    QSizeGrip_TimerEvent_Callback qsizegrip_timerevent_callback = nullptr;
    QSizeGrip_ChildEvent_Callback qsizegrip_childevent_callback = nullptr;
    QSizeGrip_CustomEvent_Callback qsizegrip_customevent_callback = nullptr;
    QSizeGrip_ConnectNotify_Callback qsizegrip_connectnotify_callback = nullptr;
    QSizeGrip_DisconnectNotify_Callback qsizegrip_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSizeGrip {
        using QSizeGrip::actionEvent;
        using QSizeGrip::changeEvent;
        using QSizeGrip::childEvent;
        using QSizeGrip::closeEvent;
        using QSizeGrip::connectNotify;
        using QSizeGrip::contextMenuEvent;
        using QSizeGrip::customEvent;
        using QSizeGrip::disconnectNotify;
        using QSizeGrip::dragEnterEvent;
        using QSizeGrip::dragLeaveEvent;
        using QSizeGrip::dragMoveEvent;
        using QSizeGrip::dropEvent;
        using QSizeGrip::enterEvent;
        using QSizeGrip::event;
        using QSizeGrip::eventFilter;
        using QSizeGrip::focusInEvent;
        using QSizeGrip::focusNextPrevChild;
        using QSizeGrip::focusOutEvent;
        using QSizeGrip::hideEvent;
        using QSizeGrip::initPainter;
        using QSizeGrip::inputMethodEvent;
        using QSizeGrip::keyPressEvent;
        using QSizeGrip::keyReleaseEvent;
        using QSizeGrip::leaveEvent;
        using QSizeGrip::metric;
        using QSizeGrip::mouseDoubleClickEvent;
        using QSizeGrip::mouseMoveEvent;
        using QSizeGrip::mousePressEvent;
        using QSizeGrip::mouseReleaseEvent;
        using QSizeGrip::moveEvent;
        using QSizeGrip::nativeEvent;
        using QSizeGrip::paintEvent;
        using QSizeGrip::redirected;
        using QSizeGrip::resizeEvent;
        using QSizeGrip::sharedPainter;
        using QSizeGrip::showEvent;
        using QSizeGrip::tabletEvent;
        using QSizeGrip::timerEvent;
        using QSizeGrip::wheelEvent;
    };

    VirtualQSizeGrip(QWidget* parent) : QSizeGrip(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsizegrip_metaobject_callback) {
            QMetaObject* callback_ret = qsizegrip_metaobject_callback(this);
            return callback_ret;
        }
        return QSizeGrip::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsizegrip_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsizegrip_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSizeGrip::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsizegrip_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsizegrip_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSizeGrip::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsizegrip_sizehint_callback) {
            QSize* callback_ret = qsizegrip_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSizeGrip::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsizegrip_setvisible_callback) {
            bool cbval1 = visible;
            qsizegrip_setvisible_callback(this, cbval1);
            return;
        }
        QSizeGrip::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsizegrip_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qsizegrip_paintevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qsizegrip_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qsizegrip_mousepressevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qsizegrip_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qsizegrip_mousemoveevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
        if (qsizegrip_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = mouseEvent;
            qsizegrip_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::mouseReleaseEvent(mouseEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* moveEvent) override {
        if (qsizegrip_moveevent_callback) {
            QMoveEvent* cbval1 = moveEvent;
            qsizegrip_moveevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::moveEvent(moveEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* showEvent) override {
        if (qsizegrip_showevent_callback) {
            QShowEvent* cbval1 = showEvent;
            qsizegrip_showevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::showEvent(showEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* hideEvent) override {
        if (qsizegrip_hideevent_callback) {
            QHideEvent* cbval1 = hideEvent;
            qsizegrip_hideevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::hideEvent(hideEvent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qsizegrip_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qsizegrip_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSizeGrip::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsizegrip_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qsizegrip_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSizeGrip::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsizegrip_devtype_callback) {
            int callback_ret = qsizegrip_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSizeGrip::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsizegrip_minimumsizehint_callback) {
            QSize* callback_ret = qsizegrip_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSizeGrip::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsizegrip_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qsizegrip_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSizeGrip::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsizegrip_hasheightforwidth_callback) {
            bool callback_ret = qsizegrip_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QSizeGrip::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsizegrip_paintengine_callback) {
            QPaintEngine* callback_ret = qsizegrip_paintengine_callback(this);
            return callback_ret;
        }
        return QSizeGrip::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsizegrip_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qsizegrip_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsizegrip_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qsizegrip_wheelevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsizegrip_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qsizegrip_keypressevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsizegrip_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qsizegrip_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsizegrip_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qsizegrip_focusinevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsizegrip_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qsizegrip_focusoutevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsizegrip_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qsizegrip_enterevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsizegrip_leaveevent_callback) {
            QEvent* cbval1 = event;
            qsizegrip_leaveevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qsizegrip_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qsizegrip_resizeevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsizegrip_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qsizegrip_closeevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsizegrip_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qsizegrip_contextmenuevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsizegrip_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qsizegrip_tabletevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsizegrip_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qsizegrip_actionevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsizegrip_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qsizegrip_dragenterevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsizegrip_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qsizegrip_dragmoveevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsizegrip_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qsizegrip_dragleaveevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsizegrip_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qsizegrip_dropevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsizegrip_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qsizegrip_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QSizeGrip::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsizegrip_changeevent_callback) {
            QEvent* cbval1 = param1;
            qsizegrip_changeevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsizegrip_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsizegrip_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSizeGrip::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsizegrip_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsizegrip_initpainter_callback(this, cbval1);
            return;
        }
        QSizeGrip::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsizegrip_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsizegrip_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSizeGrip::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsizegrip_sharedpainter_callback) {
            QPainter* callback_ret = qsizegrip_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSizeGrip::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsizegrip_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qsizegrip_inputmethodevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsizegrip_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qsizegrip_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSizeGrip::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsizegrip_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qsizegrip_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QSizeGrip::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsizegrip_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsizegrip_timerevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsizegrip_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsizegrip_childevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsizegrip_customevent_callback) {
            QEvent* cbval1 = event;
            qsizegrip_customevent_callback(this, cbval1);
            return;
        }
        QSizeGrip::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsizegrip_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsizegrip_connectnotify_callback(this, cbval1);
            return;
        }
        QSizeGrip::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsizegrip_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsizegrip_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSizeGrip::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSizeGrip_SuperPaintEvent(QSizeGrip* self, QPaintEvent* param1);
    friend void QSizeGrip_SuperMousePressEvent(QSizeGrip* self, QMouseEvent* param1);
    friend void QSizeGrip_SuperMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1);
    friend void QSizeGrip_SuperMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent);
    friend void QSizeGrip_SuperMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent);
    friend void QSizeGrip_SuperShowEvent(QSizeGrip* self, QShowEvent* showEvent);
    friend void QSizeGrip_SuperHideEvent(QSizeGrip* self, QHideEvent* hideEvent);
    friend bool QSizeGrip_SuperEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2);
    friend bool QSizeGrip_SuperEvent(QSizeGrip* self, QEvent* param1);
    friend void QSizeGrip_SuperMouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event);
    friend void QSizeGrip_SuperWheelEvent(QSizeGrip* self, QWheelEvent* event);
    friend void QSizeGrip_SuperKeyPressEvent(QSizeGrip* self, QKeyEvent* event);
    friend void QSizeGrip_SuperKeyReleaseEvent(QSizeGrip* self, QKeyEvent* event);
    friend void QSizeGrip_SuperFocusInEvent(QSizeGrip* self, QFocusEvent* event);
    friend void QSizeGrip_SuperFocusOutEvent(QSizeGrip* self, QFocusEvent* event);
    friend void QSizeGrip_SuperEnterEvent(QSizeGrip* self, QEnterEvent* event);
    friend void QSizeGrip_SuperLeaveEvent(QSizeGrip* self, QEvent* event);
    friend void QSizeGrip_SuperResizeEvent(QSizeGrip* self, QResizeEvent* event);
    friend void QSizeGrip_SuperCloseEvent(QSizeGrip* self, QCloseEvent* event);
    friend void QSizeGrip_SuperContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event);
    friend void QSizeGrip_SuperTabletEvent(QSizeGrip* self, QTabletEvent* event);
    friend void QSizeGrip_SuperActionEvent(QSizeGrip* self, QActionEvent* event);
    friend void QSizeGrip_SuperDragEnterEvent(QSizeGrip* self, QDragEnterEvent* event);
    friend void QSizeGrip_SuperDragMoveEvent(QSizeGrip* self, QDragMoveEvent* event);
    friend void QSizeGrip_SuperDragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event);
    friend void QSizeGrip_SuperDropEvent(QSizeGrip* self, QDropEvent* event);
    friend bool QSizeGrip_SuperNativeEvent(QSizeGrip* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QSizeGrip_SuperChangeEvent(QSizeGrip* self, QEvent* param1);
    friend int QSizeGrip_SuperMetric(const QSizeGrip* self, int param1);
    friend void QSizeGrip_SuperInitPainter(const QSizeGrip* self, QPainter* painter);
    friend QPaintDevice* QSizeGrip_SuperRedirected(const QSizeGrip* self, QPoint* offset);
    friend QPainter* QSizeGrip_SuperSharedPainter(const QSizeGrip* self);
    friend void QSizeGrip_SuperInputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1);
    friend bool QSizeGrip_SuperFocusNextPrevChild(QSizeGrip* self, bool next);
    friend void QSizeGrip_SuperTimerEvent(QSizeGrip* self, QTimerEvent* event);
    friend void QSizeGrip_SuperChildEvent(QSizeGrip* self, QChildEvent* event);
    friend void QSizeGrip_SuperCustomEvent(QSizeGrip* self, QEvent* event);
    friend void QSizeGrip_SuperConnectNotify(QSizeGrip* self, const QMetaMethod* signal);
    friend void QSizeGrip_SuperDisconnectNotify(QSizeGrip* self, const QMetaMethod* signal);
};

#endif
