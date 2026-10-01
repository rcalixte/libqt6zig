#pragma once
#ifndef LIBQPUSHBUTTON_HXX
#define LIBQPUSHBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPushButton
class VirtualQPushButton final : public QPushButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPushButton_MetaObject_Callback = QMetaObject* (*)(const QPushButton*);
    using QPushButton_Metacast_Callback = void* (*)(QPushButton*, const char*);
    using QPushButton_Metacall_Callback = int (*)(QPushButton*, int, int, void**);
    using QPushButton_SizeHint_Callback = QSize* (*)(const QPushButton*);
    using QPushButton_MinimumSizeHint_Callback = QSize* (*)(const QPushButton*);
    using QPushButton_Event_Callback = bool (*)(QPushButton*, QEvent*);
    using QPushButton_PaintEvent_Callback = void (*)(QPushButton*, QPaintEvent*);
    using QPushButton_KeyPressEvent_Callback = void (*)(QPushButton*, QKeyEvent*);
    using QPushButton_FocusInEvent_Callback = void (*)(QPushButton*, QFocusEvent*);
    using QPushButton_FocusOutEvent_Callback = void (*)(QPushButton*, QFocusEvent*);
    using QPushButton_MouseMoveEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_InitStyleOption_Callback = void (*)(const QPushButton*, QStyleOptionButton*);
    using QPushButton_HitButton_Callback = bool (*)(const QPushButton*, QPoint*);
    using QPushButton_CheckStateSet_Callback = void (*)(QPushButton*);
    using QPushButton_NextCheckState_Callback = void (*)(QPushButton*);
    using QPushButton_KeyReleaseEvent_Callback = void (*)(QPushButton*, QKeyEvent*);
    using QPushButton_MousePressEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_MouseReleaseEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_ChangeEvent_Callback = void (*)(QPushButton*, QEvent*);
    using QPushButton_TimerEvent_Callback = void (*)(QPushButton*, QTimerEvent*);
    using QPushButton_DevType_Callback = int (*)(const QPushButton*);
    using QPushButton_SetVisible_Callback = void (*)(QPushButton*, bool);
    using QPushButton_HeightForWidth_Callback = int (*)(const QPushButton*, int);
    using QPushButton_HasHeightForWidth_Callback = bool (*)(const QPushButton*);
    using QPushButton_PaintEngine_Callback = QPaintEngine* (*)(const QPushButton*);
    using QPushButton_MouseDoubleClickEvent_Callback = void (*)(QPushButton*, QMouseEvent*);
    using QPushButton_WheelEvent_Callback = void (*)(QPushButton*, QWheelEvent*);
    using QPushButton_EnterEvent_Callback = void (*)(QPushButton*, QEnterEvent*);
    using QPushButton_LeaveEvent_Callback = void (*)(QPushButton*, QEvent*);
    using QPushButton_MoveEvent_Callback = void (*)(QPushButton*, QMoveEvent*);
    using QPushButton_ResizeEvent_Callback = void (*)(QPushButton*, QResizeEvent*);
    using QPushButton_CloseEvent_Callback = void (*)(QPushButton*, QCloseEvent*);
    using QPushButton_ContextMenuEvent_Callback = void (*)(QPushButton*, QContextMenuEvent*);
    using QPushButton_TabletEvent_Callback = void (*)(QPushButton*, QTabletEvent*);
    using QPushButton_ActionEvent_Callback = void (*)(QPushButton*, QActionEvent*);
    using QPushButton_DragEnterEvent_Callback = void (*)(QPushButton*, QDragEnterEvent*);
    using QPushButton_DragMoveEvent_Callback = void (*)(QPushButton*, QDragMoveEvent*);
    using QPushButton_DragLeaveEvent_Callback = void (*)(QPushButton*, QDragLeaveEvent*);
    using QPushButton_DropEvent_Callback = void (*)(QPushButton*, QDropEvent*);
    using QPushButton_ShowEvent_Callback = void (*)(QPushButton*, QShowEvent*);
    using QPushButton_HideEvent_Callback = void (*)(QPushButton*, QHideEvent*);
    using QPushButton_NativeEvent_Callback = bool (*)(QPushButton*, libqt_string, void*, intptr_t*);
    using QPushButton_Metric_Callback = int (*)(const QPushButton*, int);
    using QPushButton_InitPainter_Callback = void (*)(const QPushButton*, QPainter*);
    using QPushButton_Redirected_Callback = QPaintDevice* (*)(const QPushButton*, QPoint*);
    using QPushButton_SharedPainter_Callback = QPainter* (*)(const QPushButton*);
    using QPushButton_InputMethodEvent_Callback = void (*)(QPushButton*, QInputMethodEvent*);
    using QPushButton_InputMethodQuery_Callback = QVariant* (*)(const QPushButton*, int);
    using QPushButton_FocusNextPrevChild_Callback = bool (*)(QPushButton*, bool);
    using QPushButton_EventFilter_Callback = bool (*)(QPushButton*, QObject*, QEvent*);
    using QPushButton_ChildEvent_Callback = void (*)(QPushButton*, QChildEvent*);
    using QPushButton_CustomEvent_Callback = void (*)(QPushButton*, QEvent*);
    using QPushButton_ConnectNotify_Callback = void (*)(QPushButton*, QMetaMethod*);
    using QPushButton_DisconnectNotify_Callback = void (*)(QPushButton*, QMetaMethod*);
    using QPushButton::create;
    using QPushButton::destroy;
    using QPushButton::focusNextChild;
    using QPushButton::focusPreviousChild;
    using QPushButton::getDecodedMetricF;
    using QPushButton::isSignalConnected;
    using QPushButton::receivers;
    using QPushButton::sender;
    using QPushButton::senderSignalIndex;
    using QPushButton::updateMicroFocus;

    // Instance callback storage
    QPushButton_MetaObject_Callback qpushbutton_metaobject_callback = nullptr;
    QPushButton_Metacast_Callback qpushbutton_metacast_callback = nullptr;
    QPushButton_Metacall_Callback qpushbutton_metacall_callback = nullptr;
    QPushButton_SizeHint_Callback qpushbutton_sizehint_callback = nullptr;
    QPushButton_MinimumSizeHint_Callback qpushbutton_minimumsizehint_callback = nullptr;
    QPushButton_Event_Callback qpushbutton_event_callback = nullptr;
    QPushButton_PaintEvent_Callback qpushbutton_paintevent_callback = nullptr;
    QPushButton_KeyPressEvent_Callback qpushbutton_keypressevent_callback = nullptr;
    QPushButton_FocusInEvent_Callback qpushbutton_focusinevent_callback = nullptr;
    QPushButton_FocusOutEvent_Callback qpushbutton_focusoutevent_callback = nullptr;
    QPushButton_MouseMoveEvent_Callback qpushbutton_mousemoveevent_callback = nullptr;
    QPushButton_InitStyleOption_Callback qpushbutton_initstyleoption_callback = nullptr;
    QPushButton_HitButton_Callback qpushbutton_hitbutton_callback = nullptr;
    QPushButton_CheckStateSet_Callback qpushbutton_checkstateset_callback = nullptr;
    QPushButton_NextCheckState_Callback qpushbutton_nextcheckstate_callback = nullptr;
    QPushButton_KeyReleaseEvent_Callback qpushbutton_keyreleaseevent_callback = nullptr;
    QPushButton_MousePressEvent_Callback qpushbutton_mousepressevent_callback = nullptr;
    QPushButton_MouseReleaseEvent_Callback qpushbutton_mousereleaseevent_callback = nullptr;
    QPushButton_ChangeEvent_Callback qpushbutton_changeevent_callback = nullptr;
    QPushButton_TimerEvent_Callback qpushbutton_timerevent_callback = nullptr;
    QPushButton_DevType_Callback qpushbutton_devtype_callback = nullptr;
    QPushButton_SetVisible_Callback qpushbutton_setvisible_callback = nullptr;
    QPushButton_HeightForWidth_Callback qpushbutton_heightforwidth_callback = nullptr;
    QPushButton_HasHeightForWidth_Callback qpushbutton_hasheightforwidth_callback = nullptr;
    QPushButton_PaintEngine_Callback qpushbutton_paintengine_callback = nullptr;
    QPushButton_MouseDoubleClickEvent_Callback qpushbutton_mousedoubleclickevent_callback = nullptr;
    QPushButton_WheelEvent_Callback qpushbutton_wheelevent_callback = nullptr;
    QPushButton_EnterEvent_Callback qpushbutton_enterevent_callback = nullptr;
    QPushButton_LeaveEvent_Callback qpushbutton_leaveevent_callback = nullptr;
    QPushButton_MoveEvent_Callback qpushbutton_moveevent_callback = nullptr;
    QPushButton_ResizeEvent_Callback qpushbutton_resizeevent_callback = nullptr;
    QPushButton_CloseEvent_Callback qpushbutton_closeevent_callback = nullptr;
    QPushButton_ContextMenuEvent_Callback qpushbutton_contextmenuevent_callback = nullptr;
    QPushButton_TabletEvent_Callback qpushbutton_tabletevent_callback = nullptr;
    QPushButton_ActionEvent_Callback qpushbutton_actionevent_callback = nullptr;
    QPushButton_DragEnterEvent_Callback qpushbutton_dragenterevent_callback = nullptr;
    QPushButton_DragMoveEvent_Callback qpushbutton_dragmoveevent_callback = nullptr;
    QPushButton_DragLeaveEvent_Callback qpushbutton_dragleaveevent_callback = nullptr;
    QPushButton_DropEvent_Callback qpushbutton_dropevent_callback = nullptr;
    QPushButton_ShowEvent_Callback qpushbutton_showevent_callback = nullptr;
    QPushButton_HideEvent_Callback qpushbutton_hideevent_callback = nullptr;
    QPushButton_NativeEvent_Callback qpushbutton_nativeevent_callback = nullptr;
    QPushButton_Metric_Callback qpushbutton_metric_callback = nullptr;
    QPushButton_InitPainter_Callback qpushbutton_initpainter_callback = nullptr;
    QPushButton_Redirected_Callback qpushbutton_redirected_callback = nullptr;
    QPushButton_SharedPainter_Callback qpushbutton_sharedpainter_callback = nullptr;
    QPushButton_InputMethodEvent_Callback qpushbutton_inputmethodevent_callback = nullptr;
    QPushButton_InputMethodQuery_Callback qpushbutton_inputmethodquery_callback = nullptr;
    QPushButton_FocusNextPrevChild_Callback qpushbutton_focusnextprevchild_callback = nullptr;
    QPushButton_EventFilter_Callback qpushbutton_eventfilter_callback = nullptr;
    QPushButton_ChildEvent_Callback qpushbutton_childevent_callback = nullptr;
    QPushButton_CustomEvent_Callback qpushbutton_customevent_callback = nullptr;
    QPushButton_ConnectNotify_Callback qpushbutton_connectnotify_callback = nullptr;
    QPushButton_DisconnectNotify_Callback qpushbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPushButton {
        using QPushButton::actionEvent;
        using QPushButton::changeEvent;
        using QPushButton::checkStateSet;
        using QPushButton::childEvent;
        using QPushButton::closeEvent;
        using QPushButton::connectNotify;
        using QPushButton::contextMenuEvent;
        using QPushButton::customEvent;
        using QPushButton::disconnectNotify;
        using QPushButton::dragEnterEvent;
        using QPushButton::dragLeaveEvent;
        using QPushButton::dragMoveEvent;
        using QPushButton::dropEvent;
        using QPushButton::enterEvent;
        using QPushButton::event;
        using QPushButton::focusInEvent;
        using QPushButton::focusNextPrevChild;
        using QPushButton::focusOutEvent;
        using QPushButton::hideEvent;
        using QPushButton::hitButton;
        using QPushButton::initPainter;
        using QPushButton::initStyleOption;
        using QPushButton::inputMethodEvent;
        using QPushButton::keyPressEvent;
        using QPushButton::keyReleaseEvent;
        using QPushButton::leaveEvent;
        using QPushButton::metric;
        using QPushButton::mouseDoubleClickEvent;
        using QPushButton::mouseMoveEvent;
        using QPushButton::mousePressEvent;
        using QPushButton::mouseReleaseEvent;
        using QPushButton::moveEvent;
        using QPushButton::nativeEvent;
        using QPushButton::nextCheckState;
        using QPushButton::paintEvent;
        using QPushButton::redirected;
        using QPushButton::resizeEvent;
        using QPushButton::sharedPainter;
        using QPushButton::showEvent;
        using QPushButton::tabletEvent;
        using QPushButton::timerEvent;
        using QPushButton::wheelEvent;
    };

    VirtualQPushButton(QWidget* parent) : QPushButton(parent) {};
    VirtualQPushButton() : QPushButton() {};
    VirtualQPushButton(const QString& text) : QPushButton(text) {};
    VirtualQPushButton(const QIcon& icon, const QString& text) : QPushButton(icon, text) {};
    VirtualQPushButton(const QString& text, QWidget* parent) : QPushButton(text, parent) {};
    VirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent) : QPushButton(icon, text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qpushbutton_metaobject_callback) {
            QMetaObject* callback_ret = qpushbutton_metaobject_callback(this);
            return callback_ret;
        }
        return QPushButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qpushbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qpushbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPushButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpushbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qpushbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpushbutton_sizehint_callback) {
            QSize* callback_ret = qpushbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPushButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpushbutton_minimumsizehint_callback) {
            QSize* callback_ret = qpushbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPushButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qpushbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qpushbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPushButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qpushbutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qpushbutton_paintevent_callback(this, cbval1);
            return;
        }
        QPushButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpushbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qpushbutton_keypressevent_callback(this, cbval1);
            return;
        }
        QPushButton::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qpushbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qpushbutton_focusinevent_callback(this, cbval1);
            return;
        }
        QPushButton::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qpushbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qpushbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        QPushButton::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qpushbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qpushbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPushButton::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qpushbutton_initstyleoption_callback) {
            QStyleOptionButton* cbval1 = option;
            qpushbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        QPushButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qpushbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = qpushbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return QPushButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qpushbutton_checkstateset_callback) {
            qpushbutton_checkstateset_callback(this);
            return;
        }
        QPushButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qpushbutton_nextcheckstate_callback) {
            qpushbutton_nextcheckstate_callback(this);
            return;
        }
        QPushButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qpushbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qpushbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPushButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qpushbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qpushbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        QPushButton::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qpushbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qpushbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPushButton::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qpushbutton_changeevent_callback) {
            QEvent* cbval1 = e;
            qpushbutton_changeevent_callback(this, cbval1);
            return;
        }
        QPushButton::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qpushbutton_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qpushbutton_timerevent_callback(this, cbval1);
            return;
        }
        QPushButton::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpushbutton_devtype_callback) {
            int callback_ret = qpushbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpushbutton_setvisible_callback) {
            bool cbval1 = visible;
            qpushbutton_setvisible_callback(this, cbval1);
            return;
        }
        QPushButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpushbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qpushbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpushbutton_hasheightforwidth_callback) {
            bool callback_ret = qpushbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPushButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpushbutton_paintengine_callback) {
            QPaintEngine* callback_ret = qpushbutton_paintengine_callback(this);
            return callback_ret;
        }
        return QPushButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpushbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qpushbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPushButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpushbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qpushbutton_wheelevent_callback(this, cbval1);
            return;
        }
        QPushButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpushbutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qpushbutton_enterevent_callback(this, cbval1);
            return;
        }
        QPushButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpushbutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            qpushbutton_leaveevent_callback(this, cbval1);
            return;
        }
        QPushButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpushbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qpushbutton_moveevent_callback(this, cbval1);
            return;
        }
        QPushButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qpushbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qpushbutton_resizeevent_callback(this, cbval1);
            return;
        }
        QPushButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qpushbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qpushbutton_closeevent_callback(this, cbval1);
            return;
        }
        QPushButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qpushbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qpushbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPushButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpushbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qpushbutton_tabletevent_callback(this, cbval1);
            return;
        }
        QPushButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpushbutton_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qpushbutton_actionevent_callback(this, cbval1);
            return;
        }
        QPushButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpushbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qpushbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        QPushButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpushbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qpushbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPushButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpushbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qpushbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPushButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpushbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qpushbutton_dropevent_callback(this, cbval1);
            return;
        }
        QPushButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qpushbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            qpushbutton_showevent_callback(this, cbval1);
            return;
        }
        QPushButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpushbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qpushbutton_hideevent_callback(this, cbval1);
            return;
        }
        QPushButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpushbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qpushbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPushButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpushbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qpushbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPushButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpushbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            qpushbutton_initpainter_callback(this, cbval1);
            return;
        }
        QPushButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpushbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qpushbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPushButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpushbutton_sharedpainter_callback) {
            QPainter* callback_ret = qpushbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPushButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpushbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qpushbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPushButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpushbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qpushbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPushButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpushbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qpushbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPushButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpushbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qpushbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPushButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpushbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            qpushbutton_childevent_callback(this, cbval1);
            return;
        }
        QPushButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpushbutton_customevent_callback) {
            QEvent* cbval1 = event;
            qpushbutton_customevent_callback(this, cbval1);
            return;
        }
        QPushButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpushbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpushbutton_connectnotify_callback(this, cbval1);
            return;
        }
        QPushButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpushbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qpushbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPushButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QPushButton_SuperEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_SuperPaintEvent(QPushButton* self, QPaintEvent* param1);
    friend void QPushButton_SuperKeyPressEvent(QPushButton* self, QKeyEvent* param1);
    friend void QPushButton_SuperFocusInEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_SuperFocusOutEvent(QPushButton* self, QFocusEvent* param1);
    friend void QPushButton_SuperMouseMoveEvent(QPushButton* self, QMouseEvent* param1);
    friend void QPushButton_SuperInitStyleOption(const QPushButton* self, QStyleOptionButton* option);
    friend bool QPushButton_SuperHitButton(const QPushButton* self, const QPoint* pos);
    friend void QPushButton_SuperCheckStateSet(QPushButton* self);
    friend void QPushButton_SuperNextCheckState(QPushButton* self);
    friend void QPushButton_SuperKeyReleaseEvent(QPushButton* self, QKeyEvent* e);
    friend void QPushButton_SuperMousePressEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_SuperMouseReleaseEvent(QPushButton* self, QMouseEvent* e);
    friend void QPushButton_SuperChangeEvent(QPushButton* self, QEvent* e);
    friend void QPushButton_SuperTimerEvent(QPushButton* self, QTimerEvent* e);
    friend void QPushButton_SuperMouseDoubleClickEvent(QPushButton* self, QMouseEvent* event);
    friend void QPushButton_SuperWheelEvent(QPushButton* self, QWheelEvent* event);
    friend void QPushButton_SuperEnterEvent(QPushButton* self, QEnterEvent* event);
    friend void QPushButton_SuperLeaveEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_SuperMoveEvent(QPushButton* self, QMoveEvent* event);
    friend void QPushButton_SuperResizeEvent(QPushButton* self, QResizeEvent* event);
    friend void QPushButton_SuperCloseEvent(QPushButton* self, QCloseEvent* event);
    friend void QPushButton_SuperContextMenuEvent(QPushButton* self, QContextMenuEvent* event);
    friend void QPushButton_SuperTabletEvent(QPushButton* self, QTabletEvent* event);
    friend void QPushButton_SuperActionEvent(QPushButton* self, QActionEvent* event);
    friend void QPushButton_SuperDragEnterEvent(QPushButton* self, QDragEnterEvent* event);
    friend void QPushButton_SuperDragMoveEvent(QPushButton* self, QDragMoveEvent* event);
    friend void QPushButton_SuperDragLeaveEvent(QPushButton* self, QDragLeaveEvent* event);
    friend void QPushButton_SuperDropEvent(QPushButton* self, QDropEvent* event);
    friend void QPushButton_SuperShowEvent(QPushButton* self, QShowEvent* event);
    friend void QPushButton_SuperHideEvent(QPushButton* self, QHideEvent* event);
    friend bool QPushButton_SuperNativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QPushButton_SuperMetric(const QPushButton* self, int param1);
    friend void QPushButton_SuperInitPainter(const QPushButton* self, QPainter* painter);
    friend QPaintDevice* QPushButton_SuperRedirected(const QPushButton* self, QPoint* offset);
    friend QPainter* QPushButton_SuperSharedPainter(const QPushButton* self);
    friend void QPushButton_SuperInputMethodEvent(QPushButton* self, QInputMethodEvent* param1);
    friend bool QPushButton_SuperFocusNextPrevChild(QPushButton* self, bool next);
    friend void QPushButton_SuperChildEvent(QPushButton* self, QChildEvent* event);
    friend void QPushButton_SuperCustomEvent(QPushButton* self, QEvent* event);
    friend void QPushButton_SuperConnectNotify(QPushButton* self, const QMetaMethod* signal);
    friend void QPushButton_SuperDisconnectNotify(QPushButton* self, const QMetaMethod* signal);
};

#endif
