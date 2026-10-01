#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKSPLITTERCOLLAPSERBUTTON_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKSPLITTERCOLLAPSERBUTTON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSplitterCollapserButton
class VirtualKSplitterCollapserButton final : public KSplitterCollapserButton {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSplitterCollapserButton_MetaObject_Callback = QMetaObject* (*)(const KSplitterCollapserButton*);
    using KSplitterCollapserButton_Metacast_Callback = void* (*)(KSplitterCollapserButton*, const char*);
    using KSplitterCollapserButton_Metacall_Callback = int (*)(KSplitterCollapserButton*, int, int, void**);
    using KSplitterCollapserButton_SizeHint_Callback = QSize* (*)(const KSplitterCollapserButton*);
    using KSplitterCollapserButton_EventFilter_Callback = bool (*)(KSplitterCollapserButton*, QObject*, QEvent*);
    using KSplitterCollapserButton_PaintEvent_Callback = void (*)(KSplitterCollapserButton*, QPaintEvent*);
    using KSplitterCollapserButton_EnterEvent_Callback = void (*)(KSplitterCollapserButton*, QEnterEvent*);
    using KSplitterCollapserButton_LeaveEvent_Callback = void (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_ShowEvent_Callback = void (*)(KSplitterCollapserButton*, QShowEvent*);
    using KSplitterCollapserButton_MinimumSizeHint_Callback = QSize* (*)(const KSplitterCollapserButton*);
    using KSplitterCollapserButton_Event_Callback = bool (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_MousePressEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_MouseReleaseEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_ActionEvent_Callback = void (*)(KSplitterCollapserButton*, QActionEvent*);
    using KSplitterCollapserButton_TimerEvent_Callback = void (*)(KSplitterCollapserButton*, QTimerEvent*);
    using KSplitterCollapserButton_ChangeEvent_Callback = void (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_HitButton_Callback = bool (*)(const KSplitterCollapserButton*, QPoint*);
    using KSplitterCollapserButton_CheckStateSet_Callback = void (*)(KSplitterCollapserButton*);
    using KSplitterCollapserButton_NextCheckState_Callback = void (*)(KSplitterCollapserButton*);
    using KSplitterCollapserButton_InitStyleOption_Callback = void (*)(const KSplitterCollapserButton*, QStyleOptionToolButton*);
    using KSplitterCollapserButton_KeyPressEvent_Callback = void (*)(KSplitterCollapserButton*, QKeyEvent*);
    using KSplitterCollapserButton_KeyReleaseEvent_Callback = void (*)(KSplitterCollapserButton*, QKeyEvent*);
    using KSplitterCollapserButton_MouseMoveEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_FocusInEvent_Callback = void (*)(KSplitterCollapserButton*, QFocusEvent*);
    using KSplitterCollapserButton_FocusOutEvent_Callback = void (*)(KSplitterCollapserButton*, QFocusEvent*);
    using KSplitterCollapserButton_DevType_Callback = int (*)(const KSplitterCollapserButton*);
    using KSplitterCollapserButton_SetVisible_Callback = void (*)(KSplitterCollapserButton*, bool);
    using KSplitterCollapserButton_HeightForWidth_Callback = int (*)(const KSplitterCollapserButton*, int);
    using KSplitterCollapserButton_HasHeightForWidth_Callback = bool (*)(const KSplitterCollapserButton*);
    using KSplitterCollapserButton_PaintEngine_Callback = QPaintEngine* (*)(const KSplitterCollapserButton*);
    using KSplitterCollapserButton_MouseDoubleClickEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_WheelEvent_Callback = void (*)(KSplitterCollapserButton*, QWheelEvent*);
    using KSplitterCollapserButton_MoveEvent_Callback = void (*)(KSplitterCollapserButton*, QMoveEvent*);
    using KSplitterCollapserButton_ResizeEvent_Callback = void (*)(KSplitterCollapserButton*, QResizeEvent*);
    using KSplitterCollapserButton_CloseEvent_Callback = void (*)(KSplitterCollapserButton*, QCloseEvent*);
    using KSplitterCollapserButton_ContextMenuEvent_Callback = void (*)(KSplitterCollapserButton*, QContextMenuEvent*);
    using KSplitterCollapserButton_TabletEvent_Callback = void (*)(KSplitterCollapserButton*, QTabletEvent*);
    using KSplitterCollapserButton_DragEnterEvent_Callback = void (*)(KSplitterCollapserButton*, QDragEnterEvent*);
    using KSplitterCollapserButton_DragMoveEvent_Callback = void (*)(KSplitterCollapserButton*, QDragMoveEvent*);
    using KSplitterCollapserButton_DragLeaveEvent_Callback = void (*)(KSplitterCollapserButton*, QDragLeaveEvent*);
    using KSplitterCollapserButton_DropEvent_Callback = void (*)(KSplitterCollapserButton*, QDropEvent*);
    using KSplitterCollapserButton_HideEvent_Callback = void (*)(KSplitterCollapserButton*, QHideEvent*);
    using KSplitterCollapserButton_NativeEvent_Callback = bool (*)(KSplitterCollapserButton*, libqt_string, void*, intptr_t*);
    using KSplitterCollapserButton_Metric_Callback = int (*)(const KSplitterCollapserButton*, int);
    using KSplitterCollapserButton_InitPainter_Callback = void (*)(const KSplitterCollapserButton*, QPainter*);
    using KSplitterCollapserButton_Redirected_Callback = QPaintDevice* (*)(const KSplitterCollapserButton*, QPoint*);
    using KSplitterCollapserButton_SharedPainter_Callback = QPainter* (*)(const KSplitterCollapserButton*);
    using KSplitterCollapserButton_InputMethodEvent_Callback = void (*)(KSplitterCollapserButton*, QInputMethodEvent*);
    using KSplitterCollapserButton_InputMethodQuery_Callback = QVariant* (*)(const KSplitterCollapserButton*, int);
    using KSplitterCollapserButton_FocusNextPrevChild_Callback = bool (*)(KSplitterCollapserButton*, bool);
    using KSplitterCollapserButton_ChildEvent_Callback = void (*)(KSplitterCollapserButton*, QChildEvent*);
    using KSplitterCollapserButton_CustomEvent_Callback = void (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_ConnectNotify_Callback = void (*)(KSplitterCollapserButton*, QMetaMethod*);
    using KSplitterCollapserButton_DisconnectNotify_Callback = void (*)(KSplitterCollapserButton*, QMetaMethod*);
    using KSplitterCollapserButton::create;
    using KSplitterCollapserButton::destroy;
    using KSplitterCollapserButton::focusNextChild;
    using KSplitterCollapserButton::focusPreviousChild;
    using KSplitterCollapserButton::getDecodedMetricF;
    using KSplitterCollapserButton::isSignalConnected;
    using KSplitterCollapserButton::receivers;
    using KSplitterCollapserButton::sender;
    using KSplitterCollapserButton::senderSignalIndex;
    using KSplitterCollapserButton::updateMicroFocus;

    // Instance callback storage
    KSplitterCollapserButton_MetaObject_Callback ksplittercollapserbutton_metaobject_callback = nullptr;
    KSplitterCollapserButton_Metacast_Callback ksplittercollapserbutton_metacast_callback = nullptr;
    KSplitterCollapserButton_Metacall_Callback ksplittercollapserbutton_metacall_callback = nullptr;
    KSplitterCollapserButton_SizeHint_Callback ksplittercollapserbutton_sizehint_callback = nullptr;
    KSplitterCollapserButton_EventFilter_Callback ksplittercollapserbutton_eventfilter_callback = nullptr;
    KSplitterCollapserButton_PaintEvent_Callback ksplittercollapserbutton_paintevent_callback = nullptr;
    KSplitterCollapserButton_EnterEvent_Callback ksplittercollapserbutton_enterevent_callback = nullptr;
    KSplitterCollapserButton_LeaveEvent_Callback ksplittercollapserbutton_leaveevent_callback = nullptr;
    KSplitterCollapserButton_ShowEvent_Callback ksplittercollapserbutton_showevent_callback = nullptr;
    KSplitterCollapserButton_MinimumSizeHint_Callback ksplittercollapserbutton_minimumsizehint_callback = nullptr;
    KSplitterCollapserButton_Event_Callback ksplittercollapserbutton_event_callback = nullptr;
    KSplitterCollapserButton_MousePressEvent_Callback ksplittercollapserbutton_mousepressevent_callback = nullptr;
    KSplitterCollapserButton_MouseReleaseEvent_Callback ksplittercollapserbutton_mousereleaseevent_callback = nullptr;
    KSplitterCollapserButton_ActionEvent_Callback ksplittercollapserbutton_actionevent_callback = nullptr;
    KSplitterCollapserButton_TimerEvent_Callback ksplittercollapserbutton_timerevent_callback = nullptr;
    KSplitterCollapserButton_ChangeEvent_Callback ksplittercollapserbutton_changeevent_callback = nullptr;
    KSplitterCollapserButton_HitButton_Callback ksplittercollapserbutton_hitbutton_callback = nullptr;
    KSplitterCollapserButton_CheckStateSet_Callback ksplittercollapserbutton_checkstateset_callback = nullptr;
    KSplitterCollapserButton_NextCheckState_Callback ksplittercollapserbutton_nextcheckstate_callback = nullptr;
    KSplitterCollapserButton_InitStyleOption_Callback ksplittercollapserbutton_initstyleoption_callback = nullptr;
    KSplitterCollapserButton_KeyPressEvent_Callback ksplittercollapserbutton_keypressevent_callback = nullptr;
    KSplitterCollapserButton_KeyReleaseEvent_Callback ksplittercollapserbutton_keyreleaseevent_callback = nullptr;
    KSplitterCollapserButton_MouseMoveEvent_Callback ksplittercollapserbutton_mousemoveevent_callback = nullptr;
    KSplitterCollapserButton_FocusInEvent_Callback ksplittercollapserbutton_focusinevent_callback = nullptr;
    KSplitterCollapserButton_FocusOutEvent_Callback ksplittercollapserbutton_focusoutevent_callback = nullptr;
    KSplitterCollapserButton_DevType_Callback ksplittercollapserbutton_devtype_callback = nullptr;
    KSplitterCollapserButton_SetVisible_Callback ksplittercollapserbutton_setvisible_callback = nullptr;
    KSplitterCollapserButton_HeightForWidth_Callback ksplittercollapserbutton_heightforwidth_callback = nullptr;
    KSplitterCollapserButton_HasHeightForWidth_Callback ksplittercollapserbutton_hasheightforwidth_callback = nullptr;
    KSplitterCollapserButton_PaintEngine_Callback ksplittercollapserbutton_paintengine_callback = nullptr;
    KSplitterCollapserButton_MouseDoubleClickEvent_Callback ksplittercollapserbutton_mousedoubleclickevent_callback = nullptr;
    KSplitterCollapserButton_WheelEvent_Callback ksplittercollapserbutton_wheelevent_callback = nullptr;
    KSplitterCollapserButton_MoveEvent_Callback ksplittercollapserbutton_moveevent_callback = nullptr;
    KSplitterCollapserButton_ResizeEvent_Callback ksplittercollapserbutton_resizeevent_callback = nullptr;
    KSplitterCollapserButton_CloseEvent_Callback ksplittercollapserbutton_closeevent_callback = nullptr;
    KSplitterCollapserButton_ContextMenuEvent_Callback ksplittercollapserbutton_contextmenuevent_callback = nullptr;
    KSplitterCollapserButton_TabletEvent_Callback ksplittercollapserbutton_tabletevent_callback = nullptr;
    KSplitterCollapserButton_DragEnterEvent_Callback ksplittercollapserbutton_dragenterevent_callback = nullptr;
    KSplitterCollapserButton_DragMoveEvent_Callback ksplittercollapserbutton_dragmoveevent_callback = nullptr;
    KSplitterCollapserButton_DragLeaveEvent_Callback ksplittercollapserbutton_dragleaveevent_callback = nullptr;
    KSplitterCollapserButton_DropEvent_Callback ksplittercollapserbutton_dropevent_callback = nullptr;
    KSplitterCollapserButton_HideEvent_Callback ksplittercollapserbutton_hideevent_callback = nullptr;
    KSplitterCollapserButton_NativeEvent_Callback ksplittercollapserbutton_nativeevent_callback = nullptr;
    KSplitterCollapserButton_Metric_Callback ksplittercollapserbutton_metric_callback = nullptr;
    KSplitterCollapserButton_InitPainter_Callback ksplittercollapserbutton_initpainter_callback = nullptr;
    KSplitterCollapserButton_Redirected_Callback ksplittercollapserbutton_redirected_callback = nullptr;
    KSplitterCollapserButton_SharedPainter_Callback ksplittercollapserbutton_sharedpainter_callback = nullptr;
    KSplitterCollapserButton_InputMethodEvent_Callback ksplittercollapserbutton_inputmethodevent_callback = nullptr;
    KSplitterCollapserButton_InputMethodQuery_Callback ksplittercollapserbutton_inputmethodquery_callback = nullptr;
    KSplitterCollapserButton_FocusNextPrevChild_Callback ksplittercollapserbutton_focusnextprevchild_callback = nullptr;
    KSplitterCollapserButton_ChildEvent_Callback ksplittercollapserbutton_childevent_callback = nullptr;
    KSplitterCollapserButton_CustomEvent_Callback ksplittercollapserbutton_customevent_callback = nullptr;
    KSplitterCollapserButton_ConnectNotify_Callback ksplittercollapserbutton_connectnotify_callback = nullptr;
    KSplitterCollapserButton_DisconnectNotify_Callback ksplittercollapserbutton_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSplitterCollapserButton {
        using KSplitterCollapserButton::actionEvent;
        using KSplitterCollapserButton::changeEvent;
        using KSplitterCollapserButton::checkStateSet;
        using KSplitterCollapserButton::childEvent;
        using KSplitterCollapserButton::closeEvent;
        using KSplitterCollapserButton::connectNotify;
        using KSplitterCollapserButton::contextMenuEvent;
        using KSplitterCollapserButton::customEvent;
        using KSplitterCollapserButton::disconnectNotify;
        using KSplitterCollapserButton::dragEnterEvent;
        using KSplitterCollapserButton::dragLeaveEvent;
        using KSplitterCollapserButton::dragMoveEvent;
        using KSplitterCollapserButton::dropEvent;
        using KSplitterCollapserButton::enterEvent;
        using KSplitterCollapserButton::event;
        using KSplitterCollapserButton::eventFilter;
        using KSplitterCollapserButton::focusInEvent;
        using KSplitterCollapserButton::focusNextPrevChild;
        using KSplitterCollapserButton::focusOutEvent;
        using KSplitterCollapserButton::hideEvent;
        using KSplitterCollapserButton::hitButton;
        using KSplitterCollapserButton::initPainter;
        using KSplitterCollapserButton::initStyleOption;
        using KSplitterCollapserButton::inputMethodEvent;
        using KSplitterCollapserButton::keyPressEvent;
        using KSplitterCollapserButton::keyReleaseEvent;
        using KSplitterCollapserButton::leaveEvent;
        using KSplitterCollapserButton::metric;
        using KSplitterCollapserButton::mouseDoubleClickEvent;
        using KSplitterCollapserButton::mouseMoveEvent;
        using KSplitterCollapserButton::mousePressEvent;
        using KSplitterCollapserButton::mouseReleaseEvent;
        using KSplitterCollapserButton::moveEvent;
        using KSplitterCollapserButton::nativeEvent;
        using KSplitterCollapserButton::nextCheckState;
        using KSplitterCollapserButton::paintEvent;
        using KSplitterCollapserButton::redirected;
        using KSplitterCollapserButton::resizeEvent;
        using KSplitterCollapserButton::sharedPainter;
        using KSplitterCollapserButton::showEvent;
        using KSplitterCollapserButton::tabletEvent;
        using KSplitterCollapserButton::timerEvent;
        using KSplitterCollapserButton::wheelEvent;
    };

    VirtualKSplitterCollapserButton(QWidget* childWidget, QSplitter* splitter) : KSplitterCollapserButton(childWidget, splitter) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksplittercollapserbutton_metaobject_callback) {
            QMetaObject* callback_ret = ksplittercollapserbutton_metaobject_callback(this);
            return callback_ret;
        }
        return KSplitterCollapserButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksplittercollapserbutton_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksplittercollapserbutton_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksplittercollapserbutton_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksplittercollapserbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksplittercollapserbutton_sizehint_callback) {
            QSize* callback_ret = ksplittercollapserbutton_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSplitterCollapserButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ksplittercollapserbutton_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = ksplittercollapserbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSplitterCollapserButton::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (ksplittercollapserbutton_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            ksplittercollapserbutton_paintevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksplittercollapserbutton_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ksplittercollapserbutton_enterevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksplittercollapserbutton_leaveevent_callback) {
            QEvent* cbval1 = event;
            ksplittercollapserbutton_leaveevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ksplittercollapserbutton_showevent_callback) {
            QShowEvent* cbval1 = event;
            ksplittercollapserbutton_showevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksplittercollapserbutton_minimumsizehint_callback) {
            QSize* callback_ret = ksplittercollapserbutton_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSplitterCollapserButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (ksplittercollapserbutton_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = ksplittercollapserbutton_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (ksplittercollapserbutton_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            ksplittercollapserbutton_mousepressevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ksplittercollapserbutton_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            ksplittercollapserbutton_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (ksplittercollapserbutton_actionevent_callback) {
            QActionEvent* cbval1 = param1;
            ksplittercollapserbutton_actionevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (ksplittercollapserbutton_timerevent_callback) {
            QTimerEvent* cbval1 = param1;
            ksplittercollapserbutton_timerevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksplittercollapserbutton_changeevent_callback) {
            QEvent* cbval1 = param1;
            ksplittercollapserbutton_changeevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (ksplittercollapserbutton_hitbutton_callback) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);
            bool callback_ret = ksplittercollapserbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (ksplittercollapserbutton_checkstateset_callback) {
            ksplittercollapserbutton_checkstateset_callback(this);
            return;
        }
        KSplitterCollapserButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (ksplittercollapserbutton_nextcheckstate_callback) {
            ksplittercollapserbutton_nextcheckstate_callback(this);
            return;
        }
        KSplitterCollapserButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (ksplittercollapserbutton_initstyleoption_callback) {
            QStyleOptionToolButton* cbval1 = option;
            ksplittercollapserbutton_initstyleoption_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (ksplittercollapserbutton_keypressevent_callback) {
            QKeyEvent* cbval1 = e;
            ksplittercollapserbutton_keypressevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (ksplittercollapserbutton_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = e;
            ksplittercollapserbutton_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (ksplittercollapserbutton_mousemoveevent_callback) {
            QMouseEvent* cbval1 = e;
            ksplittercollapserbutton_mousemoveevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (ksplittercollapserbutton_focusinevent_callback) {
            QFocusEvent* cbval1 = e;
            ksplittercollapserbutton_focusinevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (ksplittercollapserbutton_focusoutevent_callback) {
            QFocusEvent* cbval1 = e;
            ksplittercollapserbutton_focusoutevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksplittercollapserbutton_devtype_callback) {
            int callback_ret = ksplittercollapserbutton_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksplittercollapserbutton_setvisible_callback) {
            bool cbval1 = visible;
            ksplittercollapserbutton_setvisible_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksplittercollapserbutton_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ksplittercollapserbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksplittercollapserbutton_hasheightforwidth_callback) {
            bool callback_ret = ksplittercollapserbutton_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KSplitterCollapserButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksplittercollapserbutton_paintengine_callback) {
            QPaintEngine* callback_ret = ksplittercollapserbutton_paintengine_callback(this);
            return callback_ret;
        }
        return KSplitterCollapserButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksplittercollapserbutton_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ksplittercollapserbutton_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksplittercollapserbutton_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ksplittercollapserbutton_wheelevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksplittercollapserbutton_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ksplittercollapserbutton_moveevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ksplittercollapserbutton_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ksplittercollapserbutton_resizeevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ksplittercollapserbutton_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ksplittercollapserbutton_closeevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ksplittercollapserbutton_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            ksplittercollapserbutton_contextmenuevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksplittercollapserbutton_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ksplittercollapserbutton_tabletevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksplittercollapserbutton_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ksplittercollapserbutton_dragenterevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksplittercollapserbutton_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ksplittercollapserbutton_dragmoveevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksplittercollapserbutton_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ksplittercollapserbutton_dragleaveevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksplittercollapserbutton_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ksplittercollapserbutton_dropevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksplittercollapserbutton_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ksplittercollapserbutton_hideevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksplittercollapserbutton_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ksplittercollapserbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KSplitterCollapserButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksplittercollapserbutton_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ksplittercollapserbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksplittercollapserbutton_initpainter_callback) {
            QPainter* cbval1 = painter;
            ksplittercollapserbutton_initpainter_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksplittercollapserbutton_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ksplittercollapserbutton_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksplittercollapserbutton_sharedpainter_callback) {
            QPainter* callback_ret = ksplittercollapserbutton_sharedpainter_callback(this);
            return callback_ret;
        }
        return KSplitterCollapserButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksplittercollapserbutton_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ksplittercollapserbutton_inputmethodevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksplittercollapserbutton_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ksplittercollapserbutton_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSplitterCollapserButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksplittercollapserbutton_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ksplittercollapserbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksplittercollapserbutton_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksplittercollapserbutton_childevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksplittercollapserbutton_customevent_callback) {
            QEvent* cbval1 = event;
            ksplittercollapserbutton_customevent_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksplittercollapserbutton_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksplittercollapserbutton_connectnotify_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksplittercollapserbutton_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksplittercollapserbutton_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSplitterCollapserButton::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KSplitterCollapserButton_SuperEventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2);
    friend void KSplitterCollapserButton_SuperPaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1);
    friend void KSplitterCollapserButton_SuperEnterEvent(KSplitterCollapserButton* self, QEnterEvent* event);
    friend void KSplitterCollapserButton_SuperLeaveEvent(KSplitterCollapserButton* self, QEvent* event);
    friend void KSplitterCollapserButton_SuperShowEvent(KSplitterCollapserButton* self, QShowEvent* event);
    friend bool KSplitterCollapserButton_SuperEvent(KSplitterCollapserButton* self, QEvent* e);
    friend void KSplitterCollapserButton_SuperMousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
    friend void KSplitterCollapserButton_SuperMouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
    friend void KSplitterCollapserButton_SuperActionEvent(KSplitterCollapserButton* self, QActionEvent* param1);
    friend void KSplitterCollapserButton_SuperTimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1);
    friend void KSplitterCollapserButton_SuperChangeEvent(KSplitterCollapserButton* self, QEvent* param1);
    friend bool KSplitterCollapserButton_SuperHitButton(const KSplitterCollapserButton* self, const QPoint* pos);
    friend void KSplitterCollapserButton_SuperCheckStateSet(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperNextCheckState(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperInitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option);
    friend void KSplitterCollapserButton_SuperKeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e);
    friend void KSplitterCollapserButton_SuperKeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e);
    friend void KSplitterCollapserButton_SuperMouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e);
    friend void KSplitterCollapserButton_SuperFocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e);
    friend void KSplitterCollapserButton_SuperFocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e);
    friend void KSplitterCollapserButton_SuperMouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event);
    friend void KSplitterCollapserButton_SuperWheelEvent(KSplitterCollapserButton* self, QWheelEvent* event);
    friend void KSplitterCollapserButton_SuperMoveEvent(KSplitterCollapserButton* self, QMoveEvent* event);
    friend void KSplitterCollapserButton_SuperResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event);
    friend void KSplitterCollapserButton_SuperCloseEvent(KSplitterCollapserButton* self, QCloseEvent* event);
    friend void KSplitterCollapserButton_SuperContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event);
    friend void KSplitterCollapserButton_SuperTabletEvent(KSplitterCollapserButton* self, QTabletEvent* event);
    friend void KSplitterCollapserButton_SuperDragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event);
    friend void KSplitterCollapserButton_SuperDragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event);
    friend void KSplitterCollapserButton_SuperDragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event);
    friend void KSplitterCollapserButton_SuperDropEvent(KSplitterCollapserButton* self, QDropEvent* event);
    friend void KSplitterCollapserButton_SuperHideEvent(KSplitterCollapserButton* self, QHideEvent* event);
    friend bool KSplitterCollapserButton_SuperNativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSplitterCollapserButton_SuperMetric(const KSplitterCollapserButton* self, int param1);
    friend void KSplitterCollapserButton_SuperInitPainter(const KSplitterCollapserButton* self, QPainter* painter);
    friend QPaintDevice* KSplitterCollapserButton_SuperRedirected(const KSplitterCollapserButton* self, QPoint* offset);
    friend QPainter* KSplitterCollapserButton_SuperSharedPainter(const KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperInputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1);
    friend bool KSplitterCollapserButton_SuperFocusNextPrevChild(KSplitterCollapserButton* self, bool next);
    friend void KSplitterCollapserButton_SuperChildEvent(KSplitterCollapserButton* self, QChildEvent* event);
    friend void KSplitterCollapserButton_SuperCustomEvent(KSplitterCollapserButton* self, QEvent* event);
    friend void KSplitterCollapserButton_SuperConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
    friend void KSplitterCollapserButton_SuperDisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
};

#endif
