#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKCONTEXTUALHELPBUTTON_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKCONTEXTUALHELPBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KContextualHelpButton
class VirtualKContextualHelpButton final : public KContextualHelpButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KContextualHelpButton_MetaObject_Callback = QMetaObject* (*)(const KContextualHelpButton*);
    using KContextualHelpButton_Metacast_Callback = void* (*)(KContextualHelpButton*, const char*);
    using KContextualHelpButton_Metacall_Callback = int (*)(KContextualHelpButton*, int, int, void**);
    using KContextualHelpButton_SizeHint_Callback = QSize* (*)(const KContextualHelpButton*);
    using KContextualHelpButton_MinimumSizeHint_Callback = QSize* (*)(const KContextualHelpButton*);
    using KContextualHelpButton_Event_Callback = bool (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_MousePressEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_MouseReleaseEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_PaintEvent_Callback = void (*)(KContextualHelpButton*, QPaintEvent*);
    using KContextualHelpButton_ActionEvent_Callback = void (*)(KContextualHelpButton*, QActionEvent*);
    using KContextualHelpButton_EnterEvent_Callback = void (*)(KContextualHelpButton*, QEnterEvent*);
    using KContextualHelpButton_LeaveEvent_Callback = void (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_TimerEvent_Callback = void (*)(KContextualHelpButton*, QTimerEvent*);
    using KContextualHelpButton_ChangeEvent_Callback = void (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_HitButton_Callback = bool (*)(const KContextualHelpButton*, QPoint*);
    using KContextualHelpButton_CheckStateSet_Callback = void (*)(KContextualHelpButton*);
    using KContextualHelpButton_NextCheckState_Callback = void (*)(KContextualHelpButton*);
    using KContextualHelpButton_InitStyleOption_Callback = void (*)(const KContextualHelpButton*, QStyleOptionToolButton*);
    using KContextualHelpButton_KeyPressEvent_Callback = void (*)(KContextualHelpButton*, QKeyEvent*);
    using KContextualHelpButton_KeyReleaseEvent_Callback = void (*)(KContextualHelpButton*, QKeyEvent*);
    using KContextualHelpButton_MouseMoveEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_FocusInEvent_Callback = void (*)(KContextualHelpButton*, QFocusEvent*);
    using KContextualHelpButton_FocusOutEvent_Callback = void (*)(KContextualHelpButton*, QFocusEvent*);
    using KContextualHelpButton_DevType_Callback = int (*)(const KContextualHelpButton*);
    using KContextualHelpButton_SetVisible_Callback = void (*)(KContextualHelpButton*, bool);
    using KContextualHelpButton_HeightForWidth_Callback = int (*)(const KContextualHelpButton*, int);
    using KContextualHelpButton_HasHeightForWidth_Callback = bool (*)(const KContextualHelpButton*);
    using KContextualHelpButton_PaintEngine_Callback = QPaintEngine* (*)(const KContextualHelpButton*);
    using KContextualHelpButton_MouseDoubleClickEvent_Callback = void (*)(KContextualHelpButton*, QMouseEvent*);
    using KContextualHelpButton_WheelEvent_Callback = void (*)(KContextualHelpButton*, QWheelEvent*);
    using KContextualHelpButton_MoveEvent_Callback = void (*)(KContextualHelpButton*, QMoveEvent*);
    using KContextualHelpButton_ResizeEvent_Callback = void (*)(KContextualHelpButton*, QResizeEvent*);
    using KContextualHelpButton_CloseEvent_Callback = void (*)(KContextualHelpButton*, QCloseEvent*);
    using KContextualHelpButton_ContextMenuEvent_Callback = void (*)(KContextualHelpButton*, QContextMenuEvent*);
    using KContextualHelpButton_TabletEvent_Callback = void (*)(KContextualHelpButton*, QTabletEvent*);
    using KContextualHelpButton_DragEnterEvent_Callback = void (*)(KContextualHelpButton*, QDragEnterEvent*);
    using KContextualHelpButton_DragMoveEvent_Callback = void (*)(KContextualHelpButton*, QDragMoveEvent*);
    using KContextualHelpButton_DragLeaveEvent_Callback = void (*)(KContextualHelpButton*, QDragLeaveEvent*);
    using KContextualHelpButton_DropEvent_Callback = void (*)(KContextualHelpButton*, QDropEvent*);
    using KContextualHelpButton_ShowEvent_Callback = void (*)(KContextualHelpButton*, QShowEvent*);
    using KContextualHelpButton_HideEvent_Callback = void (*)(KContextualHelpButton*, QHideEvent*);
    using KContextualHelpButton_NativeEvent_Callback = bool (*)(KContextualHelpButton*, libqt_string, void*, intptr_t*);
    using KContextualHelpButton_Metric_Callback = int (*)(const KContextualHelpButton*, int);
    using KContextualHelpButton_InitPainter_Callback = void (*)(const KContextualHelpButton*, QPainter*);
    using KContextualHelpButton_Redirected_Callback = QPaintDevice* (*)(const KContextualHelpButton*, QPoint*);
    using KContextualHelpButton_SharedPainter_Callback = QPainter* (*)(const KContextualHelpButton*);
    using KContextualHelpButton_InputMethodEvent_Callback = void (*)(KContextualHelpButton*, QInputMethodEvent*);
    using KContextualHelpButton_InputMethodQuery_Callback = QVariant* (*)(const KContextualHelpButton*, int);
    using KContextualHelpButton_FocusNextPrevChild_Callback = bool (*)(KContextualHelpButton*, bool);
    using KContextualHelpButton_EventFilter_Callback = bool (*)(KContextualHelpButton*, QObject*, QEvent*);
    using KContextualHelpButton_ChildEvent_Callback = void (*)(KContextualHelpButton*, QChildEvent*);
    using KContextualHelpButton_CustomEvent_Callback = void (*)(KContextualHelpButton*, QEvent*);
    using KContextualHelpButton_ConnectNotify_Callback = void (*)(KContextualHelpButton*, QMetaMethod*);
    using KContextualHelpButton_DisconnectNotify_Callback = void (*)(KContextualHelpButton*, QMetaMethod*);
    using KContextualHelpButton::create;
    using KContextualHelpButton::destroy;
    using KContextualHelpButton::focusNextChild;
    using KContextualHelpButton::focusPreviousChild;
    using KContextualHelpButton::getDecodedMetricF;
    using KContextualHelpButton::isSignalConnected;
    using KContextualHelpButton::receivers;
    using KContextualHelpButton::sender;
    using KContextualHelpButton::senderSignalIndex;
    using KContextualHelpButton::updateMicroFocus;

    // Instance callback storage
    KContextualHelpButton_MetaObject_Callback kcontextualhelpbutton_metaobject_callback = nullptr;
    KContextualHelpButton_Metacast_Callback kcontextualhelpbutton_metacast_callback = nullptr;
    KContextualHelpButton_Metacall_Callback kcontextualhelpbutton_metacall_callback = nullptr;
    KContextualHelpButton_SizeHint_Callback kcontextualhelpbutton_sizehint_callback = nullptr;
    KContextualHelpButton_MinimumSizeHint_Callback kcontextualhelpbutton_minimumsizehint_callback = nullptr;
    KContextualHelpButton_Event_Callback kcontextualhelpbutton_event_callback = nullptr;
    KContextualHelpButton_MousePressEvent_Callback kcontextualhelpbutton_mousepressevent_callback = nullptr;
    KContextualHelpButton_MouseReleaseEvent_Callback kcontextualhelpbutton_mousereleaseevent_callback = nullptr;
    KContextualHelpButton_PaintEvent_Callback kcontextualhelpbutton_paintevent_callback = nullptr;
    KContextualHelpButton_ActionEvent_Callback kcontextualhelpbutton_actionevent_callback = nullptr;
    KContextualHelpButton_EnterEvent_Callback kcontextualhelpbutton_enterevent_callback = nullptr;
    KContextualHelpButton_LeaveEvent_Callback kcontextualhelpbutton_leaveevent_callback = nullptr;
    KContextualHelpButton_TimerEvent_Callback kcontextualhelpbutton_timerevent_callback = nullptr;
    KContextualHelpButton_ChangeEvent_Callback kcontextualhelpbutton_changeevent_callback = nullptr;
    KContextualHelpButton_HitButton_Callback kcontextualhelpbutton_hitbutton_callback = nullptr;
    KContextualHelpButton_CheckStateSet_Callback kcontextualhelpbutton_checkstateset_callback = nullptr;
    KContextualHelpButton_NextCheckState_Callback kcontextualhelpbutton_nextcheckstate_callback = nullptr;
    KContextualHelpButton_InitStyleOption_Callback kcontextualhelpbutton_initstyleoption_callback = nullptr;
    KContextualHelpButton_KeyPressEvent_Callback kcontextualhelpbutton_keypressevent_callback = nullptr;
    KContextualHelpButton_KeyReleaseEvent_Callback kcontextualhelpbutton_keyreleaseevent_callback = nullptr;
    KContextualHelpButton_MouseMoveEvent_Callback kcontextualhelpbutton_mousemoveevent_callback = nullptr;
    KContextualHelpButton_FocusInEvent_Callback kcontextualhelpbutton_focusinevent_callback = nullptr;
    KContextualHelpButton_FocusOutEvent_Callback kcontextualhelpbutton_focusoutevent_callback = nullptr;
    KContextualHelpButton_DevType_Callback kcontextualhelpbutton_devtype_callback = nullptr;
    KContextualHelpButton_SetVisible_Callback kcontextualhelpbutton_setvisible_callback = nullptr;
    KContextualHelpButton_HeightForWidth_Callback kcontextualhelpbutton_heightforwidth_callback = nullptr;
    KContextualHelpButton_HasHeightForWidth_Callback kcontextualhelpbutton_hasheightforwidth_callback = nullptr;
    KContextualHelpButton_PaintEngine_Callback kcontextualhelpbutton_paintengine_callback = nullptr;
    KContextualHelpButton_MouseDoubleClickEvent_Callback kcontextualhelpbutton_mousedoubleclickevent_callback = nullptr;
    KContextualHelpButton_WheelEvent_Callback kcontextualhelpbutton_wheelevent_callback = nullptr;
    KContextualHelpButton_MoveEvent_Callback kcontextualhelpbutton_moveevent_callback = nullptr;
    KContextualHelpButton_ResizeEvent_Callback kcontextualhelpbutton_resizeevent_callback = nullptr;
    KContextualHelpButton_CloseEvent_Callback kcontextualhelpbutton_closeevent_callback = nullptr;
    KContextualHelpButton_ContextMenuEvent_Callback kcontextualhelpbutton_contextmenuevent_callback = nullptr;
    KContextualHelpButton_TabletEvent_Callback kcontextualhelpbutton_tabletevent_callback = nullptr;
    KContextualHelpButton_DragEnterEvent_Callback kcontextualhelpbutton_dragenterevent_callback = nullptr;
    KContextualHelpButton_DragMoveEvent_Callback kcontextualhelpbutton_dragmoveevent_callback = nullptr;
    KContextualHelpButton_DragLeaveEvent_Callback kcontextualhelpbutton_dragleaveevent_callback = nullptr;
    KContextualHelpButton_DropEvent_Callback kcontextualhelpbutton_dropevent_callback = nullptr;
    KContextualHelpButton_ShowEvent_Callback kcontextualhelpbutton_showevent_callback = nullptr;
    KContextualHelpButton_HideEvent_Callback kcontextualhelpbutton_hideevent_callback = nullptr;
    KContextualHelpButton_NativeEvent_Callback kcontextualhelpbutton_nativeevent_callback = nullptr;
    KContextualHelpButton_Metric_Callback kcontextualhelpbutton_metric_callback = nullptr;
    KContextualHelpButton_InitPainter_Callback kcontextualhelpbutton_initpainter_callback = nullptr;
    KContextualHelpButton_Redirected_Callback kcontextualhelpbutton_redirected_callback = nullptr;
    KContextualHelpButton_SharedPainter_Callback kcontextualhelpbutton_sharedpainter_callback = nullptr;
    KContextualHelpButton_InputMethodEvent_Callback kcontextualhelpbutton_inputmethodevent_callback = nullptr;
    KContextualHelpButton_InputMethodQuery_Callback kcontextualhelpbutton_inputmethodquery_callback = nullptr;
    KContextualHelpButton_FocusNextPrevChild_Callback kcontextualhelpbutton_focusnextprevchild_callback = nullptr;
    KContextualHelpButton_EventFilter_Callback kcontextualhelpbutton_eventfilter_callback = nullptr;
    KContextualHelpButton_ChildEvent_Callback kcontextualhelpbutton_childevent_callback = nullptr;
    KContextualHelpButton_CustomEvent_Callback kcontextualhelpbutton_customevent_callback = nullptr;
    KContextualHelpButton_ConnectNotify_Callback kcontextualhelpbutton_connectnotify_callback = nullptr;
    KContextualHelpButton_DisconnectNotify_Callback kcontextualhelpbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KContextualHelpButton {
        using KContextualHelpButton::actionEvent;
        using KContextualHelpButton::changeEvent;
        using KContextualHelpButton::checkStateSet;
        using KContextualHelpButton::childEvent;
        using KContextualHelpButton::closeEvent;
        using KContextualHelpButton::connectNotify;
        using KContextualHelpButton::contextMenuEvent;
        using KContextualHelpButton::customEvent;
        using KContextualHelpButton::disconnectNotify;
        using KContextualHelpButton::dragEnterEvent;
        using KContextualHelpButton::dragLeaveEvent;
        using KContextualHelpButton::dragMoveEvent;
        using KContextualHelpButton::dropEvent;
        using KContextualHelpButton::enterEvent;
        using KContextualHelpButton::event;
        using KContextualHelpButton::focusInEvent;
        using KContextualHelpButton::focusNextPrevChild;
        using KContextualHelpButton::focusOutEvent;
        using KContextualHelpButton::hideEvent;
        using KContextualHelpButton::hitButton;
        using KContextualHelpButton::initPainter;
        using KContextualHelpButton::initStyleOption;
        using KContextualHelpButton::inputMethodEvent;
        using KContextualHelpButton::keyPressEvent;
        using KContextualHelpButton::keyReleaseEvent;
        using KContextualHelpButton::leaveEvent;
        using KContextualHelpButton::metric;
        using KContextualHelpButton::mouseDoubleClickEvent;
        using KContextualHelpButton::mouseMoveEvent;
        using KContextualHelpButton::mousePressEvent;
        using KContextualHelpButton::mouseReleaseEvent;
        using KContextualHelpButton::moveEvent;
        using KContextualHelpButton::nativeEvent;
        using KContextualHelpButton::nextCheckState;
        using KContextualHelpButton::paintEvent;
        using KContextualHelpButton::redirected;
        using KContextualHelpButton::resizeEvent;
        using KContextualHelpButton::sharedPainter;
        using KContextualHelpButton::showEvent;
        using KContextualHelpButton::tabletEvent;
        using KContextualHelpButton::timerEvent;
        using KContextualHelpButton::wheelEvent;
    };

    VirtualKContextualHelpButton(QWidget* parent) : KContextualHelpButton(parent) {};
    VirtualKContextualHelpButton(const QString& contextualHelpText, const QWidget* heightHintWidget, QWidget* parent) : KContextualHelpButton(contextualHelpText, heightHintWidget, parent) {};
    VirtualKContextualHelpButton() : KContextualHelpButton() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcontextualhelpbutton_metaobject_callback) {
            QMetaObject* callback_ret = kcontextualhelpbutton_metaobject_callback(this);
            return callback_ret;
        }
        return KContextualHelpButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcontextualhelpbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcontextualhelpbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KContextualHelpButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcontextualhelpbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcontextualhelpbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KContextualHelpButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcontextualhelpbutton_sizehint_callback) {
            QSize* callback_ret = kcontextualhelpbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KContextualHelpButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcontextualhelpbutton_minimumsizehint_callback) {
            QSize* callback_ret = kcontextualhelpbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KContextualHelpButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcontextualhelpbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = kcontextualhelpbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KContextualHelpButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kcontextualhelpbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            kcontextualhelpbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kcontextualhelpbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            kcontextualhelpbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcontextualhelpbutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kcontextualhelpbutton_paintevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kcontextualhelpbutton_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            kcontextualhelpbutton_actionevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kcontextualhelpbutton_enterevent_callback) {
            QEnterEvent* cbval1 = param1;
            kcontextualhelpbutton_enterevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kcontextualhelpbutton_leaveevent_callback) {
            QEvent* cbval1 = param1;
            kcontextualhelpbutton_leaveevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kcontextualhelpbutton_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            kcontextualhelpbutton_timerevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcontextualhelpbutton_changeevent_callback) {
            QEvent* cbval1 = param1;
            kcontextualhelpbutton_changeevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kcontextualhelpbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = kcontextualhelpbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return KContextualHelpButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kcontextualhelpbutton_checkstateset_callback) {
            kcontextualhelpbutton_checkstateset_callback(this);
            return;
        }
        KContextualHelpButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kcontextualhelpbutton_nextcheckstate_callback) {
            kcontextualhelpbutton_nextcheckstate_callback(this);
            return;
        }
        KContextualHelpButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (kcontextualhelpbutton_initstyleoption_callback) {
            QStyleOptionToolButton* cbval1 = option;
            kcontextualhelpbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcontextualhelpbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            kcontextualhelpbutton_keypressevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcontextualhelpbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            kcontextualhelpbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcontextualhelpbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            kcontextualhelpbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcontextualhelpbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            kcontextualhelpbutton_focusinevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcontextualhelpbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            kcontextualhelpbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcontextualhelpbutton_devtype_callback) {
            int callback_ret = kcontextualhelpbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KContextualHelpButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcontextualhelpbutton_setvisible_callback) {
            bool cbval1 = visible;
            kcontextualhelpbutton_setvisible_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcontextualhelpbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcontextualhelpbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KContextualHelpButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcontextualhelpbutton_hasheightforwidth_callback) {
            bool callback_ret = kcontextualhelpbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KContextualHelpButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcontextualhelpbutton_paintengine_callback) {
            QPaintEngine* callback_ret = kcontextualhelpbutton_paintengine_callback(this);
            return callback_ret;
        }
        return KContextualHelpButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcontextualhelpbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcontextualhelpbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcontextualhelpbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kcontextualhelpbutton_wheelevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcontextualhelpbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcontextualhelpbutton_moveevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcontextualhelpbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kcontextualhelpbutton_resizeevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcontextualhelpbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcontextualhelpbutton_closeevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcontextualhelpbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kcontextualhelpbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcontextualhelpbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcontextualhelpbutton_tabletevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcontextualhelpbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcontextualhelpbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcontextualhelpbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcontextualhelpbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcontextualhelpbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcontextualhelpbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcontextualhelpbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcontextualhelpbutton_dropevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcontextualhelpbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcontextualhelpbutton_showevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcontextualhelpbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcontextualhelpbutton_hideevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcontextualhelpbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcontextualhelpbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KContextualHelpButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcontextualhelpbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcontextualhelpbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KContextualHelpButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcontextualhelpbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcontextualhelpbutton_initpainter_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcontextualhelpbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcontextualhelpbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KContextualHelpButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcontextualhelpbutton_sharedpainter_callback) {
            QPainter* callback_ret = kcontextualhelpbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return KContextualHelpButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcontextualhelpbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcontextualhelpbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcontextualhelpbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcontextualhelpbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KContextualHelpButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcontextualhelpbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcontextualhelpbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KContextualHelpButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcontextualhelpbutton_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcontextualhelpbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KContextualHelpButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcontextualhelpbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcontextualhelpbutton_childevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcontextualhelpbutton_customevent_callback) {
            QEvent* cbval1 = event;
            kcontextualhelpbutton_customevent_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcontextualhelpbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcontextualhelpbutton_connectnotify_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcontextualhelpbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcontextualhelpbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KContextualHelpButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KContextualHelpButton_SuperEvent(KContextualHelpButton* self, QEvent* e);
    friend void KContextualHelpButton_SuperMousePressEvent(KContextualHelpButton* self, QMouseEvent* param1);
    friend void KContextualHelpButton_SuperMouseReleaseEvent(KContextualHelpButton* self, QMouseEvent* param1);
    friend void KContextualHelpButton_SuperPaintEvent(KContextualHelpButton* self, QPaintEvent* param1);
    friend void KContextualHelpButton_SuperActionEvent(KContextualHelpButton* self, QActionEvent* param1);
    friend void KContextualHelpButton_SuperEnterEvent(KContextualHelpButton* self, QEnterEvent* param1);
    friend void KContextualHelpButton_SuperLeaveEvent(KContextualHelpButton* self, QEvent* param1);
    friend void KContextualHelpButton_SuperTimerEvent(KContextualHelpButton* self, QTimerEvent* param1);
    friend void KContextualHelpButton_SuperChangeEvent(KContextualHelpButton* self, QEvent* param1);
    friend bool KContextualHelpButton_SuperHitButton(const KContextualHelpButton* self, const QPoint* pos);
    friend void KContextualHelpButton_SuperCheckStateSet(KContextualHelpButton* self);
    friend void KContextualHelpButton_SuperNextCheckState(KContextualHelpButton* self);
    friend void KContextualHelpButton_SuperInitStyleOption(const KContextualHelpButton* self, QStyleOptionToolButton* option);
    friend void KContextualHelpButton_SuperKeyPressEvent(KContextualHelpButton* self, QKeyEvent* e);
    friend void KContextualHelpButton_SuperKeyReleaseEvent(KContextualHelpButton* self, QKeyEvent* e);
    friend void KContextualHelpButton_SuperMouseMoveEvent(KContextualHelpButton* self, QMouseEvent* e);
    friend void KContextualHelpButton_SuperFocusInEvent(KContextualHelpButton* self, QFocusEvent* e);
    friend void KContextualHelpButton_SuperFocusOutEvent(KContextualHelpButton* self, QFocusEvent* e);
    friend void KContextualHelpButton_SuperMouseDoubleClickEvent(KContextualHelpButton* self, QMouseEvent* event);
    friend void KContextualHelpButton_SuperWheelEvent(KContextualHelpButton* self, QWheelEvent* event);
    friend void KContextualHelpButton_SuperMoveEvent(KContextualHelpButton* self, QMoveEvent* event);
    friend void KContextualHelpButton_SuperResizeEvent(KContextualHelpButton* self, QResizeEvent* event);
    friend void KContextualHelpButton_SuperCloseEvent(KContextualHelpButton* self, QCloseEvent* event);
    friend void KContextualHelpButton_SuperContextMenuEvent(KContextualHelpButton* self, QContextMenuEvent* event);
    friend void KContextualHelpButton_SuperTabletEvent(KContextualHelpButton* self, QTabletEvent* event);
    friend void KContextualHelpButton_SuperDragEnterEvent(KContextualHelpButton* self, QDragEnterEvent* event);
    friend void KContextualHelpButton_SuperDragMoveEvent(KContextualHelpButton* self, QDragMoveEvent* event);
    friend void KContextualHelpButton_SuperDragLeaveEvent(KContextualHelpButton* self, QDragLeaveEvent* event);
    friend void KContextualHelpButton_SuperDropEvent(KContextualHelpButton* self, QDropEvent* event);
    friend void KContextualHelpButton_SuperShowEvent(KContextualHelpButton* self, QShowEvent* event);
    friend void KContextualHelpButton_SuperHideEvent(KContextualHelpButton* self, QHideEvent* event);
    friend bool KContextualHelpButton_SuperNativeEvent(KContextualHelpButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KContextualHelpButton_SuperMetric(const KContextualHelpButton* self, int param1);
    friend void KContextualHelpButton_SuperInitPainter(const KContextualHelpButton* self, QPainter* painter);
    friend QPaintDevice* KContextualHelpButton_SuperRedirected(const KContextualHelpButton* self, QPoint* offset);
    friend QPainter* KContextualHelpButton_SuperSharedPainter(const KContextualHelpButton* self);
    friend void KContextualHelpButton_SuperInputMethodEvent(KContextualHelpButton* self, QInputMethodEvent* param1);
    friend bool KContextualHelpButton_SuperFocusNextPrevChild(KContextualHelpButton* self, bool next);
    friend void KContextualHelpButton_SuperChildEvent(KContextualHelpButton* self, QChildEvent* event);
    friend void KContextualHelpButton_SuperCustomEvent(KContextualHelpButton* self, QEvent* event);
    friend void KContextualHelpButton_SuperConnectNotify(KContextualHelpButton* self, const QMetaMethod* signal);
    friend void KContextualHelpButton_SuperDisconnectNotify(KContextualHelpButton* self, const QMetaMethod* signal);
};

#endif
