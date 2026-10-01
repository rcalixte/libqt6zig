#pragma once
#ifndef LIBQCOMMANDLINKBUTTON_HXX
#define LIBQCOMMANDLINKBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCommandLinkButton
class VirtualQCommandLinkButton final : public QCommandLinkButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCommandLinkButton_MetaObject_Callback = QMetaObject* (*)(const QCommandLinkButton*);
    using QCommandLinkButton_Metacast_Callback = void* (*)(QCommandLinkButton*, const char*);
    using QCommandLinkButton_Metacall_Callback = int (*)(QCommandLinkButton*, int, int, void**);
    using QCommandLinkButton_SizeHint_Callback = QSize* (*)(const QCommandLinkButton*);
    using QCommandLinkButton_HeightForWidth_Callback = int (*)(const QCommandLinkButton*, int);
    using QCommandLinkButton_MinimumSizeHint_Callback = QSize* (*)(const QCommandLinkButton*);
    using QCommandLinkButton_InitStyleOption_Callback = void (*)(const QCommandLinkButton*, QStyleOptionButton*);
    using QCommandLinkButton_Event_Callback = bool (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_PaintEvent_Callback = void (*)(QCommandLinkButton*, QPaintEvent*);
    using QCommandLinkButton_KeyPressEvent_Callback = void (*)(QCommandLinkButton*, QKeyEvent*);
    using QCommandLinkButton_FocusInEvent_Callback = void (*)(QCommandLinkButton*, QFocusEvent*);
    using QCommandLinkButton_FocusOutEvent_Callback = void (*)(QCommandLinkButton*, QFocusEvent*);
    using QCommandLinkButton_MouseMoveEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_HitButton_Callback = bool (*)(const QCommandLinkButton*, QPoint*);
    using QCommandLinkButton_CheckStateSet_Callback = void (*)(QCommandLinkButton*);
    using QCommandLinkButton_NextCheckState_Callback = void (*)(QCommandLinkButton*);
    using QCommandLinkButton_KeyReleaseEvent_Callback = void (*)(QCommandLinkButton*, QKeyEvent*);
    using QCommandLinkButton_MousePressEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_MouseReleaseEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_ChangeEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_TimerEvent_Callback = void (*)(QCommandLinkButton*, QTimerEvent*);
    using QCommandLinkButton_DevType_Callback = int (*)(const QCommandLinkButton*);
    using QCommandLinkButton_SetVisible_Callback = void (*)(QCommandLinkButton*, bool);
    using QCommandLinkButton_HasHeightForWidth_Callback = bool (*)(const QCommandLinkButton*);
    using QCommandLinkButton_PaintEngine_Callback = QPaintEngine* (*)(const QCommandLinkButton*);
    using QCommandLinkButton_MouseDoubleClickEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_WheelEvent_Callback = void (*)(QCommandLinkButton*, QWheelEvent*);
    using QCommandLinkButton_EnterEvent_Callback = void (*)(QCommandLinkButton*, QEnterEvent*);
    using QCommandLinkButton_LeaveEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_MoveEvent_Callback = void (*)(QCommandLinkButton*, QMoveEvent*);
    using QCommandLinkButton_ResizeEvent_Callback = void (*)(QCommandLinkButton*, QResizeEvent*);
    using QCommandLinkButton_CloseEvent_Callback = void (*)(QCommandLinkButton*, QCloseEvent*);
    using QCommandLinkButton_ContextMenuEvent_Callback = void (*)(QCommandLinkButton*, QContextMenuEvent*);
    using QCommandLinkButton_TabletEvent_Callback = void (*)(QCommandLinkButton*, QTabletEvent*);
    using QCommandLinkButton_ActionEvent_Callback = void (*)(QCommandLinkButton*, QActionEvent*);
    using QCommandLinkButton_DragEnterEvent_Callback = void (*)(QCommandLinkButton*, QDragEnterEvent*);
    using QCommandLinkButton_DragMoveEvent_Callback = void (*)(QCommandLinkButton*, QDragMoveEvent*);
    using QCommandLinkButton_DragLeaveEvent_Callback = void (*)(QCommandLinkButton*, QDragLeaveEvent*);
    using QCommandLinkButton_DropEvent_Callback = void (*)(QCommandLinkButton*, QDropEvent*);
    using QCommandLinkButton_ShowEvent_Callback = void (*)(QCommandLinkButton*, QShowEvent*);
    using QCommandLinkButton_HideEvent_Callback = void (*)(QCommandLinkButton*, QHideEvent*);
    using QCommandLinkButton_NativeEvent_Callback = bool (*)(QCommandLinkButton*, libqt_string, void*, intptr_t*);
    using QCommandLinkButton_Metric_Callback = int (*)(const QCommandLinkButton*, int);
    using QCommandLinkButton_InitPainter_Callback = void (*)(const QCommandLinkButton*, QPainter*);
    using QCommandLinkButton_Redirected_Callback = QPaintDevice* (*)(const QCommandLinkButton*, QPoint*);
    using QCommandLinkButton_SharedPainter_Callback = QPainter* (*)(const QCommandLinkButton*);
    using QCommandLinkButton_InputMethodEvent_Callback = void (*)(QCommandLinkButton*, QInputMethodEvent*);
    using QCommandLinkButton_InputMethodQuery_Callback = QVariant* (*)(const QCommandLinkButton*, int);
    using QCommandLinkButton_FocusNextPrevChild_Callback = bool (*)(QCommandLinkButton*, bool);
    using QCommandLinkButton_EventFilter_Callback = bool (*)(QCommandLinkButton*, QObject*, QEvent*);
    using QCommandLinkButton_ChildEvent_Callback = void (*)(QCommandLinkButton*, QChildEvent*);
    using QCommandLinkButton_CustomEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_ConnectNotify_Callback = void (*)(QCommandLinkButton*, QMetaMethod*);
    using QCommandLinkButton_DisconnectNotify_Callback = void (*)(QCommandLinkButton*, QMetaMethod*);
    using QCommandLinkButton::create;
    using QCommandLinkButton::destroy;
    using QCommandLinkButton::focusNextChild;
    using QCommandLinkButton::focusPreviousChild;
    using QCommandLinkButton::getDecodedMetricF;
    using QCommandLinkButton::isSignalConnected;
    using QCommandLinkButton::receivers;
    using QCommandLinkButton::sender;
    using QCommandLinkButton::senderSignalIndex;
    using QCommandLinkButton::updateMicroFocus;

    // Instance callback storage
    QCommandLinkButton_MetaObject_Callback qcommandlinkbutton_metaobject_callback = nullptr;
    QCommandLinkButton_Metacast_Callback qcommandlinkbutton_metacast_callback = nullptr;
    QCommandLinkButton_Metacall_Callback qcommandlinkbutton_metacall_callback = nullptr;
    QCommandLinkButton_SizeHint_Callback qcommandlinkbutton_sizehint_callback = nullptr;
    QCommandLinkButton_HeightForWidth_Callback qcommandlinkbutton_heightforwidth_callback = nullptr;
    QCommandLinkButton_MinimumSizeHint_Callback qcommandlinkbutton_minimumsizehint_callback = nullptr;
    QCommandLinkButton_InitStyleOption_Callback qcommandlinkbutton_initstyleoption_callback = nullptr;
    QCommandLinkButton_Event_Callback qcommandlinkbutton_event_callback = nullptr;
    QCommandLinkButton_PaintEvent_Callback qcommandlinkbutton_paintevent_callback = nullptr;
    QCommandLinkButton_KeyPressEvent_Callback qcommandlinkbutton_keypressevent_callback = nullptr;
    QCommandLinkButton_FocusInEvent_Callback qcommandlinkbutton_focusinevent_callback = nullptr;
    QCommandLinkButton_FocusOutEvent_Callback qcommandlinkbutton_focusoutevent_callback = nullptr;
    QCommandLinkButton_MouseMoveEvent_Callback qcommandlinkbutton_mousemoveevent_callback = nullptr;
    QCommandLinkButton_HitButton_Callback qcommandlinkbutton_hitbutton_callback = nullptr;
    QCommandLinkButton_CheckStateSet_Callback qcommandlinkbutton_checkstateset_callback = nullptr;
    QCommandLinkButton_NextCheckState_Callback qcommandlinkbutton_nextcheckstate_callback = nullptr;
    QCommandLinkButton_KeyReleaseEvent_Callback qcommandlinkbutton_keyreleaseevent_callback = nullptr;
    QCommandLinkButton_MousePressEvent_Callback qcommandlinkbutton_mousepressevent_callback = nullptr;
    QCommandLinkButton_MouseReleaseEvent_Callback qcommandlinkbutton_mousereleaseevent_callback = nullptr;
    QCommandLinkButton_ChangeEvent_Callback qcommandlinkbutton_changeevent_callback = nullptr;
    QCommandLinkButton_TimerEvent_Callback qcommandlinkbutton_timerevent_callback = nullptr;
    QCommandLinkButton_DevType_Callback qcommandlinkbutton_devtype_callback = nullptr;
    QCommandLinkButton_SetVisible_Callback qcommandlinkbutton_setvisible_callback = nullptr;
    QCommandLinkButton_HasHeightForWidth_Callback qcommandlinkbutton_hasheightforwidth_callback = nullptr;
    QCommandLinkButton_PaintEngine_Callback qcommandlinkbutton_paintengine_callback = nullptr;
    QCommandLinkButton_MouseDoubleClickEvent_Callback qcommandlinkbutton_mousedoubleclickevent_callback = nullptr;
    QCommandLinkButton_WheelEvent_Callback qcommandlinkbutton_wheelevent_callback = nullptr;
    QCommandLinkButton_EnterEvent_Callback qcommandlinkbutton_enterevent_callback = nullptr;
    QCommandLinkButton_LeaveEvent_Callback qcommandlinkbutton_leaveevent_callback = nullptr;
    QCommandLinkButton_MoveEvent_Callback qcommandlinkbutton_moveevent_callback = nullptr;
    QCommandLinkButton_ResizeEvent_Callback qcommandlinkbutton_resizeevent_callback = nullptr;
    QCommandLinkButton_CloseEvent_Callback qcommandlinkbutton_closeevent_callback = nullptr;
    QCommandLinkButton_ContextMenuEvent_Callback qcommandlinkbutton_contextmenuevent_callback = nullptr;
    QCommandLinkButton_TabletEvent_Callback qcommandlinkbutton_tabletevent_callback = nullptr;
    QCommandLinkButton_ActionEvent_Callback qcommandlinkbutton_actionevent_callback = nullptr;
    QCommandLinkButton_DragEnterEvent_Callback qcommandlinkbutton_dragenterevent_callback = nullptr;
    QCommandLinkButton_DragMoveEvent_Callback qcommandlinkbutton_dragmoveevent_callback = nullptr;
    QCommandLinkButton_DragLeaveEvent_Callback qcommandlinkbutton_dragleaveevent_callback = nullptr;
    QCommandLinkButton_DropEvent_Callback qcommandlinkbutton_dropevent_callback = nullptr;
    QCommandLinkButton_ShowEvent_Callback qcommandlinkbutton_showevent_callback = nullptr;
    QCommandLinkButton_HideEvent_Callback qcommandlinkbutton_hideevent_callback = nullptr;
    QCommandLinkButton_NativeEvent_Callback qcommandlinkbutton_nativeevent_callback = nullptr;
    QCommandLinkButton_Metric_Callback qcommandlinkbutton_metric_callback = nullptr;
    QCommandLinkButton_InitPainter_Callback qcommandlinkbutton_initpainter_callback = nullptr;
    QCommandLinkButton_Redirected_Callback qcommandlinkbutton_redirected_callback = nullptr;
    QCommandLinkButton_SharedPainter_Callback qcommandlinkbutton_sharedpainter_callback = nullptr;
    QCommandLinkButton_InputMethodEvent_Callback qcommandlinkbutton_inputmethodevent_callback = nullptr;
    QCommandLinkButton_InputMethodQuery_Callback qcommandlinkbutton_inputmethodquery_callback = nullptr;
    QCommandLinkButton_FocusNextPrevChild_Callback qcommandlinkbutton_focusnextprevchild_callback = nullptr;
    QCommandLinkButton_EventFilter_Callback qcommandlinkbutton_eventfilter_callback = nullptr;
    QCommandLinkButton_ChildEvent_Callback qcommandlinkbutton_childevent_callback = nullptr;
    QCommandLinkButton_CustomEvent_Callback qcommandlinkbutton_customevent_callback = nullptr;
    QCommandLinkButton_ConnectNotify_Callback qcommandlinkbutton_connectnotify_callback = nullptr;
    QCommandLinkButton_DisconnectNotify_Callback qcommandlinkbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCommandLinkButton {
        using QCommandLinkButton::actionEvent;
        using QCommandLinkButton::changeEvent;
        using QCommandLinkButton::checkStateSet;
        using QCommandLinkButton::childEvent;
        using QCommandLinkButton::closeEvent;
        using QCommandLinkButton::connectNotify;
        using QCommandLinkButton::contextMenuEvent;
        using QCommandLinkButton::customEvent;
        using QCommandLinkButton::disconnectNotify;
        using QCommandLinkButton::dragEnterEvent;
        using QCommandLinkButton::dragLeaveEvent;
        using QCommandLinkButton::dragMoveEvent;
        using QCommandLinkButton::dropEvent;
        using QCommandLinkButton::enterEvent;
        using QCommandLinkButton::event;
        using QCommandLinkButton::focusInEvent;
        using QCommandLinkButton::focusNextPrevChild;
        using QCommandLinkButton::focusOutEvent;
        using QCommandLinkButton::hideEvent;
        using QCommandLinkButton::hitButton;
        using QCommandLinkButton::initPainter;
        using QCommandLinkButton::inputMethodEvent;
        using QCommandLinkButton::keyPressEvent;
        using QCommandLinkButton::keyReleaseEvent;
        using QCommandLinkButton::leaveEvent;
        using QCommandLinkButton::metric;
        using QCommandLinkButton::mouseDoubleClickEvent;
        using QCommandLinkButton::mouseMoveEvent;
        using QCommandLinkButton::mousePressEvent;
        using QCommandLinkButton::mouseReleaseEvent;
        using QCommandLinkButton::moveEvent;
        using QCommandLinkButton::nativeEvent;
        using QCommandLinkButton::nextCheckState;
        using QCommandLinkButton::paintEvent;
        using QCommandLinkButton::redirected;
        using QCommandLinkButton::resizeEvent;
        using QCommandLinkButton::sharedPainter;
        using QCommandLinkButton::showEvent;
        using QCommandLinkButton::tabletEvent;
        using QCommandLinkButton::timerEvent;
        using QCommandLinkButton::wheelEvent;
    };

    VirtualQCommandLinkButton(QWidget* parent) : QCommandLinkButton(parent) {};
    VirtualQCommandLinkButton() : QCommandLinkButton() {};
    VirtualQCommandLinkButton(const QString& text) : QCommandLinkButton(text) {};
    VirtualQCommandLinkButton(const QString& text, const QString& description) : QCommandLinkButton(text, description) {};
    VirtualQCommandLinkButton(const QString& text, QWidget* parent) : QCommandLinkButton(text, parent) {};
    VirtualQCommandLinkButton(const QString& text, const QString& description, QWidget* parent) : QCommandLinkButton(text, description, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcommandlinkbutton_metaobject_callback) {
            QMetaObject* callback_ret = qcommandlinkbutton_metaobject_callback(this);
            return callback_ret;
        }
        return QCommandLinkButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcommandlinkbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcommandlinkbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCommandLinkButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcommandlinkbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcommandlinkbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCommandLinkButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcommandlinkbutton_sizehint_callback) {
            QSize* callback_ret = qcommandlinkbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommandLinkButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcommandlinkbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qcommandlinkbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCommandLinkButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcommandlinkbutton_minimumsizehint_callback) {
            QSize* callback_ret = qcommandlinkbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommandLinkButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qcommandlinkbutton_initstyleoption_callback) {
            QStyleOptionButton* cbval1 = option;
            qcommandlinkbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qcommandlinkbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qcommandlinkbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCommandLinkButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcommandlinkbutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qcommandlinkbutton_paintevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qcommandlinkbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qcommandlinkbutton_keypressevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qcommandlinkbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = param1;
            qcommandlinkbutton_focusinevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qcommandlinkbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = param1;
            qcommandlinkbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qcommandlinkbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qcommandlinkbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qcommandlinkbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = qcommandlinkbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return QCommandLinkButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qcommandlinkbutton_checkstateset_callback) {
            qcommandlinkbutton_checkstateset_callback(this);
            return;
        }
        QCommandLinkButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qcommandlinkbutton_nextcheckstate_callback) {
            qcommandlinkbutton_nextcheckstate_callback(this);
            return;
        }
        QCommandLinkButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcommandlinkbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qcommandlinkbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcommandlinkbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = e;
            qcommandlinkbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcommandlinkbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = e;
            qcommandlinkbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcommandlinkbutton_changeevent_callback) {
            QEvent* cbval1 = e;
            qcommandlinkbutton_changeevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qcommandlinkbutton_timerevent_callback) {
            QTimerEvent* cbval1 = e;
            qcommandlinkbutton_timerevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcommandlinkbutton_devtype_callback) {
            int callback_ret = qcommandlinkbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QCommandLinkButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcommandlinkbutton_setvisible_callback) {
            bool cbval1 = visible;
            qcommandlinkbutton_setvisible_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcommandlinkbutton_hasheightforwidth_callback) {
            bool callback_ret = qcommandlinkbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QCommandLinkButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcommandlinkbutton_paintengine_callback) {
            QPaintEngine* callback_ret = qcommandlinkbutton_paintengine_callback(this);
            return callback_ret;
        }
        return QCommandLinkButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcommandlinkbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qcommandlinkbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcommandlinkbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qcommandlinkbutton_wheelevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcommandlinkbutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qcommandlinkbutton_enterevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcommandlinkbutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            qcommandlinkbutton_leaveevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcommandlinkbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qcommandlinkbutton_moveevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcommandlinkbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qcommandlinkbutton_resizeevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcommandlinkbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qcommandlinkbutton_closeevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcommandlinkbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qcommandlinkbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcommandlinkbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qcommandlinkbutton_tabletevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcommandlinkbutton_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qcommandlinkbutton_actionevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcommandlinkbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qcommandlinkbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcommandlinkbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qcommandlinkbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcommandlinkbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qcommandlinkbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcommandlinkbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qcommandlinkbutton_dropevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcommandlinkbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            qcommandlinkbutton_showevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcommandlinkbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qcommandlinkbutton_hideevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcommandlinkbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qcommandlinkbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QCommandLinkButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcommandlinkbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qcommandlinkbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCommandLinkButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcommandlinkbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            qcommandlinkbutton_initpainter_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcommandlinkbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qcommandlinkbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QCommandLinkButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcommandlinkbutton_sharedpainter_callback) {
            QPainter* callback_ret = qcommandlinkbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return QCommandLinkButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcommandlinkbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qcommandlinkbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcommandlinkbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qcommandlinkbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommandLinkButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcommandlinkbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qcommandlinkbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QCommandLinkButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcommandlinkbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcommandlinkbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCommandLinkButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcommandlinkbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcommandlinkbutton_childevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcommandlinkbutton_customevent_callback) {
            QEvent* cbval1 = event;
            qcommandlinkbutton_customevent_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcommandlinkbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcommandlinkbutton_connectnotify_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcommandlinkbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcommandlinkbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCommandLinkButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QCommandLinkButton_SuperEvent(QCommandLinkButton* self, QEvent* e);
    friend void QCommandLinkButton_SuperPaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
    friend void QCommandLinkButton_SuperKeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1);
    friend void QCommandLinkButton_SuperFocusInEvent(QCommandLinkButton* self, QFocusEvent* param1);
    friend void QCommandLinkButton_SuperFocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1);
    friend void QCommandLinkButton_SuperMouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1);
    friend bool QCommandLinkButton_SuperHitButton(const QCommandLinkButton* self, const QPoint* pos);
    friend void QCommandLinkButton_SuperCheckStateSet(QCommandLinkButton* self);
    friend void QCommandLinkButton_SuperNextCheckState(QCommandLinkButton* self);
    friend void QCommandLinkButton_SuperKeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e);
    friend void QCommandLinkButton_SuperMousePressEvent(QCommandLinkButton* self, QMouseEvent* e);
    friend void QCommandLinkButton_SuperMouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e);
    friend void QCommandLinkButton_SuperChangeEvent(QCommandLinkButton* self, QEvent* e);
    friend void QCommandLinkButton_SuperTimerEvent(QCommandLinkButton* self, QTimerEvent* e);
    friend void QCommandLinkButton_SuperMouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event);
    friend void QCommandLinkButton_SuperWheelEvent(QCommandLinkButton* self, QWheelEvent* event);
    friend void QCommandLinkButton_SuperEnterEvent(QCommandLinkButton* self, QEnterEvent* event);
    friend void QCommandLinkButton_SuperLeaveEvent(QCommandLinkButton* self, QEvent* event);
    friend void QCommandLinkButton_SuperMoveEvent(QCommandLinkButton* self, QMoveEvent* event);
    friend void QCommandLinkButton_SuperResizeEvent(QCommandLinkButton* self, QResizeEvent* event);
    friend void QCommandLinkButton_SuperCloseEvent(QCommandLinkButton* self, QCloseEvent* event);
    friend void QCommandLinkButton_SuperContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event);
    friend void QCommandLinkButton_SuperTabletEvent(QCommandLinkButton* self, QTabletEvent* event);
    friend void QCommandLinkButton_SuperActionEvent(QCommandLinkButton* self, QActionEvent* event);
    friend void QCommandLinkButton_SuperDragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event);
    friend void QCommandLinkButton_SuperDragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event);
    friend void QCommandLinkButton_SuperDragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event);
    friend void QCommandLinkButton_SuperDropEvent(QCommandLinkButton* self, QDropEvent* event);
    friend void QCommandLinkButton_SuperShowEvent(QCommandLinkButton* self, QShowEvent* event);
    friend void QCommandLinkButton_SuperHideEvent(QCommandLinkButton* self, QHideEvent* event);
    friend bool QCommandLinkButton_SuperNativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QCommandLinkButton_SuperMetric(const QCommandLinkButton* self, int param1);
    friend void QCommandLinkButton_SuperInitPainter(const QCommandLinkButton* self, QPainter* painter);
    friend QPaintDevice* QCommandLinkButton_SuperRedirected(const QCommandLinkButton* self, QPoint* offset);
    friend QPainter* QCommandLinkButton_SuperSharedPainter(const QCommandLinkButton* self);
    friend void QCommandLinkButton_SuperInputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1);
    friend bool QCommandLinkButton_SuperFocusNextPrevChild(QCommandLinkButton* self, bool next);
    friend void QCommandLinkButton_SuperChildEvent(QCommandLinkButton* self, QChildEvent* event);
    friend void QCommandLinkButton_SuperCustomEvent(QCommandLinkButton* self, QEvent* event);
    friend void QCommandLinkButton_SuperConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
    friend void QCommandLinkButton_SuperDisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
};

#endif
