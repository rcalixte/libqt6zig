#pragma once
#ifndef LIBQABSTRACTBUTTON_HXX
#define LIBQABSTRACTBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractButton
class VirtualQAbstractButton : public QAbstractButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractButton_MetaObject_Callback = QMetaObject* (*)(const QAbstractButton*);
    using QAbstractButton_Metacast_Callback = void* (*)(QAbstractButton*, const char*);
    using QAbstractButton_Metacall_Callback = int (*)(QAbstractButton*, int, int, void**);
    using QAbstractButton_PaintEvent_Callback = void (*)(QAbstractButton*, QPaintEvent*);
    using QAbstractButton_HitButton_Callback = bool (*)(const QAbstractButton*, QPoint*);
    using QAbstractButton_CheckStateSet_Callback = void (*)(QAbstractButton*);
    using QAbstractButton_NextCheckState_Callback = void (*)(QAbstractButton*);
    using QAbstractButton_Event_Callback = bool (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_KeyPressEvent_Callback = void (*)(QAbstractButton*, QKeyEvent*);
    using QAbstractButton_KeyReleaseEvent_Callback = void (*)(QAbstractButton*, QKeyEvent*);
    using QAbstractButton_MousePressEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_MouseReleaseEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_MouseMoveEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_FocusInEvent_Callback = void (*)(QAbstractButton*, QFocusEvent*);
    using QAbstractButton_FocusOutEvent_Callback = void (*)(QAbstractButton*, QFocusEvent*);
    using QAbstractButton_ChangeEvent_Callback = void (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_TimerEvent_Callback = void (*)(QAbstractButton*, QTimerEvent*);
    using QAbstractButton_DevType_Callback = int (*)(const QAbstractButton*);
    using QAbstractButton_SetVisible_Callback = void (*)(QAbstractButton*, bool);
    using QAbstractButton_SizeHint_Callback = QSize* (*)(const QAbstractButton*);
    using QAbstractButton_MinimumSizeHint_Callback = QSize* (*)(const QAbstractButton*);
    using QAbstractButton_HeightForWidth_Callback = int (*)(const QAbstractButton*, int);
    using QAbstractButton_HasHeightForWidth_Callback = bool (*)(const QAbstractButton*);
    using QAbstractButton_PaintEngine_Callback = QPaintEngine* (*)(const QAbstractButton*);
    using QAbstractButton_MouseDoubleClickEvent_Callback = void (*)(QAbstractButton*, QMouseEvent*);
    using QAbstractButton_WheelEvent_Callback = void (*)(QAbstractButton*, QWheelEvent*);
    using QAbstractButton_EnterEvent_Callback = void (*)(QAbstractButton*, QEnterEvent*);
    using QAbstractButton_LeaveEvent_Callback = void (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_MoveEvent_Callback = void (*)(QAbstractButton*, QMoveEvent*);
    using QAbstractButton_ResizeEvent_Callback = void (*)(QAbstractButton*, QResizeEvent*);
    using QAbstractButton_CloseEvent_Callback = void (*)(QAbstractButton*, QCloseEvent*);
    using QAbstractButton_ContextMenuEvent_Callback = void (*)(QAbstractButton*, QContextMenuEvent*);
    using QAbstractButton_TabletEvent_Callback = void (*)(QAbstractButton*, QTabletEvent*);
    using QAbstractButton_ActionEvent_Callback = void (*)(QAbstractButton*, QActionEvent*);
    using QAbstractButton_DragEnterEvent_Callback = void (*)(QAbstractButton*, QDragEnterEvent*);
    using QAbstractButton_DragMoveEvent_Callback = void (*)(QAbstractButton*, QDragMoveEvent*);
    using QAbstractButton_DragLeaveEvent_Callback = void (*)(QAbstractButton*, QDragLeaveEvent*);
    using QAbstractButton_DropEvent_Callback = void (*)(QAbstractButton*, QDropEvent*);
    using QAbstractButton_ShowEvent_Callback = void (*)(QAbstractButton*, QShowEvent*);
    using QAbstractButton_HideEvent_Callback = void (*)(QAbstractButton*, QHideEvent*);
    using QAbstractButton_NativeEvent_Callback = bool (*)(QAbstractButton*, libqt_string, void*, intptr_t*);
    using QAbstractButton_Metric_Callback = int (*)(const QAbstractButton*, int);
    using QAbstractButton_InitPainter_Callback = void (*)(const QAbstractButton*, QPainter*);
    using QAbstractButton_Redirected_Callback = QPaintDevice* (*)(const QAbstractButton*, QPoint*);
    using QAbstractButton_SharedPainter_Callback = QPainter* (*)(const QAbstractButton*);
    using QAbstractButton_InputMethodEvent_Callback = void (*)(QAbstractButton*, QInputMethodEvent*);
    using QAbstractButton_InputMethodQuery_Callback = QVariant* (*)(const QAbstractButton*, int);
    using QAbstractButton_FocusNextPrevChild_Callback = bool (*)(QAbstractButton*, bool);
    using QAbstractButton_EventFilter_Callback = bool (*)(QAbstractButton*, QObject*, QEvent*);
    using QAbstractButton_ChildEvent_Callback = void (*)(QAbstractButton*, QChildEvent*);
    using QAbstractButton_CustomEvent_Callback = void (*)(QAbstractButton*, QEvent*);
    using QAbstractButton_ConnectNotify_Callback = void (*)(QAbstractButton*, QMetaMethod*);
    using QAbstractButton_DisconnectNotify_Callback = void (*)(QAbstractButton*, QMetaMethod*);
    using QAbstractButton::create;
    using QAbstractButton::destroy;
    using QAbstractButton::focusNextChild;
    using QAbstractButton::focusPreviousChild;
    using QAbstractButton::getDecodedMetricF;
    using QAbstractButton::isSignalConnected;
    using QAbstractButton::receivers;
    using QAbstractButton::sender;
    using QAbstractButton::senderSignalIndex;
    using QAbstractButton::updateMicroFocus;

    // Instance callback storage
    QAbstractButton_MetaObject_Callback qabstractbutton_metaobject_callback = nullptr;
    QAbstractButton_Metacast_Callback qabstractbutton_metacast_callback = nullptr;
    QAbstractButton_Metacall_Callback qabstractbutton_metacall_callback = nullptr;
    QAbstractButton_PaintEvent_Callback qabstractbutton_paintevent_callback = nullptr;
    QAbstractButton_HitButton_Callback qabstractbutton_hitbutton_callback = nullptr;
    QAbstractButton_CheckStateSet_Callback qabstractbutton_checkstateset_callback = nullptr;
    QAbstractButton_NextCheckState_Callback qabstractbutton_nextcheckstate_callback = nullptr;
    QAbstractButton_Event_Callback qabstractbutton_event_callback = nullptr;
    QAbstractButton_KeyPressEvent_Callback qabstractbutton_keypressevent_callback = nullptr;
    QAbstractButton_KeyReleaseEvent_Callback qabstractbutton_keyreleaseevent_callback = nullptr;
    QAbstractButton_MousePressEvent_Callback qabstractbutton_mousepressevent_callback = nullptr;
    QAbstractButton_MouseReleaseEvent_Callback qabstractbutton_mousereleaseevent_callback = nullptr;
    QAbstractButton_MouseMoveEvent_Callback qabstractbutton_mousemoveevent_callback = nullptr;
    QAbstractButton_FocusInEvent_Callback qabstractbutton_focusinevent_callback = nullptr;
    QAbstractButton_FocusOutEvent_Callback qabstractbutton_focusoutevent_callback = nullptr;
    QAbstractButton_ChangeEvent_Callback qabstractbutton_changeevent_callback = nullptr;
    QAbstractButton_TimerEvent_Callback qabstractbutton_timerevent_callback = nullptr;
    QAbstractButton_DevType_Callback qabstractbutton_devtype_callback = nullptr;
    QAbstractButton_SetVisible_Callback qabstractbutton_setvisible_callback = nullptr;
    QAbstractButton_SizeHint_Callback qabstractbutton_sizehint_callback = nullptr;
    QAbstractButton_MinimumSizeHint_Callback qabstractbutton_minimumsizehint_callback = nullptr;
    QAbstractButton_HeightForWidth_Callback qabstractbutton_heightforwidth_callback = nullptr;
    QAbstractButton_HasHeightForWidth_Callback qabstractbutton_hasheightforwidth_callback = nullptr;
    QAbstractButton_PaintEngine_Callback qabstractbutton_paintengine_callback = nullptr;
    QAbstractButton_MouseDoubleClickEvent_Callback qabstractbutton_mousedoubleclickevent_callback = nullptr;
    QAbstractButton_WheelEvent_Callback qabstractbutton_wheelevent_callback = nullptr;
    QAbstractButton_EnterEvent_Callback qabstractbutton_enterevent_callback = nullptr;
    QAbstractButton_LeaveEvent_Callback qabstractbutton_leaveevent_callback = nullptr;
    QAbstractButton_MoveEvent_Callback qabstractbutton_moveevent_callback = nullptr;
    QAbstractButton_ResizeEvent_Callback qabstractbutton_resizeevent_callback = nullptr;
    QAbstractButton_CloseEvent_Callback qabstractbutton_closeevent_callback = nullptr;
    QAbstractButton_ContextMenuEvent_Callback qabstractbutton_contextmenuevent_callback = nullptr;
    QAbstractButton_TabletEvent_Callback qabstractbutton_tabletevent_callback = nullptr;
    QAbstractButton_ActionEvent_Callback qabstractbutton_actionevent_callback = nullptr;
    QAbstractButton_DragEnterEvent_Callback qabstractbutton_dragenterevent_callback = nullptr;
    QAbstractButton_DragMoveEvent_Callback qabstractbutton_dragmoveevent_callback = nullptr;
    QAbstractButton_DragLeaveEvent_Callback qabstractbutton_dragleaveevent_callback = nullptr;
    QAbstractButton_DropEvent_Callback qabstractbutton_dropevent_callback = nullptr;
    QAbstractButton_ShowEvent_Callback qabstractbutton_showevent_callback = nullptr;
    QAbstractButton_HideEvent_Callback qabstractbutton_hideevent_callback = nullptr;
    QAbstractButton_NativeEvent_Callback qabstractbutton_nativeevent_callback = nullptr;
    QAbstractButton_Metric_Callback qabstractbutton_metric_callback = nullptr;
    QAbstractButton_InitPainter_Callback qabstractbutton_initpainter_callback = nullptr;
    QAbstractButton_Redirected_Callback qabstractbutton_redirected_callback = nullptr;
    QAbstractButton_SharedPainter_Callback qabstractbutton_sharedpainter_callback = nullptr;
    QAbstractButton_InputMethodEvent_Callback qabstractbutton_inputmethodevent_callback = nullptr;
    QAbstractButton_InputMethodQuery_Callback qabstractbutton_inputmethodquery_callback = nullptr;
    QAbstractButton_FocusNextPrevChild_Callback qabstractbutton_focusnextprevchild_callback = nullptr;
    QAbstractButton_EventFilter_Callback qabstractbutton_eventfilter_callback = nullptr;
    QAbstractButton_ChildEvent_Callback qabstractbutton_childevent_callback = nullptr;
    QAbstractButton_CustomEvent_Callback qabstractbutton_customevent_callback = nullptr;
    QAbstractButton_ConnectNotify_Callback qabstractbutton_connectnotify_callback = nullptr;
    QAbstractButton_DisconnectNotify_Callback qabstractbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractButton {
        using QAbstractButton::actionEvent;
        using QAbstractButton::changeEvent;
        using QAbstractButton::checkStateSet;
        using QAbstractButton::childEvent;
        using QAbstractButton::closeEvent;
        using QAbstractButton::connectNotify;
        using QAbstractButton::contextMenuEvent;
        using QAbstractButton::customEvent;
        using QAbstractButton::disconnectNotify;
        using QAbstractButton::dragEnterEvent;
        using QAbstractButton::dragLeaveEvent;
        using QAbstractButton::dragMoveEvent;
        using QAbstractButton::dropEvent;
        using QAbstractButton::enterEvent;
        using QAbstractButton::event;
        using QAbstractButton::focusInEvent;
        using QAbstractButton::focusNextPrevChild;
        using QAbstractButton::focusOutEvent;
        using QAbstractButton::hideEvent;
        using QAbstractButton::hitButton;
        using QAbstractButton::initPainter;
        using QAbstractButton::inputMethodEvent;
        using QAbstractButton::keyPressEvent;
        using QAbstractButton::keyReleaseEvent;
        using QAbstractButton::leaveEvent;
        using QAbstractButton::metric;
        using QAbstractButton::mouseDoubleClickEvent;
        using QAbstractButton::mouseMoveEvent;
        using QAbstractButton::mousePressEvent;
        using QAbstractButton::mouseReleaseEvent;
        using QAbstractButton::moveEvent;
        using QAbstractButton::nativeEvent;
        using QAbstractButton::nextCheckState;
        using QAbstractButton::paintEvent;
        using QAbstractButton::redirected;
        using QAbstractButton::resizeEvent;
        using QAbstractButton::sharedPainter;
        using QAbstractButton::showEvent;
        using QAbstractButton::tabletEvent;
        using QAbstractButton::timerEvent;
        using QAbstractButton::wheelEvent;
    };

    VirtualQAbstractButton(QWidget* parent) : QAbstractButton(parent) {};
    VirtualQAbstractButton() : QAbstractButton() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractbutton_metaobject_callback) {
            QMetaObject* callback_ret = qabstractbutton_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qabstractbutton_paintevent_callback) {
            QPaintEvent* cbval1 = e;
            qabstractbutton_paintevent_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractButton::paintEvent called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qabstractbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = qabstractbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qabstractbutton_checkstateset_callback) {
            qabstractbutton_checkstateset_callback(this);
            return;
        }
        QAbstractButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qabstractbutton_nextcheckstate_callback) {
            qabstractbutton_nextcheckstate_callback(this);
            return;
        }
        QAbstractButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qabstractbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qabstractbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qabstractbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qabstractbutton_keypressevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qabstractbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qabstractbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qabstractbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qabstractbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qabstractbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qabstractbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qabstractbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qabstractbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qabstractbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qabstractbutton_focusinevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qabstractbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qabstractbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qabstractbutton_changeevent_callback) {
            QEvent* cbval1 = e;
            qabstractbutton_changeevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qabstractbutton_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qabstractbutton_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractbutton_devtype_callback) {
            int callback_ret = qabstractbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAbstractButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractbutton_setvisible_callback) {
            bool cbval1 = visible;
            qabstractbutton_setvisible_callback(this, cbval1);
            return;
        }
        QAbstractButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractbutton_sizehint_callback) {
            QSize* callback_ret = qabstractbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractbutton_minimumsizehint_callback) {
            QSize* callback_ret = qabstractbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qabstractbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractbutton_hasheightforwidth_callback) {
            bool callback_ret = qabstractbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QAbstractButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractbutton_paintengine_callback) {
            QPaintEngine* callback_ret = qabstractbutton_paintengine_callback(this);
            return callback_ret;
        }
        return QAbstractButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qabstractbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qabstractbutton_wheelevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractbutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qabstractbutton_enterevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractbutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            qabstractbutton_leaveevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qabstractbutton_moveevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qabstractbutton_resizeevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qabstractbutton_closeevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qabstractbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qabstractbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qabstractbutton_tabletevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractbutton_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qabstractbutton_actionevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qabstractbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qabstractbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qabstractbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qabstractbutton_dropevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            qabstractbutton_showevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qabstractbutton_hideevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qabstractbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QAbstractButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qabstractbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            qabstractbutton_initpainter_callback(this, cbval1);
            return;
        }
        QAbstractButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qabstractbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractbutton_sharedpainter_callback) {
            QPainter* callback_ret = qabstractbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return QAbstractButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qabstractbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qabstractbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qabstractbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractbutton_childevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractbutton_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractbutton_customevent_callback(this, cbval1);
            return;
        }
        QAbstractButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractbutton_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QAbstractButton_SuperHitButton(const QAbstractButton* self, const QPoint* pos);
    friend void QAbstractButton_SuperCheckStateSet(QAbstractButton* self);
    friend void QAbstractButton_SuperNextCheckState(QAbstractButton* self);
    friend bool QAbstractButton_SuperEvent(QAbstractButton* self, QEvent* e);
    friend void QAbstractButton_SuperKeyPressEvent(QAbstractButton* self, QKeyEvent* e);
    friend void QAbstractButton_SuperKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
    friend void QAbstractButton_SuperMousePressEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_SuperMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_SuperMouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
    friend void QAbstractButton_SuperFocusInEvent(QAbstractButton* self, QFocusEvent* e);
    friend void QAbstractButton_SuperFocusOutEvent(QAbstractButton* self, QFocusEvent* e);
    friend void QAbstractButton_SuperChangeEvent(QAbstractButton* self, QEvent* e);
    friend void QAbstractButton_SuperTimerEvent(QAbstractButton* self, QTimerEvent* e);
    friend void QAbstractButton_SuperMouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event);
    friend void QAbstractButton_SuperWheelEvent(QAbstractButton* self, QWheelEvent* event);
    friend void QAbstractButton_SuperEnterEvent(QAbstractButton* self, QEnterEvent* event);
    friend void QAbstractButton_SuperLeaveEvent(QAbstractButton* self, QEvent* event);
    friend void QAbstractButton_SuperMoveEvent(QAbstractButton* self, QMoveEvent* event);
    friend void QAbstractButton_SuperResizeEvent(QAbstractButton* self, QResizeEvent* event);
    friend void QAbstractButton_SuperCloseEvent(QAbstractButton* self, QCloseEvent* event);
    friend void QAbstractButton_SuperContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event);
    friend void QAbstractButton_SuperTabletEvent(QAbstractButton* self, QTabletEvent* event);
    friend void QAbstractButton_SuperActionEvent(QAbstractButton* self, QActionEvent* event);
    friend void QAbstractButton_SuperDragEnterEvent(QAbstractButton* self, QDragEnterEvent* event);
    friend void QAbstractButton_SuperDragMoveEvent(QAbstractButton* self, QDragMoveEvent* event);
    friend void QAbstractButton_SuperDragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event);
    friend void QAbstractButton_SuperDropEvent(QAbstractButton* self, QDropEvent* event);
    friend void QAbstractButton_SuperShowEvent(QAbstractButton* self, QShowEvent* event);
    friend void QAbstractButton_SuperHideEvent(QAbstractButton* self, QHideEvent* event);
    friend bool QAbstractButton_SuperNativeEvent(QAbstractButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractButton_SuperMetric(const QAbstractButton* self, int param1);
    friend void QAbstractButton_SuperInitPainter(const QAbstractButton* self, QPainter* painter);
    friend QPaintDevice* QAbstractButton_SuperRedirected(const QAbstractButton* self, QPoint* offset);
    friend QPainter* QAbstractButton_SuperSharedPainter(const QAbstractButton* self);
    friend void QAbstractButton_SuperInputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1);
    friend bool QAbstractButton_SuperFocusNextPrevChild(QAbstractButton* self, bool next);
    friend void QAbstractButton_SuperChildEvent(QAbstractButton* self, QChildEvent* event);
    friend void QAbstractButton_SuperCustomEvent(QAbstractButton* self, QEvent* event);
    friend void QAbstractButton_SuperConnectNotify(QAbstractButton* self, const QMetaMethod* signal);
    friend void QAbstractButton_SuperDisconnectNotify(QAbstractButton* self, const QMetaMethod* signal);
};

#endif
