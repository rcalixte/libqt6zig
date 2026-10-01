#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKANIMATEDBUTTON_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKANIMATEDBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAnimatedButton
class VirtualKAnimatedButton final : public KAnimatedButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAnimatedButton_MetaObject_Callback = QMetaObject* (*)(const KAnimatedButton*);
    using KAnimatedButton_Metacast_Callback = void* (*)(KAnimatedButton*, const char*);
    using KAnimatedButton_Metacall_Callback = int (*)(KAnimatedButton*, int, int, void**);
    using KAnimatedButton_SizeHint_Callback = QSize* (*)(const KAnimatedButton*);
    using KAnimatedButton_MinimumSizeHint_Callback = QSize* (*)(const KAnimatedButton*);
    using KAnimatedButton_Event_Callback = bool (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_MousePressEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_MouseReleaseEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_PaintEvent_Callback = void (*)(KAnimatedButton*, QPaintEvent*);
    using KAnimatedButton_ActionEvent_Callback = void (*)(KAnimatedButton*, QActionEvent*);
    using KAnimatedButton_EnterEvent_Callback = void (*)(KAnimatedButton*, QEnterEvent*);
    using KAnimatedButton_LeaveEvent_Callback = void (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_TimerEvent_Callback = void (*)(KAnimatedButton*, QTimerEvent*);
    using KAnimatedButton_ChangeEvent_Callback = void (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_HitButton_Callback = bool (*)(const KAnimatedButton*, QPoint*);
    using KAnimatedButton_CheckStateSet_Callback = void (*)(KAnimatedButton*);
    using KAnimatedButton_NextCheckState_Callback = void (*)(KAnimatedButton*);
    using KAnimatedButton_InitStyleOption_Callback = void (*)(const KAnimatedButton*, QStyleOptionToolButton*);
    using KAnimatedButton_KeyPressEvent_Callback = void (*)(KAnimatedButton*, QKeyEvent*);
    using KAnimatedButton_KeyReleaseEvent_Callback = void (*)(KAnimatedButton*, QKeyEvent*);
    using KAnimatedButton_MouseMoveEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_FocusInEvent_Callback = void (*)(KAnimatedButton*, QFocusEvent*);
    using KAnimatedButton_FocusOutEvent_Callback = void (*)(KAnimatedButton*, QFocusEvent*);
    using KAnimatedButton_DevType_Callback = int (*)(const KAnimatedButton*);
    using KAnimatedButton_SetVisible_Callback = void (*)(KAnimatedButton*, bool);
    using KAnimatedButton_HeightForWidth_Callback = int (*)(const KAnimatedButton*, int);
    using KAnimatedButton_HasHeightForWidth_Callback = bool (*)(const KAnimatedButton*);
    using KAnimatedButton_PaintEngine_Callback = QPaintEngine* (*)(const KAnimatedButton*);
    using KAnimatedButton_MouseDoubleClickEvent_Callback = void (*)(KAnimatedButton*, QMouseEvent*);
    using KAnimatedButton_WheelEvent_Callback = void (*)(KAnimatedButton*, QWheelEvent*);
    using KAnimatedButton_MoveEvent_Callback = void (*)(KAnimatedButton*, QMoveEvent*);
    using KAnimatedButton_ResizeEvent_Callback = void (*)(KAnimatedButton*, QResizeEvent*);
    using KAnimatedButton_CloseEvent_Callback = void (*)(KAnimatedButton*, QCloseEvent*);
    using KAnimatedButton_ContextMenuEvent_Callback = void (*)(KAnimatedButton*, QContextMenuEvent*);
    using KAnimatedButton_TabletEvent_Callback = void (*)(KAnimatedButton*, QTabletEvent*);
    using KAnimatedButton_DragEnterEvent_Callback = void (*)(KAnimatedButton*, QDragEnterEvent*);
    using KAnimatedButton_DragMoveEvent_Callback = void (*)(KAnimatedButton*, QDragMoveEvent*);
    using KAnimatedButton_DragLeaveEvent_Callback = void (*)(KAnimatedButton*, QDragLeaveEvent*);
    using KAnimatedButton_DropEvent_Callback = void (*)(KAnimatedButton*, QDropEvent*);
    using KAnimatedButton_ShowEvent_Callback = void (*)(KAnimatedButton*, QShowEvent*);
    using KAnimatedButton_HideEvent_Callback = void (*)(KAnimatedButton*, QHideEvent*);
    using KAnimatedButton_NativeEvent_Callback = bool (*)(KAnimatedButton*, libqt_string, void*, intptr_t*);
    using KAnimatedButton_Metric_Callback = int (*)(const KAnimatedButton*, int);
    using KAnimatedButton_InitPainter_Callback = void (*)(const KAnimatedButton*, QPainter*);
    using KAnimatedButton_Redirected_Callback = QPaintDevice* (*)(const KAnimatedButton*, QPoint*);
    using KAnimatedButton_SharedPainter_Callback = QPainter* (*)(const KAnimatedButton*);
    using KAnimatedButton_InputMethodEvent_Callback = void (*)(KAnimatedButton*, QInputMethodEvent*);
    using KAnimatedButton_InputMethodQuery_Callback = QVariant* (*)(const KAnimatedButton*, int);
    using KAnimatedButton_FocusNextPrevChild_Callback = bool (*)(KAnimatedButton*, bool);
    using KAnimatedButton_EventFilter_Callback = bool (*)(KAnimatedButton*, QObject*, QEvent*);
    using KAnimatedButton_ChildEvent_Callback = void (*)(KAnimatedButton*, QChildEvent*);
    using KAnimatedButton_CustomEvent_Callback = void (*)(KAnimatedButton*, QEvent*);
    using KAnimatedButton_ConnectNotify_Callback = void (*)(KAnimatedButton*, QMetaMethod*);
    using KAnimatedButton_DisconnectNotify_Callback = void (*)(KAnimatedButton*, QMetaMethod*);
    using KAnimatedButton::create;
    using KAnimatedButton::destroy;
    using KAnimatedButton::focusNextChild;
    using KAnimatedButton::focusPreviousChild;
    using KAnimatedButton::getDecodedMetricF;
    using KAnimatedButton::isSignalConnected;
    using KAnimatedButton::receivers;
    using KAnimatedButton::sender;
    using KAnimatedButton::senderSignalIndex;
    using KAnimatedButton::updateMicroFocus;

    // Instance callback storage
    KAnimatedButton_MetaObject_Callback kanimatedbutton_metaobject_callback = nullptr;
    KAnimatedButton_Metacast_Callback kanimatedbutton_metacast_callback = nullptr;
    KAnimatedButton_Metacall_Callback kanimatedbutton_metacall_callback = nullptr;
    KAnimatedButton_SizeHint_Callback kanimatedbutton_sizehint_callback = nullptr;
    KAnimatedButton_MinimumSizeHint_Callback kanimatedbutton_minimumsizehint_callback = nullptr;
    KAnimatedButton_Event_Callback kanimatedbutton_event_callback = nullptr;
    KAnimatedButton_MousePressEvent_Callback kanimatedbutton_mousepressevent_callback = nullptr;
    KAnimatedButton_MouseReleaseEvent_Callback kanimatedbutton_mousereleaseevent_callback = nullptr;
    KAnimatedButton_PaintEvent_Callback kanimatedbutton_paintevent_callback = nullptr;
    KAnimatedButton_ActionEvent_Callback kanimatedbutton_actionevent_callback = nullptr;
    KAnimatedButton_EnterEvent_Callback kanimatedbutton_enterevent_callback = nullptr;
    KAnimatedButton_LeaveEvent_Callback kanimatedbutton_leaveevent_callback = nullptr;
    KAnimatedButton_TimerEvent_Callback kanimatedbutton_timerevent_callback = nullptr;
    KAnimatedButton_ChangeEvent_Callback kanimatedbutton_changeevent_callback = nullptr;
    KAnimatedButton_HitButton_Callback kanimatedbutton_hitbutton_callback = nullptr;
    KAnimatedButton_CheckStateSet_Callback kanimatedbutton_checkstateset_callback = nullptr;
    KAnimatedButton_NextCheckState_Callback kanimatedbutton_nextcheckstate_callback = nullptr;
    KAnimatedButton_InitStyleOption_Callback kanimatedbutton_initstyleoption_callback = nullptr;
    KAnimatedButton_KeyPressEvent_Callback kanimatedbutton_keypressevent_callback = nullptr;
    KAnimatedButton_KeyReleaseEvent_Callback kanimatedbutton_keyreleaseevent_callback = nullptr;
    KAnimatedButton_MouseMoveEvent_Callback kanimatedbutton_mousemoveevent_callback = nullptr;
    KAnimatedButton_FocusInEvent_Callback kanimatedbutton_focusinevent_callback = nullptr;
    KAnimatedButton_FocusOutEvent_Callback kanimatedbutton_focusoutevent_callback = nullptr;
    KAnimatedButton_DevType_Callback kanimatedbutton_devtype_callback = nullptr;
    KAnimatedButton_SetVisible_Callback kanimatedbutton_setvisible_callback = nullptr;
    KAnimatedButton_HeightForWidth_Callback kanimatedbutton_heightforwidth_callback = nullptr;
    KAnimatedButton_HasHeightForWidth_Callback kanimatedbutton_hasheightforwidth_callback = nullptr;
    KAnimatedButton_PaintEngine_Callback kanimatedbutton_paintengine_callback = nullptr;
    KAnimatedButton_MouseDoubleClickEvent_Callback kanimatedbutton_mousedoubleclickevent_callback = nullptr;
    KAnimatedButton_WheelEvent_Callback kanimatedbutton_wheelevent_callback = nullptr;
    KAnimatedButton_MoveEvent_Callback kanimatedbutton_moveevent_callback = nullptr;
    KAnimatedButton_ResizeEvent_Callback kanimatedbutton_resizeevent_callback = nullptr;
    KAnimatedButton_CloseEvent_Callback kanimatedbutton_closeevent_callback = nullptr;
    KAnimatedButton_ContextMenuEvent_Callback kanimatedbutton_contextmenuevent_callback = nullptr;
    KAnimatedButton_TabletEvent_Callback kanimatedbutton_tabletevent_callback = nullptr;
    KAnimatedButton_DragEnterEvent_Callback kanimatedbutton_dragenterevent_callback = nullptr;
    KAnimatedButton_DragMoveEvent_Callback kanimatedbutton_dragmoveevent_callback = nullptr;
    KAnimatedButton_DragLeaveEvent_Callback kanimatedbutton_dragleaveevent_callback = nullptr;
    KAnimatedButton_DropEvent_Callback kanimatedbutton_dropevent_callback = nullptr;
    KAnimatedButton_ShowEvent_Callback kanimatedbutton_showevent_callback = nullptr;
    KAnimatedButton_HideEvent_Callback kanimatedbutton_hideevent_callback = nullptr;
    KAnimatedButton_NativeEvent_Callback kanimatedbutton_nativeevent_callback = nullptr;
    KAnimatedButton_Metric_Callback kanimatedbutton_metric_callback = nullptr;
    KAnimatedButton_InitPainter_Callback kanimatedbutton_initpainter_callback = nullptr;
    KAnimatedButton_Redirected_Callback kanimatedbutton_redirected_callback = nullptr;
    KAnimatedButton_SharedPainter_Callback kanimatedbutton_sharedpainter_callback = nullptr;
    KAnimatedButton_InputMethodEvent_Callback kanimatedbutton_inputmethodevent_callback = nullptr;
    KAnimatedButton_InputMethodQuery_Callback kanimatedbutton_inputmethodquery_callback = nullptr;
    KAnimatedButton_FocusNextPrevChild_Callback kanimatedbutton_focusnextprevchild_callback = nullptr;
    KAnimatedButton_EventFilter_Callback kanimatedbutton_eventfilter_callback = nullptr;
    KAnimatedButton_ChildEvent_Callback kanimatedbutton_childevent_callback = nullptr;
    KAnimatedButton_CustomEvent_Callback kanimatedbutton_customevent_callback = nullptr;
    KAnimatedButton_ConnectNotify_Callback kanimatedbutton_connectnotify_callback = nullptr;
    KAnimatedButton_DisconnectNotify_Callback kanimatedbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAnimatedButton {
        using KAnimatedButton::actionEvent;
        using KAnimatedButton::changeEvent;
        using KAnimatedButton::checkStateSet;
        using KAnimatedButton::childEvent;
        using KAnimatedButton::closeEvent;
        using KAnimatedButton::connectNotify;
        using KAnimatedButton::contextMenuEvent;
        using KAnimatedButton::customEvent;
        using KAnimatedButton::disconnectNotify;
        using KAnimatedButton::dragEnterEvent;
        using KAnimatedButton::dragLeaveEvent;
        using KAnimatedButton::dragMoveEvent;
        using KAnimatedButton::dropEvent;
        using KAnimatedButton::enterEvent;
        using KAnimatedButton::event;
        using KAnimatedButton::focusInEvent;
        using KAnimatedButton::focusNextPrevChild;
        using KAnimatedButton::focusOutEvent;
        using KAnimatedButton::hideEvent;
        using KAnimatedButton::hitButton;
        using KAnimatedButton::initPainter;
        using KAnimatedButton::initStyleOption;
        using KAnimatedButton::inputMethodEvent;
        using KAnimatedButton::keyPressEvent;
        using KAnimatedButton::keyReleaseEvent;
        using KAnimatedButton::leaveEvent;
        using KAnimatedButton::metric;
        using KAnimatedButton::mouseDoubleClickEvent;
        using KAnimatedButton::mouseMoveEvent;
        using KAnimatedButton::mousePressEvent;
        using KAnimatedButton::mouseReleaseEvent;
        using KAnimatedButton::moveEvent;
        using KAnimatedButton::nativeEvent;
        using KAnimatedButton::nextCheckState;
        using KAnimatedButton::paintEvent;
        using KAnimatedButton::redirected;
        using KAnimatedButton::resizeEvent;
        using KAnimatedButton::sharedPainter;
        using KAnimatedButton::showEvent;
        using KAnimatedButton::tabletEvent;
        using KAnimatedButton::timerEvent;
        using KAnimatedButton::wheelEvent;
    };

    VirtualKAnimatedButton(QWidget* parent) : KAnimatedButton(parent) {};
    VirtualKAnimatedButton() : KAnimatedButton() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kanimatedbutton_metaobject_callback) {
            QMetaObject* callback_ret = kanimatedbutton_metaobject_callback(this);
            return callback_ret;
        }
        return KAnimatedButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kanimatedbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kanimatedbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kanimatedbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kanimatedbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kanimatedbutton_sizehint_callback) {
            QSize* callback_ret = kanimatedbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAnimatedButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kanimatedbutton_minimumsizehint_callback) {
            QSize* callback_ret = kanimatedbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAnimatedButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kanimatedbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kanimatedbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kanimatedbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            kanimatedbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kanimatedbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            kanimatedbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kanimatedbutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kanimatedbutton_paintevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kanimatedbutton_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            kanimatedbutton_actionevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kanimatedbutton_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            kanimatedbutton_enterevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kanimatedbutton_leaveevent_callback) {
            QEvent* cbval1 = param1;
            kanimatedbutton_leaveevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kanimatedbutton_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kanimatedbutton_timerevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kanimatedbutton_changeevent_callback) {
            QEvent* cbval1 = param1;
            kanimatedbutton_changeevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kanimatedbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = kanimatedbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kanimatedbutton_checkstateset_callback) {
            kanimatedbutton_checkstateset_callback(this);
            return;
        }
        KAnimatedButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kanimatedbutton_nextcheckstate_callback) {
            kanimatedbutton_nextcheckstate_callback(this);
            return;
        }
        KAnimatedButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (kanimatedbutton_initstyleoption_callback) {
            QStyleOptionToolButton* cbval1 = option;
            kanimatedbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        KAnimatedButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kanimatedbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kanimatedbutton_keypressevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kanimatedbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kanimatedbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kanimatedbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kanimatedbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kanimatedbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            kanimatedbutton_focusinevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kanimatedbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            kanimatedbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kanimatedbutton_devtype_callback) {
            int callback_ret = kanimatedbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kanimatedbutton_setvisible_callback) {
            bool cbval1 = visible;
            kanimatedbutton_setvisible_callback(this, cbval1);
            return;
        }
        KAnimatedButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kanimatedbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kanimatedbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kanimatedbutton_hasheightforwidth_callback) {
            bool callback_ret = kanimatedbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KAnimatedButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kanimatedbutton_paintengine_callback) {
            QPaintEngine* callback_ret = kanimatedbutton_paintengine_callback(this);
            return callback_ret;
        }
        return KAnimatedButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kanimatedbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kanimatedbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kanimatedbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kanimatedbutton_wheelevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kanimatedbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kanimatedbutton_moveevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kanimatedbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kanimatedbutton_resizeevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kanimatedbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kanimatedbutton_closeevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kanimatedbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kanimatedbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kanimatedbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kanimatedbutton_tabletevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kanimatedbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kanimatedbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kanimatedbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kanimatedbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kanimatedbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kanimatedbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kanimatedbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kanimatedbutton_dropevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kanimatedbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            kanimatedbutton_showevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kanimatedbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kanimatedbutton_hideevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kanimatedbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kanimatedbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KAnimatedButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kanimatedbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kanimatedbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAnimatedButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kanimatedbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            kanimatedbutton_initpainter_callback(this, cbval1);
            return;
        }
        KAnimatedButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kanimatedbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kanimatedbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kanimatedbutton_sharedpainter_callback) {
            QPainter* callback_ret = kanimatedbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return KAnimatedButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kanimatedbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kanimatedbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kanimatedbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kanimatedbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KAnimatedButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kanimatedbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kanimatedbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KAnimatedButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kanimatedbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kanimatedbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAnimatedButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kanimatedbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            kanimatedbutton_childevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kanimatedbutton_customevent_callback) {
            QEvent* cbval1 = event;
            kanimatedbutton_customevent_callback(this, cbval1);
            return;
        }
        KAnimatedButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kanimatedbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kanimatedbutton_connectnotify_callback(this, cbval1);
            return;
        }
        KAnimatedButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kanimatedbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kanimatedbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAnimatedButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KAnimatedButton_SuperEvent(KAnimatedButton* self, QEvent* e);
    friend void KAnimatedButton_SuperMousePressEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_SuperMouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1);
    friend void KAnimatedButton_SuperPaintEvent(KAnimatedButton* self, QPaintEvent* param1);
    friend void KAnimatedButton_SuperActionEvent(KAnimatedButton* self, QActionEvent* param1);
    friend void KAnimatedButton_SuperEnterEvent(KAnimatedButton* self, QEnterEvent* param1);
    friend void KAnimatedButton_SuperLeaveEvent(KAnimatedButton* self, QEvent* param1);
    friend void KAnimatedButton_SuperTimerEvent(KAnimatedButton* self, QTimerEvent* param1);
    friend void KAnimatedButton_SuperChangeEvent(KAnimatedButton* self, QEvent* param1);
    friend bool KAnimatedButton_SuperHitButton(const KAnimatedButton* self, const QPoint* pos);
    friend void KAnimatedButton_SuperCheckStateSet(KAnimatedButton* self);
    friend void KAnimatedButton_SuperNextCheckState(KAnimatedButton* self);
    friend void KAnimatedButton_SuperInitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option);
    friend void KAnimatedButton_SuperKeyPressEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_SuperKeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e);
    friend void KAnimatedButton_SuperMouseMoveEvent(KAnimatedButton* self, QMouseEvent* e);
    friend void KAnimatedButton_SuperFocusInEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_SuperFocusOutEvent(KAnimatedButton* self, QFocusEvent* e);
    friend void KAnimatedButton_SuperMouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event);
    friend void KAnimatedButton_SuperWheelEvent(KAnimatedButton* self, QWheelEvent* event);
    friend void KAnimatedButton_SuperMoveEvent(KAnimatedButton* self, QMoveEvent* event);
    friend void KAnimatedButton_SuperResizeEvent(KAnimatedButton* self, QResizeEvent* event);
    friend void KAnimatedButton_SuperCloseEvent(KAnimatedButton* self, QCloseEvent* event);
    friend void KAnimatedButton_SuperContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event);
    friend void KAnimatedButton_SuperTabletEvent(KAnimatedButton* self, QTabletEvent* event);
    friend void KAnimatedButton_SuperDragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event);
    friend void KAnimatedButton_SuperDragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event);
    friend void KAnimatedButton_SuperDragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event);
    friend void KAnimatedButton_SuperDropEvent(KAnimatedButton* self, QDropEvent* event);
    friend void KAnimatedButton_SuperShowEvent(KAnimatedButton* self, QShowEvent* event);
    friend void KAnimatedButton_SuperHideEvent(KAnimatedButton* self, QHideEvent* event);
    friend bool KAnimatedButton_SuperNativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KAnimatedButton_SuperMetric(const KAnimatedButton* self, int param1);
    friend void KAnimatedButton_SuperInitPainter(const KAnimatedButton* self, QPainter* painter);
    friend QPaintDevice* KAnimatedButton_SuperRedirected(const KAnimatedButton* self, QPoint* offset);
    friend QPainter* KAnimatedButton_SuperSharedPainter(const KAnimatedButton* self);
    friend void KAnimatedButton_SuperInputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1);
    friend bool KAnimatedButton_SuperFocusNextPrevChild(KAnimatedButton* self, bool next);
    friend void KAnimatedButton_SuperChildEvent(KAnimatedButton* self, QChildEvent* event);
    friend void KAnimatedButton_SuperCustomEvent(KAnimatedButton* self, QEvent* event);
    friend void KAnimatedButton_SuperConnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
    friend void KAnimatedButton_SuperDisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal);
};

#endif
