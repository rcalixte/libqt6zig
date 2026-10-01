#pragma once
#ifndef LIBQRADIOBUTTON_HXX
#define LIBQRADIOBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRadioButton
class VirtualQRadioButton final : public QRadioButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using QRadioButton_MetaObject_Callback = QMetaObject* (*)(const QRadioButton*);
    using QRadioButton_Metacast_Callback = void* (*)(QRadioButton*, const char*);
    using QRadioButton_Metacall_Callback = int (*)(QRadioButton*, int, int, void**);
    using QRadioButton_SizeHint_Callback = QSize* (*)(const QRadioButton*);
    using QRadioButton_MinimumSizeHint_Callback = QSize* (*)(const QRadioButton*);
    using QRadioButton_Event_Callback = bool (*)(QRadioButton*, QEvent*);
    using QRadioButton_HitButton_Callback = bool (*)(const QRadioButton*, QPoint*);
    using QRadioButton_PaintEvent_Callback = void (*)(QRadioButton*, QPaintEvent*);
    using QRadioButton_MouseMoveEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_InitStyleOption_Callback = void (*)(const QRadioButton*, QStyleOptionButton*);
    using QRadioButton_CheckStateSet_Callback = void (*)(QRadioButton*);
    using QRadioButton_NextCheckState_Callback = void (*)(QRadioButton*);
    using QRadioButton_KeyPressEvent_Callback = void (*)(QRadioButton*, QKeyEvent*);
    using QRadioButton_KeyReleaseEvent_Callback = void (*)(QRadioButton*, QKeyEvent*);
    using QRadioButton_MousePressEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_MouseReleaseEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_FocusInEvent_Callback = void (*)(QRadioButton*, QFocusEvent*);
    using QRadioButton_FocusOutEvent_Callback = void (*)(QRadioButton*, QFocusEvent*);
    using QRadioButton_ChangeEvent_Callback = void (*)(QRadioButton*, QEvent*);
    using QRadioButton_TimerEvent_Callback = void (*)(QRadioButton*, QTimerEvent*);
    using QRadioButton_DevType_Callback = int (*)(const QRadioButton*);
    using QRadioButton_SetVisible_Callback = void (*)(QRadioButton*, bool);
    using QRadioButton_HeightForWidth_Callback = int (*)(const QRadioButton*, int);
    using QRadioButton_HasHeightForWidth_Callback = bool (*)(const QRadioButton*);
    using QRadioButton_PaintEngine_Callback = QPaintEngine* (*)(const QRadioButton*);
    using QRadioButton_MouseDoubleClickEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_WheelEvent_Callback = void (*)(QRadioButton*, QWheelEvent*);
    using QRadioButton_EnterEvent_Callback = void (*)(QRadioButton*, QEnterEvent*);
    using QRadioButton_LeaveEvent_Callback = void (*)(QRadioButton*, QEvent*);
    using QRadioButton_MoveEvent_Callback = void (*)(QRadioButton*, QMoveEvent*);
    using QRadioButton_ResizeEvent_Callback = void (*)(QRadioButton*, QResizeEvent*);
    using QRadioButton_CloseEvent_Callback = void (*)(QRadioButton*, QCloseEvent*);
    using QRadioButton_ContextMenuEvent_Callback = void (*)(QRadioButton*, QContextMenuEvent*);
    using QRadioButton_TabletEvent_Callback = void (*)(QRadioButton*, QTabletEvent*);
    using QRadioButton_ActionEvent_Callback = void (*)(QRadioButton*, QActionEvent*);
    using QRadioButton_DragEnterEvent_Callback = void (*)(QRadioButton*, QDragEnterEvent*);
    using QRadioButton_DragMoveEvent_Callback = void (*)(QRadioButton*, QDragMoveEvent*);
    using QRadioButton_DragLeaveEvent_Callback = void (*)(QRadioButton*, QDragLeaveEvent*);
    using QRadioButton_DropEvent_Callback = void (*)(QRadioButton*, QDropEvent*);
    using QRadioButton_ShowEvent_Callback = void (*)(QRadioButton*, QShowEvent*);
    using QRadioButton_HideEvent_Callback = void (*)(QRadioButton*, QHideEvent*);
    using QRadioButton_NativeEvent_Callback = bool (*)(QRadioButton*, libqt_string, void*, intptr_t*);
    using QRadioButton_Metric_Callback = int (*)(const QRadioButton*, int);
    using QRadioButton_InitPainter_Callback = void (*)(const QRadioButton*, QPainter*);
    using QRadioButton_Redirected_Callback = QPaintDevice* (*)(const QRadioButton*, QPoint*);
    using QRadioButton_SharedPainter_Callback = QPainter* (*)(const QRadioButton*);
    using QRadioButton_InputMethodEvent_Callback = void (*)(QRadioButton*, QInputMethodEvent*);
    using QRadioButton_InputMethodQuery_Callback = QVariant* (*)(const QRadioButton*, int);
    using QRadioButton_FocusNextPrevChild_Callback = bool (*)(QRadioButton*, bool);
    using QRadioButton_EventFilter_Callback = bool (*)(QRadioButton*, QObject*, QEvent*);
    using QRadioButton_ChildEvent_Callback = void (*)(QRadioButton*, QChildEvent*);
    using QRadioButton_CustomEvent_Callback = void (*)(QRadioButton*, QEvent*);
    using QRadioButton_ConnectNotify_Callback = void (*)(QRadioButton*, QMetaMethod*);
    using QRadioButton_DisconnectNotify_Callback = void (*)(QRadioButton*, QMetaMethod*);
    using QRadioButton::create;
    using QRadioButton::destroy;
    using QRadioButton::focusNextChild;
    using QRadioButton::focusPreviousChild;
    using QRadioButton::getDecodedMetricF;
    using QRadioButton::isSignalConnected;
    using QRadioButton::receivers;
    using QRadioButton::sender;
    using QRadioButton::senderSignalIndex;
    using QRadioButton::updateMicroFocus;

    // Instance callback storage
    QRadioButton_MetaObject_Callback qradiobutton_metaobject_callback = nullptr;
    QRadioButton_Metacast_Callback qradiobutton_metacast_callback = nullptr;
    QRadioButton_Metacall_Callback qradiobutton_metacall_callback = nullptr;
    QRadioButton_SizeHint_Callback qradiobutton_sizehint_callback = nullptr;
    QRadioButton_MinimumSizeHint_Callback qradiobutton_minimumsizehint_callback = nullptr;
    QRadioButton_Event_Callback qradiobutton_event_callback = nullptr;
    QRadioButton_HitButton_Callback qradiobutton_hitbutton_callback = nullptr;
    QRadioButton_PaintEvent_Callback qradiobutton_paintevent_callback = nullptr;
    QRadioButton_MouseMoveEvent_Callback qradiobutton_mousemoveevent_callback = nullptr;
    QRadioButton_InitStyleOption_Callback qradiobutton_initstyleoption_callback = nullptr;
    QRadioButton_CheckStateSet_Callback qradiobutton_checkstateset_callback = nullptr;
    QRadioButton_NextCheckState_Callback qradiobutton_nextcheckstate_callback = nullptr;
    QRadioButton_KeyPressEvent_Callback qradiobutton_keypressevent_callback = nullptr;
    QRadioButton_KeyReleaseEvent_Callback qradiobutton_keyreleaseevent_callback = nullptr;
    QRadioButton_MousePressEvent_Callback qradiobutton_mousepressevent_callback = nullptr;
    QRadioButton_MouseReleaseEvent_Callback qradiobutton_mousereleaseevent_callback = nullptr;
    QRadioButton_FocusInEvent_Callback qradiobutton_focusinevent_callback = nullptr;
    QRadioButton_FocusOutEvent_Callback qradiobutton_focusoutevent_callback = nullptr;
    QRadioButton_ChangeEvent_Callback qradiobutton_changeevent_callback = nullptr;
    QRadioButton_TimerEvent_Callback qradiobutton_timerevent_callback = nullptr;
    QRadioButton_DevType_Callback qradiobutton_devtype_callback = nullptr;
    QRadioButton_SetVisible_Callback qradiobutton_setvisible_callback = nullptr;
    QRadioButton_HeightForWidth_Callback qradiobutton_heightforwidth_callback = nullptr;
    QRadioButton_HasHeightForWidth_Callback qradiobutton_hasheightforwidth_callback = nullptr;
    QRadioButton_PaintEngine_Callback qradiobutton_paintengine_callback = nullptr;
    QRadioButton_MouseDoubleClickEvent_Callback qradiobutton_mousedoubleclickevent_callback = nullptr;
    QRadioButton_WheelEvent_Callback qradiobutton_wheelevent_callback = nullptr;
    QRadioButton_EnterEvent_Callback qradiobutton_enterevent_callback = nullptr;
    QRadioButton_LeaveEvent_Callback qradiobutton_leaveevent_callback = nullptr;
    QRadioButton_MoveEvent_Callback qradiobutton_moveevent_callback = nullptr;
    QRadioButton_ResizeEvent_Callback qradiobutton_resizeevent_callback = nullptr;
    QRadioButton_CloseEvent_Callback qradiobutton_closeevent_callback = nullptr;
    QRadioButton_ContextMenuEvent_Callback qradiobutton_contextmenuevent_callback = nullptr;
    QRadioButton_TabletEvent_Callback qradiobutton_tabletevent_callback = nullptr;
    QRadioButton_ActionEvent_Callback qradiobutton_actionevent_callback = nullptr;
    QRadioButton_DragEnterEvent_Callback qradiobutton_dragenterevent_callback = nullptr;
    QRadioButton_DragMoveEvent_Callback qradiobutton_dragmoveevent_callback = nullptr;
    QRadioButton_DragLeaveEvent_Callback qradiobutton_dragleaveevent_callback = nullptr;
    QRadioButton_DropEvent_Callback qradiobutton_dropevent_callback = nullptr;
    QRadioButton_ShowEvent_Callback qradiobutton_showevent_callback = nullptr;
    QRadioButton_HideEvent_Callback qradiobutton_hideevent_callback = nullptr;
    QRadioButton_NativeEvent_Callback qradiobutton_nativeevent_callback = nullptr;
    QRadioButton_Metric_Callback qradiobutton_metric_callback = nullptr;
    QRadioButton_InitPainter_Callback qradiobutton_initpainter_callback = nullptr;
    QRadioButton_Redirected_Callback qradiobutton_redirected_callback = nullptr;
    QRadioButton_SharedPainter_Callback qradiobutton_sharedpainter_callback = nullptr;
    QRadioButton_InputMethodEvent_Callback qradiobutton_inputmethodevent_callback = nullptr;
    QRadioButton_InputMethodQuery_Callback qradiobutton_inputmethodquery_callback = nullptr;
    QRadioButton_FocusNextPrevChild_Callback qradiobutton_focusnextprevchild_callback = nullptr;
    QRadioButton_EventFilter_Callback qradiobutton_eventfilter_callback = nullptr;
    QRadioButton_ChildEvent_Callback qradiobutton_childevent_callback = nullptr;
    QRadioButton_CustomEvent_Callback qradiobutton_customevent_callback = nullptr;
    QRadioButton_ConnectNotify_Callback qradiobutton_connectnotify_callback = nullptr;
    QRadioButton_DisconnectNotify_Callback qradiobutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QRadioButton {
        using QRadioButton::actionEvent;
        using QRadioButton::changeEvent;
        using QRadioButton::checkStateSet;
        using QRadioButton::childEvent;
        using QRadioButton::closeEvent;
        using QRadioButton::connectNotify;
        using QRadioButton::contextMenuEvent;
        using QRadioButton::customEvent;
        using QRadioButton::disconnectNotify;
        using QRadioButton::dragEnterEvent;
        using QRadioButton::dragLeaveEvent;
        using QRadioButton::dragMoveEvent;
        using QRadioButton::dropEvent;
        using QRadioButton::enterEvent;
        using QRadioButton::event;
        using QRadioButton::focusInEvent;
        using QRadioButton::focusNextPrevChild;
        using QRadioButton::focusOutEvent;
        using QRadioButton::hideEvent;
        using QRadioButton::hitButton;
        using QRadioButton::initPainter;
        using QRadioButton::initStyleOption;
        using QRadioButton::inputMethodEvent;
        using QRadioButton::keyPressEvent;
        using QRadioButton::keyReleaseEvent;
        using QRadioButton::leaveEvent;
        using QRadioButton::metric;
        using QRadioButton::mouseDoubleClickEvent;
        using QRadioButton::mouseMoveEvent;
        using QRadioButton::mousePressEvent;
        using QRadioButton::mouseReleaseEvent;
        using QRadioButton::moveEvent;
        using QRadioButton::nativeEvent;
        using QRadioButton::nextCheckState;
        using QRadioButton::paintEvent;
        using QRadioButton::redirected;
        using QRadioButton::resizeEvent;
        using QRadioButton::sharedPainter;
        using QRadioButton::showEvent;
        using QRadioButton::tabletEvent;
        using QRadioButton::timerEvent;
        using QRadioButton::wheelEvent;
    };

    VirtualQRadioButton(QWidget* parent) : QRadioButton(parent) {};
    VirtualQRadioButton() : QRadioButton() {};
    VirtualQRadioButton(const QString& text) : QRadioButton(text) {};
    VirtualQRadioButton(const QString& text, QWidget* parent) : QRadioButton(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qradiobutton_metaobject_callback) {
            QMetaObject* callback_ret = qradiobutton_metaobject_callback(this);
            return callback_ret;
        }
        return QRadioButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qradiobutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qradiobutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QRadioButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qradiobutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qradiobutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QRadioButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qradiobutton_sizehint_callback) {
            QSize* callback_ret = qradiobutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRadioButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qradiobutton_minimumsizehint_callback) {
            QSize* callback_ret = qradiobutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRadioButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qradiobutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qradiobutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return QRadioButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& param1) const override {
        if (qradiobutton_hitbutton_callback) {
            const QPoint& param1_ret = param1;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&param1_ret);
            bool callback_ret = qradiobutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return QRadioButton::hitButton(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qradiobutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qradiobutton_paintevent_callback(this, cbval1);
            return;
        }
        QRadioButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qradiobutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qradiobutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        QRadioButton::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* button) const override {
        if (qradiobutton_initstyleoption_callback) {
            QStyleOptionButton* cbval1 = button;
            qradiobutton_initstyleoption_callback(this, cbval1);
            return;
        }
        QRadioButton::initStyleOption(button);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qradiobutton_checkstateset_callback) {
            qradiobutton_checkstateset_callback(this);
            return;
        }
        QRadioButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qradiobutton_nextcheckstate_callback) {
            qradiobutton_nextcheckstate_callback(this);
            return;
        }
        QRadioButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qradiobutton_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qradiobutton_keypressevent_callback(this, cbval1);
            return;
        }
        QRadioButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qradiobutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qradiobutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QRadioButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qradiobutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qradiobutton_mousepressevent_callback(this, cbval1);
            return;
        }
        QRadioButton::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qradiobutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qradiobutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QRadioButton::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qradiobutton_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qradiobutton_focusinevent_callback(this, cbval1);
            return;
        }
        QRadioButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qradiobutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qradiobutton_focusoutevent_callback(this, cbval1);
            return;
        }
        QRadioButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qradiobutton_changeevent_callback) {
            QEvent* cbval1 = e;
            qradiobutton_changeevent_callback(this, cbval1);
            return;
        }
        QRadioButton::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qradiobutton_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qradiobutton_timerevent_callback(this, cbval1);
            return;
        }
        QRadioButton::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qradiobutton_devtype_callback) {
            int callback_ret = qradiobutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QRadioButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qradiobutton_setvisible_callback) {
            bool cbval1 = visible;
            qradiobutton_setvisible_callback(this, cbval1);
            return;
        }
        QRadioButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qradiobutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qradiobutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRadioButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qradiobutton_hasheightforwidth_callback) {
            bool callback_ret = qradiobutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QRadioButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qradiobutton_paintengine_callback) {
            QPaintEngine* callback_ret = qradiobutton_paintengine_callback(this);
            return callback_ret;
        }
        return QRadioButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qradiobutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qradiobutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QRadioButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qradiobutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qradiobutton_wheelevent_callback(this, cbval1);
            return;
        }
        QRadioButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qradiobutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qradiobutton_enterevent_callback(this, cbval1);
            return;
        }
        QRadioButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qradiobutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            qradiobutton_leaveevent_callback(this, cbval1);
            return;
        }
        QRadioButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qradiobutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qradiobutton_moveevent_callback(this, cbval1);
            return;
        }
        QRadioButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qradiobutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qradiobutton_resizeevent_callback(this, cbval1);
            return;
        }
        QRadioButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qradiobutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qradiobutton_closeevent_callback(this, cbval1);
            return;
        }
        QRadioButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qradiobutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qradiobutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        QRadioButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qradiobutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qradiobutton_tabletevent_callback(this, cbval1);
            return;
        }
        QRadioButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qradiobutton_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qradiobutton_actionevent_callback(this, cbval1);
            return;
        }
        QRadioButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qradiobutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qradiobutton_dragenterevent_callback(this, cbval1);
            return;
        }
        QRadioButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qradiobutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qradiobutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        QRadioButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qradiobutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qradiobutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        QRadioButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qradiobutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qradiobutton_dropevent_callback(this, cbval1);
            return;
        }
        QRadioButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qradiobutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            qradiobutton_showevent_callback(this, cbval1);
            return;
        }
        QRadioButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qradiobutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qradiobutton_hideevent_callback(this, cbval1);
            return;
        }
        QRadioButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qradiobutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qradiobutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QRadioButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qradiobutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qradiobutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRadioButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qradiobutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            qradiobutton_initpainter_callback(this, cbval1);
            return;
        }
        QRadioButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qradiobutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qradiobutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QRadioButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qradiobutton_sharedpainter_callback) {
            QPainter* callback_ret = qradiobutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return QRadioButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qradiobutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qradiobutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        QRadioButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qradiobutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qradiobutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRadioButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qradiobutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qradiobutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QRadioButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qradiobutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qradiobutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QRadioButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qradiobutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            qradiobutton_childevent_callback(this, cbval1);
            return;
        }
        QRadioButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qradiobutton_customevent_callback) {
            QEvent* cbval1 = event;
            qradiobutton_customevent_callback(this, cbval1);
            return;
        }
        QRadioButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qradiobutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qradiobutton_connectnotify_callback(this, cbval1);
            return;
        }
        QRadioButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qradiobutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qradiobutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        QRadioButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QRadioButton_SuperEvent(QRadioButton* self, QEvent* e);
    friend bool QRadioButton_SuperHitButton(const QRadioButton* self, const QPoint* param1);
    friend void QRadioButton_SuperPaintEvent(QRadioButton* self, QPaintEvent* param1);
    friend void QRadioButton_SuperMouseMoveEvent(QRadioButton* self, QMouseEvent* param1);
    friend void QRadioButton_SuperInitStyleOption(const QRadioButton* self, QStyleOptionButton* button);
    friend void QRadioButton_SuperCheckStateSet(QRadioButton* self);
    friend void QRadioButton_SuperNextCheckState(QRadioButton* self);
    friend void QRadioButton_SuperKeyPressEvent(QRadioButton* self, QKeyEvent* e);
    friend void QRadioButton_SuperKeyReleaseEvent(QRadioButton* self, QKeyEvent* e);
    friend void QRadioButton_SuperMousePressEvent(QRadioButton* self, QMouseEvent* e);
    friend void QRadioButton_SuperMouseReleaseEvent(QRadioButton* self, QMouseEvent* e);
    friend void QRadioButton_SuperFocusInEvent(QRadioButton* self, QFocusEvent* e);
    friend void QRadioButton_SuperFocusOutEvent(QRadioButton* self, QFocusEvent* e);
    friend void QRadioButton_SuperChangeEvent(QRadioButton* self, QEvent* e);
    friend void QRadioButton_SuperTimerEvent(QRadioButton* self, QTimerEvent* e);
    friend void QRadioButton_SuperMouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event);
    friend void QRadioButton_SuperWheelEvent(QRadioButton* self, QWheelEvent* event);
    friend void QRadioButton_SuperEnterEvent(QRadioButton* self, QEnterEvent* event);
    friend void QRadioButton_SuperLeaveEvent(QRadioButton* self, QEvent* event);
    friend void QRadioButton_SuperMoveEvent(QRadioButton* self, QMoveEvent* event);
    friend void QRadioButton_SuperResizeEvent(QRadioButton* self, QResizeEvent* event);
    friend void QRadioButton_SuperCloseEvent(QRadioButton* self, QCloseEvent* event);
    friend void QRadioButton_SuperContextMenuEvent(QRadioButton* self, QContextMenuEvent* event);
    friend void QRadioButton_SuperTabletEvent(QRadioButton* self, QTabletEvent* event);
    friend void QRadioButton_SuperActionEvent(QRadioButton* self, QActionEvent* event);
    friend void QRadioButton_SuperDragEnterEvent(QRadioButton* self, QDragEnterEvent* event);
    friend void QRadioButton_SuperDragMoveEvent(QRadioButton* self, QDragMoveEvent* event);
    friend void QRadioButton_SuperDragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event);
    friend void QRadioButton_SuperDropEvent(QRadioButton* self, QDropEvent* event);
    friend void QRadioButton_SuperShowEvent(QRadioButton* self, QShowEvent* event);
    friend void QRadioButton_SuperHideEvent(QRadioButton* self, QHideEvent* event);
    friend bool QRadioButton_SuperNativeEvent(QRadioButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QRadioButton_SuperMetric(const QRadioButton* self, int param1);
    friend void QRadioButton_SuperInitPainter(const QRadioButton* self, QPainter* painter);
    friend QPaintDevice* QRadioButton_SuperRedirected(const QRadioButton* self, QPoint* offset);
    friend QPainter* QRadioButton_SuperSharedPainter(const QRadioButton* self);
    friend void QRadioButton_SuperInputMethodEvent(QRadioButton* self, QInputMethodEvent* param1);
    friend bool QRadioButton_SuperFocusNextPrevChild(QRadioButton* self, bool next);
    friend void QRadioButton_SuperChildEvent(QRadioButton* self, QChildEvent* event);
    friend void QRadioButton_SuperCustomEvent(QRadioButton* self, QEvent* event);
    friend void QRadioButton_SuperConnectNotify(QRadioButton* self, const QMetaMethod* signal);
    friend void QRadioButton_SuperDisconnectNotify(QRadioButton* self, const QMetaMethod* signal);
};

#endif
