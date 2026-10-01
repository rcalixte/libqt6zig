#pragma once
#ifndef LIBQTOOLBUTTON_HXX
#define LIBQTOOLBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QToolButton
class VirtualQToolButton final : public QToolButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using QToolButton_MetaObject_Callback = QMetaObject* (*)(const QToolButton*);
    using QToolButton_Metacast_Callback = void* (*)(QToolButton*, const char*);
    using QToolButton_Metacall_Callback = int (*)(QToolButton*, int, int, void**);
    using QToolButton_SizeHint_Callback = QSize* (*)(const QToolButton*);
    using QToolButton_MinimumSizeHint_Callback = QSize* (*)(const QToolButton*);
    using QToolButton_Event_Callback = bool (*)(QToolButton*, QEvent*);
    using QToolButton_MousePressEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_MouseReleaseEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_PaintEvent_Callback = void (*)(QToolButton*, QPaintEvent*);
    using QToolButton_ActionEvent_Callback = void (*)(QToolButton*, QActionEvent*);
    using QToolButton_EnterEvent_Callback = void (*)(QToolButton*, QEnterEvent*);
    using QToolButton_LeaveEvent_Callback = void (*)(QToolButton*, QEvent*);
    using QToolButton_TimerEvent_Callback = void (*)(QToolButton*, QTimerEvent*);
    using QToolButton_ChangeEvent_Callback = void (*)(QToolButton*, QEvent*);
    using QToolButton_HitButton_Callback = bool (*)(const QToolButton*, QPoint*);
    using QToolButton_CheckStateSet_Callback = void (*)(QToolButton*);
    using QToolButton_NextCheckState_Callback = void (*)(QToolButton*);
    using QToolButton_InitStyleOption_Callback = void (*)(const QToolButton*, QStyleOptionToolButton*);
    using QToolButton_KeyPressEvent_Callback = void (*)(QToolButton*, QKeyEvent*);
    using QToolButton_KeyReleaseEvent_Callback = void (*)(QToolButton*, QKeyEvent*);
    using QToolButton_MouseMoveEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_FocusInEvent_Callback = void (*)(QToolButton*, QFocusEvent*);
    using QToolButton_FocusOutEvent_Callback = void (*)(QToolButton*, QFocusEvent*);
    using QToolButton_DevType_Callback = int (*)(const QToolButton*);
    using QToolButton_SetVisible_Callback = void (*)(QToolButton*, bool);
    using QToolButton_HeightForWidth_Callback = int (*)(const QToolButton*, int);
    using QToolButton_HasHeightForWidth_Callback = bool (*)(const QToolButton*);
    using QToolButton_PaintEngine_Callback = QPaintEngine* (*)(const QToolButton*);
    using QToolButton_MouseDoubleClickEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_WheelEvent_Callback = void (*)(QToolButton*, QWheelEvent*);
    using QToolButton_MoveEvent_Callback = void (*)(QToolButton*, QMoveEvent*);
    using QToolButton_ResizeEvent_Callback = void (*)(QToolButton*, QResizeEvent*);
    using QToolButton_CloseEvent_Callback = void (*)(QToolButton*, QCloseEvent*);
    using QToolButton_ContextMenuEvent_Callback = void (*)(QToolButton*, QContextMenuEvent*);
    using QToolButton_TabletEvent_Callback = void (*)(QToolButton*, QTabletEvent*);
    using QToolButton_DragEnterEvent_Callback = void (*)(QToolButton*, QDragEnterEvent*);
    using QToolButton_DragMoveEvent_Callback = void (*)(QToolButton*, QDragMoveEvent*);
    using QToolButton_DragLeaveEvent_Callback = void (*)(QToolButton*, QDragLeaveEvent*);
    using QToolButton_DropEvent_Callback = void (*)(QToolButton*, QDropEvent*);
    using QToolButton_ShowEvent_Callback = void (*)(QToolButton*, QShowEvent*);
    using QToolButton_HideEvent_Callback = void (*)(QToolButton*, QHideEvent*);
    using QToolButton_NativeEvent_Callback = bool (*)(QToolButton*, libqt_string, void*, intptr_t*);
    using QToolButton_Metric_Callback = int (*)(const QToolButton*, int);
    using QToolButton_InitPainter_Callback = void (*)(const QToolButton*, QPainter*);
    using QToolButton_Redirected_Callback = QPaintDevice* (*)(const QToolButton*, QPoint*);
    using QToolButton_SharedPainter_Callback = QPainter* (*)(const QToolButton*);
    using QToolButton_InputMethodEvent_Callback = void (*)(QToolButton*, QInputMethodEvent*);
    using QToolButton_InputMethodQuery_Callback = QVariant* (*)(const QToolButton*, int);
    using QToolButton_FocusNextPrevChild_Callback = bool (*)(QToolButton*, bool);
    using QToolButton_EventFilter_Callback = bool (*)(QToolButton*, QObject*, QEvent*);
    using QToolButton_ChildEvent_Callback = void (*)(QToolButton*, QChildEvent*);
    using QToolButton_CustomEvent_Callback = void (*)(QToolButton*, QEvent*);
    using QToolButton_ConnectNotify_Callback = void (*)(QToolButton*, QMetaMethod*);
    using QToolButton_DisconnectNotify_Callback = void (*)(QToolButton*, QMetaMethod*);
    using QToolButton::create;
    using QToolButton::destroy;
    using QToolButton::focusNextChild;
    using QToolButton::focusPreviousChild;
    using QToolButton::getDecodedMetricF;
    using QToolButton::isSignalConnected;
    using QToolButton::receivers;
    using QToolButton::sender;
    using QToolButton::senderSignalIndex;
    using QToolButton::updateMicroFocus;

    // Instance callback storage
    QToolButton_MetaObject_Callback qtoolbutton_metaobject_callback = nullptr;
    QToolButton_Metacast_Callback qtoolbutton_metacast_callback = nullptr;
    QToolButton_Metacall_Callback qtoolbutton_metacall_callback = nullptr;
    QToolButton_SizeHint_Callback qtoolbutton_sizehint_callback = nullptr;
    QToolButton_MinimumSizeHint_Callback qtoolbutton_minimumsizehint_callback = nullptr;
    QToolButton_Event_Callback qtoolbutton_event_callback = nullptr;
    QToolButton_MousePressEvent_Callback qtoolbutton_mousepressevent_callback = nullptr;
    QToolButton_MouseReleaseEvent_Callback qtoolbutton_mousereleaseevent_callback = nullptr;
    QToolButton_PaintEvent_Callback qtoolbutton_paintevent_callback = nullptr;
    QToolButton_ActionEvent_Callback qtoolbutton_actionevent_callback = nullptr;
    QToolButton_EnterEvent_Callback qtoolbutton_enterevent_callback = nullptr;
    QToolButton_LeaveEvent_Callback qtoolbutton_leaveevent_callback = nullptr;
    QToolButton_TimerEvent_Callback qtoolbutton_timerevent_callback = nullptr;
    QToolButton_ChangeEvent_Callback qtoolbutton_changeevent_callback = nullptr;
    QToolButton_HitButton_Callback qtoolbutton_hitbutton_callback = nullptr;
    QToolButton_CheckStateSet_Callback qtoolbutton_checkstateset_callback = nullptr;
    QToolButton_NextCheckState_Callback qtoolbutton_nextcheckstate_callback = nullptr;
    QToolButton_InitStyleOption_Callback qtoolbutton_initstyleoption_callback = nullptr;
    QToolButton_KeyPressEvent_Callback qtoolbutton_keypressevent_callback = nullptr;
    QToolButton_KeyReleaseEvent_Callback qtoolbutton_keyreleaseevent_callback = nullptr;
    QToolButton_MouseMoveEvent_Callback qtoolbutton_mousemoveevent_callback = nullptr;
    QToolButton_FocusInEvent_Callback qtoolbutton_focusinevent_callback = nullptr;
    QToolButton_FocusOutEvent_Callback qtoolbutton_focusoutevent_callback = nullptr;
    QToolButton_DevType_Callback qtoolbutton_devtype_callback = nullptr;
    QToolButton_SetVisible_Callback qtoolbutton_setvisible_callback = nullptr;
    QToolButton_HeightForWidth_Callback qtoolbutton_heightforwidth_callback = nullptr;
    QToolButton_HasHeightForWidth_Callback qtoolbutton_hasheightforwidth_callback = nullptr;
    QToolButton_PaintEngine_Callback qtoolbutton_paintengine_callback = nullptr;
    QToolButton_MouseDoubleClickEvent_Callback qtoolbutton_mousedoubleclickevent_callback = nullptr;
    QToolButton_WheelEvent_Callback qtoolbutton_wheelevent_callback = nullptr;
    QToolButton_MoveEvent_Callback qtoolbutton_moveevent_callback = nullptr;
    QToolButton_ResizeEvent_Callback qtoolbutton_resizeevent_callback = nullptr;
    QToolButton_CloseEvent_Callback qtoolbutton_closeevent_callback = nullptr;
    QToolButton_ContextMenuEvent_Callback qtoolbutton_contextmenuevent_callback = nullptr;
    QToolButton_TabletEvent_Callback qtoolbutton_tabletevent_callback = nullptr;
    QToolButton_DragEnterEvent_Callback qtoolbutton_dragenterevent_callback = nullptr;
    QToolButton_DragMoveEvent_Callback qtoolbutton_dragmoveevent_callback = nullptr;
    QToolButton_DragLeaveEvent_Callback qtoolbutton_dragleaveevent_callback = nullptr;
    QToolButton_DropEvent_Callback qtoolbutton_dropevent_callback = nullptr;
    QToolButton_ShowEvent_Callback qtoolbutton_showevent_callback = nullptr;
    QToolButton_HideEvent_Callback qtoolbutton_hideevent_callback = nullptr;
    QToolButton_NativeEvent_Callback qtoolbutton_nativeevent_callback = nullptr;
    QToolButton_Metric_Callback qtoolbutton_metric_callback = nullptr;
    QToolButton_InitPainter_Callback qtoolbutton_initpainter_callback = nullptr;
    QToolButton_Redirected_Callback qtoolbutton_redirected_callback = nullptr;
    QToolButton_SharedPainter_Callback qtoolbutton_sharedpainter_callback = nullptr;
    QToolButton_InputMethodEvent_Callback qtoolbutton_inputmethodevent_callback = nullptr;
    QToolButton_InputMethodQuery_Callback qtoolbutton_inputmethodquery_callback = nullptr;
    QToolButton_FocusNextPrevChild_Callback qtoolbutton_focusnextprevchild_callback = nullptr;
    QToolButton_EventFilter_Callback qtoolbutton_eventfilter_callback = nullptr;
    QToolButton_ChildEvent_Callback qtoolbutton_childevent_callback = nullptr;
    QToolButton_CustomEvent_Callback qtoolbutton_customevent_callback = nullptr;
    QToolButton_ConnectNotify_Callback qtoolbutton_connectnotify_callback = nullptr;
    QToolButton_DisconnectNotify_Callback qtoolbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QToolButton {
        using QToolButton::actionEvent;
        using QToolButton::changeEvent;
        using QToolButton::checkStateSet;
        using QToolButton::childEvent;
        using QToolButton::closeEvent;
        using QToolButton::connectNotify;
        using QToolButton::contextMenuEvent;
        using QToolButton::customEvent;
        using QToolButton::disconnectNotify;
        using QToolButton::dragEnterEvent;
        using QToolButton::dragLeaveEvent;
        using QToolButton::dragMoveEvent;
        using QToolButton::dropEvent;
        using QToolButton::enterEvent;
        using QToolButton::event;
        using QToolButton::focusInEvent;
        using QToolButton::focusNextPrevChild;
        using QToolButton::focusOutEvent;
        using QToolButton::hideEvent;
        using QToolButton::hitButton;
        using QToolButton::initPainter;
        using QToolButton::initStyleOption;
        using QToolButton::inputMethodEvent;
        using QToolButton::keyPressEvent;
        using QToolButton::keyReleaseEvent;
        using QToolButton::leaveEvent;
        using QToolButton::metric;
        using QToolButton::mouseDoubleClickEvent;
        using QToolButton::mouseMoveEvent;
        using QToolButton::mousePressEvent;
        using QToolButton::mouseReleaseEvent;
        using QToolButton::moveEvent;
        using QToolButton::nativeEvent;
        using QToolButton::nextCheckState;
        using QToolButton::paintEvent;
        using QToolButton::redirected;
        using QToolButton::resizeEvent;
        using QToolButton::sharedPainter;
        using QToolButton::showEvent;
        using QToolButton::tabletEvent;
        using QToolButton::timerEvent;
        using QToolButton::wheelEvent;
    };

    VirtualQToolButton(QWidget* parent) : QToolButton(parent) {};
    VirtualQToolButton() : QToolButton() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtoolbutton_metaobject_callback) {
            QMetaObject* callback_ret = qtoolbutton_metaobject_callback(this);
            return callback_ret;
        }
        return QToolButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtoolbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtoolbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QToolButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtoolbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtoolbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QToolButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtoolbutton_sizehint_callback) {
            QSize* callback_ret = qtoolbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtoolbutton_minimumsizehint_callback) {
            QSize* callback_ret = qtoolbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtoolbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qtoolbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return QToolButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qtoolbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qtoolbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        QToolButton::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qtoolbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qtoolbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QToolButton::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtoolbutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qtoolbutton_paintevent_callback(this, cbval1);
            return;
        }
        QToolButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (qtoolbutton_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            qtoolbutton_actionevent_callback(this, cbval1);
            return;
        }
        QToolButton::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (qtoolbutton_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            qtoolbutton_enterevent_callback(this, cbval1);
            return;
        }
        QToolButton::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (qtoolbutton_leaveevent_callback) {
            QEvent* cbval1 = param1;
            qtoolbutton_leaveevent_callback(this, cbval1);
            return;
        }
        QToolButton::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qtoolbutton_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            qtoolbutton_timerevent_callback(this, cbval1);
            return;
        }
        QToolButton::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtoolbutton_changeevent_callback) {
            QEvent* cbval1 = param1;
            qtoolbutton_changeevent_callback(this, cbval1);
            return;
        }
        QToolButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qtoolbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = qtoolbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return QToolButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qtoolbutton_checkstateset_callback) {
            qtoolbutton_checkstateset_callback(this);
            return;
        }
        QToolButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qtoolbutton_nextcheckstate_callback) {
            qtoolbutton_nextcheckstate_callback(this);
            return;
        }
        QToolButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (qtoolbutton_initstyleoption_callback) {
            QStyleOptionToolButton* cbval1 = option;
            qtoolbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        QToolButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qtoolbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            qtoolbutton_keypressevent_callback(this, cbval1);
            return;
        }
        QToolButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtoolbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            qtoolbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QToolButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qtoolbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            qtoolbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        QToolButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtoolbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            qtoolbutton_focusinevent_callback(this, cbval1);
            return;
        }
        QToolButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qtoolbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            qtoolbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        QToolButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtoolbutton_devtype_callback) {
            int callback_ret = qtoolbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QToolButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtoolbutton_setvisible_callback) {
            bool cbval1 = visible;
            qtoolbutton_setvisible_callback(this, cbval1);
            return;
        }
        QToolButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtoolbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qtoolbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtoolbutton_hasheightforwidth_callback) {
            bool callback_ret = qtoolbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QToolButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtoolbutton_paintengine_callback) {
            QPaintEngine* callback_ret = qtoolbutton_paintengine_callback(this);
            return callback_ret;
        }
        return QToolButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtoolbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtoolbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QToolButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtoolbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtoolbutton_wheelevent_callback(this, cbval1);
            return;
        }
        QToolButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtoolbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtoolbutton_moveevent_callback(this, cbval1);
            return;
        }
        QToolButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtoolbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qtoolbutton_resizeevent_callback(this, cbval1);
            return;
        }
        QToolButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtoolbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtoolbutton_closeevent_callback(this, cbval1);
            return;
        }
        QToolButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtoolbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qtoolbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        QToolButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtoolbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtoolbutton_tabletevent_callback(this, cbval1);
            return;
        }
        QToolButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtoolbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtoolbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        QToolButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtoolbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtoolbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        QToolButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtoolbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtoolbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        QToolButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtoolbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtoolbutton_dropevent_callback(this, cbval1);
            return;
        }
        QToolButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtoolbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            qtoolbutton_showevent_callback(this, cbval1);
            return;
        }
        QToolButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtoolbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtoolbutton_hideevent_callback(this, cbval1);
            return;
        }
        QToolButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtoolbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtoolbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QToolButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtoolbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtoolbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QToolButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtoolbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtoolbutton_initpainter_callback(this, cbval1);
            return;
        }
        QToolButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtoolbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtoolbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QToolButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtoolbutton_sharedpainter_callback) {
            QPainter* callback_ret = qtoolbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return QToolButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtoolbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtoolbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        QToolButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtoolbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qtoolbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QToolButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtoolbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtoolbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QToolButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtoolbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtoolbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QToolButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtoolbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtoolbutton_childevent_callback(this, cbval1);
            return;
        }
        QToolButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtoolbutton_customevent_callback) {
            QEvent* cbval1 = event;
            qtoolbutton_customevent_callback(this, cbval1);
            return;
        }
        QToolButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtoolbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtoolbutton_connectnotify_callback(this, cbval1);
            return;
        }
        QToolButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtoolbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtoolbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        QToolButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QToolButton_SuperEvent(QToolButton* self, QEvent* e);
    friend void QToolButton_SuperMousePressEvent(QToolButton* self, QMouseEvent* param1);
    friend void QToolButton_SuperMouseReleaseEvent(QToolButton* self, QMouseEvent* param1);
    friend void QToolButton_SuperPaintEvent(QToolButton* self, QPaintEvent* param1);
    friend void QToolButton_SuperActionEvent(QToolButton* self, QActionEvent* param1);
    friend void QToolButton_SuperEnterEvent(QToolButton* self, QEnterEvent* param1);
    friend void QToolButton_SuperLeaveEvent(QToolButton* self, QEvent* param1);
    friend void QToolButton_SuperTimerEvent(QToolButton* self, QTimerEvent* param1);
    friend void QToolButton_SuperChangeEvent(QToolButton* self, QEvent* param1);
    friend bool QToolButton_SuperHitButton(const QToolButton* self, const QPoint* pos);
    friend void QToolButton_SuperCheckStateSet(QToolButton* self);
    friend void QToolButton_SuperNextCheckState(QToolButton* self);
    friend void QToolButton_SuperInitStyleOption(const QToolButton* self, QStyleOptionToolButton* option);
    friend void QToolButton_SuperKeyPressEvent(QToolButton* self, QKeyEvent* e);
    friend void QToolButton_SuperKeyReleaseEvent(QToolButton* self, QKeyEvent* e);
    friend void QToolButton_SuperMouseMoveEvent(QToolButton* self, QMouseEvent* e);
    friend void QToolButton_SuperFocusInEvent(QToolButton* self, QFocusEvent* e);
    friend void QToolButton_SuperFocusOutEvent(QToolButton* self, QFocusEvent* e);
    friend void QToolButton_SuperMouseDoubleClickEvent(QToolButton* self, QMouseEvent* event);
    friend void QToolButton_SuperWheelEvent(QToolButton* self, QWheelEvent* event);
    friend void QToolButton_SuperMoveEvent(QToolButton* self, QMoveEvent* event);
    friend void QToolButton_SuperResizeEvent(QToolButton* self, QResizeEvent* event);
    friend void QToolButton_SuperCloseEvent(QToolButton* self, QCloseEvent* event);
    friend void QToolButton_SuperContextMenuEvent(QToolButton* self, QContextMenuEvent* event);
    friend void QToolButton_SuperTabletEvent(QToolButton* self, QTabletEvent* event);
    friend void QToolButton_SuperDragEnterEvent(QToolButton* self, QDragEnterEvent* event);
    friend void QToolButton_SuperDragMoveEvent(QToolButton* self, QDragMoveEvent* event);
    friend void QToolButton_SuperDragLeaveEvent(QToolButton* self, QDragLeaveEvent* event);
    friend void QToolButton_SuperDropEvent(QToolButton* self, QDropEvent* event);
    friend void QToolButton_SuperShowEvent(QToolButton* self, QShowEvent* event);
    friend void QToolButton_SuperHideEvent(QToolButton* self, QHideEvent* event);
    friend bool QToolButton_SuperNativeEvent(QToolButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QToolButton_SuperMetric(const QToolButton* self, int param1);
    friend void QToolButton_SuperInitPainter(const QToolButton* self, QPainter* painter);
    friend QPaintDevice* QToolButton_SuperRedirected(const QToolButton* self, QPoint* offset);
    friend QPainter* QToolButton_SuperSharedPainter(const QToolButton* self);
    friend void QToolButton_SuperInputMethodEvent(QToolButton* self, QInputMethodEvent* param1);
    friend bool QToolButton_SuperFocusNextPrevChild(QToolButton* self, bool next);
    friend void QToolButton_SuperChildEvent(QToolButton* self, QChildEvent* event);
    friend void QToolButton_SuperCustomEvent(QToolButton* self, QEvent* event);
    friend void QToolButton_SuperConnectNotify(QToolButton* self, const QMetaMethod* signal);
    friend void QToolButton_SuperDisconnectNotify(QToolButton* self, const QMetaMethod* signal);
};

#endif
